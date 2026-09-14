// Lean compiler output
// Module: Lean.Meta.GeneralizeTelescope
// Imports: public import Lean.Meta.KAbstract public import Lean.Meta.Check
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_updateTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_updateTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "failed to create telescope generalizing "};
static const lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_generalizeTelescope___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_generalizeTelescope___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_generalizeTelescope___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_generalizeTelescope___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_generalizeTelescope___redArg___boxed__const__1 = (const lean_object*)&l_Lean_Meta_generalizeTelescope___redArg___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_updateTypes(lean_object* v_e_1_, lean_object* v_eNew_2_, lean_object* v_entries_3_, lean_object* v_i_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_){
_start:
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = lean_array_get_size(v_entries_3_);
v___x_11_ = lean_nat_dec_lt(v_i_4_, v___x_10_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; 
lean_dec(v_i_4_);
lean_dec_ref(v_e_1_);
v___x_12_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_12_, 0, v_entries_3_);
return v___x_12_;
}
else
{
lean_object* v_entry_13_; lean_object* v_expr_14_; lean_object* v_type_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_42_; 
v_entry_13_ = lean_array_fget(v_entries_3_, v_i_4_);
v_expr_14_ = lean_ctor_get(v_entry_13_, 0);
v_type_15_ = lean_ctor_get(v_entry_13_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v_entry_13_);
if (v_isSharedCheck_42_ == 0)
{
v___x_17_ = v_entry_13_;
v_isShared_18_ = v_isSharedCheck_42_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_type_15_);
lean_inc(v_expr_14_);
lean_dec(v_entry_13_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_42_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_box(0);
lean_inc_ref(v_e_1_);
v___x_20_ = l_Lean_Meta_kabstract(v_type_15_, v_e_1_, v___x_19_, v_a_5_, v_a_6_, v_a_7_, v_a_8_);
if (lean_obj_tag(v___x_20_) == 0)
{
lean_object* v_a_21_; uint8_t v___x_22_; 
v_a_21_ = lean_ctor_get(v___x_20_, 0);
lean_inc(v_a_21_);
lean_dec_ref_known(v___x_20_, 1);
v___x_22_ = l_Lean_Expr_hasLooseBVars(v_a_21_);
if (v___x_22_ == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; 
lean_dec(v_a_21_);
lean_del_object(v___x_17_);
lean_dec_ref(v_expr_14_);
v___x_23_ = lean_unsigned_to_nat(1u);
v___x_24_ = lean_nat_add(v_i_4_, v___x_23_);
lean_dec(v_i_4_);
v_i_4_ = v___x_24_;
goto _start;
}
else
{
lean_object* v___x_26_; lean_object* v___x_28_; 
v___x_26_ = lean_expr_instantiate1(v_a_21_, v_eNew_2_);
lean_dec(v_a_21_);
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 1, v___x_26_);
v___x_28_ = v___x_17_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v_expr_14_);
lean_ctor_set(v_reuseFailAlloc_33_, 1, v___x_26_);
v___x_28_ = v_reuseFailAlloc_33_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
lean_ctor_set_uint8(v___x_28_, sizeof(void*)*2, v___x_11_);
v___x_29_ = lean_array_fset(v_entries_3_, v_i_4_, v___x_28_);
v___x_30_ = lean_unsigned_to_nat(1u);
v___x_31_ = lean_nat_add(v_i_4_, v___x_30_);
lean_dec(v_i_4_);
v_entries_3_ = v___x_29_;
v_i_4_ = v___x_31_;
goto _start;
}
}
}
else
{
lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_41_; 
lean_del_object(v___x_17_);
lean_dec_ref(v_expr_14_);
lean_dec(v_i_4_);
lean_dec_ref(v_entries_3_);
lean_dec_ref(v_e_1_);
v_a_34_ = lean_ctor_get(v___x_20_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v___x_20_);
if (v_isSharedCheck_41_ == 0)
{
v___x_36_ = v___x_20_;
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_20_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_41_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_39_; 
if (v_isShared_37_ == 0)
{
v___x_39_ = v___x_36_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v_a_34_);
v___x_39_ = v_reuseFailAlloc_40_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
return v___x_39_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_updateTypes___boxed(lean_object* v_e_43_, lean_object* v_eNew_44_, lean_object* v_entries_45_, lean_object* v_i_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lean_Meta_GeneralizeTelescope_updateTypes(v_e_43_, v_eNew_44_, v_entries_45_, v_i_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_eNew_44_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4(lean_object* v_msgData_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v___x_59_; lean_object* v_env_60_; lean_object* v___x_61_; lean_object* v_toCold_62_; lean_object* v_mctx_63_; lean_object* v_lctx_64_; lean_object* v_options_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_59_ = lean_st_ref_get(v___y_57_);
v_env_60_ = lean_ctor_get(v___x_59_, 0);
lean_inc_ref(v_env_60_);
lean_dec(v___x_59_);
v___x_61_ = lean_st_ref_get(v___y_55_);
v_toCold_62_ = lean_ctor_get(v___y_56_, 0);
v_mctx_63_ = lean_ctor_get(v___x_61_, 0);
lean_inc_ref(v_mctx_63_);
lean_dec(v___x_61_);
v_lctx_64_ = lean_ctor_get(v___y_54_, 2);
v_options_65_ = lean_ctor_get(v_toCold_62_, 2);
lean_inc_ref(v_options_65_);
lean_inc_ref(v_lctx_64_);
v___x_66_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_66_, 0, v_env_60_);
lean_ctor_set(v___x_66_, 1, v_mctx_63_);
lean_ctor_set(v___x_66_, 2, v_lctx_64_);
lean_ctor_set(v___x_66_, 3, v_options_65_);
v___x_67_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v_msgData_53_);
v___x_68_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4___boxed(lean_object* v_msgData_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4(v_msgData_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg(lean_object* v_msg_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_ref_82_; lean_object* v___x_83_; lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_92_; 
v_ref_82_ = lean_ctor_get(v___y_79_, 2);
v___x_83_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3_spec__4(v_msg_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_);
v_a_84_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_92_ == 0)
{
v___x_86_ = v___x_83_;
v_isShared_87_ = v_isSharedCheck_92_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_83_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_92_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; lean_object* v___x_90_; 
lean_inc(v_ref_82_);
v___x_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_88_, 0, v_ref_82_);
lean_ctor_set(v___x_88_, 1, v_a_84_);
if (v_isShared_87_ == 0)
{
lean_ctor_set_tag(v___x_86_, 1);
lean_ctor_set(v___x_86_, 0, v___x_88_);
v___x_90_ = v___x_86_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg___boxed(lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg(v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0(lean_object* v_k_100_, lean_object* v_b_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v___x_107_; 
lean_inc(v___y_105_);
lean_inc_ref(v___y_104_);
lean_inc(v___y_103_);
lean_inc_ref(v___y_102_);
v___x_107_ = lean_apply_6(v_k_100_, v_b_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, lean_box(0));
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_108_, lean_object* v_b_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0(v_k_108_, v_b_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg(lean_object* v_name_116_, uint8_t v_bi_117_, lean_object* v_type_118_, lean_object* v_k_119_, uint8_t v_kind_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
lean_object* v___f_126_; lean_object* v___x_127_; 
v___f_126_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_126_, 0, v_k_119_);
v___x_127_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_116_, v_bi_117_, v_type_118_, v___f_126_, v_kind_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_);
if (lean_obj_tag(v___x_127_) == 0)
{
lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
v_a_128_ = lean_ctor_get(v___x_127_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_127_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v___x_127_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_dec(v___x_127_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
v_a_136_ = lean_ctor_get(v___x_127_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_127_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_127_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_127_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg___boxed(lean_object* v_name_144_, lean_object* v_bi_145_, lean_object* v_type_146_, lean_object* v_k_147_, lean_object* v_kind_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
uint8_t v_bi_boxed_154_; uint8_t v_kind_boxed_155_; lean_object* v_res_156_; 
v_bi_boxed_154_ = lean_unbox(v_bi_145_);
v_kind_boxed_155_ = lean_unbox(v_kind_148_);
v_res_156_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg(v_name_144_, v_bi_boxed_154_, v_type_146_, v_k_147_, v_kind_boxed_155_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg(lean_object* v_name_157_, lean_object* v_type_158_, lean_object* v_k_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_){
_start:
{
uint8_t v___x_165_; uint8_t v___x_166_; lean_object* v___x_167_; 
v___x_165_ = 0;
v___x_166_ = 0;
v___x_167_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg(v_name_157_, v___x_165_, v_type_158_, v_k_159_, v___x_166_, v___y_160_, v___y_161_, v___y_162_, v___y_163_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg___boxed(lean_object* v_name_168_, lean_object* v_type_169_, lean_object* v_k_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg(v_name_168_, v_type_169_, v_k_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__2(lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
if (lean_obj_tag(v_a_177_) == 0)
{
lean_object* v___x_179_; 
v___x_179_ = l_List_reverse___redArg(v_a_178_);
return v___x_179_;
}
else
{
lean_object* v_head_180_; lean_object* v_tail_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_190_; 
v_head_180_ = lean_ctor_get(v_a_177_, 0);
v_tail_181_ = lean_ctor_get(v_a_177_, 1);
v_isSharedCheck_190_ = !lean_is_exclusive(v_a_177_);
if (v_isSharedCheck_190_ == 0)
{
v___x_183_ = v_a_177_;
v_isShared_184_ = v_isSharedCheck_190_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_tail_181_);
lean_inc(v_head_180_);
lean_dec(v_a_177_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_190_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; lean_object* v___x_187_; 
v___x_185_ = l_Lean_MessageData_ofExpr(v_head_180_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 1, v_a_178_);
lean_ctor_set(v___x_183_, 0, v___x_185_);
v___x_187_ = v___x_183_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_185_);
lean_ctor_set(v_reuseFailAlloc_189_, 1, v_a_178_);
v___x_187_ = v_reuseFailAlloc_189_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
v_a_177_ = v_tail_181_;
v_a_178_ = v___x_187_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1(size_t v_sz_191_, size_t v_i_192_, lean_object* v_bs_193_){
_start:
{
uint8_t v___x_194_; 
v___x_194_ = lean_usize_dec_lt(v_i_192_, v_sz_191_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
v___x_195_ = l_unsafeCast___redArg(v_bs_193_);
lean_dec_ref(v_bs_193_);
return v___x_195_;
}
else
{
lean_object* v_v_196_; lean_object* v___x_197_; lean_object* v_expr_198_; lean_object* v___x_199_; lean_object* v_bs_x27_200_; size_t v___x_201_; size_t v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v_v_196_ = lean_array_uget_borrowed(v_bs_193_, v_i_192_);
v___x_197_ = l_unsafeCast___redArg(v_v_196_);
v_expr_198_ = lean_ctor_get(v___x_197_, 0);
lean_inc_ref(v_expr_198_);
lean_dec(v___x_197_);
v___x_199_ = lean_unsigned_to_nat(0u);
v_bs_x27_200_ = lean_array_uset(v_bs_193_, v_i_192_, v___x_199_);
v___x_201_ = ((size_t)1ULL);
v___x_202_ = lean_usize_add(v_i_192_, v___x_201_);
v___x_203_ = l_unsafeCast___redArg(v_expr_198_);
lean_dec_ref(v_expr_198_);
v___x_204_ = lean_array_uset(v_bs_x27_200_, v_i_192_, v___x_203_);
v_i_192_ = v___x_202_;
v_bs_193_ = v___x_204_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1___boxed(lean_object* v_sz_206_, lean_object* v_i_207_, lean_object* v_bs_208_){
_start:
{
size_t v_sz_boxed_209_; size_t v_i_boxed_210_; lean_object* v_res_211_; 
v_sz_boxed_209_ = lean_unbox_usize(v_sz_206_);
lean_dec(v_sz_206_);
v_i_boxed_210_ = lean_unbox_usize(v_i_207_);
lean_dec(v_i_207_);
v_res_211_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1(v_sz_boxed_209_, v_i_boxed_210_, v_bs_208_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0___boxed(lean_object* v_i_212_, lean_object* v_e_213_, lean_object* v_entries_214_, lean_object* v_fvars_215_, lean_object* v_k_216_, lean_object* v_x_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0(v_i_212_, v_e_213_, v_entries_214_, v_fvars_215_, v_k_216_, v_x_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
lean_dec(v_i_212_);
return v_res_223_;
}
}
static lean_object* _init_l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = ((lean_object*)(l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__2));
v___x_229_ = l_Lean_stringToMessageData(v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(lean_object* v_k_230_, lean_object* v_entries_231_, lean_object* v_i_232_, lean_object* v_fvars_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v_baseUserName_240_; lean_object* v_e_241_; lean_object* v_type_242_; lean_object* v___y_243_; lean_object* v___y_244_; lean_object* v___y_245_; lean_object* v___y_246_; lean_object* v___y_260_; lean_object* v___y_261_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_267_ = lean_array_get_size(v_entries_231_);
v___x_268_ = lean_nat_dec_lt(v_i_232_, v___x_267_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
lean_dec(v_i_232_);
lean_dec_ref(v_entries_231_);
lean_inc(v_a_237_);
lean_inc_ref(v_a_236_);
lean_inc(v_a_235_);
lean_inc_ref(v_a_234_);
v___x_269_ = lean_apply_6(v_k_230_, v_fvars_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_, lean_box(0));
return v___x_269_;
}
else
{
lean_object* v___x_270_; lean_object* v_expr_271_; lean_object* v_type_272_; uint8_t v_modified_273_; lean_object* v___y_275_; lean_object* v___y_276_; lean_object* v___y_277_; lean_object* v___y_278_; 
v___x_270_ = lean_array_fget_borrowed(v_entries_231_, v_i_232_);
v_expr_271_ = lean_ctor_get(v___x_270_, 0);
v_type_272_ = lean_ctor_get(v___x_270_, 1);
v_modified_273_ = lean_ctor_get_uint8(v___x_270_, sizeof(void*)*2);
if (lean_obj_tag(v_expr_271_) == 1)
{
if (v_modified_273_ == 0)
{
lean_object* v_fvarId_310_; lean_object* v___x_311_; 
v_fvarId_310_ = lean_ctor_get(v_expr_271_, 0);
lean_inc(v_fvarId_310_);
v___x_311_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_310_, v_a_234_, v_a_236_, v_a_237_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_311_, 1);
if (lean_obj_tag(v_a_312_) == 0)
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
lean_dec_ref_known(v_a_312_, 4);
v___x_313_ = lean_unsigned_to_nat(1u);
v___x_314_ = lean_nat_add(v_i_232_, v___x_313_);
lean_dec(v_i_232_);
lean_inc_ref(v_expr_271_);
v___x_315_ = lean_array_push(v_fvars_233_, v_expr_271_);
v_i_232_ = v___x_314_;
v_fvars_233_ = v___x_315_;
goto _start;
}
else
{
lean_object* v___x_317_; 
v___x_317_ = l_Lean_LocalDecl_userName(v_a_312_);
lean_dec_ref_known(v_a_312_, 5);
lean_inc_ref(v_type_272_);
lean_inc_ref(v_expr_271_);
v_baseUserName_240_ = v___x_317_;
v_e_241_ = v_expr_271_;
v_type_242_ = v_type_272_;
v___y_243_ = v_a_234_;
v___y_244_ = v_a_235_;
v___y_245_ = v_a_236_;
v___y_246_ = v_a_237_;
goto v___jp_239_;
}
}
else
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
lean_dec_ref(v_fvars_233_);
lean_dec(v_i_232_);
lean_dec_ref(v_entries_231_);
lean_dec_ref(v_k_230_);
v_a_318_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___x_311_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_311_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
else
{
v___y_275_ = v_a_234_;
v___y_276_ = v_a_235_;
v___y_277_ = v_a_236_;
v___y_278_ = v_a_237_;
goto v___jp_274_;
}
}
else
{
v___y_275_ = v_a_234_;
v___y_276_ = v_a_235_;
v___y_277_ = v_a_236_;
v___y_278_ = v_a_237_;
goto v___jp_274_;
}
v___jp_274_:
{
if (v_modified_273_ == 0)
{
lean_inc_ref(v_expr_271_);
lean_inc_ref(v_type_272_);
v___y_260_ = v_type_272_;
v___y_261_ = v_expr_271_;
v___y_262_ = v___y_275_;
v___y_263_ = v___y_276_;
v___y_264_ = v___y_277_;
v___y_265_ = v___y_278_;
goto v___jp_259_;
}
else
{
lean_object* v___x_279_; 
lean_inc_ref(v_type_272_);
v___x_279_ = l_Lean_Meta_isTypeCorrect(v_type_272_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v_a_280_; uint8_t v___x_281_; 
v_a_280_ = lean_ctor_get(v___x_279_, 0);
lean_inc(v_a_280_);
lean_dec_ref_known(v___x_279_, 1);
v___x_281_ = lean_unbox(v_a_280_);
lean_dec(v_a_280_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; size_t v_sz_283_; size_t v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_282_ = lean_obj_once(&l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3, &l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3_once, _init_l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__3);
v_sz_283_ = lean_array_size(v_entries_231_);
v___x_284_ = ((size_t)0ULL);
v___x_285_ = l_unsafeCast___redArg(v_entries_231_);
v___x_286_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__1(v_sz_283_, v___x_284_, v___x_285_);
v___x_287_ = l_unsafeCast___redArg(v___x_286_);
lean_dec_ref(v___x_286_);
v___x_288_ = lean_array_to_list(v___x_287_);
v___x_289_ = lean_box(0);
v___x_290_ = l_List_mapTR_loop___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__2(v___x_288_, v___x_289_);
v___x_291_ = l_Lean_MessageData_ofList(v___x_290_);
v___x_292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_282_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg(v___x_292_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_dec_ref_known(v___x_293_, 1);
lean_inc_ref(v_expr_271_);
lean_inc_ref(v_type_272_);
v___y_260_ = v_type_272_;
v___y_261_ = v_expr_271_;
v___y_262_ = v___y_275_;
v___y_263_ = v___y_276_;
v___y_264_ = v___y_277_;
v___y_265_ = v___y_278_;
goto v___jp_259_;
}
else
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_301_; 
lean_dec_ref(v_fvars_233_);
lean_dec(v_i_232_);
lean_dec_ref(v_entries_231_);
lean_dec_ref(v_k_230_);
v_a_294_ = lean_ctor_get(v___x_293_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_301_ == 0)
{
v___x_296_ = v___x_293_;
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_293_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_299_; 
if (v_isShared_297_ == 0)
{
v___x_299_ = v___x_296_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_294_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
else
{
lean_inc_ref(v_expr_271_);
lean_inc_ref(v_type_272_);
v___y_260_ = v_type_272_;
v___y_261_ = v_expr_271_;
v___y_262_ = v___y_275_;
v___y_263_ = v___y_276_;
v___y_264_ = v___y_277_;
v___y_265_ = v___y_278_;
goto v___jp_259_;
}
}
else
{
lean_object* v_a_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_309_; 
lean_dec_ref(v_fvars_233_);
lean_dec(v_i_232_);
lean_dec_ref(v_entries_231_);
lean_dec_ref(v_k_230_);
v_a_302_ = lean_ctor_get(v___x_279_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_309_ == 0)
{
v___x_304_ = v___x_279_;
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_a_302_);
lean_dec(v___x_279_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_307_; 
if (v_isShared_305_ == 0)
{
v___x_307_ = v___x_304_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_a_302_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
}
}
v___jp_239_:
{
lean_object* v___f_247_; lean_object* v___x_248_; 
v___f_247_ = lean_alloc_closure((void*)(l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_247_, 0, v_i_232_);
lean_closure_set(v___f_247_, 1, v_e_241_);
lean_closure_set(v___f_247_, 2, v_entries_231_);
lean_closure_set(v___f_247_, 3, v_fvars_233_);
lean_closure_set(v___f_247_, 4, v_k_230_);
v___x_248_ = l_Lean_Core_mkFreshUserName(v_baseUserName_240_, v___y_245_, v___y_246_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_250_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
lean_inc(v_a_249_);
lean_dec_ref_known(v___x_248_, 1);
v___x_250_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg(v_a_249_, v_type_242_, v___f_247_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
return v___x_250_;
}
else
{
lean_object* v_a_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_258_; 
lean_dec_ref(v___f_247_);
lean_dec_ref(v_type_242_);
v_a_251_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_258_ == 0)
{
v___x_253_ = v___x_248_;
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_a_251_);
lean_dec(v___x_248_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_256_; 
if (v_isShared_254_ == 0)
{
v___x_256_ = v___x_253_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_a_251_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
}
}
v___jp_259_:
{
lean_object* v___x_266_; 
v___x_266_ = ((lean_object*)(l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___closed__1));
v_baseUserName_240_ = v___x_266_;
v_e_241_ = v___y_261_;
v_type_242_ = v___y_260_;
v___y_243_ = v___y_262_;
v___y_244_ = v___y_263_;
v___y_245_ = v___y_264_;
v___y_246_ = v___y_265_;
goto v___jp_239_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___lam__0(lean_object* v_i_326_, lean_object* v_e_327_, lean_object* v_entries_328_, lean_object* v_fvars_329_, lean_object* v_k_330_, lean_object* v_x_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = lean_unsigned_to_nat(1u);
v___x_338_ = lean_nat_add(v_i_326_, v___x_337_);
lean_inc(v___x_338_);
v___x_339_ = l_Lean_Meta_GeneralizeTelescope_updateTypes(v_e_327_, v_x_331_, v_entries_328_, v___x_338_, v___y_332_, v___y_333_, v___y_334_, v___y_335_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v_a_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v_a_340_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_a_340_);
lean_dec_ref_known(v___x_339_, 1);
v___x_341_ = lean_array_push(v_fvars_329_, v_x_331_);
v___x_342_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(v_k_330_, v_a_340_, v___x_338_, v___x_341_, v___y_332_, v___y_333_, v___y_334_, v___y_335_);
return v___x_342_;
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
lean_dec(v___x_338_);
lean_dec_ref(v_x_331_);
lean_dec_ref(v_k_330_);
lean_dec_ref(v_fvars_329_);
v_a_343_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v___x_339_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_339_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg___boxed(lean_object* v_k_351_, lean_object* v_entries_352_, lean_object* v_i_353_, lean_object* v_fvars_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(v_k_351_, v_entries_352_, v_i_353_, v_fvars_354_, v_a_355_, v_a_356_, v_a_357_, v_a_358_);
lean_dec(v_a_358_);
lean_dec_ref(v_a_357_);
lean_dec(v_a_356_);
lean_dec_ref(v_a_355_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux(lean_object* v_00_u03b1_361_, lean_object* v_k_362_, lean_object* v_entries_363_, lean_object* v_i_364_, lean_object* v_fvars_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(v_k_362_, v_entries_363_, v_i_364_, v_fvars_365_, v_a_366_, v_a_367_, v_a_368_, v_a_369_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___boxed(lean_object* v_00_u03b1_372_, lean_object* v_k_373_, lean_object* v_entries_374_, lean_object* v_i_375_, lean_object* v_fvars_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux(v_00_u03b1_372_, v_k_373_, v_entries_374_, v_i_375_, v_fvars_376_, v_a_377_, v_a_378_, v_a_379_, v_a_380_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
lean_dec(v_a_378_);
lean_dec_ref(v_a_377_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0(lean_object* v_00_u03b1_383_, lean_object* v_name_384_, uint8_t v_bi_385_, lean_object* v_type_386_, lean_object* v_k_387_, uint8_t v_kind_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___redArg(v_name_384_, v_bi_385_, v_type_386_, v_k_387_, v_kind_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_395_, lean_object* v_name_396_, lean_object* v_bi_397_, lean_object* v_type_398_, lean_object* v_k_399_, lean_object* v_kind_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
uint8_t v_bi_boxed_406_; uint8_t v_kind_boxed_407_; lean_object* v_res_408_; 
v_bi_boxed_406_ = lean_unbox(v_bi_397_);
v_kind_boxed_407_ = lean_unbox(v_kind_400_);
v_res_408_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0_spec__0(v_00_u03b1_395_, v_name_396_, v_bi_boxed_406_, v_type_398_, v_k_399_, v_kind_boxed_407_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0(lean_object* v_00_u03b1_409_, lean_object* v_name_410_, lean_object* v_type_411_, lean_object* v_k_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___redArg(v_name_410_, v_type_411_, v_k_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0___boxed(lean_object* v_00_u03b1_419_, lean_object* v_name_420_, lean_object* v_type_421_, lean_object* v_k_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__0(v_00_u03b1_419_, v_name_420_, v_type_421_, v_k_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3(lean_object* v_00_u03b1_429_, lean_object* v_msg_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___redArg(v_msg_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3___boxed(lean_object* v_00_u03b1_437_, lean_object* v_msg_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lean_throwError___at___00Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux_spec__3(v_00_u03b1_437_, v_msg_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg(lean_object* v_e_445_, lean_object* v___y_446_){
_start:
{
uint8_t v___x_448_; 
v___x_448_ = l_Lean_Expr_hasMVar(v_e_445_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; 
v___x_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_449_, 0, v_e_445_);
return v___x_449_;
}
else
{
lean_object* v___x_450_; lean_object* v_mctx_451_; lean_object* v___x_452_; lean_object* v_fst_453_; lean_object* v_snd_454_; lean_object* v___x_455_; lean_object* v_cache_456_; lean_object* v_zetaDeltaFVarIds_457_; lean_object* v_postponed_458_; lean_object* v_diag_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_468_; 
v___x_450_ = lean_st_ref_get(v___y_446_);
v_mctx_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc_ref(v_mctx_451_);
lean_dec(v___x_450_);
v___x_452_ = l_Lean_instantiateMVarsCore(v_mctx_451_, v_e_445_);
v_fst_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_fst_453_);
v_snd_454_ = lean_ctor_get(v___x_452_, 1);
lean_inc(v_snd_454_);
lean_dec_ref(v___x_452_);
v___x_455_ = lean_st_ref_take(v___y_446_);
v_cache_456_ = lean_ctor_get(v___x_455_, 1);
v_zetaDeltaFVarIds_457_ = lean_ctor_get(v___x_455_, 2);
v_postponed_458_ = lean_ctor_get(v___x_455_, 3);
v_diag_459_ = lean_ctor_get(v___x_455_, 4);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_468_ == 0)
{
lean_object* v_unused_469_; 
v_unused_469_ = lean_ctor_get(v___x_455_, 0);
lean_dec(v_unused_469_);
v___x_461_ = v___x_455_;
v_isShared_462_ = v_isSharedCheck_468_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_diag_459_);
lean_inc(v_postponed_458_);
lean_inc(v_zetaDeltaFVarIds_457_);
lean_inc(v_cache_456_);
lean_dec(v___x_455_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_468_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_464_; 
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 0, v_snd_454_);
v___x_464_ = v___x_461_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_snd_454_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v_cache_456_);
lean_ctor_set(v_reuseFailAlloc_467_, 2, v_zetaDeltaFVarIds_457_);
lean_ctor_set(v_reuseFailAlloc_467_, 3, v_postponed_458_);
lean_ctor_set(v_reuseFailAlloc_467_, 4, v_diag_459_);
v___x_464_ = v_reuseFailAlloc_467_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = lean_st_ref_put(v___y_446_, v___x_464_);
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v_fst_453_);
return v___x_466_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg___boxed(lean_object* v_e_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg(v_e_470_, v___y_471_);
lean_dec(v___y_471_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0(lean_object* v_e_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg(v_e_474_, v___y_476_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___boxed(lean_object* v_e_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0(v_e_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1(size_t v_sz_488_, size_t v_i_489_, lean_object* v_bs_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
uint8_t v___x_496_; 
v___x_496_ = lean_usize_dec_lt(v_i_489_, v_sz_488_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = l_unsafeCast___redArg(v_bs_490_);
lean_dec_ref(v_bs_490_);
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
else
{
lean_object* v_v_499_; lean_object* v___x_500_; lean_object* v_bs_x27_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v_v_499_ = lean_array_uget(v_bs_490_, v_i_489_);
v___x_500_ = lean_unsigned_to_nat(0u);
v_bs_x27_501_ = lean_array_uset(v_bs_490_, v_i_489_, v___x_500_);
v___x_502_ = l_unsafeCast___redArg(v_v_499_);
lean_dec(v_v_499_);
lean_inc(v___y_494_);
lean_inc_ref(v___y_493_);
lean_inc(v___y_492_);
lean_inc_ref(v___y_491_);
lean_inc(v___x_502_);
v___x_503_ = lean_infer_type(v___x_502_, v___y_491_, v___y_492_, v___y_493_, v___y_494_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v___x_505_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_a_504_);
lean_dec_ref_known(v___x_503_, 1);
v___x_505_ = l_Lean_instantiateMVars___at___00Lean_Meta_generalizeTelescope_spec__0___redArg(v_a_504_, v___y_492_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; uint8_t v___x_507_; lean_object* v___x_508_; size_t v___x_509_; size_t v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
lean_inc(v_a_506_);
lean_dec_ref_known(v___x_505_, 1);
v___x_507_ = 0;
v___x_508_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_508_, 0, v___x_502_);
lean_ctor_set(v___x_508_, 1, v_a_506_);
lean_ctor_set_uint8(v___x_508_, sizeof(void*)*2, v___x_507_);
v___x_509_ = ((size_t)1ULL);
v___x_510_ = lean_usize_add(v_i_489_, v___x_509_);
v___x_511_ = l_unsafeCast___redArg(v___x_508_);
lean_dec_ref_known(v___x_508_, 2);
v___x_512_ = lean_array_uset(v_bs_x27_501_, v_i_489_, v___x_511_);
v_i_489_ = v___x_510_;
v_bs_490_ = v___x_512_;
goto _start;
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
lean_dec(v___x_502_);
lean_dec_ref(v_bs_x27_501_);
v_a_514_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_505_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_505_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
else
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_529_; 
lean_dec(v___x_502_);
lean_dec_ref(v_bs_x27_501_);
v_a_522_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_529_ == 0)
{
v___x_524_ = v___x_503_;
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_503_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_a_522_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1___boxed(lean_object* v_sz_530_, lean_object* v_i_531_, lean_object* v_bs_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
size_t v_sz_boxed_538_; size_t v_i_boxed_539_; lean_object* v_res_540_; 
v_sz_boxed_538_ = lean_unbox_usize(v_sz_530_);
lean_dec(v_sz_530_);
v_i_boxed_539_ = lean_unbox_usize(v_i_531_);
lean_dec(v_i_531_);
v_res_540_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1(v_sz_boxed_538_, v_i_boxed_539_, v_bs_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___redArg(lean_object* v_es_545_, lean_object* v_k_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_){
_start:
{
size_t v_sz_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_961__overap_557_; lean_object* v___x_558_; 
v_sz_552_ = lean_array_size(v_es_545_);
v___x_553_ = l_unsafeCast___redArg(v_es_545_);
v___x_554_ = lean_box_usize(v_sz_552_);
v___x_555_ = ((lean_object*)(l_Lean_Meta_generalizeTelescope___redArg___boxed__const__1));
v___x_556_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_generalizeTelescope_spec__1___boxed), 8, 3);
lean_closure_set(v___x_556_, 0, v___x_554_);
lean_closure_set(v___x_556_, 1, v___x_555_);
lean_closure_set(v___x_556_, 2, v___x_553_);
v___x_961__overap_557_ = l_unsafeCast___redArg(v___x_556_);
lean_dec_ref(v___x_556_);
lean_inc(v_a_550_);
lean_inc_ref(v_a_549_);
lean_inc(v_a_548_);
lean_inc_ref(v_a_547_);
v___x_558_ = lean_apply_5(v___x_961__overap_557_, v_a_547_, v_a_548_, v_a_549_, v_a_550_, lean_box(0));
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_a_559_);
lean_dec_ref_known(v___x_558_, 1);
v___x_560_ = lean_unsigned_to_nat(0u);
v___x_561_ = ((lean_object*)(l_Lean_Meta_generalizeTelescope___redArg___closed__0));
v___x_562_ = l_Lean_Meta_GeneralizeTelescope_generalizeTelescopeAux___redArg(v_k_546_, v_a_559_, v___x_560_, v___x_561_, v_a_547_, v_a_548_, v_a_549_, v_a_550_);
return v___x_562_;
}
else
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
lean_dec_ref(v_k_546_);
v_a_563_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_558_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_558_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___redArg___boxed(lean_object* v_es_571_, lean_object* v_k_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lean_Meta_generalizeTelescope___redArg(v_es_571_, v_k_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
lean_dec(v_a_576_);
lean_dec_ref(v_a_575_);
lean_dec(v_a_574_);
lean_dec_ref(v_a_573_);
lean_dec_ref(v_es_571_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope(lean_object* v_00_u03b1_579_, lean_object* v_es_580_, lean_object* v_k_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Meta_generalizeTelescope___redArg(v_es_580_, v_k_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTelescope___boxed(lean_object* v_00_u03b1_588_, lean_object* v_es_589_, lean_object* v_k_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_Meta_generalizeTelescope(v_00_u03b1_588_, v_es_589_, v_k_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_);
lean_dec(v_a_594_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec_ref(v_es_589_);
return v_res_596_;
}
}
lean_object* runtime_initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_GeneralizeTelescope(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_GeneralizeTelescope(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_GeneralizeTelescope(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_GeneralizeTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_GeneralizeTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_GeneralizeTelescope(builtin);
}
#ifdef __cplusplus
}
#endif

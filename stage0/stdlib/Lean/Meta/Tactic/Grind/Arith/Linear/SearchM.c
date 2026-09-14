// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Linear.SearchM
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Linear.LinearM
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
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Linear_instInhabitedStruct_default;
extern lean_object* l_Lean_instInhabitedFVarId_default;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Linear_linearExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_mkCase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_mkCase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_box(0);
v___x_8_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__2, &l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__2_once, _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__2);
v___x_9_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_8_);
lean_ctor_set(v___x_9_, 2, v___x_7_);
lean_ctor_set(v___x_9_, 3, v___x_7_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__4(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_10_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__3, &l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__3_once, _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__3);
v___x_11_ = lean_box(0);
v___x_12_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_10_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__5(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_13_ = l_Lean_Meta_Grind_Arith_Linear_instInhabitedStruct_default;
v___x_14_ = l_Lean_instInhabitedFVarId_default;
v___x_15_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__4, &l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__4_once, _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__4);
v___x_16_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v___x_14_);
lean_ctor_set(v___x_16_, 2, v___x_13_);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__5, &l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__5_once, _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default___closed__5);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default;
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0___closed__0(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = lean_box(0);
v___x_20_ = l_unsafeCast___redArg(v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0(lean_object* v_a_21_, lean_object* v_s_22_){
_start:
{
lean_object* v_structs_23_; lean_object* v_typeIdOf_24_; lean_object* v_exprToStructId_25_; lean_object* v_exprToStructIdEntries_26_; lean_object* v_forbiddenNatModules_27_; lean_object* v_natStructs_28_; lean_object* v_natTypeIdOf_29_; lean_object* v_exprToNatStructId_30_; lean_object* v___x_31_; uint8_t v___x_32_; 
v_structs_23_ = lean_ctor_get(v_s_22_, 0);
v_typeIdOf_24_ = lean_ctor_get(v_s_22_, 1);
v_exprToStructId_25_ = lean_ctor_get(v_s_22_, 2);
v_exprToStructIdEntries_26_ = lean_ctor_get(v_s_22_, 3);
v_forbiddenNatModules_27_ = lean_ctor_get(v_s_22_, 4);
v_natStructs_28_ = lean_ctor_get(v_s_22_, 5);
v_natTypeIdOf_29_ = lean_ctor_get(v_s_22_, 6);
v_exprToNatStructId_30_ = lean_ctor_get(v_s_22_, 7);
v___x_31_ = lean_array_get_size(v_structs_23_);
v___x_32_ = lean_nat_dec_lt(v_a_21_, v___x_31_);
if (v___x_32_ == 0)
{
return v_s_22_;
}
else
{
lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_92_; 
lean_inc_ref(v_exprToNatStructId_30_);
lean_inc_ref(v_natTypeIdOf_29_);
lean_inc_ref(v_natStructs_28_);
lean_inc_ref(v_forbiddenNatModules_27_);
lean_inc_ref(v_exprToStructIdEntries_26_);
lean_inc_ref(v_exprToStructId_25_);
lean_inc_ref(v_typeIdOf_24_);
lean_inc_ref(v_structs_23_);
v_isSharedCheck_92_ = !lean_is_exclusive(v_s_22_);
if (v_isSharedCheck_92_ == 0)
{
lean_object* v_unused_93_; lean_object* v_unused_94_; lean_object* v_unused_95_; lean_object* v_unused_96_; lean_object* v_unused_97_; lean_object* v_unused_98_; lean_object* v_unused_99_; lean_object* v_unused_100_; 
v_unused_93_ = lean_ctor_get(v_s_22_, 7);
lean_dec(v_unused_93_);
v_unused_94_ = lean_ctor_get(v_s_22_, 6);
lean_dec(v_unused_94_);
v_unused_95_ = lean_ctor_get(v_s_22_, 5);
lean_dec(v_unused_95_);
v_unused_96_ = lean_ctor_get(v_s_22_, 4);
lean_dec(v_unused_96_);
v_unused_97_ = lean_ctor_get(v_s_22_, 3);
lean_dec(v_unused_97_);
v_unused_98_ = lean_ctor_get(v_s_22_, 2);
lean_dec(v_unused_98_);
v_unused_99_ = lean_ctor_get(v_s_22_, 1);
lean_dec(v_unused_99_);
v_unused_100_ = lean_ctor_get(v_s_22_, 0);
lean_dec(v_unused_100_);
v___x_34_ = v_s_22_;
v_isShared_35_ = v_isSharedCheck_92_;
goto v_resetjp_33_;
}
else
{
lean_dec(v_s_22_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_92_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v_v_36_; lean_object* v_id_37_; lean_object* v_ringId_x3f_38_; lean_object* v_type_39_; lean_object* v_u_40_; lean_object* v_intModuleInst_41_; lean_object* v_leInst_x3f_42_; lean_object* v_ltInst_x3f_43_; lean_object* v_lawfulOrderLTInst_x3f_44_; lean_object* v_isPreorderInst_x3f_45_; lean_object* v_orderedAddInst_x3f_46_; lean_object* v_isLinearInst_x3f_47_; lean_object* v_noNatDivInst_x3f_48_; lean_object* v_ringInst_x3f_49_; lean_object* v_commRingInst_x3f_50_; lean_object* v_orderedRingInst_x3f_51_; lean_object* v_fieldInst_x3f_52_; lean_object* v_charInst_x3f_53_; lean_object* v_zero_54_; lean_object* v_ofNatZero_55_; lean_object* v_one_x3f_56_; lean_object* v_leFn_x3f_57_; lean_object* v_ltFn_x3f_58_; lean_object* v_addFn_59_; lean_object* v_zsmulFn_60_; lean_object* v_nsmulFn_61_; lean_object* v_zsmulFn_x3f_62_; lean_object* v_nsmulFn_x3f_63_; lean_object* v_homomulFn_x3f_64_; lean_object* v_subFn_65_; lean_object* v_negFn_66_; lean_object* v_vars_67_; lean_object* v_varMap_68_; lean_object* v_lowers_69_; lean_object* v_uppers_70_; lean_object* v_diseqs_71_; lean_object* v_assignment_72_; lean_object* v_conflict_x3f_73_; lean_object* v_diseqSplits_74_; lean_object* v_elimEqs_75_; lean_object* v_elimStack_76_; lean_object* v_occurs_77_; lean_object* v_ignored_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_91_; 
v_v_36_ = lean_array_fget(v_structs_23_, v_a_21_);
v_id_37_ = lean_ctor_get(v_v_36_, 0);
v_ringId_x3f_38_ = lean_ctor_get(v_v_36_, 1);
v_type_39_ = lean_ctor_get(v_v_36_, 2);
v_u_40_ = lean_ctor_get(v_v_36_, 3);
v_intModuleInst_41_ = lean_ctor_get(v_v_36_, 4);
v_leInst_x3f_42_ = lean_ctor_get(v_v_36_, 5);
v_ltInst_x3f_43_ = lean_ctor_get(v_v_36_, 6);
v_lawfulOrderLTInst_x3f_44_ = lean_ctor_get(v_v_36_, 7);
v_isPreorderInst_x3f_45_ = lean_ctor_get(v_v_36_, 8);
v_orderedAddInst_x3f_46_ = lean_ctor_get(v_v_36_, 9);
v_isLinearInst_x3f_47_ = lean_ctor_get(v_v_36_, 10);
v_noNatDivInst_x3f_48_ = lean_ctor_get(v_v_36_, 11);
v_ringInst_x3f_49_ = lean_ctor_get(v_v_36_, 12);
v_commRingInst_x3f_50_ = lean_ctor_get(v_v_36_, 13);
v_orderedRingInst_x3f_51_ = lean_ctor_get(v_v_36_, 14);
v_fieldInst_x3f_52_ = lean_ctor_get(v_v_36_, 15);
v_charInst_x3f_53_ = lean_ctor_get(v_v_36_, 16);
v_zero_54_ = lean_ctor_get(v_v_36_, 17);
v_ofNatZero_55_ = lean_ctor_get(v_v_36_, 18);
v_one_x3f_56_ = lean_ctor_get(v_v_36_, 19);
v_leFn_x3f_57_ = lean_ctor_get(v_v_36_, 20);
v_ltFn_x3f_58_ = lean_ctor_get(v_v_36_, 21);
v_addFn_59_ = lean_ctor_get(v_v_36_, 22);
v_zsmulFn_60_ = lean_ctor_get(v_v_36_, 23);
v_nsmulFn_61_ = lean_ctor_get(v_v_36_, 24);
v_zsmulFn_x3f_62_ = lean_ctor_get(v_v_36_, 25);
v_nsmulFn_x3f_63_ = lean_ctor_get(v_v_36_, 26);
v_homomulFn_x3f_64_ = lean_ctor_get(v_v_36_, 27);
v_subFn_65_ = lean_ctor_get(v_v_36_, 28);
v_negFn_66_ = lean_ctor_get(v_v_36_, 29);
v_vars_67_ = lean_ctor_get(v_v_36_, 30);
v_varMap_68_ = lean_ctor_get(v_v_36_, 31);
v_lowers_69_ = lean_ctor_get(v_v_36_, 32);
v_uppers_70_ = lean_ctor_get(v_v_36_, 33);
v_diseqs_71_ = lean_ctor_get(v_v_36_, 34);
v_assignment_72_ = lean_ctor_get(v_v_36_, 35);
v_conflict_x3f_73_ = lean_ctor_get(v_v_36_, 36);
v_diseqSplits_74_ = lean_ctor_get(v_v_36_, 37);
v_elimEqs_75_ = lean_ctor_get(v_v_36_, 38);
v_elimStack_76_ = lean_ctor_get(v_v_36_, 39);
v_occurs_77_ = lean_ctor_get(v_v_36_, 40);
v_ignored_78_ = lean_ctor_get(v_v_36_, 41);
v_isSharedCheck_91_ = !lean_is_exclusive(v_v_36_);
if (v_isSharedCheck_91_ == 0)
{
v___x_80_ = v_v_36_;
v_isShared_81_ = v_isSharedCheck_91_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_ignored_78_);
lean_inc(v_occurs_77_);
lean_inc(v_elimStack_76_);
lean_inc(v_elimEqs_75_);
lean_inc(v_diseqSplits_74_);
lean_inc(v_conflict_x3f_73_);
lean_inc(v_assignment_72_);
lean_inc(v_diseqs_71_);
lean_inc(v_uppers_70_);
lean_inc(v_lowers_69_);
lean_inc(v_varMap_68_);
lean_inc(v_vars_67_);
lean_inc(v_negFn_66_);
lean_inc(v_subFn_65_);
lean_inc(v_homomulFn_x3f_64_);
lean_inc(v_nsmulFn_x3f_63_);
lean_inc(v_zsmulFn_x3f_62_);
lean_inc(v_nsmulFn_61_);
lean_inc(v_zsmulFn_60_);
lean_inc(v_addFn_59_);
lean_inc(v_ltFn_x3f_58_);
lean_inc(v_leFn_x3f_57_);
lean_inc(v_one_x3f_56_);
lean_inc(v_ofNatZero_55_);
lean_inc(v_zero_54_);
lean_inc(v_charInst_x3f_53_);
lean_inc(v_fieldInst_x3f_52_);
lean_inc(v_orderedRingInst_x3f_51_);
lean_inc(v_commRingInst_x3f_50_);
lean_inc(v_ringInst_x3f_49_);
lean_inc(v_noNatDivInst_x3f_48_);
lean_inc(v_isLinearInst_x3f_47_);
lean_inc(v_orderedAddInst_x3f_46_);
lean_inc(v_isPreorderInst_x3f_45_);
lean_inc(v_lawfulOrderLTInst_x3f_44_);
lean_inc(v_ltInst_x3f_43_);
lean_inc(v_leInst_x3f_42_);
lean_inc(v_intModuleInst_41_);
lean_inc(v_u_40_);
lean_inc(v_type_39_);
lean_inc(v_ringId_x3f_38_);
lean_inc(v_id_37_);
lean_dec(v_v_36_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_91_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_82_; lean_object* v_xs_x27_83_; lean_object* v___x_85_; 
v___x_82_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0___closed__0);
v_xs_x27_83_ = lean_array_fset(v_structs_23_, v_a_21_, v___x_82_);
if (v_isShared_81_ == 0)
{
v___x_85_ = v___x_80_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_id_37_);
lean_ctor_set(v_reuseFailAlloc_90_, 1, v_ringId_x3f_38_);
lean_ctor_set(v_reuseFailAlloc_90_, 2, v_type_39_);
lean_ctor_set(v_reuseFailAlloc_90_, 3, v_u_40_);
lean_ctor_set(v_reuseFailAlloc_90_, 4, v_intModuleInst_41_);
lean_ctor_set(v_reuseFailAlloc_90_, 5, v_leInst_x3f_42_);
lean_ctor_set(v_reuseFailAlloc_90_, 6, v_ltInst_x3f_43_);
lean_ctor_set(v_reuseFailAlloc_90_, 7, v_lawfulOrderLTInst_x3f_44_);
lean_ctor_set(v_reuseFailAlloc_90_, 8, v_isPreorderInst_x3f_45_);
lean_ctor_set(v_reuseFailAlloc_90_, 9, v_orderedAddInst_x3f_46_);
lean_ctor_set(v_reuseFailAlloc_90_, 10, v_isLinearInst_x3f_47_);
lean_ctor_set(v_reuseFailAlloc_90_, 11, v_noNatDivInst_x3f_48_);
lean_ctor_set(v_reuseFailAlloc_90_, 12, v_ringInst_x3f_49_);
lean_ctor_set(v_reuseFailAlloc_90_, 13, v_commRingInst_x3f_50_);
lean_ctor_set(v_reuseFailAlloc_90_, 14, v_orderedRingInst_x3f_51_);
lean_ctor_set(v_reuseFailAlloc_90_, 15, v_fieldInst_x3f_52_);
lean_ctor_set(v_reuseFailAlloc_90_, 16, v_charInst_x3f_53_);
lean_ctor_set(v_reuseFailAlloc_90_, 17, v_zero_54_);
lean_ctor_set(v_reuseFailAlloc_90_, 18, v_ofNatZero_55_);
lean_ctor_set(v_reuseFailAlloc_90_, 19, v_one_x3f_56_);
lean_ctor_set(v_reuseFailAlloc_90_, 20, v_leFn_x3f_57_);
lean_ctor_set(v_reuseFailAlloc_90_, 21, v_ltFn_x3f_58_);
lean_ctor_set(v_reuseFailAlloc_90_, 22, v_addFn_59_);
lean_ctor_set(v_reuseFailAlloc_90_, 23, v_zsmulFn_60_);
lean_ctor_set(v_reuseFailAlloc_90_, 24, v_nsmulFn_61_);
lean_ctor_set(v_reuseFailAlloc_90_, 25, v_zsmulFn_x3f_62_);
lean_ctor_set(v_reuseFailAlloc_90_, 26, v_nsmulFn_x3f_63_);
lean_ctor_set(v_reuseFailAlloc_90_, 27, v_homomulFn_x3f_64_);
lean_ctor_set(v_reuseFailAlloc_90_, 28, v_subFn_65_);
lean_ctor_set(v_reuseFailAlloc_90_, 29, v_negFn_66_);
lean_ctor_set(v_reuseFailAlloc_90_, 30, v_vars_67_);
lean_ctor_set(v_reuseFailAlloc_90_, 31, v_varMap_68_);
lean_ctor_set(v_reuseFailAlloc_90_, 32, v_lowers_69_);
lean_ctor_set(v_reuseFailAlloc_90_, 33, v_uppers_70_);
lean_ctor_set(v_reuseFailAlloc_90_, 34, v_diseqs_71_);
lean_ctor_set(v_reuseFailAlloc_90_, 35, v_assignment_72_);
lean_ctor_set(v_reuseFailAlloc_90_, 36, v_conflict_x3f_73_);
lean_ctor_set(v_reuseFailAlloc_90_, 37, v_diseqSplits_74_);
lean_ctor_set(v_reuseFailAlloc_90_, 38, v_elimEqs_75_);
lean_ctor_set(v_reuseFailAlloc_90_, 39, v_elimStack_76_);
lean_ctor_set(v_reuseFailAlloc_90_, 40, v_occurs_77_);
lean_ctor_set(v_reuseFailAlloc_90_, 41, v_ignored_78_);
v___x_85_ = v_reuseFailAlloc_90_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
lean_object* v___x_86_; lean_object* v___x_88_; 
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*42, v___x_32_);
v___x_86_ = lean_array_fset(v_xs_x27_83_, v_a_21_, v___x_85_);
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 0, v___x_86_);
v___x_88_ = v___x_34_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_86_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v_typeIdOf_24_);
lean_ctor_set(v_reuseFailAlloc_89_, 2, v_exprToStructId_25_);
lean_ctor_set(v_reuseFailAlloc_89_, 3, v_exprToStructIdEntries_26_);
lean_ctor_set(v_reuseFailAlloc_89_, 4, v_forbiddenNatModules_27_);
lean_ctor_set(v_reuseFailAlloc_89_, 5, v_natStructs_28_);
lean_ctor_set(v_reuseFailAlloc_89_, 6, v_natTypeIdOf_29_);
lean_ctor_set(v_reuseFailAlloc_89_, 7, v_exprToNatStructId_30_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0___boxed(lean_object* v_a_101_, lean_object* v_s_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0(v_a_101_, v_s_102_);
lean_dec(v_a_101_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0___redArg(lean_object* v___y_104_){
_start:
{
lean_object* v___x_106_; lean_object* v_ngen_107_; lean_object* v_namePrefix_108_; lean_object* v_idx_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_138_; 
v___x_106_ = lean_st_ref_get(v___y_104_);
v_ngen_107_ = lean_ctor_get(v___x_106_, 2);
lean_inc_ref(v_ngen_107_);
lean_dec(v___x_106_);
v_namePrefix_108_ = lean_ctor_get(v_ngen_107_, 0);
v_idx_109_ = lean_ctor_get(v_ngen_107_, 1);
v_isSharedCheck_138_ = !lean_is_exclusive(v_ngen_107_);
if (v_isSharedCheck_138_ == 0)
{
v___x_111_ = v_ngen_107_;
v_isShared_112_ = v_isSharedCheck_138_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_idx_109_);
lean_inc(v_namePrefix_108_);
lean_dec(v_ngen_107_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_138_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v_r_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
lean_inc(v_idx_109_);
lean_inc(v_namePrefix_108_);
v_r_113_ = l_Lean_Name_num___override(v_namePrefix_108_, v_idx_109_);
v___x_114_ = lean_unsigned_to_nat(1u);
v___x_115_ = lean_nat_add(v_idx_109_, v___x_114_);
lean_dec(v_idx_109_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 1, v___x_115_);
v___x_117_ = v___x_111_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_namePrefix_108_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v___x_115_);
v___x_117_ = v_reuseFailAlloc_137_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_118_; lean_object* v_env_119_; lean_object* v_nextMacroScope_120_; lean_object* v_auxDeclNGen_121_; lean_object* v_traceState_122_; lean_object* v_cache_123_; lean_object* v_messages_124_; lean_object* v_infoState_125_; lean_object* v_snapshotTasks_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_135_; 
v___x_118_ = lean_st_ref_take(v___y_104_);
v_env_119_ = lean_ctor_get(v___x_118_, 0);
v_nextMacroScope_120_ = lean_ctor_get(v___x_118_, 1);
v_auxDeclNGen_121_ = lean_ctor_get(v___x_118_, 3);
v_traceState_122_ = lean_ctor_get(v___x_118_, 4);
v_cache_123_ = lean_ctor_get(v___x_118_, 5);
v_messages_124_ = lean_ctor_get(v___x_118_, 6);
v_infoState_125_ = lean_ctor_get(v___x_118_, 7);
v_snapshotTasks_126_ = lean_ctor_get(v___x_118_, 8);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_135_ == 0)
{
lean_object* v_unused_136_; 
v_unused_136_ = lean_ctor_get(v___x_118_, 2);
lean_dec(v_unused_136_);
v___x_128_ = v___x_118_;
v_isShared_129_ = v_isSharedCheck_135_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_snapshotTasks_126_);
lean_inc(v_infoState_125_);
lean_inc(v_messages_124_);
lean_inc(v_cache_123_);
lean_inc(v_traceState_122_);
lean_inc(v_auxDeclNGen_121_);
lean_inc(v_nextMacroScope_120_);
lean_inc(v_env_119_);
lean_dec(v___x_118_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_135_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_131_; 
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 2, v___x_117_);
v___x_131_ = v___x_128_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_env_119_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v_nextMacroScope_120_);
lean_ctor_set(v_reuseFailAlloc_134_, 2, v___x_117_);
lean_ctor_set(v_reuseFailAlloc_134_, 3, v_auxDeclNGen_121_);
lean_ctor_set(v_reuseFailAlloc_134_, 4, v_traceState_122_);
lean_ctor_set(v_reuseFailAlloc_134_, 5, v_cache_123_);
lean_ctor_set(v_reuseFailAlloc_134_, 6, v_messages_124_);
lean_ctor_set(v_reuseFailAlloc_134_, 7, v_infoState_125_);
lean_ctor_set(v_reuseFailAlloc_134_, 8, v_snapshotTasks_126_);
v___x_131_ = v_reuseFailAlloc_134_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_st_ref_put(v___y_104_, v___x_131_);
v___x_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_133_, 0, v_r_113_);
return v___x_133_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0___redArg___boxed(lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0___redArg(v___y_139_);
lean_dec(v___y_139_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0(lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v___x_155_; lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
v___x_155_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0___redArg(v___y_153_);
v_a_156_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_155_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0___boxed(lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0(v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec(v___y_166_);
lean_dec(v___y_165_);
lean_dec(v___y_164_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_mkCase(lean_object* v_c_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_){
_start:
{
lean_object* v___f_192_; lean_object* v___x_193_; 
lean_inc(v_a_180_);
v___f_192_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_mkCase___lam__0___boxed), 2, 1);
lean_closure_set(v___f_192_, 0, v_a_180_);
v___x_193_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0(v_a_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; lean_object* v___x_195_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_a_194_);
lean_dec_ref_known(v___x_193_, 1);
v___x_195_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_);
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v_a_196_; lean_object* v___x_197_; lean_object* v_cases_198_; lean_object* v_decVars_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_228_; 
v_a_196_ = lean_ctor_get(v___x_195_, 0);
lean_inc(v_a_196_);
lean_dec_ref_known(v___x_195_, 1);
v___x_197_ = lean_st_ref_take(v_a_179_);
v_cases_198_ = lean_ctor_get(v___x_197_, 0);
v_decVars_199_ = lean_ctor_get(v___x_197_, 1);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_228_ == 0)
{
v___x_201_ = v___x_197_;
v_isShared_202_ = v_isSharedCheck_228_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_decVars_199_);
lean_inc(v_cases_198_);
lean_dec(v___x_197_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_228_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_207_; 
lean_inc_n(v_a_194_, 2);
v___x_203_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_203_, 0, v_c_178_);
lean_ctor_set(v___x_203_, 1, v_a_194_);
lean_ctor_set(v___x_203_, 2, v_a_196_);
v___x_204_ = l_Lean_PersistentArray_push___redArg(v_cases_198_, v___x_203_);
v___x_205_ = l_Lean_FVarIdSet_insert(v_decVars_199_, v_a_194_);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 1, v___x_205_);
lean_ctor_set(v___x_201_, 0, v___x_204_);
v___x_207_ = v___x_201_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_204_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v___x_205_);
v___x_207_ = v_reuseFailAlloc_227_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_208_ = lean_st_ref_put(v_a_179_, v___x_207_);
v___x_209_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_210_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_209_, v___f_192_, v_a_181_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_217_; 
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_217_ == 0)
{
lean_object* v_unused_218_; 
v_unused_218_ = lean_ctor_get(v___x_210_, 0);
lean_dec(v_unused_218_);
v___x_212_ = v___x_210_;
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
else
{
lean_dec(v___x_210_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_215_; 
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 0, v_a_194_);
v___x_215_ = v___x_212_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_a_194_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
else
{
lean_object* v_a_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_226_; 
lean_dec(v_a_194_);
v_a_219_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_226_ == 0)
{
v___x_221_ = v___x_210_;
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_a_219_);
lean_dec(v___x_210_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_226_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_224_; 
if (v_isShared_222_ == 0)
{
v___x_224_ = v___x_221_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_219_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
lean_dec(v_a_194_);
lean_dec_ref(v___f_192_);
lean_dec_ref(v_c_178_);
v_a_229_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_195_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_195_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
else
{
lean_dec_ref(v___f_192_);
lean_dec_ref(v_c_178_);
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_mkCase___boxed(lean_object* v_c_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_Meta_Grind_Arith_Linear_mkCase(v_c_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_, v_a_248_, v_a_249_);
lean_dec(v_a_249_);
lean_dec_ref(v_a_248_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_a_241_);
lean_dec(v_a_240_);
lean_dec(v_a_239_);
lean_dec(v_a_238_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0(lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0___redArg(v___y_263_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0___boxed(lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Grind_Arith_Linear_mkCase_spec__0_spec__0(v___y_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
lean_dec(v___y_269_);
lean_dec(v___y_268_);
lean_dec(v___y_267_);
lean_dec(v___y_266_);
return v_res_279_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_SearchM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default = _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase_default);
l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase = _init_l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_Linear_instInhabitedCase);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_SearchM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_SearchM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_SearchM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_SearchM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Linear_SearchM(builtin);
}
#ifdef __cplusplus
}
#endif

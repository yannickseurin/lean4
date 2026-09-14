// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.CtorIdx
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Constructions.CtorIdx import Lean.Meta.CtorIdxHInj
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_isCtorIdx_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getRootENode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addNewRawFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Meta_mkCtorIdxHInjTheoremNameFor(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
lean_object* l_Lean_executeReservedNameAction(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__0;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__1;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.Tactic.Grind.CtorIdx"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__2_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.Grind.propagateCtorIdxUp"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__3_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 162, .m_capacity = 162, .m_length = 161, .m_data = "assertion violation: aType.isAppOfArity indInfo.name (indInfo.numParams + indInfo.numIndices)\n      -- both types should be headed by the same type former\n      "};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__4_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateCtorIdxUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateCtorIdxUp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0(lean_object* v_msg_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_50038__overap_15_; lean_object* v___x_16_; 
v___x_14_ = lean_obj_once(&l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0___closed__0, &l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0___closed__0_once, _init_l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0___closed__0);
v___x_50038__overap_15_ = lean_panic_fn_borrowed(v___x_14_, v_msg_2_);
lean_inc(v___y_12_);
lean_inc_ref(v___y_11_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc(v___y_3_);
v___x_16_ = lean_apply_11(v___x_50038__overap_15_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, lean_box(0));
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0___boxed(lean_object* v_msg_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0(v_msg_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec(v___y_18_);
return v_res_29_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__0(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_box(0);
v___x_31_ = l_unsafeCast___redArg(v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__1(void){
_start:
{
lean_object* v___x_32_; lean_object* v_dummy_33_; 
v___x_32_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__0, &l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__0_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__0);
v_dummy_33_ = l_Lean_Expr_sort___override(v___x_32_);
return v_dummy_33_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__5(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_37_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__4));
v___x_38_ = lean_unsigned_to_nat(6u);
v___x_39_ = lean_unsigned_to_nat(37u);
v___x_40_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__3));
v___x_41_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__2));
v___x_42_ = l_mkPanicMessageWithDecl(v___x_41_, v___x_40_, v___x_39_, v___x_38_, v___x_37_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1(lean_object* v_e_43_, lean_object* v_x_44_, lean_object* v_x_45_, lean_object* v_x_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
if (lean_obj_tag(v_x_44_) == 5)
{
lean_object* v_fn_58_; lean_object* v_arg_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v_fn_58_ = lean_ctor_get(v_x_44_, 0);
lean_inc_ref(v_fn_58_);
v_arg_59_ = lean_ctor_get(v_x_44_, 1);
lean_inc_ref(v_arg_59_);
lean_dec_ref_known(v_x_44_, 2);
v___x_60_ = lean_array_set(v_x_45_, v_x_46_, v_arg_59_);
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_sub(v_x_46_, v___x_61_);
lean_dec(v_x_46_);
v_x_44_ = v_fn_58_;
v_x_45_ = v___x_60_;
v_x_46_ = v___x_62_;
goto _start;
}
else
{
lean_object* v___x_64_; 
lean_dec(v_x_46_);
v___x_64_ = l_Lean_Expr_constName_x3f(v_x_44_);
lean_dec_ref(v_x_44_);
if (lean_obj_tag(v___x_64_) == 1)
{
lean_object* v_val_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_358_; 
v_val_65_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_358_ == 0)
{
v___x_67_ = v___x_64_;
v_isShared_68_ = v_isSharedCheck_358_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_val_65_);
lean_dec(v___x_64_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_358_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = l_Lean_instInhabitedExpr;
v___x_70_ = l_Lean_isCtorIdx_x3f___redArg(v_val_65_, v___y_56_);
if (lean_obj_tag(v___x_70_) == 0)
{
lean_object* v_a_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_349_; 
v_a_71_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_349_ == 0)
{
v___x_73_ = v___x_70_;
v_isShared_74_ = v_isSharedCheck_349_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_a_71_);
lean_dec(v___x_70_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_349_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
if (lean_obj_tag(v_a_71_) == 1)
{
lean_object* v_val_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_344_; 
v_val_75_ = lean_ctor_get(v_a_71_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v_a_71_);
if (v_isSharedCheck_344_ == 0)
{
v___x_77_ = v_a_71_;
v_isShared_78_ = v_isSharedCheck_344_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_val_75_);
lean_dec(v_a_71_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_344_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v_toConstantVal_79_; lean_object* v_numParams_80_; lean_object* v_numIndices_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v_toConstantVal_79_ = lean_ctor_get(v_val_75_, 0);
lean_inc_ref(v_toConstantVal_79_);
v_numParams_80_ = lean_ctor_get(v_val_75_, 1);
lean_inc(v_numParams_80_);
v_numIndices_81_ = lean_ctor_get(v_val_75_, 2);
lean_inc(v_numIndices_81_);
lean_dec(v_val_75_);
v___x_82_ = lean_array_get_size(v_x_45_);
v___x_83_ = lean_nat_add(v_numParams_80_, v_numIndices_81_);
lean_dec(v_numIndices_81_);
lean_dec(v_numParams_80_);
v___x_84_ = lean_unsigned_to_nat(1u);
v___x_85_ = lean_nat_add(v___x_83_, v___x_84_);
v___x_86_ = lean_nat_dec_eq(v___x_82_, v___x_85_);
lean_dec(v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_89_; 
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
lean_dec_ref(v_x_45_);
lean_dec_ref(v_e_43_);
v___x_87_ = lean_box(0);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 0, v___x_87_);
v___x_89_ = v___x_73_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_87_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
else
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
lean_del_object(v___x_73_);
v___x_91_ = lean_nat_sub(v___x_82_, v___x_84_);
v___x_92_ = lean_array_get(v___x_69_, v_x_45_, v___x_91_);
lean_dec(v___x_91_);
lean_dec_ref(v_x_45_);
lean_inc(v___x_92_);
v___x_93_ = l_Lean_Meta_Grind_getRootENode___redArg(v___x_92_, v___y_47_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
if (lean_obj_tag(v___x_93_) == 0)
{
lean_object* v_a_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_335_; 
v_a_94_ = lean_ctor_get(v___x_93_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_93_);
if (v_isSharedCheck_335_ == 0)
{
v___x_96_ = v___x_93_;
v_isShared_97_ = v_isSharedCheck_335_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_a_94_);
lean_dec(v___x_93_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_335_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v_self_98_; uint8_t v_ctor_99_; uint8_t v_heqProofs_100_; lean_object* v___y_102_; lean_object* v___y_103_; lean_object* v___y_104_; lean_object* v___y_105_; lean_object* v___y_106_; lean_object* v___y_107_; lean_object* v___y_108_; lean_object* v___y_109_; lean_object* v___y_110_; lean_object* v___y_111_; lean_object* v___y_112_; lean_object* v___y_113_; lean_object* v___y_114_; lean_object* v___y_115_; lean_object* v___y_116_; 
v_self_98_ = lean_ctor_get(v_a_94_, 0);
lean_inc_ref(v_self_98_);
v_ctor_99_ = lean_ctor_get_uint8(v_a_94_, sizeof(void*)*12 + 2);
v_heqProofs_100_ = lean_ctor_get_uint8(v_a_94_, sizeof(void*)*12 + 4);
lean_dec(v_a_94_);
if (v_ctor_99_ == 0)
{
lean_object* v___x_158_; lean_object* v___x_160_; 
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
lean_dec_ref(v_e_43_);
v___x_158_ = lean_box(0);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 0, v___x_158_);
v___x_160_ = v___x_96_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
else
{
lean_object* v___x_162_; 
lean_del_object(v___x_96_);
lean_inc_ref(v_self_98_);
v___x_162_ = l_Lean_Meta_isConstructorApp_x3f(v_self_98_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_326_; 
v_a_163_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_326_ == 0)
{
v___x_165_ = v___x_162_;
v_isShared_166_ = v_isSharedCheck_326_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_162_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_326_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
if (lean_obj_tag(v_a_163_) == 1)
{
lean_object* v_val_167_; lean_object* v___y_169_; lean_object* v___y_170_; lean_object* v___y_171_; lean_object* v___y_172_; lean_object* v___y_173_; lean_object* v___y_174_; lean_object* v___y_175_; lean_object* v___y_176_; lean_object* v___y_177_; lean_object* v___y_178_; 
lean_del_object(v___x_165_);
v_val_167_ = lean_ctor_get(v_a_163_, 0);
lean_inc(v_val_167_);
lean_dec_ref_known(v_a_163_, 1);
if (v_heqProofs_100_ == 0)
{
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
v___y_169_ = v___y_47_;
v___y_170_ = v___y_48_;
v___y_171_ = v___y_49_;
v___y_172_ = v___y_50_;
v___y_173_ = v___y_51_;
v___y_174_ = v___y_52_;
v___y_175_ = v___y_53_;
v___y_176_ = v___y_54_;
v___y_177_ = v___y_55_;
v___y_178_ = v___y_56_;
goto v___jp_168_;
}
else
{
lean_object* v___x_228_; 
lean_inc_ref(v_self_98_);
lean_inc(v___x_92_);
v___x_228_ = l_Lean_Meta_Grind_hasSameType(v___x_92_, v_self_98_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; uint8_t v___x_230_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_a_229_);
lean_dec_ref_known(v___x_228_, 1);
v___x_230_ = lean_unbox(v_a_229_);
lean_dec(v_a_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; 
lean_dec(v_val_167_);
lean_dec_ref(v_e_43_);
v___x_231_ = l_Lean_Meta_Grind_getGeneration___redArg(v___x_92_, v___y_47_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v_a_232_; lean_object* v___x_233_; 
v_a_232_ = lean_ctor_get(v___x_231_, 0);
lean_inc(v_a_232_);
lean_dec_ref_known(v___x_231_, 1);
v___x_233_ = l_Lean_Meta_Grind_getGeneration___redArg(v_self_98_, v___y_47_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v_a_234_; lean_object* v___y_236_; uint8_t v___x_297_; 
v_a_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc(v_a_234_);
lean_dec_ref_known(v___x_233_, 1);
v___x_297_ = lean_nat_dec_le(v_a_232_, v_a_234_);
if (v___x_297_ == 0)
{
lean_dec(v_a_234_);
v___y_236_ = v_a_232_;
goto v___jp_235_;
}
else
{
lean_dec(v_a_232_);
v___y_236_ = v_a_234_;
goto v___jp_235_;
}
v___jp_235_:
{
lean_object* v___x_237_; 
lean_inc(v___y_56_);
lean_inc_ref(v___y_55_);
lean_inc(v___y_54_);
lean_inc_ref(v___y_53_);
lean_inc(v___x_92_);
v___x_237_ = lean_infer_type(v___x_92_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_239_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
lean_inc(v_a_238_);
lean_dec_ref_known(v___x_237_, 1);
v___x_239_ = l_Lean_Meta_whnfD(v_a_238_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v_a_240_; lean_object* v___x_241_; 
v_a_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_a_240_);
lean_dec_ref_known(v___x_239_, 1);
lean_inc(v___y_56_);
lean_inc_ref(v___y_55_);
lean_inc(v___y_54_);
lean_inc_ref(v___y_53_);
lean_inc_ref(v_self_98_);
v___x_241_ = lean_infer_type(v_self_98_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v_a_242_; lean_object* v___x_243_; 
v_a_242_ = lean_ctor_get(v___x_241_, 0);
lean_inc(v_a_242_);
lean_dec_ref_known(v___x_241_, 1);
v___x_243_ = l_Lean_Meta_whnfD(v_a_242_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_264_; 
v_a_244_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_264_ == 0)
{
v___x_246_ = v___x_243_;
v_isShared_247_ = v_isSharedCheck_264_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_243_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_264_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v_name_248_; uint8_t v___x_249_; 
v_name_248_ = lean_ctor_get(v_toConstantVal_79_, 0);
lean_inc(v_name_248_);
lean_dec_ref(v_toConstantVal_79_);
lean_inc(v___x_83_);
v___x_249_ = l_Lean_Expr_isAppOfArity(v_a_240_, v_name_248_, v___x_83_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; 
lean_dec(v_name_248_);
lean_del_object(v___x_246_);
lean_dec(v_a_244_);
lean_dec(v_a_240_);
lean_dec(v___y_236_);
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
v___x_250_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__5);
v___x_251_ = l_panic___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__0(v___x_250_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
return v___x_251_;
}
else
{
uint8_t v___x_252_; 
v___x_252_ = l_Lean_Expr_isAppOfArity(v_a_244_, v_name_248_, v___x_83_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_255_; 
lean_dec(v_name_248_);
lean_dec(v_a_244_);
lean_dec(v_a_240_);
lean_dec(v___y_236_);
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
v___x_253_ = lean_box(0);
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 0, v___x_253_);
v___x_255_ = v___x_246_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_253_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
else
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v_env_261_; uint8_t v___x_262_; 
lean_del_object(v___x_246_);
v___x_257_ = l_Lean_Expr_getAppFn(v_a_240_);
v___x_258_ = l_Lean_Expr_constLevels_x21(v___x_257_);
lean_dec_ref(v___x_257_);
v___x_259_ = l_Lean_Meta_mkCtorIdxHInjTheoremNameFor(v_name_248_);
v___x_260_ = lean_st_ref_get(v___y_56_);
v_env_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc_ref(v_env_261_);
lean_dec(v___x_260_);
v___x_262_ = l_Lean_Environment_containsOnBranch(v_env_261_, v___x_259_);
lean_dec_ref(v_env_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; 
lean_inc(v___x_259_);
v___x_263_ = l_Lean_executeReservedNameAction(v___x_259_, v___y_55_, v___y_56_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_dec_ref_known(v___x_263_, 1);
v___y_102_ = v___x_258_;
v___y_103_ = v_a_240_;
v___y_104_ = v_a_244_;
v___y_105_ = v___x_259_;
v___y_106_ = v___y_236_;
v___y_107_ = v___y_47_;
v___y_108_ = v___y_48_;
v___y_109_ = v___y_49_;
v___y_110_ = v___y_50_;
v___y_111_ = v___y_51_;
v___y_112_ = v___y_52_;
v___y_113_ = v___y_53_;
v___y_114_ = v___y_54_;
v___y_115_ = v___y_55_;
v___y_116_ = v___y_56_;
goto v___jp_101_;
}
else
{
lean_dec(v___x_259_);
lean_dec(v___x_258_);
lean_dec(v_a_244_);
lean_dec(v_a_240_);
lean_dec(v___y_236_);
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
return v___x_263_;
}
}
else
{
v___y_102_ = v___x_258_;
v___y_103_ = v_a_240_;
v___y_104_ = v_a_244_;
v___y_105_ = v___x_259_;
v___y_106_ = v___y_236_;
v___y_107_ = v___y_47_;
v___y_108_ = v___y_48_;
v___y_109_ = v___y_49_;
v___y_110_ = v___y_50_;
v___y_111_ = v___y_51_;
v___y_112_ = v___y_52_;
v___y_113_ = v___y_53_;
v___y_114_ = v___y_54_;
v___y_115_ = v___y_55_;
v___y_116_ = v___y_56_;
goto v___jp_101_;
}
}
}
}
}
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_272_; 
lean_dec(v_a_240_);
lean_dec(v___y_236_);
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
v_a_265_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_272_ == 0)
{
v___x_267_ = v___x_243_;
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_243_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_268_ == 0)
{
v___x_270_ = v___x_267_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_265_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
else
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
lean_dec(v_a_240_);
lean_dec(v___y_236_);
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
v_a_273_ = lean_ctor_get(v___x_241_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_241_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_241_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
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
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
lean_dec(v___y_236_);
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
v_a_281_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_239_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_239_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec(v___y_236_);
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
v_a_289_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_237_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_237_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
else
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
lean_dec(v_a_232_);
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
v_a_298_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_305_ == 0)
{
v___x_300_ = v___x_233_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_233_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_298_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
else
{
lean_object* v_a_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_313_; 
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
v_a_306_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_313_ == 0)
{
v___x_308_ = v___x_231_;
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_a_306_);
lean_dec(v___x_231_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_311_; 
if (v_isShared_309_ == 0)
{
v___x_311_ = v___x_308_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_a_306_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
}
else
{
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
v___y_169_ = v___y_47_;
v___y_170_ = v___y_48_;
v___y_171_ = v___y_49_;
v___y_172_ = v___y_50_;
v___y_173_ = v___y_51_;
v___y_174_ = v___y_52_;
v___y_175_ = v___y_53_;
v___y_176_ = v___y_54_;
v___y_177_ = v___y_55_;
v___y_178_ = v___y_56_;
goto v___jp_168_;
}
}
else
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec(v_val_167_);
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
lean_dec_ref(v_e_43_);
v_a_314_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_228_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_228_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
v___jp_168_:
{
lean_object* v_cidx_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_cidx_179_ = lean_ctor_get(v_val_167_, 2);
lean_inc(v_cidx_179_);
lean_dec(v_val_167_);
v___x_180_ = l_Lean_mkNatLit(v_cidx_179_);
v___x_181_ = l_Lean_Meta_Sym_shareCommon(v___x_180_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc_n(v_a_182_, 2);
lean_dec_ref_known(v___x_181_, 1);
v___x_183_ = lean_unsigned_to_nat(0u);
v___x_184_ = lean_box(0);
lean_inc(v___y_178_);
lean_inc_ref(v___y_177_);
lean_inc(v___y_176_);
lean_inc_ref(v___y_175_);
lean_inc(v___y_174_);
lean_inc_ref(v___y_173_);
lean_inc(v___y_172_);
lean_inc_ref(v___y_171_);
lean_inc(v___y_170_);
lean_inc(v___y_169_);
v___x_185_ = lean_grind_internalize(v_a_182_, v___x_183_, v___x_184_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_185_) == 0)
{
lean_object* v___x_186_; 
lean_dec_ref_known(v___x_185_, 1);
lean_inc(v___y_178_);
lean_inc_ref(v___y_177_);
lean_inc(v___y_176_);
lean_inc_ref(v___y_175_);
lean_inc(v___y_174_);
lean_inc_ref(v___y_173_);
lean_inc(v___y_172_);
lean_inc_ref(v___y_171_);
lean_inc(v___y_170_);
lean_inc(v___y_169_);
v___x_186_ = lean_grind_mk_eq_proof(v___x_92_, v_self_98_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_186_) == 0)
{
lean_object* v_a_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v_a_187_ = lean_ctor_get(v___x_186_, 0);
lean_inc(v_a_187_);
lean_dec_ref_known(v___x_186_, 1);
v___x_188_ = l_Lean_Expr_appFn_x21(v_e_43_);
v___x_189_ = l_Lean_Meta_mkCongrArg(v___x_188_, v_a_187_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_190_; lean_object* v___x_191_; 
v_a_190_ = lean_ctor_get(v___x_189_, 0);
lean_inc(v_a_190_);
lean_dec_ref_known(v___x_189_, 1);
lean_inc(v_a_182_);
lean_inc_ref(v_e_43_);
v___x_191_ = l_Lean_Meta_mkEq(v_e_43_, v_a_182_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; lean_object* v___x_193_; uint8_t v___x_194_; lean_object* v___x_195_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_192_);
lean_dec_ref_known(v___x_191_, 1);
v___x_193_ = l_Lean_Meta_mkExpectedPropHint(v_a_190_, v_a_192_);
v___x_194_ = 0;
v___x_195_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_43_, v_a_182_, v___x_193_, v___x_194_, v___y_169_, v___y_171_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
return v___x_195_;
}
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
lean_dec(v_a_190_);
lean_dec(v_a_182_);
lean_dec_ref(v_e_43_);
v_a_196_ = lean_ctor_get(v___x_191_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_191_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_191_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_191_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
else
{
lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_211_; 
lean_dec(v_a_182_);
lean_dec_ref(v_e_43_);
v_a_204_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_211_ == 0)
{
v___x_206_ = v___x_189_;
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_189_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_209_; 
if (v_isShared_207_ == 0)
{
v___x_209_ = v___x_206_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_a_204_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
}
else
{
lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_219_; 
lean_dec(v_a_182_);
lean_dec_ref(v_e_43_);
v_a_212_ = lean_ctor_get(v___x_186_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v___x_186_);
if (v_isSharedCheck_219_ == 0)
{
v___x_214_ = v___x_186_;
v_isShared_215_ = v_isSharedCheck_219_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v___x_186_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_219_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_217_; 
if (v_isShared_215_ == 0)
{
v___x_217_ = v___x_214_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_a_212_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
}
else
{
lean_dec(v_a_182_);
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec_ref(v_e_43_);
return v___x_185_;
}
}
else
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec_ref(v_e_43_);
v_a_220_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v___x_181_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_181_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_225_; 
if (v_isShared_223_ == 0)
{
v___x_225_ = v___x_222_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_a_220_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
else
{
lean_object* v___x_322_; lean_object* v___x_324_; 
lean_dec(v_a_163_);
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
lean_dec_ref(v_e_43_);
v___x_322_ = lean_box(0);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___x_322_);
v___x_324_ = v___x_165_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_322_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_dec_ref(v_self_98_);
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
lean_dec_ref(v_e_43_);
v_a_327_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_162_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_162_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
v___jp_101_:
{
lean_object* v___x_117_; lean_object* v_dummy_118_; lean_object* v_nargs_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v_nargs_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
lean_inc(v___y_105_);
v___x_117_ = l_Lean_mkConst(v___y_105_, v___y_102_);
v_dummy_118_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__1);
v_nargs_119_ = l_Lean_Expr_getAppNumArgs(v___y_103_);
lean_inc(v_nargs_119_);
v___x_120_ = lean_mk_array(v_nargs_119_, v_dummy_118_);
v___x_121_ = lean_nat_sub(v_nargs_119_, v___x_84_);
lean_dec(v_nargs_119_);
v___x_122_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_103_, v___x_120_, v___x_121_);
v___x_123_ = l_Lean_mkAppN(v___x_117_, v___x_122_);
lean_dec_ref(v___x_122_);
v___x_124_ = l_Lean_Expr_app___override(v___x_123_, v___x_92_);
v_nargs_125_ = l_Lean_Expr_getAppNumArgs(v___y_104_);
lean_inc(v_nargs_125_);
v___x_126_ = lean_mk_array(v_nargs_125_, v_dummy_118_);
v___x_127_ = lean_nat_sub(v_nargs_125_, v___x_84_);
lean_dec(v_nargs_125_);
v___x_128_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_104_, v___x_126_, v___x_127_);
v___x_129_ = l_Lean_mkAppN(v___x_124_, v___x_128_);
lean_dec_ref(v___x_128_);
v___x_130_ = l_Lean_Expr_app___override(v___x_129_, v_self_98_);
lean_inc(v___y_116_);
lean_inc_ref(v___y_115_);
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
lean_inc_ref(v___x_130_);
v___x_131_ = lean_infer_type(v___x_130_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_134_; 
v_a_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___x_131_, 1);
if (v_isShared_78_ == 0)
{
lean_ctor_set_tag(v___x_77_, 0);
lean_ctor_set(v___x_77_, 0, v___y_105_);
v___x_134_ = v___x_77_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___y_105_);
v___x_134_ = v_reuseFailAlloc_149_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
lean_object* v___x_136_; 
if (v_isShared_68_ == 0)
{
lean_ctor_set_tag(v___x_67_, 7);
lean_ctor_set(v___x_67_, 0, v___x_134_);
v___x_136_ = v___x_67_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_134_);
v___x_136_ = v_reuseFailAlloc_148_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_box(1);
v___x_138_ = l_Lean_Meta_Grind_addNewRawFact(v___x_130_, v_a_132_, v___y_106_, v___x_136_, v___x_137_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_146_; 
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_146_ == 0)
{
lean_object* v_unused_147_; 
v_unused_147_ = lean_ctor_get(v___x_138_, 0);
lean_dec(v_unused_147_);
v___x_140_ = v___x_138_;
v_isShared_141_ = v_isSharedCheck_146_;
goto v_resetjp_139_;
}
else
{
lean_dec(v___x_138_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_146_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_142_ = lean_box(0);
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 0, v___x_142_);
v___x_144_ = v___x_140_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v___x_142_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
else
{
return v___x_138_;
}
}
}
}
else
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_157_; 
lean_dec_ref(v___x_130_);
lean_dec(v___y_106_);
lean_dec(v___y_105_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
v_a_150_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_157_ == 0)
{
v___x_152_ = v___x_131_;
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_131_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_a_150_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
}
}
}
else
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
lean_dec(v___x_92_);
lean_dec(v___x_83_);
lean_dec_ref(v_toConstantVal_79_);
lean_del_object(v___x_77_);
lean_del_object(v___x_67_);
lean_dec_ref(v_e_43_);
v_a_336_ = lean_ctor_get(v___x_93_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_93_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_93_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_93_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
}
}
else
{
lean_object* v___x_345_; lean_object* v___x_347_; 
lean_dec(v_a_71_);
lean_del_object(v___x_67_);
lean_dec_ref(v_x_45_);
lean_dec_ref(v_e_43_);
v___x_345_ = lean_box(0);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 0, v___x_345_);
v___x_347_ = v___x_73_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_345_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
else
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_357_; 
lean_del_object(v___x_67_);
lean_dec_ref(v_x_45_);
lean_dec_ref(v_e_43_);
v_a_350_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_357_ == 0)
{
v___x_352_ = v___x_70_;
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_70_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_355_; 
if (v_isShared_353_ == 0)
{
v___x_355_ = v___x_352_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_a_350_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
}
}
else
{
lean_object* v___x_359_; lean_object* v___x_360_; 
lean_dec(v___x_64_);
lean_dec_ref(v_x_45_);
lean_dec_ref(v_e_43_);
v___x_359_ = lean_box(0);
v___x_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
return v___x_360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___boxed(lean_object* v_e_361_, lean_object* v_x_362_, lean_object* v_x_363_, lean_object* v_x_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1(v_e_361_, v_x_362_, v_x_363_, v_x_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
lean_dec(v___y_366_);
lean_dec(v___y_365_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateCtorIdxUp(lean_object* v_e_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_dummy_389_; lean_object* v_nargs_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v_dummy_389_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1___closed__1);
v_nargs_390_ = l_Lean_Expr_getAppNumArgs(v_e_377_);
lean_inc(v_nargs_390_);
v___x_391_ = lean_mk_array(v_nargs_390_, v_dummy_389_);
v___x_392_ = lean_unsigned_to_nat(1u);
v___x_393_ = lean_nat_sub(v_nargs_390_, v___x_392_);
lean_dec(v_nargs_390_);
lean_inc_ref(v_e_377_);
v___x_394_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_propagateCtorIdxUp_spec__1(v_e_377_, v_e_377_, v___x_391_, v___x_393_, v_a_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateCtorIdxUp___boxed(lean_object* v_e_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lean_Meta_Grind_propagateCtorIdxUp(v_e_395_, v_a_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_);
lean_dec(v_a_405_);
lean_dec_ref(v_a_404_);
lean_dec(v_a_403_);
lean_dec_ref(v_a_402_);
lean_dec(v_a_401_);
lean_dec_ref(v_a_400_);
lean_dec(v_a_399_);
lean_dec_ref(v_a_398_);
lean_dec(v_a_397_);
lean_dec(v_a_396_);
return v_res_407_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CtorIdxHInj(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_CtorIdx(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CtorIdxHInj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_CtorIdx(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Lean_Meta_CtorIdxHInj(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_CtorIdx(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CtorIdxHInj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_CtorIdx(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Sym.Grind
// Imports: public import Lean.Meta.Tactic.Grind.Types public import Lean.Meta.Sym.Simp.SimpM public import Lean.Meta.Sym.Apply public import Lean.Meta.Sym.Simp.Discharger import Lean.Meta.Tactic.Grind.Main import Lean.Meta.Sym.Simp.Goal import Lean.Meta.Sym.Intro import Lean.Meta.Sym.Util import Lean.Meta.Sym.InstantiateMVarsS import Lean.Meta.Tactic.Grind.Solve import Lean.Meta.Tactic.Assumption
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
lean_object* l_Lean_Meta_Sym_preprocessMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkGoalCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateMVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getIssues___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Grind_processHypotheses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_BackwardRule_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MVarId_assumptionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_simpGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_introN(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_intros(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_goal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_goal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_introN(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_introN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_intros(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_intros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_goals_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_goals_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Goal_apply_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Goal_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_apply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_noProgress_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_noProgress_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_closed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_closed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_goal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_goal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_simpIgnoringNoProgress(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_simpIgnoringNoProgress___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_internalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_internalizeAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_internalizeAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_closed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_closed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_grind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_grind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_assumption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__0;
static const lean_ctor_object l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_mkSymSimpDischarger___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_mkSymSimpDischarger___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_mkSymSimpDischarger(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_mkSymSimpDischarger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkGoal(lean_object* v_mvarId_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l_Lean_Meta_Sym_preprocessMVar(v_mvarId_1_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_);
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v_a_13_; lean_object* v___x_14_; 
v_a_13_ = lean_ctor_get(v___x_12_, 0);
lean_inc(v_a_13_);
lean_dec_ref_known(v___x_12_, 1);
v___x_14_ = l_Lean_Meta_Grind_mkGoalCore(v_a_13_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_);
return v___x_14_;
}
else
{
lean_object* v_a_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_22_; 
v_a_15_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_22_ == 0)
{
v___x_17_ = v___x_12_;
v_isShared_18_ = v_isSharedCheck_22_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_a_15_);
lean_dec(v___x_12_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_22_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v_a_15_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkGoal___boxed(lean_object* v_mvarId_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lean_Meta_Grind_mkGoal(v_mvarId_23_, v_a_24_, v_a_25_, v_a_26_, v_a_27_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, v_a_32_);
lean_dec(v_a_32_);
lean_dec_ref(v_a_31_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
lean_dec(v_a_28_);
lean_dec_ref(v_a_27_);
lean_dec(v_a_26_);
lean_dec_ref(v_a_25_);
lean_dec(v_a_24_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_ctorIdx(lean_object* v_x_35_){
_start:
{
if (lean_obj_tag(v_x_35_) == 0)
{
lean_object* v___x_36_; 
v___x_36_ = lean_unsigned_to_nat(0u);
return v___x_36_;
}
else
{
lean_object* v___x_37_; 
v___x_37_ = lean_unsigned_to_nat(1u);
return v___x_37_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_ctorIdx___boxed(lean_object* v_x_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lean_Meta_Grind_IntrosResult_ctorIdx(v_x_38_);
lean_dec(v_x_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_ctorElim___redArg(lean_object* v_t_40_, lean_object* v_k_41_){
_start:
{
if (lean_obj_tag(v_t_40_) == 0)
{
return v_k_41_;
}
else
{
lean_object* v_newDecls_42_; lean_object* v_goal_43_; lean_object* v___x_44_; 
v_newDecls_42_ = lean_ctor_get(v_t_40_, 0);
lean_inc_ref(v_newDecls_42_);
v_goal_43_ = lean_ctor_get(v_t_40_, 1);
lean_inc_ref(v_goal_43_);
lean_dec_ref_known(v_t_40_, 2);
v___x_44_ = lean_apply_2(v_k_41_, v_newDecls_42_, v_goal_43_);
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_ctorElim(lean_object* v_motive_45_, lean_object* v_ctorIdx_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_k_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Meta_Grind_IntrosResult_ctorElim___redArg(v_t_47_, v_k_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_ctorElim___boxed(lean_object* v_motive_51_, lean_object* v_ctorIdx_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_k_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_Meta_Grind_IntrosResult_ctorElim(v_motive_51_, v_ctorIdx_52_, v_t_53_, v_h_54_, v_k_55_);
lean_dec(v_ctorIdx_52_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_failed_elim___redArg(lean_object* v_t_57_, lean_object* v_failed_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lean_Meta_Grind_IntrosResult_ctorElim___redArg(v_t_57_, v_failed_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_failed_elim(lean_object* v_motive_60_, lean_object* v_t_61_, lean_object* v_h_62_, lean_object* v_failed_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lean_Meta_Grind_IntrosResult_ctorElim___redArg(v_t_61_, v_failed_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_goal_elim___redArg(lean_object* v_t_65_, lean_object* v_goal_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lean_Meta_Grind_IntrosResult_ctorElim___redArg(v_t_65_, v_goal_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_IntrosResult_goal_elim(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_goal_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_Meta_Grind_IntrosResult_ctorElim___redArg(v_t_69_, v_goal_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_introN(lean_object* v_goal_73_, lean_object* v_num_74_, uint8_t v_hygienic_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_){
_start:
{
lean_object* v_toGoalState_83_; lean_object* v_mvarId_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_121_; 
v_toGoalState_83_ = lean_ctor_get(v_goal_73_, 0);
v_mvarId_84_ = lean_ctor_get(v_goal_73_, 1);
v_isSharedCheck_121_ = !lean_is_exclusive(v_goal_73_);
if (v_isSharedCheck_121_ == 0)
{
v___x_86_ = v_goal_73_;
v_isShared_87_ = v_isSharedCheck_121_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_mvarId_84_);
lean_inc(v_toGoalState_83_);
lean_dec(v_goal_73_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_121_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; 
v___x_88_ = l_Lean_Meta_Sym_introN(v_mvarId_84_, v_num_74_, v_hygienic_75_, v_a_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
if (lean_obj_tag(v___x_88_) == 0)
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_112_; 
v_a_89_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_112_ == 0)
{
v___x_91_ = v___x_88_;
v_isShared_92_ = v_isSharedCheck_112_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_88_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_112_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
if (lean_obj_tag(v_a_89_) == 1)
{
lean_object* v_newDecls_93_; lean_object* v_mvarId_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_107_; 
v_newDecls_93_ = lean_ctor_get(v_a_89_, 0);
v_mvarId_94_ = lean_ctor_get(v_a_89_, 1);
v_isSharedCheck_107_ = !lean_is_exclusive(v_a_89_);
if (v_isSharedCheck_107_ == 0)
{
v___x_96_ = v_a_89_;
v_isShared_97_ = v_isSharedCheck_107_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_mvarId_94_);
lean_inc(v_newDecls_93_);
lean_dec(v_a_89_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_107_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___x_99_; 
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 1, v_mvarId_94_);
v___x_99_ = v___x_86_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_toGoalState_83_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v_mvarId_94_);
v___x_99_ = v_reuseFailAlloc_106_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
lean_object* v___x_101_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 1, v___x_99_);
v___x_101_ = v___x_96_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_newDecls_93_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v___x_99_);
v___x_101_ = v_reuseFailAlloc_105_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
lean_object* v___x_103_; 
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_101_);
v___x_103_ = v___x_91_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_101_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
}
}
}
else
{
lean_object* v___x_108_; lean_object* v___x_110_; 
lean_dec(v_a_89_);
lean_del_object(v___x_86_);
lean_dec_ref(v_toGoalState_83_);
v___x_108_ = lean_box(0);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_108_);
v___x_110_ = v___x_91_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_108_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
}
else
{
lean_object* v_a_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_120_; 
lean_del_object(v___x_86_);
lean_dec_ref(v_toGoalState_83_);
v_a_113_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_120_ == 0)
{
v___x_115_ = v___x_88_;
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_a_113_);
lean_dec(v___x_88_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_118_; 
if (v_isShared_116_ == 0)
{
v___x_118_ = v___x_115_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_a_113_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_introN___boxed(lean_object* v_goal_122_, lean_object* v_num_123_, lean_object* v_hygienic_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
uint8_t v_hygienic_boxed_132_; lean_object* v_res_133_; 
v_hygienic_boxed_132_ = lean_unbox(v_hygienic_124_);
v_res_133_ = l_Lean_Meta_Grind_Goal_introN(v_goal_122_, v_num_123_, v_hygienic_boxed_132_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_);
lean_dec(v_a_130_);
lean_dec_ref(v_a_129_);
lean_dec(v_a_128_);
lean_dec_ref(v_a_127_);
lean_dec(v_a_126_);
lean_dec_ref(v_a_125_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_intros(lean_object* v_goal_134_, lean_object* v_names_135_, uint8_t v_hygienic_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v_toGoalState_144_; lean_object* v_mvarId_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_182_; 
v_toGoalState_144_ = lean_ctor_get(v_goal_134_, 0);
v_mvarId_145_ = lean_ctor_get(v_goal_134_, 1);
v_isSharedCheck_182_ = !lean_is_exclusive(v_goal_134_);
if (v_isSharedCheck_182_ == 0)
{
v___x_147_ = v_goal_134_;
v_isShared_148_ = v_isSharedCheck_182_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_mvarId_145_);
lean_inc(v_toGoalState_144_);
lean_dec(v_goal_134_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_182_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lean_Meta_Sym_intros(v_mvarId_145_, v_names_135_, v_hygienic_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_);
if (lean_obj_tag(v___x_149_) == 0)
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_173_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_173_ == 0)
{
v___x_152_ = v___x_149_;
v_isShared_153_ = v_isSharedCheck_173_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_149_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_173_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
if (lean_obj_tag(v_a_150_) == 1)
{
lean_object* v_newDecls_154_; lean_object* v_mvarId_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_168_; 
v_newDecls_154_ = lean_ctor_get(v_a_150_, 0);
v_mvarId_155_ = lean_ctor_get(v_a_150_, 1);
v_isSharedCheck_168_ = !lean_is_exclusive(v_a_150_);
if (v_isSharedCheck_168_ == 0)
{
v___x_157_ = v_a_150_;
v_isShared_158_ = v_isSharedCheck_168_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_mvarId_155_);
lean_inc(v_newDecls_154_);
lean_dec(v_a_150_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_168_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_160_; 
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 1, v_mvarId_155_);
v___x_160_ = v___x_147_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_toGoalState_144_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v_mvarId_155_);
v___x_160_ = v_reuseFailAlloc_167_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_162_; 
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 1, v___x_160_);
v___x_162_ = v___x_157_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_newDecls_154_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v___x_160_);
v___x_162_ = v_reuseFailAlloc_166_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
lean_object* v___x_164_; 
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_162_);
v___x_164_ = v___x_152_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_162_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
}
}
else
{
lean_object* v___x_169_; lean_object* v___x_171_; 
lean_dec(v_a_150_);
lean_del_object(v___x_147_);
lean_dec_ref(v_toGoalState_144_);
v___x_169_ = lean_box(0);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_169_);
v___x_171_ = v___x_152_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
else
{
lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_181_; 
lean_del_object(v___x_147_);
lean_dec_ref(v_toGoalState_144_);
v_a_174_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_181_ == 0)
{
v___x_176_ = v___x_149_;
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___x_149_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_179_; 
if (v_isShared_177_ == 0)
{
v___x_179_ = v___x_176_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_a_174_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_intros___boxed(lean_object* v_goal_183_, lean_object* v_names_184_, lean_object* v_hygienic_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
uint8_t v_hygienic_boxed_193_; lean_object* v_res_194_; 
v_hygienic_boxed_193_ = lean_unbox(v_hygienic_185_);
v_res_194_ = l_Lean_Meta_Grind_Goal_intros(v_goal_183_, v_names_184_, v_hygienic_boxed_193_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_);
lean_dec(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
lean_dec_ref(v_a_188_);
lean_dec(v_a_187_);
lean_dec_ref(v_a_186_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_ctorIdx(lean_object* v_x_195_){
_start:
{
if (lean_obj_tag(v_x_195_) == 0)
{
lean_object* v___x_196_; 
v___x_196_ = lean_unsigned_to_nat(0u);
return v___x_196_;
}
else
{
lean_object* v___x_197_; 
v___x_197_ = lean_unsigned_to_nat(1u);
return v___x_197_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_ctorIdx___boxed(lean_object* v_x_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lean_Meta_Grind_ApplyResult_ctorIdx(v_x_198_);
lean_dec(v_x_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_ctorElim___redArg(lean_object* v_t_200_, lean_object* v_k_201_){
_start:
{
if (lean_obj_tag(v_t_200_) == 0)
{
return v_k_201_;
}
else
{
lean_object* v_subgoals_202_; lean_object* v___x_203_; 
v_subgoals_202_ = lean_ctor_get(v_t_200_, 0);
lean_inc(v_subgoals_202_);
lean_dec_ref_known(v_t_200_, 1);
v___x_203_ = lean_apply_1(v_k_201_, v_subgoals_202_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_ctorElim(lean_object* v_motive_204_, lean_object* v_ctorIdx_205_, lean_object* v_t_206_, lean_object* v_h_207_, lean_object* v_k_208_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lean_Meta_Grind_ApplyResult_ctorElim___redArg(v_t_206_, v_k_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_ctorElim___boxed(lean_object* v_motive_210_, lean_object* v_ctorIdx_211_, lean_object* v_t_212_, lean_object* v_h_213_, lean_object* v_k_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_Meta_Grind_ApplyResult_ctorElim(v_motive_210_, v_ctorIdx_211_, v_t_212_, v_h_213_, v_k_214_);
lean_dec(v_ctorIdx_211_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_failed_elim___redArg(lean_object* v_t_216_, lean_object* v_failed_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = l_Lean_Meta_Grind_ApplyResult_ctorElim___redArg(v_t_216_, v_failed_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_failed_elim(lean_object* v_motive_219_, lean_object* v_t_220_, lean_object* v_h_221_, lean_object* v_failed_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l_Lean_Meta_Grind_ApplyResult_ctorElim___redArg(v_t_220_, v_failed_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_goals_elim___redArg(lean_object* v_t_224_, lean_object* v_goals_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lean_Meta_Grind_ApplyResult_ctorElim___redArg(v_t_224_, v_goals_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ApplyResult_goals_elim(lean_object* v_motive_227_, lean_object* v_t_228_, lean_object* v_h_229_, lean_object* v_goals_230_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l_Lean_Meta_Grind_ApplyResult_ctorElim___redArg(v_t_228_, v_goals_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Goal_apply_spec__0(lean_object* v_goal_232_, lean_object* v_a_233_, lean_object* v_a_234_){
_start:
{
if (lean_obj_tag(v_a_233_) == 0)
{
lean_object* v___x_235_; 
v___x_235_ = l_List_reverse___redArg(v_a_234_);
return v___x_235_;
}
else
{
lean_object* v_head_236_; lean_object* v_tail_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_247_; 
v_head_236_ = lean_ctor_get(v_a_233_, 0);
v_tail_237_ = lean_ctor_get(v_a_233_, 1);
v_isSharedCheck_247_ = !lean_is_exclusive(v_a_233_);
if (v_isSharedCheck_247_ == 0)
{
v___x_239_ = v_a_233_;
v_isShared_240_ = v_isSharedCheck_247_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_tail_237_);
lean_inc(v_head_236_);
lean_dec(v_a_233_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_247_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v_toGoalState_241_; lean_object* v___x_242_; lean_object* v___x_244_; 
v_toGoalState_241_ = lean_ctor_get(v_goal_232_, 0);
lean_inc_ref(v_toGoalState_241_);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v_toGoalState_241_);
lean_ctor_set(v___x_242_, 1, v_head_236_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 1, v_a_234_);
lean_ctor_set(v___x_239_, 0, v___x_242_);
v___x_244_ = v___x_239_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_242_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v_a_234_);
v___x_244_ = v_reuseFailAlloc_246_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
v_a_233_ = v_tail_237_;
v_a_234_ = v___x_244_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_Goal_apply_spec__0___boxed(lean_object* v_goal_248_, lean_object* v_a_249_, lean_object* v_a_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_Goal_apply_spec__0(v_goal_248_, v_a_249_, v_a_250_);
lean_dec_ref(v_goal_248_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_apply(lean_object* v_goal_252_, lean_object* v_rule_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_mvarId_261_; lean_object* v___x_262_; 
v_mvarId_261_ = lean_ctor_get(v_goal_252_, 1);
lean_inc(v_mvarId_261_);
v___x_262_ = l_Lean_Meta_Sym_BackwardRule_apply(v_mvarId_261_, v_rule_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_);
if (lean_obj_tag(v___x_262_) == 0)
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_284_; 
v_a_263_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_284_ == 0)
{
v___x_265_ = v___x_262_;
v_isShared_266_ = v_isSharedCheck_284_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_262_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_284_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
if (lean_obj_tag(v_a_263_) == 1)
{
lean_object* v_mvarIds_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_279_; 
v_mvarIds_267_ = lean_ctor_get(v_a_263_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v_a_263_);
if (v_isSharedCheck_279_ == 0)
{
v___x_269_ = v_a_263_;
v_isShared_270_ = v_isSharedCheck_279_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_mvarIds_267_);
lean_dec(v_a_263_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_279_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
v___x_271_ = lean_box(0);
v___x_272_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_Goal_apply_spec__0(v_goal_252_, v_mvarIds_267_, v___x_271_);
lean_dec_ref(v_goal_252_);
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 0, v___x_272_);
v___x_274_ = v___x_269_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_272_);
v___x_274_ = v_reuseFailAlloc_278_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_276_; 
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 0, v___x_274_);
v___x_276_ = v___x_265_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_274_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
}
else
{
lean_object* v___x_280_; lean_object* v___x_282_; 
lean_dec(v_a_263_);
lean_dec_ref(v_goal_252_);
v___x_280_ = lean_box(0);
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 0, v___x_280_);
v___x_282_ = v___x_265_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
else
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_292_; 
lean_dec_ref(v_goal_252_);
v_a_285_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_292_ == 0)
{
v___x_287_ = v___x_262_;
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_262_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_288_ == 0)
{
v___x_290_ = v___x_287_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_a_285_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_apply___boxed(lean_object* v_goal_293_, lean_object* v_rule_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Meta_Grind_Goal_apply(v_goal_293_, v_rule_294_, v_a_295_, v_a_296_, v_a_297_, v_a_298_, v_a_299_, v_a_300_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
lean_dec(v_a_298_);
lean_dec_ref(v_a_297_);
lean_dec(v_a_296_);
lean_dec_ref(v_a_295_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_ctorIdx(lean_object* v_x_303_){
_start:
{
switch(lean_obj_tag(v_x_303_))
{
case 0:
{
lean_object* v___x_304_; 
v___x_304_ = lean_unsigned_to_nat(0u);
return v___x_304_;
}
case 1:
{
lean_object* v___x_305_; 
v___x_305_ = lean_unsigned_to_nat(1u);
return v___x_305_;
}
default: 
{
lean_object* v___x_306_; 
v___x_306_ = lean_unsigned_to_nat(2u);
return v___x_306_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_ctorIdx___boxed(lean_object* v_x_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lean_Meta_Grind_SimpGoalResult_ctorIdx(v_x_307_);
lean_dec(v_x_307_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_ctorElim___redArg(lean_object* v_t_309_, lean_object* v_k_310_){
_start:
{
if (lean_obj_tag(v_t_309_) == 2)
{
lean_object* v_goal_311_; lean_object* v___x_312_; 
v_goal_311_ = lean_ctor_get(v_t_309_, 0);
lean_inc_ref(v_goal_311_);
lean_dec_ref_known(v_t_309_, 1);
v___x_312_ = lean_apply_1(v_k_310_, v_goal_311_);
return v___x_312_;
}
else
{
lean_dec(v_t_309_);
return v_k_310_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_ctorElim(lean_object* v_motive_313_, lean_object* v_ctorIdx_314_, lean_object* v_t_315_, lean_object* v_h_316_, lean_object* v_k_317_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_Lean_Meta_Grind_SimpGoalResult_ctorElim___redArg(v_t_315_, v_k_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_ctorElim___boxed(lean_object* v_motive_319_, lean_object* v_ctorIdx_320_, lean_object* v_t_321_, lean_object* v_h_322_, lean_object* v_k_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_Meta_Grind_SimpGoalResult_ctorElim(v_motive_319_, v_ctorIdx_320_, v_t_321_, v_h_322_, v_k_323_);
lean_dec(v_ctorIdx_320_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_noProgress_elim___redArg(lean_object* v_t_325_, lean_object* v_noProgress_326_){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = l_Lean_Meta_Grind_SimpGoalResult_ctorElim___redArg(v_t_325_, v_noProgress_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_noProgress_elim(lean_object* v_motive_328_, lean_object* v_t_329_, lean_object* v_h_330_, lean_object* v_noProgress_331_){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = l_Lean_Meta_Grind_SimpGoalResult_ctorElim___redArg(v_t_329_, v_noProgress_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_closed_elim___redArg(lean_object* v_t_333_, lean_object* v_closed_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Meta_Grind_SimpGoalResult_ctorElim___redArg(v_t_333_, v_closed_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_closed_elim(lean_object* v_motive_336_, lean_object* v_t_337_, lean_object* v_h_338_, lean_object* v_closed_339_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l_Lean_Meta_Grind_SimpGoalResult_ctorElim___redArg(v_t_337_, v_closed_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_goal_elim___redArg(lean_object* v_t_341_, lean_object* v_goal_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l_Lean_Meta_Grind_SimpGoalResult_ctorElim___redArg(v_t_341_, v_goal_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SimpGoalResult_goal_elim(lean_object* v_motive_344_, lean_object* v_t_345_, lean_object* v_h_346_, lean_object* v_goal_347_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l_Lean_Meta_Grind_SimpGoalResult_ctorElim___redArg(v_t_345_, v_goal_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_simp(lean_object* v_goal_349_, lean_object* v_methods_350_, lean_object* v_config_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
lean_object* v_toGoalState_359_; lean_object* v_mvarId_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_400_; 
v_toGoalState_359_ = lean_ctor_get(v_goal_349_, 0);
v_mvarId_360_ = lean_ctor_get(v_goal_349_, 1);
v_isSharedCheck_400_ = !lean_is_exclusive(v_goal_349_);
if (v_isSharedCheck_400_ == 0)
{
v___x_362_ = v_goal_349_;
v_isShared_363_ = v_isSharedCheck_400_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_mvarId_360_);
lean_inc(v_toGoalState_359_);
lean_dec(v_goal_349_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_400_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_Meta_Sym_simpGoal(v_mvarId_360_, v_methods_350_, v_config_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_, v_a_357_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_391_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_391_ == 0)
{
v___x_367_ = v___x_364_;
v_isShared_368_ = v_isSharedCheck_391_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_391_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
switch(lean_obj_tag(v_a_365_))
{
case 0:
{
lean_object* v___x_369_; lean_object* v___x_371_; 
lean_del_object(v___x_362_);
lean_dec_ref(v_toGoalState_359_);
v___x_369_ = lean_box(0);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_369_);
v___x_371_ = v___x_367_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
case 1:
{
lean_object* v___x_373_; lean_object* v___x_375_; 
lean_del_object(v___x_362_);
lean_dec_ref(v_toGoalState_359_);
v___x_373_ = lean_box(1);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_373_);
v___x_375_ = v___x_367_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_373_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
default: 
{
lean_object* v_mvarId_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_390_; 
v_mvarId_377_ = lean_ctor_get(v_a_365_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v_a_365_);
if (v_isSharedCheck_390_ == 0)
{
v___x_379_ = v_a_365_;
v_isShared_380_ = v_isSharedCheck_390_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_mvarId_377_);
lean_dec(v_a_365_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_390_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 1, v_mvarId_377_);
v___x_382_ = v___x_362_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_toGoalState_359_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_mvarId_377_);
v___x_382_ = v_reuseFailAlloc_389_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
lean_object* v___x_384_; 
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v___x_382_);
v___x_384_ = v___x_379_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_382_);
v___x_384_ = v_reuseFailAlloc_388_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_386_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_384_);
v___x_386_ = v___x_367_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v___x_384_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
lean_del_object(v___x_362_);
lean_dec_ref(v_toGoalState_359_);
v_a_392_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_364_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_364_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_simp___boxed(lean_object* v_goal_401_, lean_object* v_methods_402_, lean_object* v_config_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lean_Meta_Grind_Goal_simp(v_goal_401_, v_methods_402_, v_config_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_);
lean_dec(v_a_409_);
lean_dec_ref(v_a_408_);
lean_dec(v_a_407_);
lean_dec_ref(v_a_406_);
lean_dec(v_a_405_);
lean_dec_ref(v_a_404_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_simpIgnoringNoProgress(lean_object* v_goal_412_, lean_object* v_methods_413_, lean_object* v_config_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_toGoalState_422_; lean_object* v_mvarId_423_; lean_object* v___x_424_; 
v_toGoalState_422_ = lean_ctor_get(v_goal_412_, 0);
v_mvarId_423_ = lean_ctor_get(v_goal_412_, 1);
lean_inc(v_mvarId_423_);
v___x_424_ = l_Lean_Meta_Sym_simpGoal(v_mvarId_423_, v_methods_413_, v_config_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_457_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_457_ == 0)
{
v___x_427_ = v___x_424_;
v_isShared_428_ = v_isSharedCheck_457_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_424_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_457_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
switch(lean_obj_tag(v_a_425_))
{
case 0:
{
lean_object* v___x_429_; lean_object* v___x_431_; 
v___x_429_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_429_, 0, v_goal_412_);
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 0, v___x_429_);
v___x_431_ = v___x_427_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
case 1:
{
lean_object* v___x_433_; lean_object* v___x_435_; 
lean_dec_ref(v_goal_412_);
v___x_433_ = lean_box(1);
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 0, v___x_433_);
v___x_435_ = v___x_427_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_433_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
default: 
{
lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_454_; 
lean_inc_ref(v_toGoalState_422_);
v_isSharedCheck_454_ = !lean_is_exclusive(v_goal_412_);
if (v_isSharedCheck_454_ == 0)
{
lean_object* v_unused_455_; lean_object* v_unused_456_; 
v_unused_455_ = lean_ctor_get(v_goal_412_, 1);
lean_dec(v_unused_455_);
v_unused_456_ = lean_ctor_get(v_goal_412_, 0);
lean_dec(v_unused_456_);
v___x_438_ = v_goal_412_;
v_isShared_439_ = v_isSharedCheck_454_;
goto v_resetjp_437_;
}
else
{
lean_dec(v_goal_412_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_454_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v_mvarId_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_453_; 
v_mvarId_440_ = lean_ctor_get(v_a_425_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v_a_425_);
if (v_isSharedCheck_453_ == 0)
{
v___x_442_ = v_a_425_;
v_isShared_443_ = v_isSharedCheck_453_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_mvarId_440_);
lean_dec(v_a_425_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_453_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 1, v_mvarId_440_);
v___x_445_ = v___x_438_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_toGoalState_422_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_mvarId_440_);
v___x_445_ = v_reuseFailAlloc_452_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
lean_object* v___x_447_; 
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 0, v___x_445_);
v___x_447_ = v___x_442_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v___x_445_);
v___x_447_ = v_reuseFailAlloc_451_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_449_; 
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 0, v___x_447_);
v___x_449_ = v___x_427_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_447_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
lean_dec_ref(v_goal_412_);
v_a_458_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_424_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_424_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_simpIgnoringNoProgress___boxed(lean_object* v_goal_466_, lean_object* v_methods_467_, lean_object* v_config_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Lean_Meta_Grind_Goal_simpIgnoringNoProgress(v_goal_466_, v_methods_467_, v_config_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_, v_a_473_, v_a_474_);
lean_dec(v_a_474_);
lean_dec_ref(v_a_473_);
lean_dec(v_a_472_);
lean_dec_ref(v_a_471_);
lean_dec(v_a_470_);
lean_dec_ref(v_a_469_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_internalize(lean_object* v_goal_477_, lean_object* v_num_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_489_, 0, v_num_478_);
v___x_490_ = l_Lean_Meta_Grind_processHypotheses(v_goal_477_, v___x_489_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_internalize___boxed(lean_object* v_goal_491_, lean_object* v_num_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lean_Meta_Grind_Goal_internalize(v_goal_491_, v_num_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_);
lean_dec(v_a_501_);
lean_dec_ref(v_a_500_);
lean_dec(v_a_499_);
lean_dec_ref(v_a_498_);
lean_dec(v_a_497_);
lean_dec_ref(v_a_496_);
lean_dec(v_a_495_);
lean_dec_ref(v_a_494_);
lean_dec(v_a_493_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_internalizeAll(lean_object* v_goal_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_box(0);
v___x_516_ = l_Lean_Meta_Grind_processHypotheses(v_goal_504_, v___x_515_, v_a_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_, v_a_513_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_internalizeAll___boxed(lean_object* v_goal_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lean_Meta_Grind_Goal_internalizeAll(v_goal_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_);
lean_dec(v_a_526_);
lean_dec_ref(v_a_525_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_523_);
lean_dec(v_a_522_);
lean_dec_ref(v_a_521_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
lean_dec(v_a_518_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_ctorIdx(lean_object* v_x_529_){
_start:
{
if (lean_obj_tag(v_x_529_) == 0)
{
lean_object* v___x_530_; 
v___x_530_ = lean_unsigned_to_nat(0u);
return v___x_530_;
}
else
{
lean_object* v___x_531_; 
v___x_531_ = lean_unsigned_to_nat(1u);
return v___x_531_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_ctorIdx___boxed(lean_object* v_x_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_Meta_Grind_GrindResult_ctorIdx(v_x_532_);
lean_dec(v_x_532_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_ctorElim___redArg(lean_object* v_t_534_, lean_object* v_k_535_){
_start:
{
if (lean_obj_tag(v_t_534_) == 0)
{
lean_object* v_goal_536_; lean_object* v___x_537_; 
v_goal_536_ = lean_ctor_get(v_t_534_, 0);
lean_inc_ref(v_goal_536_);
lean_dec_ref_known(v_t_534_, 1);
v___x_537_ = lean_apply_1(v_k_535_, v_goal_536_);
return v___x_537_;
}
else
{
return v_k_535_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_ctorElim(lean_object* v_motive_538_, lean_object* v_ctorIdx_539_, lean_object* v_t_540_, lean_object* v_h_541_, lean_object* v_k_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l_Lean_Meta_Grind_GrindResult_ctorElim___redArg(v_t_540_, v_k_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_ctorElim___boxed(lean_object* v_motive_544_, lean_object* v_ctorIdx_545_, lean_object* v_t_546_, lean_object* v_h_547_, lean_object* v_k_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Lean_Meta_Grind_GrindResult_ctorElim(v_motive_544_, v_ctorIdx_545_, v_t_546_, v_h_547_, v_k_548_);
lean_dec(v_ctorIdx_545_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_failed_elim___redArg(lean_object* v_t_550_, lean_object* v_failed_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lean_Meta_Grind_GrindResult_ctorElim___redArg(v_t_550_, v_failed_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_failed_elim(lean_object* v_motive_553_, lean_object* v_t_554_, lean_object* v_h_555_, lean_object* v_failed_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Lean_Meta_Grind_GrindResult_ctorElim___redArg(v_t_554_, v_failed_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_closed_elim___redArg(lean_object* v_t_558_, lean_object* v_closed_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = l_Lean_Meta_Grind_GrindResult_ctorElim___redArg(v_t_558_, v_closed_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_GrindResult_closed_elim(lean_object* v_motive_561_, lean_object* v_t_562_, lean_object* v_h_563_, lean_object* v_closed_564_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = l_Lean_Meta_Grind_GrindResult_ctorElim___redArg(v_t_562_, v_closed_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_grind(lean_object* v_goal_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Lean_Meta_Grind_solve(v_goal_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_597_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_597_ == 0)
{
v___x_580_ = v___x_577_;
v_isShared_581_ = v_isSharedCheck_597_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_577_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_597_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
if (lean_obj_tag(v_a_578_) == 1)
{
lean_object* v_val_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_592_; 
v_val_582_ = lean_ctor_get(v_a_578_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v_a_578_);
if (v_isSharedCheck_592_ == 0)
{
v___x_584_ = v_a_578_;
v_isShared_585_ = v_isSharedCheck_592_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_val_582_);
lean_dec(v_a_578_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_592_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
lean_ctor_set_tag(v___x_584_, 0);
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_val_582_);
v___x_587_ = v_reuseFailAlloc_591_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_589_; 
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v___x_587_);
v___x_589_ = v___x_580_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_587_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
else
{
lean_object* v___x_593_; lean_object* v___x_595_; 
lean_dec(v_a_578_);
v___x_593_ = lean_box(1);
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v___x_593_);
v___x_595_ = v___x_580_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_593_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
else
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
v_a_598_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_577_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_577_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_598_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_grind___boxed(lean_object* v_goal_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Lean_Meta_Grind_Goal_grind(v_goal_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_, v_a_615_);
lean_dec(v_a_615_);
lean_dec_ref(v_a_614_);
lean_dec(v_a_613_);
lean_dec_ref(v_a_612_);
lean_dec(v_a_611_);
lean_dec_ref(v_a_610_);
lean_dec(v_a_609_);
lean_dec_ref(v_a_608_);
lean_dec(v_a_607_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_assumption(lean_object* v_goal_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
lean_object* v_mvarId_624_; lean_object* v___x_625_; 
v_mvarId_624_ = lean_ctor_get(v_goal_618_, 1);
lean_inc(v_mvarId_624_);
lean_dec_ref(v_goal_618_);
v___x_625_ = l_Lean_MVarId_assumptionCore(v_mvarId_624_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_assumption___boxed(lean_object* v_goal_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_Meta_Grind_Goal_assumption(v_goal_626_, v_a_627_, v_a_628_, v_a_629_, v_a_630_);
lean_dec(v_a_630_);
lean_dec_ref(v_a_629_);
lean_dec(v_a_628_);
lean_dec_ref(v_a_627_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0___redArg(lean_object* v_e_633_, lean_object* v___y_634_){
_start:
{
uint8_t v___x_636_; 
v___x_636_ = l_Lean_Expr_hasMVar(v_e_633_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; 
v___x_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_637_, 0, v_e_633_);
return v___x_637_;
}
else
{
lean_object* v___x_638_; lean_object* v_mctx_639_; lean_object* v___x_640_; lean_object* v_fst_641_; lean_object* v_snd_642_; lean_object* v___x_643_; lean_object* v_cache_644_; lean_object* v_zetaDeltaFVarIds_645_; lean_object* v_postponed_646_; lean_object* v_diag_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_656_; 
v___x_638_ = lean_st_ref_get(v___y_634_);
v_mctx_639_ = lean_ctor_get(v___x_638_, 0);
lean_inc_ref(v_mctx_639_);
lean_dec(v___x_638_);
v___x_640_ = l_Lean_instantiateMVarsCore(v_mctx_639_, v_e_633_);
v_fst_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_fst_641_);
v_snd_642_ = lean_ctor_get(v___x_640_, 1);
lean_inc(v_snd_642_);
lean_dec_ref(v___x_640_);
v___x_643_ = lean_st_ref_take(v___y_634_);
v_cache_644_ = lean_ctor_get(v___x_643_, 1);
v_zetaDeltaFVarIds_645_ = lean_ctor_get(v___x_643_, 2);
v_postponed_646_ = lean_ctor_get(v___x_643_, 3);
v_diag_647_ = lean_ctor_get(v___x_643_, 4);
v_isSharedCheck_656_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_656_ == 0)
{
lean_object* v_unused_657_; 
v_unused_657_ = lean_ctor_get(v___x_643_, 0);
lean_dec(v_unused_657_);
v___x_649_ = v___x_643_;
v_isShared_650_ = v_isSharedCheck_656_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_diag_647_);
lean_inc(v_postponed_646_);
lean_inc(v_zetaDeltaFVarIds_645_);
lean_inc(v_cache_644_);
lean_dec(v___x_643_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_656_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 0, v_snd_642_);
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_snd_642_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v_cache_644_);
lean_ctor_set(v_reuseFailAlloc_655_, 2, v_zetaDeltaFVarIds_645_);
lean_ctor_set(v_reuseFailAlloc_655_, 3, v_postponed_646_);
lean_ctor_set(v_reuseFailAlloc_655_, 4, v_diag_647_);
v___x_652_ = v_reuseFailAlloc_655_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = lean_st_ref_put(v___y_634_, v___x_652_);
v___x_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_654_, 0, v_fst_641_);
return v___x_654_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0___redArg___boxed(lean_object* v_e_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0___redArg(v_e_658_, v___y_659_);
lean_dec(v___y_659_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0(lean_object* v_e_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0___redArg(v_e_662_, v___y_669_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0___boxed(lean_object* v_e_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0(v_e_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___lam__0(lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_x3f_688_){
_start:
{
lean_object* v___x_690_; lean_object* v_share_691_; lean_object* v_maxFVar_692_; lean_object* v_proofInstInfo_693_; lean_object* v_inferType_694_; lean_object* v_getLevel_695_; lean_object* v_congrInfo_696_; lean_object* v_defEqI_697_; lean_object* v_extensions_698_; lean_object* v_canon_699_; lean_object* v_instanceOverrides_700_; uint8_t v_debug_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_711_; 
v___x_690_ = lean_st_ref_take(v_a_686_);
v_share_691_ = lean_ctor_get(v___x_690_, 0);
v_maxFVar_692_ = lean_ctor_get(v___x_690_, 1);
v_proofInstInfo_693_ = lean_ctor_get(v___x_690_, 2);
v_inferType_694_ = lean_ctor_get(v___x_690_, 3);
v_getLevel_695_ = lean_ctor_get(v___x_690_, 4);
v_congrInfo_696_ = lean_ctor_get(v___x_690_, 5);
v_defEqI_697_ = lean_ctor_get(v___x_690_, 6);
v_extensions_698_ = lean_ctor_get(v___x_690_, 7);
v_canon_699_ = lean_ctor_get(v___x_690_, 9);
v_instanceOverrides_700_ = lean_ctor_get(v___x_690_, 10);
v_debug_701_ = lean_ctor_get_uint8(v___x_690_, sizeof(void*)*11);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_711_ == 0)
{
lean_object* v_unused_712_; 
v_unused_712_ = lean_ctor_get(v___x_690_, 8);
lean_dec(v_unused_712_);
v___x_703_ = v___x_690_;
v_isShared_704_ = v_isSharedCheck_711_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_instanceOverrides_700_);
lean_inc(v_canon_699_);
lean_inc(v_extensions_698_);
lean_inc(v_defEqI_697_);
lean_inc(v_congrInfo_696_);
lean_inc(v_getLevel_695_);
lean_inc(v_inferType_694_);
lean_inc(v_proofInstInfo_693_);
lean_inc(v_maxFVar_692_);
lean_inc(v_share_691_);
lean_dec(v___x_690_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_711_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_705_ = lean_box(0);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 8, v_a_687_);
v___x_707_ = v___x_703_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_share_691_);
lean_ctor_set(v_reuseFailAlloc_710_, 1, v_maxFVar_692_);
lean_ctor_set(v_reuseFailAlloc_710_, 2, v_proofInstInfo_693_);
lean_ctor_set(v_reuseFailAlloc_710_, 3, v_inferType_694_);
lean_ctor_set(v_reuseFailAlloc_710_, 4, v_getLevel_695_);
lean_ctor_set(v_reuseFailAlloc_710_, 5, v_congrInfo_696_);
lean_ctor_set(v_reuseFailAlloc_710_, 6, v_defEqI_697_);
lean_ctor_set(v_reuseFailAlloc_710_, 7, v_extensions_698_);
lean_ctor_set(v_reuseFailAlloc_710_, 8, v_a_687_);
lean_ctor_set(v_reuseFailAlloc_710_, 9, v_canon_699_);
lean_ctor_set(v_reuseFailAlloc_710_, 10, v_instanceOverrides_700_);
lean_ctor_set_uint8(v_reuseFailAlloc_710_, sizeof(void*)*11, v_debug_701_);
v___x_707_ = v_reuseFailAlloc_710_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lean_st_ref_put(v_a_686_, v___x_707_);
v___x_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_709_, 0, v___x_705_);
return v___x_709_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___lam__0___boxed(lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_x3f_715_, lean_object* v___y_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___lam__0(v_a_713_, v_a_714_, v_a_x3f_715_);
lean_dec(v_a_x3f_715_);
lean_dec(v_a_713_);
return v_res_717_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__0(void){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = lean_box(0);
v___x_719_ = l_unsafeCast___redArg(v___x_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp(lean_object* v_goal_724_, lean_object* v_e_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_){
_start:
{
lean_object* v___x_736_; 
v___x_736_ = l_Lean_Meta_Sym_instantiateMVarsS(v_e_725_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___x_738_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_a_737_);
lean_dec_ref_known(v___x_736_, 1);
v___x_738_ = l_Lean_Meta_Sym_getIssues___redArg(v_a_730_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; lean_object* v_a_741_; lean_object* v_a_753_; lean_object* v___x_765_; lean_object* v___x_766_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_739_);
lean_dec_ref_known(v___x_738_, 1);
v___x_765_ = lean_obj_once(&l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__0, &l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__0_once, _init_l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__0);
v___x_766_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_737_, v___x_765_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v_toGoalState_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_795_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_766_, 1);
v_toGoalState_768_ = lean_ctor_get(v_goal_724_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v_goal_724_);
if (v_isSharedCheck_795_ == 0)
{
lean_object* v_unused_796_; 
v_unused_796_ = lean_ctor_get(v_goal_724_, 1);
lean_dec(v_unused_796_);
v___x_770_ = v_goal_724_;
v_isShared_771_ = v_isSharedCheck_795_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_toGoalState_768_);
lean_dec(v_goal_724_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_795_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_772_ = l_Lean_Expr_mvarId_x21(v_a_767_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 1, v___x_772_);
v___x_774_ = v___x_770_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_toGoalState_768_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v___x_772_);
v___x_774_ = v_reuseFailAlloc_794_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = lean_box(0);
v___x_776_ = l_Lean_Meta_Grind_processHypotheses(v___x_774_, v___x_775_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
if (lean_obj_tag(v___x_776_) == 0)
{
lean_object* v_a_777_; lean_object* v___x_778_; 
v_a_777_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v___x_776_, 1);
v___x_778_ = l_Lean_Meta_Grind_solve(v_a_777_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_778_, 1);
if (lean_obj_tag(v_a_779_) == 0)
{
uint8_t v___x_780_; lean_object* v___x_781_; lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_790_; 
v___x_780_ = 1;
v___x_781_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp_spec__0___redArg(v_a_767_, v_a_732_);
v_a_782_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_790_ == 0)
{
v___x_784_ = v___x_781_;
v_isShared_785_ = v_isSharedCheck_790_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_781_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_790_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_786_; lean_object* v___x_788_; 
v___x_786_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_786_, 0, v_a_782_);
lean_ctor_set_uint8(v___x_786_, sizeof(void*)*1, v___x_780_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 0, v___x_786_);
v___x_788_ = v___x_784_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_786_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
v_a_753_ = v___x_788_;
goto v___jp_752_;
}
}
}
else
{
lean_object* v___x_791_; 
lean_dec_ref_known(v_a_779_, 1);
lean_dec(v_a_767_);
v___x_791_ = ((lean_object*)(l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___closed__2));
v_a_753_ = v___x_791_;
goto v___jp_752_;
}
}
else
{
lean_object* v_a_792_; 
lean_dec(v_a_767_);
v_a_792_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_792_);
lean_dec_ref_known(v___x_778_, 1);
v_a_741_ = v_a_792_;
goto v___jp_740_;
}
}
else
{
lean_object* v_a_793_; 
lean_dec(v_a_767_);
v_a_793_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_776_, 1);
v_a_741_ = v_a_793_;
goto v___jp_740_;
}
}
}
}
else
{
lean_object* v_a_797_; 
lean_dec_ref(v_goal_724_);
v_a_797_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v___x_766_, 1);
v_a_741_ = v_a_797_;
goto v___jp_740_;
}
v___jp_740_:
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
v___x_742_ = lean_box(0);
v___x_743_ = l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___lam__0(v_a_730_, v_a_739_, v___x_742_);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_750_ == 0)
{
lean_object* v_unused_751_; 
v_unused_751_ = lean_ctor_get(v___x_743_, 0);
lean_dec(v_unused_751_);
v___x_745_ = v___x_743_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_dec(v___x_743_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
lean_ctor_set_tag(v___x_745_, 1);
lean_ctor_set(v___x_745_, 0, v_a_741_);
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_741_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
v___jp_752_:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_763_; 
lean_inc_ref(v_a_753_);
v___x_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_754_, 0, v_a_753_);
v___x_755_ = l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___lam__0(v_a_730_, v_a_739_, v___x_754_);
lean_dec_ref_known(v___x_754_, 1);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_763_ == 0)
{
lean_object* v_unused_764_; 
v_unused_764_ = lean_ctor_get(v___x_755_, 0);
lean_dec(v_unused_764_);
v___x_757_ = v___x_755_;
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
else
{
lean_dec(v___x_755_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v_a_759_; lean_object* v___x_761_; 
v_a_759_ = lean_ctor_get(v_a_753_, 0);
lean_inc(v_a_759_);
lean_dec_ref(v_a_753_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v_a_759_);
v___x_761_ = v___x_757_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_759_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec(v_a_737_);
lean_dec_ref(v_goal_724_);
v_a_798_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_738_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_738_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
else
{
lean_object* v_a_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_813_; 
lean_dec_ref(v_goal_724_);
v_a_806_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_813_ == 0)
{
v___x_808_ = v___x_736_;
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_a_806_);
lean_dec(v___x_736_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_811_; 
if (v_isShared_809_ == 0)
{
v___x_811_ = v___x_808_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_806_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp___boxed(lean_object* v_goal_814_, lean_object* v_e_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp(v_goal_814_, v_e_815_, v_a_816_, v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_);
lean_dec(v_a_824_);
lean_dec_ref(v_a_823_);
lean_dec(v_a_822_);
lean_dec_ref(v_a_821_);
lean_dec(v_a_820_);
lean_dec_ref(v_a_819_);
lean_dec(v_a_818_);
lean_dec_ref(v_a_817_);
lean_dec(v_a_816_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger___redArg(lean_object* v_goal_827_, lean_object* v_methods_828_, lean_object* v_ctx_829_, lean_object* v_s_830_, lean_object* v_e_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_839_ = lean_st_mk_ref(v_s_830_);
v___x_840_ = l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_Goal_dischargeSymSimp(v_goal_827_, v_e_831_, v_methods_828_, v_ctx_829_, v___x_839_, v_a_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_);
if (lean_obj_tag(v___x_840_) == 0)
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_849_; 
v_a_841_ = lean_ctor_get(v___x_840_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_849_ == 0)
{
v___x_843_ = v___x_840_;
v_isShared_844_ = v_isSharedCheck_849_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_840_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_849_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_845_; lean_object* v___x_847_; 
v___x_845_ = lean_st_ref_get(v___x_839_);
lean_dec(v___x_839_);
lean_dec(v___x_845_);
if (v_isShared_844_ == 0)
{
v___x_847_ = v___x_843_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_841_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
else
{
lean_dec(v___x_839_);
return v___x_840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger___redArg___boxed(lean_object* v_goal_850_, lean_object* v_methods_851_, lean_object* v_ctx_852_, lean_object* v_s_853_, lean_object* v_e_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger___redArg(v_goal_850_, v_methods_851_, v_ctx_852_, v_s_853_, v_e_854_, v_a_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_);
lean_dec(v_a_860_);
lean_dec_ref(v_a_859_);
lean_dec(v_a_858_);
lean_dec_ref(v_a_857_);
lean_dec(v_a_856_);
lean_dec_ref(v_a_855_);
lean_dec_ref(v_ctx_852_);
lean_dec(v_methods_851_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger(lean_object* v_goal_863_, lean_object* v_methods_864_, lean_object* v_ctx_865_, lean_object* v_s_866_, lean_object* v_e_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger___redArg(v_goal_863_, v_methods_864_, v_ctx_865_, v_s_866_, v_e_867_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger___boxed(lean_object* v_goal_879_, lean_object* v_methods_880_, lean_object* v_ctx_881_, lean_object* v_s_882_, lean_object* v_e_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger(v_goal_879_, v_methods_880_, v_ctx_881_, v_s_882_, v_e_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_);
lean_dec(v_a_892_);
lean_dec_ref(v_a_891_);
lean_dec(v_a_890_);
lean_dec_ref(v_a_889_);
lean_dec(v_a_888_);
lean_dec_ref(v_a_887_);
lean_dec(v_a_886_);
lean_dec_ref(v_a_885_);
lean_dec(v_a_884_);
lean_dec_ref(v_ctx_881_);
lean_dec(v_methods_880_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_mkSymSimpDischarger___redArg(lean_object* v_goal_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_900_ = lean_st_ref_get(v_a_898_);
lean_inc_ref(v_a_897_);
lean_inc(v_a_896_);
v___x_901_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Grind_0__Lean_Meta_Grind_mkSymSimpDischarger___boxed), 15, 4);
lean_closure_set(v___x_901_, 0, v_goal_895_);
lean_closure_set(v___x_901_, 1, v_a_896_);
lean_closure_set(v___x_901_, 2, v_a_897_);
lean_closure_set(v___x_901_, 3, v___x_900_);
v___x_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_mkSymSimpDischarger___redArg___boxed(lean_object* v_goal_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lean_Meta_Grind_Goal_mkSymSimpDischarger___redArg(v_goal_903_, v_a_904_, v_a_905_, v_a_906_);
lean_dec(v_a_906_);
lean_dec_ref(v_a_905_);
lean_dec(v_a_904_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_mkSymSimpDischarger(lean_object* v_goal_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_){
_start:
{
lean_object* v___x_920_; 
v___x_920_ = l_Lean_Meta_Grind_Goal_mkSymSimpDischarger___redArg(v_goal_909_, v_a_910_, v_a_911_, v_a_912_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_mkSymSimpDischarger___boxed(lean_object* v_goal_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_Meta_Grind_Goal_mkSymSimpDischarger(v_goal_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
lean_dec(v_a_926_);
lean_dec_ref(v_a_925_);
lean_dec(v_a_924_);
lean_dec_ref(v_a_923_);
lean_dec(v_a_922_);
return v_res_932_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Apply(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Discharger(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Goal(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Intro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Solve(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Grind(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Discharger(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Goal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Grind(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Apply(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Discharger(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Goal(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Intro(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Solve(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Grind(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Discharger(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Goal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Grind(builtin);
}
#ifdef __cplusplus
}
#endif

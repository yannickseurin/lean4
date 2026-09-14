// Lean compiler output
// Module: Lean.Meta.Sym.Intro
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Tactic.Intro import Lean.Meta.Sym.InstantiateS import Lean.Meta.Sym.IsClass import Lean.Meta.Sym.AlphaShareBuilder
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevRangeS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_Sym_isClass_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshBinderNameForTacticCore___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkAppBVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_hugeNat;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_goal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_goal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_intros(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_intros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_introN(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_introN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(lean_object* v_max_1_, lean_object* v_i_2_, lean_object* v_type_3_, lean_object* v_body_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_nat_dec_le(v_max_1_, v_i_2_);
if (v___x_5_ == 0)
{
switch(lean_obj_tag(v_type_3_))
{
case 10:
{
lean_object* v_expr_6_; 
v_expr_6_ = lean_ctor_get(v_type_3_, 1);
lean_inc_ref(v_expr_6_);
lean_dec_ref_known(v_type_3_, 2);
v_type_3_ = v_expr_6_;
goto _start;
}
case 7:
{
lean_object* v_binderName_8_; lean_object* v_binderType_9_; lean_object* v_body_10_; uint8_t v_binderInfo_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_binderName_8_ = lean_ctor_get(v_type_3_, 0);
lean_inc(v_binderName_8_);
v_binderType_9_ = lean_ctor_get(v_type_3_, 1);
lean_inc_ref(v_binderType_9_);
v_body_10_ = lean_ctor_get(v_type_3_, 2);
lean_inc_ref(v_body_10_);
v_binderInfo_11_ = lean_ctor_get_uint8(v_type_3_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_3_, 3);
v___x_12_ = lean_unsigned_to_nat(1u);
v___x_13_ = lean_nat_add(v_i_2_, v___x_12_);
v___x_14_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(v_max_1_, v___x_13_, v_body_10_, v_body_4_);
lean_dec(v___x_13_);
v___x_15_ = l_Lean_mkLambda(v_binderName_8_, v_binderInfo_11_, v_binderType_9_, v___x_14_);
return v___x_15_;
}
case 8:
{
lean_object* v_declName_16_; lean_object* v_type_17_; lean_object* v_value_18_; lean_object* v_body_19_; uint8_t v_nondep_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_declName_16_ = lean_ctor_get(v_type_3_, 0);
lean_inc(v_declName_16_);
v_type_17_ = lean_ctor_get(v_type_3_, 1);
lean_inc_ref(v_type_17_);
v_value_18_ = lean_ctor_get(v_type_3_, 2);
lean_inc_ref(v_value_18_);
v_body_19_ = lean_ctor_get(v_type_3_, 3);
lean_inc_ref(v_body_19_);
v_nondep_20_ = lean_ctor_get_uint8(v_type_3_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_type_3_, 4);
v___x_21_ = lean_unsigned_to_nat(1u);
v___x_22_ = lean_nat_add(v_i_2_, v___x_21_);
v___x_23_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(v_max_1_, v___x_22_, v_body_19_, v_body_4_);
lean_dec(v___x_22_);
v___x_24_ = l_Lean_Expr_letE___override(v_declName_16_, v_type_17_, v_value_18_, v___x_23_, v_nondep_20_);
return v___x_24_;
}
default: 
{
lean_dec_ref(v_type_3_);
lean_inc_ref(v_body_4_);
return v_body_4_;
}
}
}
else
{
lean_dec_ref(v_type_3_);
lean_inc_ref(v_body_4_);
return v_body_4_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop___boxed(lean_object* v_max_25_, lean_object* v_i_26_, lean_object* v_type_27_, lean_object* v_body_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(v_max_25_, v_i_26_, v_type_27_, v_body_28_);
lean_dec_ref(v_body_28_);
lean_dec(v_i_26_);
lean_dec(v_max_25_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkAppBVars(lean_object* v_e_30_, lean_object* v_n_31_){
_start:
{
lean_object* v_zero_32_; uint8_t v_isZero_33_; 
v_zero_32_ = lean_unsigned_to_nat(0u);
v_isZero_33_ = lean_nat_dec_eq(v_n_31_, v_zero_32_);
if (v_isZero_33_ == 1)
{
lean_dec(v_n_31_);
return v_e_30_;
}
else
{
lean_object* v_one_34_; lean_object* v_n_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v_one_34_ = lean_unsigned_to_nat(1u);
v_n_35_ = lean_nat_sub(v_n_31_, v_one_34_);
lean_dec(v_n_31_);
lean_inc(v_n_35_);
v___x_36_ = l_Lean_mkBVar(v_n_35_);
v___x_37_ = l_Lean_Expr_app___override(v_e_30_, v___x_36_);
v_e_30_ = v___x_37_;
v_n_31_ = v_n_35_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(lean_object* v_fvarId_39_, lean_object* v___y_40_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = l_Lean_Expr_fvar___override(v_fvarId_39_);
v___x_43_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_42_, v___y_40_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg___boxed(lean_object* v_fvarId_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(v_fvarId_44_, v___y_45_);
lean_dec(v___y_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1(lean_object* v_fvarId_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(v_fvarId_48_, v___y_50_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___boxed(lean_object* v_fvarId_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1(v_fvarId_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg(lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; lean_object* v_ngen_69_; lean_object* v_namePrefix_70_; lean_object* v_idx_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_100_; 
v___x_68_ = lean_st_ref_get(v___y_66_);
v_ngen_69_ = lean_ctor_get(v___x_68_, 2);
lean_inc_ref(v_ngen_69_);
lean_dec(v___x_68_);
v_namePrefix_70_ = lean_ctor_get(v_ngen_69_, 0);
v_idx_71_ = lean_ctor_get(v_ngen_69_, 1);
v_isSharedCheck_100_ = !lean_is_exclusive(v_ngen_69_);
if (v_isSharedCheck_100_ == 0)
{
v___x_73_ = v_ngen_69_;
v_isShared_74_ = v_isSharedCheck_100_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_idx_71_);
lean_inc(v_namePrefix_70_);
lean_dec(v_ngen_69_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_100_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v_r_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_79_; 
lean_inc(v_idx_71_);
lean_inc(v_namePrefix_70_);
v_r_75_ = l_Lean_Name_num___override(v_namePrefix_70_, v_idx_71_);
v___x_76_ = lean_unsigned_to_nat(1u);
v___x_77_ = lean_nat_add(v_idx_71_, v___x_76_);
lean_dec(v_idx_71_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 1, v___x_77_);
v___x_79_ = v___x_73_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_namePrefix_70_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v___x_77_);
v___x_79_ = v_reuseFailAlloc_99_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
lean_object* v___x_80_; lean_object* v_env_81_; lean_object* v_nextMacroScope_82_; lean_object* v_auxDeclNGen_83_; lean_object* v_traceState_84_; lean_object* v_cache_85_; lean_object* v_messages_86_; lean_object* v_infoState_87_; lean_object* v_snapshotTasks_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_97_; 
v___x_80_ = lean_st_ref_take(v___y_66_);
v_env_81_ = lean_ctor_get(v___x_80_, 0);
v_nextMacroScope_82_ = lean_ctor_get(v___x_80_, 1);
v_auxDeclNGen_83_ = lean_ctor_get(v___x_80_, 3);
v_traceState_84_ = lean_ctor_get(v___x_80_, 4);
v_cache_85_ = lean_ctor_get(v___x_80_, 5);
v_messages_86_ = lean_ctor_get(v___x_80_, 6);
v_infoState_87_ = lean_ctor_get(v___x_80_, 7);
v_snapshotTasks_88_ = lean_ctor_get(v___x_80_, 8);
v_isSharedCheck_97_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_97_ == 0)
{
lean_object* v_unused_98_; 
v_unused_98_ = lean_ctor_get(v___x_80_, 2);
lean_dec(v_unused_98_);
v___x_90_ = v___x_80_;
v_isShared_91_ = v_isSharedCheck_97_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_snapshotTasks_88_);
lean_inc(v_infoState_87_);
lean_inc(v_messages_86_);
lean_inc(v_cache_85_);
lean_inc(v_traceState_84_);
lean_inc(v_auxDeclNGen_83_);
lean_inc(v_nextMacroScope_82_);
lean_inc(v_env_81_);
lean_dec(v___x_80_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_97_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_93_; 
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 2, v___x_79_);
v___x_93_ = v___x_90_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_env_81_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v_nextMacroScope_82_);
lean_ctor_set(v_reuseFailAlloc_96_, 2, v___x_79_);
lean_ctor_set(v_reuseFailAlloc_96_, 3, v_auxDeclNGen_83_);
lean_ctor_set(v_reuseFailAlloc_96_, 4, v_traceState_84_);
lean_ctor_set(v_reuseFailAlloc_96_, 5, v_cache_85_);
lean_ctor_set(v_reuseFailAlloc_96_, 6, v_messages_86_);
lean_ctor_set(v_reuseFailAlloc_96_, 7, v_infoState_87_);
lean_ctor_set(v_reuseFailAlloc_96_, 8, v_snapshotTasks_88_);
v___x_93_ = v_reuseFailAlloc_96_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_st_ref_put(v___y_66_, v___x_93_);
v___x_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_95_, 0, v_r_75_);
return v___x_95_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg___boxed(lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg(v___y_101_);
lean_dec(v___y_101_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0(lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_){
_start:
{
lean_object* v___x_111_; lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
v___x_111_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg(v___y_109_);
v_a_112_ = lean_ctor_get(v___x_111_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_111_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v___x_111_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_111_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0___boxed(lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0(v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit(lean_object* v_max_128_, lean_object* v_finalize_129_, lean_object* v_mkName_130_, lean_object* v_updateLocalInsts_131_, lean_object* v_i_132_, lean_object* v_lctx_133_, lean_object* v_localInsts_134_, lean_object* v_fvars_135_, lean_object* v_type_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
uint8_t v___x_144_; 
v___x_144_ = lean_nat_dec_le(v_max_128_, v_i_132_);
if (v___x_144_ == 0)
{
switch(lean_obj_tag(v_type_136_))
{
case 10:
{
lean_object* v_expr_145_; 
v_expr_145_ = lean_ctor_get(v_type_136_, 1);
lean_inc_ref(v_expr_145_);
lean_dec_ref_known(v_type_136_, 2);
v_type_136_ = v_expr_145_;
goto _start;
}
case 7:
{
lean_object* v_binderName_147_; lean_object* v_binderType_148_; lean_object* v_body_149_; uint8_t v_binderInfo_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v_binderName_147_ = lean_ctor_get(v_type_136_, 0);
lean_inc(v_binderName_147_);
v_binderType_148_ = lean_ctor_get(v_type_136_, 1);
lean_inc_ref(v_binderType_148_);
v_body_149_ = lean_ctor_get(v_type_136_, 2);
lean_inc_ref(v_body_149_);
v_binderInfo_150_ = lean_ctor_get_uint8(v_type_136_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_136_, 3);
v___x_151_ = lean_unsigned_to_nat(0u);
v___x_152_ = lean_array_get_size(v_fvars_135_);
lean_inc_ref(v_fvars_135_);
v___x_153_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_binderType_148_, v___x_151_, v___x_152_, v_fvars_135_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_);
if (lean_obj_tag(v___x_153_) == 0)
{
lean_object* v_a_154_; lean_object* v___x_155_; 
v_a_154_ = lean_ctor_get(v___x_153_, 0);
lean_inc(v_a_154_);
lean_dec_ref_known(v___x_153_, 1);
v___x_155_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0(v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v_a_156_; lean_object* v___x_157_; 
v_a_156_ = lean_ctor_get(v___x_155_, 0);
lean_inc(v_a_156_);
lean_dec_ref_known(v___x_155_, 1);
lean_inc_ref(v_mkName_130_);
lean_inc(v_a_142_);
lean_inc_ref(v_a_141_);
lean_inc(v_a_140_);
lean_inc_ref(v_a_139_);
lean_inc(v_i_132_);
lean_inc_ref(v_lctx_133_);
v___x_157_ = lean_apply_8(v_mkName_130_, v_lctx_133_, v_binderName_147_, v_i_132_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, lean_box(0));
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v_a_158_; uint8_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_a_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_a_158_);
lean_dec_ref_known(v___x_157_, 1);
v___x_159_ = 0;
lean_inc(v_a_154_);
lean_inc(v_a_156_);
v___x_160_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_133_, v_a_156_, v_a_158_, v_a_154_, v_binderInfo_150_, v___x_159_);
v___x_161_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(v_a_156_, v_a_138_);
if (lean_obj_tag(v___x_161_) == 0)
{
lean_object* v_a_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v_a_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc_n(v_a_162_, 2);
lean_dec_ref_known(v___x_161_, 1);
v___x_163_ = lean_array_push(v_fvars_135_, v_a_162_);
lean_inc_ref(v_updateLocalInsts_131_);
v___x_164_ = lean_apply_3(v_updateLocalInsts_131_, v_localInsts_134_, v_a_162_, v_a_154_);
v___x_165_ = lean_unsigned_to_nat(1u);
v___x_166_ = lean_nat_add(v_i_132_, v___x_165_);
lean_dec(v_i_132_);
v_i_132_ = v___x_166_;
v_lctx_133_ = v___x_160_;
v_localInsts_134_ = v___x_164_;
v_fvars_135_ = v___x_163_;
v_type_136_ = v_body_149_;
goto _start;
}
else
{
lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
lean_dec_ref(v___x_160_);
lean_dec(v_a_154_);
lean_dec_ref(v_body_149_);
lean_dec_ref(v_fvars_135_);
lean_dec_ref(v_localInsts_134_);
lean_dec(v_i_132_);
lean_dec_ref(v_updateLocalInsts_131_);
lean_dec_ref(v_mkName_130_);
lean_dec_ref(v_finalize_129_);
v_a_168_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_175_ == 0)
{
v___x_170_ = v___x_161_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_161_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_171_ == 0)
{
v___x_173_ = v___x_170_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_a_168_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
else
{
lean_object* v_a_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_183_; 
lean_dec(v_a_156_);
lean_dec(v_a_154_);
lean_dec_ref(v_body_149_);
lean_dec_ref(v_fvars_135_);
lean_dec_ref(v_localInsts_134_);
lean_dec_ref(v_lctx_133_);
lean_dec(v_i_132_);
lean_dec_ref(v_updateLocalInsts_131_);
lean_dec_ref(v_mkName_130_);
lean_dec_ref(v_finalize_129_);
v_a_176_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_183_ == 0)
{
v___x_178_ = v___x_157_;
v_isShared_179_ = v_isSharedCheck_183_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_a_176_);
lean_dec(v___x_157_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_183_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_181_; 
if (v_isShared_179_ == 0)
{
v___x_181_ = v___x_178_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_a_176_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_dec(v_a_154_);
lean_dec_ref(v_body_149_);
lean_dec(v_binderName_147_);
lean_dec_ref(v_fvars_135_);
lean_dec_ref(v_localInsts_134_);
lean_dec_ref(v_lctx_133_);
lean_dec(v_i_132_);
lean_dec_ref(v_updateLocalInsts_131_);
lean_dec_ref(v_mkName_130_);
lean_dec_ref(v_finalize_129_);
v_a_184_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_155_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_155_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
else
{
lean_object* v_a_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_199_; 
lean_dec_ref(v_body_149_);
lean_dec(v_binderName_147_);
lean_dec_ref(v_fvars_135_);
lean_dec_ref(v_localInsts_134_);
lean_dec_ref(v_lctx_133_);
lean_dec(v_i_132_);
lean_dec_ref(v_updateLocalInsts_131_);
lean_dec_ref(v_mkName_130_);
lean_dec_ref(v_finalize_129_);
v_a_192_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_199_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_199_ == 0)
{
v___x_194_ = v___x_153_;
v_isShared_195_ = v_isSharedCheck_199_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_a_192_);
lean_dec(v___x_153_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_199_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_197_; 
if (v_isShared_195_ == 0)
{
v___x_197_ = v___x_194_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v_a_192_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
case 8:
{
lean_object* v_declName_200_; lean_object* v_type_201_; lean_object* v_value_202_; lean_object* v_body_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v_declName_200_ = lean_ctor_get(v_type_136_, 0);
lean_inc(v_declName_200_);
v_type_201_ = lean_ctor_get(v_type_136_, 1);
lean_inc_ref(v_type_201_);
v_value_202_ = lean_ctor_get(v_type_136_, 2);
lean_inc_ref(v_value_202_);
v_body_203_ = lean_ctor_get(v_type_136_, 3);
lean_inc_ref(v_body_203_);
lean_dec_ref_known(v_type_136_, 4);
v___x_204_ = lean_unsigned_to_nat(0u);
v___x_205_ = lean_array_get_size(v_fvars_135_);
lean_inc_ref(v_fvars_135_);
v___x_206_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_type_201_, v___x_204_, v___x_205_, v_fvars_135_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_);
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v_a_207_; lean_object* v___x_208_; 
v_a_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_a_207_);
lean_dec_ref_known(v___x_206_, 1);
lean_inc_ref(v_fvars_135_);
v___x_208_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_value_202_, v___x_204_, v___x_205_, v_fvars_135_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v_a_209_; lean_object* v___x_210_; 
v_a_209_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_a_209_);
lean_dec_ref_known(v___x_208_, 1);
v___x_210_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0(v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_212_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
lean_inc(v_a_211_);
lean_dec_ref_known(v___x_210_, 1);
lean_inc_ref(v_mkName_130_);
lean_inc(v_a_142_);
lean_inc_ref(v_a_141_);
lean_inc(v_a_140_);
lean_inc_ref(v_a_139_);
lean_inc(v_i_132_);
lean_inc_ref(v_lctx_133_);
v___x_212_ = lean_apply_8(v_mkName_130_, v_lctx_133_, v_declName_200_, v_i_132_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, lean_box(0));
if (lean_obj_tag(v___x_212_) == 0)
{
lean_object* v_a_213_; uint8_t v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v_a_213_ = lean_ctor_get(v___x_212_, 0);
lean_inc(v_a_213_);
lean_dec_ref_known(v___x_212_, 1);
v___x_214_ = 0;
lean_inc(v_a_207_);
lean_inc(v_a_211_);
v___x_215_ = l_Lean_LocalContext_mkLetDecl(v_lctx_133_, v_a_211_, v_a_213_, v_a_207_, v_a_209_, v___x_144_, v___x_214_);
v___x_216_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__1___redArg(v_a_211_, v_a_138_);
if (lean_obj_tag(v___x_216_) == 0)
{
lean_object* v_a_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v_a_217_ = lean_ctor_get(v___x_216_, 0);
lean_inc_n(v_a_217_, 2);
lean_dec_ref_known(v___x_216_, 1);
v___x_218_ = lean_array_push(v_fvars_135_, v_a_217_);
lean_inc_ref(v_updateLocalInsts_131_);
v___x_219_ = lean_apply_3(v_updateLocalInsts_131_, v_localInsts_134_, v_a_217_, v_a_207_);
v___x_220_ = lean_unsigned_to_nat(1u);
v___x_221_ = lean_nat_add(v_i_132_, v___x_220_);
lean_dec(v_i_132_);
v_i_132_ = v___x_221_;
v_lctx_133_ = v___x_215_;
v_localInsts_134_ = v___x_219_;
v_fvars_135_ = v___x_218_;
v_type_136_ = v_body_203_;
goto _start;
}
else
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_230_; 
lean_dec_ref(v___x_215_);
lean_dec(v_a_207_);
lean_dec_ref(v_body_203_);
lean_dec_ref(v_fvars_135_);
lean_dec_ref(v_localInsts_134_);
lean_dec(v_i_132_);
lean_dec_ref(v_updateLocalInsts_131_);
lean_dec_ref(v_mkName_130_);
lean_dec_ref(v_finalize_129_);
v_a_223_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_230_ == 0)
{
v___x_225_ = v___x_216_;
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v___x_216_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_228_; 
if (v_isShared_226_ == 0)
{
v___x_228_ = v___x_225_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_a_223_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
}
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
lean_dec(v_a_211_);
lean_dec(v_a_209_);
lean_dec(v_a_207_);
lean_dec_ref(v_body_203_);
lean_dec_ref(v_fvars_135_);
lean_dec_ref(v_localInsts_134_);
lean_dec_ref(v_lctx_133_);
lean_dec(v_i_132_);
lean_dec_ref(v_updateLocalInsts_131_);
lean_dec_ref(v_mkName_130_);
lean_dec_ref(v_finalize_129_);
v_a_231_ = lean_ctor_get(v___x_212_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_212_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_212_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
else
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
lean_dec(v_a_209_);
lean_dec(v_a_207_);
lean_dec_ref(v_body_203_);
lean_dec(v_declName_200_);
lean_dec_ref(v_fvars_135_);
lean_dec_ref(v_localInsts_134_);
lean_dec_ref(v_lctx_133_);
lean_dec(v_i_132_);
lean_dec_ref(v_updateLocalInsts_131_);
lean_dec_ref(v_mkName_130_);
lean_dec_ref(v_finalize_129_);
v_a_239_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___x_210_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_210_);
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
lean_dec(v_a_207_);
lean_dec_ref(v_body_203_);
lean_dec(v_declName_200_);
lean_dec_ref(v_fvars_135_);
lean_dec_ref(v_localInsts_134_);
lean_dec_ref(v_lctx_133_);
lean_dec(v_i_132_);
lean_dec_ref(v_updateLocalInsts_131_);
lean_dec_ref(v_mkName_130_);
lean_dec_ref(v_finalize_129_);
v_a_247_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_254_ == 0)
{
v___x_249_ = v___x_208_;
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_208_);
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
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
lean_dec_ref(v_body_203_);
lean_dec_ref(v_value_202_);
lean_dec(v_declName_200_);
lean_dec_ref(v_fvars_135_);
lean_dec_ref(v_localInsts_134_);
lean_dec_ref(v_lctx_133_);
lean_dec(v_i_132_);
lean_dec_ref(v_updateLocalInsts_131_);
lean_dec_ref(v_mkName_130_);
lean_dec_ref(v_finalize_129_);
v_a_255_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_262_ == 0)
{
v___x_257_ = v___x_206_;
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_206_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_255_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
default: 
{
lean_object* v___x_263_; 
lean_dec(v_i_132_);
lean_dec_ref(v_updateLocalInsts_131_);
lean_dec_ref(v_mkName_130_);
lean_inc(v_a_142_);
lean_inc_ref(v_a_141_);
lean_inc(v_a_140_);
lean_inc_ref(v_a_139_);
lean_inc(v_a_138_);
lean_inc_ref(v_a_137_);
v___x_263_ = lean_apply_11(v_finalize_129_, v_lctx_133_, v_localInsts_134_, v_fvars_135_, v_type_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, lean_box(0));
return v___x_263_;
}
}
}
else
{
lean_object* v___x_264_; 
lean_dec(v_i_132_);
lean_dec_ref(v_updateLocalInsts_131_);
lean_dec_ref(v_mkName_130_);
lean_inc(v_a_142_);
lean_inc_ref(v_a_141_);
lean_inc(v_a_140_);
lean_inc_ref(v_a_139_);
lean_inc(v_a_138_);
lean_inc_ref(v_a_137_);
v___x_264_ = lean_apply_11(v_finalize_129_, v_lctx_133_, v_localInsts_134_, v_fvars_135_, v_type_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, lean_box(0));
return v___x_264_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit___boxed(lean_object* v_max_265_, lean_object* v_finalize_266_, lean_object* v_mkName_267_, lean_object* v_updateLocalInsts_268_, lean_object* v_i_269_, lean_object* v_lctx_270_, lean_object* v_localInsts_271_, lean_object* v_fvars_272_, lean_object* v_type_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit(v_max_265_, v_finalize_266_, v_mkName_267_, v_updateLocalInsts_268_, v_i_269_, v_lctx_270_, v_localInsts_271_, v_fvars_272_, v_type_273_, v_a_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_);
lean_dec(v_a_279_);
lean_dec_ref(v_a_278_);
lean_dec(v_a_277_);
lean_dec_ref(v_a_276_);
lean_dec(v_a_275_);
lean_dec_ref(v_a_274_);
lean_dec(v_max_265_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0(lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___redArg(v___y_287_);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0___boxed(lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit_spec__0_spec__0(v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
lean_dec(v___y_293_);
lean_dec_ref(v___y_292_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0(lean_object* v_names_298_, uint8_t v_hygienic_299_, lean_object* v_lctx_300_, lean_object* v_binderName_301_, lean_object* v_i_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___x_308_; uint8_t v___x_309_; 
v___x_308_ = lean_array_get_size(v_names_298_);
v___x_309_ = lean_nat_dec_lt(v_i_302_, v___x_308_);
if (v___x_309_ == 0)
{
lean_object* v___x_310_; 
v___x_310_ = l_Lean_Meta_mkFreshBinderNameForTacticCore___redArg(v_lctx_300_, v_binderName_301_, v_hygienic_299_, v___y_305_, v___y_306_);
return v___x_310_;
}
else
{
lean_object* v___x_311_; lean_object* v___x_312_; 
lean_dec(v_binderName_301_);
v___x_311_ = lean_array_fget_borrowed(v_names_298_, v_i_302_);
lean_inc(v___x_311_);
v___x_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
return v___x_312_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0___boxed(lean_object* v_names_313_, lean_object* v_hygienic_314_, lean_object* v_lctx_315_, lean_object* v_binderName_316_, lean_object* v_i_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
uint8_t v_hygienic_boxed_323_; lean_object* v_res_324_; 
v_hygienic_boxed_323_ = lean_unbox(v_hygienic_314_);
v_res_324_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0(v_names_313_, v_hygienic_boxed_323_, v_lctx_315_, v_binderName_316_, v_i_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
lean_dec(v_i_317_);
lean_dec_ref(v_lctx_315_);
lean_dec_ref(v_names_313_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1(lean_object* v_env_325_, lean_object* v_localInsts_326_, lean_object* v_fvar_327_, lean_object* v_type_328_){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = l_Lean_Meta_Sym_isClass_x3f(v_env_325_, v_type_328_);
if (lean_obj_tag(v___x_329_) == 1)
{
lean_object* v_val_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v_val_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_val_330_);
lean_dec_ref_known(v___x_329_, 1);
v___x_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_331_, 0, v_val_330_);
lean_ctor_set(v___x_331_, 1, v_fvar_327_);
v___x_332_ = lean_array_push(v_localInsts_326_, v___x_331_);
return v___x_332_;
}
else
{
lean_dec(v___x_329_);
lean_dec_ref(v_fvar_327_);
return v_localInsts_326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1___boxed(lean_object* v_env_333_, lean_object* v_localInsts_334_, lean_object* v_fvar_335_, lean_object* v_type_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1(v_env_333_, v_localInsts_334_, v_fvar_335_, v_type_336_);
lean_dec_ref(v_type_336_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(lean_object* v_x_338_, lean_object* v_x_339_, lean_object* v_x_340_, lean_object* v_x_341_){
_start:
{
lean_object* v_ks_342_; lean_object* v_vs_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_367_; 
v_ks_342_ = lean_ctor_get(v_x_338_, 0);
v_vs_343_ = lean_ctor_get(v_x_338_, 1);
v_isSharedCheck_367_ = !lean_is_exclusive(v_x_338_);
if (v_isSharedCheck_367_ == 0)
{
v___x_345_ = v_x_338_;
v_isShared_346_ = v_isSharedCheck_367_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_vs_343_);
lean_inc(v_ks_342_);
lean_dec(v_x_338_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_367_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_347_; uint8_t v___x_348_; 
v___x_347_ = lean_array_get_size(v_ks_342_);
v___x_348_ = lean_nat_dec_lt(v_x_339_, v___x_347_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_352_; 
lean_dec(v_x_339_);
v___x_349_ = lean_array_push(v_ks_342_, v_x_340_);
v___x_350_ = lean_array_push(v_vs_343_, v_x_341_);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 1, v___x_350_);
lean_ctor_set(v___x_345_, 0, v___x_349_);
v___x_352_ = v___x_345_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v___x_350_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
else
{
lean_object* v_k_x27_354_; uint8_t v___x_355_; 
v_k_x27_354_ = lean_array_fget_borrowed(v_ks_342_, v_x_339_);
v___x_355_ = l_Lean_instBEqMVarId_beq(v_x_340_, v_k_x27_354_);
if (v___x_355_ == 0)
{
lean_object* v___x_357_; 
if (v_isShared_346_ == 0)
{
v___x_357_ = v___x_345_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_ks_342_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_vs_343_);
v___x_357_ = v_reuseFailAlloc_361_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_unsigned_to_nat(1u);
v___x_359_ = lean_nat_add(v_x_339_, v___x_358_);
lean_dec(v_x_339_);
v_x_338_ = v___x_357_;
v_x_339_ = v___x_359_;
goto _start;
}
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_362_ = lean_array_fset(v_ks_342_, v_x_339_, v_x_340_);
v___x_363_ = lean_array_fset(v_vs_343_, v_x_339_, v_x_341_);
lean_dec(v_x_339_);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 1, v___x_363_);
lean_ctor_set(v___x_345_, 0, v___x_362_);
v___x_365_ = v___x_345_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_362_);
lean_ctor_set(v_reuseFailAlloc_366_, 1, v___x_363_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_n_368_, lean_object* v_k_369_, lean_object* v_v_370_){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_unsigned_to_nat(0u);
v___x_372_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(v_n_368_, v___x_371_, v_k_369_, v_v_370_);
return v___x_372_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_box(0);
v___x_374_ = l_unsafeCast___redArg(v___x_373_);
return v___x_374_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(lean_object* v_x_376_, size_t v_x_377_, size_t v_x_378_, lean_object* v_x_379_, lean_object* v_x_380_){
_start:
{
if (lean_obj_tag(v_x_376_) == 0)
{
lean_object* v_es_381_; size_t v___x_382_; size_t v___x_383_; lean_object* v_j_384_; lean_object* v___x_385_; uint8_t v___x_386_; 
v_es_381_ = lean_ctor_get(v_x_376_, 0);
v___x_382_ = ((size_t)31ULL);
v___x_383_ = lean_usize_land(v_x_377_, v___x_382_);
v_j_384_ = lean_usize_to_nat(v___x_383_);
v___x_385_ = lean_array_get_size(v_es_381_);
v___x_386_ = lean_nat_dec_lt(v_j_384_, v___x_385_);
if (v___x_386_ == 0)
{
lean_dec(v_j_384_);
lean_dec(v_x_380_);
lean_dec(v_x_379_);
return v_x_376_;
}
else
{
lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_425_; 
lean_inc_ref(v_es_381_);
v_isSharedCheck_425_ = !lean_is_exclusive(v_x_376_);
if (v_isSharedCheck_425_ == 0)
{
lean_object* v_unused_426_; 
v_unused_426_ = lean_ctor_get(v_x_376_, 0);
lean_dec(v_unused_426_);
v___x_388_ = v_x_376_;
v_isShared_389_ = v_isSharedCheck_425_;
goto v_resetjp_387_;
}
else
{
lean_dec(v_x_376_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_425_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v_v_390_; lean_object* v___x_391_; lean_object* v_xs_x27_392_; lean_object* v___y_394_; 
v_v_390_ = lean_array_fget(v_es_381_, v_j_384_);
v___x_391_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__0);
v_xs_x27_392_ = lean_array_fset(v_es_381_, v_j_384_, v___x_391_);
switch(lean_obj_tag(v_v_390_))
{
case 0:
{
lean_object* v_key_399_; lean_object* v_val_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_410_; 
v_key_399_ = lean_ctor_get(v_v_390_, 0);
v_val_400_ = lean_ctor_get(v_v_390_, 1);
v_isSharedCheck_410_ = !lean_is_exclusive(v_v_390_);
if (v_isSharedCheck_410_ == 0)
{
v___x_402_ = v_v_390_;
v_isShared_403_ = v_isSharedCheck_410_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_val_400_);
lean_inc(v_key_399_);
lean_dec(v_v_390_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_410_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
uint8_t v___x_404_; 
v___x_404_ = l_Lean_instBEqMVarId_beq(v_x_379_, v_key_399_);
if (v___x_404_ == 0)
{
lean_object* v___x_405_; lean_object* v___x_406_; 
lean_del_object(v___x_402_);
v___x_405_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_399_, v_val_400_, v_x_379_, v_x_380_);
v___x_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
v___y_394_ = v___x_406_;
goto v___jp_393_;
}
else
{
lean_object* v___x_408_; 
lean_dec(v_val_400_);
lean_dec(v_key_399_);
if (v_isShared_403_ == 0)
{
lean_ctor_set(v___x_402_, 1, v_x_380_);
lean_ctor_set(v___x_402_, 0, v_x_379_);
v___x_408_ = v___x_402_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_x_379_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v_x_380_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
v___y_394_ = v___x_408_;
goto v___jp_393_;
}
}
}
}
case 1:
{
lean_object* v_node_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_423_; 
v_node_411_ = lean_ctor_get(v_v_390_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v_v_390_);
if (v_isSharedCheck_423_ == 0)
{
v___x_413_ = v_v_390_;
v_isShared_414_ = v_isSharedCheck_423_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_node_411_);
lean_dec(v_v_390_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_423_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
size_t v___x_415_; size_t v___x_416_; size_t v___x_417_; size_t v___x_418_; lean_object* v___x_419_; lean_object* v___x_421_; 
v___x_415_ = ((size_t)5ULL);
v___x_416_ = lean_usize_shift_right(v_x_377_, v___x_415_);
v___x_417_ = ((size_t)1ULL);
v___x_418_ = lean_usize_add(v_x_378_, v___x_417_);
v___x_419_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(v_node_411_, v___x_416_, v___x_418_, v_x_379_, v_x_380_);
if (v_isShared_414_ == 0)
{
lean_ctor_set(v___x_413_, 0, v___x_419_);
v___x_421_ = v___x_413_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_419_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
v___y_394_ = v___x_421_;
goto v___jp_393_;
}
}
}
default: 
{
lean_object* v___x_424_; 
v___x_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_424_, 0, v_x_379_);
lean_ctor_set(v___x_424_, 1, v_x_380_);
v___y_394_ = v___x_424_;
goto v___jp_393_;
}
}
v___jp_393_:
{
lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_395_ = lean_array_fset(v_xs_x27_392_, v_j_384_, v___y_394_);
lean_dec(v_j_384_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v___x_395_);
v___x_397_ = v___x_388_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v___x_395_);
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
else
{
lean_object* v_ks_427_; lean_object* v_vs_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_446_; 
v_ks_427_ = lean_ctor_get(v_x_376_, 0);
v_vs_428_ = lean_ctor_get(v_x_376_, 1);
v_isSharedCheck_446_ = !lean_is_exclusive(v_x_376_);
if (v_isSharedCheck_446_ == 0)
{
v___x_430_ = v_x_376_;
v_isShared_431_ = v_isSharedCheck_446_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_vs_428_);
lean_inc(v_ks_427_);
lean_dec(v_x_376_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_446_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_ks_427_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_vs_428_);
v___x_433_ = v_reuseFailAlloc_445_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v_newNode_434_; size_t v___x_435_; uint8_t v___x_436_; 
v_newNode_434_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4___redArg(v___x_433_, v_x_379_, v_x_380_);
v___x_435_ = ((size_t)7ULL);
v___x_436_ = lean_usize_dec_le(v___x_435_, v_x_378_);
if (v___x_436_ == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_437_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_434_);
v___x_438_ = lean_unsigned_to_nat(4u);
v___x_439_ = lean_nat_dec_lt(v___x_437_, v___x_438_);
lean_dec(v___x_437_);
if (v___x_439_ == 0)
{
lean_object* v_ks_440_; lean_object* v_vs_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_ks_440_ = lean_ctor_get(v_newNode_434_, 0);
lean_inc_ref(v_ks_440_);
v_vs_441_ = lean_ctor_get(v_newNode_434_, 1);
lean_inc_ref(v_vs_441_);
lean_dec_ref(v_newNode_434_);
v___x_442_ = lean_unsigned_to_nat(0u);
v___x_443_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_444_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg(v_x_378_, v_ks_440_, v_vs_441_, v___x_442_, v___x_443_);
lean_dec_ref(v_vs_441_);
lean_dec_ref(v_ks_440_);
return v___x_444_;
}
else
{
return v_newNode_434_;
}
}
else
{
return v_newNode_434_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg(size_t v_depth_447_, lean_object* v_keys_448_, lean_object* v_vals_449_, lean_object* v_i_450_, lean_object* v_entries_451_){
_start:
{
lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_452_ = lean_array_get_size(v_keys_448_);
v___x_453_ = lean_nat_dec_lt(v_i_450_, v___x_452_);
if (v___x_453_ == 0)
{
lean_dec(v_i_450_);
return v_entries_451_;
}
else
{
lean_object* v_k_454_; lean_object* v_v_455_; uint64_t v___x_456_; size_t v_h_457_; size_t v___x_458_; lean_object* v___x_459_; size_t v___x_460_; size_t v___x_461_; size_t v___x_462_; size_t v_h_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_k_454_ = lean_array_fget_borrowed(v_keys_448_, v_i_450_);
v_v_455_ = lean_array_fget_borrowed(v_vals_449_, v_i_450_);
v___x_456_ = l_Lean_instHashableMVarId_hash(v_k_454_);
v_h_457_ = lean_uint64_to_usize(v___x_456_);
v___x_458_ = ((size_t)5ULL);
v___x_459_ = lean_unsigned_to_nat(1u);
v___x_460_ = ((size_t)1ULL);
v___x_461_ = lean_usize_sub(v_depth_447_, v___x_460_);
v___x_462_ = lean_usize_mul(v___x_458_, v___x_461_);
v_h_463_ = lean_usize_shift_right(v_h_457_, v___x_462_);
v___x_464_ = lean_nat_add(v_i_450_, v___x_459_);
lean_dec(v_i_450_);
lean_inc(v_v_455_);
lean_inc(v_k_454_);
v___x_465_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(v_entries_451_, v_h_463_, v_depth_447_, v_k_454_, v_v_455_);
v_i_450_ = v___x_464_;
v_entries_451_ = v___x_465_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_depth_467_, lean_object* v_keys_468_, lean_object* v_vals_469_, lean_object* v_i_470_, lean_object* v_entries_471_){
_start:
{
size_t v_depth_boxed_472_; lean_object* v_res_473_; 
v_depth_boxed_472_ = lean_unbox_usize(v_depth_467_);
lean_dec(v_depth_467_);
v_res_473_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg(v_depth_boxed_472_, v_keys_468_, v_vals_469_, v_i_470_, v_entries_471_);
lean_dec_ref(v_vals_469_);
lean_dec_ref(v_keys_468_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_474_, lean_object* v_x_475_, lean_object* v_x_476_, lean_object* v_x_477_, lean_object* v_x_478_){
_start:
{
size_t v_x_5237__boxed_479_; size_t v_x_5238__boxed_480_; lean_object* v_res_481_; 
v_x_5237__boxed_479_ = lean_unbox_usize(v_x_475_);
lean_dec(v_x_475_);
v_x_5238__boxed_480_ = lean_unbox_usize(v_x_476_);
lean_dec(v_x_476_);
v_res_481_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(v_x_474_, v_x_5237__boxed_479_, v_x_5238__boxed_480_, v_x_477_, v_x_478_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0___redArg(lean_object* v_x_482_, lean_object* v_x_483_, lean_object* v_x_484_){
_start:
{
uint64_t v___x_485_; size_t v___x_486_; size_t v___x_487_; lean_object* v___x_488_; 
v___x_485_ = l_Lean_instHashableMVarId_hash(v_x_483_);
v___x_486_ = lean_uint64_to_usize(v___x_485_);
v___x_487_ = ((size_t)1ULL);
v___x_488_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(v_x_482_, v___x_486_, v___x_487_, v_x_483_, v_x_484_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg(lean_object* v_mvarId_489_, lean_object* v_val_490_, lean_object* v___y_491_){
_start:
{
lean_object* v___x_493_; lean_object* v_mctx_494_; lean_object* v_cache_495_; lean_object* v_zetaDeltaFVarIds_496_; lean_object* v_postponed_497_; lean_object* v_diag_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_527_; 
v___x_493_ = lean_st_ref_take(v___y_491_);
v_mctx_494_ = lean_ctor_get(v___x_493_, 0);
v_cache_495_ = lean_ctor_get(v___x_493_, 1);
v_zetaDeltaFVarIds_496_ = lean_ctor_get(v___x_493_, 2);
v_postponed_497_ = lean_ctor_get(v___x_493_, 3);
v_diag_498_ = lean_ctor_get(v___x_493_, 4);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_493_);
if (v_isSharedCheck_527_ == 0)
{
v___x_500_ = v___x_493_;
v_isShared_501_ = v_isSharedCheck_527_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_diag_498_);
lean_inc(v_postponed_497_);
lean_inc(v_zetaDeltaFVarIds_496_);
lean_inc(v_cache_495_);
lean_inc(v_mctx_494_);
lean_dec(v___x_493_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_527_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v_depth_502_; lean_object* v_levelAssignDepth_503_; lean_object* v_lmvarCounter_504_; lean_object* v_mvarCounter_505_; lean_object* v_lDecls_506_; lean_object* v_decls_507_; lean_object* v_userNames_508_; lean_object* v_lAssignment_509_; lean_object* v_eAssignment_510_; lean_object* v_dAssignment_511_; lean_object* v_instanceTypedMVars_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_526_; 
v_depth_502_ = lean_ctor_get(v_mctx_494_, 0);
v_levelAssignDepth_503_ = lean_ctor_get(v_mctx_494_, 1);
v_lmvarCounter_504_ = lean_ctor_get(v_mctx_494_, 2);
v_mvarCounter_505_ = lean_ctor_get(v_mctx_494_, 3);
v_lDecls_506_ = lean_ctor_get(v_mctx_494_, 4);
v_decls_507_ = lean_ctor_get(v_mctx_494_, 5);
v_userNames_508_ = lean_ctor_get(v_mctx_494_, 6);
v_lAssignment_509_ = lean_ctor_get(v_mctx_494_, 7);
v_eAssignment_510_ = lean_ctor_get(v_mctx_494_, 8);
v_dAssignment_511_ = lean_ctor_get(v_mctx_494_, 9);
v_instanceTypedMVars_512_ = lean_ctor_get(v_mctx_494_, 10);
v_isSharedCheck_526_ = !lean_is_exclusive(v_mctx_494_);
if (v_isSharedCheck_526_ == 0)
{
v___x_514_ = v_mctx_494_;
v_isShared_515_ = v_isSharedCheck_526_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_instanceTypedMVars_512_);
lean_inc(v_dAssignment_511_);
lean_inc(v_eAssignment_510_);
lean_inc(v_lAssignment_509_);
lean_inc(v_userNames_508_);
lean_inc(v_decls_507_);
lean_inc(v_lDecls_506_);
lean_inc(v_mvarCounter_505_);
lean_inc(v_lmvarCounter_504_);
lean_inc(v_levelAssignDepth_503_);
lean_inc(v_depth_502_);
lean_dec(v_mctx_494_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_526_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_519_; 
v___x_516_ = lean_box(0);
v___x_517_ = l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0___redArg(v_eAssignment_510_, v_mvarId_489_, v_val_490_);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 8, v___x_517_);
v___x_519_ = v___x_514_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_depth_502_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_levelAssignDepth_503_);
lean_ctor_set(v_reuseFailAlloc_525_, 2, v_lmvarCounter_504_);
lean_ctor_set(v_reuseFailAlloc_525_, 3, v_mvarCounter_505_);
lean_ctor_set(v_reuseFailAlloc_525_, 4, v_lDecls_506_);
lean_ctor_set(v_reuseFailAlloc_525_, 5, v_decls_507_);
lean_ctor_set(v_reuseFailAlloc_525_, 6, v_userNames_508_);
lean_ctor_set(v_reuseFailAlloc_525_, 7, v_lAssignment_509_);
lean_ctor_set(v_reuseFailAlloc_525_, 8, v___x_517_);
lean_ctor_set(v_reuseFailAlloc_525_, 9, v_dAssignment_511_);
lean_ctor_set(v_reuseFailAlloc_525_, 10, v_instanceTypedMVars_512_);
v___x_519_ = v_reuseFailAlloc_525_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
lean_object* v___x_521_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 0, v___x_519_);
v___x_521_ = v___x_500_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_524_, 1, v_cache_495_);
lean_ctor_set(v_reuseFailAlloc_524_, 2, v_zetaDeltaFVarIds_496_);
lean_ctor_set(v_reuseFailAlloc_524_, 3, v_postponed_497_);
lean_ctor_set(v_reuseFailAlloc_524_, 4, v_diag_498_);
v___x_521_ = v_reuseFailAlloc_524_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = lean_st_ref_put(v___y_491_, v___x_521_);
v___x_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_523_, 0, v___x_516_);
return v___x_523_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg___boxed(lean_object* v_mvarId_528_, lean_object* v_val_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg(v_mvarId_528_, v_val_529_, v___y_530_);
lean_dec(v___y_530_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg(lean_object* v_mvarId_533_, lean_object* v_fvars_534_, lean_object* v_mvarIdPending_535_, lean_object* v___y_536_){
_start:
{
lean_object* v___x_538_; lean_object* v_mctx_539_; lean_object* v_cache_540_; lean_object* v_zetaDeltaFVarIds_541_; lean_object* v_postponed_542_; lean_object* v_diag_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_573_; 
v___x_538_ = lean_st_ref_take(v___y_536_);
v_mctx_539_ = lean_ctor_get(v___x_538_, 0);
v_cache_540_ = lean_ctor_get(v___x_538_, 1);
v_zetaDeltaFVarIds_541_ = lean_ctor_get(v___x_538_, 2);
v_postponed_542_ = lean_ctor_get(v___x_538_, 3);
v_diag_543_ = lean_ctor_get(v___x_538_, 4);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_573_ == 0)
{
v___x_545_ = v___x_538_;
v_isShared_546_ = v_isSharedCheck_573_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_diag_543_);
lean_inc(v_postponed_542_);
lean_inc(v_zetaDeltaFVarIds_541_);
lean_inc(v_cache_540_);
lean_inc(v_mctx_539_);
lean_dec(v___x_538_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_573_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v_depth_547_; lean_object* v_levelAssignDepth_548_; lean_object* v_lmvarCounter_549_; lean_object* v_mvarCounter_550_; lean_object* v_lDecls_551_; lean_object* v_decls_552_; lean_object* v_userNames_553_; lean_object* v_lAssignment_554_; lean_object* v_eAssignment_555_; lean_object* v_dAssignment_556_; lean_object* v_instanceTypedMVars_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_572_; 
v_depth_547_ = lean_ctor_get(v_mctx_539_, 0);
v_levelAssignDepth_548_ = lean_ctor_get(v_mctx_539_, 1);
v_lmvarCounter_549_ = lean_ctor_get(v_mctx_539_, 2);
v_mvarCounter_550_ = lean_ctor_get(v_mctx_539_, 3);
v_lDecls_551_ = lean_ctor_get(v_mctx_539_, 4);
v_decls_552_ = lean_ctor_get(v_mctx_539_, 5);
v_userNames_553_ = lean_ctor_get(v_mctx_539_, 6);
v_lAssignment_554_ = lean_ctor_get(v_mctx_539_, 7);
v_eAssignment_555_ = lean_ctor_get(v_mctx_539_, 8);
v_dAssignment_556_ = lean_ctor_get(v_mctx_539_, 9);
v_instanceTypedMVars_557_ = lean_ctor_get(v_mctx_539_, 10);
v_isSharedCheck_572_ = !lean_is_exclusive(v_mctx_539_);
if (v_isSharedCheck_572_ == 0)
{
v___x_559_ = v_mctx_539_;
v_isShared_560_ = v_isSharedCheck_572_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_instanceTypedMVars_557_);
lean_inc(v_dAssignment_556_);
lean_inc(v_eAssignment_555_);
lean_inc(v_lAssignment_554_);
lean_inc(v_userNames_553_);
lean_inc(v_decls_552_);
lean_inc(v_lDecls_551_);
lean_inc(v_mvarCounter_550_);
lean_inc(v_lmvarCounter_549_);
lean_inc(v_levelAssignDepth_548_);
lean_inc(v_depth_547_);
lean_dec(v_mctx_539_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_572_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_565_; 
v___x_561_ = lean_box(0);
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v_fvars_534_);
lean_ctor_set(v___x_562_, 1, v_mvarIdPending_535_);
v___x_563_ = l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0___redArg(v_dAssignment_556_, v_mvarId_533_, v___x_562_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 9, v___x_563_);
v___x_565_ = v___x_559_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_depth_547_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v_levelAssignDepth_548_);
lean_ctor_set(v_reuseFailAlloc_571_, 2, v_lmvarCounter_549_);
lean_ctor_set(v_reuseFailAlloc_571_, 3, v_mvarCounter_550_);
lean_ctor_set(v_reuseFailAlloc_571_, 4, v_lDecls_551_);
lean_ctor_set(v_reuseFailAlloc_571_, 5, v_decls_552_);
lean_ctor_set(v_reuseFailAlloc_571_, 6, v_userNames_553_);
lean_ctor_set(v_reuseFailAlloc_571_, 7, v_lAssignment_554_);
lean_ctor_set(v_reuseFailAlloc_571_, 8, v_eAssignment_555_);
lean_ctor_set(v_reuseFailAlloc_571_, 9, v___x_563_);
lean_ctor_set(v_reuseFailAlloc_571_, 10, v_instanceTypedMVars_557_);
v___x_565_ = v_reuseFailAlloc_571_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
lean_object* v___x_567_; 
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 0, v___x_565_);
v___x_567_ = v___x_545_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_570_, 1, v_cache_540_);
lean_ctor_set(v_reuseFailAlloc_570_, 2, v_zetaDeltaFVarIds_541_);
lean_ctor_set(v_reuseFailAlloc_570_, 3, v_postponed_542_);
lean_ctor_set(v_reuseFailAlloc_570_, 4, v_diag_543_);
v___x_567_ = v_reuseFailAlloc_570_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = lean_st_ref_put(v___y_536_, v___x_567_);
v___x_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_561_);
return v___x_569_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg___boxed(lean_object* v_mvarId_574_, lean_object* v_fvars_575_, lean_object* v_mvarIdPending_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg(v_mvarId_574_, v_fvars_575_, v_mvarIdPending_576_, v___y_577_);
lean_dec(v___y_577_);
return v_res_579_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2___closed__0(void){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_580_ = lean_box(0);
v___x_581_ = l_unsafeCast___redArg(v___x_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2(lean_object* v___x_582_, lean_object* v_userName_583_, lean_object* v_lctx_584_, lean_object* v_localInstances_585_, lean_object* v_type_586_, lean_object* v_max_587_, lean_object* v_mvarId_588_, lean_object* v_lctx_589_, lean_object* v_localInsts_590_, lean_object* v_fvars_591_, lean_object* v_type_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
lean_object* v___x_600_; uint8_t v___x_601_; 
v___x_600_ = lean_array_get_size(v_fvars_591_);
v___x_601_ = lean_nat_dec_eq(v___x_600_, v___x_582_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; 
lean_inc_ref(v_fvars_591_);
lean_inc(v___x_582_);
v___x_602_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_type_592_, v___x_582_, v___x_600_, v_fvars_591_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; uint8_t v___x_604_; lean_object* v___x_605_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_602_, 1);
v___x_604_ = 2;
lean_inc(v___x_582_);
v___x_605_ = l_Lean_Meta_mkFreshExprMVarAt(v_lctx_589_, v_localInsts_590_, v_a_603_, v___x_604_, v_userName_583_, v___x_582_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v_a_606_; lean_object* v___x_607_; lean_object* v___y_609_; lean_object* v___x_619_; lean_object* v___x_620_; 
v_a_606_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_a_606_);
lean_dec_ref_known(v___x_605_, 1);
v___x_607_ = l_Lean_Expr_mvarId_x21(v_a_606_);
lean_dec(v_a_606_);
v___x_619_ = lean_obj_once(&l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2___closed__0, &l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2___closed__0_once, _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2___closed__0);
lean_inc(v___x_582_);
lean_inc_ref(v_type_586_);
v___x_620_ = l_Lean_Meta_mkFreshExprMVarAt(v_lctx_584_, v_localInstances_585_, v_type_586_, v___x_604_, v___x_619_, v___x_582_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc_n(v_a_621_, 2);
lean_dec_ref_known(v___x_620_, 1);
v___x_622_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkAppBVars(v_a_621_, v___x_600_);
v___x_623_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_mkValueLoop(v_max_587_, v___x_582_, v_type_586_, v___x_622_);
lean_dec_ref(v___x_622_);
lean_dec(v___x_582_);
v___x_624_ = l_Lean_Expr_mvarId_x21(v_a_621_);
lean_dec(v_a_621_);
lean_inc(v___x_607_);
lean_inc_ref(v_fvars_591_);
v___x_625_ = l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg(v___x_624_, v_fvars_591_, v___x_607_, v___y_596_);
lean_dec_ref(v___x_625_);
v___x_626_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg(v_mvarId_588_, v___x_623_, v___y_596_);
v___y_609_ = v___x_626_;
goto v___jp_608_;
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_dec(v___x_607_);
lean_dec_ref(v_fvars_591_);
lean_dec(v_mvarId_588_);
lean_dec_ref(v_type_586_);
lean_dec(v___x_582_);
v_a_627_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_620_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_620_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
v___jp_608_:
{
lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_617_; 
v_isSharedCheck_617_ = !lean_is_exclusive(v___y_609_);
if (v_isSharedCheck_617_ == 0)
{
lean_object* v_unused_618_; 
v_unused_618_ = lean_ctor_get(v___y_609_, 0);
lean_dec(v_unused_618_);
v___x_611_ = v___y_609_;
v_isShared_612_ = v_isSharedCheck_617_;
goto v_resetjp_610_;
}
else
{
lean_dec(v___y_609_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_617_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_613_; lean_object* v___x_615_; 
v___x_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_613_, 0, v_fvars_591_);
lean_ctor_set(v___x_613_, 1, v___x_607_);
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 0, v___x_613_);
v___x_615_ = v___x_611_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_613_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
lean_dec_ref(v_fvars_591_);
lean_dec(v_mvarId_588_);
lean_dec_ref(v_type_586_);
lean_dec_ref(v_localInstances_585_);
lean_dec_ref(v_lctx_584_);
lean_dec(v___x_582_);
v_a_635_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_605_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_605_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
lean_dec_ref(v_fvars_591_);
lean_dec_ref(v_localInsts_590_);
lean_dec_ref(v_lctx_589_);
lean_dec(v_mvarId_588_);
lean_dec_ref(v_type_586_);
lean_dec_ref(v_localInstances_585_);
lean_dec_ref(v_lctx_584_);
lean_dec(v_userName_583_);
lean_dec(v___x_582_);
v_a_643_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_602_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_602_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
else
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
lean_dec_ref(v_type_592_);
lean_dec_ref(v_fvars_591_);
lean_dec_ref(v_localInsts_590_);
lean_dec_ref(v_lctx_589_);
lean_dec_ref(v_type_586_);
lean_dec_ref(v_localInstances_585_);
lean_dec_ref(v_lctx_584_);
lean_dec(v_userName_583_);
v___x_651_ = lean_mk_empty_array_with_capacity(v___x_582_);
lean_dec(v___x_582_);
v___x_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
lean_ctor_set(v___x_652_, 1, v_mvarId_588_);
v___x_653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
return v___x_653_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2___boxed(lean_object** _args){
lean_object* v___x_654_ = _args[0];
lean_object* v_userName_655_ = _args[1];
lean_object* v_lctx_656_ = _args[2];
lean_object* v_localInstances_657_ = _args[3];
lean_object* v_type_658_ = _args[4];
lean_object* v_max_659_ = _args[5];
lean_object* v_mvarId_660_ = _args[6];
lean_object* v_lctx_661_ = _args[7];
lean_object* v_localInsts_662_ = _args[8];
lean_object* v_fvars_663_ = _args[9];
lean_object* v_type_664_ = _args[10];
lean_object* v___y_665_ = _args[11];
lean_object* v___y_666_ = _args[12];
lean_object* v___y_667_ = _args[13];
lean_object* v___y_668_ = _args[14];
lean_object* v___y_669_ = _args[15];
lean_object* v___y_670_ = _args[16];
lean_object* v___y_671_ = _args[17];
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2(v___x_654_, v_userName_655_, v_lctx_656_, v_localInstances_657_, v_type_658_, v_max_659_, v_mvarId_660_, v_lctx_661_, v_localInsts_662_, v_fvars_663_, v_type_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_);
lean_dec(v___y_670_);
lean_dec_ref(v___y_669_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
lean_dec(v_max_659_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2(size_t v_sz_673_, size_t v_i_674_, lean_object* v_bs_675_){
_start:
{
uint8_t v___x_676_; 
v___x_676_ = lean_usize_dec_lt(v_i_674_, v_sz_673_);
if (v___x_676_ == 0)
{
lean_object* v___x_677_; 
v___x_677_ = l_unsafeCast___redArg(v_bs_675_);
lean_dec_ref(v_bs_675_);
return v___x_677_;
}
else
{
lean_object* v_v_678_; lean_object* v___x_679_; lean_object* v_bs_x27_680_; lean_object* v___x_681_; lean_object* v___x_682_; size_t v___x_683_; size_t v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v_v_678_ = lean_array_uget(v_bs_675_, v_i_674_);
v___x_679_ = lean_unsigned_to_nat(0u);
v_bs_x27_680_ = lean_array_uset(v_bs_675_, v_i_674_, v___x_679_);
v___x_681_ = l_unsafeCast___redArg(v_v_678_);
lean_dec(v_v_678_);
v___x_682_ = l_Lean_Expr_fvarId_x21(v___x_681_);
lean_dec(v___x_681_);
v___x_683_ = ((size_t)1ULL);
v___x_684_ = lean_usize_add(v_i_674_, v___x_683_);
v___x_685_ = l_unsafeCast___redArg(v___x_682_);
lean_dec(v___x_682_);
v___x_686_ = lean_array_uset(v_bs_x27_680_, v_i_674_, v___x_685_);
v_i_674_ = v___x_684_;
v_bs_675_ = v___x_686_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2___boxed(lean_object* v_sz_688_, lean_object* v_i_689_, lean_object* v_bs_690_){
_start:
{
size_t v_sz_boxed_691_; size_t v_i_boxed_692_; lean_object* v_res_693_; 
v_sz_boxed_691_ = lean_unbox_usize(v_sz_688_);
lean_dec(v_sz_688_);
v_i_boxed_692_ = lean_unbox_usize(v_i_689_);
lean_dec(v_i_689_);
v_res_693_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2(v_sz_boxed_691_, v_i_boxed_692_, v_bs_690_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(lean_object* v_mvarId_698_, lean_object* v_max_699_, lean_object* v_names_700_, uint8_t v_hygienic_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_){
_start:
{
lean_object* v___x_709_; uint8_t v___x_710_; 
v___x_709_ = lean_unsigned_to_nat(0u);
v___x_710_ = lean_nat_dec_eq(v_max_699_, v___x_709_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; lean_object* v___f_712_; lean_object* v___x_713_; lean_object* v_env_714_; lean_object* v___f_715_; lean_object* v___x_716_; 
v___x_711_ = lean_box(v_hygienic_701_);
v___f_712_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__0___boxed), 10, 2);
lean_closure_set(v___f_712_, 0, v_names_700_);
lean_closure_set(v___f_712_, 1, v___x_711_);
v___x_713_ = lean_st_ref_get(v_a_707_);
v_env_714_ = lean_ctor_get(v___x_713_, 0);
lean_inc_ref(v_env_714_);
lean_dec(v___x_713_);
v___f_715_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__1___boxed), 4, 1);
lean_closure_set(v___f_715_, 0, v_env_714_);
lean_inc(v_mvarId_698_);
v___x_716_ = l_Lean_MVarId_getDecl(v_mvarId_698_, v_a_704_, v_a_705_, v_a_706_, v_a_707_);
if (lean_obj_tag(v___x_716_) == 0)
{
lean_object* v_a_717_; lean_object* v_userName_718_; lean_object* v_lctx_719_; lean_object* v_type_720_; lean_object* v_localInstances_721_; lean_object* v___f_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v_a_717_ = lean_ctor_get(v___x_716_, 0);
lean_inc(v_a_717_);
lean_dec_ref_known(v___x_716_, 1);
v_userName_718_ = lean_ctor_get(v_a_717_, 0);
lean_inc(v_userName_718_);
v_lctx_719_ = lean_ctor_get(v_a_717_, 1);
lean_inc_ref_n(v_lctx_719_, 2);
v_type_720_ = lean_ctor_get(v_a_717_, 2);
lean_inc_ref_n(v_type_720_, 2);
v_localInstances_721_ = lean_ctor_get(v_a_717_, 4);
lean_inc_ref_n(v_localInstances_721_, 2);
lean_dec(v_a_717_);
lean_inc(v_max_699_);
v___f_722_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___lam__2___boxed), 18, 7);
lean_closure_set(v___f_722_, 0, v___x_709_);
lean_closure_set(v___f_722_, 1, v_userName_718_);
lean_closure_set(v___f_722_, 2, v_lctx_719_);
lean_closure_set(v___f_722_, 3, v_localInstances_721_);
lean_closure_set(v___f_722_, 4, v_type_720_);
lean_closure_set(v___f_722_, 5, v_max_699_);
lean_closure_set(v___f_722_, 6, v_mvarId_698_);
v___x_723_ = ((lean_object*)(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__0));
v___x_724_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_visit(v_max_699_, v___f_722_, v___f_712_, v___f_715_, v___x_709_, v_lctx_719_, v_localInstances_721_, v___x_723_, v_type_720_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_);
lean_dec(v_max_699_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_746_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_746_ == 0)
{
v___x_727_ = v___x_724_;
v_isShared_728_ = v_isSharedCheck_746_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_724_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_746_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v_fst_729_; lean_object* v_snd_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_745_; 
v_fst_729_ = lean_ctor_get(v_a_725_, 0);
v_snd_730_ = lean_ctor_get(v_a_725_, 1);
v_isSharedCheck_745_ = !lean_is_exclusive(v_a_725_);
if (v_isSharedCheck_745_ == 0)
{
v___x_732_ = v_a_725_;
v_isShared_733_ = v_isSharedCheck_745_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_snd_730_);
lean_inc(v_fst_729_);
lean_dec(v_a_725_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_745_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
size_t v_sz_734_; size_t v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v_sz_734_ = lean_array_size(v_fst_729_);
v___x_735_ = ((size_t)0ULL);
v___x_736_ = l_unsafeCast___redArg(v_fst_729_);
lean_dec(v_fst_729_);
v___x_737_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__2(v_sz_734_, v___x_735_, v___x_736_);
v___x_738_ = l_unsafeCast___redArg(v___x_737_);
lean_dec_ref(v___x_737_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 0, v___x_738_);
v___x_740_ = v___x_732_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_738_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_snd_730_);
v___x_740_ = v_reuseFailAlloc_744_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___x_742_; 
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 0, v___x_740_);
v___x_742_ = v___x_727_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v___x_740_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
}
}
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
v_a_747_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_724_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_724_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec_ref(v___f_715_);
lean_dec_ref(v___f_712_);
lean_dec(v_max_699_);
lean_dec(v_mvarId_698_);
v_a_755_ = lean_ctor_get(v___x_716_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_716_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_716_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_716_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
else
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
lean_dec_ref(v_names_700_);
lean_dec(v_max_699_);
v___x_763_ = ((lean_object*)(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1));
v___x_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
lean_ctor_set(v___x_764_, 1, v_mvarId_698_);
v___x_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
return v___x_765_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___boxed(lean_object* v_mvarId_766_, lean_object* v_max_767_, lean_object* v_names_768_, lean_object* v_hygienic_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
uint8_t v_hygienic_boxed_777_; lean_object* v_res_778_; 
v_hygienic_boxed_777_ = lean_unbox(v_hygienic_769_);
v_res_778_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(v_mvarId_766_, v_max_767_, v_names_768_, v_hygienic_boxed_777_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
lean_dec(v_a_771_);
lean_dec_ref(v_a_770_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0(lean_object* v_mvarId_779_, lean_object* v_fvars_780_, lean_object* v_mvarIdPending_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___redArg(v_mvarId_779_, v_fvars_780_, v_mvarIdPending_781_, v___y_783_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0___boxed(lean_object* v_mvarId_788_, lean_object* v_fvars_789_, lean_object* v_mvarIdPending_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0(v_mvarId_788_, v_fvars_789_, v_mvarIdPending_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_);
lean_dec(v___y_794_);
lean_dec_ref(v___y_793_);
lean_dec(v___y_792_);
lean_dec_ref(v___y_791_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1(lean_object* v_mvarId_797_, lean_object* v_val_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___redArg(v_mvarId_797_, v_val_798_, v___y_800_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1___boxed(lean_object* v_mvarId_805_, lean_object* v_val_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__1(v_mvarId_805_, v_val_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0(lean_object* v_00_u03b2_813_, lean_object* v_x_814_, lean_object* v_x_815_, lean_object* v_x_816_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0___redArg(v_x_814_, v_x_815_, v_x_816_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_818_, lean_object* v_x_819_, size_t v_x_820_, size_t v_x_821_, lean_object* v_x_822_, lean_object* v_x_823_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___redArg(v_x_819_, v_x_820_, v_x_821_, v_x_822_, v_x_823_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_825_, lean_object* v_x_826_, lean_object* v_x_827_, lean_object* v_x_828_, lean_object* v_x_829_, lean_object* v_x_830_){
_start:
{
size_t v_x_5816__boxed_831_; size_t v_x_5817__boxed_832_; lean_object* v_res_833_; 
v_x_5816__boxed_831_ = lean_unbox_usize(v_x_827_);
lean_dec(v_x_827_);
v_x_5817__boxed_832_ = lean_unbox_usize(v_x_828_);
lean_dec(v_x_828_);
v_res_833_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1(v_00_u03b2_825_, v_x_826_, v_x_5816__boxed_831_, v_x_5817__boxed_832_, v_x_829_, v_x_830_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_834_, lean_object* v_n_835_, lean_object* v_k_836_, lean_object* v_v_837_){
_start:
{
lean_object* v___x_838_; 
v___x_838_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4___redArg(v_n_835_, v_k_836_, v_v_837_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_839_, size_t v_depth_840_, lean_object* v_keys_841_, lean_object* v_vals_842_, lean_object* v_heq_843_, lean_object* v_i_844_, lean_object* v_entries_845_){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___redArg(v_depth_840_, v_keys_841_, v_vals_842_, v_i_844_, v_entries_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_847_, lean_object* v_depth_848_, lean_object* v_keys_849_, lean_object* v_vals_850_, lean_object* v_heq_851_, lean_object* v_i_852_, lean_object* v_entries_853_){
_start:
{
size_t v_depth_boxed_854_; lean_object* v_res_855_; 
v_depth_boxed_854_ = lean_unbox_usize(v_depth_848_);
lean_dec(v_depth_848_);
v_res_855_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__5(v_00_u03b2_847_, v_depth_boxed_854_, v_keys_849_, v_vals_850_, v_heq_851_, v_i_852_, v_entries_853_);
lean_dec_ref(v_vals_850_);
lean_dec_ref(v_keys_849_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_856_, lean_object* v_x_857_, lean_object* v_x_858_, lean_object* v_x_859_, lean_object* v_x_860_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignDelayedMVar___at___00__private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(v_x_857_, v_x_858_, v_x_859_, v_x_860_);
return v___x_861_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_hugeNat(void){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = lean_unsigned_to_nat(1000000u);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorIdx(lean_object* v_x_863_){
_start:
{
if (lean_obj_tag(v_x_863_) == 0)
{
lean_object* v___x_864_; 
v___x_864_ = lean_unsigned_to_nat(0u);
return v___x_864_;
}
else
{
lean_object* v___x_865_; 
v___x_865_ = lean_unsigned_to_nat(1u);
return v___x_865_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorIdx___boxed(lean_object* v_x_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_Lean_Meta_Sym_IntrosResult_ctorIdx(v_x_866_);
lean_dec(v_x_866_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(lean_object* v_t_868_, lean_object* v_k_869_){
_start:
{
if (lean_obj_tag(v_t_868_) == 0)
{
return v_k_869_;
}
else
{
lean_object* v_newDecls_870_; lean_object* v_mvarId_871_; lean_object* v___x_872_; 
v_newDecls_870_ = lean_ctor_get(v_t_868_, 0);
lean_inc_ref(v_newDecls_870_);
v_mvarId_871_ = lean_ctor_get(v_t_868_, 1);
lean_inc(v_mvarId_871_);
lean_dec_ref_known(v_t_868_, 2);
v___x_872_ = lean_apply_2(v_k_869_, v_newDecls_870_, v_mvarId_871_);
return v___x_872_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim(lean_object* v_motive_873_, lean_object* v_ctorIdx_874_, lean_object* v_t_875_, lean_object* v_h_876_, lean_object* v_k_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(v_t_875_, v_k_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_ctorElim___boxed(lean_object* v_motive_879_, lean_object* v_ctorIdx_880_, lean_object* v_t_881_, lean_object* v_h_882_, lean_object* v_k_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Lean_Meta_Sym_IntrosResult_ctorElim(v_motive_879_, v_ctorIdx_880_, v_t_881_, v_h_882_, v_k_883_);
lean_dec(v_ctorIdx_880_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_failed_elim___redArg(lean_object* v_t_885_, lean_object* v_failed_886_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(v_t_885_, v_failed_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_failed_elim(lean_object* v_motive_888_, lean_object* v_t_889_, lean_object* v_h_890_, lean_object* v_failed_891_){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(v_t_889_, v_failed_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_goal_elim___redArg(lean_object* v_t_893_, lean_object* v_goal_894_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(v_t_893_, v_goal_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_IntrosResult_goal_elim(lean_object* v_motive_896_, lean_object* v_t_897_, lean_object* v_h_898_, lean_object* v_goal_899_){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = l_Lean_Meta_Sym_IntrosResult_ctorElim___redArg(v_t_897_, v_goal_899_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_intros(lean_object* v_mvarId_901_, lean_object* v_names_902_, uint8_t v_hygienic_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_){
_start:
{
lean_object* v_result_912_; lean_object* v___x_928_; lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_928_ = lean_array_get_size(v_names_902_);
v___x_929_ = lean_unsigned_to_nat(0u);
v___x_930_ = lean_nat_dec_eq(v___x_928_, v___x_929_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; 
v___x_931_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(v_mvarId_901_, v___x_928_, v_names_902_, v_hygienic_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
lean_inc(v_a_932_);
lean_dec_ref_known(v___x_931_, 1);
v_result_912_ = v_a_932_;
goto v___jp_911_;
}
else
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
v_a_933_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v___x_931_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_931_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_933_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
}
else
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
lean_dec_ref(v_names_902_);
v___x_941_ = lean_unsigned_to_nat(1000000u);
v___x_942_ = ((lean_object*)(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1));
v___x_943_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(v_mvarId_901_, v___x_941_, v___x_942_, v_hygienic_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; 
v_a_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_a_944_);
lean_dec_ref_known(v___x_943_, 1);
v_result_912_ = v_a_944_;
goto v___jp_911_;
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
v_a_945_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_943_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_943_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
v___jp_911_:
{
lean_object* v_fst_913_; lean_object* v_snd_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_927_; 
v_fst_913_ = lean_ctor_get(v_result_912_, 0);
v_snd_914_ = lean_ctor_get(v_result_912_, 1);
v_isSharedCheck_927_ = !lean_is_exclusive(v_result_912_);
if (v_isSharedCheck_927_ == 0)
{
v___x_916_ = v_result_912_;
v_isShared_917_ = v_isSharedCheck_927_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_snd_914_);
lean_inc(v_fst_913_);
lean_dec(v_result_912_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_927_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_918_; lean_object* v___x_919_; uint8_t v___x_920_; 
v___x_918_ = lean_array_get_size(v_fst_913_);
v___x_919_ = lean_unsigned_to_nat(0u);
v___x_920_ = lean_nat_dec_eq(v___x_918_, v___x_919_);
if (v___x_920_ == 0)
{
lean_object* v___x_922_; 
if (v_isShared_917_ == 0)
{
lean_ctor_set_tag(v___x_916_, 1);
v___x_922_ = v___x_916_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_fst_913_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v_snd_914_);
v___x_922_ = v_reuseFailAlloc_924_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_923_; 
v___x_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
return v___x_923_;
}
}
else
{
lean_object* v___x_925_; lean_object* v___x_926_; 
lean_del_object(v___x_916_);
lean_dec(v_snd_914_);
lean_dec(v_fst_913_);
v___x_925_ = lean_box(0);
v___x_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
return v___x_926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_intros___boxed(lean_object* v_mvarId_953_, lean_object* v_names_954_, lean_object* v_hygienic_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
uint8_t v_hygienic_boxed_963_; lean_object* v_res_964_; 
v_hygienic_boxed_963_ = lean_unbox(v_hygienic_955_);
v_res_964_ = l_Lean_Meta_Sym_intros(v_mvarId_953_, v_names_954_, v_hygienic_boxed_963_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_introN(lean_object* v_mvarId_965_, lean_object* v_num_966_, uint8_t v_hygienic_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = ((lean_object*)(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore___closed__1));
lean_inc(v_num_966_);
v___x_976_ = l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_introCore(v_mvarId_965_, v_num_966_, v___x_975_, v_hygienic_967_, v_a_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_999_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_999_ == 0)
{
v___x_979_ = v___x_976_;
v_isShared_980_ = v_isSharedCheck_999_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_976_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_999_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v_fst_981_; lean_object* v_snd_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_998_; 
v_fst_981_ = lean_ctor_get(v_a_977_, 0);
v_snd_982_ = lean_ctor_get(v_a_977_, 1);
v_isSharedCheck_998_ = !lean_is_exclusive(v_a_977_);
if (v_isSharedCheck_998_ == 0)
{
v___x_984_ = v_a_977_;
v_isShared_985_ = v_isSharedCheck_998_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_snd_982_);
lean_inc(v_fst_981_);
lean_dec(v_a_977_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_998_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_986_; uint8_t v___x_987_; 
v___x_986_ = lean_array_get_size(v_fst_981_);
v___x_987_ = lean_nat_dec_eq(v___x_986_, v_num_966_);
lean_dec(v_num_966_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; lean_object* v___x_990_; 
lean_del_object(v___x_984_);
lean_dec(v_snd_982_);
lean_dec(v_fst_981_);
v___x_988_ = lean_box(0);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 0, v___x_988_);
v___x_990_ = v___x_979_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_988_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
else
{
lean_object* v___x_993_; 
if (v_isShared_985_ == 0)
{
lean_ctor_set_tag(v___x_984_, 1);
v___x_993_ = v___x_984_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_fst_981_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v_snd_982_);
v___x_993_ = v_reuseFailAlloc_997_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
lean_object* v___x_995_; 
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 0, v___x_993_);
v___x_995_ = v___x_979_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_993_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
lean_dec(v_num_966_);
v_a_1000_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_976_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_976_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_introN___boxed(lean_object* v_mvarId_1008_, lean_object* v_num_1009_, lean_object* v_hygienic_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_){
_start:
{
uint8_t v_hygienic_boxed_1018_; lean_object* v_res_1019_; 
v_hygienic_boxed_1018_ = lean_unbox(v_hygienic_1010_);
v_res_1019_ = l_Lean_Meta_Sym_introN(v_mvarId_1008_, v_num_1009_, v_hygienic_boxed_1018_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
lean_dec(v_a_1016_);
lean_dec_ref(v_a_1015_);
lean_dec(v_a_1014_);
lean_dec_ref(v_a_1013_);
lean_dec(v_a_1012_);
lean_dec_ref(v_a_1011_);
return v_res_1019_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_IsClass(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Intro(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_IsClass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_hugeNat = _init_l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_hugeNat();
lean_mark_persistent(l___private_Lean_Meta_Sym_Intro_0__Lean_Meta_Sym_hugeNat);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Intro(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_IsClass(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Intro(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_IsClass(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Intro(builtin);
}
#ifdef __cplusplus
}
#endif

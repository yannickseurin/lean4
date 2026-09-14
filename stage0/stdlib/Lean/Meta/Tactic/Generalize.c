// Lean compiler output
// Module: Lean.Meta.Tactic.Generalize
// Imports: public import Lean.Meta.KAbstract public import Lean.Meta.Tactic.Intro public import Lean.Meta.Tactic.FVarSubst public import Lean.Meta.Tactic.Revert import Lean.Meta.AppBuilder
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2;
static lean_once_cell_t l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedGeneralizeArg_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedGeneralizeArg;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "result is not type correct"};
static const lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "generalize"};
static const lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 87, 171, 88, 232, 182, 211, 181)}};
static const lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_generalize(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_generalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_MVarId_generalizeHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_MVarId_generalizeHyp___closed__0 = (const lean_object*)&l_Lean_MVarId_generalizeHyp___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_generalizeHyp___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_MVarId_generalizeHyp___boxed__const__1 = (const lean_object*)&l_Lean_MVarId_generalizeHyp___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_generalizeHyp(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_generalizeHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_box(0);
v___x_8_ = lean_obj_once(&l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2, &l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2_once, _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__2);
v___x_9_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_7_);
lean_ctor_set(v___x_9_, 2, v___x_7_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedGeneralizeArg_default(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_obj_once(&l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3, &l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3_once, _init_l_Lean_Meta_instInhabitedGeneralizeArg_default___closed__3);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedGeneralizeArg(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Meta_instInhabitedGeneralizeArg_default;
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(lean_object* v_e_12_, lean_object* v___y_13_){
_start:
{
uint8_t v___x_15_; 
v___x_15_ = l_Lean_Expr_hasMVar(v_e_12_);
if (v___x_15_ == 0)
{
lean_object* v___x_16_; 
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v_e_12_);
return v___x_16_;
}
else
{
lean_object* v___x_17_; lean_object* v_mctx_18_; lean_object* v___x_19_; lean_object* v_fst_20_; lean_object* v_snd_21_; lean_object* v___x_22_; lean_object* v_cache_23_; lean_object* v_zetaDeltaFVarIds_24_; lean_object* v_postponed_25_; lean_object* v_diag_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_35_; 
v___x_17_ = lean_st_ref_get(v___y_13_);
v_mctx_18_ = lean_ctor_get(v___x_17_, 0);
lean_inc_ref(v_mctx_18_);
lean_dec(v___x_17_);
v___x_19_ = l_Lean_instantiateMVarsCore(v_mctx_18_, v_e_12_);
v_fst_20_ = lean_ctor_get(v___x_19_, 0);
lean_inc(v_fst_20_);
v_snd_21_ = lean_ctor_get(v___x_19_, 1);
lean_inc(v_snd_21_);
lean_dec_ref(v___x_19_);
v___x_22_ = lean_st_ref_take(v___y_13_);
v_cache_23_ = lean_ctor_get(v___x_22_, 1);
v_zetaDeltaFVarIds_24_ = lean_ctor_get(v___x_22_, 2);
v_postponed_25_ = lean_ctor_get(v___x_22_, 3);
v_diag_26_ = lean_ctor_get(v___x_22_, 4);
v_isSharedCheck_35_ = !lean_is_exclusive(v___x_22_);
if (v_isSharedCheck_35_ == 0)
{
lean_object* v_unused_36_; 
v_unused_36_ = lean_ctor_get(v___x_22_, 0);
lean_dec(v_unused_36_);
v___x_28_ = v___x_22_;
v_isShared_29_ = v_isSharedCheck_35_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_diag_26_);
lean_inc(v_postponed_25_);
lean_inc(v_zetaDeltaFVarIds_24_);
lean_inc(v_cache_23_);
lean_dec(v___x_22_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_35_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_31_; 
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 0, v_snd_21_);
v___x_31_ = v___x_28_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v_snd_21_);
lean_ctor_set(v_reuseFailAlloc_34_, 1, v_cache_23_);
lean_ctor_set(v_reuseFailAlloc_34_, 2, v_zetaDeltaFVarIds_24_);
lean_ctor_set(v_reuseFailAlloc_34_, 3, v_postponed_25_);
lean_ctor_set(v_reuseFailAlloc_34_, 4, v_diag_26_);
v___x_31_ = v_reuseFailAlloc_34_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_st_ref_put(v___y_13_, v___x_31_);
v___x_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_33_, 0, v_fst_20_);
return v___x_33_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_e_37_, v___y_38_);
lean_dec(v___y_38_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0(lean_object* v_e_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_e_41_, v___y_43_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___boxed(lean_object* v_e_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0(v_e_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go(lean_object* v_args_58_, uint8_t v_transparency_59_, lean_object* v_target_60_, lean_object* v_i_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_67_ = lean_array_get_size(v_args_58_);
v___x_68_ = lean_nat_dec_lt(v_i_61_, v___x_67_);
if (v___x_68_ == 0)
{
lean_object* v___x_69_; 
v___x_69_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_69_, 0, v_target_60_);
return v___x_69_;
}
else
{
lean_object* v_arg_70_; lean_object* v_expr_71_; lean_object* v_xName_x3f_72_; lean_object* v___x_73_; 
v_arg_70_ = lean_array_fget_borrowed(v_args_58_, v_i_61_);
v_expr_71_ = lean_ctor_get(v_arg_70_, 0);
v_xName_x3f_72_ = lean_ctor_get(v_arg_70_, 1);
lean_inc_ref(v_expr_71_);
v___x_73_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_expr_71_, v_a_63_);
if (lean_obj_tag(v___x_73_) == 0)
{
lean_object* v_a_74_; lean_object* v___x_75_; 
v_a_74_ = lean_ctor_get(v___x_73_, 0);
lean_inc_n(v_a_74_, 2);
lean_dec_ref_known(v___x_73_, 1);
lean_inc(v_a_65_);
lean_inc_ref(v_a_64_);
lean_inc(v_a_63_);
lean_inc_ref(v_a_62_);
v___x_75_ = lean_infer_type(v_a_74_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v___x_77_; 
v_a_76_ = lean_ctor_get(v___x_75_, 0);
lean_inc(v_a_76_);
lean_dec_ref_known(v___x_75_, 1);
v___x_77_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_a_76_, v_a_63_);
if (lean_obj_tag(v___x_77_) == 0)
{
lean_object* v_a_78_; lean_object* v___y_80_; lean_object* v___y_81_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v_a_78_ = lean_ctor_get(v___x_77_, 0);
lean_inc(v_a_78_);
lean_dec_ref_known(v___x_77_, 1);
v___x_100_ = lean_unsigned_to_nat(1u);
v___x_101_ = lean_nat_add(v_i_61_, v___x_100_);
v___x_102_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go(v_args_58_, v_transparency_59_, v_target_60_, v___x_101_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
lean_dec(v___x_101_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v_a_103_; lean_object* v_xName_105_; lean_object* v___y_106_; lean_object* v___y_107_; lean_object* v___y_108_; lean_object* v___y_109_; 
v_a_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc(v_a_103_);
lean_dec_ref_known(v___x_102_, 1);
if (lean_obj_tag(v_xName_x3f_72_) == 1)
{
lean_object* v_val_129_; 
v_val_129_ = lean_ctor_get(v_xName_x3f_72_, 0);
lean_inc(v_val_129_);
v_xName_105_ = v_val_129_;
v___y_106_ = v_a_62_;
v___y_107_ = v_a_63_;
v___y_108_ = v_a_64_;
v___y_109_ = v_a_65_;
goto v___jp_104_;
}
else
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___closed__1));
v___x_131_ = l_Lean_Core_mkFreshUserName(v___x_130_, v_a_64_, v_a_65_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; 
v_a_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___x_131_, 1);
v_xName_105_ = v_a_132_;
v___y_106_ = v_a_62_;
v___y_107_ = v_a_63_;
v___y_108_ = v_a_64_;
v___y_109_ = v_a_65_;
goto v___jp_104_;
}
else
{
lean_object* v_a_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_140_; 
lean_dec(v_a_103_);
lean_dec(v_a_78_);
lean_dec(v_a_74_);
v_a_133_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_140_ == 0)
{
v___x_135_ = v___x_131_;
v_isShared_136_ = v_isSharedCheck_140_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_a_133_);
lean_dec(v___x_131_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_140_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_138_; 
if (v_isShared_136_ == 0)
{
v___x_138_ = v___x_135_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_a_133_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
return v___x_138_;
}
}
}
}
v___jp_104_:
{
lean_object* v___x_110_; uint8_t v_transparency_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_110_ = l_Lean_Meta_Context_config(v___y_106_);
v_transparency_111_ = lean_ctor_get_uint8(v___x_110_, 9);
lean_dec_ref(v___x_110_);
v___x_112_ = lean_box(0);
v___x_113_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_111_, v_transparency_59_);
if (v___x_113_ == 0)
{
lean_object* v_keyedConfig_114_; uint8_t v_trackZetaDelta_115_; lean_object* v_zetaDeltaSet_116_; lean_object* v_lctx_117_; lean_object* v_localInstances_118_; lean_object* v_defEqCtx_x3f_119_; lean_object* v_synthPendingDepth_120_; lean_object* v_customCanUnfoldPredicate_x3f_121_; uint8_t v_univApprox_122_; uint8_t v_inTypeClassResolution_123_; uint8_t v_cacheInferType_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v_keyedConfig_114_ = lean_ctor_get(v___y_106_, 0);
v_trackZetaDelta_115_ = lean_ctor_get_uint8(v___y_106_, sizeof(void*)*7);
v_zetaDeltaSet_116_ = lean_ctor_get(v___y_106_, 1);
v_lctx_117_ = lean_ctor_get(v___y_106_, 2);
v_localInstances_118_ = lean_ctor_get(v___y_106_, 3);
v_defEqCtx_x3f_119_ = lean_ctor_get(v___y_106_, 4);
v_synthPendingDepth_120_ = lean_ctor_get(v___y_106_, 5);
v_customCanUnfoldPredicate_x3f_121_ = lean_ctor_get(v___y_106_, 6);
v_univApprox_122_ = lean_ctor_get_uint8(v___y_106_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_123_ = lean_ctor_get_uint8(v___y_106_, sizeof(void*)*7 + 2);
v_cacheInferType_124_ = lean_ctor_get_uint8(v___y_106_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_114_);
v___x_125_ = l_Lean_Meta_ConfigWithKey_setTransparency(v_transparency_59_, v_keyedConfig_114_);
lean_inc(v_customCanUnfoldPredicate_x3f_121_);
lean_inc(v_synthPendingDepth_120_);
lean_inc(v_defEqCtx_x3f_119_);
lean_inc_ref(v_localInstances_118_);
lean_inc_ref(v_lctx_117_);
lean_inc(v_zetaDeltaSet_116_);
v___x_126_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v_zetaDeltaSet_116_);
lean_ctor_set(v___x_126_, 2, v_lctx_117_);
lean_ctor_set(v___x_126_, 3, v_localInstances_118_);
lean_ctor_set(v___x_126_, 4, v_defEqCtx_x3f_119_);
lean_ctor_set(v___x_126_, 5, v_synthPendingDepth_120_);
lean_ctor_set(v___x_126_, 6, v_customCanUnfoldPredicate_x3f_121_);
lean_ctor_set_uint8(v___x_126_, sizeof(void*)*7, v_trackZetaDelta_115_);
lean_ctor_set_uint8(v___x_126_, sizeof(void*)*7 + 1, v_univApprox_122_);
lean_ctor_set_uint8(v___x_126_, sizeof(void*)*7 + 2, v_inTypeClassResolution_123_);
lean_ctor_set_uint8(v___x_126_, sizeof(void*)*7 + 3, v_cacheInferType_124_);
v___x_127_ = l_Lean_Meta_kabstract(v_a_103_, v_a_74_, v___x_112_, v___x_126_, v___y_107_, v___y_108_, v___y_109_);
lean_dec_ref_known(v___x_126_, 7);
v___y_80_ = v_xName_105_;
v___y_81_ = v___x_127_;
goto v___jp_79_;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = l_Lean_Meta_kabstract(v_a_103_, v_a_74_, v___x_112_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
v___y_80_ = v_xName_105_;
v___y_81_ = v___x_128_;
goto v___jp_79_;
}
}
}
else
{
lean_dec(v_a_78_);
lean_dec(v_a_74_);
return v___x_102_;
}
v___jp_79_:
{
if (lean_obj_tag(v___y_81_) == 0)
{
lean_object* v_a_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_91_; 
v_a_82_ = lean_ctor_get(v___y_81_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___y_81_);
if (v_isSharedCheck_91_ == 0)
{
v___x_84_ = v___y_81_;
v_isShared_85_ = v_isSharedCheck_91_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_a_82_);
lean_dec(v___y_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_91_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_86_ = 0;
v___x_87_ = l_Lean_mkForall(v___y_80_, v___x_86_, v_a_78_, v_a_82_);
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 0, v___x_87_);
v___x_89_ = v___x_84_;
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
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec(v___y_80_);
lean_dec(v_a_78_);
v_a_92_ = lean_ctor_get(v___y_81_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___y_81_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___y_81_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___y_81_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
else
{
lean_dec(v_a_74_);
lean_dec_ref(v_target_60_);
return v___x_77_;
}
}
else
{
lean_dec(v_a_74_);
lean_dec_ref(v_target_60_);
return v___x_75_;
}
}
else
{
lean_dec_ref(v_target_60_);
return v___x_73_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go___boxed(lean_object* v_args_141_, lean_object* v_transparency_142_, lean_object* v_target_143_, lean_object* v_i_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
uint8_t v_transparency_boxed_150_; lean_object* v_res_151_; 
v_transparency_boxed_150_ = lean_unbox(v_transparency_142_);
v_res_151_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go(v_args_141_, v_transparency_boxed_150_, v_target_143_, v_i_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
lean_dec(v_i_144_);
lean_dec_ref(v_args_141_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27(lean_object* v_args_152_, lean_object* v_xs_153_, lean_object* v_type_154_, lean_object* v_i_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_array_get_size(v_xs_153_);
v___x_162_ = lean_nat_dec_lt(v_i_155_, v___x_161_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
lean_dec(v_i_155_);
v___x_163_ = lean_box(0);
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v_type_154_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
else
{
lean_object* v___x_166_; lean_object* v_arg_167_; lean_object* v_hName_x3f_168_; 
v___x_166_ = l_Lean_Meta_instInhabitedGeneralizeArg_default;
v_arg_167_ = lean_array_get_borrowed(v___x_166_, v_args_152_, v_i_155_);
v_hName_x3f_168_ = lean_ctor_get(v_arg_167_, 2);
if (lean_obj_tag(v_hName_x3f_168_) == 1)
{
lean_object* v_expr_169_; lean_object* v_val_170_; lean_object* v_fst_172_; lean_object* v_snd_173_; lean_object* v___y_174_; lean_object* v___y_175_; lean_object* v___y_176_; lean_object* v___y_177_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_expr_169_ = lean_ctor_get(v_arg_167_, 0);
v_val_170_ = lean_ctor_get(v_hName_x3f_168_, 0);
v___x_201_ = lean_array_fget_borrowed(v_xs_153_, v_i_155_);
lean_inc(v_a_159_);
lean_inc_ref(v_a_158_);
lean_inc(v_a_157_);
lean_inc_ref(v_a_156_);
lean_inc(v___x_201_);
v___x_202_ = lean_infer_type(v___x_201_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; lean_object* v___x_204_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref_known(v___x_202_, 1);
lean_inc_ref(v_expr_169_);
v___x_204_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_expr_169_, v_a_157_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_object* v_a_205_; lean_object* v___x_206_; 
v_a_205_ = lean_ctor_get(v___x_204_, 0);
lean_inc_n(v_a_205_, 2);
lean_dec_ref_known(v___x_204_, 1);
lean_inc(v_a_159_);
lean_inc_ref(v_a_158_);
lean_inc(v_a_157_);
lean_inc_ref(v_a_156_);
v___x_206_ = lean_infer_type(v_a_205_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v_a_207_; lean_object* v___x_208_; 
v_a_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_a_207_);
lean_dec_ref_known(v___x_206_, 1);
v___x_208_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_a_207_, v_a_157_);
if (lean_obj_tag(v___x_208_) == 0)
{
lean_object* v_a_209_; lean_object* v___x_210_; 
v_a_209_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_a_209_);
lean_dec_ref_known(v___x_208_, 1);
v___x_210_ = l_Lean_Meta_isExprDefEq(v_a_203_, v_a_209_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; uint8_t v___x_212_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
lean_inc(v_a_211_);
lean_dec_ref_known(v___x_210_, 1);
v___x_212_ = lean_unbox(v_a_211_);
lean_dec(v_a_211_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; 
lean_inc(v___x_201_);
lean_inc(v_a_205_);
v___x_213_ = l_Lean_Meta_mkHEq(v_a_205_, v___x_201_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v_a_214_; lean_object* v___x_215_; 
v_a_214_ = lean_ctor_get(v___x_213_, 0);
lean_inc(v_a_214_);
lean_dec_ref_known(v___x_213_, 1);
v___x_215_ = l_Lean_Meta_mkHEqRefl(v_a_205_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
if (lean_obj_tag(v___x_215_) == 0)
{
lean_object* v_a_216_; 
v_a_216_ = lean_ctor_get(v___x_215_, 0);
lean_inc(v_a_216_);
lean_dec_ref_known(v___x_215_, 1);
v_fst_172_ = v_a_214_;
v_snd_173_ = v_a_216_;
v___y_174_ = v_a_156_;
v___y_175_ = v_a_157_;
v___y_176_ = v_a_158_;
v___y_177_ = v_a_159_;
goto v___jp_171_;
}
else
{
lean_object* v_a_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_224_; 
lean_dec(v_a_214_);
lean_dec(v_i_155_);
lean_dec_ref(v_type_154_);
v_a_217_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_224_ == 0)
{
v___x_219_ = v___x_215_;
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_a_217_);
lean_dec(v___x_215_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_224_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_222_; 
if (v_isShared_220_ == 0)
{
v___x_222_ = v___x_219_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_217_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
else
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
lean_dec(v_a_205_);
lean_dec(v_i_155_);
lean_dec_ref(v_type_154_);
v_a_225_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_232_ == 0)
{
v___x_227_ = v___x_213_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_213_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_a_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
else
{
lean_object* v___x_233_; 
lean_inc(v___x_201_);
lean_inc(v_a_205_);
v___x_233_ = l_Lean_Meta_mkEq(v_a_205_, v___x_201_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v_a_234_; lean_object* v___x_235_; 
v_a_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc(v_a_234_);
lean_dec_ref_known(v___x_233_, 1);
v___x_235_ = l_Lean_Meta_mkEqRefl(v_a_205_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; 
v_a_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_a_236_);
lean_dec_ref_known(v___x_235_, 1);
v_fst_172_ = v_a_234_;
v_snd_173_ = v_a_236_;
v___y_174_ = v_a_156_;
v___y_175_ = v_a_157_;
v___y_176_ = v_a_158_;
v___y_177_ = v_a_159_;
goto v___jp_171_;
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
lean_dec(v_a_234_);
lean_dec(v_i_155_);
lean_dec_ref(v_type_154_);
v_a_237_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_235_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_235_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
else
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_252_; 
lean_dec(v_a_205_);
lean_dec(v_i_155_);
lean_dec_ref(v_type_154_);
v_a_245_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_252_ == 0)
{
v___x_247_ = v___x_233_;
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_233_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_250_; 
if (v_isShared_248_ == 0)
{
v___x_250_ = v___x_247_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_a_245_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
}
}
else
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_260_; 
lean_dec(v_a_205_);
lean_dec(v_i_155_);
lean_dec_ref(v_type_154_);
v_a_253_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_260_ == 0)
{
v___x_255_ = v___x_210_;
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_210_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_253_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
else
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
lean_dec(v_a_205_);
lean_dec(v_a_203_);
lean_dec(v_i_155_);
lean_dec_ref(v_type_154_);
v_a_261_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v___x_208_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_208_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
else
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
lean_dec(v_a_205_);
lean_dec(v_a_203_);
lean_dec(v_i_155_);
lean_dec_ref(v_type_154_);
v_a_269_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_206_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_206_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
lean_dec(v_a_203_);
lean_dec(v_i_155_);
lean_dec_ref(v_type_154_);
v_a_277_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_204_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_204_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
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
lean_dec(v_i_155_);
lean_dec_ref(v_type_154_);
v_a_285_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_292_ == 0)
{
v___x_287_ = v___x_202_;
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_202_);
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
v___jp_171_:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = lean_nat_add(v_i_155_, v___x_178_);
lean_dec(v_i_155_);
v___x_180_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27(v_args_152_, v_xs_153_, v_type_154_, v___x_179_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_200_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_200_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_200_ == 0)
{
v___x_183_ = v___x_180_;
v_isShared_184_ = v_isSharedCheck_200_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_180_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_200_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v_fst_185_; lean_object* v_snd_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_199_; 
v_fst_185_ = lean_ctor_get(v_a_181_, 0);
v_snd_186_ = lean_ctor_get(v_a_181_, 1);
v_isSharedCheck_199_ = !lean_is_exclusive(v_a_181_);
if (v_isSharedCheck_199_ == 0)
{
v___x_188_ = v_a_181_;
v_isShared_189_ = v_isSharedCheck_199_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_snd_186_);
lean_inc(v_fst_185_);
lean_dec(v_a_181_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_199_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; uint8_t v___x_191_; lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_190_, 0, v_snd_173_);
lean_ctor_set(v___x_190_, 1, v_fst_185_);
v___x_191_ = 0;
lean_inc(v_val_170_);
v___x_192_ = l_Lean_mkForall(v_val_170_, v___x_191_, v_fst_172_, v_snd_186_);
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 1, v___x_192_);
lean_ctor_set(v___x_188_, 0, v___x_190_);
v___x_194_ = v___x_188_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_190_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v___x_192_);
v___x_194_ = v_reuseFailAlloc_198_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v___x_196_; 
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 0, v___x_194_);
v___x_196_ = v___x_183_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
else
{
lean_dec_ref(v_snd_173_);
lean_dec_ref(v_fst_172_);
return v___x_180_;
}
}
}
else
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = lean_unsigned_to_nat(1u);
v___x_294_ = lean_nat_add(v_i_155_, v___x_293_);
lean_dec(v_i_155_);
v_i_155_ = v___x_294_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27___boxed(lean_object* v_args_296_, lean_object* v_xs_297_, lean_object* v_type_298_, lean_object* v_i_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27(v_args_296_, v_xs_297_, v_type_298_, v_i_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
lean_dec_ref(v_xs_297_);
lean_dec_ref(v_args_296_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0(lean_object* v_k_306_, lean_object* v_b_307_, lean_object* v_c_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_){
_start:
{
lean_object* v___x_314_; 
lean_inc(v___y_312_);
lean_inc_ref(v___y_311_);
lean_inc(v___y_310_);
lean_inc_ref(v___y_309_);
v___x_314_ = lean_apply_7(v_k_306_, v_b_307_, v_c_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_, lean_box(0));
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0___boxed(lean_object* v_k_315_, lean_object* v_b_316_, lean_object* v_c_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0(v_k_315_, v_b_316_, v_c_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg(lean_object* v_type_324_, lean_object* v_maxFVars_x3f_325_, lean_object* v_k_326_, uint8_t v_cleanupAnnotations_327_, uint8_t v_whnfType_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_){
_start:
{
lean_object* v___f_334_; lean_object* v___x_335_; 
v___f_334_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_334_, 0, v_k_326_);
v___x_335_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_324_, v_maxFVars_x3f_325_, v___f_334_, v_cleanupAnnotations_327_, v_whnfType_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_335_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_335_);
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
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_344_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_335_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_335_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg___boxed(lean_object* v_type_352_, lean_object* v_maxFVars_x3f_353_, lean_object* v_k_354_, lean_object* v_cleanupAnnotations_355_, lean_object* v_whnfType_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_362_; uint8_t v_whnfType_boxed_363_; lean_object* v_res_364_; 
v_cleanupAnnotations_boxed_362_ = lean_unbox(v_cleanupAnnotations_355_);
v_whnfType_boxed_363_ = lean_unbox(v_whnfType_356_);
v_res_364_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg(v_type_352_, v_maxFVars_x3f_353_, v_k_354_, v_cleanupAnnotations_boxed_362_, v_whnfType_boxed_363_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3(lean_object* v_00_u03b1_365_, lean_object* v_type_366_, lean_object* v_maxFVars_x3f_367_, lean_object* v_k_368_, uint8_t v_cleanupAnnotations_369_, uint8_t v_whnfType_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg(v_type_366_, v_maxFVars_x3f_367_, v_k_368_, v_cleanupAnnotations_369_, v_whnfType_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___boxed(lean_object* v_00_u03b1_377_, lean_object* v_type_378_, lean_object* v_maxFVars_x3f_379_, lean_object* v_k_380_, lean_object* v_cleanupAnnotations_381_, lean_object* v_whnfType_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_388_; uint8_t v_whnfType_boxed_389_; lean_object* v_res_390_; 
v_cleanupAnnotations_boxed_388_ = lean_unbox(v_cleanupAnnotations_381_);
v_whnfType_boxed_389_ = lean_unbox(v_whnfType_382_);
v_res_390_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3(v_00_u03b1_377_, v_type_378_, v_maxFVars_x3f_379_, v_k_380_, v_cleanupAnnotations_boxed_388_, v_whnfType_boxed_389_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg(lean_object* v_mvarId_391_, lean_object* v_x_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_391_, v_x_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_398_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_398_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
else
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
v_a_407_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_398_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_398_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg___boxed(lean_object* v_mvarId_415_, lean_object* v_x_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg(v_mvarId_415_, v_x_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4(lean_object* v_00_u03b1_423_, lean_object* v_mvarId_424_, lean_object* v_x_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg(v_mvarId_424_, v_x_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___boxed(lean_object* v_00_u03b1_432_, lean_object* v_mvarId_433_, lean_object* v_x_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4(v_00_u03b1_432_, v_mvarId_433_, v_x_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0(lean_object* v_args_441_, lean_object* v___x_442_, uint8_t v___x_443_, uint8_t v___x_444_, lean_object* v_xs_445_, lean_object* v_type_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_x27(v_args_441_, v_xs_445_, v_type_446_, v___x_442_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; lean_object* v_fst_454_; lean_object* v_snd_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_480_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_a_453_);
lean_dec_ref_known(v___x_452_, 1);
v_fst_454_ = lean_ctor_get(v_a_453_, 0);
v_snd_455_ = lean_ctor_get(v_a_453_, 1);
v_isSharedCheck_480_ = !lean_is_exclusive(v_a_453_);
if (v_isSharedCheck_480_ == 0)
{
v___x_457_ = v_a_453_;
v_isShared_458_ = v_isSharedCheck_480_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_snd_455_);
lean_inc(v_fst_454_);
lean_dec(v_a_453_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_480_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
uint8_t v___x_459_; lean_object* v___x_460_; 
v___x_459_ = 1;
v___x_460_ = l_Lean_Meta_mkForallFVars(v_xs_445_, v_snd_455_, v___x_443_, v___x_444_, v___x_444_, v___x_459_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_471_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_471_ == 0)
{
v___x_463_ = v___x_460_;
v_isShared_464_ = v_isSharedCheck_471_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_460_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_471_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 1, v_a_461_);
v___x_466_ = v___x_457_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_fst_454_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_a_461_);
v___x_466_ = v_reuseFailAlloc_470_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_468_; 
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 0, v___x_466_);
v___x_468_ = v___x_463_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_466_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_del_object(v___x_457_);
lean_dec(v_fst_454_);
v_a_472_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_460_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_460_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
}
else
{
lean_dec_ref(v_xs_445_);
return v___x_452_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0___boxed(lean_object* v_args_481_, lean_object* v___x_482_, lean_object* v___x_483_, lean_object* v___x_484_, lean_object* v_xs_485_, lean_object* v_type_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
uint8_t v___x_4446__boxed_492_; uint8_t v___x_4447__boxed_493_; lean_object* v_res_494_; 
v___x_4446__boxed_492_ = lean_unbox(v___x_483_);
v___x_4447__boxed_493_ = lean_unbox(v___x_484_);
v_res_494_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0(v_args_481_, v___x_482_, v___x_4446__boxed_492_, v___x_4447__boxed_493_, v_xs_485_, v_type_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_);
lean_dec(v___y_490_);
lean_dec_ref(v___y_489_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec_ref(v_args_481_);
return v_res_494_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2(lean_object* v_as_495_, size_t v_i_496_, size_t v_stop_497_){
_start:
{
uint8_t v___x_498_; 
v___x_498_ = lean_usize_dec_eq(v_i_496_, v_stop_497_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; lean_object* v_hName_x3f_500_; 
v___x_499_ = lean_array_uget_borrowed(v_as_495_, v_i_496_);
v_hName_x3f_500_ = lean_ctor_get(v___x_499_, 2);
if (lean_obj_tag(v_hName_x3f_500_) == 0)
{
size_t v___x_501_; size_t v___x_502_; 
v___x_501_ = ((size_t)1ULL);
v___x_502_ = lean_usize_add(v_i_496_, v___x_501_);
v_i_496_ = v___x_502_;
goto _start;
}
else
{
uint8_t v___x_504_; 
v___x_504_ = 1;
return v___x_504_;
}
}
else
{
uint8_t v___x_505_; 
v___x_505_ = 0;
return v___x_505_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2___boxed(lean_object* v_as_506_, lean_object* v_i_507_, lean_object* v_stop_508_){
_start:
{
size_t v_i_boxed_509_; size_t v_stop_boxed_510_; uint8_t v_res_511_; lean_object* v_r_512_; 
v_i_boxed_509_ = lean_unbox_usize(v_i_507_);
lean_dec(v_i_507_);
v_stop_boxed_510_ = lean_unbox_usize(v_stop_508_);
lean_dec(v_stop_508_);
v_res_511_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2(v_as_506_, v_i_boxed_509_, v_stop_boxed_510_);
lean_dec_ref(v_as_506_);
v_r_512_ = lean_box(v_res_511_);
return v_r_512_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0(size_t v_sz_513_, size_t v_i_514_, lean_object* v_bs_515_){
_start:
{
uint8_t v___x_516_; 
v___x_516_ = lean_usize_dec_lt(v_i_514_, v_sz_513_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; 
v___x_517_ = l_unsafeCast___redArg(v_bs_515_);
lean_dec_ref(v_bs_515_);
return v___x_517_;
}
else
{
lean_object* v_v_518_; lean_object* v___x_519_; lean_object* v_expr_520_; lean_object* v___x_521_; lean_object* v_bs_x27_522_; size_t v___x_523_; size_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v_v_518_ = lean_array_uget_borrowed(v_bs_515_, v_i_514_);
v___x_519_ = l_unsafeCast___redArg(v_v_518_);
v_expr_520_ = lean_ctor_get(v___x_519_, 0);
lean_inc_ref(v_expr_520_);
lean_dec(v___x_519_);
v___x_521_ = lean_unsigned_to_nat(0u);
v_bs_x27_522_ = lean_array_uset(v_bs_515_, v_i_514_, v___x_521_);
v___x_523_ = ((size_t)1ULL);
v___x_524_ = lean_usize_add(v_i_514_, v___x_523_);
v___x_525_ = l_unsafeCast___redArg(v_expr_520_);
lean_dec_ref(v_expr_520_);
v___x_526_ = lean_array_uset(v_bs_x27_522_, v_i_514_, v___x_525_);
v_i_514_ = v___x_524_;
v_bs_515_ = v___x_526_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0___boxed(lean_object* v_sz_528_, lean_object* v_i_529_, lean_object* v_bs_530_){
_start:
{
size_t v_sz_boxed_531_; size_t v_i_boxed_532_; lean_object* v_res_533_; 
v_sz_boxed_531_ = lean_unbox_usize(v_sz_528_);
lean_dec(v_sz_528_);
v_i_boxed_532_ = lean_unbox_usize(v_i_529_);
lean_dec(v_i_529_);
v_res_533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0(v_sz_boxed_531_, v_i_boxed_532_, v_bs_530_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7___redArg(lean_object* v_x_534_, lean_object* v_x_535_, lean_object* v_x_536_, lean_object* v_x_537_){
_start:
{
lean_object* v_ks_538_; lean_object* v_vs_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_563_; 
v_ks_538_ = lean_ctor_get(v_x_534_, 0);
v_vs_539_ = lean_ctor_get(v_x_534_, 1);
v_isSharedCheck_563_ = !lean_is_exclusive(v_x_534_);
if (v_isSharedCheck_563_ == 0)
{
v___x_541_ = v_x_534_;
v_isShared_542_ = v_isSharedCheck_563_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_vs_539_);
lean_inc(v_ks_538_);
lean_dec(v_x_534_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_563_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_543_; uint8_t v___x_544_; 
v___x_543_ = lean_array_get_size(v_ks_538_);
v___x_544_ = lean_nat_dec_lt(v_x_535_, v___x_543_);
if (v___x_544_ == 0)
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_548_; 
lean_dec(v_x_535_);
v___x_545_ = lean_array_push(v_ks_538_, v_x_536_);
v___x_546_ = lean_array_push(v_vs_539_, v_x_537_);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 1, v___x_546_);
lean_ctor_set(v___x_541_, 0, v___x_545_);
v___x_548_ = v___x_541_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v___x_546_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
else
{
lean_object* v_k_x27_550_; uint8_t v___x_551_; 
v_k_x27_550_ = lean_array_fget_borrowed(v_ks_538_, v_x_535_);
v___x_551_ = l_Lean_instBEqMVarId_beq(v_x_536_, v_k_x27_550_);
if (v___x_551_ == 0)
{
lean_object* v___x_553_; 
if (v_isShared_542_ == 0)
{
v___x_553_ = v___x_541_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_ks_538_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v_vs_539_);
v___x_553_ = v_reuseFailAlloc_557_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = lean_unsigned_to_nat(1u);
v___x_555_ = lean_nat_add(v_x_535_, v___x_554_);
lean_dec(v_x_535_);
v_x_534_ = v___x_553_;
v_x_535_ = v___x_555_;
goto _start;
}
}
else
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_561_; 
v___x_558_ = lean_array_fset(v_ks_538_, v_x_535_, v_x_536_);
v___x_559_ = lean_array_fset(v_vs_539_, v_x_535_, v_x_537_);
lean_dec(v_x_535_);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 1, v___x_559_);
lean_ctor_set(v___x_541_, 0, v___x_558_);
v___x_561_ = v___x_541_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v___x_558_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v___x_559_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6___redArg(lean_object* v_n_564_, lean_object* v_k_565_, lean_object* v_v_566_){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_567_ = lean_unsigned_to_nat(0u);
v___x_568_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7___redArg(v_n_564_, v___x_567_, v_k_565_, v_v_566_);
return v___x_568_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_569_ = lean_box(0);
v___x_570_ = l_unsafeCast___redArg(v___x_569_);
return v___x_570_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_571_; 
v___x_571_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(lean_object* v_x_572_, size_t v_x_573_, size_t v_x_574_, lean_object* v_x_575_, lean_object* v_x_576_){
_start:
{
if (lean_obj_tag(v_x_572_) == 0)
{
lean_object* v_es_577_; size_t v___x_578_; size_t v___x_579_; lean_object* v_j_580_; lean_object* v___x_581_; uint8_t v___x_582_; 
v_es_577_ = lean_ctor_get(v_x_572_, 0);
v___x_578_ = ((size_t)31ULL);
v___x_579_ = lean_usize_land(v_x_573_, v___x_578_);
v_j_580_ = lean_usize_to_nat(v___x_579_);
v___x_581_ = lean_array_get_size(v_es_577_);
v___x_582_ = lean_nat_dec_lt(v_j_580_, v___x_581_);
if (v___x_582_ == 0)
{
lean_dec(v_j_580_);
lean_dec(v_x_576_);
lean_dec(v_x_575_);
return v_x_572_;
}
else
{
lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_621_; 
lean_inc_ref(v_es_577_);
v_isSharedCheck_621_ = !lean_is_exclusive(v_x_572_);
if (v_isSharedCheck_621_ == 0)
{
lean_object* v_unused_622_; 
v_unused_622_ = lean_ctor_get(v_x_572_, 0);
lean_dec(v_unused_622_);
v___x_584_ = v_x_572_;
v_isShared_585_ = v_isSharedCheck_621_;
goto v_resetjp_583_;
}
else
{
lean_dec(v_x_572_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_621_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v_v_586_; lean_object* v___x_587_; lean_object* v_xs_x27_588_; lean_object* v___y_590_; 
v_v_586_ = lean_array_fget(v_es_577_, v_j_580_);
v___x_587_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__0);
v_xs_x27_588_ = lean_array_fset(v_es_577_, v_j_580_, v___x_587_);
switch(lean_obj_tag(v_v_586_))
{
case 0:
{
lean_object* v_key_595_; lean_object* v_val_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_606_; 
v_key_595_ = lean_ctor_get(v_v_586_, 0);
v_val_596_ = lean_ctor_get(v_v_586_, 1);
v_isSharedCheck_606_ = !lean_is_exclusive(v_v_586_);
if (v_isSharedCheck_606_ == 0)
{
v___x_598_ = v_v_586_;
v_isShared_599_ = v_isSharedCheck_606_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_val_596_);
lean_inc(v_key_595_);
lean_dec(v_v_586_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_606_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
uint8_t v___x_600_; 
v___x_600_ = l_Lean_instBEqMVarId_beq(v_x_575_, v_key_595_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; lean_object* v___x_602_; 
lean_del_object(v___x_598_);
v___x_601_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_595_, v_val_596_, v_x_575_, v_x_576_);
v___x_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
v___y_590_ = v___x_602_;
goto v___jp_589_;
}
else
{
lean_object* v___x_604_; 
lean_dec(v_val_596_);
lean_dec(v_key_595_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 1, v_x_576_);
lean_ctor_set(v___x_598_, 0, v_x_575_);
v___x_604_ = v___x_598_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_x_575_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_x_576_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
v___y_590_ = v___x_604_;
goto v___jp_589_;
}
}
}
}
case 1:
{
lean_object* v_node_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_619_; 
v_node_607_ = lean_ctor_get(v_v_586_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v_v_586_);
if (v_isSharedCheck_619_ == 0)
{
v___x_609_ = v_v_586_;
v_isShared_610_ = v_isSharedCheck_619_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_node_607_);
lean_dec(v_v_586_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_619_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
size_t v___x_611_; size_t v___x_612_; size_t v___x_613_; size_t v___x_614_; lean_object* v___x_615_; lean_object* v___x_617_; 
v___x_611_ = ((size_t)5ULL);
v___x_612_ = lean_usize_shift_right(v_x_573_, v___x_611_);
v___x_613_ = ((size_t)1ULL);
v___x_614_ = lean_usize_add(v_x_574_, v___x_613_);
v___x_615_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(v_node_607_, v___x_612_, v___x_614_, v_x_575_, v_x_576_);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 0, v___x_615_);
v___x_617_ = v___x_609_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_615_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
v___y_590_ = v___x_617_;
goto v___jp_589_;
}
}
}
default: 
{
lean_object* v___x_620_; 
v___x_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_620_, 0, v_x_575_);
lean_ctor_set(v___x_620_, 1, v_x_576_);
v___y_590_ = v___x_620_;
goto v___jp_589_;
}
}
v___jp_589_:
{
lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_591_ = lean_array_fset(v_xs_x27_588_, v_j_580_, v___y_590_);
lean_dec(v_j_580_);
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 0, v___x_591_);
v___x_593_ = v___x_584_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v___x_591_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
}
}
else
{
lean_object* v_ks_623_; lean_object* v_vs_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_642_; 
v_ks_623_ = lean_ctor_get(v_x_572_, 0);
v_vs_624_ = lean_ctor_get(v_x_572_, 1);
v_isSharedCheck_642_ = !lean_is_exclusive(v_x_572_);
if (v_isSharedCheck_642_ == 0)
{
v___x_626_ = v_x_572_;
v_isShared_627_ = v_isSharedCheck_642_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_vs_624_);
lean_inc(v_ks_623_);
lean_dec(v_x_572_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_642_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_ks_623_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_vs_624_);
v___x_629_ = v_reuseFailAlloc_641_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
lean_object* v_newNode_630_; size_t v___x_631_; uint8_t v___x_632_; 
v_newNode_630_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6___redArg(v___x_629_, v_x_575_, v_x_576_);
v___x_631_ = ((size_t)7ULL);
v___x_632_ = lean_usize_dec_le(v___x_631_, v_x_574_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v___x_633_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_630_);
v___x_634_ = lean_unsigned_to_nat(4u);
v___x_635_ = lean_nat_dec_lt(v___x_633_, v___x_634_);
lean_dec(v___x_633_);
if (v___x_635_ == 0)
{
lean_object* v_ks_636_; lean_object* v_vs_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v_ks_636_ = lean_ctor_get(v_newNode_630_, 0);
lean_inc_ref(v_ks_636_);
v_vs_637_ = lean_ctor_get(v_newNode_630_, 1);
lean_inc_ref(v_vs_637_);
lean_dec_ref(v_newNode_630_);
v___x_638_ = lean_unsigned_to_nat(0u);
v___x_639_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___closed__1);
v___x_640_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg(v_x_574_, v_ks_636_, v_vs_637_, v___x_638_, v___x_639_);
lean_dec_ref(v_vs_637_);
lean_dec_ref(v_ks_636_);
return v___x_640_;
}
else
{
return v_newNode_630_;
}
}
else
{
return v_newNode_630_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg(size_t v_depth_643_, lean_object* v_keys_644_, lean_object* v_vals_645_, lean_object* v_i_646_, lean_object* v_entries_647_){
_start:
{
lean_object* v___x_648_; uint8_t v___x_649_; 
v___x_648_ = lean_array_get_size(v_keys_644_);
v___x_649_ = lean_nat_dec_lt(v_i_646_, v___x_648_);
if (v___x_649_ == 0)
{
lean_dec(v_i_646_);
return v_entries_647_;
}
else
{
lean_object* v_k_650_; lean_object* v_v_651_; uint64_t v___x_652_; size_t v_h_653_; size_t v___x_654_; lean_object* v___x_655_; size_t v___x_656_; size_t v___x_657_; size_t v___x_658_; size_t v_h_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v_k_650_ = lean_array_fget_borrowed(v_keys_644_, v_i_646_);
v_v_651_ = lean_array_fget_borrowed(v_vals_645_, v_i_646_);
v___x_652_ = l_Lean_instHashableMVarId_hash(v_k_650_);
v_h_653_ = lean_uint64_to_usize(v___x_652_);
v___x_654_ = ((size_t)5ULL);
v___x_655_ = lean_unsigned_to_nat(1u);
v___x_656_ = ((size_t)1ULL);
v___x_657_ = lean_usize_sub(v_depth_643_, v___x_656_);
v___x_658_ = lean_usize_mul(v___x_654_, v___x_657_);
v_h_659_ = lean_usize_shift_right(v_h_653_, v___x_658_);
v___x_660_ = lean_nat_add(v_i_646_, v___x_655_);
lean_dec(v_i_646_);
lean_inc(v_v_651_);
lean_inc(v_k_650_);
v___x_661_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(v_entries_647_, v_h_659_, v_depth_643_, v_k_650_, v_v_651_);
v_i_646_ = v___x_660_;
v_entries_647_ = v___x_661_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg___boxed(lean_object* v_depth_663_, lean_object* v_keys_664_, lean_object* v_vals_665_, lean_object* v_i_666_, lean_object* v_entries_667_){
_start:
{
size_t v_depth_boxed_668_; lean_object* v_res_669_; 
v_depth_boxed_668_ = lean_unbox_usize(v_depth_663_);
lean_dec(v_depth_663_);
v_res_669_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg(v_depth_boxed_668_, v_keys_664_, v_vals_665_, v_i_666_, v_entries_667_);
lean_dec_ref(v_vals_665_);
lean_dec_ref(v_keys_664_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_x_670_, lean_object* v_x_671_, lean_object* v_x_672_, lean_object* v_x_673_, lean_object* v_x_674_){
_start:
{
size_t v_x_4642__boxed_675_; size_t v_x_4643__boxed_676_; lean_object* v_res_677_; 
v_x_4642__boxed_675_ = lean_unbox_usize(v_x_671_);
lean_dec(v_x_671_);
v_x_4643__boxed_676_ = lean_unbox_usize(v_x_672_);
lean_dec(v_x_672_);
v_res_677_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(v_x_670_, v_x_4642__boxed_675_, v_x_4643__boxed_676_, v_x_673_, v_x_674_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1___redArg(lean_object* v_x_678_, lean_object* v_x_679_, lean_object* v_x_680_){
_start:
{
uint64_t v___x_681_; size_t v___x_682_; size_t v___x_683_; lean_object* v___x_684_; 
v___x_681_ = l_Lean_instHashableMVarId_hash(v_x_679_);
v___x_682_ = lean_uint64_to_usize(v___x_681_);
v___x_683_ = ((size_t)1ULL);
v___x_684_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(v_x_678_, v___x_682_, v___x_683_, v_x_679_, v_x_680_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(lean_object* v_mvarId_685_, lean_object* v_val_686_, lean_object* v___y_687_){
_start:
{
lean_object* v___x_689_; lean_object* v_mctx_690_; lean_object* v_cache_691_; lean_object* v_zetaDeltaFVarIds_692_; lean_object* v_postponed_693_; lean_object* v_diag_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_723_; 
v___x_689_ = lean_st_ref_take(v___y_687_);
v_mctx_690_ = lean_ctor_get(v___x_689_, 0);
v_cache_691_ = lean_ctor_get(v___x_689_, 1);
v_zetaDeltaFVarIds_692_ = lean_ctor_get(v___x_689_, 2);
v_postponed_693_ = lean_ctor_get(v___x_689_, 3);
v_diag_694_ = lean_ctor_get(v___x_689_, 4);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_723_ == 0)
{
v___x_696_ = v___x_689_;
v_isShared_697_ = v_isSharedCheck_723_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_diag_694_);
lean_inc(v_postponed_693_);
lean_inc(v_zetaDeltaFVarIds_692_);
lean_inc(v_cache_691_);
lean_inc(v_mctx_690_);
lean_dec(v___x_689_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_723_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v_depth_698_; lean_object* v_levelAssignDepth_699_; lean_object* v_lmvarCounter_700_; lean_object* v_mvarCounter_701_; lean_object* v_lDecls_702_; lean_object* v_decls_703_; lean_object* v_userNames_704_; lean_object* v_lAssignment_705_; lean_object* v_eAssignment_706_; lean_object* v_dAssignment_707_; lean_object* v_instanceTypedMVars_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_722_; 
v_depth_698_ = lean_ctor_get(v_mctx_690_, 0);
v_levelAssignDepth_699_ = lean_ctor_get(v_mctx_690_, 1);
v_lmvarCounter_700_ = lean_ctor_get(v_mctx_690_, 2);
v_mvarCounter_701_ = lean_ctor_get(v_mctx_690_, 3);
v_lDecls_702_ = lean_ctor_get(v_mctx_690_, 4);
v_decls_703_ = lean_ctor_get(v_mctx_690_, 5);
v_userNames_704_ = lean_ctor_get(v_mctx_690_, 6);
v_lAssignment_705_ = lean_ctor_get(v_mctx_690_, 7);
v_eAssignment_706_ = lean_ctor_get(v_mctx_690_, 8);
v_dAssignment_707_ = lean_ctor_get(v_mctx_690_, 9);
v_instanceTypedMVars_708_ = lean_ctor_get(v_mctx_690_, 10);
v_isSharedCheck_722_ = !lean_is_exclusive(v_mctx_690_);
if (v_isSharedCheck_722_ == 0)
{
v___x_710_ = v_mctx_690_;
v_isShared_711_ = v_isSharedCheck_722_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_instanceTypedMVars_708_);
lean_inc(v_dAssignment_707_);
lean_inc(v_eAssignment_706_);
lean_inc(v_lAssignment_705_);
lean_inc(v_userNames_704_);
lean_inc(v_decls_703_);
lean_inc(v_lDecls_702_);
lean_inc(v_mvarCounter_701_);
lean_inc(v_lmvarCounter_700_);
lean_inc(v_levelAssignDepth_699_);
lean_inc(v_depth_698_);
lean_dec(v_mctx_690_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_722_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_712_ = lean_box(0);
v___x_713_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1___redArg(v_eAssignment_706_, v_mvarId_685_, v_val_686_);
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 8, v___x_713_);
v___x_715_ = v___x_710_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_depth_698_);
lean_ctor_set(v_reuseFailAlloc_721_, 1, v_levelAssignDepth_699_);
lean_ctor_set(v_reuseFailAlloc_721_, 2, v_lmvarCounter_700_);
lean_ctor_set(v_reuseFailAlloc_721_, 3, v_mvarCounter_701_);
lean_ctor_set(v_reuseFailAlloc_721_, 4, v_lDecls_702_);
lean_ctor_set(v_reuseFailAlloc_721_, 5, v_decls_703_);
lean_ctor_set(v_reuseFailAlloc_721_, 6, v_userNames_704_);
lean_ctor_set(v_reuseFailAlloc_721_, 7, v_lAssignment_705_);
lean_ctor_set(v_reuseFailAlloc_721_, 8, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_721_, 9, v_dAssignment_707_);
lean_ctor_set(v_reuseFailAlloc_721_, 10, v_instanceTypedMVars_708_);
v___x_715_ = v_reuseFailAlloc_721_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_object* v___x_717_; 
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_715_);
v___x_717_ = v___x_696_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_715_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v_cache_691_);
lean_ctor_set(v_reuseFailAlloc_720_, 2, v_zetaDeltaFVarIds_692_);
lean_ctor_set(v_reuseFailAlloc_720_, 3, v_postponed_693_);
lean_ctor_set(v_reuseFailAlloc_720_, 4, v_diag_694_);
v___x_717_ = v_reuseFailAlloc_720_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = lean_st_ref_put(v___y_687_, v___x_717_);
v___x_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_719_, 0, v___x_712_);
return v___x_719_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg___boxed(lean_object* v_mvarId_724_, lean_object* v_val_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(v_mvarId_724_, v_val_725_, v___y_726_);
lean_dec(v___y_726_);
return v_res_728_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1(void){
_start:
{
lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_730_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__0));
v___x_731_ = l_Lean_stringToMessageData(v___x_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1(lean_object* v_mvarId_732_, lean_object* v___x_733_, lean_object* v_args_734_, uint8_t v_transparency_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v___x_741_; 
lean_inc(v___x_733_);
lean_inc(v_mvarId_732_);
v___x_741_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_732_, v___x_733_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v___x_742_; 
lean_dec_ref_known(v___x_741_, 1);
lean_inc(v_mvarId_732_);
v___x_742_ = l_Lean_MVarId_getTag(v_mvarId_732_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; lean_object* v___x_744_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_743_);
lean_dec_ref_known(v___x_742_, 1);
lean_inc(v_mvarId_732_);
v___x_744_ = l_Lean_MVarId_getType(v_mvarId_732_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_746_; lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_862_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref_known(v___x_744_, 1);
v___x_746_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_a_745_, v___y_737_);
v_a_747_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_862_ == 0)
{
v___x_749_ = v___x_746_;
v_isShared_750_ = v_isSharedCheck_862_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_746_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_862_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = lean_unsigned_to_nat(0u);
v___x_752_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go(v_args_734_, v_transparency_735_, v_a_747_, v___x_751_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; lean_object* v___y_755_; lean_object* v___y_756_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; uint8_t v___y_761_; lean_object* v___y_779_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___x_830_; 
v_a_753_ = lean_ctor_get(v___x_752_, 0);
lean_inc_n(v_a_753_, 2);
lean_dec_ref_known(v___x_752_, 1);
v___x_830_ = l_Lean_Meta_isTypeCorrect(v_a_753_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v_a_831_; uint8_t v___x_832_; 
v_a_831_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_a_831_);
lean_dec_ref_known(v___x_830_, 1);
v___x_832_ = lean_unbox(v_a_831_);
lean_dec(v_a_831_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_833_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1, &l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1_once, _init_l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___closed__1);
lean_inc(v_a_753_);
v___x_834_ = l_Lean_indentExpr(v_a_753_);
v___x_835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_833_);
lean_ctor_set(v___x_835_, 1, v___x_834_);
v___x_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
lean_inc(v_mvarId_732_);
v___x_837_ = l_Lean_Meta_throwTacticEx___redArg(v___x_733_, v_mvarId_732_, v___x_836_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_dec_ref_known(v___x_837_, 1);
v___y_779_ = v___y_736_;
v___y_780_ = v___y_737_;
v___y_781_ = v___y_738_;
v___y_782_ = v___y_739_;
goto v___jp_778_;
}
else
{
lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_845_; 
lean_dec(v_a_753_);
lean_del_object(v___x_749_);
lean_dec(v_a_743_);
lean_dec_ref(v_args_734_);
lean_dec(v_mvarId_732_);
v_a_838_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_845_ == 0)
{
v___x_840_ = v___x_837_;
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v___x_837_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_843_; 
if (v_isShared_841_ == 0)
{
v___x_843_ = v___x_840_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_a_838_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
else
{
lean_dec(v___x_733_);
v___y_779_ = v___y_736_;
v___y_780_ = v___y_737_;
v___y_781_ = v___y_738_;
v___y_782_ = v___y_739_;
goto v___jp_778_;
}
}
else
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec(v_a_753_);
lean_del_object(v___x_749_);
lean_dec(v_a_743_);
lean_dec_ref(v_args_734_);
lean_dec(v___x_733_);
lean_dec(v_mvarId_732_);
v_a_846_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_830_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_830_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
v___jp_754_:
{
uint8_t v___x_762_; lean_object* v___x_763_; 
v___x_762_ = 1;
v___x_763_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_753_, v_a_743_, v___y_760_, v___y_756_, v___y_758_, v___y_757_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc_n(v_a_764_, 2);
lean_dec_ref_known(v___x_763_, 1);
v___x_765_ = l_Lean_mkAppN(v_a_764_, v___y_759_);
lean_dec(v___y_759_);
v___x_766_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(v_mvarId_732_, v___x_765_, v___y_756_);
lean_dec_ref(v___x_766_);
v___x_767_ = l_Lean_Expr_mvarId_x21(v_a_764_);
lean_dec(v_a_764_);
v___x_768_ = lean_box(0);
v___x_769_ = l_Lean_Meta_introNCore(v___x_767_, v___y_755_, v___x_768_, v___y_761_, v___x_762_, v___y_760_, v___y_756_, v___y_758_, v___y_757_);
return v___x_769_;
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_dec(v___y_759_);
lean_dec(v___y_755_);
lean_dec(v_mvarId_732_);
v_a_770_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_763_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_763_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
v___jp_778_:
{
size_t v_sz_783_; size_t v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; 
v_sz_783_ = lean_array_size(v_args_734_);
v___x_784_ = ((size_t)0ULL);
v___x_785_ = l_unsafeCast___redArg(v_args_734_);
v___x_786_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__0(v_sz_783_, v___x_784_, v___x_785_);
v___x_787_ = l_unsafeCast___redArg(v___x_786_);
lean_dec_ref(v___x_786_);
v___x_788_ = lean_array_get_size(v_args_734_);
v___x_789_ = lean_nat_dec_lt(v___x_751_, v___x_788_);
if (v___x_789_ == 0)
{
lean_del_object(v___x_749_);
lean_dec_ref(v_args_734_);
v___y_755_ = v___x_788_;
v___y_756_ = v___y_780_;
v___y_757_ = v___y_782_;
v___y_758_ = v___y_781_;
v___y_759_ = v___x_787_;
v___y_760_ = v___y_779_;
v___y_761_ = v___x_789_;
goto v___jp_754_;
}
else
{
if (v___x_789_ == 0)
{
lean_del_object(v___x_749_);
lean_dec_ref(v_args_734_);
v___y_755_ = v___x_788_;
v___y_756_ = v___y_780_;
v___y_757_ = v___y_782_;
v___y_758_ = v___y_781_;
v___y_759_ = v___x_787_;
v___y_760_ = v___y_779_;
v___y_761_ = v___x_789_;
goto v___jp_754_;
}
else
{
size_t v___x_790_; uint8_t v___x_791_; 
v___x_790_ = lean_usize_of_nat(v___x_788_);
v___x_791_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__2(v_args_734_, v___x_784_, v___x_790_);
if (v___x_791_ == 0)
{
lean_del_object(v___x_749_);
lean_dec_ref(v_args_734_);
v___y_755_ = v___x_788_;
v___y_756_ = v___y_780_;
v___y_757_ = v___y_782_;
v___y_758_ = v___y_781_;
v___y_759_ = v___x_787_;
v___y_760_ = v___y_779_;
v___y_761_ = v___x_791_;
goto v___jp_754_;
}
else
{
uint8_t v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___f_795_; lean_object* v___x_797_; 
v___x_792_ = 0;
v___x_793_ = lean_box(v___x_792_);
v___x_794_ = lean_box(v___x_791_);
v___f_795_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__0___boxed), 11, 4);
lean_closure_set(v___f_795_, 0, v_args_734_);
lean_closure_set(v___f_795_, 1, v___x_751_);
lean_closure_set(v___f_795_, 2, v___x_793_);
lean_closure_set(v___f_795_, 3, v___x_794_);
if (v_isShared_750_ == 0)
{
lean_ctor_set_tag(v___x_749_, 1);
lean_ctor_set(v___x_749_, 0, v___x_788_);
v___x_797_ = v___x_749_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_788_);
v___x_797_ = v_reuseFailAlloc_829_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
lean_object* v___x_798_; 
v___x_798_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__3___redArg(v_a_753_, v___x_797_, v___f_795_, v___x_792_, v___x_792_, v___y_779_, v___y_780_, v___y_781_, v___y_782_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v_a_799_; lean_object* v_fst_800_; lean_object* v_snd_801_; lean_object* v___x_802_; 
v_a_799_ = lean_ctor_get(v___x_798_, 0);
lean_inc(v_a_799_);
lean_dec_ref_known(v___x_798_, 1);
v_fst_800_ = lean_ctor_get(v_a_799_, 0);
lean_inc(v_fst_800_);
v_snd_801_ = lean_ctor_get(v_a_799_, 1);
lean_inc(v_snd_801_);
lean_dec(v_a_799_);
v___x_802_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_snd_801_, v_a_743_, v___y_779_, v___y_780_, v___y_781_, v___y_782_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
lean_inc_n(v_a_803_, 2);
lean_dec_ref_known(v___x_802_, 1);
v___x_804_ = l_Lean_mkAppN(v_a_803_, v___x_787_);
lean_dec(v___x_787_);
lean_inc(v_fst_800_);
v___x_805_ = lean_array_mk(v_fst_800_);
v___x_806_ = l_Lean_mkAppN(v___x_804_, v___x_805_);
lean_dec_ref(v___x_805_);
v___x_807_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(v_mvarId_732_, v___x_806_, v___y_780_);
lean_dec_ref(v___x_807_);
v___x_808_ = l_Lean_Expr_mvarId_x21(v_a_803_);
lean_dec(v_a_803_);
v___x_809_ = l_List_lengthTR___redArg(v_fst_800_);
lean_dec(v_fst_800_);
v___x_810_ = lean_nat_add(v___x_788_, v___x_809_);
lean_dec(v___x_809_);
v___x_811_ = lean_box(0);
v___x_812_ = l_Lean_Meta_introNCore(v___x_808_, v___x_810_, v___x_811_, v___x_792_, v___x_791_, v___y_779_, v___y_780_, v___y_781_, v___y_782_);
return v___x_812_;
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
lean_dec(v_fst_800_);
lean_dec(v___x_787_);
lean_dec(v_mvarId_732_);
v_a_813_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_802_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_802_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
else
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_828_; 
lean_dec(v___x_787_);
lean_dec(v_a_743_);
lean_dec(v_mvarId_732_);
v_a_821_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_828_ == 0)
{
v___x_823_ = v___x_798_;
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_798_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_826_; 
if (v_isShared_824_ == 0)
{
v___x_826_ = v___x_823_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_821_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
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
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
lean_del_object(v___x_749_);
lean_dec(v_a_743_);
lean_dec_ref(v_args_734_);
lean_dec(v___x_733_);
lean_dec(v_mvarId_732_);
v_a_854_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_752_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_752_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
lean_dec(v_a_743_);
lean_dec_ref(v_args_734_);
lean_dec(v___x_733_);
lean_dec(v_mvarId_732_);
v_a_863_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_744_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_744_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_863_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
else
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_dec_ref(v_args_734_);
lean_dec(v___x_733_);
lean_dec(v_mvarId_732_);
v_a_871_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_742_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_742_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
else
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
lean_dec_ref(v_args_734_);
lean_dec(v___x_733_);
lean_dec(v_mvarId_732_);
v_a_879_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_886_ == 0)
{
v___x_881_ = v___x_741_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_741_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_879_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___boxed(lean_object* v_mvarId_887_, lean_object* v___x_888_, lean_object* v_args_889_, lean_object* v_transparency_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
uint8_t v_transparency_boxed_896_; lean_object* v_res_897_; 
v_transparency_boxed_896_ = lean_unbox(v_transparency_890_);
v_res_897_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1(v_mvarId_887_, v___x_888_, v_args_889_, v_transparency_boxed_896_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
lean_dec(v___y_892_);
lean_dec_ref(v___y_891_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(lean_object* v_mvarId_901_, lean_object* v_args_902_, uint8_t v_transparency_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___f_911_; lean_object* v___x_912_; 
v___x_909_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___closed__1));
v___x_910_ = lean_box(v_transparency_903_);
lean_inc(v_mvarId_901_);
v___f_911_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___lam__1___boxed), 9, 4);
lean_closure_set(v___f_911_, 0, v_mvarId_901_);
lean_closure_set(v___f_911_, 1, v___x_909_);
lean_closure_set(v___f_911_, 2, v_args_902_);
lean_closure_set(v___f_911_, 3, v___x_910_);
v___x_912_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__4___redArg(v_mvarId_901_, v___f_911_, v_a_904_, v_a_905_, v_a_906_, v_a_907_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore___boxed(lean_object* v_mvarId_913_, lean_object* v_args_914_, lean_object* v_transparency_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_){
_start:
{
uint8_t v_transparency_boxed_921_; lean_object* v_res_922_; 
v_transparency_boxed_921_ = lean_unbox(v_transparency_915_);
v_res_922_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(v_mvarId_913_, v_args_914_, v_transparency_boxed_921_, v_a_916_, v_a_917_, v_a_918_, v_a_919_);
lean_dec(v_a_919_);
lean_dec_ref(v_a_918_);
lean_dec(v_a_917_);
lean_dec_ref(v_a_916_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1(lean_object* v_mvarId_923_, lean_object* v_val_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___redArg(v_mvarId_923_, v_val_924_, v___y_926_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1___boxed(lean_object* v_mvarId_931_, lean_object* v_val_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1(v_mvarId_931_, v_val_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1(lean_object* v_00_u03b2_939_, lean_object* v_x_940_, lean_object* v_x_941_, lean_object* v_x_942_){
_start:
{
lean_object* v___x_943_; 
v___x_943_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1___redArg(v_x_940_, v_x_941_, v_x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_944_, lean_object* v_x_945_, size_t v_x_946_, size_t v_x_947_, lean_object* v_x_948_, lean_object* v_x_949_){
_start:
{
lean_object* v___x_950_; 
v___x_950_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___redArg(v_x_945_, v_x_946_, v_x_947_, v_x_948_, v_x_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_951_, lean_object* v_x_952_, lean_object* v_x_953_, lean_object* v_x_954_, lean_object* v_x_955_, lean_object* v_x_956_){
_start:
{
size_t v_x_5223__boxed_957_; size_t v_x_5224__boxed_958_; lean_object* v_res_959_; 
v_x_5223__boxed_957_ = lean_unbox_usize(v_x_953_);
lean_dec(v_x_953_);
v_x_5224__boxed_958_ = lean_unbox_usize(v_x_954_);
lean_dec(v_x_954_);
v_res_959_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4(v_00_u03b2_951_, v_x_952_, v_x_5223__boxed_957_, v_x_5224__boxed_958_, v_x_955_, v_x_956_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6(lean_object* v_00_u03b2_960_, lean_object* v_n_961_, lean_object* v_k_962_, lean_object* v_v_963_){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6___redArg(v_n_961_, v_k_962_, v_v_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7(lean_object* v_00_u03b2_965_, size_t v_depth_966_, lean_object* v_keys_967_, lean_object* v_vals_968_, lean_object* v_heq_969_, lean_object* v_i_970_, lean_object* v_entries_971_){
_start:
{
lean_object* v___x_972_; 
v___x_972_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___redArg(v_depth_966_, v_keys_967_, v_vals_968_, v_i_970_, v_entries_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7___boxed(lean_object* v_00_u03b2_973_, lean_object* v_depth_974_, lean_object* v_keys_975_, lean_object* v_vals_976_, lean_object* v_heq_977_, lean_object* v_i_978_, lean_object* v_entries_979_){
_start:
{
size_t v_depth_boxed_980_; lean_object* v_res_981_; 
v_depth_boxed_980_ = lean_unbox_usize(v_depth_974_);
lean_dec(v_depth_974_);
v_res_981_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__7(v_00_u03b2_973_, v_depth_boxed_980_, v_keys_975_, v_vals_976_, v_heq_977_, v_i_978_, v_entries_979_);
lean_dec_ref(v_vals_976_);
lean_dec_ref(v_keys_975_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7(lean_object* v_00_u03b2_982_, lean_object* v_x_983_, lean_object* v_x_984_, lean_object* v_x_985_, lean_object* v_x_986_){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_spec__1_spec__1_spec__4_spec__6_spec__7___redArg(v_x_983_, v_x_984_, v_x_985_, v_x_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_generalize(lean_object* v_mvarId_988_, lean_object* v_args_989_, uint8_t v_transparency_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_){
_start:
{
lean_object* v___x_996_; 
v___x_996_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(v_mvarId_988_, v_args_989_, v_transparency_990_, v_a_991_, v_a_992_, v_a_993_, v_a_994_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_generalize___boxed(lean_object* v_mvarId_997_, lean_object* v_args_998_, lean_object* v_transparency_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_){
_start:
{
uint8_t v_transparency_boxed_1005_; lean_object* v_res_1006_; 
v_transparency_boxed_1005_ = lean_unbox(v_transparency_999_);
v_res_1006_ = l_Lean_MVarId_generalize(v_mvarId_997_, v_args_998_, v_transparency_boxed_1005_, v_a_1000_, v_a_1001_, v_a_1002_, v_a_1003_);
lean_dec(v_a_1003_);
lean_dec_ref(v_a_1002_);
lean_dec(v_a_1001_);
lean_dec_ref(v_a_1000_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg(size_t v_sz_1007_, size_t v_i_1008_, lean_object* v_bs_1009_, lean_object* v___y_1010_){
_start:
{
uint8_t v___x_1012_; 
v___x_1012_ = lean_usize_dec_lt(v_i_1008_, v_sz_1007_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = l_unsafeCast___redArg(v_bs_1009_);
lean_dec_ref(v_bs_1009_);
v___x_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
return v___x_1014_;
}
else
{
lean_object* v_v_1015_; lean_object* v___x_1016_; lean_object* v_expr_1017_; lean_object* v_xName_x3f_1018_; lean_object* v_hName_x3f_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1043_; 
v_v_1015_ = lean_array_uget_borrowed(v_bs_1009_, v_i_1008_);
v___x_1016_ = l_unsafeCast___redArg(v_v_1015_);
v_expr_1017_ = lean_ctor_get(v___x_1016_, 0);
v_xName_x3f_1018_ = lean_ctor_get(v___x_1016_, 1);
v_hName_x3f_1019_ = lean_ctor_get(v___x_1016_, 2);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1021_ = v___x_1016_;
v_isShared_1022_ = v_isSharedCheck_1043_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_hName_x3f_1019_);
lean_inc(v_xName_x3f_1018_);
lean_inc(v_expr_1017_);
lean_dec(v___x_1016_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1043_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1023_; lean_object* v_bs_x27_1024_; lean_object* v___x_1025_; 
v___x_1023_ = lean_unsigned_to_nat(0u);
v_bs_x27_1024_ = lean_array_uset(v_bs_1009_, v_i_1008_, v___x_1023_);
v___x_1025_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_expr_1017_, v___y_1010_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v___x_1028_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
lean_inc(v_a_1026_);
lean_dec_ref_known(v___x_1025_, 1);
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 0, v_a_1026_);
v___x_1028_ = v___x_1021_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1026_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v_xName_x3f_1018_);
lean_ctor_set(v_reuseFailAlloc_1034_, 2, v_hName_x3f_1019_);
v___x_1028_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
size_t v___x_1029_; size_t v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1029_ = ((size_t)1ULL);
v___x_1030_ = lean_usize_add(v_i_1008_, v___x_1029_);
v___x_1031_ = l_unsafeCast___redArg(v___x_1028_);
lean_dec_ref(v___x_1028_);
v___x_1032_ = lean_array_uset(v_bs_x27_1024_, v_i_1008_, v___x_1031_);
v_i_1008_ = v___x_1030_;
v_bs_1009_ = v___x_1032_;
goto _start;
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec_ref(v_bs_x27_1024_);
lean_del_object(v___x_1021_);
lean_dec(v_hName_x3f_1019_);
lean_dec(v_xName_x3f_1018_);
v_a_1035_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1025_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1025_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg___boxed(lean_object* v_sz_1044_, lean_object* v_i_1045_, lean_object* v_bs_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
size_t v_sz_boxed_1049_; size_t v_i_boxed_1050_; lean_object* v_res_1051_; 
v_sz_boxed_1049_ = lean_unbox_usize(v_sz_1044_);
lean_dec(v_sz_1044_);
v_i_boxed_1050_ = lean_unbox_usize(v_i_1045_);
lean_dec(v_i_1045_);
v_res_1051_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg(v_sz_boxed_1049_, v_i_boxed_1050_, v_bs_1046_, v___y_1047_);
lean_dec(v___y_1047_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0(size_t v_sz_1052_, size_t v_i_1053_, lean_object* v_bs_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___redArg(v_sz_1052_, v_i_1053_, v_bs_1054_, v___y_1056_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___boxed(lean_object* v_sz_1061_, lean_object* v_i_1062_, lean_object* v_bs_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
size_t v_sz_boxed_1069_; size_t v_i_boxed_1070_; lean_object* v_res_1071_; 
v_sz_boxed_1069_ = lean_unbox_usize(v_sz_1061_);
lean_dec(v_sz_1061_);
v_i_boxed_1070_ = lean_unbox_usize(v_i_1062_);
lean_dec(v_i_1062_);
v_res_1071_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0(v_sz_boxed_1069_, v_i_boxed_1070_, v_bs_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2(lean_object* v_as_1072_, size_t v_sz_1073_, size_t v_i_1074_, lean_object* v_b_1075_){
_start:
{
uint8_t v___x_1076_; 
v___x_1076_ = lean_usize_dec_lt(v_i_1074_, v_sz_1073_);
if (v___x_1076_ == 0)
{
return v_b_1075_;
}
else
{
lean_object* v_snd_1077_; lean_object* v_fst_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1111_; 
v_snd_1077_ = lean_ctor_get(v_b_1075_, 1);
v_fst_1078_ = lean_ctor_get(v_b_1075_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v_b_1075_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1080_ = v_b_1075_;
v_isShared_1081_ = v_isSharedCheck_1111_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_snd_1077_);
lean_inc(v_fst_1078_);
lean_dec(v_b_1075_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1111_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v_array_1082_; lean_object* v_start_1083_; lean_object* v_stop_1084_; uint8_t v___x_1085_; 
v_array_1082_ = lean_ctor_get(v_snd_1077_, 0);
v_start_1083_ = lean_ctor_get(v_snd_1077_, 1);
v_stop_1084_ = lean_ctor_get(v_snd_1077_, 2);
v___x_1085_ = lean_nat_dec_lt(v_start_1083_, v_stop_1084_);
if (v___x_1085_ == 0)
{
lean_object* v___x_1087_; 
if (v_isShared_1081_ == 0)
{
v___x_1087_ = v___x_1080_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_fst_1078_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_snd_1077_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
else
{
lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1107_; 
lean_inc(v_stop_1084_);
lean_inc(v_start_1083_);
lean_inc_ref(v_array_1082_);
v_isSharedCheck_1107_ = !lean_is_exclusive(v_snd_1077_);
if (v_isSharedCheck_1107_ == 0)
{
lean_object* v_unused_1108_; lean_object* v_unused_1109_; lean_object* v_unused_1110_; 
v_unused_1108_ = lean_ctor_get(v_snd_1077_, 2);
lean_dec(v_unused_1108_);
v_unused_1109_ = lean_ctor_get(v_snd_1077_, 1);
lean_dec(v_unused_1109_);
v_unused_1110_ = lean_ctor_get(v_snd_1077_, 0);
lean_dec(v_unused_1110_);
v___x_1090_ = v_snd_1077_;
v_isShared_1091_ = v_isSharedCheck_1107_;
goto v_resetjp_1089_;
}
else
{
lean_dec(v_snd_1077_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1107_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v_a_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
v_a_1092_ = lean_array_uget_borrowed(v_as_1072_, v_i_1074_);
v___x_1093_ = lean_array_fget(v_array_1082_, v_start_1083_);
v___x_1094_ = lean_unsigned_to_nat(1u);
v___x_1095_ = lean_nat_add(v_start_1083_, v___x_1094_);
lean_dec(v_start_1083_);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 1, v___x_1095_);
v___x_1097_ = v___x_1090_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_array_1082_);
lean_ctor_set(v_reuseFailAlloc_1106_, 1, v___x_1095_);
lean_ctor_set(v_reuseFailAlloc_1106_, 2, v_stop_1084_);
v___x_1097_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1101_; 
v___x_1098_ = l_Lean_mkFVar(v___x_1093_);
lean_inc(v_a_1092_);
v___x_1099_ = l_Lean_Meta_FVarSubst_insert(v_fst_1078_, v_a_1092_, v___x_1098_);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 1, v___x_1097_);
lean_ctor_set(v___x_1080_, 0, v___x_1099_);
v___x_1101_ = v___x_1080_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___x_1099_);
lean_ctor_set(v_reuseFailAlloc_1105_, 1, v___x_1097_);
v___x_1101_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
size_t v___x_1102_; size_t v___x_1103_; 
v___x_1102_ = ((size_t)1ULL);
v___x_1103_ = lean_usize_add(v_i_1074_, v___x_1102_);
v_i_1074_ = v___x_1103_;
v_b_1075_ = v___x_1101_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2___boxed(lean_object* v_as_1112_, lean_object* v_sz_1113_, lean_object* v_i_1114_, lean_object* v_b_1115_){
_start:
{
size_t v_sz_boxed_1116_; size_t v_i_boxed_1117_; lean_object* v_res_1118_; 
v_sz_boxed_1116_ = lean_unbox_usize(v_sz_1113_);
lean_dec(v_sz_1113_);
v_i_boxed_1117_ = lean_unbox_usize(v_i_1114_);
lean_dec(v_i_1114_);
v_res_1118_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2(v_as_1112_, v_sz_boxed_1116_, v_i_boxed_1117_, v_b_1115_);
lean_dec_ref(v_as_1112_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1(uint8_t v_transparency_1119_, lean_object* v_a_1120_, lean_object* v_as_1121_, size_t v_i_1122_, size_t v_stop_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
uint8_t v___x_1129_; 
v___x_1129_ = lean_usize_dec_eq(v_i_1122_, v_stop_1123_);
if (v___x_1129_ == 0)
{
lean_object* v___x_1130_; lean_object* v_expr_1131_; lean_object* v___x_1132_; uint8_t v_transparency_1133_; uint8_t v___x_1134_; lean_object* v___y_1136_; lean_object* v___x_1158_; uint8_t v___x_1159_; 
v___x_1130_ = lean_array_uget_borrowed(v_as_1121_, v_i_1122_);
v_expr_1131_ = lean_ctor_get(v___x_1130_, 0);
v___x_1132_ = l_Lean_Meta_Context_config(v___y_1124_);
v_transparency_1133_ = lean_ctor_get_uint8(v___x_1132_, 9);
lean_dec_ref(v___x_1132_);
v___x_1134_ = 1;
v___x_1158_ = lean_box(0);
v___x_1159_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1133_, v_transparency_1119_);
if (v___x_1159_ == 0)
{
lean_object* v_keyedConfig_1160_; uint8_t v_trackZetaDelta_1161_; lean_object* v_zetaDeltaSet_1162_; lean_object* v_lctx_1163_; lean_object* v_localInstances_1164_; lean_object* v_defEqCtx_x3f_1165_; lean_object* v_synthPendingDepth_1166_; lean_object* v_customCanUnfoldPredicate_x3f_1167_; uint8_t v_univApprox_1168_; uint8_t v_inTypeClassResolution_1169_; uint8_t v_cacheInferType_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v_keyedConfig_1160_ = lean_ctor_get(v___y_1124_, 0);
v_trackZetaDelta_1161_ = lean_ctor_get_uint8(v___y_1124_, sizeof(void*)*7);
v_zetaDeltaSet_1162_ = lean_ctor_get(v___y_1124_, 1);
v_lctx_1163_ = lean_ctor_get(v___y_1124_, 2);
v_localInstances_1164_ = lean_ctor_get(v___y_1124_, 3);
v_defEqCtx_x3f_1165_ = lean_ctor_get(v___y_1124_, 4);
v_synthPendingDepth_1166_ = lean_ctor_get(v___y_1124_, 5);
v_customCanUnfoldPredicate_x3f_1167_ = lean_ctor_get(v___y_1124_, 6);
v_univApprox_1168_ = lean_ctor_get_uint8(v___y_1124_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1169_ = lean_ctor_get_uint8(v___y_1124_, sizeof(void*)*7 + 2);
v_cacheInferType_1170_ = lean_ctor_get_uint8(v___y_1124_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1160_);
v___x_1171_ = l_Lean_Meta_ConfigWithKey_setTransparency(v_transparency_1119_, v_keyedConfig_1160_);
lean_inc(v_customCanUnfoldPredicate_x3f_1167_);
lean_inc(v_synthPendingDepth_1166_);
lean_inc(v_defEqCtx_x3f_1165_);
lean_inc_ref(v_localInstances_1164_);
lean_inc_ref(v_lctx_1163_);
lean_inc(v_zetaDeltaSet_1162_);
v___x_1172_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1172_, 0, v___x_1171_);
lean_ctor_set(v___x_1172_, 1, v_zetaDeltaSet_1162_);
lean_ctor_set(v___x_1172_, 2, v_lctx_1163_);
lean_ctor_set(v___x_1172_, 3, v_localInstances_1164_);
lean_ctor_set(v___x_1172_, 4, v_defEqCtx_x3f_1165_);
lean_ctor_set(v___x_1172_, 5, v_synthPendingDepth_1166_);
lean_ctor_set(v___x_1172_, 6, v_customCanUnfoldPredicate_x3f_1167_);
lean_ctor_set_uint8(v___x_1172_, sizeof(void*)*7, v_trackZetaDelta_1161_);
lean_ctor_set_uint8(v___x_1172_, sizeof(void*)*7 + 1, v_univApprox_1168_);
lean_ctor_set_uint8(v___x_1172_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1169_);
lean_ctor_set_uint8(v___x_1172_, sizeof(void*)*7 + 3, v_cacheInferType_1170_);
lean_inc_ref(v_expr_1131_);
lean_inc_ref(v_a_1120_);
v___x_1173_ = l_Lean_Meta_kabstract(v_a_1120_, v_expr_1131_, v___x_1158_, v___x_1172_, v___y_1125_, v___y_1126_, v___y_1127_);
lean_dec_ref_known(v___x_1172_, 7);
v___y_1136_ = v___x_1173_;
goto v___jp_1135_;
}
else
{
lean_object* v___x_1174_; 
lean_inc_ref(v_expr_1131_);
lean_inc_ref(v_a_1120_);
v___x_1174_ = l_Lean_Meta_kabstract(v_a_1120_, v_expr_1131_, v___x_1158_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
v___y_1136_ = v___x_1174_;
goto v___jp_1135_;
}
v___jp_1135_:
{
if (lean_obj_tag(v___y_1136_) == 0)
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1149_; 
v_a_1137_ = lean_ctor_get(v___y_1136_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___y_1136_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1139_ = v___y_1136_;
v_isShared_1140_ = v_isSharedCheck_1149_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___y_1136_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1149_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
uint8_t v___x_1141_; 
v___x_1141_ = l_Lean_Expr_hasLooseBVars(v_a_1137_);
lean_dec(v_a_1137_);
if (v___x_1141_ == 0)
{
size_t v___x_1142_; size_t v___x_1143_; 
lean_del_object(v___x_1139_);
v___x_1142_ = ((size_t)1ULL);
v___x_1143_ = lean_usize_add(v_i_1122_, v___x_1142_);
v_i_1122_ = v___x_1143_;
goto _start;
}
else
{
lean_object* v___x_1145_; lean_object* v___x_1147_; 
lean_dec_ref(v_a_1120_);
v___x_1145_ = lean_box(v___x_1134_);
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 0, v___x_1145_);
v___x_1147_ = v___x_1139_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v___x_1145_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
lean_dec_ref(v_a_1120_);
v_a_1150_ = lean_ctor_get(v___y_1136_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___y_1136_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___y_1136_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___y_1136_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
}
else
{
uint8_t v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
lean_dec_ref(v_a_1120_);
v___x_1175_ = 0;
v___x_1176_ = lean_box(v___x_1175_);
v___x_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
return v___x_1177_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1___boxed(lean_object* v_transparency_1178_, lean_object* v_a_1179_, lean_object* v_as_1180_, lean_object* v_i_1181_, lean_object* v_stop_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
uint8_t v_transparency_boxed_1188_; size_t v_i_boxed_1189_; size_t v_stop_boxed_1190_; lean_object* v_res_1191_; 
v_transparency_boxed_1188_ = lean_unbox(v_transparency_1178_);
v_i_boxed_1189_ = lean_unbox_usize(v_i_1181_);
lean_dec(v_i_1181_);
v_stop_boxed_1190_ = lean_unbox_usize(v_stop_1182_);
lean_dec(v_stop_1182_);
v_res_1191_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1(v_transparency_boxed_1188_, v_a_1179_, v_as_1180_, v_i_boxed_1189_, v_stop_boxed_1190_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
lean_dec_ref(v_as_1180_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3(lean_object* v_a_1192_, uint8_t v_transparency_1193_, lean_object* v_as_1194_, size_t v_i_1195_, size_t v_stop_1196_, lean_object* v_b_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
lean_object* v_a_1204_; uint8_t v___x_1208_; 
v___x_1208_ = lean_usize_dec_eq(v_i_1195_, v_stop_1196_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1209_ = lean_array_uget_borrowed(v_as_1194_, v_i_1195_);
lean_inc(v___x_1209_);
v___x_1210_ = l_Lean_FVarId_getType___redArg(v___x_1209_, v___y_1198_, v___y_1200_, v___y_1201_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_object* v_a_1211_; lean_object* v___x_1212_; 
v_a_1211_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_a_1211_);
lean_dec_ref_known(v___x_1210_, 1);
v___x_1212_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_a_1211_, v___y_1199_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v_a_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; uint8_t v___x_1216_; 
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_a_1213_);
lean_dec_ref_known(v___x_1212_, 1);
v___x_1214_ = lean_unsigned_to_nat(0u);
v___x_1215_ = lean_array_get_size(v_a_1192_);
v___x_1216_ = lean_nat_dec_lt(v___x_1214_, v___x_1215_);
if (v___x_1216_ == 0)
{
lean_dec(v_a_1213_);
v_a_1204_ = v_b_1197_;
goto v___jp_1203_;
}
else
{
if (v___x_1216_ == 0)
{
lean_dec(v_a_1213_);
v_a_1204_ = v_b_1197_;
goto v___jp_1203_;
}
else
{
size_t v___x_1217_; size_t v___x_1218_; lean_object* v___x_1219_; 
v___x_1217_ = ((size_t)0ULL);
v___x_1218_ = lean_usize_of_nat(v___x_1215_);
v___x_1219_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1(v_transparency_1193_, v_a_1213_, v_a_1192_, v___x_1217_, v___x_1218_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_);
if (lean_obj_tag(v___x_1219_) == 0)
{
lean_object* v_a_1220_; uint8_t v___x_1221_; 
v_a_1220_ = lean_ctor_get(v___x_1219_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v___x_1219_, 1);
v___x_1221_ = lean_unbox(v_a_1220_);
lean_dec(v_a_1220_);
if (v___x_1221_ == 0)
{
v_a_1204_ = v_b_1197_;
goto v___jp_1203_;
}
else
{
lean_object* v___x_1222_; 
lean_inc(v___x_1209_);
v___x_1222_ = lean_array_push(v_b_1197_, v___x_1209_);
v_a_1204_ = v___x_1222_;
goto v___jp_1203_;
}
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
lean_dec_ref(v_b_1197_);
v_a_1223_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1219_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1219_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
}
}
else
{
lean_object* v_a_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1238_; 
lean_dec_ref(v_b_1197_);
v_a_1231_ = lean_ctor_get(v___x_1212_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1212_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1233_ = v___x_1212_;
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_a_1231_);
lean_dec(v___x_1212_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1238_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1236_; 
if (v_isShared_1234_ == 0)
{
v___x_1236_ = v___x_1233_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_a_1231_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
}
else
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1246_; 
lean_dec_ref(v_b_1197_);
v_a_1239_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1241_ = v___x_1210_;
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1210_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1244_; 
if (v_isShared_1242_ == 0)
{
v___x_1244_ = v___x_1241_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_a_1239_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
}
else
{
lean_object* v___x_1247_; 
v___x_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1247_, 0, v_b_1197_);
return v___x_1247_;
}
v___jp_1203_:
{
size_t v___x_1205_; size_t v___x_1206_; 
v___x_1205_ = ((size_t)1ULL);
v___x_1206_ = lean_usize_add(v_i_1195_, v___x_1205_);
v_i_1195_ = v___x_1206_;
v_b_1197_ = v_a_1204_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3___boxed(lean_object* v_a_1248_, lean_object* v_transparency_1249_, lean_object* v_as_1250_, lean_object* v_i_1251_, lean_object* v_stop_1252_, lean_object* v_b_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
uint8_t v_transparency_boxed_1259_; size_t v_i_boxed_1260_; size_t v_stop_boxed_1261_; lean_object* v_res_1262_; 
v_transparency_boxed_1259_ = lean_unbox(v_transparency_1249_);
v_i_boxed_1260_ = lean_unbox_usize(v_i_1251_);
lean_dec(v_i_1251_);
v_stop_boxed_1261_ = lean_unbox_usize(v_stop_1252_);
lean_dec(v_stop_1252_);
v_res_1262_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3(v_a_1248_, v_transparency_boxed_1259_, v_as_1250_, v_i_boxed_1260_, v_stop_boxed_1261_, v_b_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
lean_dec_ref(v_as_1250_);
lean_dec_ref(v_a_1248_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3(uint8_t v_transparency_1263_, lean_object* v_a_1264_, lean_object* v_as_1265_, size_t v_i_1266_, size_t v_stop_1267_, lean_object* v_b_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v_a_1275_; uint8_t v___x_1279_; 
v___x_1279_ = lean_usize_dec_eq(v_i_1266_, v_stop_1267_);
if (v___x_1279_ == 0)
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = lean_array_uget_borrowed(v_as_1265_, v_i_1266_);
lean_inc(v___x_1280_);
v___x_1281_ = l_Lean_FVarId_getType___redArg(v___x_1280_, v___y_1269_, v___y_1271_, v___y_1272_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v_a_1282_; lean_object* v___x_1283_; 
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_a_1282_);
lean_dec_ref_known(v___x_1281_, 1);
v___x_1283_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore_go_spec__0___redArg(v_a_1282_, v___y_1270_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; uint8_t v___x_1287_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_a_1284_);
lean_dec_ref_known(v___x_1283_, 1);
v___x_1285_ = lean_unsigned_to_nat(0u);
v___x_1286_ = lean_array_get_size(v_a_1264_);
v___x_1287_ = lean_nat_dec_lt(v___x_1285_, v___x_1286_);
if (v___x_1287_ == 0)
{
lean_dec(v_a_1284_);
v_a_1275_ = v_b_1268_;
goto v___jp_1274_;
}
else
{
if (v___x_1287_ == 0)
{
lean_dec(v_a_1284_);
v_a_1275_ = v_b_1268_;
goto v___jp_1274_;
}
else
{
size_t v___x_1288_; size_t v___x_1289_; lean_object* v___x_1290_; 
v___x_1288_ = ((size_t)0ULL);
v___x_1289_ = lean_usize_of_nat(v___x_1286_);
v___x_1290_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MVarId_generalizeHyp_spec__1(v_transparency_1263_, v_a_1284_, v_a_1264_, v___x_1288_, v___x_1289_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; uint8_t v___x_1292_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
lean_inc(v_a_1291_);
lean_dec_ref_known(v___x_1290_, 1);
v___x_1292_ = lean_unbox(v_a_1291_);
lean_dec(v_a_1291_);
if (v___x_1292_ == 0)
{
v_a_1275_ = v_b_1268_;
goto v___jp_1274_;
}
else
{
lean_object* v___x_1293_; 
lean_inc(v___x_1280_);
v___x_1293_ = lean_array_push(v_b_1268_, v___x_1280_);
v_a_1275_ = v___x_1293_;
goto v___jp_1274_;
}
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
lean_dec_ref(v_b_1268_);
v_a_1294_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1290_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1290_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
}
}
else
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
lean_dec_ref(v_b_1268_);
v_a_1302_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1283_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1283_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
else
{
lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
lean_dec_ref(v_b_1268_);
v_a_1310_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1281_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1281_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_a_1310_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
}
else
{
lean_object* v___x_1318_; 
v___x_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1318_, 0, v_b_1268_);
return v___x_1318_;
}
v___jp_1274_:
{
size_t v___x_1276_; size_t v___x_1277_; lean_object* v___x_1278_; 
v___x_1276_ = ((size_t)1ULL);
v___x_1277_ = lean_usize_add(v_i_1266_, v___x_1276_);
v___x_1278_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3_spec__3(v_a_1264_, v_transparency_1263_, v_as_1265_, v___x_1277_, v_stop_1267_, v_a_1275_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
return v___x_1278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3___boxed(lean_object* v_transparency_1319_, lean_object* v_a_1320_, lean_object* v_as_1321_, lean_object* v_i_1322_, lean_object* v_stop_1323_, lean_object* v_b_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_){
_start:
{
uint8_t v_transparency_boxed_1330_; size_t v_i_boxed_1331_; size_t v_stop_boxed_1332_; lean_object* v_res_1333_; 
v_transparency_boxed_1330_ = lean_unbox(v_transparency_1319_);
v_i_boxed_1331_ = lean_unbox_usize(v_i_1322_);
lean_dec(v_i_1322_);
v_stop_boxed_1332_ = lean_unbox_usize(v_stop_1323_);
lean_dec(v_stop_1323_);
v_res_1333_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3(v_transparency_boxed_1330_, v_a_1320_, v_as_1321_, v_i_boxed_1331_, v_stop_boxed_1332_, v_b_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec_ref(v_as_1321_);
lean_dec_ref(v_a_1320_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_generalizeHyp(lean_object* v_mvarId_1338_, lean_object* v_args_1339_, lean_object* v_hyps_1340_, lean_object* v_fvarSubst_1341_, uint8_t v_transparency_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_, lean_object* v_a_1346_){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; uint8_t v___x_1350_; 
v___x_1348_ = lean_array_get_size(v_hyps_1340_);
v___x_1349_ = lean_unsigned_to_nat(0u);
v___x_1350_ = lean_nat_dec_eq(v___x_1348_, v___x_1349_);
if (v___x_1350_ == 0)
{
uint8_t v___x_1351_; size_t v_sz_1352_; size_t v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_5083__overap_1358_; lean_object* v___x_1359_; 
v___x_1351_ = 1;
v_sz_1352_ = lean_array_size(v_args_1339_);
v___x_1353_ = ((size_t)0ULL);
v___x_1354_ = l_unsafeCast___redArg(v_args_1339_);
lean_dec_ref(v_args_1339_);
v___x_1355_ = lean_box_usize(v_sz_1352_);
v___x_1356_ = ((lean_object*)(l_Lean_MVarId_generalizeHyp___boxed__const__1));
v___x_1357_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_generalizeHyp_spec__0___boxed), 8, 3);
lean_closure_set(v___x_1357_, 0, v___x_1355_);
lean_closure_set(v___x_1357_, 1, v___x_1356_);
lean_closure_set(v___x_1357_, 2, v___x_1354_);
v___x_5083__overap_1358_ = l_unsafeCast___redArg(v___x_1357_);
lean_dec_ref(v___x_1357_);
lean_inc(v_a_1346_);
lean_inc_ref(v_a_1345_);
lean_inc(v_a_1344_);
lean_inc_ref(v_a_1343_);
v___x_1359_ = lean_apply_5(v___x_5083__overap_1358_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_, lean_box(0));
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v_a_1360_; lean_object* v_a_1362_; lean_object* v___y_1436_; lean_object* v___x_1446_; uint8_t v___x_1447_; 
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
lean_inc(v_a_1360_);
lean_dec_ref_known(v___x_1359_, 1);
v___x_1446_ = ((lean_object*)(l_Lean_MVarId_generalizeHyp___closed__0));
v___x_1447_ = lean_nat_dec_lt(v___x_1349_, v___x_1348_);
if (v___x_1447_ == 0)
{
v_a_1362_ = v___x_1446_;
goto v___jp_1361_;
}
else
{
uint8_t v___x_1448_; 
v___x_1448_ = lean_nat_dec_le(v___x_1348_, v___x_1348_);
if (v___x_1448_ == 0)
{
if (v___x_1447_ == 0)
{
v_a_1362_ = v___x_1446_;
goto v___jp_1361_;
}
else
{
size_t v___x_1449_; lean_object* v___x_1450_; 
v___x_1449_ = lean_usize_of_nat(v___x_1348_);
v___x_1450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3(v_transparency_1342_, v_a_1360_, v_hyps_1340_, v___x_1353_, v___x_1449_, v___x_1446_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_);
v___y_1436_ = v___x_1450_;
goto v___jp_1435_;
}
}
else
{
size_t v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = lean_usize_of_nat(v___x_1348_);
v___x_1452_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_generalizeHyp_spec__3(v_transparency_1342_, v_a_1360_, v_hyps_1340_, v___x_1353_, v___x_1451_, v___x_1446_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_);
v___y_1436_ = v___x_1452_;
goto v___jp_1435_;
}
}
v___jp_1361_:
{
lean_object* v___x_1363_; 
v___x_1363_ = l_Lean_MVarId_revert(v_mvarId_1338_, v_a_1362_, v___x_1351_, v___x_1350_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v_a_1364_; lean_object* v_fst_1365_; lean_object* v_snd_1366_; lean_object* v___x_1367_; 
v_a_1364_ = lean_ctor_get(v___x_1363_, 0);
lean_inc(v_a_1364_);
lean_dec_ref_known(v___x_1363_, 1);
v_fst_1365_ = lean_ctor_get(v_a_1364_, 0);
lean_inc(v_fst_1365_);
v_snd_1366_ = lean_ctor_get(v_a_1364_, 1);
lean_inc(v_snd_1366_);
lean_dec(v_a_1364_);
v___x_1367_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(v_snd_1366_, v_a_1360_, v_transparency_1342_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v_a_1368_; lean_object* v_fst_1369_; lean_object* v_snd_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1418_; 
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_a_1368_);
lean_dec_ref_known(v___x_1367_, 1);
v_fst_1369_ = lean_ctor_get(v_a_1368_, 0);
v_snd_1370_ = lean_ctor_get(v_a_1368_, 1);
v_isSharedCheck_1418_ = !lean_is_exclusive(v_a_1368_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1372_ = v_a_1368_;
v_isShared_1373_ = v_isSharedCheck_1418_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_snd_1370_);
lean_inc(v_fst_1369_);
lean_dec(v_a_1368_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1418_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1374_ = lean_array_get_size(v_fst_1365_);
v___x_1375_ = lean_box(0);
v___x_1376_ = l_Lean_Meta_introNCore(v_snd_1370_, v___x_1374_, v___x_1375_, v___x_1350_, v___x_1351_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v_a_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1409_; 
v_a_1377_ = lean_ctor_get(v___x_1376_, 0);
v_isSharedCheck_1409_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1379_ = v___x_1376_;
v_isShared_1380_ = v_isSharedCheck_1409_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_a_1377_);
lean_dec(v___x_1376_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1409_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v_fst_1381_; lean_object* v_snd_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1408_; 
v_fst_1381_ = lean_ctor_get(v_a_1377_, 0);
v_snd_1382_ = lean_ctor_get(v_a_1377_, 1);
v_isSharedCheck_1408_ = !lean_is_exclusive(v_a_1377_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1384_ = v_a_1377_;
v_isShared_1385_ = v_isSharedCheck_1408_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_snd_1382_);
lean_inc(v_fst_1381_);
lean_dec(v_a_1377_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1408_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1389_; 
v___x_1386_ = lean_array_get_size(v_fst_1381_);
v___x_1387_ = l_Array_toSubarray___redArg(v_fst_1381_, v___x_1349_, v___x_1386_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 1, v___x_1387_);
lean_ctor_set(v___x_1384_, 0, v_fvarSubst_1341_);
v___x_1389_ = v___x_1384_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_fvarSubst_1341_);
lean_ctor_set(v_reuseFailAlloc_1407_, 1, v___x_1387_);
v___x_1389_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
size_t v_sz_1390_; lean_object* v___x_1391_; lean_object* v_fst_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1405_; 
v_sz_1390_ = lean_array_size(v_fst_1365_);
v___x_1391_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_generalizeHyp_spec__2(v_fst_1365_, v_sz_1390_, v___x_1353_, v___x_1389_);
lean_dec(v_fst_1365_);
v_fst_1392_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1405_ == 0)
{
lean_object* v_unused_1406_; 
v_unused_1406_ = lean_ctor_get(v___x_1391_, 1);
lean_dec(v_unused_1406_);
v___x_1394_ = v___x_1391_;
v_isShared_1395_ = v_isSharedCheck_1405_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_fst_1392_);
lean_dec(v___x_1391_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1405_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1397_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 1, v_snd_1382_);
lean_ctor_set(v___x_1394_, 0, v_fst_1369_);
v___x_1397_ = v___x_1394_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_fst_1369_);
lean_ctor_set(v_reuseFailAlloc_1404_, 1, v_snd_1382_);
v___x_1397_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
lean_object* v___x_1399_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 1, v___x_1397_);
lean_ctor_set(v___x_1372_, 0, v_fst_1392_);
v___x_1399_ = v___x_1372_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_fst_1392_);
lean_ctor_set(v_reuseFailAlloc_1403_, 1, v___x_1397_);
v___x_1399_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
lean_object* v___x_1401_; 
if (v_isShared_1380_ == 0)
{
lean_ctor_set(v___x_1379_, 0, v___x_1399_);
v___x_1401_ = v___x_1379_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v___x_1399_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
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
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1417_; 
lean_del_object(v___x_1372_);
lean_dec(v_fst_1369_);
lean_dec(v_fst_1365_);
lean_dec(v_fvarSubst_1341_);
v_a_1410_ = lean_ctor_get(v___x_1376_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1412_ = v___x_1376_;
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1376_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_a_1410_);
v___x_1415_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
return v___x_1415_;
}
}
}
}
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
lean_dec(v_fst_1365_);
lean_dec(v_fvarSubst_1341_);
v_a_1419_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1367_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1367_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
lean_dec(v_a_1360_);
lean_dec(v_fvarSubst_1341_);
v_a_1427_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1363_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1363_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
v___jp_1435_:
{
if (lean_obj_tag(v___y_1436_) == 0)
{
lean_object* v_a_1437_; 
v_a_1437_ = lean_ctor_get(v___y_1436_, 0);
lean_inc(v_a_1437_);
lean_dec_ref_known(v___y_1436_, 1);
v_a_1362_ = v_a_1437_;
goto v___jp_1361_;
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec(v_a_1360_);
lean_dec(v_fvarSubst_1341_);
lean_dec(v_mvarId_1338_);
v_a_1438_ = lean_ctor_get(v___y_1436_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___y_1436_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___y_1436_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___y_1436_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
else
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
lean_dec(v_fvarSubst_1341_);
lean_dec(v_mvarId_1338_);
v_a_1453_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1455_ = v___x_1359_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1359_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1453_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
else
{
lean_object* v___x_1461_; 
v___x_1461_ = l___private_Lean_Meta_Tactic_Generalize_0__Lean_Meta_generalizeCore(v_mvarId_1338_, v_args_1339_, v_transparency_1342_, v_a_1343_, v_a_1344_, v_a_1345_, v_a_1346_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1470_; 
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1464_ = v___x_1461_;
v_isShared_1465_ = v_isSharedCheck_1470_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1461_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1470_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1466_; lean_object* v___x_1468_; 
v___x_1466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1466_, 0, v_fvarSubst_1341_);
lean_ctor_set(v___x_1466_, 1, v_a_1462_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v___x_1466_);
v___x_1468_ = v___x_1464_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1466_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
lean_dec(v_fvarSubst_1341_);
v_a_1471_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1461_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1461_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_generalizeHyp___boxed(lean_object* v_mvarId_1479_, lean_object* v_args_1480_, lean_object* v_hyps_1481_, lean_object* v_fvarSubst_1482_, lean_object* v_transparency_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_){
_start:
{
uint8_t v_transparency_boxed_1489_; lean_object* v_res_1490_; 
v_transparency_boxed_1489_ = lean_unbox(v_transparency_1483_);
v_res_1490_ = l_Lean_MVarId_generalizeHyp(v_mvarId_1479_, v_args_1480_, v_hyps_1481_, v_fvarSubst_1482_, v_transparency_boxed_1489_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_);
lean_dec(v_a_1487_);
lean_dec_ref(v_a_1486_);
lean_dec(v_a_1485_);
lean_dec_ref(v_a_1484_);
lean_dec_ref(v_hyps_1481_);
return v_res_1490_;
}
}
lean_object* runtime_initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Generalize(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedGeneralizeArg_default = _init_l_Lean_Meta_instInhabitedGeneralizeArg_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedGeneralizeArg_default);
l_Lean_Meta_instInhabitedGeneralizeArg = _init_l_Lean_Meta_instInhabitedGeneralizeArg();
lean_mark_persistent(l_Lean_Meta_instInhabitedGeneralizeArg);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Generalize(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_KAbstract(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Generalize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_KAbstract(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Generalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Generalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Generalize(builtin);
}
#ifdef __cplusplus
}
#endif

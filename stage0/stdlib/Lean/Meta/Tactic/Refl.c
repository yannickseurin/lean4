// Lean compiler output
// Module: Lean.Meta.Tactic.Refl
// Imports: public import Lean.Meta.Reduce public import Lean.Meta.Tactic.Apply
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_refl___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_MVarId_refl___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_refl___lam__0___closed__0_value;
static const lean_string_object l_Lean_MVarId_refl___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l_Lean_MVarId_refl___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_refl___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_MVarId_refl___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_refl___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 253, 71, 61, 132, 173, 240)}};
static const lean_object* l_Lean_MVarId_refl___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_refl___lam__0___closed__2_value;
static const lean_string_object l_Lean_MVarId_refl___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "equality lhs"};
static const lean_object* l_Lean_MVarId_refl___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_refl___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__4;
static const lean_string_object l_Lean_MVarId_refl___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "\nis not definitionally equal to rhs"};
static const lean_object* l_Lean_MVarId_refl___lam__0___closed__5 = (const lean_object*)&l_Lean_MVarId_refl___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__6;
static const lean_ctor_object l_Lean_MVarId_refl___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_refl___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_MVarId_refl___lam__0___closed__7 = (const lean_object*)&l_Lean_MVarId_refl___lam__0___closed__7_value;
static const lean_string_object l_Lean_MVarId_refl___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "equality expected"};
static const lean_object* l_Lean_MVarId_refl___lam__0___closed__8 = (const lean_object*)&l_Lean_MVarId_refl___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_MVarId_refl___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_refl___lam__0___closed__9;
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_refl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_MVarId_refl___closed__0 = (const lean_object*)&l_Lean_MVarId_refl___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_refl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_refl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 180, 45, 223, 5, 219, 138, 223)}};
static const lean_object* l_Lean_MVarId_refl___closed__1 = (const lean_object*)&l_Lean_MVarId_refl___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_heqOfEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "heq_of_eq"};
static const lean_object* l_Lean_MVarId_heqOfEq___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_heqOfEq___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_heqOfEq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_heqOfEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 243, 206, 193, 60, 85, 181, 135)}};
static const lean_object* l_Lean_MVarId_heqOfEq___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_heqOfEq___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_MVarId_heqOfEq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_MVarId_heqOfEq___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_heqOfEq___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_eqOfHEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eq_of_heq"};
static const lean_object* l_Lean_MVarId_eqOfHEq___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_eqOfHEq___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_eqOfHEq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_eqOfHEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(38, 61, 104, 192, 47, 1, 246, 178)}};
static const lean_object* l_Lean_MVarId_eqOfHEq___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_eqOfHEq___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_hrefl___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_MVarId_hrefl___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_hrefl___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_hrefl___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_hrefl___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l_Lean_MVarId_hrefl___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_hrefl___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_MVarId_refl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(180, 202, 227, 45, 204, 223, 127, 41)}};
static const lean_object* l_Lean_MVarId_hrefl___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_hrefl___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_hrefl___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hrefl"};
static const lean_object* l_Lean_MVarId_hrefl___lam__1___closed__0 = (const lean_object*)&l_Lean_MVarId_hrefl___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_hrefl___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_hrefl___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(200, 0, 103, 192, 146, 115, 118, 96)}};
static const lean_object* l_Lean_MVarId_hrefl___lam__1___closed__1 = (const lean_object*)&l_Lean_MVarId_hrefl___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_put(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(lean_object* v_mvarId_44_, lean_object* v_x_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_44_, v_x_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_);
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v_a_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_59_; 
v_a_52_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_59_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_59_ == 0)
{
v___x_54_ = v___x_51_;
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_a_52_);
lean_dec(v___x_51_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_57_; 
if (v_isShared_55_ == 0)
{
v___x_57_ = v___x_54_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_a_52_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
}
else
{
lean_object* v_a_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_67_; 
v_a_60_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_67_ == 0)
{
v___x_62_ = v___x_51_;
v_isShared_63_ = v_isSharedCheck_67_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_a_60_);
lean_dec(v___x_51_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_67_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_65_; 
if (v_isShared_63_ == 0)
{
v___x_65_ = v___x_62_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v_a_60_);
v___x_65_ = v_reuseFailAlloc_66_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
return v___x_65_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg___boxed(lean_object* v_mvarId_68_, lean_object* v_x_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_68_, v_x_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2(lean_object* v_00_u03b1_76_, lean_object* v_mvarId_77_, lean_object* v_x_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_77_, v_x_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___boxed(lean_object* v_00_u03b1_85_, lean_object* v_mvarId_86_, lean_object* v_x_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2(v_00_u03b1_85_, v_mvarId_86_, v_x_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_94_, lean_object* v_x_95_, lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
lean_object* v_ks_98_; lean_object* v_vs_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_123_; 
v_ks_98_ = lean_ctor_get(v_x_94_, 0);
v_vs_99_ = lean_ctor_get(v_x_94_, 1);
v_isSharedCheck_123_ = !lean_is_exclusive(v_x_94_);
if (v_isSharedCheck_123_ == 0)
{
v___x_101_ = v_x_94_;
v_isShared_102_ = v_isSharedCheck_123_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_vs_99_);
lean_inc(v_ks_98_);
lean_dec(v_x_94_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_123_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = lean_array_get_size(v_ks_98_);
v___x_104_ = lean_nat_dec_lt(v_x_95_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_108_; 
lean_dec(v_x_95_);
v___x_105_ = lean_array_push(v_ks_98_, v_x_96_);
v___x_106_ = lean_array_push(v_vs_99_, v_x_97_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v___x_106_);
lean_ctor_set(v___x_101_, 0, v___x_105_);
v___x_108_ = v___x_101_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_105_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v___x_106_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
else
{
lean_object* v_k_x27_110_; uint8_t v___x_111_; 
v_k_x27_110_ = lean_array_fget_borrowed(v_ks_98_, v_x_95_);
v___x_111_ = l_Lean_instBEqMVarId_beq(v_x_96_, v_k_x27_110_);
if (v___x_111_ == 0)
{
lean_object* v___x_113_; 
if (v_isShared_102_ == 0)
{
v___x_113_ = v___x_101_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_ks_98_);
lean_ctor_set(v_reuseFailAlloc_117_, 1, v_vs_99_);
v___x_113_ = v_reuseFailAlloc_117_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_unsigned_to_nat(1u);
v___x_115_ = lean_nat_add(v_x_95_, v___x_114_);
lean_dec(v_x_95_);
v_x_94_ = v___x_113_;
v_x_95_ = v___x_115_;
goto _start;
}
}
else
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_121_; 
v___x_118_ = lean_array_fset(v_ks_98_, v_x_95_, v_x_96_);
v___x_119_ = lean_array_fset(v_vs_99_, v_x_95_, v_x_97_);
lean_dec(v_x_95_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v___x_119_);
lean_ctor_set(v___x_101_, 0, v___x_118_);
v___x_121_ = v___x_101_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_118_);
lean_ctor_set(v_reuseFailAlloc_122_, 1, v___x_119_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4___redArg(lean_object* v_n_124_, lean_object* v_k_125_, lean_object* v_v_126_){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_unsigned_to_nat(0u);
v___x_128_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_n_124_, v___x_127_, v_k_125_, v_v_126_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_box(0);
v___x_130_ = l_unsafeCast___redArg(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(lean_object* v_x_132_, size_t v_x_133_, size_t v_x_134_, lean_object* v_x_135_, lean_object* v_x_136_){
_start:
{
if (lean_obj_tag(v_x_132_) == 0)
{
lean_object* v_es_137_; size_t v___x_138_; size_t v___x_139_; lean_object* v_j_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v_es_137_ = lean_ctor_get(v_x_132_, 0);
v___x_138_ = ((size_t)31ULL);
v___x_139_ = lean_usize_land(v_x_133_, v___x_138_);
v_j_140_ = lean_usize_to_nat(v___x_139_);
v___x_141_ = lean_array_get_size(v_es_137_);
v___x_142_ = lean_nat_dec_lt(v_j_140_, v___x_141_);
if (v___x_142_ == 0)
{
lean_dec(v_j_140_);
lean_dec(v_x_136_);
lean_dec(v_x_135_);
return v_x_132_;
}
else
{
lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_181_; 
lean_inc_ref(v_es_137_);
v_isSharedCheck_181_ = !lean_is_exclusive(v_x_132_);
if (v_isSharedCheck_181_ == 0)
{
lean_object* v_unused_182_; 
v_unused_182_ = lean_ctor_get(v_x_132_, 0);
lean_dec(v_unused_182_);
v___x_144_ = v_x_132_;
v_isShared_145_ = v_isSharedCheck_181_;
goto v_resetjp_143_;
}
else
{
lean_dec(v_x_132_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_181_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v_v_146_; lean_object* v___x_147_; lean_object* v_xs_x27_148_; lean_object* v___y_150_; 
v_v_146_ = lean_array_fget(v_es_137_, v_j_140_);
v___x_147_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__0);
v_xs_x27_148_ = lean_array_fset(v_es_137_, v_j_140_, v___x_147_);
switch(lean_obj_tag(v_v_146_))
{
case 0:
{
lean_object* v_key_155_; lean_object* v_val_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_166_; 
v_key_155_ = lean_ctor_get(v_v_146_, 0);
v_val_156_ = lean_ctor_get(v_v_146_, 1);
v_isSharedCheck_166_ = !lean_is_exclusive(v_v_146_);
if (v_isSharedCheck_166_ == 0)
{
v___x_158_ = v_v_146_;
v_isShared_159_ = v_isSharedCheck_166_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_val_156_);
lean_inc(v_key_155_);
lean_dec(v_v_146_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_166_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
uint8_t v___x_160_; 
v___x_160_ = l_Lean_instBEqMVarId_beq(v_x_135_, v_key_155_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; lean_object* v___x_162_; 
lean_del_object(v___x_158_);
v___x_161_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_155_, v_val_156_, v_x_135_, v_x_136_);
v___x_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
v___y_150_ = v___x_162_;
goto v___jp_149_;
}
else
{
lean_object* v___x_164_; 
lean_dec(v_val_156_);
lean_dec(v_key_155_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v_x_136_);
lean_ctor_set(v___x_158_, 0, v_x_135_);
v___x_164_ = v___x_158_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_x_135_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v_x_136_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
v___y_150_ = v___x_164_;
goto v___jp_149_;
}
}
}
}
case 1:
{
lean_object* v_node_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_179_; 
v_node_167_ = lean_ctor_get(v_v_146_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v_v_146_);
if (v_isSharedCheck_179_ == 0)
{
v___x_169_ = v_v_146_;
v_isShared_170_ = v_isSharedCheck_179_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_node_167_);
lean_dec(v_v_146_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_179_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
size_t v___x_171_; size_t v___x_172_; size_t v___x_173_; size_t v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_171_ = ((size_t)5ULL);
v___x_172_ = lean_usize_shift_right(v_x_133_, v___x_171_);
v___x_173_ = ((size_t)1ULL);
v___x_174_ = lean_usize_add(v_x_134_, v___x_173_);
v___x_175_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(v_node_167_, v___x_172_, v___x_174_, v_x_135_, v_x_136_);
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 0, v___x_175_);
v___x_177_ = v___x_169_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
v___y_150_ = v___x_177_;
goto v___jp_149_;
}
}
}
default: 
{
lean_object* v___x_180_; 
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v_x_135_);
lean_ctor_set(v___x_180_, 1, v_x_136_);
v___y_150_ = v___x_180_;
goto v___jp_149_;
}
}
v___jp_149_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = lean_array_fset(v_xs_x27_148_, v_j_140_, v___y_150_);
lean_dec(v_j_140_);
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 0, v___x_151_);
v___x_153_ = v___x_144_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_151_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
}
else
{
lean_object* v_ks_183_; lean_object* v_vs_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_202_; 
v_ks_183_ = lean_ctor_get(v_x_132_, 0);
v_vs_184_ = lean_ctor_get(v_x_132_, 1);
v_isSharedCheck_202_ = !lean_is_exclusive(v_x_132_);
if (v_isSharedCheck_202_ == 0)
{
v___x_186_ = v_x_132_;
v_isShared_187_ = v_isSharedCheck_202_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_vs_184_);
lean_inc(v_ks_183_);
lean_dec(v_x_132_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_202_;
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
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_ks_183_);
lean_ctor_set(v_reuseFailAlloc_201_, 1, v_vs_184_);
v___x_189_ = v_reuseFailAlloc_201_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v_newNode_190_; size_t v___x_191_; uint8_t v___x_192_; 
v_newNode_190_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4___redArg(v___x_189_, v_x_135_, v_x_136_);
v___x_191_ = ((size_t)7ULL);
v___x_192_ = lean_usize_dec_le(v___x_191_, v_x_134_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_193_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_190_);
v___x_194_ = lean_unsigned_to_nat(4u);
v___x_195_ = lean_nat_dec_lt(v___x_193_, v___x_194_);
lean_dec(v___x_193_);
if (v___x_195_ == 0)
{
lean_object* v_ks_196_; lean_object* v_vs_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v_ks_196_ = lean_ctor_get(v_newNode_190_, 0);
lean_inc_ref(v_ks_196_);
v_vs_197_ = lean_ctor_get(v_newNode_190_, 1);
lean_inc_ref(v_vs_197_);
lean_dec_ref(v_newNode_190_);
v___x_198_ = lean_unsigned_to_nat(0u);
v___x_199_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_200_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg(v_x_134_, v_ks_196_, v_vs_197_, v___x_198_, v___x_199_);
lean_dec_ref(v_vs_197_);
lean_dec_ref(v_ks_196_);
return v___x_200_;
}
else
{
return v_newNode_190_;
}
}
else
{
return v_newNode_190_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg(size_t v_depth_203_, lean_object* v_keys_204_, lean_object* v_vals_205_, lean_object* v_i_206_, lean_object* v_entries_207_){
_start:
{
lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_208_ = lean_array_get_size(v_keys_204_);
v___x_209_ = lean_nat_dec_lt(v_i_206_, v___x_208_);
if (v___x_209_ == 0)
{
lean_dec(v_i_206_);
return v_entries_207_;
}
else
{
lean_object* v_k_210_; lean_object* v_v_211_; uint64_t v___x_212_; size_t v_h_213_; size_t v___x_214_; lean_object* v___x_215_; size_t v___x_216_; size_t v___x_217_; size_t v___x_218_; size_t v_h_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v_k_210_ = lean_array_fget_borrowed(v_keys_204_, v_i_206_);
v_v_211_ = lean_array_fget_borrowed(v_vals_205_, v_i_206_);
v___x_212_ = l_Lean_instHashableMVarId_hash(v_k_210_);
v_h_213_ = lean_uint64_to_usize(v___x_212_);
v___x_214_ = ((size_t)5ULL);
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = ((size_t)1ULL);
v___x_217_ = lean_usize_sub(v_depth_203_, v___x_216_);
v___x_218_ = lean_usize_mul(v___x_214_, v___x_217_);
v_h_219_ = lean_usize_shift_right(v_h_213_, v___x_218_);
v___x_220_ = lean_nat_add(v_i_206_, v___x_215_);
lean_dec(v_i_206_);
lean_inc(v_v_211_);
lean_inc(v_k_210_);
v___x_221_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(v_entries_207_, v_h_219_, v_depth_203_, v_k_210_, v_v_211_);
v_i_206_ = v___x_220_;
v_entries_207_ = v___x_221_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_depth_223_, lean_object* v_keys_224_, lean_object* v_vals_225_, lean_object* v_i_226_, lean_object* v_entries_227_){
_start:
{
size_t v_depth_boxed_228_; lean_object* v_res_229_; 
v_depth_boxed_228_ = lean_unbox_usize(v_depth_223_);
lean_dec(v_depth_223_);
v_res_229_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_boxed_228_, v_keys_224_, v_vals_225_, v_i_226_, v_entries_227_);
lean_dec_ref(v_vals_225_);
lean_dec_ref(v_keys_224_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_230_, lean_object* v_x_231_, lean_object* v_x_232_, lean_object* v_x_233_, lean_object* v_x_234_){
_start:
{
size_t v_x_2375__boxed_235_; size_t v_x_2376__boxed_236_; lean_object* v_res_237_; 
v_x_2375__boxed_235_ = lean_unbox_usize(v_x_231_);
lean_dec(v_x_231_);
v_x_2376__boxed_236_ = lean_unbox_usize(v_x_232_);
lean_dec(v_x_232_);
v_res_237_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(v_x_230_, v_x_2375__boxed_235_, v_x_2376__boxed_236_, v_x_233_, v_x_234_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1___redArg(lean_object* v_x_238_, lean_object* v_x_239_, lean_object* v_x_240_){
_start:
{
uint64_t v___x_241_; size_t v___x_242_; size_t v___x_243_; lean_object* v___x_244_; 
v___x_241_ = l_Lean_instHashableMVarId_hash(v_x_239_);
v___x_242_ = lean_uint64_to_usize(v___x_241_);
v___x_243_ = ((size_t)1ULL);
v___x_244_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(v_x_238_, v___x_242_, v___x_243_, v_x_239_, v_x_240_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg(lean_object* v_mvarId_245_, lean_object* v_val_246_, lean_object* v___y_247_){
_start:
{
lean_object* v___x_249_; lean_object* v_mctx_250_; lean_object* v_cache_251_; lean_object* v_zetaDeltaFVarIds_252_; lean_object* v_postponed_253_; lean_object* v_diag_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_283_; 
v___x_249_ = lean_st_ref_take(v___y_247_);
v_mctx_250_ = lean_ctor_get(v___x_249_, 0);
v_cache_251_ = lean_ctor_get(v___x_249_, 1);
v_zetaDeltaFVarIds_252_ = lean_ctor_get(v___x_249_, 2);
v_postponed_253_ = lean_ctor_get(v___x_249_, 3);
v_diag_254_ = lean_ctor_get(v___x_249_, 4);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_283_ == 0)
{
v___x_256_ = v___x_249_;
v_isShared_257_ = v_isSharedCheck_283_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_diag_254_);
lean_inc(v_postponed_253_);
lean_inc(v_zetaDeltaFVarIds_252_);
lean_inc(v_cache_251_);
lean_inc(v_mctx_250_);
lean_dec(v___x_249_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_283_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v_depth_258_; lean_object* v_levelAssignDepth_259_; lean_object* v_lmvarCounter_260_; lean_object* v_mvarCounter_261_; lean_object* v_lDecls_262_; lean_object* v_decls_263_; lean_object* v_userNames_264_; lean_object* v_lAssignment_265_; lean_object* v_eAssignment_266_; lean_object* v_dAssignment_267_; lean_object* v_instanceTypedMVars_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_282_; 
v_depth_258_ = lean_ctor_get(v_mctx_250_, 0);
v_levelAssignDepth_259_ = lean_ctor_get(v_mctx_250_, 1);
v_lmvarCounter_260_ = lean_ctor_get(v_mctx_250_, 2);
v_mvarCounter_261_ = lean_ctor_get(v_mctx_250_, 3);
v_lDecls_262_ = lean_ctor_get(v_mctx_250_, 4);
v_decls_263_ = lean_ctor_get(v_mctx_250_, 5);
v_userNames_264_ = lean_ctor_get(v_mctx_250_, 6);
v_lAssignment_265_ = lean_ctor_get(v_mctx_250_, 7);
v_eAssignment_266_ = lean_ctor_get(v_mctx_250_, 8);
v_dAssignment_267_ = lean_ctor_get(v_mctx_250_, 9);
v_instanceTypedMVars_268_ = lean_ctor_get(v_mctx_250_, 10);
v_isSharedCheck_282_ = !lean_is_exclusive(v_mctx_250_);
if (v_isSharedCheck_282_ == 0)
{
v___x_270_ = v_mctx_250_;
v_isShared_271_ = v_isSharedCheck_282_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_instanceTypedMVars_268_);
lean_inc(v_dAssignment_267_);
lean_inc(v_eAssignment_266_);
lean_inc(v_lAssignment_265_);
lean_inc(v_userNames_264_);
lean_inc(v_decls_263_);
lean_inc(v_lDecls_262_);
lean_inc(v_mvarCounter_261_);
lean_inc(v_lmvarCounter_260_);
lean_inc(v_levelAssignDepth_259_);
lean_inc(v_depth_258_);
lean_dec(v_mctx_250_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_282_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_275_; 
v___x_272_ = lean_box(0);
v___x_273_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1___redArg(v_eAssignment_266_, v_mvarId_245_, v_val_246_);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 8, v___x_273_);
v___x_275_ = v___x_270_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_depth_258_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v_levelAssignDepth_259_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v_lmvarCounter_260_);
lean_ctor_set(v_reuseFailAlloc_281_, 3, v_mvarCounter_261_);
lean_ctor_set(v_reuseFailAlloc_281_, 4, v_lDecls_262_);
lean_ctor_set(v_reuseFailAlloc_281_, 5, v_decls_263_);
lean_ctor_set(v_reuseFailAlloc_281_, 6, v_userNames_264_);
lean_ctor_set(v_reuseFailAlloc_281_, 7, v_lAssignment_265_);
lean_ctor_set(v_reuseFailAlloc_281_, 8, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_281_, 9, v_dAssignment_267_);
lean_ctor_set(v_reuseFailAlloc_281_, 10, v_instanceTypedMVars_268_);
v___x_275_ = v_reuseFailAlloc_281_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v___x_277_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 0, v___x_275_);
v___x_277_ = v___x_256_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_275_);
lean_ctor_set(v_reuseFailAlloc_280_, 1, v_cache_251_);
lean_ctor_set(v_reuseFailAlloc_280_, 2, v_zetaDeltaFVarIds_252_);
lean_ctor_set(v_reuseFailAlloc_280_, 3, v_postponed_253_);
lean_ctor_set(v_reuseFailAlloc_280_, 4, v_diag_254_);
v___x_277_ = v_reuseFailAlloc_280_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_st_ref_put(v___y_247_, v___x_277_);
v___x_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_279_, 0, v___x_272_);
return v___x_279_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg___boxed(lean_object* v_mvarId_284_, lean_object* v_val_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg(v_mvarId_284_, v_val_285_, v___y_286_);
lean_dec(v___y_286_);
return v_res_288_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__4(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = ((lean_object*)(l_Lean_MVarId_refl___lam__0___closed__3));
v___x_295_ = l_Lean_stringToMessageData(v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__6(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = ((lean_object*)(l_Lean_MVarId_refl___lam__0___closed__5));
v___x_298_ = l_Lean_stringToMessageData(v___x_297_);
return v___x_298_;
}
}
static lean_object* _init_l_Lean_MVarId_refl___lam__0___closed__9(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = ((lean_object*)(l_Lean_MVarId_refl___lam__0___closed__8));
v___x_303_ = l_Lean_stringToMessageData(v___x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___lam__0(lean_object* v_mvarId_304_, lean_object* v___x_305_, lean_object* v___x_306_, uint8_t v_check_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___x_313_; 
lean_inc(v_mvarId_304_);
v___x_313_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_304_, v___x_305_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_393_; 
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_393_ == 0)
{
lean_object* v_unused_394_; 
v_unused_394_ = lean_ctor_get(v___x_313_, 0);
lean_dec(v_unused_394_);
v___x_315_ = v___x_313_;
v_isShared_316_ = v_isSharedCheck_393_;
goto v_resetjp_314_;
}
else
{
lean_dec(v___x_313_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_393_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_317_; 
lean_inc(v_mvarId_304_);
v___x_317_ = l_Lean_MVarId_getType_x27(v_mvarId_304_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
if (lean_obj_tag(v___x_317_) == 0)
{
lean_object* v_a_318_; lean_object* v___y_320_; lean_object* v___y_321_; lean_object* v___y_322_; lean_object* v___y_323_; lean_object* v___y_324_; lean_object* v___y_325_; lean_object* v___y_336_; lean_object* v___y_337_; lean_object* v___y_338_; lean_object* v___y_339_; lean_object* v___x_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v_a_318_ = lean_ctor_get(v___x_317_, 0);
lean_inc(v_a_318_);
lean_dec_ref_known(v___x_317_, 1);
v___x_374_ = ((lean_object*)(l_Lean_MVarId_refl___lam__0___closed__7));
v___x_375_ = lean_unsigned_to_nat(3u);
v___x_376_ = l_Lean_Expr_isAppOfArity(v_a_318_, v___x_374_, v___x_375_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_377_ = ((lean_object*)(l_Lean_MVarId_refl___lam__0___closed__2));
v___x_378_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__9, &l_Lean_MVarId_refl___lam__0___closed__9_once, _init_l_Lean_MVarId_refl___lam__0___closed__9);
lean_inc(v_a_318_);
v___x_379_ = l_Lean_indentExpr(v_a_318_);
v___x_380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_378_);
lean_ctor_set(v___x_380_, 1, v___x_379_);
if (v_isShared_316_ == 0)
{
lean_ctor_set_tag(v___x_315_, 1);
lean_ctor_set(v___x_315_, 0, v___x_380_);
v___x_382_ = v___x_315_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_380_);
v___x_382_ = v_reuseFailAlloc_384_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
lean_object* v___x_383_; 
lean_inc(v_mvarId_304_);
v___x_383_ = l_Lean_Meta_throwTacticEx___redArg(v___x_377_, v_mvarId_304_, v___x_382_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_dec_ref_known(v___x_383_, 1);
v___y_336_ = v___y_308_;
v___y_337_ = v___y_309_;
v___y_338_ = v___y_310_;
v___y_339_ = v___y_311_;
goto v___jp_335_;
}
else
{
lean_dec(v_a_318_);
lean_dec_ref(v___x_306_);
lean_dec(v_mvarId_304_);
return v___x_383_;
}
}
}
else
{
lean_del_object(v___x_315_);
v___y_336_ = v___y_308_;
v___y_337_ = v___y_309_;
v___y_338_ = v___y_310_;
v___y_339_ = v___y_311_;
goto v___jp_335_;
}
v___jp_319_:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_326_ = l_Lean_Expr_getAppFn(v_a_318_);
lean_dec(v_a_318_);
v___x_327_ = l_Lean_Expr_constLevels_x21(v___x_326_);
lean_dec_ref(v___x_326_);
v___x_328_ = l_Lean_Expr_appFn_x21(v___y_321_);
lean_dec_ref(v___y_321_);
v___x_329_ = l_Lean_Expr_appArg_x21(v___x_328_);
lean_dec_ref(v___x_328_);
v___x_330_ = ((lean_object*)(l_Lean_MVarId_refl___lam__0___closed__0));
v___x_331_ = l_Lean_Name_mkStr2(v___x_330_, v___x_306_);
v___x_332_ = l_Lean_mkConst(v___x_331_, v___x_327_);
v___x_333_ = l_Lean_mkAppB(v___x_332_, v___x_329_, v___y_320_);
v___x_334_ = l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg(v_mvarId_304_, v___x_333_, v___y_323_);
return v___x_334_;
}
v___jp_335_:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v_a_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_340_ = l_Lean_Expr_appFn_x21(v_a_318_);
v___x_341_ = l_Lean_Expr_appArg_x21(v___x_340_);
v___x_342_ = l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(v___x_341_, v___y_337_);
v_a_343_ = lean_ctor_get(v___x_342_, 0);
lean_inc(v_a_343_);
lean_dec_ref(v___x_342_);
v___x_344_ = l_Lean_Expr_appArg_x21(v_a_318_);
v___x_345_ = l_Lean_instantiateMVars___at___00Lean_MVarId_refl_spec__0___redArg(v___x_344_, v___y_337_);
if (v_check_307_ == 0)
{
lean_dec_ref(v___x_345_);
v___y_320_ = v_a_343_;
v___y_321_ = v___x_340_;
v___y_322_ = v___y_336_;
v___y_323_ = v___y_337_;
v___y_324_ = v___y_338_;
v___y_325_ = v___y_339_;
goto v___jp_319_;
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_373_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_373_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_373_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_373_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; 
lean_inc(v_a_346_);
lean_inc(v_a_343_);
v___x_350_ = l_Lean_Meta_isExprDefEq(v_a_343_, v_a_346_, v___y_336_, v___y_337_, v___y_338_, v___y_339_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; uint8_t v___x_352_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v___x_350_, 1);
v___x_352_ = lean_unbox(v_a_351_);
lean_dec(v_a_351_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_353_ = ((lean_object*)(l_Lean_MVarId_refl___lam__0___closed__2));
v___x_354_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__4, &l_Lean_MVarId_refl___lam__0___closed__4_once, _init_l_Lean_MVarId_refl___lam__0___closed__4);
lean_inc(v_a_343_);
v___x_355_ = l_Lean_indentExpr(v_a_343_);
v___x_356_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_356_, 0, v___x_354_);
lean_ctor_set(v___x_356_, 1, v___x_355_);
v___x_357_ = lean_obj_once(&l_Lean_MVarId_refl___lam__0___closed__6, &l_Lean_MVarId_refl___lam__0___closed__6_once, _init_l_Lean_MVarId_refl___lam__0___closed__6);
v___x_358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_356_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
v___x_359_ = l_Lean_indentExpr(v_a_346_);
v___x_360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_358_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
if (v_isShared_349_ == 0)
{
lean_ctor_set_tag(v___x_348_, 1);
lean_ctor_set(v___x_348_, 0, v___x_360_);
v___x_362_ = v___x_348_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_360_);
v___x_362_ = v_reuseFailAlloc_364_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
lean_object* v___x_363_; 
lean_inc(v_mvarId_304_);
v___x_363_ = l_Lean_Meta_throwTacticEx___redArg(v___x_353_, v_mvarId_304_, v___x_362_, v___y_336_, v___y_337_, v___y_338_, v___y_339_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_dec_ref_known(v___x_363_, 1);
v___y_320_ = v_a_343_;
v___y_321_ = v___x_340_;
v___y_322_ = v___y_336_;
v___y_323_ = v___y_337_;
v___y_324_ = v___y_338_;
v___y_325_ = v___y_339_;
goto v___jp_319_;
}
else
{
lean_dec(v_a_343_);
lean_dec_ref(v___x_340_);
lean_dec(v_a_318_);
lean_dec_ref(v___x_306_);
lean_dec(v_mvarId_304_);
return v___x_363_;
}
}
}
else
{
lean_del_object(v___x_348_);
lean_dec(v_a_346_);
v___y_320_ = v_a_343_;
v___y_321_ = v___x_340_;
v___y_322_ = v___y_336_;
v___y_323_ = v___y_337_;
v___y_324_ = v___y_338_;
v___y_325_ = v___y_339_;
goto v___jp_319_;
}
}
else
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
lean_del_object(v___x_348_);
lean_dec(v_a_346_);
lean_dec(v_a_343_);
lean_dec_ref(v___x_340_);
lean_dec(v_a_318_);
lean_dec_ref(v___x_306_);
lean_dec(v_mvarId_304_);
v_a_365_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_350_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_350_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
lean_del_object(v___x_315_);
lean_dec_ref(v___x_306_);
lean_dec(v_mvarId_304_);
v_a_385_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_317_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_317_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_306_);
lean_dec(v_mvarId_304_);
return v___x_313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___lam__0___boxed(lean_object* v_mvarId_395_, lean_object* v___x_396_, lean_object* v___x_397_, lean_object* v_check_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
uint8_t v_check_boxed_404_; lean_object* v_res_405_; 
v_check_boxed_404_ = lean_unbox(v_check_398_);
v_res_405_ = l_Lean_MVarId_refl___lam__0(v_mvarId_395_, v___x_396_, v___x_397_, v_check_boxed_404_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_refl(lean_object* v_mvarId_409_, uint8_t v_check_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___f_419_; lean_object* v___x_420_; 
v___x_416_ = ((lean_object*)(l_Lean_MVarId_refl___closed__0));
v___x_417_ = ((lean_object*)(l_Lean_MVarId_refl___closed__1));
v___x_418_ = lean_box(v_check_410_);
lean_inc(v_mvarId_409_);
v___f_419_ = lean_alloc_closure((void*)(l_Lean_MVarId_refl___lam__0___boxed), 9, 4);
lean_closure_set(v___f_419_, 0, v_mvarId_409_);
lean_closure_set(v___f_419_, 1, v___x_417_);
lean_closure_set(v___f_419_, 2, v___x_416_);
lean_closure_set(v___f_419_, 3, v___x_418_);
v___x_420_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_409_, v___f_419_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_refl___boxed(lean_object* v_mvarId_421_, lean_object* v_check_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
uint8_t v_check_boxed_428_; lean_object* v_res_429_; 
v_check_boxed_428_ = lean_unbox(v_check_422_);
v_res_429_ = l_Lean_MVarId_refl(v_mvarId_421_, v_check_boxed_428_, v_a_423_, v_a_424_, v_a_425_, v_a_426_);
lean_dec(v_a_426_);
lean_dec_ref(v_a_425_);
lean_dec(v_a_424_);
lean_dec_ref(v_a_423_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1(lean_object* v_mvarId_430_, lean_object* v_val_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___redArg(v_mvarId_430_, v_val_431_, v___y_433_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1___boxed(lean_object* v_mvarId_438_, lean_object* v_val_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1(v_mvarId_438_, v_val_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1(lean_object* v_00_u03b2_446_, lean_object* v_x_447_, lean_object* v_x_448_, lean_object* v_x_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1___redArg(v_x_447_, v_x_448_, v_x_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_451_, lean_object* v_x_452_, size_t v_x_453_, size_t v_x_454_, lean_object* v_x_455_, lean_object* v_x_456_){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___redArg(v_x_452_, v_x_453_, v_x_454_, v_x_455_, v_x_456_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_458_, lean_object* v_x_459_, lean_object* v_x_460_, lean_object* v_x_461_, lean_object* v_x_462_, lean_object* v_x_463_){
_start:
{
size_t v_x_2876__boxed_464_; size_t v_x_2877__boxed_465_; lean_object* v_res_466_; 
v_x_2876__boxed_464_ = lean_unbox_usize(v_x_460_);
lean_dec(v_x_460_);
v_x_2877__boxed_465_ = lean_unbox_usize(v_x_461_);
lean_dec(v_x_461_);
v_res_466_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3(v_00_u03b2_458_, v_x_459_, v_x_2876__boxed_464_, v_x_2877__boxed_465_, v_x_462_, v_x_463_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_467_, lean_object* v_n_468_, lean_object* v_k_469_, lean_object* v_v_470_){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4___redArg(v_n_468_, v_k_469_, v_v_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_472_, size_t v_depth_473_, lean_object* v_keys_474_, lean_object* v_vals_475_, lean_object* v_heq_476_, lean_object* v_i_477_, lean_object* v_entries_478_){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_473_, v_keys_474_, v_vals_475_, v_i_477_, v_entries_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b2_480_, lean_object* v_depth_481_, lean_object* v_keys_482_, lean_object* v_vals_483_, lean_object* v_heq_484_, lean_object* v_i_485_, lean_object* v_entries_486_){
_start:
{
size_t v_depth_boxed_487_; lean_object* v_res_488_; 
v_depth_boxed_487_ = lean_unbox_usize(v_depth_481_);
lean_dec(v_depth_481_);
v_res_488_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__5(v_00_u03b2_480_, v_depth_boxed_487_, v_keys_482_, v_vals_483_, v_heq_484_, v_i_485_, v_entries_486_);
lean_dec_ref(v_vals_483_);
lean_dec_ref(v_keys_482_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_489_, lean_object* v_x_490_, lean_object* v_x_491_, lean_object* v_x_492_, lean_object* v_x_493_){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_refl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_x_490_, v_x_491_, v_x_492_, v_x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(lean_object* v_x_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_Lean_Meta_saveState___redArg(v___y_497_, v___y_499_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v___x_503_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
lean_inc(v___y_499_);
lean_inc_ref(v___y_498_);
lean_inc(v___y_497_);
lean_inc_ref(v___y_496_);
v___x_503_ = lean_apply_5(v_x_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, lean_box(0));
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_512_; 
lean_dec(v_a_502_);
v_a_504_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_512_ == 0)
{
v___x_506_ = v___x_503_;
v_isShared_507_ = v_isSharedCheck_512_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_503_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_512_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_508_, 0, v_a_504_);
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 0, v___x_508_);
v___x_510_ = v___x_506_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_508_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
else
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_542_; 
v_a_513_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_542_ == 0)
{
v___x_515_ = v___x_503_;
v_isShared_516_ = v_isSharedCheck_542_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_503_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_542_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
uint8_t v___y_518_; uint8_t v___x_540_; 
v___x_540_ = l_Lean_Exception_isInterrupt(v_a_513_);
if (v___x_540_ == 0)
{
uint8_t v___x_541_; 
lean_inc(v_a_513_);
v___x_541_ = l_Lean_Exception_isRuntime(v_a_513_);
v___y_518_ = v___x_541_;
goto v___jp_517_;
}
else
{
v___y_518_ = v___x_540_;
goto v___jp_517_;
}
v___jp_517_:
{
if (v___y_518_ == 0)
{
lean_object* v___x_519_; 
lean_del_object(v___x_515_);
lean_dec(v_a_513_);
v___x_519_ = l_Lean_Meta_SavedState_restore___redArg(v_a_502_, v___y_497_, v___y_499_);
lean_dec(v_a_502_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_527_; 
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_527_ == 0)
{
lean_object* v_unused_528_; 
v_unused_528_ = lean_ctor_get(v___x_519_, 0);
lean_dec(v_unused_528_);
v___x_521_ = v___x_519_;
v_isShared_522_ = v_isSharedCheck_527_;
goto v_resetjp_520_;
}
else
{
lean_dec(v___x_519_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_527_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; lean_object* v___x_525_; 
v___x_523_ = lean_box(0);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v___x_523_);
v___x_525_ = v___x_521_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v___x_523_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
v_a_529_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_519_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_519_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
else
{
lean_object* v___x_538_; 
lean_dec(v_a_502_);
if (v_isShared_516_ == 0)
{
v___x_538_ = v___x_515_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_513_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
}
}
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
lean_dec_ref(v_x_495_);
v_a_543_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_501_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_501_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg___boxed(lean_object* v_x_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(v_x_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0(lean_object* v_00_u03b1_558_, lean_object* v_x_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(v_x_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___boxed(lean_object* v_00_u03b1_566_, lean_object* v_x_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0(v_00_u03b1_566_, v_x_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__0(lean_object* v_mvarId_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Meta_mkFreshLevelMVar(v___y_582_, v___y_583_, v___y_584_, v___y_585_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_587_, 1);
v___x_589_ = ((lean_object*)(l_Lean_MVarId_heqOfEq___lam__0___closed__1));
v___x_590_ = lean_box(0);
v___x_591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_591_, 0, v_a_588_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___x_592_ = l_Lean_mkConst(v___x_589_, v___x_591_);
v___x_593_ = ((lean_object*)(l_Lean_MVarId_heqOfEq___lam__0___closed__2));
v___x_594_ = lean_box(0);
v___x_595_ = l_Lean_MVarId_apply(v_mvarId_581_, v___x_592_, v___x_593_, v___x_594_, v___y_582_, v___y_583_, v___y_584_, v___y_585_);
return v___x_595_;
}
else
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_603_; 
lean_dec(v_mvarId_581_);
v_a_596_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_603_ == 0)
{
v___x_598_ = v___x_587_;
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_587_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_596_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__0___boxed(lean_object* v_mvarId_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lean_MVarId_heqOfEq___lam__0(v_mvarId_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__1(lean_object* v___f_611_, lean_object* v_mvarId_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(v___f_611_, v___y_613_, v___y_614_, v___y_615_, v___y_616_);
if (lean_obj_tag(v___x_618_) == 0)
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_638_; 
v_a_619_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_638_ == 0)
{
v___x_621_ = v___x_618_;
v_isShared_622_ = v_isSharedCheck_638_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_618_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_638_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
if (lean_obj_tag(v_a_619_) == 1)
{
lean_object* v_val_623_; 
v_val_623_ = lean_ctor_get(v_a_619_, 0);
lean_inc(v_val_623_);
lean_dec_ref_known(v_a_619_, 1);
if (lean_obj_tag(v_val_623_) == 1)
{
lean_object* v_tail_624_; 
v_tail_624_ = lean_ctor_get(v_val_623_, 1);
if (lean_obj_tag(v_tail_624_) == 0)
{
lean_object* v_head_625_; lean_object* v___x_627_; 
lean_dec(v_mvarId_612_);
v_head_625_ = lean_ctor_get(v_val_623_, 0);
lean_inc(v_head_625_);
lean_dec_ref_known(v_val_623_, 2);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v_head_625_);
v___x_627_ = v___x_621_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_head_625_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
else
{
lean_object* v___x_630_; 
lean_dec_ref_known(v_val_623_, 2);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v_mvarId_612_);
v___x_630_ = v___x_621_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_mvarId_612_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
else
{
lean_object* v___x_633_; 
lean_dec(v_val_623_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v_mvarId_612_);
v___x_633_ = v___x_621_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_mvarId_612_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
else
{
lean_object* v___x_636_; 
lean_dec(v_a_619_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 0, v_mvarId_612_);
v___x_636_ = v___x_621_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_mvarId_612_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
lean_dec(v_mvarId_612_);
v_a_639_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_618_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_618_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___lam__1___boxed(lean_object* v___f_647_, lean_object* v_mvarId_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lean_MVarId_heqOfEq___lam__1(v___f_647_, v_mvarId_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq(lean_object* v_mvarId_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_){
_start:
{
lean_object* v___f_661_; lean_object* v___f_662_; lean_object* v___x_663_; 
lean_inc_n(v_mvarId_655_, 2);
v___f_661_ = lean_alloc_closure((void*)(l_Lean_MVarId_heqOfEq___lam__0___boxed), 6, 1);
lean_closure_set(v___f_661_, 0, v_mvarId_655_);
v___f_662_ = lean_alloc_closure((void*)(l_Lean_MVarId_heqOfEq___lam__1___boxed), 7, 2);
lean_closure_set(v___f_662_, 0, v___f_661_);
lean_closure_set(v___f_662_, 1, v_mvarId_655_);
v___x_663_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_655_, v___f_662_, v_a_656_, v_a_657_, v_a_658_, v_a_659_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_heqOfEq___boxed(lean_object* v_mvarId_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lean_MVarId_heqOfEq(v_mvarId_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
lean_dec(v_a_668_);
lean_dec_ref(v_a_667_);
lean_dec(v_a_666_);
lean_dec_ref(v_a_665_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__0(lean_object* v_mvarId_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = l_Lean_Meta_mkFreshLevelMVar(v___y_675_, v___y_676_, v___y_677_, v___y_678_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v_a_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v___x_680_, 1);
v___x_682_ = ((lean_object*)(l_Lean_MVarId_eqOfHEq___lam__0___closed__1));
v___x_683_ = lean_box(0);
v___x_684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_684_, 0, v_a_681_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v___x_685_ = l_Lean_mkConst(v___x_682_, v___x_684_);
v___x_686_ = ((lean_object*)(l_Lean_MVarId_heqOfEq___lam__0___closed__2));
v___x_687_ = lean_box(0);
v___x_688_ = l_Lean_MVarId_apply(v_mvarId_674_, v___x_685_, v___x_686_, v___x_687_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
return v___x_688_;
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
lean_dec(v_mvarId_674_);
v_a_689_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___x_680_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_680_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___lam__0___boxed(lean_object* v_mvarId_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Lean_MVarId_eqOfHEq___lam__0(v_mvarId_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq(lean_object* v_mvarId_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v___f_710_; lean_object* v___f_711_; lean_object* v___x_712_; 
lean_inc_n(v_mvarId_704_, 2);
v___f_710_ = lean_alloc_closure((void*)(l_Lean_MVarId_eqOfHEq___lam__0___boxed), 6, 1);
lean_closure_set(v___f_710_, 0, v_mvarId_704_);
v___f_711_ = lean_alloc_closure((void*)(l_Lean_MVarId_heqOfEq___lam__1___boxed), 7, 2);
lean_closure_set(v___f_711_, 0, v___f_710_);
lean_closure_set(v___f_711_, 1, v_mvarId_704_);
v___x_712_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_704_, v___f_711_, v_a_705_, v_a_706_, v_a_707_, v_a_708_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_eqOfHEq___boxed(lean_object* v_mvarId_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_MVarId_eqOfHEq(v_mvarId_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_);
lean_dec(v_a_717_);
lean_dec_ref(v_a_716_);
lean_dec(v_a_715_);
lean_dec_ref(v_a_714_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__0(lean_object* v_mvarId_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l_Lean_Meta_mkFreshLevelMVar(v___y_725_, v___y_726_, v___y_727_, v___y_728_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v_a_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_a_731_);
lean_dec_ref_known(v___x_730_, 1);
v___x_732_ = ((lean_object*)(l_Lean_MVarId_hrefl___lam__0___closed__1));
v___x_733_ = lean_box(0);
v___x_734_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_734_, 0, v_a_731_);
lean_ctor_set(v___x_734_, 1, v___x_733_);
v___x_735_ = l_Lean_mkConst(v___x_732_, v___x_734_);
v___x_736_ = ((lean_object*)(l_Lean_MVarId_heqOfEq___lam__0___closed__2));
v___x_737_ = lean_box(0);
v___x_738_ = l_Lean_MVarId_apply(v_mvarId_724_, v___x_735_, v___x_736_, v___x_737_, v___y_725_, v___y_726_, v___y_727_, v___y_728_);
return v___x_738_;
}
else
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_dec(v_mvarId_724_);
v_a_739_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_730_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_730_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__0___boxed(lean_object* v_mvarId_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_MVarId_hrefl___lam__0(v_mvarId_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__1(lean_object* v_mvarId_757_, lean_object* v___f_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v___x_768_; 
v___x_768_ = l_Lean_observing_x3f___at___00Lean_MVarId_heqOfEq_spec__0___redArg(v___f_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_778_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_778_ == 0)
{
v___x_771_ = v___x_768_;
v_isShared_772_ = v_isSharedCheck_778_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_768_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_778_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
if (lean_obj_tag(v_a_769_) == 1)
{
lean_object* v_val_773_; 
v_val_773_ = lean_ctor_get(v_a_769_, 0);
lean_inc(v_val_773_);
lean_dec_ref_known(v_a_769_, 1);
if (lean_obj_tag(v_val_773_) == 0)
{
lean_object* v___x_774_; lean_object* v___x_776_; 
lean_dec(v_mvarId_757_);
v___x_774_ = lean_box(0);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 0, v___x_774_);
v___x_776_ = v___x_771_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
else
{
lean_dec(v_val_773_);
lean_del_object(v___x_771_);
goto v___jp_764_;
}
}
else
{
lean_del_object(v___x_771_);
lean_dec(v_a_769_);
goto v___jp_764_;
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
lean_dec(v_mvarId_757_);
v_a_779_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_768_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_768_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
v___jp_764_:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_765_ = ((lean_object*)(l_Lean_MVarId_hrefl___lam__1___closed__1));
v___x_766_ = lean_box(0);
v___x_767_ = l_Lean_Meta_throwTacticEx___redArg(v___x_765_, v_mvarId_757_, v___x_766_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
return v___x_767_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___lam__1___boxed(lean_object* v_mvarId_787_, lean_object* v___f_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_Lean_MVarId_hrefl___lam__1(v_mvarId_787_, v___f_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_);
lean_dec(v___y_792_);
lean_dec_ref(v___y_791_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl(lean_object* v_mvarId_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_){
_start:
{
lean_object* v___f_801_; lean_object* v___f_802_; lean_object* v___x_803_; 
lean_inc_n(v_mvarId_795_, 2);
v___f_801_ = lean_alloc_closure((void*)(l_Lean_MVarId_hrefl___lam__0___boxed), 6, 1);
lean_closure_set(v___f_801_, 0, v_mvarId_795_);
v___f_802_ = lean_alloc_closure((void*)(l_Lean_MVarId_hrefl___lam__1___boxed), 7, 2);
lean_closure_set(v___f_802_, 0, v_mvarId_795_);
lean_closure_set(v___f_802_, 1, v___f_801_);
v___x_803_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_refl_spec__2___redArg(v_mvarId_795_, v___f_802_, v_a_796_, v_a_797_, v_a_798_, v_a_799_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hrefl___boxed(lean_object* v_mvarId_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_MVarId_hrefl(v_mvarId_804_, v_a_805_, v_a_806_, v_a_807_, v_a_808_);
lean_dec(v_a_808_);
lean_dec_ref(v_a_807_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
return v_res_810_;
}
}
lean_object* runtime_initialize_Lean_Meta_Reduce(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Reduce(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Refl(builtin);
}
#ifdef __cplusplus
}
#endif

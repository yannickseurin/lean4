// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Anchor
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.MarkNestedSubsingletons import Init.Omega
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
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Name_isImplementationDetail(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
uint8_t l_Lean_Name_isInternal(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
uint8_t l_Lean_Name_isInaccessibleUserName(lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t l_Lean_Meta_isMatcherCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_isMarkedSubsingletonConst(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint64_t l_Lean_Literal_hash(lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableUInt64___lam__0___boxed(lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_instDecidableEqUInt64___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_Grind_anchorPrefixToString(lean_object*, uint64_t);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SplitInfo_getExpr(lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_sub(uint64_t, uint64_t);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_getAnchor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAnchor___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_getAnchor___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAnchor___closed__1;
static const lean_array_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAnchor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAnchor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_AnchorRef_matches(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AnchorRef_matches___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__6_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__0_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__7_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__2_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__3_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__4_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__5_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__8_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__9_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instHashableUInt64___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getAnchor_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getAnchor_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Break_runK_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Break_runK_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instHasAnchorExprWithAnchor = (const lean_object*)&l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "anchor"};
static const lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(168, 155, 228, 98, 168, 72, 115, 174)}};
static const lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitInfo_getAnchor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitInfo_getAnchor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(lean_object* v_n_1_){
_start:
{
uint8_t v___y_3_; uint8_t v___x_17_; 
v___x_17_ = l_Lean_Name_hasMacroScopes(v_n_1_);
if (v___x_17_ == 0)
{
uint8_t v___x_18_; 
lean_inc(v_n_1_);
v___x_18_ = l_Lean_Name_isInaccessibleUserName(v_n_1_);
v___y_3_ = v___x_18_;
goto v___jp_2_;
}
else
{
v___y_3_ = v___x_17_;
goto v___jp_2_;
}
v___jp_2_:
{
if (v___y_3_ == 0)
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Name_isImplementationDetail(v_n_1_);
if (v___x_4_ == 0)
{
uint8_t v___x_5_; 
v___x_5_ = l_Lean_isPrivateName(v_n_1_);
if (v___x_5_ == 0)
{
uint8_t v___x_6_; 
v___x_6_ = l_Lean_Name_isInternal(v_n_1_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; 
v___x_7_ = l_unsafeCast___redArg(v_n_1_);
lean_dec(v_n_1_);
if (lean_obj_tag(v___x_7_) == 0)
{
uint64_t v___x_8_; 
v___x_8_ = 1723ULL;
return v___x_8_;
}
else
{
uint64_t v_hash_9_; 
v_hash_9_ = lean_ctor_get_uint64(v___x_7_, sizeof(void*)*2);
lean_dec(v___x_7_);
return v_hash_9_;
}
}
else
{
uint64_t v___x_10_; 
lean_dec(v_n_1_);
v___x_10_ = 0ULL;
return v___x_10_;
}
}
else
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = l_Lean_privateToUserName(v_n_1_);
v___x_12_ = l_unsafeCast___redArg(v___x_11_);
lean_dec(v___x_11_);
if (lean_obj_tag(v___x_12_) == 0)
{
uint64_t v___x_13_; 
v___x_13_ = 1723ULL;
return v___x_13_;
}
else
{
uint64_t v_hash_14_; 
v_hash_14_ = lean_ctor_get_uint64(v___x_12_, sizeof(void*)*2);
lean_dec(v___x_12_);
return v_hash_14_;
}
}
}
else
{
uint64_t v___x_15_; 
lean_dec(v_n_1_);
v___x_15_ = 0ULL;
return v___x_15_;
}
}
else
{
uint64_t v___x_16_; 
lean_dec(v_n_1_);
v___x_16_ = 0ULL;
return v___x_16_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName___boxed(lean_object* v_n_19_){
_start:
{
uint64_t v_res_20_; lean_object* v_r_21_; 
v_res_20_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(v_n_19_);
v_r_21_ = lean_box_uint64(v_res_20_);
return v_r_21_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(uint64_t v_a_22_, uint64_t v_b_23_){
_start:
{
uint64_t v___x_24_; uint8_t v___x_25_; 
v___x_24_ = 0ULL;
v___x_25_ = lean_uint64_dec_eq(v_a_22_, v___x_24_);
if (v___x_25_ == 0)
{
uint8_t v___x_26_; 
v___x_26_ = lean_uint64_dec_eq(v_b_23_, v___x_24_);
if (v___x_26_ == 0)
{
uint64_t v___x_27_; 
v___x_27_ = lean_uint64_mix_hash(v_a_22_, v_b_23_);
return v___x_27_;
}
else
{
return v_a_22_;
}
}
else
{
return v_b_23_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix___boxed(lean_object* v_a_28_, lean_object* v_b_29_){
_start:
{
uint64_t v_a_boxed_30_; uint64_t v_b_boxed_31_; uint64_t v_res_32_; lean_object* v_r_33_; 
v_a_boxed_30_ = lean_unbox_uint64(v_a_28_);
lean_dec_ref(v_a_28_);
v_b_boxed_31_ = lean_unbox_uint64(v_b_29_);
lean_dec_ref(v_b_29_);
v_res_32_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v_a_boxed_30_, v_b_boxed_31_);
v_r_33_ = lean_box_uint64(v_res_32_);
return v_r_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg(lean_object* v_declName_34_, lean_object* v___y_35_){
_start:
{
lean_object* v___x_37_; lean_object* v_env_38_; uint8_t v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_37_ = lean_st_ref_get(v___y_35_);
v_env_38_ = lean_ctor_get(v___x_37_, 0);
lean_inc_ref(v_env_38_);
lean_dec(v___x_37_);
v___x_39_ = l_Lean_Meta_isMatcherCore(v_env_38_, v_declName_34_);
v___x_40_ = lean_box(v___x_39_);
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg___boxed(lean_object* v_declName_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg(v_declName_42_, v___y_43_);
lean_dec(v___y_43_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3(lean_object* v_declName_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg(v_declName_46_, v___y_55_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___boxed(lean_object* v_declName_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3(v_declName_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg(lean_object* v_keys_70_, lean_object* v_vals_71_, lean_object* v_i_72_, lean_object* v_k_73_){
_start:
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = lean_array_get_size(v_keys_70_);
v___x_75_ = lean_nat_dec_lt(v_i_72_, v___x_74_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
lean_dec(v_i_72_);
v___x_76_ = lean_box(0);
return v___x_76_;
}
else
{
lean_object* v_k_x27_77_; size_t v___x_78_; size_t v___x_79_; uint8_t v___x_80_; 
v_k_x27_77_ = lean_array_fget_borrowed(v_keys_70_, v_i_72_);
v___x_78_ = lean_ptr_addr(v_k_73_);
v___x_79_ = lean_ptr_addr(v_k_x27_77_);
v___x_80_ = lean_usize_dec_eq(v___x_78_, v___x_79_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_unsigned_to_nat(1u);
v___x_82_ = lean_nat_add(v_i_72_, v___x_81_);
lean_dec(v_i_72_);
v_i_72_ = v___x_82_;
goto _start;
}
else
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_array_fget_borrowed(v_vals_71_, v_i_72_);
lean_dec(v_i_72_);
lean_inc(v___x_84_);
v___x_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
return v___x_85_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg___boxed(lean_object* v_keys_86_, lean_object* v_vals_87_, lean_object* v_i_88_, lean_object* v_k_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg(v_keys_86_, v_vals_87_, v_i_88_, v_k_89_);
lean_dec_ref(v_k_89_);
lean_dec_ref(v_vals_87_);
lean_dec_ref(v_keys_86_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg(lean_object* v_x_91_, size_t v_x_92_, lean_object* v_x_93_){
_start:
{
if (lean_obj_tag(v_x_91_) == 0)
{
lean_object* v_es_94_; lean_object* v___x_95_; size_t v___x_96_; size_t v___x_97_; lean_object* v_j_98_; lean_object* v___x_99_; 
v_es_94_ = lean_ctor_get(v_x_91_, 0);
v___x_95_ = lean_box(2);
v___x_96_ = ((size_t)31ULL);
v___x_97_ = lean_usize_land(v_x_92_, v___x_96_);
v_j_98_ = lean_usize_to_nat(v___x_97_);
v___x_99_ = lean_array_get_borrowed(v___x_95_, v_es_94_, v_j_98_);
lean_dec(v_j_98_);
switch(lean_obj_tag(v___x_99_))
{
case 0:
{
lean_object* v_key_100_; lean_object* v_val_101_; size_t v___x_102_; size_t v___x_103_; uint8_t v___x_104_; 
v_key_100_ = lean_ctor_get(v___x_99_, 0);
v_val_101_ = lean_ctor_get(v___x_99_, 1);
v___x_102_ = lean_ptr_addr(v_x_93_);
v___x_103_ = lean_ptr_addr(v_key_100_);
v___x_104_ = lean_usize_dec_eq(v___x_102_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lean_box(0);
return v___x_105_;
}
else
{
lean_object* v___x_106_; 
lean_inc(v_val_101_);
v___x_106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_106_, 0, v_val_101_);
return v___x_106_;
}
}
case 1:
{
lean_object* v_node_107_; size_t v___x_108_; size_t v___x_109_; 
v_node_107_ = lean_ctor_get(v___x_99_, 0);
v___x_108_ = ((size_t)5ULL);
v___x_109_ = lean_usize_shift_right(v_x_92_, v___x_108_);
v_x_91_ = v_node_107_;
v_x_92_ = v___x_109_;
goto _start;
}
default: 
{
lean_object* v___x_111_; 
v___x_111_ = lean_box(0);
return v___x_111_;
}
}
}
else
{
lean_object* v_ks_112_; lean_object* v_vs_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v_ks_112_ = lean_ctor_get(v_x_91_, 0);
v_vs_113_ = lean_ctor_get(v_x_91_, 1);
v___x_114_ = lean_unsigned_to_nat(0u);
v___x_115_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg(v_ks_112_, v_vs_113_, v___x_114_, v_x_93_);
return v___x_115_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg___boxed(lean_object* v_x_116_, lean_object* v_x_117_, lean_object* v_x_118_){
_start:
{
size_t v_x_32314__boxed_119_; lean_object* v_res_120_; 
v_x_32314__boxed_119_ = lean_unbox_usize(v_x_117_);
lean_dec(v_x_117_);
v_res_120_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg(v_x_116_, v_x_32314__boxed_119_, v_x_118_);
lean_dec_ref(v_x_118_);
lean_dec_ref(v_x_116_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg(lean_object* v_x_121_, lean_object* v_x_122_){
_start:
{
size_t v___x_123_; size_t v___x_124_; size_t v___x_125_; uint64_t v___x_126_; size_t v___x_127_; lean_object* v___x_128_; 
v___x_123_ = lean_ptr_addr(v_x_122_);
v___x_124_ = ((size_t)3ULL);
v___x_125_ = lean_usize_shift_right(v___x_123_, v___x_124_);
v___x_126_ = lean_usize_to_uint64(v___x_125_);
v___x_127_ = lean_uint64_to_usize(v___x_126_);
v___x_128_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg(v_x_121_, v___x_127_, v_x_122_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg___boxed(lean_object* v_x_129_, lean_object* v_x_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg(v_x_129_, v_x_130_);
lean_dec_ref(v_x_130_);
lean_dec_ref(v_x_129_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_x_132_, lean_object* v_x_133_, lean_object* v_x_134_, lean_object* v_x_135_){
_start:
{
lean_object* v_ks_136_; lean_object* v_vs_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_163_; 
v_ks_136_ = lean_ctor_get(v_x_132_, 0);
v_vs_137_ = lean_ctor_get(v_x_132_, 1);
v_isSharedCheck_163_ = !lean_is_exclusive(v_x_132_);
if (v_isSharedCheck_163_ == 0)
{
v___x_139_ = v_x_132_;
v_isShared_140_ = v_isSharedCheck_163_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_vs_137_);
lean_inc(v_ks_136_);
lean_dec(v_x_132_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_163_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_141_ = lean_array_get_size(v_ks_136_);
v___x_142_ = lean_nat_dec_lt(v_x_133_, v___x_141_);
if (v___x_142_ == 0)
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_146_; 
lean_dec(v_x_133_);
v___x_143_ = lean_array_push(v_ks_136_, v_x_134_);
v___x_144_ = lean_array_push(v_vs_137_, v_x_135_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 1, v___x_144_);
lean_ctor_set(v___x_139_, 0, v___x_143_);
v___x_146_ = v___x_139_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v___x_143_);
lean_ctor_set(v_reuseFailAlloc_147_, 1, v___x_144_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
else
{
lean_object* v_k_x27_148_; size_t v___x_149_; size_t v___x_150_; uint8_t v___x_151_; 
v_k_x27_148_ = lean_array_fget_borrowed(v_ks_136_, v_x_133_);
v___x_149_ = lean_ptr_addr(v_x_134_);
v___x_150_ = lean_ptr_addr(v_k_x27_148_);
v___x_151_ = lean_usize_dec_eq(v___x_149_, v___x_150_);
if (v___x_151_ == 0)
{
lean_object* v___x_153_; 
if (v_isShared_140_ == 0)
{
v___x_153_ = v___x_139_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_ks_136_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v_vs_137_);
v___x_153_ = v_reuseFailAlloc_157_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_unsigned_to_nat(1u);
v___x_155_ = lean_nat_add(v_x_133_, v___x_154_);
lean_dec(v_x_133_);
v_x_132_ = v___x_153_;
v_x_133_ = v___x_155_;
goto _start;
}
}
else
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_161_; 
v___x_158_ = lean_array_fset(v_ks_136_, v_x_133_, v_x_134_);
v___x_159_ = lean_array_fset(v_vs_137_, v_x_133_, v_x_135_);
lean_dec(v_x_133_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 1, v___x_159_);
lean_ctor_set(v___x_139_, 0, v___x_158_);
v___x_161_ = v___x_139_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_158_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v___x_159_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2___redArg(lean_object* v_n_164_, lean_object* v_k_165_, lean_object* v_v_166_){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = lean_unsigned_to_nat(0u);
v___x_168_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2_spec__6___redArg(v_n_164_, v___x_167_, v_k_165_, v_v_166_);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_box(0);
v___x_170_ = l_unsafeCast___redArg(v___x_169_);
return v___x_170_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg(lean_object* v_x_172_, size_t v_x_173_, size_t v_x_174_, lean_object* v_x_175_, lean_object* v_x_176_){
_start:
{
if (lean_obj_tag(v_x_172_) == 0)
{
lean_object* v_es_177_; size_t v___x_178_; size_t v___x_179_; lean_object* v_j_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v_es_177_ = lean_ctor_get(v_x_172_, 0);
v___x_178_ = ((size_t)31ULL);
v___x_179_ = lean_usize_land(v_x_173_, v___x_178_);
v_j_180_ = lean_usize_to_nat(v___x_179_);
v___x_181_ = lean_array_get_size(v_es_177_);
v___x_182_ = lean_nat_dec_lt(v_j_180_, v___x_181_);
if (v___x_182_ == 0)
{
lean_dec(v_j_180_);
lean_dec(v_x_176_);
lean_dec_ref(v_x_175_);
return v_x_172_;
}
else
{
lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_223_; 
lean_inc_ref(v_es_177_);
v_isSharedCheck_223_ = !lean_is_exclusive(v_x_172_);
if (v_isSharedCheck_223_ == 0)
{
lean_object* v_unused_224_; 
v_unused_224_ = lean_ctor_get(v_x_172_, 0);
lean_dec(v_unused_224_);
v___x_184_ = v_x_172_;
v_isShared_185_ = v_isSharedCheck_223_;
goto v_resetjp_183_;
}
else
{
lean_dec(v_x_172_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_223_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v_v_186_; lean_object* v___x_187_; lean_object* v_xs_x27_188_; lean_object* v___y_190_; 
v_v_186_ = lean_array_fget(v_es_177_, v_j_180_);
v___x_187_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__0);
v_xs_x27_188_ = lean_array_fset(v_es_177_, v_j_180_, v___x_187_);
switch(lean_obj_tag(v_v_186_))
{
case 0:
{
lean_object* v_key_195_; lean_object* v_val_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_208_; 
v_key_195_ = lean_ctor_get(v_v_186_, 0);
v_val_196_ = lean_ctor_get(v_v_186_, 1);
v_isSharedCheck_208_ = !lean_is_exclusive(v_v_186_);
if (v_isSharedCheck_208_ == 0)
{
v___x_198_ = v_v_186_;
v_isShared_199_ = v_isSharedCheck_208_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_val_196_);
lean_inc(v_key_195_);
lean_dec(v_v_186_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_208_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
size_t v___x_200_; size_t v___x_201_; uint8_t v___x_202_; 
v___x_200_ = lean_ptr_addr(v_x_175_);
v___x_201_ = lean_ptr_addr(v_key_195_);
v___x_202_ = lean_usize_dec_eq(v___x_200_, v___x_201_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; lean_object* v___x_204_; 
lean_del_object(v___x_198_);
v___x_203_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_195_, v_val_196_, v_x_175_, v_x_176_);
v___x_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
v___y_190_ = v___x_204_;
goto v___jp_189_;
}
else
{
lean_object* v___x_206_; 
lean_dec(v_val_196_);
lean_dec(v_key_195_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v_x_176_);
lean_ctor_set(v___x_198_, 0, v_x_175_);
v___x_206_ = v___x_198_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_x_175_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v_x_176_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
v___y_190_ = v___x_206_;
goto v___jp_189_;
}
}
}
}
case 1:
{
lean_object* v_node_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_221_; 
v_node_209_ = lean_ctor_get(v_v_186_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v_v_186_);
if (v_isSharedCheck_221_ == 0)
{
v___x_211_ = v_v_186_;
v_isShared_212_ = v_isSharedCheck_221_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_node_209_);
lean_dec(v_v_186_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_221_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
size_t v___x_213_; size_t v___x_214_; size_t v___x_215_; size_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_219_; 
v___x_213_ = ((size_t)5ULL);
v___x_214_ = lean_usize_shift_right(v_x_173_, v___x_213_);
v___x_215_ = ((size_t)1ULL);
v___x_216_ = lean_usize_add(v_x_174_, v___x_215_);
v___x_217_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg(v_node_209_, v___x_214_, v___x_216_, v_x_175_, v_x_176_);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 0, v___x_217_);
v___x_219_ = v___x_211_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_217_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
v___y_190_ = v___x_219_;
goto v___jp_189_;
}
}
}
default: 
{
lean_object* v___x_222_; 
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v_x_175_);
lean_ctor_set(v___x_222_, 1, v_x_176_);
v___y_190_ = v___x_222_;
goto v___jp_189_;
}
}
v___jp_189_:
{
lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_191_ = lean_array_fset(v_xs_x27_188_, v_j_180_, v___y_190_);
lean_dec(v_j_180_);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_191_);
v___x_193_ = v___x_184_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
}
else
{
lean_object* v_ks_225_; lean_object* v_vs_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_244_; 
v_ks_225_ = lean_ctor_get(v_x_172_, 0);
v_vs_226_ = lean_ctor_get(v_x_172_, 1);
v_isSharedCheck_244_ = !lean_is_exclusive(v_x_172_);
if (v_isSharedCheck_244_ == 0)
{
v___x_228_ = v_x_172_;
v_isShared_229_ = v_isSharedCheck_244_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_vs_226_);
lean_inc(v_ks_225_);
lean_dec(v_x_172_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_244_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_231_; 
if (v_isShared_229_ == 0)
{
v___x_231_ = v___x_228_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_ks_225_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v_vs_226_);
v___x_231_ = v_reuseFailAlloc_243_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v_newNode_232_; size_t v___x_233_; uint8_t v___x_234_; 
v_newNode_232_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2___redArg(v___x_231_, v_x_175_, v_x_176_);
v___x_233_ = ((size_t)7ULL);
v___x_234_ = lean_usize_dec_le(v___x_233_, v_x_174_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_235_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_232_);
v___x_236_ = lean_unsigned_to_nat(4u);
v___x_237_ = lean_nat_dec_lt(v___x_235_, v___x_236_);
lean_dec(v___x_235_);
if (v___x_237_ == 0)
{
lean_object* v_ks_238_; lean_object* v_vs_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v_ks_238_ = lean_ctor_get(v_newNode_232_, 0);
lean_inc_ref(v_ks_238_);
v_vs_239_ = lean_ctor_get(v_newNode_232_, 1);
lean_inc_ref(v_vs_239_);
lean_dec_ref(v_newNode_232_);
v___x_240_ = lean_unsigned_to_nat(0u);
v___x_241_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___closed__1);
v___x_242_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3___redArg(v_x_174_, v_ks_238_, v_vs_239_, v___x_240_, v___x_241_);
lean_dec_ref(v_vs_239_);
lean_dec_ref(v_ks_238_);
return v___x_242_;
}
else
{
return v_newNode_232_;
}
}
else
{
return v_newNode_232_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3___redArg(size_t v_depth_245_, lean_object* v_keys_246_, lean_object* v_vals_247_, lean_object* v_i_248_, lean_object* v_entries_249_){
_start:
{
lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_250_ = lean_array_get_size(v_keys_246_);
v___x_251_ = lean_nat_dec_lt(v_i_248_, v___x_250_);
if (v___x_251_ == 0)
{
lean_dec(v_i_248_);
return v_entries_249_;
}
else
{
lean_object* v_k_252_; lean_object* v_v_253_; size_t v___x_254_; size_t v___x_255_; size_t v___x_256_; uint64_t v___x_257_; size_t v_h_258_; size_t v___x_259_; lean_object* v___x_260_; size_t v___x_261_; size_t v___x_262_; size_t v___x_263_; size_t v_h_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v_k_252_ = lean_array_fget_borrowed(v_keys_246_, v_i_248_);
v_v_253_ = lean_array_fget_borrowed(v_vals_247_, v_i_248_);
v___x_254_ = lean_ptr_addr(v_k_252_);
v___x_255_ = ((size_t)3ULL);
v___x_256_ = lean_usize_shift_right(v___x_254_, v___x_255_);
v___x_257_ = lean_usize_to_uint64(v___x_256_);
v_h_258_ = lean_uint64_to_usize(v___x_257_);
v___x_259_ = ((size_t)5ULL);
v___x_260_ = lean_unsigned_to_nat(1u);
v___x_261_ = ((size_t)1ULL);
v___x_262_ = lean_usize_sub(v_depth_245_, v___x_261_);
v___x_263_ = lean_usize_mul(v___x_259_, v___x_262_);
v_h_264_ = lean_usize_shift_right(v_h_258_, v___x_263_);
v___x_265_ = lean_nat_add(v_i_248_, v___x_260_);
lean_dec(v_i_248_);
lean_inc(v_v_253_);
lean_inc(v_k_252_);
v___x_266_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg(v_entries_249_, v_h_264_, v_depth_245_, v_k_252_, v_v_253_);
v_i_248_ = v___x_265_;
v_entries_249_ = v___x_266_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_depth_268_, lean_object* v_keys_269_, lean_object* v_vals_270_, lean_object* v_i_271_, lean_object* v_entries_272_){
_start:
{
size_t v_depth_boxed_273_; lean_object* v_res_274_; 
v_depth_boxed_273_ = lean_unbox_usize(v_depth_268_);
lean_dec(v_depth_268_);
v_res_274_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3___redArg(v_depth_boxed_273_, v_keys_269_, v_vals_270_, v_i_271_, v_entries_272_);
lean_dec_ref(v_vals_270_);
lean_dec_ref(v_keys_269_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg___boxed(lean_object* v_x_275_, lean_object* v_x_276_, lean_object* v_x_277_, lean_object* v_x_278_, lean_object* v_x_279_){
_start:
{
size_t v_x_32470__boxed_280_; size_t v_x_32471__boxed_281_; lean_object* v_res_282_; 
v_x_32470__boxed_280_ = lean_unbox_usize(v_x_276_);
lean_dec(v_x_276_);
v_x_32471__boxed_281_ = lean_unbox_usize(v_x_277_);
lean_dec(v_x_277_);
v_res_282_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg(v_x_275_, v_x_32470__boxed_280_, v_x_32471__boxed_281_, v_x_278_, v_x_279_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0___redArg(lean_object* v_x_283_, lean_object* v_x_284_, lean_object* v_x_285_){
_start:
{
size_t v___x_286_; size_t v___x_287_; size_t v___x_288_; uint64_t v___x_289_; size_t v___x_290_; size_t v___x_291_; lean_object* v___x_292_; 
v___x_286_ = lean_ptr_addr(v_x_284_);
v___x_287_ = ((size_t)3ULL);
v___x_288_ = lean_usize_shift_right(v___x_286_, v___x_287_);
v___x_289_ = lean_usize_to_uint64(v___x_288_);
v___x_290_ = lean_uint64_to_usize(v___x_289_);
v___x_291_ = ((size_t)1ULL);
v___x_292_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg(v_x_283_, v___x_290_, v___x_291_, v_x_284_, v_x_285_);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAnchor___closed__0(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = lean_box(0);
v___x_294_ = l_unsafeCast___redArg(v___x_293_);
return v___x_294_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAnchor___closed__1(void){
_start:
{
lean_object* v___x_295_; lean_object* v_dummy_296_; 
v___x_295_ = lean_obj_once(&l_Lean_Meta_Grind_getAnchor___closed__0, &l_Lean_Meta_Grind_getAnchor___closed__0_once, _init_l_Lean_Meta_Grind_getAnchor___closed__0);
v_dummy_296_ = l_Lean_Expr_sort___override(v___x_295_);
return v_dummy_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4(lean_object* v_x_299_, lean_object* v_x_300_, lean_object* v_x_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_){
_start:
{
lean_object* v_pinfos_313_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_316_; lean_object* v___y_317_; lean_object* v___y_318_; lean_object* v___y_319_; lean_object* v___y_320_; lean_object* v___y_321_; lean_object* v___y_322_; 
if (lean_obj_tag(v_x_299_) == 5)
{
lean_object* v_fn_329_; lean_object* v_arg_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_fn_329_ = lean_ctor_get(v_x_299_, 0);
lean_inc_ref(v_fn_329_);
v_arg_330_ = lean_ctor_get(v_x_299_, 1);
lean_inc_ref(v_arg_330_);
lean_dec_ref_known(v_x_299_, 2);
v___x_331_ = lean_array_set(v_x_300_, v_x_301_, v_arg_330_);
v___x_332_ = lean_unsigned_to_nat(1u);
v___x_333_ = lean_nat_sub(v_x_301_, v___x_332_);
lean_dec(v_x_301_);
v_x_299_ = v_fn_329_;
v_x_300_ = v___x_331_;
v_x_301_ = v___x_333_;
goto _start;
}
else
{
lean_object* v___x_335_; uint8_t v___y_337_; uint8_t v___x_355_; 
lean_dec(v_x_301_);
v___x_335_ = l_Lean_instInhabitedExpr;
v___x_355_ = l_Lean_Meta_Grind_isMarkedSubsingletonConst(v_x_299_);
if (v___x_355_ == 0)
{
v___y_337_ = v___x_355_;
goto v___jp_336_;
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_356_ = lean_array_get_size(v_x_300_);
v___x_357_ = lean_unsigned_to_nat(2u);
v___x_358_ = lean_nat_dec_eq(v___x_356_, v___x_357_);
v___y_337_ = v___x_358_;
goto v___jp_336_;
}
v___jp_336_:
{
if (v___y_337_ == 0)
{
uint8_t v___x_338_; 
v___x_338_ = l_Lean_Expr_hasLooseBVars(v_x_299_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_box(0);
lean_inc_ref(v_x_299_);
v___x_340_ = l_Lean_Meta_getFunInfo(v_x_299_, v___x_339_, v___y_307_, v___y_308_, v___y_309_, v___y_310_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v_paramInfo_342_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v___x_340_, 1);
v_paramInfo_342_ = lean_ctor_get(v_a_341_, 0);
lean_inc_ref(v_paramInfo_342_);
lean_dec(v_a_341_);
v_pinfos_313_ = v_paramInfo_342_;
v___y_314_ = v___y_302_;
v___y_315_ = v___y_303_;
v___y_316_ = v___y_304_;
v___y_317_ = v___y_305_;
v___y_318_ = v___y_306_;
v___y_319_ = v___y_307_;
v___y_320_ = v___y_308_;
v___y_321_ = v___y_309_;
v___y_322_ = v___y_310_;
goto v___jp_312_;
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
lean_dec_ref(v_x_300_);
lean_dec_ref(v_x_299_);
v_a_343_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v___x_340_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_340_);
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
else
{
lean_object* v___x_351_; 
v___x_351_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___closed__0));
v_pinfos_313_ = v___x_351_;
v___y_314_ = v___y_302_;
v___y_315_ = v___y_303_;
v___y_316_ = v___y_304_;
v___y_317_ = v___y_305_;
v___y_318_ = v___y_306_;
v___y_319_ = v___y_307_;
v___y_320_ = v___y_308_;
v___y_321_ = v___y_309_;
v___y_322_ = v___y_310_;
goto v___jp_312_;
}
}
else
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
lean_dec_ref(v_x_299_);
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = lean_array_get(v___x_335_, v_x_300_, v___x_352_);
lean_dec_ref(v_x_300_);
v___x_354_ = l_Lean_Meta_Grind_getAnchor(v___x_353_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_);
return v___x_354_;
}
}
}
v___jp_312_:
{
lean_object* v___x_323_; 
v___x_323_ = l_Lean_Meta_Grind_getAnchor(v_x_299_, v___y_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v_a_324_; lean_object* v___x_325_; lean_object* v___x_326_; uint64_t v___x_327_; lean_object* v___x_328_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
lean_inc(v_a_324_);
lean_dec_ref_known(v___x_323_, 1);
v___x_325_ = lean_array_get_size(v_x_300_);
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = lean_unbox_uint64(v_a_324_);
lean_dec(v_a_324_);
v___x_328_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1___redArg(v___x_325_, v_x_300_, v_pinfos_313_, v___x_326_, v___x_327_, v___y_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
lean_dec_ref(v_pinfos_313_);
lean_dec_ref(v_x_300_);
return v___x_328_;
}
else
{
lean_dec_ref(v_pinfos_313_);
lean_dec_ref(v_x_300_);
return v___x_323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAnchor(lean_object* v_e_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_){
_start:
{
uint64_t v_a_371_; lean_object* v___y_372_; lean_object* v_n_397_; lean_object* v_d_398_; lean_object* v_b_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_406_; lean_object* v___y_407_; lean_object* v___y_408_; lean_object* v___x_418_; lean_object* v_anchors_419_; lean_object* v___x_420_; 
v___x_418_ = lean_st_ref_get(v_a_362_);
v_anchors_419_ = lean_ctor_get(v___x_418_, 8);
lean_inc_ref(v_anchors_419_);
lean_dec(v___x_418_);
v___x_420_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg(v_anchors_419_, v_e_359_);
lean_dec_ref(v_anchors_419_);
if (lean_obj_tag(v___x_420_) == 1)
{
lean_object* v_val_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
lean_dec_ref(v_e_359_);
v_val_421_ = lean_ctor_get(v___x_420_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_428_ == 0)
{
v___x_423_ = v___x_420_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_val_421_);
lean_dec(v___x_420_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
lean_ctor_set_tag(v___x_423_, 0);
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_val_421_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
else
{
lean_dec(v___x_420_);
switch(lean_obj_tag(v_e_359_))
{
case 0:
{
lean_object* v_deBruijnIndex_429_; uint64_t v___x_430_; 
v_deBruijnIndex_429_ = lean_ctor_get(v_e_359_, 0);
v___x_430_ = lean_uint64_of_nat(v_deBruijnIndex_429_);
v_a_371_ = v___x_430_;
v___y_372_ = v_a_362_;
goto v___jp_370_;
}
case 1:
{
lean_object* v_fvarId_431_; lean_object* v___x_432_; 
v_fvarId_431_ = lean_ctor_get(v_e_359_, 0);
lean_inc(v_fvarId_431_);
v___x_432_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_431_, v_a_365_, v_a_367_, v_a_368_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v_a_433_; lean_object* v___x_434_; uint64_t v___x_435_; 
v_a_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_a_433_);
lean_dec_ref_known(v___x_432_, 1);
v___x_434_ = l_Lean_LocalDecl_userName(v_a_433_);
lean_dec(v_a_433_);
v___x_435_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(v___x_434_);
v_a_371_ = v___x_435_;
v___y_372_ = v_a_362_;
goto v___jp_370_;
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_dec_ref_known(v_e_359_, 1);
v_a_436_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_432_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_432_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
case 4:
{
lean_object* v_declName_444_; lean_object* v___x_445_; 
v_declName_444_ = lean_ctor_get(v_e_359_, 0);
lean_inc(v_declName_444_);
v___x_445_ = l_Lean_Meta_isMatcher___at___00Lean_Meta_Grind_getAnchor_spec__3___redArg(v_declName_444_, v_a_368_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; uint8_t v___x_447_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_a_446_);
lean_dec_ref_known(v___x_445_, 1);
v___x_447_ = lean_unbox(v_a_446_);
lean_dec(v_a_446_);
if (v___x_447_ == 0)
{
uint64_t v___x_448_; 
lean_inc(v_declName_444_);
v___x_448_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(v_declName_444_);
v_a_371_ = v___x_448_;
v___y_372_ = v_a_362_;
goto v___jp_370_;
}
else
{
uint64_t v___x_449_; 
v___x_449_ = 0ULL;
v_a_371_ = v___x_449_;
v___y_372_ = v_a_362_;
goto v___jp_370_;
}
}
else
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_457_; 
lean_dec_ref_known(v_e_359_, 2);
v_a_450_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_457_ == 0)
{
v___x_452_ = v___x_445_;
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_445_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
}
case 5:
{
lean_object* v_dummy_458_; lean_object* v_nargs_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v_dummy_458_ = lean_obj_once(&l_Lean_Meta_Grind_getAnchor___closed__1, &l_Lean_Meta_Grind_getAnchor___closed__1_once, _init_l_Lean_Meta_Grind_getAnchor___closed__1);
v_nargs_459_ = l_Lean_Expr_getAppNumArgs(v_e_359_);
lean_inc(v_nargs_459_);
v___x_460_ = lean_mk_array(v_nargs_459_, v_dummy_458_);
v___x_461_ = lean_unsigned_to_nat(1u);
v___x_462_ = lean_nat_sub(v_nargs_459_, v___x_461_);
lean_dec(v_nargs_459_);
lean_inc_ref(v_e_359_);
v___x_463_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4(v_e_359_, v___x_460_, v___x_462_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; uint64_t v___x_465_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_a_464_);
lean_dec_ref_known(v___x_463_, 1);
v___x_465_ = lean_unbox_uint64(v_a_464_);
lean_dec(v_a_464_);
v_a_371_ = v___x_465_;
v___y_372_ = v_a_362_;
goto v___jp_370_;
}
else
{
lean_dec_ref_known(v_e_359_, 2);
return v___x_463_;
}
}
case 6:
{
lean_object* v_binderName_466_; lean_object* v_binderType_467_; lean_object* v_body_468_; 
v_binderName_466_ = lean_ctor_get(v_e_359_, 0);
v_binderType_467_ = lean_ctor_get(v_e_359_, 1);
v_body_468_ = lean_ctor_get(v_e_359_, 2);
lean_inc_ref(v_body_468_);
lean_inc_ref(v_binderType_467_);
lean_inc(v_binderName_466_);
v_n_397_ = v_binderName_466_;
v_d_398_ = v_binderType_467_;
v_b_399_ = v_body_468_;
v___y_400_ = v_a_360_;
v___y_401_ = v_a_361_;
v___y_402_ = v_a_362_;
v___y_403_ = v_a_363_;
v___y_404_ = v_a_364_;
v___y_405_ = v_a_365_;
v___y_406_ = v_a_366_;
v___y_407_ = v_a_367_;
v___y_408_ = v_a_368_;
goto v___jp_396_;
}
case 7:
{
lean_object* v_binderName_469_; lean_object* v_binderType_470_; lean_object* v_body_471_; 
v_binderName_469_ = lean_ctor_get(v_e_359_, 0);
v_binderType_470_ = lean_ctor_get(v_e_359_, 1);
v_body_471_ = lean_ctor_get(v_e_359_, 2);
lean_inc_ref(v_body_471_);
lean_inc_ref(v_binderType_470_);
lean_inc(v_binderName_469_);
v_n_397_ = v_binderName_469_;
v_d_398_ = v_binderType_470_;
v_b_399_ = v_body_471_;
v___y_400_ = v_a_360_;
v___y_401_ = v_a_361_;
v___y_402_ = v_a_362_;
v___y_403_ = v_a_363_;
v___y_404_ = v_a_364_;
v___y_405_ = v_a_365_;
v___y_406_ = v_a_366_;
v___y_407_ = v_a_367_;
v___y_408_ = v_a_368_;
goto v___jp_396_;
}
case 8:
{
lean_object* v_declName_472_; lean_object* v_type_473_; lean_object* v_value_474_; lean_object* v_body_475_; lean_object* v___x_476_; 
v_declName_472_ = lean_ctor_get(v_e_359_, 0);
v_type_473_ = lean_ctor_get(v_e_359_, 1);
v_value_474_ = lean_ctor_get(v_e_359_, 2);
v_body_475_ = lean_ctor_get(v_e_359_, 3);
lean_inc_ref(v_value_474_);
v___x_476_ = l_Lean_Meta_Grind_getAnchor(v_value_474_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; lean_object* v___x_478_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc(v_a_477_);
lean_dec_ref_known(v___x_476_, 1);
lean_inc_ref(v_type_473_);
v___x_478_ = l_Lean_Meta_Grind_getAnchor(v_type_473_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_object* v_a_479_; lean_object* v___x_480_; 
v_a_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc(v_a_479_);
lean_dec_ref_known(v___x_478_, 1);
lean_inc_ref(v_body_475_);
v___x_480_ = l_Lean_Meta_Grind_getAnchor(v_body_475_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; uint64_t v___x_482_; uint64_t v___x_483_; uint64_t v___x_484_; uint64_t v___x_485_; uint64_t v___x_486_; uint64_t v___x_487_; uint64_t v___x_488_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_a_481_);
lean_dec_ref_known(v___x_480_, 1);
lean_inc(v_declName_472_);
v___x_482_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(v_declName_472_);
v___x_483_ = lean_unbox_uint64(v_a_479_);
lean_dec(v_a_479_);
v___x_484_ = lean_unbox_uint64(v_a_481_);
lean_dec(v_a_481_);
v___x_485_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_483_, v___x_484_);
v___x_486_ = lean_unbox_uint64(v_a_477_);
lean_dec(v_a_477_);
v___x_487_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_486_, v___x_485_);
v___x_488_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_482_, v___x_487_);
v_a_371_ = v___x_488_;
v___y_372_ = v_a_362_;
goto v___jp_370_;
}
else
{
lean_dec(v_a_479_);
lean_dec(v_a_477_);
lean_dec_ref_known(v_e_359_, 4);
return v___x_480_;
}
}
else
{
lean_dec(v_a_477_);
lean_dec_ref_known(v_e_359_, 4);
return v___x_478_;
}
}
else
{
lean_dec_ref_known(v_e_359_, 4);
return v___x_476_;
}
}
case 9:
{
lean_object* v_a_489_; uint64_t v___x_490_; 
v_a_489_ = lean_ctor_get(v_e_359_, 0);
v___x_490_ = l_Lean_Literal_hash(v_a_489_);
v_a_371_ = v___x_490_;
v___y_372_ = v_a_362_;
goto v___jp_370_;
}
case 10:
{
lean_object* v_expr_491_; lean_object* v___x_492_; 
v_expr_491_ = lean_ctor_get(v_e_359_, 1);
lean_inc_ref(v_expr_491_);
v___x_492_ = l_Lean_Meta_Grind_getAnchor(v_expr_491_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
if (lean_obj_tag(v___x_492_) == 0)
{
lean_object* v_a_493_; uint64_t v___x_494_; 
v_a_493_ = lean_ctor_get(v___x_492_, 0);
lean_inc(v_a_493_);
lean_dec_ref_known(v___x_492_, 1);
v___x_494_ = lean_unbox_uint64(v_a_493_);
lean_dec(v_a_493_);
v_a_371_ = v___x_494_;
v___y_372_ = v_a_362_;
goto v___jp_370_;
}
else
{
lean_dec_ref_known(v_e_359_, 2);
return v___x_492_;
}
}
case 11:
{
lean_object* v_idx_495_; lean_object* v_struct_496_; lean_object* v___x_497_; 
v_idx_495_ = lean_ctor_get(v_e_359_, 1);
v_struct_496_ = lean_ctor_get(v_e_359_, 2);
lean_inc_ref(v_struct_496_);
v___x_497_ = l_Lean_Meta_Grind_getAnchor(v_struct_496_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v_a_498_; uint64_t v___x_499_; uint64_t v___x_500_; uint64_t v___x_501_; 
v_a_498_ = lean_ctor_get(v___x_497_, 0);
lean_inc(v_a_498_);
lean_dec_ref_known(v___x_497_, 1);
v___x_499_ = lean_uint64_of_nat(v_idx_495_);
v___x_500_ = lean_unbox_uint64(v_a_498_);
lean_dec(v_a_498_);
v___x_501_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_499_, v___x_500_);
v_a_371_ = v___x_501_;
v___y_372_ = v_a_362_;
goto v___jp_370_;
}
else
{
lean_dec_ref_known(v_e_359_, 3);
return v___x_497_;
}
}
default: 
{
uint64_t v___x_502_; 
v___x_502_ = 0ULL;
v_a_371_ = v___x_502_;
v___y_372_ = v_a_362_;
goto v___jp_370_;
}
}
}
v___jp_370_:
{
lean_object* v___x_373_; lean_object* v_congrThms_374_; lean_object* v_simp_375_; lean_object* v_lastTag_376_; lean_object* v_counters_377_; lean_object* v_splitDiags_378_; lean_object* v_ematchDiags_379_; lean_object* v_lawfulEqCmpMap_380_; lean_object* v_reflCmpMap_381_; lean_object* v_anchors_382_; lean_object* v_instanceMap_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_395_; 
v___x_373_ = lean_st_ref_take(v___y_372_);
v_congrThms_374_ = lean_ctor_get(v___x_373_, 0);
v_simp_375_ = lean_ctor_get(v___x_373_, 1);
v_lastTag_376_ = lean_ctor_get(v___x_373_, 2);
v_counters_377_ = lean_ctor_get(v___x_373_, 3);
v_splitDiags_378_ = lean_ctor_get(v___x_373_, 4);
v_ematchDiags_379_ = lean_ctor_get(v___x_373_, 5);
v_lawfulEqCmpMap_380_ = lean_ctor_get(v___x_373_, 6);
v_reflCmpMap_381_ = lean_ctor_get(v___x_373_, 7);
v_anchors_382_ = lean_ctor_get(v___x_373_, 8);
v_instanceMap_383_ = lean_ctor_get(v___x_373_, 9);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_395_ == 0)
{
v___x_385_ = v___x_373_;
v_isShared_386_ = v_isSharedCheck_395_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_instanceMap_383_);
lean_inc(v_anchors_382_);
lean_inc(v_reflCmpMap_381_);
lean_inc(v_lawfulEqCmpMap_380_);
lean_inc(v_ematchDiags_379_);
lean_inc(v_splitDiags_378_);
lean_inc(v_counters_377_);
lean_inc(v_lastTag_376_);
lean_inc(v_simp_375_);
lean_inc(v_congrThms_374_);
lean_dec(v___x_373_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_395_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_390_; 
v___x_387_ = lean_box_uint64(v_a_371_);
v___x_388_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0___redArg(v_anchors_382_, v_e_359_, v___x_387_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 8, v___x_388_);
v___x_390_ = v___x_385_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_congrThms_374_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_simp_375_);
lean_ctor_set(v_reuseFailAlloc_394_, 2, v_lastTag_376_);
lean_ctor_set(v_reuseFailAlloc_394_, 3, v_counters_377_);
lean_ctor_set(v_reuseFailAlloc_394_, 4, v_splitDiags_378_);
lean_ctor_set(v_reuseFailAlloc_394_, 5, v_ematchDiags_379_);
lean_ctor_set(v_reuseFailAlloc_394_, 6, v_lawfulEqCmpMap_380_);
lean_ctor_set(v_reuseFailAlloc_394_, 7, v_reflCmpMap_381_);
lean_ctor_set(v_reuseFailAlloc_394_, 8, v___x_388_);
lean_ctor_set(v_reuseFailAlloc_394_, 9, v_instanceMap_383_);
v___x_390_ = v_reuseFailAlloc_394_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_391_ = lean_st_ref_put(v___y_372_, v___x_390_);
v___x_392_ = lean_box_uint64(v_a_371_);
v___x_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
return v___x_393_;
}
}
}
v___jp_396_:
{
lean_object* v___x_409_; 
v___x_409_ = l_Lean_Meta_Grind_getAnchor(v_d_398_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_411_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_410_);
lean_dec_ref_known(v___x_409_, 1);
v___x_411_ = l_Lean_Meta_Grind_getAnchor(v_b_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; uint64_t v___x_413_; uint64_t v___x_414_; uint64_t v___x_415_; uint64_t v___x_416_; uint64_t v___x_417_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_a_412_);
lean_dec_ref_known(v___x_411_, 1);
v___x_413_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_hashName(v_n_397_);
v___x_414_ = lean_unbox_uint64(v_a_410_);
lean_dec(v_a_410_);
v___x_415_ = lean_unbox_uint64(v_a_412_);
lean_dec(v_a_412_);
v___x_416_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_414_, v___x_415_);
v___x_417_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v___x_413_, v___x_416_);
v_a_371_ = v___x_417_;
v___y_372_ = v___y_402_;
goto v___jp_370_;
}
else
{
lean_dec(v_a_410_);
lean_dec(v_n_397_);
lean_dec_ref(v_e_359_);
return v___x_411_;
}
}
else
{
lean_dec_ref(v_b_399_);
lean_dec(v_n_397_);
lean_dec_ref(v_e_359_);
return v___x_409_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1___redArg(lean_object* v_upperBound_503_, lean_object* v_args_504_, lean_object* v_pinfos_505_, lean_object* v_a_506_, uint64_t v_b_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
uint64_t v_a_519_; uint8_t v___x_523_; 
v___x_523_ = lean_nat_dec_lt(v_a_506_, v_upperBound_503_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; lean_object* v___x_525_; 
lean_dec(v_a_506_);
v___x_524_ = lean_box_uint64(v_b_507_);
v___x_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
return v___x_525_;
}
else
{
lean_object* v___x_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_526_ = lean_array_fget_borrowed(v_args_504_, v_a_506_);
v___x_527_ = lean_array_get_size(v_pinfos_505_);
v___x_528_ = lean_nat_dec_lt(v_a_506_, v___x_527_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; 
lean_inc(v___x_526_);
v___x_529_ = l_Lean_Meta_Grind_getAnchor(v___x_526_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
if (lean_obj_tag(v___x_529_) == 0)
{
lean_object* v_a_530_; uint64_t v___x_531_; uint64_t v___x_532_; 
v_a_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_a_530_);
lean_dec_ref_known(v___x_529_, 1);
v___x_531_ = lean_unbox_uint64(v_a_530_);
lean_dec(v_a_530_);
v___x_532_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v_b_507_, v___x_531_);
v_a_519_ = v___x_532_;
goto v___jp_518_;
}
else
{
lean_dec(v_a_506_);
return v___x_529_;
}
}
else
{
lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_533_ = lean_array_fget_borrowed(v_pinfos_505_, v_a_506_);
v___x_534_ = l_Lean_Meta_ParamInfo_isImplicit(v___x_533_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; 
lean_inc(v___x_526_);
v___x_535_ = l_Lean_Meta_Grind_getAnchor(v___x_526_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; uint64_t v___x_537_; uint64_t v___x_538_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_535_, 1);
v___x_537_ = lean_unbox_uint64(v_a_536_);
lean_dec(v_a_536_);
v___x_538_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_mix(v_b_507_, v___x_537_);
v_a_519_ = v___x_538_;
goto v___jp_518_;
}
else
{
lean_dec(v_a_506_);
return v___x_535_;
}
}
else
{
v_a_519_ = v_b_507_;
goto v___jp_518_;
}
}
}
v___jp_518_:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = lean_unsigned_to_nat(1u);
v___x_521_ = lean_nat_add(v_a_506_, v___x_520_);
lean_dec(v_a_506_);
v_a_506_ = v___x_521_;
v_b_507_ = v_a_519_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1___redArg___boxed(lean_object* v_upperBound_539_, lean_object* v_args_540_, lean_object* v_pinfos_541_, lean_object* v_a_542_, lean_object* v_b_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_){
_start:
{
uint64_t v_b_boxed_554_; lean_object* v_res_555_; 
v_b_boxed_554_ = lean_unbox_uint64(v_b_543_);
lean_dec_ref(v_b_543_);
v_res_555_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1___redArg(v_upperBound_539_, v_args_540_, v_pinfos_541_, v_a_542_, v_b_boxed_554_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v_pinfos_541_);
lean_dec_ref(v_args_540_);
lean_dec(v_upperBound_539_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4___boxed(lean_object* v_x_556_, lean_object* v_x_557_, lean_object* v_x_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Grind_getAnchor_spec__4(v_x_556_, v_x_557_, v_x_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
lean_dec(v___y_561_);
lean_dec_ref(v___y_560_);
lean_dec(v___y_559_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAnchor___boxed(lean_object* v_e_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lean_Meta_Grind_getAnchor(v_e_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_, v_a_579_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
lean_dec(v_a_577_);
lean_dec_ref(v_a_576_);
lean_dec(v_a_575_);
lean_dec_ref(v_a_574_);
lean_dec(v_a_573_);
lean_dec_ref(v_a_572_);
lean_dec(v_a_571_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0(lean_object* v_00_u03b2_582_, lean_object* v_x_583_, lean_object* v_x_584_, lean_object* v_x_585_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0___redArg(v_x_583_, v_x_584_, v_x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1(lean_object* v_upperBound_587_, lean_object* v_args_588_, lean_object* v_pinfos_589_, lean_object* v_inst_590_, lean_object* v_R_591_, lean_object* v_a_592_, uint64_t v_b_593_, lean_object* v_c_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1___redArg(v_upperBound_587_, v_args_588_, v_pinfos_589_, v_a_592_, v_b_593_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_606_ = _args[0];
lean_object* v_args_607_ = _args[1];
lean_object* v_pinfos_608_ = _args[2];
lean_object* v_inst_609_ = _args[3];
lean_object* v_R_610_ = _args[4];
lean_object* v_a_611_ = _args[5];
lean_object* v_b_612_ = _args[6];
lean_object* v_c_613_ = _args[7];
lean_object* v___y_614_ = _args[8];
lean_object* v___y_615_ = _args[9];
lean_object* v___y_616_ = _args[10];
lean_object* v___y_617_ = _args[11];
lean_object* v___y_618_ = _args[12];
lean_object* v___y_619_ = _args[13];
lean_object* v___y_620_ = _args[14];
lean_object* v___y_621_ = _args[15];
lean_object* v___y_622_ = _args[16];
lean_object* v___y_623_ = _args[17];
_start:
{
uint64_t v_b_boxed_624_; lean_object* v_res_625_; 
v_b_boxed_624_ = lean_unbox_uint64(v_b_612_);
lean_dec_ref(v_b_612_);
v_res_625_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_getAnchor_spec__1(v_upperBound_606_, v_args_607_, v_pinfos_608_, v_inst_609_, v_R_610_, v_a_611_, v_b_boxed_624_, v_c_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
lean_dec(v___y_622_);
lean_dec_ref(v___y_621_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
lean_dec(v___y_618_);
lean_dec_ref(v___y_617_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
lean_dec(v___y_614_);
lean_dec_ref(v_pinfos_608_);
lean_dec_ref(v_args_607_);
lean_dec(v_upperBound_606_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2(lean_object* v_00_u03b2_626_, lean_object* v_x_627_, lean_object* v_x_628_){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___redArg(v_x_627_, v_x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2___boxed(lean_object* v_00_u03b2_630_, lean_object* v_x_631_, lean_object* v_x_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2(v_00_u03b2_630_, v_x_631_, v_x_632_);
lean_dec_ref(v_x_632_);
lean_dec_ref(v_x_631_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0(lean_object* v_00_u03b2_634_, lean_object* v_x_635_, size_t v_x_636_, size_t v_x_637_, lean_object* v_x_638_, lean_object* v_x_639_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___redArg(v_x_635_, v_x_636_, v_x_637_, v_x_638_, v_x_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0___boxed(lean_object* v_00_u03b2_641_, lean_object* v_x_642_, lean_object* v_x_643_, lean_object* v_x_644_, lean_object* v_x_645_, lean_object* v_x_646_){
_start:
{
size_t v_x_33178__boxed_647_; size_t v_x_33179__boxed_648_; lean_object* v_res_649_; 
v_x_33178__boxed_647_ = lean_unbox_usize(v_x_643_);
lean_dec(v_x_643_);
v_x_33179__boxed_648_ = lean_unbox_usize(v_x_644_);
lean_dec(v_x_644_);
v_res_649_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0(v_00_u03b2_641_, v_x_642_, v_x_33178__boxed_647_, v_x_33179__boxed_648_, v_x_645_, v_x_646_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3(lean_object* v_00_u03b2_650_, lean_object* v_x_651_, size_t v_x_652_, lean_object* v_x_653_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___redArg(v_x_651_, v_x_652_, v_x_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3___boxed(lean_object* v_00_u03b2_655_, lean_object* v_x_656_, lean_object* v_x_657_, lean_object* v_x_658_){
_start:
{
size_t v_x_33195__boxed_659_; lean_object* v_res_660_; 
v_x_33195__boxed_659_ = lean_unbox_usize(v_x_657_);
lean_dec(v_x_657_);
v_res_660_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3(v_00_u03b2_655_, v_x_656_, v_x_33195__boxed_659_, v_x_658_);
lean_dec_ref(v_x_658_);
lean_dec_ref(v_x_656_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_661_, lean_object* v_n_662_, lean_object* v_k_663_, lean_object* v_v_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2___redArg(v_n_662_, v_k_663_, v_v_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_666_, size_t v_depth_667_, lean_object* v_keys_668_, lean_object* v_vals_669_, lean_object* v_heq_670_, lean_object* v_i_671_, lean_object* v_entries_672_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3___redArg(v_depth_667_, v_keys_668_, v_vals_669_, v_i_671_, v_entries_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_674_, lean_object* v_depth_675_, lean_object* v_keys_676_, lean_object* v_vals_677_, lean_object* v_heq_678_, lean_object* v_i_679_, lean_object* v_entries_680_){
_start:
{
size_t v_depth_boxed_681_; lean_object* v_res_682_; 
v_depth_boxed_681_ = lean_unbox_usize(v_depth_675_);
lean_dec(v_depth_675_);
v_res_682_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__3(v_00_u03b2_674_, v_depth_boxed_681_, v_keys_676_, v_vals_677_, v_heq_678_, v_i_679_, v_entries_680_);
lean_dec_ref(v_vals_677_);
lean_dec_ref(v_keys_676_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7(lean_object* v_00_u03b2_683_, lean_object* v_keys_684_, lean_object* v_vals_685_, lean_object* v_heq_686_, lean_object* v_i_687_, lean_object* v_k_688_){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___redArg(v_keys_684_, v_vals_685_, v_i_687_, v_k_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7___boxed(lean_object* v_00_u03b2_690_, lean_object* v_keys_691_, lean_object* v_vals_692_, lean_object* v_heq_693_, lean_object* v_i_694_, lean_object* v_k_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getAnchor_spec__2_spec__3_spec__7(v_00_u03b2_690_, v_keys_691_, v_vals_692_, v_heq_693_, v_i_694_, v_k_695_);
lean_dec_ref(v_k_695_);
lean_dec_ref(v_vals_692_);
lean_dec_ref(v_keys_691_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_697_, lean_object* v_x_698_, lean_object* v_x_699_, lean_object* v_x_700_, lean_object* v_x_701_){
_start:
{
lean_object* v___x_702_; 
v___x_702_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getAnchor_spec__0_spec__0_spec__2_spec__6___redArg(v_x_698_, v_x_699_, v_x_700_, v_x_701_);
return v___x_702_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_AnchorRef_matches(lean_object* v_anchorRef_703_, uint64_t v_anchor_704_){
_start:
{
lean_object* v_numDigits_705_; uint64_t v_anchorPrefix_706_; uint64_t v___x_707_; uint64_t v___x_708_; uint64_t v___x_709_; uint64_t v___x_710_; uint64_t v_shift_711_; uint64_t v___x_712_; uint8_t v___x_713_; 
v_numDigits_705_ = lean_ctor_get(v_anchorRef_703_, 0);
v_anchorPrefix_706_ = lean_ctor_get_uint64(v_anchorRef_703_, sizeof(void*)*1);
v___x_707_ = 64ULL;
v___x_708_ = lean_uint64_of_nat(v_numDigits_705_);
v___x_709_ = 2ULL;
v___x_710_ = lean_uint64_shift_left(v___x_708_, v___x_709_);
v_shift_711_ = lean_uint64_sub(v___x_707_, v___x_710_);
v___x_712_ = lean_uint64_shift_right(v_anchor_704_, v_shift_711_);
v___x_713_ = lean_uint64_dec_eq(v_anchorPrefix_706_, v___x_712_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AnchorRef_matches___boxed(lean_object* v_anchorRef_714_, lean_object* v_anchor_715_){
_start:
{
uint64_t v_anchor_boxed_716_; uint8_t v_res_717_; lean_object* v_r_718_; 
v_anchor_boxed_716_ = lean_unbox_uint64(v_anchor_715_);
lean_dec_ref(v_anchor_715_);
v_res_717_ = l_Lean_Meta_Grind_AnchorRef_matches(v_anchorRef_714_, v_anchor_boxed_716_);
lean_dec_ref(v_anchorRef_714_);
v_r_718_ = lean_box(v_res_717_);
return v_r_718_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11(void){
_start:
{
lean_object* v___x_739_; lean_object* v___f_740_; 
v___x_739_ = lean_alloc_closure((void*)(l_instDecidableEqUInt64___boxed), 2, 0);
v___f_740_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_740_, 0, v___x_739_);
return v___f_740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0___boxed(lean_object* v_inst_741_, lean_object* v_shift_742_, lean_object* v___f_743_, lean_object* v___f_744_, lean_object* v_numDigits_745_, lean_object* v_es_746_, lean_object* v___x_747_, lean_object* v_a_748_, lean_object* v_x_749_, lean_object* v___y_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0(v_inst_741_, v_shift_742_, v___f_743_, v___f_744_, v_numDigits_745_, v_es_746_, v___x_747_, v_a_748_, v_x_749_, v___y_750_);
lean_dec(v_numDigits_745_);
lean_dec(v_shift_742_);
return v_res_751_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12(void){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_752_ = lean_box(0);
v___x_753_ = lean_unsigned_to_nat(16u);
v___x_754_ = lean_mk_array(v___x_753_, v___x_752_);
return v___x_754_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13(void){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v_found_757_; 
v___x_755_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__12);
v___x_756_ = lean_unsigned_to_nat(0u);
v_found_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_found_757_, 0, v___x_756_);
lean_ctor_set(v_found_757_, 1, v___x_755_);
return v_found_757_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14(void){
_start:
{
lean_object* v_found_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v_found_758_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__13);
v___x_759_ = lean_box(0);
v___x_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
lean_ctor_set(v___x_760_, 1, v_found_758_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg(lean_object* v_inst_761_, lean_object* v_es_762_, lean_object* v_numDigits_763_){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; uint8_t v___x_768_; 
v___x_764_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__9));
v___x_765_ = lean_unsigned_to_nat(4u);
v___x_766_ = lean_nat_mul(v___x_765_, v_numDigits_763_);
v___x_767_ = lean_unsigned_to_nat(64u);
v___x_768_ = lean_nat_dec_lt(v___x_766_, v___x_767_);
if (v___x_768_ == 0)
{
lean_dec(v___x_766_);
lean_dec_ref(v_es_762_);
lean_dec_ref(v_inst_761_);
return v_numDigits_763_;
}
else
{
lean_object* v___f_769_; lean_object* v_shift_770_; lean_object* v___f_771_; lean_object* v___x_772_; lean_object* v___f_773_; lean_object* v___x_774_; size_t v_sz_775_; size_t v___x_776_; lean_object* v___x_777_; lean_object* v_fst_778_; 
v___f_769_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__10));
v_shift_770_ = lean_nat_sub(v___x_767_, v___x_766_);
lean_dec(v___x_766_);
v___f_771_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__11);
v___x_772_ = lean_box(0);
lean_inc_ref(v_es_762_);
lean_inc(v_numDigits_763_);
v___f_773_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0___boxed), 10, 7);
lean_closure_set(v___f_773_, 0, v_inst_761_);
lean_closure_set(v___f_773_, 1, v_shift_770_);
lean_closure_set(v___f_773_, 2, v___f_771_);
lean_closure_set(v___f_773_, 3, v___f_769_);
lean_closure_set(v___f_773_, 4, v_numDigits_763_);
lean_closure_set(v___f_773_, 5, v_es_762_);
lean_closure_set(v___f_773_, 6, v___x_772_);
v___x_774_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___closed__14);
v_sz_775_ = lean_array_size(v_es_762_);
v___x_776_ = ((size_t)0ULL);
v___x_777_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_764_, v_es_762_, v___f_773_, v_sz_775_, v___x_776_, v___x_774_);
v_fst_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_fst_778_);
lean_dec(v___x_777_);
if (lean_obj_tag(v_fst_778_) == 0)
{
return v_numDigits_763_;
}
else
{
lean_object* v_val_779_; 
lean_dec(v_numDigits_763_);
v_val_779_ = lean_ctor_get(v_fst_778_, 0);
lean_inc(v_val_779_);
lean_dec_ref_known(v_fst_778_, 1);
return v_val_779_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg___lam__0(lean_object* v_inst_780_, lean_object* v_shift_781_, lean_object* v___f_782_, lean_object* v___f_783_, lean_object* v_numDigits_784_, lean_object* v_es_785_, lean_object* v___x_786_, lean_object* v_a_787_, lean_object* v_x_788_, lean_object* v___y_789_){
_start:
{
lean_object* v_snd_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_828_; 
v_snd_790_ = lean_ctor_get(v___y_789_, 1);
v_isSharedCheck_828_ = !lean_is_exclusive(v___y_789_);
if (v_isSharedCheck_828_ == 0)
{
lean_object* v_unused_829_; 
v_unused_829_ = lean_ctor_get(v___y_789_, 0);
lean_dec(v_unused_829_);
v___x_792_ = v___y_789_;
v_isShared_793_ = v_isSharedCheck_828_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_snd_790_);
lean_dec(v___y_789_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_828_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_794_; uint64_t v___x_795_; uint64_t v___x_796_; uint64_t v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
lean_inc_ref(v_inst_780_);
v___x_794_ = lean_apply_1(v_inst_780_, v_a_787_);
v___x_795_ = lean_uint64_of_nat(v_shift_781_);
v___x_796_ = lean_unbox_uint64(v___x_794_);
v___x_797_ = lean_uint64_shift_right(v___x_796_, v___x_795_);
v___x_798_ = lean_box_uint64(v___x_797_);
lean_inc_ref(v___f_783_);
lean_inc_ref(v___f_782_);
v___x_799_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_782_, v___f_783_, v_snd_790_, v___x_798_);
if (lean_obj_tag(v___x_799_) == 1)
{
lean_object* v_val_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_821_; 
lean_dec_ref(v___f_783_);
lean_dec_ref(v___f_782_);
v_val_800_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_821_ == 0)
{
v___x_802_ = v___x_799_;
v_isShared_803_ = v_isSharedCheck_821_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_val_800_);
lean_dec(v___x_799_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_821_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
uint64_t v___x_804_; uint64_t v___x_805_; uint8_t v___x_806_; 
v___x_804_ = lean_unbox_uint64(v_val_800_);
lean_dec(v_val_800_);
v___x_805_ = lean_unbox_uint64(v___x_794_);
lean_dec_ref(v___x_794_);
v___x_806_ = lean_uint64_dec_eq(v___x_804_, v___x_805_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_811_; 
lean_dec(v___x_786_);
v___x_807_ = lean_unsigned_to_nat(1u);
v___x_808_ = lean_nat_add(v_numDigits_784_, v___x_807_);
v___x_809_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg(v_inst_780_, v_es_785_, v___x_808_);
if (v_isShared_803_ == 0)
{
lean_ctor_set(v___x_802_, 0, v___x_809_);
v___x_811_ = v___x_802_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_809_);
v___x_811_ = v_reuseFailAlloc_816_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
lean_object* v___x_813_; 
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 0, v___x_811_);
v___x_813_ = v___x_792_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v___x_811_);
lean_ctor_set(v_reuseFailAlloc_815_, 1, v_snd_790_);
v___x_813_ = v_reuseFailAlloc_815_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
lean_object* v___x_814_; 
v___x_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
return v___x_814_;
}
}
}
else
{
lean_object* v___x_818_; 
lean_del_object(v___x_802_);
lean_dec_ref(v_es_785_);
lean_dec_ref(v_inst_780_);
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 0, v___x_786_);
v___x_818_ = v___x_792_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v_snd_790_);
v___x_818_ = v_reuseFailAlloc_820_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
lean_object* v___x_819_; 
v___x_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_819_, 0, v___x_818_);
return v___x_819_;
}
}
}
}
else
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_825_; 
lean_dec(v___x_799_);
lean_dec_ref(v_es_785_);
lean_dec_ref(v_inst_780_);
v___x_822_ = lean_box_uint64(v___x_797_);
v___x_823_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_782_, v___f_783_, v_snd_790_, v___x_822_, v___x_794_);
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 1, v___x_823_);
lean_ctor_set(v___x_792_, 0, v___x_786_);
v___x_825_ = v___x_792_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_827_, 1, v___x_823_);
v___x_825_ = v_reuseFailAlloc_827_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
lean_object* v___x_826_; 
v___x_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_826_, 0, v___x_825_);
return v___x_826_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go(lean_object* v_00_u03b1_830_, lean_object* v_inst_831_, lean_object* v_es_832_, lean_object* v_numDigits_833_){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg(v_inst_831_, v_es_832_, v_numDigits_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getAnchor_match__1_splitter___redArg(lean_object* v_x_835_, lean_object* v_h__1_836_, lean_object* v_h__2_837_){
_start:
{
if (lean_obj_tag(v_x_835_) == 1)
{
lean_object* v_val_838_; lean_object* v___x_839_; 
lean_dec(v_h__2_837_);
v_val_838_ = lean_ctor_get(v_x_835_, 0);
lean_inc(v_val_838_);
lean_dec_ref_known(v_x_835_, 1);
v___x_839_ = lean_apply_1(v_h__1_836_, v_val_838_);
return v___x_839_;
}
else
{
lean_object* v___x_840_; 
lean_dec(v_h__1_836_);
v___x_840_ = lean_apply_2(v_h__2_837_, v_x_835_, lean_box(0));
return v___x_840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getAnchor_match__1_splitter(lean_object* v_motive_841_, lean_object* v_x_842_, lean_object* v_h__1_843_, lean_object* v_h__2_844_){
_start:
{
if (lean_obj_tag(v_x_842_) == 1)
{
lean_object* v_val_845_; lean_object* v___x_846_; 
lean_dec(v_h__2_844_);
v_val_845_ = lean_ctor_get(v_x_842_, 0);
lean_inc(v_val_845_);
lean_dec_ref_known(v_x_842_, 1);
v___x_846_ = lean_apply_1(v_h__1_843_, v_val_845_);
return v___x_846_;
}
else
{
lean_object* v___x_847_; 
lean_dec(v_h__1_843_);
v___x_847_ = lean_apply_2(v_h__2_844_, v_x_842_, lean_box(0));
return v___x_847_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Break_runK_match__1_splitter___redArg(lean_object* v_x_848_, lean_object* v_h__1_849_, lean_object* v_h__2_850_){
_start:
{
if (lean_obj_tag(v_x_848_) == 0)
{
lean_object* v___x_851_; lean_object* v___x_852_; 
lean_dec(v_h__1_849_);
v___x_851_ = lean_box(0);
v___x_852_ = lean_apply_1(v_h__2_850_, v___x_851_);
return v___x_852_;
}
else
{
lean_object* v_val_853_; lean_object* v___x_854_; 
lean_dec(v_h__2_850_);
v_val_853_ = lean_ctor_get(v_x_848_, 0);
lean_inc(v_val_853_);
lean_dec_ref_known(v_x_848_, 1);
v___x_854_ = lean_apply_1(v_h__1_849_, v_val_853_);
return v___x_854_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Break_runK_match__1_splitter(lean_object* v_00_u03b1_855_, lean_object* v_motive_856_, lean_object* v_x_857_, lean_object* v_h__1_858_, lean_object* v_h__2_859_){
_start:
{
if (lean_obj_tag(v_x_857_) == 0)
{
lean_object* v___x_860_; lean_object* v___x_861_; 
lean_dec(v_h__1_858_);
v___x_860_ = lean_box(0);
v___x_861_ = lean_apply_1(v_h__2_859_, v___x_860_);
return v___x_861_;
}
else
{
lean_object* v_val_862_; lean_object* v___x_863_; 
lean_dec(v_h__2_859_);
v_val_862_ = lean_ctor_get(v_x_857_, 0);
lean_inc(v_val_862_);
lean_dec_ref_known(v_x_857_, 1);
v___x_863_ = lean_apply_1(v_h__1_858_, v_val_862_);
return v___x_863_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___redArg(lean_object* v_inst_864_, lean_object* v_es_865_){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = lean_unsigned_to_nat(4u);
v___x_867_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___redArg(v_inst_864_, v_es_865_, v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors(lean_object* v_00_u03b1_868_, lean_object* v_inst_869_, lean_object* v_es_870_){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = l_Lean_Meta_Grind_getNumDigitsForAnchors___redArg(v_inst_869_, v_es_870_);
return v___x_871_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0(lean_object* v_e_872_){
_start:
{
uint64_t v_anchor_873_; 
v_anchor_873_ = lean_ctor_get_uint64(v_e_872_, sizeof(void*)*1);
return v_anchor_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0___boxed(lean_object* v_e_874_){
_start:
{
uint64_t v_res_875_; lean_object* v_r_876_; 
v_res_875_ = l_Lean_Meta_Grind_instHasAnchorExprWithAnchor___lam__0(v_e_874_);
lean_dec_ref(v_e_874_);
v_r_876_ = lean_box_uint64(v_res_875_);
return v_r_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg(lean_object* v_numDigits_892_, uint64_t v_anchorPrefix_893_, lean_object* v_a_894_){
_start:
{
lean_object* v_ref_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; uint8_t v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v_ref_896_ = lean_ctor_get(v_a_894_, 2);
v___x_897_ = ((lean_object*)(l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__1));
v___x_898_ = l_Lean_Meta_Grind_anchorPrefixToString(v_numDigits_892_, v_anchorPrefix_893_);
v___x_899_ = l_Lean_mkAtom(v___x_898_);
v___x_900_ = lean_unsigned_to_nat(1u);
v___x_901_ = lean_mk_empty_array_with_capacity(v___x_900_);
v___x_902_ = lean_array_push(v___x_901_, v___x_899_);
v___x_903_ = lean_box(2);
v___x_904_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
lean_ctor_set(v___x_904_, 1, v___x_897_);
lean_ctor_set(v___x_904_, 2, v___x_902_);
v___x_905_ = 0;
v___x_906_ = l_Lean_SourceInfo_fromRef(v_ref_896_, v___x_905_);
v___x_907_ = ((lean_object*)(l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__6));
v___x_908_ = ((lean_object*)(l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___closed__7));
lean_inc(v___x_906_);
v___x_909_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_906_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = l_Lean_Syntax_node2(v___x_906_, v___x_907_, v___x_909_, v___x_904_);
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg___boxed(lean_object* v_numDigits_912_, lean_object* v_anchorPrefix_913_, lean_object* v_a_914_, lean_object* v_a_915_){
_start:
{
uint64_t v_anchorPrefix_boxed_916_; lean_object* v_res_917_; 
v_anchorPrefix_boxed_916_ = lean_unbox_uint64(v_anchorPrefix_913_);
lean_dec_ref(v_anchorPrefix_913_);
v_res_917_ = l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg(v_numDigits_912_, v_anchorPrefix_boxed_916_, v_a_914_);
lean_dec_ref(v_a_914_);
lean_dec(v_numDigits_912_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix(lean_object* v_numDigits_918_, uint64_t v_anchorPrefix_919_, lean_object* v_a_920_, lean_object* v_a_921_){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg(v_numDigits_918_, v_anchorPrefix_919_, v_a_920_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___boxed(lean_object* v_numDigits_924_, lean_object* v_anchorPrefix_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_){
_start:
{
uint64_t v_anchorPrefix_boxed_929_; lean_object* v_res_930_; 
v_anchorPrefix_boxed_929_ = lean_unbox_uint64(v_anchorPrefix_925_);
lean_dec_ref(v_anchorPrefix_925_);
v_res_930_ = l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix(v_numDigits_924_, v_anchorPrefix_boxed_929_, v_a_926_, v_a_927_);
lean_dec(v_a_927_);
lean_dec_ref(v_a_926_);
lean_dec(v_numDigits_924_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___redArg(lean_object* v_numDigits_931_, uint64_t v_anchor_932_, lean_object* v_a_933_){
_start:
{
uint64_t v___x_935_; uint64_t v___x_936_; uint64_t v___x_937_; uint64_t v___x_938_; uint64_t v___x_939_; uint64_t v_anchorPrefix_940_; lean_object* v___x_941_; 
v___x_935_ = 64ULL;
v___x_936_ = lean_uint64_of_nat(v_numDigits_931_);
v___x_937_ = 2ULL;
v___x_938_ = lean_uint64_shift_left(v___x_936_, v___x_937_);
v___x_939_ = lean_uint64_sub(v___x_935_, v___x_938_);
v_anchorPrefix_940_ = lean_uint64_shift_right(v_anchor_932_, v___x_939_);
v___x_941_ = l_Lean_Meta_Grind_mkAnchorSyntaxFromPrefix___redArg(v_numDigits_931_, v_anchorPrefix_940_, v_a_933_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___redArg___boxed(lean_object* v_numDigits_942_, lean_object* v_anchor_943_, lean_object* v_a_944_, lean_object* v_a_945_){
_start:
{
uint64_t v_anchor_boxed_946_; lean_object* v_res_947_; 
v_anchor_boxed_946_ = lean_unbox_uint64(v_anchor_943_);
lean_dec_ref(v_anchor_943_);
v_res_947_ = l_Lean_Meta_Grind_mkAnchorSyntax___redArg(v_numDigits_942_, v_anchor_boxed_946_, v_a_944_);
lean_dec_ref(v_a_944_);
lean_dec(v_numDigits_942_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax(lean_object* v_numDigits_948_, uint64_t v_anchor_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
lean_object* v___x_953_; 
v___x_953_ = l_Lean_Meta_Grind_mkAnchorSyntax___redArg(v_numDigits_948_, v_anchor_949_, v_a_950_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkAnchorSyntax___boxed(lean_object* v_numDigits_954_, lean_object* v_anchor_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_){
_start:
{
uint64_t v_anchor_boxed_959_; lean_object* v_res_960_; 
v_anchor_boxed_959_ = lean_unbox_uint64(v_anchor_955_);
lean_dec_ref(v_anchor_955_);
v_res_960_ = l_Lean_Meta_Grind_mkAnchorSyntax(v_numDigits_954_, v_anchor_boxed_959_, v_a_956_, v_a_957_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
lean_dec(v_numDigits_954_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitInfo_getAnchor(lean_object* v_s_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = l_Lean_Meta_Grind_SplitInfo_getExpr(v_s_961_);
v___x_973_ = l_Lean_Meta_Grind_getAnchor(v___x_972_, v_a_962_, v_a_963_, v_a_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_, v_a_969_, v_a_970_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SplitInfo_getAnchor___boxed(lean_object* v_s_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l_Lean_Meta_Grind_SplitInfo_getAnchor(v_s_974_, v_a_975_, v_a_976_, v_a_977_, v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_);
lean_dec(v_a_983_);
lean_dec_ref(v_a_982_);
lean_dec(v_a_981_);
lean_dec_ref(v_a_980_);
lean_dec(v_a_979_);
lean_dec_ref(v_a_978_);
lean_dec(v_a_977_);
lean_dec_ref(v_a_976_);
lean_dec(v_a_975_);
lean_dec_ref(v_s_974_);
return v_res_985_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Anchor(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_MarkNestedSubsingletons(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Anchor(builtin);
}
#ifdef __cplusplus
}
#endif

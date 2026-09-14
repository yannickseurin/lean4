// Lean compiler output
// Module: Lean.Elab.Tactic.Do.LetElim
// Imports: public import Lean.Meta.Tactic.Simp import Init.Omega
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
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_KVMap_setNat(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KVMap_mergeBy(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_setType(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_setValue(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_KVMap_getNat(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Simp_isCharLit(lean_object*);
uint8_t l_Lean_Meta_Simp_isOfNatNatLit(lean_object*);
uint8_t l_Lean_Meta_Simp_isOfScientificLit(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_zero_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_zero_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_zero_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_zero_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_one_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_one_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_one_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_one_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_many_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_many_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_many_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_many_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_instBEqUses_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instBEqUses_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_instBEqUses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_instBEqUses_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_instBEqUses___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_instBEqUses___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_instBEqUses = (const lean_object*)&l_Lean_Elab_Tactic_Do_instBEqUses___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_instOrdUses_ord(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instOrdUses_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_instOrdUses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_instOrdUses_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_instOrdUses___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_instOrdUses___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_instOrdUses = (const lean_object*)&l_Lean_Elab_Tactic_Do_instOrdUses___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_instInhabitedUses_default;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_instInhabitedUses;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Uses_add(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_toNat(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_toNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Uses_fromNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_fromNat___boxed(lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_instAddUses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Uses_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_instAddUses___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_instAddUses___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_instAddUses = (const lean_object*)&l_Lean_Elab_Tactic_Do_instAddUses___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_FVarUses_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_FVarUses_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_instAddFVarUses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_FVarUses_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_instAddFVarUses___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_instAddFVarUses___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_instAddFVarUses = (const lean_object*)&l_Lean_Elab_Tactic_Do_instAddFVarUses___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_none_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_none_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_some_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_some_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_some_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__4_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "tacticGet_elem_tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(141, 31, 109, 153, 11, 229, 201, 51)}};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "get_elem_tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__13;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__14;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__15;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__17;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__18;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__19;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__20;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__21;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_BVarUses_single___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_BVarUses_pop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_pop___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_pop___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_pop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_pop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Tactic_Do_BVarUses_add_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Tactic_Do_BVarUses_add_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_BVarUses_add___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_BVarUses_add___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_BVarUses_add___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_add___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_add(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_add___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instAddBVarUses(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_over1Of2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_over1Of2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_addMData___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_addMData___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_addMData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_addMData___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_addMData___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_addMData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_addMData(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_LetElim_0__Lean_Elab_Tactic_Do_okToDup(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_LetElim_0__Lean_Elab_Tactic_Do_okToDup___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUsesDecl___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUses___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUses___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_countUsesDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_countUsesDecl___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_countUsesDecl___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_countUsesDecl___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_countUsesDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "uses"};
static const lean_object* l_Lean_Elab_Tactic_Do_countUsesDecl___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_countUsesDecl___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_countUsesDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_countUsesDecl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 67, 224, 192, 49, 118, 23, 147)}};
static const lean_object* l_Lean_Elab_Tactic_Do_countUsesDecl___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_countUsesDecl___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_countUsesDecl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_countUsesDecl___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4;
static const lean_string_object l_Lean_Elab_Tactic_Do_countUses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "BVar index out of bounds: "};
static const lean_object* l_Lean_Elab_Tactic_Do_countUses___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_countUses___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_countUses___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_countUses___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_countUses___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " >= "};
static const lean_object* l_Lean_Elab_Tactic_Do_countUses___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_countUses___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_countUses___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_countUses___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_countUses___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Elab_Tactic_Do_countUses___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_countUses___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_countUses___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_countUses___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUsesDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUsesDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUses___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2___boxed__const__1 = (const lean_object*)&l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUsesLCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUsesLCtx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_doNotDup(uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_doNotDup___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__8(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_elimLetsCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_elimLetsCore___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elimLetsCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__2(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elimLets_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elimLets_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_elimLets___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2___closed__0_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2___closed__0_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_elimLets___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_elimLets___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLets___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLets(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lean_Elab_Tactic_Do_Uses_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Elab_Tactic_Do_Uses_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lean_Elab_Tactic_Do_Uses_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_zero_elim___redArg(lean_object* v_zero_23_){
_start:
{
lean_inc(v_zero_23_);
return v_zero_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_zero_elim___redArg___boxed(lean_object* v_zero_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Elab_Tactic_Do_Uses_zero_elim___redArg(v_zero_24_);
lean_dec(v_zero_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_zero_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_zero_29_){
_start:
{
lean_inc(v_zero_29_);
return v_zero_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_zero_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_zero_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lean_Elab_Tactic_Do_Uses_zero_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_zero_33_);
lean_dec(v_zero_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_one_elim___redArg(lean_object* v_one_36_){
_start:
{
lean_inc(v_one_36_);
return v_one_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_one_elim___redArg___boxed(lean_object* v_one_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_Elab_Tactic_Do_Uses_one_elim___redArg(v_one_37_);
lean_dec(v_one_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_one_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_one_42_){
_start:
{
lean_inc(v_one_42_);
return v_one_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_one_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_one_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lean_Elab_Tactic_Do_Uses_one_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_one_46_);
lean_dec(v_one_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_many_elim___redArg(lean_object* v_many_49_){
_start:
{
lean_inc(v_many_49_);
return v_many_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_many_elim___redArg___boxed(lean_object* v_many_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Elab_Tactic_Do_Uses_many_elim___redArg(v_many_50_);
lean_dec(v_many_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_many_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_many_55_){
_start:
{
lean_inc(v_many_55_);
return v_many_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_many_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_many_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lean_Elab_Tactic_Do_Uses_many_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_many_59_);
lean_dec(v_many_59_);
return v_res_61_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_instBEqUses_beq(uint8_t v_x_62_, uint8_t v_y_63_){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_64_ = l_Lean_Elab_Tactic_Do_Uses_ctorIdx(v_x_62_);
v___x_65_ = l_Lean_Elab_Tactic_Do_Uses_ctorIdx(v_y_63_);
v___x_66_ = lean_nat_dec_eq(v___x_64_, v___x_65_);
lean_dec(v___x_65_);
lean_dec(v___x_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instBEqUses_beq___boxed(lean_object* v_x_67_, lean_object* v_y_68_){
_start:
{
uint8_t v_x_21__boxed_69_; uint8_t v_y_22__boxed_70_; uint8_t v_res_71_; lean_object* v_r_72_; 
v_x_21__boxed_69_ = lean_unbox(v_x_67_);
v_y_22__boxed_70_ = lean_unbox(v_y_68_);
v_res_71_ = l_Lean_Elab_Tactic_Do_instBEqUses_beq(v_x_21__boxed_69_, v_y_22__boxed_70_);
v_r_72_ = lean_box(v_res_71_);
return v_r_72_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_instOrdUses_ord(uint8_t v_x_75_, uint8_t v_y_76_){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_77_ = l_Lean_Elab_Tactic_Do_Uses_ctorIdx(v_x_75_);
v___x_78_ = l_Lean_Elab_Tactic_Do_Uses_ctorIdx(v_y_76_);
v___x_79_ = lean_nat_dec_lt(v___x_77_, v___x_78_);
if (v___x_79_ == 0)
{
uint8_t v___x_80_; 
v___x_80_ = lean_nat_dec_eq(v___x_77_, v___x_78_);
lean_dec(v___x_78_);
lean_dec(v___x_77_);
if (v___x_80_ == 0)
{
uint8_t v___x_81_; 
v___x_81_ = 2;
return v___x_81_;
}
else
{
uint8_t v___x_82_; 
v___x_82_ = 1;
return v___x_82_;
}
}
else
{
uint8_t v___x_83_; 
lean_dec(v___x_78_);
lean_dec(v___x_77_);
v___x_83_ = 0;
return v___x_83_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instOrdUses_ord___boxed(lean_object* v_x_84_, lean_object* v_y_85_){
_start:
{
uint8_t v_x_30__boxed_86_; uint8_t v_y_31__boxed_87_; uint8_t v_res_88_; lean_object* v_r_89_; 
v_x_30__boxed_86_ = lean_unbox(v_x_84_);
v_y_31__boxed_87_ = lean_unbox(v_y_85_);
v_res_88_ = l_Lean_Elab_Tactic_Do_instOrdUses_ord(v_x_30__boxed_86_, v_y_31__boxed_87_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
static uint8_t _init_l_Lean_Elab_Tactic_Do_instInhabitedUses_default(void){
_start:
{
uint8_t v___x_92_; 
v___x_92_ = 0;
return v___x_92_;
}
}
static uint8_t _init_l_Lean_Elab_Tactic_Do_instInhabitedUses(void){
_start:
{
uint8_t v___x_93_; 
v___x_93_ = 0;
return v___x_93_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Uses_add(uint8_t v_x_94_, uint8_t v_x_95_){
_start:
{
if (v_x_94_ == 0)
{
return v_x_95_;
}
else
{
if (v_x_95_ == 0)
{
return v_x_94_;
}
else
{
uint8_t v___x_96_; 
v___x_96_ = 2;
return v___x_96_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_add___boxed(lean_object* v_x_97_, lean_object* v_x_98_){
_start:
{
uint8_t v_x_18__boxed_99_; uint8_t v_x_19__boxed_100_; uint8_t v_res_101_; lean_object* v_r_102_; 
v_x_18__boxed_99_ = lean_unbox(v_x_97_);
v_x_19__boxed_100_ = lean_unbox(v_x_98_);
v_res_101_ = l_Lean_Elab_Tactic_Do_Uses_add(v_x_18__boxed_99_, v_x_19__boxed_100_);
v_r_102_ = lean_box(v_res_101_);
return v_r_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_toNat(uint8_t v_x_103_){
_start:
{
switch(v_x_103_)
{
case 0:
{
lean_object* v___x_104_; 
v___x_104_ = lean_unsigned_to_nat(0u);
return v___x_104_;
}
case 1:
{
lean_object* v___x_105_; 
v___x_105_ = lean_unsigned_to_nat(1u);
return v___x_105_;
}
default: 
{
lean_object* v___x_106_; 
v___x_106_ = lean_unsigned_to_nat(2u);
return v___x_106_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_toNat___boxed(lean_object* v_x_107_){
_start:
{
uint8_t v_x_34__boxed_108_; lean_object* v_res_109_; 
v_x_34__boxed_108_ = lean_unbox(v_x_107_);
v_res_109_ = l_Lean_Elab_Tactic_Do_Uses_toNat(v_x_34__boxed_108_);
return v_res_109_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Uses_fromNat(lean_object* v_x_110_){
_start:
{
lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_111_ = lean_unsigned_to_nat(0u);
v___x_112_ = lean_nat_dec_eq(v_x_110_, v___x_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_113_ = lean_unsigned_to_nat(1u);
v___x_114_ = lean_nat_dec_eq(v_x_110_, v___x_113_);
if (v___x_114_ == 0)
{
uint8_t v___x_115_; 
v___x_115_ = 2;
return v___x_115_;
}
else
{
uint8_t v___x_116_; 
v___x_116_ = 1;
return v___x_116_;
}
}
else
{
uint8_t v___x_117_; 
v___x_117_ = 0;
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Uses_fromNat___boxed(lean_object* v_x_118_){
_start:
{
uint8_t v_res_119_; lean_object* v_r_120_; 
v_res_119_ = l_Lean_Elab_Tactic_Do_Uses_fromNat(v_x_118_);
lean_dec(v_x_118_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_x_123_, lean_object* v_x_124_){
_start:
{
if (lean_obj_tag(v_x_124_) == 0)
{
return v_x_123_;
}
else
{
lean_object* v_key_125_; lean_object* v_value_126_; lean_object* v_tail_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_150_; 
v_key_125_ = lean_ctor_get(v_x_124_, 0);
v_value_126_ = lean_ctor_get(v_x_124_, 1);
v_tail_127_ = lean_ctor_get(v_x_124_, 2);
v_isSharedCheck_150_ = !lean_is_exclusive(v_x_124_);
if (v_isSharedCheck_150_ == 0)
{
v___x_129_ = v_x_124_;
v_isShared_130_ = v_isSharedCheck_150_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_tail_127_);
lean_inc(v_value_126_);
lean_inc(v_key_125_);
lean_dec(v_x_124_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_150_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_131_; uint64_t v___x_132_; uint64_t v___x_133_; uint64_t v___x_134_; uint64_t v_fold_135_; uint64_t v___x_136_; uint64_t v___x_137_; uint64_t v___x_138_; size_t v___x_139_; size_t v___x_140_; size_t v___x_141_; size_t v___x_142_; size_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_146_; 
v___x_131_ = lean_array_get_size(v_x_123_);
v___x_132_ = l_Lean_instHashableFVarId_hash(v_key_125_);
v___x_133_ = 32ULL;
v___x_134_ = lean_uint64_shift_right(v___x_132_, v___x_133_);
v_fold_135_ = lean_uint64_xor(v___x_132_, v___x_134_);
v___x_136_ = 16ULL;
v___x_137_ = lean_uint64_shift_right(v_fold_135_, v___x_136_);
v___x_138_ = lean_uint64_xor(v_fold_135_, v___x_137_);
v___x_139_ = lean_uint64_to_usize(v___x_138_);
v___x_140_ = lean_usize_of_nat(v___x_131_);
v___x_141_ = ((size_t)1ULL);
v___x_142_ = lean_usize_sub(v___x_140_, v___x_141_);
v___x_143_ = lean_usize_land(v___x_139_, v___x_142_);
v___x_144_ = lean_array_uget_borrowed(v_x_123_, v___x_143_);
lean_inc(v___x_144_);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 2, v___x_144_);
v___x_146_ = v___x_129_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_key_125_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v_value_126_);
lean_ctor_set(v_reuseFailAlloc_149_, 2, v___x_144_);
v___x_146_ = v_reuseFailAlloc_149_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
lean_object* v___x_147_; 
v___x_147_ = lean_array_uset(v_x_123_, v___x_143_, v___x_146_);
v_x_123_ = v___x_147_;
v_x_124_ = v_tail_127_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2___redArg(lean_object* v_i_151_, lean_object* v_source_152_, lean_object* v_target_153_){
_start:
{
lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_154_ = lean_array_get_size(v_source_152_);
v___x_155_ = lean_nat_dec_lt(v_i_151_, v___x_154_);
if (v___x_155_ == 0)
{
lean_dec_ref(v_source_152_);
lean_dec(v_i_151_);
return v_target_153_;
}
else
{
lean_object* v_es_156_; lean_object* v___x_157_; lean_object* v_source_158_; lean_object* v_target_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_es_156_ = lean_array_fget(v_source_152_, v_i_151_);
v___x_157_ = lean_box(0);
v_source_158_ = lean_array_fset(v_source_152_, v_i_151_, v___x_157_);
v_target_159_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2_spec__5___redArg(v_target_153_, v_es_156_);
v___x_160_ = lean_unsigned_to_nat(1u);
v___x_161_ = lean_nat_add(v_i_151_, v___x_160_);
lean_dec(v_i_151_);
v_i_151_ = v___x_161_;
v_source_152_ = v_source_158_;
v_target_153_ = v_target_159_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1___redArg(lean_object* v_data_163_){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v_nbuckets_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_164_ = lean_array_get_size(v_data_163_);
v___x_165_ = lean_unsigned_to_nat(2u);
v_nbuckets_166_ = lean_nat_mul(v___x_164_, v___x_165_);
v___x_167_ = lean_unsigned_to_nat(0u);
v___x_168_ = lean_box(0);
v___x_169_ = lean_mk_array(v_nbuckets_166_, v___x_168_);
v___x_170_ = lean_array_propagate_mark(v_data_163_, v___x_169_);
v___x_171_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2___redArg(v___x_167_, v_data_163_, v___x_170_);
return v___x_171_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___redArg(lean_object* v_a_172_, lean_object* v_x_173_){
_start:
{
if (lean_obj_tag(v_x_173_) == 0)
{
uint8_t v___x_174_; 
v___x_174_ = 0;
return v___x_174_;
}
else
{
lean_object* v_key_175_; lean_object* v_tail_176_; uint8_t v___x_177_; 
v_key_175_ = lean_ctor_get(v_x_173_, 0);
v_tail_176_ = lean_ctor_get(v_x_173_, 2);
v___x_177_ = l_Lean_instBEqFVarId_beq(v_key_175_, v_a_172_);
if (v___x_177_ == 0)
{
v_x_173_ = v_tail_176_;
goto _start;
}
else
{
return v___x_177_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___redArg___boxed(lean_object* v_a_179_, lean_object* v_x_180_){
_start:
{
uint8_t v_res_181_; lean_object* v_r_182_; 
v_res_181_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___redArg(v_a_179_, v_x_180_);
lean_dec(v_x_180_);
lean_dec(v_a_179_);
v_r_182_ = lean_box(v_res_181_);
return v_r_182_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2___lam__0(uint8_t v_x3_183_, lean_object* v_x_184_){
_start:
{
if (lean_obj_tag(v_x_184_) == 0)
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_box(v_x3_183_);
v___x_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
else
{
lean_object* v_val_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_197_; 
v_val_187_ = lean_ctor_get(v_x_184_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v_x_184_);
if (v_isSharedCheck_197_ == 0)
{
v___x_189_ = v_x_184_;
v_isShared_190_ = v_isSharedCheck_197_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_val_187_);
lean_dec(v_x_184_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_197_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
uint8_t v___x_191_; uint8_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_195_; 
v___x_191_ = lean_unbox(v_val_187_);
lean_dec(v_val_187_);
v___x_192_ = l_Lean_Elab_Tactic_Do_Uses_add(v_x3_183_, v___x_191_);
v___x_193_ = lean_box(v___x_192_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_193_);
v___x_195_ = v___x_189_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v___x_193_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2___lam__0___boxed(lean_object* v_x3_198_, lean_object* v_x_199_){
_start:
{
uint8_t v_x3_855__boxed_200_; lean_object* v_res_201_; 
v_x3_855__boxed_200_ = lean_unbox(v_x3_198_);
v_res_201_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2___lam__0(v_x3_855__boxed_200_, v_x_199_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2(uint8_t v_x3_202_, lean_object* v_a_203_, lean_object* v_x_204_){
_start:
{
if (lean_obj_tag(v_x_204_) == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v_val_207_; lean_object* v___x_208_; 
v___x_205_ = lean_box(0);
v___x_206_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2___lam__0(v_x3_202_, v___x_205_);
v_val_207_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_val_207_);
lean_dec(v___x_206_);
v___x_208_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_208_, 0, v_a_203_);
lean_ctor_set(v___x_208_, 1, v_val_207_);
lean_ctor_set(v___x_208_, 2, v_x_204_);
return v___x_208_;
}
else
{
lean_object* v_key_209_; lean_object* v_value_210_; lean_object* v_tail_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_226_; 
v_key_209_ = lean_ctor_get(v_x_204_, 0);
v_value_210_ = lean_ctor_get(v_x_204_, 1);
v_tail_211_ = lean_ctor_get(v_x_204_, 2);
v_isSharedCheck_226_ = !lean_is_exclusive(v_x_204_);
if (v_isSharedCheck_226_ == 0)
{
v___x_213_ = v_x_204_;
v_isShared_214_ = v_isSharedCheck_226_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_tail_211_);
lean_inc(v_value_210_);
lean_inc(v_key_209_);
lean_dec(v_x_204_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_226_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
uint8_t v___x_215_; 
v___x_215_ = l_Lean_instBEqFVarId_beq(v_key_209_, v_a_203_);
if (v___x_215_ == 0)
{
lean_object* v_tail_216_; lean_object* v___x_218_; 
v_tail_216_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2(v_x3_202_, v_a_203_, v_tail_211_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 2, v_tail_216_);
v___x_218_ = v___x_213_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_key_209_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_value_210_);
lean_ctor_set(v_reuseFailAlloc_219_, 2, v_tail_216_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
else
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v_val_222_; lean_object* v___x_224_; 
lean_dec(v_key_209_);
v___x_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_220_, 0, v_value_210_);
v___x_221_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2___lam__0(v_x3_202_, v___x_220_);
v_val_222_ = lean_ctor_get(v___x_221_, 0);
lean_inc(v_val_222_);
lean_dec(v___x_221_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v_val_222_);
lean_ctor_set(v___x_213_, 0, v_a_203_);
v___x_224_ = v___x_213_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_a_203_);
lean_ctor_set(v_reuseFailAlloc_225_, 1, v_val_222_);
lean_ctor_set(v_reuseFailAlloc_225_, 2, v_tail_211_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2___boxed(lean_object* v_x3_227_, lean_object* v_a_228_, lean_object* v_x_229_){
_start:
{
uint8_t v_x3_887__boxed_230_; lean_object* v_res_231_; 
v_x3_887__boxed_230_ = lean_unbox(v_x3_227_);
v_res_231_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2(v_x3_887__boxed_230_, v_a_228_, v_x_229_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0(uint8_t v_x3_232_, lean_object* v_m_233_, lean_object* v_a_234_){
_start:
{
lean_object* v_size_235_; lean_object* v_buckets_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_285_; 
v_size_235_ = lean_ctor_get(v_m_233_, 0);
v_buckets_236_ = lean_ctor_get(v_m_233_, 1);
v_isSharedCheck_285_ = !lean_is_exclusive(v_m_233_);
if (v_isSharedCheck_285_ == 0)
{
v___x_238_ = v_m_233_;
v_isShared_239_ = v_isSharedCheck_285_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_buckets_236_);
lean_inc(v_size_235_);
lean_dec(v_m_233_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_285_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; uint64_t v___x_241_; uint64_t v___x_242_; uint64_t v___x_243_; uint64_t v_fold_244_; uint64_t v___x_245_; uint64_t v___x_246_; uint64_t v___x_247_; size_t v___x_248_; size_t v___x_249_; size_t v___x_250_; size_t v___x_251_; size_t v___x_252_; lean_object* v_bkt_253_; uint8_t v___x_254_; 
v___x_240_ = lean_array_get_size(v_buckets_236_);
v___x_241_ = l_Lean_instHashableFVarId_hash(v_a_234_);
v___x_242_ = 32ULL;
v___x_243_ = lean_uint64_shift_right(v___x_241_, v___x_242_);
v_fold_244_ = lean_uint64_xor(v___x_241_, v___x_243_);
v___x_245_ = 16ULL;
v___x_246_ = lean_uint64_shift_right(v_fold_244_, v___x_245_);
v___x_247_ = lean_uint64_xor(v_fold_244_, v___x_246_);
v___x_248_ = lean_uint64_to_usize(v___x_247_);
v___x_249_ = lean_usize_of_nat(v___x_240_);
v___x_250_ = ((size_t)1ULL);
v___x_251_ = lean_usize_sub(v___x_249_, v___x_250_);
v___x_252_ = lean_usize_land(v___x_248_, v___x_251_);
v_bkt_253_ = lean_array_uget_borrowed(v_buckets_236_, v___x_252_);
v___x_254_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___redArg(v_a_234_, v_bkt_253_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; lean_object* v_size_x27_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v_buckets_x27_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_255_ = lean_unsigned_to_nat(1u);
v_size_x27_256_ = lean_nat_add(v_size_235_, v___x_255_);
lean_dec(v_size_235_);
v___x_257_ = lean_box(v_x3_232_);
lean_inc(v_bkt_253_);
v___x_258_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_258_, 0, v_a_234_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
lean_ctor_set(v___x_258_, 2, v_bkt_253_);
v_buckets_x27_259_ = lean_array_uset(v_buckets_236_, v___x_252_, v___x_258_);
v___x_260_ = lean_unsigned_to_nat(4u);
v___x_261_ = lean_nat_mul(v_size_x27_256_, v___x_260_);
v___x_262_ = lean_unsigned_to_nat(3u);
v___x_263_ = lean_nat_div(v___x_261_, v___x_262_);
lean_dec(v___x_261_);
v___x_264_ = lean_array_get_size(v_buckets_x27_259_);
v___x_265_ = lean_nat_dec_le(v___x_263_, v___x_264_);
lean_dec(v___x_263_);
if (v___x_265_ == 0)
{
lean_object* v_val_266_; lean_object* v___x_268_; 
v_val_266_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1___redArg(v_buckets_x27_259_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 1, v_val_266_);
lean_ctor_set(v___x_238_, 0, v_size_x27_256_);
v___x_268_ = v___x_238_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_size_x27_256_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_val_266_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
else
{
lean_object* v___x_271_; 
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 1, v_buckets_x27_259_);
lean_ctor_set(v___x_238_, 0, v_size_x27_256_);
v___x_271_ = v___x_238_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_size_x27_256_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_buckets_x27_259_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
else
{
lean_object* v___x_273_; lean_object* v_buckets_x27_274_; lean_object* v_bkt_x27_275_; lean_object* v___y_277_; uint8_t v___x_282_; 
lean_inc(v_bkt_253_);
v___x_273_ = lean_box(0);
v_buckets_x27_274_ = lean_array_uset(v_buckets_236_, v___x_252_, v___x_273_);
lean_inc(v_a_234_);
v_bkt_x27_275_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__2(v_x3_232_, v_a_234_, v_bkt_253_);
v___x_282_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___redArg(v_a_234_, v_bkt_x27_275_);
lean_dec(v_a_234_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lean_unsigned_to_nat(1u);
v___x_284_ = lean_nat_sub(v_size_235_, v___x_283_);
lean_dec(v_size_235_);
v___y_277_ = v___x_284_;
goto v___jp_276_;
}
else
{
v___y_277_ = v_size_235_;
goto v___jp_276_;
}
v___jp_276_:
{
lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_278_ = lean_array_uset(v_buckets_x27_274_, v___x_252_, v_bkt_x27_275_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 1, v___x_278_);
lean_ctor_set(v___x_238_, 0, v___y_277_);
v___x_280_ = v___x_238_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___y_277_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v___x_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0___boxed(lean_object* v_x3_286_, lean_object* v_m_287_, lean_object* v_a_288_){
_start:
{
uint8_t v_x3_935__boxed_289_; lean_object* v_res_290_; 
v_x3_935__boxed_289_ = lean_unbox(v_x3_286_);
v_res_290_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0(v_x3_935__boxed_289_, v_m_287_, v_a_288_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__1(lean_object* v_x_291_, lean_object* v_x_292_){
_start:
{
if (lean_obj_tag(v_x_292_) == 0)
{
return v_x_291_;
}
else
{
lean_object* v_key_293_; lean_object* v_value_294_; lean_object* v_tail_295_; uint8_t v___x_296_; lean_object* v___x_297_; 
v_key_293_ = lean_ctor_get(v_x_292_, 0);
lean_inc(v_key_293_);
v_value_294_ = lean_ctor_get(v_x_292_, 1);
lean_inc(v_value_294_);
v_tail_295_ = lean_ctor_get(v_x_292_, 2);
lean_inc(v_tail_295_);
lean_dec_ref_known(v_x_292_, 3);
v___x_296_ = lean_unbox(v_value_294_);
lean_dec(v_value_294_);
v___x_297_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0(v___x_296_, v_x_291_, v_key_293_);
v_x_291_ = v___x_297_;
v_x_292_ = v_tail_295_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__2(lean_object* v_as_299_, size_t v_i_300_, size_t v_stop_301_, lean_object* v_b_302_){
_start:
{
uint8_t v___x_303_; 
v___x_303_ = lean_usize_dec_eq(v_i_300_, v_stop_301_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; lean_object* v___x_305_; size_t v___x_306_; size_t v___x_307_; 
v___x_304_ = lean_array_uget_borrowed(v_as_299_, v_i_300_);
lean_inc(v___x_304_);
v___x_305_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__1(v_b_302_, v___x_304_);
v___x_306_ = ((size_t)1ULL);
v___x_307_ = lean_usize_add(v_i_300_, v___x_306_);
v_i_300_ = v___x_307_;
v_b_302_ = v___x_305_;
goto _start;
}
else
{
return v_b_302_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__2___boxed(lean_object* v_as_309_, lean_object* v_i_310_, lean_object* v_stop_311_, lean_object* v_b_312_){
_start:
{
size_t v_i_boxed_313_; size_t v_stop_boxed_314_; lean_object* v_res_315_; 
v_i_boxed_313_ = lean_unbox_usize(v_i_310_);
lean_dec(v_i_310_);
v_stop_boxed_314_ = lean_unbox_usize(v_stop_311_);
lean_dec(v_stop_311_);
v_res_315_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__2(v_as_309_, v_i_boxed_313_, v_stop_boxed_314_, v_b_312_);
lean_dec_ref(v_as_309_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_FVarUses_add(lean_object* v_a_316_, lean_object* v_b_317_){
_start:
{
lean_object* v_buckets_318_; lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; 
v_buckets_318_ = lean_ctor_get(v_a_316_, 1);
v___x_319_ = lean_unsigned_to_nat(0u);
v___x_320_ = lean_array_get_size(v_buckets_318_);
v___x_321_ = lean_nat_dec_lt(v___x_319_, v___x_320_);
if (v___x_321_ == 0)
{
return v_b_317_;
}
else
{
size_t v___x_322_; size_t v___x_323_; lean_object* v___x_324_; 
v___x_322_ = ((size_t)0ULL);
v___x_323_ = lean_usize_of_nat(v___x_320_);
v___x_324_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__2(v_buckets_318_, v___x_322_, v___x_323_, v_b_317_);
return v___x_324_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_FVarUses_add___boxed(lean_object* v_a_325_, lean_object* v_b_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Elab_Tactic_Do_FVarUses_add(v_a_325_, v_b_326_);
lean_dec_ref(v_a_325_);
return v_res_327_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0(lean_object* v_00_u03b2_328_, lean_object* v_a_329_, lean_object* v_x_330_){
_start:
{
uint8_t v___x_331_; 
v___x_331_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___redArg(v_a_329_, v_x_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___boxed(lean_object* v_00_u03b2_332_, lean_object* v_a_333_, lean_object* v_x_334_){
_start:
{
uint8_t v_res_335_; lean_object* v_r_336_; 
v_res_335_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0(v_00_u03b2_332_, v_a_333_, v_x_334_);
lean_dec(v_x_334_);
lean_dec(v_a_333_);
v_r_336_ = lean_box(v_res_335_);
return v_r_336_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1(lean_object* v_00_u03b2_337_, lean_object* v_data_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1___redArg(v_data_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_340_, lean_object* v_i_341_, lean_object* v_source_342_, lean_object* v_target_343_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2___redArg(v_i_341_, v_source_342_, v_target_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_345_, lean_object* v_x_346_, lean_object* v_x_347_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1_spec__2_spec__5___redArg(v_x_346_, v_x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorIdx___redArg(lean_object* v_x_351_){
_start:
{
if (lean_obj_tag(v_x_351_) == 0)
{
lean_object* v___x_352_; 
v___x_352_ = lean_unsigned_to_nat(0u);
return v___x_352_;
}
else
{
lean_object* v___x_353_; 
v___x_353_ = lean_unsigned_to_nat(1u);
return v___x_353_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorIdx___redArg___boxed(lean_object* v_x_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lean_Elab_Tactic_Do_BVarUses_ctorIdx___redArg(v_x_354_);
lean_dec(v_x_354_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorIdx(lean_object* v_n_356_, lean_object* v_x_357_){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = l_Lean_Elab_Tactic_Do_BVarUses_ctorIdx___redArg(v_x_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorIdx___boxed(lean_object* v_n_359_, lean_object* v_x_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Elab_Tactic_Do_BVarUses_ctorIdx(v_n_359_, v_x_360_);
lean_dec(v_x_360_);
lean_dec(v_n_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorElim___redArg(lean_object* v_t_362_, lean_object* v_k_363_){
_start:
{
if (lean_obj_tag(v_t_362_) == 0)
{
return v_k_363_;
}
else
{
lean_object* v_uses_364_; lean_object* v___x_365_; 
v_uses_364_ = lean_ctor_get(v_t_362_, 0);
lean_inc_ref(v_uses_364_);
lean_dec_ref_known(v_t_362_, 1);
v___x_365_ = lean_apply_1(v_k_363_, v_uses_364_);
return v___x_365_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorElim(lean_object* v_n_366_, lean_object* v_motive_367_, lean_object* v_ctorIdx_368_, lean_object* v_t_369_, lean_object* v_h_370_, lean_object* v_k_371_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = l_Lean_Elab_Tactic_Do_BVarUses_ctorElim___redArg(v_t_369_, v_k_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_ctorElim___boxed(lean_object* v_n_373_, lean_object* v_motive_374_, lean_object* v_ctorIdx_375_, lean_object* v_t_376_, lean_object* v_h_377_, lean_object* v_k_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lean_Elab_Tactic_Do_BVarUses_ctorElim(v_n_373_, v_motive_374_, v_ctorIdx_375_, v_t_376_, v_h_377_, v_k_378_);
lean_dec(v_ctorIdx_375_);
lean_dec(v_n_373_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_none_elim___redArg(lean_object* v_t_380_, lean_object* v_none_381_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = l_Lean_Elab_Tactic_Do_BVarUses_ctorElim___redArg(v_t_380_, v_none_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_none_elim(lean_object* v_n_383_, lean_object* v_motive_384_, lean_object* v_t_385_, lean_object* v_h_386_, lean_object* v_none_387_){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = l_Lean_Elab_Tactic_Do_BVarUses_ctorElim___redArg(v_t_385_, v_none_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_none_elim___boxed(lean_object* v_n_389_, lean_object* v_motive_390_, lean_object* v_t_391_, lean_object* v_h_392_, lean_object* v_none_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lean_Elab_Tactic_Do_BVarUses_none_elim(v_n_389_, v_motive_390_, v_t_391_, v_h_392_, v_none_393_);
lean_dec(v_n_389_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_some_elim___redArg(lean_object* v_t_395_, lean_object* v_some_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lean_Elab_Tactic_Do_BVarUses_ctorElim___redArg(v_t_395_, v_some_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_some_elim(lean_object* v_n_398_, lean_object* v_motive_399_, lean_object* v_t_400_, lean_object* v_h_401_, lean_object* v_some_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Lean_Elab_Tactic_Do_BVarUses_ctorElim___redArg(v_t_400_, v_some_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_some_elim___boxed(lean_object* v_n_404_, lean_object* v_motive_405_, lean_object* v_t_406_, lean_object* v_h_407_, lean_object* v_some_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_Elab_Tactic_Do_BVarUses_some_elim(v_n_404_, v_motive_405_, v_t_406_, v_h_407_, v_some_408_);
lean_dec(v_n_404_);
return v_res_409_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__13(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__12));
v___x_435_ = l_Lean_mkAtom(v___x_434_);
return v___x_435_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__14(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_436_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__13, &l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__13_once, _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__13);
v___x_437_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__5));
v___x_438_ = lean_array_push(v___x_437_, v___x_436_);
return v___x_438_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__15(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_439_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__14, &l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__14_once, _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__14);
v___x_440_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__11));
v___x_441_ = lean_box(2);
v___x_442_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v___x_440_);
lean_ctor_set(v___x_442_, 2, v___x_439_);
return v___x_442_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__16(void){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_443_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__15, &l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__15_once, _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__15);
v___x_444_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__5));
v___x_445_ = lean_array_push(v___x_444_, v___x_443_);
return v___x_445_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__17(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_446_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__16, &l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__16_once, _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__16);
v___x_447_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__9));
v___x_448_ = lean_box(2);
v___x_449_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
lean_ctor_set(v___x_449_, 1, v___x_447_);
lean_ctor_set(v___x_449_, 2, v___x_446_);
return v___x_449_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__18(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_450_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__17, &l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__17_once, _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__17);
v___x_451_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__5));
v___x_452_ = lean_array_push(v___x_451_, v___x_450_);
return v___x_452_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__19(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_453_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__18, &l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__18_once, _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__18);
v___x_454_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__7));
v___x_455_ = lean_box(2);
v___x_456_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
lean_ctor_set(v___x_456_, 1, v___x_454_);
lean_ctor_set(v___x_456_, 2, v___x_453_);
return v___x_456_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__20(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_457_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__19, &l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__19_once, _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__19);
v___x_458_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__5));
v___x_459_ = lean_array_push(v___x_458_, v___x_457_);
return v___x_459_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__21(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_460_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__20, &l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__20_once, _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__20);
v___x_461_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__4));
v___x_462_ = lean_box(2);
v___x_463_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
lean_ctor_set(v___x_463_, 1, v___x_461_);
lean_ctor_set(v___x_463_, 2, v___x_460_);
return v___x_463_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1(void){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__21, &l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__21_once, _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1___closed__21);
return v___x_464_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_BVarUses_single___redArg___lam__0(lean_object* v_numBVars_465_, lean_object* v_n_466_, lean_object* v_i_467_){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_468_ = lean_unsigned_to_nat(1u);
v___x_469_ = lean_nat_sub(v_numBVars_465_, v___x_468_);
v___x_470_ = lean_nat_sub(v___x_469_, v_n_466_);
lean_dec(v___x_469_);
v___x_471_ = lean_nat_dec_eq(v_i_467_, v___x_470_);
lean_dec(v___x_470_);
if (v___x_471_ == 0)
{
uint8_t v___x_472_; 
v___x_472_ = 0;
return v___x_472_;
}
else
{
uint8_t v___x_473_; 
v___x_473_ = 1;
return v___x_473_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___redArg___lam__0___boxed(lean_object* v_numBVars_474_, lean_object* v_n_475_, lean_object* v_i_476_){
_start:
{
uint8_t v_res_477_; lean_object* v_r_478_; 
v_res_477_ = l_Lean_Elab_Tactic_Do_BVarUses_single___redArg___lam__0(v_numBVars_474_, v_n_475_, v_i_476_);
lean_dec(v_i_476_);
lean_dec(v_n_475_);
lean_dec(v_numBVars_474_);
v_r_478_ = lean_box(v_res_477_);
return v_r_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single___redArg(lean_object* v_numBVars_479_, lean_object* v_n_480_){
_start:
{
lean_object* v___f_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
lean_inc(v_numBVars_479_);
v___f_481_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_BVarUses_single___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_481_, 0, v_numBVars_479_);
lean_closure_set(v___f_481_, 1, v_n_480_);
v___x_482_ = l_Array_ofFn___redArg(v_numBVars_479_, v___f_481_);
v___x_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_single(lean_object* v_numBVars_484_, lean_object* v_n_485_, lean_object* v_x_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l_Lean_Elab_Tactic_Do_BVarUses_single___redArg(v_numBVars_484_, v_n_485_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_pop(lean_object* v_numBVars_492_, lean_object* v_x_493_){
_start:
{
if (lean_obj_tag(v_x_493_) == 0)
{
lean_object* v___x_494_; 
v___x_494_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_BVarUses_pop___closed__0));
return v___x_494_;
}
else
{
lean_object* v_uses_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_508_; 
v_uses_495_ = lean_ctor_get(v_x_493_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v_x_493_);
if (v_isSharedCheck_508_ == 0)
{
v___x_497_ = v_x_493_;
v_isShared_498_ = v_isSharedCheck_508_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_uses_495_);
lean_dec(v_x_493_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_508_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_499_ = lean_unsigned_to_nat(1u);
v___x_500_ = lean_nat_add(v_numBVars_492_, v___x_499_);
v___x_501_ = lean_nat_sub(v___x_500_, v___x_499_);
lean_dec(v___x_500_);
v___x_502_ = lean_array_fget(v_uses_495_, v___x_501_);
lean_dec(v___x_501_);
v___x_503_ = lean_array_pop(v_uses_495_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 0, v___x_503_);
v___x_505_ = v___x_497_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_503_);
v___x_505_ = v_reuseFailAlloc_507_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
lean_object* v___x_506_; 
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_502_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
return v___x_506_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_pop___boxed(lean_object* v_numBVars_509_, lean_object* v_x_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Lean_Elab_Tactic_Do_BVarUses_pop(v_numBVars_509_, v_x_510_);
lean_dec(v_numBVars_509_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Tactic_Do_BVarUses_add_spec__0(lean_object* v_as_512_, lean_object* v_bs_513_, lean_object* v_i_514_, lean_object* v_cs_515_){
_start:
{
lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_516_ = lean_array_get_size(v_as_512_);
v___x_517_ = lean_nat_dec_lt(v_i_514_, v___x_516_);
if (v___x_517_ == 0)
{
lean_dec(v_i_514_);
return v_cs_515_;
}
else
{
lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_518_ = lean_array_get_size(v_bs_513_);
v___x_519_ = lean_nat_dec_lt(v_i_514_, v___x_518_);
if (v___x_519_ == 0)
{
lean_dec(v_i_514_);
return v_cs_515_;
}
else
{
lean_object* v_a_520_; lean_object* v_b_521_; uint8_t v___x_522_; uint8_t v___x_523_; uint8_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v_a_520_ = lean_array_fget_borrowed(v_as_512_, v_i_514_);
v_b_521_ = lean_array_fget_borrowed(v_bs_513_, v_i_514_);
v___x_522_ = lean_unbox(v_a_520_);
v___x_523_ = lean_unbox(v_b_521_);
v___x_524_ = l_Lean_Elab_Tactic_Do_Uses_add(v___x_522_, v___x_523_);
v___x_525_ = lean_unsigned_to_nat(1u);
v___x_526_ = lean_nat_add(v_i_514_, v___x_525_);
lean_dec(v_i_514_);
v___x_527_ = lean_box(v___x_524_);
v___x_528_ = lean_array_push(v_cs_515_, v___x_527_);
v_i_514_ = v___x_526_;
v_cs_515_ = v___x_528_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Tactic_Do_BVarUses_add_spec__0___boxed(lean_object* v_as_530_, lean_object* v_bs_531_, lean_object* v_i_532_, lean_object* v_cs_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Array_zipWithMAux___at___00Lean_Elab_Tactic_Do_BVarUses_add_spec__0(v_as_530_, v_bs_531_, v_i_532_, v_cs_533_);
lean_dec_ref(v_bs_531_);
lean_dec_ref(v_as_530_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_add___redArg(lean_object* v_a_537_, lean_object* v_b_538_){
_start:
{
if (lean_obj_tag(v_a_537_) == 0)
{
return v_b_538_;
}
else
{
if (lean_obj_tag(v_b_538_) == 0)
{
lean_object* v_uses_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_546_; 
v_uses_539_ = lean_ctor_get(v_a_537_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v_a_537_);
if (v_isSharedCheck_546_ == 0)
{
v___x_541_ = v_a_537_;
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_uses_539_);
lean_dec(v_a_537_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_544_; 
if (v_isShared_542_ == 0)
{
v___x_544_ = v___x_541_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_uses_539_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
else
{
lean_object* v_uses_547_; lean_object* v_uses_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_558_; 
v_uses_547_ = lean_ctor_get(v_a_537_, 0);
lean_inc_ref(v_uses_547_);
lean_dec_ref_known(v_a_537_, 1);
v_uses_548_ = lean_ctor_get(v_b_538_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v_b_538_);
if (v_isSharedCheck_558_ == 0)
{
v___x_550_ = v_b_538_;
v_isShared_551_ = v_isSharedCheck_558_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_uses_548_);
lean_dec(v_b_538_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_558_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_552_ = lean_unsigned_to_nat(0u);
v___x_553_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_BVarUses_add___redArg___closed__0));
v___x_554_ = l_Array_zipWithMAux___at___00Lean_Elab_Tactic_Do_BVarUses_add_spec__0(v_uses_547_, v_uses_548_, v___x_552_, v___x_553_);
lean_dec_ref(v_uses_548_);
lean_dec_ref(v_uses_547_);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 0, v___x_554_);
v___x_556_ = v___x_550_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v___x_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_add(lean_object* v_numBVars_559_, lean_object* v_a_560_, lean_object* v_b_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = l_Lean_Elab_Tactic_Do_BVarUses_add___redArg(v_a_560_, v_b_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_BVarUses_add___boxed(lean_object* v_numBVars_563_, lean_object* v_a_564_, lean_object* v_b_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_Elab_Tactic_Do_BVarUses_add(v_numBVars_563_, v_a_564_, v_b_565_);
lean_dec(v_numBVars_563_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instAddBVarUses(lean_object* v_numBVars_567_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_BVarUses_add___boxed), 3, 1);
lean_closure_set(v___x_568_, 0, v_numBVars_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_over1Of2___redArg(lean_object* v_f_569_, lean_object* v_x_570_){
_start:
{
lean_object* v_fst_571_; lean_object* v_snd_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_580_; 
v_fst_571_ = lean_ctor_get(v_x_570_, 0);
v_snd_572_ = lean_ctor_get(v_x_570_, 1);
v_isSharedCheck_580_ = !lean_is_exclusive(v_x_570_);
if (v_isSharedCheck_580_ == 0)
{
v___x_574_ = v_x_570_;
v_isShared_575_ = v_isSharedCheck_580_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_snd_572_);
lean_inc(v_fst_571_);
lean_dec(v_x_570_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_580_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_576_; lean_object* v___x_578_; 
v___x_576_ = lean_apply_1(v_f_569_, v_fst_571_);
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 0, v___x_576_);
v___x_578_ = v___x_574_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_snd_572_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_over1Of2(lean_object* v_00_u03b1_u2081_581_, lean_object* v_00_u03b1_u2082_582_, lean_object* v_00_u03b2_583_, lean_object* v_f_584_, lean_object* v_x_585_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lean_Elab_Tactic_Do_over1Of2___redArg(v_f_584_, v_x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_addMData___lam__0(lean_object* v_x_587_, lean_object* v_new_588_, lean_object* v_x_589_){
_start:
{
lean_inc_ref(v_new_588_);
return v_new_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_addMData___lam__0___boxed(lean_object* v_x_590_, lean_object* v_new_591_, lean_object* v_x_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_Elab_Tactic_Do_addMData___lam__0(v_x_590_, v_new_591_, v_x_592_);
lean_dec_ref(v_x_592_);
lean_dec_ref(v_new_591_);
lean_dec(v_x_590_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_addMData(lean_object* v_d_595_, lean_object* v_e_596_){
_start:
{
if (lean_obj_tag(v_e_596_) == 10)
{
lean_object* v_data_597_; lean_object* v_expr_598_; lean_object* v___f_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v_data_597_ = lean_ctor_get(v_e_596_, 0);
lean_inc(v_data_597_);
v_expr_598_ = lean_ctor_get(v_e_596_, 1);
lean_inc_ref(v_expr_598_);
lean_dec_ref_known(v_e_596_, 2);
v___f_599_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_addMData___closed__0));
v___x_600_ = l_Lean_KVMap_mergeBy(v___f_599_, v_d_595_, v_data_597_);
lean_dec(v_data_597_);
v___x_601_ = l_Lean_Expr_mdata___override(v___x_600_, v_expr_598_);
return v___x_601_;
}
else
{
lean_object* v___x_602_; 
v___x_602_ = l_Lean_Expr_mdata___override(v_d_595_, v_e_596_);
return v___x_602_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_LetElim_0__Lean_Elab_Tactic_Do_okToDup(lean_object* v_e_603_){
_start:
{
uint8_t v___y_605_; 
switch(lean_obj_tag(v_e_603_))
{
case 1:
{
uint8_t v___x_607_; 
v___x_607_ = 0;
return v___x_607_;
}
case 5:
{
uint8_t v___x_608_; 
v___x_608_ = l_Lean_Meta_Simp_isOfNatNatLit(v_e_603_);
if (v___x_608_ == 0)
{
uint8_t v___x_609_; 
v___x_609_ = l_Lean_Meta_Simp_isOfScientificLit(v_e_603_);
v___y_605_ = v___x_609_;
goto v___jp_604_;
}
else
{
v___y_605_ = v___x_608_;
goto v___jp_604_;
}
}
case 6:
{
uint8_t v___x_610_; 
v___x_610_ = 0;
return v___x_610_;
}
case 7:
{
uint8_t v___x_611_; 
v___x_611_ = 0;
return v___x_611_;
}
case 8:
{
uint8_t v___x_612_; 
v___x_612_ = 0;
return v___x_612_;
}
case 10:
{
lean_object* v_expr_613_; 
v_expr_613_ = lean_ctor_get(v_e_603_, 1);
v_e_603_ = v_expr_613_;
goto _start;
}
case 11:
{
lean_object* v_struct_615_; 
v_struct_615_ = lean_ctor_get(v_e_603_, 2);
v_e_603_ = v_struct_615_;
goto _start;
}
default: 
{
uint8_t v___x_617_; 
v___x_617_ = 1;
return v___x_617_;
}
}
v___jp_604_:
{
if (v___y_605_ == 0)
{
uint8_t v___x_606_; 
v___x_606_ = l_Lean_Meta_Simp_isCharLit(v_e_603_);
return v___x_606_;
}
else
{
return v___y_605_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_LetElim_0__Lean_Elab_Tactic_Do_okToDup___boxed(lean_object* v_e_618_){
_start:
{
uint8_t v_res_619_; lean_object* v_r_620_; 
v_res_619_ = l___private_Lean_Elab_Tactic_Do_LetElim_0__Lean_Elab_Tactic_Do_okToDup(v_e_618_);
lean_dec_ref(v_e_618_);
v_r_620_ = lean_box(v_res_619_);
return v_r_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUsesDecl___lam__0(lean_object* v_val_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_622_, 0, v_val_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3_spec__5(lean_object* v_msgData_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
lean_object* v___x_629_; lean_object* v_env_630_; lean_object* v___x_631_; lean_object* v_toCold_632_; lean_object* v_mctx_633_; lean_object* v_lctx_634_; lean_object* v_options_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_629_ = lean_st_ref_get(v___y_627_);
v_env_630_ = lean_ctor_get(v___x_629_, 0);
lean_inc_ref(v_env_630_);
lean_dec(v___x_629_);
v___x_631_ = lean_st_ref_get(v___y_625_);
v_toCold_632_ = lean_ctor_get(v___y_626_, 0);
v_mctx_633_ = lean_ctor_get(v___x_631_, 0);
lean_inc_ref(v_mctx_633_);
lean_dec(v___x_631_);
v_lctx_634_ = lean_ctor_get(v___y_624_, 2);
v_options_635_ = lean_ctor_get(v_toCold_632_, 2);
lean_inc_ref(v_options_635_);
lean_inc_ref(v_lctx_634_);
v___x_636_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_636_, 0, v_env_630_);
lean_ctor_set(v___x_636_, 1, v_mctx_633_);
lean_ctor_set(v___x_636_, 2, v_lctx_634_);
lean_ctor_set(v___x_636_, 3, v_options_635_);
v___x_637_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
lean_ctor_set(v___x_637_, 1, v_msgData_623_);
v___x_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3_spec__5___boxed(lean_object* v_msgData_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3_spec__5(v_msgData_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3___redArg(lean_object* v_msg_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_){
_start:
{
lean_object* v_ref_652_; lean_object* v___x_653_; lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_662_; 
v_ref_652_ = lean_ctor_get(v___y_649_, 2);
v___x_653_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3_spec__5(v_msg_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_);
v_a_654_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_662_ == 0)
{
v___x_656_ = v___x_653_;
v_isShared_657_ = v_isSharedCheck_662_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_653_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_662_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_658_; lean_object* v___x_660_; 
lean_inc(v_ref_652_);
v___x_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_658_, 0, v_ref_652_);
lean_ctor_set(v___x_658_, 1, v_a_654_);
if (v_isShared_657_ == 0)
{
lean_ctor_set_tag(v___x_656_, 1);
lean_ctor_set(v___x_656_, 0, v___x_658_);
v___x_660_ = v___x_656_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_658_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3___redArg___boxed(lean_object* v_msg_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3___redArg(v_msg_663_, v___y_664_, v___y_665_, v___y_666_, v___y_667_);
lean_dec(v___y_667_);
lean_dec_ref(v___y_666_);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUses___lam__0(lean_object* v_data_670_, lean_object* v_expr_671_){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l_Lean_Expr_mdata___override(v_data_670_, v_expr_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUses___lam__1(lean_object* v_typeName_673_, lean_object* v_idx_674_, lean_object* v_struct_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Lean_Expr_proj___override(v_typeName_673_, v_idx_674_, v_struct_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4_spec__7___redArg(lean_object* v_a_677_, lean_object* v_b_678_, lean_object* v_x_679_){
_start:
{
if (lean_obj_tag(v_x_679_) == 0)
{
lean_dec(v_b_678_);
lean_dec(v_a_677_);
return v_x_679_;
}
else
{
lean_object* v_key_680_; lean_object* v_value_681_; lean_object* v_tail_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_694_; 
v_key_680_ = lean_ctor_get(v_x_679_, 0);
v_value_681_ = lean_ctor_get(v_x_679_, 1);
v_tail_682_ = lean_ctor_get(v_x_679_, 2);
v_isSharedCheck_694_ = !lean_is_exclusive(v_x_679_);
if (v_isSharedCheck_694_ == 0)
{
v___x_684_ = v_x_679_;
v_isShared_685_ = v_isSharedCheck_694_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_tail_682_);
lean_inc(v_value_681_);
lean_inc(v_key_680_);
lean_dec(v_x_679_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_694_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
uint8_t v___x_686_; 
v___x_686_ = l_Lean_instBEqFVarId_beq(v_key_680_, v_a_677_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; lean_object* v___x_689_; 
v___x_687_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4_spec__7___redArg(v_a_677_, v_b_678_, v_tail_682_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 2, v___x_687_);
v___x_689_ = v___x_684_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_key_680_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v_value_681_);
lean_ctor_set(v_reuseFailAlloc_690_, 2, v___x_687_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
else
{
lean_object* v___x_692_; 
lean_dec(v_value_681_);
lean_dec(v_key_680_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 1, v_b_678_);
lean_ctor_set(v___x_684_, 0, v_a_677_);
v___x_692_ = v___x_684_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_677_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_b_678_);
lean_ctor_set(v_reuseFailAlloc_693_, 2, v_tail_682_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4___redArg(lean_object* v_m_695_, lean_object* v_a_696_, lean_object* v_b_697_){
_start:
{
lean_object* v_size_698_; lean_object* v_buckets_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_742_; 
v_size_698_ = lean_ctor_get(v_m_695_, 0);
v_buckets_699_ = lean_ctor_get(v_m_695_, 1);
v_isSharedCheck_742_ = !lean_is_exclusive(v_m_695_);
if (v_isSharedCheck_742_ == 0)
{
v___x_701_ = v_m_695_;
v_isShared_702_ = v_isSharedCheck_742_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_buckets_699_);
lean_inc(v_size_698_);
lean_dec(v_m_695_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_742_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_703_; uint64_t v___x_704_; uint64_t v___x_705_; uint64_t v___x_706_; uint64_t v_fold_707_; uint64_t v___x_708_; uint64_t v___x_709_; uint64_t v___x_710_; size_t v___x_711_; size_t v___x_712_; size_t v___x_713_; size_t v___x_714_; size_t v___x_715_; lean_object* v_bkt_716_; uint8_t v___x_717_; 
v___x_703_ = lean_array_get_size(v_buckets_699_);
v___x_704_ = l_Lean_instHashableFVarId_hash(v_a_696_);
v___x_705_ = 32ULL;
v___x_706_ = lean_uint64_shift_right(v___x_704_, v___x_705_);
v_fold_707_ = lean_uint64_xor(v___x_704_, v___x_706_);
v___x_708_ = 16ULL;
v___x_709_ = lean_uint64_shift_right(v_fold_707_, v___x_708_);
v___x_710_ = lean_uint64_xor(v_fold_707_, v___x_709_);
v___x_711_ = lean_uint64_to_usize(v___x_710_);
v___x_712_ = lean_usize_of_nat(v___x_703_);
v___x_713_ = ((size_t)1ULL);
v___x_714_ = lean_usize_sub(v___x_712_, v___x_713_);
v___x_715_ = lean_usize_land(v___x_711_, v___x_714_);
v_bkt_716_ = lean_array_uget_borrowed(v_buckets_699_, v___x_715_);
v___x_717_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___redArg(v_a_696_, v_bkt_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; lean_object* v_size_x27_719_; lean_object* v___x_720_; lean_object* v_buckets_x27_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; uint8_t v___x_727_; 
v___x_718_ = lean_unsigned_to_nat(1u);
v_size_x27_719_ = lean_nat_add(v_size_698_, v___x_718_);
lean_dec(v_size_698_);
lean_inc(v_bkt_716_);
v___x_720_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_720_, 0, v_a_696_);
lean_ctor_set(v___x_720_, 1, v_b_697_);
lean_ctor_set(v___x_720_, 2, v_bkt_716_);
v_buckets_x27_721_ = lean_array_uset(v_buckets_699_, v___x_715_, v___x_720_);
v___x_722_ = lean_unsigned_to_nat(4u);
v___x_723_ = lean_nat_mul(v_size_x27_719_, v___x_722_);
v___x_724_ = lean_unsigned_to_nat(3u);
v___x_725_ = lean_nat_div(v___x_723_, v___x_724_);
lean_dec(v___x_723_);
v___x_726_ = lean_array_get_size(v_buckets_x27_721_);
v___x_727_ = lean_nat_dec_le(v___x_725_, v___x_726_);
lean_dec(v___x_725_);
if (v___x_727_ == 0)
{
lean_object* v_val_728_; lean_object* v___x_730_; 
v_val_728_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__1___redArg(v_buckets_x27_721_);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 1, v_val_728_);
lean_ctor_set(v___x_701_, 0, v_size_x27_719_);
v___x_730_ = v___x_701_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_size_x27_719_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_val_728_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
else
{
lean_object* v___x_733_; 
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 1, v_buckets_x27_721_);
lean_ctor_set(v___x_701_, 0, v_size_x27_719_);
v___x_733_ = v___x_701_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_size_x27_719_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_buckets_x27_721_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
else
{
lean_object* v___x_735_; lean_object* v_buckets_x27_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
lean_inc(v_bkt_716_);
v___x_735_ = lean_box(0);
v_buckets_x27_736_ = lean_array_uset(v_buckets_699_, v___x_715_, v___x_735_);
v___x_737_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4_spec__7___redArg(v_a_696_, v_b_697_, v_bkt_716_);
v___x_738_ = lean_array_uset(v_buckets_x27_736_, v___x_715_, v___x_737_);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 1, v___x_738_);
v___x_740_ = v___x_701_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_size_698_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v___x_738_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9___redArg(lean_object* v___y_743_){
_start:
{
lean_object* v___x_745_; lean_object* v_ngen_746_; lean_object* v_namePrefix_747_; lean_object* v_idx_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_777_; 
v___x_745_ = lean_st_ref_get(v___y_743_);
v_ngen_746_ = lean_ctor_get(v___x_745_, 2);
lean_inc_ref(v_ngen_746_);
lean_dec(v___x_745_);
v_namePrefix_747_ = lean_ctor_get(v_ngen_746_, 0);
v_idx_748_ = lean_ctor_get(v_ngen_746_, 1);
v_isSharedCheck_777_ = !lean_is_exclusive(v_ngen_746_);
if (v_isSharedCheck_777_ == 0)
{
v___x_750_ = v_ngen_746_;
v_isShared_751_ = v_isSharedCheck_777_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_idx_748_);
lean_inc(v_namePrefix_747_);
lean_dec(v_ngen_746_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_777_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v_r_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_756_; 
lean_inc(v_idx_748_);
lean_inc(v_namePrefix_747_);
v_r_752_ = l_Lean_Name_num___override(v_namePrefix_747_, v_idx_748_);
v___x_753_ = lean_unsigned_to_nat(1u);
v___x_754_ = lean_nat_add(v_idx_748_, v___x_753_);
lean_dec(v_idx_748_);
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 1, v___x_754_);
v___x_756_ = v___x_750_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_namePrefix_747_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v___x_754_);
v___x_756_ = v_reuseFailAlloc_776_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
lean_object* v___x_757_; lean_object* v_env_758_; lean_object* v_nextMacroScope_759_; lean_object* v_auxDeclNGen_760_; lean_object* v_traceState_761_; lean_object* v_cache_762_; lean_object* v_messages_763_; lean_object* v_infoState_764_; lean_object* v_snapshotTasks_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_774_; 
v___x_757_ = lean_st_ref_take(v___y_743_);
v_env_758_ = lean_ctor_get(v___x_757_, 0);
v_nextMacroScope_759_ = lean_ctor_get(v___x_757_, 1);
v_auxDeclNGen_760_ = lean_ctor_get(v___x_757_, 3);
v_traceState_761_ = lean_ctor_get(v___x_757_, 4);
v_cache_762_ = lean_ctor_get(v___x_757_, 5);
v_messages_763_ = lean_ctor_get(v___x_757_, 6);
v_infoState_764_ = lean_ctor_get(v___x_757_, 7);
v_snapshotTasks_765_ = lean_ctor_get(v___x_757_, 8);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; 
v_unused_775_ = lean_ctor_get(v___x_757_, 2);
lean_dec(v_unused_775_);
v___x_767_ = v___x_757_;
v_isShared_768_ = v_isSharedCheck_774_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_snapshotTasks_765_);
lean_inc(v_infoState_764_);
lean_inc(v_messages_763_);
lean_inc(v_cache_762_);
lean_inc(v_traceState_761_);
lean_inc(v_auxDeclNGen_760_);
lean_inc(v_nextMacroScope_759_);
lean_inc(v_env_758_);
lean_dec(v___x_757_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_774_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 2, v___x_756_);
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_env_758_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_nextMacroScope_759_);
lean_ctor_set(v_reuseFailAlloc_773_, 2, v___x_756_);
lean_ctor_set(v_reuseFailAlloc_773_, 3, v_auxDeclNGen_760_);
lean_ctor_set(v_reuseFailAlloc_773_, 4, v_traceState_761_);
lean_ctor_set(v_reuseFailAlloc_773_, 5, v_cache_762_);
lean_ctor_set(v_reuseFailAlloc_773_, 6, v_messages_763_);
lean_ctor_set(v_reuseFailAlloc_773_, 7, v_infoState_764_);
lean_ctor_set(v_reuseFailAlloc_773_, 8, v_snapshotTasks_765_);
v___x_770_ = v_reuseFailAlloc_773_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = lean_st_ref_put(v___y_743_, v___x_770_);
v___x_772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_772_, 0, v_r_752_);
return v___x_772_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9___redArg___boxed(lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9___redArg(v___y_778_);
lean_dec(v___y_778_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5(lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v___x_786_; lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
v___x_786_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9___redArg(v___y_784_);
v_a_787_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v___x_786_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_786_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_787_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5___boxed(lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5(v___y_795_, v___y_796_, v___y_797_, v___y_798_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2___redArg(lean_object* v_a_801_, lean_object* v_x_802_){
_start:
{
if (lean_obj_tag(v_x_802_) == 0)
{
return v_x_802_;
}
else
{
lean_object* v_key_803_; lean_object* v_value_804_; lean_object* v_tail_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_814_; 
v_key_803_ = lean_ctor_get(v_x_802_, 0);
v_value_804_ = lean_ctor_get(v_x_802_, 1);
v_tail_805_ = lean_ctor_get(v_x_802_, 2);
v_isSharedCheck_814_ = !lean_is_exclusive(v_x_802_);
if (v_isSharedCheck_814_ == 0)
{
v___x_807_ = v_x_802_;
v_isShared_808_ = v_isSharedCheck_814_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_tail_805_);
lean_inc(v_value_804_);
lean_inc(v_key_803_);
lean_dec(v_x_802_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_814_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
uint8_t v___x_809_; 
v___x_809_ = l_Lean_instBEqFVarId_beq(v_key_803_, v_a_801_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_810_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2___redArg(v_a_801_, v_tail_805_);
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 2, v___x_810_);
v___x_812_ = v___x_807_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_key_803_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v_value_804_);
lean_ctor_set(v_reuseFailAlloc_813_, 2, v___x_810_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
else
{
lean_del_object(v___x_807_);
lean_dec(v_value_804_);
lean_dec(v_key_803_);
return v_tail_805_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2___redArg___boxed(lean_object* v_a_815_, lean_object* v_x_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2___redArg(v_a_815_, v_x_816_);
lean_dec(v_a_815_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1___redArg(lean_object* v_m_818_, lean_object* v_a_819_){
_start:
{
lean_object* v_size_820_; lean_object* v_buckets_821_; lean_object* v___x_822_; uint64_t v___x_823_; uint64_t v___x_824_; uint64_t v___x_825_; uint64_t v_fold_826_; uint64_t v___x_827_; uint64_t v___x_828_; uint64_t v___x_829_; size_t v___x_830_; size_t v___x_831_; size_t v___x_832_; size_t v___x_833_; size_t v___x_834_; lean_object* v_bkt_835_; uint8_t v___x_836_; 
v_size_820_ = lean_ctor_get(v_m_818_, 0);
v_buckets_821_ = lean_ctor_get(v_m_818_, 1);
v___x_822_ = lean_array_get_size(v_buckets_821_);
v___x_823_ = l_Lean_instHashableFVarId_hash(v_a_819_);
v___x_824_ = 32ULL;
v___x_825_ = lean_uint64_shift_right(v___x_823_, v___x_824_);
v_fold_826_ = lean_uint64_xor(v___x_823_, v___x_825_);
v___x_827_ = 16ULL;
v___x_828_ = lean_uint64_shift_right(v_fold_826_, v___x_827_);
v___x_829_ = lean_uint64_xor(v_fold_826_, v___x_828_);
v___x_830_ = lean_uint64_to_usize(v___x_829_);
v___x_831_ = lean_usize_of_nat(v___x_822_);
v___x_832_ = ((size_t)1ULL);
v___x_833_ = lean_usize_sub(v___x_831_, v___x_832_);
v___x_834_ = lean_usize_land(v___x_830_, v___x_833_);
v_bkt_835_ = lean_array_uget_borrowed(v_buckets_821_, v___x_834_);
v___x_836_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Elab_Tactic_Do_FVarUses_add_spec__0_spec__0___redArg(v_a_819_, v_bkt_835_);
if (v___x_836_ == 0)
{
return v_m_818_;
}
else
{
lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_849_; 
lean_inc(v_bkt_835_);
lean_inc_ref(v_buckets_821_);
lean_inc(v_size_820_);
v_isSharedCheck_849_ = !lean_is_exclusive(v_m_818_);
if (v_isSharedCheck_849_ == 0)
{
lean_object* v_unused_850_; lean_object* v_unused_851_; 
v_unused_850_ = lean_ctor_get(v_m_818_, 1);
lean_dec(v_unused_850_);
v_unused_851_ = lean_ctor_get(v_m_818_, 0);
lean_dec(v_unused_851_);
v___x_838_ = v_m_818_;
v_isShared_839_ = v_isSharedCheck_849_;
goto v_resetjp_837_;
}
else
{
lean_dec(v_m_818_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_849_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v_buckets_x27_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
v___x_840_ = lean_box(0);
v_buckets_x27_841_ = lean_array_uset(v_buckets_821_, v___x_834_, v___x_840_);
v___x_842_ = lean_unsigned_to_nat(1u);
v___x_843_ = lean_nat_sub(v_size_820_, v___x_842_);
lean_dec(v_size_820_);
v___x_844_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2___redArg(v_a_819_, v_bkt_835_);
v___x_845_ = lean_array_uset(v_buckets_x27_841_, v___x_834_, v___x_844_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 1, v___x_845_);
lean_ctor_set(v___x_838_, 0, v___x_843_);
v___x_847_ = v___x_838_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_843_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v___x_845_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1___redArg___boxed(lean_object* v_m_852_, lean_object* v_a_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1___redArg(v_m_852_, v_a_853_);
lean_dec(v_a_853_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0___redArg(lean_object* v_a_855_, lean_object* v_fallback_856_, lean_object* v_x_857_){
_start:
{
if (lean_obj_tag(v_x_857_) == 0)
{
lean_inc(v_fallback_856_);
return v_fallback_856_;
}
else
{
lean_object* v_key_858_; lean_object* v_value_859_; lean_object* v_tail_860_; uint8_t v___x_861_; 
v_key_858_ = lean_ctor_get(v_x_857_, 0);
v_value_859_ = lean_ctor_get(v_x_857_, 1);
v_tail_860_ = lean_ctor_get(v_x_857_, 2);
v___x_861_ = l_Lean_instBEqFVarId_beq(v_key_858_, v_a_855_);
if (v___x_861_ == 0)
{
v_x_857_ = v_tail_860_;
goto _start;
}
else
{
lean_inc(v_value_859_);
return v_value_859_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0___redArg___boxed(lean_object* v_a_863_, lean_object* v_fallback_864_, lean_object* v_x_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0___redArg(v_a_863_, v_fallback_864_, v_x_865_);
lean_dec(v_x_865_);
lean_dec(v_fallback_864_);
lean_dec(v_a_863_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0___redArg(lean_object* v_m_867_, lean_object* v_a_868_, lean_object* v_fallback_869_){
_start:
{
lean_object* v_buckets_870_; lean_object* v___x_871_; uint64_t v___x_872_; uint64_t v___x_873_; uint64_t v___x_874_; uint64_t v_fold_875_; uint64_t v___x_876_; uint64_t v___x_877_; uint64_t v___x_878_; size_t v___x_879_; size_t v___x_880_; size_t v___x_881_; size_t v___x_882_; size_t v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v_buckets_870_ = lean_ctor_get(v_m_867_, 1);
v___x_871_ = lean_array_get_size(v_buckets_870_);
v___x_872_ = l_Lean_instHashableFVarId_hash(v_a_868_);
v___x_873_ = 32ULL;
v___x_874_ = lean_uint64_shift_right(v___x_872_, v___x_873_);
v_fold_875_ = lean_uint64_xor(v___x_872_, v___x_874_);
v___x_876_ = 16ULL;
v___x_877_ = lean_uint64_shift_right(v_fold_875_, v___x_876_);
v___x_878_ = lean_uint64_xor(v_fold_875_, v___x_877_);
v___x_879_ = lean_uint64_to_usize(v___x_878_);
v___x_880_ = lean_usize_of_nat(v___x_871_);
v___x_881_ = ((size_t)1ULL);
v___x_882_ = lean_usize_sub(v___x_880_, v___x_881_);
v___x_883_ = lean_usize_land(v___x_879_, v___x_882_);
v___x_884_ = lean_array_uget_borrowed(v_buckets_870_, v___x_883_);
v___x_885_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0___redArg(v_a_868_, v_fallback_869_, v___x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0___redArg___boxed(lean_object* v_m_886_, lean_object* v_a_887_, lean_object* v_fallback_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0___redArg(v_m_886_, v_a_887_, v_fallback_888_);
lean_dec(v_fallback_888_);
lean_dec(v_a_887_);
lean_dec_ref(v_m_886_);
return v_res_889_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_countUsesDecl___closed__3(void){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_894_ = lean_box(0);
v___x_895_ = lean_unsigned_to_nat(16u);
v___x_896_ = lean_mk_array(v___x_895_, v___x_894_);
return v___x_896_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_897_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_countUsesDecl___closed__3, &l_Lean_Elab_Tactic_Do_countUsesDecl___closed__3_once, _init_l_Lean_Elab_Tactic_Do_countUsesDecl___closed__3);
v___x_898_ = lean_unsigned_to_nat(0u);
v___x_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
lean_ctor_set(v___x_899_, 1, v___x_897_);
return v___x_899_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_countUses___closed__1(void){
_start:
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_countUses___closed__0));
v___x_902_ = l_Lean_stringToMessageData(v___x_901_);
return v___x_902_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_countUses___closed__3(void){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_countUses___closed__2));
v___x_905_ = l_Lean_stringToMessageData(v___x_904_);
return v___x_905_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_countUses___closed__5(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_907_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_countUses___closed__4));
v___x_908_ = l_Lean_stringToMessageData(v___x_907_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUses(lean_object* v_e_909_, lean_object* v_subst_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_){
_start:
{
switch(lean_obj_tag(v_e_909_))
{
case 0:
{
lean_object* v_deBruijnIndex_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v_deBruijnIndex_916_ = lean_ctor_get(v_e_909_, 0);
v___x_917_ = lean_array_get_size(v_subst_910_);
v___x_918_ = lean_nat_dec_lt(v_deBruijnIndex_916_, v___x_917_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
lean_inc(v_deBruijnIndex_916_);
lean_dec_ref_known(v_e_909_, 1);
lean_dec_ref(v_subst_910_);
v___x_919_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_countUses___closed__1, &l_Lean_Elab_Tactic_Do_countUses___closed__1_once, _init_l_Lean_Elab_Tactic_Do_countUses___closed__1);
v___x_920_ = l_Nat_reprFast(v_deBruijnIndex_916_);
v___x_921_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
v___x_922_ = l_Lean_MessageData_ofFormat(v___x_921_);
v___x_923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_919_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
v___x_924_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_countUses___closed__3, &l_Lean_Elab_Tactic_Do_countUses___closed__3_once, _init_l_Lean_Elab_Tactic_Do_countUses___closed__3);
v___x_925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_925_, 0, v___x_923_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
v___x_926_ = l_Nat_reprFast(v___x_917_);
v___x_927_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_927_, 0, v___x_926_);
v___x_928_ = l_Lean_MessageData_ofFormat(v___x_927_);
v___x_929_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_929_, 0, v___x_925_);
lean_ctor_set(v___x_929_, 1, v___x_928_);
v___x_930_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3___redArg(v___x_929_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
return v___x_930_;
}
else
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; uint8_t v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_931_ = lean_unsigned_to_nat(1u);
v___x_932_ = lean_nat_sub(v___x_917_, v___x_931_);
v___x_933_ = lean_nat_sub(v___x_932_, v_deBruijnIndex_916_);
lean_dec(v___x_932_);
v___x_934_ = lean_array_fget(v_subst_910_, v___x_933_);
lean_dec(v___x_933_);
lean_dec_ref(v_subst_910_);
v___x_935_ = 1;
v___x_936_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4, &l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4_once, _init_l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4);
v___x_937_ = lean_box(v___x_935_);
v___x_938_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4___redArg(v___x_936_, v___x_934_, v___x_937_);
v___x_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_939_, 0, v_e_909_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
v___x_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
return v___x_940_;
}
}
case 1:
{
lean_object* v_fvarId_941_; uint8_t v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
lean_dec_ref(v_subst_910_);
v_fvarId_941_ = lean_ctor_get(v_e_909_, 0);
v___x_942_ = 1;
v___x_943_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4, &l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4_once, _init_l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4);
v___x_944_ = lean_box(v___x_942_);
lean_inc(v_fvarId_941_);
v___x_945_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4___redArg(v___x_943_, v_fvarId_941_, v___x_944_);
v___x_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_946_, 0, v_e_909_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
return v___x_947_;
}
case 5:
{
lean_object* v_fn_948_; lean_object* v_arg_949_; lean_object* v___x_950_; 
v_fn_948_ = lean_ctor_get(v_e_909_, 0);
lean_inc_ref(v_fn_948_);
v_arg_949_ = lean_ctor_get(v_e_909_, 1);
lean_inc_ref(v_arg_949_);
lean_dec_ref_known(v_e_909_, 2);
lean_inc_ref(v_subst_910_);
v___x_950_ = l_Lean_Elab_Tactic_Do_countUses(v_fn_948_, v_subst_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v_fst_952_; lean_object* v_snd_953_; lean_object* v___x_954_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_a_951_);
lean_dec_ref_known(v___x_950_, 1);
v_fst_952_ = lean_ctor_get(v_a_951_, 0);
lean_inc(v_fst_952_);
v_snd_953_ = lean_ctor_get(v_a_951_, 1);
lean_inc(v_snd_953_);
lean_dec(v_a_951_);
v___x_954_ = l_Lean_Elab_Tactic_Do_countUses(v_arg_949_, v_subst_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_973_; 
v_a_955_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_973_ == 0)
{
v___x_957_ = v___x_954_;
v_isShared_958_ = v_isSharedCheck_973_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_954_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_973_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v_fst_959_; lean_object* v_snd_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_972_; 
v_fst_959_ = lean_ctor_get(v_a_955_, 0);
v_snd_960_ = lean_ctor_get(v_a_955_, 1);
v_isSharedCheck_972_ = !lean_is_exclusive(v_a_955_);
if (v_isSharedCheck_972_ == 0)
{
v___x_962_ = v_a_955_;
v_isShared_963_ = v_isSharedCheck_972_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_snd_960_);
lean_inc(v_fst_959_);
lean_dec(v_a_955_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_972_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_967_; 
v___x_964_ = l_Lean_Expr_app___override(v_fst_952_, v_fst_959_);
v___x_965_ = l_Lean_Elab_Tactic_Do_FVarUses_add(v_snd_953_, v_snd_960_);
lean_dec(v_snd_953_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 1, v___x_965_);
lean_ctor_set(v___x_962_, 0, v___x_964_);
v___x_967_ = v___x_962_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_964_);
lean_ctor_set(v_reuseFailAlloc_971_, 1, v___x_965_);
v___x_967_ = v_reuseFailAlloc_971_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
lean_object* v___x_969_; 
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 0, v___x_967_);
v___x_969_ = v___x_957_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_967_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
}
else
{
lean_dec(v_snd_953_);
lean_dec(v_fst_952_);
return v___x_954_;
}
}
else
{
lean_dec_ref(v_arg_949_);
lean_dec_ref(v_subst_910_);
return v___x_950_;
}
}
case 6:
{
lean_object* v_binderName_974_; lean_object* v_binderType_975_; lean_object* v_body_976_; uint8_t v_binderInfo_977_; lean_object* v___x_978_; 
v_binderName_974_ = lean_ctor_get(v_e_909_, 0);
lean_inc(v_binderName_974_);
v_binderType_975_ = lean_ctor_get(v_e_909_, 1);
lean_inc_ref(v_binderType_975_);
v_body_976_ = lean_ctor_get(v_e_909_, 2);
lean_inc_ref(v_body_976_);
v_binderInfo_977_ = lean_ctor_get_uint8(v_e_909_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_909_, 3);
v___x_978_ = l_Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5(v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_980_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_a_979_);
lean_dec_ref_known(v___x_978_, 1);
lean_inc_ref(v_subst_910_);
v___x_980_ = l_Lean_Elab_Tactic_Do_countUses(v_binderType_975_, v_subst_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v_fst_982_; lean_object* v_snd_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_980_, 1);
v_fst_982_ = lean_ctor_get(v_a_981_, 0);
lean_inc(v_fst_982_);
v_snd_983_ = lean_ctor_get(v_a_981_, 1);
lean_inc(v_snd_983_);
lean_dec(v_a_981_);
lean_inc(v_a_979_);
v___x_984_ = lean_array_push(v_subst_910_, v_a_979_);
v___x_985_ = l_Lean_Elab_Tactic_Do_countUses(v_body_976_, v___x_984_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v_a_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1005_; 
v_a_986_ = lean_ctor_get(v___x_985_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_988_ = v___x_985_;
v_isShared_989_ = v_isSharedCheck_1005_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_a_986_);
lean_dec(v___x_985_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1005_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v_fst_990_; lean_object* v_snd_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1004_; 
v_fst_990_ = lean_ctor_get(v_a_986_, 0);
v_snd_991_ = lean_ctor_get(v_a_986_, 1);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_a_986_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_993_ = v_a_986_;
v_isShared_994_ = v_isSharedCheck_1004_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_snd_991_);
lean_inc(v_fst_990_);
lean_dec(v_a_986_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1004_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_999_; 
v___x_995_ = l_Lean_Elab_Tactic_Do_FVarUses_add(v_snd_983_, v_snd_991_);
lean_dec(v_snd_983_);
v___x_996_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1___redArg(v___x_995_, v_a_979_);
lean_dec(v_a_979_);
v___x_997_ = l_Lean_Expr_lam___override(v_binderName_974_, v_fst_982_, v_fst_990_, v_binderInfo_977_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 1, v___x_996_);
lean_ctor_set(v___x_993_, 0, v___x_997_);
v___x_999_ = v___x_993_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_997_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v___x_996_);
v___x_999_ = v_reuseFailAlloc_1003_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
lean_object* v___x_1001_; 
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v___x_999_);
v___x_1001_ = v___x_988_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v___x_999_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
}
else
{
lean_dec(v_snd_983_);
lean_dec(v_fst_982_);
lean_dec(v_a_979_);
lean_dec(v_binderName_974_);
return v___x_985_;
}
}
else
{
lean_dec(v_a_979_);
lean_dec_ref(v_body_976_);
lean_dec(v_binderName_974_);
lean_dec_ref(v_subst_910_);
return v___x_980_;
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1013_; 
lean_dec_ref(v_body_976_);
lean_dec_ref(v_binderType_975_);
lean_dec(v_binderName_974_);
lean_dec_ref(v_subst_910_);
v_a_1006_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1008_ = v___x_978_;
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_978_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
case 7:
{
lean_object* v_binderName_1014_; lean_object* v_binderType_1015_; lean_object* v_body_1016_; uint8_t v_binderInfo_1017_; lean_object* v___x_1018_; 
v_binderName_1014_ = lean_ctor_get(v_e_909_, 0);
lean_inc(v_binderName_1014_);
v_binderType_1015_ = lean_ctor_get(v_e_909_, 1);
lean_inc_ref(v_binderType_1015_);
v_body_1016_ = lean_ctor_get(v_e_909_, 2);
lean_inc_ref(v_body_1016_);
v_binderInfo_1017_ = lean_ctor_get_uint8(v_e_909_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_909_, 3);
v___x_1018_ = l_Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5(v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1020_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
lean_dec_ref_known(v___x_1018_, 1);
lean_inc_ref(v_subst_910_);
v___x_1020_ = l_Lean_Elab_Tactic_Do_countUses(v_binderType_1015_, v_subst_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; lean_object* v_fst_1022_; lean_object* v_snd_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_a_1021_);
lean_dec_ref_known(v___x_1020_, 1);
v_fst_1022_ = lean_ctor_get(v_a_1021_, 0);
lean_inc(v_fst_1022_);
v_snd_1023_ = lean_ctor_get(v_a_1021_, 1);
lean_inc(v_snd_1023_);
lean_dec(v_a_1021_);
lean_inc(v_a_1019_);
v___x_1024_ = lean_array_push(v_subst_910_, v_a_1019_);
v___x_1025_ = l_Lean_Elab_Tactic_Do_countUses(v_body_1016_, v___x_1024_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1045_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1028_ = v___x_1025_;
v_isShared_1029_ = v_isSharedCheck_1045_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_1025_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1045_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v_fst_1030_; lean_object* v_snd_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1044_; 
v_fst_1030_ = lean_ctor_get(v_a_1026_, 0);
v_snd_1031_ = lean_ctor_get(v_a_1026_, 1);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_a_1026_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1033_ = v_a_1026_;
v_isShared_1034_ = v_isSharedCheck_1044_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_snd_1031_);
lean_inc(v_fst_1030_);
lean_dec(v_a_1026_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1044_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1039_; 
v___x_1035_ = l_Lean_Elab_Tactic_Do_FVarUses_add(v_snd_1023_, v_snd_1031_);
lean_dec(v_snd_1023_);
v___x_1036_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1___redArg(v___x_1035_, v_a_1019_);
lean_dec(v_a_1019_);
v___x_1037_ = l_Lean_Expr_forallE___override(v_binderName_1014_, v_fst_1022_, v_fst_1030_, v_binderInfo_1017_);
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 1, v___x_1036_);
lean_ctor_set(v___x_1033_, 0, v___x_1037_);
v___x_1039_ = v___x_1033_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1037_);
lean_ctor_set(v_reuseFailAlloc_1043_, 1, v___x_1036_);
v___x_1039_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1041_; 
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 0, v___x_1039_);
v___x_1041_ = v___x_1028_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_1039_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
}
}
else
{
lean_dec(v_snd_1023_);
lean_dec(v_fst_1022_);
lean_dec(v_a_1019_);
lean_dec(v_binderName_1014_);
return v___x_1025_;
}
}
else
{
lean_dec(v_a_1019_);
lean_dec_ref(v_body_1016_);
lean_dec(v_binderName_1014_);
lean_dec_ref(v_subst_910_);
return v___x_1020_;
}
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_dec_ref(v_body_1016_);
lean_dec_ref(v_binderType_1015_);
lean_dec(v_binderName_1014_);
lean_dec_ref(v_subst_910_);
v_a_1046_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1018_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1018_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
case 8:
{
lean_object* v_declName_1054_; lean_object* v_type_1055_; lean_object* v_value_1056_; lean_object* v_body_1057_; uint8_t v_nondep_1058_; lean_object* v___x_1059_; 
v_declName_1054_ = lean_ctor_get(v_e_909_, 0);
lean_inc(v_declName_1054_);
v_type_1055_ = lean_ctor_get(v_e_909_, 1);
lean_inc_ref(v_type_1055_);
v_value_1056_ = lean_ctor_get(v_e_909_, 2);
lean_inc_ref(v_value_1056_);
v_body_1057_ = lean_ctor_get(v_e_909_, 3);
lean_inc_ref(v_body_1057_);
v_nondep_1058_ = lean_ctor_get_uint8(v_e_909_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_909_, 4);
v___x_1059_ = l_Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5(v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v_a_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v_a_1060_ = lean_ctor_get(v___x_1059_, 0);
lean_inc_n(v_a_1060_, 2);
lean_dec_ref_known(v___x_1059_, 1);
lean_inc_ref(v_subst_910_);
v___x_1061_ = lean_array_push(v_subst_910_, v_a_1060_);
v___x_1062_ = l_Lean_Elab_Tactic_Do_countUses(v_body_1057_, v___x_1061_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1105_; 
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1065_ = v___x_1062_;
v_isShared_1066_ = v_isSharedCheck_1105_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1062_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1105_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v_fst_1067_; lean_object* v_snd_1068_; lean_object* v___x_1070_; 
v_fst_1067_ = lean_ctor_get(v_a_1063_, 0);
lean_inc(v_fst_1067_);
v_snd_1068_ = lean_ctor_get(v_a_1063_, 1);
lean_inc(v_snd_1068_);
lean_dec(v_a_1063_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set_tag(v___x_1065_, 1);
lean_ctor_set(v___x_1065_, 0, v_value_1056_);
v___x_1070_ = v___x_1065_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_value_1056_);
v___x_1070_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lean_Elab_Tactic_Do_countUsesDecl(v_a_1060_, v_type_1055_, v___x_1070_, v_snd_1068_, v_subst_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
lean_dec(v_a_1060_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1095_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1074_ = v___x_1071_;
v_isShared_1075_ = v_isSharedCheck_1095_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1071_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1095_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v_snd_1076_; lean_object* v_fst_1077_; 
v_snd_1076_ = lean_ctor_get(v_a_1072_, 1);
lean_inc(v_snd_1076_);
v_fst_1077_ = lean_ctor_get(v_snd_1076_, 0);
lean_inc(v_fst_1077_);
if (lean_obj_tag(v_fst_1077_) == 1)
{
lean_object* v_fst_1078_; lean_object* v_snd_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1091_; 
v_fst_1078_ = lean_ctor_get(v_a_1072_, 0);
lean_inc(v_fst_1078_);
lean_dec(v_a_1072_);
v_snd_1079_ = lean_ctor_get(v_snd_1076_, 1);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_snd_1076_);
if (v_isSharedCheck_1091_ == 0)
{
lean_object* v_unused_1092_; 
v_unused_1092_ = lean_ctor_get(v_snd_1076_, 0);
lean_dec(v_unused_1092_);
v___x_1081_ = v_snd_1076_;
v_isShared_1082_ = v_isSharedCheck_1091_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_snd_1079_);
lean_dec(v_snd_1076_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1091_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v_val_1083_; lean_object* v___x_1084_; lean_object* v___x_1086_; 
v_val_1083_ = lean_ctor_get(v_fst_1077_, 0);
lean_inc(v_val_1083_);
lean_dec_ref_known(v_fst_1077_, 1);
v___x_1084_ = l_Lean_Expr_letE___override(v_declName_1054_, v_fst_1078_, v_val_1083_, v_fst_1067_, v_nondep_1058_);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 0, v___x_1084_);
v___x_1086_ = v___x_1081_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1084_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v_snd_1079_);
v___x_1086_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
lean_object* v___x_1088_; 
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 0, v___x_1086_);
v___x_1088_ = v___x_1074_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1086_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
else
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
lean_dec(v_fst_1077_);
lean_dec(v_snd_1076_);
lean_del_object(v___x_1074_);
lean_dec(v_a_1072_);
lean_dec(v_fst_1067_);
lean_dec(v_declName_1054_);
v___x_1093_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_countUses___closed__5, &l_Lean_Elab_Tactic_Do_countUses___closed__5_once, _init_l_Lean_Elab_Tactic_Do_countUses___closed__5);
v___x_1094_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3___redArg(v___x_1093_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
return v___x_1094_;
}
}
}
else
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1103_; 
lean_dec(v_fst_1067_);
lean_dec(v_declName_1054_);
v_a_1096_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1098_ = v___x_1071_;
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1071_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1101_; 
if (v_isShared_1099_ == 0)
{
v___x_1101_ = v___x_1098_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_a_1096_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1060_);
lean_dec_ref(v_value_1056_);
lean_dec_ref(v_type_1055_);
lean_dec(v_declName_1054_);
lean_dec_ref(v_subst_910_);
return v___x_1062_;
}
}
else
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1113_; 
lean_dec_ref(v_body_1057_);
lean_dec_ref(v_value_1056_);
lean_dec_ref(v_type_1055_);
lean_dec(v_declName_1054_);
lean_dec_ref(v_subst_910_);
v_a_1106_ = lean_ctor_get(v___x_1059_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1108_ = v___x_1059_;
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1059_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_a_1106_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
case 10:
{
lean_object* v_data_1114_; lean_object* v_expr_1115_; lean_object* v___f_1116_; lean_object* v___x_1117_; 
v_data_1114_ = lean_ctor_get(v_e_909_, 0);
lean_inc(v_data_1114_);
v_expr_1115_ = lean_ctor_get(v_e_909_, 1);
lean_inc_ref(v_expr_1115_);
lean_dec_ref_known(v_e_909_, 2);
v___f_1116_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_countUses___lam__0), 2, 1);
lean_closure_set(v___f_1116_, 0, v_data_1114_);
v___x_1117_ = l_Lean_Elab_Tactic_Do_countUses(v_expr_1115_, v_subst_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1126_; 
v_a_1118_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1120_ = v___x_1117_;
v_isShared_1121_ = v_isSharedCheck_1126_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1117_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1126_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1122_; lean_object* v___x_1124_; 
v___x_1122_ = l_Lean_Elab_Tactic_Do_over1Of2___redArg(v___f_1116_, v_a_1118_);
if (v_isShared_1121_ == 0)
{
lean_ctor_set(v___x_1120_, 0, v___x_1122_);
v___x_1124_ = v___x_1120_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
else
{
lean_dec_ref(v___f_1116_);
return v___x_1117_;
}
}
case 11:
{
lean_object* v_typeName_1127_; lean_object* v_idx_1128_; lean_object* v_struct_1129_; lean_object* v___f_1130_; lean_object* v___x_1131_; 
v_typeName_1127_ = lean_ctor_get(v_e_909_, 0);
lean_inc(v_typeName_1127_);
v_idx_1128_ = lean_ctor_get(v_e_909_, 1);
lean_inc(v_idx_1128_);
v_struct_1129_ = lean_ctor_get(v_e_909_, 2);
lean_inc_ref(v_struct_1129_);
lean_dec_ref_known(v_e_909_, 3);
v___f_1130_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_countUses___lam__1), 3, 2);
lean_closure_set(v___f_1130_, 0, v_typeName_1127_);
lean_closure_set(v___f_1130_, 1, v_idx_1128_);
v___x_1131_ = l_Lean_Elab_Tactic_Do_countUses(v_struct_1129_, v_subst_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1140_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1134_ = v___x_1131_;
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1131_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1136_ = l_Lean_Elab_Tactic_Do_over1Of2___redArg(v___f_1130_, v_a_1132_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 0, v___x_1136_);
v___x_1138_ = v___x_1134_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
else
{
lean_dec_ref(v___f_1130_);
return v___x_1131_;
}
}
default: 
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
lean_dec_ref(v_subst_910_);
v___x_1141_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4, &l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4_once, _init_l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4);
v___x_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1142_, 0, v_e_909_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
v___x_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
return v___x_1143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUsesDecl(lean_object* v_fvarId_1144_, lean_object* v_ty_1145_, lean_object* v_val_x3f_1146_, lean_object* v_bodyUses_1147_, lean_object* v_subst_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_){
_start:
{
lean_object* v___f_1154_; lean_object* v___x_1155_; 
v___f_1154_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_countUsesDecl___closed__0));
lean_inc_ref(v_subst_1148_);
v___x_1155_ = l_Lean_Elab_Tactic_Do_countUses(v_ty_1145_, v_subst_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1210_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1158_ = v___x_1155_;
v_isShared_1159_ = v_isSharedCheck_1210_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1155_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1210_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v_fst_1160_; lean_object* v_snd_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1209_; 
v_fst_1160_ = lean_ctor_get(v_a_1156_, 0);
v_snd_1161_ = lean_ctor_get(v_a_1156_, 1);
v_isSharedCheck_1209_ = !lean_is_exclusive(v_a_1156_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1163_ = v_a_1156_;
v_isShared_1164_ = v_isSharedCheck_1209_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_snd_1161_);
lean_inc(v_fst_1160_);
lean_dec(v_a_1156_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1209_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___y_1166_; uint8_t v___y_1167_; lean_object* v___y_1168_; lean_object* v_fst_1183_; lean_object* v_snd_1184_; 
if (lean_obj_tag(v_val_x3f_1146_) == 0)
{
lean_object* v___x_1194_; 
lean_dec_ref(v_subst_1148_);
v___x_1194_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4, &l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4_once, _init_l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4);
v_fst_1183_ = v_val_x3f_1146_;
v_snd_1184_ = v___x_1194_;
goto v___jp_1182_;
}
else
{
lean_object* v_val_1195_; lean_object* v___x_1196_; 
v_val_1195_ = lean_ctor_get(v_val_x3f_1146_, 0);
lean_inc(v_val_1195_);
lean_dec_ref_known(v_val_x3f_1146_, 1);
v___x_1196_ = l_Lean_Elab_Tactic_Do_countUses(v_val_1195_, v_subst_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v___x_1198_; lean_object* v_fst_1199_; lean_object* v_snd_1200_; 
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc(v_a_1197_);
lean_dec_ref_known(v___x_1196_, 1);
v___x_1198_ = l_Lean_Elab_Tactic_Do_over1Of2___redArg(v___f_1154_, v_a_1197_);
v_fst_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_fst_1199_);
v_snd_1200_ = lean_ctor_get(v___x_1198_, 1);
lean_inc(v_snd_1200_);
lean_dec_ref(v___x_1198_);
v_fst_1183_ = v_fst_1199_;
v_snd_1184_ = v_snd_1200_;
goto v___jp_1182_;
}
else
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
lean_del_object(v___x_1163_);
lean_dec(v_snd_1161_);
lean_dec(v_fst_1160_);
lean_del_object(v___x_1158_);
lean_dec_ref(v_bodyUses_1147_);
v_a_1201_ = lean_ctor_get(v___x_1196_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1196_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1196_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1204_ == 0)
{
v___x_1206_ = v___x_1203_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1201_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
v___jp_1165_:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1176_; 
v___x_1169_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1___redArg(v___y_1168_, v_fvarId_1144_);
v___x_1170_ = lean_box(0);
v___x_1171_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_countUsesDecl___closed__2));
v___x_1172_ = l_Lean_Elab_Tactic_Do_Uses_toNat(v___y_1167_);
v___x_1173_ = l_Lean_KVMap_setNat(v___x_1170_, v___x_1171_, v___x_1172_);
v___x_1174_ = l_Lean_Elab_Tactic_Do_addMData(v___x_1173_, v_fst_1160_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 1, v___x_1169_);
lean_ctor_set(v___x_1163_, 0, v___y_1166_);
v___x_1176_ = v___x_1163_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___y_1166_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v___x_1169_);
v___x_1176_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
lean_object* v___x_1177_; lean_object* v___x_1179_; 
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1174_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
if (v_isShared_1159_ == 0)
{
lean_ctor_set(v___x_1158_, 0, v___x_1177_);
v___x_1179_ = v___x_1158_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1177_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
v___jp_1182_:
{
uint8_t v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; uint8_t v___x_1188_; uint8_t v___x_1189_; 
v___x_1185_ = 0;
v___x_1186_ = lean_box(v___x_1185_);
v___x_1187_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0___redArg(v_bodyUses_1147_, v_fvarId_1144_, v___x_1186_);
lean_dec(v___x_1186_);
v___x_1188_ = lean_unbox(v___x_1187_);
v___x_1189_ = l_Lean_Elab_Tactic_Do_instBEqUses_beq(v___x_1188_, v___x_1185_);
if (v___x_1189_ == 0)
{
lean_object* v___x_1190_; lean_object* v___x_1191_; uint8_t v___x_1192_; 
v___x_1190_ = l_Lean_Elab_Tactic_Do_FVarUses_add(v_bodyUses_1147_, v_snd_1161_);
lean_dec_ref(v_bodyUses_1147_);
v___x_1191_ = l_Lean_Elab_Tactic_Do_FVarUses_add(v___x_1190_, v_snd_1184_);
lean_dec_ref(v___x_1190_);
v___x_1192_ = lean_unbox(v___x_1187_);
lean_dec(v___x_1187_);
v___y_1166_ = v_fst_1183_;
v___y_1167_ = v___x_1192_;
v___y_1168_ = v___x_1191_;
goto v___jp_1165_;
}
else
{
uint8_t v___x_1193_; 
lean_dec_ref(v_snd_1184_);
lean_dec(v_snd_1161_);
v___x_1193_ = lean_unbox(v___x_1187_);
lean_dec(v___x_1187_);
v___y_1166_ = v_fst_1183_;
v___y_1167_ = v___x_1193_;
v___y_1168_ = v_bodyUses_1147_;
goto v___jp_1165_;
}
}
}
}
}
else
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1218_; 
lean_dec_ref(v_subst_1148_);
lean_dec_ref(v_bodyUses_1147_);
lean_dec(v_val_x3f_1146_);
v_a_1211_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1213_ = v___x_1155_;
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v___x_1155_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1216_; 
if (v_isShared_1214_ == 0)
{
v___x_1216_ = v___x_1213_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_a_1211_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUsesDecl___boxed(lean_object* v_fvarId_1219_, lean_object* v_ty_1220_, lean_object* v_val_x3f_1221_, lean_object* v_bodyUses_1222_, lean_object* v_subst_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l_Lean_Elab_Tactic_Do_countUsesDecl(v_fvarId_1219_, v_ty_1220_, v_val_x3f_1221_, v_bodyUses_1222_, v_subst_1223_, v_a_1224_, v_a_1225_, v_a_1226_, v_a_1227_);
lean_dec(v_a_1227_);
lean_dec_ref(v_a_1226_);
lean_dec(v_a_1225_);
lean_dec_ref(v_a_1224_);
lean_dec(v_fvarId_1219_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUses___boxed(lean_object* v_e_1230_, lean_object* v_subst_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Lean_Elab_Tactic_Do_countUses(v_e_1230_, v_subst_1231_, v_a_1232_, v_a_1233_, v_a_1234_, v_a_1235_);
lean_dec(v_a_1235_);
lean_dec_ref(v_a_1234_);
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1232_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0(lean_object* v_00_u03b2_1238_, lean_object* v_m_1239_, lean_object* v_a_1240_, lean_object* v_fallback_1241_){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0___redArg(v_m_1239_, v_a_1240_, v_fallback_1241_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0___boxed(lean_object* v_00_u03b2_1243_, lean_object* v_m_1244_, lean_object* v_a_1245_, lean_object* v_fallback_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0(v_00_u03b2_1243_, v_m_1244_, v_a_1245_, v_fallback_1246_);
lean_dec(v_fallback_1246_);
lean_dec(v_a_1245_);
lean_dec_ref(v_m_1244_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1(lean_object* v_00_u03b2_1248_, lean_object* v_m_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1___redArg(v_m_1249_, v_a_1250_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1___boxed(lean_object* v_00_u03b2_1252_, lean_object* v_m_1253_, lean_object* v_a_1254_){
_start:
{
lean_object* v_res_1255_; 
v_res_1255_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1(v_00_u03b2_1252_, v_m_1253_, v_a_1254_);
lean_dec(v_a_1254_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3(lean_object* v_00_u03b1_1256_, lean_object* v_msg_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3___redArg(v_msg_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3___boxed(lean_object* v_00_u03b1_1264_, lean_object* v_msg_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_countUses_spec__3(v_00_u03b1_1264_, v_msg_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4(lean_object* v_00_u03b2_1272_, lean_object* v_m_1273_, lean_object* v_a_1274_, lean_object* v_b_1275_){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4___redArg(v_m_1273_, v_a_1274_, v_b_1275_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9(lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9___redArg(v___y_1280_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9___boxed(lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Elab_Tactic_Do_countUses_spec__5_spec__9(v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0(lean_object* v_00_u03b2_1289_, lean_object* v_a_1290_, lean_object* v_fallback_1291_, lean_object* v_x_1292_){
_start:
{
lean_object* v___x_1293_; 
v___x_1293_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0___redArg(v_a_1290_, v_fallback_1291_, v_x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1294_, lean_object* v_a_1295_, lean_object* v_fallback_1296_, lean_object* v_x_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__0_spec__0(v_00_u03b2_1294_, v_a_1295_, v_fallback_1296_, v_x_1297_);
lean_dec(v_x_1297_);
lean_dec(v_fallback_1296_);
lean_dec(v_a_1295_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2(lean_object* v_00_u03b2_1299_, lean_object* v_a_1300_, lean_object* v_x_1301_){
_start:
{
lean_object* v___x_1302_; 
v___x_1302_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2___redArg(v_a_1300_, v_x_1301_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1303_, lean_object* v_a_1304_, lean_object* v_x_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_Elab_Tactic_Do_countUsesDecl_spec__1_spec__2(v_00_u03b2_1303_, v_a_1304_, v_x_1305_);
lean_dec(v_a_1304_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4_spec__7(lean_object* v_00_u03b2_1307_, lean_object* v_a_1308_, lean_object* v_b_1309_, lean_object* v_x_1310_){
_start:
{
lean_object* v___x_1311_; 
v___x_1311_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_countUses_spec__4_spec__7___redArg(v_a_1308_, v_b_1309_, v_x_1310_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2(lean_object* v_as_1314_, size_t v_i_1315_, size_t v_stop_1316_, lean_object* v_b_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
uint8_t v___x_1323_; 
v___x_1323_ = lean_usize_dec_eq(v_i_1315_, v_stop_1316_);
if (v___x_1323_ == 0)
{
size_t v___x_1324_; size_t v___x_1325_; lean_object* v___x_1326_; 
v___x_1324_ = ((size_t)1ULL);
v___x_1325_ = lean_usize_sub(v_i_1315_, v___x_1324_);
v___x_1326_ = lean_array_uget_borrowed(v_as_1314_, v___x_1325_);
if (lean_obj_tag(v___x_1326_) == 0)
{
v_i_1315_ = v___x_1325_;
goto _start;
}
else
{
lean_object* v_val_1328_; lean_object* v_fst_1329_; lean_object* v_snd_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v_val_1328_ = lean_ctor_get(v___x_1326_, 0);
v_fst_1329_ = lean_ctor_get(v_b_1317_, 0);
lean_inc(v_fst_1329_);
v_snd_1330_ = lean_ctor_get(v_b_1317_, 1);
lean_inc(v_snd_1330_);
lean_dec_ref(v_b_1317_);
v___x_1331_ = l_Lean_LocalDecl_fvarId(v_val_1328_);
v___x_1332_ = l_Lean_LocalDecl_type(v_val_1328_);
v___x_1333_ = l_Lean_LocalDecl_value_x3f(v_val_1328_, v___x_1323_);
v___x_1334_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2___closed__0));
v___x_1335_ = l_Lean_Elab_Tactic_Do_countUsesDecl(v___x_1331_, v___x_1332_, v___x_1333_, v_snd_1330_, v___x_1334_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
lean_dec(v___x_1331_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; lean_object* v_snd_1337_; lean_object* v_fst_1338_; lean_object* v_fst_1339_; lean_object* v_snd_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1355_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_a_1336_);
lean_dec_ref_known(v___x_1335_, 1);
v_snd_1337_ = lean_ctor_get(v_a_1336_, 1);
lean_inc(v_snd_1337_);
v_fst_1338_ = lean_ctor_get(v_a_1336_, 0);
lean_inc(v_fst_1338_);
lean_dec(v_a_1336_);
v_fst_1339_ = lean_ctor_get(v_snd_1337_, 0);
v_snd_1340_ = lean_ctor_get(v_snd_1337_, 1);
v_isSharedCheck_1355_ = !lean_is_exclusive(v_snd_1337_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1342_ = v_snd_1337_;
v_isShared_1343_ = v_isSharedCheck_1355_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_snd_1340_);
lean_inc(v_fst_1339_);
lean_dec(v_snd_1337_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1355_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___y_1345_; 
if (lean_obj_tag(v_fst_1339_) == 0)
{
lean_object* v___x_1351_; 
lean_inc(v_val_1328_);
v___x_1351_ = l_Lean_LocalDecl_setType(v_val_1328_, v_fst_1338_);
v___y_1345_ = v___x_1351_;
goto v___jp_1344_;
}
else
{
lean_object* v_val_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v_val_1352_ = lean_ctor_get(v_fst_1339_, 0);
lean_inc(v_val_1352_);
lean_dec_ref_known(v_fst_1339_, 1);
lean_inc(v_val_1328_);
v___x_1353_ = l_Lean_LocalDecl_setType(v_val_1328_, v_fst_1338_);
v___x_1354_ = l_Lean_LocalDecl_setValue(v___x_1353_, v_val_1352_);
v___y_1345_ = v___x_1354_;
goto v___jp_1344_;
}
v___jp_1344_:
{
lean_object* v___x_1346_; lean_object* v___x_1348_; 
v___x_1346_ = lean_array_push(v_fst_1329_, v___y_1345_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 0, v___x_1346_);
v___x_1348_ = v___x_1342_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v___x_1346_);
lean_ctor_set(v_reuseFailAlloc_1350_, 1, v_snd_1340_);
v___x_1348_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
v_i_1315_ = v___x_1325_;
v_b_1317_ = v___x_1348_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec(v_fst_1329_);
v_a_1356_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1335_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1335_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
}
else
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1364_, 0, v_b_1317_);
return v___x_1364_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2___boxed(lean_object* v_as_1365_, lean_object* v_i_1366_, lean_object* v_stop_1367_, lean_object* v_b_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
size_t v_i_boxed_1374_; size_t v_stop_boxed_1375_; lean_object* v_res_1376_; 
v_i_boxed_1374_ = lean_unbox_usize(v_i_1366_);
lean_dec(v_i_1366_);
v_stop_boxed_1375_ = lean_unbox_usize(v_stop_1367_);
lean_dec(v_stop_1367_);
v_res_1376_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2(v_as_1365_, v_i_boxed_1374_, v_stop_boxed_1375_, v_b_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec_ref(v_as_1365_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1(lean_object* v_x_1377_, lean_object* v_x_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
if (lean_obj_tag(v_x_1377_) == 0)
{
lean_object* v_cs_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1397_; 
v_cs_1384_ = lean_ctor_get(v_x_1377_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v_x_1377_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1386_ = v_x_1377_;
v_isShared_1387_ = v_isSharedCheck_1397_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_cs_1384_);
lean_dec(v_x_1377_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1397_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1388_ = lean_array_get_size(v_cs_1384_);
v___x_1389_ = lean_unsigned_to_nat(0u);
v___x_1390_ = lean_nat_dec_lt(v___x_1389_, v___x_1388_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1392_; 
lean_dec_ref(v_cs_1384_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 0, v_x_1378_);
v___x_1392_ = v___x_1386_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_x_1378_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
else
{
size_t v___x_1394_; size_t v___x_1395_; lean_object* v___x_1396_; 
lean_del_object(v___x_1386_);
v___x_1394_ = lean_usize_of_nat(v___x_1388_);
v___x_1395_ = ((size_t)0ULL);
v___x_1396_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1_spec__3(v_cs_1384_, v___x_1394_, v___x_1395_, v_x_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
lean_dec_ref(v_cs_1384_);
return v___x_1396_;
}
}
}
else
{
lean_object* v_vs_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1411_; 
v_vs_1398_ = lean_ctor_get(v_x_1377_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v_x_1377_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1400_ = v_x_1377_;
v_isShared_1401_ = v_isSharedCheck_1411_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_vs_1398_);
lean_dec(v_x_1377_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1411_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; uint8_t v___x_1404_; 
v___x_1402_ = lean_array_get_size(v_vs_1398_);
v___x_1403_ = lean_unsigned_to_nat(0u);
v___x_1404_ = lean_nat_dec_lt(v___x_1403_, v___x_1402_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1406_; 
lean_dec_ref(v_vs_1398_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set_tag(v___x_1400_, 0);
lean_ctor_set(v___x_1400_, 0, v_x_1378_);
v___x_1406_ = v___x_1400_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_x_1378_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
else
{
size_t v___x_1408_; size_t v___x_1409_; lean_object* v___x_1410_; 
lean_del_object(v___x_1400_);
v___x_1408_ = lean_usize_of_nat(v___x_1402_);
v___x_1409_ = ((size_t)0ULL);
v___x_1410_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2(v_vs_1398_, v___x_1408_, v___x_1409_, v_x_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
lean_dec_ref(v_vs_1398_);
return v___x_1410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1_spec__3(lean_object* v_as_1412_, size_t v_i_1413_, size_t v_stop_1414_, lean_object* v_b_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_){
_start:
{
uint8_t v___x_1421_; 
v___x_1421_ = lean_usize_dec_eq(v_i_1413_, v_stop_1414_);
if (v___x_1421_ == 0)
{
size_t v___x_1422_; size_t v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1422_ = ((size_t)1ULL);
v___x_1423_ = lean_usize_sub(v_i_1413_, v___x_1422_);
v___x_1424_ = lean_array_uget_borrowed(v_as_1412_, v___x_1423_);
lean_inc(v___x_1424_);
v___x_1425_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1(v___x_1424_, v_b_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_a_1426_);
lean_dec_ref_known(v___x_1425_, 1);
v_i_1413_ = v___x_1423_;
v_b_1415_ = v_a_1426_;
goto _start;
}
else
{
return v___x_1425_;
}
}
else
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1428_, 0, v_b_1415_);
return v___x_1428_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_as_1429_, lean_object* v_i_1430_, lean_object* v_stop_1431_, lean_object* v_b_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
size_t v_i_boxed_1438_; size_t v_stop_boxed_1439_; lean_object* v_res_1440_; 
v_i_boxed_1438_ = lean_unbox_usize(v_i_1430_);
lean_dec(v_i_1430_);
v_stop_boxed_1439_ = lean_unbox_usize(v_stop_1431_);
lean_dec(v_stop_1431_);
v_res_1440_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1_spec__3(v_as_1429_, v_i_boxed_1438_, v_stop_boxed_1439_, v_b_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec_ref(v_as_1429_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1___boxed(lean_object* v_x_1441_, lean_object* v_x_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1(v_x_1441_, v_x_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0(lean_object* v_t_1449_, lean_object* v_init_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v_root_1456_; lean_object* v_tail_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; 
v_root_1456_ = lean_ctor_get(v_t_1449_, 0);
lean_inc_ref(v_root_1456_);
v_tail_1457_ = lean_ctor_get(v_t_1449_, 1);
lean_inc_ref(v_tail_1457_);
lean_dec_ref(v_t_1449_);
v___x_1458_ = lean_array_get_size(v_tail_1457_);
v___x_1459_ = lean_unsigned_to_nat(0u);
v___x_1460_ = lean_nat_dec_lt(v___x_1459_, v___x_1458_);
if (v___x_1460_ == 0)
{
lean_object* v___x_1461_; 
lean_dec_ref(v_tail_1457_);
v___x_1461_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1(v_root_1456_, v_init_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_);
return v___x_1461_;
}
else
{
size_t v___x_1462_; size_t v___x_1463_; lean_object* v___x_1464_; 
v___x_1462_ = lean_usize_of_nat(v___x_1458_);
v___x_1463_ = ((size_t)0ULL);
v___x_1464_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2(v_tail_1457_, v___x_1462_, v___x_1463_, v_init_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_);
lean_dec_ref(v_tail_1457_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; lean_object* v___x_1466_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1464_, 1);
v___x_1466_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__1(v_root_1456_, v_a_1465_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_);
return v___x_1466_;
}
else
{
lean_dec_ref(v_root_1456_);
return v___x_1464_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0___boxed(lean_object* v_t_1467_, lean_object* v_init_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0(v_t_1467_, v_init_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0(lean_object* v_lctx_1475_, lean_object* v_init_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v_decls_1482_; lean_object* v___x_1483_; 
v_decls_1482_ = lean_ctor_get(v_lctx_1475_, 1);
lean_inc_ref(v_decls_1482_);
lean_dec_ref(v_lctx_1475_);
v___x_1483_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0(v_decls_1482_, v_init_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0___boxed(lean_object* v_lctx_1484_, lean_object* v_init_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0(v_lctx_1484_, v_init_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_);
lean_dec(v___y_1489_);
lean_dec_ref(v___y_1488_);
lean_dec(v___y_1487_);
lean_dec_ref(v___y_1486_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3___redArg(size_t v_sz_1492_, size_t v_i_1493_, lean_object* v_bs_1494_, lean_object* v___y_1495_){
_start:
{
uint8_t v___x_1497_; 
v___x_1497_ = lean_usize_dec_lt(v_i_1493_, v_sz_1492_);
if (v___x_1497_ == 0)
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1498_ = l_unsafeCast___redArg(v_bs_1494_);
lean_dec_ref(v_bs_1494_);
v___x_1499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
return v___x_1499_;
}
else
{
lean_object* v_v_1500_; lean_object* v___x_1501_; lean_object* v_bs_x27_1502_; lean_object* v_a_1504_; lean_object* v___x_1510_; 
v_v_1500_ = lean_array_uget(v_bs_1494_, v_i_1493_);
v___x_1501_ = lean_unsigned_to_nat(0u);
v_bs_x27_1502_ = lean_array_uset(v_bs_1494_, v_i_1493_, v___x_1501_);
v___x_1510_ = l_unsafeCast___redArg(v_v_1500_);
lean_dec(v_v_1500_);
if (lean_obj_tag(v___x_1510_) == 0)
{
v_a_1504_ = v___x_1510_;
goto v___jp_1503_;
}
else
{
lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1525_; 
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1525_ == 0)
{
lean_object* v_unused_1526_; 
v_unused_1526_ = lean_ctor_get(v___x_1510_, 0);
lean_dec(v_unused_1526_);
v___x_1512_ = v___x_1510_;
v_isShared_1513_ = v_isSharedCheck_1525_;
goto v_resetjp_1511_;
}
else
{
lean_dec(v___x_1510_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1525_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1521_; 
v___x_1514_ = l_Lean_instInhabitedLocalDecl_default;
v___x_1515_ = lean_st_ref_take(v___y_1495_);
v___x_1516_ = lean_array_get_size(v___x_1515_);
v___x_1517_ = lean_unsigned_to_nat(1u);
v___x_1518_ = lean_nat_sub(v___x_1516_, v___x_1517_);
v___x_1519_ = lean_array_get(v___x_1514_, v___x_1515_, v___x_1518_);
lean_dec(v___x_1518_);
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 0, v___x_1519_);
v___x_1521_ = v___x_1512_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1519_);
v___x_1521_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1522_ = lean_array_pop(v___x_1515_);
v___x_1523_ = lean_st_ref_put(v___y_1495_, v___x_1522_);
v_a_1504_ = v___x_1521_;
goto v___jp_1503_;
}
}
}
v___jp_1503_:
{
size_t v___x_1505_; size_t v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1505_ = ((size_t)1ULL);
v___x_1506_ = lean_usize_add(v_i_1493_, v___x_1505_);
v___x_1507_ = l_unsafeCast___redArg(v_a_1504_);
lean_dec(v_a_1504_);
v___x_1508_ = lean_array_uset(v_bs_x27_1502_, v_i_1493_, v___x_1507_);
v_i_1493_ = v___x_1506_;
v_bs_1494_ = v___x_1508_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3___redArg___boxed(lean_object* v_sz_1527_, lean_object* v_i_1528_, lean_object* v_bs_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_){
_start:
{
size_t v_sz_boxed_1532_; size_t v_i_boxed_1533_; lean_object* v_res_1534_; 
v_sz_boxed_1532_ = lean_unbox_usize(v_sz_1527_);
lean_dec(v_sz_1527_);
v_i_boxed_1533_ = lean_unbox_usize(v_i_1528_);
lean_dec(v_i_1528_);
v_res_1534_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3___redArg(v_sz_boxed_1532_, v_i_boxed_1533_, v_bs_1529_, v___y_1530_);
lean_dec(v___y_1530_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3(size_t v_sz_1535_, size_t v_i_1536_, lean_object* v_bs_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3___redArg(v_sz_1535_, v_i_1536_, v_bs_1537_, v___y_1538_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3___boxed(lean_object* v_sz_1545_, lean_object* v_i_1546_, lean_object* v_bs_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
size_t v_sz_boxed_1554_; size_t v_i_boxed_1555_; lean_object* v_res_1556_; 
v_sz_boxed_1554_ = lean_unbox_usize(v_sz_1545_);
lean_dec(v_sz_1545_);
v_i_boxed_1555_ = lean_unbox_usize(v_i_1546_);
lean_dec(v_i_1546_);
v_res_1556_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3(v_sz_boxed_1554_, v_i_boxed_1555_, v_bs_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec(v___y_1548_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2_spec__5___boxed(lean_object* v_sz_1559_, lean_object* v_i_1560_, lean_object* v_bs_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
size_t v_sz_boxed_1568_; size_t v_i_boxed_1569_; lean_object* v_res_1570_; 
v_sz_boxed_1568_ = lean_unbox_usize(v_sz_1559_);
lean_dec(v_sz_1559_);
v_i_boxed_1569_ = lean_unbox_usize(v_i_1560_);
lean_dec(v_i_1560_);
v_res_1570_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2_spec__5(v_sz_boxed_1568_, v_i_boxed_1569_, v_bs_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
lean_dec(v___y_1566_);
lean_dec_ref(v___y_1565_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
lean_dec(v___y_1562_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2(lean_object* v_x_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
if (lean_obj_tag(v_x_1571_) == 0)
{
lean_object* v_cs_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1608_; 
v_cs_1578_ = lean_ctor_get(v_x_1571_, 0);
v_isSharedCheck_1608_ = !lean_is_exclusive(v_x_1571_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1580_ = v_x_1571_;
v_isShared_1581_ = v_isSharedCheck_1608_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_cs_1578_);
lean_dec(v_x_1571_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1608_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
size_t v_sz_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_4952__overap_1587_; lean_object* v___x_1588_; 
v_sz_1582_ = lean_array_size(v_cs_1578_);
v___x_1583_ = l_unsafeCast___redArg(v_cs_1578_);
lean_dec_ref(v_cs_1578_);
v___x_1584_ = lean_box_usize(v_sz_1582_);
v___x_1585_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2___boxed__const__1));
v___x_1586_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2_spec__5___boxed), 9, 3);
lean_closure_set(v___x_1586_, 0, v___x_1584_);
lean_closure_set(v___x_1586_, 1, v___x_1585_);
lean_closure_set(v___x_1586_, 2, v___x_1583_);
v___x_4952__overap_1587_ = l_unsafeCast___redArg(v___x_1586_);
lean_dec_ref(v___x_1586_);
lean_inc(v___y_1576_);
lean_inc_ref(v___y_1575_);
lean_inc(v___y_1574_);
lean_inc_ref(v___y_1573_);
lean_inc(v___y_1572_);
v___x_1588_ = lean_apply_6(v___x_4952__overap_1587_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, lean_box(0));
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1599_; 
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1591_ = v___x_1588_;
v_isShared_1592_ = v_isSharedCheck_1599_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v___x_1588_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1599_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1594_; 
if (v_isShared_1581_ == 0)
{
lean_ctor_set(v___x_1580_, 0, v_a_1589_);
v___x_1594_ = v___x_1580_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1589_);
v___x_1594_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1596_; 
if (v_isShared_1592_ == 0)
{
lean_ctor_set(v___x_1591_, 0, v___x_1594_);
v___x_1596_ = v___x_1591_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v___x_1594_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
}
else
{
lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1607_; 
lean_del_object(v___x_1580_);
v_a_1600_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1602_ = v___x_1588_;
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1588_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1605_; 
if (v_isShared_1603_ == 0)
{
v___x_1605_ = v___x_1602_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_a_1600_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
}
}
else
{
lean_object* v_vs_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1639_; 
v_vs_1609_ = lean_ctor_get(v_x_1571_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v_x_1571_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1611_ = v_x_1571_;
v_isShared_1612_ = v_isSharedCheck_1639_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_vs_1609_);
lean_dec(v_x_1571_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1639_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
size_t v_sz_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_4955__overap_1618_; lean_object* v___x_1619_; 
v_sz_1613_ = lean_array_size(v_vs_1609_);
v___x_1614_ = l_unsafeCast___redArg(v_vs_1609_);
lean_dec_ref(v_vs_1609_);
v___x_1615_ = lean_box_usize(v_sz_1613_);
v___x_1616_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2___boxed__const__1));
v___x_1617_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3___boxed), 9, 3);
lean_closure_set(v___x_1617_, 0, v___x_1615_);
lean_closure_set(v___x_1617_, 1, v___x_1616_);
lean_closure_set(v___x_1617_, 2, v___x_1614_);
v___x_4955__overap_1618_ = l_unsafeCast___redArg(v___x_1617_);
lean_dec_ref(v___x_1617_);
lean_inc(v___y_1576_);
lean_inc_ref(v___y_1575_);
lean_inc(v___y_1574_);
lean_inc_ref(v___y_1573_);
lean_inc(v___y_1572_);
v___x_1619_ = lean_apply_6(v___x_4955__overap_1618_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, lean_box(0));
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1630_; 
v_a_1620_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1622_ = v___x_1619_;
v_isShared_1623_ = v_isSharedCheck_1630_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1619_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1630_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 0, v_a_1620_);
v___x_1625_ = v___x_1611_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
lean_object* v___x_1627_; 
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 0, v___x_1625_);
v___x_1627_ = v___x_1622_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v___x_1625_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
else
{
lean_object* v_a_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1638_; 
lean_del_object(v___x_1611_);
v_a_1631_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1633_ = v___x_1619_;
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_a_1631_);
lean_dec(v___x_1619_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___x_1636_; 
if (v_isShared_1634_ == 0)
{
v___x_1636_ = v___x_1633_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v_a_1631_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2_spec__5(size_t v_sz_1640_, size_t v_i_1641_, lean_object* v_bs_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
uint8_t v___x_1649_; 
v___x_1649_ = lean_usize_dec_lt(v_i_1641_, v_sz_1640_);
if (v___x_1649_ == 0)
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = l_unsafeCast___redArg(v_bs_1642_);
lean_dec_ref(v_bs_1642_);
v___x_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1650_);
return v___x_1651_;
}
else
{
lean_object* v_v_1652_; lean_object* v___x_1653_; lean_object* v_bs_x27_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v_v_1652_ = lean_array_uget(v_bs_1642_, v_i_1641_);
v___x_1653_ = lean_unsigned_to_nat(0u);
v_bs_x27_1654_ = lean_array_uset(v_bs_1642_, v_i_1641_, v___x_1653_);
v___x_1655_ = l_unsafeCast___redArg(v_v_1652_);
lean_dec(v_v_1652_);
v___x_1656_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2(v___x_1655_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; size_t v___x_1658_; size_t v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1656_, 1);
v___x_1658_ = ((size_t)1ULL);
v___x_1659_ = lean_usize_add(v_i_1641_, v___x_1658_);
v___x_1660_ = l_unsafeCast___redArg(v_a_1657_);
lean_dec(v_a_1657_);
v___x_1661_ = lean_array_uset(v_bs_x27_1654_, v_i_1641_, v___x_1660_);
v_i_1641_ = v___x_1659_;
v_bs_1642_ = v___x_1661_;
goto _start;
}
else
{
lean_object* v_a_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1670_; 
lean_dec_ref(v_bs_x27_1654_);
v_a_1663_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1665_ = v___x_1656_;
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_a_1663_);
lean_dec(v___x_1656_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1670_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v___x_1668_; 
if (v_isShared_1666_ == 0)
{
v___x_1668_ = v___x_1665_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_a_1663_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2___boxed(lean_object* v_x_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2(v_x_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v___y_1674_);
lean_dec_ref(v___y_1673_);
lean_dec(v___y_1672_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1(lean_object* v_t_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_){
_start:
{
lean_object* v_root_1686_; lean_object* v_tail_1687_; lean_object* v_size_1688_; size_t v_shift_1689_; lean_object* v_tailOff_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1730_; 
v_root_1686_ = lean_ctor_get(v_t_1679_, 0);
v_tail_1687_ = lean_ctor_get(v_t_1679_, 1);
v_size_1688_ = lean_ctor_get(v_t_1679_, 2);
v_shift_1689_ = lean_ctor_get_usize(v_t_1679_, 4);
v_tailOff_1690_ = lean_ctor_get(v_t_1679_, 3);
v_isSharedCheck_1730_ = !lean_is_exclusive(v_t_1679_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1692_ = v_t_1679_;
v_isShared_1693_ = v_isSharedCheck_1730_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_tailOff_1690_);
lean_inc(v_size_1688_);
lean_inc(v_tail_1687_);
lean_inc(v_root_1686_);
lean_dec(v_t_1679_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1730_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1694_; 
v___x_1694_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2(v_root_1686_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; size_t v_sz_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_4949__overap_1701_; lean_object* v___x_1702_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
lean_inc(v_a_1695_);
lean_dec_ref_known(v___x_1694_, 1);
v_sz_1696_ = lean_array_size(v_tail_1687_);
v___x_1697_ = l_unsafeCast___redArg(v_tail_1687_);
lean_dec_ref(v_tail_1687_);
v___x_1698_ = lean_box_usize(v_sz_1696_);
v___x_1699_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2___boxed__const__1));
v___x_1700_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__3___boxed), 9, 3);
lean_closure_set(v___x_1700_, 0, v___x_1698_);
lean_closure_set(v___x_1700_, 1, v___x_1699_);
lean_closure_set(v___x_1700_, 2, v___x_1697_);
v___x_4949__overap_1701_ = l_unsafeCast___redArg(v___x_1700_);
lean_dec_ref(v___x_1700_);
lean_inc(v___y_1684_);
lean_inc_ref(v___y_1683_);
lean_inc(v___y_1682_);
lean_inc_ref(v___y_1681_);
lean_inc(v___y_1680_);
v___x_1702_ = lean_apply_6(v___x_4949__overap_1701_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_, lean_box(0));
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1713_; 
v_a_1703_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1705_ = v___x_1702_;
v_isShared_1706_ = v_isSharedCheck_1713_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1702_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1713_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 1, v_a_1703_);
lean_ctor_set(v___x_1692_, 0, v_a_1695_);
v___x_1708_ = v___x_1692_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1695_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v_a_1703_);
lean_ctor_set(v_reuseFailAlloc_1712_, 2, v_size_1688_);
lean_ctor_set(v_reuseFailAlloc_1712_, 3, v_tailOff_1690_);
lean_ctor_set_usize(v_reuseFailAlloc_1712_, 4, v_shift_1689_);
v___x_1708_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
lean_object* v___x_1710_; 
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 0, v___x_1708_);
v___x_1710_ = v___x_1705_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1708_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
}
else
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1721_; 
lean_dec(v_a_1695_);
lean_del_object(v___x_1692_);
lean_dec(v_tailOff_1690_);
lean_dec(v_size_1688_);
v_a_1714_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1716_ = v___x_1702_;
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1702_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1717_ == 0)
{
v___x_1719_ = v___x_1716_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1714_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
}
else
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
lean_del_object(v___x_1692_);
lean_dec(v_tailOff_1690_);
lean_dec(v_size_1688_);
lean_dec_ref(v_tail_1687_);
v_a_1722_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1694_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1694_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1___boxed(lean_object* v_t_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l_Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1(v_t_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec(v___y_1734_);
lean_dec_ref(v___y_1733_);
lean_dec(v___y_1732_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUsesLCtx(lean_object* v_ctx_1739_, lean_object* v_targetUses_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_){
_start:
{
lean_object* v_decls_1746_; lean_object* v_fvarIdToDecl_1747_; lean_object* v_auxDeclToFullName_1748_; lean_object* v_size_1749_; lean_object* v_decls_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v_decls_1746_ = lean_ctor_get(v_ctx_1739_, 1);
lean_inc_ref(v_decls_1746_);
v_fvarIdToDecl_1747_ = lean_ctor_get(v_ctx_1739_, 0);
lean_inc_ref(v_fvarIdToDecl_1747_);
v_auxDeclToFullName_1748_ = lean_ctor_get(v_ctx_1739_, 2);
lean_inc(v_auxDeclToFullName_1748_);
v_size_1749_ = lean_ctor_get(v_decls_1746_, 2);
v_decls_1750_ = lean_mk_empty_array_with_capacity(v_size_1749_);
v___x_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1751_, 0, v_decls_1750_);
lean_ctor_set(v___x_1751_, 1, v_targetUses_1740_);
v___x_1752_ = l_Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0(v_ctx_1739_, v___x_1751_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_object* v_a_1753_; lean_object* v_fst_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; 
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc(v_a_1753_);
lean_dec_ref_known(v___x_1752_, 1);
v_fst_1754_ = lean_ctor_get(v_a_1753_, 0);
lean_inc(v_fst_1754_);
lean_dec(v_a_1753_);
v___x_1755_ = lean_st_mk_ref(v_fst_1754_);
v___x_1756_ = l_Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1(v_decls_1746_, v___x_1755_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_);
if (lean_obj_tag(v___x_1756_) == 0)
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1766_; 
v_a_1757_ = lean_ctor_get(v___x_1756_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1756_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1759_ = v___x_1756_;
v_isShared_1760_ = v_isSharedCheck_1766_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1756_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1766_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1764_; 
v___x_1761_ = lean_st_ref_get(v___x_1755_);
lean_dec(v___x_1755_);
lean_dec(v___x_1761_);
v___x_1762_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1762_, 0, v_fvarIdToDecl_1747_);
lean_ctor_set(v___x_1762_, 1, v_a_1757_);
lean_ctor_set(v___x_1762_, 2, v_auxDeclToFullName_1748_);
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 0, v___x_1762_);
v___x_1764_ = v___x_1759_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1762_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
else
{
lean_object* v_a_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1774_; 
lean_dec(v___x_1755_);
lean_dec(v_auxDeclToFullName_1748_);
lean_dec_ref(v_fvarIdToDecl_1747_);
v_a_1767_ = lean_ctor_get(v___x_1756_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1756_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1769_ = v___x_1756_;
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_a_1767_);
lean_dec(v___x_1756_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1772_; 
if (v_isShared_1770_ == 0)
{
v___x_1772_ = v___x_1769_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_a_1767_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
}
else
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1782_; 
lean_dec(v_auxDeclToFullName_1748_);
lean_dec_ref(v_fvarIdToDecl_1747_);
lean_dec_ref(v_decls_1746_);
v_a_1775_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1777_ = v___x_1752_;
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1752_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1780_; 
if (v_isShared_1778_ == 0)
{
v___x_1780_ = v___x_1777_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1775_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_countUsesLCtx___boxed(lean_object* v_ctx_1783_, lean_object* v_targetUses_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Lean_Elab_Tactic_Do_countUsesLCtx(v_ctx_1783_, v_targetUses_1784_, v_a_1785_, v_a_1786_, v_a_1787_, v_a_1788_);
lean_dec(v_a_1788_);
lean_dec_ref(v_a_1787_);
lean_dec(v_a_1786_);
lean_dec_ref(v_a_1785_);
return v_res_1790_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_doNotDup(uint8_t v_u_1791_, lean_object* v_rhs_1792_, uint8_t v_elimTrivial_1793_){
_start:
{
uint8_t v___x_1794_; uint8_t v___x_1795_; 
v___x_1794_ = 2;
v___x_1795_ = l_Lean_Elab_Tactic_Do_instBEqUses_beq(v_u_1791_, v___x_1794_);
if (v___x_1795_ == 0)
{
return v___x_1795_;
}
else
{
if (v_elimTrivial_1793_ == 0)
{
return v___x_1795_;
}
else
{
uint8_t v___x_1796_; 
v___x_1796_ = l___private_Lean_Elab_Tactic_Do_LetElim_0__Lean_Elab_Tactic_Do_okToDup(v_rhs_1792_);
if (v___x_1796_ == 0)
{
return v___x_1795_;
}
else
{
uint8_t v___x_1797_; 
v___x_1797_ = 0;
return v___x_1797_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_doNotDup___boxed(lean_object* v_u_1798_, lean_object* v_rhs_1799_, lean_object* v_elimTrivial_1800_){
_start:
{
uint8_t v_u_boxed_1801_; uint8_t v_elimTrivial_boxed_1802_; uint8_t v_res_1803_; lean_object* v_r_1804_; 
v_u_boxed_1801_ = lean_unbox(v_u_1798_);
v_elimTrivial_boxed_1802_ = lean_unbox(v_elimTrivial_1800_);
v_res_1803_ = l_Lean_Elab_Tactic_Do_doNotDup(v_u_boxed_1801_, v_rhs_1799_, v_elimTrivial_boxed_1802_);
lean_dec_ref(v_rhs_1799_);
v_r_1804_ = lean_box(v_res_1803_);
return v_r_1804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0(uint8_t v_elimTrivial_1807_, lean_object* v_e_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
if (lean_obj_tag(v_e_1808_) == 8)
{
lean_object* v_type_1815_; 
v_type_1815_ = lean_ctor_get(v_e_1808_, 1);
if (lean_obj_tag(v_type_1815_) == 10)
{
lean_object* v_value_1816_; lean_object* v_body_1817_; lean_object* v_data_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; uint8_t v_uses_1822_; uint8_t v___x_1823_; 
v_value_1816_ = lean_ctor_get(v_e_1808_, 2);
v_body_1817_ = lean_ctor_get(v_e_1808_, 3);
v_data_1818_ = lean_ctor_get(v_type_1815_, 0);
v___x_1819_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_countUsesDecl___closed__2));
v___x_1820_ = lean_unsigned_to_nat(2u);
v___x_1821_ = l_Lean_KVMap_getNat(v_data_1818_, v___x_1819_, v___x_1820_);
v_uses_1822_ = l_Lean_Elab_Tactic_Do_Uses_fromNat(v___x_1821_);
lean_dec(v___x_1821_);
v___x_1823_ = l_Lean_Elab_Tactic_Do_doNotDup(v_uses_1822_, v_value_1816_, v_elimTrivial_1807_);
if (v___x_1823_ == 0)
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1824_ = lean_expr_instantiate1(v_body_1817_, v_value_1816_);
v___x_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
v___x_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
return v___x_1826_;
}
else
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1827_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0___closed__0));
v___x_1828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
return v___x_1828_;
}
}
else
{
lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1829_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0___closed__0));
v___x_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
return v___x_1830_;
}
}
else
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1831_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0___closed__0));
v___x_1832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1831_);
return v___x_1832_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0___boxed(lean_object* v_elimTrivial_1833_, lean_object* v_e_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
uint8_t v_elimTrivial_boxed_1841_; lean_object* v_res_1842_; 
v_elimTrivial_boxed_1841_ = lean_unbox(v_elimTrivial_1833_);
v_res_1842_ = l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0(v_elimTrivial_boxed_1841_, v_e_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
lean_dec(v___y_1835_);
lean_dec_ref(v_e_1834_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___lam__1(lean_object* v_e_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1850_, 0, v_e_1843_);
v___x_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___lam__1___boxed(lean_object* v_e_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_Lean_Elab_Tactic_Do_elimLetsCore___lam__1(v_e_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_);
lean_dec(v___y_1857_);
lean_dec_ref(v___y_1856_);
lean_dec(v___y_1855_);
lean_dec_ref(v___y_1854_);
lean_dec(v___y_1853_);
return v_res_1859_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__3(void){
_start:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = l_Lean_maxRecDepthErrorMessage;
v___x_1866_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1865_);
return v___x_1866_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__4(void){
_start:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1867_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__3);
v___x_1868_ = l_Lean_MessageData_ofFormat(v___x_1867_);
return v___x_1868_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__5(void){
_start:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1869_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__4);
v___x_1870_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__2));
v___x_1871_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1871_, 0, v___x_1870_);
lean_ctor_set(v___x_1871_, 1, v___x_1869_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg(lean_object* v_ref_1872_){
_start:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; 
v___x_1874_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___closed__5);
v___x_1875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1875_, 0, v_ref_1872_);
lean_ctor_set(v___x_1875_, 1, v___x_1874_);
v___x_1876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1876_, 0, v___x_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg___boxed(lean_object* v_ref_1877_, lean_object* v___y_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg(v_ref_1877_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9___redArg(lean_object* v_x_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v___y_1889_; lean_object* v_toCold_1898_; lean_object* v_currRecDepth_1899_; lean_object* v_ref_1900_; uint8_t v_diag_1901_; uint8_t v_suppressElabErrors_1902_; lean_object* v_maxRecDepth_1908_; lean_object* v___x_1909_; uint8_t v___x_1910_; 
v_toCold_1898_ = lean_ctor_get(v___y_1885_, 0);
v_currRecDepth_1899_ = lean_ctor_get(v___y_1885_, 1);
v_ref_1900_ = lean_ctor_get(v___y_1885_, 2);
v_diag_1901_ = lean_ctor_get_uint8(v___y_1885_, sizeof(void*)*3);
v_suppressElabErrors_1902_ = lean_ctor_get_uint8(v___y_1885_, sizeof(void*)*3 + 1);
v_maxRecDepth_1908_ = lean_ctor_get(v_toCold_1898_, 3);
v___x_1909_ = lean_unsigned_to_nat(0u);
v___x_1910_ = lean_nat_dec_eq(v_maxRecDepth_1908_, v___x_1909_);
if (v___x_1910_ == 0)
{
uint8_t v___x_1911_; 
v___x_1911_ = lean_nat_dec_eq(v_currRecDepth_1899_, v_maxRecDepth_1908_);
if (v___x_1911_ == 0)
{
goto v___jp_1903_;
}
else
{
lean_object* v___x_1912_; 
lean_dec_ref(v_x_1880_);
lean_inc(v_ref_1900_);
v___x_1912_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg(v_ref_1900_);
v___y_1889_ = v___x_1912_;
goto v___jp_1888_;
}
}
else
{
goto v___jp_1903_;
}
v___jp_1888_:
{
if (lean_obj_tag(v___y_1889_) == 0)
{
return v___y_1889_;
}
else
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
v_a_1890_ = lean_ctor_get(v___y_1889_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___y_1889_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___y_1889_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___y_1889_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
v___jp_1903_:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v___x_1904_ = lean_unsigned_to_nat(1u);
v___x_1905_ = lean_nat_add(v_currRecDepth_1899_, v___x_1904_);
lean_inc(v_ref_1900_);
lean_inc_ref(v_toCold_1898_);
v___x_1906_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1906_, 0, v_toCold_1898_);
lean_ctor_set(v___x_1906_, 1, v___x_1905_);
lean_ctor_set(v___x_1906_, 2, v_ref_1900_);
lean_ctor_set_uint8(v___x_1906_, sizeof(void*)*3, v_diag_1901_);
lean_ctor_set_uint8(v___x_1906_, sizeof(void*)*3 + 1, v_suppressElabErrors_1902_);
lean_inc(v___y_1886_);
lean_inc(v___y_1884_);
lean_inc_ref(v___y_1883_);
lean_inc(v___y_1882_);
lean_inc(v___y_1881_);
v___x_1907_ = lean_apply_7(v_x_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___x_1906_, v___y_1886_, lean_box(0));
v___y_1889_ = v___x_1907_;
goto v___jp_1888_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9___redArg___boxed(lean_object* v_x_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9___redArg(v_x_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
lean_dec(v___y_1915_);
lean_dec(v___y_1914_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5___redArg(lean_object* v_a_1922_, lean_object* v_x_1923_){
_start:
{
if (lean_obj_tag(v_x_1923_) == 0)
{
lean_object* v___x_1924_; 
v___x_1924_ = lean_box(0);
return v___x_1924_;
}
else
{
lean_object* v_key_1925_; lean_object* v_value_1926_; lean_object* v_tail_1927_; uint8_t v___x_1928_; 
v_key_1925_ = lean_ctor_get(v_x_1923_, 0);
v_value_1926_ = lean_ctor_get(v_x_1923_, 1);
v_tail_1927_ = lean_ctor_get(v_x_1923_, 2);
v___x_1928_ = l_Lean_ExprStructEq_beq(v_key_1925_, v_a_1922_);
if (v___x_1928_ == 0)
{
v_x_1923_ = v_tail_1927_;
goto _start;
}
else
{
lean_object* v___x_1930_; 
lean_inc(v_value_1926_);
v___x_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1930_, 0, v_value_1926_);
return v___x_1930_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object* v_a_1931_, lean_object* v_x_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5___redArg(v_a_1931_, v_x_1932_);
lean_dec(v_x_1932_);
lean_dec_ref(v_a_1931_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4___redArg(lean_object* v_m_1934_, lean_object* v_a_1935_){
_start:
{
lean_object* v_buckets_1936_; lean_object* v___x_1937_; uint64_t v___x_1938_; uint64_t v___x_1939_; uint64_t v___x_1940_; uint64_t v_fold_1941_; uint64_t v___x_1942_; uint64_t v___x_1943_; uint64_t v___x_1944_; size_t v___x_1945_; size_t v___x_1946_; size_t v___x_1947_; size_t v___x_1948_; size_t v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v_buckets_1936_ = lean_ctor_get(v_m_1934_, 1);
v___x_1937_ = lean_array_get_size(v_buckets_1936_);
v___x_1938_ = l_Lean_ExprStructEq_hash(v_a_1935_);
v___x_1939_ = 32ULL;
v___x_1940_ = lean_uint64_shift_right(v___x_1938_, v___x_1939_);
v_fold_1941_ = lean_uint64_xor(v___x_1938_, v___x_1940_);
v___x_1942_ = 16ULL;
v___x_1943_ = lean_uint64_shift_right(v_fold_1941_, v___x_1942_);
v___x_1944_ = lean_uint64_xor(v_fold_1941_, v___x_1943_);
v___x_1945_ = lean_uint64_to_usize(v___x_1944_);
v___x_1946_ = lean_usize_of_nat(v___x_1937_);
v___x_1947_ = ((size_t)1ULL);
v___x_1948_ = lean_usize_sub(v___x_1946_, v___x_1947_);
v___x_1949_ = lean_usize_land(v___x_1945_, v___x_1948_);
v___x_1950_ = lean_array_uget_borrowed(v_buckets_1936_, v___x_1949_);
v___x_1951_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5___redArg(v_a_1935_, v___x_1950_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_m_1952_, lean_object* v_a_1953_){
_start:
{
lean_object* v_res_1954_; 
v_res_1954_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4___redArg(v_m_1952_, v_a_1953_);
lean_dec_ref(v_a_1953_);
lean_dec_ref(v_m_1952_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg___lam__0(lean_object* v_k_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v_b_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
lean_object* v___x_1964_; 
lean_inc(v___y_1962_);
lean_inc_ref(v___y_1961_);
lean_inc(v___y_1960_);
lean_inc_ref(v___y_1959_);
lean_inc(v___y_1957_);
lean_inc(v___y_1956_);
v___x_1964_ = lean_apply_8(v_k_1955_, v_b_1958_, v___y_1956_, v___y_1957_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, lean_box(0));
return v___x_1964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg___lam__0___boxed(lean_object* v_k_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v_b_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg___lam__0(v_k_1965_, v___y_1966_, v___y_1967_, v_b_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v___y_1967_);
lean_dec(v___y_1966_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10___redArg(lean_object* v_name_1975_, lean_object* v_type_1976_, lean_object* v_val_1977_, lean_object* v_k_1978_, uint8_t v_nondep_1979_, uint8_t v_kind_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_){
_start:
{
lean_object* v___f_1988_; lean_object* v___x_1989_; 
lean_inc(v___y_1982_);
lean_inc(v___y_1981_);
v___f_1988_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1988_, 0, v_k_1978_);
lean_closure_set(v___f_1988_, 1, v___y_1981_);
lean_closure_set(v___f_1988_, 2, v___y_1982_);
v___x_1989_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1975_, v_type_1976_, v_val_1977_, v___f_1988_, v_nondep_1979_, v_kind_1980_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_);
if (lean_obj_tag(v___x_1989_) == 0)
{
return v___x_1989_;
}
else
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1989_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1989_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10___redArg___boxed(lean_object* v_name_1998_, lean_object* v_type_1999_, lean_object* v_val_2000_, lean_object* v_k_2001_, lean_object* v_nondep_2002_, lean_object* v_kind_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_){
_start:
{
uint8_t v_nondep_boxed_2011_; uint8_t v_kind_boxed_2012_; lean_object* v_res_2013_; 
v_nondep_boxed_2011_ = lean_unbox(v_nondep_2002_);
v_kind_boxed_2012_ = lean_unbox(v_kind_2003_);
v_res_2013_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10___redArg(v_name_1998_, v_type_1999_, v_val_2000_, v_k_2001_, v_nondep_boxed_2011_, v_kind_boxed_2012_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec(v___y_2004_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_name_2014_, uint8_t v_bi_2015_, lean_object* v_type_2016_, lean_object* v_k_2017_, uint8_t v_kind_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_){
_start:
{
lean_object* v___f_2026_; lean_object* v___x_2027_; 
lean_inc(v___y_2020_);
lean_inc(v___y_2019_);
v___f_2026_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2026_, 0, v_k_2017_);
lean_closure_set(v___f_2026_, 1, v___y_2019_);
lean_closure_set(v___f_2026_, 2, v___y_2020_);
v___x_2027_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2014_, v_bi_2015_, v_type_2016_, v___f_2026_, v_kind_2018_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_);
if (lean_obj_tag(v___x_2027_) == 0)
{
return v___x_2027_;
}
else
{
lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2035_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_2030_ = v___x_2027_;
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v___x_2027_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2033_; 
if (v_isShared_2031_ == 0)
{
v___x_2033_ = v___x_2030_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v_a_2028_);
v___x_2033_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
return v___x_2033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_name_2036_, lean_object* v_bi_2037_, lean_object* v_type_2038_, lean_object* v_k_2039_, lean_object* v_kind_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
uint8_t v_bi_boxed_2048_; uint8_t v_kind_boxed_2049_; lean_object* v_res_2050_; 
v_bi_boxed_2048_ = lean_unbox(v_bi_2037_);
v_kind_boxed_2049_ = lean_unbox(v_kind_2040_);
v_res_2050_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg(v_name_2036_, v_bi_boxed_2048_, v_type_2038_, v_k_2039_, v_kind_boxed_2049_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
lean_dec(v___y_2041_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__2(lean_object* v___x_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
lean_object* v___x_2058_; 
v___x_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2051_);
return v___x_2058_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__2___boxed(lean_object* v___x_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__2(v___x_2059_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec(v___y_2060_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_2067_, lean_object* v_x_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; 
v___x_2075_ = lean_apply_1(v_x_2068_, lean_box(0));
v___x_2076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2075_);
return v___x_2076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_2077_, lean_object* v_x_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_){
_start:
{
lean_object* v_res_2085_; 
v_res_2085_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__0(v_00_u03b1_2077_, v_x_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
lean_dec(v___y_2081_);
lean_dec_ref(v___y_2080_);
lean_dec(v___y_2079_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18___redArg(lean_object* v_x_2086_, lean_object* v_x_2087_){
_start:
{
if (lean_obj_tag(v_x_2087_) == 0)
{
return v_x_2086_;
}
else
{
lean_object* v_key_2088_; lean_object* v_value_2089_; lean_object* v_tail_2090_; lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2113_; 
v_key_2088_ = lean_ctor_get(v_x_2087_, 0);
v_value_2089_ = lean_ctor_get(v_x_2087_, 1);
v_tail_2090_ = lean_ctor_get(v_x_2087_, 2);
v_isSharedCheck_2113_ = !lean_is_exclusive(v_x_2087_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2092_ = v_x_2087_;
v_isShared_2093_ = v_isSharedCheck_2113_;
goto v_resetjp_2091_;
}
else
{
lean_inc(v_tail_2090_);
lean_inc(v_value_2089_);
lean_inc(v_key_2088_);
lean_dec(v_x_2087_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2113_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
lean_object* v___x_2094_; uint64_t v___x_2095_; uint64_t v___x_2096_; uint64_t v___x_2097_; uint64_t v_fold_2098_; uint64_t v___x_2099_; uint64_t v___x_2100_; uint64_t v___x_2101_; size_t v___x_2102_; size_t v___x_2103_; size_t v___x_2104_; size_t v___x_2105_; size_t v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2109_; 
v___x_2094_ = lean_array_get_size(v_x_2086_);
v___x_2095_ = l_Lean_ExprStructEq_hash(v_key_2088_);
v___x_2096_ = 32ULL;
v___x_2097_ = lean_uint64_shift_right(v___x_2095_, v___x_2096_);
v_fold_2098_ = lean_uint64_xor(v___x_2095_, v___x_2097_);
v___x_2099_ = 16ULL;
v___x_2100_ = lean_uint64_shift_right(v_fold_2098_, v___x_2099_);
v___x_2101_ = lean_uint64_xor(v_fold_2098_, v___x_2100_);
v___x_2102_ = lean_uint64_to_usize(v___x_2101_);
v___x_2103_ = lean_usize_of_nat(v___x_2094_);
v___x_2104_ = ((size_t)1ULL);
v___x_2105_ = lean_usize_sub(v___x_2103_, v___x_2104_);
v___x_2106_ = lean_usize_land(v___x_2102_, v___x_2105_);
v___x_2107_ = lean_array_uget_borrowed(v_x_2086_, v___x_2106_);
lean_inc(v___x_2107_);
if (v_isShared_2093_ == 0)
{
lean_ctor_set(v___x_2092_, 2, v___x_2107_);
v___x_2109_ = v___x_2092_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_key_2088_);
lean_ctor_set(v_reuseFailAlloc_2112_, 1, v_value_2089_);
lean_ctor_set(v_reuseFailAlloc_2112_, 2, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v___x_2110_; 
v___x_2110_ = lean_array_uset(v_x_2086_, v___x_2106_, v___x_2109_);
v_x_2086_ = v___x_2110_;
v_x_2087_ = v_tail_2090_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17___redArg(lean_object* v_i_2114_, lean_object* v_source_2115_, lean_object* v_target_2116_){
_start:
{
lean_object* v___x_2117_; uint8_t v___x_2118_; 
v___x_2117_ = lean_array_get_size(v_source_2115_);
v___x_2118_ = lean_nat_dec_lt(v_i_2114_, v___x_2117_);
if (v___x_2118_ == 0)
{
lean_dec_ref(v_source_2115_);
lean_dec(v_i_2114_);
return v_target_2116_;
}
else
{
lean_object* v_es_2119_; lean_object* v___x_2120_; lean_object* v_source_2121_; lean_object* v_target_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v_es_2119_ = lean_array_fget(v_source_2115_, v_i_2114_);
v___x_2120_ = lean_box(0);
v_source_2121_ = lean_array_fset(v_source_2115_, v_i_2114_, v___x_2120_);
v_target_2122_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18___redArg(v_target_2116_, v_es_2119_);
v___x_2123_ = lean_unsigned_to_nat(1u);
v___x_2124_ = lean_nat_add(v_i_2114_, v___x_2123_);
lean_dec(v_i_2114_);
v_i_2114_ = v___x_2124_;
v_source_2115_ = v_source_2121_;
v_target_2116_ = v_target_2122_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16___redArg(lean_object* v_data_2126_){
_start:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v_nbuckets_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2127_ = lean_array_get_size(v_data_2126_);
v___x_2128_ = lean_unsigned_to_nat(2u);
v_nbuckets_2129_ = lean_nat_mul(v___x_2127_, v___x_2128_);
v___x_2130_ = lean_unsigned_to_nat(0u);
v___x_2131_ = lean_box(0);
v___x_2132_ = lean_mk_array(v_nbuckets_2129_, v___x_2131_);
v___x_2133_ = lean_array_propagate_mark(v_data_2126_, v___x_2132_);
v___x_2134_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17___redArg(v___x_2130_, v_data_2126_, v___x_2133_);
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__17___redArg(lean_object* v_a_2135_, lean_object* v_b_2136_, lean_object* v_x_2137_){
_start:
{
if (lean_obj_tag(v_x_2137_) == 0)
{
lean_dec(v_b_2136_);
lean_dec_ref(v_a_2135_);
return v_x_2137_;
}
else
{
lean_object* v_key_2138_; lean_object* v_value_2139_; lean_object* v_tail_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2152_; 
v_key_2138_ = lean_ctor_get(v_x_2137_, 0);
v_value_2139_ = lean_ctor_get(v_x_2137_, 1);
v_tail_2140_ = lean_ctor_get(v_x_2137_, 2);
v_isSharedCheck_2152_ = !lean_is_exclusive(v_x_2137_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2142_ = v_x_2137_;
v_isShared_2143_ = v_isSharedCheck_2152_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_tail_2140_);
lean_inc(v_value_2139_);
lean_inc(v_key_2138_);
lean_dec(v_x_2137_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2152_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
uint8_t v___x_2144_; 
v___x_2144_ = l_Lean_ExprStructEq_beq(v_key_2138_, v_a_2135_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2145_; lean_object* v___x_2147_; 
v___x_2145_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__17___redArg(v_a_2135_, v_b_2136_, v_tail_2140_);
if (v_isShared_2143_ == 0)
{
lean_ctor_set(v___x_2142_, 2, v___x_2145_);
v___x_2147_ = v___x_2142_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v_key_2138_);
lean_ctor_set(v_reuseFailAlloc_2148_, 1, v_value_2139_);
lean_ctor_set(v_reuseFailAlloc_2148_, 2, v___x_2145_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
else
{
lean_object* v___x_2150_; 
lean_dec(v_value_2139_);
lean_dec(v_key_2138_);
if (v_isShared_2143_ == 0)
{
lean_ctor_set(v___x_2142_, 1, v_b_2136_);
lean_ctor_set(v___x_2142_, 0, v_a_2135_);
v___x_2150_ = v___x_2142_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2135_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_b_2136_);
lean_ctor_set(v_reuseFailAlloc_2151_, 2, v_tail_2140_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15___redArg(lean_object* v_a_2153_, lean_object* v_x_2154_){
_start:
{
if (lean_obj_tag(v_x_2154_) == 0)
{
uint8_t v___x_2155_; 
v___x_2155_ = 0;
return v___x_2155_;
}
else
{
lean_object* v_key_2156_; lean_object* v_tail_2157_; uint8_t v___x_2158_; 
v_key_2156_ = lean_ctor_get(v_x_2154_, 0);
v_tail_2157_ = lean_ctor_get(v_x_2154_, 2);
v___x_2158_ = l_Lean_ExprStructEq_beq(v_key_2156_, v_a_2153_);
if (v___x_2158_ == 0)
{
v_x_2154_ = v_tail_2157_;
goto _start;
}
else
{
return v___x_2158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15___redArg___boxed(lean_object* v_a_2160_, lean_object* v_x_2161_){
_start:
{
uint8_t v_res_2162_; lean_object* v_r_2163_; 
v_res_2162_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15___redArg(v_a_2160_, v_x_2161_);
lean_dec(v_x_2161_);
lean_dec_ref(v_a_2160_);
v_r_2163_ = lean_box(v_res_2162_);
return v_r_2163_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10___redArg(lean_object* v_m_2164_, lean_object* v_a_2165_, lean_object* v_b_2166_){
_start:
{
lean_object* v_size_2167_; lean_object* v_buckets_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2211_; 
v_size_2167_ = lean_ctor_get(v_m_2164_, 0);
v_buckets_2168_ = lean_ctor_get(v_m_2164_, 1);
v_isSharedCheck_2211_ = !lean_is_exclusive(v_m_2164_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2170_ = v_m_2164_;
v_isShared_2171_ = v_isSharedCheck_2211_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_buckets_2168_);
lean_inc(v_size_2167_);
lean_dec(v_m_2164_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2211_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v___x_2172_; uint64_t v___x_2173_; uint64_t v___x_2174_; uint64_t v___x_2175_; uint64_t v_fold_2176_; uint64_t v___x_2177_; uint64_t v___x_2178_; uint64_t v___x_2179_; size_t v___x_2180_; size_t v___x_2181_; size_t v___x_2182_; size_t v___x_2183_; size_t v___x_2184_; lean_object* v_bkt_2185_; uint8_t v___x_2186_; 
v___x_2172_ = lean_array_get_size(v_buckets_2168_);
v___x_2173_ = l_Lean_ExprStructEq_hash(v_a_2165_);
v___x_2174_ = 32ULL;
v___x_2175_ = lean_uint64_shift_right(v___x_2173_, v___x_2174_);
v_fold_2176_ = lean_uint64_xor(v___x_2173_, v___x_2175_);
v___x_2177_ = 16ULL;
v___x_2178_ = lean_uint64_shift_right(v_fold_2176_, v___x_2177_);
v___x_2179_ = lean_uint64_xor(v_fold_2176_, v___x_2178_);
v___x_2180_ = lean_uint64_to_usize(v___x_2179_);
v___x_2181_ = lean_usize_of_nat(v___x_2172_);
v___x_2182_ = ((size_t)1ULL);
v___x_2183_ = lean_usize_sub(v___x_2181_, v___x_2182_);
v___x_2184_ = lean_usize_land(v___x_2180_, v___x_2183_);
v_bkt_2185_ = lean_array_uget_borrowed(v_buckets_2168_, v___x_2184_);
v___x_2186_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15___redArg(v_a_2165_, v_bkt_2185_);
if (v___x_2186_ == 0)
{
lean_object* v___x_2187_; lean_object* v_size_x27_2188_; lean_object* v___x_2189_; lean_object* v_buckets_x27_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; uint8_t v___x_2196_; 
v___x_2187_ = lean_unsigned_to_nat(1u);
v_size_x27_2188_ = lean_nat_add(v_size_2167_, v___x_2187_);
lean_dec(v_size_2167_);
lean_inc(v_bkt_2185_);
v___x_2189_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2189_, 0, v_a_2165_);
lean_ctor_set(v___x_2189_, 1, v_b_2166_);
lean_ctor_set(v___x_2189_, 2, v_bkt_2185_);
v_buckets_x27_2190_ = lean_array_uset(v_buckets_2168_, v___x_2184_, v___x_2189_);
v___x_2191_ = lean_unsigned_to_nat(4u);
v___x_2192_ = lean_nat_mul(v_size_x27_2188_, v___x_2191_);
v___x_2193_ = lean_unsigned_to_nat(3u);
v___x_2194_ = lean_nat_div(v___x_2192_, v___x_2193_);
lean_dec(v___x_2192_);
v___x_2195_ = lean_array_get_size(v_buckets_x27_2190_);
v___x_2196_ = lean_nat_dec_le(v___x_2194_, v___x_2195_);
lean_dec(v___x_2194_);
if (v___x_2196_ == 0)
{
lean_object* v_val_2197_; lean_object* v___x_2199_; 
v_val_2197_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16___redArg(v_buckets_x27_2190_);
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 1, v_val_2197_);
lean_ctor_set(v___x_2170_, 0, v_size_x27_2188_);
v___x_2199_ = v___x_2170_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_size_x27_2188_);
lean_ctor_set(v_reuseFailAlloc_2200_, 1, v_val_2197_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
else
{
lean_object* v___x_2202_; 
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 1, v_buckets_x27_2190_);
lean_ctor_set(v___x_2170_, 0, v_size_x27_2188_);
v___x_2202_ = v___x_2170_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_size_x27_2188_);
lean_ctor_set(v_reuseFailAlloc_2203_, 1, v_buckets_x27_2190_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
else
{
lean_object* v___x_2204_; lean_object* v_buckets_x27_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2209_; 
lean_inc(v_bkt_2185_);
v___x_2204_ = lean_box(0);
v_buckets_x27_2205_ = lean_array_uset(v_buckets_2168_, v___x_2184_, v___x_2204_);
v___x_2206_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__17___redArg(v_a_2165_, v_b_2166_, v_bkt_2185_);
v___x_2207_ = lean_array_uset(v_buckets_x27_2205_, v___x_2184_, v___x_2206_);
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 1, v___x_2207_);
v___x_2209_ = v___x_2170_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_size_2167_);
lean_ctor_set(v_reuseFailAlloc_2210_, 1, v___x_2207_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
return v___x_2209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__2(lean_object* v_a_2212_, lean_object* v_e_2213_, lean_object* v_a_2214_){
_start:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2216_ = lean_st_ref_take(v_a_2212_);
v___x_2217_ = lean_box(0);
v___x_2218_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10___redArg(v___x_2216_, v_e_2213_, v_a_2214_);
v___x_2219_ = lean_st_ref_put(v_a_2212_, v___x_2218_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__2___boxed(lean_object* v_a_2220_, lean_object* v_e_2221_, lean_object* v_a_2222_, lean_object* v___y_2223_){
_start:
{
lean_object* v_res_2224_; 
v_res_2224_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__2(v_a_2220_, v_e_2221_, v_a_2222_);
lean_dec(v_a_2220_);
return v_res_2224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5___lam__0___boxed(lean_object* v_fvars_2225_, lean_object* v_pre_2226_, lean_object* v_post_2227_, lean_object* v_usedLetOnly_2228_, lean_object* v_skipConstInApp_2229_, lean_object* v_skipInstances_2230_, lean_object* v_body_2231_, lean_object* v_x_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
uint8_t v_usedLetOnly_boxed_2240_; uint8_t v_skipConstInApp_boxed_2241_; uint8_t v_skipInstances_boxed_2242_; lean_object* v_res_2243_; 
v_usedLetOnly_boxed_2240_ = lean_unbox(v_usedLetOnly_2228_);
v_skipConstInApp_boxed_2241_ = lean_unbox(v_skipConstInApp_2229_);
v_skipInstances_boxed_2242_ = lean_unbox(v_skipInstances_2230_);
v_res_2243_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5___lam__0(v_fvars_2225_, v_pre_2226_, v_post_2227_, v_usedLetOnly_boxed_2240_, v_skipConstInApp_boxed_2241_, v_skipInstances_boxed_2242_, v_body_2231_, v_x_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
lean_dec(v___y_2238_);
lean_dec_ref(v___y_2237_);
lean_dec(v___y_2236_);
lean_dec_ref(v___y_2235_);
lean_dec(v___y_2234_);
lean_dec(v___y_2233_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6___lam__0(lean_object* v_fvars_2247_, lean_object* v_pre_2248_, lean_object* v_post_2249_, uint8_t v_usedLetOnly_2250_, uint8_t v_skipConstInApp_2251_, uint8_t v_skipInstances_2252_, lean_object* v_body_2253_, lean_object* v_x_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2262_ = lean_array_push(v_fvars_2247_, v_x_2254_);
v___x_2263_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6(v_pre_2248_, v_post_2249_, v_usedLetOnly_2250_, v_skipConstInApp_2251_, v_skipInstances_2252_, v___x_2262_, v_body_2253_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6___lam__0___boxed(lean_object* v_fvars_2264_, lean_object* v_pre_2265_, lean_object* v_post_2266_, lean_object* v_usedLetOnly_2267_, lean_object* v_skipConstInApp_2268_, lean_object* v_skipInstances_2269_, lean_object* v_body_2270_, lean_object* v_x_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
uint8_t v_usedLetOnly_boxed_2279_; uint8_t v_skipConstInApp_boxed_2280_; uint8_t v_skipInstances_boxed_2281_; lean_object* v_res_2282_; 
v_usedLetOnly_boxed_2279_ = lean_unbox(v_usedLetOnly_2267_);
v_skipConstInApp_boxed_2280_ = lean_unbox(v_skipConstInApp_2268_);
v_skipInstances_boxed_2281_ = lean_unbox(v_skipInstances_2269_);
v_res_2282_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6___lam__0(v_fvars_2264_, v_pre_2265_, v_post_2266_, v_usedLetOnly_boxed_2279_, v_skipConstInApp_boxed_2280_, v_skipInstances_boxed_2281_, v_body_2270_, v_x_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec(v___y_2273_);
lean_dec(v___y_2272_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(lean_object* v_pre_2283_, lean_object* v_post_2284_, uint8_t v_usedLetOnly_2285_, uint8_t v_skipConstInApp_2286_, uint8_t v_skipInstances_2287_, lean_object* v_e_2288_, lean_object* v_a_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
lean_object* v___x_2296_; 
lean_inc_ref(v_post_2284_);
lean_inc(v___y_2294_);
lean_inc_ref(v___y_2293_);
lean_inc(v___y_2292_);
lean_inc_ref(v___y_2291_);
lean_inc(v___y_2290_);
lean_inc_ref(v_e_2288_);
v___x_2296_ = lean_apply_7(v_post_2284_, v_e_2288_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_, lean_box(0));
if (lean_obj_tag(v___x_2296_) == 0)
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2315_; 
v_a_2297_ = lean_ctor_get(v___x_2296_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2296_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2299_ = v___x_2296_;
v_isShared_2300_ = v_isSharedCheck_2315_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2296_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2315_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
switch(lean_obj_tag(v_a_2297_))
{
case 0:
{
lean_object* v_e_2301_; lean_object* v___x_2303_; 
lean_dec_ref(v_e_2288_);
lean_dec_ref(v_post_2284_);
lean_dec_ref(v_pre_2283_);
v_e_2301_ = lean_ctor_get(v_a_2297_, 0);
lean_inc_ref(v_e_2301_);
lean_dec_ref_known(v_a_2297_, 1);
if (v_isShared_2300_ == 0)
{
lean_ctor_set(v___x_2299_, 0, v_e_2301_);
v___x_2303_ = v___x_2299_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_e_2301_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
case 1:
{
lean_object* v_e_2305_; lean_object* v___x_2306_; 
lean_del_object(v___x_2299_);
lean_dec_ref(v_e_2288_);
v_e_2305_ = lean_ctor_get(v_a_2297_, 0);
lean_inc_ref(v_e_2305_);
lean_dec_ref_known(v_a_2297_, 1);
v___x_2306_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2283_, v_post_2284_, v_usedLetOnly_2285_, v_skipConstInApp_2286_, v_skipInstances_2287_, v_e_2305_, v_a_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
return v___x_2306_;
}
default: 
{
lean_object* v_e_x3f_2307_; 
lean_dec_ref(v_post_2284_);
lean_dec_ref(v_pre_2283_);
v_e_x3f_2307_ = lean_ctor_get(v_a_2297_, 0);
lean_inc(v_e_x3f_2307_);
lean_dec_ref_known(v_a_2297_, 1);
if (lean_obj_tag(v_e_x3f_2307_) == 0)
{
lean_object* v___x_2309_; 
if (v_isShared_2300_ == 0)
{
lean_ctor_set(v___x_2299_, 0, v_e_2288_);
v___x_2309_ = v___x_2299_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_e_2288_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
else
{
lean_object* v_val_2311_; lean_object* v___x_2313_; 
lean_dec_ref(v_e_2288_);
v_val_2311_ = lean_ctor_get(v_e_x3f_2307_, 0);
lean_inc(v_val_2311_);
lean_dec_ref_known(v_e_x3f_2307_, 1);
if (v_isShared_2300_ == 0)
{
lean_ctor_set(v___x_2299_, 0, v_val_2311_);
v___x_2313_ = v___x_2299_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_val_2311_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
}
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec_ref(v_e_2288_);
lean_dec_ref(v_post_2284_);
lean_dec_ref(v_pre_2283_);
v_a_2316_ = lean_ctor_get(v___x_2296_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2296_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2296_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2296_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6(lean_object* v_pre_2324_, lean_object* v_post_2325_, uint8_t v_usedLetOnly_2326_, uint8_t v_skipConstInApp_2327_, uint8_t v_skipInstances_2328_, lean_object* v_fvars_2329_, lean_object* v_e_2330_, lean_object* v_a_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
if (lean_obj_tag(v_e_2330_) == 6)
{
lean_object* v_binderName_2338_; lean_object* v_binderType_2339_; lean_object* v_body_2340_; uint8_t v_binderInfo_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___f_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v_binderName_2338_ = lean_ctor_get(v_e_2330_, 0);
lean_inc(v_binderName_2338_);
v_binderType_2339_ = lean_ctor_get(v_e_2330_, 1);
lean_inc_ref(v_binderType_2339_);
v_body_2340_ = lean_ctor_get(v_e_2330_, 2);
lean_inc_ref(v_body_2340_);
v_binderInfo_2341_ = lean_ctor_get_uint8(v_e_2330_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2330_, 3);
v___x_2342_ = lean_box(v_usedLetOnly_2326_);
v___x_2343_ = lean_box(v_skipConstInApp_2327_);
v___x_2344_ = lean_box(v_skipInstances_2328_);
lean_inc_ref(v_post_2325_);
lean_inc_ref(v_pre_2324_);
lean_inc_ref(v_fvars_2329_);
v___f_2345_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6___lam__0___boxed), 15, 7);
lean_closure_set(v___f_2345_, 0, v_fvars_2329_);
lean_closure_set(v___f_2345_, 1, v_pre_2324_);
lean_closure_set(v___f_2345_, 2, v_post_2325_);
lean_closure_set(v___f_2345_, 3, v___x_2342_);
lean_closure_set(v___f_2345_, 4, v___x_2343_);
lean_closure_set(v___f_2345_, 5, v___x_2344_);
lean_closure_set(v___f_2345_, 6, v_body_2340_);
v___x_2346_ = lean_expr_instantiate_rev(v_binderType_2339_, v_fvars_2329_);
lean_dec_ref(v_fvars_2329_);
lean_dec_ref(v_binderType_2339_);
v___x_2347_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2324_, v_post_2325_, v_usedLetOnly_2326_, v_skipConstInApp_2327_, v_skipInstances_2328_, v___x_2346_, v_a_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v_a_2348_; uint8_t v___x_2349_; lean_object* v___x_2350_; 
v_a_2348_ = lean_ctor_get(v___x_2347_, 0);
lean_inc(v_a_2348_);
lean_dec_ref_known(v___x_2347_, 1);
v___x_2349_ = 0;
v___x_2350_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg(v_binderName_2338_, v_binderInfo_2341_, v_a_2348_, v___f_2345_, v___x_2349_, v_a_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
return v___x_2350_;
}
else
{
lean_dec_ref(v___f_2345_);
lean_dec(v_binderName_2338_);
return v___x_2347_;
}
}
else
{
lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2351_ = lean_expr_instantiate_rev(v_e_2330_, v_fvars_2329_);
lean_dec_ref(v_e_2330_);
lean_inc_ref(v_post_2325_);
lean_inc_ref(v_pre_2324_);
v___x_2352_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2324_, v_post_2325_, v_usedLetOnly_2326_, v_skipConstInApp_2327_, v_skipInstances_2328_, v___x_2351_, v_a_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v_a_2353_; uint8_t v___x_2354_; uint8_t v___x_2355_; uint8_t v___x_2356_; lean_object* v___x_2357_; 
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_a_2353_);
lean_dec_ref_known(v___x_2352_, 1);
v___x_2354_ = 0;
v___x_2355_ = 1;
v___x_2356_ = 1;
v___x_2357_ = l_Lean_Meta_mkLambdaFVars(v_fvars_2329_, v_a_2353_, v___x_2354_, v_usedLetOnly_2326_, v___x_2354_, v___x_2355_, v___x_2356_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
if (lean_obj_tag(v___x_2357_) == 0)
{
lean_object* v_a_2358_; lean_object* v___x_2359_; 
v_a_2358_ = lean_ctor_get(v___x_2357_, 0);
lean_inc(v_a_2358_);
lean_dec_ref_known(v___x_2357_, 1);
v___x_2359_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(v_pre_2324_, v_post_2325_, v_usedLetOnly_2326_, v_skipConstInApp_2327_, v_skipInstances_2328_, v_a_2358_, v_a_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
return v___x_2359_;
}
else
{
lean_dec_ref(v_post_2325_);
lean_dec_ref(v_pre_2324_);
return v___x_2357_;
}
}
else
{
lean_dec_ref(v_fvars_2329_);
lean_dec_ref(v_post_2325_);
lean_dec_ref(v_pre_2324_);
return v___x_2352_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7___lam__0(lean_object* v_fvars_2360_, lean_object* v_pre_2361_, lean_object* v_post_2362_, uint8_t v_usedLetOnly_2363_, uint8_t v_skipConstInApp_2364_, uint8_t v_skipInstances_2365_, lean_object* v_body_2366_, lean_object* v_x_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_){
_start:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2375_ = lean_array_push(v_fvars_2360_, v_x_2367_);
v___x_2376_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7(v_pre_2361_, v_post_2362_, v_usedLetOnly_2363_, v_skipConstInApp_2364_, v_skipInstances_2365_, v___x_2375_, v_body_2366_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7___lam__0___boxed(lean_object* v_fvars_2377_, lean_object* v_pre_2378_, lean_object* v_post_2379_, lean_object* v_usedLetOnly_2380_, lean_object* v_skipConstInApp_2381_, lean_object* v_skipInstances_2382_, lean_object* v_body_2383_, lean_object* v_x_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_){
_start:
{
uint8_t v_usedLetOnly_boxed_2392_; uint8_t v_skipConstInApp_boxed_2393_; uint8_t v_skipInstances_boxed_2394_; lean_object* v_res_2395_; 
v_usedLetOnly_boxed_2392_ = lean_unbox(v_usedLetOnly_2380_);
v_skipConstInApp_boxed_2393_ = lean_unbox(v_skipConstInApp_2381_);
v_skipInstances_boxed_2394_ = lean_unbox(v_skipInstances_2382_);
v_res_2395_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7___lam__0(v_fvars_2377_, v_pre_2378_, v_post_2379_, v_usedLetOnly_boxed_2392_, v_skipConstInApp_boxed_2393_, v_skipInstances_boxed_2394_, v_body_2383_, v_x_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec(v___y_2385_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7(lean_object* v_pre_2396_, lean_object* v_post_2397_, uint8_t v_usedLetOnly_2398_, uint8_t v_skipConstInApp_2399_, uint8_t v_skipInstances_2400_, lean_object* v_fvars_2401_, lean_object* v_e_2402_, lean_object* v_a_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
if (lean_obj_tag(v_e_2402_) == 8)
{
lean_object* v_declName_2410_; lean_object* v_type_2411_; lean_object* v_value_2412_; lean_object* v_body_2413_; uint8_t v_nondep_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___f_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v_declName_2410_ = lean_ctor_get(v_e_2402_, 0);
lean_inc(v_declName_2410_);
v_type_2411_ = lean_ctor_get(v_e_2402_, 1);
lean_inc_ref(v_type_2411_);
v_value_2412_ = lean_ctor_get(v_e_2402_, 2);
lean_inc_ref(v_value_2412_);
v_body_2413_ = lean_ctor_get(v_e_2402_, 3);
lean_inc_ref(v_body_2413_);
v_nondep_2414_ = lean_ctor_get_uint8(v_e_2402_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2402_, 4);
v___x_2415_ = lean_box(v_usedLetOnly_2398_);
v___x_2416_ = lean_box(v_skipConstInApp_2399_);
v___x_2417_ = lean_box(v_skipInstances_2400_);
lean_inc_ref_n(v_post_2397_, 2);
lean_inc_ref_n(v_pre_2396_, 2);
lean_inc_ref(v_fvars_2401_);
v___f_2418_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7___lam__0___boxed), 15, 7);
lean_closure_set(v___f_2418_, 0, v_fvars_2401_);
lean_closure_set(v___f_2418_, 1, v_pre_2396_);
lean_closure_set(v___f_2418_, 2, v_post_2397_);
lean_closure_set(v___f_2418_, 3, v___x_2415_);
lean_closure_set(v___f_2418_, 4, v___x_2416_);
lean_closure_set(v___f_2418_, 5, v___x_2417_);
lean_closure_set(v___f_2418_, 6, v_body_2413_);
v___x_2419_ = lean_expr_instantiate_rev(v_type_2411_, v_fvars_2401_);
lean_dec_ref(v_type_2411_);
v___x_2420_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2396_, v_post_2397_, v_usedLetOnly_2398_, v_skipConstInApp_2399_, v_skipInstances_2400_, v___x_2419_, v_a_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v_a_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; 
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
lean_inc(v_a_2421_);
lean_dec_ref_known(v___x_2420_, 1);
v___x_2422_ = lean_expr_instantiate_rev(v_value_2412_, v_fvars_2401_);
lean_dec_ref(v_fvars_2401_);
lean_dec_ref(v_value_2412_);
v___x_2423_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2396_, v_post_2397_, v_usedLetOnly_2398_, v_skipConstInApp_2399_, v_skipInstances_2400_, v___x_2422_, v_a_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; uint8_t v___x_2425_; lean_object* v___x_2426_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
lean_inc(v_a_2424_);
lean_dec_ref_known(v___x_2423_, 1);
v___x_2425_ = 0;
v___x_2426_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10___redArg(v_declName_2410_, v_a_2421_, v_a_2424_, v___f_2418_, v_nondep_2414_, v___x_2425_, v_a_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
return v___x_2426_;
}
else
{
lean_dec(v_a_2421_);
lean_dec_ref(v___f_2418_);
lean_dec(v_declName_2410_);
return v___x_2423_;
}
}
else
{
lean_dec_ref(v___f_2418_);
lean_dec_ref(v_value_2412_);
lean_dec(v_declName_2410_);
lean_dec_ref(v_fvars_2401_);
lean_dec_ref(v_post_2397_);
lean_dec_ref(v_pre_2396_);
return v___x_2420_;
}
}
else
{
lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2427_ = lean_expr_instantiate_rev(v_e_2402_, v_fvars_2401_);
lean_dec_ref(v_e_2402_);
lean_inc_ref(v_post_2397_);
lean_inc_ref(v_pre_2396_);
v___x_2428_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2396_, v_post_2397_, v_usedLetOnly_2398_, v_skipConstInApp_2399_, v_skipInstances_2400_, v___x_2427_, v_a_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; uint8_t v___x_2430_; uint8_t v___x_2431_; lean_object* v___x_2432_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc(v_a_2429_);
lean_dec_ref_known(v___x_2428_, 1);
v___x_2430_ = 0;
v___x_2431_ = 1;
v___x_2432_ = l_Lean_Meta_mkLetFVars(v_fvars_2401_, v_a_2429_, v_usedLetOnly_2398_, v___x_2430_, v___x_2431_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v_a_2433_; lean_object* v___x_2434_; 
v_a_2433_ = lean_ctor_get(v___x_2432_, 0);
lean_inc(v_a_2433_);
lean_dec_ref_known(v___x_2432_, 1);
v___x_2434_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(v_pre_2396_, v_post_2397_, v_usedLetOnly_2398_, v_skipConstInApp_2399_, v_skipInstances_2400_, v_a_2433_, v_a_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
return v___x_2434_;
}
else
{
lean_dec_ref(v_post_2397_);
lean_dec_ref(v_pre_2396_);
return v___x_2432_;
}
}
else
{
lean_dec_ref(v_fvars_2401_);
lean_dec_ref(v_post_2397_);
lean_dec_ref(v_pre_2396_);
return v___x_2428_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2435_ = lean_box(0);
v___x_2436_ = l_unsafeCast___redArg(v___x_2435_);
return v___x_2436_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2437_; lean_object* v_dummy_2438_; 
v___x_2437_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__1);
v_dummy_2438_ = l_Lean_Expr_sort___override(v___x_2437_);
return v_dummy_2438_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__1(lean_object* v_pre_2439_, lean_object* v_post_2440_, uint8_t v_usedLetOnly_2441_, uint8_t v_skipConstInApp_2442_, uint8_t v_skipInstances_2443_, size_t v_sz_2444_, size_t v_i_2445_, lean_object* v_bs_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_){
_start:
{
uint8_t v___x_2454_; 
v___x_2454_ = lean_usize_dec_lt(v_i_2445_, v_sz_2444_);
if (v___x_2454_ == 0)
{
lean_object* v___x_2455_; lean_object* v___x_2456_; 
lean_dec_ref(v_post_2440_);
lean_dec_ref(v_pre_2439_);
v___x_2455_ = l_unsafeCast___redArg(v_bs_2446_);
lean_dec_ref(v_bs_2446_);
v___x_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2455_);
return v___x_2456_;
}
else
{
lean_object* v_v_2457_; lean_object* v___x_2458_; lean_object* v_bs_x27_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v_v_2457_ = lean_array_uget(v_bs_2446_, v_i_2445_);
v___x_2458_ = lean_unsigned_to_nat(0u);
v_bs_x27_2459_ = lean_array_uset(v_bs_2446_, v_i_2445_, v___x_2458_);
v___x_2460_ = l_unsafeCast___redArg(v_v_2457_);
lean_dec(v_v_2457_);
lean_inc_ref(v_post_2440_);
lean_inc_ref(v_pre_2439_);
v___x_2461_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2439_, v_post_2440_, v_usedLetOnly_2441_, v_skipConstInApp_2442_, v_skipInstances_2443_, v___x_2460_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_a_2462_; size_t v___x_2463_; size_t v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_a_2462_);
lean_dec_ref_known(v___x_2461_, 1);
v___x_2463_ = ((size_t)1ULL);
v___x_2464_ = lean_usize_add(v_i_2445_, v___x_2463_);
v___x_2465_ = l_unsafeCast___redArg(v_a_2462_);
lean_dec(v_a_2462_);
v___x_2466_ = lean_array_uset(v_bs_x27_2459_, v_i_2445_, v___x_2465_);
v_i_2445_ = v___x_2464_;
v_bs_2446_ = v___x_2466_;
goto _start;
}
else
{
lean_object* v_a_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2475_; 
lean_dec_ref(v_bs_x27_2459_);
lean_dec_ref(v_post_2440_);
lean_dec_ref(v_pre_2439_);
v_a_2468_ = lean_ctor_get(v___x_2461_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2470_ = v___x_2461_;
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_a_2468_);
lean_dec(v___x_2461_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v___x_2473_; 
if (v_isShared_2471_ == 0)
{
v___x_2473_ = v___x_2470_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_a_2468_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
return v___x_2473_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_2476_, lean_object* v_post_2477_, lean_object* v_usedLetOnly_2478_, lean_object* v_skipConstInApp_2479_, lean_object* v_skipInstances_2480_, lean_object* v_sz_2481_, lean_object* v_i_2482_, lean_object* v_bs_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_){
_start:
{
uint8_t v_usedLetOnly_boxed_2491_; uint8_t v_skipConstInApp_boxed_2492_; uint8_t v_skipInstances_boxed_2493_; size_t v_sz_boxed_2494_; size_t v_i_boxed_2495_; lean_object* v_res_2496_; 
v_usedLetOnly_boxed_2491_ = lean_unbox(v_usedLetOnly_2478_);
v_skipConstInApp_boxed_2492_ = lean_unbox(v_skipConstInApp_2479_);
v_skipInstances_boxed_2493_ = lean_unbox(v_skipInstances_2480_);
v_sz_boxed_2494_ = lean_unbox_usize(v_sz_2481_);
lean_dec(v_sz_2481_);
v_i_boxed_2495_ = lean_unbox_usize(v_i_2482_);
lean_dec(v_i_2482_);
v_res_2496_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__1(v_pre_2476_, v_post_2477_, v_usedLetOnly_boxed_2491_, v_skipConstInApp_boxed_2492_, v_skipInstances_boxed_2493_, v_sz_boxed_2494_, v_i_boxed_2495_, v_bs_2483_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec(v___y_2487_);
lean_dec_ref(v___y_2486_);
lean_dec(v___y_2485_);
lean_dec(v___y_2484_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__0(lean_object* v_pre_2497_, lean_object* v_post_2498_, uint8_t v_usedLetOnly_2499_, uint8_t v_skipConstInApp_2500_, uint8_t v_skipInstances_2501_, lean_object* v___x_2502_, lean_object* v___y_2503_, lean_object* v_b_2504_, lean_object* v_a_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_){
_start:
{
lean_object* v___x_2512_; 
v___x_2512_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2497_, v_post_2498_, v_usedLetOnly_2499_, v_skipConstInApp_2500_, v_skipInstances_2501_, v___x_2502_, v___y_2503_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_object* v_a_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2522_; 
v_a_2513_ = lean_ctor_get(v___x_2512_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2512_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2515_ = v___x_2512_;
v_isShared_2516_ = v_isSharedCheck_2522_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_a_2513_);
lean_dec(v___x_2512_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2522_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2520_; 
v___x_2517_ = lean_array_fset(v_b_2504_, v_a_2505_, v_a_2513_);
v___x_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2517_);
if (v_isShared_2516_ == 0)
{
lean_ctor_set(v___x_2515_, 0, v___x_2518_);
v___x_2520_ = v___x_2515_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v___x_2518_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
lean_dec_ref(v_b_2504_);
v_a_2523_ = lean_ctor_get(v___x_2512_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2512_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2512_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2512_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object* v_pre_2531_, lean_object* v_post_2532_, lean_object* v_usedLetOnly_2533_, lean_object* v_skipConstInApp_2534_, lean_object* v_skipInstances_2535_, lean_object* v___x_2536_, lean_object* v___y_2537_, lean_object* v_b_2538_, lean_object* v_a_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_){
_start:
{
uint8_t v_usedLetOnly_boxed_2546_; uint8_t v_skipConstInApp_boxed_2547_; uint8_t v_skipInstances_boxed_2548_; lean_object* v_res_2549_; 
v_usedLetOnly_boxed_2546_ = lean_unbox(v_usedLetOnly_2533_);
v_skipConstInApp_boxed_2547_ = lean_unbox(v_skipConstInApp_2534_);
v_skipInstances_boxed_2548_ = lean_unbox(v_skipInstances_2535_);
v_res_2549_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__0(v_pre_2531_, v_post_2532_, v_usedLetOnly_boxed_2546_, v_skipConstInApp_boxed_2547_, v_skipInstances_boxed_2548_, v___x_2536_, v___y_2537_, v_b_2538_, v_a_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_);
lean_dec(v___y_2544_);
lean_dec_ref(v___y_2543_);
lean_dec(v___y_2542_);
lean_dec_ref(v___y_2541_);
lean_dec(v___y_2540_);
lean_dec(v_a_2539_);
lean_dec(v___y_2537_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg(lean_object* v_upperBound_2550_, lean_object* v___x_2551_, lean_object* v_pre_2552_, lean_object* v_post_2553_, uint8_t v_usedLetOnly_2554_, uint8_t v_skipConstInApp_2555_, uint8_t v_skipInstances_2556_, lean_object* v_a_2557_, lean_object* v_b_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
lean_object* v___y_2567_; uint8_t v___x_2590_; 
v___x_2590_ = lean_nat_dec_lt(v_a_2557_, v_upperBound_2550_);
if (v___x_2590_ == 0)
{
lean_object* v___x_2591_; 
lean_dec(v_a_2557_);
lean_dec_ref(v_post_2553_);
lean_dec_ref(v_pre_2552_);
v___x_2591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2591_, 0, v_b_2558_);
return v___x_2591_;
}
else
{
lean_object* v___x_2592_; lean_object* v___x_2593_; uint8_t v___x_2594_; 
v___x_2592_ = lean_array_fget_borrowed(v_b_2558_, v_a_2557_);
v___x_2593_ = lean_array_get_size(v___x_2551_);
v___x_2594_ = lean_nat_dec_lt(v_a_2557_, v___x_2593_);
if (v___x_2594_ == 0)
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___f_2598_; 
lean_inc(v___x_2592_);
v___x_2595_ = lean_box(v_usedLetOnly_2554_);
v___x_2596_ = lean_box(v_skipConstInApp_2555_);
v___x_2597_ = lean_box(v_skipInstances_2556_);
lean_inc(v_a_2557_);
lean_inc(v___y_2559_);
lean_inc_ref(v_post_2553_);
lean_inc_ref(v_pre_2552_);
v___f_2598_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed), 15, 9);
lean_closure_set(v___f_2598_, 0, v_pre_2552_);
lean_closure_set(v___f_2598_, 1, v_post_2553_);
lean_closure_set(v___f_2598_, 2, v___x_2595_);
lean_closure_set(v___f_2598_, 3, v___x_2596_);
lean_closure_set(v___f_2598_, 4, v___x_2597_);
lean_closure_set(v___f_2598_, 5, v___x_2592_);
lean_closure_set(v___f_2598_, 6, v___y_2559_);
lean_closure_set(v___f_2598_, 7, v_b_2558_);
lean_closure_set(v___f_2598_, 8, v_a_2557_);
v___y_2567_ = v___f_2598_;
goto v___jp_2566_;
}
else
{
lean_object* v___x_2599_; uint8_t v_isInstance_2600_; 
v___x_2599_ = lean_array_fget_borrowed(v___x_2551_, v_a_2557_);
v_isInstance_2600_ = lean_ctor_get_uint8(v___x_2599_, sizeof(void*)*1 + 4);
if (v_isInstance_2600_ == 0)
{
lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___f_2604_; 
lean_inc(v___x_2592_);
v___x_2601_ = lean_box(v_usedLetOnly_2554_);
v___x_2602_ = lean_box(v_skipConstInApp_2555_);
v___x_2603_ = lean_box(v_skipInstances_2556_);
lean_inc(v_a_2557_);
lean_inc(v___y_2559_);
lean_inc_ref(v_post_2553_);
lean_inc_ref(v_pre_2552_);
v___f_2604_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed), 15, 9);
lean_closure_set(v___f_2604_, 0, v_pre_2552_);
lean_closure_set(v___f_2604_, 1, v_post_2553_);
lean_closure_set(v___f_2604_, 2, v___x_2601_);
lean_closure_set(v___f_2604_, 3, v___x_2602_);
lean_closure_set(v___f_2604_, 4, v___x_2603_);
lean_closure_set(v___f_2604_, 5, v___x_2592_);
lean_closure_set(v___f_2604_, 6, v___y_2559_);
lean_closure_set(v___f_2604_, 7, v_b_2558_);
lean_closure_set(v___f_2604_, 8, v_a_2557_);
v___y_2567_ = v___f_2604_;
goto v___jp_2566_;
}
else
{
lean_object* v___x_2605_; lean_object* v___f_2606_; 
v___x_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2605_, 0, v_b_2558_);
v___f_2606_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___lam__2___boxed), 7, 1);
lean_closure_set(v___f_2606_, 0, v___x_2605_);
v___y_2567_ = v___f_2606_;
goto v___jp_2566_;
}
}
}
v___jp_2566_:
{
lean_object* v___x_2568_; 
lean_inc(v___y_2564_);
lean_inc_ref(v___y_2563_);
lean_inc(v___y_2562_);
lean_inc_ref(v___y_2561_);
lean_inc(v___y_2560_);
v___x_2568_ = lean_apply_6(v___y_2567_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, lean_box(0));
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2581_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2571_ = v___x_2568_;
v_isShared_2572_ = v_isSharedCheck_2581_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2568_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2581_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
if (lean_obj_tag(v_a_2569_) == 0)
{
lean_object* v_a_2573_; lean_object* v___x_2575_; 
lean_dec(v_a_2557_);
lean_dec_ref(v_post_2553_);
lean_dec_ref(v_pre_2552_);
v_a_2573_ = lean_ctor_get(v_a_2569_, 0);
lean_inc(v_a_2573_);
lean_dec_ref_known(v_a_2569_, 1);
if (v_isShared_2572_ == 0)
{
lean_ctor_set(v___x_2571_, 0, v_a_2573_);
v___x_2575_ = v___x_2571_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_a_2573_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
lean_del_object(v___x_2571_);
v_a_2577_ = lean_ctor_get(v_a_2569_, 0);
lean_inc(v_a_2577_);
lean_dec_ref_known(v_a_2569_, 1);
v___x_2578_ = lean_unsigned_to_nat(1u);
v___x_2579_ = lean_nat_add(v_a_2557_, v___x_2578_);
lean_dec(v_a_2557_);
v_a_2557_ = v___x_2579_;
v_b_2558_ = v_a_2577_;
goto _start;
}
}
}
else
{
lean_object* v_a_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2589_; 
lean_dec(v_a_2557_);
lean_dec_ref(v_post_2553_);
lean_dec_ref(v_pre_2552_);
v_a_2582_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2584_ = v___x_2568_;
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_a_2582_);
lean_dec(v___x_2568_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2587_; 
if (v_isShared_2585_ == 0)
{
v___x_2587_ = v___x_2584_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v_a_2582_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__8(uint8_t v_skipInstances_2607_, lean_object* v_pre_2608_, lean_object* v_post_2609_, uint8_t v_usedLetOnly_2610_, uint8_t v_skipConstInApp_2611_, lean_object* v_x_2612_, lean_object* v_x_2613_, lean_object* v_x_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_){
_start:
{
lean_object* v_f_2623_; lean_object* v___y_2624_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; 
if (lean_obj_tag(v_x_2612_) == 5)
{
lean_object* v_fn_2679_; lean_object* v_arg_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
v_fn_2679_ = lean_ctor_get(v_x_2612_, 0);
lean_inc_ref(v_fn_2679_);
v_arg_2680_ = lean_ctor_get(v_x_2612_, 1);
lean_inc_ref(v_arg_2680_);
lean_dec_ref_known(v_x_2612_, 2);
v___x_2681_ = lean_array_set(v_x_2613_, v_x_2614_, v_arg_2680_);
v___x_2682_ = lean_unsigned_to_nat(1u);
v___x_2683_ = lean_nat_sub(v_x_2614_, v___x_2682_);
lean_dec(v_x_2614_);
v_x_2612_ = v_fn_2679_;
v_x_2613_ = v___x_2681_;
v_x_2614_ = v___x_2683_;
goto _start;
}
else
{
lean_dec(v_x_2614_);
if (v_skipConstInApp_2611_ == 0)
{
goto v___jp_2676_;
}
else
{
uint8_t v___x_2685_; 
v___x_2685_ = l_Lean_Expr_isConst(v_x_2612_);
if (v___x_2685_ == 0)
{
goto v___jp_2676_;
}
else
{
v_f_2623_ = v_x_2612_;
v___y_2624_ = v___y_2615_;
v___y_2625_ = v___y_2616_;
v___y_2626_ = v___y_2617_;
v___y_2627_ = v___y_2618_;
v___y_2628_ = v___y_2619_;
v___y_2629_ = v___y_2620_;
goto v___jp_2622_;
}
}
}
v___jp_2622_:
{
if (v_skipInstances_2607_ == 0)
{
size_t v_sz_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_13121__overap_2638_; lean_object* v___x_2639_; 
v_sz_2630_ = lean_array_size(v_x_2613_);
v___x_2631_ = l_unsafeCast___redArg(v_x_2613_);
lean_dec_ref(v_x_2613_);
v___x_2632_ = lean_box(v_usedLetOnly_2610_);
v___x_2633_ = lean_box(v_skipConstInApp_2611_);
v___x_2634_ = lean_box(v_skipInstances_2607_);
v___x_2635_ = lean_box_usize(v_sz_2630_);
v___x_2636_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__1_spec__2___boxed__const__1));
lean_inc_ref(v_post_2609_);
lean_inc_ref(v_pre_2608_);
v___x_2637_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__1___boxed), 15, 8);
lean_closure_set(v___x_2637_, 0, v_pre_2608_);
lean_closure_set(v___x_2637_, 1, v_post_2609_);
lean_closure_set(v___x_2637_, 2, v___x_2632_);
lean_closure_set(v___x_2637_, 3, v___x_2633_);
lean_closure_set(v___x_2637_, 4, v___x_2634_);
lean_closure_set(v___x_2637_, 5, v___x_2635_);
lean_closure_set(v___x_2637_, 6, v___x_2636_);
lean_closure_set(v___x_2637_, 7, v___x_2631_);
v___x_13121__overap_2638_ = l_unsafeCast___redArg(v___x_2637_);
lean_dec_ref(v___x_2637_);
lean_inc(v___y_2629_);
lean_inc_ref(v___y_2628_);
lean_inc(v___y_2627_);
lean_inc_ref(v___y_2626_);
lean_inc(v___y_2625_);
lean_inc(v___y_2624_);
v___x_2639_ = lean_apply_7(v___x_13121__overap_2638_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, lean_box(0));
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_a_2640_);
lean_dec_ref_known(v___x_2639_, 1);
v___x_2641_ = l_Lean_mkAppN(v_f_2623_, v_a_2640_);
lean_dec(v_a_2640_);
v___x_2642_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(v_pre_2608_, v_post_2609_, v_usedLetOnly_2610_, v_skipConstInApp_2611_, v_skipInstances_2607_, v___x_2641_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
return v___x_2642_;
}
else
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
lean_dec_ref(v_f_2623_);
lean_dec_ref(v_post_2609_);
lean_dec_ref(v_pre_2608_);
v_a_2643_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2639_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2639_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
}
else
{
lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2651_ = lean_array_get_size(v_x_2613_);
lean_inc_ref(v_f_2623_);
v___x_2652_ = l_Lean_Meta_getFunInfoNArgs(v_f_2623_, v___x_2651_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
if (lean_obj_tag(v___x_2652_) == 0)
{
lean_object* v_a_2653_; lean_object* v_paramInfo_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v_a_2653_ = lean_ctor_get(v___x_2652_, 0);
lean_inc(v_a_2653_);
lean_dec_ref_known(v___x_2652_, 1);
v_paramInfo_2654_ = lean_ctor_get(v_a_2653_, 0);
lean_inc_ref(v_paramInfo_2654_);
lean_dec(v_a_2653_);
v___x_2655_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_2609_);
lean_inc_ref(v_pre_2608_);
v___x_2656_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg(v___x_2651_, v_paramInfo_2654_, v_pre_2608_, v_post_2609_, v_usedLetOnly_2610_, v_skipConstInApp_2611_, v_skipInstances_2607_, v___x_2655_, v_x_2613_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
lean_dec_ref(v_paramInfo_2654_);
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_object* v_a_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
v_a_2657_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_a_2657_);
lean_dec_ref_known(v___x_2656_, 1);
v___x_2658_ = l_Lean_mkAppN(v_f_2623_, v_a_2657_);
lean_dec(v_a_2657_);
v___x_2659_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(v_pre_2608_, v_post_2609_, v_usedLetOnly_2610_, v_skipConstInApp_2611_, v_skipInstances_2607_, v___x_2658_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
return v___x_2659_;
}
else
{
lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2667_; 
lean_dec_ref(v_f_2623_);
lean_dec_ref(v_post_2609_);
lean_dec_ref(v_pre_2608_);
v_a_2660_ = lean_ctor_get(v___x_2656_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2656_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2662_ = v___x_2656_;
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2656_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v___x_2665_; 
if (v_isShared_2663_ == 0)
{
v___x_2665_ = v___x_2662_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_a_2660_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
}
else
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
lean_dec_ref(v_f_2623_);
lean_dec_ref(v_x_2613_);
lean_dec_ref(v_post_2609_);
lean_dec_ref(v_pre_2608_);
v_a_2668_ = lean_ctor_get(v___x_2652_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2652_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2670_ = v___x_2652_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2652_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_a_2668_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
}
}
v___jp_2676_:
{
lean_object* v___x_2677_; 
lean_inc_ref(v_post_2609_);
lean_inc_ref(v_pre_2608_);
v___x_2677_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2608_, v_post_2609_, v_usedLetOnly_2610_, v_skipConstInApp_2611_, v_skipInstances_2607_, v_x_2612_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_);
if (lean_obj_tag(v___x_2677_) == 0)
{
lean_object* v_a_2678_; 
v_a_2678_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_a_2678_);
lean_dec_ref_known(v___x_2677_, 1);
v_f_2623_ = v_a_2678_;
v___y_2624_ = v___y_2615_;
v___y_2625_ = v___y_2616_;
v___y_2626_ = v___y_2617_;
v___y_2627_ = v___y_2618_;
v___y_2628_ = v___y_2619_;
v___y_2629_ = v___y_2620_;
goto v___jp_2622_;
}
else
{
lean_dec_ref(v_x_2613_);
lean_dec_ref(v_post_2609_);
lean_dec_ref(v_pre_2608_);
return v___x_2677_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1(lean_object* v___x_2686_, lean_object* v_pre_2687_, lean_object* v_e_2688_, lean_object* v_post_2689_, uint8_t v_usedLetOnly_2690_, uint8_t v_skipConstInApp_2691_, uint8_t v_skipInstances_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v___x_2700_; 
v___x_2700_ = l_Lean_Core_checkSystem(v___x_2686_, v___y_2697_, v___y_2698_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v___x_2701_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_inc_ref(v_pre_2687_);
lean_inc(v___y_2698_);
lean_inc_ref(v___y_2697_);
lean_inc(v___y_2696_);
lean_inc_ref(v___y_2695_);
lean_inc(v___y_2694_);
lean_inc_ref(v_e_2688_);
v___x_2701_ = lean_apply_7(v_pre_2687_, v_e_2688_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, lean_box(0));
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2750_; 
v_a_2702_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2704_ = v___x_2701_;
v_isShared_2705_ = v_isSharedCheck_2750_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2701_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2750_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___y_2707_; 
switch(lean_obj_tag(v_a_2702_))
{
case 0:
{
lean_object* v_e_2742_; lean_object* v___x_2744_; 
lean_dec_ref(v_post_2689_);
lean_dec_ref(v_e_2688_);
lean_dec_ref(v_pre_2687_);
v_e_2742_ = lean_ctor_get(v_a_2702_, 0);
lean_inc_ref(v_e_2742_);
lean_dec_ref_known(v_a_2702_, 1);
if (v_isShared_2705_ == 0)
{
lean_ctor_set(v___x_2704_, 0, v_e_2742_);
v___x_2744_ = v___x_2704_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_e_2742_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
case 1:
{
lean_object* v_e_2746_; lean_object* v___x_2747_; 
lean_del_object(v___x_2704_);
lean_dec_ref(v_e_2688_);
v_e_2746_ = lean_ctor_get(v_a_2702_, 0);
lean_inc_ref(v_e_2746_);
lean_dec_ref_known(v_a_2702_, 1);
v___x_2747_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v_e_2746_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2747_;
}
default: 
{
lean_object* v_e_x3f_2748_; 
lean_del_object(v___x_2704_);
v_e_x3f_2748_ = lean_ctor_get(v_a_2702_, 0);
lean_inc(v_e_x3f_2748_);
lean_dec_ref_known(v_a_2702_, 1);
if (lean_obj_tag(v_e_x3f_2748_) == 0)
{
v___y_2707_ = v_e_2688_;
goto v___jp_2706_;
}
else
{
lean_object* v_val_2749_; 
lean_dec_ref(v_e_2688_);
v_val_2749_ = lean_ctor_get(v_e_x3f_2748_, 0);
lean_inc(v_val_2749_);
lean_dec_ref_known(v_e_x3f_2748_, 1);
v___y_2707_ = v_val_2749_;
goto v___jp_2706_;
}
}
}
v___jp_2706_:
{
switch(lean_obj_tag(v___y_2707_))
{
case 7:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2708_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__0));
v___x_2709_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5(v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v___x_2708_, v___y_2707_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2709_;
}
case 6:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; 
v___x_2710_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__0));
v___x_2711_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6(v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v___x_2710_, v___y_2707_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2711_;
}
case 8:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; 
v___x_2712_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__0));
v___x_2713_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7(v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v___x_2712_, v___y_2707_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2713_;
}
case 5:
{
lean_object* v_dummy_2714_; lean_object* v_nargs_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; 
v_dummy_2714_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__2, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__2_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___closed__2);
v_nargs_2715_ = l_Lean_Expr_getAppNumArgs(v___y_2707_);
lean_inc(v_nargs_2715_);
v___x_2716_ = lean_mk_array(v_nargs_2715_, v_dummy_2714_);
v___x_2717_ = lean_unsigned_to_nat(1u);
v___x_2718_ = lean_nat_sub(v_nargs_2715_, v___x_2717_);
lean_dec(v_nargs_2715_);
v___x_2719_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__8(v_skipInstances_2692_, v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v___y_2707_, v___x_2716_, v___x_2718_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2719_;
}
case 10:
{
lean_object* v_data_2720_; lean_object* v_expr_2721_; lean_object* v___x_2722_; 
v_data_2720_ = lean_ctor_get(v___y_2707_, 0);
v_expr_2721_ = lean_ctor_get(v___y_2707_, 1);
lean_inc_ref(v_expr_2721_);
lean_inc_ref(v_post_2689_);
lean_inc_ref(v_pre_2687_);
v___x_2722_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v_expr_2721_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
if (lean_obj_tag(v___x_2722_) == 0)
{
lean_object* v_a_2723_; size_t v___x_2724_; size_t v___x_2725_; uint8_t v___x_2726_; 
v_a_2723_ = lean_ctor_get(v___x_2722_, 0);
lean_inc(v_a_2723_);
lean_dec_ref_known(v___x_2722_, 1);
v___x_2724_ = lean_ptr_addr(v_expr_2721_);
v___x_2725_ = lean_ptr_addr(v_a_2723_);
v___x_2726_ = lean_usize_dec_eq(v___x_2724_, v___x_2725_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2727_; lean_object* v___x_2728_; 
lean_inc(v_data_2720_);
lean_dec_ref_known(v___y_2707_, 2);
v___x_2727_ = l_Lean_Expr_mdata___override(v_data_2720_, v_a_2723_);
v___x_2728_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v___x_2727_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2728_;
}
else
{
lean_object* v___x_2729_; 
lean_dec(v_a_2723_);
v___x_2729_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v___y_2707_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2729_;
}
}
else
{
lean_dec_ref_known(v___y_2707_, 2);
lean_dec_ref(v_post_2689_);
lean_dec_ref(v_pre_2687_);
return v___x_2722_;
}
}
case 11:
{
lean_object* v_typeName_2730_; lean_object* v_idx_2731_; lean_object* v_struct_2732_; lean_object* v___x_2733_; 
v_typeName_2730_ = lean_ctor_get(v___y_2707_, 0);
v_idx_2731_ = lean_ctor_get(v___y_2707_, 1);
v_struct_2732_ = lean_ctor_get(v___y_2707_, 2);
lean_inc_ref(v_struct_2732_);
lean_inc_ref(v_post_2689_);
lean_inc_ref(v_pre_2687_);
v___x_2733_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v_struct_2732_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
if (lean_obj_tag(v___x_2733_) == 0)
{
lean_object* v_a_2734_; size_t v___x_2735_; size_t v___x_2736_; uint8_t v___x_2737_; 
v_a_2734_ = lean_ctor_get(v___x_2733_, 0);
lean_inc(v_a_2734_);
lean_dec_ref_known(v___x_2733_, 1);
v___x_2735_ = lean_ptr_addr(v_struct_2732_);
v___x_2736_ = lean_ptr_addr(v_a_2734_);
v___x_2737_ = lean_usize_dec_eq(v___x_2735_, v___x_2736_);
if (v___x_2737_ == 0)
{
lean_object* v___x_2738_; lean_object* v___x_2739_; 
lean_inc(v_idx_2731_);
lean_inc(v_typeName_2730_);
lean_dec_ref_known(v___y_2707_, 3);
v___x_2738_ = l_Lean_Expr_proj___override(v_typeName_2730_, v_idx_2731_, v_a_2734_);
v___x_2739_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v___x_2738_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2739_;
}
else
{
lean_object* v___x_2740_; 
lean_dec(v_a_2734_);
v___x_2740_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v___y_2707_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2740_;
}
}
else
{
lean_dec_ref_known(v___y_2707_, 3);
lean_dec_ref(v_post_2689_);
lean_dec_ref(v_pre_2687_);
return v___x_2733_;
}
}
default: 
{
lean_object* v___x_2741_; 
v___x_2741_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(v_pre_2687_, v_post_2689_, v_usedLetOnly_2690_, v_skipConstInApp_2691_, v_skipInstances_2692_, v___y_2707_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2741_;
}
}
}
}
}
else
{
lean_object* v_a_2751_; lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2758_; 
lean_dec_ref(v_post_2689_);
lean_dec_ref(v_e_2688_);
lean_dec_ref(v_pre_2687_);
v_a_2751_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2758_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2758_ == 0)
{
v___x_2753_ = v___x_2701_;
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
else
{
lean_inc(v_a_2751_);
lean_dec(v___x_2701_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
lean_object* v___x_2756_; 
if (v_isShared_2754_ == 0)
{
v___x_2756_ = v___x_2753_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_a_2751_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
return v___x_2756_;
}
}
}
}
else
{
lean_object* v_a_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2766_; 
lean_dec_ref(v_post_2689_);
lean_dec_ref(v_e_2688_);
lean_dec_ref(v_pre_2687_);
v_a_2759_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2766_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2766_ == 0)
{
v___x_2761_ = v___x_2700_;
v_isShared_2762_ = v_isSharedCheck_2766_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_a_2759_);
lean_dec(v___x_2700_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2766_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v___x_2764_; 
if (v_isShared_2762_ == 0)
{
v___x_2764_ = v___x_2761_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v_a_2759_);
v___x_2764_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
return v___x_2764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___boxed(lean_object* v___x_2767_, lean_object* v_pre_2768_, lean_object* v_e_2769_, lean_object* v_post_2770_, lean_object* v_usedLetOnly_2771_, lean_object* v_skipConstInApp_2772_, lean_object* v_skipInstances_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_){
_start:
{
uint8_t v_usedLetOnly_boxed_2781_; uint8_t v_skipConstInApp_boxed_2782_; uint8_t v_skipInstances_boxed_2783_; lean_object* v_res_2784_; 
v_usedLetOnly_boxed_2781_ = lean_unbox(v_usedLetOnly_2771_);
v_skipConstInApp_boxed_2782_ = lean_unbox(v_skipConstInApp_2772_);
v_skipInstances_boxed_2783_ = lean_unbox(v_skipInstances_2773_);
v_res_2784_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1(v___x_2767_, v_pre_2768_, v_e_2769_, v_post_2770_, v_usedLetOnly_boxed_2781_, v_skipConstInApp_boxed_2782_, v_skipInstances_boxed_2783_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_);
lean_dec(v___y_2779_);
lean_dec_ref(v___y_2778_);
lean_dec(v___y_2777_);
lean_dec_ref(v___y_2776_);
lean_dec(v___y_2775_);
lean_dec(v___y_2774_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(lean_object* v_pre_2785_, lean_object* v_post_2786_, uint8_t v_usedLetOnly_2787_, uint8_t v_skipConstInApp_2788_, uint8_t v_skipInstances_2789_, lean_object* v_e_2790_, lean_object* v_a_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; 
lean_inc(v_a_2791_);
v___x_2798_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2798_, 0, lean_box(0));
lean_closure_set(v___x_2798_, 1, lean_box(0));
lean_closure_set(v___x_2798_, 2, v_a_2791_);
v___x_2799_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__0(lean_box(0), v___x_2798_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_a_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2834_; 
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2802_ = v___x_2799_;
v_isShared_2803_ = v_isSharedCheck_2834_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_a_2800_);
lean_dec(v___x_2799_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2834_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2804_; 
v___x_2804_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4___redArg(v_a_2800_, v_e_2790_);
lean_dec(v_a_2800_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___f_2809_; lean_object* v___x_2810_; 
lean_del_object(v___x_2802_);
v___x_2805_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___closed__0));
v___x_2806_ = lean_box(v_usedLetOnly_2787_);
v___x_2807_ = lean_box(v_skipConstInApp_2788_);
v___x_2808_ = lean_box(v_skipInstances_2789_);
lean_inc_ref(v_e_2790_);
v___f_2809_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__1___boxed), 14, 7);
lean_closure_set(v___f_2809_, 0, v___x_2805_);
lean_closure_set(v___f_2809_, 1, v_pre_2785_);
lean_closure_set(v___f_2809_, 2, v_e_2790_);
lean_closure_set(v___f_2809_, 3, v_post_2786_);
lean_closure_set(v___f_2809_, 4, v___x_2806_);
lean_closure_set(v___f_2809_, 5, v___x_2807_);
lean_closure_set(v___f_2809_, 6, v___x_2808_);
v___x_2810_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9___redArg(v___f_2809_, v_a_2791_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_object* v_a_2811_; lean_object* v___f_2812_; lean_object* v___x_2813_; 
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc_n(v_a_2811_, 2);
lean_dec_ref_known(v___x_2810_, 1);
lean_inc(v_a_2791_);
v___f_2812_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2812_, 0, v_a_2791_);
lean_closure_set(v___f_2812_, 1, v_e_2790_);
lean_closure_set(v___f_2812_, 2, v_a_2811_);
v___x_2813_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___lam__0(lean_box(0), v___f_2812_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2820_; 
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2820_ == 0)
{
lean_object* v_unused_2821_; 
v_unused_2821_ = lean_ctor_get(v___x_2813_, 0);
lean_dec(v_unused_2821_);
v___x_2815_ = v___x_2813_;
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
else
{
lean_dec(v___x_2813_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2818_; 
if (v_isShared_2816_ == 0)
{
lean_ctor_set(v___x_2815_, 0, v_a_2811_);
v___x_2818_ = v___x_2815_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_a_2811_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
}
else
{
lean_object* v_a_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2829_; 
lean_dec(v_a_2811_);
v_a_2822_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2829_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2829_ == 0)
{
v___x_2824_ = v___x_2813_;
v_isShared_2825_ = v_isSharedCheck_2829_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_a_2822_);
lean_dec(v___x_2813_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2829_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2827_; 
if (v_isShared_2825_ == 0)
{
v___x_2827_ = v___x_2824_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v_a_2822_);
v___x_2827_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
return v___x_2827_;
}
}
}
}
else
{
lean_dec_ref(v_e_2790_);
return v___x_2810_;
}
}
else
{
lean_object* v_val_2830_; lean_object* v___x_2832_; 
lean_dec_ref(v_e_2790_);
lean_dec_ref(v_post_2786_);
lean_dec_ref(v_pre_2785_);
v_val_2830_ = lean_ctor_get(v___x_2804_, 0);
lean_inc(v_val_2830_);
lean_dec_ref_known(v___x_2804_, 1);
if (v_isShared_2803_ == 0)
{
lean_ctor_set(v___x_2802_, 0, v_val_2830_);
v___x_2832_ = v___x_2802_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_val_2830_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2842_; 
lean_dec_ref(v_e_2790_);
lean_dec_ref(v_post_2786_);
lean_dec_ref(v_pre_2785_);
v_a_2835_ = lean_ctor_get(v___x_2799_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2837_ = v___x_2799_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2799_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2838_ == 0)
{
v___x_2840_ = v___x_2837_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_a_2835_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5(lean_object* v_pre_2843_, lean_object* v_post_2844_, uint8_t v_usedLetOnly_2845_, uint8_t v_skipConstInApp_2846_, uint8_t v_skipInstances_2847_, lean_object* v_fvars_2848_, lean_object* v_e_2849_, lean_object* v_a_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_){
_start:
{
if (lean_obj_tag(v_e_2849_) == 7)
{
lean_object* v_binderName_2857_; lean_object* v_binderType_2858_; lean_object* v_body_2859_; uint8_t v_binderInfo_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___f_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
v_binderName_2857_ = lean_ctor_get(v_e_2849_, 0);
lean_inc(v_binderName_2857_);
v_binderType_2858_ = lean_ctor_get(v_e_2849_, 1);
lean_inc_ref(v_binderType_2858_);
v_body_2859_ = lean_ctor_get(v_e_2849_, 2);
lean_inc_ref(v_body_2859_);
v_binderInfo_2860_ = lean_ctor_get_uint8(v_e_2849_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2849_, 3);
v___x_2861_ = lean_box(v_usedLetOnly_2845_);
v___x_2862_ = lean_box(v_skipConstInApp_2846_);
v___x_2863_ = lean_box(v_skipInstances_2847_);
lean_inc_ref(v_post_2844_);
lean_inc_ref(v_pre_2843_);
lean_inc_ref(v_fvars_2848_);
v___f_2864_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5___lam__0___boxed), 15, 7);
lean_closure_set(v___f_2864_, 0, v_fvars_2848_);
lean_closure_set(v___f_2864_, 1, v_pre_2843_);
lean_closure_set(v___f_2864_, 2, v_post_2844_);
lean_closure_set(v___f_2864_, 3, v___x_2861_);
lean_closure_set(v___f_2864_, 4, v___x_2862_);
lean_closure_set(v___f_2864_, 5, v___x_2863_);
lean_closure_set(v___f_2864_, 6, v_body_2859_);
v___x_2865_ = lean_expr_instantiate_rev(v_binderType_2858_, v_fvars_2848_);
lean_dec_ref(v_fvars_2848_);
lean_dec_ref(v_binderType_2858_);
v___x_2866_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2843_, v_post_2844_, v_usedLetOnly_2845_, v_skipConstInApp_2846_, v_skipInstances_2847_, v___x_2865_, v_a_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v_a_2867_; uint8_t v___x_2868_; lean_object* v___x_2869_; 
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
lean_inc(v_a_2867_);
lean_dec_ref_known(v___x_2866_, 1);
v___x_2868_ = 0;
v___x_2869_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg(v_binderName_2857_, v_binderInfo_2860_, v_a_2867_, v___f_2864_, v___x_2868_, v_a_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
return v___x_2869_;
}
else
{
lean_dec_ref(v___f_2864_);
lean_dec(v_binderName_2857_);
return v___x_2866_;
}
}
else
{
lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2870_ = lean_expr_instantiate_rev(v_e_2849_, v_fvars_2848_);
lean_dec_ref(v_e_2849_);
lean_inc_ref(v_post_2844_);
lean_inc_ref(v_pre_2843_);
v___x_2871_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2843_, v_post_2844_, v_usedLetOnly_2845_, v_skipConstInApp_2846_, v_skipInstances_2847_, v___x_2870_, v_a_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
if (lean_obj_tag(v___x_2871_) == 0)
{
lean_object* v_a_2872_; uint8_t v___x_2873_; uint8_t v___x_2874_; uint8_t v___x_2875_; lean_object* v___x_2876_; 
v_a_2872_ = lean_ctor_get(v___x_2871_, 0);
lean_inc(v_a_2872_);
lean_dec_ref_known(v___x_2871_, 1);
v___x_2873_ = 0;
v___x_2874_ = 1;
v___x_2875_ = 1;
v___x_2876_ = l_Lean_Meta_mkForallFVars(v_fvars_2848_, v_a_2872_, v___x_2873_, v_usedLetOnly_2845_, v___x_2874_, v___x_2875_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2878_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2877_);
lean_dec_ref_known(v___x_2876_, 1);
v___x_2878_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(v_pre_2843_, v_post_2844_, v_usedLetOnly_2845_, v_skipConstInApp_2846_, v_skipInstances_2847_, v_a_2877_, v_a_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
return v___x_2878_;
}
else
{
lean_dec_ref(v_post_2844_);
lean_dec_ref(v_pre_2843_);
return v___x_2876_;
}
}
else
{
lean_dec_ref(v_fvars_2848_);
lean_dec_ref(v_post_2844_);
lean_dec_ref(v_pre_2843_);
return v___x_2871_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5___lam__0(lean_object* v_fvars_2879_, lean_object* v_pre_2880_, lean_object* v_post_2881_, uint8_t v_usedLetOnly_2882_, uint8_t v_skipConstInApp_2883_, uint8_t v_skipInstances_2884_, lean_object* v_body_2885_, lean_object* v_x_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_){
_start:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; 
v___x_2894_ = lean_array_push(v_fvars_2879_, v_x_2886_);
v___x_2895_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5(v_pre_2880_, v_post_2881_, v_usedLetOnly_2882_, v_skipConstInApp_2883_, v_skipInstances_2884_, v___x_2894_, v_body_2885_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_2896_, lean_object* v_post_2897_, lean_object* v_usedLetOnly_2898_, lean_object* v_skipConstInApp_2899_, lean_object* v_skipInstances_2900_, lean_object* v_e_2901_, lean_object* v_a_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_){
_start:
{
uint8_t v_usedLetOnly_boxed_2909_; uint8_t v_skipConstInApp_boxed_2910_; uint8_t v_skipInstances_boxed_2911_; lean_object* v_res_2912_; 
v_usedLetOnly_boxed_2909_ = lean_unbox(v_usedLetOnly_2898_);
v_skipConstInApp_boxed_2910_ = lean_unbox(v_skipConstInApp_2899_);
v_skipInstances_boxed_2911_ = lean_unbox(v_skipInstances_2900_);
v_res_2912_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__2(v_pre_2896_, v_post_2897_, v_usedLetOnly_boxed_2909_, v_skipConstInApp_boxed_2910_, v_skipInstances_boxed_2911_, v_e_2901_, v_a_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec(v___y_2903_);
lean_dec(v_a_2902_);
return v_res_2912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0___boxed(lean_object* v_pre_2913_, lean_object* v_post_2914_, lean_object* v_usedLetOnly_2915_, lean_object* v_skipConstInApp_2916_, lean_object* v_skipInstances_2917_, lean_object* v_e_2918_, lean_object* v_a_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_){
_start:
{
uint8_t v_usedLetOnly_boxed_2926_; uint8_t v_skipConstInApp_boxed_2927_; uint8_t v_skipInstances_boxed_2928_; lean_object* v_res_2929_; 
v_usedLetOnly_boxed_2926_ = lean_unbox(v_usedLetOnly_2915_);
v_skipConstInApp_boxed_2927_ = lean_unbox(v_skipConstInApp_2916_);
v_skipInstances_boxed_2928_ = lean_unbox(v_skipInstances_2917_);
v_res_2929_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_2913_, v_post_2914_, v_usedLetOnly_boxed_2926_, v_skipConstInApp_boxed_2927_, v_skipInstances_boxed_2928_, v_e_2918_, v_a_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec(v_a_2919_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5___boxed(lean_object* v_pre_2930_, lean_object* v_post_2931_, lean_object* v_usedLetOnly_2932_, lean_object* v_skipConstInApp_2933_, lean_object* v_skipInstances_2934_, lean_object* v_fvars_2935_, lean_object* v_e_2936_, lean_object* v_a_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_){
_start:
{
uint8_t v_usedLetOnly_boxed_2944_; uint8_t v_skipConstInApp_boxed_2945_; uint8_t v_skipInstances_boxed_2946_; lean_object* v_res_2947_; 
v_usedLetOnly_boxed_2944_ = lean_unbox(v_usedLetOnly_2932_);
v_skipConstInApp_boxed_2945_ = lean_unbox(v_skipConstInApp_2933_);
v_skipInstances_boxed_2946_ = lean_unbox(v_skipInstances_2934_);
v_res_2947_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5(v_pre_2930_, v_post_2931_, v_usedLetOnly_boxed_2944_, v_skipConstInApp_boxed_2945_, v_skipInstances_boxed_2946_, v_fvars_2935_, v_e_2936_, v_a_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
lean_dec(v___y_2942_);
lean_dec_ref(v___y_2941_);
lean_dec(v___y_2940_);
lean_dec_ref(v___y_2939_);
lean_dec(v___y_2938_);
lean_dec(v_a_2937_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6___boxed(lean_object* v_pre_2948_, lean_object* v_post_2949_, lean_object* v_usedLetOnly_2950_, lean_object* v_skipConstInApp_2951_, lean_object* v_skipInstances_2952_, lean_object* v_fvars_2953_, lean_object* v_e_2954_, lean_object* v_a_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_){
_start:
{
uint8_t v_usedLetOnly_boxed_2962_; uint8_t v_skipConstInApp_boxed_2963_; uint8_t v_skipInstances_boxed_2964_; lean_object* v_res_2965_; 
v_usedLetOnly_boxed_2962_ = lean_unbox(v_usedLetOnly_2950_);
v_skipConstInApp_boxed_2963_ = lean_unbox(v_skipConstInApp_2951_);
v_skipInstances_boxed_2964_ = lean_unbox(v_skipInstances_2952_);
v_res_2965_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__6(v_pre_2948_, v_post_2949_, v_usedLetOnly_boxed_2962_, v_skipConstInApp_boxed_2963_, v_skipInstances_boxed_2964_, v_fvars_2953_, v_e_2954_, v_a_2955_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_);
lean_dec(v___y_2960_);
lean_dec_ref(v___y_2959_);
lean_dec(v___y_2958_);
lean_dec_ref(v___y_2957_);
lean_dec(v___y_2956_);
lean_dec(v_a_2955_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7___boxed(lean_object* v_pre_2966_, lean_object* v_post_2967_, lean_object* v_usedLetOnly_2968_, lean_object* v_skipConstInApp_2969_, lean_object* v_skipInstances_2970_, lean_object* v_fvars_2971_, lean_object* v_e_2972_, lean_object* v_a_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_){
_start:
{
uint8_t v_usedLetOnly_boxed_2980_; uint8_t v_skipConstInApp_boxed_2981_; uint8_t v_skipInstances_boxed_2982_; lean_object* v_res_2983_; 
v_usedLetOnly_boxed_2980_ = lean_unbox(v_usedLetOnly_2968_);
v_skipConstInApp_boxed_2981_ = lean_unbox(v_skipConstInApp_2969_);
v_skipInstances_boxed_2982_ = lean_unbox(v_skipInstances_2970_);
v_res_2983_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7(v_pre_2966_, v_post_2967_, v_usedLetOnly_boxed_2980_, v_skipConstInApp_boxed_2981_, v_skipInstances_boxed_2982_, v_fvars_2971_, v_e_2972_, v_a_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_);
lean_dec(v___y_2978_);
lean_dec_ref(v___y_2977_);
lean_dec(v___y_2976_);
lean_dec_ref(v___y_2975_);
lean_dec(v___y_2974_);
lean_dec(v_a_2973_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_upperBound_2984_, lean_object* v___x_2985_, lean_object* v_pre_2986_, lean_object* v_post_2987_, lean_object* v_usedLetOnly_2988_, lean_object* v_skipConstInApp_2989_, lean_object* v_skipInstances_2990_, lean_object* v_a_2991_, lean_object* v_b_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_){
_start:
{
uint8_t v_usedLetOnly_boxed_3000_; uint8_t v_skipConstInApp_boxed_3001_; uint8_t v_skipInstances_boxed_3002_; lean_object* v_res_3003_; 
v_usedLetOnly_boxed_3000_ = lean_unbox(v_usedLetOnly_2988_);
v_skipConstInApp_boxed_3001_ = lean_unbox(v_skipConstInApp_2989_);
v_skipInstances_boxed_3002_ = lean_unbox(v_skipInstances_2990_);
v_res_3003_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg(v_upperBound_2984_, v___x_2985_, v_pre_2986_, v_post_2987_, v_usedLetOnly_boxed_3000_, v_skipConstInApp_boxed_3001_, v_skipInstances_boxed_3002_, v_a_2991_, v_b_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_);
lean_dec(v___y_2998_);
lean_dec_ref(v___y_2997_);
lean_dec(v___y_2996_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec(v___y_2993_);
lean_dec_ref(v___x_2985_);
lean_dec(v_upperBound_2984_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__8___boxed(lean_object* v_skipInstances_3004_, lean_object* v_pre_3005_, lean_object* v_post_3006_, lean_object* v_usedLetOnly_3007_, lean_object* v_skipConstInApp_3008_, lean_object* v_x_3009_, lean_object* v_x_3010_, lean_object* v_x_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_){
_start:
{
uint8_t v_skipInstances_boxed_3019_; uint8_t v_usedLetOnly_boxed_3020_; uint8_t v_skipConstInApp_boxed_3021_; lean_object* v_res_3022_; 
v_skipInstances_boxed_3019_ = lean_unbox(v_skipInstances_3004_);
v_usedLetOnly_boxed_3020_ = lean_unbox(v_usedLetOnly_3007_);
v_skipConstInApp_boxed_3021_ = lean_unbox(v_skipConstInApp_3008_);
v_res_3022_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__8(v_skipInstances_boxed_3019_, v_pre_3005_, v_post_3006_, v_usedLetOnly_boxed_3020_, v_skipConstInApp_boxed_3021_, v_x_3009_, v_x_3010_, v_x_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
lean_dec(v___y_3015_);
lean_dec_ref(v___y_3014_);
lean_dec(v___y_3013_);
lean_dec(v___y_3012_);
return v_res_3022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___lam__0(lean_object* v_00_u03b1_3023_, lean_object* v_x_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_){
_start:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; 
v___x_3031_ = lean_apply_1(v_x_3024_, lean_box(0));
v___x_3032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3031_);
return v___x_3032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___lam__0___boxed(lean_object* v_00_u03b1_3033_, lean_object* v_x_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_){
_start:
{
lean_object* v_res_3041_; 
v_res_3041_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___lam__0(v_00_u03b1_3033_, v_x_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_);
lean_dec(v___y_3039_);
lean_dec_ref(v___y_3038_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3035_);
return v_res_3041_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___x_3042_ = lean_box(0);
v___x_3043_ = lean_unsigned_to_nat(16u);
v___x_3044_ = lean_mk_array(v___x_3043_, v___x_3042_);
return v___x_3044_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3045_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__0, &l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__0);
v___x_3046_ = lean_unsigned_to_nat(0u);
v___x_3047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3046_);
lean_ctor_set(v___x_3047_, 1, v___x_3045_);
return v___x_3047_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__2(void){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3048_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__1, &l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__1);
v___x_3049_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3049_, 0, lean_box(0));
lean_closure_set(v___x_3049_, 1, lean_box(0));
lean_closure_set(v___x_3049_, 2, v___x_3048_);
return v___x_3049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0(lean_object* v_input_3050_, lean_object* v_pre_3051_, lean_object* v_post_3052_, uint8_t v_usedLetOnly_3053_, uint8_t v_skipConstInApp_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_){
_start:
{
uint8_t v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v_a_3064_; lean_object* v___x_3065_; 
v___x_3061_ = 0;
v___x_3062_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__2, &l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___closed__2);
v___x_3063_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___lam__0(lean_box(0), v___x_3062_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
v_a_3064_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_a_3064_);
lean_dec_ref(v___x_3063_);
v___x_3065_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0(v_pre_3051_, v_post_3052_, v_usedLetOnly_3053_, v_skipConstInApp_3054_, v___x_3061_, v_input_3050_, v_a_3064_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
if (lean_obj_tag(v___x_3065_) == 0)
{
lean_object* v_a_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3075_; 
v_a_3066_ = lean_ctor_get(v___x_3065_, 0);
lean_inc(v_a_3066_);
lean_dec_ref_known(v___x_3065_, 1);
v___x_3067_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3067_, 0, lean_box(0));
lean_closure_set(v___x_3067_, 1, lean_box(0));
lean_closure_set(v___x_3067_, 2, v_a_3064_);
v___x_3068_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___lam__0(lean_box(0), v___x_3067_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_3068_);
if (v_isSharedCheck_3075_ == 0)
{
lean_object* v_unused_3076_; 
v_unused_3076_ = lean_ctor_get(v___x_3068_, 0);
lean_dec(v_unused_3076_);
v___x_3070_ = v___x_3068_;
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
else
{
lean_dec(v___x_3068_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3073_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 0, v_a_3066_);
v___x_3073_ = v___x_3070_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_a_3066_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
}
else
{
lean_dec(v_a_3064_);
return v___x_3065_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0___boxed(lean_object* v_input_3077_, lean_object* v_pre_3078_, lean_object* v_post_3079_, lean_object* v_usedLetOnly_3080_, lean_object* v_skipConstInApp_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_){
_start:
{
uint8_t v_usedLetOnly_boxed_3088_; uint8_t v_skipConstInApp_boxed_3089_; lean_object* v_res_3090_; 
v_usedLetOnly_boxed_3088_ = lean_unbox(v_usedLetOnly_3080_);
v_skipConstInApp_boxed_3089_ = lean_unbox(v_skipConstInApp_3081_);
v_res_3090_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0(v_input_3077_, v_pre_3078_, v_post_3079_, v_usedLetOnly_boxed_3088_, v_skipConstInApp_boxed_3089_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec_ref(v___y_3083_);
lean_dec(v___y_3082_);
return v_res_3090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore(lean_object* v_e_3092_, uint8_t v_elimTrivial_3093_, lean_object* v_a_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_){
_start:
{
lean_object* v___x_3099_; lean_object* v_pre_3100_; lean_object* v___f_3101_; uint8_t v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3099_ = lean_box(v_elimTrivial_3093_);
v_pre_3100_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_elimLetsCore___lam__0___boxed), 8, 1);
lean_closure_set(v_pre_3100_, 0, v___x_3099_);
v___f_3101_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elimLetsCore___closed__0));
v___x_3102_ = 0;
v___x_3103_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4, &l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4_once, _init_l_Lean_Elab_Tactic_Do_countUsesDecl___closed__4);
v___x_3104_ = lean_st_mk_ref(v___x_3103_);
v___x_3105_ = l_Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0(v_e_3092_, v_pre_3100_, v___f_3101_, v___x_3102_, v___x_3102_, v___x_3104_, v_a_3094_, v_a_3095_, v_a_3096_, v_a_3097_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3114_; 
v_a_3106_ = lean_ctor_get(v___x_3105_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3108_ = v___x_3105_;
v_isShared_3109_ = v_isSharedCheck_3114_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_dec(v___x_3105_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3114_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___x_3110_; lean_object* v___x_3112_; 
v___x_3110_ = lean_st_ref_get(v___x_3104_);
lean_dec(v___x_3104_);
lean_dec(v___x_3110_);
if (v_isShared_3109_ == 0)
{
v___x_3112_ = v___x_3108_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3106_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
else
{
lean_dec(v___x_3104_);
return v___x_3105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLetsCore___boxed(lean_object* v_e_3115_, lean_object* v_elimTrivial_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_){
_start:
{
uint8_t v_elimTrivial_boxed_3122_; lean_object* v_res_3123_; 
v_elimTrivial_boxed_3122_ = lean_unbox(v_elimTrivial_3116_);
v_res_3123_ = l_Lean_Elab_Tactic_Do_elimLetsCore(v_e_3115_, v_elimTrivial_boxed_3122_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_);
lean_dec(v_a_3120_);
lean_dec_ref(v_a_3119_);
lean_dec(v_a_3118_);
lean_dec_ref(v_a_3117_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3(lean_object* v_upperBound_3124_, lean_object* v___x_3125_, lean_object* v_pre_3126_, lean_object* v_post_3127_, uint8_t v_usedLetOnly_3128_, uint8_t v_skipConstInApp_3129_, uint8_t v_skipInstances_3130_, lean_object* v___x_3131_, lean_object* v_inst_3132_, lean_object* v_R_3133_, lean_object* v_a_3134_, lean_object* v_b_3135_, lean_object* v_c_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_){
_start:
{
lean_object* v___x_3144_; 
v___x_3144_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___redArg(v_upperBound_3124_, v___x_3125_, v_pre_3126_, v_post_3127_, v_usedLetOnly_3128_, v_skipConstInApp_3129_, v_skipInstances_3130_, v_a_3134_, v_b_3135_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_);
return v___x_3144_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3___boxed(lean_object** _args){
lean_object* v_upperBound_3145_ = _args[0];
lean_object* v___x_3146_ = _args[1];
lean_object* v_pre_3147_ = _args[2];
lean_object* v_post_3148_ = _args[3];
lean_object* v_usedLetOnly_3149_ = _args[4];
lean_object* v_skipConstInApp_3150_ = _args[5];
lean_object* v_skipInstances_3151_ = _args[6];
lean_object* v___x_3152_ = _args[7];
lean_object* v_inst_3153_ = _args[8];
lean_object* v_R_3154_ = _args[9];
lean_object* v_a_3155_ = _args[10];
lean_object* v_b_3156_ = _args[11];
lean_object* v_c_3157_ = _args[12];
lean_object* v___y_3158_ = _args[13];
lean_object* v___y_3159_ = _args[14];
lean_object* v___y_3160_ = _args[15];
lean_object* v___y_3161_ = _args[16];
lean_object* v___y_3162_ = _args[17];
lean_object* v___y_3163_ = _args[18];
lean_object* v___y_3164_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_3165_; uint8_t v_skipConstInApp_boxed_3166_; uint8_t v_skipInstances_boxed_3167_; lean_object* v_res_3168_; 
v_usedLetOnly_boxed_3165_ = lean_unbox(v_usedLetOnly_3149_);
v_skipConstInApp_boxed_3166_ = lean_unbox(v_skipConstInApp_3150_);
v_skipInstances_boxed_3167_ = lean_unbox(v_skipInstances_3151_);
v_res_3168_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__3(v_upperBound_3145_, v___x_3146_, v_pre_3147_, v_post_3148_, v_usedLetOnly_boxed_3165_, v_skipConstInApp_boxed_3166_, v_skipInstances_boxed_3167_, v___x_3152_, v_inst_3153_, v_R_3154_, v_a_3155_, v_b_3156_, v_c_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec(v___y_3159_);
lean_dec(v___y_3158_);
lean_dec(v___x_3152_);
lean_dec_ref(v___x_3146_);
lean_dec(v_upperBound_3145_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_3169_, lean_object* v_m_3170_, lean_object* v_a_3171_){
_start:
{
lean_object* v___x_3172_; 
v___x_3172_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4___redArg(v_m_3170_, v_a_3171_);
return v___x_3172_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b2_3173_, lean_object* v_m_3174_, lean_object* v_a_3175_){
_start:
{
lean_object* v_res_3176_; 
v_res_3176_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4(v_00_u03b2_3173_, v_m_3174_, v_a_3175_);
lean_dec_ref(v_a_3175_);
lean_dec_ref(v_m_3174_);
return v_res_3176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_3177_, lean_object* v_name_3178_, uint8_t v_bi_3179_, lean_object* v_type_3180_, lean_object* v_k_3181_, uint8_t v_kind_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_){
_start:
{
lean_object* v___x_3190_; 
v___x_3190_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___redArg(v_name_3178_, v_bi_3179_, v_type_3180_, v_k_3181_, v_kind_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_);
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_3191_, lean_object* v_name_3192_, lean_object* v_bi_3193_, lean_object* v_type_3194_, lean_object* v_k_3195_, lean_object* v_kind_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_){
_start:
{
uint8_t v_bi_boxed_3204_; uint8_t v_kind_boxed_3205_; lean_object* v_res_3206_; 
v_bi_boxed_3204_ = lean_unbox(v_bi_3193_);
v_kind_boxed_3205_ = lean_unbox(v_kind_3196_);
v_res_3206_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_3191_, v_name_3192_, v_bi_boxed_3204_, v_type_3194_, v_k_3195_, v_kind_boxed_3205_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec(v___y_3198_);
lean_dec(v___y_3197_);
return v_res_3206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10(lean_object* v_00_u03b1_3207_, lean_object* v_name_3208_, lean_object* v_type_3209_, lean_object* v_val_3210_, lean_object* v_k_3211_, uint8_t v_nondep_3212_, uint8_t v_kind_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_){
_start:
{
lean_object* v___x_3221_; 
v___x_3221_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10___redArg(v_name_3208_, v_type_3209_, v_val_3210_, v_k_3211_, v_nondep_3212_, v_kind_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_);
return v___x_3221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10___boxed(lean_object* v_00_u03b1_3222_, lean_object* v_name_3223_, lean_object* v_type_3224_, lean_object* v_val_3225_, lean_object* v_k_3226_, lean_object* v_nondep_3227_, lean_object* v_kind_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_){
_start:
{
uint8_t v_nondep_boxed_3236_; uint8_t v_kind_boxed_3237_; lean_object* v_res_3238_; 
v_nondep_boxed_3236_ = lean_unbox(v_nondep_3227_);
v_kind_boxed_3237_ = lean_unbox(v_kind_3228_);
v_res_3238_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__7_spec__10(v_00_u03b1_3222_, v_name_3223_, v_type_3224_, v_val_3225_, v_k_3226_, v_nondep_boxed_3236_, v_kind_boxed_3237_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_);
lean_dec(v___y_3234_);
lean_dec_ref(v___y_3233_);
lean_dec(v___y_3232_);
lean_dec_ref(v___y_3231_);
lean_dec(v___y_3230_);
lean_dec(v___y_3229_);
return v_res_3238_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13(lean_object* v_00_u03b1_3239_, lean_object* v_ref_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_){
_start:
{
lean_object* v___x_3246_; 
v___x_3246_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___redArg(v_ref_3240_);
return v___x_3246_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13___boxed(lean_object* v_00_u03b1_3247_, lean_object* v_ref_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_){
_start:
{
lean_object* v_res_3254_; 
v_res_3254_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9_spec__13(v_00_u03b1_3247_, v_ref_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_);
lean_dec(v___y_3252_);
lean_dec_ref(v___y_3251_);
lean_dec(v___y_3250_);
lean_dec_ref(v___y_3249_);
return v_res_3254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9(lean_object* v_00_u03b1_3255_, lean_object* v_x_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_){
_start:
{
lean_object* v___x_3264_; 
v___x_3264_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9___redArg(v_x_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_);
return v___x_3264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9___boxed(lean_object* v_00_u03b1_3265_, lean_object* v_x_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_){
_start:
{
lean_object* v_res_3274_; 
v_res_3274_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__9(v_00_u03b1_3265_, v_x_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_);
lean_dec(v___y_3272_);
lean_dec_ref(v___y_3271_);
lean_dec(v___y_3270_);
lean_dec_ref(v___y_3269_);
lean_dec(v___y_3268_);
lean_dec(v___y_3267_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10(lean_object* v_00_u03b2_3275_, lean_object* v_m_3276_, lean_object* v_a_3277_, lean_object* v_b_3278_){
_start:
{
lean_object* v___x_3279_; 
v___x_3279_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10___redArg(v_m_3276_, v_a_3277_, v_b_3278_);
return v___x_3279_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5(lean_object* v_00_u03b2_3280_, lean_object* v_a_3281_, lean_object* v_x_3282_){
_start:
{
lean_object* v___x_3283_; 
v___x_3283_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5___redArg(v_a_3281_, v_x_3282_);
return v___x_3283_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5___boxed(lean_object* v_00_u03b2_3284_, lean_object* v_a_3285_, lean_object* v_x_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__4_spec__5(v_00_u03b2_3284_, v_a_3285_, v_x_3286_);
lean_dec(v_x_3286_);
lean_dec_ref(v_a_3285_);
return v_res_3287_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15(lean_object* v_00_u03b2_3288_, lean_object* v_a_3289_, lean_object* v_x_3290_){
_start:
{
uint8_t v___x_3291_; 
v___x_3291_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15___redArg(v_a_3289_, v_x_3290_);
return v___x_3291_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15___boxed(lean_object* v_00_u03b2_3292_, lean_object* v_a_3293_, lean_object* v_x_3294_){
_start:
{
uint8_t v_res_3295_; lean_object* v_r_3296_; 
v_res_3295_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__15(v_00_u03b2_3292_, v_a_3293_, v_x_3294_);
lean_dec(v_x_3294_);
lean_dec_ref(v_a_3293_);
v_r_3296_ = lean_box(v_res_3295_);
return v_r_3296_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16(lean_object* v_00_u03b2_3297_, lean_object* v_data_3298_){
_start:
{
lean_object* v___x_3299_; 
v___x_3299_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16___redArg(v_data_3298_);
return v___x_3299_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__17(lean_object* v_00_u03b2_3300_, lean_object* v_a_3301_, lean_object* v_b_3302_, lean_object* v_x_3303_){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__17___redArg(v_a_3301_, v_b_3302_, v_x_3303_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17(lean_object* v_00_u03b2_3305_, lean_object* v_i_3306_, lean_object* v_source_3307_, lean_object* v_target_3308_){
_start:
{
lean_object* v___x_3309_; 
v___x_3309_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17___redArg(v_i_3306_, v_source_3307_, v_target_3308_);
return v___x_3309_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18(lean_object* v_00_u03b2_3310_, lean_object* v_x_3311_, lean_object* v_x_3312_){
_start:
{
lean_object* v___x_3313_; 
v___x_3313_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_Tactic_Do_elimLetsCore_spec__0_spec__0_spec__10_spec__16_spec__17_spec__18___redArg(v_x_3311_, v_x_3312_);
return v___x_3313_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3___redArg(lean_object* v_mvarId_3314_, lean_object* v_x_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_){
_start:
{
lean_object* v___x_3321_; 
v___x_3321_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3314_, v_x_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_);
if (lean_obj_tag(v___x_3321_) == 0)
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3329_; 
v_a_3322_ = lean_ctor_get(v___x_3321_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3324_ = v___x_3321_;
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3321_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3327_; 
if (v_isShared_3325_ == 0)
{
v___x_3327_ = v___x_3324_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v_a_3322_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
return v___x_3327_;
}
}
}
else
{
lean_object* v_a_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3337_; 
v_a_3330_ = lean_ctor_get(v___x_3321_, 0);
v_isSharedCheck_3337_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3337_ == 0)
{
v___x_3332_ = v___x_3321_;
v_isShared_3333_ = v_isSharedCheck_3337_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_a_3330_);
lean_dec(v___x_3321_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3337_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3335_; 
if (v_isShared_3333_ == 0)
{
v___x_3335_ = v___x_3332_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v_a_3330_);
v___x_3335_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
return v___x_3335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3___redArg___boxed(lean_object* v_mvarId_3338_, lean_object* v_x_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_){
_start:
{
lean_object* v_res_3345_; 
v_res_3345_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3___redArg(v_mvarId_3338_, v_x_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
return v_res_3345_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3(lean_object* v_00_u03b1_3346_, lean_object* v_mvarId_3347_, lean_object* v_x_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_){
_start:
{
lean_object* v___x_3354_; 
v___x_3354_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3___redArg(v_mvarId_3347_, v_x_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3___boxed(lean_object* v_00_u03b1_3355_, lean_object* v_mvarId_3356_, lean_object* v_x_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_){
_start:
{
lean_object* v_res_3363_; 
v_res_3363_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3(v_00_u03b1_3355_, v_mvarId_3356_, v_x_3357_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_);
lean_dec(v___y_3361_);
lean_dec_ref(v___y_3360_);
lean_dec(v___y_3359_);
lean_dec_ref(v___y_3358_);
return v_res_3363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5___redArg(uint8_t v_elimTrivial_3364_, lean_object* v_as_3365_, size_t v_sz_3366_, size_t v_i_3367_, lean_object* v_b_3368_){
_start:
{
uint8_t v___x_3370_; 
v___x_3370_ = lean_usize_dec_lt(v_i_3367_, v_sz_3366_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; 
v___x_3371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3371_, 0, v_b_3368_);
return v___x_3371_;
}
else
{
lean_object* v_snd_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3419_; 
v_snd_3372_ = lean_ctor_get(v_b_3368_, 1);
v_isSharedCheck_3419_ = !lean_is_exclusive(v_b_3368_);
if (v_isSharedCheck_3419_ == 0)
{
lean_object* v_unused_3420_; 
v_unused_3420_ = lean_ctor_get(v_b_3368_, 0);
lean_dec(v_unused_3420_);
v___x_3374_ = v_b_3368_;
v_isShared_3375_ = v_isSharedCheck_3419_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_snd_3372_);
lean_dec(v_b_3368_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3419_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3376_; lean_object* v_a_3378_; lean_object* v_a_3385_; 
v___x_3376_ = lean_box(0);
v_a_3385_ = lean_array_uget_borrowed(v_as_3365_, v_i_3367_);
if (lean_obj_tag(v_a_3385_) == 0)
{
v_a_3378_ = v_snd_3372_;
goto v___jp_3377_;
}
else
{
lean_object* v_val_3386_; lean_object* v_fst_3387_; lean_object* v_snd_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3418_; 
v_val_3386_ = lean_ctor_get(v_a_3385_, 0);
v_fst_3387_ = lean_ctor_get(v_snd_3372_, 0);
v_snd_3388_ = lean_ctor_get(v_snd_3372_, 1);
v_isSharedCheck_3418_ = !lean_is_exclusive(v_snd_3372_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3390_ = v_snd_3372_;
v_isShared_3391_ = v_isSharedCheck_3418_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_snd_3388_);
lean_inc(v_fst_3387_);
lean_dec(v_snd_3372_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3418_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
uint8_t v___x_3392_; lean_object* v___x_3393_; 
v___x_3392_ = 0;
v___x_3393_ = l_Lean_LocalDecl_value_x3f(v_val_3386_, v___x_3392_);
if (lean_obj_tag(v___x_3393_) == 1)
{
lean_object* v_val_3394_; lean_object* v___x_3395_; 
v_val_3394_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_val_3394_);
lean_dec_ref_known(v___x_3393_, 1);
v___x_3395_ = l_Lean_LocalDecl_type(v_val_3386_);
if (lean_obj_tag(v___x_3395_) == 10)
{
lean_object* v_data_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; uint8_t v___x_3400_; uint8_t v___x_3401_; 
v_data_3396_ = lean_ctor_get(v___x_3395_, 0);
lean_inc(v_data_3396_);
lean_dec_ref_known(v___x_3395_, 2);
v___x_3397_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_countUsesDecl___closed__2));
v___x_3398_ = lean_unsigned_to_nat(2u);
v___x_3399_ = l_Lean_KVMap_getNat(v_data_3396_, v___x_3397_, v___x_3398_);
lean_dec(v_data_3396_);
v___x_3400_ = l_Lean_Elab_Tactic_Do_Uses_fromNat(v___x_3399_);
lean_dec(v___x_3399_);
v___x_3401_ = l_Lean_Elab_Tactic_Do_doNotDup(v___x_3400_, v_val_3394_, v_elimTrivial_3364_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3407_; 
v___x_3402_ = l_Lean_LocalDecl_fvarId(v_val_3386_);
v___x_3403_ = l_Lean_mkFVar(v___x_3402_);
v___x_3404_ = lean_array_push(v_fst_3387_, v___x_3403_);
v___x_3405_ = lean_array_push(v_snd_3388_, v_val_3394_);
if (v_isShared_3391_ == 0)
{
lean_ctor_set(v___x_3390_, 1, v___x_3405_);
lean_ctor_set(v___x_3390_, 0, v___x_3404_);
v___x_3407_ = v___x_3390_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v___x_3404_);
lean_ctor_set(v_reuseFailAlloc_3408_, 1, v___x_3405_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
v_a_3378_ = v___x_3407_;
goto v___jp_3377_;
}
}
else
{
lean_object* v___x_3410_; 
lean_dec(v_val_3394_);
if (v_isShared_3391_ == 0)
{
v___x_3410_ = v___x_3390_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_fst_3387_);
lean_ctor_set(v_reuseFailAlloc_3411_, 1, v_snd_3388_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
v_a_3378_ = v___x_3410_;
goto v___jp_3377_;
}
}
}
else
{
lean_object* v___x_3413_; 
lean_dec_ref(v___x_3395_);
lean_dec(v_val_3394_);
if (v_isShared_3391_ == 0)
{
v___x_3413_ = v___x_3390_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v_fst_3387_);
lean_ctor_set(v_reuseFailAlloc_3414_, 1, v_snd_3388_);
v___x_3413_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
v_a_3378_ = v___x_3413_;
goto v___jp_3377_;
}
}
}
else
{
lean_object* v___x_3416_; 
lean_dec(v___x_3393_);
if (v_isShared_3391_ == 0)
{
v___x_3416_ = v___x_3390_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_fst_3387_);
lean_ctor_set(v_reuseFailAlloc_3417_, 1, v_snd_3388_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
v_a_3378_ = v___x_3416_;
goto v___jp_3377_;
}
}
}
}
v___jp_3377_:
{
lean_object* v___x_3380_; 
if (v_isShared_3375_ == 0)
{
lean_ctor_set(v___x_3374_, 1, v_a_3378_);
lean_ctor_set(v___x_3374_, 0, v___x_3376_);
v___x_3380_ = v___x_3374_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v___x_3376_);
lean_ctor_set(v_reuseFailAlloc_3384_, 1, v_a_3378_);
v___x_3380_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
size_t v___x_3381_; size_t v___x_3382_; 
v___x_3381_ = ((size_t)1ULL);
v___x_3382_ = lean_usize_add(v_i_3367_, v___x_3381_);
v_i_3367_ = v___x_3382_;
v_b_3368_ = v___x_3380_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_elimTrivial_3421_, lean_object* v_as_3422_, lean_object* v_sz_3423_, lean_object* v_i_3424_, lean_object* v_b_3425_, lean_object* v___y_3426_){
_start:
{
uint8_t v_elimTrivial_boxed_3427_; size_t v_sz_boxed_3428_; size_t v_i_boxed_3429_; lean_object* v_res_3430_; 
v_elimTrivial_boxed_3427_ = lean_unbox(v_elimTrivial_3421_);
v_sz_boxed_3428_ = lean_unbox_usize(v_sz_3423_);
lean_dec(v_sz_3423_);
v_i_boxed_3429_ = lean_unbox_usize(v_i_3424_);
lean_dec(v_i_3424_);
v_res_3430_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5___redArg(v_elimTrivial_boxed_3427_, v_as_3422_, v_sz_boxed_3428_, v_i_boxed_3429_, v_b_3425_);
lean_dec_ref(v_as_3422_);
return v_res_3430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1(uint8_t v_elimTrivial_3431_, lean_object* v_as_3432_, size_t v_sz_3433_, size_t v_i_3434_, lean_object* v_b_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_){
_start:
{
uint8_t v___x_3441_; 
v___x_3441_ = lean_usize_dec_lt(v_i_3434_, v_sz_3433_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; 
v___x_3442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3442_, 0, v_b_3435_);
return v___x_3442_;
}
else
{
lean_object* v_snd_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3490_; 
v_snd_3443_ = lean_ctor_get(v_b_3435_, 1);
v_isSharedCheck_3490_ = !lean_is_exclusive(v_b_3435_);
if (v_isSharedCheck_3490_ == 0)
{
lean_object* v_unused_3491_; 
v_unused_3491_ = lean_ctor_get(v_b_3435_, 0);
lean_dec(v_unused_3491_);
v___x_3445_ = v_b_3435_;
v_isShared_3446_ = v_isSharedCheck_3490_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_snd_3443_);
lean_dec(v_b_3435_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3490_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v___x_3447_; lean_object* v_a_3449_; lean_object* v_a_3456_; 
v___x_3447_ = lean_box(0);
v_a_3456_ = lean_array_uget_borrowed(v_as_3432_, v_i_3434_);
if (lean_obj_tag(v_a_3456_) == 0)
{
v_a_3449_ = v_snd_3443_;
goto v___jp_3448_;
}
else
{
lean_object* v_val_3457_; lean_object* v_fst_3458_; lean_object* v_snd_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3489_; 
v_val_3457_ = lean_ctor_get(v_a_3456_, 0);
v_fst_3458_ = lean_ctor_get(v_snd_3443_, 0);
v_snd_3459_ = lean_ctor_get(v_snd_3443_, 1);
v_isSharedCheck_3489_ = !lean_is_exclusive(v_snd_3443_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3461_ = v_snd_3443_;
v_isShared_3462_ = v_isSharedCheck_3489_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_snd_3459_);
lean_inc(v_fst_3458_);
lean_dec(v_snd_3443_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3489_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
uint8_t v___x_3463_; lean_object* v___x_3464_; 
v___x_3463_ = 0;
v___x_3464_ = l_Lean_LocalDecl_value_x3f(v_val_3457_, v___x_3463_);
if (lean_obj_tag(v___x_3464_) == 1)
{
lean_object* v_val_3465_; lean_object* v___x_3466_; 
v_val_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_val_3465_);
lean_dec_ref_known(v___x_3464_, 1);
v___x_3466_ = l_Lean_LocalDecl_type(v_val_3457_);
if (lean_obj_tag(v___x_3466_) == 10)
{
lean_object* v_data_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; uint8_t v___x_3471_; uint8_t v___x_3472_; 
v_data_3467_ = lean_ctor_get(v___x_3466_, 0);
lean_inc(v_data_3467_);
lean_dec_ref_known(v___x_3466_, 2);
v___x_3468_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_countUsesDecl___closed__2));
v___x_3469_ = lean_unsigned_to_nat(2u);
v___x_3470_ = l_Lean_KVMap_getNat(v_data_3467_, v___x_3468_, v___x_3469_);
lean_dec(v_data_3467_);
v___x_3471_ = l_Lean_Elab_Tactic_Do_Uses_fromNat(v___x_3470_);
lean_dec(v___x_3470_);
v___x_3472_ = l_Lean_Elab_Tactic_Do_doNotDup(v___x_3471_, v_val_3465_, v_elimTrivial_3431_);
if (v___x_3472_ == 0)
{
lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3478_; 
v___x_3473_ = l_Lean_LocalDecl_fvarId(v_val_3457_);
v___x_3474_ = l_Lean_mkFVar(v___x_3473_);
v___x_3475_ = lean_array_push(v_fst_3458_, v___x_3474_);
v___x_3476_ = lean_array_push(v_snd_3459_, v_val_3465_);
if (v_isShared_3462_ == 0)
{
lean_ctor_set(v___x_3461_, 1, v___x_3476_);
lean_ctor_set(v___x_3461_, 0, v___x_3475_);
v___x_3478_ = v___x_3461_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v___x_3475_);
lean_ctor_set(v_reuseFailAlloc_3479_, 1, v___x_3476_);
v___x_3478_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
v_a_3449_ = v___x_3478_;
goto v___jp_3448_;
}
}
else
{
lean_object* v___x_3481_; 
lean_dec(v_val_3465_);
if (v_isShared_3462_ == 0)
{
v___x_3481_ = v___x_3461_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v_fst_3458_);
lean_ctor_set(v_reuseFailAlloc_3482_, 1, v_snd_3459_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
v_a_3449_ = v___x_3481_;
goto v___jp_3448_;
}
}
}
else
{
lean_object* v___x_3484_; 
lean_dec_ref(v___x_3466_);
lean_dec(v_val_3465_);
if (v_isShared_3462_ == 0)
{
v___x_3484_ = v___x_3461_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v_fst_3458_);
lean_ctor_set(v_reuseFailAlloc_3485_, 1, v_snd_3459_);
v___x_3484_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
v_a_3449_ = v___x_3484_;
goto v___jp_3448_;
}
}
}
else
{
lean_object* v___x_3487_; 
lean_dec(v___x_3464_);
if (v_isShared_3462_ == 0)
{
v___x_3487_ = v___x_3461_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_fst_3458_);
lean_ctor_set(v_reuseFailAlloc_3488_, 1, v_snd_3459_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
v_a_3449_ = v___x_3487_;
goto v___jp_3448_;
}
}
}
}
v___jp_3448_:
{
lean_object* v___x_3451_; 
if (v_isShared_3446_ == 0)
{
lean_ctor_set(v___x_3445_, 1, v_a_3449_);
lean_ctor_set(v___x_3445_, 0, v___x_3447_);
v___x_3451_ = v___x_3445_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v___x_3447_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v_a_3449_);
v___x_3451_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
size_t v___x_3452_; size_t v___x_3453_; lean_object* v___x_3454_; 
v___x_3452_ = ((size_t)1ULL);
v___x_3453_ = lean_usize_add(v_i_3434_, v___x_3452_);
v___x_3454_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5___redArg(v_elimTrivial_3431_, v_as_3432_, v_sz_3433_, v___x_3453_, v___x_3451_);
return v___x_3454_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1___boxed(lean_object* v_elimTrivial_3492_, lean_object* v_as_3493_, lean_object* v_sz_3494_, lean_object* v_i_3495_, lean_object* v_b_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_){
_start:
{
uint8_t v_elimTrivial_boxed_3502_; size_t v_sz_boxed_3503_; size_t v_i_boxed_3504_; lean_object* v_res_3505_; 
v_elimTrivial_boxed_3502_ = lean_unbox(v_elimTrivial_3492_);
v_sz_boxed_3503_ = lean_unbox_usize(v_sz_3494_);
lean_dec(v_sz_3494_);
v_i_boxed_3504_ = lean_unbox_usize(v_i_3495_);
lean_dec(v_i_3495_);
v_res_3505_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1(v_elimTrivial_boxed_3502_, v_as_3493_, v_sz_boxed_3503_, v_i_boxed_3504_, v_b_3496_, v___y_3497_, v___y_3498_, v___y_3499_, v___y_3500_);
lean_dec(v___y_3500_);
lean_dec_ref(v___y_3499_);
lean_dec(v___y_3498_);
lean_dec_ref(v___y_3497_);
lean_dec_ref(v_as_3493_);
return v_res_3505_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6___redArg(uint8_t v_elimTrivial_3506_, lean_object* v_as_3507_, size_t v_sz_3508_, size_t v_i_3509_, lean_object* v_b_3510_){
_start:
{
uint8_t v___x_3512_; 
v___x_3512_ = lean_usize_dec_lt(v_i_3509_, v_sz_3508_);
if (v___x_3512_ == 0)
{
lean_object* v___x_3513_; 
v___x_3513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3513_, 0, v_b_3510_);
return v___x_3513_;
}
else
{
lean_object* v_snd_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3561_; 
v_snd_3514_ = lean_ctor_get(v_b_3510_, 1);
v_isSharedCheck_3561_ = !lean_is_exclusive(v_b_3510_);
if (v_isSharedCheck_3561_ == 0)
{
lean_object* v_unused_3562_; 
v_unused_3562_ = lean_ctor_get(v_b_3510_, 0);
lean_dec(v_unused_3562_);
v___x_3516_ = v_b_3510_;
v_isShared_3517_ = v_isSharedCheck_3561_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_snd_3514_);
lean_dec(v_b_3510_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3561_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3518_; lean_object* v_a_3520_; lean_object* v_a_3527_; 
v___x_3518_ = lean_box(0);
v_a_3527_ = lean_array_uget_borrowed(v_as_3507_, v_i_3509_);
if (lean_obj_tag(v_a_3527_) == 0)
{
v_a_3520_ = v_snd_3514_;
goto v___jp_3519_;
}
else
{
lean_object* v_val_3528_; lean_object* v_fst_3529_; lean_object* v_snd_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3560_; 
v_val_3528_ = lean_ctor_get(v_a_3527_, 0);
v_fst_3529_ = lean_ctor_get(v_snd_3514_, 0);
v_snd_3530_ = lean_ctor_get(v_snd_3514_, 1);
v_isSharedCheck_3560_ = !lean_is_exclusive(v_snd_3514_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3532_ = v_snd_3514_;
v_isShared_3533_ = v_isSharedCheck_3560_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_snd_3530_);
lean_inc(v_fst_3529_);
lean_dec(v_snd_3514_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3560_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
uint8_t v___x_3534_; lean_object* v___x_3535_; 
v___x_3534_ = 0;
v___x_3535_ = l_Lean_LocalDecl_value_x3f(v_val_3528_, v___x_3534_);
if (lean_obj_tag(v___x_3535_) == 1)
{
lean_object* v_val_3536_; lean_object* v___x_3537_; 
v_val_3536_ = lean_ctor_get(v___x_3535_, 0);
lean_inc(v_val_3536_);
lean_dec_ref_known(v___x_3535_, 1);
v___x_3537_ = l_Lean_LocalDecl_type(v_val_3528_);
if (lean_obj_tag(v___x_3537_) == 10)
{
lean_object* v_data_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; uint8_t v___x_3542_; uint8_t v___x_3543_; 
v_data_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_data_3538_);
lean_dec_ref_known(v___x_3537_, 2);
v___x_3539_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_countUsesDecl___closed__2));
v___x_3540_ = lean_unsigned_to_nat(2u);
v___x_3541_ = l_Lean_KVMap_getNat(v_data_3538_, v___x_3539_, v___x_3540_);
lean_dec(v_data_3538_);
v___x_3542_ = l_Lean_Elab_Tactic_Do_Uses_fromNat(v___x_3541_);
lean_dec(v___x_3541_);
v___x_3543_ = l_Lean_Elab_Tactic_Do_doNotDup(v___x_3542_, v_val_3536_, v_elimTrivial_3506_);
if (v___x_3543_ == 0)
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3549_; 
v___x_3544_ = l_Lean_LocalDecl_fvarId(v_val_3528_);
v___x_3545_ = l_Lean_mkFVar(v___x_3544_);
v___x_3546_ = lean_array_push(v_fst_3529_, v___x_3545_);
v___x_3547_ = lean_array_push(v_snd_3530_, v_val_3536_);
if (v_isShared_3533_ == 0)
{
lean_ctor_set(v___x_3532_, 1, v___x_3547_);
lean_ctor_set(v___x_3532_, 0, v___x_3546_);
v___x_3549_ = v___x_3532_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v___x_3546_);
lean_ctor_set(v_reuseFailAlloc_3550_, 1, v___x_3547_);
v___x_3549_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
v_a_3520_ = v___x_3549_;
goto v___jp_3519_;
}
}
else
{
lean_object* v___x_3552_; 
lean_dec(v_val_3536_);
if (v_isShared_3533_ == 0)
{
v___x_3552_ = v___x_3532_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v_fst_3529_);
lean_ctor_set(v_reuseFailAlloc_3553_, 1, v_snd_3530_);
v___x_3552_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
v_a_3520_ = v___x_3552_;
goto v___jp_3519_;
}
}
}
else
{
lean_object* v___x_3555_; 
lean_dec_ref(v___x_3537_);
lean_dec(v_val_3536_);
if (v_isShared_3533_ == 0)
{
v___x_3555_ = v___x_3532_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v_fst_3529_);
lean_ctor_set(v_reuseFailAlloc_3556_, 1, v_snd_3530_);
v___x_3555_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
v_a_3520_ = v___x_3555_;
goto v___jp_3519_;
}
}
}
else
{
lean_object* v___x_3558_; 
lean_dec(v___x_3535_);
if (v_isShared_3533_ == 0)
{
v___x_3558_ = v___x_3532_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_fst_3529_);
lean_ctor_set(v_reuseFailAlloc_3559_, 1, v_snd_3530_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
v_a_3520_ = v___x_3558_;
goto v___jp_3519_;
}
}
}
}
v___jp_3519_:
{
lean_object* v___x_3522_; 
if (v_isShared_3517_ == 0)
{
lean_ctor_set(v___x_3516_, 1, v_a_3520_);
lean_ctor_set(v___x_3516_, 0, v___x_3518_);
v___x_3522_ = v___x_3516_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v___x_3518_);
lean_ctor_set(v_reuseFailAlloc_3526_, 1, v_a_3520_);
v___x_3522_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
size_t v___x_3523_; size_t v___x_3524_; 
v___x_3523_ = ((size_t)1ULL);
v___x_3524_ = lean_usize_add(v_i_3509_, v___x_3523_);
v_i_3509_ = v___x_3524_;
v_b_3510_ = v___x_3522_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6___redArg___boxed(lean_object* v_elimTrivial_3563_, lean_object* v_as_3564_, lean_object* v_sz_3565_, lean_object* v_i_3566_, lean_object* v_b_3567_, lean_object* v___y_3568_){
_start:
{
uint8_t v_elimTrivial_boxed_3569_; size_t v_sz_boxed_3570_; size_t v_i_boxed_3571_; lean_object* v_res_3572_; 
v_elimTrivial_boxed_3569_ = lean_unbox(v_elimTrivial_3563_);
v_sz_boxed_3570_ = lean_unbox_usize(v_sz_3565_);
lean_dec(v_sz_3565_);
v_i_boxed_3571_ = lean_unbox_usize(v_i_3566_);
lean_dec(v_i_3566_);
v_res_3572_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6___redArg(v_elimTrivial_boxed_3569_, v_as_3564_, v_sz_boxed_3570_, v_i_boxed_3571_, v_b_3567_);
lean_dec_ref(v_as_3564_);
return v_res_3572_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3(uint8_t v_elimTrivial_3573_, lean_object* v_as_3574_, size_t v_sz_3575_, size_t v_i_3576_, lean_object* v_b_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
uint8_t v___x_3583_; 
v___x_3583_ = lean_usize_dec_lt(v_i_3576_, v_sz_3575_);
if (v___x_3583_ == 0)
{
lean_object* v___x_3584_; 
v___x_3584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3584_, 0, v_b_3577_);
return v___x_3584_;
}
else
{
lean_object* v_snd_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3632_; 
v_snd_3585_ = lean_ctor_get(v_b_3577_, 1);
v_isSharedCheck_3632_ = !lean_is_exclusive(v_b_3577_);
if (v_isSharedCheck_3632_ == 0)
{
lean_object* v_unused_3633_; 
v_unused_3633_ = lean_ctor_get(v_b_3577_, 0);
lean_dec(v_unused_3633_);
v___x_3587_ = v_b_3577_;
v_isShared_3588_ = v_isSharedCheck_3632_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_snd_3585_);
lean_dec(v_b_3577_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3632_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3589_; lean_object* v_a_3591_; lean_object* v_a_3598_; 
v___x_3589_ = lean_box(0);
v_a_3598_ = lean_array_uget_borrowed(v_as_3574_, v_i_3576_);
if (lean_obj_tag(v_a_3598_) == 0)
{
v_a_3591_ = v_snd_3585_;
goto v___jp_3590_;
}
else
{
lean_object* v_val_3599_; lean_object* v_fst_3600_; lean_object* v_snd_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3631_; 
v_val_3599_ = lean_ctor_get(v_a_3598_, 0);
v_fst_3600_ = lean_ctor_get(v_snd_3585_, 0);
v_snd_3601_ = lean_ctor_get(v_snd_3585_, 1);
v_isSharedCheck_3631_ = !lean_is_exclusive(v_snd_3585_);
if (v_isSharedCheck_3631_ == 0)
{
v___x_3603_ = v_snd_3585_;
v_isShared_3604_ = v_isSharedCheck_3631_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_snd_3601_);
lean_inc(v_fst_3600_);
lean_dec(v_snd_3585_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3631_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
uint8_t v___x_3605_; lean_object* v___x_3606_; 
v___x_3605_ = 0;
v___x_3606_ = l_Lean_LocalDecl_value_x3f(v_val_3599_, v___x_3605_);
if (lean_obj_tag(v___x_3606_) == 1)
{
lean_object* v_val_3607_; lean_object* v___x_3608_; 
v_val_3607_ = lean_ctor_get(v___x_3606_, 0);
lean_inc(v_val_3607_);
lean_dec_ref_known(v___x_3606_, 1);
v___x_3608_ = l_Lean_LocalDecl_type(v_val_3599_);
if (lean_obj_tag(v___x_3608_) == 10)
{
lean_object* v_data_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; uint8_t v___x_3613_; uint8_t v___x_3614_; 
v_data_3609_ = lean_ctor_get(v___x_3608_, 0);
lean_inc(v_data_3609_);
lean_dec_ref_known(v___x_3608_, 2);
v___x_3610_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_countUsesDecl___closed__2));
v___x_3611_ = lean_unsigned_to_nat(2u);
v___x_3612_ = l_Lean_KVMap_getNat(v_data_3609_, v___x_3610_, v___x_3611_);
lean_dec(v_data_3609_);
v___x_3613_ = l_Lean_Elab_Tactic_Do_Uses_fromNat(v___x_3612_);
lean_dec(v___x_3612_);
v___x_3614_ = l_Lean_Elab_Tactic_Do_doNotDup(v___x_3613_, v_val_3607_, v_elimTrivial_3573_);
if (v___x_3614_ == 0)
{
lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3620_; 
v___x_3615_ = l_Lean_LocalDecl_fvarId(v_val_3599_);
v___x_3616_ = l_Lean_mkFVar(v___x_3615_);
v___x_3617_ = lean_array_push(v_fst_3600_, v___x_3616_);
v___x_3618_ = lean_array_push(v_snd_3601_, v_val_3607_);
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 1, v___x_3618_);
lean_ctor_set(v___x_3603_, 0, v___x_3617_);
v___x_3620_ = v___x_3603_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v___x_3617_);
lean_ctor_set(v_reuseFailAlloc_3621_, 1, v___x_3618_);
v___x_3620_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
v_a_3591_ = v___x_3620_;
goto v___jp_3590_;
}
}
else
{
lean_object* v___x_3623_; 
lean_dec(v_val_3607_);
if (v_isShared_3604_ == 0)
{
v___x_3623_ = v___x_3603_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_fst_3600_);
lean_ctor_set(v_reuseFailAlloc_3624_, 1, v_snd_3601_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
v_a_3591_ = v___x_3623_;
goto v___jp_3590_;
}
}
}
else
{
lean_object* v___x_3626_; 
lean_dec_ref(v___x_3608_);
lean_dec(v_val_3607_);
if (v_isShared_3604_ == 0)
{
v___x_3626_ = v___x_3603_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_fst_3600_);
lean_ctor_set(v_reuseFailAlloc_3627_, 1, v_snd_3601_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
v_a_3591_ = v___x_3626_;
goto v___jp_3590_;
}
}
}
else
{
lean_object* v___x_3629_; 
lean_dec(v___x_3606_);
if (v_isShared_3604_ == 0)
{
v___x_3629_ = v___x_3603_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v_fst_3600_);
lean_ctor_set(v_reuseFailAlloc_3630_, 1, v_snd_3601_);
v___x_3629_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
v_a_3591_ = v___x_3629_;
goto v___jp_3590_;
}
}
}
}
v___jp_3590_:
{
lean_object* v___x_3593_; 
if (v_isShared_3588_ == 0)
{
lean_ctor_set(v___x_3587_, 1, v_a_3591_);
lean_ctor_set(v___x_3587_, 0, v___x_3589_);
v___x_3593_ = v___x_3587_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v___x_3589_);
lean_ctor_set(v_reuseFailAlloc_3597_, 1, v_a_3591_);
v___x_3593_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
size_t v___x_3594_; size_t v___x_3595_; lean_object* v___x_3596_; 
v___x_3594_ = ((size_t)1ULL);
v___x_3595_ = lean_usize_add(v_i_3576_, v___x_3594_);
v___x_3596_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6___redArg(v_elimTrivial_3573_, v_as_3574_, v_sz_3575_, v___x_3595_, v___x_3593_);
return v___x_3596_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3___boxed(lean_object* v_elimTrivial_3634_, lean_object* v_as_3635_, lean_object* v_sz_3636_, lean_object* v_i_3637_, lean_object* v_b_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_){
_start:
{
uint8_t v_elimTrivial_boxed_3644_; size_t v_sz_boxed_3645_; size_t v_i_boxed_3646_; lean_object* v_res_3647_; 
v_elimTrivial_boxed_3644_ = lean_unbox(v_elimTrivial_3634_);
v_sz_boxed_3645_ = lean_unbox_usize(v_sz_3636_);
lean_dec(v_sz_3636_);
v_i_boxed_3646_ = lean_unbox_usize(v_i_3637_);
lean_dec(v_i_3637_);
v_res_3647_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3(v_elimTrivial_boxed_3644_, v_as_3635_, v_sz_boxed_3645_, v_i_boxed_3646_, v_b_3638_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_);
lean_dec(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec(v___y_3640_);
lean_dec_ref(v___y_3639_);
lean_dec_ref(v_as_3635_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0(lean_object* v_init_3648_, uint8_t v_elimTrivial_3649_, lean_object* v_n_3650_, lean_object* v_b_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_){
_start:
{
if (lean_obj_tag(v_n_3650_) == 0)
{
lean_object* v_cs_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; size_t v_sz_3660_; size_t v___x_3661_; lean_object* v___x_3662_; 
v_cs_3657_ = lean_ctor_get(v_n_3650_, 0);
v___x_3658_ = lean_box(0);
v___x_3659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3659_, 0, v___x_3658_);
lean_ctor_set(v___x_3659_, 1, v_b_3651_);
v_sz_3660_ = lean_array_size(v_cs_3657_);
v___x_3661_ = ((size_t)0ULL);
v___x_3662_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__2(v_init_3648_, v_elimTrivial_3649_, v_cs_3657_, v_sz_3660_, v___x_3661_, v___x_3659_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_);
if (lean_obj_tag(v___x_3662_) == 0)
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3677_; 
v_a_3663_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3677_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3665_ = v___x_3662_;
v_isShared_3666_ = v_isSharedCheck_3677_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3662_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3677_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v_fst_3667_; 
v_fst_3667_ = lean_ctor_get(v_a_3663_, 0);
if (lean_obj_tag(v_fst_3667_) == 0)
{
lean_object* v_snd_3668_; lean_object* v___x_3669_; lean_object* v___x_3671_; 
v_snd_3668_ = lean_ctor_get(v_a_3663_, 1);
lean_inc(v_snd_3668_);
lean_dec(v_a_3663_);
v___x_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3669_, 0, v_snd_3668_);
if (v_isShared_3666_ == 0)
{
lean_ctor_set(v___x_3665_, 0, v___x_3669_);
v___x_3671_ = v___x_3665_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v___x_3669_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
else
{
lean_object* v_val_3673_; lean_object* v___x_3675_; 
lean_inc_ref(v_fst_3667_);
lean_dec(v_a_3663_);
v_val_3673_ = lean_ctor_get(v_fst_3667_, 0);
lean_inc(v_val_3673_);
lean_dec_ref_known(v_fst_3667_, 1);
if (v_isShared_3666_ == 0)
{
lean_ctor_set(v___x_3665_, 0, v_val_3673_);
v___x_3675_ = v___x_3665_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_val_3673_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
else
{
lean_object* v_a_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3685_; 
v_a_3678_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3680_ = v___x_3662_;
v_isShared_3681_ = v_isSharedCheck_3685_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_a_3678_);
lean_dec(v___x_3662_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3685_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
lean_object* v___x_3683_; 
if (v_isShared_3681_ == 0)
{
v___x_3683_ = v___x_3680_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v_a_3678_);
v___x_3683_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
return v___x_3683_;
}
}
}
}
else
{
lean_object* v_vs_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; size_t v_sz_3689_; size_t v___x_3690_; lean_object* v___x_3691_; 
v_vs_3686_ = lean_ctor_get(v_n_3650_, 0);
v___x_3687_ = lean_box(0);
v___x_3688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3688_, 0, v___x_3687_);
lean_ctor_set(v___x_3688_, 1, v_b_3651_);
v_sz_3689_ = lean_array_size(v_vs_3686_);
v___x_3690_ = ((size_t)0ULL);
v___x_3691_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3(v_elimTrivial_3649_, v_vs_3686_, v_sz_3689_, v___x_3690_, v___x_3688_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_);
if (lean_obj_tag(v___x_3691_) == 0)
{
lean_object* v_a_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3706_; 
v_a_3692_ = lean_ctor_get(v___x_3691_, 0);
v_isSharedCheck_3706_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3694_ = v___x_3691_;
v_isShared_3695_ = v_isSharedCheck_3706_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_a_3692_);
lean_dec(v___x_3691_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3706_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v_fst_3696_; 
v_fst_3696_ = lean_ctor_get(v_a_3692_, 0);
if (lean_obj_tag(v_fst_3696_) == 0)
{
lean_object* v_snd_3697_; lean_object* v___x_3698_; lean_object* v___x_3700_; 
v_snd_3697_ = lean_ctor_get(v_a_3692_, 1);
lean_inc(v_snd_3697_);
lean_dec(v_a_3692_);
v___x_3698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3698_, 0, v_snd_3697_);
if (v_isShared_3695_ == 0)
{
lean_ctor_set(v___x_3694_, 0, v___x_3698_);
v___x_3700_ = v___x_3694_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v___x_3698_);
v___x_3700_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
return v___x_3700_;
}
}
else
{
lean_object* v_val_3702_; lean_object* v___x_3704_; 
lean_inc_ref(v_fst_3696_);
lean_dec(v_a_3692_);
v_val_3702_ = lean_ctor_get(v_fst_3696_, 0);
lean_inc(v_val_3702_);
lean_dec_ref_known(v_fst_3696_, 1);
if (v_isShared_3695_ == 0)
{
lean_ctor_set(v___x_3694_, 0, v_val_3702_);
v___x_3704_ = v___x_3694_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v_val_3702_);
v___x_3704_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
return v___x_3704_;
}
}
}
}
else
{
lean_object* v_a_3707_; lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3714_; 
v_a_3707_ = lean_ctor_get(v___x_3691_, 0);
v_isSharedCheck_3714_ = !lean_is_exclusive(v___x_3691_);
if (v_isSharedCheck_3714_ == 0)
{
v___x_3709_ = v___x_3691_;
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
else
{
lean_inc(v_a_3707_);
lean_dec(v___x_3691_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v___x_3712_; 
if (v_isShared_3710_ == 0)
{
v___x_3712_ = v___x_3709_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v_a_3707_);
v___x_3712_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
return v___x_3712_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__2(lean_object* v_init_3715_, uint8_t v_elimTrivial_3716_, lean_object* v_as_3717_, size_t v_sz_3718_, size_t v_i_3719_, lean_object* v_b_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_){
_start:
{
uint8_t v___x_3726_; 
v___x_3726_ = lean_usize_dec_lt(v_i_3719_, v_sz_3718_);
if (v___x_3726_ == 0)
{
lean_object* v___x_3727_; 
v___x_3727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3727_, 0, v_b_3720_);
return v___x_3727_;
}
else
{
lean_object* v_snd_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3762_; 
v_snd_3728_ = lean_ctor_get(v_b_3720_, 1);
v_isSharedCheck_3762_ = !lean_is_exclusive(v_b_3720_);
if (v_isSharedCheck_3762_ == 0)
{
lean_object* v_unused_3763_; 
v_unused_3763_ = lean_ctor_get(v_b_3720_, 0);
lean_dec(v_unused_3763_);
v___x_3730_ = v_b_3720_;
v_isShared_3731_ = v_isSharedCheck_3762_;
goto v_resetjp_3729_;
}
else
{
lean_inc(v_snd_3728_);
lean_dec(v_b_3720_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3762_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v___x_3732_; lean_object* v_a_3733_; lean_object* v___x_3734_; 
v___x_3732_ = lean_box(0);
v_a_3733_ = lean_array_uget_borrowed(v_as_3717_, v_i_3719_);
lean_inc(v_snd_3728_);
v___x_3734_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0(v_init_3715_, v_elimTrivial_3716_, v_a_3733_, v_snd_3728_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_);
if (lean_obj_tag(v___x_3734_) == 0)
{
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3753_; 
v_a_3735_ = lean_ctor_get(v___x_3734_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3734_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3737_ = v___x_3734_;
v_isShared_3738_ = v_isSharedCheck_3753_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___x_3734_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3753_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
if (lean_obj_tag(v_a_3735_) == 0)
{
lean_object* v___x_3739_; lean_object* v___x_3741_; 
v___x_3739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3739_, 0, v_a_3735_);
if (v_isShared_3731_ == 0)
{
lean_ctor_set(v___x_3730_, 0, v___x_3739_);
v___x_3741_ = v___x_3730_;
goto v_reusejp_3740_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v___x_3739_);
lean_ctor_set(v_reuseFailAlloc_3745_, 1, v_snd_3728_);
v___x_3741_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3740_;
}
v_reusejp_3740_:
{
lean_object* v___x_3743_; 
if (v_isShared_3738_ == 0)
{
lean_ctor_set(v___x_3737_, 0, v___x_3741_);
v___x_3743_ = v___x_3737_;
goto v_reusejp_3742_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v___x_3741_);
v___x_3743_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3742_;
}
v_reusejp_3742_:
{
return v___x_3743_;
}
}
}
else
{
lean_object* v_a_3746_; lean_object* v___x_3748_; 
lean_del_object(v___x_3737_);
lean_dec(v_snd_3728_);
v_a_3746_ = lean_ctor_get(v_a_3735_, 0);
lean_inc(v_a_3746_);
lean_dec_ref_known(v_a_3735_, 1);
if (v_isShared_3731_ == 0)
{
lean_ctor_set(v___x_3730_, 1, v_a_3746_);
lean_ctor_set(v___x_3730_, 0, v___x_3732_);
v___x_3748_ = v___x_3730_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v___x_3732_);
lean_ctor_set(v_reuseFailAlloc_3752_, 1, v_a_3746_);
v___x_3748_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
size_t v___x_3749_; size_t v___x_3750_; 
v___x_3749_ = ((size_t)1ULL);
v___x_3750_ = lean_usize_add(v_i_3719_, v___x_3749_);
v_i_3719_ = v___x_3750_;
v_b_3720_ = v___x_3748_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3761_; 
lean_del_object(v___x_3730_);
lean_dec(v_snd_3728_);
v_a_3754_ = lean_ctor_get(v___x_3734_, 0);
v_isSharedCheck_3761_ = !lean_is_exclusive(v___x_3734_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3756_ = v___x_3734_;
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v___x_3734_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v___x_3759_; 
if (v_isShared_3757_ == 0)
{
v___x_3759_ = v___x_3756_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v_a_3754_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
return v___x_3759_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__2___boxed(lean_object* v_init_3764_, lean_object* v_elimTrivial_3765_, lean_object* v_as_3766_, lean_object* v_sz_3767_, lean_object* v_i_3768_, lean_object* v_b_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_){
_start:
{
uint8_t v_elimTrivial_boxed_3775_; size_t v_sz_boxed_3776_; size_t v_i_boxed_3777_; lean_object* v_res_3778_; 
v_elimTrivial_boxed_3775_ = lean_unbox(v_elimTrivial_3765_);
v_sz_boxed_3776_ = lean_unbox_usize(v_sz_3767_);
lean_dec(v_sz_3767_);
v_i_boxed_3777_ = lean_unbox_usize(v_i_3768_);
lean_dec(v_i_3768_);
v_res_3778_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__2(v_init_3764_, v_elimTrivial_boxed_3775_, v_as_3766_, v_sz_boxed_3776_, v_i_boxed_3777_, v_b_3769_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_);
lean_dec(v___y_3773_);
lean_dec_ref(v___y_3772_);
lean_dec(v___y_3771_);
lean_dec_ref(v___y_3770_);
lean_dec_ref(v_as_3766_);
lean_dec_ref(v_init_3764_);
return v_res_3778_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0___boxed(lean_object* v_init_3779_, lean_object* v_elimTrivial_3780_, lean_object* v_n_3781_, lean_object* v_b_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_){
_start:
{
uint8_t v_elimTrivial_boxed_3788_; lean_object* v_res_3789_; 
v_elimTrivial_boxed_3788_ = lean_unbox(v_elimTrivial_3780_);
v_res_3789_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0(v_init_3779_, v_elimTrivial_boxed_3788_, v_n_3781_, v_b_3782_, v___y_3783_, v___y_3784_, v___y_3785_, v___y_3786_);
lean_dec(v___y_3786_);
lean_dec_ref(v___y_3785_);
lean_dec(v___y_3784_);
lean_dec_ref(v___y_3783_);
lean_dec_ref(v_n_3781_);
lean_dec_ref(v_init_3779_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0(uint8_t v_elimTrivial_3790_, lean_object* v_t_3791_, lean_object* v_init_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_){
_start:
{
lean_object* v_root_3798_; lean_object* v_tail_3799_; lean_object* v___x_3800_; 
v_root_3798_ = lean_ctor_get(v_t_3791_, 0);
v_tail_3799_ = lean_ctor_get(v_t_3791_, 1);
lean_inc_ref(v_init_3792_);
v___x_3800_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0(v_init_3792_, v_elimTrivial_3790_, v_root_3798_, v_init_3792_, v___y_3793_, v___y_3794_, v___y_3795_, v___y_3796_);
lean_dec_ref(v_init_3792_);
if (lean_obj_tag(v___x_3800_) == 0)
{
lean_object* v_a_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3837_; 
v_a_3801_ = lean_ctor_get(v___x_3800_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v___x_3800_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3803_ = v___x_3800_;
v_isShared_3804_ = v_isSharedCheck_3837_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_a_3801_);
lean_dec(v___x_3800_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3837_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
if (lean_obj_tag(v_a_3801_) == 0)
{
lean_object* v_a_3805_; lean_object* v___x_3807_; 
v_a_3805_ = lean_ctor_get(v_a_3801_, 0);
lean_inc(v_a_3805_);
lean_dec_ref_known(v_a_3801_, 1);
if (v_isShared_3804_ == 0)
{
lean_ctor_set(v___x_3803_, 0, v_a_3805_);
v___x_3807_ = v___x_3803_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3805_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
else
{
lean_object* v_a_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; size_t v_sz_3812_; size_t v___x_3813_; lean_object* v___x_3814_; 
lean_del_object(v___x_3803_);
v_a_3809_ = lean_ctor_get(v_a_3801_, 0);
lean_inc(v_a_3809_);
lean_dec_ref_known(v_a_3801_, 1);
v___x_3810_ = lean_box(0);
v___x_3811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
lean_ctor_set(v___x_3811_, 1, v_a_3809_);
v_sz_3812_ = lean_array_size(v_tail_3799_);
v___x_3813_ = ((size_t)0ULL);
v___x_3814_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1(v_elimTrivial_3790_, v_tail_3799_, v_sz_3812_, v___x_3813_, v___x_3811_, v___y_3793_, v___y_3794_, v___y_3795_, v___y_3796_);
if (lean_obj_tag(v___x_3814_) == 0)
{
lean_object* v_a_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3828_; 
v_a_3815_ = lean_ctor_get(v___x_3814_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3814_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3817_ = v___x_3814_;
v_isShared_3818_ = v_isSharedCheck_3828_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_a_3815_);
lean_dec(v___x_3814_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3828_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v_fst_3819_; 
v_fst_3819_ = lean_ctor_get(v_a_3815_, 0);
if (lean_obj_tag(v_fst_3819_) == 0)
{
lean_object* v_snd_3820_; lean_object* v___x_3822_; 
v_snd_3820_ = lean_ctor_get(v_a_3815_, 1);
lean_inc(v_snd_3820_);
lean_dec(v_a_3815_);
if (v_isShared_3818_ == 0)
{
lean_ctor_set(v___x_3817_, 0, v_snd_3820_);
v___x_3822_ = v___x_3817_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_snd_3820_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
else
{
lean_object* v_val_3824_; lean_object* v___x_3826_; 
lean_inc_ref(v_fst_3819_);
lean_dec(v_a_3815_);
v_val_3824_ = lean_ctor_get(v_fst_3819_, 0);
lean_inc(v_val_3824_);
lean_dec_ref_known(v_fst_3819_, 1);
if (v_isShared_3818_ == 0)
{
lean_ctor_set(v___x_3817_, 0, v_val_3824_);
v___x_3826_ = v___x_3817_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v_val_3824_);
v___x_3826_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
return v___x_3826_;
}
}
}
}
else
{
lean_object* v_a_3829_; lean_object* v___x_3831_; uint8_t v_isShared_3832_; uint8_t v_isSharedCheck_3836_; 
v_a_3829_ = lean_ctor_get(v___x_3814_, 0);
v_isSharedCheck_3836_ = !lean_is_exclusive(v___x_3814_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3831_ = v___x_3814_;
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
else
{
lean_inc(v_a_3829_);
lean_dec(v___x_3814_);
v___x_3831_ = lean_box(0);
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
v_resetjp_3830_:
{
lean_object* v___x_3834_; 
if (v_isShared_3832_ == 0)
{
v___x_3834_ = v___x_3831_;
goto v_reusejp_3833_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v_a_3829_);
v___x_3834_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3833_;
}
v_reusejp_3833_:
{
return v___x_3834_;
}
}
}
}
}
}
else
{
lean_object* v_a_3838_; lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3845_; 
v_a_3838_ = lean_ctor_get(v___x_3800_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3800_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3840_ = v___x_3800_;
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
else
{
lean_inc(v_a_3838_);
lean_dec(v___x_3800_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3843_; 
if (v_isShared_3841_ == 0)
{
v___x_3843_ = v___x_3840_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v_a_3838_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0___boxed(lean_object* v_elimTrivial_3846_, lean_object* v_t_3847_, lean_object* v_init_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_){
_start:
{
uint8_t v_elimTrivial_boxed_3854_; lean_object* v_res_3855_; 
v_elimTrivial_boxed_3854_ = lean_unbox(v_elimTrivial_3846_);
v_res_3855_ = l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0(v_elimTrivial_boxed_3854_, v_t_3847_, v_init_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_);
lean_dec(v___y_3852_);
lean_dec_ref(v___y_3851_);
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec_ref(v_t_3847_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elimLets_spec__2(lean_object* v_as_3856_, size_t v_sz_3857_, size_t v_i_3858_, lean_object* v_b_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
uint8_t v___x_3865_; 
v___x_3865_ = lean_usize_dec_lt(v_i_3858_, v_sz_3857_);
if (v___x_3865_ == 0)
{
lean_object* v___x_3866_; 
v___x_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3866_, 0, v_b_3859_);
return v___x_3866_;
}
else
{
lean_object* v_a_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; 
v_a_3867_ = lean_array_uget_borrowed(v_as_3856_, v_i_3858_);
v___x_3868_ = l_Lean_Expr_fvarId_x21(v_a_3867_);
v___x_3869_ = l_Lean_MVarId_tryClear(v_b_3859_, v___x_3868_, v___y_3860_, v___y_3861_, v___y_3862_, v___y_3863_);
if (lean_obj_tag(v___x_3869_) == 0)
{
lean_object* v_a_3870_; size_t v___x_3871_; size_t v___x_3872_; 
v_a_3870_ = lean_ctor_get(v___x_3869_, 0);
lean_inc(v_a_3870_);
lean_dec_ref_known(v___x_3869_, 1);
v___x_3871_ = ((size_t)1ULL);
v___x_3872_ = lean_usize_add(v_i_3858_, v___x_3871_);
v_i_3858_ = v___x_3872_;
v_b_3859_ = v_a_3870_;
goto _start;
}
else
{
return v___x_3869_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elimLets_spec__2___boxed(lean_object* v_as_3874_, lean_object* v_sz_3875_, lean_object* v_i_3876_, lean_object* v_b_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
size_t v_sz_boxed_3883_; size_t v_i_boxed_3884_; lean_object* v_res_3885_; 
v_sz_boxed_3883_ = lean_unbox_usize(v_sz_3875_);
lean_dec(v_sz_3875_);
v_i_boxed_3884_ = lean_unbox_usize(v_i_3876_);
lean_dec(v_i_3876_);
v_res_3885_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elimLets_spec__2(v_as_3874_, v_sz_boxed_3883_, v_i_boxed_3884_, v_b_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
lean_dec(v___y_3881_);
lean_dec_ref(v___y_3880_);
lean_dec(v___y_3879_);
lean_dec_ref(v___y_3878_);
lean_dec_ref(v_as_3874_);
return v_res_3885_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11_spec__12___redArg(lean_object* v_x_3886_, lean_object* v_x_3887_, lean_object* v_x_3888_, lean_object* v_x_3889_){
_start:
{
lean_object* v_ks_3890_; lean_object* v_vs_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3915_; 
v_ks_3890_ = lean_ctor_get(v_x_3886_, 0);
v_vs_3891_ = lean_ctor_get(v_x_3886_, 1);
v_isSharedCheck_3915_ = !lean_is_exclusive(v_x_3886_);
if (v_isSharedCheck_3915_ == 0)
{
v___x_3893_ = v_x_3886_;
v_isShared_3894_ = v_isSharedCheck_3915_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_vs_3891_);
lean_inc(v_ks_3890_);
lean_dec(v_x_3886_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3915_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v___x_3895_; uint8_t v___x_3896_; 
v___x_3895_ = lean_array_get_size(v_ks_3890_);
v___x_3896_ = lean_nat_dec_lt(v_x_3887_, v___x_3895_);
if (v___x_3896_ == 0)
{
lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3900_; 
lean_dec(v_x_3887_);
v___x_3897_ = lean_array_push(v_ks_3890_, v_x_3888_);
v___x_3898_ = lean_array_push(v_vs_3891_, v_x_3889_);
if (v_isShared_3894_ == 0)
{
lean_ctor_set(v___x_3893_, 1, v___x_3898_);
lean_ctor_set(v___x_3893_, 0, v___x_3897_);
v___x_3900_ = v___x_3893_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v___x_3897_);
lean_ctor_set(v_reuseFailAlloc_3901_, 1, v___x_3898_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
else
{
lean_object* v_k_x27_3902_; uint8_t v___x_3903_; 
v_k_x27_3902_ = lean_array_fget_borrowed(v_ks_3890_, v_x_3887_);
v___x_3903_ = l_Lean_instBEqMVarId_beq(v_x_3888_, v_k_x27_3902_);
if (v___x_3903_ == 0)
{
lean_object* v___x_3905_; 
if (v_isShared_3894_ == 0)
{
v___x_3905_ = v___x_3893_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3909_; 
v_reuseFailAlloc_3909_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3909_, 0, v_ks_3890_);
lean_ctor_set(v_reuseFailAlloc_3909_, 1, v_vs_3891_);
v___x_3905_ = v_reuseFailAlloc_3909_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
lean_object* v___x_3906_; lean_object* v___x_3907_; 
v___x_3906_ = lean_unsigned_to_nat(1u);
v___x_3907_ = lean_nat_add(v_x_3887_, v___x_3906_);
lean_dec(v_x_3887_);
v_x_3886_ = v___x_3905_;
v_x_3887_ = v___x_3907_;
goto _start;
}
}
else
{
lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3913_; 
v___x_3910_ = lean_array_fset(v_ks_3890_, v_x_3887_, v_x_3888_);
v___x_3911_ = lean_array_fset(v_vs_3891_, v_x_3887_, v_x_3889_);
lean_dec(v_x_3887_);
if (v_isShared_3894_ == 0)
{
lean_ctor_set(v___x_3893_, 1, v___x_3911_);
lean_ctor_set(v___x_3893_, 0, v___x_3910_);
v___x_3913_ = v___x_3893_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v___x_3910_);
lean_ctor_set(v_reuseFailAlloc_3914_, 1, v___x_3911_);
v___x_3913_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
return v___x_3913_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11___redArg(lean_object* v_n_3916_, lean_object* v_k_3917_, lean_object* v_v_3918_){
_start:
{
lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3919_ = lean_unsigned_to_nat(0u);
v___x_3920_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11_spec__12___redArg(v_n_3916_, v___x_3919_, v_k_3917_, v_v_3918_);
return v___x_3920_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_3921_; lean_object* v___x_3922_; 
v___x_3921_ = lean_box(0);
v___x_3922_ = l_unsafeCast___redArg(v___x_3921_);
return v___x_3922_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_3923_; 
v___x_3923_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3923_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg(lean_object* v_x_3924_, size_t v_x_3925_, size_t v_x_3926_, lean_object* v_x_3927_, lean_object* v_x_3928_){
_start:
{
if (lean_obj_tag(v_x_3924_) == 0)
{
lean_object* v_es_3929_; size_t v___x_3930_; size_t v___x_3931_; lean_object* v_j_3932_; lean_object* v___x_3933_; uint8_t v___x_3934_; 
v_es_3929_ = lean_ctor_get(v_x_3924_, 0);
v___x_3930_ = ((size_t)31ULL);
v___x_3931_ = lean_usize_land(v_x_3925_, v___x_3930_);
v_j_3932_ = lean_usize_to_nat(v___x_3931_);
v___x_3933_ = lean_array_get_size(v_es_3929_);
v___x_3934_ = lean_nat_dec_lt(v_j_3932_, v___x_3933_);
if (v___x_3934_ == 0)
{
lean_dec(v_j_3932_);
lean_dec(v_x_3928_);
lean_dec(v_x_3927_);
return v_x_3924_;
}
else
{
lean_object* v___x_3936_; uint8_t v_isShared_3937_; uint8_t v_isSharedCheck_3973_; 
lean_inc_ref(v_es_3929_);
v_isSharedCheck_3973_ = !lean_is_exclusive(v_x_3924_);
if (v_isSharedCheck_3973_ == 0)
{
lean_object* v_unused_3974_; 
v_unused_3974_ = lean_ctor_get(v_x_3924_, 0);
lean_dec(v_unused_3974_);
v___x_3936_ = v_x_3924_;
v_isShared_3937_ = v_isSharedCheck_3973_;
goto v_resetjp_3935_;
}
else
{
lean_dec(v_x_3924_);
v___x_3936_ = lean_box(0);
v_isShared_3937_ = v_isSharedCheck_3973_;
goto v_resetjp_3935_;
}
v_resetjp_3935_:
{
lean_object* v_v_3938_; lean_object* v___x_3939_; lean_object* v_xs_x27_3940_; lean_object* v___y_3942_; 
v_v_3938_ = lean_array_fget(v_es_3929_, v_j_3932_);
v___x_3939_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__0);
v_xs_x27_3940_ = lean_array_fset(v_es_3929_, v_j_3932_, v___x_3939_);
switch(lean_obj_tag(v_v_3938_))
{
case 0:
{
lean_object* v_key_3947_; lean_object* v_val_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3958_; 
v_key_3947_ = lean_ctor_get(v_v_3938_, 0);
v_val_3948_ = lean_ctor_get(v_v_3938_, 1);
v_isSharedCheck_3958_ = !lean_is_exclusive(v_v_3938_);
if (v_isSharedCheck_3958_ == 0)
{
v___x_3950_ = v_v_3938_;
v_isShared_3951_ = v_isSharedCheck_3958_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_val_3948_);
lean_inc(v_key_3947_);
lean_dec(v_v_3938_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3958_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
uint8_t v___x_3952_; 
v___x_3952_ = l_Lean_instBEqMVarId_beq(v_x_3927_, v_key_3947_);
if (v___x_3952_ == 0)
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
lean_del_object(v___x_3950_);
v___x_3953_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3947_, v_val_3948_, v_x_3927_, v_x_3928_);
v___x_3954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
v___y_3942_ = v___x_3954_;
goto v___jp_3941_;
}
else
{
lean_object* v___x_3956_; 
lean_dec(v_val_3948_);
lean_dec(v_key_3947_);
if (v_isShared_3951_ == 0)
{
lean_ctor_set(v___x_3950_, 1, v_x_3928_);
lean_ctor_set(v___x_3950_, 0, v_x_3927_);
v___x_3956_ = v___x_3950_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_3957_; 
v_reuseFailAlloc_3957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3957_, 0, v_x_3927_);
lean_ctor_set(v_reuseFailAlloc_3957_, 1, v_x_3928_);
v___x_3956_ = v_reuseFailAlloc_3957_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
v___y_3942_ = v___x_3956_;
goto v___jp_3941_;
}
}
}
}
case 1:
{
lean_object* v_node_3959_; lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3971_; 
v_node_3959_ = lean_ctor_get(v_v_3938_, 0);
v_isSharedCheck_3971_ = !lean_is_exclusive(v_v_3938_);
if (v_isSharedCheck_3971_ == 0)
{
v___x_3961_ = v_v_3938_;
v_isShared_3962_ = v_isSharedCheck_3971_;
goto v_resetjp_3960_;
}
else
{
lean_inc(v_node_3959_);
lean_dec(v_v_3938_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3971_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
size_t v___x_3963_; size_t v___x_3964_; size_t v___x_3965_; size_t v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3969_; 
v___x_3963_ = ((size_t)5ULL);
v___x_3964_ = lean_usize_shift_right(v_x_3925_, v___x_3963_);
v___x_3965_ = ((size_t)1ULL);
v___x_3966_ = lean_usize_add(v_x_3926_, v___x_3965_);
v___x_3967_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg(v_node_3959_, v___x_3964_, v___x_3966_, v_x_3927_, v_x_3928_);
if (v_isShared_3962_ == 0)
{
lean_ctor_set(v___x_3961_, 0, v___x_3967_);
v___x_3969_ = v___x_3961_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3970_; 
v_reuseFailAlloc_3970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3970_, 0, v___x_3967_);
v___x_3969_ = v_reuseFailAlloc_3970_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
v___y_3942_ = v___x_3969_;
goto v___jp_3941_;
}
}
}
default: 
{
lean_object* v___x_3972_; 
v___x_3972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3972_, 0, v_x_3927_);
lean_ctor_set(v___x_3972_, 1, v_x_3928_);
v___y_3942_ = v___x_3972_;
goto v___jp_3941_;
}
}
v___jp_3941_:
{
lean_object* v___x_3943_; lean_object* v___x_3945_; 
v___x_3943_ = lean_array_fset(v_xs_x27_3940_, v_j_3932_, v___y_3942_);
lean_dec(v_j_3932_);
if (v_isShared_3937_ == 0)
{
lean_ctor_set(v___x_3936_, 0, v___x_3943_);
v___x_3945_ = v___x_3936_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v___x_3943_);
v___x_3945_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
return v___x_3945_;
}
}
}
}
}
else
{
lean_object* v_ks_3975_; lean_object* v_vs_3976_; lean_object* v___x_3978_; uint8_t v_isShared_3979_; uint8_t v_isSharedCheck_3994_; 
v_ks_3975_ = lean_ctor_get(v_x_3924_, 0);
v_vs_3976_ = lean_ctor_get(v_x_3924_, 1);
v_isSharedCheck_3994_ = !lean_is_exclusive(v_x_3924_);
if (v_isSharedCheck_3994_ == 0)
{
v___x_3978_ = v_x_3924_;
v_isShared_3979_ = v_isSharedCheck_3994_;
goto v_resetjp_3977_;
}
else
{
lean_inc(v_vs_3976_);
lean_inc(v_ks_3975_);
lean_dec(v_x_3924_);
v___x_3978_ = lean_box(0);
v_isShared_3979_ = v_isSharedCheck_3994_;
goto v_resetjp_3977_;
}
v_resetjp_3977_:
{
lean_object* v___x_3981_; 
if (v_isShared_3979_ == 0)
{
v___x_3981_ = v___x_3978_;
goto v_reusejp_3980_;
}
else
{
lean_object* v_reuseFailAlloc_3993_; 
v_reuseFailAlloc_3993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3993_, 0, v_ks_3975_);
lean_ctor_set(v_reuseFailAlloc_3993_, 1, v_vs_3976_);
v___x_3981_ = v_reuseFailAlloc_3993_;
goto v_reusejp_3980_;
}
v_reusejp_3980_:
{
lean_object* v_newNode_3982_; size_t v___x_3983_; uint8_t v___x_3984_; 
v_newNode_3982_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11___redArg(v___x_3981_, v_x_3927_, v_x_3928_);
v___x_3983_ = ((size_t)7ULL);
v___x_3984_ = lean_usize_dec_le(v___x_3983_, v_x_3926_);
if (v___x_3984_ == 0)
{
lean_object* v___x_3985_; lean_object* v___x_3986_; uint8_t v___x_3987_; 
v___x_3985_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3982_);
v___x_3986_ = lean_unsigned_to_nat(4u);
v___x_3987_ = lean_nat_dec_lt(v___x_3985_, v___x_3986_);
lean_dec(v___x_3985_);
if (v___x_3987_ == 0)
{
lean_object* v_ks_3988_; lean_object* v_vs_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; 
v_ks_3988_ = lean_ctor_get(v_newNode_3982_, 0);
lean_inc_ref(v_ks_3988_);
v_vs_3989_ = lean_ctor_get(v_newNode_3982_, 1);
lean_inc_ref(v_vs_3989_);
lean_dec_ref(v_newNode_3982_);
v___x_3990_ = lean_unsigned_to_nat(0u);
v___x_3991_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___closed__1);
v___x_3992_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12___redArg(v_x_3926_, v_ks_3988_, v_vs_3989_, v___x_3990_, v___x_3991_);
lean_dec_ref(v_vs_3989_);
lean_dec_ref(v_ks_3988_);
return v___x_3992_;
}
else
{
return v_newNode_3982_;
}
}
else
{
return v_newNode_3982_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12___redArg(size_t v_depth_3995_, lean_object* v_keys_3996_, lean_object* v_vals_3997_, lean_object* v_i_3998_, lean_object* v_entries_3999_){
_start:
{
lean_object* v___x_4000_; uint8_t v___x_4001_; 
v___x_4000_ = lean_array_get_size(v_keys_3996_);
v___x_4001_ = lean_nat_dec_lt(v_i_3998_, v___x_4000_);
if (v___x_4001_ == 0)
{
lean_dec(v_i_3998_);
return v_entries_3999_;
}
else
{
lean_object* v_k_4002_; lean_object* v_v_4003_; uint64_t v___x_4004_; size_t v_h_4005_; size_t v___x_4006_; lean_object* v___x_4007_; size_t v___x_4008_; size_t v___x_4009_; size_t v___x_4010_; size_t v_h_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; 
v_k_4002_ = lean_array_fget_borrowed(v_keys_3996_, v_i_3998_);
v_v_4003_ = lean_array_fget_borrowed(v_vals_3997_, v_i_3998_);
v___x_4004_ = l_Lean_instHashableMVarId_hash(v_k_4002_);
v_h_4005_ = lean_uint64_to_usize(v___x_4004_);
v___x_4006_ = ((size_t)5ULL);
v___x_4007_ = lean_unsigned_to_nat(1u);
v___x_4008_ = ((size_t)1ULL);
v___x_4009_ = lean_usize_sub(v_depth_3995_, v___x_4008_);
v___x_4010_ = lean_usize_mul(v___x_4006_, v___x_4009_);
v_h_4011_ = lean_usize_shift_right(v_h_4005_, v___x_4010_);
v___x_4012_ = lean_nat_add(v_i_3998_, v___x_4007_);
lean_dec(v_i_3998_);
lean_inc(v_v_4003_);
lean_inc(v_k_4002_);
v___x_4013_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg(v_entries_3999_, v_h_4011_, v_depth_3995_, v_k_4002_, v_v_4003_);
v_i_3998_ = v___x_4012_;
v_entries_3999_ = v___x_4013_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12___redArg___boxed(lean_object* v_depth_4015_, lean_object* v_keys_4016_, lean_object* v_vals_4017_, lean_object* v_i_4018_, lean_object* v_entries_4019_){
_start:
{
size_t v_depth_boxed_4020_; lean_object* v_res_4021_; 
v_depth_boxed_4020_ = lean_unbox_usize(v_depth_4015_);
lean_dec(v_depth_4015_);
v_res_4021_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12___redArg(v_depth_boxed_4020_, v_keys_4016_, v_vals_4017_, v_i_4018_, v_entries_4019_);
lean_dec_ref(v_vals_4017_);
lean_dec_ref(v_keys_4016_);
return v_res_4021_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg___boxed(lean_object* v_x_4022_, lean_object* v_x_4023_, lean_object* v_x_4024_, lean_object* v_x_4025_, lean_object* v_x_4026_){
_start:
{
size_t v_x_7814__boxed_4027_; size_t v_x_7815__boxed_4028_; lean_object* v_res_4029_; 
v_x_7814__boxed_4027_ = lean_unbox_usize(v_x_4023_);
lean_dec(v_x_4023_);
v_x_7815__boxed_4028_ = lean_unbox_usize(v_x_4024_);
lean_dec(v_x_4024_);
v_res_4029_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg(v_x_4022_, v_x_7814__boxed_4027_, v_x_7815__boxed_4028_, v_x_4025_, v_x_4026_);
return v_res_4029_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3___redArg(lean_object* v_x_4030_, lean_object* v_x_4031_, lean_object* v_x_4032_){
_start:
{
uint64_t v___x_4033_; size_t v___x_4034_; size_t v___x_4035_; lean_object* v___x_4036_; 
v___x_4033_ = l_Lean_instHashableMVarId_hash(v_x_4031_);
v___x_4034_ = lean_uint64_to_usize(v___x_4033_);
v___x_4035_ = ((size_t)1ULL);
v___x_4036_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg(v_x_4030_, v___x_4034_, v___x_4035_, v_x_4031_, v_x_4032_);
return v___x_4036_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1___redArg(lean_object* v_mvarId_4037_, lean_object* v_val_4038_, lean_object* v___y_4039_){
_start:
{
lean_object* v___x_4041_; lean_object* v_mctx_4042_; lean_object* v_cache_4043_; lean_object* v_zetaDeltaFVarIds_4044_; lean_object* v_postponed_4045_; lean_object* v_diag_4046_; lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4075_; 
v___x_4041_ = lean_st_ref_take(v___y_4039_);
v_mctx_4042_ = lean_ctor_get(v___x_4041_, 0);
v_cache_4043_ = lean_ctor_get(v___x_4041_, 1);
v_zetaDeltaFVarIds_4044_ = lean_ctor_get(v___x_4041_, 2);
v_postponed_4045_ = lean_ctor_get(v___x_4041_, 3);
v_diag_4046_ = lean_ctor_get(v___x_4041_, 4);
v_isSharedCheck_4075_ = !lean_is_exclusive(v___x_4041_);
if (v_isSharedCheck_4075_ == 0)
{
v___x_4048_ = v___x_4041_;
v_isShared_4049_ = v_isSharedCheck_4075_;
goto v_resetjp_4047_;
}
else
{
lean_inc(v_diag_4046_);
lean_inc(v_postponed_4045_);
lean_inc(v_zetaDeltaFVarIds_4044_);
lean_inc(v_cache_4043_);
lean_inc(v_mctx_4042_);
lean_dec(v___x_4041_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4075_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v_depth_4050_; lean_object* v_levelAssignDepth_4051_; lean_object* v_lmvarCounter_4052_; lean_object* v_mvarCounter_4053_; lean_object* v_lDecls_4054_; lean_object* v_decls_4055_; lean_object* v_userNames_4056_; lean_object* v_lAssignment_4057_; lean_object* v_eAssignment_4058_; lean_object* v_dAssignment_4059_; lean_object* v_instanceTypedMVars_4060_; lean_object* v___x_4062_; uint8_t v_isShared_4063_; uint8_t v_isSharedCheck_4074_; 
v_depth_4050_ = lean_ctor_get(v_mctx_4042_, 0);
v_levelAssignDepth_4051_ = lean_ctor_get(v_mctx_4042_, 1);
v_lmvarCounter_4052_ = lean_ctor_get(v_mctx_4042_, 2);
v_mvarCounter_4053_ = lean_ctor_get(v_mctx_4042_, 3);
v_lDecls_4054_ = lean_ctor_get(v_mctx_4042_, 4);
v_decls_4055_ = lean_ctor_get(v_mctx_4042_, 5);
v_userNames_4056_ = lean_ctor_get(v_mctx_4042_, 6);
v_lAssignment_4057_ = lean_ctor_get(v_mctx_4042_, 7);
v_eAssignment_4058_ = lean_ctor_get(v_mctx_4042_, 8);
v_dAssignment_4059_ = lean_ctor_get(v_mctx_4042_, 9);
v_instanceTypedMVars_4060_ = lean_ctor_get(v_mctx_4042_, 10);
v_isSharedCheck_4074_ = !lean_is_exclusive(v_mctx_4042_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_4062_ = v_mctx_4042_;
v_isShared_4063_ = v_isSharedCheck_4074_;
goto v_resetjp_4061_;
}
else
{
lean_inc(v_instanceTypedMVars_4060_);
lean_inc(v_dAssignment_4059_);
lean_inc(v_eAssignment_4058_);
lean_inc(v_lAssignment_4057_);
lean_inc(v_userNames_4056_);
lean_inc(v_decls_4055_);
lean_inc(v_lDecls_4054_);
lean_inc(v_mvarCounter_4053_);
lean_inc(v_lmvarCounter_4052_);
lean_inc(v_levelAssignDepth_4051_);
lean_inc(v_depth_4050_);
lean_dec(v_mctx_4042_);
v___x_4062_ = lean_box(0);
v_isShared_4063_ = v_isSharedCheck_4074_;
goto v_resetjp_4061_;
}
v_resetjp_4061_:
{
lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4067_; 
v___x_4064_ = lean_box(0);
v___x_4065_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3___redArg(v_eAssignment_4058_, v_mvarId_4037_, v_val_4038_);
if (v_isShared_4063_ == 0)
{
lean_ctor_set(v___x_4062_, 8, v___x_4065_);
v___x_4067_ = v___x_4062_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v_depth_4050_);
lean_ctor_set(v_reuseFailAlloc_4073_, 1, v_levelAssignDepth_4051_);
lean_ctor_set(v_reuseFailAlloc_4073_, 2, v_lmvarCounter_4052_);
lean_ctor_set(v_reuseFailAlloc_4073_, 3, v_mvarCounter_4053_);
lean_ctor_set(v_reuseFailAlloc_4073_, 4, v_lDecls_4054_);
lean_ctor_set(v_reuseFailAlloc_4073_, 5, v_decls_4055_);
lean_ctor_set(v_reuseFailAlloc_4073_, 6, v_userNames_4056_);
lean_ctor_set(v_reuseFailAlloc_4073_, 7, v_lAssignment_4057_);
lean_ctor_set(v_reuseFailAlloc_4073_, 8, v___x_4065_);
lean_ctor_set(v_reuseFailAlloc_4073_, 9, v_dAssignment_4059_);
lean_ctor_set(v_reuseFailAlloc_4073_, 10, v_instanceTypedMVars_4060_);
v___x_4067_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
lean_object* v___x_4069_; 
if (v_isShared_4049_ == 0)
{
lean_ctor_set(v___x_4048_, 0, v___x_4067_);
v___x_4069_ = v___x_4048_;
goto v_reusejp_4068_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v___x_4067_);
lean_ctor_set(v_reuseFailAlloc_4072_, 1, v_cache_4043_);
lean_ctor_set(v_reuseFailAlloc_4072_, 2, v_zetaDeltaFVarIds_4044_);
lean_ctor_set(v_reuseFailAlloc_4072_, 3, v_postponed_4045_);
lean_ctor_set(v_reuseFailAlloc_4072_, 4, v_diag_4046_);
v___x_4069_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4068_;
}
v_reusejp_4068_:
{
lean_object* v___x_4070_; lean_object* v___x_4071_; 
v___x_4070_ = lean_st_ref_put(v___y_4039_, v___x_4069_);
v___x_4071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4071_, 0, v___x_4064_);
return v___x_4071_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1___redArg___boxed(lean_object* v_mvarId_4076_, lean_object* v_val_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_){
_start:
{
lean_object* v_res_4080_; 
v_res_4080_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1___redArg(v_mvarId_4076_, v_val_4077_, v___y_4078_);
lean_dec(v___y_4078_);
return v_res_4080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLets___lam__0(lean_object* v_mvar_4083_, uint8_t v_elimTrivial_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_){
_start:
{
lean_object* v_lctx_4090_; lean_object* v___x_4091_; 
v_lctx_4090_ = lean_ctor_get(v___y_4085_, 2);
lean_inc(v_mvar_4083_);
v___x_4091_ = l_Lean_MVarId_getType(v_mvar_4083_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_);
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_a_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; 
v_a_4092_ = lean_ctor_get(v___x_4091_, 0);
lean_inc(v_a_4092_);
lean_dec_ref_known(v___x_4091_, 1);
v___x_4093_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_Elab_Tactic_Do_countUsesLCtx_spec__0_spec__0_spec__2___closed__0));
v___x_4094_ = l_Lean_Elab_Tactic_Do_countUses(v_a_4092_, v___x_4093_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_);
if (lean_obj_tag(v___x_4094_) == 0)
{
lean_object* v_a_4095_; lean_object* v_fst_4096_; lean_object* v_snd_4097_; lean_object* v___x_4098_; 
v_a_4095_ = lean_ctor_get(v___x_4094_, 0);
lean_inc(v_a_4095_);
lean_dec_ref_known(v___x_4094_, 1);
v_fst_4096_ = lean_ctor_get(v_a_4095_, 0);
lean_inc(v_fst_4096_);
v_snd_4097_ = lean_ctor_get(v_a_4095_, 1);
lean_inc(v_snd_4097_);
lean_dec(v_a_4095_);
lean_inc_ref(v_lctx_4090_);
v___x_4098_ = l_Lean_Elab_Tactic_Do_countUsesLCtx(v_lctx_4090_, v_snd_4097_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_);
if (lean_obj_tag(v___x_4098_) == 0)
{
lean_object* v_a_4099_; lean_object* v___x_4100_; lean_object* v_decls_4101_; lean_object* v___x_4102_; 
v_a_4099_ = lean_ctor_get(v___x_4098_, 0);
lean_inc(v_a_4099_);
lean_dec_ref_known(v___x_4098_, 1);
v___x_4100_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_elimLets___lam__0___closed__0));
v_decls_4101_ = lean_ctor_get(v_a_4099_, 1);
lean_inc_ref(v_decls_4101_);
lean_dec(v_a_4099_);
v___x_4102_ = l_Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0(v_elimTrivial_4084_, v_decls_4101_, v___x_4100_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_);
lean_dec_ref(v_decls_4101_);
if (lean_obj_tag(v___x_4102_) == 0)
{
lean_object* v_a_4103_; lean_object* v_fst_4104_; lean_object* v_snd_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; 
v_a_4103_ = lean_ctor_get(v___x_4102_, 0);
lean_inc(v_a_4103_);
lean_dec_ref_known(v___x_4102_, 1);
v_fst_4104_ = lean_ctor_get(v_a_4103_, 0);
lean_inc(v_fst_4104_);
v_snd_4105_ = lean_ctor_get(v_a_4103_, 1);
lean_inc(v_snd_4105_);
lean_dec(v_a_4103_);
v___x_4106_ = l_Lean_Expr_replaceFVars(v_fst_4096_, v_fst_4104_, v_snd_4105_);
lean_dec(v_snd_4105_);
lean_dec(v_fst_4096_);
v___x_4107_ = l_Lean_Elab_Tactic_Do_elimLetsCore(v___x_4106_, v_elimTrivial_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_);
if (lean_obj_tag(v___x_4107_) == 0)
{
lean_object* v_a_4108_; lean_object* v___x_4109_; 
v_a_4108_ = lean_ctor_get(v___x_4107_, 0);
lean_inc(v_a_4108_);
lean_dec_ref_known(v___x_4107_, 1);
lean_inc(v_mvar_4083_);
v___x_4109_ = l_Lean_MVarId_getTag(v_mvar_4083_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_);
if (lean_obj_tag(v___x_4109_) == 0)
{
lean_object* v_a_4110_; lean_object* v___x_4111_; 
v_a_4110_ = lean_ctor_get(v___x_4109_, 0);
lean_inc(v_a_4110_);
lean_dec_ref_known(v___x_4109_, 1);
v___x_4111_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_4108_, v_a_4110_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_);
if (lean_obj_tag(v___x_4111_) == 0)
{
lean_object* v_a_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; size_t v_sz_4115_; size_t v___x_4116_; lean_object* v___x_4117_; 
v_a_4112_ = lean_ctor_get(v___x_4111_, 0);
lean_inc_n(v_a_4112_, 2);
lean_dec_ref_known(v___x_4111_, 1);
v___x_4113_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1___redArg(v_mvar_4083_, v_a_4112_, v___y_4086_);
lean_dec_ref(v___x_4113_);
v___x_4114_ = l_Lean_Expr_mvarId_x21(v_a_4112_);
lean_dec(v_a_4112_);
v_sz_4115_ = lean_array_size(v_fst_4104_);
v___x_4116_ = ((size_t)0ULL);
v___x_4117_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_elimLets_spec__2(v_fst_4104_, v_sz_4115_, v___x_4116_, v___x_4114_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_);
lean_dec_ref(v___y_4085_);
lean_dec(v_fst_4104_);
return v___x_4117_;
}
else
{
lean_object* v_a_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4125_; 
lean_dec(v_fst_4104_);
lean_dec_ref(v___y_4085_);
lean_dec(v_mvar_4083_);
v_a_4118_ = lean_ctor_get(v___x_4111_, 0);
v_isSharedCheck_4125_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4125_ == 0)
{
v___x_4120_ = v___x_4111_;
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_a_4118_);
lean_dec(v___x_4111_);
v___x_4120_ = lean_box(0);
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
v_resetjp_4119_:
{
lean_object* v___x_4123_; 
if (v_isShared_4121_ == 0)
{
v___x_4123_ = v___x_4120_;
goto v_reusejp_4122_;
}
else
{
lean_object* v_reuseFailAlloc_4124_; 
v_reuseFailAlloc_4124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v_a_4118_);
v___x_4123_ = v_reuseFailAlloc_4124_;
goto v_reusejp_4122_;
}
v_reusejp_4122_:
{
return v___x_4123_;
}
}
}
}
else
{
lean_object* v_a_4126_; lean_object* v___x_4128_; uint8_t v_isShared_4129_; uint8_t v_isSharedCheck_4133_; 
lean_dec(v_a_4108_);
lean_dec(v_fst_4104_);
lean_dec_ref(v___y_4085_);
lean_dec(v_mvar_4083_);
v_a_4126_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4133_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4133_ == 0)
{
v___x_4128_ = v___x_4109_;
v_isShared_4129_ = v_isSharedCheck_4133_;
goto v_resetjp_4127_;
}
else
{
lean_inc(v_a_4126_);
lean_dec(v___x_4109_);
v___x_4128_ = lean_box(0);
v_isShared_4129_ = v_isSharedCheck_4133_;
goto v_resetjp_4127_;
}
v_resetjp_4127_:
{
lean_object* v___x_4131_; 
if (v_isShared_4129_ == 0)
{
v___x_4131_ = v___x_4128_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v_a_4126_);
v___x_4131_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
return v___x_4131_;
}
}
}
}
else
{
lean_object* v_a_4134_; lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4141_; 
lean_dec(v_fst_4104_);
lean_dec_ref(v___y_4085_);
lean_dec(v_mvar_4083_);
v_a_4134_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4136_ = v___x_4107_;
v_isShared_4137_ = v_isSharedCheck_4141_;
goto v_resetjp_4135_;
}
else
{
lean_inc(v_a_4134_);
lean_dec(v___x_4107_);
v___x_4136_ = lean_box(0);
v_isShared_4137_ = v_isSharedCheck_4141_;
goto v_resetjp_4135_;
}
v_resetjp_4135_:
{
lean_object* v___x_4139_; 
if (v_isShared_4137_ == 0)
{
v___x_4139_ = v___x_4136_;
goto v_reusejp_4138_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v_a_4134_);
v___x_4139_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4138_;
}
v_reusejp_4138_:
{
return v___x_4139_;
}
}
}
}
else
{
lean_object* v_a_4142_; lean_object* v___x_4144_; uint8_t v_isShared_4145_; uint8_t v_isSharedCheck_4149_; 
lean_dec(v_fst_4096_);
lean_dec_ref(v___y_4085_);
lean_dec(v_mvar_4083_);
v_a_4142_ = lean_ctor_get(v___x_4102_, 0);
v_isSharedCheck_4149_ = !lean_is_exclusive(v___x_4102_);
if (v_isSharedCheck_4149_ == 0)
{
v___x_4144_ = v___x_4102_;
v_isShared_4145_ = v_isSharedCheck_4149_;
goto v_resetjp_4143_;
}
else
{
lean_inc(v_a_4142_);
lean_dec(v___x_4102_);
v___x_4144_ = lean_box(0);
v_isShared_4145_ = v_isSharedCheck_4149_;
goto v_resetjp_4143_;
}
v_resetjp_4143_:
{
lean_object* v___x_4147_; 
if (v_isShared_4145_ == 0)
{
v___x_4147_ = v___x_4144_;
goto v_reusejp_4146_;
}
else
{
lean_object* v_reuseFailAlloc_4148_; 
v_reuseFailAlloc_4148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4148_, 0, v_a_4142_);
v___x_4147_ = v_reuseFailAlloc_4148_;
goto v_reusejp_4146_;
}
v_reusejp_4146_:
{
return v___x_4147_;
}
}
}
}
else
{
lean_object* v_a_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4157_; 
lean_dec(v_fst_4096_);
lean_dec_ref(v___y_4085_);
lean_dec(v_mvar_4083_);
v_a_4150_ = lean_ctor_get(v___x_4098_, 0);
v_isSharedCheck_4157_ = !lean_is_exclusive(v___x_4098_);
if (v_isSharedCheck_4157_ == 0)
{
v___x_4152_ = v___x_4098_;
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_a_4150_);
lean_dec(v___x_4098_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
lean_object* v___x_4155_; 
if (v_isShared_4153_ == 0)
{
v___x_4155_ = v___x_4152_;
goto v_reusejp_4154_;
}
else
{
lean_object* v_reuseFailAlloc_4156_; 
v_reuseFailAlloc_4156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4156_, 0, v_a_4150_);
v___x_4155_ = v_reuseFailAlloc_4156_;
goto v_reusejp_4154_;
}
v_reusejp_4154_:
{
return v___x_4155_;
}
}
}
}
else
{
lean_object* v_a_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4165_; 
lean_dec_ref(v___y_4085_);
lean_dec(v_mvar_4083_);
v_a_4158_ = lean_ctor_get(v___x_4094_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4160_ = v___x_4094_;
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_a_4158_);
lean_dec(v___x_4094_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___x_4163_; 
if (v_isShared_4161_ == 0)
{
v___x_4163_ = v___x_4160_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4158_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
}
}
else
{
lean_object* v_a_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4173_; 
lean_dec_ref(v___y_4085_);
lean_dec(v_mvar_4083_);
v_a_4166_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4173_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4173_ == 0)
{
v___x_4168_ = v___x_4091_;
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
else
{
lean_inc(v_a_4166_);
lean_dec(v___x_4091_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
lean_object* v___x_4171_; 
if (v_isShared_4169_ == 0)
{
v___x_4171_ = v___x_4168_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v_a_4166_);
v___x_4171_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
return v___x_4171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLets___lam__0___boxed(lean_object* v_mvar_4174_, lean_object* v_elimTrivial_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_){
_start:
{
uint8_t v_elimTrivial_boxed_4181_; lean_object* v_res_4182_; 
v_elimTrivial_boxed_4181_ = lean_unbox(v_elimTrivial_4175_);
v_res_4182_ = l_Lean_Elab_Tactic_Do_elimLets___lam__0(v_mvar_4174_, v_elimTrivial_boxed_4181_, v___y_4176_, v___y_4177_, v___y_4178_, v___y_4179_);
lean_dec(v___y_4179_);
lean_dec_ref(v___y_4178_);
lean_dec(v___y_4177_);
return v_res_4182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLets(lean_object* v_mvar_4183_, uint8_t v_elimTrivial_4184_, lean_object* v_a_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_, lean_object* v_a_4188_){
_start:
{
lean_object* v___x_4190_; lean_object* v___f_4191_; lean_object* v___x_4192_; 
v___x_4190_ = lean_box(v_elimTrivial_4184_);
lean_inc(v_mvar_4183_);
v___f_4191_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_elimLets___lam__0___boxed), 7, 2);
lean_closure_set(v___f_4191_, 0, v_mvar_4183_);
lean_closure_set(v___f_4191_, 1, v___x_4190_);
v___x_4192_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_elimLets_spec__3___redArg(v_mvar_4183_, v___f_4191_, v_a_4185_, v_a_4186_, v_a_4187_, v_a_4188_);
return v___x_4192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_elimLets___boxed(lean_object* v_mvar_4193_, lean_object* v_elimTrivial_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_){
_start:
{
uint8_t v_elimTrivial_boxed_4200_; lean_object* v_res_4201_; 
v_elimTrivial_boxed_4200_ = lean_unbox(v_elimTrivial_4194_);
v_res_4201_ = l_Lean_Elab_Tactic_Do_elimLets(v_mvar_4193_, v_elimTrivial_boxed_4200_, v_a_4195_, v_a_4196_, v_a_4197_, v_a_4198_);
lean_dec(v_a_4198_);
lean_dec_ref(v_a_4197_);
lean_dec(v_a_4196_);
lean_dec_ref(v_a_4195_);
return v_res_4201_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1(lean_object* v_mvarId_4202_, lean_object* v_val_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_){
_start:
{
lean_object* v___x_4209_; 
v___x_4209_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1___redArg(v_mvarId_4202_, v_val_4203_, v___y_4205_);
return v___x_4209_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1___boxed(lean_object* v_mvarId_4210_, lean_object* v_val_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_){
_start:
{
lean_object* v_res_4217_; 
v_res_4217_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1(v_mvarId_4210_, v_val_4211_, v___y_4212_, v___y_4213_, v___y_4214_, v___y_4215_);
lean_dec(v___y_4215_);
lean_dec_ref(v___y_4214_);
lean_dec(v___y_4213_);
lean_dec_ref(v___y_4212_);
return v_res_4217_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3(lean_object* v_00_u03b2_4218_, lean_object* v_x_4219_, lean_object* v_x_4220_, lean_object* v_x_4221_){
_start:
{
lean_object* v___x_4222_; 
v___x_4222_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3___redArg(v_x_4219_, v_x_4220_, v_x_4221_);
return v___x_4222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5(uint8_t v_elimTrivial_4223_, lean_object* v_as_4224_, size_t v_sz_4225_, size_t v_i_4226_, lean_object* v_b_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_){
_start:
{
lean_object* v___x_4233_; 
v___x_4233_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5___redArg(v_elimTrivial_4223_, v_as_4224_, v_sz_4225_, v_i_4226_, v_b_4227_);
return v___x_4233_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5___boxed(lean_object* v_elimTrivial_4234_, lean_object* v_as_4235_, lean_object* v_sz_4236_, lean_object* v_i_4237_, lean_object* v_b_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_){
_start:
{
uint8_t v_elimTrivial_boxed_4244_; size_t v_sz_boxed_4245_; size_t v_i_boxed_4246_; lean_object* v_res_4247_; 
v_elimTrivial_boxed_4244_ = lean_unbox(v_elimTrivial_4234_);
v_sz_boxed_4245_ = lean_unbox_usize(v_sz_4236_);
lean_dec(v_sz_4236_);
v_i_boxed_4246_ = lean_unbox_usize(v_i_4237_);
lean_dec(v_i_4237_);
v_res_4247_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__1_spec__5(v_elimTrivial_boxed_4244_, v_as_4235_, v_sz_boxed_4245_, v_i_boxed_4246_, v_b_4238_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_);
lean_dec(v___y_4242_);
lean_dec_ref(v___y_4241_);
lean_dec(v___y_4240_);
lean_dec_ref(v___y_4239_);
lean_dec_ref(v_as_4235_);
return v_res_4247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_4248_, lean_object* v_x_4249_, size_t v_x_4250_, size_t v_x_4251_, lean_object* v_x_4252_, lean_object* v_x_4253_){
_start:
{
lean_object* v___x_4254_; 
v___x_4254_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___redArg(v_x_4249_, v_x_4250_, v_x_4251_, v_x_4252_, v_x_4253_);
return v___x_4254_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8___boxed(lean_object* v_00_u03b2_4255_, lean_object* v_x_4256_, lean_object* v_x_4257_, lean_object* v_x_4258_, lean_object* v_x_4259_, lean_object* v_x_4260_){
_start:
{
size_t v_x_8262__boxed_4261_; size_t v_x_8263__boxed_4262_; lean_object* v_res_4263_; 
v_x_8262__boxed_4261_ = lean_unbox_usize(v_x_4257_);
lean_dec(v_x_4257_);
v_x_8263__boxed_4262_ = lean_unbox_usize(v_x_4258_);
lean_dec(v_x_4258_);
v_res_4263_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8(v_00_u03b2_4255_, v_x_4256_, v_x_8262__boxed_4261_, v_x_8263__boxed_4262_, v_x_4259_, v_x_4260_);
return v_res_4263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6(uint8_t v_elimTrivial_4264_, lean_object* v_as_4265_, size_t v_sz_4266_, size_t v_i_4267_, lean_object* v_b_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_){
_start:
{
lean_object* v___x_4274_; 
v___x_4274_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6___redArg(v_elimTrivial_4264_, v_as_4265_, v_sz_4266_, v_i_4267_, v_b_4268_);
return v___x_4274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6___boxed(lean_object* v_elimTrivial_4275_, lean_object* v_as_4276_, lean_object* v_sz_4277_, lean_object* v_i_4278_, lean_object* v_b_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_){
_start:
{
uint8_t v_elimTrivial_boxed_4285_; size_t v_sz_boxed_4286_; size_t v_i_boxed_4287_; lean_object* v_res_4288_; 
v_elimTrivial_boxed_4285_ = lean_unbox(v_elimTrivial_4275_);
v_sz_boxed_4286_ = lean_unbox_usize(v_sz_4277_);
lean_dec(v_sz_4277_);
v_i_boxed_4287_ = lean_unbox_usize(v_i_4278_);
lean_dec(v_i_4278_);
v_res_4288_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Elab_Tactic_Do_elimLets_spec__0_spec__0_spec__3_spec__6(v_elimTrivial_boxed_4285_, v_as_4276_, v_sz_boxed_4286_, v_i_boxed_4287_, v_b_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_);
lean_dec(v___y_4283_);
lean_dec_ref(v___y_4282_);
lean_dec(v___y_4281_);
lean_dec_ref(v___y_4280_);
lean_dec_ref(v_as_4276_);
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11(lean_object* v_00_u03b2_4289_, lean_object* v_n_4290_, lean_object* v_k_4291_, lean_object* v_v_4292_){
_start:
{
lean_object* v___x_4293_; 
v___x_4293_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11___redArg(v_n_4290_, v_k_4291_, v_v_4292_);
return v___x_4293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12(lean_object* v_00_u03b2_4294_, size_t v_depth_4295_, lean_object* v_keys_4296_, lean_object* v_vals_4297_, lean_object* v_heq_4298_, lean_object* v_i_4299_, lean_object* v_entries_4300_){
_start:
{
lean_object* v___x_4301_; 
v___x_4301_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12___redArg(v_depth_4295_, v_keys_4296_, v_vals_4297_, v_i_4299_, v_entries_4300_);
return v___x_4301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12___boxed(lean_object* v_00_u03b2_4302_, lean_object* v_depth_4303_, lean_object* v_keys_4304_, lean_object* v_vals_4305_, lean_object* v_heq_4306_, lean_object* v_i_4307_, lean_object* v_entries_4308_){
_start:
{
size_t v_depth_boxed_4309_; lean_object* v_res_4310_; 
v_depth_boxed_4309_ = lean_unbox_usize(v_depth_4303_);
lean_dec(v_depth_4303_);
v_res_4310_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__12(v_00_u03b2_4302_, v_depth_boxed_4309_, v_keys_4304_, v_vals_4305_, v_heq_4306_, v_i_4307_, v_entries_4308_);
lean_dec_ref(v_vals_4305_);
lean_dec_ref(v_keys_4304_);
return v_res_4310_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11_spec__12(lean_object* v_00_u03b2_4311_, lean_object* v_x_4312_, lean_object* v_x_4313_, lean_object* v_x_4314_, lean_object* v_x_4315_){
_start:
{
lean_object* v___x_4316_; 
v___x_4316_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_elimLets_spec__1_spec__3_spec__8_spec__11_spec__12___redArg(v_x_4312_, v_x_4313_, v_x_4314_, v_x_4315_);
return v___x_4316_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_LetElim(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Do_instInhabitedUses_default = _init_l_Lean_Elab_Tactic_Do_instInhabitedUses_default();
l_Lean_Elab_Tactic_Do_instInhabitedUses = _init_l_Lean_Elab_Tactic_Do_instInhabitedUses();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_LetElim(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1 = _init_l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_BVarUses_single___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_LetElim(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_LetElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_LetElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_LetElim(builtin);
}
#ifdef __cplusplus
}
#endif

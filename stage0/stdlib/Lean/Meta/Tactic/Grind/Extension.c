// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Extension
// Imports: public import Lean.Meta.Tactic.Grind.Theorems
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Origin_key(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_instReprExpr_repr(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_instInhabitedTheorems_default___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_mkEmpty___redArg();
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
extern lean_object* l_Lean_Meta_Grind_instInhabitedOrigin_default;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedCasesTypes_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedCasesTypes;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_insert(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_insert___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedSymbolPriorities;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SymbolPriorities_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqLhs_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqLhs_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqLhs_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqLhs_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqRhs_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqRhs_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqRhs_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqRhs_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBoth_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBoth_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBoth_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBoth_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBwd_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBwd_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBwd_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBwd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_fwd_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_fwd_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_fwd_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_fwd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_bwd_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_bwd_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_bwd_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_bwd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_leftRight_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_leftRight_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_leftRight_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_leftRight_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_rightLeft_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_rightLeft_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_rightLeft_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_rightLeft_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_default_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_default_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_default_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_user_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_user_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_user_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_user_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_instInhabitedEMatchTheoremKind_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Grind_instInhabitedEMatchTheoremKind_default___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instInhabitedEMatchTheoremKind_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instInhabitedEMatchTheoremKind_default = (const lean_object*)&l_Lean_Meta_Grind_instInhabitedEMatchTheoremKind_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instInhabitedEMatchTheoremKind = (const lean_object*)&l_Lean_Meta_Grind_instInhabitedEMatchTheoremKind_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instBEqEMatchTheoremKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instBEqEMatchTheoremKind___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instBEqEMatchTheoremKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instBEqEMatchTheoremKind = (const lean_object*)&l_Lean_Meta_Grind_instBEqEMatchTheoremKind___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Meta.Grind.EMatchTheoremKind.rightLeft"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Meta.Grind.EMatchTheoremKind.leftRight"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Meta.Grind.EMatchTheoremKind.eqBwd"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Meta.Grind.EMatchTheoremKind.fwd"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__6_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Meta.Grind.EMatchTheoremKind.user"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__8_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__9_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Meta.Grind.EMatchTheoremKind.eqLhs"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__10_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__11_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13;
static lean_once_cell_t l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Meta.Grind.EMatchTheoremKind.eqRhs"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__15_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__16_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__17_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Meta.Grind.EMatchTheoremKind.eqBoth"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__18_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__19_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__19_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__20_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Meta.Grind.EMatchTheoremKind.bwd"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__21_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__21_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__22_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__22_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__23_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lean.Meta.Grind.EMatchTheoremKind.default"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__24_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__24_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__25 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__25_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__25_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__26_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instReprEMatchTheoremKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremKind___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__9;
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instHashableEMatchTheoremKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instHashableEMatchTheoremKind___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instHashableEMatchTheoremKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instHashableEMatchTheoremKind = (const lean_object*)&l_Lean_Meta_Grind_instHashableEMatchTheoremKind___closed__0_value;
static const lean_array_object l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedCnstrRHS_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedCnstrRHS;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_instBEqCnstrRHS_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instBEqCnstrRHS_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instBEqCnstrRHS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instBEqCnstrRHS_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instBEqCnstrRHS___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instBEqCnstrRHS___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instBEqCnstrRHS = (const lean_object*)&l_Lean_Meta_Grind_instBEqCnstrRHS___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__6;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__8_value;
static const lean_string_object l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__9 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__10 = (const lean_object*)&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "levelNames"};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__7;
static const lean_string_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "numMVars"};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__10;
static const lean_string_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "expr"};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__13;
static const lean_string_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__15;
static lean_once_cell_t l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__16;
static const lean_ctor_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instReprCnstrRHS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instReprCnstrRHS_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instReprCnstrRHS = (const lean_object*)&l_Lean_Meta_Grind_instReprCnstrRHS___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_notDefEq_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_notDefEq_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_defEq_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_defEq_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_sizeLt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_sizeLt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_depthLt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_depthLt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_genLt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_genLt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_isGround_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_isGround_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_isValue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_isValue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_maxInsts_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_maxInsts_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_guard_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_guard_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_check_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_check_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_notValue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_notValue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lean.Meta.Grind.EMatchTheoremConstraint.notDefEq"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lean.Meta.Grind.EMatchTheoremConstraint.defEq"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__3_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Lean.Meta.Grind.EMatchTheoremConstraint.sizeLt"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__6_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lean.Meta.Grind.EMatchTheoremConstraint.depthLt"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__9_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__11_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lean.Meta.Grind.EMatchTheoremConstraint.genLt"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__12_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__13_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__13_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__14_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lean.Meta.Grind.EMatchTheoremConstraint.isGround"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__15_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__16_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__17_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lean.Meta.Grind.EMatchTheoremConstraint.isValue"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__18_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__19_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__19_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__20_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lean.Meta.Grind.EMatchTheoremConstraint.maxInsts"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__21_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__21_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__22_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__22_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__23_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lean.Meta.Grind.EMatchTheoremConstraint.guard"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__24_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__24_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__25 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__25_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__25_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__26_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lean.Meta.Grind.EMatchTheoremConstraint.check"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__27 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__27_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__27_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__28 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__28_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__28_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__29_value;
static const lean_string_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lean.Meta.Grind.EMatchTheoremConstraint.notValue"};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__30_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__30_value)}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__31 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__31_value;
static const lean_ctor_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__31_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__32 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__32_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instReprEMatchTheoremConstraint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint = (const lean_object*)&l_Lean_Meta_Grind_instReprEMatchTheoremConstraint___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_instBEqEMatchTheoremConstraint_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instBEqEMatchTheoremConstraint_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instBEqEMatchTheoremConstraint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instBEqEMatchTheoremConstraint_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instBEqEMatchTheoremConstraint___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instBEqEMatchTheoremConstraint___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instBEqEMatchTheoremConstraint = (const lean_object*)&l_Lean_Meta_Grind_instBEqEMatchTheoremConstraint___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedEMatchTheorem;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__4___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__1_value;
static const lean_closure_object l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__2_value;
static const lean_closure_object l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__3_value;
static const lean_closure_object l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__4___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__0_value),((lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__1_value),((lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__2_value),((lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__3_value),((lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__4_value)}};
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedInjectiveTheorem;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__4___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__1_value;
static const lean_closure_object l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__2_value;
static const lean_closure_object l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__3_value;
static const lean_closure_object l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__4___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__0_value),((lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__1_value),((lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__2_value),((lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__3_value),((lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__4_value)}};
static const lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__5_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem = (const lean_object*)&l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ext_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ext_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_funCC_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_funCC_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_cases_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_cases_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ematch_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ematch_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_inj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_inj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedEntry_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedEntry_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedEntry_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedEntry_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedEntry_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedEntry;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedExtensionState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instInhabitedExtensionState;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__5 = (const lean_object*)&l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__6 = (const lean_object*)&l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__6_value;
static lean_once_cell_t l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__7;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.Tactic.Grind.Theorems"};
static const lean_object* l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.Grind.Theorems.insert"};
static const lean_object* l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__1_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionState_addEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__4_value;
static const lean_array_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__9_value;
static const lean_string_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__11_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__11_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__12;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__13;
static const lean_string_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__14_value;
static const lean_string_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__16_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__16_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__16_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__16_value;
static const lean_string_object l_Lean_Meta_Grind_mkExtension___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___auto__1___closed__17_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__18;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__19;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__20;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__21;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__22;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__23;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__24;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__25;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__26;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__27;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___auto__1___closed__28;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension___auto__1;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_mkExtension_spec__0(lean_object*);
static const lean_string_object l_Lean_Meta_Grind_mkExtension___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.Tactic.Grind.Extension"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_mkExtension___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.Grind.mkExtension"};
static const lean_object* l_Lean_Meta_Grind_mkExtension___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkExtension___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkExtension___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Grind_mkExtension___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkExtension___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_mkExtension___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___closed__0_value;
static const lean_closure_object l_Lean_Meta_Grind_mkExtension___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_mkExtension___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_mkExtension___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___closed__1_value;
static const lean_closure_object l_Lean_Meta_Grind_mkExtension___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_ExtensionState_addEntry, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Grind_mkExtension___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_mkExtension___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__1;
static const lean_string_object l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "` is not marked with the `[grind]` attribute"};
static const lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0, &l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesTypes_default(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__1, &l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__1_once, _init_l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__1);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCasesTypes(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = l_Lean_Meta_Grind_instInhabitedCasesTypes_default;
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_6_, lean_object* v_x_7_, lean_object* v_x_8_, lean_object* v_x_9_){
_start:
{
lean_object* v_ks_10_; lean_object* v_vs_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_35_; 
v_ks_10_ = lean_ctor_get(v_x_6_, 0);
v_vs_11_ = lean_ctor_get(v_x_6_, 1);
v_isSharedCheck_35_ = !lean_is_exclusive(v_x_6_);
if (v_isSharedCheck_35_ == 0)
{
v___x_13_ = v_x_6_;
v_isShared_14_ = v_isSharedCheck_35_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_vs_11_);
lean_inc(v_ks_10_);
lean_dec(v_x_6_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_35_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; uint8_t v___x_16_; 
v___x_15_ = lean_array_get_size(v_ks_10_);
v___x_16_ = lean_nat_dec_lt(v_x_7_, v___x_15_);
if (v___x_16_ == 0)
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_20_; 
lean_dec(v_x_7_);
v___x_17_ = lean_array_push(v_ks_10_, v_x_8_);
v___x_18_ = lean_array_push(v_vs_11_, v_x_9_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 1, v___x_18_);
lean_ctor_set(v___x_13_, 0, v___x_17_);
v___x_20_ = v___x_13_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v___x_17_);
lean_ctor_set(v_reuseFailAlloc_21_, 1, v___x_18_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
else
{
lean_object* v_k_x27_22_; uint8_t v___x_23_; 
v_k_x27_22_ = lean_array_fget_borrowed(v_ks_10_, v_x_7_);
v___x_23_ = lean_name_eq(v_x_8_, v_k_x27_22_);
if (v___x_23_ == 0)
{
lean_object* v___x_25_; 
if (v_isShared_14_ == 0)
{
v___x_25_ = v___x_13_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_ks_10_);
lean_ctor_set(v_reuseFailAlloc_29_, 1, v_vs_11_);
v___x_25_ = v_reuseFailAlloc_29_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_unsigned_to_nat(1u);
v___x_27_ = lean_nat_add(v_x_7_, v___x_26_);
lean_dec(v_x_7_);
v_x_6_ = v___x_25_;
v_x_7_ = v___x_27_;
goto _start;
}
}
else
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_33_; 
v___x_30_ = lean_array_fset(v_ks_10_, v_x_7_, v_x_8_);
v___x_31_ = lean_array_fset(v_vs_11_, v_x_7_, v_x_9_);
lean_dec(v_x_7_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 1, v___x_31_);
lean_ctor_set(v___x_13_, 0, v___x_30_);
v___x_33_ = v___x_13_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v___x_30_);
lean_ctor_set(v_reuseFailAlloc_34_, 1, v___x_31_);
v___x_33_ = v_reuseFailAlloc_34_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
return v___x_33_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_n_36_, lean_object* v_k_37_, lean_object* v_v_38_){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(0u);
v___x_40_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_n_36_, v___x_39_, v_k_37_, v_v_38_);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_box(0);
v___x_42_ = l_unsafeCast___redArg(v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg(lean_object* v_x_44_, size_t v_x_45_, size_t v_x_46_, lean_object* v_x_47_, lean_object* v_x_48_){
_start:
{
if (lean_obj_tag(v_x_44_) == 0)
{
lean_object* v_es_49_; size_t v___x_50_; size_t v___x_51_; lean_object* v_j_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v_es_49_ = lean_ctor_get(v_x_44_, 0);
v___x_50_ = ((size_t)31ULL);
v___x_51_ = lean_usize_land(v_x_45_, v___x_50_);
v_j_52_ = lean_usize_to_nat(v___x_51_);
v___x_53_ = lean_array_get_size(v_es_49_);
v___x_54_ = lean_nat_dec_lt(v_j_52_, v___x_53_);
if (v___x_54_ == 0)
{
lean_dec(v_j_52_);
lean_dec(v_x_48_);
lean_dec(v_x_47_);
return v_x_44_;
}
else
{
lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_93_; 
lean_inc_ref(v_es_49_);
v_isSharedCheck_93_ = !lean_is_exclusive(v_x_44_);
if (v_isSharedCheck_93_ == 0)
{
lean_object* v_unused_94_; 
v_unused_94_ = lean_ctor_get(v_x_44_, 0);
lean_dec(v_unused_94_);
v___x_56_ = v_x_44_;
v_isShared_57_ = v_isSharedCheck_93_;
goto v_resetjp_55_;
}
else
{
lean_dec(v_x_44_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_93_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v_v_58_; lean_object* v___x_59_; lean_object* v_xs_x27_60_; lean_object* v___y_62_; 
v_v_58_ = lean_array_fget(v_es_49_, v_j_52_);
v___x_59_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__0);
v_xs_x27_60_ = lean_array_fset(v_es_49_, v_j_52_, v___x_59_);
switch(lean_obj_tag(v_v_58_))
{
case 0:
{
lean_object* v_key_67_; lean_object* v_val_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_78_; 
v_key_67_ = lean_ctor_get(v_v_58_, 0);
v_val_68_ = lean_ctor_get(v_v_58_, 1);
v_isSharedCheck_78_ = !lean_is_exclusive(v_v_58_);
if (v_isSharedCheck_78_ == 0)
{
v___x_70_ = v_v_58_;
v_isShared_71_ = v_isSharedCheck_78_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_val_68_);
lean_inc(v_key_67_);
lean_dec(v_v_58_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_78_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
uint8_t v___x_72_; 
v___x_72_ = lean_name_eq(v_x_47_, v_key_67_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; lean_object* v___x_74_; 
lean_del_object(v___x_70_);
v___x_73_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_67_, v_val_68_, v_x_47_, v_x_48_);
v___x_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
v___y_62_ = v___x_74_;
goto v___jp_61_;
}
else
{
lean_object* v___x_76_; 
lean_dec(v_val_68_);
lean_dec(v_key_67_);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 1, v_x_48_);
lean_ctor_set(v___x_70_, 0, v_x_47_);
v___x_76_ = v___x_70_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_x_47_);
lean_ctor_set(v_reuseFailAlloc_77_, 1, v_x_48_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
v___y_62_ = v___x_76_;
goto v___jp_61_;
}
}
}
}
case 1:
{
lean_object* v_node_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_91_; 
v_node_79_ = lean_ctor_get(v_v_58_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v_v_58_);
if (v_isSharedCheck_91_ == 0)
{
v___x_81_ = v_v_58_;
v_isShared_82_ = v_isSharedCheck_91_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_node_79_);
lean_dec(v_v_58_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_91_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
size_t v___x_83_; size_t v___x_84_; size_t v___x_85_; size_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_83_ = ((size_t)5ULL);
v___x_84_ = lean_usize_shift_right(v_x_45_, v___x_83_);
v___x_85_ = ((size_t)1ULL);
v___x_86_ = lean_usize_add(v_x_46_, v___x_85_);
v___x_87_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg(v_node_79_, v___x_84_, v___x_86_, v_x_47_, v_x_48_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 0, v___x_87_);
v___x_89_ = v___x_81_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_87_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
v___y_62_ = v___x_89_;
goto v___jp_61_;
}
}
}
default: 
{
lean_object* v___x_92_; 
v___x_92_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_92_, 0, v_x_47_);
lean_ctor_set(v___x_92_, 1, v_x_48_);
v___y_62_ = v___x_92_;
goto v___jp_61_;
}
}
v___jp_61_:
{
lean_object* v___x_63_; lean_object* v___x_65_; 
v___x_63_ = lean_array_fset(v_xs_x27_60_, v_j_52_, v___y_62_);
lean_dec(v_j_52_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 0, v___x_63_);
v___x_65_ = v___x_56_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v___x_63_);
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
else
{
lean_object* v_ks_95_; lean_object* v_vs_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_114_; 
v_ks_95_ = lean_ctor_get(v_x_44_, 0);
v_vs_96_ = lean_ctor_get(v_x_44_, 1);
v_isSharedCheck_114_ = !lean_is_exclusive(v_x_44_);
if (v_isSharedCheck_114_ == 0)
{
v___x_98_ = v_x_44_;
v_isShared_99_ = v_isSharedCheck_114_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_vs_96_);
lean_inc(v_ks_95_);
lean_dec(v_x_44_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_114_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_ks_95_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v_vs_96_);
v___x_101_ = v_reuseFailAlloc_113_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
lean_object* v_newNode_102_; size_t v___x_103_; uint8_t v___x_104_; 
v_newNode_102_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1___redArg(v___x_101_, v_x_47_, v_x_48_);
v___x_103_ = ((size_t)7ULL);
v___x_104_ = lean_usize_dec_le(v___x_103_, v_x_46_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_105_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_102_);
v___x_106_ = lean_unsigned_to_nat(4u);
v___x_107_ = lean_nat_dec_lt(v___x_105_, v___x_106_);
lean_dec(v___x_105_);
if (v___x_107_ == 0)
{
lean_object* v_ks_108_; lean_object* v_vs_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v_ks_108_ = lean_ctor_get(v_newNode_102_, 0);
lean_inc_ref(v_ks_108_);
v_vs_109_ = lean_ctor_get(v_newNode_102_, 1);
lean_inc_ref(v_vs_109_);
lean_dec_ref(v_newNode_102_);
v___x_110_ = lean_unsigned_to_nat(0u);
v___x_111_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__1);
v___x_112_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2___redArg(v_x_46_, v_ks_108_, v_vs_109_, v___x_110_, v___x_111_);
lean_dec_ref(v_vs_109_);
lean_dec_ref(v_ks_108_);
return v___x_112_;
}
else
{
return v_newNode_102_;
}
}
else
{
return v_newNode_102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2___redArg(size_t v_depth_115_, lean_object* v_keys_116_, lean_object* v_vals_117_, lean_object* v_i_118_, lean_object* v_entries_119_){
_start:
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = lean_array_get_size(v_keys_116_);
v___x_121_ = lean_nat_dec_lt(v_i_118_, v___x_120_);
if (v___x_121_ == 0)
{
lean_dec(v_i_118_);
return v_entries_119_;
}
else
{
lean_object* v_k_122_; lean_object* v_v_123_; uint64_t v___y_125_; lean_object* v___x_136_; 
v_k_122_ = lean_array_fget_borrowed(v_keys_116_, v_i_118_);
v_v_123_ = lean_array_fget_borrowed(v_vals_117_, v_i_118_);
v___x_136_ = l_unsafeCast___redArg(v_k_122_);
if (lean_obj_tag(v___x_136_) == 0)
{
uint64_t v___x_137_; 
v___x_137_ = 1723ULL;
v___y_125_ = v___x_137_;
goto v___jp_124_;
}
else
{
uint64_t v_hash_138_; 
v_hash_138_ = lean_ctor_get_uint64(v___x_136_, sizeof(void*)*2);
lean_dec(v___x_136_);
v___y_125_ = v_hash_138_;
goto v___jp_124_;
}
v___jp_124_:
{
size_t v_h_126_; size_t v___x_127_; lean_object* v___x_128_; size_t v___x_129_; size_t v___x_130_; size_t v___x_131_; size_t v_h_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v_h_126_ = lean_uint64_to_usize(v___y_125_);
v___x_127_ = ((size_t)5ULL);
v___x_128_ = lean_unsigned_to_nat(1u);
v___x_129_ = ((size_t)1ULL);
v___x_130_ = lean_usize_sub(v_depth_115_, v___x_129_);
v___x_131_ = lean_usize_mul(v___x_127_, v___x_130_);
v_h_132_ = lean_usize_shift_right(v_h_126_, v___x_131_);
v___x_133_ = lean_nat_add(v_i_118_, v___x_128_);
lean_dec(v_i_118_);
lean_inc(v_v_123_);
lean_inc(v_k_122_);
v___x_134_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg(v_entries_119_, v_h_132_, v_depth_115_, v_k_122_, v_v_123_);
v_i_118_ = v___x_133_;
v_entries_119_ = v___x_134_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_139_, lean_object* v_keys_140_, lean_object* v_vals_141_, lean_object* v_i_142_, lean_object* v_entries_143_){
_start:
{
size_t v_depth_boxed_144_; lean_object* v_res_145_; 
v_depth_boxed_144_ = lean_unbox_usize(v_depth_139_);
lean_dec(v_depth_139_);
v_res_145_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2___redArg(v_depth_boxed_144_, v_keys_140_, v_vals_141_, v_i_142_, v_entries_143_);
lean_dec_ref(v_vals_141_);
lean_dec_ref(v_keys_140_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_146_, lean_object* v_x_147_, lean_object* v_x_148_, lean_object* v_x_149_, lean_object* v_x_150_){
_start:
{
size_t v_x_368__boxed_151_; size_t v_x_369__boxed_152_; lean_object* v_res_153_; 
v_x_368__boxed_151_ = lean_unbox_usize(v_x_147_);
lean_dec(v_x_147_);
v_x_369__boxed_152_ = lean_unbox_usize(v_x_148_);
lean_dec(v_x_148_);
v_res_153_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg(v_x_146_, v_x_368__boxed_151_, v_x_369__boxed_152_, v_x_149_, v_x_150_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0___redArg(lean_object* v_x_154_, lean_object* v_x_155_, lean_object* v_x_156_){
_start:
{
uint64_t v___y_158_; lean_object* v___x_162_; 
v___x_162_ = l_unsafeCast___redArg(v_x_155_);
if (lean_obj_tag(v___x_162_) == 0)
{
uint64_t v___x_163_; 
v___x_163_ = 1723ULL;
v___y_158_ = v___x_163_;
goto v___jp_157_;
}
else
{
uint64_t v_hash_164_; 
v_hash_164_ = lean_ctor_get_uint64(v___x_162_, sizeof(void*)*2);
lean_dec(v___x_162_);
v___y_158_ = v_hash_164_;
goto v___jp_157_;
}
v___jp_157_:
{
size_t v___x_159_; size_t v___x_160_; lean_object* v___x_161_; 
v___x_159_ = lean_uint64_to_usize(v___y_158_);
v___x_160_ = ((size_t)1ULL);
v___x_161_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg(v_x_154_, v___x_159_, v___x_160_, v_x_155_, v_x_156_);
return v___x_161_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_insert(lean_object* v_s_165_, lean_object* v_declName_166_, uint8_t v_eager_167_){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = lean_box(v_eager_167_);
v___x_169_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0___redArg(v_s_165_, v_declName_166_, v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_CasesTypes_insert___boxed(lean_object* v_s_170_, lean_object* v_declName_171_, lean_object* v_eager_172_){
_start:
{
uint8_t v_eager_boxed_173_; lean_object* v_res_174_; 
v_eager_boxed_173_ = lean_unbox(v_eager_172_);
v_res_174_ = l_Lean_Meta_Grind_CasesTypes_insert(v_s_170_, v_declName_171_, v_eager_boxed_173_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0(lean_object* v_00_u03b2_175_, lean_object* v_x_176_, lean_object* v_x_177_, lean_object* v_x_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0___redArg(v_x_176_, v_x_177_, v_x_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0(lean_object* v_00_u03b2_180_, lean_object* v_x_181_, size_t v_x_182_, size_t v_x_183_, lean_object* v_x_184_, lean_object* v_x_185_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg(v_x_181_, v_x_182_, v_x_183_, v_x_184_, v_x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_187_, lean_object* v_x_188_, lean_object* v_x_189_, lean_object* v_x_190_, lean_object* v_x_191_, lean_object* v_x_192_){
_start:
{
size_t v_x_557__boxed_193_; size_t v_x_558__boxed_194_; lean_object* v_res_195_; 
v_x_557__boxed_193_ = lean_unbox_usize(v_x_189_);
lean_dec(v_x_189_);
v_x_558__boxed_194_ = lean_unbox_usize(v_x_190_);
lean_dec(v_x_190_);
v_res_195_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0(v_00_u03b2_187_, v_x_188_, v_x_557__boxed_193_, v_x_558__boxed_194_, v_x_191_, v_x_192_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_196_, lean_object* v_n_197_, lean_object* v_k_198_, lean_object* v_v_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1___redArg(v_n_197_, v_k_198_, v_v_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_201_, size_t v_depth_202_, lean_object* v_keys_203_, lean_object* v_vals_204_, lean_object* v_heq_205_, lean_object* v_i_206_, lean_object* v_entries_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2___redArg(v_depth_202_, v_keys_203_, v_vals_204_, v_i_206_, v_entries_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_209_, lean_object* v_depth_210_, lean_object* v_keys_211_, lean_object* v_vals_212_, lean_object* v_heq_213_, lean_object* v_i_214_, lean_object* v_entries_215_){
_start:
{
size_t v_depth_boxed_216_; lean_object* v_res_217_; 
v_depth_boxed_216_ = lean_unbox_usize(v_depth_210_);
lean_dec(v_depth_210_);
v_res_217_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__2(v_00_u03b2_209_, v_depth_boxed_216_, v_keys_211_, v_vals_212_, v_heq_213_, v_i_214_, v_entries_215_);
lean_dec_ref(v_vals_212_);
lean_dec_ref(v_keys_211_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_218_, lean_object* v_x_219_, lean_object* v_x_220_, lean_object* v_x_221_, lean_object* v_x_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_219_, v_x_220_, v_x_221_, v_x_222_);
return v___x_223_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default___closed__0(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0, &l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0);
v___x_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
return v___x_225_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default(void){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default___closed__0, &l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default___closed__0);
return v___x_226_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedSymbolPriorities(void){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default;
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_SymbolPriorities_insert(lean_object* v_s_228_, lean_object* v_declName_229_, lean_object* v_prio_230_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0___redArg(v_s_228_, v_declName_229_, v_prio_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorIdx(lean_object* v_x_232_){
_start:
{
switch(lean_obj_tag(v_x_232_))
{
case 0:
{
lean_object* v___x_233_; 
v___x_233_ = lean_unsigned_to_nat(0u);
return v___x_233_;
}
case 1:
{
lean_object* v___x_234_; 
v___x_234_ = lean_unsigned_to_nat(1u);
return v___x_234_;
}
case 2:
{
lean_object* v___x_235_; 
v___x_235_ = lean_unsigned_to_nat(2u);
return v___x_235_;
}
case 3:
{
lean_object* v___x_236_; 
v___x_236_ = lean_unsigned_to_nat(3u);
return v___x_236_;
}
case 4:
{
lean_object* v___x_237_; 
v___x_237_ = lean_unsigned_to_nat(4u);
return v___x_237_;
}
case 5:
{
lean_object* v___x_238_; 
v___x_238_ = lean_unsigned_to_nat(5u);
return v___x_238_;
}
case 6:
{
lean_object* v___x_239_; 
v___x_239_ = lean_unsigned_to_nat(6u);
return v___x_239_;
}
case 7:
{
lean_object* v___x_240_; 
v___x_240_ = lean_unsigned_to_nat(7u);
return v___x_240_;
}
case 8:
{
lean_object* v___x_241_; 
v___x_241_ = lean_unsigned_to_nat(8u);
return v___x_241_;
}
default: 
{
lean_object* v___x_242_; 
v___x_242_ = lean_unsigned_to_nat(9u);
return v___x_242_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorIdx___boxed(lean_object* v_x_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorIdx(v_x_243_);
lean_dec(v_x_243_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(lean_object* v_t_245_, lean_object* v_k_246_){
_start:
{
switch(lean_obj_tag(v_t_245_))
{
case 0:
{
uint8_t v_gen_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v_gen_247_ = lean_ctor_get_uint8(v_t_245_, 0);
v___x_248_ = lean_box(v_gen_247_);
v___x_249_ = lean_apply_1(v_k_246_, v___x_248_);
return v___x_249_;
}
case 1:
{
uint8_t v_gen_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v_gen_250_ = lean_ctor_get_uint8(v_t_245_, 0);
v___x_251_ = lean_box(v_gen_250_);
v___x_252_ = lean_apply_1(v_k_246_, v___x_251_);
return v___x_252_;
}
case 2:
{
uint8_t v_gen_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v_gen_253_ = lean_ctor_get_uint8(v_t_245_, 0);
v___x_254_ = lean_box(v_gen_253_);
v___x_255_ = lean_apply_1(v_k_246_, v___x_254_);
return v___x_255_;
}
case 5:
{
uint8_t v_gen_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v_gen_256_ = lean_ctor_get_uint8(v_t_245_, 0);
v___x_257_ = lean_box(v_gen_256_);
v___x_258_ = lean_apply_1(v_k_246_, v___x_257_);
return v___x_258_;
}
case 8:
{
uint8_t v_gen_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v_gen_259_ = lean_ctor_get_uint8(v_t_245_, 0);
v___x_260_ = lean_box(v_gen_259_);
v___x_261_ = lean_apply_1(v_k_246_, v___x_260_);
return v___x_261_;
}
default: 
{
return v_k_246_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg___boxed(lean_object* v_t_262_, lean_object* v_k_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_262_, v_k_263_);
lean_dec(v_t_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim(lean_object* v_motive_265_, lean_object* v_ctorIdx_266_, lean_object* v_t_267_, lean_object* v_h_268_, lean_object* v_k_269_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_267_, v_k_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___boxed(lean_object* v_motive_271_, lean_object* v_ctorIdx_272_, lean_object* v_t_273_, lean_object* v_h_274_, lean_object* v_k_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim(v_motive_271_, v_ctorIdx_272_, v_t_273_, v_h_274_, v_k_275_);
lean_dec(v_t_273_);
lean_dec(v_ctorIdx_272_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqLhs_elim___redArg(lean_object* v_t_277_, lean_object* v_eqLhs_278_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_277_, v_eqLhs_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqLhs_elim___redArg___boxed(lean_object* v_t_280_, lean_object* v_eqLhs_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_Meta_Grind_EMatchTheoremKind_eqLhs_elim___redArg(v_t_280_, v_eqLhs_281_);
lean_dec(v_t_280_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqLhs_elim(lean_object* v_motive_283_, lean_object* v_t_284_, lean_object* v_h_285_, lean_object* v_eqLhs_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_284_, v_eqLhs_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqLhs_elim___boxed(lean_object* v_motive_288_, lean_object* v_t_289_, lean_object* v_h_290_, lean_object* v_eqLhs_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_Meta_Grind_EMatchTheoremKind_eqLhs_elim(v_motive_288_, v_t_289_, v_h_290_, v_eqLhs_291_);
lean_dec(v_t_289_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqRhs_elim___redArg(lean_object* v_t_293_, lean_object* v_eqRhs_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_293_, v_eqRhs_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqRhs_elim___redArg___boxed(lean_object* v_t_296_, lean_object* v_eqRhs_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_Meta_Grind_EMatchTheoremKind_eqRhs_elim___redArg(v_t_296_, v_eqRhs_297_);
lean_dec(v_t_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqRhs_elim(lean_object* v_motive_299_, lean_object* v_t_300_, lean_object* v_h_301_, lean_object* v_eqRhs_302_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_300_, v_eqRhs_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqRhs_elim___boxed(lean_object* v_motive_304_, lean_object* v_t_305_, lean_object* v_h_306_, lean_object* v_eqRhs_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lean_Meta_Grind_EMatchTheoremKind_eqRhs_elim(v_motive_304_, v_t_305_, v_h_306_, v_eqRhs_307_);
lean_dec(v_t_305_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBoth_elim___redArg(lean_object* v_t_309_, lean_object* v_eqBoth_310_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_309_, v_eqBoth_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBoth_elim___redArg___boxed(lean_object* v_t_312_, lean_object* v_eqBoth_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Meta_Grind_EMatchTheoremKind_eqBoth_elim___redArg(v_t_312_, v_eqBoth_313_);
lean_dec(v_t_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBoth_elim(lean_object* v_motive_315_, lean_object* v_t_316_, lean_object* v_h_317_, lean_object* v_eqBoth_318_){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_316_, v_eqBoth_318_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBoth_elim___boxed(lean_object* v_motive_320_, lean_object* v_t_321_, lean_object* v_h_322_, lean_object* v_eqBoth_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_Meta_Grind_EMatchTheoremKind_eqBoth_elim(v_motive_320_, v_t_321_, v_h_322_, v_eqBoth_323_);
lean_dec(v_t_321_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBwd_elim___redArg(lean_object* v_t_325_, lean_object* v_eqBwd_326_){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_325_, v_eqBwd_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBwd_elim___redArg___boxed(lean_object* v_t_328_, lean_object* v_eqBwd_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lean_Meta_Grind_EMatchTheoremKind_eqBwd_elim___redArg(v_t_328_, v_eqBwd_329_);
lean_dec(v_t_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBwd_elim(lean_object* v_motive_331_, lean_object* v_t_332_, lean_object* v_h_333_, lean_object* v_eqBwd_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_332_, v_eqBwd_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_eqBwd_elim___boxed(lean_object* v_motive_336_, lean_object* v_t_337_, lean_object* v_h_338_, lean_object* v_eqBwd_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Meta_Grind_EMatchTheoremKind_eqBwd_elim(v_motive_336_, v_t_337_, v_h_338_, v_eqBwd_339_);
lean_dec(v_t_337_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_fwd_elim___redArg(lean_object* v_t_341_, lean_object* v_fwd_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_341_, v_fwd_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_fwd_elim___redArg___boxed(lean_object* v_t_344_, lean_object* v_fwd_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_Meta_Grind_EMatchTheoremKind_fwd_elim___redArg(v_t_344_, v_fwd_345_);
lean_dec(v_t_344_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_fwd_elim(lean_object* v_motive_347_, lean_object* v_t_348_, lean_object* v_h_349_, lean_object* v_fwd_350_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_348_, v_fwd_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_fwd_elim___boxed(lean_object* v_motive_352_, lean_object* v_t_353_, lean_object* v_h_354_, lean_object* v_fwd_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lean_Meta_Grind_EMatchTheoremKind_fwd_elim(v_motive_352_, v_t_353_, v_h_354_, v_fwd_355_);
lean_dec(v_t_353_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_bwd_elim___redArg(lean_object* v_t_357_, lean_object* v_bwd_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_357_, v_bwd_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_bwd_elim___redArg___boxed(lean_object* v_t_360_, lean_object* v_bwd_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_Meta_Grind_EMatchTheoremKind_bwd_elim___redArg(v_t_360_, v_bwd_361_);
lean_dec(v_t_360_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_bwd_elim(lean_object* v_motive_363_, lean_object* v_t_364_, lean_object* v_h_365_, lean_object* v_bwd_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_364_, v_bwd_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_bwd_elim___boxed(lean_object* v_motive_368_, lean_object* v_t_369_, lean_object* v_h_370_, lean_object* v_bwd_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_Meta_Grind_EMatchTheoremKind_bwd_elim(v_motive_368_, v_t_369_, v_h_370_, v_bwd_371_);
lean_dec(v_t_369_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_leftRight_elim___redArg(lean_object* v_t_373_, lean_object* v_leftRight_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_373_, v_leftRight_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_leftRight_elim___redArg___boxed(lean_object* v_t_376_, lean_object* v_leftRight_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lean_Meta_Grind_EMatchTheoremKind_leftRight_elim___redArg(v_t_376_, v_leftRight_377_);
lean_dec(v_t_376_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_leftRight_elim(lean_object* v_motive_379_, lean_object* v_t_380_, lean_object* v_h_381_, lean_object* v_leftRight_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_380_, v_leftRight_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_leftRight_elim___boxed(lean_object* v_motive_384_, lean_object* v_t_385_, lean_object* v_h_386_, lean_object* v_leftRight_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_Meta_Grind_EMatchTheoremKind_leftRight_elim(v_motive_384_, v_t_385_, v_h_386_, v_leftRight_387_);
lean_dec(v_t_385_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_rightLeft_elim___redArg(lean_object* v_t_389_, lean_object* v_rightLeft_390_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_389_, v_rightLeft_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_rightLeft_elim___redArg___boxed(lean_object* v_t_392_, lean_object* v_rightLeft_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lean_Meta_Grind_EMatchTheoremKind_rightLeft_elim___redArg(v_t_392_, v_rightLeft_393_);
lean_dec(v_t_392_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_rightLeft_elim(lean_object* v_motive_395_, lean_object* v_t_396_, lean_object* v_h_397_, lean_object* v_rightLeft_398_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_396_, v_rightLeft_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_rightLeft_elim___boxed(lean_object* v_motive_400_, lean_object* v_t_401_, lean_object* v_h_402_, lean_object* v_rightLeft_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_Meta_Grind_EMatchTheoremKind_rightLeft_elim(v_motive_400_, v_t_401_, v_h_402_, v_rightLeft_403_);
lean_dec(v_t_401_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_default_elim___redArg(lean_object* v_t_405_, lean_object* v_default_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_405_, v_default_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_default_elim___redArg___boxed(lean_object* v_t_408_, lean_object* v_default_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lean_Meta_Grind_EMatchTheoremKind_default_elim___redArg(v_t_408_, v_default_409_);
lean_dec(v_t_408_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_default_elim(lean_object* v_motive_411_, lean_object* v_t_412_, lean_object* v_h_413_, lean_object* v_default_414_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_412_, v_default_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_default_elim___boxed(lean_object* v_motive_416_, lean_object* v_t_417_, lean_object* v_h_418_, lean_object* v_default_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lean_Meta_Grind_EMatchTheoremKind_default_elim(v_motive_416_, v_t_417_, v_h_418_, v_default_419_);
lean_dec(v_t_417_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_user_elim___redArg(lean_object* v_t_421_, lean_object* v_user_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_421_, v_user_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_user_elim___redArg___boxed(lean_object* v_t_424_, lean_object* v_user_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_Meta_Grind_EMatchTheoremKind_user_elim___redArg(v_t_424_, v_user_425_);
lean_dec(v_t_424_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_user_elim(lean_object* v_motive_427_, lean_object* v_t_428_, lean_object* v_h_429_, lean_object* v_user_430_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorElim___redArg(v_t_428_, v_user_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_user_elim___boxed(lean_object* v_motive_432_, lean_object* v_t_433_, lean_object* v_h_434_, lean_object* v_user_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Lean_Meta_Grind_EMatchTheoremKind_user_elim(v_motive_432_, v_t_433_, v_h_434_, v_user_435_);
lean_dec(v_t_433_);
return v_res_436_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq(lean_object* v_x_441_, lean_object* v_x_442_){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; uint8_t v_decide_445_; uint8_t v_gen_447_; uint8_t v_gen_x27_448_; 
v___x_443_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorIdx(v_x_441_);
v___x_444_ = l_Lean_Meta_Grind_EMatchTheoremKind_ctorIdx(v_x_442_);
v_decide_445_ = lean_nat_dec_eq(v___x_443_, v___x_444_);
lean_dec(v___x_444_);
lean_dec(v___x_443_);
if (v_decide_445_ == 0)
{
return v_decide_445_;
}
else
{
switch(lean_obj_tag(v_x_441_))
{
case 0:
{
uint8_t v_gen_449_; uint8_t v_gen_450_; 
v_gen_449_ = lean_ctor_get_uint8(v_x_441_, 0);
v_gen_450_ = lean_ctor_get_uint8(v_x_442_, 0);
v_gen_447_ = v_gen_449_;
v_gen_x27_448_ = v_gen_450_;
goto v___jp_446_;
}
case 1:
{
uint8_t v_gen_451_; uint8_t v_gen_452_; 
v_gen_451_ = lean_ctor_get_uint8(v_x_441_, 0);
v_gen_452_ = lean_ctor_get_uint8(v_x_442_, 0);
v_gen_447_ = v_gen_451_;
v_gen_x27_448_ = v_gen_452_;
goto v___jp_446_;
}
case 2:
{
uint8_t v_gen_453_; uint8_t v_gen_454_; 
v_gen_453_ = lean_ctor_get_uint8(v_x_441_, 0);
v_gen_454_ = lean_ctor_get_uint8(v_x_442_, 0);
v_gen_447_ = v_gen_453_;
v_gen_x27_448_ = v_gen_454_;
goto v___jp_446_;
}
case 5:
{
uint8_t v_gen_455_; uint8_t v_gen_456_; 
v_gen_455_ = lean_ctor_get_uint8(v_x_441_, 0);
v_gen_456_ = lean_ctor_get_uint8(v_x_442_, 0);
v_gen_447_ = v_gen_455_;
v_gen_x27_448_ = v_gen_456_;
goto v___jp_446_;
}
case 8:
{
uint8_t v_gen_457_; uint8_t v_gen_458_; 
v_gen_457_ = lean_ctor_get_uint8(v_x_441_, 0);
v_gen_458_ = lean_ctor_get_uint8(v_x_442_, 0);
v_gen_447_ = v_gen_457_;
v_gen_x27_448_ = v_gen_458_;
goto v___jp_446_;
}
default: 
{
return v_decide_445_;
}
}
}
v___jp_446_:
{
if (v_gen_x27_448_ == 0)
{
if (v_gen_447_ == 0)
{
return v_decide_445_;
}
else
{
return v_gen_x27_448_;
}
}
else
{
return v_gen_447_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq___boxed(lean_object* v_x_459_, lean_object* v_x_460_){
_start:
{
uint8_t v_res_461_; lean_object* v_r_462_; 
v_res_461_ = l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq(v_x_459_, v_x_460_);
lean_dec(v_x_460_);
lean_dec(v_x_459_);
v_r_462_ = lean_box(v_res_461_);
return v_r_462_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_unsigned_to_nat(2u);
v___x_487_ = lean_nat_to_int(v___x_486_);
return v___x_487_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = lean_unsigned_to_nat(1u);
v___x_489_ = lean_nat_to_int(v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr(lean_object* v_x_514_, lean_object* v_prec_515_){
_start:
{
lean_object* v___y_517_; lean_object* v___y_524_; lean_object* v___y_531_; lean_object* v___y_538_; lean_object* v___y_545_; 
switch(lean_obj_tag(v_x_514_))
{
case 0:
{
uint8_t v_gen_551_; lean_object* v___y_553_; lean_object* v___x_561_; uint8_t v___x_562_; 
v_gen_551_ = lean_ctor_get_uint8(v_x_514_, 0);
v___x_561_ = lean_unsigned_to_nat(1024u);
v___x_562_ = lean_nat_dec_le(v___x_561_, v_prec_515_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; 
v___x_563_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_553_ = v___x_563_;
goto v___jp_552_;
}
else
{
lean_object* v___x_564_; 
v___x_564_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_553_ = v___x_564_;
goto v___jp_552_;
}
v___jp_552_:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; uint8_t v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_554_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__12));
v___x_555_ = l_Bool_repr___redArg(v_gen_551_);
v___x_556_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_554_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
lean_inc(v___y_553_);
v___x_557_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_557_, 0, v___y_553_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
v___x_558_ = 0;
v___x_559_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_559_, 0, v___x_557_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*1, v___x_558_);
v___x_560_ = l_Repr_addAppParen(v___x_559_, v_prec_515_);
return v___x_560_;
}
}
case 1:
{
uint8_t v_gen_565_; lean_object* v___y_567_; lean_object* v___x_575_; uint8_t v___x_576_; 
v_gen_565_ = lean_ctor_get_uint8(v_x_514_, 0);
v___x_575_ = lean_unsigned_to_nat(1024u);
v___x_576_ = lean_nat_dec_le(v___x_575_, v_prec_515_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; 
v___x_577_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_567_ = v___x_577_;
goto v___jp_566_;
}
else
{
lean_object* v___x_578_; 
v___x_578_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_567_ = v___x_578_;
goto v___jp_566_;
}
v___jp_566_:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; uint8_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_568_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__17));
v___x_569_ = l_Bool_repr___redArg(v_gen_565_);
v___x_570_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_568_);
lean_ctor_set(v___x_570_, 1, v___x_569_);
lean_inc(v___y_567_);
v___x_571_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_571_, 0, v___y_567_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v___x_572_ = 0;
v___x_573_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_573_, 0, v___x_571_);
lean_ctor_set_uint8(v___x_573_, sizeof(void*)*1, v___x_572_);
v___x_574_ = l_Repr_addAppParen(v___x_573_, v_prec_515_);
return v___x_574_;
}
}
case 2:
{
uint8_t v_gen_579_; lean_object* v___y_581_; lean_object* v___x_589_; uint8_t v___x_590_; 
v_gen_579_ = lean_ctor_get_uint8(v_x_514_, 0);
v___x_589_ = lean_unsigned_to_nat(1024u);
v___x_590_ = lean_nat_dec_le(v___x_589_, v_prec_515_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; 
v___x_591_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_581_ = v___x_591_;
goto v___jp_580_;
}
else
{
lean_object* v___x_592_; 
v___x_592_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_581_ = v___x_592_;
goto v___jp_580_;
}
v___jp_580_:
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; uint8_t v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_582_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__20));
v___x_583_ = l_Bool_repr___redArg(v_gen_579_);
v___x_584_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_582_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
lean_inc(v___y_581_);
v___x_585_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_585_, 0, v___y_581_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = 0;
v___x_587_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_587_, 0, v___x_585_);
lean_ctor_set_uint8(v___x_587_, sizeof(void*)*1, v___x_586_);
v___x_588_ = l_Repr_addAppParen(v___x_587_, v_prec_515_);
return v___x_588_;
}
}
case 3:
{
lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_593_ = lean_unsigned_to_nat(1024u);
v___x_594_ = lean_nat_dec_le(v___x_593_, v_prec_515_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; 
v___x_595_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_531_ = v___x_595_;
goto v___jp_530_;
}
else
{
lean_object* v___x_596_; 
v___x_596_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_531_ = v___x_596_;
goto v___jp_530_;
}
}
case 4:
{
lean_object* v___x_597_; uint8_t v___x_598_; 
v___x_597_ = lean_unsigned_to_nat(1024u);
v___x_598_ = lean_nat_dec_le(v___x_597_, v_prec_515_);
if (v___x_598_ == 0)
{
lean_object* v___x_599_; 
v___x_599_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_538_ = v___x_599_;
goto v___jp_537_;
}
else
{
lean_object* v___x_600_; 
v___x_600_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_538_ = v___x_600_;
goto v___jp_537_;
}
}
case 5:
{
uint8_t v_gen_601_; lean_object* v___y_603_; lean_object* v___x_611_; uint8_t v___x_612_; 
v_gen_601_ = lean_ctor_get_uint8(v_x_514_, 0);
v___x_611_ = lean_unsigned_to_nat(1024u);
v___x_612_ = lean_nat_dec_le(v___x_611_, v_prec_515_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; 
v___x_613_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_603_ = v___x_613_;
goto v___jp_602_;
}
else
{
lean_object* v___x_614_; 
v___x_614_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_603_ = v___x_614_;
goto v___jp_602_;
}
v___jp_602_:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; uint8_t v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_604_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__23));
v___x_605_ = l_Bool_repr___redArg(v_gen_601_);
v___x_606_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_604_);
lean_ctor_set(v___x_606_, 1, v___x_605_);
lean_inc(v___y_603_);
v___x_607_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_607_, 0, v___y_603_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = 0;
v___x_609_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_609_, 0, v___x_607_);
lean_ctor_set_uint8(v___x_609_, sizeof(void*)*1, v___x_608_);
v___x_610_ = l_Repr_addAppParen(v___x_609_, v_prec_515_);
return v___x_610_;
}
}
case 6:
{
lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_615_ = lean_unsigned_to_nat(1024u);
v___x_616_ = lean_nat_dec_le(v___x_615_, v_prec_515_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; 
v___x_617_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_524_ = v___x_617_;
goto v___jp_523_;
}
else
{
lean_object* v___x_618_; 
v___x_618_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_524_ = v___x_618_;
goto v___jp_523_;
}
}
case 7:
{
lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_619_ = lean_unsigned_to_nat(1024u);
v___x_620_ = lean_nat_dec_le(v___x_619_, v_prec_515_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; 
v___x_621_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_517_ = v___x_621_;
goto v___jp_516_;
}
else
{
lean_object* v___x_622_; 
v___x_622_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_517_ = v___x_622_;
goto v___jp_516_;
}
}
case 8:
{
uint8_t v_gen_623_; lean_object* v___y_625_; lean_object* v___x_633_; uint8_t v___x_634_; 
v_gen_623_ = lean_ctor_get_uint8(v_x_514_, 0);
v___x_633_ = lean_unsigned_to_nat(1024u);
v___x_634_ = lean_nat_dec_le(v___x_633_, v_prec_515_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; 
v___x_635_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_625_ = v___x_635_;
goto v___jp_624_;
}
else
{
lean_object* v___x_636_; 
v___x_636_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_625_ = v___x_636_;
goto v___jp_624_;
}
v___jp_624_:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; uint8_t v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_626_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__26));
v___x_627_ = l_Bool_repr___redArg(v_gen_623_);
v___x_628_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_626_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
lean_inc(v___y_625_);
v___x_629_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_629_, 0, v___y_625_);
lean_ctor_set(v___x_629_, 1, v___x_628_);
v___x_630_ = 0;
v___x_631_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_631_, 0, v___x_629_);
lean_ctor_set_uint8(v___x_631_, sizeof(void*)*1, v___x_630_);
v___x_632_ = l_Repr_addAppParen(v___x_631_, v_prec_515_);
return v___x_632_;
}
}
default: 
{
lean_object* v___x_637_; uint8_t v___x_638_; 
v___x_637_ = lean_unsigned_to_nat(1024u);
v___x_638_ = lean_nat_dec_le(v___x_637_, v_prec_515_);
if (v___x_638_ == 0)
{
lean_object* v___x_639_; 
v___x_639_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_545_ = v___x_639_;
goto v___jp_544_;
}
else
{
lean_object* v___x_640_; 
v___x_640_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_545_ = v___x_640_;
goto v___jp_544_;
}
}
}
v___jp_516_:
{
lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_518_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__1));
lean_inc(v___y_517_);
v___x_519_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_519_, 0, v___y_517_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = 0;
v___x_521_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set_uint8(v___x_521_, sizeof(void*)*1, v___x_520_);
v___x_522_ = l_Repr_addAppParen(v___x_521_, v_prec_515_);
return v___x_522_;
}
v___jp_523_:
{
lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_525_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__3));
lean_inc(v___y_524_);
v___x_526_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_526_, 0, v___y_524_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = 0;
v___x_528_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*1, v___x_527_);
v___x_529_ = l_Repr_addAppParen(v___x_528_, v_prec_515_);
return v___x_529_;
}
v___jp_530_:
{
lean_object* v___x_532_; lean_object* v___x_533_; uint8_t v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_532_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__5));
lean_inc(v___y_531_);
v___x_533_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_533_, 0, v___y_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = 0;
v___x_535_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_535_, 0, v___x_533_);
lean_ctor_set_uint8(v___x_535_, sizeof(void*)*1, v___x_534_);
v___x_536_ = l_Repr_addAppParen(v___x_535_, v_prec_515_);
return v___x_536_;
}
v___jp_537_:
{
lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_539_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__7));
lean_inc(v___y_538_);
v___x_540_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_540_, 0, v___y_538_);
lean_ctor_set(v___x_540_, 1, v___x_539_);
v___x_541_ = 0;
v___x_542_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_542_, 0, v___x_540_);
lean_ctor_set_uint8(v___x_542_, sizeof(void*)*1, v___x_541_);
v___x_543_ = l_Repr_addAppParen(v___x_542_, v_prec_515_);
return v___x_543_;
}
v___jp_544_:
{
lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_546_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__9));
lean_inc(v___y_545_);
v___x_547_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_547_, 0, v___y_545_);
lean_ctor_set(v___x_547_, 1, v___x_546_);
v___x_548_ = 0;
v___x_549_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_549_, 0, v___x_547_);
lean_ctor_set_uint8(v___x_549_, sizeof(void*)*1, v___x_548_);
v___x_550_ = l_Repr_addAppParen(v___x_549_, v_prec_515_);
return v___x_550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___boxed(lean_object* v_x_641_, lean_object* v_prec_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr(v_x_641_, v_prec_642_);
lean_dec(v_prec_642_);
lean_dec(v_x_641_);
return v_res_643_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__0(void){
_start:
{
uint64_t v___x_646_; uint64_t v___x_647_; uint64_t v___x_648_; 
v___x_646_ = 13ULL;
v___x_647_ = 0ULL;
v___x_648_ = lean_uint64_mix_hash(v___x_647_, v___x_646_);
return v___x_648_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__1(void){
_start:
{
uint64_t v___x_649_; uint64_t v___x_650_; uint64_t v___x_651_; 
v___x_649_ = 11ULL;
v___x_650_ = 0ULL;
v___x_651_ = lean_uint64_mix_hash(v___x_650_, v___x_649_);
return v___x_651_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__2(void){
_start:
{
uint64_t v___x_652_; uint64_t v___x_653_; uint64_t v___x_654_; 
v___x_652_ = 13ULL;
v___x_653_ = 1ULL;
v___x_654_ = lean_uint64_mix_hash(v___x_653_, v___x_652_);
return v___x_654_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__3(void){
_start:
{
uint64_t v___x_655_; uint64_t v___x_656_; uint64_t v___x_657_; 
v___x_655_ = 11ULL;
v___x_656_ = 1ULL;
v___x_657_ = lean_uint64_mix_hash(v___x_656_, v___x_655_);
return v___x_657_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__4(void){
_start:
{
uint64_t v___x_658_; uint64_t v___x_659_; uint64_t v___x_660_; 
v___x_658_ = 13ULL;
v___x_659_ = 2ULL;
v___x_660_ = lean_uint64_mix_hash(v___x_659_, v___x_658_);
return v___x_660_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__5(void){
_start:
{
uint64_t v___x_661_; uint64_t v___x_662_; uint64_t v___x_663_; 
v___x_661_ = 11ULL;
v___x_662_ = 2ULL;
v___x_663_ = lean_uint64_mix_hash(v___x_662_, v___x_661_);
return v___x_663_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__6(void){
_start:
{
uint64_t v___x_664_; uint64_t v___x_665_; uint64_t v___x_666_; 
v___x_664_ = 13ULL;
v___x_665_ = 5ULL;
v___x_666_ = lean_uint64_mix_hash(v___x_665_, v___x_664_);
return v___x_666_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__7(void){
_start:
{
uint64_t v___x_667_; uint64_t v___x_668_; uint64_t v___x_669_; 
v___x_667_ = 11ULL;
v___x_668_ = 5ULL;
v___x_669_ = lean_uint64_mix_hash(v___x_668_, v___x_667_);
return v___x_669_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__8(void){
_start:
{
uint64_t v___x_670_; uint64_t v___x_671_; uint64_t v___x_672_; 
v___x_670_ = 13ULL;
v___x_671_ = 8ULL;
v___x_672_ = lean_uint64_mix_hash(v___x_671_, v___x_670_);
return v___x_672_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__9(void){
_start:
{
uint64_t v___x_673_; uint64_t v___x_674_; uint64_t v___x_675_; 
v___x_673_ = 11ULL;
v___x_674_ = 8ULL;
v___x_675_ = lean_uint64_mix_hash(v___x_674_, v___x_673_);
return v___x_675_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash(lean_object* v_x_676_){
_start:
{
switch(lean_obj_tag(v_x_676_))
{
case 0:
{
uint8_t v_gen_677_; 
v_gen_677_ = lean_ctor_get_uint8(v_x_676_, 0);
if (v_gen_677_ == 0)
{
uint64_t v___x_678_; 
v___x_678_ = lean_uint64_once(&l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__0, &l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__0_once, _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__0);
return v___x_678_;
}
else
{
uint64_t v___x_679_; 
v___x_679_ = lean_uint64_once(&l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__1, &l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__1_once, _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__1);
return v___x_679_;
}
}
case 1:
{
uint8_t v_gen_680_; 
v_gen_680_ = lean_ctor_get_uint8(v_x_676_, 0);
if (v_gen_680_ == 0)
{
uint64_t v___x_681_; 
v___x_681_ = lean_uint64_once(&l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__2, &l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__2_once, _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__2);
return v___x_681_;
}
else
{
uint64_t v___x_682_; 
v___x_682_ = lean_uint64_once(&l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__3, &l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__3_once, _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__3);
return v___x_682_;
}
}
case 2:
{
uint8_t v_gen_683_; 
v_gen_683_ = lean_ctor_get_uint8(v_x_676_, 0);
if (v_gen_683_ == 0)
{
uint64_t v___x_684_; 
v___x_684_ = lean_uint64_once(&l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__4, &l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__4_once, _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__4);
return v___x_684_;
}
else
{
uint64_t v___x_685_; 
v___x_685_ = lean_uint64_once(&l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__5, &l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__5_once, _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__5);
return v___x_685_;
}
}
case 3:
{
uint64_t v___x_686_; 
v___x_686_ = 3ULL;
return v___x_686_;
}
case 4:
{
uint64_t v___x_687_; 
v___x_687_ = 4ULL;
return v___x_687_;
}
case 5:
{
uint8_t v_gen_688_; 
v_gen_688_ = lean_ctor_get_uint8(v_x_676_, 0);
if (v_gen_688_ == 0)
{
uint64_t v___x_689_; 
v___x_689_ = lean_uint64_once(&l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__6, &l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__6_once, _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__6);
return v___x_689_;
}
else
{
uint64_t v___x_690_; 
v___x_690_ = lean_uint64_once(&l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__7, &l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__7_once, _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__7);
return v___x_690_;
}
}
case 6:
{
uint64_t v___x_691_; 
v___x_691_ = 6ULL;
return v___x_691_;
}
case 7:
{
uint64_t v___x_692_; 
v___x_692_ = 7ULL;
return v___x_692_;
}
case 8:
{
uint8_t v_gen_693_; 
v_gen_693_ = lean_ctor_get_uint8(v_x_676_, 0);
if (v_gen_693_ == 0)
{
uint64_t v___x_694_; 
v___x_694_ = lean_uint64_once(&l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__8, &l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__8_once, _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__8);
return v___x_694_;
}
else
{
uint64_t v___x_695_; 
v___x_695_ = lean_uint64_once(&l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__9, &l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__9_once, _init_l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___closed__9);
return v___x_695_;
}
}
default: 
{
uint64_t v___x_696_; 
v___x_696_ = 9ULL;
return v___x_696_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash___boxed(lean_object* v_x_697_){
_start:
{
uint64_t v_res_698_; lean_object* v_r_699_; 
v_res_698_ = l_Lean_Meta_Grind_instHashableEMatchTheoremKind_hash(v_x_697_);
lean_dec(v_x_697_);
v_r_699_ = lean_box_uint64(v_res_698_);
return v_r_699_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = lean_box(0);
v___x_708_ = ((lean_object*)(l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__2));
v___x_709_ = l_Lean_Expr_const___override(v___x_708_, v___x_707_);
return v___x_709_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__4(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_710_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3, &l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3_once, _init_l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3);
v___x_711_ = lean_unsigned_to_nat(0u);
v___x_712_ = ((lean_object*)(l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__0));
v___x_713_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
lean_ctor_set(v___x_713_, 1, v___x_711_);
lean_ctor_set(v___x_713_, 2, v___x_710_);
return v___x_713_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCnstrRHS_default(void){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__4, &l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__4_once, _init_l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__4);
return v___x_714_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedCnstrRHS(void){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_Meta_Grind_instInhabitedCnstrRHS_default;
return v___x_715_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0___redArg(lean_object* v_xs_716_, lean_object* v_ys_717_, lean_object* v_x_718_){
_start:
{
lean_object* v_zero_719_; uint8_t v_isZero_720_; 
v_zero_719_ = lean_unsigned_to_nat(0u);
v_isZero_720_ = lean_nat_dec_eq(v_x_718_, v_zero_719_);
if (v_isZero_720_ == 1)
{
lean_dec(v_x_718_);
return v_isZero_720_;
}
else
{
lean_object* v_one_721_; lean_object* v_n_722_; lean_object* v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
v_one_721_ = lean_unsigned_to_nat(1u);
v_n_722_ = lean_nat_sub(v_x_718_, v_one_721_);
lean_dec(v_x_718_);
v___x_723_ = lean_array_fget_borrowed(v_xs_716_, v_n_722_);
v___x_724_ = lean_array_fget_borrowed(v_ys_717_, v_n_722_);
v___x_725_ = lean_name_eq(v___x_723_, v___x_724_);
if (v___x_725_ == 0)
{
lean_dec(v_n_722_);
return v___x_725_;
}
else
{
v_x_718_ = v_n_722_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0___redArg___boxed(lean_object* v_xs_727_, lean_object* v_ys_728_, lean_object* v_x_729_){
_start:
{
uint8_t v_res_730_; lean_object* v_r_731_; 
v_res_730_ = l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0___redArg(v_xs_727_, v_ys_728_, v_x_729_);
lean_dec_ref(v_ys_728_);
lean_dec_ref(v_xs_727_);
v_r_731_ = lean_box(v_res_730_);
return v_r_731_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_instBEqCnstrRHS_beq(lean_object* v_x_732_, lean_object* v_x_733_){
_start:
{
lean_object* v_levelNames_734_; lean_object* v_numMVars_735_; lean_object* v_expr_736_; lean_object* v_levelNames_737_; lean_object* v_numMVars_738_; lean_object* v_expr_739_; lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v_levelNames_734_ = lean_ctor_get(v_x_732_, 0);
v_numMVars_735_ = lean_ctor_get(v_x_732_, 1);
v_expr_736_ = lean_ctor_get(v_x_732_, 2);
v_levelNames_737_ = lean_ctor_get(v_x_733_, 0);
v_numMVars_738_ = lean_ctor_get(v_x_733_, 1);
v_expr_739_ = lean_ctor_get(v_x_733_, 2);
v___x_740_ = lean_array_get_size(v_levelNames_734_);
v___x_741_ = lean_array_get_size(v_levelNames_737_);
v___x_742_ = lean_nat_dec_eq(v___x_740_, v___x_741_);
if (v___x_742_ == 0)
{
return v___x_742_;
}
else
{
uint8_t v___x_743_; 
v___x_743_ = l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0___redArg(v_levelNames_734_, v_levelNames_737_, v___x_740_);
if (v___x_743_ == 0)
{
return v___x_743_;
}
else
{
uint8_t v___x_744_; 
v___x_744_ = lean_nat_dec_eq(v_numMVars_735_, v_numMVars_738_);
if (v___x_744_ == 0)
{
return v___x_744_;
}
else
{
uint8_t v___x_745_; 
v___x_745_ = lean_expr_eqv(v_expr_736_, v_expr_739_);
return v___x_745_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instBEqCnstrRHS_beq___boxed(lean_object* v_x_746_, lean_object* v_x_747_){
_start:
{
uint8_t v_res_748_; lean_object* v_r_749_; 
v_res_748_ = l_Lean_Meta_Grind_instBEqCnstrRHS_beq(v_x_746_, v_x_747_);
lean_dec_ref(v_x_747_);
lean_dec_ref(v_x_746_);
v_r_749_ = lean_box(v_res_748_);
return v_r_749_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0(lean_object* v_xs_750_, lean_object* v_ys_751_, lean_object* v_hsz_752_, lean_object* v_x_753_, lean_object* v_x_754_){
_start:
{
uint8_t v___x_755_; 
v___x_755_ = l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0___redArg(v_xs_750_, v_ys_751_, v_x_753_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0___boxed(lean_object* v_xs_756_, lean_object* v_ys_757_, lean_object* v_hsz_758_, lean_object* v_x_759_, lean_object* v_x_760_){
_start:
{
uint8_t v_res_761_; lean_object* v_r_762_; 
v_res_761_ = l_Array_isEqvAux___at___00Lean_Meta_Grind_instBEqCnstrRHS_beq_spec__0(v_xs_756_, v_ys_757_, v_hsz_758_, v_x_759_, v_x_760_);
lean_dec_ref(v_ys_757_);
lean_dec_ref(v_xs_756_);
v_r_762_ = lean_box(v_res_761_);
return v_r_762_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__1(lean_object* v_a_765_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = lean_nat_to_int(v_a_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_767_, lean_object* v_x_768_, lean_object* v_x_769_){
_start:
{
if (lean_obj_tag(v_x_769_) == 0)
{
lean_dec(v_x_767_);
return v_x_768_;
}
else
{
lean_object* v_head_770_; lean_object* v_tail_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_782_; 
v_head_770_ = lean_ctor_get(v_x_769_, 0);
v_tail_771_ = lean_ctor_get(v_x_769_, 1);
v_isSharedCheck_782_ = !lean_is_exclusive(v_x_769_);
if (v_isSharedCheck_782_ == 0)
{
v___x_773_ = v_x_769_;
v_isShared_774_ = v_isSharedCheck_782_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_tail_771_);
lean_inc(v_head_770_);
lean_dec(v_x_769_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_782_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
lean_inc(v_x_767_);
if (v_isShared_774_ == 0)
{
lean_ctor_set_tag(v___x_773_, 5);
lean_ctor_set(v___x_773_, 1, v_x_767_);
lean_ctor_set(v___x_773_, 0, v_x_768_);
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_x_768_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_x_767_);
v___x_776_ = v_reuseFailAlloc_781_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_777_ = lean_unsigned_to_nat(0u);
v___x_778_ = l_Lean_Name_reprPrec(v_head_770_, v___x_777_);
v___x_779_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_776_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
v_x_768_ = v___x_779_;
v_x_769_ = v_tail_771_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0_spec__2(lean_object* v_x_783_, lean_object* v_x_784_, lean_object* v_x_785_){
_start:
{
if (lean_obj_tag(v_x_785_) == 0)
{
lean_dec(v_x_783_);
return v_x_784_;
}
else
{
lean_object* v_head_786_; lean_object* v_tail_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_798_; 
v_head_786_ = lean_ctor_get(v_x_785_, 0);
v_tail_787_ = lean_ctor_get(v_x_785_, 1);
v_isSharedCheck_798_ = !lean_is_exclusive(v_x_785_);
if (v_isSharedCheck_798_ == 0)
{
v___x_789_ = v_x_785_;
v_isShared_790_ = v_isSharedCheck_798_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_tail_787_);
lean_inc(v_head_786_);
lean_dec(v_x_785_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_798_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
lean_inc(v_x_783_);
if (v_isShared_790_ == 0)
{
lean_ctor_set_tag(v___x_789_, 5);
lean_ctor_set(v___x_789_, 1, v_x_783_);
lean_ctor_set(v___x_789_, 0, v_x_784_);
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_x_784_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v_x_783_);
v___x_792_ = v_reuseFailAlloc_797_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_793_ = lean_unsigned_to_nat(0u);
v___x_794_ = l_Lean_Name_reprPrec(v_head_786_, v___x_793_);
v___x_795_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_792_);
lean_ctor_set(v___x_795_, 1, v___x_794_);
v___x_796_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0_spec__2_spec__3(v_x_783_, v___x_795_, v_tail_787_);
return v___x_796_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0___lam__0(lean_object* v___y_799_){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_800_ = lean_unsigned_to_nat(0u);
v___x_801_ = l_Lean_Name_reprPrec(v___y_799_, v___x_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0(lean_object* v_x_802_, lean_object* v_x_803_){
_start:
{
if (lean_obj_tag(v_x_802_) == 0)
{
lean_object* v___x_804_; 
lean_dec(v_x_803_);
v___x_804_ = lean_box(0);
return v___x_804_;
}
else
{
lean_object* v_tail_805_; 
v_tail_805_ = lean_ctor_get(v_x_802_, 1);
if (lean_obj_tag(v_tail_805_) == 0)
{
lean_object* v_head_806_; lean_object* v___x_807_; 
lean_dec(v_x_803_);
v_head_806_ = lean_ctor_get(v_x_802_, 0);
lean_inc(v_head_806_);
lean_dec_ref_known(v_x_802_, 2);
v___x_807_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0___lam__0(v_head_806_);
return v___x_807_;
}
else
{
lean_object* v_head_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
lean_inc(v_tail_805_);
v_head_808_ = lean_ctor_get(v_x_802_, 0);
lean_inc(v_head_808_);
lean_dec_ref_known(v_x_802_, 2);
v___x_809_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0___lam__0(v_head_808_);
v___x_810_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0_spec__2(v_x_803_, v___x_809_, v_tail_805_);
return v___x_810_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_819_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__0));
v___x_820_ = lean_string_length(v___x_819_);
return v___x_820_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__6(void){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = lean_obj_once(&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__5, &l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__5_once, _init_l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__5);
v___x_822_ = lean_nat_to_int(v___x_821_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0(lean_object* v_xs_830_){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_831_ = lean_array_get_size(v_xs_830_);
v___x_832_ = lean_unsigned_to_nat(0u);
v___x_833_ = lean_nat_dec_eq(v___x_831_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_834_ = lean_array_to_list(v_xs_830_);
v___x_835_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__3));
v___x_836_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0_spec__0(v___x_834_, v___x_835_);
v___x_837_ = lean_obj_once(&l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__6, &l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__6);
v___x_838_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__7));
v___x_839_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
lean_ctor_set(v___x_839_, 1, v___x_836_);
v___x_840_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__8));
v___x_841_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_841_, 0, v___x_839_);
lean_ctor_set(v___x_841_, 1, v___x_840_);
v___x_842_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_837_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
v___x_843_ = l_Std_Format_fill(v___x_842_);
return v___x_843_;
}
else
{
lean_object* v___x_844_; 
lean_dec_ref(v_xs_830_);
v___x_844_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__10));
return v___x_844_;
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_858_ = lean_unsigned_to_nat(14u);
v___x_859_ = lean_nat_to_int(v___x_858_);
return v___x_859_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_863_ = lean_unsigned_to_nat(12u);
v___x_864_ = lean_nat_to_int(v___x_863_);
return v___x_864_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = lean_unsigned_to_nat(8u);
v___x_869_ = lean_nat_to_int(v___x_868_);
return v___x_869_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_871_ = ((lean_object*)(l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__0));
v___x_872_ = lean_string_length(v___x_871_);
return v___x_872_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_873_ = lean_obj_once(&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__15, &l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__15_once, _init_l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__15);
v___x_874_ = lean_nat_to_int(v___x_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg(lean_object* v_x_879_){
_start:
{
lean_object* v_levelNames_880_; lean_object* v_numMVars_881_; lean_object* v_expr_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; uint8_t v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_levelNames_880_ = lean_ctor_get(v_x_879_, 0);
lean_inc_ref(v_levelNames_880_);
v_numMVars_881_ = lean_ctor_get(v_x_879_, 1);
lean_inc(v_numMVars_881_);
v_expr_882_ = lean_ctor_get(v_x_879_, 2);
lean_inc_ref(v_expr_882_);
lean_dec_ref(v_x_879_);
v___x_883_ = ((lean_object*)(l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__5));
v___x_884_ = ((lean_object*)(l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__6));
v___x_885_ = lean_obj_once(&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__7, &l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__7_once, _init_l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__7);
v___x_886_ = l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0(v_levelNames_880_);
v___x_887_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_885_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v___x_888_ = 0;
v___x_889_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_889_, 0, v___x_887_);
lean_ctor_set_uint8(v___x_889_, sizeof(void*)*1, v___x_888_);
v___x_890_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_884_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
v___x_891_ = ((lean_object*)(l_Array_repr___at___00Lean_Meta_Grind_instReprCnstrRHS_repr_spec__0___closed__2));
v___x_892_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_892_, 0, v___x_890_);
lean_ctor_set(v___x_892_, 1, v___x_891_);
v___x_893_ = lean_box(1);
v___x_894_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_894_, 0, v___x_892_);
lean_ctor_set(v___x_894_, 1, v___x_893_);
v___x_895_ = ((lean_object*)(l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__9));
v___x_896_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_894_);
lean_ctor_set(v___x_896_, 1, v___x_895_);
v___x_897_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_897_, 0, v___x_896_);
lean_ctor_set(v___x_897_, 1, v___x_883_);
v___x_898_ = lean_obj_once(&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__10, &l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__10_once, _init_l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__10);
v___x_899_ = l_Nat_reprFast(v_numMVars_881_);
v___x_900_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
v___x_901_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_898_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
v___x_902_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_902_, 0, v___x_901_);
lean_ctor_set_uint8(v___x_902_, sizeof(void*)*1, v___x_888_);
v___x_903_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_903_, 0, v___x_897_);
lean_ctor_set(v___x_903_, 1, v___x_902_);
v___x_904_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
lean_ctor_set(v___x_904_, 1, v___x_891_);
v___x_905_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
lean_ctor_set(v___x_905_, 1, v___x_893_);
v___x_906_ = ((lean_object*)(l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__12));
v___x_907_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_907_, 0, v___x_905_);
lean_ctor_set(v___x_907_, 1, v___x_906_);
v___x_908_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
lean_ctor_set(v___x_908_, 1, v___x_883_);
v___x_909_ = lean_obj_once(&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__13, &l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__13_once, _init_l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__13);
v___x_910_ = lean_unsigned_to_nat(0u);
v___x_911_ = l_Lean_instReprExpr_repr(v_expr_882_, v___x_910_);
v___x_912_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_909_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
v___x_913_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_913_, 0, v___x_912_);
lean_ctor_set_uint8(v___x_913_, sizeof(void*)*1, v___x_888_);
v___x_914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_908_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = lean_obj_once(&l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__16, &l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__16_once, _init_l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__16);
v___x_916_ = ((lean_object*)(l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__17));
v___x_917_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_916_);
lean_ctor_set(v___x_917_, 1, v___x_914_);
v___x_918_ = ((lean_object*)(l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg___closed__18));
v___x_919_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_917_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___x_920_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_915_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_921_, 0, v___x_920_);
lean_ctor_set_uint8(v___x_921_, sizeof(void*)*1, v___x_888_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr(lean_object* v_x_922_, lean_object* v_prec_923_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg(v_x_922_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprCnstrRHS_repr___boxed(lean_object* v_x_925_, lean_object* v_prec_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lean_Meta_Grind_instReprCnstrRHS_repr(v_x_925_, v_prec_926_);
lean_dec(v_prec_926_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorIdx(lean_object* v_x_930_){
_start:
{
switch(lean_obj_tag(v_x_930_))
{
case 0:
{
lean_object* v___x_931_; 
v___x_931_ = lean_unsigned_to_nat(0u);
return v___x_931_;
}
case 1:
{
lean_object* v___x_932_; 
v___x_932_ = lean_unsigned_to_nat(1u);
return v___x_932_;
}
case 2:
{
lean_object* v___x_933_; 
v___x_933_ = lean_unsigned_to_nat(2u);
return v___x_933_;
}
case 3:
{
lean_object* v___x_934_; 
v___x_934_ = lean_unsigned_to_nat(3u);
return v___x_934_;
}
case 4:
{
lean_object* v___x_935_; 
v___x_935_ = lean_unsigned_to_nat(4u);
return v___x_935_;
}
case 5:
{
lean_object* v___x_936_; 
v___x_936_ = lean_unsigned_to_nat(5u);
return v___x_936_;
}
case 6:
{
lean_object* v___x_937_; 
v___x_937_ = lean_unsigned_to_nat(6u);
return v___x_937_;
}
case 7:
{
lean_object* v___x_938_; 
v___x_938_ = lean_unsigned_to_nat(7u);
return v___x_938_;
}
case 8:
{
lean_object* v___x_939_; 
v___x_939_ = lean_unsigned_to_nat(8u);
return v___x_939_;
}
case 9:
{
lean_object* v___x_940_; 
v___x_940_ = lean_unsigned_to_nat(9u);
return v___x_940_;
}
default: 
{
lean_object* v___x_941_; 
v___x_941_ = lean_unsigned_to_nat(10u);
return v___x_941_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorIdx___boxed(lean_object* v_x_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorIdx(v_x_942_);
lean_dec_ref(v_x_942_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(lean_object* v_t_944_, lean_object* v_k_945_){
_start:
{
switch(lean_obj_tag(v_t_944_))
{
case 0:
{
lean_object* v_lhs_946_; lean_object* v_rhs_947_; lean_object* v___x_948_; 
v_lhs_946_ = lean_ctor_get(v_t_944_, 0);
lean_inc(v_lhs_946_);
v_rhs_947_ = lean_ctor_get(v_t_944_, 1);
lean_inc_ref(v_rhs_947_);
lean_dec_ref_known(v_t_944_, 2);
v___x_948_ = lean_apply_2(v_k_945_, v_lhs_946_, v_rhs_947_);
return v___x_948_;
}
case 1:
{
lean_object* v_lhs_949_; lean_object* v_rhs_950_; lean_object* v___x_951_; 
v_lhs_949_ = lean_ctor_get(v_t_944_, 0);
lean_inc(v_lhs_949_);
v_rhs_950_ = lean_ctor_get(v_t_944_, 1);
lean_inc_ref(v_rhs_950_);
lean_dec_ref_known(v_t_944_, 2);
v___x_951_ = lean_apply_2(v_k_945_, v_lhs_949_, v_rhs_950_);
return v___x_951_;
}
case 2:
{
lean_object* v_lhs_952_; lean_object* v_n_953_; lean_object* v___x_954_; 
v_lhs_952_ = lean_ctor_get(v_t_944_, 0);
lean_inc(v_lhs_952_);
v_n_953_ = lean_ctor_get(v_t_944_, 1);
lean_inc(v_n_953_);
lean_dec_ref_known(v_t_944_, 2);
v___x_954_ = lean_apply_2(v_k_945_, v_lhs_952_, v_n_953_);
return v___x_954_;
}
case 3:
{
lean_object* v_lhs_955_; lean_object* v_n_956_; lean_object* v___x_957_; 
v_lhs_955_ = lean_ctor_get(v_t_944_, 0);
lean_inc(v_lhs_955_);
v_n_956_ = lean_ctor_get(v_t_944_, 1);
lean_inc(v_n_956_);
lean_dec_ref_known(v_t_944_, 2);
v___x_957_ = lean_apply_2(v_k_945_, v_lhs_955_, v_n_956_);
return v___x_957_;
}
case 6:
{
lean_object* v_bvarIdx_958_; uint8_t v_strict_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v_bvarIdx_958_ = lean_ctor_get(v_t_944_, 0);
lean_inc(v_bvarIdx_958_);
v_strict_959_ = lean_ctor_get_uint8(v_t_944_, sizeof(void*)*1);
lean_dec_ref_known(v_t_944_, 1);
v___x_960_ = lean_box(v_strict_959_);
v___x_961_ = lean_apply_2(v_k_945_, v_bvarIdx_958_, v___x_960_);
return v___x_961_;
}
case 8:
{
lean_object* v_e_962_; lean_object* v___x_963_; 
v_e_962_ = lean_ctor_get(v_t_944_, 0);
lean_inc_ref(v_e_962_);
lean_dec_ref_known(v_t_944_, 1);
v___x_963_ = lean_apply_1(v_k_945_, v_e_962_);
return v___x_963_;
}
case 9:
{
lean_object* v_e_964_; lean_object* v___x_965_; 
v_e_964_ = lean_ctor_get(v_t_944_, 0);
lean_inc_ref(v_e_964_);
lean_dec_ref_known(v_t_944_, 1);
v___x_965_ = lean_apply_1(v_k_945_, v_e_964_);
return v___x_965_;
}
case 10:
{
lean_object* v_bvarIdx_966_; uint8_t v_strict_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v_bvarIdx_966_ = lean_ctor_get(v_t_944_, 0);
lean_inc(v_bvarIdx_966_);
v_strict_967_ = lean_ctor_get_uint8(v_t_944_, sizeof(void*)*1);
lean_dec_ref_known(v_t_944_, 1);
v___x_968_ = lean_box(v_strict_967_);
v___x_969_ = lean_apply_2(v_k_945_, v_bvarIdx_966_, v___x_968_);
return v___x_969_;
}
default: 
{
lean_object* v_n_970_; lean_object* v___x_971_; 
v_n_970_ = lean_ctor_get(v_t_944_, 0);
lean_inc(v_n_970_);
lean_dec_ref(v_t_944_);
v___x_971_ = lean_apply_1(v_k_945_, v_n_970_);
return v___x_971_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim(lean_object* v_motive_972_, lean_object* v_ctorIdx_973_, lean_object* v_t_974_, lean_object* v_h_975_, lean_object* v_k_976_){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_974_, v_k_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___boxed(lean_object* v_motive_978_, lean_object* v_ctorIdx_979_, lean_object* v_t_980_, lean_object* v_h_981_, lean_object* v_k_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim(v_motive_978_, v_ctorIdx_979_, v_t_980_, v_h_981_, v_k_982_);
lean_dec(v_ctorIdx_979_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_notDefEq_elim___redArg(lean_object* v_t_984_, lean_object* v_notDefEq_985_){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_984_, v_notDefEq_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_notDefEq_elim(lean_object* v_motive_987_, lean_object* v_t_988_, lean_object* v_h_989_, lean_object* v_notDefEq_990_){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_988_, v_notDefEq_990_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_defEq_elim___redArg(lean_object* v_t_992_, lean_object* v_defEq_993_){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_992_, v_defEq_993_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_defEq_elim(lean_object* v_motive_995_, lean_object* v_t_996_, lean_object* v_h_997_, lean_object* v_defEq_998_){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_996_, v_defEq_998_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_sizeLt_elim___redArg(lean_object* v_t_1000_, lean_object* v_sizeLt_1001_){
_start:
{
lean_object* v___x_1002_; 
v___x_1002_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1000_, v_sizeLt_1001_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_sizeLt_elim(lean_object* v_motive_1003_, lean_object* v_t_1004_, lean_object* v_h_1005_, lean_object* v_sizeLt_1006_){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1004_, v_sizeLt_1006_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_depthLt_elim___redArg(lean_object* v_t_1008_, lean_object* v_depthLt_1009_){
_start:
{
lean_object* v___x_1010_; 
v___x_1010_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1008_, v_depthLt_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_depthLt_elim(lean_object* v_motive_1011_, lean_object* v_t_1012_, lean_object* v_h_1013_, lean_object* v_depthLt_1014_){
_start:
{
lean_object* v___x_1015_; 
v___x_1015_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1012_, v_depthLt_1014_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_genLt_elim___redArg(lean_object* v_t_1016_, lean_object* v_genLt_1017_){
_start:
{
lean_object* v___x_1018_; 
v___x_1018_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1016_, v_genLt_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_genLt_elim(lean_object* v_motive_1019_, lean_object* v_t_1020_, lean_object* v_h_1021_, lean_object* v_genLt_1022_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1020_, v_genLt_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_isGround_elim___redArg(lean_object* v_t_1024_, lean_object* v_isGround_1025_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1024_, v_isGround_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_isGround_elim(lean_object* v_motive_1027_, lean_object* v_t_1028_, lean_object* v_h_1029_, lean_object* v_isGround_1030_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1028_, v_isGround_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_isValue_elim___redArg(lean_object* v_t_1032_, lean_object* v_isValue_1033_){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1032_, v_isValue_1033_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_isValue_elim(lean_object* v_motive_1035_, lean_object* v_t_1036_, lean_object* v_h_1037_, lean_object* v_isValue_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1036_, v_isValue_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_maxInsts_elim___redArg(lean_object* v_t_1040_, lean_object* v_maxInsts_1041_){
_start:
{
lean_object* v___x_1042_; 
v___x_1042_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1040_, v_maxInsts_1041_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_maxInsts_elim(lean_object* v_motive_1043_, lean_object* v_t_1044_, lean_object* v_h_1045_, lean_object* v_maxInsts_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1044_, v_maxInsts_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_guard_elim___redArg(lean_object* v_t_1048_, lean_object* v_guard_1049_){
_start:
{
lean_object* v___x_1050_; 
v___x_1050_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1048_, v_guard_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_guard_elim(lean_object* v_motive_1051_, lean_object* v_t_1052_, lean_object* v_h_1053_, lean_object* v_guard_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1052_, v_guard_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_check_elim___redArg(lean_object* v_t_1056_, lean_object* v_check_1057_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1056_, v_check_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_check_elim(lean_object* v_motive_1059_, lean_object* v_t_1060_, lean_object* v_h_1061_, lean_object* v_check_1062_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1060_, v_check_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_notValue_elim___redArg(lean_object* v_t_1064_, lean_object* v_notValue_1065_){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1064_, v_notValue_1065_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_EMatchTheoremConstraint_notValue_elim(lean_object* v_motive_1067_, lean_object* v_t_1068_, lean_object* v_h_1069_, lean_object* v_notValue_1070_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorElim___redArg(v_t_1068_, v_notValue_1070_);
return v___x_1071_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default___closed__0(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1072_ = l_Lean_Meta_Grind_instInhabitedCnstrRHS_default;
v___x_1073_ = lean_unsigned_to_nat(0u);
v___x_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
lean_ctor_set(v___x_1074_, 1, v___x_1072_);
return v___x_1074_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default(void){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default___closed__0, &l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default___closed__0);
return v___x_1075_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint(void){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default;
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr(lean_object* v_x_1143_, lean_object* v_prec_1144_){
_start:
{
switch(lean_obj_tag(v_x_1143_))
{
case 0:
{
lean_object* v_lhs_1145_; lean_object* v_rhs_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1170_; 
v_lhs_1145_ = lean_ctor_get(v_x_1143_, 0);
v_rhs_1146_ = lean_ctor_get(v_x_1143_, 1);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1148_ = v_x_1143_;
v_isShared_1149_ = v_isSharedCheck_1170_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_rhs_1146_);
lean_inc(v_lhs_1145_);
lean_dec(v_x_1143_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1170_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___y_1151_; lean_object* v___x_1166_; uint8_t v___x_1167_; 
v___x_1166_ = lean_unsigned_to_nat(1024u);
v___x_1167_ = lean_nat_dec_le(v___x_1166_, v_prec_1144_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_1151_ = v___x_1168_;
goto v___jp_1150_;
}
else
{
lean_object* v___x_1169_; 
v___x_1169_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_1151_ = v___x_1169_;
goto v___jp_1150_;
}
v___jp_1150_:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1157_; 
v___x_1152_ = lean_box(1);
v___x_1153_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__2));
v___x_1154_ = l_Nat_reprFast(v_lhs_1145_);
v___x_1155_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1154_);
if (v_isShared_1149_ == 0)
{
lean_ctor_set_tag(v___x_1148_, 5);
lean_ctor_set(v___x_1148_, 1, v___x_1155_);
lean_ctor_set(v___x_1148_, 0, v___x_1153_);
v___x_1157_ = v___x_1148_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v___x_1153_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v___x_1155_);
v___x_1157_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1158_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
lean_ctor_set(v___x_1158_, 1, v___x_1152_);
v___x_1159_ = l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg(v_rhs_1146_);
v___x_1160_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1158_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
lean_inc(v___y_1151_);
v___x_1161_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1161_, 0, v___y_1151_);
lean_ctor_set(v___x_1161_, 1, v___x_1160_);
v___x_1162_ = 0;
v___x_1163_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1163_, 0, v___x_1161_);
lean_ctor_set_uint8(v___x_1163_, sizeof(void*)*1, v___x_1162_);
v___x_1164_ = l_Repr_addAppParen(v___x_1163_, v_prec_1144_);
return v___x_1164_;
}
}
}
}
case 1:
{
lean_object* v_lhs_1171_; lean_object* v_rhs_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1196_; 
v_lhs_1171_ = lean_ctor_get(v_x_1143_, 0);
v_rhs_1172_ = lean_ctor_get(v_x_1143_, 1);
v_isSharedCheck_1196_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1174_ = v_x_1143_;
v_isShared_1175_ = v_isSharedCheck_1196_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_rhs_1172_);
lean_inc(v_lhs_1171_);
lean_dec(v_x_1143_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1196_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___y_1177_; lean_object* v___x_1192_; uint8_t v___x_1193_; 
v___x_1192_ = lean_unsigned_to_nat(1024u);
v___x_1193_ = lean_nat_dec_le(v___x_1192_, v_prec_1144_);
if (v___x_1193_ == 0)
{
lean_object* v___x_1194_; 
v___x_1194_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_1177_ = v___x_1194_;
goto v___jp_1176_;
}
else
{
lean_object* v___x_1195_; 
v___x_1195_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_1177_ = v___x_1195_;
goto v___jp_1176_;
}
v___jp_1176_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1178_ = lean_box(1);
v___x_1179_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__5));
v___x_1180_ = l_Nat_reprFast(v_lhs_1171_);
v___x_1181_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1180_);
if (v_isShared_1175_ == 0)
{
lean_ctor_set_tag(v___x_1174_, 5);
lean_ctor_set(v___x_1174_, 1, v___x_1181_);
lean_ctor_set(v___x_1174_, 0, v___x_1179_);
v___x_1183_ = v___x_1174_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1179_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v___x_1181_);
v___x_1183_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; uint8_t v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
lean_ctor_set(v___x_1184_, 1, v___x_1178_);
v___x_1185_ = l_Lean_Meta_Grind_instReprCnstrRHS_repr___redArg(v_rhs_1172_);
v___x_1186_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1184_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
lean_inc(v___y_1177_);
v___x_1187_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___y_1177_);
lean_ctor_set(v___x_1187_, 1, v___x_1186_);
v___x_1188_ = 0;
v___x_1189_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1189_, 0, v___x_1187_);
lean_ctor_set_uint8(v___x_1189_, sizeof(void*)*1, v___x_1188_);
v___x_1190_ = l_Repr_addAppParen(v___x_1189_, v_prec_1144_);
return v___x_1190_;
}
}
}
}
case 2:
{
lean_object* v_lhs_1197_; lean_object* v_n_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1223_; 
v_lhs_1197_ = lean_ctor_get(v_x_1143_, 0);
v_n_1198_ = lean_ctor_get(v_x_1143_, 1);
v_isSharedCheck_1223_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1200_ = v_x_1143_;
v_isShared_1201_ = v_isSharedCheck_1223_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_n_1198_);
lean_inc(v_lhs_1197_);
lean_dec(v_x_1143_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1223_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___y_1203_; lean_object* v___x_1219_; uint8_t v___x_1220_; 
v___x_1219_ = lean_unsigned_to_nat(1024u);
v___x_1220_ = lean_nat_dec_le(v___x_1219_, v_prec_1144_);
if (v___x_1220_ == 0)
{
lean_object* v___x_1221_; 
v___x_1221_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_1203_ = v___x_1221_;
goto v___jp_1202_;
}
else
{
lean_object* v___x_1222_; 
v___x_1222_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_1203_ = v___x_1222_;
goto v___jp_1202_;
}
v___jp_1202_:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1204_ = lean_box(1);
v___x_1205_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__8));
v___x_1206_ = l_Nat_reprFast(v_lhs_1197_);
v___x_1207_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
if (v_isShared_1201_ == 0)
{
lean_ctor_set_tag(v___x_1200_, 5);
lean_ctor_set(v___x_1200_, 1, v___x_1207_);
lean_ctor_set(v___x_1200_, 0, v___x_1205_);
v___x_1209_ = v___x_1200_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1205_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; uint8_t v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1210_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
lean_ctor_set(v___x_1210_, 1, v___x_1204_);
v___x_1211_ = l_Nat_reprFast(v_n_1198_);
v___x_1212_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
v___x_1213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1210_);
lean_ctor_set(v___x_1213_, 1, v___x_1212_);
lean_inc(v___y_1203_);
v___x_1214_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___y_1203_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = 0;
v___x_1216_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1216_, 0, v___x_1214_);
lean_ctor_set_uint8(v___x_1216_, sizeof(void*)*1, v___x_1215_);
v___x_1217_ = l_Repr_addAppParen(v___x_1216_, v_prec_1144_);
return v___x_1217_;
}
}
}
}
case 3:
{
lean_object* v_lhs_1224_; lean_object* v_n_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1250_; 
v_lhs_1224_ = lean_ctor_get(v_x_1143_, 0);
v_n_1225_ = lean_ctor_get(v_x_1143_, 1);
v_isSharedCheck_1250_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1227_ = v_x_1143_;
v_isShared_1228_ = v_isSharedCheck_1250_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_n_1225_);
lean_inc(v_lhs_1224_);
lean_dec(v_x_1143_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1250_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___y_1230_; lean_object* v___x_1246_; uint8_t v___x_1247_; 
v___x_1246_ = lean_unsigned_to_nat(1024u);
v___x_1247_ = lean_nat_dec_le(v___x_1246_, v_prec_1144_);
if (v___x_1247_ == 0)
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_1230_ = v___x_1248_;
goto v___jp_1229_;
}
else
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_1230_ = v___x_1249_;
goto v___jp_1229_;
}
v___jp_1229_:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1236_; 
v___x_1231_ = lean_box(1);
v___x_1232_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__11));
v___x_1233_ = l_Nat_reprFast(v_lhs_1224_);
v___x_1234_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set_tag(v___x_1227_, 5);
lean_ctor_set(v___x_1227_, 1, v___x_1234_);
lean_ctor_set(v___x_1227_, 0, v___x_1232_);
v___x_1236_ = v___x_1227_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v___x_1232_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v___x_1234_);
v___x_1236_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; uint8_t v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1236_);
lean_ctor_set(v___x_1237_, 1, v___x_1231_);
v___x_1238_ = l_Nat_reprFast(v_n_1225_);
v___x_1239_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
v___x_1240_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1237_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
lean_inc(v___y_1230_);
v___x_1241_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___y_1230_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
v___x_1242_ = 0;
v___x_1243_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1243_, 0, v___x_1241_);
lean_ctor_set_uint8(v___x_1243_, sizeof(void*)*1, v___x_1242_);
v___x_1244_ = l_Repr_addAppParen(v___x_1243_, v_prec_1144_);
return v___x_1244_;
}
}
}
}
case 4:
{
lean_object* v_n_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1271_; 
v_n_1251_ = lean_ctor_get(v_x_1143_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1253_ = v_x_1143_;
v_isShared_1254_ = v_isSharedCheck_1271_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_n_1251_);
lean_dec(v_x_1143_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1271_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___y_1256_; lean_object* v___x_1267_; uint8_t v___x_1268_; 
v___x_1267_ = lean_unsigned_to_nat(1024u);
v___x_1268_ = lean_nat_dec_le(v___x_1267_, v_prec_1144_);
if (v___x_1268_ == 0)
{
lean_object* v___x_1269_; 
v___x_1269_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_1256_ = v___x_1269_;
goto v___jp_1255_;
}
else
{
lean_object* v___x_1270_; 
v___x_1270_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_1256_ = v___x_1270_;
goto v___jp_1255_;
}
v___jp_1255_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1260_; 
v___x_1257_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__14));
v___x_1258_ = l_Nat_reprFast(v_n_1251_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set_tag(v___x_1253_, 3);
lean_ctor_set(v___x_1253_, 0, v___x_1258_);
v___x_1260_ = v___x_1253_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1261_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1257_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
lean_inc(v___y_1256_);
v___x_1262_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___y_1256_);
lean_ctor_set(v___x_1262_, 1, v___x_1261_);
v___x_1263_ = 0;
v___x_1264_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1264_, 0, v___x_1262_);
lean_ctor_set_uint8(v___x_1264_, sizeof(void*)*1, v___x_1263_);
v___x_1265_ = l_Repr_addAppParen(v___x_1264_, v_prec_1144_);
return v___x_1265_;
}
}
}
}
case 5:
{
lean_object* v_bvarIdx_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1292_; 
v_bvarIdx_1272_ = lean_ctor_get(v_x_1143_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1274_ = v_x_1143_;
v_isShared_1275_ = v_isSharedCheck_1292_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_bvarIdx_1272_);
lean_dec(v_x_1143_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1292_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___y_1277_; lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1288_ = lean_unsigned_to_nat(1024u);
v___x_1289_ = lean_nat_dec_le(v___x_1288_, v_prec_1144_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1290_; 
v___x_1290_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_1277_ = v___x_1290_;
goto v___jp_1276_;
}
else
{
lean_object* v___x_1291_; 
v___x_1291_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_1277_ = v___x_1291_;
goto v___jp_1276_;
}
v___jp_1276_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1281_; 
v___x_1278_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__17));
v___x_1279_ = l_Nat_reprFast(v_bvarIdx_1272_);
if (v_isShared_1275_ == 0)
{
lean_ctor_set_tag(v___x_1274_, 3);
lean_ctor_set(v___x_1274_, 0, v___x_1279_);
v___x_1281_ = v___x_1274_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1279_);
v___x_1281_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; uint8_t v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1282_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1278_);
lean_ctor_set(v___x_1282_, 1, v___x_1281_);
lean_inc(v___y_1277_);
v___x_1283_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___y_1277_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
v___x_1284_ = 0;
v___x_1285_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1285_, 0, v___x_1283_);
lean_ctor_set_uint8(v___x_1285_, sizeof(void*)*1, v___x_1284_);
v___x_1286_ = l_Repr_addAppParen(v___x_1285_, v_prec_1144_);
return v___x_1286_;
}
}
}
}
case 6:
{
lean_object* v_bvarIdx_1293_; uint8_t v_strict_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1318_; 
v_bvarIdx_1293_ = lean_ctor_get(v_x_1143_, 0);
v_strict_1294_ = lean_ctor_get_uint8(v_x_1143_, sizeof(void*)*1);
v_isSharedCheck_1318_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1296_ = v_x_1143_;
v_isShared_1297_ = v_isSharedCheck_1318_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_bvarIdx_1293_);
lean_dec(v_x_1143_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1318_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___y_1299_; lean_object* v___x_1314_; uint8_t v___x_1315_; 
v___x_1314_ = lean_unsigned_to_nat(1024u);
v___x_1315_ = lean_nat_dec_le(v___x_1314_, v_prec_1144_);
if (v___x_1315_ == 0)
{
lean_object* v___x_1316_; 
v___x_1316_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_1299_ = v___x_1316_;
goto v___jp_1298_;
}
else
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_1299_ = v___x_1317_;
goto v___jp_1298_;
}
v___jp_1298_:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; uint8_t v___x_1309_; lean_object* v___x_1311_; 
v___x_1300_ = lean_box(1);
v___x_1301_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__20));
v___x_1302_ = l_Nat_reprFast(v_bvarIdx_1293_);
v___x_1303_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
v___x_1304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1301_);
lean_ctor_set(v___x_1304_, 1, v___x_1303_);
v___x_1305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
lean_ctor_set(v___x_1305_, 1, v___x_1300_);
v___x_1306_ = l_Bool_repr___redArg(v_strict_1294_);
v___x_1307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1305_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
lean_inc(v___y_1299_);
v___x_1308_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___y_1299_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = 0;
if (v_isShared_1297_ == 0)
{
lean_ctor_set(v___x_1296_, 0, v___x_1308_);
v___x_1311_ = v___x_1296_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1308_);
v___x_1311_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
lean_object* v___x_1312_; 
lean_ctor_set_uint8(v___x_1311_, sizeof(void*)*1, v___x_1309_);
v___x_1312_ = l_Repr_addAppParen(v___x_1311_, v_prec_1144_);
return v___x_1312_;
}
}
}
}
case 7:
{
lean_object* v_n_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1339_; 
v_n_1319_ = lean_ctor_get(v_x_1143_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1321_ = v_x_1143_;
v_isShared_1322_ = v_isSharedCheck_1339_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_n_1319_);
lean_dec(v_x_1143_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1339_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___y_1324_; lean_object* v___x_1335_; uint8_t v___x_1336_; 
v___x_1335_ = lean_unsigned_to_nat(1024u);
v___x_1336_ = lean_nat_dec_le(v___x_1335_, v_prec_1144_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_1324_ = v___x_1337_;
goto v___jp_1323_;
}
else
{
lean_object* v___x_1338_; 
v___x_1338_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_1324_ = v___x_1338_;
goto v___jp_1323_;
}
v___jp_1323_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1328_; 
v___x_1325_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__23));
v___x_1326_ = l_Nat_reprFast(v_n_1319_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set_tag(v___x_1321_, 3);
lean_ctor_set(v___x_1321_, 0, v___x_1326_);
v___x_1328_ = v___x_1321_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1326_);
v___x_1328_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1329_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1325_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
lean_inc(v___y_1324_);
v___x_1330_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___y_1324_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = 0;
v___x_1332_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set_uint8(v___x_1332_, sizeof(void*)*1, v___x_1331_);
v___x_1333_ = l_Repr_addAppParen(v___x_1332_, v_prec_1144_);
return v___x_1333_;
}
}
}
}
case 8:
{
lean_object* v_e_1340_; lean_object* v___y_1342_; lean_object* v___x_1351_; uint8_t v___x_1352_; 
v_e_1340_ = lean_ctor_get(v_x_1143_, 0);
lean_inc_ref(v_e_1340_);
lean_dec_ref_known(v_x_1143_, 1);
v___x_1351_ = lean_unsigned_to_nat(1024u);
v___x_1352_ = lean_nat_dec_le(v___x_1351_, v_prec_1144_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; 
v___x_1353_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_1342_ = v___x_1353_;
goto v___jp_1341_;
}
else
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_1342_ = v___x_1354_;
goto v___jp_1341_;
}
v___jp_1341_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1343_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__26));
v___x_1344_ = lean_unsigned_to_nat(1024u);
v___x_1345_ = l_Lean_instReprExpr_repr(v_e_1340_, v___x_1344_);
v___x_1346_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1343_);
lean_ctor_set(v___x_1346_, 1, v___x_1345_);
lean_inc(v___y_1342_);
v___x_1347_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___y_1342_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
v___x_1348_ = 0;
v___x_1349_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set_uint8(v___x_1349_, sizeof(void*)*1, v___x_1348_);
v___x_1350_ = l_Repr_addAppParen(v___x_1349_, v_prec_1144_);
return v___x_1350_;
}
}
case 9:
{
lean_object* v_e_1355_; lean_object* v___y_1357_; lean_object* v___x_1366_; uint8_t v___x_1367_; 
v_e_1355_ = lean_ctor_get(v_x_1143_, 0);
lean_inc_ref(v_e_1355_);
lean_dec_ref_known(v_x_1143_, 1);
v___x_1366_ = lean_unsigned_to_nat(1024u);
v___x_1367_ = lean_nat_dec_le(v___x_1366_, v_prec_1144_);
if (v___x_1367_ == 0)
{
lean_object* v___x_1368_; 
v___x_1368_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_1357_ = v___x_1368_;
goto v___jp_1356_;
}
else
{
lean_object* v___x_1369_; 
v___x_1369_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_1357_ = v___x_1369_;
goto v___jp_1356_;
}
v___jp_1356_:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v___x_1358_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__29));
v___x_1359_ = lean_unsigned_to_nat(1024u);
v___x_1360_ = l_Lean_instReprExpr_repr(v_e_1355_, v___x_1359_);
v___x_1361_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1358_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
lean_inc(v___y_1357_);
v___x_1362_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___y_1357_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
v___x_1363_ = 0;
v___x_1364_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1364_, 0, v___x_1362_);
lean_ctor_set_uint8(v___x_1364_, sizeof(void*)*1, v___x_1363_);
v___x_1365_ = l_Repr_addAppParen(v___x_1364_, v_prec_1144_);
return v___x_1365_;
}
}
default: 
{
lean_object* v_bvarIdx_1370_; uint8_t v_strict_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1395_; 
v_bvarIdx_1370_ = lean_ctor_get(v_x_1143_, 0);
v_strict_1371_ = lean_ctor_get_uint8(v_x_1143_, sizeof(void*)*1);
v_isSharedCheck_1395_ = !lean_is_exclusive(v_x_1143_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1373_ = v_x_1143_;
v_isShared_1374_ = v_isSharedCheck_1395_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_bvarIdx_1370_);
lean_dec(v_x_1143_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1395_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___y_1376_; lean_object* v___x_1391_; uint8_t v___x_1392_; 
v___x_1391_ = lean_unsigned_to_nat(1024u);
v___x_1392_ = lean_nat_dec_le(v___x_1391_, v_prec_1144_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; 
v___x_1393_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__13);
v___y_1376_ = v___x_1393_;
goto v___jp_1375_;
}
else
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_obj_once(&l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14, &l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14_once, _init_l_Lean_Meta_Grind_instReprEMatchTheoremKind_repr___closed__14);
v___y_1376_ = v___x_1394_;
goto v___jp_1375_;
}
v___jp_1375_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; uint8_t v___x_1386_; lean_object* v___x_1388_; 
v___x_1377_ = lean_box(1);
v___x_1378_ = ((lean_object*)(l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___closed__32));
v___x_1379_ = l_Nat_reprFast(v_bvarIdx_1370_);
v___x_1380_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
v___x_1381_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1378_);
lean_ctor_set(v___x_1381_, 1, v___x_1380_);
v___x_1382_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1381_);
lean_ctor_set(v___x_1382_, 1, v___x_1377_);
v___x_1383_ = l_Bool_repr___redArg(v_strict_1371_);
v___x_1384_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1382_);
lean_ctor_set(v___x_1384_, 1, v___x_1383_);
lean_inc(v___y_1376_);
v___x_1385_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1385_, 0, v___y_1376_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
v___x_1386_ = 0;
if (v_isShared_1374_ == 0)
{
lean_ctor_set_tag(v___x_1373_, 6);
lean_ctor_set(v___x_1373_, 0, v___x_1385_);
v___x_1388_ = v___x_1373_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1385_);
v___x_1388_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
lean_object* v___x_1389_; 
lean_ctor_set_uint8(v___x_1388_, sizeof(void*)*1, v___x_1386_);
v___x_1389_ = l_Repr_addAppParen(v___x_1388_, v_prec_1144_);
return v___x_1389_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr___boxed(lean_object* v_x_1396_, lean_object* v_prec_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lean_Meta_Grind_instReprEMatchTheoremConstraint_repr(v_x_1396_, v_prec_1397_);
lean_dec(v_prec_1397_);
return v_res_1398_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_instBEqEMatchTheoremConstraint_beq(lean_object* v_x_1401_, lean_object* v_x_1402_){
_start:
{
lean_object* v_lhs_1404_; lean_object* v_rhs_1405_; lean_object* v_lhs_x27_1406_; lean_object* v_rhs_x27_1407_; lean_object* v_lhs_1411_; lean_object* v_n_1412_; lean_object* v_lhs_x27_1413_; lean_object* v_n_x27_1414_; lean_object* v_bvarIdx_1418_; uint8_t v_strict_1419_; lean_object* v_bvarIdx_x27_1420_; uint8_t v_strict_x27_1421_; lean_object* v___x_1423_; lean_object* v___x_1424_; uint8_t v_decide_1425_; 
v___x_1423_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorIdx(v_x_1401_);
v___x_1424_ = l_Lean_Meta_Grind_EMatchTheoremConstraint_ctorIdx(v_x_1402_);
v_decide_1425_ = lean_nat_dec_eq(v___x_1423_, v___x_1424_);
lean_dec(v___x_1424_);
lean_dec(v___x_1423_);
if (v_decide_1425_ == 0)
{
return v_decide_1425_;
}
else
{
switch(lean_obj_tag(v_x_1401_))
{
case 0:
{
lean_object* v_lhs_1426_; lean_object* v_rhs_1427_; lean_object* v_lhs_1428_; lean_object* v_rhs_1429_; 
v_lhs_1426_ = lean_ctor_get(v_x_1401_, 0);
v_rhs_1427_ = lean_ctor_get(v_x_1401_, 1);
v_lhs_1428_ = lean_ctor_get(v_x_1402_, 0);
v_rhs_1429_ = lean_ctor_get(v_x_1402_, 1);
v_lhs_1404_ = v_lhs_1426_;
v_rhs_1405_ = v_rhs_1427_;
v_lhs_x27_1406_ = v_lhs_1428_;
v_rhs_x27_1407_ = v_rhs_1429_;
goto v___jp_1403_;
}
case 1:
{
lean_object* v_lhs_1430_; lean_object* v_rhs_1431_; lean_object* v_lhs_1432_; lean_object* v_rhs_1433_; 
v_lhs_1430_ = lean_ctor_get(v_x_1401_, 0);
v_rhs_1431_ = lean_ctor_get(v_x_1401_, 1);
v_lhs_1432_ = lean_ctor_get(v_x_1402_, 0);
v_rhs_1433_ = lean_ctor_get(v_x_1402_, 1);
v_lhs_1404_ = v_lhs_1430_;
v_rhs_1405_ = v_rhs_1431_;
v_lhs_x27_1406_ = v_lhs_1432_;
v_rhs_x27_1407_ = v_rhs_1433_;
goto v___jp_1403_;
}
case 2:
{
lean_object* v_lhs_1434_; lean_object* v_n_1435_; lean_object* v_lhs_1436_; lean_object* v_n_1437_; 
v_lhs_1434_ = lean_ctor_get(v_x_1401_, 0);
v_n_1435_ = lean_ctor_get(v_x_1401_, 1);
v_lhs_1436_ = lean_ctor_get(v_x_1402_, 0);
v_n_1437_ = lean_ctor_get(v_x_1402_, 1);
v_lhs_1411_ = v_lhs_1434_;
v_n_1412_ = v_n_1435_;
v_lhs_x27_1413_ = v_lhs_1436_;
v_n_x27_1414_ = v_n_1437_;
goto v___jp_1410_;
}
case 3:
{
lean_object* v_lhs_1438_; lean_object* v_n_1439_; lean_object* v_lhs_1440_; lean_object* v_n_1441_; 
v_lhs_1438_ = lean_ctor_get(v_x_1401_, 0);
v_n_1439_ = lean_ctor_get(v_x_1401_, 1);
v_lhs_1440_ = lean_ctor_get(v_x_1402_, 0);
v_n_1441_ = lean_ctor_get(v_x_1402_, 1);
v_lhs_1411_ = v_lhs_1438_;
v_n_1412_ = v_n_1439_;
v_lhs_x27_1413_ = v_lhs_1440_;
v_n_x27_1414_ = v_n_1441_;
goto v___jp_1410_;
}
case 6:
{
lean_object* v_bvarIdx_1442_; uint8_t v_strict_1443_; lean_object* v_bvarIdx_1444_; uint8_t v_strict_1445_; 
v_bvarIdx_1442_ = lean_ctor_get(v_x_1401_, 0);
v_strict_1443_ = lean_ctor_get_uint8(v_x_1401_, sizeof(void*)*1);
v_bvarIdx_1444_ = lean_ctor_get(v_x_1402_, 0);
v_strict_1445_ = lean_ctor_get_uint8(v_x_1402_, sizeof(void*)*1);
v_bvarIdx_1418_ = v_bvarIdx_1442_;
v_strict_1419_ = v_strict_1443_;
v_bvarIdx_x27_1420_ = v_bvarIdx_1444_;
v_strict_x27_1421_ = v_strict_1445_;
goto v___jp_1417_;
}
case 8:
{
lean_object* v_e_1446_; lean_object* v_e_1447_; uint8_t v___x_1448_; 
v_e_1446_ = lean_ctor_get(v_x_1401_, 0);
v_e_1447_ = lean_ctor_get(v_x_1402_, 0);
v___x_1448_ = lean_expr_eqv(v_e_1446_, v_e_1447_);
return v___x_1448_;
}
case 9:
{
lean_object* v_e_1449_; lean_object* v_e_1450_; uint8_t v___x_1451_; 
v_e_1449_ = lean_ctor_get(v_x_1401_, 0);
v_e_1450_ = lean_ctor_get(v_x_1402_, 0);
v___x_1451_ = lean_expr_eqv(v_e_1449_, v_e_1450_);
return v___x_1451_;
}
case 10:
{
lean_object* v_bvarIdx_1452_; uint8_t v_strict_1453_; lean_object* v_bvarIdx_1454_; uint8_t v_strict_1455_; 
v_bvarIdx_1452_ = lean_ctor_get(v_x_1401_, 0);
v_strict_1453_ = lean_ctor_get_uint8(v_x_1401_, sizeof(void*)*1);
v_bvarIdx_1454_ = lean_ctor_get(v_x_1402_, 0);
v_strict_1455_ = lean_ctor_get_uint8(v_x_1402_, sizeof(void*)*1);
v_bvarIdx_1418_ = v_bvarIdx_1452_;
v_strict_1419_ = v_strict_1453_;
v_bvarIdx_x27_1420_ = v_bvarIdx_1454_;
v_strict_x27_1421_ = v_strict_1455_;
goto v___jp_1417_;
}
default: 
{
lean_object* v_n_1456_; lean_object* v_n_1457_; uint8_t v___x_1458_; 
v_n_1456_ = lean_ctor_get(v_x_1401_, 0);
v_n_1457_ = lean_ctor_get(v_x_1402_, 0);
v___x_1458_ = lean_nat_dec_eq(v_n_1456_, v_n_1457_);
return v___x_1458_;
}
}
}
v___jp_1403_:
{
uint8_t v___x_1408_; 
v___x_1408_ = lean_nat_dec_eq(v_lhs_1404_, v_lhs_x27_1406_);
if (v___x_1408_ == 0)
{
return v___x_1408_;
}
else
{
uint8_t v___x_1409_; 
v___x_1409_ = l_Lean_Meta_Grind_instBEqCnstrRHS_beq(v_rhs_1405_, v_rhs_x27_1407_);
return v___x_1409_;
}
}
v___jp_1410_:
{
uint8_t v___x_1415_; 
v___x_1415_ = lean_nat_dec_eq(v_lhs_1411_, v_lhs_x27_1413_);
if (v___x_1415_ == 0)
{
return v___x_1415_;
}
else
{
uint8_t v___x_1416_; 
v___x_1416_ = lean_nat_dec_eq(v_n_1412_, v_n_x27_1414_);
return v___x_1416_;
}
}
v___jp_1417_:
{
uint8_t v___x_1422_; 
v___x_1422_ = lean_nat_dec_eq(v_bvarIdx_1418_, v_bvarIdx_x27_1420_);
if (v___x_1422_ == 0)
{
return v___x_1422_;
}
else
{
if (v_strict_x27_1421_ == 0)
{
if (v_strict_1419_ == 0)
{
return v___x_1422_;
}
else
{
return v_strict_x27_1421_;
}
}
else
{
return v_strict_1419_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instBEqEMatchTheoremConstraint_beq___boxed(lean_object* v_x_1459_, lean_object* v_x_1460_){
_start:
{
uint8_t v_res_1461_; lean_object* v_r_1462_; 
v_res_1461_ = l_Lean_Meta_Grind_instBEqEMatchTheoremConstraint_beq(v_x_1459_, v_x_1460_);
lean_dec_ref(v_x_1460_);
lean_dec_ref(v_x_1459_);
v_r_1462_ = lean_box(v_res_1461_);
return v_r_1462_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default___closed__0(void){
_start:
{
uint8_t v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
v___x_1465_ = 0;
v___x_1466_ = ((lean_object*)(l_Lean_Meta_Grind_instInhabitedEMatchTheoremKind_default));
v___x_1467_ = l_Lean_Meta_Grind_instInhabitedOrigin_default;
v___x_1468_ = lean_box(0);
v___x_1469_ = lean_unsigned_to_nat(0u);
v___x_1470_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3, &l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3_once, _init_l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3);
v___x_1471_ = ((lean_object*)(l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__0));
v___x_1472_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v___x_1472_, 0, v___x_1471_);
lean_ctor_set(v___x_1472_, 1, v___x_1470_);
lean_ctor_set(v___x_1472_, 2, v___x_1469_);
lean_ctor_set(v___x_1472_, 3, v___x_1468_);
lean_ctor_set(v___x_1472_, 4, v___x_1468_);
lean_ctor_set(v___x_1472_, 5, v___x_1467_);
lean_ctor_set(v___x_1472_, 6, v___x_1466_);
lean_ctor_set(v___x_1472_, 7, v___x_1468_);
lean_ctor_set_uint8(v___x_1472_, sizeof(void*)*8, v___x_1465_);
return v___x_1472_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default(void){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default___closed__0, &l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default___closed__0);
return v___x_1473_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedEMatchTheorem(void){
_start:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default;
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__0(lean_object* v_thm_1475_){
_start:
{
lean_object* v_symbols_1476_; 
v_symbols_1476_ = lean_ctor_get(v_thm_1475_, 4);
lean_inc(v_symbols_1476_);
return v_symbols_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__0___boxed(lean_object* v_thm_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__0(v_thm_1477_);
lean_dec_ref(v_thm_1477_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__1(lean_object* v_thm_1479_, lean_object* v_symbols_1480_){
_start:
{
lean_object* v_levelParams_1481_; lean_object* v_proof_1482_; lean_object* v_numParams_1483_; lean_object* v_patterns_1484_; lean_object* v_origin_1485_; lean_object* v_kind_1486_; uint8_t v_minIndexable_1487_; lean_object* v_cnstrs_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1495_; 
v_levelParams_1481_ = lean_ctor_get(v_thm_1479_, 0);
v_proof_1482_ = lean_ctor_get(v_thm_1479_, 1);
v_numParams_1483_ = lean_ctor_get(v_thm_1479_, 2);
v_patterns_1484_ = lean_ctor_get(v_thm_1479_, 3);
v_origin_1485_ = lean_ctor_get(v_thm_1479_, 5);
v_kind_1486_ = lean_ctor_get(v_thm_1479_, 6);
v_minIndexable_1487_ = lean_ctor_get_uint8(v_thm_1479_, sizeof(void*)*8);
v_cnstrs_1488_ = lean_ctor_get(v_thm_1479_, 7);
v_isSharedCheck_1495_ = !lean_is_exclusive(v_thm_1479_);
if (v_isSharedCheck_1495_ == 0)
{
lean_object* v_unused_1496_; 
v_unused_1496_ = lean_ctor_get(v_thm_1479_, 4);
lean_dec(v_unused_1496_);
v___x_1490_ = v_thm_1479_;
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_cnstrs_1488_);
lean_inc(v_kind_1486_);
lean_inc(v_origin_1485_);
lean_inc(v_patterns_1484_);
lean_inc(v_numParams_1483_);
lean_inc(v_proof_1482_);
lean_inc(v_levelParams_1481_);
lean_dec(v_thm_1479_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 4, v_symbols_1480_);
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_levelParams_1481_);
lean_ctor_set(v_reuseFailAlloc_1494_, 1, v_proof_1482_);
lean_ctor_set(v_reuseFailAlloc_1494_, 2, v_numParams_1483_);
lean_ctor_set(v_reuseFailAlloc_1494_, 3, v_patterns_1484_);
lean_ctor_set(v_reuseFailAlloc_1494_, 4, v_symbols_1480_);
lean_ctor_set(v_reuseFailAlloc_1494_, 5, v_origin_1485_);
lean_ctor_set(v_reuseFailAlloc_1494_, 6, v_kind_1486_);
lean_ctor_set(v_reuseFailAlloc_1494_, 7, v_cnstrs_1488_);
lean_ctor_set_uint8(v_reuseFailAlloc_1494_, sizeof(void*)*8, v_minIndexable_1487_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__2(lean_object* v_thm_1497_){
_start:
{
lean_object* v_origin_1498_; 
v_origin_1498_ = lean_ctor_get(v_thm_1497_, 5);
lean_inc_ref(v_origin_1498_);
return v_origin_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__2___boxed(lean_object* v_thm_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__2(v_thm_1499_);
lean_dec_ref(v_thm_1499_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__3(lean_object* v_thm_1501_){
_start:
{
lean_object* v_proof_1502_; 
v_proof_1502_ = lean_ctor_get(v_thm_1501_, 1);
lean_inc_ref(v_proof_1502_);
return v_proof_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__3___boxed(lean_object* v_thm_1503_){
_start:
{
lean_object* v_res_1504_; 
v_res_1504_ = l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__3(v_thm_1503_);
lean_dec_ref(v_thm_1503_);
return v_res_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__4(lean_object* v_thm_1505_){
_start:
{
lean_object* v_levelParams_1506_; 
v_levelParams_1506_ = lean_ctor_get(v_thm_1505_, 0);
lean_inc_ref(v_levelParams_1506_);
return v_levelParams_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__4___boxed(lean_object* v_thm_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l_Lean_Meta_Grind_instTheoremLikeEMatchTheorem___lam__4(v_thm_1507_);
lean_dec_ref(v_thm_1507_);
return v_res_1508_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default___closed__0(void){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1521_ = l_Lean_Meta_Grind_instInhabitedOrigin_default;
v___x_1522_ = lean_box(0);
v___x_1523_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3, &l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3_once, _init_l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__3);
v___x_1524_ = ((lean_object*)(l_Lean_Meta_Grind_instInhabitedCnstrRHS_default___closed__0));
v___x_1525_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
lean_ctor_set(v___x_1525_, 1, v___x_1523_);
lean_ctor_set(v___x_1525_, 2, v___x_1522_);
lean_ctor_set(v___x_1525_, 3, v___x_1521_);
return v___x_1525_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default(void){
_start:
{
lean_object* v___x_1526_; 
v___x_1526_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default___closed__0, &l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default___closed__0);
return v___x_1526_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedInjectiveTheorem(void){
_start:
{
lean_object* v___x_1527_; 
v___x_1527_ = l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default;
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__0(lean_object* v_thm_1528_){
_start:
{
lean_object* v_symbols_1529_; 
v_symbols_1529_ = lean_ctor_get(v_thm_1528_, 2);
lean_inc(v_symbols_1529_);
return v_symbols_1529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__0___boxed(lean_object* v_thm_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__0(v_thm_1530_);
lean_dec_ref(v_thm_1530_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__1(lean_object* v_thm_1532_, lean_object* v_symbols_1533_){
_start:
{
lean_object* v_levelParams_1534_; lean_object* v_proof_1535_; lean_object* v_origin_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1543_; 
v_levelParams_1534_ = lean_ctor_get(v_thm_1532_, 0);
v_proof_1535_ = lean_ctor_get(v_thm_1532_, 1);
v_origin_1536_ = lean_ctor_get(v_thm_1532_, 3);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_thm_1532_);
if (v_isSharedCheck_1543_ == 0)
{
lean_object* v_unused_1544_; 
v_unused_1544_ = lean_ctor_get(v_thm_1532_, 2);
lean_dec(v_unused_1544_);
v___x_1538_ = v_thm_1532_;
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_origin_1536_);
lean_inc(v_proof_1535_);
lean_inc(v_levelParams_1534_);
lean_dec(v_thm_1532_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1543_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1541_; 
if (v_isShared_1539_ == 0)
{
lean_ctor_set(v___x_1538_, 2, v_symbols_1533_);
v___x_1541_ = v___x_1538_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_levelParams_1534_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v_proof_1535_);
lean_ctor_set(v_reuseFailAlloc_1542_, 2, v_symbols_1533_);
lean_ctor_set(v_reuseFailAlloc_1542_, 3, v_origin_1536_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__2(lean_object* v_thm_1545_){
_start:
{
lean_object* v_origin_1546_; 
v_origin_1546_ = lean_ctor_get(v_thm_1545_, 3);
lean_inc_ref(v_origin_1546_);
return v_origin_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__2___boxed(lean_object* v_thm_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__2(v_thm_1547_);
lean_dec_ref(v_thm_1547_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__3(lean_object* v_thm_1549_){
_start:
{
lean_object* v_proof_1550_; 
v_proof_1550_ = lean_ctor_get(v_thm_1549_, 1);
lean_inc_ref(v_proof_1550_);
return v_proof_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__3___boxed(lean_object* v_thm_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__3(v_thm_1551_);
lean_dec_ref(v_thm_1551_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__4(lean_object* v_thm_1553_){
_start:
{
lean_object* v_levelParams_1554_; 
v_levelParams_1554_ = lean_ctor_get(v_thm_1553_, 0);
lean_inc_ref(v_levelParams_1554_);
return v_levelParams_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__4___boxed(lean_object* v_thm_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_Lean_Meta_Grind_instTheoremLikeInjectiveTheorem___lam__4(v_thm_1555_);
lean_dec_ref(v_thm_1555_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ctorIdx(lean_object* v_x_1569_){
_start:
{
switch(lean_obj_tag(v_x_1569_))
{
case 0:
{
lean_object* v___x_1570_; 
v___x_1570_ = lean_unsigned_to_nat(0u);
return v___x_1570_;
}
case 1:
{
lean_object* v___x_1571_; 
v___x_1571_ = lean_unsigned_to_nat(1u);
return v___x_1571_;
}
case 2:
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_unsigned_to_nat(2u);
return v___x_1572_;
}
case 3:
{
lean_object* v___x_1573_; 
v___x_1573_ = lean_unsigned_to_nat(3u);
return v___x_1573_;
}
default: 
{
lean_object* v___x_1574_; 
v___x_1574_ = lean_unsigned_to_nat(4u);
return v___x_1574_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ctorIdx___boxed(lean_object* v_x_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Lean_Meta_Grind_Entry_ctorIdx(v_x_1575_);
lean_dec_ref(v_x_1575_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ctorElim___redArg(lean_object* v_t_1577_, lean_object* v_k_1578_){
_start:
{
switch(lean_obj_tag(v_t_1577_))
{
case 2:
{
lean_object* v_declName_1579_; uint8_t v_eager_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v_declName_1579_ = lean_ctor_get(v_t_1577_, 0);
lean_inc(v_declName_1579_);
v_eager_1580_ = lean_ctor_get_uint8(v_t_1577_, sizeof(void*)*1);
lean_dec_ref_known(v_t_1577_, 1);
v___x_1581_ = lean_box(v_eager_1580_);
v___x_1582_ = lean_apply_2(v_k_1578_, v_declName_1579_, v___x_1581_);
return v___x_1582_;
}
case 3:
{
lean_object* v_thm_1583_; lean_object* v___x_1584_; 
v_thm_1583_ = lean_ctor_get(v_t_1577_, 0);
lean_inc_ref(v_thm_1583_);
lean_dec_ref_known(v_t_1577_, 1);
v___x_1584_ = lean_apply_1(v_k_1578_, v_thm_1583_);
return v___x_1584_;
}
case 4:
{
lean_object* v_thm_1585_; lean_object* v___x_1586_; 
v_thm_1585_ = lean_ctor_get(v_t_1577_, 0);
lean_inc_ref(v_thm_1585_);
lean_dec_ref_known(v_t_1577_, 1);
v___x_1586_ = lean_apply_1(v_k_1578_, v_thm_1585_);
return v___x_1586_;
}
default: 
{
lean_object* v_declName_1587_; lean_object* v___x_1588_; 
v_declName_1587_ = lean_ctor_get(v_t_1577_, 0);
lean_inc(v_declName_1587_);
lean_dec_ref(v_t_1577_);
v___x_1588_ = lean_apply_1(v_k_1578_, v_declName_1587_);
return v___x_1588_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ctorElim(lean_object* v_motive_1589_, lean_object* v_ctorIdx_1590_, lean_object* v_t_1591_, lean_object* v_h_1592_, lean_object* v_k_1593_){
_start:
{
lean_object* v___x_1594_; 
v___x_1594_ = l_Lean_Meta_Grind_Entry_ctorElim___redArg(v_t_1591_, v_k_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ctorElim___boxed(lean_object* v_motive_1595_, lean_object* v_ctorIdx_1596_, lean_object* v_t_1597_, lean_object* v_h_1598_, lean_object* v_k_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l_Lean_Meta_Grind_Entry_ctorElim(v_motive_1595_, v_ctorIdx_1596_, v_t_1597_, v_h_1598_, v_k_1599_);
lean_dec(v_ctorIdx_1596_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ext_elim___redArg(lean_object* v_t_1601_, lean_object* v_ext_1602_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l_Lean_Meta_Grind_Entry_ctorElim___redArg(v_t_1601_, v_ext_1602_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ext_elim(lean_object* v_motive_1604_, lean_object* v_t_1605_, lean_object* v_h_1606_, lean_object* v_ext_1607_){
_start:
{
lean_object* v___x_1608_; 
v___x_1608_ = l_Lean_Meta_Grind_Entry_ctorElim___redArg(v_t_1605_, v_ext_1607_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_funCC_elim___redArg(lean_object* v_t_1609_, lean_object* v_funCC_1610_){
_start:
{
lean_object* v___x_1611_; 
v___x_1611_ = l_Lean_Meta_Grind_Entry_ctorElim___redArg(v_t_1609_, v_funCC_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_funCC_elim(lean_object* v_motive_1612_, lean_object* v_t_1613_, lean_object* v_h_1614_, lean_object* v_funCC_1615_){
_start:
{
lean_object* v___x_1616_; 
v___x_1616_ = l_Lean_Meta_Grind_Entry_ctorElim___redArg(v_t_1613_, v_funCC_1615_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_cases_elim___redArg(lean_object* v_t_1617_, lean_object* v_cases_1618_){
_start:
{
lean_object* v___x_1619_; 
v___x_1619_ = l_Lean_Meta_Grind_Entry_ctorElim___redArg(v_t_1617_, v_cases_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_cases_elim(lean_object* v_motive_1620_, lean_object* v_t_1621_, lean_object* v_h_1622_, lean_object* v_cases_1623_){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = l_Lean_Meta_Grind_Entry_ctorElim___redArg(v_t_1621_, v_cases_1623_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ematch_elim___redArg(lean_object* v_t_1625_, lean_object* v_ematch_1626_){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_Meta_Grind_Entry_ctorElim___redArg(v_t_1625_, v_ematch_1626_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_ematch_elim(lean_object* v_motive_1628_, lean_object* v_t_1629_, lean_object* v_h_1630_, lean_object* v_ematch_1631_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Lean_Meta_Grind_Entry_ctorElim___redArg(v_t_1629_, v_ematch_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_inj_elim___redArg(lean_object* v_t_1633_, lean_object* v_inj_1634_){
_start:
{
lean_object* v___x_1635_; 
v___x_1635_ = l_Lean_Meta_Grind_Entry_ctorElim___redArg(v_t_1633_, v_inj_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Entry_inj_elim(lean_object* v_motive_1636_, lean_object* v_t_1637_, lean_object* v_h_1638_, lean_object* v_inj_1639_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Lean_Meta_Grind_Entry_ctorElim___redArg(v_t_1637_, v_inj_1639_);
return v___x_1640_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedEntry_default___closed__0(void){
_start:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1641_ = lean_box(0);
v___x_1642_ = l_unsafeCast___redArg(v___x_1641_);
return v___x_1642_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedEntry_default___closed__1(void){
_start:
{
lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1643_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedEntry_default___closed__0, &l_Lean_Meta_Grind_instInhabitedEntry_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedEntry_default___closed__0);
v___x_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1643_);
return v___x_1644_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedEntry_default(void){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedEntry_default___closed__1, &l_Lean_Meta_Grind_instInhabitedEntry_default___closed__1_once, _init_l_Lean_Meta_Grind_instInhabitedEntry_default___closed__1);
return v___x_1645_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedEntry(void){
_start:
{
lean_object* v___x_1646_; 
v___x_1646_ = l_Lean_Meta_Grind_instInhabitedEntry_default;
return v___x_1646_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1647_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0, &l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0);
v___x_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1647_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg(){
_start:
{
lean_object* v___x_1650_; 
v___x_1650_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg___closed__0);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg___boxed(lean_object* v___dummy_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg();
return v_res_1652_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___redArg();
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0(lean_object* v_00_u03b2_1654_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___closed__0);
return v___x_1655_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__0(void){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l_Lean_Meta_Grind_Theorems_mkEmpty___redArg();
return v___x_1656_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__1(void){
_start:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1657_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__0, &l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__0);
v___x_1658_ = l_Lean_NameSet_empty;
v___x_1659_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Grind_instInhabitedExtensionState_default_spec__0___closed__0);
v___x_1660_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__1, &l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__1_once, _init_l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__1);
v___x_1661_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1660_);
lean_ctor_set(v___x_1661_, 1, v___x_1659_);
lean_ctor_set(v___x_1661_, 2, v___x_1658_);
lean_ctor_set(v___x_1661_, 3, v___x_1657_);
lean_ctor_set(v___x_1661_, 4, v___x_1657_);
return v___x_1661_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedExtensionState_default(void){
_start:
{
lean_object* v___x_1662_; 
v___x_1662_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__1, &l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__1_once, _init_l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__1);
return v___x_1662_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instInhabitedExtensionState(void){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5_spec__9___redArg(lean_object* v_x_1664_, lean_object* v_x_1665_, lean_object* v_x_1666_, lean_object* v_x_1667_){
_start:
{
lean_object* v_ks_1668_; lean_object* v_vs_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1695_; 
v_ks_1668_ = lean_ctor_get(v_x_1664_, 0);
v_vs_1669_ = lean_ctor_get(v_x_1664_, 1);
v_isSharedCheck_1695_ = !lean_is_exclusive(v_x_1664_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1671_ = v_x_1664_;
v_isShared_1672_ = v_isSharedCheck_1695_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_vs_1669_);
lean_inc(v_ks_1668_);
lean_dec(v_x_1664_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1695_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1673_ = lean_array_get_size(v_ks_1668_);
v___x_1674_ = lean_nat_dec_lt(v_x_1665_, v___x_1673_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1678_; 
lean_dec(v_x_1665_);
v___x_1675_ = lean_array_push(v_ks_1668_, v_x_1666_);
v___x_1676_ = lean_array_push(v_vs_1669_, v_x_1667_);
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 1, v___x_1676_);
lean_ctor_set(v___x_1671_, 0, v___x_1675_);
v___x_1678_ = v___x_1671_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v___x_1675_);
lean_ctor_set(v_reuseFailAlloc_1679_, 1, v___x_1676_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
else
{
lean_object* v_k_x27_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; uint8_t v___x_1683_; 
v_k_x27_1680_ = lean_array_fget_borrowed(v_ks_1668_, v_x_1665_);
v___x_1681_ = l_Lean_Meta_Grind_Origin_key(v_x_1666_);
v___x_1682_ = l_Lean_Meta_Grind_Origin_key(v_k_x27_1680_);
v___x_1683_ = lean_name_eq(v___x_1681_, v___x_1682_);
lean_dec(v___x_1682_);
lean_dec(v___x_1681_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1685_; 
if (v_isShared_1672_ == 0)
{
v___x_1685_ = v___x_1671_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_ks_1668_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v_vs_1669_);
v___x_1685_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = lean_unsigned_to_nat(1u);
v___x_1687_ = lean_nat_add(v_x_1665_, v___x_1686_);
lean_dec(v_x_1665_);
v_x_1664_ = v___x_1685_;
v_x_1665_ = v___x_1687_;
goto _start;
}
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1693_; 
v___x_1690_ = lean_array_fset(v_ks_1668_, v_x_1665_, v_x_1666_);
v___x_1691_ = lean_array_fset(v_vs_1669_, v_x_1665_, v_x_1667_);
lean_dec(v_x_1665_);
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 1, v___x_1691_);
lean_ctor_set(v___x_1671_, 0, v___x_1690_);
v___x_1693_ = v___x_1671_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v___x_1690_);
lean_ctor_set(v_reuseFailAlloc_1694_, 1, v___x_1691_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_n_1696_, lean_object* v_k_1697_, lean_object* v_v_1698_){
_start:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1699_ = lean_unsigned_to_nat(0u);
v___x_1700_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5_spec__9___redArg(v_n_1696_, v___x_1699_, v_k_1697_, v_v_1698_);
return v___x_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2___redArg(lean_object* v_x_1701_, size_t v_x_1702_, size_t v_x_1703_, lean_object* v_x_1704_, lean_object* v_x_1705_){
_start:
{
if (lean_obj_tag(v_x_1701_) == 0)
{
lean_object* v_es_1706_; size_t v___x_1707_; size_t v___x_1708_; lean_object* v_j_1709_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
v_es_1706_ = lean_ctor_get(v_x_1701_, 0);
v___x_1707_ = ((size_t)31ULL);
v___x_1708_ = lean_usize_land(v_x_1702_, v___x_1707_);
v_j_1709_ = lean_usize_to_nat(v___x_1708_);
v___x_1710_ = lean_array_get_size(v_es_1706_);
v___x_1711_ = lean_nat_dec_lt(v_j_1709_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_dec(v_j_1709_);
lean_dec(v_x_1705_);
lean_dec_ref(v_x_1704_);
return v_x_1701_;
}
else
{
lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1752_; 
lean_inc_ref(v_es_1706_);
v_isSharedCheck_1752_ = !lean_is_exclusive(v_x_1701_);
if (v_isSharedCheck_1752_ == 0)
{
lean_object* v_unused_1753_; 
v_unused_1753_ = lean_ctor_get(v_x_1701_, 0);
lean_dec(v_unused_1753_);
v___x_1713_ = v_x_1701_;
v_isShared_1714_ = v_isSharedCheck_1752_;
goto v_resetjp_1712_;
}
else
{
lean_dec(v_x_1701_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1752_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v_v_1715_; lean_object* v___x_1716_; lean_object* v_xs_x27_1717_; lean_object* v___y_1719_; 
v_v_1715_ = lean_array_fget(v_es_1706_, v_j_1709_);
v___x_1716_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__0);
v_xs_x27_1717_ = lean_array_fset(v_es_1706_, v_j_1709_, v___x_1716_);
switch(lean_obj_tag(v_v_1715_))
{
case 0:
{
lean_object* v_key_1724_; lean_object* v_val_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1737_; 
v_key_1724_ = lean_ctor_get(v_v_1715_, 0);
v_val_1725_ = lean_ctor_get(v_v_1715_, 1);
v_isSharedCheck_1737_ = !lean_is_exclusive(v_v_1715_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1727_ = v_v_1715_;
v_isShared_1728_ = v_isSharedCheck_1737_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_val_1725_);
lean_inc(v_key_1724_);
lean_dec(v_v_1715_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1737_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; uint8_t v___x_1731_; 
v___x_1729_ = l_Lean_Meta_Grind_Origin_key(v_x_1704_);
v___x_1730_ = l_Lean_Meta_Grind_Origin_key(v_key_1724_);
v___x_1731_ = lean_name_eq(v___x_1729_, v___x_1730_);
lean_dec(v___x_1730_);
lean_dec(v___x_1729_);
if (v___x_1731_ == 0)
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
lean_del_object(v___x_1727_);
v___x_1732_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1724_, v_val_1725_, v_x_1704_, v_x_1705_);
v___x_1733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1732_);
v___y_1719_ = v___x_1733_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_1735_; 
lean_dec(v_val_1725_);
lean_dec(v_key_1724_);
if (v_isShared_1728_ == 0)
{
lean_ctor_set(v___x_1727_, 1, v_x_1705_);
lean_ctor_set(v___x_1727_, 0, v_x_1704_);
v___x_1735_ = v___x_1727_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_x_1704_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_x_1705_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
v___y_1719_ = v___x_1735_;
goto v___jp_1718_;
}
}
}
}
case 1:
{
lean_object* v_node_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1750_; 
v_node_1738_ = lean_ctor_get(v_v_1715_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v_v_1715_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1740_ = v_v_1715_;
v_isShared_1741_ = v_isSharedCheck_1750_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_node_1738_);
lean_dec(v_v_1715_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1750_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
size_t v___x_1742_; size_t v___x_1743_; size_t v___x_1744_; size_t v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1748_; 
v___x_1742_ = ((size_t)5ULL);
v___x_1743_ = lean_usize_shift_right(v_x_1702_, v___x_1742_);
v___x_1744_ = ((size_t)1ULL);
v___x_1745_ = lean_usize_add(v_x_1703_, v___x_1744_);
v___x_1746_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2___redArg(v_node_1738_, v___x_1743_, v___x_1745_, v_x_1704_, v_x_1705_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 0, v___x_1746_);
v___x_1748_ = v___x_1740_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v___x_1746_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
v___y_1719_ = v___x_1748_;
goto v___jp_1718_;
}
}
}
default: 
{
lean_object* v___x_1751_; 
v___x_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1751_, 0, v_x_1704_);
lean_ctor_set(v___x_1751_, 1, v_x_1705_);
v___y_1719_ = v___x_1751_;
goto v___jp_1718_;
}
}
v___jp_1718_:
{
lean_object* v___x_1720_; lean_object* v___x_1722_; 
v___x_1720_ = lean_array_fset(v_xs_x27_1717_, v_j_1709_, v___y_1719_);
lean_dec(v_j_1709_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1720_);
v___x_1722_ = v___x_1713_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1720_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
else
{
lean_object* v_ks_1754_; lean_object* v_vs_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1773_; 
v_ks_1754_ = lean_ctor_get(v_x_1701_, 0);
v_vs_1755_ = lean_ctor_get(v_x_1701_, 1);
v_isSharedCheck_1773_ = !lean_is_exclusive(v_x_1701_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1757_ = v_x_1701_;
v_isShared_1758_ = v_isSharedCheck_1773_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_vs_1755_);
lean_inc(v_ks_1754_);
lean_dec(v_x_1701_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1773_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1760_; 
if (v_isShared_1758_ == 0)
{
v___x_1760_ = v___x_1757_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_ks_1754_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v_vs_1755_);
v___x_1760_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
lean_object* v_newNode_1761_; size_t v___x_1762_; uint8_t v___x_1763_; 
v_newNode_1761_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5___redArg(v___x_1760_, v_x_1704_, v_x_1705_);
v___x_1762_ = ((size_t)7ULL);
v___x_1763_ = lean_usize_dec_le(v___x_1762_, v_x_1703_);
if (v___x_1763_ == 0)
{
lean_object* v___x_1764_; lean_object* v___x_1765_; uint8_t v___x_1766_; 
v___x_1764_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1761_);
v___x_1765_ = lean_unsigned_to_nat(4u);
v___x_1766_ = lean_nat_dec_lt(v___x_1764_, v___x_1765_);
lean_dec(v___x_1764_);
if (v___x_1766_ == 0)
{
lean_object* v_ks_1767_; lean_object* v_vs_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v_ks_1767_ = lean_ctor_get(v_newNode_1761_, 0);
lean_inc_ref(v_ks_1767_);
v_vs_1768_ = lean_ctor_get(v_newNode_1761_, 1);
lean_inc_ref(v_vs_1768_);
lean_dec_ref(v_newNode_1761_);
v___x_1769_ = lean_unsigned_to_nat(0u);
v___x_1770_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0_spec__0___redArg___closed__1);
v___x_1771_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6___redArg(v_x_1703_, v_ks_1767_, v_vs_1768_, v___x_1769_, v___x_1770_);
lean_dec_ref(v_vs_1768_);
lean_dec_ref(v_ks_1767_);
return v___x_1771_;
}
else
{
return v_newNode_1761_;
}
}
else
{
return v_newNode_1761_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6___redArg(size_t v_depth_1774_, lean_object* v_keys_1775_, lean_object* v_vals_1776_, lean_object* v_i_1777_, lean_object* v_entries_1778_){
_start:
{
lean_object* v___x_1779_; uint8_t v___x_1780_; 
v___x_1779_ = lean_array_get_size(v_keys_1775_);
v___x_1780_ = lean_nat_dec_lt(v_i_1777_, v___x_1779_);
if (v___x_1780_ == 0)
{
lean_dec(v_i_1777_);
return v_entries_1778_;
}
else
{
lean_object* v_k_1781_; lean_object* v_v_1782_; uint64_t v___y_1784_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v_k_1781_ = lean_array_fget_borrowed(v_keys_1775_, v_i_1777_);
v_v_1782_ = lean_array_fget_borrowed(v_vals_1776_, v_i_1777_);
v___x_1795_ = l_Lean_Meta_Grind_Origin_key(v_k_1781_);
v___x_1796_ = l_unsafeCast___redArg(v___x_1795_);
lean_dec(v___x_1795_);
if (lean_obj_tag(v___x_1796_) == 0)
{
uint64_t v___x_1797_; 
v___x_1797_ = 1723ULL;
v___y_1784_ = v___x_1797_;
goto v___jp_1783_;
}
else
{
uint64_t v_hash_1798_; 
v_hash_1798_ = lean_ctor_get_uint64(v___x_1796_, sizeof(void*)*2);
lean_dec(v___x_1796_);
v___y_1784_ = v_hash_1798_;
goto v___jp_1783_;
}
v___jp_1783_:
{
size_t v_h_1785_; size_t v___x_1786_; lean_object* v___x_1787_; size_t v___x_1788_; size_t v___x_1789_; size_t v___x_1790_; size_t v_h_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v_h_1785_ = lean_uint64_to_usize(v___y_1784_);
v___x_1786_ = ((size_t)5ULL);
v___x_1787_ = lean_unsigned_to_nat(1u);
v___x_1788_ = ((size_t)1ULL);
v___x_1789_ = lean_usize_sub(v_depth_1774_, v___x_1788_);
v___x_1790_ = lean_usize_mul(v___x_1786_, v___x_1789_);
v_h_1791_ = lean_usize_shift_right(v_h_1785_, v___x_1790_);
v___x_1792_ = lean_nat_add(v_i_1777_, v___x_1787_);
lean_dec(v_i_1777_);
lean_inc(v_v_1782_);
lean_inc(v_k_1781_);
v___x_1793_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2___redArg(v_entries_1778_, v_h_1791_, v_depth_1774_, v_k_1781_, v_v_1782_);
v_i_1777_ = v___x_1792_;
v_entries_1778_ = v___x_1793_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_depth_1799_, lean_object* v_keys_1800_, lean_object* v_vals_1801_, lean_object* v_i_1802_, lean_object* v_entries_1803_){
_start:
{
size_t v_depth_boxed_1804_; lean_object* v_res_1805_; 
v_depth_boxed_1804_ = lean_unbox_usize(v_depth_1799_);
lean_dec(v_depth_1799_);
v_res_1805_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6___redArg(v_depth_boxed_1804_, v_keys_1800_, v_vals_1801_, v_i_1802_, v_entries_1803_);
lean_dec_ref(v_vals_1801_);
lean_dec_ref(v_keys_1800_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_x_1806_, lean_object* v_x_1807_, lean_object* v_x_1808_, lean_object* v_x_1809_, lean_object* v_x_1810_){
_start:
{
size_t v_x_1269__boxed_1811_; size_t v_x_1270__boxed_1812_; lean_object* v_res_1813_; 
v_x_1269__boxed_1811_ = lean_unbox_usize(v_x_1807_);
lean_dec(v_x_1807_);
v_x_1270__boxed_1812_ = lean_unbox_usize(v_x_1808_);
lean_dec(v_x_1808_);
v_res_1813_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2___redArg(v_x_1806_, v_x_1269__boxed_1811_, v_x_1270__boxed_1812_, v_x_1809_, v_x_1810_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1___redArg(lean_object* v_x_1814_, lean_object* v_x_1815_, lean_object* v_x_1816_){
_start:
{
uint64_t v___y_1818_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1822_ = l_Lean_Meta_Grind_Origin_key(v_x_1815_);
v___x_1823_ = l_unsafeCast___redArg(v___x_1822_);
lean_dec(v___x_1822_);
if (lean_obj_tag(v___x_1823_) == 0)
{
uint64_t v___x_1824_; 
v___x_1824_ = 1723ULL;
v___y_1818_ = v___x_1824_;
goto v___jp_1817_;
}
else
{
uint64_t v_hash_1825_; 
v_hash_1825_ = lean_ctor_get_uint64(v___x_1823_, sizeof(void*)*2);
lean_dec(v___x_1823_);
v___y_1818_ = v_hash_1825_;
goto v___jp_1817_;
}
v___jp_1817_:
{
size_t v___x_1819_; size_t v___x_1820_; lean_object* v___x_1821_; 
v___x_1819_ = lean_uint64_to_usize(v___y_1818_);
v___x_1820_ = ((size_t)1ULL);
v___x_1821_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2___redArg(v_x_1814_, v___x_1819_, v___x_1820_, v_x_1815_, v_x_1816_);
return v___x_1821_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12___redArg(lean_object* v_keys_1826_, lean_object* v_vals_1827_, lean_object* v_i_1828_, lean_object* v_k_1829_){
_start:
{
lean_object* v___x_1830_; uint8_t v___x_1831_; 
v___x_1830_ = lean_array_get_size(v_keys_1826_);
v___x_1831_ = lean_nat_dec_lt(v_i_1828_, v___x_1830_);
if (v___x_1831_ == 0)
{
lean_object* v___x_1832_; 
lean_dec(v_i_1828_);
v___x_1832_ = lean_box(0);
return v___x_1832_;
}
else
{
lean_object* v_k_x27_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; uint8_t v___x_1836_; 
v_k_x27_1833_ = lean_array_fget_borrowed(v_keys_1826_, v_i_1828_);
v___x_1834_ = l_Lean_Meta_Grind_Origin_key(v_k_1829_);
v___x_1835_ = l_Lean_Meta_Grind_Origin_key(v_k_x27_1833_);
v___x_1836_ = lean_name_eq(v___x_1834_, v___x_1835_);
lean_dec(v___x_1835_);
lean_dec(v___x_1834_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = lean_unsigned_to_nat(1u);
v___x_1838_ = lean_nat_add(v_i_1828_, v___x_1837_);
lean_dec(v_i_1828_);
v_i_1828_ = v___x_1838_;
goto _start;
}
else
{
lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_1840_ = lean_array_fget_borrowed(v_vals_1827_, v_i_1828_);
lean_dec(v_i_1828_);
lean_inc(v___x_1840_);
v___x_1841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1840_);
return v___x_1841_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12___redArg___boxed(lean_object* v_keys_1842_, lean_object* v_vals_1843_, lean_object* v_i_1844_, lean_object* v_k_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12___redArg(v_keys_1842_, v_vals_1843_, v_i_1844_, v_k_1845_);
lean_dec_ref(v_k_1845_);
lean_dec_ref(v_vals_1843_);
lean_dec_ref(v_keys_1842_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6___redArg(lean_object* v_x_1847_, size_t v_x_1848_, lean_object* v_x_1849_){
_start:
{
if (lean_obj_tag(v_x_1847_) == 0)
{
lean_object* v_es_1850_; lean_object* v___x_1851_; size_t v___x_1852_; size_t v___x_1853_; lean_object* v_j_1854_; lean_object* v___x_1855_; 
v_es_1850_ = lean_ctor_get(v_x_1847_, 0);
v___x_1851_ = lean_box(2);
v___x_1852_ = ((size_t)31ULL);
v___x_1853_ = lean_usize_land(v_x_1848_, v___x_1852_);
v_j_1854_ = lean_usize_to_nat(v___x_1853_);
v___x_1855_ = lean_array_get_borrowed(v___x_1851_, v_es_1850_, v_j_1854_);
lean_dec(v_j_1854_);
switch(lean_obj_tag(v___x_1855_))
{
case 0:
{
lean_object* v_key_1856_; lean_object* v_val_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; uint8_t v___x_1860_; 
v_key_1856_ = lean_ctor_get(v___x_1855_, 0);
v_val_1857_ = lean_ctor_get(v___x_1855_, 1);
v___x_1858_ = l_Lean_Meta_Grind_Origin_key(v_x_1849_);
v___x_1859_ = l_Lean_Meta_Grind_Origin_key(v_key_1856_);
v___x_1860_ = lean_name_eq(v___x_1858_, v___x_1859_);
lean_dec(v___x_1859_);
lean_dec(v___x_1858_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; 
v___x_1861_ = lean_box(0);
return v___x_1861_;
}
else
{
lean_object* v___x_1862_; 
lean_inc(v_val_1857_);
v___x_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1862_, 0, v_val_1857_);
return v___x_1862_;
}
}
case 1:
{
lean_object* v_node_1863_; size_t v___x_1864_; size_t v___x_1865_; 
v_node_1863_ = lean_ctor_get(v___x_1855_, 0);
v___x_1864_ = ((size_t)5ULL);
v___x_1865_ = lean_usize_shift_right(v_x_1848_, v___x_1864_);
v_x_1847_ = v_node_1863_;
v_x_1848_ = v___x_1865_;
goto _start;
}
default: 
{
lean_object* v___x_1867_; 
v___x_1867_ = lean_box(0);
return v___x_1867_;
}
}
}
else
{
lean_object* v_ks_1868_; lean_object* v_vs_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v_ks_1868_ = lean_ctor_get(v_x_1847_, 0);
v_vs_1869_ = lean_ctor_get(v_x_1847_, 1);
v___x_1870_ = lean_unsigned_to_nat(0u);
v___x_1871_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12___redArg(v_ks_1868_, v_vs_1869_, v___x_1870_, v_x_1849_);
return v___x_1871_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6___redArg___boxed(lean_object* v_x_1872_, lean_object* v_x_1873_, lean_object* v_x_1874_){
_start:
{
size_t v_x_1473__boxed_1875_; lean_object* v_res_1876_; 
v_x_1473__boxed_1875_ = lean_unbox_usize(v_x_1873_);
lean_dec(v_x_1873_);
v_res_1876_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6___redArg(v_x_1872_, v_x_1473__boxed_1875_, v_x_1874_);
lean_dec_ref(v_x_1874_);
lean_dec_ref(v_x_1872_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3___redArg(lean_object* v_x_1877_, lean_object* v_x_1878_){
_start:
{
uint64_t v___y_1880_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = l_Lean_Meta_Grind_Origin_key(v_x_1878_);
v___x_1884_ = l_unsafeCast___redArg(v___x_1883_);
lean_dec(v___x_1883_);
if (lean_obj_tag(v___x_1884_) == 0)
{
uint64_t v___x_1885_; 
v___x_1885_ = 1723ULL;
v___y_1880_ = v___x_1885_;
goto v___jp_1879_;
}
else
{
uint64_t v_hash_1886_; 
v_hash_1886_ = lean_ctor_get_uint64(v___x_1884_, sizeof(void*)*2);
lean_dec(v___x_1884_);
v___y_1880_ = v_hash_1886_;
goto v___jp_1879_;
}
v___jp_1879_:
{
size_t v___x_1881_; lean_object* v___x_1882_; 
v___x_1881_ = lean_uint64_to_usize(v___y_1880_);
v___x_1882_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6___redArg(v_x_1877_, v___x_1881_, v_x_1878_);
return v___x_1882_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3___redArg___boxed(lean_object* v_x_1887_, lean_object* v_x_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3___redArg(v_x_1887_, v_x_1888_);
lean_dec_ref(v_x_1888_);
lean_dec_ref(v_x_1887_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15___redArg(lean_object* v_keys_1890_, lean_object* v_vals_1891_, lean_object* v_i_1892_, lean_object* v_k_1893_){
_start:
{
lean_object* v___x_1894_; uint8_t v___x_1895_; 
v___x_1894_ = lean_array_get_size(v_keys_1890_);
v___x_1895_ = lean_nat_dec_lt(v_i_1892_, v___x_1894_);
if (v___x_1895_ == 0)
{
lean_object* v___x_1896_; 
lean_dec(v_i_1892_);
v___x_1896_ = lean_box(0);
return v___x_1896_;
}
else
{
lean_object* v_k_x27_1897_; uint8_t v___x_1898_; 
v_k_x27_1897_ = lean_array_fget_borrowed(v_keys_1890_, v_i_1892_);
v___x_1898_ = lean_name_eq(v_k_1893_, v_k_x27_1897_);
if (v___x_1898_ == 0)
{
lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1899_ = lean_unsigned_to_nat(1u);
v___x_1900_ = lean_nat_add(v_i_1892_, v___x_1899_);
lean_dec(v_i_1892_);
v_i_1892_ = v___x_1900_;
goto _start;
}
else
{
lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1902_ = lean_array_fget_borrowed(v_vals_1891_, v_i_1892_);
lean_dec(v_i_1892_);
lean_inc(v___x_1902_);
v___x_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
return v___x_1903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15___redArg___boxed(lean_object* v_keys_1904_, lean_object* v_vals_1905_, lean_object* v_i_1906_, lean_object* v_k_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15___redArg(v_keys_1904_, v_vals_1905_, v_i_1906_, v_k_1907_);
lean_dec(v_k_1907_);
lean_dec_ref(v_vals_1905_);
lean_dec_ref(v_keys_1904_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8___redArg(lean_object* v_x_1909_, size_t v_x_1910_, lean_object* v_x_1911_){
_start:
{
if (lean_obj_tag(v_x_1909_) == 0)
{
lean_object* v_es_1912_; lean_object* v___x_1913_; size_t v___x_1914_; size_t v___x_1915_; lean_object* v_j_1916_; lean_object* v___x_1917_; 
v_es_1912_ = lean_ctor_get(v_x_1909_, 0);
v___x_1913_ = lean_box(2);
v___x_1914_ = ((size_t)31ULL);
v___x_1915_ = lean_usize_land(v_x_1910_, v___x_1914_);
v_j_1916_ = lean_usize_to_nat(v___x_1915_);
v___x_1917_ = lean_array_get_borrowed(v___x_1913_, v_es_1912_, v_j_1916_);
lean_dec(v_j_1916_);
switch(lean_obj_tag(v___x_1917_))
{
case 0:
{
lean_object* v_key_1918_; lean_object* v_val_1919_; uint8_t v___x_1920_; 
v_key_1918_ = lean_ctor_get(v___x_1917_, 0);
v_val_1919_ = lean_ctor_get(v___x_1917_, 1);
v___x_1920_ = lean_name_eq(v_x_1911_, v_key_1918_);
if (v___x_1920_ == 0)
{
lean_object* v___x_1921_; 
v___x_1921_ = lean_box(0);
return v___x_1921_;
}
else
{
lean_object* v___x_1922_; 
lean_inc(v_val_1919_);
v___x_1922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1922_, 0, v_val_1919_);
return v___x_1922_;
}
}
case 1:
{
lean_object* v_node_1923_; size_t v___x_1924_; size_t v___x_1925_; 
v_node_1923_ = lean_ctor_get(v___x_1917_, 0);
v___x_1924_ = ((size_t)5ULL);
v___x_1925_ = lean_usize_shift_right(v_x_1910_, v___x_1924_);
v_x_1909_ = v_node_1923_;
v_x_1910_ = v___x_1925_;
goto _start;
}
default: 
{
lean_object* v___x_1927_; 
v___x_1927_ = lean_box(0);
return v___x_1927_;
}
}
}
else
{
lean_object* v_ks_1928_; lean_object* v_vs_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v_ks_1928_ = lean_ctor_get(v_x_1909_, 0);
v_vs_1929_ = lean_ctor_get(v_x_1909_, 1);
v___x_1930_ = lean_unsigned_to_nat(0u);
v___x_1931_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15___redArg(v_ks_1928_, v_vs_1929_, v___x_1930_, v_x_1911_);
return v___x_1931_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8___redArg___boxed(lean_object* v_x_1932_, lean_object* v_x_1933_, lean_object* v_x_1934_){
_start:
{
size_t v_x_1562__boxed_1935_; lean_object* v_res_1936_; 
v_x_1562__boxed_1935_ = lean_unbox_usize(v_x_1933_);
lean_dec(v_x_1933_);
v_res_1936_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8___redArg(v_x_1932_, v_x_1562__boxed_1935_, v_x_1934_);
lean_dec(v_x_1934_);
lean_dec_ref(v_x_1932_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4___redArg(lean_object* v_x_1937_, lean_object* v_x_1938_){
_start:
{
uint64_t v___y_1940_; lean_object* v___x_1943_; 
v___x_1943_ = l_unsafeCast___redArg(v_x_1938_);
if (lean_obj_tag(v___x_1943_) == 0)
{
uint64_t v___x_1944_; 
v___x_1944_ = 1723ULL;
v___y_1940_ = v___x_1944_;
goto v___jp_1939_;
}
else
{
uint64_t v_hash_1945_; 
v_hash_1945_ = lean_ctor_get_uint64(v___x_1943_, sizeof(void*)*2);
lean_dec(v___x_1943_);
v___y_1940_ = v_hash_1945_;
goto v___jp_1939_;
}
v___jp_1939_:
{
size_t v___x_1941_; lean_object* v___x_1942_; 
v___x_1941_ = lean_uint64_to_usize(v___y_1940_);
v___x_1942_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8___redArg(v_x_1937_, v___x_1941_, v_x_1938_);
return v___x_1942_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4___redArg___boxed(lean_object* v_x_1946_, lean_object* v_x_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4___redArg(v_x_1946_, v_x_1947_);
lean_dec(v_x_1947_);
lean_dec_ref(v_x_1946_);
return v_res_1948_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__7(void){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = l_Lean_Meta_Grind_instInhabitedTheorems_default___redArg();
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0(lean_object* v_msg_1957_){
_start:
{
lean_object* v___f_1958_; lean_object* v___f_1959_; lean_object* v___f_1960_; lean_object* v___f_1961_; lean_object* v___f_1962_; lean_object* v___f_1963_; lean_object* v___f_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___f_1958_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__0));
v___f_1959_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__1));
v___f_1960_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__2));
v___f_1961_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__3));
v___f_1962_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__4));
v___f_1963_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__5));
v___f_1964_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__6));
v___x_1965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1965_, 0, v___f_1958_);
lean_ctor_set(v___x_1965_, 1, v___f_1959_);
v___x_1966_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1965_);
lean_ctor_set(v___x_1966_, 1, v___f_1960_);
lean_ctor_set(v___x_1966_, 2, v___f_1961_);
lean_ctor_set(v___x_1966_, 3, v___f_1962_);
lean_ctor_set(v___x_1966_, 4, v___f_1963_);
v___x_1967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1966_);
lean_ctor_set(v___x_1967_, 1, v___f_1964_);
v___x_1968_ = lean_obj_once(&l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__7, &l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__7_once, _init_l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__7);
v___x_1969_ = l_instInhabitedOfMonad___redArg(v___x_1967_, v___x_1968_);
v___x_1970_ = lean_panic_fn_borrowed(v___x_1969_, v_msg_1957_);
lean_dec(v___x_1969_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9_spec__13(lean_object* v_xs_1971_, lean_object* v_v_1972_, lean_object* v_i_1973_){
_start:
{
lean_object* v___x_1974_; uint8_t v___x_1975_; 
v___x_1974_ = lean_array_get_size(v_xs_1971_);
v___x_1975_ = lean_nat_dec_lt(v_i_1973_, v___x_1974_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; 
lean_dec(v_i_1973_);
v___x_1976_ = lean_box(0);
return v___x_1976_;
}
else
{
lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; uint8_t v___x_1980_; 
v___x_1977_ = lean_array_fget_borrowed(v_xs_1971_, v_i_1973_);
v___x_1978_ = l_Lean_Meta_Grind_Origin_key(v___x_1977_);
v___x_1979_ = l_Lean_Meta_Grind_Origin_key(v_v_1972_);
v___x_1980_ = lean_name_eq(v___x_1978_, v___x_1979_);
lean_dec(v___x_1979_);
lean_dec(v___x_1978_);
if (v___x_1980_ == 0)
{
lean_object* v___x_1981_; lean_object* v___x_1982_; 
v___x_1981_ = lean_unsigned_to_nat(1u);
v___x_1982_ = lean_nat_add(v_i_1973_, v___x_1981_);
lean_dec(v_i_1973_);
v_i_1973_ = v___x_1982_;
goto _start;
}
else
{
lean_object* v___x_1984_; 
v___x_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1984_, 0, v_i_1973_);
return v___x_1984_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9_spec__13___boxed(lean_object* v_xs_1985_, lean_object* v_v_1986_, lean_object* v_i_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9_spec__13(v_xs_1985_, v_v_1986_, v_i_1987_);
lean_dec_ref(v_v_1986_);
lean_dec_ref(v_xs_1985_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9(lean_object* v_xs_1989_, lean_object* v_v_1990_){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1991_ = lean_unsigned_to_nat(0u);
v___x_1992_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9_spec__13(v_xs_1989_, v_v_1990_, v___x_1991_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9___boxed(lean_object* v_xs_1993_, lean_object* v_v_1994_){
_start:
{
lean_object* v_res_1995_; 
v_res_1995_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9(v_xs_1993_, v_v_1994_);
lean_dec_ref(v_v_1994_);
lean_dec_ref(v_xs_1993_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4___redArg(lean_object* v_x_1996_, size_t v_x_1997_, lean_object* v_x_1998_){
_start:
{
if (lean_obj_tag(v_x_1996_) == 0)
{
lean_object* v_es_1999_; lean_object* v___x_2000_; size_t v___x_2001_; size_t v___x_2002_; lean_object* v_j_2003_; lean_object* v_entry_2004_; 
v_es_1999_ = lean_ctor_get(v_x_1996_, 0);
v___x_2000_ = lean_box(2);
v___x_2001_ = ((size_t)31ULL);
v___x_2002_ = lean_usize_land(v_x_1997_, v___x_2001_);
v_j_2003_ = lean_usize_to_nat(v___x_2002_);
v_entry_2004_ = lean_array_get(v___x_2000_, v_es_1999_, v_j_2003_);
switch(lean_obj_tag(v_entry_2004_))
{
case 0:
{
lean_object* v_key_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; uint8_t v___x_2008_; 
v_key_2005_ = lean_ctor_get(v_entry_2004_, 0);
lean_inc(v_key_2005_);
lean_dec_ref_known(v_entry_2004_, 2);
v___x_2006_ = l_Lean_Meta_Grind_Origin_key(v_x_1998_);
v___x_2007_ = l_Lean_Meta_Grind_Origin_key(v_key_2005_);
lean_dec(v_key_2005_);
v___x_2008_ = lean_name_eq(v___x_2006_, v___x_2007_);
lean_dec(v___x_2007_);
lean_dec(v___x_2006_);
if (v___x_2008_ == 0)
{
lean_dec(v_j_2003_);
return v_x_1996_;
}
else
{
lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2016_; 
lean_inc_ref(v_es_1999_);
v_isSharedCheck_2016_ = !lean_is_exclusive(v_x_1996_);
if (v_isSharedCheck_2016_ == 0)
{
lean_object* v_unused_2017_; 
v_unused_2017_ = lean_ctor_get(v_x_1996_, 0);
lean_dec(v_unused_2017_);
v___x_2010_ = v_x_1996_;
v_isShared_2011_ = v_isSharedCheck_2016_;
goto v_resetjp_2009_;
}
else
{
lean_dec(v_x_1996_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2016_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2012_; lean_object* v___x_2014_; 
v___x_2012_ = lean_array_set(v_es_1999_, v_j_2003_, v___x_2000_);
lean_dec(v_j_2003_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 0, v___x_2012_);
v___x_2014_ = v___x_2010_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v___x_2012_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
case 1:
{
lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2052_; 
lean_inc_ref(v_es_1999_);
v_isSharedCheck_2052_ = !lean_is_exclusive(v_x_1996_);
if (v_isSharedCheck_2052_ == 0)
{
lean_object* v_unused_2053_; 
v_unused_2053_ = lean_ctor_get(v_x_1996_, 0);
lean_dec(v_unused_2053_);
v___x_2019_ = v_x_1996_;
v_isShared_2020_ = v_isSharedCheck_2052_;
goto v_resetjp_2018_;
}
else
{
lean_dec(v_x_1996_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2052_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v_node_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2051_; 
v_node_2021_ = lean_ctor_get(v_entry_2004_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v_entry_2004_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2023_ = v_entry_2004_;
v_isShared_2024_ = v_isSharedCheck_2051_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_node_2021_);
lean_dec(v_entry_2004_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2051_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
size_t v___x_2025_; lean_object* v_entries_2026_; size_t v___x_2027_; lean_object* v_newNode_2028_; lean_object* v___x_2029_; 
v___x_2025_ = ((size_t)5ULL);
v_entries_2026_ = lean_array_set(v_es_1999_, v_j_2003_, v___x_2000_);
v___x_2027_ = lean_usize_shift_right(v_x_1997_, v___x_2025_);
v_newNode_2028_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4___redArg(v_node_2021_, v___x_2027_, v_x_1998_);
lean_inc_ref(v_newNode_2028_);
v___x_2029_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_2028_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v___x_2031_; 
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 0, v_newNode_2028_);
v___x_2031_ = v___x_2023_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_newNode_2028_);
v___x_2031_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
lean_object* v___x_2032_; lean_object* v___x_2034_; 
v___x_2032_ = lean_array_set(v_entries_2026_, v_j_2003_, v___x_2031_);
lean_dec(v_j_2003_);
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v___x_2032_);
v___x_2034_ = v___x_2019_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v___x_2032_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
else
{
lean_object* v_val_2037_; lean_object* v_fst_2038_; lean_object* v_snd_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2050_; 
lean_dec_ref(v_newNode_2028_);
lean_del_object(v___x_2023_);
v_val_2037_ = lean_ctor_get(v___x_2029_, 0);
lean_inc(v_val_2037_);
lean_dec_ref_known(v___x_2029_, 1);
v_fst_2038_ = lean_ctor_get(v_val_2037_, 0);
v_snd_2039_ = lean_ctor_get(v_val_2037_, 1);
v_isSharedCheck_2050_ = !lean_is_exclusive(v_val_2037_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2041_ = v_val_2037_;
v_isShared_2042_ = v_isSharedCheck_2050_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_snd_2039_);
lean_inc(v_fst_2038_);
lean_dec(v_val_2037_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2050_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2044_; 
if (v_isShared_2042_ == 0)
{
v___x_2044_ = v___x_2041_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_fst_2038_);
lean_ctor_set(v_reuseFailAlloc_2049_, 1, v_snd_2039_);
v___x_2044_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
lean_object* v___x_2045_; lean_object* v___x_2047_; 
v___x_2045_ = lean_array_set(v_entries_2026_, v_j_2003_, v___x_2044_);
lean_dec(v_j_2003_);
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v___x_2045_);
v___x_2047_ = v___x_2019_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v___x_2045_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_2003_);
return v_x_1996_;
}
}
}
else
{
lean_object* v_ks_2054_; lean_object* v_vs_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2069_; 
v_ks_2054_ = lean_ctor_get(v_x_1996_, 0);
v_vs_2055_ = lean_ctor_get(v_x_1996_, 1);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_x_1996_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2057_ = v_x_1996_;
v_isShared_2058_ = v_isSharedCheck_2069_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_vs_2055_);
lean_inc(v_ks_2054_);
lean_dec(v_x_1996_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2069_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2059_; 
v___x_2059_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4_spec__9(v_ks_2054_, v_x_1998_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v___x_2061_; 
if (v_isShared_2058_ == 0)
{
v___x_2061_ = v___x_2057_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_ks_2054_);
lean_ctor_set(v_reuseFailAlloc_2062_, 1, v_vs_2055_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
else
{
lean_object* v_val_2063_; lean_object* v_keys_x27_2064_; lean_object* v_vals_x27_2065_; lean_object* v___x_2067_; 
v_val_2063_ = lean_ctor_get(v___x_2059_, 0);
lean_inc_n(v_val_2063_, 2);
lean_dec_ref_known(v___x_2059_, 1);
v_keys_x27_2064_ = l_Array_eraseIdx___redArg(v_ks_2054_, v_val_2063_);
v_vals_x27_2065_ = l_Array_eraseIdx___redArg(v_vs_2055_, v_val_2063_);
if (v_isShared_2058_ == 0)
{
lean_ctor_set(v___x_2057_, 1, v_vals_x27_2065_);
lean_ctor_set(v___x_2057_, 0, v_keys_x27_2064_);
v___x_2067_ = v___x_2057_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_keys_x27_2064_);
lean_ctor_set(v_reuseFailAlloc_2068_, 1, v_vals_x27_2065_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_x_2070_, lean_object* v_x_2071_, lean_object* v_x_2072_){
_start:
{
size_t v_x_1703__boxed_2073_; lean_object* v_res_2074_; 
v_x_1703__boxed_2073_ = lean_unbox_usize(v_x_2071_);
lean_dec(v_x_2071_);
v_res_2074_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4___redArg(v_x_2070_, v_x_1703__boxed_2073_, v_x_2072_);
lean_dec_ref(v_x_2072_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2___redArg(lean_object* v_x_2075_, lean_object* v_x_2076_){
_start:
{
uint64_t v___y_2078_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2081_ = l_Lean_Meta_Grind_Origin_key(v_x_2076_);
v___x_2082_ = l_unsafeCast___redArg(v___x_2081_);
lean_dec(v___x_2081_);
if (lean_obj_tag(v___x_2082_) == 0)
{
uint64_t v___x_2083_; 
v___x_2083_ = 1723ULL;
v___y_2078_ = v___x_2083_;
goto v___jp_2077_;
}
else
{
uint64_t v_hash_2084_; 
v_hash_2084_ = lean_ctor_get_uint64(v___x_2082_, sizeof(void*)*2);
lean_dec(v___x_2082_);
v___y_2078_ = v_hash_2084_;
goto v___jp_2077_;
}
v___jp_2077_:
{
size_t v_h_2079_; lean_object* v___x_2080_; 
v_h_2079_ = lean_uint64_to_usize(v___y_2078_);
v___x_2080_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4___redArg(v_x_2075_, v_h_2079_, v_x_2076_);
return v___x_2080_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2___redArg___boxed(lean_object* v_x_2085_, lean_object* v_x_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2___redArg(v_x_2085_, v_x_2086_);
lean_dec_ref(v_x_2086_);
return v_res_2087_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2091_ = ((lean_object*)(l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__2));
v___x_2092_ = lean_unsigned_to_nat(6u);
v___x_2093_ = lean_unsigned_to_nat(82u);
v___x_2094_ = ((lean_object*)(l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__1));
v___x_2095_ = ((lean_object*)(l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__0));
v___x_2096_ = l_mkPanicMessageWithDecl(v___x_2095_, v___x_2094_, v___x_2093_, v___x_2092_, v___x_2091_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0(lean_object* v_s_2097_, lean_object* v_thm_2098_){
_start:
{
lean_object* v_symbols_2102_; 
v_symbols_2102_ = lean_ctor_get(v_thm_2098_, 4);
lean_inc(v_symbols_2102_);
if (lean_obj_tag(v_symbols_2102_) == 1)
{
lean_object* v_head_2103_; 
v_head_2103_ = lean_ctor_get(v_symbols_2102_, 0);
lean_inc(v_head_2103_);
if (lean_obj_tag(v_head_2103_) == 2)
{
lean_object* v_levelParams_2104_; lean_object* v_proof_2105_; lean_object* v_numParams_2106_; lean_object* v_patterns_2107_; lean_object* v_origin_2108_; lean_object* v_kind_2109_; uint8_t v_minIndexable_2110_; lean_object* v_cnstrs_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2162_; 
v_levelParams_2104_ = lean_ctor_get(v_thm_2098_, 0);
v_proof_2105_ = lean_ctor_get(v_thm_2098_, 1);
v_numParams_2106_ = lean_ctor_get(v_thm_2098_, 2);
v_patterns_2107_ = lean_ctor_get(v_thm_2098_, 3);
v_origin_2108_ = lean_ctor_get(v_thm_2098_, 5);
v_kind_2109_ = lean_ctor_get(v_thm_2098_, 6);
v_minIndexable_2110_ = lean_ctor_get_uint8(v_thm_2098_, sizeof(void*)*8);
v_cnstrs_2111_ = lean_ctor_get(v_thm_2098_, 7);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_thm_2098_);
if (v_isSharedCheck_2162_ == 0)
{
lean_object* v_unused_2163_; 
v_unused_2163_ = lean_ctor_get(v_thm_2098_, 4);
lean_dec(v_unused_2163_);
v___x_2113_ = v_thm_2098_;
v_isShared_2114_ = v_isSharedCheck_2162_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_cnstrs_2111_);
lean_inc(v_kind_2109_);
lean_inc(v_origin_2108_);
lean_inc(v_patterns_2107_);
lean_inc(v_numParams_2106_);
lean_inc(v_proof_2105_);
lean_inc(v_levelParams_2104_);
lean_dec(v_thm_2098_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2162_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v_tail_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2160_; 
v_tail_2115_ = lean_ctor_get(v_symbols_2102_, 1);
v_isSharedCheck_2160_ = !lean_is_exclusive(v_symbols_2102_);
if (v_isSharedCheck_2160_ == 0)
{
lean_object* v_unused_2161_; 
v_unused_2161_ = lean_ctor_get(v_symbols_2102_, 0);
lean_dec(v_unused_2161_);
v___x_2117_ = v_symbols_2102_;
v_isShared_2118_ = v_isSharedCheck_2160_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_tail_2115_);
lean_dec(v_symbols_2102_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2160_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v_constName_2119_; lean_object* v_smap_2120_; lean_object* v_origins_2121_; lean_object* v_erased_2122_; lean_object* v_omap_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2159_; 
v_constName_2119_ = lean_ctor_get(v_head_2103_, 0);
lean_inc(v_constName_2119_);
lean_dec_ref_known(v_head_2103_, 1);
v_smap_2120_ = lean_ctor_get(v_s_2097_, 0);
v_origins_2121_ = lean_ctor_get(v_s_2097_, 1);
v_erased_2122_ = lean_ctor_get(v_s_2097_, 2);
v_omap_2123_ = lean_ctor_get(v_s_2097_, 3);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_s_2097_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2125_ = v_s_2097_;
v_isShared_2126_ = v_isSharedCheck_2159_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_omap_2123_);
lean_inc(v_erased_2122_);
lean_inc(v_origins_2121_);
lean_inc(v_smap_2120_);
lean_dec(v_s_2097_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2159_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v_thm_2128_; 
lean_inc_ref(v_origin_2108_);
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 4, v_tail_2115_);
v_thm_2128_ = v___x_2113_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_levelParams_2104_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v_proof_2105_);
lean_ctor_set(v_reuseFailAlloc_2158_, 2, v_numParams_2106_);
lean_ctor_set(v_reuseFailAlloc_2158_, 3, v_patterns_2107_);
lean_ctor_set(v_reuseFailAlloc_2158_, 4, v_tail_2115_);
lean_ctor_set(v_reuseFailAlloc_2158_, 5, v_origin_2108_);
lean_ctor_set(v_reuseFailAlloc_2158_, 6, v_kind_2109_);
lean_ctor_set(v_reuseFailAlloc_2158_, 7, v_cnstrs_2111_);
lean_ctor_set_uint8(v_reuseFailAlloc_2158_, sizeof(void*)*8, v_minIndexable_2110_);
v_thm_2128_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
lean_object* v___x_2129_; lean_object* v_origins_2130_; lean_object* v_erased_2131_; lean_object* v___y_2133_; lean_object* v___x_2151_; 
v___x_2129_ = lean_box(0);
lean_inc_ref(v_origin_2108_);
v_origins_2130_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1___redArg(v_origins_2121_, v_origin_2108_, v___x_2129_);
v_erased_2131_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2___redArg(v_erased_2122_, v_origin_2108_);
v___x_2151_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4___redArg(v_smap_2120_, v_constName_2119_);
if (lean_obj_tag(v___x_2151_) == 1)
{
lean_object* v_val_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v_val_2152_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_val_2152_);
lean_dec_ref_known(v___x_2151_, 1);
lean_inc_ref(v_thm_2128_);
v___x_2153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2153_, 0, v_thm_2128_);
lean_ctor_set(v___x_2153_, 1, v_val_2152_);
v___x_2154_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0___redArg(v_smap_2120_, v_constName_2119_, v___x_2153_);
v___y_2133_ = v___x_2154_;
goto v___jp_2132_;
}
else
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
lean_dec(v___x_2151_);
v___x_2155_ = lean_box(0);
lean_inc_ref(v_thm_2128_);
v___x_2156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2156_, 0, v_thm_2128_);
lean_ctor_set(v___x_2156_, 1, v___x_2155_);
v___x_2157_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0___redArg(v_smap_2120_, v_constName_2119_, v___x_2156_);
v___y_2133_ = v___x_2157_;
goto v___jp_2132_;
}
v___jp_2132_:
{
lean_object* v___x_2134_; 
v___x_2134_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3___redArg(v_omap_2123_, v_origin_2108_);
if (lean_obj_tag(v___x_2134_) == 1)
{
lean_object* v_val_2135_; lean_object* v___x_2137_; 
v_val_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_val_2135_);
lean_dec_ref_known(v___x_2134_, 1);
if (v_isShared_2118_ == 0)
{
lean_ctor_set(v___x_2117_, 1, v_val_2135_);
lean_ctor_set(v___x_2117_, 0, v_thm_2128_);
v___x_2137_ = v___x_2117_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_thm_2128_);
lean_ctor_set(v_reuseFailAlloc_2142_, 1, v_val_2135_);
v___x_2137_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
lean_object* v___x_2138_; lean_object* v___x_2140_; 
v___x_2138_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1___redArg(v_omap_2123_, v_origin_2108_, v___x_2137_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 3, v___x_2138_);
lean_ctor_set(v___x_2125_, 2, v_erased_2131_);
lean_ctor_set(v___x_2125_, 1, v_origins_2130_);
lean_ctor_set(v___x_2125_, 0, v___y_2133_);
v___x_2140_ = v___x_2125_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v___y_2133_);
lean_ctor_set(v_reuseFailAlloc_2141_, 1, v_origins_2130_);
lean_ctor_set(v_reuseFailAlloc_2141_, 2, v_erased_2131_);
lean_ctor_set(v_reuseFailAlloc_2141_, 3, v___x_2138_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
}
else
{
lean_object* v___x_2143_; lean_object* v___x_2145_; 
lean_dec(v___x_2134_);
v___x_2143_ = lean_box(0);
if (v_isShared_2118_ == 0)
{
lean_ctor_set(v___x_2117_, 1, v___x_2143_);
lean_ctor_set(v___x_2117_, 0, v_thm_2128_);
v___x_2145_ = v___x_2117_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_thm_2128_);
lean_ctor_set(v_reuseFailAlloc_2150_, 1, v___x_2143_);
v___x_2145_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
lean_object* v___x_2146_; lean_object* v___x_2148_; 
v___x_2146_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1___redArg(v_omap_2123_, v_origin_2108_, v___x_2145_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 3, v___x_2146_);
lean_ctor_set(v___x_2125_, 2, v_erased_2131_);
lean_ctor_set(v___x_2125_, 1, v_origins_2130_);
lean_ctor_set(v___x_2125_, 0, v___y_2133_);
v___x_2148_ = v___x_2125_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v___y_2133_);
lean_ctor_set(v_reuseFailAlloc_2149_, 1, v_origins_2130_);
lean_ctor_set(v_reuseFailAlloc_2149_, 2, v_erased_2131_);
lean_ctor_set(v_reuseFailAlloc_2149_, 3, v___x_2146_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
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
lean_dec_ref_known(v_symbols_2102_, 2);
lean_dec(v_head_2103_);
lean_dec_ref(v_thm_2098_);
lean_dec_ref(v_s_2097_);
goto v___jp_2099_;
}
}
else
{
lean_dec(v_symbols_2102_);
lean_dec_ref(v_thm_2098_);
lean_dec_ref(v_s_2097_);
goto v___jp_2099_;
}
v___jp_2099_:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
v___x_2100_ = lean_obj_once(&l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__3, &l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__3_once, _init_l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__3);
v___x_2101_ = l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0(v___x_2100_);
return v___x_2101_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__1_spec__6(lean_object* v_msg_2164_){
_start:
{
lean_object* v___f_2165_; lean_object* v___f_2166_; lean_object* v___f_2167_; lean_object* v___f_2168_; lean_object* v___f_2169_; lean_object* v___f_2170_; lean_object* v___f_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
v___f_2165_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__0));
v___f_2166_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__1));
v___f_2167_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__2));
v___f_2168_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__3));
v___f_2169_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__4));
v___f_2170_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__5));
v___f_2171_ = ((lean_object*)(l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__6));
v___x_2172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___f_2165_);
lean_ctor_set(v___x_2172_, 1, v___f_2166_);
v___x_2173_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
lean_ctor_set(v___x_2173_, 1, v___f_2167_);
lean_ctor_set(v___x_2173_, 2, v___f_2168_);
lean_ctor_set(v___x_2173_, 3, v___f_2169_);
lean_ctor_set(v___x_2173_, 4, v___f_2170_);
v___x_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
lean_ctor_set(v___x_2174_, 1, v___f_2171_);
v___x_2175_ = lean_obj_once(&l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__7, &l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__7_once, _init_l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__0___closed__7);
v___x_2176_ = l_instInhabitedOfMonad___redArg(v___x_2174_, v___x_2175_);
v___x_2177_ = lean_panic_fn_borrowed(v___x_2176_, v_msg_2164_);
lean_dec(v___x_2176_);
return v___x_2177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__1(lean_object* v_s_2178_, lean_object* v_thm_2179_){
_start:
{
lean_object* v_symbols_2183_; 
v_symbols_2183_ = lean_ctor_get(v_thm_2179_, 2);
lean_inc(v_symbols_2183_);
if (lean_obj_tag(v_symbols_2183_) == 1)
{
lean_object* v_head_2184_; 
v_head_2184_ = lean_ctor_get(v_symbols_2183_, 0);
lean_inc(v_head_2184_);
if (lean_obj_tag(v_head_2184_) == 2)
{
lean_object* v_levelParams_2185_; lean_object* v_proof_2186_; lean_object* v_origin_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2238_; 
v_levelParams_2185_ = lean_ctor_get(v_thm_2179_, 0);
v_proof_2186_ = lean_ctor_get(v_thm_2179_, 1);
v_origin_2187_ = lean_ctor_get(v_thm_2179_, 3);
v_isSharedCheck_2238_ = !lean_is_exclusive(v_thm_2179_);
if (v_isSharedCheck_2238_ == 0)
{
lean_object* v_unused_2239_; 
v_unused_2239_ = lean_ctor_get(v_thm_2179_, 2);
lean_dec(v_unused_2239_);
v___x_2189_ = v_thm_2179_;
v_isShared_2190_ = v_isSharedCheck_2238_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_origin_2187_);
lean_inc(v_proof_2186_);
lean_inc(v_levelParams_2185_);
lean_dec(v_thm_2179_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2238_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v_tail_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2236_; 
v_tail_2191_ = lean_ctor_get(v_symbols_2183_, 1);
v_isSharedCheck_2236_ = !lean_is_exclusive(v_symbols_2183_);
if (v_isSharedCheck_2236_ == 0)
{
lean_object* v_unused_2237_; 
v_unused_2237_ = lean_ctor_get(v_symbols_2183_, 0);
lean_dec(v_unused_2237_);
v___x_2193_ = v_symbols_2183_;
v_isShared_2194_ = v_isSharedCheck_2236_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_tail_2191_);
lean_dec(v_symbols_2183_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2236_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v_constName_2195_; lean_object* v_smap_2196_; lean_object* v_origins_2197_; lean_object* v_erased_2198_; lean_object* v_omap_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2235_; 
v_constName_2195_ = lean_ctor_get(v_head_2184_, 0);
lean_inc(v_constName_2195_);
lean_dec_ref_known(v_head_2184_, 1);
v_smap_2196_ = lean_ctor_get(v_s_2178_, 0);
v_origins_2197_ = lean_ctor_get(v_s_2178_, 1);
v_erased_2198_ = lean_ctor_get(v_s_2178_, 2);
v_omap_2199_ = lean_ctor_get(v_s_2178_, 3);
v_isSharedCheck_2235_ = !lean_is_exclusive(v_s_2178_);
if (v_isSharedCheck_2235_ == 0)
{
v___x_2201_ = v_s_2178_;
v_isShared_2202_ = v_isSharedCheck_2235_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_omap_2199_);
lean_inc(v_erased_2198_);
lean_inc(v_origins_2197_);
lean_inc(v_smap_2196_);
lean_dec(v_s_2178_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2235_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v_thm_2204_; 
lean_inc_ref(v_origin_2187_);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 2, v_tail_2191_);
v_thm_2204_ = v___x_2189_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_levelParams_2185_);
lean_ctor_set(v_reuseFailAlloc_2234_, 1, v_proof_2186_);
lean_ctor_set(v_reuseFailAlloc_2234_, 2, v_tail_2191_);
lean_ctor_set(v_reuseFailAlloc_2234_, 3, v_origin_2187_);
v_thm_2204_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
lean_object* v___x_2205_; lean_object* v_origins_2206_; lean_object* v_erased_2207_; lean_object* v___y_2209_; lean_object* v___x_2227_; 
v___x_2205_ = lean_box(0);
lean_inc_ref(v_origin_2187_);
v_origins_2206_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1___redArg(v_origins_2197_, v_origin_2187_, v___x_2205_);
v_erased_2207_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2___redArg(v_erased_2198_, v_origin_2187_);
v___x_2227_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4___redArg(v_smap_2196_, v_constName_2195_);
if (lean_obj_tag(v___x_2227_) == 1)
{
lean_object* v_val_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v_val_2228_ = lean_ctor_get(v___x_2227_, 0);
lean_inc(v_val_2228_);
lean_dec_ref_known(v___x_2227_, 1);
lean_inc_ref(v_thm_2204_);
v___x_2229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2229_, 0, v_thm_2204_);
lean_ctor_set(v___x_2229_, 1, v_val_2228_);
v___x_2230_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0___redArg(v_smap_2196_, v_constName_2195_, v___x_2229_);
v___y_2209_ = v___x_2230_;
goto v___jp_2208_;
}
else
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
lean_dec(v___x_2227_);
v___x_2231_ = lean_box(0);
lean_inc_ref(v_thm_2204_);
v___x_2232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2232_, 0, v_thm_2204_);
lean_ctor_set(v___x_2232_, 1, v___x_2231_);
v___x_2233_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0___redArg(v_smap_2196_, v_constName_2195_, v___x_2232_);
v___y_2209_ = v___x_2233_;
goto v___jp_2208_;
}
v___jp_2208_:
{
lean_object* v___x_2210_; 
v___x_2210_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3___redArg(v_omap_2199_, v_origin_2187_);
if (lean_obj_tag(v___x_2210_) == 1)
{
lean_object* v_val_2211_; lean_object* v___x_2213_; 
v_val_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_val_2211_);
lean_dec_ref_known(v___x_2210_, 1);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 1, v_val_2211_);
lean_ctor_set(v___x_2193_, 0, v_thm_2204_);
v___x_2213_ = v___x_2193_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_thm_2204_);
lean_ctor_set(v_reuseFailAlloc_2218_, 1, v_val_2211_);
v___x_2213_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
lean_object* v___x_2214_; lean_object* v___x_2216_; 
v___x_2214_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1___redArg(v_omap_2199_, v_origin_2187_, v___x_2213_);
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 3, v___x_2214_);
lean_ctor_set(v___x_2201_, 2, v_erased_2207_);
lean_ctor_set(v___x_2201_, 1, v_origins_2206_);
lean_ctor_set(v___x_2201_, 0, v___y_2209_);
v___x_2216_ = v___x_2201_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v___y_2209_);
lean_ctor_set(v_reuseFailAlloc_2217_, 1, v_origins_2206_);
lean_ctor_set(v_reuseFailAlloc_2217_, 2, v_erased_2207_);
lean_ctor_set(v_reuseFailAlloc_2217_, 3, v___x_2214_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
else
{
lean_object* v___x_2219_; lean_object* v___x_2221_; 
lean_dec(v___x_2210_);
v___x_2219_ = lean_box(0);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 1, v___x_2219_);
lean_ctor_set(v___x_2193_, 0, v_thm_2204_);
v___x_2221_ = v___x_2193_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v_thm_2204_);
lean_ctor_set(v_reuseFailAlloc_2226_, 1, v___x_2219_);
v___x_2221_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
lean_object* v___x_2222_; lean_object* v___x_2224_; 
v___x_2222_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1___redArg(v_omap_2199_, v_origin_2187_, v___x_2221_);
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 3, v___x_2222_);
lean_ctor_set(v___x_2201_, 2, v_erased_2207_);
lean_ctor_set(v___x_2201_, 1, v_origins_2206_);
lean_ctor_set(v___x_2201_, 0, v___y_2209_);
v___x_2224_ = v___x_2201_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v___y_2209_);
lean_ctor_set(v_reuseFailAlloc_2225_, 1, v_origins_2206_);
lean_ctor_set(v_reuseFailAlloc_2225_, 2, v_erased_2207_);
lean_ctor_set(v_reuseFailAlloc_2225_, 3, v___x_2222_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
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
lean_dec(v_head_2184_);
lean_dec_ref_known(v_symbols_2183_, 2);
lean_dec_ref(v_thm_2179_);
lean_dec_ref(v_s_2178_);
goto v___jp_2180_;
}
}
else
{
lean_dec(v_symbols_2183_);
lean_dec_ref(v_thm_2179_);
lean_dec_ref(v_s_2178_);
goto v___jp_2180_;
}
v___jp_2180_:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2181_ = lean_obj_once(&l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__3, &l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__3_once, _init_l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__3);
v___x_2182_ = l_panic___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__1_spec__6(v___x_2181_);
return v___x_2182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionState_addEntry(lean_object* v_s_2240_, lean_object* v_e_2241_){
_start:
{
switch(lean_obj_tag(v_e_2241_))
{
case 0:
{
lean_object* v_declName_2242_; lean_object* v_casesTypes_2243_; lean_object* v_extThms_2244_; lean_object* v_funCC_2245_; lean_object* v_ematch_2246_; lean_object* v_inj_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2256_; 
v_declName_2242_ = lean_ctor_get(v_e_2241_, 0);
lean_inc(v_declName_2242_);
lean_dec_ref_known(v_e_2241_, 1);
v_casesTypes_2243_ = lean_ctor_get(v_s_2240_, 0);
v_extThms_2244_ = lean_ctor_get(v_s_2240_, 1);
v_funCC_2245_ = lean_ctor_get(v_s_2240_, 2);
v_ematch_2246_ = lean_ctor_get(v_s_2240_, 3);
v_inj_2247_ = lean_ctor_get(v_s_2240_, 4);
v_isSharedCheck_2256_ = !lean_is_exclusive(v_s_2240_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2249_ = v_s_2240_;
v_isShared_2250_ = v_isSharedCheck_2256_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_inj_2247_);
lean_inc(v_ematch_2246_);
lean_inc(v_funCC_2245_);
lean_inc(v_extThms_2244_);
lean_inc(v_casesTypes_2243_);
lean_dec(v_s_2240_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2256_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2254_; 
v___x_2251_ = lean_box(0);
v___x_2252_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0___redArg(v_extThms_2244_, v_declName_2242_, v___x_2251_);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 1, v___x_2252_);
v___x_2254_ = v___x_2249_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_casesTypes_2243_);
lean_ctor_set(v_reuseFailAlloc_2255_, 1, v___x_2252_);
lean_ctor_set(v_reuseFailAlloc_2255_, 2, v_funCC_2245_);
lean_ctor_set(v_reuseFailAlloc_2255_, 3, v_ematch_2246_);
lean_ctor_set(v_reuseFailAlloc_2255_, 4, v_inj_2247_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
case 1:
{
lean_object* v_declName_2257_; lean_object* v_casesTypes_2258_; lean_object* v_extThms_2259_; lean_object* v_funCC_2260_; lean_object* v_ematch_2261_; lean_object* v_inj_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2270_; 
v_declName_2257_ = lean_ctor_get(v_e_2241_, 0);
lean_inc(v_declName_2257_);
lean_dec_ref_known(v_e_2241_, 1);
v_casesTypes_2258_ = lean_ctor_get(v_s_2240_, 0);
v_extThms_2259_ = lean_ctor_get(v_s_2240_, 1);
v_funCC_2260_ = lean_ctor_get(v_s_2240_, 2);
v_ematch_2261_ = lean_ctor_get(v_s_2240_, 3);
v_inj_2262_ = lean_ctor_get(v_s_2240_, 4);
v_isSharedCheck_2270_ = !lean_is_exclusive(v_s_2240_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2264_ = v_s_2240_;
v_isShared_2265_ = v_isSharedCheck_2270_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_inj_2262_);
lean_inc(v_ematch_2261_);
lean_inc(v_funCC_2260_);
lean_inc(v_extThms_2259_);
lean_inc(v_casesTypes_2258_);
lean_dec(v_s_2240_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2270_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2266_; lean_object* v___x_2268_; 
v___x_2266_ = l_Lean_NameSet_insert(v_funCC_2260_, v_declName_2257_);
if (v_isShared_2265_ == 0)
{
lean_ctor_set(v___x_2264_, 2, v___x_2266_);
v___x_2268_ = v___x_2264_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v_casesTypes_2258_);
lean_ctor_set(v_reuseFailAlloc_2269_, 1, v_extThms_2259_);
lean_ctor_set(v_reuseFailAlloc_2269_, 2, v___x_2266_);
lean_ctor_set(v_reuseFailAlloc_2269_, 3, v_ematch_2261_);
lean_ctor_set(v_reuseFailAlloc_2269_, 4, v_inj_2262_);
v___x_2268_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
return v___x_2268_;
}
}
}
case 2:
{
lean_object* v_declName_2271_; uint8_t v_eager_2272_; lean_object* v_casesTypes_2273_; lean_object* v_extThms_2274_; lean_object* v_funCC_2275_; lean_object* v_ematch_2276_; lean_object* v_inj_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2286_; 
v_declName_2271_ = lean_ctor_get(v_e_2241_, 0);
lean_inc(v_declName_2271_);
v_eager_2272_ = lean_ctor_get_uint8(v_e_2241_, sizeof(void*)*1);
lean_dec_ref_known(v_e_2241_, 1);
v_casesTypes_2273_ = lean_ctor_get(v_s_2240_, 0);
v_extThms_2274_ = lean_ctor_get(v_s_2240_, 1);
v_funCC_2275_ = lean_ctor_get(v_s_2240_, 2);
v_ematch_2276_ = lean_ctor_get(v_s_2240_, 3);
v_inj_2277_ = lean_ctor_get(v_s_2240_, 4);
v_isSharedCheck_2286_ = !lean_is_exclusive(v_s_2240_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2279_ = v_s_2240_;
v_isShared_2280_ = v_isSharedCheck_2286_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_inj_2277_);
lean_inc(v_ematch_2276_);
lean_inc(v_funCC_2275_);
lean_inc(v_extThms_2274_);
lean_inc(v_casesTypes_2273_);
lean_dec(v_s_2240_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2286_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2284_; 
v___x_2281_ = lean_box(v_eager_2272_);
v___x_2282_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_CasesTypes_insert_spec__0___redArg(v_casesTypes_2273_, v_declName_2271_, v___x_2281_);
if (v_isShared_2280_ == 0)
{
lean_ctor_set(v___x_2279_, 0, v___x_2282_);
v___x_2284_ = v___x_2279_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2282_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v_extThms_2274_);
lean_ctor_set(v_reuseFailAlloc_2285_, 2, v_funCC_2275_);
lean_ctor_set(v_reuseFailAlloc_2285_, 3, v_ematch_2276_);
lean_ctor_set(v_reuseFailAlloc_2285_, 4, v_inj_2277_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
case 3:
{
lean_object* v_thm_2287_; lean_object* v_casesTypes_2288_; lean_object* v_extThms_2289_; lean_object* v_funCC_2290_; lean_object* v_ematch_2291_; lean_object* v_inj_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2300_; 
v_thm_2287_ = lean_ctor_get(v_e_2241_, 0);
lean_inc_ref(v_thm_2287_);
lean_dec_ref_known(v_e_2241_, 1);
v_casesTypes_2288_ = lean_ctor_get(v_s_2240_, 0);
v_extThms_2289_ = lean_ctor_get(v_s_2240_, 1);
v_funCC_2290_ = lean_ctor_get(v_s_2240_, 2);
v_ematch_2291_ = lean_ctor_get(v_s_2240_, 3);
v_inj_2292_ = lean_ctor_get(v_s_2240_, 4);
v_isSharedCheck_2300_ = !lean_is_exclusive(v_s_2240_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2294_ = v_s_2240_;
v_isShared_2295_ = v_isSharedCheck_2300_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_inj_2292_);
lean_inc(v_ematch_2291_);
lean_inc(v_funCC_2290_);
lean_inc(v_extThms_2289_);
lean_inc(v_casesTypes_2288_);
lean_dec(v_s_2240_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2300_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2296_; lean_object* v___x_2298_; 
v___x_2296_ = l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0(v_ematch_2291_, v_thm_2287_);
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 3, v___x_2296_);
v___x_2298_ = v___x_2294_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_casesTypes_2288_);
lean_ctor_set(v_reuseFailAlloc_2299_, 1, v_extThms_2289_);
lean_ctor_set(v_reuseFailAlloc_2299_, 2, v_funCC_2290_);
lean_ctor_set(v_reuseFailAlloc_2299_, 3, v___x_2296_);
lean_ctor_set(v_reuseFailAlloc_2299_, 4, v_inj_2292_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
default: 
{
lean_object* v_thm_2301_; lean_object* v_casesTypes_2302_; lean_object* v_extThms_2303_; lean_object* v_funCC_2304_; lean_object* v_ematch_2305_; lean_object* v_inj_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2314_; 
v_thm_2301_ = lean_ctor_get(v_e_2241_, 0);
lean_inc_ref(v_thm_2301_);
lean_dec_ref_known(v_e_2241_, 1);
v_casesTypes_2302_ = lean_ctor_get(v_s_2240_, 0);
v_extThms_2303_ = lean_ctor_get(v_s_2240_, 1);
v_funCC_2304_ = lean_ctor_get(v_s_2240_, 2);
v_ematch_2305_ = lean_ctor_get(v_s_2240_, 3);
v_inj_2306_ = lean_ctor_get(v_s_2240_, 4);
v_isSharedCheck_2314_ = !lean_is_exclusive(v_s_2240_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2308_ = v_s_2240_;
v_isShared_2309_ = v_isSharedCheck_2314_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_inj_2306_);
lean_inc(v_ematch_2305_);
lean_inc(v_funCC_2304_);
lean_inc(v_extThms_2303_);
lean_inc(v_casesTypes_2302_);
lean_dec(v_s_2240_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2314_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2310_; lean_object* v___x_2312_; 
v___x_2310_ = l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__1(v_inj_2306_, v_thm_2301_);
if (v_isShared_2309_ == 0)
{
lean_ctor_set(v___x_2308_, 4, v___x_2310_);
v___x_2312_ = v___x_2308_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_casesTypes_2302_);
lean_ctor_set(v_reuseFailAlloc_2313_, 1, v_extThms_2303_);
lean_ctor_set(v_reuseFailAlloc_2313_, 2, v_funCC_2304_);
lean_ctor_set(v_reuseFailAlloc_2313_, 3, v_ematch_2305_);
lean_ctor_set(v_reuseFailAlloc_2313_, 4, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1(lean_object* v_00_u03b2_2315_, lean_object* v_x_2316_, lean_object* v_x_2317_, lean_object* v_x_2318_){
_start:
{
lean_object* v___x_2319_; 
v___x_2319_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1___redArg(v_x_2316_, v_x_2317_, v_x_2318_);
return v___x_2319_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2(lean_object* v_00_u03b2_2320_, lean_object* v_x_2321_, lean_object* v_x_2322_){
_start:
{
lean_object* v___x_2323_; 
v___x_2323_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2___redArg(v_x_2321_, v_x_2322_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2324_, lean_object* v_x_2325_, lean_object* v_x_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2(v_00_u03b2_2324_, v_x_2325_, v_x_2326_);
lean_dec_ref(v_x_2326_);
return v_res_2327_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3(lean_object* v_00_u03b2_2328_, lean_object* v_x_2329_, lean_object* v_x_2330_){
_start:
{
lean_object* v___x_2331_; 
v___x_2331_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3___redArg(v_x_2329_, v_x_2330_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3___boxed(lean_object* v_00_u03b2_2332_, lean_object* v_x_2333_, lean_object* v_x_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3(v_00_u03b2_2332_, v_x_2333_, v_x_2334_);
lean_dec_ref(v_x_2334_);
lean_dec_ref(v_x_2333_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4(lean_object* v_00_u03b2_2336_, lean_object* v_x_2337_, lean_object* v_x_2338_){
_start:
{
lean_object* v___x_2339_; 
v___x_2339_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4___redArg(v_x_2337_, v_x_2338_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4___boxed(lean_object* v_00_u03b2_2340_, lean_object* v_x_2341_, lean_object* v_x_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4(v_00_u03b2_2340_, v_x_2341_, v_x_2342_);
lean_dec(v_x_2342_);
lean_dec_ref(v_x_2341_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2344_, lean_object* v_x_2345_, size_t v_x_2346_, size_t v_x_2347_, lean_object* v_x_2348_, lean_object* v_x_2349_){
_start:
{
lean_object* v___x_2350_; 
v___x_2350_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2___redArg(v_x_2345_, v_x_2346_, v_x_2347_, v_x_2348_, v_x_2349_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2351_, lean_object* v_x_2352_, lean_object* v_x_2353_, lean_object* v_x_2354_, lean_object* v_x_2355_, lean_object* v_x_2356_){
_start:
{
size_t v_x_2276__boxed_2357_; size_t v_x_2277__boxed_2358_; lean_object* v_res_2359_; 
v_x_2276__boxed_2357_ = lean_unbox_usize(v_x_2353_);
lean_dec(v_x_2353_);
v_x_2277__boxed_2358_ = lean_unbox_usize(v_x_2354_);
lean_dec(v_x_2354_);
v_res_2359_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2(v_00_u03b2_2351_, v_x_2352_, v_x_2276__boxed_2357_, v_x_2277__boxed_2358_, v_x_2355_, v_x_2356_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_2360_, lean_object* v_x_2361_, size_t v_x_2362_, lean_object* v_x_2363_){
_start:
{
lean_object* v___x_2364_; 
v___x_2364_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4___redArg(v_x_2361_, v_x_2362_, v_x_2363_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b2_2365_, lean_object* v_x_2366_, lean_object* v_x_2367_, lean_object* v_x_2368_){
_start:
{
size_t v_x_2293__boxed_2369_; lean_object* v_res_2370_; 
v_x_2293__boxed_2369_ = lean_unbox_usize(v_x_2367_);
lean_dec(v_x_2367_);
v_res_2370_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__2_spec__4(v_00_u03b2_2365_, v_x_2366_, v_x_2293__boxed_2369_, v_x_2368_);
lean_dec_ref(v_x_2368_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6(lean_object* v_00_u03b2_2371_, lean_object* v_x_2372_, size_t v_x_2373_, lean_object* v_x_2374_){
_start:
{
lean_object* v___x_2375_; 
v___x_2375_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6___redArg(v_x_2372_, v_x_2373_, v_x_2374_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6___boxed(lean_object* v_00_u03b2_2376_, lean_object* v_x_2377_, lean_object* v_x_2378_, lean_object* v_x_2379_){
_start:
{
size_t v_x_2304__boxed_2380_; lean_object* v_res_2381_; 
v_x_2304__boxed_2380_ = lean_unbox_usize(v_x_2378_);
lean_dec(v_x_2378_);
v_res_2381_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6(v_00_u03b2_2376_, v_x_2377_, v_x_2304__boxed_2380_, v_x_2379_);
lean_dec_ref(v_x_2379_);
lean_dec_ref(v_x_2377_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8(lean_object* v_00_u03b2_2382_, lean_object* v_x_2383_, size_t v_x_2384_, lean_object* v_x_2385_){
_start:
{
lean_object* v___x_2386_; 
v___x_2386_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8___redArg(v_x_2383_, v_x_2384_, v_x_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8___boxed(lean_object* v_00_u03b2_2387_, lean_object* v_x_2388_, lean_object* v_x_2389_, lean_object* v_x_2390_){
_start:
{
size_t v_x_2315__boxed_2391_; lean_object* v_res_2392_; 
v_x_2315__boxed_2391_ = lean_unbox_usize(v_x_2389_);
lean_dec(v_x_2389_);
v_res_2392_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8(v_00_u03b2_2387_, v_x_2388_, v_x_2315__boxed_2391_, v_x_2390_);
lean_dec(v_x_2390_);
lean_dec_ref(v_x_2388_);
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_2393_, lean_object* v_n_2394_, lean_object* v_k_2395_, lean_object* v_v_2396_){
_start:
{
lean_object* v___x_2397_; 
v___x_2397_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5___redArg(v_n_2394_, v_k_2395_, v_v_2396_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_2398_, size_t v_depth_2399_, lean_object* v_keys_2400_, lean_object* v_vals_2401_, lean_object* v_heq_2402_, lean_object* v_i_2403_, lean_object* v_entries_2404_){
_start:
{
lean_object* v___x_2405_; 
v___x_2405_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6___redArg(v_depth_2399_, v_keys_2400_, v_vals_2401_, v_i_2403_, v_entries_2404_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_2406_, lean_object* v_depth_2407_, lean_object* v_keys_2408_, lean_object* v_vals_2409_, lean_object* v_heq_2410_, lean_object* v_i_2411_, lean_object* v_entries_2412_){
_start:
{
size_t v_depth_boxed_2413_; lean_object* v_res_2414_; 
v_depth_boxed_2413_ = lean_unbox_usize(v_depth_2407_);
lean_dec(v_depth_2407_);
v_res_2414_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__6(v_00_u03b2_2406_, v_depth_boxed_2413_, v_keys_2408_, v_vals_2409_, v_heq_2410_, v_i_2411_, v_entries_2412_);
lean_dec_ref(v_vals_2409_);
lean_dec_ref(v_keys_2408_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12(lean_object* v_00_u03b2_2415_, lean_object* v_keys_2416_, lean_object* v_vals_2417_, lean_object* v_heq_2418_, lean_object* v_i_2419_, lean_object* v_k_2420_){
_start:
{
lean_object* v___x_2421_; 
v___x_2421_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12___redArg(v_keys_2416_, v_vals_2417_, v_i_2419_, v_k_2420_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12___boxed(lean_object* v_00_u03b2_2422_, lean_object* v_keys_2423_, lean_object* v_vals_2424_, lean_object* v_heq_2425_, lean_object* v_i_2426_, lean_object* v_k_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__3_spec__6_spec__12(v_00_u03b2_2422_, v_keys_2423_, v_vals_2424_, v_heq_2425_, v_i_2426_, v_k_2427_);
lean_dec_ref(v_k_2427_);
lean_dec_ref(v_vals_2424_);
lean_dec_ref(v_keys_2423_);
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15(lean_object* v_00_u03b2_2429_, lean_object* v_keys_2430_, lean_object* v_vals_2431_, lean_object* v_heq_2432_, lean_object* v_i_2433_, lean_object* v_k_2434_){
_start:
{
lean_object* v___x_2435_; 
v___x_2435_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15___redArg(v_keys_2430_, v_vals_2431_, v_i_2433_, v_k_2434_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15___boxed(lean_object* v_00_u03b2_2436_, lean_object* v_keys_2437_, lean_object* v_vals_2438_, lean_object* v_heq_2439_, lean_object* v_i_2440_, lean_object* v_k_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__4_spec__8_spec__15(v_00_u03b2_2436_, v_keys_2437_, v_vals_2438_, v_heq_2439_, v_i_2440_, v_k_2441_);
lean_dec(v_k_2441_);
lean_dec_ref(v_vals_2438_);
lean_dec_ref(v_keys_2437_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5_spec__9(lean_object* v_00_u03b2_2443_, lean_object* v_x_2444_, lean_object* v_x_2445_, lean_object* v_x_2446_, lean_object* v_x_2447_){
_start:
{
lean_object* v___x_2448_; 
v___x_2448_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0_spec__1_spec__2_spec__5_spec__9___redArg(v_x_2444_, v_x_2445_, v_x_2446_, v_x_2447_);
return v___x_2448_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__12(void){
_start:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; 
v___x_2475_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__10));
v___x_2476_ = l_Lean_mkAtom(v___x_2475_);
return v___x_2476_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__13(void){
_start:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2477_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__12, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__12_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__12);
v___x_2478_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__5));
v___x_2479_ = lean_array_push(v___x_2478_, v___x_2477_);
return v___x_2479_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__18(void){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2488_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__17));
v___x_2489_ = l_Lean_mkAtom(v___x_2488_);
return v___x_2489_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__19(void){
_start:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2490_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__18, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__18_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__18);
v___x_2491_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__5));
v___x_2492_ = lean_array_push(v___x_2491_, v___x_2490_);
return v___x_2492_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__20(void){
_start:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2493_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__19, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__19_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__19);
v___x_2494_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__16));
v___x_2495_ = lean_box(2);
v___x_2496_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2495_);
lean_ctor_set(v___x_2496_, 1, v___x_2494_);
lean_ctor_set(v___x_2496_, 2, v___x_2493_);
return v___x_2496_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__21(void){
_start:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2497_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__20, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__20_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__20);
v___x_2498_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__13, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__13_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__13);
v___x_2499_ = lean_array_push(v___x_2498_, v___x_2497_);
return v___x_2499_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__22(void){
_start:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2500_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__21, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__21_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__21);
v___x_2501_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__11));
v___x_2502_ = lean_box(2);
v___x_2503_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
lean_ctor_set(v___x_2503_, 1, v___x_2501_);
lean_ctor_set(v___x_2503_, 2, v___x_2500_);
return v___x_2503_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__23(void){
_start:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2504_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__22, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__22_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__22);
v___x_2505_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__5));
v___x_2506_ = lean_array_push(v___x_2505_, v___x_2504_);
return v___x_2506_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__24(void){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v___x_2507_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__23, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__23_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__23);
v___x_2508_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__9));
v___x_2509_ = lean_box(2);
v___x_2510_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2509_);
lean_ctor_set(v___x_2510_, 1, v___x_2508_);
lean_ctor_set(v___x_2510_, 2, v___x_2507_);
return v___x_2510_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__25(void){
_start:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2511_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__24, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__24_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__24);
v___x_2512_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__5));
v___x_2513_ = lean_array_push(v___x_2512_, v___x_2511_);
return v___x_2513_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__26(void){
_start:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2514_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__25, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__25_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__25);
v___x_2515_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__7));
v___x_2516_ = lean_box(2);
v___x_2517_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2517_, 0, v___x_2516_);
lean_ctor_set(v___x_2517_, 1, v___x_2515_);
lean_ctor_set(v___x_2517_, 2, v___x_2514_);
return v___x_2517_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__27(void){
_start:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2518_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__26, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__26_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__26);
v___x_2519_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__5));
v___x_2520_ = lean_array_push(v___x_2519_, v___x_2518_);
return v___x_2520_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__28(void){
_start:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2521_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__27, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__27_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__27);
v___x_2522_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___auto__1___closed__4));
v___x_2523_ = lean_box(2);
v___x_2524_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2523_);
lean_ctor_set(v___x_2524_, 1, v___x_2522_);
lean_ctor_set(v___x_2524_, 2, v___x_2521_);
return v___x_2524_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___auto__1(void){
_start:
{
lean_object* v___x_2525_; 
v___x_2525_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___auto__1___closed__28, &l_Lean_Meta_Grind_mkExtension___auto__1___closed__28_once, _init_l_Lean_Meta_Grind_mkExtension___auto__1___closed__28);
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Grind_mkExtension_spec__0(lean_object* v_msg_2526_){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2527_ = l_Lean_instInhabitedName;
v___x_2528_ = lean_panic_fn_borrowed(v___x_2527_, v_msg_2526_);
return v___x_2528_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkExtension___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2531_ = ((lean_object*)(l_Lean_Meta_Grind_Theorems_insert___at___00Lean_Meta_Grind_ExtensionState_addEntry_spec__0___closed__2));
v___x_2532_ = lean_unsigned_to_nat(17u);
v___x_2533_ = lean_unsigned_to_nat(203u);
v___x_2534_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___lam__0___closed__1));
v___x_2535_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___lam__0___closed__0));
v___x_2536_ = l_mkPanicMessageWithDecl(v___x_2535_, v___x_2534_, v___x_2533_, v___x_2532_, v___x_2531_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension___lam__0(lean_object* v_x_2537_, lean_object* v_e_2538_){
_start:
{
lean_object* v___y_2540_; 
switch(lean_obj_tag(v_e_2538_))
{
case 3:
{
lean_object* v_thm_2547_; lean_object* v_origin_2548_; 
v_thm_2547_ = lean_ctor_get(v_e_2538_, 0);
v_origin_2548_ = lean_ctor_get(v_thm_2547_, 5);
if (lean_obj_tag(v_origin_2548_) == 0)
{
lean_object* v_declName_2549_; 
v_declName_2549_ = lean_ctor_get(v_origin_2548_, 0);
lean_inc(v_declName_2549_);
v___y_2540_ = v_declName_2549_;
goto v___jp_2539_;
}
else
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___lam__0___closed__2, &l_Lean_Meta_Grind_mkExtension___lam__0___closed__2_once, _init_l_Lean_Meta_Grind_mkExtension___lam__0___closed__2);
v___x_2551_ = l_panic___at___00Lean_Meta_Grind_mkExtension_spec__0(v___x_2550_);
v___y_2540_ = v___x_2551_;
goto v___jp_2539_;
}
}
case 4:
{
lean_object* v_thm_2552_; lean_object* v_origin_2553_; 
v_thm_2552_ = lean_ctor_get(v_e_2538_, 0);
v_origin_2553_ = lean_ctor_get(v_thm_2552_, 3);
if (lean_obj_tag(v_origin_2553_) == 0)
{
lean_object* v_declName_2554_; 
v_declName_2554_ = lean_ctor_get(v_origin_2553_, 0);
lean_inc(v_declName_2554_);
v___y_2540_ = v_declName_2554_;
goto v___jp_2539_;
}
else
{
lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2555_ = lean_obj_once(&l_Lean_Meta_Grind_mkExtension___lam__0___closed__2, &l_Lean_Meta_Grind_mkExtension___lam__0___closed__2_once, _init_l_Lean_Meta_Grind_mkExtension___lam__0___closed__2);
v___x_2556_ = l_panic___at___00Lean_Meta_Grind_mkExtension_spec__0(v___x_2555_);
v___y_2540_ = v___x_2556_;
goto v___jp_2539_;
}
}
default: 
{
lean_object* v_declName_2557_; 
v_declName_2557_ = lean_ctor_get(v_e_2538_, 0);
lean_inc(v_declName_2557_);
v___y_2540_ = v_declName_2557_;
goto v___jp_2539_;
}
}
v___jp_2539_:
{
uint8_t v___x_2541_; 
v___x_2541_ = l_Lean_isPrivateName(v___y_2540_);
lean_dec(v___y_2540_);
if (v___x_2541_ == 0)
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2542_, 0, v_e_2538_);
lean_inc_ref_n(v___x_2542_, 2);
v___x_2543_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2542_);
lean_ctor_set(v___x_2543_, 1, v___x_2542_);
lean_ctor_set(v___x_2543_, 2, v___x_2542_);
return v___x_2543_;
}
else
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2544_ = lean_box(0);
v___x_2545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2545_, 0, v_e_2538_);
v___x_2546_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2544_);
lean_ctor_set(v___x_2546_, 1, v___x_2544_);
lean_ctor_set(v___x_2546_, 2, v___x_2545_);
return v___x_2546_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension___lam__0___boxed(lean_object* v_x_2558_, lean_object* v_e_2559_){
_start:
{
lean_object* v_res_2560_; 
v_res_2560_ = l_Lean_Meta_Grind_mkExtension___lam__0(v_x_2558_, v_e_2559_);
lean_dec_ref(v_x_2558_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension___lam__1(lean_object* v___y_2561_){
_start:
{
lean_inc_ref(v___y_2561_);
return v___y_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension___lam__1___boxed(lean_object* v___y_2562_){
_start:
{
lean_object* v_res_2563_; 
v_res_2563_ = l_Lean_Meta_Grind_mkExtension___lam__1(v___y_2562_);
lean_dec_ref(v___y_2562_);
return v_res_2563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension(lean_object* v_name_2567_){
_start:
{
lean_object* v___f_2569_; lean_object* v___f_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v___f_2569_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___closed__0));
v___f_2570_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___closed__1));
v___x_2571_ = ((lean_object*)(l_Lean_Meta_Grind_mkExtension___closed__2));
v___x_2572_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__1, &l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__1_once, _init_l_Lean_Meta_Grind_instInhabitedExtensionState_default___closed__1);
v___x_2573_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2573_, 0, v_name_2567_);
lean_ctor_set(v___x_2573_, 1, v___x_2571_);
lean_ctor_set(v___x_2573_, 2, v___x_2572_);
lean_ctor_set(v___x_2573_, 3, v___f_2570_);
lean_ctor_set(v___x_2573_, 4, v___f_2569_);
v___x_2574_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_2573_);
return v___x_2574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkExtension___boxed(lean_object* v_name_2575_, lean_object* v_a_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lean_Meta_Grind_mkExtension(v_name_2575_);
return v_res_2577_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2578_ = lean_obj_once(&l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0, &l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0_once, _init_l_Lean_Meta_Grind_instInhabitedCasesTypes_default___closed__0);
v___x_2579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2579_, 0, v___x_2578_);
return v___x_2579_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2580_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__0);
v___x_2581_ = lean_unsigned_to_nat(0u);
v___x_2582_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2581_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
lean_ctor_set(v___x_2582_, 2, v___x_2581_);
lean_ctor_set(v___x_2582_, 3, v___x_2581_);
lean_ctor_set(v___x_2582_, 4, v___x_2580_);
lean_ctor_set(v___x_2582_, 5, v___x_2580_);
lean_ctor_set(v___x_2582_, 6, v___x_2580_);
lean_ctor_set(v___x_2582_, 7, v___x_2580_);
lean_ctor_set(v___x_2582_, 8, v___x_2580_);
lean_ctor_set(v___x_2582_, 9, v___x_2580_);
lean_ctor_set(v___x_2582_, 10, v___x_2580_);
return v___x_2582_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2583_ = lean_unsigned_to_nat(32u);
v___x_2584_ = lean_mk_empty_array_with_capacity(v___x_2583_);
v___x_2585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2584_);
return v___x_2585_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2586_ = ((size_t)5ULL);
v___x_2587_ = lean_unsigned_to_nat(0u);
v___x_2588_ = lean_unsigned_to_nat(32u);
v___x_2589_ = lean_mk_empty_array_with_capacity(v___x_2588_);
v___x_2590_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__2);
v___x_2591_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2591_, 0, v___x_2590_);
lean_ctor_set(v___x_2591_, 1, v___x_2589_);
lean_ctor_set(v___x_2591_, 2, v___x_2587_);
lean_ctor_set(v___x_2591_, 3, v___x_2587_);
lean_ctor_set_usize(v___x_2591_, 4, v___x_2586_);
return v___x_2591_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2592_ = lean_box(1);
v___x_2593_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__3);
v___x_2594_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__0);
v___x_2595_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2594_);
lean_ctor_set(v___x_2595_, 1, v___x_2593_);
lean_ctor_set(v___x_2595_, 2, v___x_2592_);
return v___x_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0(lean_object* v_msgData_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v___x_2600_; lean_object* v_toCold_2601_; lean_object* v_env_2602_; lean_object* v_options_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2600_ = lean_st_ref_get(v___y_2598_);
v_toCold_2601_ = lean_ctor_get(v___y_2597_, 0);
v_env_2602_ = lean_ctor_get(v___x_2600_, 0);
lean_inc_ref(v_env_2602_);
lean_dec(v___x_2600_);
v_options_2603_ = lean_ctor_get(v_toCold_2601_, 2);
v___x_2604_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__1);
v___x_2605_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___closed__4);
lean_inc_ref(v_options_2603_);
v___x_2606_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2606_, 0, v_env_2602_);
lean_ctor_set(v___x_2606_, 1, v___x_2604_);
lean_ctor_set(v___x_2606_, 2, v___x_2605_);
lean_ctor_set(v___x_2606_, 3, v_options_2603_);
v___x_2607_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2607_, 0, v___x_2606_);
lean_ctor_set(v___x_2607_, 1, v_msgData_2596_);
v___x_2608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2607_);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0___boxed(lean_object* v_msgData_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_){
_start:
{
lean_object* v_res_2613_; 
v_res_2613_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0(v_msgData_2609_, v___y_2610_, v___y_2611_);
lean_dec(v___y_2611_);
lean_dec_ref(v___y_2610_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0___redArg(lean_object* v_msg_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_){
_start:
{
lean_object* v_ref_2618_; lean_object* v___x_2619_; lean_object* v_a_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2628_; 
v_ref_2618_ = lean_ctor_get(v___y_2615_, 2);
v___x_2619_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0_spec__0(v_msg_2614_, v___y_2615_, v___y_2616_);
v_a_2620_ = lean_ctor_get(v___x_2619_, 0);
v_isSharedCheck_2628_ = !lean_is_exclusive(v___x_2619_);
if (v_isSharedCheck_2628_ == 0)
{
v___x_2622_ = v___x_2619_;
v_isShared_2623_ = v_isSharedCheck_2628_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_a_2620_);
lean_dec(v___x_2619_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2628_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2624_; lean_object* v___x_2626_; 
lean_inc(v_ref_2618_);
v___x_2624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2624_, 0, v_ref_2618_);
lean_ctor_set(v___x_2624_, 1, v_a_2620_);
if (v_isShared_2623_ == 0)
{
lean_ctor_set_tag(v___x_2622_, 1);
lean_ctor_set(v___x_2622_, 0, v___x_2624_);
v___x_2626_ = v___x_2622_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v___x_2624_);
v___x_2626_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
return v___x_2626_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0___redArg___boxed(lean_object* v_msg_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
lean_object* v_res_2633_; 
v_res_2633_ = l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0___redArg(v_msg_2629_, v___y_2630_, v___y_2631_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
return v_res_2633_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__1(void){
_start:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2635_ = ((lean_object*)(l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__0));
v___x_2636_ = l_Lean_stringToMessageData(v___x_2635_);
return v___x_2636_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__3(void){
_start:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2638_ = ((lean_object*)(l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__2));
v___x_2639_ = l_Lean_stringToMessageData(v___x_2638_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(lean_object* v_declName_2640_, lean_object* v_a_2641_, lean_object* v_a_2642_){
_start:
{
lean_object* v___x_2644_; uint8_t v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2644_ = lean_obj_once(&l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__1, &l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__1_once, _init_l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__1);
v___x_2645_ = 0;
v___x_2646_ = l_Lean_MessageData_ofConstName(v_declName_2640_, v___x_2645_);
v___x_2647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2647_, 0, v___x_2644_);
lean_ctor_set(v___x_2647_, 1, v___x_2646_);
v___x_2648_ = lean_obj_once(&l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__3, &l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__3_once, _init_l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___closed__3);
v___x_2649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2647_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___x_2650_ = l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0___redArg(v___x_2649_, v_a_2641_, v_a_2642_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg___boxed(lean_object* v_declName_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_2651_, v_a_2652_, v_a_2653_);
lean_dec(v_a_2653_);
lean_dec_ref(v_a_2652_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute(lean_object* v_00_u03b1_2656_, lean_object* v_declName_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_){
_start:
{
lean_object* v___x_2661_; 
v___x_2661_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_2657_, v_a_2658_, v_a_2659_);
return v___x_2661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___boxed(lean_object* v_00_u03b1_2662_, lean_object* v_declName_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute(v_00_u03b1_2662_, v_declName_2663_, v_a_2664_, v_a_2665_);
lean_dec(v_a_2665_);
lean_dec_ref(v_a_2664_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0(lean_object* v_00_u03b1_2668_, lean_object* v_msg_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_){
_start:
{
lean_object* v___x_2673_; 
v___x_2673_ = l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0___redArg(v_msg_2669_, v___y_2670_, v___y_2671_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0___boxed(lean_object* v_00_u03b1_2674_, lean_object* v_msg_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l_Lean_throwError___at___00Lean_Meta_Grind_throwNotMarkedWithGrindAttribute_spec__0(v_00_u03b1_2674_, v_msg_2675_, v___y_2676_, v___y_2677_);
lean_dec(v___y_2677_);
lean_dec_ref(v___y_2676_);
return v_res_2679_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Theorems(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Extension(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_instInhabitedCasesTypes_default = _init_l_Lean_Meta_Grind_instInhabitedCasesTypes_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedCasesTypes_default);
l_Lean_Meta_Grind_instInhabitedCasesTypes = _init_l_Lean_Meta_Grind_instInhabitedCasesTypes();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedCasesTypes);
l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default = _init_l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedSymbolPriorities_default);
l_Lean_Meta_Grind_instInhabitedSymbolPriorities = _init_l_Lean_Meta_Grind_instInhabitedSymbolPriorities();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedSymbolPriorities);
l_Lean_Meta_Grind_instInhabitedCnstrRHS_default = _init_l_Lean_Meta_Grind_instInhabitedCnstrRHS_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedCnstrRHS_default);
l_Lean_Meta_Grind_instInhabitedCnstrRHS = _init_l_Lean_Meta_Grind_instInhabitedCnstrRHS();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedCnstrRHS);
l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default = _init_l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint_default);
l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint = _init_l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedEMatchTheoremConstraint);
l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default = _init_l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedEMatchTheorem_default);
l_Lean_Meta_Grind_instInhabitedEMatchTheorem = _init_l_Lean_Meta_Grind_instInhabitedEMatchTheorem();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedEMatchTheorem);
l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default = _init_l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedInjectiveTheorem_default);
l_Lean_Meta_Grind_instInhabitedInjectiveTheorem = _init_l_Lean_Meta_Grind_instInhabitedInjectiveTheorem();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedInjectiveTheorem);
l_Lean_Meta_Grind_instInhabitedEntry_default = _init_l_Lean_Meta_Grind_instInhabitedEntry_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedEntry_default);
l_Lean_Meta_Grind_instInhabitedEntry = _init_l_Lean_Meta_Grind_instInhabitedEntry();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedEntry);
l_Lean_Meta_Grind_instInhabitedExtensionState_default = _init_l_Lean_Meta_Grind_instInhabitedExtensionState_default();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedExtensionState_default);
l_Lean_Meta_Grind_instInhabitedExtensionState = _init_l_Lean_Meta_Grind_instInhabitedExtensionState();
lean_mark_persistent(l_Lean_Meta_Grind_instInhabitedExtensionState);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Extension(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Meta_Grind_mkExtension___auto__1 = _init_l_Lean_Meta_Grind_mkExtension___auto__1();
lean_mark_persistent(l_Lean_Meta_Grind_mkExtension___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Theorems(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Extension(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Extension(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.LocalContext
// Imports: public import Init.Data.Nat.Control public import Lean.Data.PersistentArray public import Lean.Expr import Init.Data.ToString.Macro import Init.Omega
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_PersistentArray_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVarId(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedFVarId_default;
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_anyM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_pop___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentHashMap_Node_isEmpty___redArg(lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_sanitizeName(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_foldRev___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_getSanitizeNames(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedLocalDeclKind_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedLocalDeclKind;
static const lean_string_object l_Lean_instReprLocalDeclKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.LocalDeclKind.default"};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__0 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprLocalDeclKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__1 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__1_value;
static const lean_string_object l_Lean_instReprLocalDeclKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.LocalDeclKind.implDetail"};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__2 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__2_value;
static const lean_ctor_object l_Lean_instReprLocalDeclKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__2_value)}};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__3 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__3_value;
static const lean_string_object l_Lean_instReprLocalDeclKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.LocalDeclKind.auxDecl"};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__4 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprLocalDeclKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprLocalDeclKind_repr___closed__5 = (const lean_object*)&l_Lean_instReprLocalDeclKind_repr___closed__5_value;
static lean_once_cell_t l_Lean_instReprLocalDeclKind_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLocalDeclKind_repr___closed__6;
static lean_once_cell_t l_Lean_instReprLocalDeclKind_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLocalDeclKind_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_instReprLocalDeclKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLocalDeclKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLocalDeclKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLocalDeclKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLocalDeclKind___closed__0 = (const lean_object*)&l_Lean_instReprLocalDeclKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLocalDeclKind = (const lean_object*)&l_Lean_instReprLocalDeclKind___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_LocalDeclKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instDecidableEqLocalDeclKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instDecidableEqLocalDeclKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_instHashableLocalDeclKind_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instHashableLocalDeclKind_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableLocalDeclKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableLocalDeclKind_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableLocalDeclKind___closed__0 = (const lean_object*)&l_Lean_instHashableLocalDeclKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableLocalDeclKind = (const lean_object*)&l_Lean_instHashableLocalDeclKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_cdecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_cdecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ldecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ldecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedLocalDecl_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalDecl_default___closed__0;
static const lean_string_object l_Lean_instInhabitedLocalDecl_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_instInhabitedLocalDecl_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedLocalDecl_default___closed__1_value;
static const lean_ctor_object l_Lean_instInhabitedLocalDecl_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedLocalDecl_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_instInhabitedLocalDecl_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedLocalDecl_default___closed__2_value;
static lean_once_cell_t l_Lean_instInhabitedLocalDecl_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalDecl_default___closed__3;
static lean_once_cell_t l_Lean_instInhabitedLocalDecl_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalDecl_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLocalDecl_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLocalDecl;
LEAN_EXPORT lean_object* lean_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkLocalDeclEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_mk_let_decl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_local_decl_binder_info(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_binderInfoEx___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isLet___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_index(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_index___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_fvarId___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_userName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_userName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_type(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_type___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setType(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_binderInfo___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_kind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_kind___boxed(lean_object*);
static lean_once_cell_t l_Lean_LocalDecl_isAuxDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalDecl_isAuxDecl___closed__0;
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isAuxDecl___boxed(lean_object*);
static lean_once_cell_t l_Lean_LocalDecl_isImplementationDetail___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalDecl_isImplementationDetail___closed__0;
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isImplementationDetail___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_LocalDecl_value_spec__0(lean_object*);
static const lean_string_object l_Lean_LocalDecl_value___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.LocalContext"};
static const lean_object* l_Lean_LocalDecl_value___closed__0 = (const lean_object*)&l_Lean_LocalDecl_value___closed__0_value;
static const lean_string_object l_Lean_LocalDecl_value___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.LocalDecl.value"};
static const lean_object* l_Lean_LocalDecl_value___closed__1 = (const lean_object*)&l_Lean_LocalDecl_value___closed__1_value;
static const lean_string_object l_Lean_LocalDecl_value___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "let declaration expected"};
static const lean_object* l_Lean_LocalDecl_value___closed__2 = (const lean_object*)&l_Lean_LocalDecl_value___closed__2_value;
static lean_once_cell_t l_Lean_LocalDecl_value___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalDecl_value___closed__3;
static const lean_string_object l_Lean_LocalDecl_value___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "dependent let declaration expected"};
static const lean_object* l_Lean_LocalDecl_value___closed__4 = (const lean_object*)&l_Lean_LocalDecl_value___closed__4_value;
static lean_once_cell_t l_Lean_LocalDecl_value___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalDecl_value___closed__5;
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_hasValue(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_hasValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setNondep(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setNondep___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isNondep(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isNondep___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setUserName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(lean_object*);
static const lean_string_object l_Lean_LocalDecl_setBinderInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.LocalDecl.setBinderInfo"};
static const lean_object* l_Lean_LocalDecl_setBinderInfo___closed__0 = (const lean_object*)&l_Lean_LocalDecl_setBinderInfo___closed__0_value;
static const lean_string_object l_Lean_LocalDecl_setBinderInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected let declaration"};
static const lean_object* l_Lean_LocalDecl_setBinderInfo___closed__1 = (const lean_object*)&l_Lean_LocalDecl_setBinderInfo___closed__1_value;
static lean_once_cell_t l_Lean_LocalDecl_setBinderInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalDecl_setBinderInfo___closed__2;
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setBinderInfo(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setBinderInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalDecl_hasExprMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_hasExprMVar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setKind(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setKind___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedLocalContext_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalContext_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedLocalContext_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalContext_default___closed__1;
static lean_once_cell_t l_Lean_instInhabitedLocalContext_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalContext_default___closed__2;
static lean_once_cell_t l_Lean_instInhabitedLocalContext_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalContext_default___closed__3;
static lean_once_cell_t l_Lean_instInhabitedLocalContext_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLocalContext_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLocalContext_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLocalContext;
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkEmpty___redArg();
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkEmpty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_LocalContext_mkEmpty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalContext_mkEmpty___closed__0;
LEAN_EXPORT lean_object* lean_mk_empty_local_ctx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_empty;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_local_ctx_is_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_mkLocalDeclExported___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_local_ctx_mk_let_decl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_mkLetDeclExported___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkAuxDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_addDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_local_ctx_find(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFVar_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFVar_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_LocalContext_get_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.LocalContext.get!"};
static const lean_object* l_Lean_LocalContext_get_x21___closed__0 = (const lean_object*)&l_Lean_LocalContext_get_x21___closed__0_value;
static const lean_string_object l_Lean_LocalContext_get_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unknown free variable"};
static const lean_object* l_Lean_LocalContext_get_x21___closed__1 = (const lean_object*)&l_Lean_LocalContext_get_x21___closed__1_value;
static lean_once_cell_t l_Lean_LocalContext_get_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalContext_get_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_LocalContext_get_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVar_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVar_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_containsFVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_containsFVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_LocalContext_getFVarIds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_LocalContext_getFVarIds___closed__0 = (const lean_object*)&l_Lean_LocalContext_getFVarIds___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVarIds(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVarIds___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVars(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVars___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_popTailNoneAux(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_local_ctx_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_pop(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserName_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_LocalContext_getFromUserName_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.LocalContext.getFromUserName!"};
static const lean_object* l_Lean_LocalContext_getFromUserName_x21___closed__0 = (const lean_object*)&l_Lean_LocalContext_getFromUserName_x21___closed__0_value;
static const lean_string_object l_Lean_LocalContext_getFromUserName_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unknown local declaration `"};
static const lean_object* l_Lean_LocalContext_getFromUserName_x21___closed__1 = (const lean_object*)&l_Lean_LocalContext_getFromUserName_x21___closed__1_value;
static const lean_string_object l_Lean_LocalContext_getFromUserName_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_LocalContext_getFromUserName_x21___closed__2 = (const lean_object*)&l_Lean_LocalContext_getFromUserName_x21___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFromUserName_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFromUserName_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_usesUserName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_usesUserName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getUnusedName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getUnusedName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_lastDecl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_lastDecl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_renameUserName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_renameUserName___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_LocalContext_modifyLocalDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_modifyLocalDecl___closed__0 = (const lean_object*)&l_Lean_LocalContext_modifyLocalDecl___closed__0_value;
static const lean_closure_object l_Lean_LocalContext_modifyLocalDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_modifyLocalDecl___closed__1 = (const lean_object*)&l_Lean_LocalContext_modifyLocalDecl___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_LocalContext_modifyLocalDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_modifyLocalDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setKind(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setKind___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setBinderInfo(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setBinderInfo___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_setType(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_local_ctx_num_indices(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getAt_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getAt_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__0 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__0_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__1 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__1_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__2 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__2_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__3 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__3_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__4 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__4_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__5 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__5_value;
static const lean_closure_object l_Lean_LocalContext_foldl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__6 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__6_value;
static const lean_ctor_object l_Lean_LocalContext_foldl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__0_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__1_value)}};
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__7 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__7_value;
static const lean_ctor_object l_Lean_LocalContext_foldl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__7_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__2_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__3_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__4_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__5_value)}};
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__8 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__8_value;
static const lean_ctor_object l_Lean_LocalContext_foldl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__8_value),((lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__6_value)}};
static const lean_object* l_Lean_LocalContext_foldl___redArg___closed__9 = (const lean_object*)&l_Lean_LocalContext_foldl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_size___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRev_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_isSubPrefixOfAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_isSubPrefixOfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_isSubPrefixOf___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_LocalContext_mkBinding___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.LocalContext.mkBinding"};
static const lean_object* l_Lean_LocalContext_mkBinding___lam__0___closed__0 = (const lean_object*)&l_Lean_LocalContext_mkBinding___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_LocalContext_mkBinding___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LocalContext_mkBinding___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLambda(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkForall(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_any___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_any___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_any(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_any___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_all___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_all___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LocalContext_all(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_all___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_sanitizeNames(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_getRoundtrippingUserName_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_sortFVarsByContextOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_sortFVarsByContextOrder___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_LocalContext_findFromUserNames___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_LocalContext_findFromUserNames___redArg___closed__0 = (const lean_object*)&l_Lean_LocalContext_findFromUserNames___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadLCtxOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadLCtxOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_getLocalHyps___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getLocalHyps___redArg___closed__0 = (const lean_object*)&l_Lean_getLocalHyps___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLocalHyps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_replaceFVarId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDecl_replaceFVarId___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx(uint8_t v_x_1_){
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
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lean_LocalDeclKind_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_LocalDeclKind_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lean_LocalDeclKind_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___redArg(lean_object* v_default_23_){
_start:
{
lean_inc(v_default_23_);
return v_default_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___redArg___boxed(lean_object* v_default_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_LocalDeclKind_default_elim___redArg(v_default_24_);
lean_dec(v_default_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_default_29_){
_start:
{
lean_inc(v_default_29_);
return v_default_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_default_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_default_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lean_LocalDeclKind_default_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_default_33_);
lean_dec(v_default_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___redArg(lean_object* v_implDetail_36_){
_start:
{
lean_inc(v_implDetail_36_);
return v_implDetail_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___redArg___boxed(lean_object* v_implDetail_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_LocalDeclKind_implDetail_elim___redArg(v_implDetail_37_);
lean_dec(v_implDetail_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_implDetail_42_){
_start:
{
lean_inc(v_implDetail_42_);
return v_implDetail_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_implDetail_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_implDetail_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lean_LocalDeclKind_implDetail_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_implDetail_46_);
lean_dec(v_implDetail_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___redArg(lean_object* v_auxDecl_49_){
_start:
{
lean_inc(v_auxDecl_49_);
return v_auxDecl_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___redArg___boxed(lean_object* v_auxDecl_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_LocalDeclKind_auxDecl_elim___redArg(v_auxDecl_50_);
lean_dec(v_auxDecl_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_auxDecl_55_){
_start:
{
lean_inc(v_auxDecl_55_);
return v_auxDecl_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_auxDecl_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_auxDecl_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lean_LocalDeclKind_auxDecl_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_auxDecl_59_);
lean_dec(v_auxDecl_59_);
return v_res_61_;
}
}
static uint8_t _init_l_Lean_instInhabitedLocalDeclKind_default(void){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
static uint8_t _init_l_Lean_instInhabitedLocalDeclKind(void){
_start:
{
uint8_t v___x_63_; 
v___x_63_ = 0;
return v___x_63_;
}
}
static lean_object* _init_l_Lean_instReprLocalDeclKind_repr___closed__6(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = lean_unsigned_to_nat(2u);
v___x_74_ = lean_nat_to_int(v___x_73_);
return v___x_74_;
}
}
static lean_object* _init_l_Lean_instReprLocalDeclKind_repr___closed__7(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_unsigned_to_nat(1u);
v___x_76_ = lean_nat_to_int(v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLocalDeclKind_repr(uint8_t v_x_77_, lean_object* v_prec_78_){
_start:
{
lean_object* v___y_80_; lean_object* v___y_87_; lean_object* v___y_94_; 
switch(v_x_77_)
{
case 0:
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = lean_unsigned_to_nat(1024u);
v___x_101_ = lean_nat_dec_le(v___x_100_, v_prec_78_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; 
v___x_102_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__6, &l_Lean_instReprLocalDeclKind_repr___closed__6_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__6);
v___y_80_ = v___x_102_;
goto v___jp_79_;
}
else
{
lean_object* v___x_103_; 
v___x_103_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__7, &l_Lean_instReprLocalDeclKind_repr___closed__7_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__7);
v___y_80_ = v___x_103_;
goto v___jp_79_;
}
}
case 1:
{
lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_104_ = lean_unsigned_to_nat(1024u);
v___x_105_ = lean_nat_dec_le(v___x_104_, v_prec_78_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__6, &l_Lean_instReprLocalDeclKind_repr___closed__6_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__6);
v___y_87_ = v___x_106_;
goto v___jp_86_;
}
else
{
lean_object* v___x_107_; 
v___x_107_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__7, &l_Lean_instReprLocalDeclKind_repr___closed__7_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__7);
v___y_87_ = v___x_107_;
goto v___jp_86_;
}
}
default: 
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = lean_unsigned_to_nat(1024u);
v___x_109_ = lean_nat_dec_le(v___x_108_, v_prec_78_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__6, &l_Lean_instReprLocalDeclKind_repr___closed__6_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__6);
v___y_94_ = v___x_110_;
goto v___jp_93_;
}
else
{
lean_object* v___x_111_; 
v___x_111_ = lean_obj_once(&l_Lean_instReprLocalDeclKind_repr___closed__7, &l_Lean_instReprLocalDeclKind_repr___closed__7_once, _init_l_Lean_instReprLocalDeclKind_repr___closed__7);
v___y_94_ = v___x_111_;
goto v___jp_93_;
}
}
}
v___jp_79_:
{
lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_81_ = ((lean_object*)(l_Lean_instReprLocalDeclKind_repr___closed__1));
lean_inc(v___y_80_);
v___x_82_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_82_, 0, v___y_80_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = 0;
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_83_);
v___x_85_ = l_Repr_addAppParen(v___x_84_, v_prec_78_);
return v___x_85_;
}
v___jp_86_:
{
lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_88_ = ((lean_object*)(l_Lean_instReprLocalDeclKind_repr___closed__3));
lean_inc(v___y_87_);
v___x_89_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_89_, 0, v___y_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = 0;
v___x_91_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_91_, 0, v___x_89_);
lean_ctor_set_uint8(v___x_91_, sizeof(void*)*1, v___x_90_);
v___x_92_ = l_Repr_addAppParen(v___x_91_, v_prec_78_);
return v___x_92_;
}
v___jp_93_:
{
lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_95_ = ((lean_object*)(l_Lean_instReprLocalDeclKind_repr___closed__5));
lean_inc(v___y_94_);
v___x_96_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_96_, 0, v___y_94_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
v___x_97_ = 0;
v___x_98_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_98_, 0, v___x_96_);
lean_ctor_set_uint8(v___x_98_, sizeof(void*)*1, v___x_97_);
v___x_99_ = l_Repr_addAppParen(v___x_98_, v_prec_78_);
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLocalDeclKind_repr___boxed(lean_object* v_x_112_, lean_object* v_prec_113_){
_start:
{
uint8_t v_x_171__boxed_114_; lean_object* v_res_115_; 
v_x_171__boxed_114_ = lean_unbox(v_x_112_);
v_res_115_ = l_Lean_instReprLocalDeclKind_repr(v_x_171__boxed_114_, v_prec_113_);
lean_dec(v_prec_113_);
return v_res_115_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDeclKind_ofNat(lean_object* v_n_118_){
_start:
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_nat_dec_le(v_n_118_, v___x_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1u);
v___x_122_ = lean_nat_dec_le(v_n_118_, v___x_121_);
if (v___x_122_ == 0)
{
uint8_t v___x_123_; 
v___x_123_ = 2;
return v___x_123_;
}
else
{
uint8_t v___x_124_; 
v___x_124_ = 1;
return v___x_124_;
}
}
else
{
uint8_t v___x_125_; 
v___x_125_ = 0;
return v___x_125_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDeclKind_ofNat___boxed(lean_object* v_n_126_){
_start:
{
uint8_t v_res_127_; lean_object* v_r_128_; 
v_res_127_ = l_Lean_LocalDeclKind_ofNat(v_n_126_);
lean_dec(v_n_126_);
v_r_128_ = lean_box(v_res_127_);
return v_r_128_;
}
}
LEAN_EXPORT uint8_t l_Lean_instDecidableEqLocalDeclKind(uint8_t v_x_129_, uint8_t v_y_130_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_131_ = l_Lean_LocalDeclKind_ctorIdx(v_x_129_);
v___x_132_ = l_Lean_LocalDeclKind_ctorIdx(v_y_130_);
v___x_133_ = lean_nat_dec_eq(v___x_131_, v___x_132_);
lean_dec(v___x_132_);
lean_dec(v___x_131_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_instDecidableEqLocalDeclKind___boxed(lean_object* v_x_134_, lean_object* v_y_135_){
_start:
{
uint8_t v_x_20__boxed_136_; uint8_t v_y_21__boxed_137_; uint8_t v_res_138_; lean_object* v_r_139_; 
v_x_20__boxed_136_ = lean_unbox(v_x_134_);
v_y_21__boxed_137_ = lean_unbox(v_y_135_);
v_res_138_ = l_Lean_instDecidableEqLocalDeclKind(v_x_20__boxed_136_, v_y_21__boxed_137_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableLocalDeclKind_hash(uint8_t v_x_140_){
_start:
{
switch(v_x_140_)
{
case 0:
{
uint64_t v___x_141_; 
v___x_141_ = 0ULL;
return v___x_141_;
}
case 1:
{
uint64_t v___x_142_; 
v___x_142_ = 1ULL;
return v___x_142_;
}
default: 
{
uint64_t v___x_143_; 
v___x_143_ = 2ULL;
return v___x_143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableLocalDeclKind_hash___boxed(lean_object* v_x_144_){
_start:
{
uint8_t v_x_40__boxed_145_; uint64_t v_res_146_; lean_object* v_r_147_; 
v_x_40__boxed_145_ = lean_unbox(v_x_144_);
v_res_146_ = l_Lean_instHashableLocalDeclKind_hash(v_x_40__boxed_145_);
v_r_147_ = lean_box_uint64(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx(lean_object* v_x_150_){
_start:
{
if (lean_obj_tag(v_x_150_) == 0)
{
lean_object* v___x_151_; 
v___x_151_ = lean_unsigned_to_nat(0u);
return v___x_151_;
}
else
{
lean_object* v___x_152_; 
v___x_152_ = lean_unsigned_to_nat(1u);
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorIdx___boxed(lean_object* v_x_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Lean_LocalDecl_ctorIdx(v_x_153_);
lean_dec_ref(v_x_153_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim___redArg(lean_object* v_t_155_, lean_object* v_k_156_){
_start:
{
if (lean_obj_tag(v_t_155_) == 0)
{
lean_object* v_index_157_; lean_object* v_fvarId_158_; lean_object* v_userName_159_; lean_object* v_type_160_; uint8_t v_bi_161_; uint8_t v_kind_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v_index_157_ = lean_ctor_get(v_t_155_, 0);
lean_inc(v_index_157_);
v_fvarId_158_ = lean_ctor_get(v_t_155_, 1);
lean_inc(v_fvarId_158_);
v_userName_159_ = lean_ctor_get(v_t_155_, 2);
lean_inc(v_userName_159_);
v_type_160_ = lean_ctor_get(v_t_155_, 3);
lean_inc_ref(v_type_160_);
v_bi_161_ = lean_ctor_get_uint8(v_t_155_, sizeof(void*)*4);
v_kind_162_ = lean_ctor_get_uint8(v_t_155_, sizeof(void*)*4 + 1);
lean_dec_ref_known(v_t_155_, 4);
v___x_163_ = lean_box(v_bi_161_);
v___x_164_ = lean_box(v_kind_162_);
v___x_165_ = lean_apply_6(v_k_156_, v_index_157_, v_fvarId_158_, v_userName_159_, v_type_160_, v___x_163_, v___x_164_);
return v___x_165_;
}
else
{
lean_object* v_index_166_; lean_object* v_fvarId_167_; lean_object* v_userName_168_; lean_object* v_type_169_; lean_object* v_value_170_; uint8_t v_nondep_171_; uint8_t v_kind_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_index_166_ = lean_ctor_get(v_t_155_, 0);
lean_inc(v_index_166_);
v_fvarId_167_ = lean_ctor_get(v_t_155_, 1);
lean_inc(v_fvarId_167_);
v_userName_168_ = lean_ctor_get(v_t_155_, 2);
lean_inc(v_userName_168_);
v_type_169_ = lean_ctor_get(v_t_155_, 3);
lean_inc_ref(v_type_169_);
v_value_170_ = lean_ctor_get(v_t_155_, 4);
lean_inc_ref(v_value_170_);
v_nondep_171_ = lean_ctor_get_uint8(v_t_155_, sizeof(void*)*5);
v_kind_172_ = lean_ctor_get_uint8(v_t_155_, sizeof(void*)*5 + 1);
lean_dec_ref_known(v_t_155_, 5);
v___x_173_ = lean_box(v_nondep_171_);
v___x_174_ = lean_box(v_kind_172_);
v___x_175_ = lean_apply_7(v_k_156_, v_index_166_, v_fvarId_167_, v_userName_168_, v_type_169_, v_value_170_, v___x_173_, v___x_174_);
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim(lean_object* v_motive_176_, lean_object* v_ctorIdx_177_, lean_object* v_t_178_, lean_object* v_h_179_, lean_object* v_k_180_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_178_, v_k_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ctorElim___boxed(lean_object* v_motive_182_, lean_object* v_ctorIdx_183_, lean_object* v_t_184_, lean_object* v_h_185_, lean_object* v_k_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_LocalDecl_ctorElim(v_motive_182_, v_ctorIdx_183_, v_t_184_, v_h_185_, v_k_186_);
lean_dec(v_ctorIdx_183_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_cdecl_elim___redArg(lean_object* v_t_188_, lean_object* v_cdecl_189_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_188_, v_cdecl_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_cdecl_elim(lean_object* v_motive_191_, lean_object* v_t_192_, lean_object* v_h_193_, lean_object* v_cdecl_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_192_, v_cdecl_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ldecl_elim___redArg(lean_object* v_t_196_, lean_object* v_ldecl_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_196_, v_ldecl_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_ldecl_elim(lean_object* v_motive_199_, lean_object* v_t_200_, lean_object* v_h_201_, lean_object* v_ldecl_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_LocalDecl_ctorElim___redArg(v_t_200_, v_ldecl_202_);
return v___x_203_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl_default___closed__0(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = lean_box(0);
v___x_205_ = l_unsafeCast___redArg(v___x_204_);
return v___x_205_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl_default___closed__3(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_209_ = lean_box(0);
v___x_210_ = ((lean_object*)(l_Lean_instInhabitedLocalDecl_default___closed__2));
v___x_211_ = l_Lean_Expr_const___override(v___x_210_, v___x_209_);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl_default___closed__4(void){
_start:
{
uint8_t v___x_212_; uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_212_ = 0;
v___x_213_ = 0;
v___x_214_ = lean_obj_once(&l_Lean_instInhabitedLocalDecl_default___closed__3, &l_Lean_instInhabitedLocalDecl_default___closed__3_once, _init_l_Lean_instInhabitedLocalDecl_default___closed__3);
v___x_215_ = lean_obj_once(&l_Lean_instInhabitedLocalDecl_default___closed__0, &l_Lean_instInhabitedLocalDecl_default___closed__0_once, _init_l_Lean_instInhabitedLocalDecl_default___closed__0);
v___x_216_ = l_Lean_instInhabitedFVarId_default;
v___x_217_ = lean_unsigned_to_nat(0u);
v___x_218_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v___x_216_);
lean_ctor_set(v___x_218_, 2, v___x_215_);
lean_ctor_set(v___x_218_, 3, v___x_214_);
lean_ctor_set_uint8(v___x_218_, sizeof(void*)*4, v___x_213_);
lean_ctor_set_uint8(v___x_218_, sizeof(void*)*4 + 1, v___x_212_);
return v___x_218_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl_default(void){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = lean_obj_once(&l_Lean_instInhabitedLocalDecl_default___closed__4, &l_Lean_instInhabitedLocalDecl_default___closed__4_once, _init_l_Lean_instInhabitedLocalDecl_default___closed__4);
return v___x_219_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalDecl(void){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_instInhabitedLocalDecl_default;
return v___x_220_;
}
}
LEAN_EXPORT lean_object* lean_mk_local_decl(lean_object* v_index_221_, lean_object* v_fvarId_222_, lean_object* v_userName_223_, lean_object* v_type_224_, uint8_t v_bi_225_){
_start:
{
uint8_t v___x_226_; lean_object* v___x_227_; 
v___x_226_ = 0;
v___x_227_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_227_, 0, v_index_221_);
lean_ctor_set(v___x_227_, 1, v_fvarId_222_);
lean_ctor_set(v___x_227_, 2, v_userName_223_);
lean_ctor_set(v___x_227_, 3, v_type_224_);
lean_ctor_set_uint8(v___x_227_, sizeof(void*)*4, v_bi_225_);
lean_ctor_set_uint8(v___x_227_, sizeof(void*)*4 + 1, v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLocalDeclEx___boxed(lean_object* v_index_228_, lean_object* v_fvarId_229_, lean_object* v_userName_230_, lean_object* v_type_231_, lean_object* v_bi_232_){
_start:
{
uint8_t v_bi_boxed_233_; lean_object* v_res_234_; 
v_bi_boxed_233_ = lean_unbox(v_bi_232_);
v_res_234_ = lean_mk_local_decl(v_index_228_, v_fvarId_229_, v_userName_230_, v_type_231_, v_bi_boxed_233_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* lean_mk_let_decl(lean_object* v_index_235_, lean_object* v_fvarId_236_, lean_object* v_userName_237_, lean_object* v_type_238_, lean_object* v_val_239_){
_start:
{
uint8_t v___x_240_; uint8_t v___x_241_; lean_object* v___x_242_; 
v___x_240_ = 0;
v___x_241_ = 0;
v___x_242_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v___x_242_, 0, v_index_235_);
lean_ctor_set(v___x_242_, 1, v_fvarId_236_);
lean_ctor_set(v___x_242_, 2, v_userName_237_);
lean_ctor_set(v___x_242_, 3, v_type_238_);
lean_ctor_set(v___x_242_, 4, v_val_239_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*5, v___x_240_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*5 + 1, v___x_241_);
return v___x_242_;
}
}
LEAN_EXPORT uint8_t lean_local_decl_binder_info(lean_object* v_x_243_){
_start:
{
if (lean_obj_tag(v_x_243_) == 0)
{
uint8_t v_bi_244_; 
v_bi_244_ = lean_ctor_get_uint8(v_x_243_, sizeof(void*)*4);
lean_dec_ref_known(v_x_243_, 4);
return v_bi_244_;
}
else
{
uint8_t v___x_245_; 
lean_dec_ref(v_x_243_);
v___x_245_ = 0;
return v___x_245_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_binderInfoEx___boxed(lean_object* v_x_246_){
_start:
{
uint8_t v_res_247_; lean_object* v_r_248_; 
v_res_247_ = lean_local_decl_binder_info(v_x_246_);
v_r_248_ = lean_box(v_res_247_);
return v_r_248_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isLet(lean_object* v_x_249_, uint8_t v_x_250_){
_start:
{
if (lean_obj_tag(v_x_249_) == 0)
{
uint8_t v___x_251_; 
v___x_251_ = 0;
return v___x_251_;
}
else
{
uint8_t v_nondep_252_; 
v_nondep_252_ = lean_ctor_get_uint8(v_x_249_, sizeof(void*)*5);
if (v_nondep_252_ == 0)
{
uint8_t v___x_253_; 
v___x_253_ = 1;
return v___x_253_;
}
else
{
return v_x_250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isLet___boxed(lean_object* v_x_254_, lean_object* v_x_255_){
_start:
{
uint8_t v_x_53__boxed_256_; uint8_t v_res_257_; lean_object* v_r_258_; 
v_x_53__boxed_256_ = lean_unbox(v_x_255_);
v_res_257_ = l_Lean_LocalDecl_isLet(v_x_254_, v_x_53__boxed_256_);
lean_dec_ref(v_x_254_);
v_r_258_ = lean_box(v_res_257_);
return v_r_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_index(lean_object* v_x_259_){
_start:
{
lean_object* v_index_260_; 
v_index_260_ = lean_ctor_get(v_x_259_, 0);
lean_inc(v_index_260_);
return v_index_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_index___boxed(lean_object* v_x_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_LocalDecl_index(v_x_261_);
lean_dec_ref(v_x_261_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setIndex(lean_object* v_x_263_, lean_object* v_x_264_){
_start:
{
if (lean_obj_tag(v_x_263_) == 0)
{
lean_object* v_fvarId_265_; lean_object* v_userName_266_; lean_object* v_type_267_; uint8_t v_bi_268_; uint8_t v_kind_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
v_fvarId_265_ = lean_ctor_get(v_x_263_, 1);
v_userName_266_ = lean_ctor_get(v_x_263_, 2);
v_type_267_ = lean_ctor_get(v_x_263_, 3);
v_bi_268_ = lean_ctor_get_uint8(v_x_263_, sizeof(void*)*4);
v_kind_269_ = lean_ctor_get_uint8(v_x_263_, sizeof(void*)*4 + 1);
v_isSharedCheck_276_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_276_ == 0)
{
lean_object* v_unused_277_; 
v_unused_277_ = lean_ctor_get(v_x_263_, 0);
lean_dec(v_unused_277_);
v___x_271_ = v_x_263_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_type_267_);
lean_inc(v_userName_266_);
lean_inc(v_fvarId_265_);
lean_dec(v_x_263_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v_x_264_);
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_x_264_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v_fvarId_265_);
lean_ctor_set(v_reuseFailAlloc_275_, 2, v_userName_266_);
lean_ctor_set(v_reuseFailAlloc_275_, 3, v_type_267_);
lean_ctor_set_uint8(v_reuseFailAlloc_275_, sizeof(void*)*4, v_bi_268_);
lean_ctor_set_uint8(v_reuseFailAlloc_275_, sizeof(void*)*4 + 1, v_kind_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
else
{
lean_object* v_fvarId_278_; lean_object* v_userName_279_; lean_object* v_type_280_; lean_object* v_value_281_; uint8_t v_nondep_282_; uint8_t v_kind_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_290_; 
v_fvarId_278_ = lean_ctor_get(v_x_263_, 1);
v_userName_279_ = lean_ctor_get(v_x_263_, 2);
v_type_280_ = lean_ctor_get(v_x_263_, 3);
v_value_281_ = lean_ctor_get(v_x_263_, 4);
v_nondep_282_ = lean_ctor_get_uint8(v_x_263_, sizeof(void*)*5);
v_kind_283_ = lean_ctor_get_uint8(v_x_263_, sizeof(void*)*5 + 1);
v_isSharedCheck_290_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_290_ == 0)
{
lean_object* v_unused_291_; 
v_unused_291_ = lean_ctor_get(v_x_263_, 0);
lean_dec(v_unused_291_);
v___x_285_ = v_x_263_;
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_value_281_);
lean_inc(v_type_280_);
lean_inc(v_userName_279_);
lean_inc(v_fvarId_278_);
lean_dec(v_x_263_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_288_; 
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v_x_264_);
v___x_288_ = v___x_285_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_x_264_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_fvarId_278_);
lean_ctor_set(v_reuseFailAlloc_289_, 2, v_userName_279_);
lean_ctor_set(v_reuseFailAlloc_289_, 3, v_type_280_);
lean_ctor_set(v_reuseFailAlloc_289_, 4, v_value_281_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*5, v_nondep_282_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*5 + 1, v_kind_283_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_fvarId(lean_object* v_x_292_){
_start:
{
lean_object* v_fvarId_293_; 
v_fvarId_293_ = lean_ctor_get(v_x_292_, 1);
lean_inc(v_fvarId_293_);
return v_fvarId_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_fvarId___boxed(lean_object* v_x_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Lean_LocalDecl_fvarId(v_x_294_);
lean_dec_ref(v_x_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_userName(lean_object* v_x_296_){
_start:
{
lean_object* v_userName_297_; 
v_userName_297_ = lean_ctor_get(v_x_296_, 2);
lean_inc(v_userName_297_);
return v_userName_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_userName___boxed(lean_object* v_x_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lean_LocalDecl_userName(v_x_298_);
lean_dec_ref(v_x_298_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_type(lean_object* v_x_300_){
_start:
{
lean_object* v_type_301_; 
v_type_301_ = lean_ctor_get(v_x_300_, 3);
lean_inc_ref(v_type_301_);
return v_type_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_type___boxed(lean_object* v_x_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lean_LocalDecl_type(v_x_302_);
lean_dec_ref(v_x_302_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setType(lean_object* v_x_304_, lean_object* v_x_305_){
_start:
{
if (lean_obj_tag(v_x_304_) == 0)
{
lean_object* v_index_306_; lean_object* v_fvarId_307_; lean_object* v_userName_308_; uint8_t v_bi_309_; uint8_t v_kind_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
v_index_306_ = lean_ctor_get(v_x_304_, 0);
v_fvarId_307_ = lean_ctor_get(v_x_304_, 1);
v_userName_308_ = lean_ctor_get(v_x_304_, 2);
v_bi_309_ = lean_ctor_get_uint8(v_x_304_, sizeof(void*)*4);
v_kind_310_ = lean_ctor_get_uint8(v_x_304_, sizeof(void*)*4 + 1);
v_isSharedCheck_317_ = !lean_is_exclusive(v_x_304_);
if (v_isSharedCheck_317_ == 0)
{
lean_object* v_unused_318_; 
v_unused_318_ = lean_ctor_get(v_x_304_, 3);
lean_dec(v_unused_318_);
v___x_312_ = v_x_304_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_userName_308_);
lean_inc(v_fvarId_307_);
lean_inc(v_index_306_);
lean_dec(v_x_304_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 3, v_x_305_);
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_index_306_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_fvarId_307_);
lean_ctor_set(v_reuseFailAlloc_316_, 2, v_userName_308_);
lean_ctor_set(v_reuseFailAlloc_316_, 3, v_x_305_);
lean_ctor_set_uint8(v_reuseFailAlloc_316_, sizeof(void*)*4, v_bi_309_);
lean_ctor_set_uint8(v_reuseFailAlloc_316_, sizeof(void*)*4 + 1, v_kind_310_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
else
{
lean_object* v_index_319_; lean_object* v_fvarId_320_; lean_object* v_userName_321_; lean_object* v_value_322_; uint8_t v_nondep_323_; uint8_t v_kind_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
v_index_319_ = lean_ctor_get(v_x_304_, 0);
v_fvarId_320_ = lean_ctor_get(v_x_304_, 1);
v_userName_321_ = lean_ctor_get(v_x_304_, 2);
v_value_322_ = lean_ctor_get(v_x_304_, 4);
v_nondep_323_ = lean_ctor_get_uint8(v_x_304_, sizeof(void*)*5);
v_kind_324_ = lean_ctor_get_uint8(v_x_304_, sizeof(void*)*5 + 1);
v_isSharedCheck_331_ = !lean_is_exclusive(v_x_304_);
if (v_isSharedCheck_331_ == 0)
{
lean_object* v_unused_332_; 
v_unused_332_ = lean_ctor_get(v_x_304_, 3);
lean_dec(v_unused_332_);
v___x_326_ = v_x_304_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_value_322_);
lean_inc(v_userName_321_);
lean_inc(v_fvarId_320_);
lean_inc(v_index_319_);
lean_dec(v_x_304_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 3, v_x_305_);
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_index_319_);
lean_ctor_set(v_reuseFailAlloc_330_, 1, v_fvarId_320_);
lean_ctor_set(v_reuseFailAlloc_330_, 2, v_userName_321_);
lean_ctor_set(v_reuseFailAlloc_330_, 3, v_x_305_);
lean_ctor_set(v_reuseFailAlloc_330_, 4, v_value_322_);
lean_ctor_set_uint8(v_reuseFailAlloc_330_, sizeof(void*)*5, v_nondep_323_);
lean_ctor_set_uint8(v_reuseFailAlloc_330_, sizeof(void*)*5 + 1, v_kind_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_binderInfo(lean_object* v_x_333_){
_start:
{
if (lean_obj_tag(v_x_333_) == 0)
{
uint8_t v_bi_334_; 
v_bi_334_ = lean_ctor_get_uint8(v_x_333_, sizeof(void*)*4);
return v_bi_334_;
}
else
{
uint8_t v___x_335_; 
v___x_335_ = 0;
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_binderInfo___boxed(lean_object* v_x_336_){
_start:
{
uint8_t v_res_337_; lean_object* v_r_338_; 
v_res_337_ = l_Lean_LocalDecl_binderInfo(v_x_336_);
lean_dec_ref(v_x_336_);
v_r_338_ = lean_box(v_res_337_);
return v_r_338_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_kind(lean_object* v_x_339_){
_start:
{
if (lean_obj_tag(v_x_339_) == 0)
{
uint8_t v_kind_340_; 
v_kind_340_ = lean_ctor_get_uint8(v_x_339_, sizeof(void*)*4 + 1);
return v_kind_340_;
}
else
{
uint8_t v_kind_341_; 
v_kind_341_ = lean_ctor_get_uint8(v_x_339_, sizeof(void*)*5 + 1);
return v_kind_341_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_kind___boxed(lean_object* v_x_342_){
_start:
{
uint8_t v_res_343_; lean_object* v_r_344_; 
v_res_343_ = l_Lean_LocalDecl_kind(v_x_342_);
lean_dec_ref(v_x_342_);
v_r_344_ = lean_box(v_res_343_);
return v_r_344_;
}
}
static lean_object* _init_l_Lean_LocalDecl_isAuxDecl___closed__0(void){
_start:
{
uint8_t v___x_345_; lean_object* v___x_346_; 
v___x_345_ = 2;
v___x_346_ = l_Lean_LocalDeclKind_ctorIdx(v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object* v_d_347_){
_start:
{
uint8_t v___y_349_; 
if (lean_obj_tag(v_d_347_) == 0)
{
uint8_t v_kind_353_; 
v_kind_353_ = lean_ctor_get_uint8(v_d_347_, sizeof(void*)*4 + 1);
v___y_349_ = v_kind_353_;
goto v___jp_348_;
}
else
{
uint8_t v_kind_354_; 
v_kind_354_ = lean_ctor_get_uint8(v_d_347_, sizeof(void*)*5 + 1);
v___y_349_ = v_kind_354_;
goto v___jp_348_;
}
v___jp_348_:
{
lean_object* v___x_350_; lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_350_ = l_Lean_LocalDeclKind_ctorIdx(v___y_349_);
v___x_351_ = lean_obj_once(&l_Lean_LocalDecl_isAuxDecl___closed__0, &l_Lean_LocalDecl_isAuxDecl___closed__0_once, _init_l_Lean_LocalDecl_isAuxDecl___closed__0);
v___x_352_ = lean_nat_dec_eq(v___x_350_, v___x_351_);
lean_dec(v___x_350_);
return v___x_352_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isAuxDecl___boxed(lean_object* v_d_355_){
_start:
{
uint8_t v_res_356_; lean_object* v_r_357_; 
v_res_356_ = l_Lean_LocalDecl_isAuxDecl(v_d_355_);
lean_dec_ref(v_d_355_);
v_r_357_ = lean_box(v_res_356_);
return v_r_357_;
}
}
static lean_object* _init_l_Lean_LocalDecl_isImplementationDetail___closed__0(void){
_start:
{
uint8_t v___x_358_; lean_object* v___x_359_; 
v___x_358_ = 0;
v___x_359_ = l_Lean_LocalDeclKind_ctorIdx(v___x_358_);
return v___x_359_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object* v_d_360_){
_start:
{
uint8_t v___y_362_; 
if (lean_obj_tag(v_d_360_) == 0)
{
uint8_t v_kind_368_; 
v_kind_368_ = lean_ctor_get_uint8(v_d_360_, sizeof(void*)*4 + 1);
v___y_362_ = v_kind_368_;
goto v___jp_361_;
}
else
{
uint8_t v_kind_369_; 
v_kind_369_ = lean_ctor_get_uint8(v_d_360_, sizeof(void*)*5 + 1);
v___y_362_ = v_kind_369_;
goto v___jp_361_;
}
v___jp_361_:
{
lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_363_ = l_Lean_LocalDeclKind_ctorIdx(v___y_362_);
v___x_364_ = lean_obj_once(&l_Lean_LocalDecl_isImplementationDetail___closed__0, &l_Lean_LocalDecl_isImplementationDetail___closed__0_once, _init_l_Lean_LocalDecl_isImplementationDetail___closed__0);
v___x_365_ = lean_nat_dec_eq(v___x_363_, v___x_364_);
lean_dec(v___x_363_);
if (v___x_365_ == 0)
{
uint8_t v___x_366_; 
v___x_366_ = 1;
return v___x_366_;
}
else
{
uint8_t v___x_367_; 
v___x_367_ = 0;
return v___x_367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isImplementationDetail___boxed(lean_object* v_d_370_){
_start:
{
uint8_t v_res_371_; lean_object* v_r_372_; 
v_res_371_ = l_Lean_LocalDecl_isImplementationDetail(v_d_370_);
lean_dec_ref(v_d_370_);
v_r_372_ = lean_box(v_res_371_);
return v_r_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value_x3f(lean_object* v_x_373_, uint8_t v_x_374_){
_start:
{
if (lean_obj_tag(v_x_373_) == 1)
{
uint8_t v_nondep_375_; 
v_nondep_375_ = lean_ctor_get_uint8(v_x_373_, sizeof(void*)*5);
if (v_nondep_375_ == 0)
{
lean_object* v_value_376_; lean_object* v___x_377_; 
v_value_376_ = lean_ctor_get(v_x_373_, 4);
lean_inc_ref(v_value_376_);
v___x_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_377_, 0, v_value_376_);
return v___x_377_;
}
else
{
if (v_x_374_ == 1)
{
lean_object* v_value_378_; lean_object* v___x_379_; 
v_value_378_ = lean_ctor_get(v_x_373_, 4);
lean_inc_ref(v_value_378_);
v___x_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_379_, 0, v_value_378_);
return v___x_379_;
}
else
{
lean_object* v___x_380_; 
v___x_380_ = lean_box(0);
return v___x_380_;
}
}
}
else
{
lean_object* v___x_381_; 
v___x_381_ = lean_box(0);
return v___x_381_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value_x3f___boxed(lean_object* v_x_382_, lean_object* v_x_383_){
_start:
{
uint8_t v_x_47__boxed_384_; lean_object* v_res_385_; 
v_x_47__boxed_384_ = lean_unbox(v_x_383_);
v_res_385_ = l_Lean_LocalDecl_value_x3f(v_x_382_, v_x_47__boxed_384_);
lean_dec_ref(v_x_382_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_LocalDecl_value_spec__0(lean_object* v_msg_386_){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = l_Lean_instInhabitedExpr;
v___x_388_ = lean_panic_fn_borrowed(v___x_387_, v_msg_386_);
return v___x_388_;
}
}
static lean_object* _init_l_Lean_LocalDecl_value___closed__3(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_392_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__2));
v___x_393_ = lean_unsigned_to_nat(54u);
v___x_394_ = lean_unsigned_to_nat(172u);
v___x_395_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__1));
v___x_396_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_397_ = l_mkPanicMessageWithDecl(v___x_396_, v___x_395_, v___x_394_, v___x_393_, v___x_392_);
return v___x_397_;
}
}
static lean_object* _init_l_Lean_LocalDecl_value___closed__5(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_399_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__4));
v___x_400_ = lean_unsigned_to_nat(54u);
v___x_401_ = lean_unsigned_to_nat(175u);
v___x_402_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__1));
v___x_403_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_404_ = l_mkPanicMessageWithDecl(v___x_403_, v___x_402_, v___x_401_, v___x_400_, v___x_399_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value(lean_object* v_x_405_, uint8_t v_x_406_){
_start:
{
if (lean_obj_tag(v_x_405_) == 0)
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_obj_once(&l_Lean_LocalDecl_value___closed__3, &l_Lean_LocalDecl_value___closed__3_once, _init_l_Lean_LocalDecl_value___closed__3);
v___x_408_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_407_);
return v___x_408_;
}
else
{
uint8_t v_nondep_409_; 
v_nondep_409_ = lean_ctor_get_uint8(v_x_405_, sizeof(void*)*5);
if (v_nondep_409_ == 0)
{
lean_object* v_value_410_; 
v_value_410_ = lean_ctor_get(v_x_405_, 4);
lean_inc_ref(v_value_410_);
return v_value_410_;
}
else
{
if (v_x_406_ == 0)
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = lean_obj_once(&l_Lean_LocalDecl_value___closed__5, &l_Lean_LocalDecl_value___closed__5_once, _init_l_Lean_LocalDecl_value___closed__5);
v___x_412_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_411_);
return v___x_412_;
}
else
{
lean_object* v_value_413_; 
v_value_413_ = lean_ctor_get(v_x_405_, 4);
lean_inc_ref(v_value_413_);
return v_value_413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_value___boxed(lean_object* v_x_414_, lean_object* v_x_415_){
_start:
{
uint8_t v_x_143__boxed_416_; lean_object* v_res_417_; 
v_x_143__boxed_416_ = lean_unbox(v_x_415_);
v_res_417_ = l_Lean_LocalDecl_value(v_x_414_, v_x_143__boxed_416_);
lean_dec_ref(v_x_414_);
return v_res_417_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_hasValue(lean_object* v_x_418_, uint8_t v_x_419_){
_start:
{
if (lean_obj_tag(v_x_418_) == 0)
{
uint8_t v___x_420_; 
v___x_420_ = 0;
return v___x_420_;
}
else
{
uint8_t v_nondep_421_; 
v_nondep_421_ = lean_ctor_get_uint8(v_x_418_, sizeof(void*)*5);
if (v_nondep_421_ == 0)
{
uint8_t v___x_422_; 
v___x_422_ = 1;
return v___x_422_;
}
else
{
return v_x_419_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_hasValue___boxed(lean_object* v_x_423_, lean_object* v_x_424_){
_start:
{
uint8_t v_x_72__boxed_425_; uint8_t v_res_426_; lean_object* v_r_427_; 
v_x_72__boxed_425_ = lean_unbox(v_x_424_);
v_res_426_ = l_Lean_LocalDecl_hasValue(v_x_423_, v_x_72__boxed_425_);
lean_dec_ref(v_x_423_);
v_r_427_ = lean_box(v_res_426_);
return v_r_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setValue(lean_object* v_x_428_, lean_object* v_x_429_){
_start:
{
if (lean_obj_tag(v_x_428_) == 1)
{
lean_object* v_index_430_; lean_object* v_fvarId_431_; lean_object* v_userName_432_; lean_object* v_type_433_; uint8_t v_nondep_434_; uint8_t v_kind_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_442_; 
v_index_430_ = lean_ctor_get(v_x_428_, 0);
v_fvarId_431_ = lean_ctor_get(v_x_428_, 1);
v_userName_432_ = lean_ctor_get(v_x_428_, 2);
v_type_433_ = lean_ctor_get(v_x_428_, 3);
v_nondep_434_ = lean_ctor_get_uint8(v_x_428_, sizeof(void*)*5);
v_kind_435_ = lean_ctor_get_uint8(v_x_428_, sizeof(void*)*5 + 1);
v_isSharedCheck_442_ = !lean_is_exclusive(v_x_428_);
if (v_isSharedCheck_442_ == 0)
{
lean_object* v_unused_443_; 
v_unused_443_ = lean_ctor_get(v_x_428_, 4);
lean_dec(v_unused_443_);
v___x_437_ = v_x_428_;
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_type_433_);
lean_inc(v_userName_432_);
lean_inc(v_fvarId_431_);
lean_inc(v_index_430_);
lean_dec(v_x_428_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 4, v_x_429_);
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_index_430_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_fvarId_431_);
lean_ctor_set(v_reuseFailAlloc_441_, 2, v_userName_432_);
lean_ctor_set(v_reuseFailAlloc_441_, 3, v_type_433_);
lean_ctor_set(v_reuseFailAlloc_441_, 4, v_x_429_);
lean_ctor_set_uint8(v_reuseFailAlloc_441_, sizeof(void*)*5, v_nondep_434_);
lean_ctor_set_uint8(v_reuseFailAlloc_441_, sizeof(void*)*5 + 1, v_kind_435_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
else
{
lean_dec_ref(v_x_429_);
return v_x_428_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setNondep(lean_object* v_x_444_, uint8_t v_x_445_){
_start:
{
if (lean_obj_tag(v_x_444_) == 1)
{
lean_object* v_index_446_; lean_object* v_fvarId_447_; lean_object* v_userName_448_; lean_object* v_type_449_; lean_object* v_value_450_; uint8_t v_kind_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
v_index_446_ = lean_ctor_get(v_x_444_, 0);
v_fvarId_447_ = lean_ctor_get(v_x_444_, 1);
v_userName_448_ = lean_ctor_get(v_x_444_, 2);
v_type_449_ = lean_ctor_get(v_x_444_, 3);
v_value_450_ = lean_ctor_get(v_x_444_, 4);
v_kind_451_ = lean_ctor_get_uint8(v_x_444_, sizeof(void*)*5 + 1);
v_isSharedCheck_458_ = !lean_is_exclusive(v_x_444_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v_x_444_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_value_450_);
lean_inc(v_type_449_);
lean_inc(v_userName_448_);
lean_inc(v_fvarId_447_);
lean_inc(v_index_446_);
lean_dec(v_x_444_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_index_446_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_fvarId_447_);
lean_ctor_set(v_reuseFailAlloc_457_, 2, v_userName_448_);
lean_ctor_set(v_reuseFailAlloc_457_, 3, v_type_449_);
lean_ctor_set(v_reuseFailAlloc_457_, 4, v_value_450_);
lean_ctor_set_uint8(v_reuseFailAlloc_457_, sizeof(void*)*5 + 1, v_kind_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
lean_ctor_set_uint8(v___x_456_, sizeof(void*)*5, v_x_445_);
return v___x_456_;
}
}
}
else
{
return v_x_444_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setNondep___boxed(lean_object* v_x_459_, lean_object* v_x_460_){
_start:
{
uint8_t v_x_23__boxed_461_; lean_object* v_res_462_; 
v_x_23__boxed_461_ = lean_unbox(v_x_460_);
v_res_462_ = l_Lean_LocalDecl_setNondep(v_x_459_, v_x_23__boxed_461_);
return v_res_462_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_isNondep(lean_object* v_x_463_){
_start:
{
if (lean_obj_tag(v_x_463_) == 1)
{
uint8_t v_nondep_464_; 
v_nondep_464_ = lean_ctor_get_uint8(v_x_463_, sizeof(void*)*5);
return v_nondep_464_;
}
else
{
uint8_t v___x_465_; 
v___x_465_ = 0;
return v___x_465_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_isNondep___boxed(lean_object* v_x_466_){
_start:
{
uint8_t v_res_467_; lean_object* v_r_468_; 
v_res_467_ = l_Lean_LocalDecl_isNondep(v_x_466_);
lean_dec_ref(v_x_466_);
v_r_468_ = lean_box(v_res_467_);
return v_r_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setUserName(lean_object* v_x_469_, lean_object* v_x_470_){
_start:
{
if (lean_obj_tag(v_x_469_) == 0)
{
lean_object* v_index_471_; lean_object* v_fvarId_472_; lean_object* v_type_473_; uint8_t v_bi_474_; uint8_t v_kind_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
v_index_471_ = lean_ctor_get(v_x_469_, 0);
v_fvarId_472_ = lean_ctor_get(v_x_469_, 1);
v_type_473_ = lean_ctor_get(v_x_469_, 3);
v_bi_474_ = lean_ctor_get_uint8(v_x_469_, sizeof(void*)*4);
v_kind_475_ = lean_ctor_get_uint8(v_x_469_, sizeof(void*)*4 + 1);
v_isSharedCheck_482_ = !lean_is_exclusive(v_x_469_);
if (v_isSharedCheck_482_ == 0)
{
lean_object* v_unused_483_; 
v_unused_483_ = lean_ctor_get(v_x_469_, 2);
lean_dec(v_unused_483_);
v___x_477_ = v_x_469_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_type_473_);
lean_inc(v_fvarId_472_);
lean_inc(v_index_471_);
lean_dec(v_x_469_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 2, v_x_470_);
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_index_471_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_fvarId_472_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_x_470_);
lean_ctor_set(v_reuseFailAlloc_481_, 3, v_type_473_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*4, v_bi_474_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*4 + 1, v_kind_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
else
{
lean_object* v_index_484_; lean_object* v_fvarId_485_; lean_object* v_type_486_; lean_object* v_value_487_; uint8_t v_nondep_488_; uint8_t v_kind_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
v_index_484_ = lean_ctor_get(v_x_469_, 0);
v_fvarId_485_ = lean_ctor_get(v_x_469_, 1);
v_type_486_ = lean_ctor_get(v_x_469_, 3);
v_value_487_ = lean_ctor_get(v_x_469_, 4);
v_nondep_488_ = lean_ctor_get_uint8(v_x_469_, sizeof(void*)*5);
v_kind_489_ = lean_ctor_get_uint8(v_x_469_, sizeof(void*)*5 + 1);
v_isSharedCheck_496_ = !lean_is_exclusive(v_x_469_);
if (v_isSharedCheck_496_ == 0)
{
lean_object* v_unused_497_; 
v_unused_497_ = lean_ctor_get(v_x_469_, 2);
lean_dec(v_unused_497_);
v___x_491_ = v_x_469_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_value_487_);
lean_inc(v_type_486_);
lean_inc(v_fvarId_485_);
lean_inc(v_index_484_);
lean_dec(v_x_469_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 2, v_x_470_);
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_index_484_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_fvarId_485_);
lean_ctor_set(v_reuseFailAlloc_495_, 2, v_x_470_);
lean_ctor_set(v_reuseFailAlloc_495_, 3, v_type_486_);
lean_ctor_set(v_reuseFailAlloc_495_, 4, v_value_487_);
lean_ctor_set_uint8(v_reuseFailAlloc_495_, sizeof(void*)*5, v_nondep_488_);
lean_ctor_set_uint8(v_reuseFailAlloc_495_, sizeof(void*)*5 + 1, v_kind_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(lean_object* v_msg_498_){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = l_Lean_instInhabitedLocalDecl_default;
v___x_500_ = lean_panic_fn_borrowed(v___x_499_, v_msg_498_);
return v___x_500_;
}
}
static lean_object* _init_l_Lean_LocalDecl_setBinderInfo___closed__2(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_503_ = ((lean_object*)(l_Lean_LocalDecl_setBinderInfo___closed__1));
v___x_504_ = lean_unsigned_to_nat(38u);
v___x_505_ = lean_unsigned_to_nat(237u);
v___x_506_ = ((lean_object*)(l_Lean_LocalDecl_setBinderInfo___closed__0));
v___x_507_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_508_ = l_mkPanicMessageWithDecl(v___x_507_, v___x_506_, v___x_505_, v___x_504_, v___x_503_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setBinderInfo(lean_object* v_x_509_, uint8_t v_x_510_){
_start:
{
if (lean_obj_tag(v_x_509_) == 0)
{
lean_object* v_index_511_; lean_object* v_fvarId_512_; lean_object* v_userName_513_; lean_object* v_type_514_; uint8_t v_kind_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_522_; 
v_index_511_ = lean_ctor_get(v_x_509_, 0);
v_fvarId_512_ = lean_ctor_get(v_x_509_, 1);
v_userName_513_ = lean_ctor_get(v_x_509_, 2);
v_type_514_ = lean_ctor_get(v_x_509_, 3);
v_kind_515_ = lean_ctor_get_uint8(v_x_509_, sizeof(void*)*4 + 1);
v_isSharedCheck_522_ = !lean_is_exclusive(v_x_509_);
if (v_isSharedCheck_522_ == 0)
{
v___x_517_ = v_x_509_;
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_type_514_);
lean_inc(v_userName_513_);
lean_inc(v_fvarId_512_);
lean_inc(v_index_511_);
lean_dec(v_x_509_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_index_511_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v_fvarId_512_);
lean_ctor_set(v_reuseFailAlloc_521_, 2, v_userName_513_);
lean_ctor_set(v_reuseFailAlloc_521_, 3, v_type_514_);
lean_ctor_set_uint8(v_reuseFailAlloc_521_, sizeof(void*)*4 + 1, v_kind_515_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
lean_ctor_set_uint8(v___x_520_, sizeof(void*)*4, v_x_510_);
return v___x_520_;
}
}
}
else
{
lean_object* v___x_523_; lean_object* v___x_524_; 
lean_dec_ref_known(v_x_509_, 5);
v___x_523_ = lean_obj_once(&l_Lean_LocalDecl_setBinderInfo___closed__2, &l_Lean_LocalDecl_setBinderInfo___closed__2_once, _init_l_Lean_LocalDecl_setBinderInfo___closed__2);
v___x_524_ = l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(v___x_523_);
return v___x_524_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setBinderInfo___boxed(lean_object* v_x_525_, lean_object* v_x_526_){
_start:
{
uint8_t v_x_84__boxed_527_; lean_object* v_res_528_; 
v_x_84__boxed_527_ = lean_unbox(v_x_526_);
v_res_528_ = l_Lean_LocalDecl_setBinderInfo(v_x_525_, v_x_84__boxed_527_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_toExpr(lean_object* v_decl_529_){
_start:
{
lean_object* v_fvarId_530_; lean_object* v___x_531_; 
v_fvarId_530_ = lean_ctor_get(v_decl_529_, 1);
lean_inc(v_fvarId_530_);
lean_dec_ref(v_decl_529_);
v___x_531_ = l_Lean_mkFVar(v_fvarId_530_);
return v___x_531_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalDecl_hasExprMVar(lean_object* v_x_532_){
_start:
{
if (lean_obj_tag(v_x_532_) == 0)
{
lean_object* v_type_533_; uint8_t v___x_534_; 
v_type_533_ = lean_ctor_get(v_x_532_, 3);
v___x_534_ = l_Lean_Expr_hasExprMVar(v_type_533_);
return v___x_534_;
}
else
{
lean_object* v_type_535_; lean_object* v_value_536_; uint8_t v___x_537_; 
v_type_535_ = lean_ctor_get(v_x_532_, 3);
v_value_536_ = lean_ctor_get(v_x_532_, 4);
v___x_537_ = l_Lean_Expr_hasExprMVar(v_type_535_);
if (v___x_537_ == 0)
{
uint8_t v___x_538_; 
v___x_538_ = l_Lean_Expr_hasExprMVar(v_value_536_);
return v___x_538_;
}
else
{
return v___x_537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_hasExprMVar___boxed(lean_object* v_x_539_){
_start:
{
uint8_t v_res_540_; lean_object* v_r_541_; 
v_res_540_ = l_Lean_LocalDecl_hasExprMVar(v_x_539_);
lean_dec_ref(v_x_539_);
v_r_541_ = lean_box(v_res_540_);
return v_r_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setKind(lean_object* v_x_542_, uint8_t v_x_543_){
_start:
{
if (lean_obj_tag(v_x_542_) == 0)
{
lean_object* v_index_544_; lean_object* v_fvarId_545_; lean_object* v_userName_546_; lean_object* v_type_547_; uint8_t v_bi_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
v_index_544_ = lean_ctor_get(v_x_542_, 0);
v_fvarId_545_ = lean_ctor_get(v_x_542_, 1);
v_userName_546_ = lean_ctor_get(v_x_542_, 2);
v_type_547_ = lean_ctor_get(v_x_542_, 3);
v_bi_548_ = lean_ctor_get_uint8(v_x_542_, sizeof(void*)*4);
v_isSharedCheck_555_ = !lean_is_exclusive(v_x_542_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v_x_542_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_type_547_);
lean_inc(v_userName_546_);
lean_inc(v_fvarId_545_);
lean_inc(v_index_544_);
lean_dec(v_x_542_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_index_544_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_fvarId_545_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_userName_546_);
lean_ctor_set(v_reuseFailAlloc_554_, 3, v_type_547_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, sizeof(void*)*4, v_bi_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
lean_ctor_set_uint8(v___x_553_, sizeof(void*)*4 + 1, v_x_543_);
return v___x_553_;
}
}
}
else
{
lean_object* v_index_556_; lean_object* v_fvarId_557_; lean_object* v_userName_558_; lean_object* v_type_559_; lean_object* v_value_560_; uint8_t v_nondep_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
v_index_556_ = lean_ctor_get(v_x_542_, 0);
v_fvarId_557_ = lean_ctor_get(v_x_542_, 1);
v_userName_558_ = lean_ctor_get(v_x_542_, 2);
v_type_559_ = lean_ctor_get(v_x_542_, 3);
v_value_560_ = lean_ctor_get(v_x_542_, 4);
v_nondep_561_ = lean_ctor_get_uint8(v_x_542_, sizeof(void*)*5);
v_isSharedCheck_568_ = !lean_is_exclusive(v_x_542_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v_x_542_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_value_560_);
lean_inc(v_type_559_);
lean_inc(v_userName_558_);
lean_inc(v_fvarId_557_);
lean_inc(v_index_556_);
lean_dec(v_x_542_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_index_556_);
lean_ctor_set(v_reuseFailAlloc_567_, 1, v_fvarId_557_);
lean_ctor_set(v_reuseFailAlloc_567_, 2, v_userName_558_);
lean_ctor_set(v_reuseFailAlloc_567_, 3, v_type_559_);
lean_ctor_set(v_reuseFailAlloc_567_, 4, v_value_560_);
lean_ctor_set_uint8(v_reuseFailAlloc_567_, sizeof(void*)*5, v_nondep_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
lean_ctor_set_uint8(v___x_566_, sizeof(void*)*5 + 1, v_x_543_);
return v___x_566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_setKind___boxed(lean_object* v_x_569_, lean_object* v_x_570_){
_start:
{
uint8_t v_x_31__boxed_571_; lean_object* v_res_572_; 
v_x_31__boxed_571_ = lean_unbox(v_x_570_);
v_res_572_ = l_Lean_LocalDecl_setKind(v_x_569_, v_x_31__boxed_571_);
return v_res_572_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__0(void){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_573_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__1(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__0, &l_Lean_instInhabitedLocalContext_default___closed__0_once, _init_l_Lean_instInhabitedLocalContext_default___closed__0);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__2(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_576_ = lean_unsigned_to_nat(32u);
v___x_577_ = lean_mk_empty_array_with_capacity(v___x_576_);
v___x_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
return v___x_578_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__3(void){
_start:
{
size_t v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_579_ = ((size_t)5ULL);
v___x_580_ = lean_unsigned_to_nat(0u);
v___x_581_ = lean_unsigned_to_nat(32u);
v___x_582_ = lean_mk_empty_array_with_capacity(v___x_581_);
v___x_583_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__2, &l_Lean_instInhabitedLocalContext_default___closed__2_once, _init_l_Lean_instInhabitedLocalContext_default___closed__2);
v___x_584_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_584_, 0, v___x_583_);
lean_ctor_set(v___x_584_, 1, v___x_582_);
lean_ctor_set(v___x_584_, 2, v___x_580_);
lean_ctor_set(v___x_584_, 3, v___x_580_);
lean_ctor_set_usize(v___x_584_, 4, v___x_579_);
return v___x_584_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default___closed__4(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_585_ = lean_box(1);
v___x_586_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__3, &l_Lean_instInhabitedLocalContext_default___closed__3_once, _init_l_Lean_instInhabitedLocalContext_default___closed__3);
v___x_587_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__1, &l_Lean_instInhabitedLocalContext_default___closed__1_once, _init_l_Lean_instInhabitedLocalContext_default___closed__1);
v___x_588_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
lean_ctor_set(v___x_588_, 1, v___x_586_);
lean_ctor_set(v___x_588_, 2, v___x_585_);
return v___x_588_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext_default(void){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__4, &l_Lean_instInhabitedLocalContext_default___closed__4_once, _init_l_Lean_instInhabitedLocalContext_default___closed__4);
return v___x_589_;
}
}
static lean_object* _init_l_Lean_instInhabitedLocalContext(void){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_instInhabitedLocalContext_default;
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkEmpty___redArg(){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_592_ = lean_unsigned_to_nat(32u);
v___x_593_ = lean_mk_empty_array_with_capacity(v___x_592_);
lean_dec_ref(v___x_593_);
v___x_594_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__4, &l_Lean_instInhabitedLocalContext_default___closed__4_once, _init_l_Lean_instInhabitedLocalContext_default___closed__4);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkEmpty___redArg___boxed(lean_object* v___dummy_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_LocalContext_mkEmpty___redArg();
return v_res_596_;
}
}
static lean_object* _init_l_Lean_LocalContext_mkEmpty___closed__0(void){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_LocalContext_mkEmpty___redArg();
return v___x_597_;
}
}
LEAN_EXPORT lean_object* lean_mk_empty_local_ctx(lean_object* v_x_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = lean_obj_once(&l_Lean_LocalContext_mkEmpty___closed__0, &l_Lean_LocalContext_mkEmpty___closed__0_once, _init_l_Lean_LocalContext_mkEmpty___closed__0);
return v___x_599_;
}
}
static lean_object* _init_l_Lean_LocalContext_empty(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_600_ = lean_unsigned_to_nat(32u);
v___x_601_ = lean_mk_empty_array_with_capacity(v___x_600_);
lean_dec_ref(v___x_601_);
v___x_602_ = lean_obj_once(&l_Lean_instInhabitedLocalContext_default___closed__4, &l_Lean_instInhabitedLocalContext_default___closed__4_once, _init_l_Lean_instInhabitedLocalContext_default___closed__4);
return v___x_602_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg(lean_object* v_x_603_){
_start:
{
uint8_t v___x_604_; 
v___x_604_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg___boxed(lean_object* v_x_605_){
_start:
{
uint8_t v_res_606_; lean_object* v_r_607_; 
v_res_606_ = l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___redArg(v_x_605_);
lean_dec_ref(v_x_605_);
v_r_607_ = lean_box(v_res_606_);
return v_r_607_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0(lean_object* v_00_u03b2_608_, lean_object* v_x_609_){
_start:
{
uint8_t v___x_610_; 
v___x_610_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0___boxed(lean_object* v_00_u03b2_611_, lean_object* v_x_612_){
_start:
{
uint8_t v_res_613_; lean_object* v_r_614_; 
v_res_613_ = l_Lean_PersistentHashMap_isEmpty___at___00Lean_LocalContext_isEmpty_spec__0(v_00_u03b2_611_, v_x_612_);
lean_dec_ref(v_x_612_);
v_r_614_ = lean_box(v_res_613_);
return v_r_614_;
}
}
LEAN_EXPORT uint8_t lean_local_ctx_is_empty(lean_object* v_lctx_615_){
_start:
{
lean_object* v_fvarIdToDecl_616_; uint8_t v___x_617_; 
v_fvarIdToDecl_616_ = lean_ctor_get(v_lctx_615_, 0);
lean_inc_ref(v_fvarIdToDecl_616_);
lean_dec_ref(v_lctx_615_);
v___x_617_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_fvarIdToDecl_616_);
lean_dec_ref(v_fvarIdToDecl_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_isEmpty___boxed(lean_object* v_lctx_618_){
_start:
{
uint8_t v_res_619_; lean_object* v_r_620_; 
v_res_619_ = lean_local_ctx_is_empty(v_lctx_618_);
v_r_620_ = lean_box(v_res_619_);
return v_r_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_621_, lean_object* v_x_622_, lean_object* v_x_623_, lean_object* v_x_624_){
_start:
{
lean_object* v_ks_625_; lean_object* v_vs_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_650_; 
v_ks_625_ = lean_ctor_get(v_x_621_, 0);
v_vs_626_ = lean_ctor_get(v_x_621_, 1);
v_isSharedCheck_650_ = !lean_is_exclusive(v_x_621_);
if (v_isSharedCheck_650_ == 0)
{
v___x_628_ = v_x_621_;
v_isShared_629_ = v_isSharedCheck_650_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_vs_626_);
lean_inc(v_ks_625_);
lean_dec(v_x_621_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_650_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_630_ = lean_array_get_size(v_ks_625_);
v___x_631_ = lean_nat_dec_lt(v_x_622_, v___x_630_);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_635_; 
lean_dec(v_x_622_);
v___x_632_ = lean_array_push(v_ks_625_, v_x_623_);
v___x_633_ = lean_array_push(v_vs_626_, v_x_624_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_633_);
lean_ctor_set(v___x_628_, 0, v___x_632_);
v___x_635_ = v___x_628_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v___x_633_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
else
{
lean_object* v_k_x27_637_; uint8_t v___x_638_; 
v_k_x27_637_ = lean_array_fget_borrowed(v_ks_625_, v_x_622_);
v___x_638_ = l_Lean_instBEqFVarId_beq(v_x_623_, v_k_x27_637_);
if (v___x_638_ == 0)
{
lean_object* v___x_640_; 
if (v_isShared_629_ == 0)
{
v___x_640_ = v___x_628_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_ks_625_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v_vs_626_);
v___x_640_ = v_reuseFailAlloc_644_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_unsigned_to_nat(1u);
v___x_642_ = lean_nat_add(v_x_622_, v___x_641_);
lean_dec(v_x_622_);
v_x_621_ = v___x_640_;
v_x_622_ = v___x_642_;
goto _start;
}
}
else
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_648_; 
v___x_645_ = lean_array_fset(v_ks_625_, v_x_622_, v_x_623_);
v___x_646_ = lean_array_fset(v_vs_626_, v_x_622_, v_x_624_);
lean_dec(v_x_622_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_646_);
lean_ctor_set(v___x_628_, 0, v___x_645_);
v___x_648_ = v___x_628_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v___x_645_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v___x_646_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1___redArg(lean_object* v_n_651_, lean_object* v_k_652_, lean_object* v_v_653_){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = lean_unsigned_to_nat(0u);
v___x_655_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2___redArg(v_n_651_, v___x_654_, v_k_652_, v_v_653_);
return v___x_655_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = lean_box(0);
v___x_657_ = l_unsafeCast___redArg(v___x_656_);
return v___x_657_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(lean_object* v_x_659_, size_t v_x_660_, size_t v_x_661_, lean_object* v_x_662_, lean_object* v_x_663_){
_start:
{
if (lean_obj_tag(v_x_659_) == 0)
{
lean_object* v_es_664_; size_t v___x_665_; size_t v___x_666_; lean_object* v_j_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v_es_664_ = lean_ctor_get(v_x_659_, 0);
v___x_665_ = ((size_t)31ULL);
v___x_666_ = lean_usize_land(v_x_660_, v___x_665_);
v_j_667_ = lean_usize_to_nat(v___x_666_);
v___x_668_ = lean_array_get_size(v_es_664_);
v___x_669_ = lean_nat_dec_lt(v_j_667_, v___x_668_);
if (v___x_669_ == 0)
{
lean_dec(v_j_667_);
lean_dec(v_x_663_);
lean_dec(v_x_662_);
return v_x_659_;
}
else
{
lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_708_; 
lean_inc_ref(v_es_664_);
v_isSharedCheck_708_ = !lean_is_exclusive(v_x_659_);
if (v_isSharedCheck_708_ == 0)
{
lean_object* v_unused_709_; 
v_unused_709_ = lean_ctor_get(v_x_659_, 0);
lean_dec(v_unused_709_);
v___x_671_ = v_x_659_;
v_isShared_672_ = v_isSharedCheck_708_;
goto v_resetjp_670_;
}
else
{
lean_dec(v_x_659_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_708_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v_v_673_; lean_object* v___x_674_; lean_object* v_xs_x27_675_; lean_object* v___y_677_; 
v_v_673_ = lean_array_fget(v_es_664_, v_j_667_);
v___x_674_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__0);
v_xs_x27_675_ = lean_array_fset(v_es_664_, v_j_667_, v___x_674_);
switch(lean_obj_tag(v_v_673_))
{
case 0:
{
lean_object* v_key_682_; lean_object* v_val_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_693_; 
v_key_682_ = lean_ctor_get(v_v_673_, 0);
v_val_683_ = lean_ctor_get(v_v_673_, 1);
v_isSharedCheck_693_ = !lean_is_exclusive(v_v_673_);
if (v_isSharedCheck_693_ == 0)
{
v___x_685_ = v_v_673_;
v_isShared_686_ = v_isSharedCheck_693_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_val_683_);
lean_inc(v_key_682_);
lean_dec(v_v_673_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_693_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
uint8_t v___x_687_; 
v___x_687_ = l_Lean_instBEqFVarId_beq(v_x_662_, v_key_682_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
lean_del_object(v___x_685_);
v___x_688_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_682_, v_val_683_, v_x_662_, v_x_663_);
v___x_689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
v___y_677_ = v___x_689_;
goto v___jp_676_;
}
else
{
lean_object* v___x_691_; 
lean_dec(v_val_683_);
lean_dec(v_key_682_);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 1, v_x_663_);
lean_ctor_set(v___x_685_, 0, v_x_662_);
v___x_691_ = v___x_685_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_x_662_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_x_663_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
v___y_677_ = v___x_691_;
goto v___jp_676_;
}
}
}
}
case 1:
{
lean_object* v_node_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_706_; 
v_node_694_ = lean_ctor_get(v_v_673_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v_v_673_);
if (v_isSharedCheck_706_ == 0)
{
v___x_696_ = v_v_673_;
v_isShared_697_ = v_isSharedCheck_706_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_node_694_);
lean_dec(v_v_673_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_706_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
size_t v___x_698_; size_t v___x_699_; size_t v___x_700_; size_t v___x_701_; lean_object* v___x_702_; lean_object* v___x_704_; 
v___x_698_ = ((size_t)5ULL);
v___x_699_ = lean_usize_shift_right(v_x_660_, v___x_698_);
v___x_700_ = ((size_t)1ULL);
v___x_701_ = lean_usize_add(v_x_661_, v___x_700_);
v___x_702_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_node_694_, v___x_699_, v___x_701_, v_x_662_, v_x_663_);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_702_);
v___x_704_ = v___x_696_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___x_702_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
v___y_677_ = v___x_704_;
goto v___jp_676_;
}
}
}
default: 
{
lean_object* v___x_707_; 
v___x_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_707_, 0, v_x_662_);
lean_ctor_set(v___x_707_, 1, v_x_663_);
v___y_677_ = v___x_707_;
goto v___jp_676_;
}
}
v___jp_676_:
{
lean_object* v___x_678_; lean_object* v___x_680_; 
v___x_678_ = lean_array_fset(v_xs_x27_675_, v_j_667_, v___y_677_);
lean_dec(v_j_667_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_678_);
v___x_680_ = v___x_671_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_678_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
}
else
{
lean_object* v_ks_710_; lean_object* v_vs_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_729_; 
v_ks_710_ = lean_ctor_get(v_x_659_, 0);
v_vs_711_ = lean_ctor_get(v_x_659_, 1);
v_isSharedCheck_729_ = !lean_is_exclusive(v_x_659_);
if (v_isSharedCheck_729_ == 0)
{
v___x_713_ = v_x_659_;
v_isShared_714_ = v_isSharedCheck_729_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_vs_711_);
lean_inc(v_ks_710_);
lean_dec(v_x_659_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_729_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_ks_710_);
lean_ctor_set(v_reuseFailAlloc_728_, 1, v_vs_711_);
v___x_716_ = v_reuseFailAlloc_728_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v_newNode_717_; size_t v___x_718_; uint8_t v___x_719_; 
v_newNode_717_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1___redArg(v___x_716_, v_x_662_, v_x_663_);
v___x_718_ = ((size_t)7ULL);
v___x_719_ = lean_usize_dec_le(v___x_718_, v_x_661_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_720_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_717_);
v___x_721_ = lean_unsigned_to_nat(4u);
v___x_722_ = lean_nat_dec_lt(v___x_720_, v___x_721_);
lean_dec(v___x_720_);
if (v___x_722_ == 0)
{
lean_object* v_ks_723_; lean_object* v_vs_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v_ks_723_ = lean_ctor_get(v_newNode_717_, 0);
lean_inc_ref(v_ks_723_);
v_vs_724_ = lean_ctor_get(v_newNode_717_, 1);
lean_inc_ref(v_vs_724_);
lean_dec_ref(v_newNode_717_);
v___x_725_ = lean_unsigned_to_nat(0u);
v___x_726_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___closed__1);
v___x_727_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(v_x_661_, v_ks_723_, v_vs_724_, v___x_725_, v___x_726_);
lean_dec_ref(v_vs_724_);
lean_dec_ref(v_ks_723_);
return v___x_727_;
}
else
{
return v_newNode_717_;
}
}
else
{
return v_newNode_717_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(size_t v_depth_730_, lean_object* v_keys_731_, lean_object* v_vals_732_, lean_object* v_i_733_, lean_object* v_entries_734_){
_start:
{
lean_object* v___x_735_; uint8_t v___x_736_; 
v___x_735_ = lean_array_get_size(v_keys_731_);
v___x_736_ = lean_nat_dec_lt(v_i_733_, v___x_735_);
if (v___x_736_ == 0)
{
lean_dec(v_i_733_);
return v_entries_734_;
}
else
{
lean_object* v_k_737_; lean_object* v_v_738_; uint64_t v___x_739_; size_t v_h_740_; size_t v___x_741_; lean_object* v___x_742_; size_t v___x_743_; size_t v___x_744_; size_t v___x_745_; size_t v_h_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_k_737_ = lean_array_fget_borrowed(v_keys_731_, v_i_733_);
v_v_738_ = lean_array_fget_borrowed(v_vals_732_, v_i_733_);
v___x_739_ = l_Lean_instHashableFVarId_hash(v_k_737_);
v_h_740_ = lean_uint64_to_usize(v___x_739_);
v___x_741_ = ((size_t)5ULL);
v___x_742_ = lean_unsigned_to_nat(1u);
v___x_743_ = ((size_t)1ULL);
v___x_744_ = lean_usize_sub(v_depth_730_, v___x_743_);
v___x_745_ = lean_usize_mul(v___x_741_, v___x_744_);
v_h_746_ = lean_usize_shift_right(v_h_740_, v___x_745_);
v___x_747_ = lean_nat_add(v_i_733_, v___x_742_);
lean_dec(v_i_733_);
lean_inc(v_v_738_);
lean_inc(v_k_737_);
v___x_748_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_entries_734_, v_h_746_, v_depth_730_, v_k_737_, v_v_738_);
v_i_733_ = v___x_747_;
v_entries_734_ = v___x_748_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_750_, lean_object* v_keys_751_, lean_object* v_vals_752_, lean_object* v_i_753_, lean_object* v_entries_754_){
_start:
{
size_t v_depth_boxed_755_; lean_object* v_res_756_; 
v_depth_boxed_755_ = lean_unbox_usize(v_depth_750_);
lean_dec(v_depth_750_);
v_res_756_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(v_depth_boxed_755_, v_keys_751_, v_vals_752_, v_i_753_, v_entries_754_);
lean_dec_ref(v_vals_752_);
lean_dec_ref(v_keys_751_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg___boxed(lean_object* v_x_757_, lean_object* v_x_758_, lean_object* v_x_759_, lean_object* v_x_760_, lean_object* v_x_761_){
_start:
{
size_t v_x_372__boxed_762_; size_t v_x_373__boxed_763_; lean_object* v_res_764_; 
v_x_372__boxed_762_ = lean_unbox_usize(v_x_758_);
lean_dec(v_x_758_);
v_x_373__boxed_763_ = lean_unbox_usize(v_x_759_);
lean_dec(v_x_759_);
v_res_764_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_x_757_, v_x_372__boxed_762_, v_x_373__boxed_763_, v_x_760_, v_x_761_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(lean_object* v_x_765_, lean_object* v_x_766_, lean_object* v_x_767_){
_start:
{
uint64_t v___x_768_; size_t v___x_769_; size_t v___x_770_; lean_object* v___x_771_; 
v___x_768_ = l_Lean_instHashableFVarId_hash(v_x_766_);
v___x_769_ = lean_uint64_to_usize(v___x_768_);
v___x_770_ = ((size_t)1ULL);
v___x_771_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_x_765_, v___x_769_, v___x_770_, v_x_766_, v_x_767_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object* v_lctx_772_, lean_object* v_fvarId_773_, lean_object* v_userName_774_, lean_object* v_type_775_, uint8_t v_bi_776_, uint8_t v_kind_777_){
_start:
{
lean_object* v_decls_778_; lean_object* v_fvarIdToDecl_779_; lean_object* v_auxDeclToFullName_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_792_; 
v_decls_778_ = lean_ctor_get(v_lctx_772_, 1);
v_fvarIdToDecl_779_ = lean_ctor_get(v_lctx_772_, 0);
v_auxDeclToFullName_780_ = lean_ctor_get(v_lctx_772_, 2);
v_isSharedCheck_792_ = !lean_is_exclusive(v_lctx_772_);
if (v_isSharedCheck_792_ == 0)
{
v___x_782_ = v_lctx_772_;
v_isShared_783_ = v_isSharedCheck_792_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_auxDeclToFullName_780_);
lean_inc(v_decls_778_);
lean_inc(v_fvarIdToDecl_779_);
lean_dec(v_lctx_772_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_792_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v_size_784_; lean_object* v_decl_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_790_; 
v_size_784_ = lean_ctor_get(v_decls_778_, 2);
lean_inc(v_fvarId_773_);
lean_inc(v_size_784_);
v_decl_785_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_decl_785_, 0, v_size_784_);
lean_ctor_set(v_decl_785_, 1, v_fvarId_773_);
lean_ctor_set(v_decl_785_, 2, v_userName_774_);
lean_ctor_set(v_decl_785_, 3, v_type_775_);
lean_ctor_set_uint8(v_decl_785_, sizeof(void*)*4, v_bi_776_);
lean_ctor_set_uint8(v_decl_785_, sizeof(void*)*4 + 1, v_kind_777_);
lean_inc_ref(v_decl_785_);
v___x_786_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_779_, v_fvarId_773_, v_decl_785_);
v___x_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_787_, 0, v_decl_785_);
v___x_788_ = l_Lean_PersistentArray_push___redArg(v_decls_778_, v___x_787_);
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 1, v___x_788_);
lean_ctor_set(v___x_782_, 0, v___x_786_);
v___x_790_ = v___x_782_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_791_, 1, v___x_788_);
lean_ctor_set(v_reuseFailAlloc_791_, 2, v_auxDeclToFullName_780_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLocalDecl___boxed(lean_object* v_lctx_793_, lean_object* v_fvarId_794_, lean_object* v_userName_795_, lean_object* v_type_796_, lean_object* v_bi_797_, lean_object* v_kind_798_){
_start:
{
uint8_t v_bi_boxed_799_; uint8_t v_kind_boxed_800_; lean_object* v_res_801_; 
v_bi_boxed_799_ = lean_unbox(v_bi_797_);
v_kind_boxed_800_ = lean_unbox(v_kind_798_);
v_res_801_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_793_, v_fvarId_794_, v_userName_795_, v_type_796_, v_bi_boxed_799_, v_kind_boxed_800_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0(lean_object* v_00_u03b2_802_, lean_object* v_x_803_, lean_object* v_x_804_, lean_object* v_x_805_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_x_803_, v_x_804_, v_x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0(lean_object* v_00_u03b2_807_, lean_object* v_x_808_, size_t v_x_809_, size_t v_x_810_, lean_object* v_x_811_, lean_object* v_x_812_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___redArg(v_x_808_, v_x_809_, v_x_810_, v_x_811_, v_x_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_814_, lean_object* v_x_815_, lean_object* v_x_816_, lean_object* v_x_817_, lean_object* v_x_818_, lean_object* v_x_819_){
_start:
{
size_t v_x_574__boxed_820_; size_t v_x_575__boxed_821_; lean_object* v_res_822_; 
v_x_574__boxed_820_ = lean_unbox_usize(v_x_816_);
lean_dec(v_x_816_);
v_x_575__boxed_821_ = lean_unbox_usize(v_x_817_);
lean_dec(v_x_817_);
v_res_822_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0(v_00_u03b2_814_, v_x_815_, v_x_574__boxed_820_, v_x_575__boxed_821_, v_x_818_, v_x_819_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_823_, lean_object* v_n_824_, lean_object* v_k_825_, lean_object* v_v_826_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1___redArg(v_n_824_, v_k_825_, v_v_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_828_, size_t v_depth_829_, lean_object* v_keys_830_, lean_object* v_vals_831_, lean_object* v_heq_832_, lean_object* v_i_833_, lean_object* v_entries_834_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___redArg(v_depth_829_, v_keys_830_, v_vals_831_, v_i_833_, v_entries_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_836_, lean_object* v_depth_837_, lean_object* v_keys_838_, lean_object* v_vals_839_, lean_object* v_heq_840_, lean_object* v_i_841_, lean_object* v_entries_842_){
_start:
{
size_t v_depth_boxed_843_; lean_object* v_res_844_; 
v_depth_boxed_843_ = lean_unbox_usize(v_depth_837_);
lean_dec(v_depth_837_);
v_res_844_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__2(v_00_u03b2_836_, v_depth_boxed_843_, v_keys_838_, v_vals_839_, v_heq_840_, v_i_841_, v_entries_842_);
lean_dec_ref(v_vals_839_);
lean_dec_ref(v_keys_838_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_845_, lean_object* v_x_846_, lean_object* v_x_847_, lean_object* v_x_848_, lean_object* v_x_849_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0_spec__0_spec__1_spec__2___redArg(v_x_846_, v_x_847_, v_x_848_, v_x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* lean_local_ctx_mk_local_decl(lean_object* v_lctx_851_, lean_object* v_fvarId_852_, lean_object* v_userName_853_, lean_object* v_type_854_, uint8_t v_bi_855_){
_start:
{
uint8_t v___x_856_; lean_object* v___x_857_; 
v___x_856_ = 0;
v___x_857_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_851_, v_fvarId_852_, v_userName_853_, v_type_854_, v_bi_855_, v___x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_mkLocalDeclExported___boxed(lean_object* v_lctx_858_, lean_object* v_fvarId_859_, lean_object* v_userName_860_, lean_object* v_type_861_, lean_object* v_bi_862_){
_start:
{
uint8_t v_bi_boxed_863_; lean_object* v_res_864_; 
v_bi_boxed_863_ = lean_unbox(v_bi_862_);
v_res_864_ = lean_local_ctx_mk_local_decl(v_lctx_858_, v_fvarId_859_, v_userName_860_, v_type_861_, v_bi_boxed_863_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLetDecl(lean_object* v_lctx_865_, lean_object* v_fvarId_866_, lean_object* v_userName_867_, lean_object* v_type_868_, lean_object* v_value_869_, uint8_t v_nondep_870_, uint8_t v_kind_871_){
_start:
{
lean_object* v_decls_872_; lean_object* v_fvarIdToDecl_873_; lean_object* v_auxDeclToFullName_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_886_; 
v_decls_872_ = lean_ctor_get(v_lctx_865_, 1);
v_fvarIdToDecl_873_ = lean_ctor_get(v_lctx_865_, 0);
v_auxDeclToFullName_874_ = lean_ctor_get(v_lctx_865_, 2);
v_isSharedCheck_886_ = !lean_is_exclusive(v_lctx_865_);
if (v_isSharedCheck_886_ == 0)
{
v___x_876_ = v_lctx_865_;
v_isShared_877_ = v_isSharedCheck_886_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_auxDeclToFullName_874_);
lean_inc(v_decls_872_);
lean_inc(v_fvarIdToDecl_873_);
lean_dec(v_lctx_865_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_886_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v_size_878_; lean_object* v_decl_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_884_; 
v_size_878_ = lean_ctor_get(v_decls_872_, 2);
lean_inc(v_fvarId_866_);
lean_inc(v_size_878_);
v_decl_879_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_decl_879_, 0, v_size_878_);
lean_ctor_set(v_decl_879_, 1, v_fvarId_866_);
lean_ctor_set(v_decl_879_, 2, v_userName_867_);
lean_ctor_set(v_decl_879_, 3, v_type_868_);
lean_ctor_set(v_decl_879_, 4, v_value_869_);
lean_ctor_set_uint8(v_decl_879_, sizeof(void*)*5, v_nondep_870_);
lean_ctor_set_uint8(v_decl_879_, sizeof(void*)*5 + 1, v_kind_871_);
lean_inc_ref(v_decl_879_);
v___x_880_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_873_, v_fvarId_866_, v_decl_879_);
v___x_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_881_, 0, v_decl_879_);
v___x_882_ = l_Lean_PersistentArray_push___redArg(v_decls_872_, v___x_881_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 1, v___x_882_);
lean_ctor_set(v___x_876_, 0, v___x_880_);
v___x_884_ = v___x_876_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_880_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v___x_882_);
lean_ctor_set(v_reuseFailAlloc_885_, 2, v_auxDeclToFullName_874_);
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
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLetDecl___boxed(lean_object* v_lctx_887_, lean_object* v_fvarId_888_, lean_object* v_userName_889_, lean_object* v_type_890_, lean_object* v_value_891_, lean_object* v_nondep_892_, lean_object* v_kind_893_){
_start:
{
uint8_t v_nondep_boxed_894_; uint8_t v_kind_boxed_895_; lean_object* v_res_896_; 
v_nondep_boxed_894_ = lean_unbox(v_nondep_892_);
v_kind_boxed_895_ = lean_unbox(v_kind_893_);
v_res_896_ = l_Lean_LocalContext_mkLetDecl(v_lctx_887_, v_fvarId_888_, v_userName_889_, v_type_890_, v_value_891_, v_nondep_boxed_894_, v_kind_boxed_895_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* lean_local_ctx_mk_let_decl(lean_object* v_lctx_897_, lean_object* v_fvarId_898_, lean_object* v_userName_899_, lean_object* v_type_900_, lean_object* v_value_901_, uint8_t v_nondep_902_){
_start:
{
uint8_t v___x_903_; lean_object* v___x_904_; 
v___x_903_ = 0;
v___x_904_ = l_Lean_LocalContext_mkLetDecl(v_lctx_897_, v_fvarId_898_, v_userName_899_, v_type_900_, v_value_901_, v_nondep_902_, v___x_903_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_mkLetDeclExported___boxed(lean_object* v_lctx_905_, lean_object* v_fvarId_906_, lean_object* v_userName_907_, lean_object* v_type_908_, lean_object* v_value_909_, lean_object* v_nondep_910_){
_start:
{
uint8_t v_nondep_boxed_911_; lean_object* v_res_912_; 
v_nondep_boxed_911_ = lean_unbox(v_nondep_910_);
v_res_912_ = lean_local_ctx_mk_let_decl(v_lctx_905_, v_fvarId_906_, v_userName_907_, v_type_908_, v_value_909_, v_nondep_boxed_911_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkAuxDecl(lean_object* v_lctx_913_, lean_object* v_fvarId_914_, lean_object* v_userName_915_, lean_object* v_type_916_, lean_object* v_fullName_917_){
_start:
{
lean_object* v_decls_918_; lean_object* v_fvarIdToDecl_919_; lean_object* v_auxDeclToFullName_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_935_; 
v_decls_918_ = lean_ctor_get(v_lctx_913_, 1);
v_fvarIdToDecl_919_ = lean_ctor_get(v_lctx_913_, 0);
v_auxDeclToFullName_920_ = lean_ctor_get(v_lctx_913_, 2);
v_isSharedCheck_935_ = !lean_is_exclusive(v_lctx_913_);
if (v_isSharedCheck_935_ == 0)
{
v___x_922_ = v_lctx_913_;
v_isShared_923_ = v_isSharedCheck_935_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_auxDeclToFullName_920_);
lean_inc(v_decls_918_);
lean_inc(v_fvarIdToDecl_919_);
lean_dec(v_lctx_913_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_935_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v_size_924_; uint8_t v___x_925_; uint8_t v___x_926_; lean_object* v_decl_927_; lean_object* v_auxDeclToFullName_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_933_; 
v_size_924_ = lean_ctor_get(v_decls_918_, 2);
v___x_925_ = 0;
v___x_926_ = 2;
lean_inc_n(v_fvarId_914_, 2);
lean_inc(v_size_924_);
v_decl_927_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_decl_927_, 0, v_size_924_);
lean_ctor_set(v_decl_927_, 1, v_fvarId_914_);
lean_ctor_set(v_decl_927_, 2, v_userName_915_);
lean_ctor_set(v_decl_927_, 3, v_type_916_);
lean_ctor_set_uint8(v_decl_927_, sizeof(void*)*4, v___x_925_);
lean_ctor_set_uint8(v_decl_927_, sizeof(void*)*4 + 1, v___x_926_);
v_auxDeclToFullName_928_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_914_, v_fullName_917_, v_auxDeclToFullName_920_);
lean_inc_ref(v_decl_927_);
v___x_929_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_919_, v_fvarId_914_, v_decl_927_);
v___x_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_930_, 0, v_decl_927_);
v___x_931_ = l_Lean_PersistentArray_push___redArg(v_decls_918_, v___x_930_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 2, v_auxDeclToFullName_928_);
lean_ctor_set(v___x_922_, 1, v___x_931_);
lean_ctor_set(v___x_922_, 0, v___x_929_);
v___x_933_ = v___x_922_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v___x_931_);
lean_ctor_set(v_reuseFailAlloc_934_, 2, v_auxDeclToFullName_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_addDecl(lean_object* v_lctx_936_, lean_object* v_newDecl_937_){
_start:
{
lean_object* v_decls_938_; lean_object* v_fvarIdToDecl_939_; lean_object* v_auxDeclToFullName_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_955_; 
v_decls_938_ = lean_ctor_get(v_lctx_936_, 1);
v_fvarIdToDecl_939_ = lean_ctor_get(v_lctx_936_, 0);
v_auxDeclToFullName_940_ = lean_ctor_get(v_lctx_936_, 2);
v_isSharedCheck_955_ = !lean_is_exclusive(v_lctx_936_);
if (v_isSharedCheck_955_ == 0)
{
v___x_942_ = v_lctx_936_;
v_isShared_943_ = v_isSharedCheck_955_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_auxDeclToFullName_940_);
lean_inc(v_decls_938_);
lean_inc(v_fvarIdToDecl_939_);
lean_dec(v_lctx_936_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_955_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v_size_944_; lean_object* v_newDecl_945_; lean_object* v___y_947_; lean_object* v_fvarId_954_; 
v_size_944_ = lean_ctor_get(v_decls_938_, 2);
lean_inc(v_size_944_);
v_newDecl_945_ = l_Lean_LocalDecl_setIndex(v_newDecl_937_, v_size_944_);
v_fvarId_954_ = lean_ctor_get(v_newDecl_945_, 1);
lean_inc(v_fvarId_954_);
v___y_947_ = v_fvarId_954_;
goto v___jp_946_;
v___jp_946_:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_952_; 
lean_inc_ref(v_newDecl_945_);
v___x_948_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_939_, v___y_947_, v_newDecl_945_);
v___x_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_949_, 0, v_newDecl_945_);
v___x_950_ = l_Lean_PersistentArray_push___redArg(v_decls_938_, v___x_949_);
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 1, v___x_950_);
lean_ctor_set(v___x_942_, 0, v___x_948_);
v___x_952_ = v___x_942_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v___x_950_);
lean_ctor_set(v_reuseFailAlloc_953_, 2, v_auxDeclToFullName_940_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_956_, lean_object* v_vals_957_, lean_object* v_i_958_, lean_object* v_k_959_){
_start:
{
lean_object* v___x_960_; uint8_t v___x_961_; 
v___x_960_ = lean_array_get_size(v_keys_956_);
v___x_961_ = lean_nat_dec_lt(v_i_958_, v___x_960_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; 
lean_dec(v_i_958_);
v___x_962_ = lean_box(0);
return v___x_962_;
}
else
{
lean_object* v_k_x27_963_; uint8_t v___x_964_; 
v_k_x27_963_ = lean_array_fget_borrowed(v_keys_956_, v_i_958_);
v___x_964_ = l_Lean_instBEqFVarId_beq(v_k_959_, v_k_x27_963_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = lean_unsigned_to_nat(1u);
v___x_966_ = lean_nat_add(v_i_958_, v___x_965_);
lean_dec(v_i_958_);
v_i_958_ = v___x_966_;
goto _start;
}
else
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = lean_array_fget_borrowed(v_vals_957_, v_i_958_);
lean_dec(v_i_958_);
lean_inc(v___x_968_);
v___x_969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
return v___x_969_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_970_, lean_object* v_vals_971_, lean_object* v_i_972_, lean_object* v_k_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_970_, v_vals_971_, v_i_972_, v_k_973_);
lean_dec(v_k_973_);
lean_dec_ref(v_vals_971_);
lean_dec_ref(v_keys_970_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(lean_object* v_x_975_, size_t v_x_976_, lean_object* v_x_977_){
_start:
{
if (lean_obj_tag(v_x_975_) == 0)
{
lean_object* v_es_978_; lean_object* v___x_979_; size_t v___x_980_; size_t v___x_981_; lean_object* v_j_982_; lean_object* v___x_983_; 
v_es_978_ = lean_ctor_get(v_x_975_, 0);
v___x_979_ = lean_box(2);
v___x_980_ = ((size_t)31ULL);
v___x_981_ = lean_usize_land(v_x_976_, v___x_980_);
v_j_982_ = lean_usize_to_nat(v___x_981_);
v___x_983_ = lean_array_get_borrowed(v___x_979_, v_es_978_, v_j_982_);
lean_dec(v_j_982_);
switch(lean_obj_tag(v___x_983_))
{
case 0:
{
lean_object* v_key_984_; lean_object* v_val_985_; uint8_t v___x_986_; 
v_key_984_ = lean_ctor_get(v___x_983_, 0);
v_val_985_ = lean_ctor_get(v___x_983_, 1);
v___x_986_ = l_Lean_instBEqFVarId_beq(v_x_977_, v_key_984_);
if (v___x_986_ == 0)
{
lean_object* v___x_987_; 
v___x_987_ = lean_box(0);
return v___x_987_;
}
else
{
lean_object* v___x_988_; 
lean_inc(v_val_985_);
v___x_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_988_, 0, v_val_985_);
return v___x_988_;
}
}
case 1:
{
lean_object* v_node_989_; size_t v___x_990_; size_t v___x_991_; 
v_node_989_ = lean_ctor_get(v___x_983_, 0);
v___x_990_ = ((size_t)5ULL);
v___x_991_ = lean_usize_shift_right(v_x_976_, v___x_990_);
v_x_975_ = v_node_989_;
v_x_976_ = v___x_991_;
goto _start;
}
default: 
{
lean_object* v___x_993_; 
v___x_993_ = lean_box(0);
return v___x_993_;
}
}
}
else
{
lean_object* v_ks_994_; lean_object* v_vs_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v_ks_994_ = lean_ctor_get(v_x_975_, 0);
v_vs_995_ = lean_ctor_get(v_x_975_, 1);
v___x_996_ = lean_unsigned_to_nat(0u);
v___x_997_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(v_ks_994_, v_vs_995_, v___x_996_, v_x_977_);
return v___x_997_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_998_, lean_object* v_x_999_, lean_object* v_x_1000_){
_start:
{
size_t v_x_135__boxed_1001_; lean_object* v_res_1002_; 
v_x_135__boxed_1001_ = lean_unbox_usize(v_x_999_);
lean_dec(v_x_999_);
v_res_1002_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(v_x_998_, v_x_135__boxed_1001_, v_x_1000_);
lean_dec(v_x_1000_);
lean_dec_ref(v_x_998_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(lean_object* v_x_1003_, lean_object* v_x_1004_){
_start:
{
uint64_t v___x_1005_; size_t v___x_1006_; lean_object* v___x_1007_; 
v___x_1005_ = l_Lean_instHashableFVarId_hash(v_x_1004_);
v___x_1006_ = lean_uint64_to_usize(v___x_1005_);
v___x_1007_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(v_x_1003_, v___x_1006_, v_x_1004_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg___boxed(lean_object* v_x_1008_, lean_object* v_x_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_x_1008_, v_x_1009_);
lean_dec(v_x_1009_);
lean_dec_ref(v_x_1008_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* lean_local_ctx_find(lean_object* v_lctx_1011_, lean_object* v_fvarId_1012_){
_start:
{
lean_object* v_fvarIdToDecl_1013_; lean_object* v___x_1014_; 
v_fvarIdToDecl_1013_ = lean_ctor_get(v_lctx_1011_, 0);
lean_inc_ref(v_fvarIdToDecl_1013_);
lean_dec_ref(v_lctx_1011_);
v___x_1014_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_fvarIdToDecl_1013_, v_fvarId_1012_);
lean_dec(v_fvarId_1012_);
lean_dec_ref(v_fvarIdToDecl_1013_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0(lean_object* v_00_u03b2_1015_, lean_object* v_x_1016_, lean_object* v_x_1017_){
_start:
{
lean_object* v___x_1018_; 
v___x_1018_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_x_1016_, v_x_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___boxed(lean_object* v_00_u03b2_1019_, lean_object* v_x_1020_, lean_object* v_x_1021_){
_start:
{
lean_object* v_res_1022_; 
v_res_1022_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0(v_00_u03b2_1019_, v_x_1020_, v_x_1021_);
lean_dec(v_x_1021_);
lean_dec_ref(v_x_1020_);
return v_res_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1023_, lean_object* v_x_1024_, size_t v_x_1025_, lean_object* v_x_1026_){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___redArg(v_x_1024_, v_x_1025_, v_x_1026_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1028_, lean_object* v_x_1029_, lean_object* v_x_1030_, lean_object* v_x_1031_){
_start:
{
size_t v_x_204__boxed_1032_; lean_object* v_res_1033_; 
v_x_204__boxed_1032_ = lean_unbox_usize(v_x_1030_);
lean_dec(v_x_1030_);
v_res_1033_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0(v_00_u03b2_1028_, v_x_1029_, v_x_204__boxed_1032_, v_x_1031_);
lean_dec(v_x_1031_);
lean_dec_ref(v_x_1029_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1034_, lean_object* v_keys_1035_, lean_object* v_vals_1036_, lean_object* v_heq_1037_, lean_object* v_i_1038_, lean_object* v_k_1039_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1035_, v_vals_1036_, v_i_1038_, v_k_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1041_, lean_object* v_keys_1042_, lean_object* v_vals_1043_, lean_object* v_heq_1044_, lean_object* v_i_1045_, lean_object* v_k_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0_spec__0_spec__1(v_00_u03b2_1041_, v_keys_1042_, v_vals_1043_, v_heq_1044_, v_i_1045_, v_k_1046_);
lean_dec(v_k_1046_);
lean_dec_ref(v_vals_1043_);
lean_dec_ref(v_keys_1042_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFVar_x3f(lean_object* v_lctx_1048_, lean_object* v_e_1049_){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = l_Lean_Expr_fvarId_x21(v_e_1049_);
v___x_1051_ = lean_local_ctx_find(v_lctx_1048_, v___x_1050_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFVar_x3f___boxed(lean_object* v_lctx_1052_, lean_object* v_e_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_1052_, v_e_1053_);
lean_dec_ref(v_e_1053_);
return v_res_1054_;
}
}
static lean_object* _init_l_Lean_LocalContext_get_x21___closed__2(void){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v___x_1057_ = ((lean_object*)(l_Lean_LocalContext_get_x21___closed__1));
v___x_1058_ = lean_unsigned_to_nat(14u);
v___x_1059_ = lean_unsigned_to_nat(340u);
v___x_1060_ = ((lean_object*)(l_Lean_LocalContext_get_x21___closed__0));
v___x_1061_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_1062_ = l_mkPanicMessageWithDecl(v___x_1061_, v___x_1060_, v___x_1059_, v___x_1058_, v___x_1057_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_get_x21(lean_object* v_lctx_1063_, lean_object* v_fvarId_1064_){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = lean_local_ctx_find(v_lctx_1063_, v_fvarId_1064_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = lean_obj_once(&l_Lean_LocalContext_get_x21___closed__2, &l_Lean_LocalContext_get_x21___closed__2_once, _init_l_Lean_LocalContext_get_x21___closed__2);
v___x_1067_ = l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(v___x_1066_);
return v___x_1067_;
}
else
{
lean_object* v_val_1068_; 
v_val_1068_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_val_1068_);
lean_dec_ref_known(v___x_1065_, 1);
return v_val_1068_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVar_x21(lean_object* v_lctx_1069_, lean_object* v_e_1070_){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = l_Lean_Expr_fvarId_x21(v_e_1070_);
v___x_1072_ = l_Lean_LocalContext_get_x21(v_lctx_1069_, v___x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVar_x21___boxed(lean_object* v_lctx_1073_, lean_object* v_e_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l_Lean_LocalContext_getFVar_x21(v_lctx_1073_, v_e_1074_);
lean_dec_ref(v_e_1074_);
return v_res_1075_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1076_, lean_object* v_i_1077_, lean_object* v_k_1078_){
_start:
{
lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1079_ = lean_array_get_size(v_keys_1076_);
v___x_1080_ = lean_nat_dec_lt(v_i_1077_, v___x_1079_);
if (v___x_1080_ == 0)
{
lean_dec(v_i_1077_);
return v___x_1080_;
}
else
{
lean_object* v_k_x27_1081_; uint8_t v___x_1082_; 
v_k_x27_1081_ = lean_array_fget_borrowed(v_keys_1076_, v_i_1077_);
v___x_1082_ = l_Lean_instBEqFVarId_beq(v_k_1078_, v_k_x27_1081_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1083_ = lean_unsigned_to_nat(1u);
v___x_1084_ = lean_nat_add(v_i_1077_, v___x_1083_);
lean_dec(v_i_1077_);
v_i_1077_ = v___x_1084_;
goto _start;
}
else
{
lean_dec(v_i_1077_);
return v___x_1080_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1086_, lean_object* v_i_1087_, lean_object* v_k_1088_){
_start:
{
uint8_t v_res_1089_; lean_object* v_r_1090_; 
v_res_1089_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(v_keys_1086_, v_i_1087_, v_k_1088_);
lean_dec(v_k_1088_);
lean_dec_ref(v_keys_1086_);
v_r_1090_ = lean_box(v_res_1089_);
return v_r_1090_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(lean_object* v_x_1091_, size_t v_x_1092_, lean_object* v_x_1093_){
_start:
{
if (lean_obj_tag(v_x_1091_) == 0)
{
lean_object* v_es_1094_; lean_object* v___x_1095_; size_t v___x_1096_; size_t v___x_1097_; lean_object* v_j_1098_; lean_object* v___x_1099_; 
v_es_1094_ = lean_ctor_get(v_x_1091_, 0);
v___x_1095_ = lean_box(2);
v___x_1096_ = ((size_t)31ULL);
v___x_1097_ = lean_usize_land(v_x_1092_, v___x_1096_);
v_j_1098_ = lean_usize_to_nat(v___x_1097_);
v___x_1099_ = lean_array_get_borrowed(v___x_1095_, v_es_1094_, v_j_1098_);
lean_dec(v_j_1098_);
switch(lean_obj_tag(v___x_1099_))
{
case 0:
{
lean_object* v_key_1100_; uint8_t v___x_1101_; 
v_key_1100_ = lean_ctor_get(v___x_1099_, 0);
v___x_1101_ = l_Lean_instBEqFVarId_beq(v_x_1093_, v_key_1100_);
return v___x_1101_;
}
case 1:
{
lean_object* v_node_1102_; size_t v___x_1103_; size_t v___x_1104_; 
v_node_1102_ = lean_ctor_get(v___x_1099_, 0);
v___x_1103_ = ((size_t)5ULL);
v___x_1104_ = lean_usize_shift_right(v_x_1092_, v___x_1103_);
v_x_1091_ = v_node_1102_;
v_x_1092_ = v___x_1104_;
goto _start;
}
default: 
{
uint8_t v___x_1106_; 
v___x_1106_ = 0;
return v___x_1106_;
}
}
}
else
{
lean_object* v_ks_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; 
v_ks_1107_ = lean_ctor_get(v_x_1091_, 0);
v___x_1108_ = lean_unsigned_to_nat(0u);
v___x_1109_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(v_ks_1107_, v___x_1108_, v_x_1093_);
return v___x_1109_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg___boxed(lean_object* v_x_1110_, lean_object* v_x_1111_, lean_object* v_x_1112_){
_start:
{
size_t v_x_119__boxed_1113_; uint8_t v_res_1114_; lean_object* v_r_1115_; 
v_x_119__boxed_1113_ = lean_unbox_usize(v_x_1111_);
lean_dec(v_x_1111_);
v_res_1114_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(v_x_1110_, v_x_119__boxed_1113_, v_x_1112_);
lean_dec(v_x_1112_);
lean_dec_ref(v_x_1110_);
v_r_1115_ = lean_box(v_res_1114_);
return v_r_1115_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(lean_object* v_x_1116_, lean_object* v_x_1117_){
_start:
{
uint64_t v___x_1118_; size_t v___x_1119_; uint8_t v___x_1120_; 
v___x_1118_ = l_Lean_instHashableFVarId_hash(v_x_1117_);
v___x_1119_ = lean_uint64_to_usize(v___x_1118_);
v___x_1120_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(v_x_1116_, v___x_1119_, v_x_1117_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg___boxed(lean_object* v_x_1121_, lean_object* v_x_1122_){
_start:
{
uint8_t v_res_1123_; lean_object* v_r_1124_; 
v_res_1123_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(v_x_1121_, v_x_1122_);
lean_dec(v_x_1122_);
lean_dec_ref(v_x_1121_);
v_r_1124_ = lean_box(v_res_1123_);
return v_r_1124_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_contains(lean_object* v_lctx_1125_, lean_object* v_fvarId_1126_){
_start:
{
lean_object* v_fvarIdToDecl_1127_; uint8_t v___x_1128_; 
v_fvarIdToDecl_1127_ = lean_ctor_get(v_lctx_1125_, 0);
v___x_1128_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(v_fvarIdToDecl_1127_, v_fvarId_1126_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_contains___boxed(lean_object* v_lctx_1129_, lean_object* v_fvarId_1130_){
_start:
{
uint8_t v_res_1131_; lean_object* v_r_1132_; 
v_res_1131_ = l_Lean_LocalContext_contains(v_lctx_1129_, v_fvarId_1130_);
lean_dec(v_fvarId_1130_);
lean_dec_ref(v_lctx_1129_);
v_r_1132_ = lean_box(v_res_1131_);
return v_r_1132_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0(lean_object* v_00_u03b2_1133_, lean_object* v_x_1134_, lean_object* v_x_1135_){
_start:
{
uint8_t v___x_1136_; 
v___x_1136_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___redArg(v_x_1134_, v_x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0___boxed(lean_object* v_00_u03b2_1137_, lean_object* v_x_1138_, lean_object* v_x_1139_){
_start:
{
uint8_t v_res_1140_; lean_object* v_r_1141_; 
v_res_1140_ = l_Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0(v_00_u03b2_1137_, v_x_1138_, v_x_1139_);
lean_dec(v_x_1139_);
lean_dec_ref(v_x_1138_);
v_r_1141_ = lean_box(v_res_1140_);
return v_r_1141_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0(lean_object* v_00_u03b2_1142_, lean_object* v_x_1143_, size_t v_x_1144_, lean_object* v_x_1145_){
_start:
{
uint8_t v___x_1146_; 
v___x_1146_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___redArg(v_x_1143_, v_x_1144_, v_x_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1147_, lean_object* v_x_1148_, lean_object* v_x_1149_, lean_object* v_x_1150_){
_start:
{
size_t v_x_182__boxed_1151_; uint8_t v_res_1152_; lean_object* v_r_1153_; 
v_x_182__boxed_1151_ = lean_unbox_usize(v_x_1149_);
lean_dec(v_x_1149_);
v_res_1152_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0(v_00_u03b2_1147_, v_x_1148_, v_x_182__boxed_1151_, v_x_1150_);
lean_dec(v_x_1150_);
lean_dec_ref(v_x_1148_);
v_r_1153_ = lean_box(v_res_1152_);
return v_r_1153_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1154_, lean_object* v_keys_1155_, lean_object* v_vals_1156_, lean_object* v_heq_1157_, lean_object* v_i_1158_, lean_object* v_k_1159_){
_start:
{
uint8_t v___x_1160_; 
v___x_1160_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___redArg(v_keys_1155_, v_i_1158_, v_k_1159_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1161_, lean_object* v_keys_1162_, lean_object* v_vals_1163_, lean_object* v_heq_1164_, lean_object* v_i_1165_, lean_object* v_k_1166_){
_start:
{
uint8_t v_res_1167_; lean_object* v_r_1168_; 
v_res_1167_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_LocalContext_contains_spec__0_spec__0_spec__1(v_00_u03b2_1161_, v_keys_1162_, v_vals_1163_, v_heq_1164_, v_i_1165_, v_k_1166_);
lean_dec(v_k_1166_);
lean_dec_ref(v_vals_1163_);
lean_dec_ref(v_keys_1162_);
v_r_1168_ = lean_box(v_res_1167_);
return v_r_1168_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_containsFVar(lean_object* v_lctx_1169_, lean_object* v_e_1170_){
_start:
{
lean_object* v___x_1171_; uint8_t v___x_1172_; 
v___x_1171_ = l_Lean_Expr_fvarId_x21(v_e_1170_);
v___x_1172_ = l_Lean_LocalContext_contains(v_lctx_1169_, v___x_1171_);
lean_dec(v___x_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_containsFVar___boxed(lean_object* v_lctx_1173_, lean_object* v_e_1174_){
_start:
{
uint8_t v_res_1175_; lean_object* v_r_1176_; 
v_res_1175_ = l_Lean_LocalContext_containsFVar(v_lctx_1173_, v_e_1174_);
lean_dec_ref(v_e_1174_);
lean_dec_ref(v_lctx_1173_);
v_r_1176_ = lean_box(v_res_1175_);
return v_r_1176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(lean_object* v_as_1177_, size_t v_i_1178_, size_t v_stop_1179_, lean_object* v_b_1180_){
_start:
{
lean_object* v___y_1182_; uint8_t v___x_1186_; 
v___x_1186_ = lean_usize_dec_eq(v_i_1178_, v_stop_1179_);
if (v___x_1186_ == 0)
{
lean_object* v___x_1187_; 
v___x_1187_ = lean_array_uget_borrowed(v_as_1177_, v_i_1178_);
if (lean_obj_tag(v___x_1187_) == 0)
{
v___y_1182_ = v_b_1180_;
goto v___jp_1181_;
}
else
{
lean_object* v_val_1188_; lean_object* v_fvarId_1189_; lean_object* v___x_1190_; 
v_val_1188_ = lean_ctor_get(v___x_1187_, 0);
v_fvarId_1189_ = lean_ctor_get(v_val_1188_, 1);
lean_inc(v_fvarId_1189_);
v___x_1190_ = lean_array_push(v_b_1180_, v_fvarId_1189_);
v___y_1182_ = v___x_1190_;
goto v___jp_1181_;
}
}
else
{
return v_b_1180_;
}
v___jp_1181_:
{
size_t v___x_1183_; size_t v___x_1184_; 
v___x_1183_ = ((size_t)1ULL);
v___x_1184_ = lean_usize_add(v_i_1178_, v___x_1183_);
v_i_1178_ = v___x_1184_;
v_b_1180_ = v___y_1182_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1___boxed(lean_object* v_as_1191_, lean_object* v_i_1192_, lean_object* v_stop_1193_, lean_object* v_b_1194_){
_start:
{
size_t v_i_boxed_1195_; size_t v_stop_boxed_1196_; lean_object* v_res_1197_; 
v_i_boxed_1195_ = lean_unbox_usize(v_i_1192_);
lean_dec(v_i_1192_);
v_stop_boxed_1196_ = lean_unbox_usize(v_stop_1193_);
lean_dec(v_stop_1193_);
v_res_1197_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_as_1191_, v_i_boxed_1195_, v_stop_boxed_1196_, v_b_1194_);
lean_dec_ref(v_as_1191_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(lean_object* v_x_1198_, lean_object* v_x_1199_){
_start:
{
if (lean_obj_tag(v_x_1198_) == 0)
{
lean_object* v_cs_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; uint8_t v___x_1203_; 
v_cs_1200_ = lean_ctor_get(v_x_1198_, 0);
v___x_1201_ = lean_unsigned_to_nat(0u);
v___x_1202_ = lean_array_get_size(v_cs_1200_);
v___x_1203_ = lean_nat_dec_lt(v___x_1201_, v___x_1202_);
if (v___x_1203_ == 0)
{
return v_x_1199_;
}
else
{
size_t v___x_1204_; size_t v___x_1205_; lean_object* v___x_1206_; 
v___x_1204_ = ((size_t)0ULL);
v___x_1205_ = lean_usize_of_nat(v___x_1202_);
v___x_1206_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(v_cs_1200_, v___x_1204_, v___x_1205_, v_x_1199_);
return v___x_1206_;
}
}
else
{
lean_object* v_vs_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; 
v_vs_1207_ = lean_ctor_get(v_x_1198_, 0);
v___x_1208_ = lean_unsigned_to_nat(0u);
v___x_1209_ = lean_array_get_size(v_vs_1207_);
v___x_1210_ = lean_nat_dec_lt(v___x_1208_, v___x_1209_);
if (v___x_1210_ == 0)
{
return v_x_1199_;
}
else
{
size_t v___x_1211_; size_t v___x_1212_; lean_object* v___x_1213_; 
v___x_1211_ = ((size_t)0ULL);
v___x_1212_ = lean_usize_of_nat(v___x_1209_);
v___x_1213_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_vs_1207_, v___x_1211_, v___x_1212_, v_x_1199_);
return v___x_1213_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(lean_object* v_as_1214_, size_t v_i_1215_, size_t v_stop_1216_, lean_object* v_b_1217_){
_start:
{
uint8_t v___x_1218_; 
v___x_1218_ = lean_usize_dec_eq(v_i_1215_, v_stop_1216_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1219_; lean_object* v___x_1220_; size_t v___x_1221_; size_t v___x_1222_; 
v___x_1219_ = lean_array_uget_borrowed(v_as_1214_, v_i_1215_);
v___x_1220_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(v___x_1219_, v_b_1217_);
v___x_1221_ = ((size_t)1ULL);
v___x_1222_ = lean_usize_add(v_i_1215_, v___x_1221_);
v_i_1215_ = v___x_1222_;
v_b_1217_ = v___x_1220_;
goto _start;
}
else
{
return v_b_1217_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1___boxed(lean_object* v_as_1224_, lean_object* v_i_1225_, lean_object* v_stop_1226_, lean_object* v_b_1227_){
_start:
{
size_t v_i_boxed_1228_; size_t v_stop_boxed_1229_; lean_object* v_res_1230_; 
v_i_boxed_1228_ = lean_unbox_usize(v_i_1225_);
lean_dec(v_i_1225_);
v_stop_boxed_1229_ = lean_unbox_usize(v_stop_1226_);
lean_dec(v_stop_1226_);
v_res_1230_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(v_as_1224_, v_i_boxed_1228_, v_stop_boxed_1229_, v_b_1227_);
lean_dec_ref(v_as_1224_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2___boxed(lean_object* v_x_1231_, lean_object* v_x_1232_){
_start:
{
lean_object* v_res_1233_; 
v_res_1233_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(v_x_1231_, v_x_1232_);
lean_dec_ref(v_x_1231_);
return v_res_1233_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(lean_object* v_x_1235_, size_t v_x_1236_, size_t v_x_1237_, lean_object* v_x_1238_){
_start:
{
if (lean_obj_tag(v_x_1235_) == 0)
{
lean_object* v_cs_1239_; lean_object* v___x_1240_; size_t v___x_1241_; lean_object* v_j_1242_; lean_object* v___x_1243_; size_t v___x_1244_; size_t v___x_1245_; size_t v___x_1246_; size_t v___x_1247_; size_t v___x_1248_; size_t v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; uint8_t v___x_1254_; 
v_cs_1239_ = lean_ctor_get(v_x_1235_, 0);
v___x_1240_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0);
v___x_1241_ = lean_usize_shift_right(v_x_1236_, v_x_1237_);
v_j_1242_ = lean_usize_to_nat(v___x_1241_);
v___x_1243_ = lean_array_get_borrowed(v___x_1240_, v_cs_1239_, v_j_1242_);
v___x_1244_ = ((size_t)1ULL);
v___x_1245_ = lean_usize_shift_left(v___x_1244_, v_x_1237_);
v___x_1246_ = lean_usize_sub(v___x_1245_, v___x_1244_);
v___x_1247_ = lean_usize_land(v_x_1236_, v___x_1246_);
v___x_1248_ = ((size_t)5ULL);
v___x_1249_ = lean_usize_sub(v_x_1237_, v___x_1248_);
v___x_1250_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(v___x_1243_, v___x_1247_, v___x_1249_, v_x_1238_);
v___x_1251_ = lean_unsigned_to_nat(1u);
v___x_1252_ = lean_nat_add(v_j_1242_, v___x_1251_);
lean_dec(v_j_1242_);
v___x_1253_ = lean_array_get_size(v_cs_1239_);
v___x_1254_ = lean_nat_dec_lt(v___x_1252_, v___x_1253_);
if (v___x_1254_ == 0)
{
lean_dec(v___x_1252_);
return v___x_1250_;
}
else
{
size_t v___x_1255_; size_t v___x_1256_; lean_object* v___x_1257_; 
v___x_1255_ = lean_usize_of_nat(v___x_1252_);
lean_dec(v___x_1252_);
v___x_1256_ = lean_usize_of_nat(v___x_1253_);
v___x_1257_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0_spec__1(v_cs_1239_, v___x_1255_, v___x_1256_, v___x_1250_);
return v___x_1257_;
}
}
else
{
lean_object* v_vs_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; uint8_t v___x_1261_; 
v_vs_1258_ = lean_ctor_get(v_x_1235_, 0);
v___x_1259_ = lean_usize_to_nat(v_x_1236_);
v___x_1260_ = lean_array_get_size(v_vs_1258_);
v___x_1261_ = lean_nat_dec_lt(v___x_1259_, v___x_1260_);
if (v___x_1261_ == 0)
{
lean_dec(v___x_1259_);
return v_x_1238_;
}
else
{
size_t v___x_1262_; size_t v___x_1263_; lean_object* v___x_1264_; 
v___x_1262_ = lean_usize_of_nat(v___x_1259_);
lean_dec(v___x_1259_);
v___x_1263_ = lean_usize_of_nat(v___x_1260_);
v___x_1264_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_vs_1258_, v___x_1262_, v___x_1263_, v_x_1238_);
return v___x_1264_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___boxed(lean_object* v_x_1265_, lean_object* v_x_1266_, lean_object* v_x_1267_, lean_object* v_x_1268_){
_start:
{
size_t v_x_1260__boxed_1269_; size_t v_x_1261__boxed_1270_; lean_object* v_res_1271_; 
v_x_1260__boxed_1269_ = lean_unbox_usize(v_x_1266_);
lean_dec(v_x_1266_);
v_x_1261__boxed_1270_ = lean_unbox_usize(v_x_1267_);
lean_dec(v_x_1267_);
v_res_1271_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(v_x_1265_, v_x_1260__boxed_1269_, v_x_1261__boxed_1270_, v_x_1268_);
lean_dec_ref(v_x_1265_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0(lean_object* v_t_1272_, lean_object* v_init_1273_, lean_object* v_start_1274_){
_start:
{
lean_object* v___x_1275_; uint8_t v___x_1276_; 
v___x_1275_ = lean_unsigned_to_nat(0u);
v___x_1276_ = lean_nat_dec_eq(v_start_1274_, v___x_1275_);
if (v___x_1276_ == 0)
{
lean_object* v_root_1277_; lean_object* v_tail_1278_; size_t v_shift_1279_; lean_object* v_tailOff_1280_; uint8_t v___x_1281_; 
v_root_1277_ = lean_ctor_get(v_t_1272_, 0);
v_tail_1278_ = lean_ctor_get(v_t_1272_, 1);
v_shift_1279_ = lean_ctor_get_usize(v_t_1272_, 4);
v_tailOff_1280_ = lean_ctor_get(v_t_1272_, 3);
v___x_1281_ = lean_nat_dec_le(v_tailOff_1280_, v_start_1274_);
if (v___x_1281_ == 0)
{
size_t v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; uint8_t v___x_1285_; 
v___x_1282_ = lean_usize_of_nat(v_start_1274_);
v___x_1283_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0(v_root_1277_, v___x_1282_, v_shift_1279_, v_init_1273_);
v___x_1284_ = lean_array_get_size(v_tail_1278_);
v___x_1285_ = lean_nat_dec_lt(v___x_1275_, v___x_1284_);
if (v___x_1285_ == 0)
{
return v___x_1283_;
}
else
{
size_t v___x_1286_; size_t v___x_1287_; lean_object* v___x_1288_; 
v___x_1286_ = ((size_t)0ULL);
v___x_1287_ = lean_usize_of_nat(v___x_1284_);
v___x_1288_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_tail_1278_, v___x_1286_, v___x_1287_, v___x_1283_);
return v___x_1288_;
}
}
else
{
lean_object* v___x_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v___x_1289_ = lean_nat_sub(v_start_1274_, v_tailOff_1280_);
v___x_1290_ = lean_array_get_size(v_tail_1278_);
v___x_1291_ = lean_nat_dec_lt(v___x_1289_, v___x_1290_);
if (v___x_1291_ == 0)
{
lean_dec(v___x_1289_);
return v_init_1273_;
}
else
{
size_t v___x_1292_; size_t v___x_1293_; lean_object* v___x_1294_; 
v___x_1292_ = lean_usize_of_nat(v___x_1289_);
lean_dec(v___x_1289_);
v___x_1293_ = lean_usize_of_nat(v___x_1290_);
v___x_1294_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_tail_1278_, v___x_1292_, v___x_1293_, v_init_1273_);
return v___x_1294_;
}
}
}
else
{
lean_object* v_root_1295_; lean_object* v_tail_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; uint8_t v___x_1299_; 
v_root_1295_ = lean_ctor_get(v_t_1272_, 0);
v_tail_1296_ = lean_ctor_get(v_t_1272_, 1);
v___x_1297_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__2(v_root_1295_, v_init_1273_);
v___x_1298_ = lean_array_get_size(v_tail_1296_);
v___x_1299_ = lean_nat_dec_lt(v___x_1275_, v___x_1298_);
if (v___x_1299_ == 0)
{
return v___x_1297_;
}
else
{
size_t v___x_1300_; size_t v___x_1301_; lean_object* v___x_1302_; 
v___x_1300_ = ((size_t)0ULL);
v___x_1301_ = lean_usize_of_nat(v___x_1298_);
v___x_1302_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__1(v_tail_1296_, v___x_1300_, v___x_1301_, v___x_1297_);
return v___x_1302_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0___boxed(lean_object* v_t_1303_, lean_object* v_init_1304_, lean_object* v_start_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0(v_t_1303_, v_init_1304_, v_start_1305_);
lean_dec(v_start_1305_);
lean_dec_ref(v_t_1303_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVarIds(lean_object* v_lctx_1309_){
_start:
{
lean_object* v_decls_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v_decls_1310_ = lean_ctor_get(v_lctx_1309_, 1);
v___x_1311_ = lean_unsigned_to_nat(0u);
v___x_1312_ = ((lean_object*)(l_Lean_LocalContext_getFVarIds___closed__0));
v___x_1313_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0(v_decls_1310_, v___x_1312_, v___x_1311_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVarIds___boxed(lean_object* v_lctx_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lean_LocalContext_getFVarIds(v_lctx_1314_);
lean_dec_ref(v_lctx_1314_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0(size_t v_sz_1316_, size_t v_i_1317_, lean_object* v_bs_1318_){
_start:
{
uint8_t v___x_1319_; 
v___x_1319_ = lean_usize_dec_lt(v_i_1317_, v_sz_1316_);
if (v___x_1319_ == 0)
{
lean_object* v___x_1320_; 
v___x_1320_ = l_unsafeCast___redArg(v_bs_1318_);
lean_dec_ref(v_bs_1318_);
return v___x_1320_;
}
else
{
lean_object* v_v_1321_; lean_object* v___x_1322_; lean_object* v_bs_x27_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; size_t v___x_1326_; size_t v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v_v_1321_ = lean_array_uget(v_bs_1318_, v_i_1317_);
v___x_1322_ = lean_unsigned_to_nat(0u);
v_bs_x27_1323_ = lean_array_uset(v_bs_1318_, v_i_1317_, v___x_1322_);
v___x_1324_ = l_unsafeCast___redArg(v_v_1321_);
lean_dec(v_v_1321_);
v___x_1325_ = l_Lean_mkFVar(v___x_1324_);
v___x_1326_ = ((size_t)1ULL);
v___x_1327_ = lean_usize_add(v_i_1317_, v___x_1326_);
v___x_1328_ = l_unsafeCast___redArg(v___x_1325_);
lean_dec_ref(v___x_1325_);
v___x_1329_ = lean_array_uset(v_bs_x27_1323_, v_i_1317_, v___x_1328_);
v_i_1317_ = v___x_1327_;
v_bs_1318_ = v___x_1329_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0___boxed(lean_object* v_sz_1331_, lean_object* v_i_1332_, lean_object* v_bs_1333_){
_start:
{
size_t v_sz_boxed_1334_; size_t v_i_boxed_1335_; lean_object* v_res_1336_; 
v_sz_boxed_1334_ = lean_unbox_usize(v_sz_1331_);
lean_dec(v_sz_1331_);
v_i_boxed_1335_ = lean_unbox_usize(v_i_1332_);
lean_dec(v_i_1332_);
v_res_1336_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0(v_sz_boxed_1334_, v_i_boxed_1335_, v_bs_1333_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVars(lean_object* v_lctx_1337_){
_start:
{
lean_object* v___x_1338_; size_t v_sz_1339_; size_t v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1338_ = l_Lean_LocalContext_getFVarIds(v_lctx_1337_);
v_sz_1339_ = lean_array_size(v___x_1338_);
v___x_1340_ = ((size_t)0ULL);
v___x_1341_ = l_unsafeCast___redArg(v___x_1338_);
lean_dec_ref(v___x_1338_);
v___x_1342_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_getFVars_spec__0(v_sz_1339_, v___x_1340_, v___x_1341_);
v___x_1343_ = l_unsafeCast___redArg(v___x_1342_);
lean_dec_ref(v___x_1342_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFVars___boxed(lean_object* v_lctx_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Lean_LocalContext_getFVars(v_lctx_1344_);
lean_dec_ref(v_lctx_1344_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_popTailNoneAux(lean_object* v_a_1346_){
_start:
{
lean_object* v_size_1347_; lean_object* v___x_1348_; uint8_t v___x_1349_; 
v_size_1347_ = lean_ctor_get(v_a_1346_, 2);
v___x_1348_ = lean_unsigned_to_nat(0u);
v___x_1349_ = lean_nat_dec_eq(v_size_1347_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1350_ = lean_box(0);
v___x_1351_ = lean_unsigned_to_nat(1u);
v___x_1352_ = lean_nat_sub(v_size_1347_, v___x_1351_);
v___x_1353_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1350_, v_a_1346_, v___x_1352_);
lean_dec(v___x_1352_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v___x_1354_; 
v___x_1354_ = l_Lean_PersistentArray_pop___redArg(v_a_1346_);
v_a_1346_ = v___x_1354_;
goto _start;
}
else
{
lean_dec_ref_known(v___x_1353_, 1);
return v_a_1346_;
}
}
else
{
return v_a_1346_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(lean_object* v_k_1356_, lean_object* v_t_1357_){
_start:
{
if (lean_obj_tag(v_t_1357_) == 0)
{
lean_object* v_k_1358_; lean_object* v_v_1359_; lean_object* v_l_1360_; lean_object* v_r_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_2015_; 
v_k_1358_ = lean_ctor_get(v_t_1357_, 1);
v_v_1359_ = lean_ctor_get(v_t_1357_, 2);
v_l_1360_ = lean_ctor_get(v_t_1357_, 3);
v_r_1361_ = lean_ctor_get(v_t_1357_, 4);
v_isSharedCheck_2015_ = !lean_is_exclusive(v_t_1357_);
if (v_isSharedCheck_2015_ == 0)
{
lean_object* v_unused_2016_; 
v_unused_2016_ = lean_ctor_get(v_t_1357_, 0);
lean_dec(v_unused_2016_);
v___x_1363_ = v_t_1357_;
v_isShared_1364_ = v_isSharedCheck_2015_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_r_1361_);
lean_inc(v_l_1360_);
lean_inc(v_v_1359_);
lean_inc(v_k_1358_);
lean_dec(v_t_1357_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_2015_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
uint8_t v___x_1365_; 
v___x_1365_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1356_, v_k_1358_);
switch(v___x_1365_)
{
case 0:
{
lean_object* v_impl_1366_; lean_object* v___x_1367_; 
v_impl_1366_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v_k_1356_, v_l_1360_);
v___x_1367_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1366_) == 0)
{
if (lean_obj_tag(v_r_1361_) == 0)
{
lean_object* v_size_1368_; lean_object* v_size_1369_; lean_object* v_k_1370_; lean_object* v_v_1371_; lean_object* v_l_1372_; lean_object* v_r_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; uint8_t v___x_1376_; 
v_size_1368_ = lean_ctor_get(v_impl_1366_, 0);
lean_inc(v_size_1368_);
v_size_1369_ = lean_ctor_get(v_r_1361_, 0);
v_k_1370_ = lean_ctor_get(v_r_1361_, 1);
v_v_1371_ = lean_ctor_get(v_r_1361_, 2);
v_l_1372_ = lean_ctor_get(v_r_1361_, 3);
lean_inc(v_l_1372_);
v_r_1373_ = lean_ctor_get(v_r_1361_, 4);
v___x_1374_ = lean_unsigned_to_nat(3u);
v___x_1375_ = lean_nat_mul(v___x_1374_, v_size_1368_);
v___x_1376_ = lean_nat_dec_lt(v___x_1375_, v_size_1369_);
lean_dec(v___x_1375_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1380_; 
lean_dec(v_l_1372_);
v___x_1377_ = lean_nat_add(v___x_1367_, v_size_1368_);
lean_dec(v_size_1368_);
v___x_1378_ = lean_nat_add(v___x_1377_, v_size_1369_);
lean_dec(v___x_1377_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 3, v_impl_1366_);
lean_ctor_set(v___x_1363_, 0, v___x_1378_);
v___x_1380_ = v___x_1363_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v___x_1378_);
lean_ctor_set(v_reuseFailAlloc_1381_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1381_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1381_, 3, v_impl_1366_);
lean_ctor_set(v_reuseFailAlloc_1381_, 4, v_r_1361_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
else
{
lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1445_; 
lean_inc(v_r_1373_);
lean_inc(v_v_1371_);
lean_inc(v_k_1370_);
lean_inc(v_size_1369_);
v_isSharedCheck_1445_ = !lean_is_exclusive(v_r_1361_);
if (v_isSharedCheck_1445_ == 0)
{
lean_object* v_unused_1446_; lean_object* v_unused_1447_; lean_object* v_unused_1448_; lean_object* v_unused_1449_; lean_object* v_unused_1450_; 
v_unused_1446_ = lean_ctor_get(v_r_1361_, 4);
lean_dec(v_unused_1446_);
v_unused_1447_ = lean_ctor_get(v_r_1361_, 3);
lean_dec(v_unused_1447_);
v_unused_1448_ = lean_ctor_get(v_r_1361_, 2);
lean_dec(v_unused_1448_);
v_unused_1449_ = lean_ctor_get(v_r_1361_, 1);
lean_dec(v_unused_1449_);
v_unused_1450_ = lean_ctor_get(v_r_1361_, 0);
lean_dec(v_unused_1450_);
v___x_1383_ = v_r_1361_;
v_isShared_1384_ = v_isSharedCheck_1445_;
goto v_resetjp_1382_;
}
else
{
lean_dec(v_r_1361_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1445_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v_size_1385_; lean_object* v_k_1386_; lean_object* v_v_1387_; lean_object* v_l_1388_; lean_object* v_r_1389_; lean_object* v_size_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; 
v_size_1385_ = lean_ctor_get(v_l_1372_, 0);
v_k_1386_ = lean_ctor_get(v_l_1372_, 1);
v_v_1387_ = lean_ctor_get(v_l_1372_, 2);
v_l_1388_ = lean_ctor_get(v_l_1372_, 3);
v_r_1389_ = lean_ctor_get(v_l_1372_, 4);
v_size_1390_ = lean_ctor_get(v_r_1373_, 0);
v___x_1391_ = lean_unsigned_to_nat(2u);
v___x_1392_ = lean_nat_mul(v___x_1391_, v_size_1390_);
v___x_1393_ = lean_nat_dec_lt(v_size_1385_, v___x_1392_);
lean_dec(v___x_1392_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1421_; 
lean_inc(v_r_1389_);
lean_inc(v_l_1388_);
lean_inc(v_v_1387_);
lean_inc(v_k_1386_);
v_isSharedCheck_1421_ = !lean_is_exclusive(v_l_1372_);
if (v_isSharedCheck_1421_ == 0)
{
lean_object* v_unused_1422_; lean_object* v_unused_1423_; lean_object* v_unused_1424_; lean_object* v_unused_1425_; lean_object* v_unused_1426_; 
v_unused_1422_ = lean_ctor_get(v_l_1372_, 4);
lean_dec(v_unused_1422_);
v_unused_1423_ = lean_ctor_get(v_l_1372_, 3);
lean_dec(v_unused_1423_);
v_unused_1424_ = lean_ctor_get(v_l_1372_, 2);
lean_dec(v_unused_1424_);
v_unused_1425_ = lean_ctor_get(v_l_1372_, 1);
lean_dec(v_unused_1425_);
v_unused_1426_ = lean_ctor_get(v_l_1372_, 0);
lean_dec(v_unused_1426_);
v___x_1395_ = v_l_1372_;
v_isShared_1396_ = v_isSharedCheck_1421_;
goto v_resetjp_1394_;
}
else
{
lean_dec(v_l_1372_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1421_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1402_; lean_object* v___y_1411_; 
v___x_1397_ = lean_nat_add(v___x_1367_, v_size_1368_);
lean_dec(v_size_1368_);
v___x_1398_ = lean_nat_add(v___x_1397_, v_size_1369_);
lean_dec(v_size_1369_);
if (lean_obj_tag(v_l_1388_) == 0)
{
lean_object* v_size_1419_; 
v_size_1419_ = lean_ctor_get(v_l_1388_, 0);
lean_inc(v_size_1419_);
v___y_1411_ = v_size_1419_;
goto v___jp_1410_;
}
else
{
lean_object* v___x_1420_; 
v___x_1420_ = lean_unsigned_to_nat(0u);
v___y_1411_ = v___x_1420_;
goto v___jp_1410_;
}
v___jp_1399_:
{
lean_object* v___x_1403_; lean_object* v___x_1405_; 
v___x_1403_ = lean_nat_add(v___y_1401_, v___y_1402_);
lean_dec(v___y_1402_);
lean_dec(v___y_1401_);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 4, v_r_1373_);
lean_ctor_set(v___x_1395_, 3, v_r_1389_);
lean_ctor_set(v___x_1395_, 2, v_v_1371_);
lean_ctor_set(v___x_1395_, 1, v_k_1370_);
lean_ctor_set(v___x_1395_, 0, v___x_1403_);
v___x_1405_ = v___x_1395_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v___x_1403_);
lean_ctor_set(v_reuseFailAlloc_1409_, 1, v_k_1370_);
lean_ctor_set(v_reuseFailAlloc_1409_, 2, v_v_1371_);
lean_ctor_set(v_reuseFailAlloc_1409_, 3, v_r_1389_);
lean_ctor_set(v_reuseFailAlloc_1409_, 4, v_r_1373_);
v___x_1405_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
lean_object* v___x_1407_; 
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 4, v___x_1405_);
lean_ctor_set(v___x_1383_, 3, v___y_1400_);
lean_ctor_set(v___x_1383_, 2, v_v_1387_);
lean_ctor_set(v___x_1383_, 1, v_k_1386_);
lean_ctor_set(v___x_1383_, 0, v___x_1398_);
v___x_1407_ = v___x_1383_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1408_, 1, v_k_1386_);
lean_ctor_set(v_reuseFailAlloc_1408_, 2, v_v_1387_);
lean_ctor_set(v_reuseFailAlloc_1408_, 3, v___y_1400_);
lean_ctor_set(v_reuseFailAlloc_1408_, 4, v___x_1405_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
}
v___jp_1410_:
{
lean_object* v___x_1412_; lean_object* v___x_1414_; 
v___x_1412_ = lean_nat_add(v___x_1397_, v___y_1411_);
lean_dec(v___y_1411_);
lean_dec(v___x_1397_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v_l_1388_);
lean_ctor_set(v___x_1363_, 3, v_impl_1366_);
lean_ctor_set(v___x_1363_, 0, v___x_1412_);
v___x_1414_ = v___x_1363_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v___x_1412_);
lean_ctor_set(v_reuseFailAlloc_1418_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1418_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1418_, 3, v_impl_1366_);
lean_ctor_set(v_reuseFailAlloc_1418_, 4, v_l_1388_);
v___x_1414_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
lean_object* v___x_1415_; 
v___x_1415_ = lean_nat_add(v___x_1367_, v_size_1390_);
if (lean_obj_tag(v_r_1389_) == 0)
{
lean_object* v_size_1416_; 
v_size_1416_ = lean_ctor_get(v_r_1389_, 0);
lean_inc(v_size_1416_);
v___y_1400_ = v___x_1414_;
v___y_1401_ = v___x_1415_;
v___y_1402_ = v_size_1416_;
goto v___jp_1399_;
}
else
{
lean_object* v___x_1417_; 
v___x_1417_ = lean_unsigned_to_nat(0u);
v___y_1400_ = v___x_1414_;
v___y_1401_ = v___x_1415_;
v___y_1402_ = v___x_1417_;
goto v___jp_1399_;
}
}
}
}
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1431_; 
lean_del_object(v___x_1363_);
v___x_1427_ = lean_nat_add(v___x_1367_, v_size_1368_);
lean_dec(v_size_1368_);
v___x_1428_ = lean_nat_add(v___x_1427_, v_size_1369_);
lean_dec(v_size_1369_);
v___x_1429_ = lean_nat_add(v___x_1427_, v_size_1385_);
lean_dec(v___x_1427_);
lean_inc_ref(v_impl_1366_);
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 4, v_l_1372_);
lean_ctor_set(v___x_1383_, 3, v_impl_1366_);
lean_ctor_set(v___x_1383_, 2, v_v_1359_);
lean_ctor_set(v___x_1383_, 1, v_k_1358_);
lean_ctor_set(v___x_1383_, 0, v___x_1429_);
v___x_1431_ = v___x_1383_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1429_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1444_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1444_, 3, v_impl_1366_);
lean_ctor_set(v_reuseFailAlloc_1444_, 4, v_l_1372_);
v___x_1431_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1438_; 
v_isSharedCheck_1438_ = !lean_is_exclusive(v_impl_1366_);
if (v_isSharedCheck_1438_ == 0)
{
lean_object* v_unused_1439_; lean_object* v_unused_1440_; lean_object* v_unused_1441_; lean_object* v_unused_1442_; lean_object* v_unused_1443_; 
v_unused_1439_ = lean_ctor_get(v_impl_1366_, 4);
lean_dec(v_unused_1439_);
v_unused_1440_ = lean_ctor_get(v_impl_1366_, 3);
lean_dec(v_unused_1440_);
v_unused_1441_ = lean_ctor_get(v_impl_1366_, 2);
lean_dec(v_unused_1441_);
v_unused_1442_ = lean_ctor_get(v_impl_1366_, 1);
lean_dec(v_unused_1442_);
v_unused_1443_ = lean_ctor_get(v_impl_1366_, 0);
lean_dec(v_unused_1443_);
v___x_1433_ = v_impl_1366_;
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
else
{
lean_dec(v_impl_1366_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 4, v_r_1373_);
lean_ctor_set(v___x_1433_, 3, v___x_1431_);
lean_ctor_set(v___x_1433_, 2, v_v_1371_);
lean_ctor_set(v___x_1433_, 1, v_k_1370_);
lean_ctor_set(v___x_1433_, 0, v___x_1428_);
v___x_1436_ = v___x_1433_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1428_);
lean_ctor_set(v_reuseFailAlloc_1437_, 1, v_k_1370_);
lean_ctor_set(v_reuseFailAlloc_1437_, 2, v_v_1371_);
lean_ctor_set(v_reuseFailAlloc_1437_, 3, v___x_1431_);
lean_ctor_set(v_reuseFailAlloc_1437_, 4, v_r_1373_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1451_; lean_object* v___x_1452_; lean_object* v___x_1454_; 
v_size_1451_ = lean_ctor_get(v_impl_1366_, 0);
lean_inc(v_size_1451_);
v___x_1452_ = lean_nat_add(v___x_1367_, v_size_1451_);
lean_dec(v_size_1451_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 3, v_impl_1366_);
lean_ctor_set(v___x_1363_, 0, v___x_1452_);
v___x_1454_ = v___x_1363_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1452_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1455_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1455_, 3, v_impl_1366_);
lean_ctor_set(v_reuseFailAlloc_1455_, 4, v_r_1361_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
else
{
if (lean_obj_tag(v_r_1361_) == 0)
{
lean_object* v_l_1456_; 
v_l_1456_ = lean_ctor_get(v_r_1361_, 3);
lean_inc(v_l_1456_);
if (lean_obj_tag(v_l_1456_) == 0)
{
lean_object* v_r_1457_; 
v_r_1457_ = lean_ctor_get(v_r_1361_, 4);
lean_inc(v_r_1457_);
if (lean_obj_tag(v_r_1457_) == 0)
{
lean_object* v_size_1458_; lean_object* v_k_1459_; lean_object* v_v_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1473_; 
v_size_1458_ = lean_ctor_get(v_r_1361_, 0);
v_k_1459_ = lean_ctor_get(v_r_1361_, 1);
v_v_1460_ = lean_ctor_get(v_r_1361_, 2);
v_isSharedCheck_1473_ = !lean_is_exclusive(v_r_1361_);
if (v_isSharedCheck_1473_ == 0)
{
lean_object* v_unused_1474_; lean_object* v_unused_1475_; 
v_unused_1474_ = lean_ctor_get(v_r_1361_, 4);
lean_dec(v_unused_1474_);
v_unused_1475_ = lean_ctor_get(v_r_1361_, 3);
lean_dec(v_unused_1475_);
v___x_1462_ = v_r_1361_;
v_isShared_1463_ = v_isSharedCheck_1473_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_v_1460_);
lean_inc(v_k_1459_);
lean_inc(v_size_1458_);
lean_dec(v_r_1361_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1473_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v_size_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1468_; 
v_size_1464_ = lean_ctor_get(v_l_1456_, 0);
v___x_1465_ = lean_nat_add(v___x_1367_, v_size_1458_);
lean_dec(v_size_1458_);
v___x_1466_ = lean_nat_add(v___x_1367_, v_size_1464_);
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 4, v_l_1456_);
lean_ctor_set(v___x_1462_, 3, v_impl_1366_);
lean_ctor_set(v___x_1462_, 2, v_v_1359_);
lean_ctor_set(v___x_1462_, 1, v_k_1358_);
lean_ctor_set(v___x_1462_, 0, v___x_1466_);
v___x_1468_ = v___x_1462_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v___x_1466_);
lean_ctor_set(v_reuseFailAlloc_1472_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1472_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1472_, 3, v_impl_1366_);
lean_ctor_set(v_reuseFailAlloc_1472_, 4, v_l_1456_);
v___x_1468_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
lean_object* v___x_1470_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v_r_1457_);
lean_ctor_set(v___x_1363_, 3, v___x_1468_);
lean_ctor_set(v___x_1363_, 2, v_v_1460_);
lean_ctor_set(v___x_1363_, 1, v_k_1459_);
lean_ctor_set(v___x_1363_, 0, v___x_1465_);
v___x_1470_ = v___x_1363_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1465_);
lean_ctor_set(v_reuseFailAlloc_1471_, 1, v_k_1459_);
lean_ctor_set(v_reuseFailAlloc_1471_, 2, v_v_1460_);
lean_ctor_set(v_reuseFailAlloc_1471_, 3, v___x_1468_);
lean_ctor_set(v_reuseFailAlloc_1471_, 4, v_r_1457_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
else
{
lean_object* v_k_1476_; lean_object* v_v_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1500_; 
v_k_1476_ = lean_ctor_get(v_r_1361_, 1);
v_v_1477_ = lean_ctor_get(v_r_1361_, 2);
v_isSharedCheck_1500_ = !lean_is_exclusive(v_r_1361_);
if (v_isSharedCheck_1500_ == 0)
{
lean_object* v_unused_1501_; lean_object* v_unused_1502_; lean_object* v_unused_1503_; 
v_unused_1501_ = lean_ctor_get(v_r_1361_, 4);
lean_dec(v_unused_1501_);
v_unused_1502_ = lean_ctor_get(v_r_1361_, 3);
lean_dec(v_unused_1502_);
v_unused_1503_ = lean_ctor_get(v_r_1361_, 0);
lean_dec(v_unused_1503_);
v___x_1479_ = v_r_1361_;
v_isShared_1480_ = v_isSharedCheck_1500_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_v_1477_);
lean_inc(v_k_1476_);
lean_dec(v_r_1361_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1500_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v_k_1481_; lean_object* v_v_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1496_; 
v_k_1481_ = lean_ctor_get(v_l_1456_, 1);
v_v_1482_ = lean_ctor_get(v_l_1456_, 2);
v_isSharedCheck_1496_ = !lean_is_exclusive(v_l_1456_);
if (v_isSharedCheck_1496_ == 0)
{
lean_object* v_unused_1497_; lean_object* v_unused_1498_; lean_object* v_unused_1499_; 
v_unused_1497_ = lean_ctor_get(v_l_1456_, 4);
lean_dec(v_unused_1497_);
v_unused_1498_ = lean_ctor_get(v_l_1456_, 3);
lean_dec(v_unused_1498_);
v_unused_1499_ = lean_ctor_get(v_l_1456_, 0);
lean_dec(v_unused_1499_);
v___x_1484_ = v_l_1456_;
v_isShared_1485_ = v_isSharedCheck_1496_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_v_1482_);
lean_inc(v_k_1481_);
lean_dec(v_l_1456_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1496_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1486_; lean_object* v___x_1488_; 
v___x_1486_ = lean_unsigned_to_nat(3u);
if (v_isShared_1485_ == 0)
{
lean_ctor_set(v___x_1484_, 4, v_r_1457_);
lean_ctor_set(v___x_1484_, 3, v_r_1457_);
lean_ctor_set(v___x_1484_, 2, v_v_1359_);
lean_ctor_set(v___x_1484_, 1, v_k_1358_);
lean_ctor_set(v___x_1484_, 0, v___x_1367_);
v___x_1488_ = v___x_1484_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v___x_1367_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1495_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1495_, 3, v_r_1457_);
lean_ctor_set(v_reuseFailAlloc_1495_, 4, v_r_1457_);
v___x_1488_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
lean_object* v___x_1490_; 
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 3, v_r_1457_);
lean_ctor_set(v___x_1479_, 0, v___x_1367_);
v___x_1490_ = v___x_1479_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v___x_1367_);
lean_ctor_set(v_reuseFailAlloc_1494_, 1, v_k_1476_);
lean_ctor_set(v_reuseFailAlloc_1494_, 2, v_v_1477_);
lean_ctor_set(v_reuseFailAlloc_1494_, 3, v_r_1457_);
lean_ctor_set(v_reuseFailAlloc_1494_, 4, v_r_1457_);
v___x_1490_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
lean_object* v___x_1492_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v___x_1490_);
lean_ctor_set(v___x_1363_, 3, v___x_1488_);
lean_ctor_set(v___x_1363_, 2, v_v_1482_);
lean_ctor_set(v___x_1363_, 1, v_k_1481_);
lean_ctor_set(v___x_1363_, 0, v___x_1486_);
v___x_1492_ = v___x_1363_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1486_);
lean_ctor_set(v_reuseFailAlloc_1493_, 1, v_k_1481_);
lean_ctor_set(v_reuseFailAlloc_1493_, 2, v_v_1482_);
lean_ctor_set(v_reuseFailAlloc_1493_, 3, v___x_1488_);
lean_ctor_set(v_reuseFailAlloc_1493_, 4, v___x_1490_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1504_; 
v_r_1504_ = lean_ctor_get(v_r_1361_, 4);
lean_inc(v_r_1504_);
if (lean_obj_tag(v_r_1504_) == 0)
{
lean_object* v_k_1505_; lean_object* v_v_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1517_; 
v_k_1505_ = lean_ctor_get(v_r_1361_, 1);
v_v_1506_ = lean_ctor_get(v_r_1361_, 2);
v_isSharedCheck_1517_ = !lean_is_exclusive(v_r_1361_);
if (v_isSharedCheck_1517_ == 0)
{
lean_object* v_unused_1518_; lean_object* v_unused_1519_; lean_object* v_unused_1520_; 
v_unused_1518_ = lean_ctor_get(v_r_1361_, 4);
lean_dec(v_unused_1518_);
v_unused_1519_ = lean_ctor_get(v_r_1361_, 3);
lean_dec(v_unused_1519_);
v_unused_1520_ = lean_ctor_get(v_r_1361_, 0);
lean_dec(v_unused_1520_);
v___x_1508_ = v_r_1361_;
v_isShared_1509_ = v_isSharedCheck_1517_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_v_1506_);
lean_inc(v_k_1505_);
lean_dec(v_r_1361_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1517_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___x_1510_; lean_object* v___x_1512_; 
v___x_1510_ = lean_unsigned_to_nat(3u);
if (v_isShared_1509_ == 0)
{
lean_ctor_set(v___x_1508_, 4, v_l_1456_);
lean_ctor_set(v___x_1508_, 2, v_v_1359_);
lean_ctor_set(v___x_1508_, 1, v_k_1358_);
lean_ctor_set(v___x_1508_, 0, v___x_1367_);
v___x_1512_ = v___x_1508_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v___x_1367_);
lean_ctor_set(v_reuseFailAlloc_1516_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1516_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1516_, 3, v_l_1456_);
lean_ctor_set(v_reuseFailAlloc_1516_, 4, v_l_1456_);
v___x_1512_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
lean_object* v___x_1514_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v_r_1504_);
lean_ctor_set(v___x_1363_, 3, v___x_1512_);
lean_ctor_set(v___x_1363_, 2, v_v_1506_);
lean_ctor_set(v___x_1363_, 1, v_k_1505_);
lean_ctor_set(v___x_1363_, 0, v___x_1510_);
v___x_1514_ = v___x_1363_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1510_);
lean_ctor_set(v_reuseFailAlloc_1515_, 1, v_k_1505_);
lean_ctor_set(v_reuseFailAlloc_1515_, 2, v_v_1506_);
lean_ctor_set(v_reuseFailAlloc_1515_, 3, v___x_1512_);
lean_ctor_set(v_reuseFailAlloc_1515_, 4, v_r_1504_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
return v___x_1514_;
}
}
}
}
else
{
lean_object* v_size_1521_; lean_object* v_k_1522_; lean_object* v_v_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1534_; 
v_size_1521_ = lean_ctor_get(v_r_1361_, 0);
v_k_1522_ = lean_ctor_get(v_r_1361_, 1);
v_v_1523_ = lean_ctor_get(v_r_1361_, 2);
v_isSharedCheck_1534_ = !lean_is_exclusive(v_r_1361_);
if (v_isSharedCheck_1534_ == 0)
{
lean_object* v_unused_1535_; lean_object* v_unused_1536_; 
v_unused_1535_ = lean_ctor_get(v_r_1361_, 4);
lean_dec(v_unused_1535_);
v_unused_1536_ = lean_ctor_get(v_r_1361_, 3);
lean_dec(v_unused_1536_);
v___x_1525_ = v_r_1361_;
v_isShared_1526_ = v_isSharedCheck_1534_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_v_1523_);
lean_inc(v_k_1522_);
lean_inc(v_size_1521_);
lean_dec(v_r_1361_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1534_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 3, v_r_1504_);
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v_size_1521_);
lean_ctor_set(v_reuseFailAlloc_1533_, 1, v_k_1522_);
lean_ctor_set(v_reuseFailAlloc_1533_, 2, v_v_1523_);
lean_ctor_set(v_reuseFailAlloc_1533_, 3, v_r_1504_);
lean_ctor_set(v_reuseFailAlloc_1533_, 4, v_r_1504_);
v___x_1528_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
lean_object* v___x_1529_; lean_object* v___x_1531_; 
v___x_1529_ = lean_unsigned_to_nat(2u);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v___x_1528_);
lean_ctor_set(v___x_1363_, 3, v_r_1504_);
lean_ctor_set(v___x_1363_, 0, v___x_1529_);
v___x_1531_ = v___x_1363_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v___x_1529_);
lean_ctor_set(v_reuseFailAlloc_1532_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1532_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1532_, 3, v_r_1504_);
lean_ctor_set(v_reuseFailAlloc_1532_, 4, v___x_1528_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
}
}
}
else
{
lean_object* v___x_1538_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 3, v_r_1361_);
lean_ctor_set(v___x_1363_, 0, v___x_1367_);
v___x_1538_ = v___x_1363_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1367_);
lean_ctor_set(v_reuseFailAlloc_1539_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1539_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1539_, 3, v_r_1361_);
lean_ctor_set(v_reuseFailAlloc_1539_, 4, v_r_1361_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
case 1:
{
lean_del_object(v___x_1363_);
lean_dec(v_v_1359_);
lean_dec(v_k_1358_);
if (lean_obj_tag(v_l_1360_) == 0)
{
if (lean_obj_tag(v_r_1361_) == 0)
{
lean_object* v_size_1540_; lean_object* v_k_1541_; lean_object* v_v_1542_; lean_object* v_l_1543_; lean_object* v_r_1544_; lean_object* v_size_1545_; lean_object* v_k_1546_; lean_object* v_v_1547_; lean_object* v_l_1548_; lean_object* v_r_1549_; lean_object* v___x_1550_; uint8_t v___x_1551_; 
v_size_1540_ = lean_ctor_get(v_l_1360_, 0);
v_k_1541_ = lean_ctor_get(v_l_1360_, 1);
v_v_1542_ = lean_ctor_get(v_l_1360_, 2);
v_l_1543_ = lean_ctor_get(v_l_1360_, 3);
v_r_1544_ = lean_ctor_get(v_l_1360_, 4);
lean_inc(v_r_1544_);
v_size_1545_ = lean_ctor_get(v_r_1361_, 0);
v_k_1546_ = lean_ctor_get(v_r_1361_, 1);
v_v_1547_ = lean_ctor_get(v_r_1361_, 2);
v_l_1548_ = lean_ctor_get(v_r_1361_, 3);
lean_inc(v_l_1548_);
v_r_1549_ = lean_ctor_get(v_r_1361_, 4);
v___x_1550_ = lean_unsigned_to_nat(1u);
v___x_1551_ = lean_nat_dec_lt(v_size_1540_, v_size_1545_);
if (v___x_1551_ == 0)
{
lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1687_; 
lean_inc(v_l_1543_);
lean_inc(v_v_1542_);
lean_inc(v_k_1541_);
v_isSharedCheck_1687_ = !lean_is_exclusive(v_l_1360_);
if (v_isSharedCheck_1687_ == 0)
{
lean_object* v_unused_1688_; lean_object* v_unused_1689_; lean_object* v_unused_1690_; lean_object* v_unused_1691_; lean_object* v_unused_1692_; 
v_unused_1688_ = lean_ctor_get(v_l_1360_, 4);
lean_dec(v_unused_1688_);
v_unused_1689_ = lean_ctor_get(v_l_1360_, 3);
lean_dec(v_unused_1689_);
v_unused_1690_ = lean_ctor_get(v_l_1360_, 2);
lean_dec(v_unused_1690_);
v_unused_1691_ = lean_ctor_get(v_l_1360_, 1);
lean_dec(v_unused_1691_);
v_unused_1692_ = lean_ctor_get(v_l_1360_, 0);
lean_dec(v_unused_1692_);
v___x_1553_ = v_l_1360_;
v_isShared_1554_ = v_isSharedCheck_1687_;
goto v_resetjp_1552_;
}
else
{
lean_dec(v_l_1360_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1687_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1555_; lean_object* v_tree_1556_; 
v___x_1555_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_1541_, v_v_1542_, v_l_1543_, v_r_1544_);
v_tree_1556_ = lean_ctor_get(v___x_1555_, 2);
lean_inc(v_tree_1556_);
if (lean_obj_tag(v_tree_1556_) == 0)
{
lean_object* v_k_1557_; lean_object* v_v_1558_; lean_object* v_size_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; uint8_t v___x_1562_; 
v_k_1557_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_k_1557_);
v_v_1558_ = lean_ctor_get(v___x_1555_, 1);
lean_inc(v_v_1558_);
lean_dec_ref(v___x_1555_);
v_size_1559_ = lean_ctor_get(v_tree_1556_, 0);
v___x_1560_ = lean_unsigned_to_nat(3u);
v___x_1561_ = lean_nat_mul(v___x_1560_, v_size_1559_);
v___x_1562_ = lean_nat_dec_lt(v___x_1561_, v_size_1545_);
lean_dec(v___x_1561_);
if (v___x_1562_ == 0)
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1566_; 
lean_dec(v_l_1548_);
v___x_1563_ = lean_nat_add(v___x_1550_, v_size_1559_);
v___x_1564_ = lean_nat_add(v___x_1563_, v_size_1545_);
lean_dec(v___x_1563_);
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 4, v_r_1361_);
lean_ctor_set(v___x_1553_, 3, v_tree_1556_);
lean_ctor_set(v___x_1553_, 2, v_v_1558_);
lean_ctor_set(v___x_1553_, 1, v_k_1557_);
lean_ctor_set(v___x_1553_, 0, v___x_1564_);
v___x_1566_ = v___x_1553_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v___x_1564_);
lean_ctor_set(v_reuseFailAlloc_1567_, 1, v_k_1557_);
lean_ctor_set(v_reuseFailAlloc_1567_, 2, v_v_1558_);
lean_ctor_set(v_reuseFailAlloc_1567_, 3, v_tree_1556_);
lean_ctor_set(v_reuseFailAlloc_1567_, 4, v_r_1361_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
else
{
lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1622_; 
lean_inc(v_r_1549_);
lean_inc(v_v_1547_);
lean_inc(v_k_1546_);
lean_inc(v_size_1545_);
v_isSharedCheck_1622_ = !lean_is_exclusive(v_r_1361_);
if (v_isSharedCheck_1622_ == 0)
{
lean_object* v_unused_1623_; lean_object* v_unused_1624_; lean_object* v_unused_1625_; lean_object* v_unused_1626_; lean_object* v_unused_1627_; 
v_unused_1623_ = lean_ctor_get(v_r_1361_, 4);
lean_dec(v_unused_1623_);
v_unused_1624_ = lean_ctor_get(v_r_1361_, 3);
lean_dec(v_unused_1624_);
v_unused_1625_ = lean_ctor_get(v_r_1361_, 2);
lean_dec(v_unused_1625_);
v_unused_1626_ = lean_ctor_get(v_r_1361_, 1);
lean_dec(v_unused_1626_);
v_unused_1627_ = lean_ctor_get(v_r_1361_, 0);
lean_dec(v_unused_1627_);
v___x_1569_ = v_r_1361_;
v_isShared_1570_ = v_isSharedCheck_1622_;
goto v_resetjp_1568_;
}
else
{
lean_dec(v_r_1361_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1622_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v_size_1571_; lean_object* v_k_1572_; lean_object* v_v_1573_; lean_object* v_l_1574_; lean_object* v_r_1575_; lean_object* v_size_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; uint8_t v___x_1579_; 
v_size_1571_ = lean_ctor_get(v_l_1548_, 0);
v_k_1572_ = lean_ctor_get(v_l_1548_, 1);
v_v_1573_ = lean_ctor_get(v_l_1548_, 2);
v_l_1574_ = lean_ctor_get(v_l_1548_, 3);
v_r_1575_ = lean_ctor_get(v_l_1548_, 4);
v_size_1576_ = lean_ctor_get(v_r_1549_, 0);
v___x_1577_ = lean_unsigned_to_nat(2u);
v___x_1578_ = lean_nat_mul(v___x_1577_, v_size_1576_);
v___x_1579_ = lean_nat_dec_lt(v_size_1571_, v___x_1578_);
lean_dec(v___x_1578_);
if (v___x_1579_ == 0)
{
lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1607_; 
lean_inc(v_r_1575_);
lean_inc(v_l_1574_);
lean_inc(v_v_1573_);
lean_inc(v_k_1572_);
v_isSharedCheck_1607_ = !lean_is_exclusive(v_l_1548_);
if (v_isSharedCheck_1607_ == 0)
{
lean_object* v_unused_1608_; lean_object* v_unused_1609_; lean_object* v_unused_1610_; lean_object* v_unused_1611_; lean_object* v_unused_1612_; 
v_unused_1608_ = lean_ctor_get(v_l_1548_, 4);
lean_dec(v_unused_1608_);
v_unused_1609_ = lean_ctor_get(v_l_1548_, 3);
lean_dec(v_unused_1609_);
v_unused_1610_ = lean_ctor_get(v_l_1548_, 2);
lean_dec(v_unused_1610_);
v_unused_1611_ = lean_ctor_get(v_l_1548_, 1);
lean_dec(v_unused_1611_);
v_unused_1612_ = lean_ctor_get(v_l_1548_, 0);
lean_dec(v_unused_1612_);
v___x_1581_ = v_l_1548_;
v_isShared_1582_ = v_isSharedCheck_1607_;
goto v_resetjp_1580_;
}
else
{
lean_dec(v_l_1548_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1607_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v___y_1588_; lean_object* v___y_1597_; 
v___x_1583_ = lean_nat_add(v___x_1550_, v_size_1559_);
v___x_1584_ = lean_nat_add(v___x_1583_, v_size_1545_);
lean_dec(v_size_1545_);
if (lean_obj_tag(v_l_1574_) == 0)
{
lean_object* v_size_1605_; 
v_size_1605_ = lean_ctor_get(v_l_1574_, 0);
lean_inc(v_size_1605_);
v___y_1597_ = v_size_1605_;
goto v___jp_1596_;
}
else
{
lean_object* v___x_1606_; 
v___x_1606_ = lean_unsigned_to_nat(0u);
v___y_1597_ = v___x_1606_;
goto v___jp_1596_;
}
v___jp_1585_:
{
lean_object* v___x_1589_; lean_object* v___x_1591_; 
v___x_1589_ = lean_nat_add(v___y_1586_, v___y_1588_);
lean_dec(v___y_1588_);
lean_dec(v___y_1586_);
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 4, v_r_1549_);
lean_ctor_set(v___x_1581_, 3, v_r_1575_);
lean_ctor_set(v___x_1581_, 2, v_v_1547_);
lean_ctor_set(v___x_1581_, 1, v_k_1546_);
lean_ctor_set(v___x_1581_, 0, v___x_1589_);
v___x_1591_ = v___x_1581_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v___x_1589_);
lean_ctor_set(v_reuseFailAlloc_1595_, 1, v_k_1546_);
lean_ctor_set(v_reuseFailAlloc_1595_, 2, v_v_1547_);
lean_ctor_set(v_reuseFailAlloc_1595_, 3, v_r_1575_);
lean_ctor_set(v_reuseFailAlloc_1595_, 4, v_r_1549_);
v___x_1591_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
lean_object* v___x_1593_; 
if (v_isShared_1570_ == 0)
{
lean_ctor_set(v___x_1569_, 4, v___x_1591_);
lean_ctor_set(v___x_1569_, 3, v___y_1587_);
lean_ctor_set(v___x_1569_, 2, v_v_1573_);
lean_ctor_set(v___x_1569_, 1, v_k_1572_);
lean_ctor_set(v___x_1569_, 0, v___x_1584_);
v___x_1593_ = v___x_1569_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1584_);
lean_ctor_set(v_reuseFailAlloc_1594_, 1, v_k_1572_);
lean_ctor_set(v_reuseFailAlloc_1594_, 2, v_v_1573_);
lean_ctor_set(v_reuseFailAlloc_1594_, 3, v___y_1587_);
lean_ctor_set(v_reuseFailAlloc_1594_, 4, v___x_1591_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
v___jp_1596_:
{
lean_object* v___x_1598_; lean_object* v___x_1600_; 
v___x_1598_ = lean_nat_add(v___x_1583_, v___y_1597_);
lean_dec(v___y_1597_);
lean_dec(v___x_1583_);
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 4, v_l_1574_);
lean_ctor_set(v___x_1553_, 3, v_tree_1556_);
lean_ctor_set(v___x_1553_, 2, v_v_1558_);
lean_ctor_set(v___x_1553_, 1, v_k_1557_);
lean_ctor_set(v___x_1553_, 0, v___x_1598_);
v___x_1600_ = v___x_1553_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v___x_1598_);
lean_ctor_set(v_reuseFailAlloc_1604_, 1, v_k_1557_);
lean_ctor_set(v_reuseFailAlloc_1604_, 2, v_v_1558_);
lean_ctor_set(v_reuseFailAlloc_1604_, 3, v_tree_1556_);
lean_ctor_set(v_reuseFailAlloc_1604_, 4, v_l_1574_);
v___x_1600_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
lean_object* v___x_1601_; 
v___x_1601_ = lean_nat_add(v___x_1550_, v_size_1576_);
if (lean_obj_tag(v_r_1575_) == 0)
{
lean_object* v_size_1602_; 
v_size_1602_ = lean_ctor_get(v_r_1575_, 0);
lean_inc(v_size_1602_);
v___y_1586_ = v___x_1601_;
v___y_1587_ = v___x_1600_;
v___y_1588_ = v_size_1602_;
goto v___jp_1585_;
}
else
{
lean_object* v___x_1603_; 
v___x_1603_ = lean_unsigned_to_nat(0u);
v___y_1586_ = v___x_1601_;
v___y_1587_ = v___x_1600_;
v___y_1588_ = v___x_1603_;
goto v___jp_1585_;
}
}
}
}
}
else
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1617_; 
v___x_1613_ = lean_nat_add(v___x_1550_, v_size_1559_);
v___x_1614_ = lean_nat_add(v___x_1613_, v_size_1545_);
lean_dec(v_size_1545_);
v___x_1615_ = lean_nat_add(v___x_1613_, v_size_1571_);
lean_dec(v___x_1613_);
if (v_isShared_1570_ == 0)
{
lean_ctor_set(v___x_1569_, 4, v_l_1548_);
lean_ctor_set(v___x_1569_, 3, v_tree_1556_);
lean_ctor_set(v___x_1569_, 2, v_v_1558_);
lean_ctor_set(v___x_1569_, 1, v_k_1557_);
lean_ctor_set(v___x_1569_, 0, v___x_1615_);
v___x_1617_ = v___x_1569_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v___x_1615_);
lean_ctor_set(v_reuseFailAlloc_1621_, 1, v_k_1557_);
lean_ctor_set(v_reuseFailAlloc_1621_, 2, v_v_1558_);
lean_ctor_set(v_reuseFailAlloc_1621_, 3, v_tree_1556_);
lean_ctor_set(v_reuseFailAlloc_1621_, 4, v_l_1548_);
v___x_1617_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
lean_object* v___x_1619_; 
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 4, v_r_1549_);
lean_ctor_set(v___x_1553_, 3, v___x_1617_);
lean_ctor_set(v___x_1553_, 2, v_v_1547_);
lean_ctor_set(v___x_1553_, 1, v_k_1546_);
lean_ctor_set(v___x_1553_, 0, v___x_1614_);
v___x_1619_ = v___x_1553_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v___x_1614_);
lean_ctor_set(v_reuseFailAlloc_1620_, 1, v_k_1546_);
lean_ctor_set(v_reuseFailAlloc_1620_, 2, v_v_1547_);
lean_ctor_set(v_reuseFailAlloc_1620_, 3, v___x_1617_);
lean_ctor_set(v_reuseFailAlloc_1620_, 4, v_r_1549_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
}
}
}
else
{
lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1681_; 
lean_inc(v_r_1549_);
lean_inc(v_v_1547_);
lean_inc(v_k_1546_);
lean_inc(v_size_1545_);
v_isSharedCheck_1681_ = !lean_is_exclusive(v_r_1361_);
if (v_isSharedCheck_1681_ == 0)
{
lean_object* v_unused_1682_; lean_object* v_unused_1683_; lean_object* v_unused_1684_; lean_object* v_unused_1685_; lean_object* v_unused_1686_; 
v_unused_1682_ = lean_ctor_get(v_r_1361_, 4);
lean_dec(v_unused_1682_);
v_unused_1683_ = lean_ctor_get(v_r_1361_, 3);
lean_dec(v_unused_1683_);
v_unused_1684_ = lean_ctor_get(v_r_1361_, 2);
lean_dec(v_unused_1684_);
v_unused_1685_ = lean_ctor_get(v_r_1361_, 1);
lean_dec(v_unused_1685_);
v_unused_1686_ = lean_ctor_get(v_r_1361_, 0);
lean_dec(v_unused_1686_);
v___x_1629_ = v_r_1361_;
v_isShared_1630_ = v_isSharedCheck_1681_;
goto v_resetjp_1628_;
}
else
{
lean_dec(v_r_1361_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1681_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
if (lean_obj_tag(v_l_1548_) == 0)
{
if (lean_obj_tag(v_r_1549_) == 0)
{
lean_object* v_k_1631_; lean_object* v_v_1632_; lean_object* v_size_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1637_; 
v_k_1631_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_k_1631_);
v_v_1632_ = lean_ctor_get(v___x_1555_, 1);
lean_inc(v_v_1632_);
lean_dec_ref(v___x_1555_);
v_size_1633_ = lean_ctor_get(v_l_1548_, 0);
v___x_1634_ = lean_nat_add(v___x_1550_, v_size_1545_);
lean_dec(v_size_1545_);
v___x_1635_ = lean_nat_add(v___x_1550_, v_size_1633_);
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 4, v_l_1548_);
lean_ctor_set(v___x_1629_, 3, v_tree_1556_);
lean_ctor_set(v___x_1629_, 2, v_v_1632_);
lean_ctor_set(v___x_1629_, 1, v_k_1631_);
lean_ctor_set(v___x_1629_, 0, v___x_1635_);
v___x_1637_ = v___x_1629_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1635_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v_k_1631_);
lean_ctor_set(v_reuseFailAlloc_1641_, 2, v_v_1632_);
lean_ctor_set(v_reuseFailAlloc_1641_, 3, v_tree_1556_);
lean_ctor_set(v_reuseFailAlloc_1641_, 4, v_l_1548_);
v___x_1637_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
lean_object* v___x_1639_; 
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 4, v_r_1549_);
lean_ctor_set(v___x_1553_, 3, v___x_1637_);
lean_ctor_set(v___x_1553_, 2, v_v_1547_);
lean_ctor_set(v___x_1553_, 1, v_k_1546_);
lean_ctor_set(v___x_1553_, 0, v___x_1634_);
v___x_1639_ = v___x_1553_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1634_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v_k_1546_);
lean_ctor_set(v_reuseFailAlloc_1640_, 2, v_v_1547_);
lean_ctor_set(v_reuseFailAlloc_1640_, 3, v___x_1637_);
lean_ctor_set(v_reuseFailAlloc_1640_, 4, v_r_1549_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
else
{
lean_object* v_k_1642_; lean_object* v_v_1643_; lean_object* v_k_1644_; lean_object* v_v_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1659_; 
lean_dec(v_size_1545_);
v_k_1642_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_k_1642_);
v_v_1643_ = lean_ctor_get(v___x_1555_, 1);
lean_inc(v_v_1643_);
lean_dec_ref(v___x_1555_);
v_k_1644_ = lean_ctor_get(v_l_1548_, 1);
v_v_1645_ = lean_ctor_get(v_l_1548_, 2);
v_isSharedCheck_1659_ = !lean_is_exclusive(v_l_1548_);
if (v_isSharedCheck_1659_ == 0)
{
lean_object* v_unused_1660_; lean_object* v_unused_1661_; lean_object* v_unused_1662_; 
v_unused_1660_ = lean_ctor_get(v_l_1548_, 4);
lean_dec(v_unused_1660_);
v_unused_1661_ = lean_ctor_get(v_l_1548_, 3);
lean_dec(v_unused_1661_);
v_unused_1662_ = lean_ctor_get(v_l_1548_, 0);
lean_dec(v_unused_1662_);
v___x_1647_ = v_l_1548_;
v_isShared_1648_ = v_isSharedCheck_1659_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_v_1645_);
lean_inc(v_k_1644_);
lean_dec(v_l_1548_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1659_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1649_; lean_object* v___x_1651_; 
v___x_1649_ = lean_unsigned_to_nat(3u);
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 4, v_r_1549_);
lean_ctor_set(v___x_1647_, 3, v_r_1549_);
lean_ctor_set(v___x_1647_, 2, v_v_1643_);
lean_ctor_set(v___x_1647_, 1, v_k_1642_);
lean_ctor_set(v___x_1647_, 0, v___x_1550_);
v___x_1651_ = v___x_1647_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1658_, 1, v_k_1642_);
lean_ctor_set(v_reuseFailAlloc_1658_, 2, v_v_1643_);
lean_ctor_set(v_reuseFailAlloc_1658_, 3, v_r_1549_);
lean_ctor_set(v_reuseFailAlloc_1658_, 4, v_r_1549_);
v___x_1651_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
lean_object* v___x_1653_; 
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 3, v_r_1549_);
lean_ctor_set(v___x_1629_, 0, v___x_1550_);
v___x_1653_ = v___x_1629_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v_k_1546_);
lean_ctor_set(v_reuseFailAlloc_1657_, 2, v_v_1547_);
lean_ctor_set(v_reuseFailAlloc_1657_, 3, v_r_1549_);
lean_ctor_set(v_reuseFailAlloc_1657_, 4, v_r_1549_);
v___x_1653_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
lean_object* v___x_1655_; 
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 4, v___x_1653_);
lean_ctor_set(v___x_1553_, 3, v___x_1651_);
lean_ctor_set(v___x_1553_, 2, v_v_1645_);
lean_ctor_set(v___x_1553_, 1, v_k_1644_);
lean_ctor_set(v___x_1553_, 0, v___x_1649_);
v___x_1655_ = v___x_1553_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v___x_1649_);
lean_ctor_set(v_reuseFailAlloc_1656_, 1, v_k_1644_);
lean_ctor_set(v_reuseFailAlloc_1656_, 2, v_v_1645_);
lean_ctor_set(v_reuseFailAlloc_1656_, 3, v___x_1651_);
lean_ctor_set(v_reuseFailAlloc_1656_, 4, v___x_1653_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1549_) == 0)
{
lean_object* v_k_1663_; lean_object* v_v_1664_; lean_object* v___x_1665_; lean_object* v___x_1667_; 
lean_dec(v_size_1545_);
v_k_1663_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_k_1663_);
v_v_1664_ = lean_ctor_get(v___x_1555_, 1);
lean_inc(v_v_1664_);
lean_dec_ref(v___x_1555_);
v___x_1665_ = lean_unsigned_to_nat(3u);
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 4, v_l_1548_);
lean_ctor_set(v___x_1629_, 2, v_v_1664_);
lean_ctor_set(v___x_1629_, 1, v_k_1663_);
lean_ctor_set(v___x_1629_, 0, v___x_1550_);
v___x_1667_ = v___x_1629_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_k_1663_);
lean_ctor_set(v_reuseFailAlloc_1671_, 2, v_v_1664_);
lean_ctor_set(v_reuseFailAlloc_1671_, 3, v_l_1548_);
lean_ctor_set(v_reuseFailAlloc_1671_, 4, v_l_1548_);
v___x_1667_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
lean_object* v___x_1669_; 
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 4, v_r_1549_);
lean_ctor_set(v___x_1553_, 3, v___x_1667_);
lean_ctor_set(v___x_1553_, 2, v_v_1547_);
lean_ctor_set(v___x_1553_, 1, v_k_1546_);
lean_ctor_set(v___x_1553_, 0, v___x_1665_);
v___x_1669_ = v___x_1553_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1665_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v_k_1546_);
lean_ctor_set(v_reuseFailAlloc_1670_, 2, v_v_1547_);
lean_ctor_set(v_reuseFailAlloc_1670_, 3, v___x_1667_);
lean_ctor_set(v_reuseFailAlloc_1670_, 4, v_r_1549_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
else
{
lean_object* v_k_1672_; lean_object* v_v_1673_; lean_object* v___x_1675_; 
v_k_1672_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_k_1672_);
v_v_1673_ = lean_ctor_get(v___x_1555_, 1);
lean_inc(v_v_1673_);
lean_dec_ref(v___x_1555_);
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 3, v_r_1549_);
v___x_1675_ = v___x_1629_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_size_1545_);
lean_ctor_set(v_reuseFailAlloc_1680_, 1, v_k_1546_);
lean_ctor_set(v_reuseFailAlloc_1680_, 2, v_v_1547_);
lean_ctor_set(v_reuseFailAlloc_1680_, 3, v_r_1549_);
lean_ctor_set(v_reuseFailAlloc_1680_, 4, v_r_1549_);
v___x_1675_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
lean_object* v___x_1676_; lean_object* v___x_1678_; 
v___x_1676_ = lean_unsigned_to_nat(2u);
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 4, v___x_1675_);
lean_ctor_set(v___x_1553_, 3, v_r_1549_);
lean_ctor_set(v___x_1553_, 2, v_v_1673_);
lean_ctor_set(v___x_1553_, 1, v_k_1672_);
lean_ctor_set(v___x_1553_, 0, v___x_1676_);
v___x_1678_ = v___x_1553_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v___x_1676_);
lean_ctor_set(v_reuseFailAlloc_1679_, 1, v_k_1672_);
lean_ctor_set(v_reuseFailAlloc_1679_, 2, v_v_1673_);
lean_ctor_set(v_reuseFailAlloc_1679_, 3, v_r_1549_);
lean_ctor_set(v_reuseFailAlloc_1679_, 4, v___x_1675_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
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
lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1845_; 
lean_inc(v_r_1549_);
lean_inc(v_v_1547_);
lean_inc(v_k_1546_);
v_isSharedCheck_1845_ = !lean_is_exclusive(v_r_1361_);
if (v_isSharedCheck_1845_ == 0)
{
lean_object* v_unused_1846_; lean_object* v_unused_1847_; lean_object* v_unused_1848_; lean_object* v_unused_1849_; lean_object* v_unused_1850_; 
v_unused_1846_ = lean_ctor_get(v_r_1361_, 4);
lean_dec(v_unused_1846_);
v_unused_1847_ = lean_ctor_get(v_r_1361_, 3);
lean_dec(v_unused_1847_);
v_unused_1848_ = lean_ctor_get(v_r_1361_, 2);
lean_dec(v_unused_1848_);
v_unused_1849_ = lean_ctor_get(v_r_1361_, 1);
lean_dec(v_unused_1849_);
v_unused_1850_ = lean_ctor_get(v_r_1361_, 0);
lean_dec(v_unused_1850_);
v___x_1694_ = v_r_1361_;
v_isShared_1695_ = v_isSharedCheck_1845_;
goto v_resetjp_1693_;
}
else
{
lean_dec(v_r_1361_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1845_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1696_; lean_object* v_tree_1697_; 
v___x_1696_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_1546_, v_v_1547_, v_l_1548_, v_r_1549_);
v_tree_1697_ = lean_ctor_get(v___x_1696_, 2);
lean_inc(v_tree_1697_);
if (lean_obj_tag(v_tree_1697_) == 0)
{
lean_object* v_k_1698_; lean_object* v_v_1699_; lean_object* v_size_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; uint8_t v___x_1703_; 
v_k_1698_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_k_1698_);
v_v_1699_ = lean_ctor_get(v___x_1696_, 1);
lean_inc(v_v_1699_);
lean_dec_ref(v___x_1696_);
v_size_1700_ = lean_ctor_get(v_tree_1697_, 0);
v___x_1701_ = lean_unsigned_to_nat(3u);
v___x_1702_ = lean_nat_mul(v___x_1701_, v_size_1700_);
v___x_1703_ = lean_nat_dec_lt(v___x_1702_, v_size_1540_);
lean_dec(v___x_1702_);
if (v___x_1703_ == 0)
{
lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1707_; 
lean_dec(v_r_1544_);
v___x_1704_ = lean_nat_add(v___x_1550_, v_size_1540_);
v___x_1705_ = lean_nat_add(v___x_1704_, v_size_1700_);
lean_dec(v___x_1704_);
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 4, v_tree_1697_);
lean_ctor_set(v___x_1694_, 3, v_l_1360_);
lean_ctor_set(v___x_1694_, 2, v_v_1699_);
lean_ctor_set(v___x_1694_, 1, v_k_1698_);
lean_ctor_set(v___x_1694_, 0, v___x_1705_);
v___x_1707_ = v___x_1694_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v___x_1705_);
lean_ctor_set(v_reuseFailAlloc_1708_, 1, v_k_1698_);
lean_ctor_set(v_reuseFailAlloc_1708_, 2, v_v_1699_);
lean_ctor_set(v_reuseFailAlloc_1708_, 3, v_l_1360_);
lean_ctor_set(v_reuseFailAlloc_1708_, 4, v_tree_1697_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
else
{
lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1774_; 
lean_inc(v_l_1543_);
lean_inc(v_v_1542_);
lean_inc(v_k_1541_);
lean_inc(v_size_1540_);
v_isSharedCheck_1774_ = !lean_is_exclusive(v_l_1360_);
if (v_isSharedCheck_1774_ == 0)
{
lean_object* v_unused_1775_; lean_object* v_unused_1776_; lean_object* v_unused_1777_; lean_object* v_unused_1778_; lean_object* v_unused_1779_; 
v_unused_1775_ = lean_ctor_get(v_l_1360_, 4);
lean_dec(v_unused_1775_);
v_unused_1776_ = lean_ctor_get(v_l_1360_, 3);
lean_dec(v_unused_1776_);
v_unused_1777_ = lean_ctor_get(v_l_1360_, 2);
lean_dec(v_unused_1777_);
v_unused_1778_ = lean_ctor_get(v_l_1360_, 1);
lean_dec(v_unused_1778_);
v_unused_1779_ = lean_ctor_get(v_l_1360_, 0);
lean_dec(v_unused_1779_);
v___x_1710_ = v_l_1360_;
v_isShared_1711_ = v_isSharedCheck_1774_;
goto v_resetjp_1709_;
}
else
{
lean_dec(v_l_1360_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1774_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v_size_1712_; lean_object* v_size_1713_; lean_object* v_k_1714_; lean_object* v_v_1715_; lean_object* v_l_1716_; lean_object* v_r_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; uint8_t v___x_1720_; 
v_size_1712_ = lean_ctor_get(v_l_1543_, 0);
v_size_1713_ = lean_ctor_get(v_r_1544_, 0);
v_k_1714_ = lean_ctor_get(v_r_1544_, 1);
v_v_1715_ = lean_ctor_get(v_r_1544_, 2);
v_l_1716_ = lean_ctor_get(v_r_1544_, 3);
v_r_1717_ = lean_ctor_get(v_r_1544_, 4);
v___x_1718_ = lean_unsigned_to_nat(2u);
v___x_1719_ = lean_nat_mul(v___x_1718_, v_size_1712_);
v___x_1720_ = lean_nat_dec_lt(v_size_1713_, v___x_1719_);
lean_dec(v___x_1719_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1758_; 
lean_inc(v_r_1717_);
lean_inc(v_l_1716_);
lean_inc(v_v_1715_);
lean_inc(v_k_1714_);
lean_del_object(v___x_1710_);
v_isSharedCheck_1758_ = !lean_is_exclusive(v_r_1544_);
if (v_isSharedCheck_1758_ == 0)
{
lean_object* v_unused_1759_; lean_object* v_unused_1760_; lean_object* v_unused_1761_; lean_object* v_unused_1762_; lean_object* v_unused_1763_; 
v_unused_1759_ = lean_ctor_get(v_r_1544_, 4);
lean_dec(v_unused_1759_);
v_unused_1760_ = lean_ctor_get(v_r_1544_, 3);
lean_dec(v_unused_1760_);
v_unused_1761_ = lean_ctor_get(v_r_1544_, 2);
lean_dec(v_unused_1761_);
v_unused_1762_ = lean_ctor_get(v_r_1544_, 1);
lean_dec(v_unused_1762_);
v_unused_1763_ = lean_ctor_get(v_r_1544_, 0);
lean_dec(v_unused_1763_);
v___x_1722_ = v_r_1544_;
v_isShared_1723_ = v_isSharedCheck_1758_;
goto v_resetjp_1721_;
}
else
{
lean_dec(v_r_1544_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1758_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___y_1727_; lean_object* v___y_1728_; lean_object* v___y_1729_; lean_object* v___x_1746_; lean_object* v___y_1748_; 
v___x_1724_ = lean_nat_add(v___x_1550_, v_size_1540_);
lean_dec(v_size_1540_);
v___x_1725_ = lean_nat_add(v___x_1724_, v_size_1700_);
lean_dec(v___x_1724_);
v___x_1746_ = lean_nat_add(v___x_1550_, v_size_1712_);
if (lean_obj_tag(v_l_1716_) == 0)
{
lean_object* v_size_1756_; 
v_size_1756_ = lean_ctor_get(v_l_1716_, 0);
lean_inc(v_size_1756_);
v___y_1748_ = v_size_1756_;
goto v___jp_1747_;
}
else
{
lean_object* v___x_1757_; 
v___x_1757_ = lean_unsigned_to_nat(0u);
v___y_1748_ = v___x_1757_;
goto v___jp_1747_;
}
v___jp_1726_:
{
lean_object* v___x_1730_; lean_object* v___x_1732_; 
v___x_1730_ = lean_nat_add(v___y_1728_, v___y_1729_);
lean_dec(v___y_1729_);
lean_dec(v___y_1728_);
lean_inc_ref(v_tree_1697_);
if (v_isShared_1723_ == 0)
{
lean_ctor_set(v___x_1722_, 4, v_tree_1697_);
lean_ctor_set(v___x_1722_, 3, v_r_1717_);
lean_ctor_set(v___x_1722_, 2, v_v_1699_);
lean_ctor_set(v___x_1722_, 1, v_k_1698_);
lean_ctor_set(v___x_1722_, 0, v___x_1730_);
v___x_1732_ = v___x_1722_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v___x_1730_);
lean_ctor_set(v_reuseFailAlloc_1745_, 1, v_k_1698_);
lean_ctor_set(v_reuseFailAlloc_1745_, 2, v_v_1699_);
lean_ctor_set(v_reuseFailAlloc_1745_, 3, v_r_1717_);
lean_ctor_set(v_reuseFailAlloc_1745_, 4, v_tree_1697_);
v___x_1732_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
v_isSharedCheck_1739_ = !lean_is_exclusive(v_tree_1697_);
if (v_isSharedCheck_1739_ == 0)
{
lean_object* v_unused_1740_; lean_object* v_unused_1741_; lean_object* v_unused_1742_; lean_object* v_unused_1743_; lean_object* v_unused_1744_; 
v_unused_1740_ = lean_ctor_get(v_tree_1697_, 4);
lean_dec(v_unused_1740_);
v_unused_1741_ = lean_ctor_get(v_tree_1697_, 3);
lean_dec(v_unused_1741_);
v_unused_1742_ = lean_ctor_get(v_tree_1697_, 2);
lean_dec(v_unused_1742_);
v_unused_1743_ = lean_ctor_get(v_tree_1697_, 1);
lean_dec(v_unused_1743_);
v_unused_1744_ = lean_ctor_get(v_tree_1697_, 0);
lean_dec(v_unused_1744_);
v___x_1734_ = v_tree_1697_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_dec(v_tree_1697_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 4, v___x_1732_);
lean_ctor_set(v___x_1734_, 3, v___y_1727_);
lean_ctor_set(v___x_1734_, 2, v_v_1715_);
lean_ctor_set(v___x_1734_, 1, v_k_1714_);
lean_ctor_set(v___x_1734_, 0, v___x_1725_);
v___x_1737_ = v___x_1734_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v___x_1725_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v_k_1714_);
lean_ctor_set(v_reuseFailAlloc_1738_, 2, v_v_1715_);
lean_ctor_set(v_reuseFailAlloc_1738_, 3, v___y_1727_);
lean_ctor_set(v_reuseFailAlloc_1738_, 4, v___x_1732_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
}
v___jp_1747_:
{
lean_object* v___x_1749_; lean_object* v___x_1751_; 
v___x_1749_ = lean_nat_add(v___x_1746_, v___y_1748_);
lean_dec(v___y_1748_);
lean_dec(v___x_1746_);
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 4, v_l_1716_);
lean_ctor_set(v___x_1694_, 3, v_l_1543_);
lean_ctor_set(v___x_1694_, 2, v_v_1542_);
lean_ctor_set(v___x_1694_, 1, v_k_1541_);
lean_ctor_set(v___x_1694_, 0, v___x_1749_);
v___x_1751_ = v___x_1694_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v___x_1749_);
lean_ctor_set(v_reuseFailAlloc_1755_, 1, v_k_1541_);
lean_ctor_set(v_reuseFailAlloc_1755_, 2, v_v_1542_);
lean_ctor_set(v_reuseFailAlloc_1755_, 3, v_l_1543_);
lean_ctor_set(v_reuseFailAlloc_1755_, 4, v_l_1716_);
v___x_1751_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
lean_object* v___x_1752_; 
v___x_1752_ = lean_nat_add(v___x_1550_, v_size_1700_);
if (lean_obj_tag(v_r_1717_) == 0)
{
lean_object* v_size_1753_; 
v_size_1753_ = lean_ctor_get(v_r_1717_, 0);
lean_inc(v_size_1753_);
v___y_1727_ = v___x_1751_;
v___y_1728_ = v___x_1752_;
v___y_1729_ = v_size_1753_;
goto v___jp_1726_;
}
else
{
lean_object* v___x_1754_; 
v___x_1754_ = lean_unsigned_to_nat(0u);
v___y_1727_ = v___x_1751_;
v___y_1728_ = v___x_1752_;
v___y_1729_ = v___x_1754_;
goto v___jp_1726_;
}
}
}
}
}
else
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1769_; 
v___x_1764_ = lean_nat_add(v___x_1550_, v_size_1540_);
lean_dec(v_size_1540_);
v___x_1765_ = lean_nat_add(v___x_1764_, v_size_1700_);
lean_dec(v___x_1764_);
v___x_1766_ = lean_nat_add(v___x_1550_, v_size_1700_);
v___x_1767_ = lean_nat_add(v___x_1766_, v_size_1713_);
lean_dec(v___x_1766_);
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 4, v_tree_1697_);
lean_ctor_set(v___x_1694_, 3, v_r_1544_);
lean_ctor_set(v___x_1694_, 2, v_v_1699_);
lean_ctor_set(v___x_1694_, 1, v_k_1698_);
lean_ctor_set(v___x_1694_, 0, v___x_1767_);
v___x_1769_ = v___x_1694_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v___x_1767_);
lean_ctor_set(v_reuseFailAlloc_1773_, 1, v_k_1698_);
lean_ctor_set(v_reuseFailAlloc_1773_, 2, v_v_1699_);
lean_ctor_set(v_reuseFailAlloc_1773_, 3, v_r_1544_);
lean_ctor_set(v_reuseFailAlloc_1773_, 4, v_tree_1697_);
v___x_1769_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
lean_object* v___x_1771_; 
if (v_isShared_1711_ == 0)
{
lean_ctor_set(v___x_1710_, 4, v___x_1769_);
lean_ctor_set(v___x_1710_, 0, v___x_1765_);
v___x_1771_ = v___x_1710_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___x_1765_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v_k_1541_);
lean_ctor_set(v_reuseFailAlloc_1772_, 2, v_v_1542_);
lean_ctor_set(v_reuseFailAlloc_1772_, 3, v_l_1543_);
lean_ctor_set(v_reuseFailAlloc_1772_, 4, v___x_1769_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_1543_) == 0)
{
lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1803_; 
lean_inc_ref(v_l_1543_);
lean_inc(v_v_1542_);
lean_inc(v_k_1541_);
lean_inc(v_size_1540_);
v_isSharedCheck_1803_ = !lean_is_exclusive(v_l_1360_);
if (v_isSharedCheck_1803_ == 0)
{
lean_object* v_unused_1804_; lean_object* v_unused_1805_; lean_object* v_unused_1806_; lean_object* v_unused_1807_; lean_object* v_unused_1808_; 
v_unused_1804_ = lean_ctor_get(v_l_1360_, 4);
lean_dec(v_unused_1804_);
v_unused_1805_ = lean_ctor_get(v_l_1360_, 3);
lean_dec(v_unused_1805_);
v_unused_1806_ = lean_ctor_get(v_l_1360_, 2);
lean_dec(v_unused_1806_);
v_unused_1807_ = lean_ctor_get(v_l_1360_, 1);
lean_dec(v_unused_1807_);
v_unused_1808_ = lean_ctor_get(v_l_1360_, 0);
lean_dec(v_unused_1808_);
v___x_1781_ = v_l_1360_;
v_isShared_1782_ = v_isSharedCheck_1803_;
goto v_resetjp_1780_;
}
else
{
lean_dec(v_l_1360_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1803_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
if (lean_obj_tag(v_r_1544_) == 0)
{
lean_object* v_k_1783_; lean_object* v_v_1784_; lean_object* v_size_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1789_; 
v_k_1783_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_k_1783_);
v_v_1784_ = lean_ctor_get(v___x_1696_, 1);
lean_inc(v_v_1784_);
lean_dec_ref(v___x_1696_);
v_size_1785_ = lean_ctor_get(v_r_1544_, 0);
v___x_1786_ = lean_nat_add(v___x_1550_, v_size_1540_);
lean_dec(v_size_1540_);
v___x_1787_ = lean_nat_add(v___x_1550_, v_size_1785_);
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 4, v_tree_1697_);
lean_ctor_set(v___x_1694_, 3, v_r_1544_);
lean_ctor_set(v___x_1694_, 2, v_v_1784_);
lean_ctor_set(v___x_1694_, 1, v_k_1783_);
lean_ctor_set(v___x_1694_, 0, v___x_1787_);
v___x_1789_ = v___x_1694_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v___x_1787_);
lean_ctor_set(v_reuseFailAlloc_1793_, 1, v_k_1783_);
lean_ctor_set(v_reuseFailAlloc_1793_, 2, v_v_1784_);
lean_ctor_set(v_reuseFailAlloc_1793_, 3, v_r_1544_);
lean_ctor_set(v_reuseFailAlloc_1793_, 4, v_tree_1697_);
v___x_1789_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
lean_object* v___x_1791_; 
if (v_isShared_1782_ == 0)
{
lean_ctor_set(v___x_1781_, 4, v___x_1789_);
lean_ctor_set(v___x_1781_, 0, v___x_1786_);
v___x_1791_ = v___x_1781_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1786_);
lean_ctor_set(v_reuseFailAlloc_1792_, 1, v_k_1541_);
lean_ctor_set(v_reuseFailAlloc_1792_, 2, v_v_1542_);
lean_ctor_set(v_reuseFailAlloc_1792_, 3, v_l_1543_);
lean_ctor_set(v_reuseFailAlloc_1792_, 4, v___x_1789_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
else
{
lean_object* v_k_1794_; lean_object* v_v_1795_; lean_object* v___x_1796_; lean_object* v___x_1798_; 
lean_dec(v_size_1540_);
v_k_1794_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_k_1794_);
v_v_1795_ = lean_ctor_get(v___x_1696_, 1);
lean_inc(v_v_1795_);
lean_dec_ref(v___x_1696_);
v___x_1796_ = lean_unsigned_to_nat(3u);
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 4, v_r_1544_);
lean_ctor_set(v___x_1694_, 3, v_r_1544_);
lean_ctor_set(v___x_1694_, 2, v_v_1795_);
lean_ctor_set(v___x_1694_, 1, v_k_1794_);
lean_ctor_set(v___x_1694_, 0, v___x_1550_);
v___x_1798_ = v___x_1694_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1802_, 1, v_k_1794_);
lean_ctor_set(v_reuseFailAlloc_1802_, 2, v_v_1795_);
lean_ctor_set(v_reuseFailAlloc_1802_, 3, v_r_1544_);
lean_ctor_set(v_reuseFailAlloc_1802_, 4, v_r_1544_);
v___x_1798_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
lean_object* v___x_1800_; 
if (v_isShared_1782_ == 0)
{
lean_ctor_set(v___x_1781_, 4, v___x_1798_);
lean_ctor_set(v___x_1781_, 0, v___x_1796_);
v___x_1800_ = v___x_1781_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v___x_1796_);
lean_ctor_set(v_reuseFailAlloc_1801_, 1, v_k_1541_);
lean_ctor_set(v_reuseFailAlloc_1801_, 2, v_v_1542_);
lean_ctor_set(v_reuseFailAlloc_1801_, 3, v_l_1543_);
lean_ctor_set(v_reuseFailAlloc_1801_, 4, v___x_1798_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1544_) == 0)
{
lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1833_; 
lean_inc(v_l_1543_);
lean_inc(v_v_1542_);
lean_inc(v_k_1541_);
v_isSharedCheck_1833_ = !lean_is_exclusive(v_l_1360_);
if (v_isSharedCheck_1833_ == 0)
{
lean_object* v_unused_1834_; lean_object* v_unused_1835_; lean_object* v_unused_1836_; lean_object* v_unused_1837_; lean_object* v_unused_1838_; 
v_unused_1834_ = lean_ctor_get(v_l_1360_, 4);
lean_dec(v_unused_1834_);
v_unused_1835_ = lean_ctor_get(v_l_1360_, 3);
lean_dec(v_unused_1835_);
v_unused_1836_ = lean_ctor_get(v_l_1360_, 2);
lean_dec(v_unused_1836_);
v_unused_1837_ = lean_ctor_get(v_l_1360_, 1);
lean_dec(v_unused_1837_);
v_unused_1838_ = lean_ctor_get(v_l_1360_, 0);
lean_dec(v_unused_1838_);
v___x_1810_ = v_l_1360_;
v_isShared_1811_ = v_isSharedCheck_1833_;
goto v_resetjp_1809_;
}
else
{
lean_dec(v_l_1360_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1833_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v_k_1812_; lean_object* v_v_1813_; lean_object* v_k_1814_; lean_object* v_v_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1829_; 
v_k_1812_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_k_1812_);
v_v_1813_ = lean_ctor_get(v___x_1696_, 1);
lean_inc(v_v_1813_);
lean_dec_ref(v___x_1696_);
v_k_1814_ = lean_ctor_get(v_r_1544_, 1);
v_v_1815_ = lean_ctor_get(v_r_1544_, 2);
v_isSharedCheck_1829_ = !lean_is_exclusive(v_r_1544_);
if (v_isSharedCheck_1829_ == 0)
{
lean_object* v_unused_1830_; lean_object* v_unused_1831_; lean_object* v_unused_1832_; 
v_unused_1830_ = lean_ctor_get(v_r_1544_, 4);
lean_dec(v_unused_1830_);
v_unused_1831_ = lean_ctor_get(v_r_1544_, 3);
lean_dec(v_unused_1831_);
v_unused_1832_ = lean_ctor_get(v_r_1544_, 0);
lean_dec(v_unused_1832_);
v___x_1817_ = v_r_1544_;
v_isShared_1818_ = v_isSharedCheck_1829_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_v_1815_);
lean_inc(v_k_1814_);
lean_dec(v_r_1544_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1829_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v___x_1819_; lean_object* v___x_1821_; 
v___x_1819_ = lean_unsigned_to_nat(3u);
if (v_isShared_1818_ == 0)
{
lean_ctor_set(v___x_1817_, 4, v_l_1543_);
lean_ctor_set(v___x_1817_, 3, v_l_1543_);
lean_ctor_set(v___x_1817_, 2, v_v_1542_);
lean_ctor_set(v___x_1817_, 1, v_k_1541_);
lean_ctor_set(v___x_1817_, 0, v___x_1550_);
v___x_1821_ = v___x_1817_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1828_, 1, v_k_1541_);
lean_ctor_set(v_reuseFailAlloc_1828_, 2, v_v_1542_);
lean_ctor_set(v_reuseFailAlloc_1828_, 3, v_l_1543_);
lean_ctor_set(v_reuseFailAlloc_1828_, 4, v_l_1543_);
v___x_1821_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
lean_object* v___x_1823_; 
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 4, v_l_1543_);
lean_ctor_set(v___x_1694_, 3, v_l_1543_);
lean_ctor_set(v___x_1694_, 2, v_v_1813_);
lean_ctor_set(v___x_1694_, 1, v_k_1812_);
lean_ctor_set(v___x_1694_, 0, v___x_1550_);
v___x_1823_ = v___x_1694_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v_k_1812_);
lean_ctor_set(v_reuseFailAlloc_1827_, 2, v_v_1813_);
lean_ctor_set(v_reuseFailAlloc_1827_, 3, v_l_1543_);
lean_ctor_set(v_reuseFailAlloc_1827_, 4, v_l_1543_);
v___x_1823_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
lean_object* v___x_1825_; 
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 4, v___x_1823_);
lean_ctor_set(v___x_1810_, 3, v___x_1821_);
lean_ctor_set(v___x_1810_, 2, v_v_1815_);
lean_ctor_set(v___x_1810_, 1, v_k_1814_);
lean_ctor_set(v___x_1810_, 0, v___x_1819_);
v___x_1825_ = v___x_1810_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v___x_1819_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v_k_1814_);
lean_ctor_set(v_reuseFailAlloc_1826_, 2, v_v_1815_);
lean_ctor_set(v_reuseFailAlloc_1826_, 3, v___x_1821_);
lean_ctor_set(v_reuseFailAlloc_1826_, 4, v___x_1823_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
}
}
else
{
lean_object* v_k_1839_; lean_object* v_v_1840_; lean_object* v___x_1841_; lean_object* v___x_1843_; 
v_k_1839_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_k_1839_);
v_v_1840_ = lean_ctor_get(v___x_1696_, 1);
lean_inc(v_v_1840_);
lean_dec_ref(v___x_1696_);
v___x_1841_ = lean_unsigned_to_nat(2u);
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 4, v_r_1544_);
lean_ctor_set(v___x_1694_, 3, v_l_1360_);
lean_ctor_set(v___x_1694_, 2, v_v_1840_);
lean_ctor_set(v___x_1694_, 1, v_k_1839_);
lean_ctor_set(v___x_1694_, 0, v___x_1841_);
v___x_1843_ = v___x_1694_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v___x_1841_);
lean_ctor_set(v_reuseFailAlloc_1844_, 1, v_k_1839_);
lean_ctor_set(v_reuseFailAlloc_1844_, 2, v_v_1840_);
lean_ctor_set(v_reuseFailAlloc_1844_, 3, v_l_1360_);
lean_ctor_set(v_reuseFailAlloc_1844_, 4, v_r_1544_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
}
}
}
}
else
{
return v_l_1360_;
}
}
else
{
return v_r_1361_;
}
}
default: 
{
lean_object* v_impl_1851_; lean_object* v___x_1852_; 
v_impl_1851_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v_k_1356_, v_r_1361_);
v___x_1852_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1851_) == 0)
{
if (lean_obj_tag(v_l_1360_) == 0)
{
lean_object* v_size_1853_; lean_object* v_size_1854_; lean_object* v_k_1855_; lean_object* v_v_1856_; lean_object* v_l_1857_; lean_object* v_r_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; uint8_t v___x_1861_; 
v_size_1853_ = lean_ctor_get(v_impl_1851_, 0);
lean_inc(v_size_1853_);
v_size_1854_ = lean_ctor_get(v_l_1360_, 0);
v_k_1855_ = lean_ctor_get(v_l_1360_, 1);
v_v_1856_ = lean_ctor_get(v_l_1360_, 2);
v_l_1857_ = lean_ctor_get(v_l_1360_, 3);
v_r_1858_ = lean_ctor_get(v_l_1360_, 4);
lean_inc(v_r_1858_);
v___x_1859_ = lean_unsigned_to_nat(3u);
v___x_1860_ = lean_nat_mul(v___x_1859_, v_size_1853_);
v___x_1861_ = lean_nat_dec_lt(v___x_1860_, v_size_1854_);
lean_dec(v___x_1860_);
if (v___x_1861_ == 0)
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1865_; 
lean_dec(v_r_1858_);
v___x_1862_ = lean_nat_add(v___x_1852_, v_size_1854_);
v___x_1863_ = lean_nat_add(v___x_1862_, v_size_1853_);
lean_dec(v_size_1853_);
lean_dec(v___x_1862_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v_impl_1851_);
lean_ctor_set(v___x_1363_, 0, v___x_1863_);
v___x_1865_ = v___x_1363_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v___x_1863_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1866_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1866_, 3, v_l_1360_);
lean_ctor_set(v_reuseFailAlloc_1866_, 4, v_impl_1851_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
else
{
lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1932_; 
lean_inc(v_l_1857_);
lean_inc(v_v_1856_);
lean_inc(v_k_1855_);
lean_inc(v_size_1854_);
v_isSharedCheck_1932_ = !lean_is_exclusive(v_l_1360_);
if (v_isSharedCheck_1932_ == 0)
{
lean_object* v_unused_1933_; lean_object* v_unused_1934_; lean_object* v_unused_1935_; lean_object* v_unused_1936_; lean_object* v_unused_1937_; 
v_unused_1933_ = lean_ctor_get(v_l_1360_, 4);
lean_dec(v_unused_1933_);
v_unused_1934_ = lean_ctor_get(v_l_1360_, 3);
lean_dec(v_unused_1934_);
v_unused_1935_ = lean_ctor_get(v_l_1360_, 2);
lean_dec(v_unused_1935_);
v_unused_1936_ = lean_ctor_get(v_l_1360_, 1);
lean_dec(v_unused_1936_);
v_unused_1937_ = lean_ctor_get(v_l_1360_, 0);
lean_dec(v_unused_1937_);
v___x_1868_ = v_l_1360_;
v_isShared_1869_ = v_isSharedCheck_1932_;
goto v_resetjp_1867_;
}
else
{
lean_dec(v_l_1360_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1932_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v_size_1870_; lean_object* v_size_1871_; lean_object* v_k_1872_; lean_object* v_v_1873_; lean_object* v_l_1874_; lean_object* v_r_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; uint8_t v___x_1878_; 
v_size_1870_ = lean_ctor_get(v_l_1857_, 0);
v_size_1871_ = lean_ctor_get(v_r_1858_, 0);
v_k_1872_ = lean_ctor_get(v_r_1858_, 1);
v_v_1873_ = lean_ctor_get(v_r_1858_, 2);
v_l_1874_ = lean_ctor_get(v_r_1858_, 3);
v_r_1875_ = lean_ctor_get(v_r_1858_, 4);
v___x_1876_ = lean_unsigned_to_nat(2u);
v___x_1877_ = lean_nat_mul(v___x_1876_, v_size_1870_);
v___x_1878_ = lean_nat_dec_lt(v_size_1871_, v___x_1877_);
lean_dec(v___x_1877_);
if (v___x_1878_ == 0)
{
lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1907_; 
lean_inc(v_r_1875_);
lean_inc(v_l_1874_);
lean_inc(v_v_1873_);
lean_inc(v_k_1872_);
v_isSharedCheck_1907_ = !lean_is_exclusive(v_r_1858_);
if (v_isSharedCheck_1907_ == 0)
{
lean_object* v_unused_1908_; lean_object* v_unused_1909_; lean_object* v_unused_1910_; lean_object* v_unused_1911_; lean_object* v_unused_1912_; 
v_unused_1908_ = lean_ctor_get(v_r_1858_, 4);
lean_dec(v_unused_1908_);
v_unused_1909_ = lean_ctor_get(v_r_1858_, 3);
lean_dec(v_unused_1909_);
v_unused_1910_ = lean_ctor_get(v_r_1858_, 2);
lean_dec(v_unused_1910_);
v_unused_1911_ = lean_ctor_get(v_r_1858_, 1);
lean_dec(v_unused_1911_);
v_unused_1912_ = lean_ctor_get(v_r_1858_, 0);
lean_dec(v_unused_1912_);
v___x_1880_ = v_r_1858_;
v_isShared_1881_ = v_isSharedCheck_1907_;
goto v_resetjp_1879_;
}
else
{
lean_dec(v_r_1858_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1907_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___y_1885_; lean_object* v___y_1886_; lean_object* v___y_1887_; lean_object* v___x_1895_; lean_object* v___y_1897_; 
v___x_1882_ = lean_nat_add(v___x_1852_, v_size_1854_);
lean_dec(v_size_1854_);
v___x_1883_ = lean_nat_add(v___x_1882_, v_size_1853_);
lean_dec(v___x_1882_);
v___x_1895_ = lean_nat_add(v___x_1852_, v_size_1870_);
if (lean_obj_tag(v_l_1874_) == 0)
{
lean_object* v_size_1905_; 
v_size_1905_ = lean_ctor_get(v_l_1874_, 0);
lean_inc(v_size_1905_);
v___y_1897_ = v_size_1905_;
goto v___jp_1896_;
}
else
{
lean_object* v___x_1906_; 
v___x_1906_ = lean_unsigned_to_nat(0u);
v___y_1897_ = v___x_1906_;
goto v___jp_1896_;
}
v___jp_1884_:
{
lean_object* v___x_1888_; lean_object* v___x_1890_; 
v___x_1888_ = lean_nat_add(v___y_1885_, v___y_1887_);
lean_dec(v___y_1887_);
lean_dec(v___y_1885_);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 4, v_impl_1851_);
lean_ctor_set(v___x_1880_, 3, v_r_1875_);
lean_ctor_set(v___x_1880_, 2, v_v_1359_);
lean_ctor_set(v___x_1880_, 1, v_k_1358_);
lean_ctor_set(v___x_1880_, 0, v___x_1888_);
v___x_1890_ = v___x_1880_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v___x_1888_);
lean_ctor_set(v_reuseFailAlloc_1894_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1894_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1894_, 3, v_r_1875_);
lean_ctor_set(v_reuseFailAlloc_1894_, 4, v_impl_1851_);
v___x_1890_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
lean_object* v___x_1892_; 
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 4, v___x_1890_);
lean_ctor_set(v___x_1868_, 3, v___y_1886_);
lean_ctor_set(v___x_1868_, 2, v_v_1873_);
lean_ctor_set(v___x_1868_, 1, v_k_1872_);
lean_ctor_set(v___x_1868_, 0, v___x_1883_);
v___x_1892_ = v___x_1868_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1883_);
lean_ctor_set(v_reuseFailAlloc_1893_, 1, v_k_1872_);
lean_ctor_set(v_reuseFailAlloc_1893_, 2, v_v_1873_);
lean_ctor_set(v_reuseFailAlloc_1893_, 3, v___y_1886_);
lean_ctor_set(v_reuseFailAlloc_1893_, 4, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
v___jp_1896_:
{
lean_object* v___x_1898_; lean_object* v___x_1900_; 
v___x_1898_ = lean_nat_add(v___x_1895_, v___y_1897_);
lean_dec(v___y_1897_);
lean_dec(v___x_1895_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v_l_1874_);
lean_ctor_set(v___x_1363_, 3, v_l_1857_);
lean_ctor_set(v___x_1363_, 2, v_v_1856_);
lean_ctor_set(v___x_1363_, 1, v_k_1855_);
lean_ctor_set(v___x_1363_, 0, v___x_1898_);
v___x_1900_ = v___x_1363_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1898_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v_k_1855_);
lean_ctor_set(v_reuseFailAlloc_1904_, 2, v_v_1856_);
lean_ctor_set(v_reuseFailAlloc_1904_, 3, v_l_1857_);
lean_ctor_set(v_reuseFailAlloc_1904_, 4, v_l_1874_);
v___x_1900_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_object* v___x_1901_; 
v___x_1901_ = lean_nat_add(v___x_1852_, v_size_1853_);
lean_dec(v_size_1853_);
if (lean_obj_tag(v_r_1875_) == 0)
{
lean_object* v_size_1902_; 
v_size_1902_ = lean_ctor_get(v_r_1875_, 0);
lean_inc(v_size_1902_);
v___y_1885_ = v___x_1901_;
v___y_1886_ = v___x_1900_;
v___y_1887_ = v_size_1902_;
goto v___jp_1884_;
}
else
{
lean_object* v___x_1903_; 
v___x_1903_ = lean_unsigned_to_nat(0u);
v___y_1885_ = v___x_1901_;
v___y_1886_ = v___x_1900_;
v___y_1887_ = v___x_1903_;
goto v___jp_1884_;
}
}
}
}
}
else
{
lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1918_; 
lean_del_object(v___x_1363_);
v___x_1913_ = lean_nat_add(v___x_1852_, v_size_1854_);
lean_dec(v_size_1854_);
v___x_1914_ = lean_nat_add(v___x_1913_, v_size_1853_);
lean_dec(v___x_1913_);
v___x_1915_ = lean_nat_add(v___x_1852_, v_size_1853_);
lean_dec(v_size_1853_);
v___x_1916_ = lean_nat_add(v___x_1915_, v_size_1871_);
lean_dec(v___x_1915_);
lean_inc_ref(v_impl_1851_);
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 4, v_impl_1851_);
lean_ctor_set(v___x_1868_, 3, v_r_1858_);
lean_ctor_set(v___x_1868_, 2, v_v_1359_);
lean_ctor_set(v___x_1868_, 1, v_k_1358_);
lean_ctor_set(v___x_1868_, 0, v___x_1916_);
v___x_1918_ = v___x_1868_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v___x_1916_);
lean_ctor_set(v_reuseFailAlloc_1931_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1931_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1931_, 3, v_r_1858_);
lean_ctor_set(v_reuseFailAlloc_1931_, 4, v_impl_1851_);
v___x_1918_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
v_isSharedCheck_1925_ = !lean_is_exclusive(v_impl_1851_);
if (v_isSharedCheck_1925_ == 0)
{
lean_object* v_unused_1926_; lean_object* v_unused_1927_; lean_object* v_unused_1928_; lean_object* v_unused_1929_; lean_object* v_unused_1930_; 
v_unused_1926_ = lean_ctor_get(v_impl_1851_, 4);
lean_dec(v_unused_1926_);
v_unused_1927_ = lean_ctor_get(v_impl_1851_, 3);
lean_dec(v_unused_1927_);
v_unused_1928_ = lean_ctor_get(v_impl_1851_, 2);
lean_dec(v_unused_1928_);
v_unused_1929_ = lean_ctor_get(v_impl_1851_, 1);
lean_dec(v_unused_1929_);
v_unused_1930_ = lean_ctor_get(v_impl_1851_, 0);
lean_dec(v_unused_1930_);
v___x_1920_ = v_impl_1851_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_dec(v_impl_1851_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 4, v___x_1918_);
lean_ctor_set(v___x_1920_, 3, v_l_1857_);
lean_ctor_set(v___x_1920_, 2, v_v_1856_);
lean_ctor_set(v___x_1920_, 1, v_k_1855_);
lean_ctor_set(v___x_1920_, 0, v___x_1914_);
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v___x_1914_);
lean_ctor_set(v_reuseFailAlloc_1924_, 1, v_k_1855_);
lean_ctor_set(v_reuseFailAlloc_1924_, 2, v_v_1856_);
lean_ctor_set(v_reuseFailAlloc_1924_, 3, v_l_1857_);
lean_ctor_set(v_reuseFailAlloc_1924_, 4, v___x_1918_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1938_; lean_object* v___x_1939_; lean_object* v___x_1941_; 
v_size_1938_ = lean_ctor_get(v_impl_1851_, 0);
lean_inc(v_size_1938_);
v___x_1939_ = lean_nat_add(v___x_1852_, v_size_1938_);
lean_dec(v_size_1938_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v_impl_1851_);
lean_ctor_set(v___x_1363_, 0, v___x_1939_);
v___x_1941_ = v___x_1363_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v___x_1939_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1942_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1942_, 3, v_l_1360_);
lean_ctor_set(v_reuseFailAlloc_1942_, 4, v_impl_1851_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
else
{
if (lean_obj_tag(v_l_1360_) == 0)
{
lean_object* v_l_1943_; 
v_l_1943_ = lean_ctor_get(v_l_1360_, 3);
if (lean_obj_tag(v_l_1943_) == 0)
{
lean_object* v_r_1944_; 
lean_inc_ref(v_l_1943_);
v_r_1944_ = lean_ctor_get(v_l_1360_, 4);
lean_inc(v_r_1944_);
if (lean_obj_tag(v_r_1944_) == 0)
{
lean_object* v_size_1945_; lean_object* v_k_1946_; lean_object* v_v_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1960_; 
v_size_1945_ = lean_ctor_get(v_l_1360_, 0);
v_k_1946_ = lean_ctor_get(v_l_1360_, 1);
v_v_1947_ = lean_ctor_get(v_l_1360_, 2);
v_isSharedCheck_1960_ = !lean_is_exclusive(v_l_1360_);
if (v_isSharedCheck_1960_ == 0)
{
lean_object* v_unused_1961_; lean_object* v_unused_1962_; 
v_unused_1961_ = lean_ctor_get(v_l_1360_, 4);
lean_dec(v_unused_1961_);
v_unused_1962_ = lean_ctor_get(v_l_1360_, 3);
lean_dec(v_unused_1962_);
v___x_1949_ = v_l_1360_;
v_isShared_1950_ = v_isSharedCheck_1960_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_v_1947_);
lean_inc(v_k_1946_);
lean_inc(v_size_1945_);
lean_dec(v_l_1360_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1960_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v_size_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1955_; 
v_size_1951_ = lean_ctor_get(v_r_1944_, 0);
v___x_1952_ = lean_nat_add(v___x_1852_, v_size_1945_);
lean_dec(v_size_1945_);
v___x_1953_ = lean_nat_add(v___x_1852_, v_size_1951_);
if (v_isShared_1950_ == 0)
{
lean_ctor_set(v___x_1949_, 4, v_impl_1851_);
lean_ctor_set(v___x_1949_, 3, v_r_1944_);
lean_ctor_set(v___x_1949_, 2, v_v_1359_);
lean_ctor_set(v___x_1949_, 1, v_k_1358_);
lean_ctor_set(v___x_1949_, 0, v___x_1953_);
v___x_1955_ = v___x_1949_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v___x_1953_);
lean_ctor_set(v_reuseFailAlloc_1959_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1959_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1959_, 3, v_r_1944_);
lean_ctor_set(v_reuseFailAlloc_1959_, 4, v_impl_1851_);
v___x_1955_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___x_1957_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v___x_1955_);
lean_ctor_set(v___x_1363_, 3, v_l_1943_);
lean_ctor_set(v___x_1363_, 2, v_v_1947_);
lean_ctor_set(v___x_1363_, 1, v_k_1946_);
lean_ctor_set(v___x_1363_, 0, v___x_1952_);
v___x_1957_ = v___x_1363_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v___x_1952_);
lean_ctor_set(v_reuseFailAlloc_1958_, 1, v_k_1946_);
lean_ctor_set(v_reuseFailAlloc_1958_, 2, v_v_1947_);
lean_ctor_set(v_reuseFailAlloc_1958_, 3, v_l_1943_);
lean_ctor_set(v_reuseFailAlloc_1958_, 4, v___x_1955_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
else
{
lean_object* v_k_1963_; lean_object* v_v_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1975_; 
v_k_1963_ = lean_ctor_get(v_l_1360_, 1);
v_v_1964_ = lean_ctor_get(v_l_1360_, 2);
v_isSharedCheck_1975_ = !lean_is_exclusive(v_l_1360_);
if (v_isSharedCheck_1975_ == 0)
{
lean_object* v_unused_1976_; lean_object* v_unused_1977_; lean_object* v_unused_1978_; 
v_unused_1976_ = lean_ctor_get(v_l_1360_, 4);
lean_dec(v_unused_1976_);
v_unused_1977_ = lean_ctor_get(v_l_1360_, 3);
lean_dec(v_unused_1977_);
v_unused_1978_ = lean_ctor_get(v_l_1360_, 0);
lean_dec(v_unused_1978_);
v___x_1966_ = v_l_1360_;
v_isShared_1967_ = v_isSharedCheck_1975_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_v_1964_);
lean_inc(v_k_1963_);
lean_dec(v_l_1360_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1975_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1968_; lean_object* v___x_1970_; 
v___x_1968_ = lean_unsigned_to_nat(3u);
if (v_isShared_1967_ == 0)
{
lean_ctor_set(v___x_1966_, 3, v_r_1944_);
lean_ctor_set(v___x_1966_, 2, v_v_1359_);
lean_ctor_set(v___x_1966_, 1, v_k_1358_);
lean_ctor_set(v___x_1966_, 0, v___x_1852_);
v___x_1970_ = v___x_1966_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v___x_1852_);
lean_ctor_set(v_reuseFailAlloc_1974_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1974_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1974_, 3, v_r_1944_);
lean_ctor_set(v_reuseFailAlloc_1974_, 4, v_r_1944_);
v___x_1970_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
lean_object* v___x_1972_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v___x_1970_);
lean_ctor_set(v___x_1363_, 3, v_l_1943_);
lean_ctor_set(v___x_1363_, 2, v_v_1964_);
lean_ctor_set(v___x_1363_, 1, v_k_1963_);
lean_ctor_set(v___x_1363_, 0, v___x_1968_);
v___x_1972_ = v___x_1363_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v___x_1968_);
lean_ctor_set(v_reuseFailAlloc_1973_, 1, v_k_1963_);
lean_ctor_set(v_reuseFailAlloc_1973_, 2, v_v_1964_);
lean_ctor_set(v_reuseFailAlloc_1973_, 3, v_l_1943_);
lean_ctor_set(v_reuseFailAlloc_1973_, 4, v___x_1970_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
}
else
{
lean_object* v_r_1979_; 
v_r_1979_ = lean_ctor_get(v_l_1360_, 4);
lean_inc(v_r_1979_);
if (lean_obj_tag(v_r_1979_) == 0)
{
lean_object* v_k_1980_; lean_object* v_v_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_2004_; 
lean_inc(v_l_1943_);
v_k_1980_ = lean_ctor_get(v_l_1360_, 1);
v_v_1981_ = lean_ctor_get(v_l_1360_, 2);
v_isSharedCheck_2004_ = !lean_is_exclusive(v_l_1360_);
if (v_isSharedCheck_2004_ == 0)
{
lean_object* v_unused_2005_; lean_object* v_unused_2006_; lean_object* v_unused_2007_; 
v_unused_2005_ = lean_ctor_get(v_l_1360_, 4);
lean_dec(v_unused_2005_);
v_unused_2006_ = lean_ctor_get(v_l_1360_, 3);
lean_dec(v_unused_2006_);
v_unused_2007_ = lean_ctor_get(v_l_1360_, 0);
lean_dec(v_unused_2007_);
v___x_1983_ = v_l_1360_;
v_isShared_1984_ = v_isSharedCheck_2004_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_v_1981_);
lean_inc(v_k_1980_);
lean_dec(v_l_1360_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_2004_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v_k_1985_; lean_object* v_v_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2000_; 
v_k_1985_ = lean_ctor_get(v_r_1979_, 1);
v_v_1986_ = lean_ctor_get(v_r_1979_, 2);
v_isSharedCheck_2000_ = !lean_is_exclusive(v_r_1979_);
if (v_isSharedCheck_2000_ == 0)
{
lean_object* v_unused_2001_; lean_object* v_unused_2002_; lean_object* v_unused_2003_; 
v_unused_2001_ = lean_ctor_get(v_r_1979_, 4);
lean_dec(v_unused_2001_);
v_unused_2002_ = lean_ctor_get(v_r_1979_, 3);
lean_dec(v_unused_2002_);
v_unused_2003_ = lean_ctor_get(v_r_1979_, 0);
lean_dec(v_unused_2003_);
v___x_1988_ = v_r_1979_;
v_isShared_1989_ = v_isSharedCheck_2000_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_v_1986_);
lean_inc(v_k_1985_);
lean_dec(v_r_1979_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2000_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1990_; lean_object* v___x_1992_; 
v___x_1990_ = lean_unsigned_to_nat(3u);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 4, v_l_1943_);
lean_ctor_set(v___x_1988_, 3, v_l_1943_);
lean_ctor_set(v___x_1988_, 2, v_v_1981_);
lean_ctor_set(v___x_1988_, 1, v_k_1980_);
lean_ctor_set(v___x_1988_, 0, v___x_1852_);
v___x_1992_ = v___x_1988_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v___x_1852_);
lean_ctor_set(v_reuseFailAlloc_1999_, 1, v_k_1980_);
lean_ctor_set(v_reuseFailAlloc_1999_, 2, v_v_1981_);
lean_ctor_set(v_reuseFailAlloc_1999_, 3, v_l_1943_);
lean_ctor_set(v_reuseFailAlloc_1999_, 4, v_l_1943_);
v___x_1992_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
lean_object* v___x_1994_; 
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 4, v_l_1943_);
lean_ctor_set(v___x_1983_, 2, v_v_1359_);
lean_ctor_set(v___x_1983_, 1, v_k_1358_);
lean_ctor_set(v___x_1983_, 0, v___x_1852_);
v___x_1994_ = v___x_1983_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v___x_1852_);
lean_ctor_set(v_reuseFailAlloc_1998_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_1998_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_1998_, 3, v_l_1943_);
lean_ctor_set(v_reuseFailAlloc_1998_, 4, v_l_1943_);
v___x_1994_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
lean_object* v___x_1996_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v___x_1994_);
lean_ctor_set(v___x_1363_, 3, v___x_1992_);
lean_ctor_set(v___x_1363_, 2, v_v_1986_);
lean_ctor_set(v___x_1363_, 1, v_k_1985_);
lean_ctor_set(v___x_1363_, 0, v___x_1990_);
v___x_1996_ = v___x_1363_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v___x_1990_);
lean_ctor_set(v_reuseFailAlloc_1997_, 1, v_k_1985_);
lean_ctor_set(v_reuseFailAlloc_1997_, 2, v_v_1986_);
lean_ctor_set(v_reuseFailAlloc_1997_, 3, v___x_1992_);
lean_ctor_set(v_reuseFailAlloc_1997_, 4, v___x_1994_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
}
}
}
else
{
lean_object* v___x_2008_; lean_object* v___x_2010_; 
v___x_2008_ = lean_unsigned_to_nat(2u);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v_r_1979_);
lean_ctor_set(v___x_1363_, 0, v___x_2008_);
v___x_2010_ = v___x_1363_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v___x_2008_);
lean_ctor_set(v_reuseFailAlloc_2011_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_2011_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_2011_, 3, v_l_1360_);
lean_ctor_set(v_reuseFailAlloc_2011_, 4, v_r_1979_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
}
}
else
{
lean_object* v___x_2013_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 4, v_l_1360_);
lean_ctor_set(v___x_1363_, 0, v___x_1852_);
v___x_2013_ = v___x_1363_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v___x_1852_);
lean_ctor_set(v_reuseFailAlloc_2014_, 1, v_k_1358_);
lean_ctor_set(v_reuseFailAlloc_2014_, 2, v_v_1359_);
lean_ctor_set(v_reuseFailAlloc_2014_, 3, v_l_1360_);
lean_ctor_set(v_reuseFailAlloc_2014_, 4, v_l_1360_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
}
}
}
else
{
return v_t_1357_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg___boxed(lean_object* v_k_2017_, lean_object* v_t_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v_k_2017_, v_t_2018_);
lean_dec(v_k_2017_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3(lean_object* v_xs_2020_, lean_object* v_v_2021_, lean_object* v_i_2022_){
_start:
{
lean_object* v___x_2023_; uint8_t v___x_2024_; 
v___x_2023_ = lean_array_get_size(v_xs_2020_);
v___x_2024_ = lean_nat_dec_lt(v_i_2022_, v___x_2023_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; 
lean_dec(v_i_2022_);
v___x_2025_ = lean_box(0);
return v___x_2025_;
}
else
{
lean_object* v___x_2026_; uint8_t v___x_2027_; 
v___x_2026_ = lean_array_fget_borrowed(v_xs_2020_, v_i_2022_);
v___x_2027_ = l_Lean_instBEqFVarId_beq(v___x_2026_, v_v_2021_);
if (v___x_2027_ == 0)
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2028_ = lean_unsigned_to_nat(1u);
v___x_2029_ = lean_nat_add(v_i_2022_, v___x_2028_);
lean_dec(v_i_2022_);
v_i_2022_ = v___x_2029_;
goto _start;
}
else
{
lean_object* v___x_2031_; 
v___x_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2031_, 0, v_i_2022_);
return v___x_2031_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_xs_2032_, lean_object* v_v_2033_, lean_object* v_i_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3(v_xs_2032_, v_v_2033_, v_i_2034_);
lean_dec(v_v_2033_);
lean_dec_ref(v_xs_2032_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(lean_object* v_xs_2036_, lean_object* v_v_2037_){
_start:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2038_ = lean_unsigned_to_nat(0u);
v___x_2039_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1_spec__3(v_xs_2036_, v_v_2037_, v___x_2038_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_2040_, lean_object* v_v_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(v_xs_2040_, v_v_2041_);
lean_dec(v_v_2041_);
lean_dec_ref(v_xs_2040_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(lean_object* v_x_2043_, size_t v_x_2044_, lean_object* v_x_2045_){
_start:
{
if (lean_obj_tag(v_x_2043_) == 0)
{
lean_object* v_es_2046_; lean_object* v___x_2047_; size_t v___x_2048_; size_t v___x_2049_; lean_object* v_j_2050_; lean_object* v_entry_2051_; 
v_es_2046_ = lean_ctor_get(v_x_2043_, 0);
v___x_2047_ = lean_box(2);
v___x_2048_ = ((size_t)31ULL);
v___x_2049_ = lean_usize_land(v_x_2044_, v___x_2048_);
v_j_2050_ = lean_usize_to_nat(v___x_2049_);
v_entry_2051_ = lean_array_get(v___x_2047_, v_es_2046_, v_j_2050_);
switch(lean_obj_tag(v_entry_2051_))
{
case 0:
{
lean_object* v_key_2052_; uint8_t v___x_2053_; 
v_key_2052_ = lean_ctor_get(v_entry_2051_, 0);
lean_inc(v_key_2052_);
lean_dec_ref_known(v_entry_2051_, 2);
v___x_2053_ = l_Lean_instBEqFVarId_beq(v_x_2045_, v_key_2052_);
lean_dec(v_key_2052_);
if (v___x_2053_ == 0)
{
lean_dec(v_j_2050_);
return v_x_2043_;
}
else
{
lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2061_; 
lean_inc_ref(v_es_2046_);
v_isSharedCheck_2061_ = !lean_is_exclusive(v_x_2043_);
if (v_isSharedCheck_2061_ == 0)
{
lean_object* v_unused_2062_; 
v_unused_2062_ = lean_ctor_get(v_x_2043_, 0);
lean_dec(v_unused_2062_);
v___x_2055_ = v_x_2043_;
v_isShared_2056_ = v_isSharedCheck_2061_;
goto v_resetjp_2054_;
}
else
{
lean_dec(v_x_2043_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2061_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2057_; lean_object* v___x_2059_; 
v___x_2057_ = lean_array_set(v_es_2046_, v_j_2050_, v___x_2047_);
lean_dec(v_j_2050_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 0, v___x_2057_);
v___x_2059_ = v___x_2055_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2057_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
}
}
case 1:
{
lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2097_; 
lean_inc_ref(v_es_2046_);
v_isSharedCheck_2097_ = !lean_is_exclusive(v_x_2043_);
if (v_isSharedCheck_2097_ == 0)
{
lean_object* v_unused_2098_; 
v_unused_2098_ = lean_ctor_get(v_x_2043_, 0);
lean_dec(v_unused_2098_);
v___x_2064_ = v_x_2043_;
v_isShared_2065_ = v_isSharedCheck_2097_;
goto v_resetjp_2063_;
}
else
{
lean_dec(v_x_2043_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2097_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v_node_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2096_; 
v_node_2066_ = lean_ctor_get(v_entry_2051_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v_entry_2051_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2068_ = v_entry_2051_;
v_isShared_2069_ = v_isSharedCheck_2096_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_node_2066_);
lean_dec(v_entry_2051_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2096_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
size_t v___x_2070_; lean_object* v_entries_2071_; size_t v___x_2072_; lean_object* v_newNode_2073_; lean_object* v___x_2074_; 
v___x_2070_ = ((size_t)5ULL);
v_entries_2071_ = lean_array_set(v_es_2046_, v_j_2050_, v___x_2047_);
v___x_2072_ = lean_usize_shift_right(v_x_2044_, v___x_2070_);
v_newNode_2073_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_node_2066_, v___x_2072_, v_x_2045_);
lean_inc_ref(v_newNode_2073_);
v___x_2074_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_2073_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v___x_2076_; 
if (v_isShared_2069_ == 0)
{
lean_ctor_set(v___x_2068_, 0, v_newNode_2073_);
v___x_2076_ = v___x_2068_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_newNode_2073_);
v___x_2076_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
lean_object* v___x_2077_; lean_object* v___x_2079_; 
v___x_2077_ = lean_array_set(v_entries_2071_, v_j_2050_, v___x_2076_);
lean_dec(v_j_2050_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 0, v___x_2077_);
v___x_2079_ = v___x_2064_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v___x_2077_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
return v___x_2079_;
}
}
}
else
{
lean_object* v_val_2082_; lean_object* v_fst_2083_; lean_object* v_snd_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2095_; 
lean_dec_ref(v_newNode_2073_);
lean_del_object(v___x_2068_);
v_val_2082_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_val_2082_);
lean_dec_ref_known(v___x_2074_, 1);
v_fst_2083_ = lean_ctor_get(v_val_2082_, 0);
v_snd_2084_ = lean_ctor_get(v_val_2082_, 1);
v_isSharedCheck_2095_ = !lean_is_exclusive(v_val_2082_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2086_ = v_val_2082_;
v_isShared_2087_ = v_isSharedCheck_2095_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_snd_2084_);
lean_inc(v_fst_2083_);
lean_dec(v_val_2082_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2095_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v___x_2089_; 
if (v_isShared_2087_ == 0)
{
v___x_2089_ = v___x_2086_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_fst_2083_);
lean_ctor_set(v_reuseFailAlloc_2094_, 1, v_snd_2084_);
v___x_2089_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2090_; lean_object* v___x_2092_; 
v___x_2090_ = lean_array_set(v_entries_2071_, v_j_2050_, v___x_2089_);
lean_dec(v_j_2050_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 0, v___x_2090_);
v___x_2092_ = v___x_2064_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v___x_2090_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_2050_);
return v_x_2043_;
}
}
}
else
{
lean_object* v_ks_2099_; lean_object* v_vs_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2114_; 
v_ks_2099_ = lean_ctor_get(v_x_2043_, 0);
v_vs_2100_ = lean_ctor_get(v_x_2043_, 1);
v_isSharedCheck_2114_ = !lean_is_exclusive(v_x_2043_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2102_ = v_x_2043_;
v_isShared_2103_ = v_isSharedCheck_2114_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_vs_2100_);
lean_inc(v_ks_2099_);
lean_dec(v_x_2043_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2114_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2104_; 
v___x_2104_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0_spec__1(v_ks_2099_, v_x_2045_);
if (lean_obj_tag(v___x_2104_) == 0)
{
lean_object* v___x_2106_; 
if (v_isShared_2103_ == 0)
{
v___x_2106_ = v___x_2102_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_ks_2099_);
lean_ctor_set(v_reuseFailAlloc_2107_, 1, v_vs_2100_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
else
{
lean_object* v_val_2108_; lean_object* v_keys_x27_2109_; lean_object* v_vals_x27_2110_; lean_object* v___x_2112_; 
v_val_2108_ = lean_ctor_get(v___x_2104_, 0);
lean_inc_n(v_val_2108_, 2);
lean_dec_ref_known(v___x_2104_, 1);
v_keys_x27_2109_ = l_Array_eraseIdx___redArg(v_ks_2099_, v_val_2108_);
v_vals_x27_2110_ = l_Array_eraseIdx___redArg(v_vs_2100_, v_val_2108_);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 1, v_vals_x27_2110_);
lean_ctor_set(v___x_2102_, 0, v_keys_x27_2109_);
v___x_2112_ = v___x_2102_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v_keys_x27_2109_);
lean_ctor_set(v_reuseFailAlloc_2113_, 1, v_vals_x27_2110_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg___boxed(lean_object* v_x_2115_, lean_object* v_x_2116_, lean_object* v_x_2117_){
_start:
{
size_t v_x_2640__boxed_2118_; lean_object* v_res_2119_; 
v_x_2640__boxed_2118_ = lean_unbox_usize(v_x_2116_);
lean_dec(v_x_2116_);
v_res_2119_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_x_2115_, v_x_2640__boxed_2118_, v_x_2117_);
lean_dec(v_x_2117_);
return v_res_2119_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(lean_object* v_x_2120_, lean_object* v_x_2121_){
_start:
{
uint64_t v___x_2122_; size_t v_h_2123_; lean_object* v___x_2124_; 
v___x_2122_ = l_Lean_instHashableFVarId_hash(v_x_2121_);
v_h_2123_ = lean_uint64_to_usize(v___x_2122_);
v___x_2124_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_x_2120_, v_h_2123_, v_x_2121_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg___boxed(lean_object* v_x_2125_, lean_object* v_x_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_x_2125_, v_x_2126_);
lean_dec(v_x_2126_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* lean_local_ctx_erase(lean_object* v_lctx_2128_, lean_object* v_fvarId_2129_){
_start:
{
lean_object* v_fvarIdToDecl_2130_; lean_object* v_decls_2131_; lean_object* v_auxDeclToFullName_2132_; lean_object* v___x_2133_; 
v_fvarIdToDecl_2130_ = lean_ctor_get(v_lctx_2128_, 0);
v_decls_2131_ = lean_ctor_get(v_lctx_2128_, 1);
v_auxDeclToFullName_2132_ = lean_ctor_get(v_lctx_2128_, 2);
v___x_2133_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_fvarIdToDecl_2130_, v_fvarId_2129_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_dec(v_fvarId_2129_);
return v_lctx_2128_;
}
else
{
lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2153_; 
lean_inc(v_auxDeclToFullName_2132_);
lean_inc_ref(v_decls_2131_);
lean_inc_ref(v_fvarIdToDecl_2130_);
v_isSharedCheck_2153_ = !lean_is_exclusive(v_lctx_2128_);
if (v_isSharedCheck_2153_ == 0)
{
lean_object* v_unused_2154_; lean_object* v_unused_2155_; lean_object* v_unused_2156_; 
v_unused_2154_ = lean_ctor_get(v_lctx_2128_, 2);
lean_dec(v_unused_2154_);
v_unused_2155_ = lean_ctor_get(v_lctx_2128_, 1);
lean_dec(v_unused_2155_);
v_unused_2156_ = lean_ctor_get(v_lctx_2128_, 0);
lean_dec(v_unused_2156_);
v___x_2135_ = v_lctx_2128_;
v_isShared_2136_ = v_isSharedCheck_2153_;
goto v_resetjp_2134_;
}
else
{
lean_dec(v_lctx_2128_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2153_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v_val_2137_; lean_object* v___x_2138_; lean_object* v___y_2140_; lean_object* v_index_2152_; 
v_val_2137_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_val_2137_);
lean_dec_ref_known(v___x_2133_, 1);
v___x_2138_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_fvarIdToDecl_2130_, v_fvarId_2129_);
v_index_2152_ = lean_ctor_get(v_val_2137_, 0);
lean_inc(v_index_2152_);
v___y_2140_ = v_index_2152_;
goto v___jp_2139_;
v___jp_2139_:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; uint8_t v___x_2144_; 
v___x_2141_ = lean_box(0);
v___x_2142_ = l_Lean_PersistentArray_set___redArg(v_decls_2131_, v___y_2140_, v___x_2141_);
lean_dec(v___y_2140_);
v___x_2143_ = l___private_Lean_LocalContext_0__Lean_LocalContext_popTailNoneAux(v___x_2142_);
v___x_2144_ = l_Lean_LocalDecl_isAuxDecl(v_val_2137_);
lean_dec(v_val_2137_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2146_; 
lean_dec(v_fvarId_2129_);
if (v_isShared_2136_ == 0)
{
lean_ctor_set(v___x_2135_, 1, v___x_2143_);
lean_ctor_set(v___x_2135_, 0, v___x_2138_);
v___x_2146_ = v___x_2135_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v___x_2138_);
lean_ctor_set(v_reuseFailAlloc_2147_, 1, v___x_2143_);
lean_ctor_set(v_reuseFailAlloc_2147_, 2, v_auxDeclToFullName_2132_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
else
{
lean_object* v___x_2148_; lean_object* v___x_2150_; 
v___x_2148_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v_fvarId_2129_, v_auxDeclToFullName_2132_);
lean_dec(v_fvarId_2129_);
if (v_isShared_2136_ == 0)
{
lean_ctor_set(v___x_2135_, 2, v___x_2148_);
lean_ctor_set(v___x_2135_, 1, v___x_2143_);
lean_ctor_set(v___x_2135_, 0, v___x_2138_);
v___x_2150_ = v___x_2135_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2138_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v___x_2143_);
lean_ctor_set(v_reuseFailAlloc_2151_, 2, v___x_2148_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0(lean_object* v_00_u03b2_2157_, lean_object* v_x_2158_, lean_object* v_x_2159_){
_start:
{
lean_object* v___x_2160_; 
v___x_2160_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_x_2158_, v_x_2159_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___boxed(lean_object* v_00_u03b2_2161_, lean_object* v_x_2162_, lean_object* v_x_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0(v_00_u03b2_2161_, v_x_2162_, v_x_2163_);
lean_dec(v_x_2163_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1(lean_object* v_00_u03b2_2165_, lean_object* v_k_2166_, lean_object* v_t_2167_, lean_object* v_h_2168_){
_start:
{
lean_object* v___x_2169_; 
v___x_2169_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v_k_2166_, v_t_2167_);
return v___x_2169_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___boxed(lean_object* v_00_u03b2_2170_, lean_object* v_k_2171_, lean_object* v_t_2172_, lean_object* v_h_2173_){
_start:
{
lean_object* v_res_2174_; 
v_res_2174_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1(v_00_u03b2_2170_, v_k_2171_, v_t_2172_, v_h_2173_);
lean_dec(v_k_2171_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0(lean_object* v_00_u03b2_2175_, lean_object* v_x_2176_, size_t v_x_2177_, lean_object* v_x_2178_){
_start:
{
lean_object* v___x_2179_; 
v___x_2179_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___redArg(v_x_2176_, v_x_2177_, v_x_2178_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2180_, lean_object* v_x_2181_, lean_object* v_x_2182_, lean_object* v_x_2183_){
_start:
{
size_t v_x_2862__boxed_2184_; lean_object* v_res_2185_; 
v_x_2862__boxed_2184_ = lean_unbox_usize(v_x_2182_);
lean_dec(v_x_2182_);
v_res_2185_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0_spec__0(v_00_u03b2_2180_, v_x_2181_, v_x_2862__boxed_2184_, v_x_2183_);
lean_dec(v_x_2183_);
return v_res_2185_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_pop(lean_object* v_lctx_2186_){
_start:
{
lean_object* v_decls_2187_; lean_object* v_fvarIdToDecl_2188_; lean_object* v_auxDeclToFullName_2189_; lean_object* v_size_2190_; lean_object* v___x_2191_; uint8_t v___x_2192_; 
v_decls_2187_ = lean_ctor_get(v_lctx_2186_, 1);
v_fvarIdToDecl_2188_ = lean_ctor_get(v_lctx_2186_, 0);
v_auxDeclToFullName_2189_ = lean_ctor_get(v_lctx_2186_, 2);
v_size_2190_ = lean_ctor_get(v_decls_2187_, 2);
v___x_2191_ = lean_unsigned_to_nat(0u);
v___x_2192_ = lean_nat_dec_eq(v_size_2190_, v___x_2191_);
if (v___x_2192_ == 0)
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2193_ = lean_box(0);
v___x_2194_ = lean_unsigned_to_nat(1u);
v___x_2195_ = lean_nat_sub(v_size_2190_, v___x_2194_);
v___x_2196_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2193_, v_decls_2187_, v___x_2195_);
lean_dec(v___x_2195_);
if (lean_obj_tag(v___x_2196_) == 0)
{
return v_lctx_2186_;
}
else
{
lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2215_; 
lean_inc(v_auxDeclToFullName_2189_);
lean_inc_ref(v_fvarIdToDecl_2188_);
lean_inc_ref(v_decls_2187_);
v_isSharedCheck_2215_ = !lean_is_exclusive(v_lctx_2186_);
if (v_isSharedCheck_2215_ == 0)
{
lean_object* v_unused_2216_; lean_object* v_unused_2217_; lean_object* v_unused_2218_; 
v_unused_2216_ = lean_ctor_get(v_lctx_2186_, 2);
lean_dec(v_unused_2216_);
v_unused_2217_ = lean_ctor_get(v_lctx_2186_, 1);
lean_dec(v_unused_2217_);
v_unused_2218_ = lean_ctor_get(v_lctx_2186_, 0);
lean_dec(v_unused_2218_);
v___x_2198_ = v_lctx_2186_;
v_isShared_2199_ = v_isSharedCheck_2215_;
goto v_resetjp_2197_;
}
else
{
lean_dec(v_lctx_2186_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2215_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v_val_2200_; lean_object* v___y_2202_; lean_object* v_fvarId_2214_; 
v_val_2200_ = lean_ctor_get(v___x_2196_, 0);
lean_inc(v_val_2200_);
lean_dec_ref_known(v___x_2196_, 1);
v_fvarId_2214_ = lean_ctor_get(v_val_2200_, 1);
lean_inc(v_fvarId_2214_);
v___y_2202_ = v_fvarId_2214_;
goto v___jp_2201_;
v___jp_2201_:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; uint8_t v___x_2206_; 
v___x_2203_ = l_Lean_PersistentHashMap_erase___at___00Lean_LocalContext_erase_spec__0___redArg(v_fvarIdToDecl_2188_, v___y_2202_);
v___x_2204_ = l_Lean_PersistentArray_pop___redArg(v_decls_2187_);
v___x_2205_ = l___private_Lean_LocalContext_0__Lean_LocalContext_popTailNoneAux(v___x_2204_);
v___x_2206_ = l_Lean_LocalDecl_isAuxDecl(v_val_2200_);
lean_dec(v_val_2200_);
if (v___x_2206_ == 0)
{
lean_object* v___x_2208_; 
lean_dec(v___y_2202_);
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 1, v___x_2205_);
lean_ctor_set(v___x_2198_, 0, v___x_2203_);
v___x_2208_ = v___x_2198_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2203_);
lean_ctor_set(v_reuseFailAlloc_2209_, 1, v___x_2205_);
lean_ctor_set(v_reuseFailAlloc_2209_, 2, v_auxDeclToFullName_2189_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
else
{
lean_object* v___x_2210_; lean_object* v___x_2212_; 
v___x_2210_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_LocalContext_erase_spec__1___redArg(v___y_2202_, v_auxDeclToFullName_2189_);
lean_dec(v___y_2202_);
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 2, v___x_2210_);
lean_ctor_set(v___x_2198_, 1, v___x_2205_);
lean_ctor_set(v___x_2198_, 0, v___x_2203_);
v___x_2212_ = v___x_2198_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v___x_2203_);
lean_ctor_set(v_reuseFailAlloc_2213_, 1, v___x_2205_);
lean_ctor_set(v_reuseFailAlloc_2213_, 2, v___x_2210_);
v___x_2212_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
return v___x_2212_;
}
}
}
}
}
}
else
{
return v_lctx_2186_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(lean_object* v_userName_2219_, lean_object* v_as_2220_, lean_object* v_i_2221_){
_start:
{
lean_object* v_zero_2222_; uint8_t v_isZero_2223_; 
v_zero_2222_ = lean_unsigned_to_nat(0u);
v_isZero_2223_ = lean_nat_dec_eq(v_i_2221_, v_zero_2222_);
if (v_isZero_2223_ == 1)
{
lean_object* v___x_2224_; 
lean_dec(v_i_2221_);
v___x_2224_ = lean_box(0);
return v___x_2224_;
}
else
{
lean_object* v_one_2225_; lean_object* v_n_2226_; lean_object* v___y_2228_; lean_object* v___x_2230_; lean_object* v___y_2232_; 
v_one_2225_ = lean_unsigned_to_nat(1u);
v_n_2226_ = lean_nat_sub(v_i_2221_, v_one_2225_);
lean_dec(v_i_2221_);
v___x_2230_ = lean_array_fget_borrowed(v_as_2220_, v_n_2226_);
if (lean_obj_tag(v___x_2230_) == 0)
{
v___y_2228_ = v___x_2230_;
goto v___jp_2227_;
}
else
{
lean_object* v_val_2235_; lean_object* v_userName_2236_; 
v_val_2235_ = lean_ctor_get(v___x_2230_, 0);
v_userName_2236_ = lean_ctor_get(v_val_2235_, 2);
v___y_2232_ = v_userName_2236_;
goto v___jp_2231_;
}
v___jp_2227_:
{
if (lean_obj_tag(v___y_2228_) == 0)
{
v_i_2221_ = v_n_2226_;
goto _start;
}
else
{
lean_dec(v_n_2226_);
lean_inc_ref(v___y_2228_);
return v___y_2228_;
}
}
v___jp_2231_:
{
uint8_t v___x_2233_; 
v___x_2233_ = lean_name_eq(v___y_2232_, v_userName_2219_);
if (v___x_2233_ == 0)
{
v_i_2221_ = v_n_2226_;
goto _start;
}
else
{
v___y_2228_ = v___x_2230_;
goto v___jp_2227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_userName_2237_, lean_object* v_as_2238_, lean_object* v_i_2239_){
_start:
{
lean_object* v_res_2240_; 
v_res_2240_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_2237_, v_as_2238_, v_i_2239_);
lean_dec_ref(v_as_2238_);
lean_dec(v_userName_2237_);
return v_res_2240_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(lean_object* v_userName_2241_, lean_object* v_as_2242_, lean_object* v_i_2243_){
_start:
{
lean_object* v_zero_2244_; uint8_t v_isZero_2245_; 
v_zero_2244_ = lean_unsigned_to_nat(0u);
v_isZero_2245_ = lean_nat_dec_eq(v_i_2243_, v_zero_2244_);
if (v_isZero_2245_ == 1)
{
lean_object* v___x_2246_; 
lean_dec(v_i_2243_);
v___x_2246_ = lean_box(0);
return v___x_2246_;
}
else
{
lean_object* v_one_2247_; lean_object* v_n_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v_one_2247_ = lean_unsigned_to_nat(1u);
v_n_2248_ = lean_nat_sub(v_i_2243_, v_one_2247_);
lean_dec(v_i_2243_);
v___x_2249_ = lean_array_fget_borrowed(v_as_2242_, v_n_2248_);
v___x_2250_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(v_userName_2241_, v___x_2249_);
if (lean_obj_tag(v___x_2250_) == 0)
{
v_i_2243_ = v_n_2248_;
goto _start;
}
else
{
lean_dec(v_n_2248_);
return v___x_2250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(lean_object* v_userName_2252_, lean_object* v_x_2253_){
_start:
{
if (lean_obj_tag(v_x_2253_) == 0)
{
lean_object* v_cs_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
v_cs_2254_ = lean_ctor_get(v_x_2253_, 0);
v___x_2255_ = lean_array_get_size(v_cs_2254_);
v___x_2256_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(v_userName_2252_, v_cs_2254_, v___x_2255_);
return v___x_2256_;
}
else
{
lean_object* v_vs_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v_vs_2257_ = lean_ctor_get(v_x_2253_, 0);
v___x_2258_ = lean_array_get_size(v_vs_2257_);
v___x_2259_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_2252_, v_vs_2257_, v___x_2258_);
return v___x_2259_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1___boxed(lean_object* v_userName_2260_, lean_object* v_x_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(v_userName_2260_, v_x_2261_);
lean_dec_ref(v_x_2261_);
lean_dec(v_userName_2260_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_userName_2263_, lean_object* v_as_2264_, lean_object* v_i_2265_){
_start:
{
lean_object* v_res_2266_; 
v_res_2266_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(v_userName_2263_, v_as_2264_, v_i_2265_);
lean_dec_ref(v_as_2264_);
lean_dec(v_userName_2263_);
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0(lean_object* v_userName_2267_, lean_object* v_t_2268_){
_start:
{
lean_object* v_root_2269_; lean_object* v_tail_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v_root_2269_ = lean_ctor_get(v_t_2268_, 0);
v_tail_2270_ = lean_ctor_get(v_t_2268_, 1);
v___x_2271_ = lean_array_get_size(v_tail_2270_);
v___x_2272_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_2267_, v_tail_2270_, v___x_2271_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1(v_userName_2267_, v_root_2269_);
return v___x_2273_;
}
else
{
return v___x_2272_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0___boxed(lean_object* v_userName_2274_, lean_object* v_t_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0(v_userName_2274_, v_t_2275_);
lean_dec_ref(v_t_2275_);
lean_dec(v_userName_2274_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object* v_lctx_2277_, lean_object* v_userName_2278_){
_start:
{
lean_object* v_decls_2279_; lean_object* v___x_2280_; 
v_decls_2279_ = lean_ctor_get(v_lctx_2277_, 1);
v___x_2280_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0(v_userName_2278_, v_decls_2279_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserName_x3f___boxed(lean_object* v_lctx_2281_, lean_object* v_userName_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_2281_, v_userName_2282_);
lean_dec(v_userName_2282_);
lean_dec_ref(v_lctx_2281_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0(lean_object* v_userName_2284_, lean_object* v_as_2285_, lean_object* v_i_2286_, lean_object* v_a_2287_){
_start:
{
lean_object* v___x_2288_; 
v___x_2288_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___redArg(v_userName_2284_, v_as_2285_, v_i_2286_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0___boxed(lean_object* v_userName_2289_, lean_object* v_as_2290_, lean_object* v_i_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__0(v_userName_2289_, v_as_2290_, v_i_2291_, v_a_2292_);
lean_dec_ref(v_as_2290_);
lean_dec(v_userName_2289_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2(lean_object* v_userName_2294_, lean_object* v_as_2295_, lean_object* v_i_2296_, lean_object* v_a_2297_){
_start:
{
lean_object* v___x_2298_; 
v___x_2298_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___redArg(v_userName_2294_, v_as_2295_, v_i_2296_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2___boxed(lean_object* v_userName_2299_, lean_object* v_as_2300_, lean_object* v_i_2301_, lean_object* v_a_2302_){
_start:
{
lean_object* v_res_2303_; 
v_res_2303_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findFromUserName_x3f_spec__0_spec__1_spec__2(v_userName_2299_, v_as_2300_, v_i_2301_, v_a_2302_);
lean_dec_ref(v_as_2300_);
lean_dec(v_userName_2299_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFromUserName_x21(lean_object* v_lctx_2307_, lean_object* v_userName_2308_){
_start:
{
lean_object* v___x_2309_; 
v___x_2309_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_2307_, v_userName_2308_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; uint8_t v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___x_2310_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_2311_ = ((lean_object*)(l_Lean_LocalContext_getFromUserName_x21___closed__0));
v___x_2312_ = lean_unsigned_to_nat(403u);
v___x_2313_ = lean_unsigned_to_nat(17u);
v___x_2314_ = ((lean_object*)(l_Lean_LocalContext_getFromUserName_x21___closed__1));
v___x_2315_ = 1;
v___x_2316_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_userName_2308_, v___x_2315_);
v___x_2317_ = lean_string_append(v___x_2314_, v___x_2316_);
lean_dec_ref(v___x_2316_);
v___x_2318_ = ((lean_object*)(l_Lean_LocalContext_getFromUserName_x21___closed__2));
v___x_2319_ = lean_string_append(v___x_2317_, v___x_2318_);
v___x_2320_ = l_mkPanicMessageWithDecl(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2313_, v___x_2319_);
lean_dec_ref(v___x_2319_);
v___x_2321_ = l_panic___at___00Lean_LocalDecl_setBinderInfo_spec__0(v___x_2320_);
return v___x_2321_;
}
else
{
lean_object* v_val_2322_; 
lean_dec(v_userName_2308_);
v_val_2322_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_val_2322_);
lean_dec_ref_known(v___x_2309_, 1);
return v_val_2322_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getFromUserName_x21___boxed(lean_object* v_lctx_2323_, lean_object* v_userName_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lean_LocalContext_getFromUserName_x21(v_lctx_2323_, v_userName_2324_);
lean_dec_ref(v_lctx_2323_);
return v_res_2325_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_usesUserName(lean_object* v_lctx_2326_, lean_object* v_userName_2327_){
_start:
{
lean_object* v___x_2328_; 
v___x_2328_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_2326_, v_userName_2327_);
if (lean_obj_tag(v___x_2328_) == 0)
{
uint8_t v___x_2329_; 
v___x_2329_ = 0;
return v___x_2329_;
}
else
{
uint8_t v___x_2330_; 
lean_dec_ref_known(v___x_2328_, 1);
v___x_2330_ = 1;
return v___x_2330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_usesUserName___boxed(lean_object* v_lctx_2331_, lean_object* v_userName_2332_){
_start:
{
uint8_t v_res_2333_; lean_object* v_r_2334_; 
v_res_2333_ = l_Lean_LocalContext_usesUserName(v_lctx_2331_, v_userName_2332_);
lean_dec(v_userName_2332_);
lean_dec_ref(v_lctx_2331_);
v_r_2334_ = lean_box(v_res_2333_);
return v_r_2334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux(lean_object* v_lctx_2335_, lean_object* v_suggestion_2336_, lean_object* v_i_2337_){
_start:
{
lean_object* v_curr_2338_; uint8_t v___x_2339_; 
lean_inc(v_i_2337_);
lean_inc(v_suggestion_2336_);
v_curr_2338_ = lean_name_append_index_after(v_suggestion_2336_, v_i_2337_);
v___x_2339_ = l_Lean_LocalContext_usesUserName(v_lctx_2335_, v_curr_2338_);
if (v___x_2339_ == 0)
{
lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
lean_dec(v_suggestion_2336_);
v___x_2340_ = lean_unsigned_to_nat(1u);
v___x_2341_ = lean_nat_add(v_i_2337_, v___x_2340_);
lean_dec(v_i_2337_);
v___x_2342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2342_, 0, v_curr_2338_);
lean_ctor_set(v___x_2342_, 1, v___x_2341_);
return v___x_2342_;
}
else
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
lean_dec(v_curr_2338_);
v___x_2343_ = lean_unsigned_to_nat(1u);
v___x_2344_ = lean_nat_add(v_i_2337_, v___x_2343_);
lean_dec(v_i_2337_);
v_i_2337_ = v___x_2344_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux___boxed(lean_object* v_lctx_2346_, lean_object* v_suggestion_2347_, lean_object* v_i_2348_){
_start:
{
lean_object* v_res_2349_; 
v_res_2349_ = l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux(v_lctx_2346_, v_suggestion_2347_, v_i_2348_);
lean_dec_ref(v_lctx_2346_);
return v_res_2349_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getUnusedName(lean_object* v_lctx_2350_, lean_object* v_suggestion_2351_){
_start:
{
lean_object* v_suggestion_2352_; uint8_t v___x_2353_; 
v_suggestion_2352_ = l_Lean_Name_eraseMacroScopes(v_suggestion_2351_);
v___x_2353_ = l_Lean_LocalContext_usesUserName(v_lctx_2350_, v_suggestion_2352_);
if (v___x_2353_ == 0)
{
return v_suggestion_2352_;
}
else
{
lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v_fst_2356_; 
v___x_2354_ = lean_unsigned_to_nat(1u);
v___x_2355_ = l___private_Lean_LocalContext_0__Lean_LocalContext_getUnusedNameAux(v_lctx_2350_, v_suggestion_2352_, v___x_2354_);
v_fst_2356_ = lean_ctor_get(v___x_2355_, 0);
lean_inc(v_fst_2356_);
lean_dec_ref(v___x_2355_);
return v_fst_2356_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getUnusedName___boxed(lean_object* v_lctx_2357_, lean_object* v_suggestion_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_Lean_LocalContext_getUnusedName(v_lctx_2357_, v_suggestion_2358_);
lean_dec(v_suggestion_2358_);
lean_dec_ref(v_lctx_2357_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_lastDecl(lean_object* v_lctx_2360_){
_start:
{
lean_object* v_decls_2361_; lean_object* v_size_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; uint8_t v___x_2366_; 
v_decls_2361_ = lean_ctor_get(v_lctx_2360_, 1);
v_size_2362_ = lean_ctor_get(v_decls_2361_, 2);
v___x_2363_ = lean_box(0);
v___x_2364_ = lean_unsigned_to_nat(1u);
v___x_2365_ = lean_nat_sub(v_size_2362_, v___x_2364_);
v___x_2366_ = lean_nat_dec_lt(v___x_2365_, v_size_2362_);
if (v___x_2366_ == 0)
{
lean_object* v___x_2367_; 
lean_dec(v___x_2365_);
v___x_2367_ = l_outOfBounds___redArg(v___x_2363_);
return v___x_2367_;
}
else
{
lean_object* v___x_2368_; 
v___x_2368_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2363_, v_decls_2361_, v___x_2365_);
lean_dec(v___x_2365_);
return v___x_2368_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_lastDecl___boxed(lean_object* v_lctx_2369_){
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l_Lean_LocalContext_lastDecl(v_lctx_2369_);
lean_dec_ref(v_lctx_2369_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setUserName(lean_object* v_lctx_2371_, lean_object* v_fvarId_2372_, lean_object* v_userName_2373_){
_start:
{
lean_object* v_fvarIdToDecl_2374_; lean_object* v_decls_2375_; lean_object* v_auxDeclToFullName_2376_; lean_object* v_decl_2377_; lean_object* v_decl_2378_; lean_object* v___y_2380_; lean_object* v___y_2381_; lean_object* v___y_2386_; lean_object* v_fvarId_2389_; 
v_fvarIdToDecl_2374_ = lean_ctor_get(v_lctx_2371_, 0);
lean_inc_ref(v_fvarIdToDecl_2374_);
v_decls_2375_ = lean_ctor_get(v_lctx_2371_, 1);
lean_inc_ref(v_decls_2375_);
v_auxDeclToFullName_2376_ = lean_ctor_get(v_lctx_2371_, 2);
lean_inc(v_auxDeclToFullName_2376_);
v_decl_2377_ = l_Lean_LocalContext_get_x21(v_lctx_2371_, v_fvarId_2372_);
v_decl_2378_ = l_Lean_LocalDecl_setUserName(v_decl_2377_, v_userName_2373_);
v_fvarId_2389_ = lean_ctor_get(v_decl_2378_, 1);
lean_inc(v_fvarId_2389_);
v___y_2386_ = v_fvarId_2389_;
goto v___jp_2385_;
v___jp_2379_:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2382_, 0, v_decl_2378_);
v___x_2383_ = l_Lean_PersistentArray_set___redArg(v_decls_2375_, v___y_2381_, v___x_2382_);
lean_dec(v___y_2381_);
v___x_2384_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2384_, 0, v___y_2380_);
lean_ctor_set(v___x_2384_, 1, v___x_2383_);
lean_ctor_set(v___x_2384_, 2, v_auxDeclToFullName_2376_);
return v___x_2384_;
}
v___jp_2385_:
{
lean_object* v___x_2387_; lean_object* v_index_2388_; 
lean_inc_ref(v_decl_2378_);
v___x_2387_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2374_, v___y_2386_, v_decl_2378_);
v_index_2388_ = lean_ctor_get(v_decl_2378_, 0);
lean_inc(v_index_2388_);
v___y_2380_ = v___x_2387_;
v___y_2381_ = v_index_2388_;
goto v___jp_2379_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_renameUserName(lean_object* v_lctx_2390_, lean_object* v_fromName_2391_, lean_object* v_toName_2392_){
_start:
{
lean_object* v_fvarIdToDecl_2393_; lean_object* v_decls_2394_; lean_object* v_auxDeclToFullName_2395_; lean_object* v___x_2396_; 
v_fvarIdToDecl_2393_ = lean_ctor_get(v_lctx_2390_, 0);
v_decls_2394_ = lean_ctor_get(v_lctx_2390_, 1);
v_auxDeclToFullName_2395_ = lean_ctor_get(v_lctx_2390_, 2);
v___x_2396_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_2390_, v_fromName_2391_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_dec(v_toName_2392_);
return v_lctx_2390_;
}
else
{
lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2421_; 
lean_inc(v_auxDeclToFullName_2395_);
lean_inc_ref(v_decls_2394_);
lean_inc_ref(v_fvarIdToDecl_2393_);
v_isSharedCheck_2421_ = !lean_is_exclusive(v_lctx_2390_);
if (v_isSharedCheck_2421_ == 0)
{
lean_object* v_unused_2422_; lean_object* v_unused_2423_; lean_object* v_unused_2424_; 
v_unused_2422_ = lean_ctor_get(v_lctx_2390_, 2);
lean_dec(v_unused_2422_);
v_unused_2423_ = lean_ctor_get(v_lctx_2390_, 1);
lean_dec(v_unused_2423_);
v_unused_2424_ = lean_ctor_get(v_lctx_2390_, 0);
lean_dec(v_unused_2424_);
v___x_2398_ = v_lctx_2390_;
v_isShared_2399_ = v_isSharedCheck_2421_;
goto v_resetjp_2397_;
}
else
{
lean_dec(v_lctx_2390_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2421_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v_val_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2420_; 
v_val_2400_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2420_ == 0)
{
v___x_2402_ = v___x_2396_;
v_isShared_2403_ = v_isSharedCheck_2420_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_val_2400_);
lean_dec(v___x_2396_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2420_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v_decl_2404_; lean_object* v___y_2406_; lean_object* v___y_2407_; lean_object* v___y_2416_; lean_object* v_fvarId_2419_; 
v_decl_2404_ = l_Lean_LocalDecl_setUserName(v_val_2400_, v_toName_2392_);
v_fvarId_2419_ = lean_ctor_get(v_decl_2404_, 1);
lean_inc(v_fvarId_2419_);
v___y_2416_ = v_fvarId_2419_;
goto v___jp_2415_;
v___jp_2405_:
{
lean_object* v___x_2409_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 0, v_decl_2404_);
v___x_2409_ = v___x_2402_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v_decl_2404_);
v___x_2409_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
lean_object* v___x_2410_; lean_object* v___x_2412_; 
v___x_2410_ = l_Lean_PersistentArray_set___redArg(v_decls_2394_, v___y_2407_, v___x_2409_);
lean_dec(v___y_2407_);
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 1, v___x_2410_);
lean_ctor_set(v___x_2398_, 0, v___y_2406_);
v___x_2412_ = v___x_2398_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v___y_2406_);
lean_ctor_set(v_reuseFailAlloc_2413_, 1, v___x_2410_);
lean_ctor_set(v_reuseFailAlloc_2413_, 2, v_auxDeclToFullName_2395_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
v___jp_2415_:
{
lean_object* v___x_2417_; lean_object* v_index_2418_; 
lean_inc_ref(v_decl_2404_);
v___x_2417_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2393_, v___y_2416_, v_decl_2404_);
v_index_2418_ = lean_ctor_get(v_decl_2404_, 0);
lean_inc(v_index_2418_);
v___y_2406_ = v___x_2417_;
v___y_2407_ = v_index_2418_;
goto v___jp_2405_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_renameUserName___boxed(lean_object* v_lctx_2425_, lean_object* v_fromName_2426_, lean_object* v_toName_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l_Lean_LocalContext_renameUserName(v_lctx_2425_, v_fromName_2426_, v_toName_2427_);
lean_dec(v_fromName_2426_);
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_modifyLocalDecl(lean_object* v_lctx_2431_, lean_object* v_fvarId_2432_, lean_object* v_f_2433_){
_start:
{
lean_object* v_fvarIdToDecl_2434_; lean_object* v_decls_2435_; lean_object* v_auxDeclToFullName_2436_; lean_object* v___x_2437_; 
v_fvarIdToDecl_2434_ = lean_ctor_get(v_lctx_2431_, 0);
v_decls_2435_ = lean_ctor_get(v_lctx_2431_, 1);
v_auxDeclToFullName_2436_ = lean_ctor_get(v_lctx_2431_, 2);
lean_inc_ref(v_lctx_2431_);
v___x_2437_ = lean_local_ctx_find(v_lctx_2431_, v_fvarId_2432_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_dec_ref(v_f_2433_);
return v_lctx_2431_;
}
else
{
lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2464_; 
lean_inc(v_auxDeclToFullName_2436_);
lean_inc_ref(v_decls_2435_);
lean_inc_ref(v_fvarIdToDecl_2434_);
v_isSharedCheck_2464_ = !lean_is_exclusive(v_lctx_2431_);
if (v_isSharedCheck_2464_ == 0)
{
lean_object* v_unused_2465_; lean_object* v_unused_2466_; lean_object* v_unused_2467_; 
v_unused_2465_ = lean_ctor_get(v_lctx_2431_, 2);
lean_dec(v_unused_2465_);
v_unused_2466_ = lean_ctor_get(v_lctx_2431_, 1);
lean_dec(v_unused_2466_);
v_unused_2467_ = lean_ctor_get(v_lctx_2431_, 0);
lean_dec(v_unused_2467_);
v___x_2439_ = v_lctx_2431_;
v_isShared_2440_ = v_isSharedCheck_2464_;
goto v_resetjp_2438_;
}
else
{
lean_dec(v_lctx_2431_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2464_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v_val_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2463_; 
v_val_2441_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2463_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2463_ == 0)
{
v___x_2443_ = v___x_2437_;
v_isShared_2444_ = v_isSharedCheck_2463_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_val_2441_);
lean_dec(v___x_2437_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2463_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v_decl_2447_; lean_object* v___y_2449_; lean_object* v___y_2450_; lean_object* v___y_2459_; lean_object* v_fvarId_2462_; 
v___x_2445_ = ((lean_object*)(l_Lean_LocalContext_modifyLocalDecl___closed__0));
v___x_2446_ = ((lean_object*)(l_Lean_LocalContext_modifyLocalDecl___closed__1));
v_decl_2447_ = lean_apply_1(v_f_2433_, v_val_2441_);
v_fvarId_2462_ = lean_ctor_get(v_decl_2447_, 1);
lean_inc(v_fvarId_2462_);
v___y_2459_ = v_fvarId_2462_;
goto v___jp_2458_;
v___jp_2448_:
{
lean_object* v___x_2452_; 
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 0, v_decl_2447_);
v___x_2452_ = v___x_2443_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v_decl_2447_);
v___x_2452_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
lean_object* v___x_2453_; lean_object* v___x_2455_; 
v___x_2453_ = l_Lean_PersistentArray_set___redArg(v_decls_2435_, v___y_2450_, v___x_2452_);
lean_dec(v___y_2450_);
if (v_isShared_2440_ == 0)
{
lean_ctor_set(v___x_2439_, 1, v___x_2453_);
lean_ctor_set(v___x_2439_, 0, v___y_2449_);
v___x_2455_ = v___x_2439_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v___y_2449_);
lean_ctor_set(v_reuseFailAlloc_2456_, 1, v___x_2453_);
lean_ctor_set(v_reuseFailAlloc_2456_, 2, v_auxDeclToFullName_2436_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
v___jp_2458_:
{
lean_object* v___x_2460_; lean_object* v_index_2461_; 
lean_inc_ref(v_decl_2447_);
v___x_2460_ = l_Lean_PersistentHashMap_insert___redArg(v___x_2445_, v___x_2446_, v_fvarIdToDecl_2434_, v___y_2459_, v_decl_2447_);
v_index_2461_ = lean_ctor_get(v_decl_2447_, 0);
lean_inc(v_index_2461_);
v___y_2449_ = v___x_2460_;
v___y_2450_ = v_index_2461_;
goto v___jp_2448_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(lean_object* v_f_2468_, lean_object* v_as_2469_, size_t v_i_2470_, size_t v_stop_2471_, lean_object* v_b_2472_){
_start:
{
lean_object* v___y_2474_; uint8_t v___x_2478_; 
v___x_2478_ = lean_usize_dec_eq(v_i_2470_, v_stop_2471_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2479_; 
v___x_2479_ = lean_array_uget(v_as_2469_, v_i_2470_);
if (lean_obj_tag(v___x_2479_) == 0)
{
v___y_2474_ = v_b_2472_;
goto v___jp_2473_;
}
else
{
lean_object* v_val_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2507_; 
v_val_2480_ = lean_ctor_get(v___x_2479_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2479_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2482_ = v___x_2479_;
v_isShared_2483_ = v_isSharedCheck_2507_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_val_2480_);
lean_dec(v___x_2479_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2507_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v_fvarIdToDecl_2484_; lean_object* v_decls_2485_; lean_object* v_auxDeclToFullName_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2506_; 
v_fvarIdToDecl_2484_ = lean_ctor_get(v_b_2472_, 0);
v_decls_2485_ = lean_ctor_get(v_b_2472_, 1);
v_auxDeclToFullName_2486_ = lean_ctor_get(v_b_2472_, 2);
v_isSharedCheck_2506_ = !lean_is_exclusive(v_b_2472_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2488_ = v_b_2472_;
v_isShared_2489_ = v_isSharedCheck_2506_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_auxDeclToFullName_2486_);
lean_inc(v_decls_2485_);
lean_inc(v_fvarIdToDecl_2484_);
lean_dec(v_b_2472_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2506_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v_decl_2490_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2502_; lean_object* v_fvarId_2505_; 
lean_inc_ref(v_f_2468_);
v_decl_2490_ = lean_apply_1(v_f_2468_, v_val_2480_);
v_fvarId_2505_ = lean_ctor_get(v_decl_2490_, 1);
lean_inc(v_fvarId_2505_);
v___y_2502_ = v_fvarId_2505_;
goto v___jp_2501_;
v___jp_2491_:
{
lean_object* v___x_2495_; 
if (v_isShared_2483_ == 0)
{
lean_ctor_set(v___x_2482_, 0, v_decl_2490_);
v___x_2495_ = v___x_2482_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_decl_2490_);
v___x_2495_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
lean_object* v___x_2496_; lean_object* v___x_2498_; 
v___x_2496_ = l_Lean_PersistentArray_set___redArg(v_decls_2485_, v___y_2493_, v___x_2495_);
lean_dec(v___y_2493_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 1, v___x_2496_);
lean_ctor_set(v___x_2488_, 0, v___y_2492_);
v___x_2498_ = v___x_2488_;
goto v_reusejp_2497_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v___y_2492_);
lean_ctor_set(v_reuseFailAlloc_2499_, 1, v___x_2496_);
lean_ctor_set(v_reuseFailAlloc_2499_, 2, v_auxDeclToFullName_2486_);
v___x_2498_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2497_;
}
v_reusejp_2497_:
{
v___y_2474_ = v___x_2498_;
goto v___jp_2473_;
}
}
}
v___jp_2501_:
{
lean_object* v___x_2503_; lean_object* v_index_2504_; 
lean_inc_ref(v_decl_2490_);
v___x_2503_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2484_, v___y_2502_, v_decl_2490_);
v_index_2504_ = lean_ctor_get(v_decl_2490_, 0);
lean_inc(v_index_2504_);
v___y_2492_ = v___x_2503_;
v___y_2493_ = v_index_2504_;
goto v___jp_2491_;
}
}
}
}
}
else
{
lean_dec_ref(v_f_2468_);
return v_b_2472_;
}
v___jp_2473_:
{
size_t v___x_2475_; size_t v___x_2476_; 
v___x_2475_ = ((size_t)1ULL);
v___x_2476_ = lean_usize_add(v_i_2470_, v___x_2475_);
v_i_2470_ = v___x_2476_;
v_b_2472_ = v___y_2474_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1___boxed(lean_object* v_f_2508_, lean_object* v_as_2509_, lean_object* v_i_2510_, lean_object* v_stop_2511_, lean_object* v_b_2512_){
_start:
{
size_t v_i_boxed_2513_; size_t v_stop_boxed_2514_; lean_object* v_res_2515_; 
v_i_boxed_2513_ = lean_unbox_usize(v_i_2510_);
lean_dec(v_i_2510_);
v_stop_boxed_2514_ = lean_unbox_usize(v_stop_2511_);
lean_dec(v_stop_2511_);
v_res_2515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2508_, v_as_2509_, v_i_boxed_2513_, v_stop_boxed_2514_, v_b_2512_);
lean_dec_ref(v_as_2509_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(lean_object* v_f_2516_, lean_object* v_x_2517_, lean_object* v_x_2518_){
_start:
{
if (lean_obj_tag(v_x_2517_) == 0)
{
lean_object* v_cs_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; uint8_t v___x_2522_; 
v_cs_2519_ = lean_ctor_get(v_x_2517_, 0);
v___x_2520_ = lean_unsigned_to_nat(0u);
v___x_2521_ = lean_array_get_size(v_cs_2519_);
v___x_2522_ = lean_nat_dec_lt(v___x_2520_, v___x_2521_);
if (v___x_2522_ == 0)
{
lean_dec_ref(v_f_2516_);
return v_x_2518_;
}
else
{
size_t v___x_2523_; size_t v___x_2524_; lean_object* v___x_2525_; 
v___x_2523_ = ((size_t)0ULL);
v___x_2524_ = lean_usize_of_nat(v___x_2521_);
v___x_2525_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(v_f_2516_, v_cs_2519_, v___x_2523_, v___x_2524_, v_x_2518_);
return v___x_2525_;
}
}
else
{
lean_object* v_vs_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; uint8_t v___x_2529_; 
v_vs_2526_ = lean_ctor_get(v_x_2517_, 0);
v___x_2527_ = lean_unsigned_to_nat(0u);
v___x_2528_ = lean_array_get_size(v_vs_2526_);
v___x_2529_ = lean_nat_dec_lt(v___x_2527_, v___x_2528_);
if (v___x_2529_ == 0)
{
lean_dec_ref(v_f_2516_);
return v_x_2518_;
}
else
{
size_t v___x_2530_; size_t v___x_2531_; lean_object* v___x_2532_; 
v___x_2530_ = ((size_t)0ULL);
v___x_2531_ = lean_usize_of_nat(v___x_2528_);
v___x_2532_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2516_, v_vs_2526_, v___x_2530_, v___x_2531_, v_x_2518_);
return v___x_2532_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(lean_object* v_f_2533_, lean_object* v_as_2534_, size_t v_i_2535_, size_t v_stop_2536_, lean_object* v_b_2537_){
_start:
{
uint8_t v___x_2538_; 
v___x_2538_ = lean_usize_dec_eq(v_i_2535_, v_stop_2536_);
if (v___x_2538_ == 0)
{
lean_object* v___x_2539_; lean_object* v___x_2540_; size_t v___x_2541_; size_t v___x_2542_; 
v___x_2539_ = lean_array_uget_borrowed(v_as_2534_, v_i_2535_);
lean_inc_ref(v_f_2533_);
v___x_2540_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(v_f_2533_, v___x_2539_, v_b_2537_);
v___x_2541_ = ((size_t)1ULL);
v___x_2542_ = lean_usize_add(v_i_2535_, v___x_2541_);
v_i_2535_ = v___x_2542_;
v_b_2537_ = v___x_2540_;
goto _start;
}
else
{
lean_dec_ref(v_f_2533_);
return v_b_2537_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1___boxed(lean_object* v_f_2544_, lean_object* v_as_2545_, lean_object* v_i_2546_, lean_object* v_stop_2547_, lean_object* v_b_2548_){
_start:
{
size_t v_i_boxed_2549_; size_t v_stop_boxed_2550_; lean_object* v_res_2551_; 
v_i_boxed_2549_ = lean_unbox_usize(v_i_2546_);
lean_dec(v_i_2546_);
v_stop_boxed_2550_ = lean_unbox_usize(v_stop_2547_);
lean_dec(v_stop_2547_);
v_res_2551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(v_f_2544_, v_as_2545_, v_i_boxed_2549_, v_stop_boxed_2550_, v_b_2548_);
lean_dec_ref(v_as_2545_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2___boxed(lean_object* v_f_2552_, lean_object* v_x_2553_, lean_object* v_x_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(v_f_2552_, v_x_2553_, v_x_2554_);
lean_dec_ref(v_x_2553_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(lean_object* v_f_2556_, lean_object* v_x_2557_, size_t v_x_2558_, size_t v_x_2559_, lean_object* v_x_2560_){
_start:
{
if (lean_obj_tag(v_x_2557_) == 0)
{
lean_object* v_cs_2561_; lean_object* v___x_2562_; size_t v___x_2563_; lean_object* v_j_2564_; lean_object* v___x_2565_; size_t v___x_2566_; size_t v___x_2567_; size_t v___x_2568_; size_t v___x_2569_; size_t v___x_2570_; size_t v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; uint8_t v___x_2576_; 
v_cs_2561_ = lean_ctor_get(v_x_2557_, 0);
v___x_2562_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0);
v___x_2563_ = lean_usize_shift_right(v_x_2558_, v_x_2559_);
v_j_2564_ = lean_usize_to_nat(v___x_2563_);
v___x_2565_ = lean_array_get_borrowed(v___x_2562_, v_cs_2561_, v_j_2564_);
v___x_2566_ = ((size_t)1ULL);
v___x_2567_ = lean_usize_shift_left(v___x_2566_, v_x_2559_);
v___x_2568_ = lean_usize_sub(v___x_2567_, v___x_2566_);
v___x_2569_ = lean_usize_land(v_x_2558_, v___x_2568_);
v___x_2570_ = ((size_t)5ULL);
v___x_2571_ = lean_usize_sub(v_x_2559_, v___x_2570_);
lean_inc_ref(v_f_2556_);
v___x_2572_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(v_f_2556_, v___x_2565_, v___x_2569_, v___x_2571_, v_x_2560_);
v___x_2573_ = lean_unsigned_to_nat(1u);
v___x_2574_ = lean_nat_add(v_j_2564_, v___x_2573_);
lean_dec(v_j_2564_);
v___x_2575_ = lean_array_get_size(v_cs_2561_);
v___x_2576_ = lean_nat_dec_lt(v___x_2574_, v___x_2575_);
if (v___x_2576_ == 0)
{
lean_dec(v___x_2574_);
lean_dec_ref(v_f_2556_);
return v___x_2572_;
}
else
{
size_t v___x_2577_; size_t v___x_2578_; lean_object* v___x_2579_; 
v___x_2577_ = lean_usize_of_nat(v___x_2574_);
lean_dec(v___x_2574_);
v___x_2578_ = lean_usize_of_nat(v___x_2575_);
v___x_2579_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0_spec__1(v_f_2556_, v_cs_2561_, v___x_2577_, v___x_2578_, v___x_2572_);
return v___x_2579_;
}
}
else
{
lean_object* v_vs_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; uint8_t v___x_2583_; 
v_vs_2580_ = lean_ctor_get(v_x_2557_, 0);
v___x_2581_ = lean_usize_to_nat(v_x_2558_);
v___x_2582_ = lean_array_get_size(v_vs_2580_);
v___x_2583_ = lean_nat_dec_lt(v___x_2581_, v___x_2582_);
if (v___x_2583_ == 0)
{
lean_dec(v___x_2581_);
lean_dec_ref(v_f_2556_);
return v_x_2560_;
}
else
{
size_t v___x_2584_; size_t v___x_2585_; lean_object* v___x_2586_; 
v___x_2584_ = lean_usize_of_nat(v___x_2581_);
lean_dec(v___x_2581_);
v___x_2585_ = lean_usize_of_nat(v___x_2582_);
v___x_2586_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2556_, v_vs_2580_, v___x_2584_, v___x_2585_, v_x_2560_);
return v___x_2586_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0___boxed(lean_object* v_f_2587_, lean_object* v_x_2588_, lean_object* v_x_2589_, lean_object* v_x_2590_, lean_object* v_x_2591_){
_start:
{
size_t v_x_1489__boxed_2592_; size_t v_x_1490__boxed_2593_; lean_object* v_res_2594_; 
v_x_1489__boxed_2592_ = lean_unbox_usize(v_x_2589_);
lean_dec(v_x_2589_);
v_x_1490__boxed_2593_ = lean_unbox_usize(v_x_2590_);
lean_dec(v_x_2590_);
v_res_2594_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(v_f_2587_, v_x_2588_, v_x_1489__boxed_2592_, v_x_1490__boxed_2593_, v_x_2591_);
lean_dec_ref(v_x_2588_);
return v_res_2594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0(lean_object* v_f_2595_, lean_object* v_t_2596_, lean_object* v_init_2597_, lean_object* v_start_2598_){
_start:
{
lean_object* v___x_2599_; uint8_t v___x_2600_; 
v___x_2599_ = lean_unsigned_to_nat(0u);
v___x_2600_ = lean_nat_dec_eq(v_start_2598_, v___x_2599_);
if (v___x_2600_ == 0)
{
lean_object* v_root_2601_; lean_object* v_tail_2602_; size_t v_shift_2603_; lean_object* v_tailOff_2604_; uint8_t v___x_2605_; 
v_root_2601_ = lean_ctor_get(v_t_2596_, 0);
v_tail_2602_ = lean_ctor_get(v_t_2596_, 1);
v_shift_2603_ = lean_ctor_get_usize(v_t_2596_, 4);
v_tailOff_2604_ = lean_ctor_get(v_t_2596_, 3);
v___x_2605_ = lean_nat_dec_le(v_tailOff_2604_, v_start_2598_);
if (v___x_2605_ == 0)
{
size_t v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; uint8_t v___x_2609_; 
v___x_2606_ = lean_usize_of_nat(v_start_2598_);
lean_inc_ref(v_f_2595_);
v___x_2607_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__0(v_f_2595_, v_root_2601_, v___x_2606_, v_shift_2603_, v_init_2597_);
v___x_2608_ = lean_array_get_size(v_tail_2602_);
v___x_2609_ = lean_nat_dec_lt(v___x_2599_, v___x_2608_);
if (v___x_2609_ == 0)
{
lean_dec_ref(v_f_2595_);
return v___x_2607_;
}
else
{
size_t v___x_2610_; size_t v___x_2611_; lean_object* v___x_2612_; 
v___x_2610_ = ((size_t)0ULL);
v___x_2611_ = lean_usize_of_nat(v___x_2608_);
v___x_2612_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2595_, v_tail_2602_, v___x_2610_, v___x_2611_, v___x_2607_);
return v___x_2612_;
}
}
else
{
lean_object* v___x_2613_; lean_object* v___x_2614_; uint8_t v___x_2615_; 
v___x_2613_ = lean_nat_sub(v_start_2598_, v_tailOff_2604_);
v___x_2614_ = lean_array_get_size(v_tail_2602_);
v___x_2615_ = lean_nat_dec_lt(v___x_2613_, v___x_2614_);
if (v___x_2615_ == 0)
{
lean_dec(v___x_2613_);
lean_dec_ref(v_f_2595_);
return v_init_2597_;
}
else
{
size_t v___x_2616_; size_t v___x_2617_; lean_object* v___x_2618_; 
v___x_2616_ = lean_usize_of_nat(v___x_2613_);
lean_dec(v___x_2613_);
v___x_2617_ = lean_usize_of_nat(v___x_2614_);
v___x_2618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2595_, v_tail_2602_, v___x_2616_, v___x_2617_, v_init_2597_);
return v___x_2618_;
}
}
}
else
{
lean_object* v_root_2619_; lean_object* v_tail_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; uint8_t v___x_2623_; 
v_root_2619_ = lean_ctor_get(v_t_2596_, 0);
v_tail_2620_ = lean_ctor_get(v_t_2596_, 1);
lean_inc_ref(v_f_2595_);
v___x_2621_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__2(v_f_2595_, v_root_2619_, v_init_2597_);
v___x_2622_ = lean_array_get_size(v_tail_2620_);
v___x_2623_ = lean_nat_dec_lt(v___x_2599_, v___x_2622_);
if (v___x_2623_ == 0)
{
lean_dec_ref(v_f_2595_);
return v___x_2621_;
}
else
{
size_t v___x_2624_; size_t v___x_2625_; lean_object* v___x_2626_; 
v___x_2624_ = ((size_t)0ULL);
v___x_2625_ = lean_usize_of_nat(v___x_2622_);
v___x_2626_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0_spec__1(v_f_2595_, v_tail_2620_, v___x_2624_, v___x_2625_, v___x_2621_);
return v___x_2626_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0___boxed(lean_object* v_f_2627_, lean_object* v_t_2628_, lean_object* v_init_2629_, lean_object* v_start_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0(v_f_2627_, v_t_2628_, v_init_2629_, v_start_2630_);
lean_dec(v_start_2630_);
lean_dec_ref(v_t_2628_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_modifyLocalDecls(lean_object* v_lctx_2632_, lean_object* v_f_2633_){
_start:
{
lean_object* v_decls_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v_decls_2634_ = lean_ctor_get(v_lctx_2632_, 1);
lean_inc_ref(v_decls_2634_);
v___x_2635_ = lean_unsigned_to_nat(0u);
v___x_2636_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_modifyLocalDecls_spec__0(v_f_2633_, v_decls_2634_, v_lctx_2632_, v___x_2635_);
lean_dec_ref(v_decls_2634_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setKind(lean_object* v_lctx_2637_, lean_object* v_fvarId_2638_, uint8_t v_kind_2639_){
_start:
{
lean_object* v_fvarIdToDecl_2640_; lean_object* v_decls_2641_; lean_object* v_auxDeclToFullName_2642_; lean_object* v___x_2643_; 
v_fvarIdToDecl_2640_ = lean_ctor_get(v_lctx_2637_, 0);
v_decls_2641_ = lean_ctor_get(v_lctx_2637_, 1);
v_auxDeclToFullName_2642_ = lean_ctor_get(v_lctx_2637_, 2);
lean_inc_ref(v_lctx_2637_);
v___x_2643_ = lean_local_ctx_find(v_lctx_2637_, v_fvarId_2638_);
if (lean_obj_tag(v___x_2643_) == 0)
{
return v_lctx_2637_;
}
else
{
lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2668_; 
lean_inc(v_auxDeclToFullName_2642_);
lean_inc_ref(v_decls_2641_);
lean_inc_ref(v_fvarIdToDecl_2640_);
v_isSharedCheck_2668_ = !lean_is_exclusive(v_lctx_2637_);
if (v_isSharedCheck_2668_ == 0)
{
lean_object* v_unused_2669_; lean_object* v_unused_2670_; lean_object* v_unused_2671_; 
v_unused_2669_ = lean_ctor_get(v_lctx_2637_, 2);
lean_dec(v_unused_2669_);
v_unused_2670_ = lean_ctor_get(v_lctx_2637_, 1);
lean_dec(v_unused_2670_);
v_unused_2671_ = lean_ctor_get(v_lctx_2637_, 0);
lean_dec(v_unused_2671_);
v___x_2645_ = v_lctx_2637_;
v_isShared_2646_ = v_isSharedCheck_2668_;
goto v_resetjp_2644_;
}
else
{
lean_dec(v_lctx_2637_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2668_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v_val_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2667_; 
v_val_2647_ = lean_ctor_get(v___x_2643_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2643_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2649_ = v___x_2643_;
v_isShared_2650_ = v_isSharedCheck_2667_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_val_2647_);
lean_dec(v___x_2643_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2667_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v_decl_2651_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v___y_2663_; lean_object* v_fvarId_2666_; 
v_decl_2651_ = l_Lean_LocalDecl_setKind(v_val_2647_, v_kind_2639_);
v_fvarId_2666_ = lean_ctor_get(v_decl_2651_, 1);
lean_inc(v_fvarId_2666_);
v___y_2663_ = v_fvarId_2666_;
goto v___jp_2662_;
v___jp_2652_:
{
lean_object* v___x_2656_; 
if (v_isShared_2650_ == 0)
{
lean_ctor_set(v___x_2649_, 0, v_decl_2651_);
v___x_2656_ = v___x_2649_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v_decl_2651_);
v___x_2656_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
lean_object* v___x_2657_; lean_object* v___x_2659_; 
v___x_2657_ = l_Lean_PersistentArray_set___redArg(v_decls_2641_, v___y_2654_, v___x_2656_);
lean_dec(v___y_2654_);
if (v_isShared_2646_ == 0)
{
lean_ctor_set(v___x_2645_, 1, v___x_2657_);
lean_ctor_set(v___x_2645_, 0, v___y_2653_);
v___x_2659_ = v___x_2645_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v___y_2653_);
lean_ctor_set(v_reuseFailAlloc_2660_, 1, v___x_2657_);
lean_ctor_set(v_reuseFailAlloc_2660_, 2, v_auxDeclToFullName_2642_);
v___x_2659_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
return v___x_2659_;
}
}
}
v___jp_2662_:
{
lean_object* v___x_2664_; lean_object* v_index_2665_; 
lean_inc_ref(v_decl_2651_);
v___x_2664_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2640_, v___y_2663_, v_decl_2651_);
v_index_2665_ = lean_ctor_get(v_decl_2651_, 0);
lean_inc(v_index_2665_);
v___y_2653_ = v___x_2664_;
v___y_2654_ = v_index_2665_;
goto v___jp_2652_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setKind___boxed(lean_object* v_lctx_2672_, lean_object* v_fvarId_2673_, lean_object* v_kind_2674_){
_start:
{
uint8_t v_kind_boxed_2675_; lean_object* v_res_2676_; 
v_kind_boxed_2675_ = lean_unbox(v_kind_2674_);
v_res_2676_ = l_Lean_LocalContext_setKind(v_lctx_2672_, v_fvarId_2673_, v_kind_boxed_2675_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setBinderInfo(lean_object* v_lctx_2677_, lean_object* v_fvarId_2678_, uint8_t v_bi_2679_){
_start:
{
lean_object* v_fvarIdToDecl_2680_; lean_object* v_decls_2681_; lean_object* v_auxDeclToFullName_2682_; lean_object* v___x_2683_; 
v_fvarIdToDecl_2680_ = lean_ctor_get(v_lctx_2677_, 0);
v_decls_2681_ = lean_ctor_get(v_lctx_2677_, 1);
v_auxDeclToFullName_2682_ = lean_ctor_get(v_lctx_2677_, 2);
lean_inc_ref(v_lctx_2677_);
v___x_2683_ = lean_local_ctx_find(v_lctx_2677_, v_fvarId_2678_);
if (lean_obj_tag(v___x_2683_) == 0)
{
return v_lctx_2677_;
}
else
{
lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2708_; 
lean_inc(v_auxDeclToFullName_2682_);
lean_inc_ref(v_decls_2681_);
lean_inc_ref(v_fvarIdToDecl_2680_);
v_isSharedCheck_2708_ = !lean_is_exclusive(v_lctx_2677_);
if (v_isSharedCheck_2708_ == 0)
{
lean_object* v_unused_2709_; lean_object* v_unused_2710_; lean_object* v_unused_2711_; 
v_unused_2709_ = lean_ctor_get(v_lctx_2677_, 2);
lean_dec(v_unused_2709_);
v_unused_2710_ = lean_ctor_get(v_lctx_2677_, 1);
lean_dec(v_unused_2710_);
v_unused_2711_ = lean_ctor_get(v_lctx_2677_, 0);
lean_dec(v_unused_2711_);
v___x_2685_ = v_lctx_2677_;
v_isShared_2686_ = v_isSharedCheck_2708_;
goto v_resetjp_2684_;
}
else
{
lean_dec(v_lctx_2677_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2708_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v_val_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2707_; 
v_val_2687_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2689_ = v___x_2683_;
v_isShared_2690_ = v_isSharedCheck_2707_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_val_2687_);
lean_dec(v___x_2683_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2707_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v_decl_2691_; lean_object* v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2703_; lean_object* v_fvarId_2706_; 
v_decl_2691_ = l_Lean_LocalDecl_setBinderInfo(v_val_2687_, v_bi_2679_);
v_fvarId_2706_ = lean_ctor_get(v_decl_2691_, 1);
lean_inc(v_fvarId_2706_);
v___y_2703_ = v_fvarId_2706_;
goto v___jp_2702_;
v___jp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2690_ == 0)
{
lean_ctor_set(v___x_2689_, 0, v_decl_2691_);
v___x_2696_ = v___x_2689_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_decl_2691_);
v___x_2696_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
lean_object* v___x_2697_; lean_object* v___x_2699_; 
v___x_2697_ = l_Lean_PersistentArray_set___redArg(v_decls_2681_, v___y_2694_, v___x_2696_);
lean_dec(v___y_2694_);
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 1, v___x_2697_);
lean_ctor_set(v___x_2685_, 0, v___y_2693_);
v___x_2699_ = v___x_2685_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___y_2693_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v___x_2697_);
lean_ctor_set(v_reuseFailAlloc_2700_, 2, v_auxDeclToFullName_2682_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
v___jp_2702_:
{
lean_object* v___x_2704_; lean_object* v_index_2705_; 
lean_inc_ref(v_decl_2691_);
v___x_2704_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2680_, v___y_2703_, v_decl_2691_);
v_index_2705_ = lean_ctor_get(v_decl_2691_, 0);
lean_inc(v_index_2705_);
v___y_2693_ = v___x_2704_;
v___y_2694_ = v_index_2705_;
goto v___jp_2692_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setBinderInfo___boxed(lean_object* v_lctx_2712_, lean_object* v_fvarId_2713_, lean_object* v_bi_2714_){
_start:
{
uint8_t v_bi_boxed_2715_; lean_object* v_res_2716_; 
v_bi_boxed_2715_ = lean_unbox(v_bi_2714_);
v_res_2716_ = l_Lean_LocalContext_setBinderInfo(v_lctx_2712_, v_fvarId_2713_, v_bi_boxed_2715_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_setType(lean_object* v_lctx_2717_, lean_object* v_fvarId_2718_, lean_object* v_type_2719_){
_start:
{
lean_object* v_fvarIdToDecl_2720_; lean_object* v_decls_2721_; lean_object* v_auxDeclToFullName_2722_; lean_object* v___x_2723_; 
v_fvarIdToDecl_2720_ = lean_ctor_get(v_lctx_2717_, 0);
v_decls_2721_ = lean_ctor_get(v_lctx_2717_, 1);
v_auxDeclToFullName_2722_ = lean_ctor_get(v_lctx_2717_, 2);
lean_inc_ref(v_lctx_2717_);
v___x_2723_ = lean_local_ctx_find(v_lctx_2717_, v_fvarId_2718_);
if (lean_obj_tag(v___x_2723_) == 0)
{
lean_dec_ref(v_type_2719_);
return v_lctx_2717_;
}
else
{
lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2748_; 
lean_inc(v_auxDeclToFullName_2722_);
lean_inc_ref(v_decls_2721_);
lean_inc_ref(v_fvarIdToDecl_2720_);
v_isSharedCheck_2748_ = !lean_is_exclusive(v_lctx_2717_);
if (v_isSharedCheck_2748_ == 0)
{
lean_object* v_unused_2749_; lean_object* v_unused_2750_; lean_object* v_unused_2751_; 
v_unused_2749_ = lean_ctor_get(v_lctx_2717_, 2);
lean_dec(v_unused_2749_);
v_unused_2750_ = lean_ctor_get(v_lctx_2717_, 1);
lean_dec(v_unused_2750_);
v_unused_2751_ = lean_ctor_get(v_lctx_2717_, 0);
lean_dec(v_unused_2751_);
v___x_2725_ = v_lctx_2717_;
v_isShared_2726_ = v_isSharedCheck_2748_;
goto v_resetjp_2724_;
}
else
{
lean_dec(v_lctx_2717_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2748_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v_val_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2747_; 
v_val_2727_ = lean_ctor_get(v___x_2723_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2723_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2729_ = v___x_2723_;
v_isShared_2730_ = v_isSharedCheck_2747_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_val_2727_);
lean_dec(v___x_2723_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2747_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v_decl_2731_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2743_; lean_object* v_fvarId_2746_; 
v_decl_2731_ = l_Lean_LocalDecl_setType(v_val_2727_, v_type_2719_);
v_fvarId_2746_ = lean_ctor_get(v_decl_2731_, 1);
lean_inc(v_fvarId_2746_);
v___y_2743_ = v_fvarId_2746_;
goto v___jp_2742_;
v___jp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2730_ == 0)
{
lean_ctor_set(v___x_2729_, 0, v_decl_2731_);
v___x_2736_ = v___x_2729_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_decl_2731_);
v___x_2736_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
lean_object* v___x_2737_; lean_object* v___x_2739_; 
v___x_2737_ = l_Lean_PersistentArray_set___redArg(v_decls_2721_, v___y_2734_, v___x_2736_);
lean_dec(v___y_2734_);
if (v_isShared_2726_ == 0)
{
lean_ctor_set(v___x_2725_, 1, v___x_2737_);
lean_ctor_set(v___x_2725_, 0, v___y_2733_);
v___x_2739_ = v___x_2725_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v___y_2733_);
lean_ctor_set(v_reuseFailAlloc_2740_, 1, v___x_2737_);
lean_ctor_set(v_reuseFailAlloc_2740_, 2, v_auxDeclToFullName_2722_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
v___jp_2742_:
{
lean_object* v___x_2744_; lean_object* v_index_2745_; 
lean_inc_ref(v_decl_2731_);
v___x_2744_ = l_Lean_PersistentHashMap_insert___at___00Lean_LocalContext_mkLocalDecl_spec__0___redArg(v_fvarIdToDecl_2720_, v___y_2743_, v_decl_2731_);
v_index_2745_ = lean_ctor_get(v_decl_2731_, 0);
lean_inc(v_index_2745_);
v___y_2733_ = v___x_2744_;
v___y_2734_ = v_index_2745_;
goto v___jp_2732_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lean_local_ctx_num_indices(lean_object* v_lctx_2752_){
_start:
{
lean_object* v_decls_2753_; lean_object* v_size_2754_; 
v_decls_2753_ = lean_ctor_get(v_lctx_2752_, 1);
lean_inc_ref(v_decls_2753_);
lean_dec_ref(v_lctx_2752_);
v_size_2754_ = lean_ctor_get(v_decls_2753_, 2);
lean_inc(v_size_2754_);
lean_dec_ref(v_decls_2753_);
return v_size_2754_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getAt_x3f(lean_object* v_lctx_2755_, lean_object* v_i_2756_){
_start:
{
lean_object* v_decls_2757_; lean_object* v_size_2758_; lean_object* v___x_2759_; uint8_t v___x_2760_; 
v_decls_2757_ = lean_ctor_get(v_lctx_2755_, 1);
v_size_2758_ = lean_ctor_get(v_decls_2757_, 2);
v___x_2759_ = lean_box(0);
v___x_2760_ = lean_nat_dec_lt(v_i_2756_, v_size_2758_);
if (v___x_2760_ == 0)
{
lean_object* v___x_2761_; 
v___x_2761_ = l_outOfBounds___redArg(v___x_2759_);
return v___x_2761_;
}
else
{
lean_object* v___x_2762_; 
v___x_2762_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2759_, v_decls_2757_, v_i_2756_);
return v___x_2762_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getAt_x3f___boxed(lean_object* v_lctx_2763_, lean_object* v_i_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Lean_LocalContext_getAt_x3f(v_lctx_2763_, v_i_2764_);
lean_dec(v_i_2764_);
lean_dec_ref(v_lctx_2763_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg___lam__0(lean_object* v_toPure_2766_, lean_object* v_f_2767_, lean_object* v_b_2768_, lean_object* v_decl_2769_){
_start:
{
if (lean_obj_tag(v_decl_2769_) == 0)
{
lean_object* v___x_2770_; 
lean_dec(v_f_2767_);
v___x_2770_ = lean_apply_2(v_toPure_2766_, lean_box(0), v_b_2768_);
return v___x_2770_;
}
else
{
lean_object* v_val_2771_; lean_object* v___x_2772_; 
lean_dec(v_toPure_2766_);
v_val_2771_ = lean_ctor_get(v_decl_2769_, 0);
lean_inc(v_val_2771_);
lean_dec_ref_known(v_decl_2769_, 1);
v___x_2772_ = lean_apply_2(v_f_2767_, v_b_2768_, v_val_2771_);
return v___x_2772_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg(lean_object* v_inst_2773_, lean_object* v_lctx_2774_, lean_object* v_f_2775_, lean_object* v_init_2776_, lean_object* v_start_2777_){
_start:
{
lean_object* v_toApplicative_2778_; lean_object* v_decls_2779_; lean_object* v_toPure_2780_; lean_object* v___f_2781_; lean_object* v___x_2782_; 
v_toApplicative_2778_ = lean_ctor_get(v_inst_2773_, 0);
v_decls_2779_ = lean_ctor_get(v_lctx_2774_, 1);
lean_inc_ref(v_decls_2779_);
lean_dec_ref(v_lctx_2774_);
v_toPure_2780_ = lean_ctor_get(v_toApplicative_2778_, 1);
lean_inc(v_toPure_2780_);
v___f_2781_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2781_, 0, v_toPure_2780_);
lean_closure_set(v___f_2781_, 1, v_f_2775_);
v___x_2782_ = l_Lean_PersistentArray_foldlM___redArg(v_inst_2773_, v_decls_2779_, v___f_2781_, v_init_2776_, v_start_2777_);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___redArg___boxed(lean_object* v_inst_2783_, lean_object* v_lctx_2784_, lean_object* v_f_2785_, lean_object* v_init_2786_, lean_object* v_start_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l_Lean_LocalContext_foldlM___redArg(v_inst_2783_, v_lctx_2784_, v_f_2785_, v_init_2786_, v_start_2787_);
lean_dec(v_start_2787_);
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM(lean_object* v_m_2789_, lean_object* v_00_u03b2_2790_, lean_object* v_inst_2791_, lean_object* v_lctx_2792_, lean_object* v_f_2793_, lean_object* v_init_2794_, lean_object* v_start_2795_){
_start:
{
lean_object* v___x_2796_; 
v___x_2796_ = l_Lean_LocalContext_foldlM___redArg(v_inst_2791_, v_lctx_2792_, v_f_2793_, v_init_2794_, v_start_2795_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___boxed(lean_object* v_m_2797_, lean_object* v_00_u03b2_2798_, lean_object* v_inst_2799_, lean_object* v_lctx_2800_, lean_object* v_f_2801_, lean_object* v_init_2802_, lean_object* v_start_2803_){
_start:
{
lean_object* v_res_2804_; 
v_res_2804_ = l_Lean_LocalContext_foldlM(v_m_2797_, v_00_u03b2_2798_, v_inst_2799_, v_lctx_2800_, v_f_2801_, v_init_2802_, v_start_2803_);
lean_dec(v_start_2803_);
return v_res_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___redArg___lam__0(lean_object* v_toPure_2805_, lean_object* v_f_2806_, lean_object* v_decl_2807_, lean_object* v_b_2808_){
_start:
{
if (lean_obj_tag(v_decl_2807_) == 0)
{
lean_object* v___x_2809_; 
lean_dec(v_f_2806_);
v___x_2809_ = lean_apply_2(v_toPure_2805_, lean_box(0), v_b_2808_);
return v___x_2809_;
}
else
{
lean_object* v_val_2810_; lean_object* v___x_2811_; 
lean_dec(v_toPure_2805_);
v_val_2810_ = lean_ctor_get(v_decl_2807_, 0);
lean_inc(v_val_2810_);
lean_dec_ref_known(v_decl_2807_, 1);
v___x_2811_ = lean_apply_2(v_f_2806_, v_val_2810_, v_b_2808_);
return v___x_2811_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___redArg(lean_object* v_inst_2812_, lean_object* v_lctx_2813_, lean_object* v_f_2814_, lean_object* v_init_2815_){
_start:
{
lean_object* v_toApplicative_2816_; lean_object* v_decls_2817_; lean_object* v_toPure_2818_; lean_object* v___f_2819_; lean_object* v___x_2820_; 
v_toApplicative_2816_ = lean_ctor_get(v_inst_2812_, 0);
v_decls_2817_ = lean_ctor_get(v_lctx_2813_, 1);
lean_inc_ref(v_decls_2817_);
lean_dec_ref(v_lctx_2813_);
v_toPure_2818_ = lean_ctor_get(v_toApplicative_2816_, 1);
lean_inc(v_toPure_2818_);
v___f_2819_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldrM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2819_, 0, v_toPure_2818_);
lean_closure_set(v___f_2819_, 1, v_f_2814_);
v___x_2820_ = l_Lean_PersistentArray_foldrM___redArg(v_inst_2812_, v_decls_2817_, v___f_2819_, v_init_2815_);
return v___x_2820_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM(lean_object* v_m_2821_, lean_object* v_00_u03b2_2822_, lean_object* v_inst_2823_, lean_object* v_lctx_2824_, lean_object* v_f_2825_, lean_object* v_init_2826_){
_start:
{
lean_object* v___x_2827_; 
v___x_2827_ = l_Lean_LocalContext_foldrM___redArg(v_inst_2823_, v_lctx_2824_, v_f_2825_, v_init_2826_);
return v___x_2827_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg___lam__0(lean_object* v_toPure_2828_, lean_object* v_f_2829_, lean_object* v_decl_2830_){
_start:
{
if (lean_obj_tag(v_decl_2830_) == 0)
{
lean_object* v___x_2831_; lean_object* v___x_2832_; 
lean_dec(v_f_2829_);
v___x_2831_ = lean_box(0);
v___x_2832_ = lean_apply_2(v_toPure_2828_, lean_box(0), v___x_2831_);
return v___x_2832_;
}
else
{
lean_object* v_val_2833_; lean_object* v___x_2834_; 
lean_dec(v_toPure_2828_);
v_val_2833_ = lean_ctor_get(v_decl_2830_, 0);
lean_inc(v_val_2833_);
lean_dec_ref_known(v_decl_2830_, 1);
v___x_2834_ = lean_apply_1(v_f_2829_, v_val_2833_);
return v___x_2834_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg(lean_object* v_inst_2835_, lean_object* v_lctx_2836_, lean_object* v_f_2837_, lean_object* v_start_2838_){
_start:
{
lean_object* v_toApplicative_2839_; lean_object* v_decls_2840_; lean_object* v_toPure_2841_; lean_object* v___f_2842_; lean_object* v___x_2843_; 
v_toApplicative_2839_ = lean_ctor_get(v_inst_2835_, 0);
v_decls_2840_ = lean_ctor_get(v_lctx_2836_, 1);
lean_inc_ref(v_decls_2840_);
lean_dec_ref(v_lctx_2836_);
v_toPure_2841_ = lean_ctor_get(v_toApplicative_2839_, 1);
lean_inc(v_toPure_2841_);
v___f_2842_ = lean_alloc_closure((void*)(l_Lean_LocalContext_forM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2842_, 0, v_toPure_2841_);
lean_closure_set(v___f_2842_, 1, v_f_2837_);
v___x_2843_ = l_Lean_PersistentArray_forM___redArg(v_inst_2835_, v_decls_2840_, v___f_2842_, v_start_2838_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___redArg___boxed(lean_object* v_inst_2844_, lean_object* v_lctx_2845_, lean_object* v_f_2846_, lean_object* v_start_2847_){
_start:
{
lean_object* v_res_2848_; 
v_res_2848_ = l_Lean_LocalContext_forM___redArg(v_inst_2844_, v_lctx_2845_, v_f_2846_, v_start_2847_);
lean_dec(v_start_2847_);
return v_res_2848_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM(lean_object* v_m_2849_, lean_object* v_inst_2850_, lean_object* v_lctx_2851_, lean_object* v_f_2852_, lean_object* v_start_2853_){
_start:
{
lean_object* v___x_2854_; 
v___x_2854_ = l_Lean_LocalContext_forM___redArg(v_inst_2850_, v_lctx_2851_, v_f_2852_, v_start_2853_);
return v___x_2854_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___boxed(lean_object* v_m_2855_, lean_object* v_inst_2856_, lean_object* v_lctx_2857_, lean_object* v_f_2858_, lean_object* v_start_2859_){
_start:
{
lean_object* v_res_2860_; 
v_res_2860_ = l_Lean_LocalContext_forM(v_m_2855_, v_inst_2856_, v_lctx_2857_, v_f_2858_, v_start_2859_);
lean_dec(v_start_2859_);
return v_res_2860_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___redArg___lam__0(lean_object* v_toPure_2861_, lean_object* v_f_2862_, lean_object* v_decl_2863_){
_start:
{
if (lean_obj_tag(v_decl_2863_) == 0)
{
lean_object* v___x_2864_; lean_object* v___x_2865_; 
lean_dec(v_f_2862_);
v___x_2864_ = lean_box(0);
v___x_2865_ = lean_apply_2(v_toPure_2861_, lean_box(0), v___x_2864_);
return v___x_2865_;
}
else
{
lean_object* v_val_2866_; lean_object* v___x_2867_; 
lean_dec(v_toPure_2861_);
v_val_2866_ = lean_ctor_get(v_decl_2863_, 0);
lean_inc(v_val_2866_);
lean_dec_ref_known(v_decl_2863_, 1);
v___x_2867_ = lean_apply_1(v_f_2862_, v_val_2866_);
return v___x_2867_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___redArg(lean_object* v_inst_2868_, lean_object* v_lctx_2869_, lean_object* v_f_2870_){
_start:
{
lean_object* v_toApplicative_2871_; lean_object* v_decls_2872_; lean_object* v_toPure_2873_; lean_object* v___f_2874_; lean_object* v___x_2875_; 
v_toApplicative_2871_ = lean_ctor_get(v_inst_2868_, 0);
v_decls_2872_ = lean_ctor_get(v_lctx_2869_, 1);
lean_inc_ref(v_decls_2872_);
lean_dec_ref(v_lctx_2869_);
v_toPure_2873_ = lean_ctor_get(v_toApplicative_2871_, 1);
lean_inc(v_toPure_2873_);
v___f_2874_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDeclM_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2874_, 0, v_toPure_2873_);
lean_closure_set(v___f_2874_, 1, v_f_2870_);
v___x_2875_ = l_Lean_PersistentArray_findSomeM_x3f___redArg(v_inst_2868_, v_decls_2872_, v___f_2874_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f(lean_object* v_m_2876_, lean_object* v_00_u03b2_2877_, lean_object* v_inst_2878_, lean_object* v_lctx_2879_, lean_object* v_f_2880_){
_start:
{
lean_object* v___x_2881_; 
v___x_2881_ = l_Lean_LocalContext_findDeclM_x3f___redArg(v_inst_2878_, v_lctx_2879_, v_f_2880_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___redArg(lean_object* v_inst_2882_, lean_object* v_lctx_2883_, lean_object* v_f_2884_){
_start:
{
lean_object* v_toApplicative_2885_; lean_object* v_decls_2886_; lean_object* v_toPure_2887_; lean_object* v___f_2888_; lean_object* v___x_2889_; 
v_toApplicative_2885_ = lean_ctor_get(v_inst_2882_, 0);
v_decls_2886_ = lean_ctor_get(v_lctx_2883_, 1);
lean_inc_ref(v_decls_2886_);
lean_dec_ref(v_lctx_2883_);
v_toPure_2887_ = lean_ctor_get(v_toApplicative_2885_, 1);
lean_inc(v_toPure_2887_);
v___f_2888_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDeclM_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2888_, 0, v_toPure_2887_);
lean_closure_set(v___f_2888_, 1, v_f_2884_);
v___x_2889_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v_inst_2882_, v_decls_2886_, v___f_2888_);
return v___x_2889_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f(lean_object* v_m_2890_, lean_object* v_00_u03b2_2891_, lean_object* v_inst_2892_, lean_object* v_lctx_2893_, lean_object* v_f_2894_){
_start:
{
lean_object* v___x_2895_; 
v___x_2895_ = l_Lean_LocalContext_findDeclRevM_x3f___redArg(v_inst_2892_, v_lctx_2893_, v_f_2894_);
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__0(lean_object* v_toPure_2896_, lean_object* v_f_2897_, lean_object* v_d_x3f_2898_, lean_object* v_b_2899_){
_start:
{
if (lean_obj_tag(v_d_x3f_2898_) == 0)
{
lean_object* v___x_2900_; lean_object* v___x_2901_; 
lean_dec(v_f_2897_);
v___x_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2900_, 0, v_b_2899_);
v___x_2901_ = lean_apply_2(v_toPure_2896_, lean_box(0), v___x_2900_);
return v___x_2901_;
}
else
{
lean_object* v_val_2902_; lean_object* v___x_2903_; 
lean_dec(v_toPure_2896_);
v_val_2902_ = lean_ctor_get(v_d_x3f_2898_, 0);
lean_inc(v_val_2902_);
lean_dec_ref_known(v_d_x3f_2898_, 1);
v___x_2903_ = lean_apply_2(v_f_2897_, v_val_2902_, v_b_2899_);
return v___x_2903_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1(lean_object* v_toPure_2904_, lean_object* v_inst_2905_, lean_object* v_00_u03b2_2906_, lean_object* v_lctx_2907_, lean_object* v_init_2908_, lean_object* v_f_2909_){
_start:
{
lean_object* v_decls_2910_; lean_object* v___f_2911_; lean_object* v___x_2912_; 
v_decls_2910_ = lean_ctor_get(v_lctx_2907_, 1);
v___f_2911_ = lean_alloc_closure((void*)(l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__0), 4, 2);
lean_closure_set(v___f_2911_, 0, v_toPure_2904_);
lean_closure_set(v___f_2911_, 1, v_f_2909_);
v___x_2912_ = l_Lean_PersistentArray_forIn___redArg(v_inst_2905_, v_decls_2910_, v_init_2908_, v___f_2911_);
return v___x_2912_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1___boxed(lean_object* v_toPure_2913_, lean_object* v_inst_2914_, lean_object* v_00_u03b2_2915_, lean_object* v_lctx_2916_, lean_object* v_init_2917_, lean_object* v_f_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1(v_toPure_2913_, v_inst_2914_, v_00_u03b2_2915_, v_lctx_2916_, v_init_2917_, v_f_2918_);
lean_dec_ref(v_lctx_2916_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg(lean_object* v_inst_2920_){
_start:
{
lean_object* v_toApplicative_2921_; lean_object* v_toPure_2922_; lean_object* v___f_2923_; 
v_toApplicative_2921_ = lean_ctor_get(v_inst_2920_, 0);
v_toPure_2922_ = lean_ctor_get(v_toApplicative_2921_, 1);
lean_inc(v_toPure_2922_);
v___f_2923_ = lean_alloc_closure((void*)(l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg___lam__1___boxed), 6, 2);
lean_closure_set(v___f_2923_, 0, v_toPure_2922_);
lean_closure_set(v___f_2923_, 1, v_inst_2920_);
return v___f_2923_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_instForInLocalDeclOfMonad(lean_object* v_m_2924_, lean_object* v_inst_2925_){
_start:
{
lean_object* v___x_2926_; 
v___x_2926_ = l_Lean_LocalContext_instForInLocalDeclOfMonad___redArg(v_inst_2925_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg___lam__0(lean_object* v_f_2927_, lean_object* v_x1_2928_, lean_object* v_x2_2929_){
_start:
{
lean_object* v___x_2930_; 
v___x_2930_ = lean_apply_2(v_f_2927_, v_x1_2928_, v_x2_2929_);
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg(lean_object* v_lctx_2950_, lean_object* v_f_2951_, lean_object* v_init_2952_, lean_object* v_start_2953_){
_start:
{
lean_object* v___f_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; 
v___f_2954_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2954_, 0, v_f_2951_);
v___x_2955_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2956_ = l_Lean_LocalContext_foldlM___redArg(v___x_2955_, v_lctx_2950_, v___f_2954_, v_init_2952_, v_start_2953_);
return v___x_2956_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___redArg___boxed(lean_object* v_lctx_2957_, lean_object* v_f_2958_, lean_object* v_init_2959_, lean_object* v_start_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Lean_LocalContext_foldl___redArg(v_lctx_2957_, v_f_2958_, v_init_2959_, v_start_2960_);
lean_dec(v_start_2960_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl(lean_object* v_00_u03b2_2962_, lean_object* v_lctx_2963_, lean_object* v_f_2964_, lean_object* v_init_2965_, lean_object* v_start_2966_){
_start:
{
lean_object* v___f_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
v___f_2967_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2967_, 0, v_f_2964_);
v___x_2968_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2969_ = l_Lean_LocalContext_foldlM___redArg(v___x_2968_, v_lctx_2963_, v___f_2967_, v_init_2965_, v_start_2966_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldl___boxed(lean_object* v_00_u03b2_2970_, lean_object* v_lctx_2971_, lean_object* v_f_2972_, lean_object* v_init_2973_, lean_object* v_start_2974_){
_start:
{
lean_object* v_res_2975_; 
v_res_2975_ = l_Lean_LocalContext_foldl(v_00_u03b2_2970_, v_lctx_2971_, v_f_2972_, v_init_2973_, v_start_2974_);
lean_dec(v_start_2974_);
return v_res_2975_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr___redArg___lam__0(lean_object* v_f_2976_, lean_object* v_x1_2977_, lean_object* v_x2_2978_){
_start:
{
lean_object* v___x_2979_; 
v___x_2979_ = lean_apply_2(v_f_2976_, v_x1_2977_, v_x2_2978_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr___redArg(lean_object* v_lctx_2980_, lean_object* v_f_2981_, lean_object* v_init_2982_){
_start:
{
lean_object* v___f_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___f_2983_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2983_, 0, v_f_2981_);
v___x_2984_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2985_ = l_Lean_LocalContext_foldrM___redArg(v___x_2984_, v_lctx_2980_, v___f_2983_, v_init_2982_);
return v___x_2985_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldr(lean_object* v_00_u03b2_2986_, lean_object* v_lctx_2987_, lean_object* v_f_2988_, lean_object* v_init_2989_){
_start:
{
lean_object* v___f_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___f_2990_ = lean_alloc_closure((void*)(l_Lean_LocalContext_foldr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2990_, 0, v_f_2988_);
v___x_2991_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_2992_ = l_Lean_LocalContext_foldrM___redArg(v___x_2991_, v_lctx_2987_, v___f_2990_, v_init_2989_);
return v___x_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(lean_object* v_as_2993_, size_t v_i_2994_, size_t v_stop_2995_, lean_object* v_b_2996_){
_start:
{
lean_object* v___y_2998_; uint8_t v___x_3002_; 
v___x_3002_ = lean_usize_dec_eq(v_i_2994_, v_stop_2995_);
if (v___x_3002_ == 0)
{
lean_object* v___x_3003_; 
v___x_3003_ = lean_array_uget_borrowed(v_as_2993_, v_i_2994_);
if (lean_obj_tag(v___x_3003_) == 0)
{
v___y_2998_ = v_b_2996_;
goto v___jp_2997_;
}
else
{
lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_3004_ = lean_unsigned_to_nat(1u);
v___x_3005_ = lean_nat_add(v_b_2996_, v___x_3004_);
lean_dec(v_b_2996_);
v___y_2998_ = v___x_3005_;
goto v___jp_2997_;
}
}
else
{
return v_b_2996_;
}
v___jp_2997_:
{
size_t v___x_2999_; size_t v___x_3000_; 
v___x_2999_ = ((size_t)1ULL);
v___x_3000_ = lean_usize_add(v_i_2994_, v___x_2999_);
v_i_2994_ = v___x_3000_;
v_b_2996_ = v___y_2998_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2___boxed(lean_object* v_as_3006_, lean_object* v_i_3007_, lean_object* v_stop_3008_, lean_object* v_b_3009_){
_start:
{
size_t v_i_boxed_3010_; size_t v_stop_boxed_3011_; lean_object* v_res_3012_; 
v_i_boxed_3010_ = lean_unbox_usize(v_i_3007_);
lean_dec(v_i_3007_);
v_stop_boxed_3011_ = lean_unbox_usize(v_stop_3008_);
lean_dec(v_stop_3008_);
v_res_3012_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_as_3006_, v_i_boxed_3010_, v_stop_boxed_3011_, v_b_3009_);
lean_dec_ref(v_as_3006_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(lean_object* v_x_3013_, lean_object* v_x_3014_){
_start:
{
if (lean_obj_tag(v_x_3013_) == 0)
{
lean_object* v_cs_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; uint8_t v___x_3018_; 
v_cs_3015_ = lean_ctor_get(v_x_3013_, 0);
v___x_3016_ = lean_unsigned_to_nat(0u);
v___x_3017_ = lean_array_get_size(v_cs_3015_);
v___x_3018_ = lean_nat_dec_lt(v___x_3016_, v___x_3017_);
if (v___x_3018_ == 0)
{
return v_x_3014_;
}
else
{
size_t v___x_3019_; size_t v___x_3020_; lean_object* v___x_3021_; 
v___x_3019_ = ((size_t)0ULL);
v___x_3020_ = lean_usize_of_nat(v___x_3017_);
v___x_3021_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(v_cs_3015_, v___x_3019_, v___x_3020_, v_x_3014_);
return v___x_3021_;
}
}
else
{
lean_object* v_vs_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; uint8_t v___x_3025_; 
v_vs_3022_ = lean_ctor_get(v_x_3013_, 0);
v___x_3023_ = lean_unsigned_to_nat(0u);
v___x_3024_ = lean_array_get_size(v_vs_3022_);
v___x_3025_ = lean_nat_dec_lt(v___x_3023_, v___x_3024_);
if (v___x_3025_ == 0)
{
return v_x_3014_;
}
else
{
size_t v___x_3026_; size_t v___x_3027_; lean_object* v___x_3028_; 
v___x_3026_ = ((size_t)0ULL);
v___x_3027_ = lean_usize_of_nat(v___x_3024_);
v___x_3028_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_vs_3022_, v___x_3026_, v___x_3027_, v_x_3014_);
return v___x_3028_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(lean_object* v_as_3029_, size_t v_i_3030_, size_t v_stop_3031_, lean_object* v_b_3032_){
_start:
{
uint8_t v___x_3033_; 
v___x_3033_ = lean_usize_dec_eq(v_i_3030_, v_stop_3031_);
if (v___x_3033_ == 0)
{
lean_object* v___x_3034_; lean_object* v___x_3035_; size_t v___x_3036_; size_t v___x_3037_; 
v___x_3034_ = lean_array_uget_borrowed(v_as_3029_, v_i_3030_);
v___x_3035_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(v___x_3034_, v_b_3032_);
v___x_3036_ = ((size_t)1ULL);
v___x_3037_ = lean_usize_add(v_i_3030_, v___x_3036_);
v_i_3030_ = v___x_3037_;
v_b_3032_ = v___x_3035_;
goto _start;
}
else
{
return v_b_3032_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_as_3039_, lean_object* v_i_3040_, lean_object* v_stop_3041_, lean_object* v_b_3042_){
_start:
{
size_t v_i_boxed_3043_; size_t v_stop_boxed_3044_; lean_object* v_res_3045_; 
v_i_boxed_3043_ = lean_unbox_usize(v_i_3040_);
lean_dec(v_i_3040_);
v_stop_boxed_3044_ = lean_unbox_usize(v_stop_3041_);
lean_dec(v_stop_3041_);
v_res_3045_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(v_as_3039_, v_i_boxed_3043_, v_stop_boxed_3044_, v_b_3042_);
lean_dec_ref(v_as_3039_);
return v_res_3045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3___boxed(lean_object* v_x_3046_, lean_object* v_x_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(v_x_3046_, v_x_3047_);
lean_dec_ref(v_x_3046_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(lean_object* v_x_3049_, size_t v_x_3050_, size_t v_x_3051_, lean_object* v_x_3052_){
_start:
{
if (lean_obj_tag(v_x_3049_) == 0)
{
lean_object* v_cs_3053_; lean_object* v___x_3054_; size_t v___x_3055_; lean_object* v_j_3056_; lean_object* v___x_3057_; size_t v___x_3058_; size_t v___x_3059_; size_t v___x_3060_; size_t v___x_3061_; size_t v___x_3062_; size_t v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; uint8_t v___x_3068_; 
v_cs_3053_ = lean_ctor_get(v_x_3049_, 0);
v___x_3054_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_getFVarIds_spec__0_spec__0___closed__0);
v___x_3055_ = lean_usize_shift_right(v_x_3050_, v_x_3051_);
v_j_3056_ = lean_usize_to_nat(v___x_3055_);
v___x_3057_ = lean_array_get_borrowed(v___x_3054_, v_cs_3053_, v_j_3056_);
v___x_3058_ = ((size_t)1ULL);
v___x_3059_ = lean_usize_shift_left(v___x_3058_, v_x_3051_);
v___x_3060_ = lean_usize_sub(v___x_3059_, v___x_3058_);
v___x_3061_ = lean_usize_land(v_x_3050_, v___x_3060_);
v___x_3062_ = ((size_t)5ULL);
v___x_3063_ = lean_usize_sub(v_x_3051_, v___x_3062_);
v___x_3064_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(v___x_3057_, v___x_3061_, v___x_3063_, v_x_3052_);
v___x_3065_ = lean_unsigned_to_nat(1u);
v___x_3066_ = lean_nat_add(v_j_3056_, v___x_3065_);
lean_dec(v_j_3056_);
v___x_3067_ = lean_array_get_size(v_cs_3053_);
v___x_3068_ = lean_nat_dec_lt(v___x_3066_, v___x_3067_);
if (v___x_3068_ == 0)
{
lean_dec(v___x_3066_);
return v___x_3064_;
}
else
{
size_t v___x_3069_; size_t v___x_3070_; lean_object* v___x_3071_; 
v___x_3069_ = lean_usize_of_nat(v___x_3066_);
lean_dec(v___x_3066_);
v___x_3070_ = lean_usize_of_nat(v___x_3067_);
v___x_3071_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1_spec__2(v_cs_3053_, v___x_3069_, v___x_3070_, v___x_3064_);
return v___x_3071_;
}
}
else
{
lean_object* v_vs_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; uint8_t v___x_3075_; 
v_vs_3072_ = lean_ctor_get(v_x_3049_, 0);
v___x_3073_ = lean_usize_to_nat(v_x_3050_);
v___x_3074_ = lean_array_get_size(v_vs_3072_);
v___x_3075_ = lean_nat_dec_lt(v___x_3073_, v___x_3074_);
if (v___x_3075_ == 0)
{
lean_dec(v___x_3073_);
return v_x_3052_;
}
else
{
size_t v___x_3076_; size_t v___x_3077_; lean_object* v___x_3078_; 
v___x_3076_ = lean_usize_of_nat(v___x_3073_);
lean_dec(v___x_3073_);
v___x_3077_ = lean_usize_of_nat(v___x_3074_);
v___x_3078_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_vs_3072_, v___x_3076_, v___x_3077_, v_x_3052_);
return v___x_3078_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1___boxed(lean_object* v_x_3079_, lean_object* v_x_3080_, lean_object* v_x_3081_, lean_object* v_x_3082_){
_start:
{
size_t v_x_1185__boxed_3083_; size_t v_x_1186__boxed_3084_; lean_object* v_res_3085_; 
v_x_1185__boxed_3083_ = lean_unbox_usize(v_x_3080_);
lean_dec(v_x_3080_);
v_x_1186__boxed_3084_ = lean_unbox_usize(v_x_3081_);
lean_dec(v_x_3081_);
v_res_3085_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(v_x_3079_, v_x_1185__boxed_3083_, v_x_1186__boxed_3084_, v_x_3082_);
lean_dec_ref(v_x_3079_);
return v_res_3085_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0(lean_object* v_t_3086_, lean_object* v_init_3087_, lean_object* v_start_3088_){
_start:
{
lean_object* v___x_3089_; uint8_t v___x_3090_; 
v___x_3089_ = lean_unsigned_to_nat(0u);
v___x_3090_ = lean_nat_dec_eq(v_start_3088_, v___x_3089_);
if (v___x_3090_ == 0)
{
lean_object* v_root_3091_; lean_object* v_tail_3092_; size_t v_shift_3093_; lean_object* v_tailOff_3094_; uint8_t v___x_3095_; 
v_root_3091_ = lean_ctor_get(v_t_3086_, 0);
v_tail_3092_ = lean_ctor_get(v_t_3086_, 1);
v_shift_3093_ = lean_ctor_get_usize(v_t_3086_, 4);
v_tailOff_3094_ = lean_ctor_get(v_t_3086_, 3);
v___x_3095_ = lean_nat_dec_le(v_tailOff_3094_, v_start_3088_);
if (v___x_3095_ == 0)
{
size_t v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; uint8_t v___x_3099_; 
v___x_3096_ = lean_usize_of_nat(v_start_3088_);
v___x_3097_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__1(v_root_3091_, v___x_3096_, v_shift_3093_, v_init_3087_);
v___x_3098_ = lean_array_get_size(v_tail_3092_);
v___x_3099_ = lean_nat_dec_lt(v___x_3089_, v___x_3098_);
if (v___x_3099_ == 0)
{
return v___x_3097_;
}
else
{
size_t v___x_3100_; size_t v___x_3101_; lean_object* v___x_3102_; 
v___x_3100_ = ((size_t)0ULL);
v___x_3101_ = lean_usize_of_nat(v___x_3098_);
v___x_3102_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_tail_3092_, v___x_3100_, v___x_3101_, v___x_3097_);
return v___x_3102_;
}
}
else
{
lean_object* v___x_3103_; lean_object* v___x_3104_; uint8_t v___x_3105_; 
v___x_3103_ = lean_nat_sub(v_start_3088_, v_tailOff_3094_);
v___x_3104_ = lean_array_get_size(v_tail_3092_);
v___x_3105_ = lean_nat_dec_lt(v___x_3103_, v___x_3104_);
if (v___x_3105_ == 0)
{
lean_dec(v___x_3103_);
return v_init_3087_;
}
else
{
size_t v___x_3106_; size_t v___x_3107_; lean_object* v___x_3108_; 
v___x_3106_ = lean_usize_of_nat(v___x_3103_);
lean_dec(v___x_3103_);
v___x_3107_ = lean_usize_of_nat(v___x_3104_);
v___x_3108_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_tail_3092_, v___x_3106_, v___x_3107_, v_init_3087_);
return v___x_3108_;
}
}
}
else
{
lean_object* v_root_3109_; lean_object* v_tail_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; uint8_t v___x_3113_; 
v_root_3109_ = lean_ctor_get(v_t_3086_, 0);
v_tail_3110_ = lean_ctor_get(v_t_3086_, 1);
v___x_3111_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__3(v_root_3109_, v_init_3087_);
v___x_3112_ = lean_array_get_size(v_tail_3110_);
v___x_3113_ = lean_nat_dec_lt(v___x_3089_, v___x_3112_);
if (v___x_3113_ == 0)
{
return v___x_3111_;
}
else
{
size_t v___x_3114_; size_t v___x_3115_; lean_object* v___x_3116_; 
v___x_3114_ = ((size_t)0ULL);
v___x_3115_ = lean_usize_of_nat(v___x_3112_);
v___x_3116_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0_spec__2(v_tail_3110_, v___x_3114_, v___x_3115_, v___x_3111_);
return v___x_3116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0___boxed(lean_object* v_t_3117_, lean_object* v_init_3118_, lean_object* v_start_3119_){
_start:
{
lean_object* v_res_3120_; 
v_res_3120_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0(v_t_3117_, v_init_3118_, v_start_3119_);
lean_dec(v_start_3119_);
lean_dec_ref(v_t_3117_);
return v_res_3120_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0(lean_object* v_lctx_3121_, lean_object* v_init_3122_, lean_object* v_start_3123_){
_start:
{
lean_object* v_decls_3124_; lean_object* v___x_3125_; 
v_decls_3124_ = lean_ctor_get(v_lctx_3121_, 1);
v___x_3125_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0_spec__0(v_decls_3124_, v_init_3122_, v_start_3123_);
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0___boxed(lean_object* v_lctx_3126_, lean_object* v_init_3127_, lean_object* v_start_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0(v_lctx_3126_, v_init_3127_, v_start_3128_);
lean_dec(v_start_3128_);
lean_dec_ref(v_lctx_3126_);
return v_res_3129_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_size(lean_object* v_lctx_3130_){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3131_ = lean_unsigned_to_nat(0u);
v___x_3132_ = l_Lean_LocalContext_foldlM___at___00Lean_LocalContext_size_spec__0(v_lctx_3130_, v___x_3131_, v___x_3131_);
return v___x_3132_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_size___boxed(lean_object* v_lctx_3133_){
_start:
{
lean_object* v_res_3134_; 
v_res_3134_ = l_Lean_LocalContext_size(v_lctx_3133_);
lean_dec_ref(v_lctx_3133_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f___redArg___lam__0(lean_object* v_f_3135_, lean_object* v_x_3136_){
_start:
{
lean_object* v___x_3137_; 
v___x_3137_ = lean_apply_1(v_f_3135_, v_x_3136_);
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f___redArg(lean_object* v_lctx_3138_, lean_object* v_f_3139_){
_start:
{
lean_object* v___f_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___f_3140_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3140_, 0, v_f_3139_);
v___x_3141_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_3142_ = l_Lean_LocalContext_findDeclM_x3f___redArg(v___x_3141_, v_lctx_3138_, v___f_3140_);
return v___x_3142_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDecl_x3f(lean_object* v_00_u03b2_3143_, lean_object* v_lctx_3144_, lean_object* v_f_3145_){
_start:
{
lean_object* v___f_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___f_3146_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3146_, 0, v_f_3145_);
v___x_3147_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_3148_ = l_Lean_LocalContext_findDeclM_x3f___redArg(v___x_3147_, v_lctx_3144_, v___f_3146_);
return v___x_3148_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRev_x3f___redArg(lean_object* v_lctx_3149_, lean_object* v_f_3150_){
_start:
{
lean_object* v___f_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___f_3151_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3151_, 0, v_f_3150_);
v___x_3152_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_3153_ = l_Lean_LocalContext_findDeclRevM_x3f___redArg(v___x_3152_, v_lctx_3149_, v___f_3151_);
return v___x_3153_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRev_x3f(lean_object* v_00_u03b2_3154_, lean_object* v_lctx_3155_, lean_object* v_f_3156_){
_start:
{
lean_object* v___f_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___f_3157_ = lean_alloc_closure((void*)(l_Lean_LocalContext_findDecl_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3157_, 0, v_f_3156_);
v___x_3158_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v___x_3159_ = l_Lean_LocalContext_findDeclRevM_x3f___redArg(v___x_3158_, v_lctx_3155_, v___f_3157_);
return v___x_3159_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0(lean_object* v_val_3160_, lean_object* v_as_3161_, size_t v_i_3162_, size_t v_stop_3163_){
_start:
{
uint8_t v___x_3164_; 
v___x_3164_ = lean_usize_dec_eq(v_i_3162_, v_stop_3163_);
if (v___x_3164_ == 0)
{
uint8_t v___x_3165_; uint8_t v___y_3167_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v_fvarId_3173_; uint8_t v___x_3174_; 
v___x_3165_ = 1;
v___x_3171_ = lean_array_uget_borrowed(v_as_3161_, v_i_3162_);
v___x_3172_ = l_Lean_Expr_fvarId_x21(v___x_3171_);
v_fvarId_3173_ = lean_ctor_get(v_val_3160_, 1);
v___x_3174_ = l_Lean_instBEqFVarId_beq(v___x_3172_, v_fvarId_3173_);
lean_dec(v___x_3172_);
v___y_3167_ = v___x_3174_;
goto v___jp_3166_;
v___jp_3166_:
{
if (v___y_3167_ == 0)
{
size_t v___x_3168_; size_t v___x_3169_; 
v___x_3168_ = ((size_t)1ULL);
v___x_3169_ = lean_usize_add(v_i_3162_, v___x_3168_);
v_i_3162_ = v___x_3169_;
goto _start;
}
else
{
return v___x_3165_;
}
}
}
else
{
uint8_t v___x_3175_; 
v___x_3175_ = 0;
return v___x_3175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0___boxed(lean_object* v_val_3176_, lean_object* v_as_3177_, lean_object* v_i_3178_, lean_object* v_stop_3179_){
_start:
{
size_t v_i_boxed_3180_; size_t v_stop_boxed_3181_; uint8_t v_res_3182_; lean_object* v_r_3183_; 
v_i_boxed_3180_ = lean_unbox_usize(v_i_3178_);
lean_dec(v_i_3178_);
v_stop_boxed_3181_ = lean_unbox_usize(v_stop_3179_);
lean_dec(v_stop_3179_);
v_res_3182_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0(v_val_3176_, v_as_3177_, v_i_boxed_3180_, v_stop_boxed_3181_);
lean_dec_ref(v_as_3177_);
lean_dec_ref(v_val_3176_);
v_r_3183_ = lean_box(v_res_3182_);
return v_r_3183_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_isSubPrefixOfAux(lean_object* v_a_u2081_3184_, lean_object* v_a_u2082_3185_, lean_object* v_exceptFVars_3186_, lean_object* v_i_3187_, lean_object* v_j_3188_){
_start:
{
lean_object* v___y_3190_; lean_object* v___y_3191_; lean_object* v___y_3201_; lean_object* v___y_3202_; lean_object* v_size_3204_; uint8_t v___x_3205_; 
v_size_3204_ = lean_ctor_get(v_a_u2081_3184_, 2);
v___x_3205_ = lean_nat_dec_lt(v_i_3187_, v_size_3204_);
if (v___x_3205_ == 0)
{
uint8_t v___x_3206_; 
lean_dec(v_j_3188_);
lean_dec(v_i_3187_);
v___x_3206_ = 1;
return v___x_3206_;
}
else
{
lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3207_ = lean_box(0);
v___x_3208_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3207_, v_a_u2081_3184_, v_i_3187_);
if (lean_obj_tag(v___x_3208_) == 0)
{
lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3209_ = lean_unsigned_to_nat(1u);
v___x_3210_ = lean_nat_add(v_i_3187_, v___x_3209_);
lean_dec(v_i_3187_);
v_i_3187_ = v___x_3210_;
goto _start;
}
else
{
lean_object* v_val_3212_; lean_object* v___x_3222_; lean_object* v___x_3223_; uint8_t v___x_3224_; 
v_val_3212_ = lean_ctor_get(v___x_3208_, 0);
lean_inc(v_val_3212_);
lean_dec_ref_known(v___x_3208_, 1);
v___x_3222_ = lean_unsigned_to_nat(0u);
v___x_3223_ = lean_array_get_size(v_exceptFVars_3186_);
v___x_3224_ = lean_nat_dec_lt(v___x_3222_, v___x_3223_);
if (v___x_3224_ == 0)
{
goto v___jp_3213_;
}
else
{
if (v___x_3224_ == 0)
{
goto v___jp_3213_;
}
else
{
size_t v___x_3225_; size_t v___x_3226_; uint8_t v___x_3227_; 
v___x_3225_ = ((size_t)0ULL);
v___x_3226_ = lean_usize_of_nat(v___x_3223_);
v___x_3227_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_LocalContext_isSubPrefixOfAux_spec__0(v_val_3212_, v_exceptFVars_3186_, v___x_3225_, v___x_3226_);
if (v___x_3227_ == 0)
{
goto v___jp_3213_;
}
else
{
lean_object* v___x_3228_; lean_object* v___x_3229_; 
lean_dec(v_val_3212_);
v___x_3228_ = lean_unsigned_to_nat(1u);
v___x_3229_ = lean_nat_add(v_i_3187_, v___x_3228_);
lean_dec(v_i_3187_);
v_i_3187_ = v___x_3229_;
goto _start;
}
}
}
v___jp_3213_:
{
lean_object* v_size_3214_; uint8_t v___x_3215_; 
v_size_3214_ = lean_ctor_get(v_a_u2082_3185_, 2);
v___x_3215_ = lean_nat_dec_lt(v_j_3188_, v_size_3214_);
if (v___x_3215_ == 0)
{
lean_dec(v_val_3212_);
lean_dec(v_j_3188_);
lean_dec(v_i_3187_);
return v___x_3215_;
}
else
{
lean_object* v___x_3216_; 
v___x_3216_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3207_, v_a_u2082_3185_, v_j_3188_);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v___x_3217_; lean_object* v___x_3218_; 
lean_dec(v_val_3212_);
v___x_3217_ = lean_unsigned_to_nat(1u);
v___x_3218_ = lean_nat_add(v_j_3188_, v___x_3217_);
lean_dec(v_j_3188_);
v_j_3188_ = v___x_3218_;
goto _start;
}
else
{
lean_object* v_val_3220_; lean_object* v_fvarId_3221_; 
v_val_3220_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_val_3220_);
lean_dec_ref_known(v___x_3216_, 1);
v_fvarId_3221_ = lean_ctor_get(v_val_3212_, 1);
lean_inc(v_fvarId_3221_);
lean_dec(v_val_3212_);
v___y_3201_ = v_val_3220_;
v___y_3202_ = v_fvarId_3221_;
goto v___jp_3200_;
}
}
}
}
}
v___jp_3189_:
{
uint8_t v___x_3192_; 
v___x_3192_ = l_Lean_instBEqFVarId_beq(v___y_3190_, v___y_3191_);
lean_dec(v___y_3191_);
lean_dec(v___y_3190_);
if (v___x_3192_ == 0)
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = lean_unsigned_to_nat(1u);
v___x_3194_ = lean_nat_add(v_j_3188_, v___x_3193_);
lean_dec(v_j_3188_);
v_j_3188_ = v___x_3194_;
goto _start;
}
else
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3196_ = lean_unsigned_to_nat(1u);
v___x_3197_ = lean_nat_add(v_i_3187_, v___x_3196_);
lean_dec(v_i_3187_);
v___x_3198_ = lean_nat_add(v_j_3188_, v___x_3196_);
lean_dec(v_j_3188_);
v_i_3187_ = v___x_3197_;
v_j_3188_ = v___x_3198_;
goto _start;
}
}
v___jp_3200_:
{
lean_object* v_fvarId_3203_; 
v_fvarId_3203_ = lean_ctor_get(v___y_3201_, 1);
lean_inc(v_fvarId_3203_);
lean_dec_ref(v___y_3201_);
v___y_3190_ = v___y_3202_;
v___y_3191_ = v_fvarId_3203_;
goto v___jp_3189_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_isSubPrefixOfAux___boxed(lean_object* v_a_u2081_3231_, lean_object* v_a_u2082_3232_, lean_object* v_exceptFVars_3233_, lean_object* v_i_3234_, lean_object* v_j_3235_){
_start:
{
uint8_t v_res_3236_; lean_object* v_r_3237_; 
v_res_3236_ = l_Lean_LocalContext_isSubPrefixOfAux(v_a_u2081_3231_, v_a_u2082_3232_, v_exceptFVars_3233_, v_i_3234_, v_j_3235_);
lean_dec_ref(v_exceptFVars_3233_);
lean_dec_ref(v_a_u2082_3232_);
lean_dec_ref(v_a_u2081_3231_);
v_r_3237_ = lean_box(v_res_3236_);
return v_r_3237_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object* v_lctx_u2081_3238_, lean_object* v_lctx_u2082_3239_, lean_object* v_exceptFVars_3240_){
_start:
{
lean_object* v_decls_3241_; lean_object* v_decls_3242_; lean_object* v___x_3243_; uint8_t v___x_3244_; 
v_decls_3241_ = lean_ctor_get(v_lctx_u2081_3238_, 1);
v_decls_3242_ = lean_ctor_get(v_lctx_u2082_3239_, 1);
v___x_3243_ = lean_unsigned_to_nat(0u);
v___x_3244_ = l_Lean_LocalContext_isSubPrefixOfAux(v_decls_3241_, v_decls_3242_, v_exceptFVars_3240_, v___x_3243_, v___x_3243_);
return v___x_3244_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_isSubPrefixOf___boxed(lean_object* v_lctx_u2081_3245_, lean_object* v_lctx_u2082_3246_, lean_object* v_exceptFVars_3247_){
_start:
{
uint8_t v_res_3248_; lean_object* v_r_3249_; 
v_res_3248_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_u2081_3245_, v_lctx_u2082_3246_, v_exceptFVars_3247_);
lean_dec_ref(v_exceptFVars_3247_);
lean_dec_ref(v_lctx_u2082_3246_);
lean_dec_ref(v_lctx_u2081_3245_);
v_r_3249_ = lean_box(v_res_3248_);
return v_r_3249_;
}
}
static lean_object* _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3251_ = ((lean_object*)(l_Lean_LocalContext_get_x21___closed__1));
v___x_3252_ = lean_unsigned_to_nat(14u);
v___x_3253_ = lean_unsigned_to_nat(576u);
v___x_3254_ = ((lean_object*)(l_Lean_LocalContext_mkBinding___lam__0___closed__0));
v___x_3255_ = ((lean_object*)(l_Lean_LocalDecl_value___closed__0));
v___x_3256_ = l_mkPanicMessageWithDecl(v___x_3255_, v___x_3254_, v___x_3253_, v___x_3252_, v___x_3251_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___lam__0(lean_object* v_xs_3257_, lean_object* v_lctx_3258_, lean_object* v___x_3259_, uint8_t v_isLambda_3260_, uint8_t v_usedLetOnly_3261_, uint8_t v_generalizeNondepLet_3262_, lean_object* v_i_3263_, lean_object* v_x_3264_, lean_object* v_b_3265_){
_start:
{
lean_object* v_n_3267_; lean_object* v_ty_3268_; uint8_t v_bi_3269_; lean_object* v_x_3273_; lean_object* v___x_3274_; 
v_x_3273_ = lean_array_fget_borrowed(v_xs_3257_, v_i_3263_);
v___x_3274_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_3258_, v_x_3273_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v___x_3275_; lean_object* v___x_3276_; 
lean_dec_ref(v_b_3265_);
v___x_3275_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_3276_ = l_panic___redArg(v___x_3259_, v___x_3275_);
return v___x_3276_;
}
else
{
lean_object* v_val_3277_; 
v_val_3277_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_val_3277_);
lean_dec_ref_known(v___x_3274_, 1);
if (lean_obj_tag(v_val_3277_) == 0)
{
lean_object* v_userName_3278_; lean_object* v_type_3279_; uint8_t v_bi_3280_; 
v_userName_3278_ = lean_ctor_get(v_val_3277_, 2);
lean_inc(v_userName_3278_);
v_type_3279_ = lean_ctor_get(v_val_3277_, 3);
lean_inc_ref(v_type_3279_);
v_bi_3280_ = lean_ctor_get_uint8(v_val_3277_, sizeof(void*)*4);
lean_dec_ref_known(v_val_3277_, 4);
v_n_3267_ = v_userName_3278_;
v_ty_3268_ = v_type_3279_;
v_bi_3269_ = v_bi_3280_;
goto v___jp_3266_;
}
else
{
lean_object* v_userName_3281_; lean_object* v_type_3282_; lean_object* v_value_3283_; uint8_t v_nondep_3284_; uint8_t v___y_3290_; 
v_userName_3281_ = lean_ctor_get(v_val_3277_, 2);
lean_inc(v_userName_3281_);
v_type_3282_ = lean_ctor_get(v_val_3277_, 3);
lean_inc_ref(v_type_3282_);
v_value_3283_ = lean_ctor_get(v_val_3277_, 4);
lean_inc_ref(v_value_3283_);
v_nondep_3284_ = lean_ctor_get_uint8(v_val_3277_, sizeof(void*)*5);
lean_dec_ref_known(v_val_3277_, 5);
if (v_nondep_3284_ == 0)
{
v___y_3290_ = v_nondep_3284_;
goto v___jp_3289_;
}
else
{
if (v_generalizeNondepLet_3262_ == 0)
{
v___y_3290_ = v_generalizeNondepLet_3262_;
goto v___jp_3289_;
}
else
{
uint8_t v___x_3295_; 
lean_dec_ref(v_value_3283_);
v___x_3295_ = 0;
v_n_3267_ = v_userName_3281_;
v_ty_3268_ = v_type_3282_;
v_bi_3269_ = v___x_3295_;
goto v___jp_3266_;
}
}
v___jp_3285_:
{
lean_object* v_ty_3286_; lean_object* v_val_3287_; lean_object* v___x_3288_; 
v_ty_3286_ = lean_expr_abstract_range(v_type_3282_, v_i_3263_, v_xs_3257_);
lean_dec_ref(v_type_3282_);
v_val_3287_ = lean_expr_abstract_range(v_value_3283_, v_i_3263_, v_xs_3257_);
lean_dec_ref(v_value_3283_);
v___x_3288_ = l_Lean_Expr_letE___override(v_userName_3281_, v_ty_3286_, v_val_3287_, v_b_3265_, v_nondep_3284_);
return v___x_3288_;
}
v___jp_3289_:
{
if (v_usedLetOnly_3261_ == 0)
{
goto v___jp_3285_;
}
else
{
if (v___y_3290_ == 0)
{
lean_object* v___x_3291_; uint8_t v___x_3292_; 
v___x_3291_ = lean_unsigned_to_nat(0u);
v___x_3292_ = lean_expr_has_loose_bvar(v_b_3265_, v___x_3291_);
if (v___x_3292_ == 0)
{
lean_object* v___x_3293_; lean_object* v___x_3294_; 
lean_dec_ref(v_value_3283_);
lean_dec_ref(v_type_3282_);
lean_dec(v_userName_3281_);
v___x_3293_ = lean_unsigned_to_nat(1u);
v___x_3294_ = lean_expr_lower_loose_bvars(v_b_3265_, v___x_3293_, v___x_3293_);
lean_dec_ref(v_b_3265_);
return v___x_3294_;
}
else
{
goto v___jp_3285_;
}
}
else
{
goto v___jp_3285_;
}
}
}
}
}
v___jp_3266_:
{
lean_object* v_ty_3270_; 
v_ty_3270_ = lean_expr_abstract_range(v_ty_3268_, v_i_3263_, v_xs_3257_);
lean_dec_ref(v_ty_3268_);
if (v_isLambda_3260_ == 0)
{
lean_object* v___x_3271_; 
v___x_3271_ = l_Lean_mkForall(v_n_3267_, v_bi_3269_, v_ty_3270_, v_b_3265_);
return v___x_3271_;
}
else
{
lean_object* v___x_3272_; 
v___x_3272_ = l_Lean_mkLambda(v_n_3267_, v_bi_3269_, v_ty_3270_, v_b_3265_);
return v___x_3272_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___lam__0___boxed(lean_object* v_xs_3296_, lean_object* v_lctx_3297_, lean_object* v___x_3298_, lean_object* v_isLambda_3299_, lean_object* v_usedLetOnly_3300_, lean_object* v_generalizeNondepLet_3301_, lean_object* v_i_3302_, lean_object* v_x_3303_, lean_object* v_b_3304_){
_start:
{
uint8_t v_isLambda_boxed_3305_; uint8_t v_usedLetOnly_boxed_3306_; uint8_t v_generalizeNondepLet_boxed_3307_; lean_object* v_res_3308_; 
v_isLambda_boxed_3305_ = lean_unbox(v_isLambda_3299_);
v_usedLetOnly_boxed_3306_ = lean_unbox(v_usedLetOnly_3300_);
v_generalizeNondepLet_boxed_3307_ = lean_unbox(v_generalizeNondepLet_3301_);
v_res_3308_ = l_Lean_LocalContext_mkBinding___lam__0(v_xs_3296_, v_lctx_3297_, v___x_3298_, v_isLambda_boxed_3305_, v_usedLetOnly_boxed_3306_, v_generalizeNondepLet_boxed_3307_, v_i_3302_, v_x_3303_, v_b_3304_);
lean_dec(v_i_3302_);
lean_dec_ref(v___x_3298_);
lean_dec_ref(v_xs_3296_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding(uint8_t v_isLambda_3309_, lean_object* v_lctx_3310_, lean_object* v_xs_3311_, lean_object* v_b_3312_, uint8_t v_usedLetOnly_3313_, uint8_t v_generalizeNondepLet_3314_){
_start:
{
lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___f_3319_; lean_object* v_b_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3315_ = l_Lean_instInhabitedExpr;
v___x_3316_ = lean_box(v_isLambda_3309_);
v___x_3317_ = lean_box(v_usedLetOnly_3313_);
v___x_3318_ = lean_box(v_generalizeNondepLet_3314_);
lean_inc_ref(v_xs_3311_);
v___f_3319_ = lean_alloc_closure((void*)(l_Lean_LocalContext_mkBinding___lam__0___boxed), 9, 6);
lean_closure_set(v___f_3319_, 0, v_xs_3311_);
lean_closure_set(v___f_3319_, 1, v_lctx_3310_);
lean_closure_set(v___f_3319_, 2, v___x_3315_);
lean_closure_set(v___f_3319_, 3, v___x_3316_);
lean_closure_set(v___f_3319_, 4, v___x_3317_);
lean_closure_set(v___f_3319_, 5, v___x_3318_);
v_b_3320_ = lean_expr_abstract(v_b_3312_, v_xs_3311_);
v___x_3321_ = lean_array_get_size(v_xs_3311_);
lean_dec_ref(v_xs_3311_);
v___x_3322_ = l_Nat_foldRev___redArg(v___x_3321_, v___f_3319_, v_b_3320_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkBinding___boxed(lean_object* v_isLambda_3323_, lean_object* v_lctx_3324_, lean_object* v_xs_3325_, lean_object* v_b_3326_, lean_object* v_usedLetOnly_3327_, lean_object* v_generalizeNondepLet_3328_){
_start:
{
uint8_t v_isLambda_boxed_3329_; uint8_t v_usedLetOnly_boxed_3330_; uint8_t v_generalizeNondepLet_boxed_3331_; lean_object* v_res_3332_; 
v_isLambda_boxed_3329_ = lean_unbox(v_isLambda_3323_);
v_usedLetOnly_boxed_3330_ = lean_unbox(v_usedLetOnly_3327_);
v_generalizeNondepLet_boxed_3331_ = lean_unbox(v_generalizeNondepLet_3328_);
v_res_3332_ = l_Lean_LocalContext_mkBinding(v_isLambda_boxed_3329_, v_lctx_3324_, v_xs_3325_, v_b_3326_, v_usedLetOnly_boxed_3330_, v_generalizeNondepLet_boxed_3331_);
lean_dec_ref(v_b_3326_);
return v_res_3332_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(lean_object* v_xs_3333_, lean_object* v_lctx_3334_, uint8_t v_usedLetOnly_3335_, uint8_t v_generalizeNondepLet_3336_, lean_object* v_x_3337_, lean_object* v_x_3338_){
_start:
{
lean_object* v_zero_3339_; uint8_t v_isZero_3340_; 
v_zero_3339_ = lean_unsigned_to_nat(0u);
v_isZero_3340_ = lean_nat_dec_eq(v_x_3337_, v_zero_3339_);
if (v_isZero_3340_ == 1)
{
lean_dec(v_x_3337_);
lean_dec_ref(v_lctx_3334_);
return v_x_3338_;
}
else
{
lean_object* v_one_3341_; lean_object* v_n_3342_; lean_object* v_n_3344_; lean_object* v_ty_3345_; uint8_t v_bi_3346_; lean_object* v_x_3350_; lean_object* v___x_3351_; 
v_one_3341_ = lean_unsigned_to_nat(1u);
v_n_3342_ = lean_nat_sub(v_x_3337_, v_one_3341_);
lean_dec(v_x_3337_);
v_x_3350_ = lean_array_fget_borrowed(v_xs_3333_, v_n_3342_);
lean_inc_ref(v_lctx_3334_);
v___x_3351_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_3334_, v_x_3350_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v___x_3352_; lean_object* v___x_3353_; 
lean_dec_ref(v_x_3338_);
v___x_3352_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_3353_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_3352_);
v_x_3337_ = v_n_3342_;
v_x_3338_ = v___x_3353_;
goto _start;
}
else
{
lean_object* v_val_3355_; 
v_val_3355_ = lean_ctor_get(v___x_3351_, 0);
lean_inc(v_val_3355_);
lean_dec_ref_known(v___x_3351_, 1);
if (lean_obj_tag(v_val_3355_) == 0)
{
lean_object* v_userName_3356_; lean_object* v_type_3357_; uint8_t v_bi_3358_; 
v_userName_3356_ = lean_ctor_get(v_val_3355_, 2);
lean_inc(v_userName_3356_);
v_type_3357_ = lean_ctor_get(v_val_3355_, 3);
lean_inc_ref(v_type_3357_);
v_bi_3358_ = lean_ctor_get_uint8(v_val_3355_, sizeof(void*)*4);
lean_dec_ref_known(v_val_3355_, 4);
v_n_3344_ = v_userName_3356_;
v_ty_3345_ = v_type_3357_;
v_bi_3346_ = v_bi_3358_;
goto v___jp_3343_;
}
else
{
lean_object* v_userName_3359_; lean_object* v_type_3360_; lean_object* v_value_3361_; uint8_t v_nondep_3362_; uint8_t v___y_3369_; 
v_userName_3359_ = lean_ctor_get(v_val_3355_, 2);
lean_inc(v_userName_3359_);
v_type_3360_ = lean_ctor_get(v_val_3355_, 3);
lean_inc_ref(v_type_3360_);
v_value_3361_ = lean_ctor_get(v_val_3355_, 4);
lean_inc_ref(v_value_3361_);
v_nondep_3362_ = lean_ctor_get_uint8(v_val_3355_, sizeof(void*)*5);
lean_dec_ref_known(v_val_3355_, 5);
if (v_nondep_3362_ == 0)
{
v___y_3369_ = v_nondep_3362_;
goto v___jp_3368_;
}
else
{
if (v_generalizeNondepLet_3336_ == 0)
{
v___y_3369_ = v_generalizeNondepLet_3336_;
goto v___jp_3368_;
}
else
{
uint8_t v___x_3373_; 
lean_dec_ref(v_value_3361_);
v___x_3373_ = 0;
v_n_3344_ = v_userName_3359_;
v_ty_3345_ = v_type_3360_;
v_bi_3346_ = v___x_3373_;
goto v___jp_3343_;
}
}
v___jp_3363_:
{
lean_object* v_ty_3364_; lean_object* v_val_3365_; lean_object* v___x_3366_; 
v_ty_3364_ = lean_expr_abstract_range(v_type_3360_, v_n_3342_, v_xs_3333_);
lean_dec_ref(v_type_3360_);
v_val_3365_ = lean_expr_abstract_range(v_value_3361_, v_n_3342_, v_xs_3333_);
lean_dec_ref(v_value_3361_);
v___x_3366_ = l_Lean_Expr_letE___override(v_userName_3359_, v_ty_3364_, v_val_3365_, v_x_3338_, v_nondep_3362_);
v_x_3337_ = v_n_3342_;
v_x_3338_ = v___x_3366_;
goto _start;
}
v___jp_3368_:
{
if (v_usedLetOnly_3335_ == 0)
{
goto v___jp_3363_;
}
else
{
if (v___y_3369_ == 0)
{
uint8_t v___x_3370_; 
v___x_3370_ = lean_expr_has_loose_bvar(v_x_3338_, v_zero_3339_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; 
lean_dec_ref(v_value_3361_);
lean_dec_ref(v_type_3360_);
lean_dec(v_userName_3359_);
v___x_3371_ = lean_expr_lower_loose_bvars(v_x_3338_, v_one_3341_, v_one_3341_);
lean_dec_ref(v_x_3338_);
v_x_3337_ = v_n_3342_;
v_x_3338_ = v___x_3371_;
goto _start;
}
else
{
goto v___jp_3363_;
}
}
else
{
goto v___jp_3363_;
}
}
}
}
}
v___jp_3343_:
{
lean_object* v_ty_3347_; lean_object* v___x_3348_; 
v_ty_3347_ = lean_expr_abstract_range(v_ty_3345_, v_n_3342_, v_xs_3333_);
lean_dec_ref(v_ty_3345_);
v___x_3348_ = l_Lean_mkLambda(v_n_3344_, v_bi_3346_, v_ty_3347_, v_x_3338_);
v_x_3337_ = v_n_3342_;
v_x_3338_ = v___x_3348_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0___boxed(lean_object* v_xs_3374_, lean_object* v_lctx_3375_, lean_object* v_usedLetOnly_3376_, lean_object* v_generalizeNondepLet_3377_, lean_object* v_x_3378_, lean_object* v_x_3379_){
_start:
{
uint8_t v_usedLetOnly_boxed_3380_; uint8_t v_generalizeNondepLet_boxed_3381_; lean_object* v_res_3382_; 
v_usedLetOnly_boxed_3380_ = lean_unbox(v_usedLetOnly_3376_);
v_generalizeNondepLet_boxed_3381_ = lean_unbox(v_generalizeNondepLet_3377_);
v_res_3382_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_3374_, v_lctx_3375_, v_usedLetOnly_boxed_3380_, v_generalizeNondepLet_boxed_3381_, v_x_3378_, v_x_3379_);
lean_dec_ref(v_xs_3374_);
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0(lean_object* v_xs_3383_, lean_object* v_lctx_3384_, uint8_t v_usedLetOnly_3385_, uint8_t v_generalizeNondepLet_3386_, lean_object* v_x_3387_, lean_object* v_x_3388_){
_start:
{
lean_object* v_zero_3389_; uint8_t v_isZero_3390_; 
v_zero_3389_ = lean_unsigned_to_nat(0u);
v_isZero_3390_ = lean_nat_dec_eq(v_x_3387_, v_zero_3389_);
if (v_isZero_3390_ == 1)
{
lean_dec_ref(v_lctx_3384_);
return v_x_3388_;
}
else
{
lean_object* v_one_3391_; lean_object* v_n_3392_; lean_object* v_n_3394_; lean_object* v_ty_3395_; uint8_t v_bi_3396_; lean_object* v_x_3400_; lean_object* v___x_3401_; 
v_one_3391_ = lean_unsigned_to_nat(1u);
v_n_3392_ = lean_nat_sub(v_x_3387_, v_one_3391_);
v_x_3400_ = lean_array_fget_borrowed(v_xs_3383_, v_n_3392_);
lean_inc_ref(v_lctx_3384_);
v___x_3401_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_3384_, v_x_3400_);
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; 
lean_dec_ref(v_x_3388_);
v___x_3402_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_3403_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_3402_);
v___x_3404_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_3383_, v_lctx_3384_, v_usedLetOnly_3385_, v_generalizeNondepLet_3386_, v_n_3392_, v___x_3403_);
return v___x_3404_;
}
else
{
lean_object* v_val_3405_; 
v_val_3405_ = lean_ctor_get(v___x_3401_, 0);
lean_inc(v_val_3405_);
lean_dec_ref_known(v___x_3401_, 1);
if (lean_obj_tag(v_val_3405_) == 0)
{
lean_object* v_userName_3406_; lean_object* v_type_3407_; uint8_t v_bi_3408_; 
v_userName_3406_ = lean_ctor_get(v_val_3405_, 2);
lean_inc(v_userName_3406_);
v_type_3407_ = lean_ctor_get(v_val_3405_, 3);
lean_inc_ref(v_type_3407_);
v_bi_3408_ = lean_ctor_get_uint8(v_val_3405_, sizeof(void*)*4);
lean_dec_ref_known(v_val_3405_, 4);
v_n_3394_ = v_userName_3406_;
v_ty_3395_ = v_type_3407_;
v_bi_3396_ = v_bi_3408_;
goto v___jp_3393_;
}
else
{
lean_object* v_userName_3409_; lean_object* v_type_3410_; lean_object* v_value_3411_; uint8_t v_nondep_3412_; uint8_t v___y_3419_; 
v_userName_3409_ = lean_ctor_get(v_val_3405_, 2);
lean_inc(v_userName_3409_);
v_type_3410_ = lean_ctor_get(v_val_3405_, 3);
lean_inc_ref(v_type_3410_);
v_value_3411_ = lean_ctor_get(v_val_3405_, 4);
lean_inc_ref(v_value_3411_);
v_nondep_3412_ = lean_ctor_get_uint8(v_val_3405_, sizeof(void*)*5);
lean_dec_ref_known(v_val_3405_, 5);
if (v_nondep_3412_ == 0)
{
v___y_3419_ = v_nondep_3412_;
goto v___jp_3418_;
}
else
{
if (v_generalizeNondepLet_3386_ == 0)
{
v___y_3419_ = v_generalizeNondepLet_3386_;
goto v___jp_3418_;
}
else
{
uint8_t v___x_3423_; 
lean_dec_ref(v_value_3411_);
v___x_3423_ = 0;
v_n_3394_ = v_userName_3409_;
v_ty_3395_ = v_type_3410_;
v_bi_3396_ = v___x_3423_;
goto v___jp_3393_;
}
}
v___jp_3413_:
{
lean_object* v_ty_3414_; lean_object* v_val_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; 
v_ty_3414_ = lean_expr_abstract_range(v_type_3410_, v_n_3392_, v_xs_3383_);
lean_dec_ref(v_type_3410_);
v_val_3415_ = lean_expr_abstract_range(v_value_3411_, v_n_3392_, v_xs_3383_);
lean_dec_ref(v_value_3411_);
v___x_3416_ = l_Lean_Expr_letE___override(v_userName_3409_, v_ty_3414_, v_val_3415_, v_x_3388_, v_nondep_3412_);
v___x_3417_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_3383_, v_lctx_3384_, v_usedLetOnly_3385_, v_generalizeNondepLet_3386_, v_n_3392_, v___x_3416_);
return v___x_3417_;
}
v___jp_3418_:
{
if (v_usedLetOnly_3385_ == 0)
{
goto v___jp_3413_;
}
else
{
if (v___y_3419_ == 0)
{
uint8_t v___x_3420_; 
v___x_3420_ = lean_expr_has_loose_bvar(v_x_3388_, v_zero_3389_);
if (v___x_3420_ == 0)
{
lean_object* v___x_3421_; lean_object* v___x_3422_; 
lean_dec_ref(v_value_3411_);
lean_dec_ref(v_type_3410_);
lean_dec(v_userName_3409_);
v___x_3421_ = lean_expr_lower_loose_bvars(v_x_3388_, v_one_3391_, v_one_3391_);
lean_dec_ref(v_x_3388_);
v___x_3422_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_3383_, v_lctx_3384_, v_usedLetOnly_3385_, v_generalizeNondepLet_3386_, v_n_3392_, v___x_3421_);
return v___x_3422_;
}
else
{
goto v___jp_3413_;
}
}
else
{
goto v___jp_3413_;
}
}
}
}
}
v___jp_3393_:
{
lean_object* v_ty_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v_ty_3397_ = lean_expr_abstract_range(v_ty_3395_, v_n_3392_, v_xs_3383_);
lean_dec_ref(v_ty_3395_);
v___x_3398_ = l_Lean_mkLambda(v_n_3394_, v_bi_3396_, v_ty_3397_, v_x_3388_);
v___x_3399_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0_spec__0(v_xs_3383_, v_lctx_3384_, v_usedLetOnly_3385_, v_generalizeNondepLet_3386_, v_n_3392_, v___x_3398_);
return v___x_3399_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0___boxed(lean_object* v_xs_3424_, lean_object* v_lctx_3425_, lean_object* v_usedLetOnly_3426_, lean_object* v_generalizeNondepLet_3427_, lean_object* v_x_3428_, lean_object* v_x_3429_){
_start:
{
uint8_t v_usedLetOnly_boxed_3430_; uint8_t v_generalizeNondepLet_boxed_3431_; lean_object* v_res_3432_; 
v_usedLetOnly_boxed_3430_ = lean_unbox(v_usedLetOnly_3426_);
v_generalizeNondepLet_boxed_3431_ = lean_unbox(v_generalizeNondepLet_3427_);
v_res_3432_ = l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0(v_xs_3424_, v_lctx_3425_, v_usedLetOnly_boxed_3430_, v_generalizeNondepLet_boxed_3431_, v_x_3428_, v_x_3429_);
lean_dec(v_x_3428_);
lean_dec_ref(v_xs_3424_);
return v_res_3432_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLambda(lean_object* v_lctx_3433_, lean_object* v_xs_3434_, lean_object* v_b_3435_, uint8_t v_usedLetOnly_3436_, uint8_t v_generalizeNondepLet_3437_){
_start:
{
lean_object* v_b_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; 
v_b_3438_ = lean_expr_abstract(v_b_3435_, v_xs_3434_);
v___x_3439_ = lean_array_get_size(v_xs_3434_);
v___x_3440_ = l_Nat_foldRev___at___00Lean_LocalContext_mkLambda_spec__0(v_xs_3434_, v_lctx_3433_, v_usedLetOnly_3436_, v_generalizeNondepLet_3437_, v___x_3439_, v_b_3438_);
return v___x_3440_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkLambda___boxed(lean_object* v_lctx_3441_, lean_object* v_xs_3442_, lean_object* v_b_3443_, lean_object* v_usedLetOnly_3444_, lean_object* v_generalizeNondepLet_3445_){
_start:
{
uint8_t v_usedLetOnly_boxed_3446_; uint8_t v_generalizeNondepLet_boxed_3447_; lean_object* v_res_3448_; 
v_usedLetOnly_boxed_3446_ = lean_unbox(v_usedLetOnly_3444_);
v_generalizeNondepLet_boxed_3447_ = lean_unbox(v_generalizeNondepLet_3445_);
v_res_3448_ = l_Lean_LocalContext_mkLambda(v_lctx_3441_, v_xs_3442_, v_b_3443_, v_usedLetOnly_boxed_3446_, v_generalizeNondepLet_boxed_3447_);
lean_dec_ref(v_b_3443_);
lean_dec_ref(v_xs_3442_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(lean_object* v_xs_3449_, lean_object* v_lctx_3450_, uint8_t v_usedLetOnly_3451_, uint8_t v_generalizeNondepLet_3452_, lean_object* v_x_3453_, lean_object* v_x_3454_){
_start:
{
lean_object* v_zero_3455_; uint8_t v_isZero_3456_; 
v_zero_3455_ = lean_unsigned_to_nat(0u);
v_isZero_3456_ = lean_nat_dec_eq(v_x_3453_, v_zero_3455_);
if (v_isZero_3456_ == 1)
{
lean_dec(v_x_3453_);
lean_dec_ref(v_lctx_3450_);
return v_x_3454_;
}
else
{
lean_object* v_one_3457_; lean_object* v_n_3458_; lean_object* v_n_3460_; lean_object* v_ty_3461_; uint8_t v_bi_3462_; lean_object* v_x_3466_; lean_object* v___x_3467_; 
v_one_3457_ = lean_unsigned_to_nat(1u);
v_n_3458_ = lean_nat_sub(v_x_3453_, v_one_3457_);
lean_dec(v_x_3453_);
v_x_3466_ = lean_array_fget_borrowed(v_xs_3449_, v_n_3458_);
lean_inc_ref(v_lctx_3450_);
v___x_3467_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_3450_, v_x_3466_);
if (lean_obj_tag(v___x_3467_) == 0)
{
lean_object* v___x_3468_; lean_object* v___x_3469_; 
lean_dec_ref(v_x_3454_);
v___x_3468_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_3469_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_3468_);
v_x_3453_ = v_n_3458_;
v_x_3454_ = v___x_3469_;
goto _start;
}
else
{
lean_object* v_val_3471_; 
v_val_3471_ = lean_ctor_get(v___x_3467_, 0);
lean_inc(v_val_3471_);
lean_dec_ref_known(v___x_3467_, 1);
if (lean_obj_tag(v_val_3471_) == 0)
{
lean_object* v_userName_3472_; lean_object* v_type_3473_; uint8_t v_bi_3474_; 
v_userName_3472_ = lean_ctor_get(v_val_3471_, 2);
lean_inc(v_userName_3472_);
v_type_3473_ = lean_ctor_get(v_val_3471_, 3);
lean_inc_ref(v_type_3473_);
v_bi_3474_ = lean_ctor_get_uint8(v_val_3471_, sizeof(void*)*4);
lean_dec_ref_known(v_val_3471_, 4);
v_n_3460_ = v_userName_3472_;
v_ty_3461_ = v_type_3473_;
v_bi_3462_ = v_bi_3474_;
goto v___jp_3459_;
}
else
{
lean_object* v_userName_3475_; lean_object* v_type_3476_; lean_object* v_value_3477_; uint8_t v_nondep_3478_; uint8_t v___y_3485_; 
v_userName_3475_ = lean_ctor_get(v_val_3471_, 2);
lean_inc(v_userName_3475_);
v_type_3476_ = lean_ctor_get(v_val_3471_, 3);
lean_inc_ref(v_type_3476_);
v_value_3477_ = lean_ctor_get(v_val_3471_, 4);
lean_inc_ref(v_value_3477_);
v_nondep_3478_ = lean_ctor_get_uint8(v_val_3471_, sizeof(void*)*5);
lean_dec_ref_known(v_val_3471_, 5);
if (v_nondep_3478_ == 0)
{
v___y_3485_ = v_nondep_3478_;
goto v___jp_3484_;
}
else
{
if (v_generalizeNondepLet_3452_ == 0)
{
v___y_3485_ = v_generalizeNondepLet_3452_;
goto v___jp_3484_;
}
else
{
uint8_t v___x_3489_; 
lean_dec_ref(v_value_3477_);
v___x_3489_ = 0;
v_n_3460_ = v_userName_3475_;
v_ty_3461_ = v_type_3476_;
v_bi_3462_ = v___x_3489_;
goto v___jp_3459_;
}
}
v___jp_3479_:
{
lean_object* v_ty_3480_; lean_object* v_val_3481_; lean_object* v___x_3482_; 
v_ty_3480_ = lean_expr_abstract_range(v_type_3476_, v_n_3458_, v_xs_3449_);
lean_dec_ref(v_type_3476_);
v_val_3481_ = lean_expr_abstract_range(v_value_3477_, v_n_3458_, v_xs_3449_);
lean_dec_ref(v_value_3477_);
v___x_3482_ = l_Lean_Expr_letE___override(v_userName_3475_, v_ty_3480_, v_val_3481_, v_x_3454_, v_nondep_3478_);
v_x_3453_ = v_n_3458_;
v_x_3454_ = v___x_3482_;
goto _start;
}
v___jp_3484_:
{
if (v_usedLetOnly_3451_ == 0)
{
goto v___jp_3479_;
}
else
{
if (v___y_3485_ == 0)
{
uint8_t v___x_3486_; 
v___x_3486_ = lean_expr_has_loose_bvar(v_x_3454_, v_zero_3455_);
if (v___x_3486_ == 0)
{
lean_object* v___x_3487_; 
lean_dec_ref(v_value_3477_);
lean_dec_ref(v_type_3476_);
lean_dec(v_userName_3475_);
v___x_3487_ = lean_expr_lower_loose_bvars(v_x_3454_, v_one_3457_, v_one_3457_);
lean_dec_ref(v_x_3454_);
v_x_3453_ = v_n_3458_;
v_x_3454_ = v___x_3487_;
goto _start;
}
else
{
goto v___jp_3479_;
}
}
else
{
goto v___jp_3479_;
}
}
}
}
}
v___jp_3459_:
{
lean_object* v_ty_3463_; lean_object* v___x_3464_; 
v_ty_3463_ = lean_expr_abstract_range(v_ty_3461_, v_n_3458_, v_xs_3449_);
lean_dec_ref(v_ty_3461_);
v___x_3464_ = l_Lean_mkForall(v_n_3460_, v_bi_3462_, v_ty_3463_, v_x_3454_);
v_x_3453_ = v_n_3458_;
v_x_3454_ = v___x_3464_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0___boxed(lean_object* v_xs_3490_, lean_object* v_lctx_3491_, lean_object* v_usedLetOnly_3492_, lean_object* v_generalizeNondepLet_3493_, lean_object* v_x_3494_, lean_object* v_x_3495_){
_start:
{
uint8_t v_usedLetOnly_boxed_3496_; uint8_t v_generalizeNondepLet_boxed_3497_; lean_object* v_res_3498_; 
v_usedLetOnly_boxed_3496_ = lean_unbox(v_usedLetOnly_3492_);
v_generalizeNondepLet_boxed_3497_ = lean_unbox(v_generalizeNondepLet_3493_);
v_res_3498_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_3490_, v_lctx_3491_, v_usedLetOnly_boxed_3496_, v_generalizeNondepLet_boxed_3497_, v_x_3494_, v_x_3495_);
lean_dec_ref(v_xs_3490_);
return v_res_3498_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0(lean_object* v_xs_3499_, lean_object* v_lctx_3500_, uint8_t v_usedLetOnly_3501_, uint8_t v_generalizeNondepLet_3502_, lean_object* v_x_3503_, lean_object* v_x_3504_){
_start:
{
lean_object* v_zero_3505_; uint8_t v_isZero_3506_; 
v_zero_3505_ = lean_unsigned_to_nat(0u);
v_isZero_3506_ = lean_nat_dec_eq(v_x_3503_, v_zero_3505_);
if (v_isZero_3506_ == 1)
{
lean_dec_ref(v_lctx_3500_);
return v_x_3504_;
}
else
{
lean_object* v_one_3507_; lean_object* v_n_3508_; lean_object* v_n_3510_; lean_object* v_ty_3511_; uint8_t v_bi_3512_; lean_object* v_x_3516_; lean_object* v___x_3517_; 
v_one_3507_ = lean_unsigned_to_nat(1u);
v_n_3508_ = lean_nat_sub(v_x_3503_, v_one_3507_);
v_x_3516_ = lean_array_fget_borrowed(v_xs_3499_, v_n_3508_);
lean_inc_ref(v_lctx_3500_);
v___x_3517_ = l_Lean_LocalContext_findFVar_x3f(v_lctx_3500_, v_x_3516_);
if (lean_obj_tag(v___x_3517_) == 0)
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
lean_dec_ref(v_x_3504_);
v___x_3518_ = lean_obj_once(&l_Lean_LocalContext_mkBinding___lam__0___closed__1, &l_Lean_LocalContext_mkBinding___lam__0___closed__1_once, _init_l_Lean_LocalContext_mkBinding___lam__0___closed__1);
v___x_3519_ = l_panic___at___00Lean_LocalDecl_value_spec__0(v___x_3518_);
v___x_3520_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_3499_, v_lctx_3500_, v_usedLetOnly_3501_, v_generalizeNondepLet_3502_, v_n_3508_, v___x_3519_);
return v___x_3520_;
}
else
{
lean_object* v_val_3521_; 
v_val_3521_ = lean_ctor_get(v___x_3517_, 0);
lean_inc(v_val_3521_);
lean_dec_ref_known(v___x_3517_, 1);
if (lean_obj_tag(v_val_3521_) == 0)
{
lean_object* v_userName_3522_; lean_object* v_type_3523_; uint8_t v_bi_3524_; 
v_userName_3522_ = lean_ctor_get(v_val_3521_, 2);
lean_inc(v_userName_3522_);
v_type_3523_ = lean_ctor_get(v_val_3521_, 3);
lean_inc_ref(v_type_3523_);
v_bi_3524_ = lean_ctor_get_uint8(v_val_3521_, sizeof(void*)*4);
lean_dec_ref_known(v_val_3521_, 4);
v_n_3510_ = v_userName_3522_;
v_ty_3511_ = v_type_3523_;
v_bi_3512_ = v_bi_3524_;
goto v___jp_3509_;
}
else
{
lean_object* v_userName_3525_; lean_object* v_type_3526_; lean_object* v_value_3527_; uint8_t v_nondep_3528_; uint8_t v___y_3535_; 
v_userName_3525_ = lean_ctor_get(v_val_3521_, 2);
lean_inc(v_userName_3525_);
v_type_3526_ = lean_ctor_get(v_val_3521_, 3);
lean_inc_ref(v_type_3526_);
v_value_3527_ = lean_ctor_get(v_val_3521_, 4);
lean_inc_ref(v_value_3527_);
v_nondep_3528_ = lean_ctor_get_uint8(v_val_3521_, sizeof(void*)*5);
lean_dec_ref_known(v_val_3521_, 5);
if (v_nondep_3528_ == 0)
{
v___y_3535_ = v_nondep_3528_;
goto v___jp_3534_;
}
else
{
if (v_generalizeNondepLet_3502_ == 0)
{
v___y_3535_ = v_generalizeNondepLet_3502_;
goto v___jp_3534_;
}
else
{
uint8_t v___x_3539_; 
lean_dec_ref(v_value_3527_);
v___x_3539_ = 0;
v_n_3510_ = v_userName_3525_;
v_ty_3511_ = v_type_3526_;
v_bi_3512_ = v___x_3539_;
goto v___jp_3509_;
}
}
v___jp_3529_:
{
lean_object* v_ty_3530_; lean_object* v_val_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; 
v_ty_3530_ = lean_expr_abstract_range(v_type_3526_, v_n_3508_, v_xs_3499_);
lean_dec_ref(v_type_3526_);
v_val_3531_ = lean_expr_abstract_range(v_value_3527_, v_n_3508_, v_xs_3499_);
lean_dec_ref(v_value_3527_);
v___x_3532_ = l_Lean_Expr_letE___override(v_userName_3525_, v_ty_3530_, v_val_3531_, v_x_3504_, v_nondep_3528_);
v___x_3533_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_3499_, v_lctx_3500_, v_usedLetOnly_3501_, v_generalizeNondepLet_3502_, v_n_3508_, v___x_3532_);
return v___x_3533_;
}
v___jp_3534_:
{
if (v_usedLetOnly_3501_ == 0)
{
goto v___jp_3529_;
}
else
{
if (v___y_3535_ == 0)
{
uint8_t v___x_3536_; 
v___x_3536_ = lean_expr_has_loose_bvar(v_x_3504_, v_zero_3505_);
if (v___x_3536_ == 0)
{
lean_object* v___x_3537_; lean_object* v___x_3538_; 
lean_dec_ref(v_value_3527_);
lean_dec_ref(v_type_3526_);
lean_dec(v_userName_3525_);
v___x_3537_ = lean_expr_lower_loose_bvars(v_x_3504_, v_one_3507_, v_one_3507_);
lean_dec_ref(v_x_3504_);
v___x_3538_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_3499_, v_lctx_3500_, v_usedLetOnly_3501_, v_generalizeNondepLet_3502_, v_n_3508_, v___x_3537_);
return v___x_3538_;
}
else
{
goto v___jp_3529_;
}
}
else
{
goto v___jp_3529_;
}
}
}
}
}
v___jp_3509_:
{
lean_object* v_ty_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; 
v_ty_3513_ = lean_expr_abstract_range(v_ty_3511_, v_n_3508_, v_xs_3499_);
lean_dec_ref(v_ty_3511_);
v___x_3514_ = l_Lean_mkForall(v_n_3510_, v_bi_3512_, v_ty_3513_, v_x_3504_);
v___x_3515_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0_spec__0(v_xs_3499_, v_lctx_3500_, v_usedLetOnly_3501_, v_generalizeNondepLet_3502_, v_n_3508_, v___x_3514_);
return v___x_3515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0___boxed(lean_object* v_xs_3540_, lean_object* v_lctx_3541_, lean_object* v_usedLetOnly_3542_, lean_object* v_generalizeNondepLet_3543_, lean_object* v_x_3544_, lean_object* v_x_3545_){
_start:
{
uint8_t v_usedLetOnly_boxed_3546_; uint8_t v_generalizeNondepLet_boxed_3547_; lean_object* v_res_3548_; 
v_usedLetOnly_boxed_3546_ = lean_unbox(v_usedLetOnly_3542_);
v_generalizeNondepLet_boxed_3547_ = lean_unbox(v_generalizeNondepLet_3543_);
v_res_3548_ = l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0(v_xs_3540_, v_lctx_3541_, v_usedLetOnly_boxed_3546_, v_generalizeNondepLet_boxed_3547_, v_x_3544_, v_x_3545_);
lean_dec(v_x_3544_);
lean_dec_ref(v_xs_3540_);
return v_res_3548_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkForall(lean_object* v_lctx_3549_, lean_object* v_xs_3550_, lean_object* v_b_3551_, uint8_t v_usedLetOnly_3552_, uint8_t v_generalizeNondepLet_3553_){
_start:
{
lean_object* v_b_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; 
v_b_3554_ = lean_expr_abstract(v_b_3551_, v_xs_3550_);
v___x_3555_ = lean_array_get_size(v_xs_3550_);
v___x_3556_ = l_Nat_foldRev___at___00Lean_LocalContext_mkForall_spec__0(v_xs_3550_, v_lctx_3549_, v_usedLetOnly_3552_, v_generalizeNondepLet_3553_, v___x_3555_, v_b_3554_);
return v___x_3556_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_mkForall___boxed(lean_object* v_lctx_3557_, lean_object* v_xs_3558_, lean_object* v_b_3559_, lean_object* v_usedLetOnly_3560_, lean_object* v_generalizeNondepLet_3561_){
_start:
{
uint8_t v_usedLetOnly_boxed_3562_; uint8_t v_generalizeNondepLet_boxed_3563_; lean_object* v_res_3564_; 
v_usedLetOnly_boxed_3562_ = lean_unbox(v_usedLetOnly_3560_);
v_generalizeNondepLet_boxed_3563_ = lean_unbox(v_generalizeNondepLet_3561_);
v_res_3564_ = l_Lean_LocalContext_mkForall(v_lctx_3557_, v_xs_3558_, v_b_3559_, v_usedLetOnly_boxed_3562_, v_generalizeNondepLet_boxed_3563_);
lean_dec_ref(v_b_3559_);
lean_dec_ref(v_xs_3558_);
return v_res_3564_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM___redArg___lam__0(lean_object* v_toPure_3565_, lean_object* v_p_3566_, lean_object* v_d_3567_){
_start:
{
if (lean_obj_tag(v_d_3567_) == 0)
{
uint8_t v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
lean_dec(v_p_3566_);
v___x_3568_ = 0;
v___x_3569_ = lean_box(v___x_3568_);
v___x_3570_ = lean_apply_2(v_toPure_3565_, lean_box(0), v___x_3569_);
return v___x_3570_;
}
else
{
lean_object* v_val_3571_; lean_object* v___x_3572_; 
lean_dec(v_toPure_3565_);
v_val_3571_ = lean_ctor_get(v_d_3567_, 0);
lean_inc(v_val_3571_);
lean_dec_ref_known(v_d_3567_, 1);
v___x_3572_ = lean_apply_1(v_p_3566_, v_val_3571_);
return v___x_3572_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM___redArg(lean_object* v_inst_3573_, lean_object* v_lctx_3574_, lean_object* v_p_3575_){
_start:
{
lean_object* v_toApplicative_3576_; lean_object* v_decls_3577_; lean_object* v_toPure_3578_; lean_object* v___f_3579_; lean_object* v___x_3580_; 
v_toApplicative_3576_ = lean_ctor_get(v_inst_3573_, 0);
v_decls_3577_ = lean_ctor_get(v_lctx_3574_, 1);
lean_inc_ref(v_decls_3577_);
lean_dec_ref(v_lctx_3574_);
v_toPure_3578_ = lean_ctor_get(v_toApplicative_3576_, 1);
lean_inc(v_toPure_3578_);
v___f_3579_ = lean_alloc_closure((void*)(l_Lean_LocalContext_anyM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3579_, 0, v_toPure_3578_);
lean_closure_set(v___f_3579_, 1, v_p_3575_);
v___x_3580_ = l_Lean_PersistentArray_anyM___redArg(v_inst_3573_, v_decls_3577_, v___f_3579_);
return v___x_3580_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_anyM(lean_object* v_m_3581_, lean_object* v_inst_3582_, lean_object* v_lctx_3583_, lean_object* v_p_3584_){
_start:
{
lean_object* v_toApplicative_3585_; lean_object* v_decls_3586_; lean_object* v_toPure_3587_; lean_object* v___f_3588_; lean_object* v___x_3589_; 
v_toApplicative_3585_ = lean_ctor_get(v_inst_3582_, 0);
v_decls_3586_ = lean_ctor_get(v_lctx_3583_, 1);
lean_inc_ref(v_decls_3586_);
lean_dec_ref(v_lctx_3583_);
v_toPure_3587_ = lean_ctor_get(v_toApplicative_3585_, 1);
lean_inc(v_toPure_3587_);
v___f_3588_ = lean_alloc_closure((void*)(l_Lean_LocalContext_anyM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3588_, 0, v_toPure_3587_);
lean_closure_set(v___f_3588_, 1, v_p_3584_);
v___x_3589_ = l_Lean_PersistentArray_anyM___redArg(v_inst_3582_, v_decls_3586_, v___f_3588_);
return v___x_3589_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__0(lean_object* v_toPure_3590_, uint8_t v_b_3591_){
_start:
{
if (v_b_3591_ == 0)
{
uint8_t v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; 
v___x_3592_ = 1;
v___x_3593_ = lean_box(v___x_3592_);
v___x_3594_ = lean_apply_2(v_toPure_3590_, lean_box(0), v___x_3593_);
return v___x_3594_;
}
else
{
uint8_t v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; 
v___x_3595_ = 0;
v___x_3596_ = lean_box(v___x_3595_);
v___x_3597_ = lean_apply_2(v_toPure_3590_, lean_box(0), v___x_3596_);
return v___x_3597_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__0___boxed(lean_object* v_toPure_3598_, lean_object* v_b_3599_){
_start:
{
uint8_t v_b_boxed_3600_; lean_object* v_res_3601_; 
v_b_boxed_3600_ = lean_unbox(v_b_3599_);
v_res_3601_ = l_Lean_LocalContext_allM___redArg___lam__0(v_toPure_3598_, v_b_boxed_3600_);
return v_res_3601_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg___lam__2(lean_object* v_toPure_3602_, lean_object* v_toBind_3603_, lean_object* v___f_3604_, lean_object* v_p_3605_, lean_object* v_v_3606_){
_start:
{
if (lean_obj_tag(v_v_3606_) == 0)
{
uint8_t v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; 
lean_dec(v_p_3605_);
v___x_3607_ = 1;
v___x_3608_ = lean_box(v___x_3607_);
v___x_3609_ = lean_apply_2(v_toPure_3602_, lean_box(0), v___x_3608_);
v___x_3610_ = lean_apply_4(v_toBind_3603_, lean_box(0), lean_box(0), v___x_3609_, v___f_3604_);
return v___x_3610_;
}
else
{
lean_object* v_val_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; 
lean_dec(v_toPure_3602_);
v_val_3611_ = lean_ctor_get(v_v_3606_, 0);
lean_inc(v_val_3611_);
lean_dec_ref_known(v_v_3606_, 1);
v___x_3612_ = lean_apply_1(v_p_3605_, v_val_3611_);
v___x_3613_ = lean_apply_4(v_toBind_3603_, lean_box(0), lean_box(0), v___x_3612_, v___f_3604_);
return v___x_3613_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM___redArg(lean_object* v_inst_3614_, lean_object* v_lctx_3615_, lean_object* v_p_3616_){
_start:
{
lean_object* v_toApplicative_3617_; lean_object* v_decls_3618_; lean_object* v_toBind_3619_; lean_object* v_toPure_3620_; lean_object* v___f_3621_; lean_object* v___f_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; 
v_toApplicative_3617_ = lean_ctor_get(v_inst_3614_, 0);
v_decls_3618_ = lean_ctor_get(v_lctx_3615_, 1);
lean_inc_ref(v_decls_3618_);
lean_dec_ref(v_lctx_3615_);
v_toBind_3619_ = lean_ctor_get(v_inst_3614_, 1);
lean_inc_n(v_toBind_3619_, 2);
v_toPure_3620_ = lean_ctor_get(v_toApplicative_3617_, 1);
lean_inc_n(v_toPure_3620_, 2);
v___f_3621_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3621_, 0, v_toPure_3620_);
lean_inc_ref(v___f_3621_);
v___f_3622_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3622_, 0, v_toPure_3620_);
lean_closure_set(v___f_3622_, 1, v_toBind_3619_);
lean_closure_set(v___f_3622_, 2, v___f_3621_);
lean_closure_set(v___f_3622_, 3, v_p_3616_);
v___x_3623_ = l_Lean_PersistentArray_anyM___redArg(v_inst_3614_, v_decls_3618_, v___f_3622_);
v___x_3624_ = lean_apply_4(v_toBind_3619_, lean_box(0), lean_box(0), v___x_3623_, v___f_3621_);
return v___x_3624_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_allM(lean_object* v_m_3625_, lean_object* v_inst_3626_, lean_object* v_lctx_3627_, lean_object* v_p_3628_){
_start:
{
lean_object* v_toApplicative_3629_; lean_object* v_decls_3630_; lean_object* v_toBind_3631_; lean_object* v_toPure_3632_; lean_object* v___f_3633_; lean_object* v___f_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v_toApplicative_3629_ = lean_ctor_get(v_inst_3626_, 0);
v_decls_3630_ = lean_ctor_get(v_lctx_3627_, 1);
lean_inc_ref(v_decls_3630_);
lean_dec_ref(v_lctx_3627_);
v_toBind_3631_ = lean_ctor_get(v_inst_3626_, 1);
lean_inc_n(v_toBind_3631_, 2);
v_toPure_3632_ = lean_ctor_get(v_toApplicative_3629_, 1);
lean_inc_n(v_toPure_3632_, 2);
v___f_3633_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3633_, 0, v_toPure_3632_);
lean_inc_ref(v___f_3633_);
v___f_3634_ = lean_alloc_closure((void*)(l_Lean_LocalContext_allM___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3634_, 0, v_toPure_3632_);
lean_closure_set(v___f_3634_, 1, v_toBind_3631_);
lean_closure_set(v___f_3634_, 2, v___f_3633_);
lean_closure_set(v___f_3634_, 3, v_p_3628_);
v___x_3635_ = l_Lean_PersistentArray_anyM___redArg(v_inst_3626_, v_decls_3630_, v___f_3634_);
v___x_3636_ = lean_apply_4(v_toBind_3631_, lean_box(0), lean_box(0), v___x_3635_, v___f_3633_);
return v___x_3636_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_any___lam__0(lean_object* v_p_3637_, lean_object* v_d_3638_){
_start:
{
if (lean_obj_tag(v_d_3638_) == 0)
{
uint8_t v___x_3639_; 
lean_dec_ref(v_p_3637_);
v___x_3639_ = 0;
return v___x_3639_;
}
else
{
lean_object* v_val_3640_; lean_object* v___x_3641_; uint8_t v___x_3642_; 
v_val_3640_ = lean_ctor_get(v_d_3638_, 0);
lean_inc(v_val_3640_);
lean_dec_ref_known(v_d_3638_, 1);
v___x_3641_ = lean_apply_1(v_p_3637_, v_val_3640_);
v___x_3642_ = lean_unbox(v___x_3641_);
return v___x_3642_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_any___lam__0___boxed(lean_object* v_p_3643_, lean_object* v_d_3644_){
_start:
{
uint8_t v_res_3645_; lean_object* v_r_3646_; 
v_res_3645_ = l_Lean_LocalContext_any___lam__0(v_p_3643_, v_d_3644_);
v_r_3646_ = lean_box(v_res_3645_);
return v_r_3646_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_any(lean_object* v_lctx_3647_, lean_object* v_p_3648_){
_start:
{
lean_object* v___x_3649_; lean_object* v_decls_3650_; lean_object* v___f_3651_; lean_object* v___x_3652_; uint8_t v___x_3653_; 
v___x_3649_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v_decls_3650_ = lean_ctor_get(v_lctx_3647_, 1);
lean_inc_ref(v_decls_3650_);
lean_dec_ref(v_lctx_3647_);
v___f_3651_ = lean_alloc_closure((void*)(l_Lean_LocalContext_any___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3651_, 0, v_p_3648_);
v___x_3652_ = l_Lean_PersistentArray_anyM___redArg(v___x_3649_, v_decls_3650_, v___f_3651_);
v___x_3653_ = lean_unbox(v___x_3652_);
lean_dec(v___x_3652_);
return v___x_3653_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_any___boxed(lean_object* v_lctx_3654_, lean_object* v_p_3655_){
_start:
{
uint8_t v_res_3656_; lean_object* v_r_3657_; 
v_res_3656_ = l_Lean_LocalContext_any(v_lctx_3654_, v_p_3655_);
v_r_3657_ = lean_box(v_res_3656_);
return v_r_3657_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_all___lam__0(lean_object* v_p_3658_, lean_object* v_v_3659_){
_start:
{
if (lean_obj_tag(v_v_3659_) == 0)
{
uint8_t v___x_3660_; 
lean_dec_ref(v_p_3658_);
v___x_3660_ = 0;
return v___x_3660_;
}
else
{
lean_object* v_val_3661_; lean_object* v___x_3662_; uint8_t v___x_3663_; 
v_val_3661_ = lean_ctor_get(v_v_3659_, 0);
lean_inc(v_val_3661_);
lean_dec_ref_known(v_v_3659_, 1);
v___x_3662_ = lean_apply_1(v_p_3658_, v_val_3661_);
v___x_3663_ = lean_unbox(v___x_3662_);
if (v___x_3663_ == 0)
{
uint8_t v___x_3664_; 
v___x_3664_ = 1;
return v___x_3664_;
}
else
{
uint8_t v___x_3665_; 
v___x_3665_ = 0;
return v___x_3665_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_all___lam__0___boxed(lean_object* v_p_3666_, lean_object* v_v_3667_){
_start:
{
uint8_t v_res_3668_; lean_object* v_r_3669_; 
v_res_3668_ = l_Lean_LocalContext_all___lam__0(v_p_3666_, v_v_3667_);
v_r_3669_ = lean_box(v_res_3668_);
return v_r_3669_;
}
}
LEAN_EXPORT uint8_t l_Lean_LocalContext_all(lean_object* v_lctx_3670_, lean_object* v_p_3671_){
_start:
{
lean_object* v___x_3672_; lean_object* v_decls_3673_; lean_object* v___f_3674_; lean_object* v___x_3675_; uint8_t v___x_3676_; 
v___x_3672_ = ((lean_object*)(l_Lean_LocalContext_foldl___redArg___closed__9));
v_decls_3673_ = lean_ctor_get(v_lctx_3670_, 1);
lean_inc_ref(v_decls_3673_);
lean_dec_ref(v_lctx_3670_);
v___f_3674_ = lean_alloc_closure((void*)(l_Lean_LocalContext_all___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3674_, 0, v_p_3671_);
v___x_3675_ = l_Lean_PersistentArray_anyM___redArg(v___x_3672_, v_decls_3673_, v___f_3674_);
v___x_3676_ = lean_unbox(v___x_3675_);
lean_dec(v___x_3675_);
if (v___x_3676_ == 0)
{
uint8_t v___x_3677_; 
v___x_3677_ = 1;
return v___x_3677_;
}
else
{
uint8_t v___x_3678_; 
v___x_3678_ = 0;
return v___x_3678_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_all___boxed(lean_object* v_lctx_3679_, lean_object* v_p_3680_){
_start:
{
uint8_t v_res_3681_; lean_object* v_r_3682_; 
v_res_3681_ = l_Lean_LocalContext_all(v_lctx_3679_, v_p_3680_);
v_r_3682_ = lean_box(v_res_3681_);
return v_r_3682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___redArg(lean_object* v_i_3683_, lean_object* v_a_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_){
_start:
{
lean_object* v_zero_3687_; uint8_t v_isZero_3688_; 
v_zero_3687_ = lean_unsigned_to_nat(0u);
v_isZero_3688_ = lean_nat_dec_eq(v_i_3683_, v_zero_3687_);
if (v_isZero_3688_ == 1)
{
lean_object* v___x_3689_; lean_object* v___x_3690_; 
lean_dec(v_i_3683_);
v___x_3689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3689_, 0, v_a_3684_);
lean_ctor_set(v___x_3689_, 1, v___y_3685_);
v___x_3690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3689_);
lean_ctor_set(v___x_3690_, 1, v___y_3686_);
return v___x_3690_;
}
else
{
lean_object* v_decls_3691_; lean_object* v_size_3692_; lean_object* v___x_3693_; lean_object* v_one_3694_; lean_object* v_n_3695_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3699_; lean_object* v___y_3700_; lean_object* v___y_3704_; lean_object* v___y_3705_; lean_object* v___y_3712_; lean_object* v___y_3713_; uint8_t v___y_3714_; lean_object* v___y_3718_; lean_object* v___y_3719_; lean_object* v___y_3724_; uint8_t v___x_3728_; 
v_decls_3691_ = lean_ctor_get(v_a_3684_, 1);
v_size_3692_ = lean_ctor_get(v_decls_3691_, 2);
v___x_3693_ = lean_box(0);
v_one_3694_ = lean_unsigned_to_nat(1u);
v_n_3695_ = lean_nat_sub(v_i_3683_, v_one_3694_);
lean_dec(v_i_3683_);
v___x_3728_ = lean_nat_dec_lt(v_n_3695_, v_size_3692_);
if (v___x_3728_ == 0)
{
lean_object* v___x_3729_; 
v___x_3729_ = l_outOfBounds___redArg(v___x_3693_);
v___y_3724_ = v___x_3729_;
goto v___jp_3723_;
}
else
{
lean_object* v___x_3730_; 
v___x_3730_ = l_Lean_PersistentArray_get_x21___redArg(v___x_3693_, v_decls_3691_, v_n_3695_);
v___y_3724_ = v___x_3730_;
goto v___jp_3723_;
}
v___jp_3696_:
{
lean_object* v___x_3701_; 
v___x_3701_ = l_Lean_LocalContext_setUserName(v_a_3684_, v___y_3700_, v___y_3698_);
v_i_3683_ = v_n_3695_;
v_a_3684_ = v___x_3701_;
v___y_3685_ = v___y_3697_;
v___y_3686_ = v___y_3699_;
goto _start;
}
v___jp_3703_:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v_fst_3708_; lean_object* v_snd_3709_; lean_object* v_fvarId_3710_; 
lean_inc(v___y_3705_);
v___x_3706_ = l_Lean_NameSet_insert(v___y_3685_, v___y_3705_);
v___x_3707_ = l_Lean_sanitizeName(v___y_3705_, v___y_3686_);
v_fst_3708_ = lean_ctor_get(v___x_3707_, 0);
lean_inc(v_fst_3708_);
v_snd_3709_ = lean_ctor_get(v___x_3707_, 1);
lean_inc(v_snd_3709_);
lean_dec_ref(v___x_3707_);
v_fvarId_3710_ = lean_ctor_get(v___y_3704_, 1);
lean_inc(v_fvarId_3710_);
lean_dec_ref(v___y_3704_);
v___y_3697_ = v___x_3706_;
v___y_3698_ = v_fst_3708_;
v___y_3699_ = v_snd_3709_;
v___y_3700_ = v_fvarId_3710_;
goto v___jp_3696_;
}
v___jp_3711_:
{
if (v___y_3714_ == 0)
{
lean_object* v___x_3715_; 
lean_dec_ref(v___y_3712_);
v___x_3715_ = l_Lean_NameSet_insert(v___y_3685_, v___y_3713_);
v_i_3683_ = v_n_3695_;
v___y_3685_ = v___x_3715_;
goto _start;
}
else
{
v___y_3704_ = v___y_3712_;
v___y_3705_ = v___y_3713_;
goto v___jp_3703_;
}
}
v___jp_3717_:
{
uint8_t v___x_3720_; 
v___x_3720_ = l_Lean_Name_hasMacroScopes(v___y_3719_);
if (v___x_3720_ == 0)
{
lean_object* v_userName_3721_; uint8_t v___x_3722_; 
v_userName_3721_ = lean_ctor_get(v___y_3718_, 2);
v___x_3722_ = l_Lean_NameSet_contains(v___y_3685_, v_userName_3721_);
v___y_3712_ = v___y_3718_;
v___y_3713_ = v___y_3719_;
v___y_3714_ = v___x_3722_;
goto v___jp_3711_;
}
else
{
v___y_3704_ = v___y_3718_;
v___y_3705_ = v___y_3719_;
goto v___jp_3703_;
}
}
v___jp_3723_:
{
if (lean_obj_tag(v___y_3724_) == 0)
{
v_i_3683_ = v_n_3695_;
goto _start;
}
else
{
lean_object* v_val_3726_; lean_object* v_userName_3727_; 
v_val_3726_ = lean_ctor_get(v___y_3724_, 0);
lean_inc(v_val_3726_);
lean_dec_ref_known(v___y_3724_, 1);
v_userName_3727_ = lean_ctor_get(v_val_3726_, 2);
lean_inc(v_userName_3727_);
v___y_3718_ = v_val_3726_;
v___y_3719_ = v_userName_3727_;
goto v___jp_3717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_sanitizeNames(lean_object* v_lctx_3731_, lean_object* v_a_3732_){
_start:
{
lean_object* v_options_3733_; uint8_t v___x_3734_; 
v_options_3733_ = lean_ctor_get(v_a_3732_, 0);
v___x_3734_ = l_Lean_getSanitizeNames(v_options_3733_);
if (v___x_3734_ == 0)
{
lean_object* v___x_3735_; 
v___x_3735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3735_, 0, v_lctx_3731_);
lean_ctor_set(v___x_3735_, 1, v_a_3732_);
return v___x_3735_;
}
else
{
lean_object* v_decls_3736_; lean_object* v_size_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v_fst_3740_; lean_object* v_snd_3741_; lean_object* v_fst_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
v_decls_3736_ = lean_ctor_get(v_lctx_3731_, 1);
v_size_3737_ = lean_ctor_get(v_decls_3736_, 2);
lean_inc(v_size_3737_);
v___x_3738_ = l_Lean_NameSet_empty;
v___x_3739_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___redArg(v_size_3737_, v_lctx_3731_, v___x_3738_, v_a_3732_);
v_fst_3740_ = lean_ctor_get(v___x_3739_, 0);
lean_inc(v_fst_3740_);
v_snd_3741_ = lean_ctor_get(v___x_3739_, 1);
lean_inc(v_snd_3741_);
lean_dec_ref(v___x_3739_);
v_fst_3742_ = lean_ctor_get(v_fst_3740_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v_fst_3740_);
if (v_isSharedCheck_3749_ == 0)
{
lean_object* v_unused_3750_; 
v_unused_3750_ = lean_ctor_get(v_fst_3740_, 1);
lean_dec(v_unused_3750_);
v___x_3744_ = v_fst_3740_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_fst_3742_);
lean_dec(v_fst_3740_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
lean_ctor_set(v___x_3744_, 1, v_snd_3741_);
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_fst_3742_);
lean_ctor_set(v_reuseFailAlloc_3748_, 1, v_snd_3741_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
return v___x_3747_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0(lean_object* v_n_3751_, lean_object* v_i_3752_, lean_object* v_a_3753_, lean_object* v_a_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_){
_start:
{
lean_object* v___x_3757_; 
v___x_3757_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___redArg(v_i_3752_, v_a_3754_, v___y_3755_, v___y_3756_);
return v___x_3757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0___boxed(lean_object* v_n_3758_, lean_object* v_i_3759_, lean_object* v_a_3760_, lean_object* v_a_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_){
_start:
{
lean_object* v_res_3764_; 
v_res_3764_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_LocalContext_sanitizeNames_spec__0(v_n_3758_, v_i_3759_, v_a_3760_, v_a_3761_, v___y_3762_, v___y_3763_);
lean_dec(v_n_3758_);
return v_res_3764_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_getRoundtrippingUserName_x3f(lean_object* v_lctx_3765_, lean_object* v_fvarId_3766_){
_start:
{
lean_object* v___y_3768_; lean_object* v___y_3769_; lean_object* v___y_3770_; lean_object* v___y_3775_; lean_object* v___y_3776_; lean_object* v___y_3777_; lean_object* v___x_3779_; 
lean_inc_ref(v_lctx_3765_);
v___x_3779_ = lean_local_ctx_find(v_lctx_3765_, v_fvarId_3766_);
if (lean_obj_tag(v___x_3779_) == 0)
{
lean_object* v___x_3780_; 
lean_dec_ref(v_lctx_3765_);
v___x_3780_ = lean_box(0);
return v___x_3780_;
}
else
{
lean_object* v_val_3781_; lean_object* v___y_3783_; lean_object* v_userName_3788_; 
v_val_3781_ = lean_ctor_get(v___x_3779_, 0);
lean_inc(v_val_3781_);
lean_dec_ref_known(v___x_3779_, 1);
v_userName_3788_ = lean_ctor_get(v_val_3781_, 2);
lean_inc(v_userName_3788_);
v___y_3783_ = v_userName_3788_;
goto v___jp_3782_;
v___jp_3782_:
{
lean_object* v___x_3784_; 
v___x_3784_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_3765_, v___y_3783_);
lean_dec_ref(v_lctx_3765_);
if (lean_obj_tag(v___x_3784_) == 0)
{
lean_object* v___x_3785_; 
lean_dec(v___y_3783_);
lean_dec(v_val_3781_);
v___x_3785_ = lean_box(0);
return v___x_3785_;
}
else
{
lean_object* v_val_3786_; lean_object* v_fvarId_3787_; 
v_val_3786_ = lean_ctor_get(v___x_3784_, 0);
lean_inc(v_val_3786_);
lean_dec_ref_known(v___x_3784_, 1);
v_fvarId_3787_ = lean_ctor_get(v_val_3781_, 1);
lean_inc(v_fvarId_3787_);
lean_dec(v_val_3781_);
v___y_3775_ = v___y_3783_;
v___y_3776_ = v_val_3786_;
v___y_3777_ = v_fvarId_3787_;
goto v___jp_3774_;
}
}
}
v___jp_3767_:
{
uint8_t v___x_3771_; 
v___x_3771_ = l_Lean_instBEqFVarId_beq(v___y_3769_, v___y_3770_);
lean_dec(v___y_3770_);
lean_dec(v___y_3769_);
if (v___x_3771_ == 0)
{
lean_object* v___x_3772_; 
lean_dec(v___y_3768_);
v___x_3772_ = lean_box(0);
return v___x_3772_;
}
else
{
lean_object* v___x_3773_; 
v___x_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3773_, 0, v___y_3768_);
return v___x_3773_;
}
}
v___jp_3774_:
{
lean_object* v_fvarId_3778_; 
v_fvarId_3778_ = lean_ctor_get(v___y_3776_, 1);
lean_inc(v_fvarId_3778_);
lean_dec_ref(v___y_3776_);
v___y_3768_ = v___y_3775_;
v___y_3769_ = v___y_3777_;
v___y_3770_ = v_fvarId_3778_;
goto v___jp_3767_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0(size_t v_sz_3789_, size_t v_i_3790_, lean_object* v_bs_3791_){
_start:
{
uint8_t v___x_3792_; 
v___x_3792_ = lean_usize_dec_lt(v_i_3790_, v_sz_3789_);
if (v___x_3792_ == 0)
{
lean_object* v___x_3793_; 
v___x_3793_ = l_unsafeCast___redArg(v_bs_3791_);
lean_dec_ref(v_bs_3791_);
return v___x_3793_;
}
else
{
lean_object* v_v_3794_; lean_object* v___x_3795_; lean_object* v_snd_3796_; lean_object* v___x_3797_; lean_object* v_bs_x27_3798_; size_t v___x_3799_; size_t v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v_v_3794_ = lean_array_uget_borrowed(v_bs_3791_, v_i_3790_);
v___x_3795_ = l_unsafeCast___redArg(v_v_3794_);
v_snd_3796_ = lean_ctor_get(v___x_3795_, 1);
lean_inc(v_snd_3796_);
lean_dec(v___x_3795_);
v___x_3797_ = lean_unsigned_to_nat(0u);
v_bs_x27_3798_ = lean_array_uset(v_bs_3791_, v_i_3790_, v___x_3797_);
v___x_3799_ = ((size_t)1ULL);
v___x_3800_ = lean_usize_add(v_i_3790_, v___x_3799_);
v___x_3801_ = l_unsafeCast___redArg(v_snd_3796_);
lean_dec(v_snd_3796_);
v___x_3802_ = lean_array_uset(v_bs_x27_3798_, v_i_3790_, v___x_3801_);
v_i_3790_ = v___x_3800_;
v_bs_3791_ = v___x_3802_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0___boxed(lean_object* v_sz_3804_, lean_object* v_i_3805_, lean_object* v_bs_3806_){
_start:
{
size_t v_sz_boxed_3807_; size_t v_i_boxed_3808_; lean_object* v_res_3809_; 
v_sz_boxed_3807_ = lean_unbox_usize(v_sz_3804_);
lean_dec(v_sz_3804_);
v_i_boxed_3808_ = lean_unbox_usize(v_i_3805_);
lean_dec(v_i_3805_);
v_res_3809_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0(v_sz_boxed_3807_, v_i_boxed_3808_, v_bs_3806_);
return v_res_3809_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1(lean_object* v_lctx_3810_, size_t v_sz_3811_, size_t v_i_3812_, lean_object* v_bs_3813_){
_start:
{
uint8_t v___x_3814_; 
v___x_3814_ = lean_usize_dec_lt(v_i_3812_, v_sz_3811_);
if (v___x_3814_ == 0)
{
lean_object* v___x_3815_; 
v___x_3815_ = l_unsafeCast___redArg(v_bs_3813_);
lean_dec_ref(v_bs_3813_);
return v___x_3815_;
}
else
{
lean_object* v_fvarIdToDecl_3816_; lean_object* v_v_3817_; lean_object* v___x_3818_; lean_object* v_bs_x27_3819_; lean_object* v___y_3821_; lean_object* v___x_3827_; lean_object* v___x_3828_; 
v_fvarIdToDecl_3816_ = lean_ctor_get(v_lctx_3810_, 0);
v_v_3817_ = lean_array_uget(v_bs_3813_, v_i_3812_);
v___x_3818_ = lean_unsigned_to_nat(0u);
v_bs_x27_3819_ = lean_array_uset(v_bs_3813_, v_i_3812_, v___x_3818_);
v___x_3827_ = l_unsafeCast___redArg(v_v_3817_);
lean_dec(v_v_3817_);
v___x_3828_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_LocalContext_find_x3f_spec__0___redArg(v_fvarIdToDecl_3816_, v___x_3827_);
if (lean_obj_tag(v___x_3828_) == 0)
{
lean_object* v___x_3829_; 
v___x_3829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3818_);
lean_ctor_set(v___x_3829_, 1, v___x_3827_);
v___y_3821_ = v___x_3829_;
goto v___jp_3820_;
}
else
{
lean_object* v_val_3830_; lean_object* v_index_3831_; lean_object* v___x_3832_; 
v_val_3830_ = lean_ctor_get(v___x_3828_, 0);
lean_inc(v_val_3830_);
lean_dec_ref_known(v___x_3828_, 1);
v_index_3831_ = lean_ctor_get(v_val_3830_, 0);
lean_inc(v_index_3831_);
lean_dec(v_val_3830_);
v___x_3832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3832_, 0, v_index_3831_);
lean_ctor_set(v___x_3832_, 1, v___x_3827_);
v___y_3821_ = v___x_3832_;
goto v___jp_3820_;
}
v___jp_3820_:
{
size_t v___x_3822_; size_t v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; 
v___x_3822_ = ((size_t)1ULL);
v___x_3823_ = lean_usize_add(v_i_3812_, v___x_3822_);
v___x_3824_ = l_unsafeCast___redArg(v___y_3821_);
lean_dec_ref(v___y_3821_);
v___x_3825_ = lean_array_uset(v_bs_x27_3819_, v_i_3812_, v___x_3824_);
v_i_3812_ = v___x_3823_;
v_bs_3813_ = v___x_3825_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1___boxed(lean_object* v_lctx_3833_, lean_object* v_sz_3834_, lean_object* v_i_3835_, lean_object* v_bs_3836_){
_start:
{
size_t v_sz_boxed_3837_; size_t v_i_boxed_3838_; lean_object* v_res_3839_; 
v_sz_boxed_3837_ = lean_unbox_usize(v_sz_3834_);
lean_dec(v_sz_3834_);
v_i_boxed_3838_ = lean_unbox_usize(v_i_3835_);
lean_dec(v_i_3835_);
v_res_3839_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1(v_lctx_3833_, v_sz_boxed_3837_, v_i_boxed_3838_, v_bs_3836_);
lean_dec_ref(v_lctx_3833_);
return v_res_3839_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(lean_object* v_hi_3840_, lean_object* v_pivot_3841_, lean_object* v_as_3842_, lean_object* v_i_3843_, lean_object* v_k_3844_){
_start:
{
uint8_t v___x_3845_; 
v___x_3845_ = lean_nat_dec_lt(v_k_3844_, v_hi_3840_);
if (v___x_3845_ == 0)
{
lean_object* v___x_3846_; lean_object* v___x_3847_; 
lean_dec(v_k_3844_);
v___x_3846_ = lean_array_fswap(v_as_3842_, v_i_3843_, v_hi_3840_);
v___x_3847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3847_, 0, v_i_3843_);
lean_ctor_set(v___x_3847_, 1, v___x_3846_);
return v___x_3847_;
}
else
{
lean_object* v___x_3848_; lean_object* v_fst_3849_; lean_object* v_fst_3850_; uint8_t v___x_3851_; 
v___x_3848_ = lean_array_fget_borrowed(v_as_3842_, v_k_3844_);
v_fst_3849_ = lean_ctor_get(v___x_3848_, 0);
v_fst_3850_ = lean_ctor_get(v_pivot_3841_, 0);
v___x_3851_ = lean_nat_dec_lt(v_fst_3849_, v_fst_3850_);
if (v___x_3851_ == 0)
{
lean_object* v___x_3852_; lean_object* v___x_3853_; 
v___x_3852_ = lean_unsigned_to_nat(1u);
v___x_3853_ = lean_nat_add(v_k_3844_, v___x_3852_);
lean_dec(v_k_3844_);
v_k_3844_ = v___x_3853_;
goto _start;
}
else
{
lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; 
v___x_3855_ = lean_array_fswap(v_as_3842_, v_i_3843_, v_k_3844_);
v___x_3856_ = lean_unsigned_to_nat(1u);
v___x_3857_ = lean_nat_add(v_i_3843_, v___x_3856_);
lean_dec(v_i_3843_);
v___x_3858_ = lean_nat_add(v_k_3844_, v___x_3856_);
lean_dec(v_k_3844_);
v_as_3842_ = v___x_3855_;
v_i_3843_ = v___x_3857_;
v_k_3844_ = v___x_3858_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg___boxed(lean_object* v_hi_3860_, lean_object* v_pivot_3861_, lean_object* v_as_3862_, lean_object* v_i_3863_, lean_object* v_k_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(v_hi_3860_, v_pivot_3861_, v_as_3862_, v_i_3863_, v_k_3864_);
lean_dec_ref(v_pivot_3861_);
lean_dec(v_hi_3860_);
return v_res_3865_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(lean_object* v_h_3866_, lean_object* v_i_3867_){
_start:
{
lean_object* v_fst_3868_; lean_object* v_fst_3869_; uint8_t v___x_3870_; 
v_fst_3868_ = lean_ctor_get(v_h_3866_, 0);
v_fst_3869_ = lean_ctor_get(v_i_3867_, 0);
v___x_3870_ = lean_nat_dec_lt(v_fst_3868_, v_fst_3869_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0___boxed(lean_object* v_h_3871_, lean_object* v_i_3872_){
_start:
{
uint8_t v_res_3873_; lean_object* v_r_3874_; 
v_res_3873_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v_h_3871_, v_i_3872_);
lean_dec_ref(v_i_3872_);
lean_dec_ref(v_h_3871_);
v_r_3874_ = lean_box(v_res_3873_);
return v_r_3874_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(lean_object* v_n_3875_, lean_object* v_as_3876_, lean_object* v_lo_3877_, lean_object* v_hi_3878_){
_start:
{
lean_object* v___y_3880_; uint8_t v___x_3890_; 
v___x_3890_ = lean_nat_dec_lt(v_lo_3877_, v_hi_3878_);
if (v___x_3890_ == 0)
{
lean_dec(v_lo_3877_);
return v_as_3876_;
}
else
{
lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v_mid_3893_; lean_object* v___y_3895_; lean_object* v___y_3901_; lean_object* v___x_3906_; lean_object* v___x_3907_; uint8_t v___x_3908_; 
v___x_3891_ = lean_nat_add(v_lo_3877_, v_hi_3878_);
v___x_3892_ = lean_unsigned_to_nat(1u);
v_mid_3893_ = lean_nat_shiftr(v___x_3891_, v___x_3892_);
lean_dec(v___x_3891_);
v___x_3906_ = lean_array_fget_borrowed(v_as_3876_, v_mid_3893_);
v___x_3907_ = lean_array_fget_borrowed(v_as_3876_, v_lo_3877_);
v___x_3908_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v___x_3906_, v___x_3907_);
if (v___x_3908_ == 0)
{
v___y_3901_ = v_as_3876_;
goto v___jp_3900_;
}
else
{
lean_object* v___x_3909_; 
v___x_3909_ = lean_array_fswap(v_as_3876_, v_lo_3877_, v_mid_3893_);
v___y_3901_ = v___x_3909_;
goto v___jp_3900_;
}
v___jp_3894_:
{
lean_object* v___x_3896_; lean_object* v___x_3897_; uint8_t v___x_3898_; 
v___x_3896_ = lean_array_fget_borrowed(v___y_3895_, v_mid_3893_);
v___x_3897_ = lean_array_fget_borrowed(v___y_3895_, v_hi_3878_);
v___x_3898_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v___x_3896_, v___x_3897_);
if (v___x_3898_ == 0)
{
lean_dec(v_mid_3893_);
v___y_3880_ = v___y_3895_;
goto v___jp_3879_;
}
else
{
lean_object* v___x_3899_; 
v___x_3899_ = lean_array_fswap(v___y_3895_, v_mid_3893_, v_hi_3878_);
lean_dec(v_mid_3893_);
v___y_3880_ = v___x_3899_;
goto v___jp_3879_;
}
}
v___jp_3900_:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; uint8_t v___x_3904_; 
v___x_3902_ = lean_array_fget_borrowed(v___y_3901_, v_hi_3878_);
v___x_3903_ = lean_array_fget_borrowed(v___y_3901_, v_lo_3877_);
v___x_3904_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___lam__0(v___x_3902_, v___x_3903_);
if (v___x_3904_ == 0)
{
v___y_3895_ = v___y_3901_;
goto v___jp_3894_;
}
else
{
lean_object* v___x_3905_; 
v___x_3905_ = lean_array_fswap(v___y_3901_, v_lo_3877_, v_hi_3878_);
v___y_3895_ = v___x_3905_;
goto v___jp_3894_;
}
}
}
v___jp_3879_:
{
lean_object* v_pivot_3881_; lean_object* v___x_3882_; lean_object* v_fst_3883_; lean_object* v_snd_3884_; uint8_t v___x_3885_; 
v_pivot_3881_ = lean_array_fget(v___y_3880_, v_hi_3878_);
lean_inc_n(v_lo_3877_, 2);
v___x_3882_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(v_hi_3878_, v_pivot_3881_, v___y_3880_, v_lo_3877_, v_lo_3877_);
lean_dec(v_pivot_3881_);
v_fst_3883_ = lean_ctor_get(v___x_3882_, 0);
lean_inc(v_fst_3883_);
v_snd_3884_ = lean_ctor_get(v___x_3882_, 1);
lean_inc(v_snd_3884_);
lean_dec_ref(v___x_3882_);
v___x_3885_ = lean_nat_dec_le(v_hi_3878_, v_fst_3883_);
if (v___x_3885_ == 0)
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3886_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v_n_3875_, v_snd_3884_, v_lo_3877_, v_fst_3883_);
v___x_3887_ = lean_unsigned_to_nat(1u);
v___x_3888_ = lean_nat_add(v_fst_3883_, v___x_3887_);
lean_dec(v_fst_3883_);
v_as_3876_ = v___x_3886_;
v_lo_3877_ = v___x_3888_;
goto _start;
}
else
{
lean_dec(v_fst_3883_);
lean_dec(v_lo_3877_);
return v_snd_3884_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg___boxed(lean_object* v_n_3910_, lean_object* v_as_3911_, lean_object* v_lo_3912_, lean_object* v_hi_3913_){
_start:
{
lean_object* v_res_3914_; 
v_res_3914_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v_n_3910_, v_as_3911_, v_lo_3912_, v_hi_3913_);
lean_dec(v_hi_3913_);
lean_dec(v_n_3910_);
return v_res_3914_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_sortFVarsByContextOrder(lean_object* v_lctx_3915_, lean_object* v_hyps_3916_){
_start:
{
lean_object* v___y_3918_; size_t v_sz_3924_; size_t v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v_hyps_3928_; lean_object* v___x_3929_; lean_object* v___y_3931_; lean_object* v___y_3932_; lean_object* v___x_3934_; uint8_t v___x_3935_; 
v_sz_3924_ = lean_array_size(v_hyps_3916_);
v___x_3925_ = ((size_t)0ULL);
v___x_3926_ = l_unsafeCast___redArg(v_hyps_3916_);
v___x_3927_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__1(v_lctx_3915_, v_sz_3924_, v___x_3925_, v___x_3926_);
v_hyps_3928_ = l_unsafeCast___redArg(v___x_3927_);
lean_dec_ref(v___x_3927_);
v___x_3929_ = lean_array_get_size(v_hyps_3928_);
v___x_3934_ = lean_unsigned_to_nat(0u);
v___x_3935_ = lean_nat_dec_eq(v___x_3929_, v___x_3934_);
if (v___x_3935_ == 0)
{
lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___y_3939_; uint8_t v___x_3941_; 
v___x_3936_ = lean_unsigned_to_nat(1u);
v___x_3937_ = lean_nat_sub(v___x_3929_, v___x_3936_);
v___x_3941_ = lean_nat_dec_le(v___x_3934_, v___x_3937_);
if (v___x_3941_ == 0)
{
lean_inc(v___x_3937_);
v___y_3939_ = v___x_3937_;
goto v___jp_3938_;
}
else
{
v___y_3939_ = v___x_3934_;
goto v___jp_3938_;
}
v___jp_3938_:
{
uint8_t v___x_3940_; 
v___x_3940_ = lean_nat_dec_le(v___y_3939_, v___x_3937_);
if (v___x_3940_ == 0)
{
lean_dec(v___x_3937_);
lean_inc(v___y_3939_);
v___y_3931_ = v___y_3939_;
v___y_3932_ = v___y_3939_;
goto v___jp_3930_;
}
else
{
v___y_3931_ = v___y_3939_;
v___y_3932_ = v___x_3937_;
goto v___jp_3930_;
}
}
}
else
{
v___y_3918_ = v_hyps_3928_;
goto v___jp_3917_;
}
v___jp_3917_:
{
size_t v_sz_3919_; size_t v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; 
v_sz_3919_ = lean_array_size(v___y_3918_);
v___x_3920_ = ((size_t)0ULL);
v___x_3921_ = l_unsafeCast___redArg(v___y_3918_);
lean_dec_ref(v___y_3918_);
v___x_3922_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__0(v_sz_3919_, v___x_3920_, v___x_3921_);
v___x_3923_ = l_unsafeCast___redArg(v___x_3922_);
lean_dec_ref(v___x_3922_);
return v___x_3923_;
}
v___jp_3930_:
{
lean_object* v___x_3933_; 
v___x_3933_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v___x_3929_, v_hyps_3928_, v___y_3931_, v___y_3932_);
lean_dec(v___y_3932_);
v___y_3918_ = v___x_3933_;
goto v___jp_3917_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_sortFVarsByContextOrder___boxed(lean_object* v_lctx_3942_, lean_object* v_hyps_3943_){
_start:
{
lean_object* v_res_3944_; 
v_res_3944_ = l_Lean_LocalContext_sortFVarsByContextOrder(v_lctx_3942_, v_hyps_3943_);
lean_dec_ref(v_hyps_3943_);
lean_dec_ref(v_lctx_3942_);
return v_res_3944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2(lean_object* v_n_3945_, lean_object* v_as_3946_, lean_object* v_lo_3947_, lean_object* v_hi_3948_, lean_object* v_w_3949_, lean_object* v_hlo_3950_, lean_object* v_hhi_3951_){
_start:
{
lean_object* v___x_3952_; 
v___x_3952_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___redArg(v_n_3945_, v_as_3946_, v_lo_3947_, v_hi_3948_);
return v___x_3952_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2___boxed(lean_object* v_n_3953_, lean_object* v_as_3954_, lean_object* v_lo_3955_, lean_object* v_hi_3956_, lean_object* v_w_3957_, lean_object* v_hlo_3958_, lean_object* v_hhi_3959_){
_start:
{
lean_object* v_res_3960_; 
v_res_3960_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2(v_n_3953_, v_as_3954_, v_lo_3955_, v_hi_3956_, v_w_3957_, v_hlo_3958_, v_hhi_3959_);
lean_dec(v_hi_3956_);
lean_dec(v_n_3953_);
return v_res_3960_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2(lean_object* v_n_3961_, lean_object* v_lo_3962_, lean_object* v_hi_3963_, lean_object* v_hhi_3964_, lean_object* v_pivot_3965_, lean_object* v_as_3966_, lean_object* v_i_3967_, lean_object* v_k_3968_, lean_object* v_ilo_3969_, lean_object* v_ik_3970_, lean_object* v_w_3971_){
_start:
{
lean_object* v___x_3972_; 
v___x_3972_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___redArg(v_hi_3963_, v_pivot_3965_, v_as_3966_, v_i_3967_, v_k_3968_);
return v___x_3972_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2___boxed(lean_object* v_n_3973_, lean_object* v_lo_3974_, lean_object* v_hi_3975_, lean_object* v_hhi_3976_, lean_object* v_pivot_3977_, lean_object* v_as_3978_, lean_object* v_i_3979_, lean_object* v_k_3980_, lean_object* v_ilo_3981_, lean_object* v_ik_3982_, lean_object* v_w_3983_){
_start:
{
lean_object* v_res_3984_; 
v_res_3984_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_LocalContext_sortFVarsByContextOrder_spec__2_spec__2(v_n_3973_, v_lo_3974_, v_hi_3975_, v_hhi_3976_, v_pivot_3977_, v_as_3978_, v_i_3979_, v_k_3980_, v_ilo_3981_, v_ik_3982_, v_w_3983_);
lean_dec_ref(v_pivot_3977_);
lean_dec(v_hi_3975_);
lean_dec(v_lo_3974_);
lean_dec(v_n_3973_);
return v_res_3984_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(lean_object* v_a_3985_, lean_object* v_x_3986_){
_start:
{
if (lean_obj_tag(v_x_3986_) == 0)
{
uint8_t v___x_3987_; 
v___x_3987_ = 0;
return v___x_3987_;
}
else
{
lean_object* v_key_3988_; lean_object* v_tail_3989_; uint8_t v___x_3990_; 
v_key_3988_ = lean_ctor_get(v_x_3986_, 0);
v_tail_3989_ = lean_ctor_get(v_x_3986_, 2);
v___x_3990_ = lean_name_eq(v_key_3988_, v_a_3985_);
if (v___x_3990_ == 0)
{
v_x_3986_ = v_tail_3989_;
goto _start;
}
else
{
return v___x_3990_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg___boxed(lean_object* v_a_3992_, lean_object* v_x_3993_){
_start:
{
uint8_t v_res_3994_; lean_object* v_r_3995_; 
v_res_3994_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_3992_, v_x_3993_);
lean_dec(v_x_3993_);
lean_dec(v_a_3992_);
v_r_3995_ = lean_box(v_res_3994_);
return v_r_3995_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(lean_object* v_a_3996_, lean_object* v_x_3997_){
_start:
{
if (lean_obj_tag(v_x_3997_) == 0)
{
return v_x_3997_;
}
else
{
lean_object* v_key_3998_; lean_object* v_value_3999_; lean_object* v_tail_4000_; lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4009_; 
v_key_3998_ = lean_ctor_get(v_x_3997_, 0);
v_value_3999_ = lean_ctor_get(v_x_3997_, 1);
v_tail_4000_ = lean_ctor_get(v_x_3997_, 2);
v_isSharedCheck_4009_ = !lean_is_exclusive(v_x_3997_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_4002_ = v_x_3997_;
v_isShared_4003_ = v_isSharedCheck_4009_;
goto v_resetjp_4001_;
}
else
{
lean_inc(v_tail_4000_);
lean_inc(v_value_3999_);
lean_inc(v_key_3998_);
lean_dec(v_x_3997_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4009_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
uint8_t v___x_4004_; 
v___x_4004_ = lean_name_eq(v_key_3998_, v_a_3996_);
if (v___x_4004_ == 0)
{
lean_object* v___x_4005_; lean_object* v___x_4007_; 
v___x_4005_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_3996_, v_tail_4000_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 2, v___x_4005_);
v___x_4007_ = v___x_4002_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_key_3998_);
lean_ctor_set(v_reuseFailAlloc_4008_, 1, v_value_3999_);
lean_ctor_set(v_reuseFailAlloc_4008_, 2, v___x_4005_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
else
{
lean_del_object(v___x_4002_);
lean_dec(v_value_3999_);
lean_dec(v_key_3998_);
return v_tail_4000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg___boxed(lean_object* v_a_4010_, lean_object* v_x_4011_){
_start:
{
lean_object* v_res_4012_; 
v_res_4012_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_4010_, v_x_4011_);
lean_dec(v_a_4010_);
return v_res_4012_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(lean_object* v_m_4013_, lean_object* v_a_4014_){
_start:
{
lean_object* v_size_4015_; lean_object* v_buckets_4016_; lean_object* v___x_4017_; uint64_t v___y_4019_; lean_object* v___x_4048_; 
v_size_4015_ = lean_ctor_get(v_m_4013_, 0);
v_buckets_4016_ = lean_ctor_get(v_m_4013_, 1);
v___x_4017_ = lean_array_get_size(v_buckets_4016_);
v___x_4048_ = l_unsafeCast___redArg(v_a_4014_);
if (lean_obj_tag(v___x_4048_) == 0)
{
uint64_t v___x_4049_; 
v___x_4049_ = 1723ULL;
v___y_4019_ = v___x_4049_;
goto v___jp_4018_;
}
else
{
uint64_t v_hash_4050_; 
v_hash_4050_ = lean_ctor_get_uint64(v___x_4048_, sizeof(void*)*2);
lean_dec(v___x_4048_);
v___y_4019_ = v_hash_4050_;
goto v___jp_4018_;
}
v___jp_4018_:
{
uint64_t v___x_4020_; uint64_t v___x_4021_; uint64_t v_fold_4022_; uint64_t v___x_4023_; uint64_t v___x_4024_; uint64_t v___x_4025_; size_t v___x_4026_; size_t v___x_4027_; size_t v___x_4028_; size_t v___x_4029_; size_t v___x_4030_; lean_object* v_bkt_4031_; uint8_t v___x_4032_; 
v___x_4020_ = 32ULL;
v___x_4021_ = lean_uint64_shift_right(v___y_4019_, v___x_4020_);
v_fold_4022_ = lean_uint64_xor(v___y_4019_, v___x_4021_);
v___x_4023_ = 16ULL;
v___x_4024_ = lean_uint64_shift_right(v_fold_4022_, v___x_4023_);
v___x_4025_ = lean_uint64_xor(v_fold_4022_, v___x_4024_);
v___x_4026_ = lean_uint64_to_usize(v___x_4025_);
v___x_4027_ = lean_usize_of_nat(v___x_4017_);
v___x_4028_ = ((size_t)1ULL);
v___x_4029_ = lean_usize_sub(v___x_4027_, v___x_4028_);
v___x_4030_ = lean_usize_land(v___x_4026_, v___x_4029_);
v_bkt_4031_ = lean_array_uget_borrowed(v_buckets_4016_, v___x_4030_);
v___x_4032_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_4014_, v_bkt_4031_);
if (v___x_4032_ == 0)
{
return v_m_4013_;
}
else
{
lean_object* v___x_4034_; uint8_t v_isShared_4035_; uint8_t v_isSharedCheck_4045_; 
lean_inc(v_bkt_4031_);
lean_inc_ref(v_buckets_4016_);
lean_inc(v_size_4015_);
v_isSharedCheck_4045_ = !lean_is_exclusive(v_m_4013_);
if (v_isSharedCheck_4045_ == 0)
{
lean_object* v_unused_4046_; lean_object* v_unused_4047_; 
v_unused_4046_ = lean_ctor_get(v_m_4013_, 1);
lean_dec(v_unused_4046_);
v_unused_4047_ = lean_ctor_get(v_m_4013_, 0);
lean_dec(v_unused_4047_);
v___x_4034_ = v_m_4013_;
v_isShared_4035_ = v_isSharedCheck_4045_;
goto v_resetjp_4033_;
}
else
{
lean_dec(v_m_4013_);
v___x_4034_ = lean_box(0);
v_isShared_4035_ = v_isSharedCheck_4045_;
goto v_resetjp_4033_;
}
v_resetjp_4033_:
{
lean_object* v___x_4036_; lean_object* v_buckets_x27_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4043_; 
v___x_4036_ = lean_box(0);
v_buckets_x27_4037_ = lean_array_uset(v_buckets_4016_, v___x_4030_, v___x_4036_);
v___x_4038_ = lean_unsigned_to_nat(1u);
v___x_4039_ = lean_nat_sub(v_size_4015_, v___x_4038_);
lean_dec(v_size_4015_);
v___x_4040_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_4014_, v_bkt_4031_);
v___x_4041_ = lean_array_uset(v_buckets_x27_4037_, v___x_4030_, v___x_4040_);
if (v_isShared_4035_ == 0)
{
lean_ctor_set(v___x_4034_, 1, v___x_4041_);
lean_ctor_set(v___x_4034_, 0, v___x_4039_);
v___x_4043_ = v___x_4034_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v___x_4039_);
lean_ctor_set(v_reuseFailAlloc_4044_, 1, v___x_4041_);
v___x_4043_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
return v___x_4043_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg___boxed(lean_object* v_m_4051_, lean_object* v_a_4052_){
_start:
{
lean_object* v_res_4053_; 
v_res_4053_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(v_m_4051_, v_a_4052_);
lean_dec(v_a_4052_);
return v_res_4053_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(lean_object* v_m_4054_, lean_object* v_a_4055_){
_start:
{
lean_object* v_buckets_4056_; lean_object* v___x_4057_; uint64_t v___y_4059_; lean_object* v___x_4073_; 
v_buckets_4056_ = lean_ctor_get(v_m_4054_, 1);
v___x_4057_ = lean_array_get_size(v_buckets_4056_);
v___x_4073_ = l_unsafeCast___redArg(v_a_4055_);
if (lean_obj_tag(v___x_4073_) == 0)
{
uint64_t v___x_4074_; 
v___x_4074_ = 1723ULL;
v___y_4059_ = v___x_4074_;
goto v___jp_4058_;
}
else
{
uint64_t v_hash_4075_; 
v_hash_4075_ = lean_ctor_get_uint64(v___x_4073_, sizeof(void*)*2);
lean_dec(v___x_4073_);
v___y_4059_ = v_hash_4075_;
goto v___jp_4058_;
}
v___jp_4058_:
{
uint64_t v___x_4060_; uint64_t v___x_4061_; uint64_t v_fold_4062_; uint64_t v___x_4063_; uint64_t v___x_4064_; uint64_t v___x_4065_; size_t v___x_4066_; size_t v___x_4067_; size_t v___x_4068_; size_t v___x_4069_; size_t v___x_4070_; lean_object* v___x_4071_; uint8_t v___x_4072_; 
v___x_4060_ = 32ULL;
v___x_4061_ = lean_uint64_shift_right(v___y_4059_, v___x_4060_);
v_fold_4062_ = lean_uint64_xor(v___y_4059_, v___x_4061_);
v___x_4063_ = 16ULL;
v___x_4064_ = lean_uint64_shift_right(v_fold_4062_, v___x_4063_);
v___x_4065_ = lean_uint64_xor(v_fold_4062_, v___x_4064_);
v___x_4066_ = lean_uint64_to_usize(v___x_4065_);
v___x_4067_ = lean_usize_of_nat(v___x_4057_);
v___x_4068_ = ((size_t)1ULL);
v___x_4069_ = lean_usize_sub(v___x_4067_, v___x_4068_);
v___x_4070_ = lean_usize_land(v___x_4066_, v___x_4069_);
v___x_4071_ = lean_array_uget_borrowed(v_buckets_4056_, v___x_4070_);
v___x_4072_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_4055_, v___x_4071_);
return v___x_4072_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg___boxed(lean_object* v_m_4076_, lean_object* v_a_4077_){
_start:
{
uint8_t v_res_4078_; lean_object* v_r_4079_; 
v_res_4078_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(v_m_4076_, v_a_4077_);
lean_dec(v_a_4077_);
lean_dec_ref(v_m_4076_);
v_r_4079_ = lean_box(v_res_4078_);
return v_r_4079_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(lean_object* v_start_4080_, lean_object* v_as_4081_, size_t v_i_4082_, size_t v_stop_4083_, lean_object* v_b_4084_){
_start:
{
uint8_t v___x_4085_; 
v___x_4085_ = lean_usize_dec_eq(v_i_4082_, v_stop_4083_);
if (v___x_4085_ == 0)
{
size_t v___x_4086_; size_t v___x_4087_; lean_object* v___x_4088_; 
v___x_4086_ = ((size_t)1ULL);
v___x_4087_ = lean_usize_sub(v_i_4082_, v___x_4086_);
v___x_4088_ = lean_array_uget(v_as_4081_, v___x_4087_);
if (lean_obj_tag(v___x_4088_) == 0)
{
v_i_4082_ = v___x_4087_;
goto _start;
}
else
{
lean_object* v_val_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4124_; 
v_val_4090_ = lean_ctor_get(v___x_4088_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v___x_4088_);
if (v_isSharedCheck_4124_ == 0)
{
v___x_4092_ = v___x_4088_;
v_isShared_4093_ = v_isSharedCheck_4124_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_val_4090_);
lean_dec(v___x_4088_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4124_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v_fst_4094_; lean_object* v_snd_4095_; lean_object* v___y_4097_; lean_object* v___y_4113_; lean_object* v_size_4119_; lean_object* v___x_4120_; uint8_t v___x_4121_; 
v_fst_4094_ = lean_ctor_get(v_b_4084_, 0);
v_snd_4095_ = lean_ctor_get(v_b_4084_, 1);
v_size_4119_ = lean_ctor_get(v_fst_4094_, 0);
v___x_4120_ = lean_unsigned_to_nat(0u);
v___x_4121_ = lean_nat_dec_eq(v_size_4119_, v___x_4120_);
if (v___x_4121_ == 0)
{
lean_object* v_index_4122_; 
v_index_4122_ = lean_ctor_get(v_val_4090_, 0);
lean_inc(v_index_4122_);
v___y_4113_ = v_index_4122_;
goto v___jp_4112_;
}
else
{
lean_object* v___x_4123_; 
lean_inc(v_snd_4095_);
lean_del_object(v___x_4092_);
lean_dec(v_val_4090_);
lean_dec_ref(v_b_4084_);
v___x_4123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4123_, 0, v_snd_4095_);
return v___x_4123_;
}
v___jp_4096_:
{
uint8_t v___x_4098_; 
v___x_4098_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(v_fst_4094_, v___y_4097_);
if (v___x_4098_ == 0)
{
lean_dec(v___y_4097_);
lean_dec(v_val_4090_);
v_i_4082_ = v___x_4087_;
goto _start;
}
else
{
lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4109_; 
lean_inc(v_snd_4095_);
lean_inc(v_fst_4094_);
v_isSharedCheck_4109_ = !lean_is_exclusive(v_b_4084_);
if (v_isSharedCheck_4109_ == 0)
{
lean_object* v_unused_4110_; lean_object* v_unused_4111_; 
v_unused_4110_ = lean_ctor_get(v_b_4084_, 1);
lean_dec(v_unused_4110_);
v_unused_4111_ = lean_ctor_get(v_b_4084_, 0);
lean_dec(v_unused_4111_);
v___x_4101_ = v_b_4084_;
v_isShared_4102_ = v_isSharedCheck_4109_;
goto v_resetjp_4100_;
}
else
{
lean_dec(v_b_4084_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4109_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4106_; 
v___x_4103_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(v_fst_4094_, v___y_4097_);
lean_dec(v___y_4097_);
v___x_4104_ = lean_array_push(v_snd_4095_, v_val_4090_);
if (v_isShared_4102_ == 0)
{
lean_ctor_set(v___x_4101_, 1, v___x_4104_);
lean_ctor_set(v___x_4101_, 0, v___x_4103_);
v___x_4106_ = v___x_4101_;
goto v_reusejp_4105_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v___x_4103_);
lean_ctor_set(v_reuseFailAlloc_4108_, 1, v___x_4104_);
v___x_4106_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4105_;
}
v_reusejp_4105_:
{
v_i_4082_ = v___x_4087_;
v_b_4084_ = v___x_4106_;
goto _start;
}
}
}
}
v___jp_4112_:
{
uint8_t v___x_4114_; 
v___x_4114_ = lean_nat_dec_lt(v___y_4113_, v_start_4080_);
lean_dec(v___y_4113_);
if (v___x_4114_ == 0)
{
lean_object* v_userName_4115_; 
lean_del_object(v___x_4092_);
v_userName_4115_ = lean_ctor_get(v_val_4090_, 2);
lean_inc(v_userName_4115_);
v___y_4097_ = v_userName_4115_;
goto v___jp_4096_;
}
else
{
lean_object* v___x_4117_; 
lean_inc(v_snd_4095_);
lean_dec(v_val_4090_);
lean_dec_ref(v_b_4084_);
if (v_isShared_4093_ == 0)
{
lean_ctor_set_tag(v___x_4092_, 0);
lean_ctor_set(v___x_4092_, 0, v_snd_4095_);
v___x_4117_ = v___x_4092_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_snd_4095_);
v___x_4117_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
return v___x_4117_;
}
}
}
}
}
}
else
{
lean_object* v___x_4125_; 
v___x_4125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4125_, 0, v_b_4084_);
return v___x_4125_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_start_4126_, lean_object* v_as_4127_, lean_object* v_i_4128_, lean_object* v_stop_4129_, lean_object* v_b_4130_){
_start:
{
size_t v_i_boxed_4131_; size_t v_stop_boxed_4132_; lean_object* v_res_4133_; 
v_i_boxed_4131_ = lean_unbox_usize(v_i_4128_);
lean_dec(v_i_4128_);
v_stop_boxed_4132_ = lean_unbox_usize(v_stop_4129_);
lean_dec(v_stop_4129_);
v_res_4133_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_4126_, v_as_4127_, v_i_boxed_4131_, v_stop_boxed_4132_, v_b_4130_);
lean_dec_ref(v_as_4127_);
lean_dec(v_start_4126_);
return v_res_4133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(lean_object* v_start_4134_, lean_object* v_x_4135_, lean_object* v_x_4136_){
_start:
{
if (lean_obj_tag(v_x_4135_) == 0)
{
lean_object* v_cs_4137_; lean_object* v___x_4139_; uint8_t v_isShared_4140_; uint8_t v_isSharedCheck_4150_; 
v_cs_4137_ = lean_ctor_get(v_x_4135_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v_x_4135_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4139_ = v_x_4135_;
v_isShared_4140_ = v_isSharedCheck_4150_;
goto v_resetjp_4138_;
}
else
{
lean_inc(v_cs_4137_);
lean_dec(v_x_4135_);
v___x_4139_ = lean_box(0);
v_isShared_4140_ = v_isSharedCheck_4150_;
goto v_resetjp_4138_;
}
v_resetjp_4138_:
{
lean_object* v___x_4141_; lean_object* v___x_4142_; uint8_t v___x_4143_; 
v___x_4141_ = lean_array_get_size(v_cs_4137_);
v___x_4142_ = lean_unsigned_to_nat(0u);
v___x_4143_ = lean_nat_dec_lt(v___x_4142_, v___x_4141_);
if (v___x_4143_ == 0)
{
lean_object* v___x_4145_; 
lean_dec_ref(v_cs_4137_);
if (v_isShared_4140_ == 0)
{
lean_ctor_set_tag(v___x_4139_, 1);
lean_ctor_set(v___x_4139_, 0, v_x_4136_);
v___x_4145_ = v___x_4139_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4146_; 
v_reuseFailAlloc_4146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4146_, 0, v_x_4136_);
v___x_4145_ = v_reuseFailAlloc_4146_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
return v___x_4145_;
}
}
else
{
size_t v___x_4147_; size_t v___x_4148_; lean_object* v___x_4149_; 
lean_del_object(v___x_4139_);
v___x_4147_ = lean_usize_of_nat(v___x_4141_);
v___x_4148_ = ((size_t)0ULL);
v___x_4149_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(v_start_4134_, v_cs_4137_, v___x_4147_, v___x_4148_, v_x_4136_);
lean_dec_ref(v_cs_4137_);
return v___x_4149_;
}
}
}
else
{
lean_object* v_vs_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4164_; 
v_vs_4151_ = lean_ctor_get(v_x_4135_, 0);
v_isSharedCheck_4164_ = !lean_is_exclusive(v_x_4135_);
if (v_isSharedCheck_4164_ == 0)
{
v___x_4153_ = v_x_4135_;
v_isShared_4154_ = v_isSharedCheck_4164_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_vs_4151_);
lean_dec(v_x_4135_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4164_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4155_; lean_object* v___x_4156_; uint8_t v___x_4157_; 
v___x_4155_ = lean_array_get_size(v_vs_4151_);
v___x_4156_ = lean_unsigned_to_nat(0u);
v___x_4157_ = lean_nat_dec_lt(v___x_4156_, v___x_4155_);
if (v___x_4157_ == 0)
{
lean_object* v___x_4159_; 
lean_dec_ref(v_vs_4151_);
if (v_isShared_4154_ == 0)
{
lean_ctor_set(v___x_4153_, 0, v_x_4136_);
v___x_4159_ = v___x_4153_;
goto v_reusejp_4158_;
}
else
{
lean_object* v_reuseFailAlloc_4160_; 
v_reuseFailAlloc_4160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4160_, 0, v_x_4136_);
v___x_4159_ = v_reuseFailAlloc_4160_;
goto v_reusejp_4158_;
}
v_reusejp_4158_:
{
return v___x_4159_;
}
}
else
{
size_t v___x_4161_; size_t v___x_4162_; lean_object* v___x_4163_; 
lean_del_object(v___x_4153_);
v___x_4161_ = lean_usize_of_nat(v___x_4155_);
v___x_4162_ = ((size_t)0ULL);
v___x_4163_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_4134_, v_vs_4151_, v___x_4161_, v___x_4162_, v_x_4136_);
lean_dec_ref(v_vs_4151_);
return v___x_4163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_start_4165_, lean_object* v_as_4166_, size_t v_i_4167_, size_t v_stop_4168_, lean_object* v_b_4169_){
_start:
{
uint8_t v___x_4170_; 
v___x_4170_ = lean_usize_dec_eq(v_i_4167_, v_stop_4168_);
if (v___x_4170_ == 0)
{
size_t v___x_4171_; size_t v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; 
v___x_4171_ = ((size_t)1ULL);
v___x_4172_ = lean_usize_sub(v_i_4167_, v___x_4171_);
v___x_4173_ = lean_array_uget_borrowed(v_as_4166_, v___x_4172_);
lean_inc(v___x_4173_);
v___x_4174_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_4165_, v___x_4173_, v_b_4169_);
if (lean_obj_tag(v___x_4174_) == 0)
{
return v___x_4174_;
}
else
{
lean_object* v_a_4175_; 
v_a_4175_ = lean_ctor_get(v___x_4174_, 0);
lean_inc(v_a_4175_);
lean_dec_ref_known(v___x_4174_, 1);
v_i_4167_ = v___x_4172_;
v_b_4169_ = v_a_4175_;
goto _start;
}
}
else
{
lean_object* v___x_4177_; 
v___x_4177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4177_, 0, v_b_4169_);
return v___x_4177_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_start_4178_, lean_object* v_as_4179_, lean_object* v_i_4180_, lean_object* v_stop_4181_, lean_object* v_b_4182_){
_start:
{
size_t v_i_boxed_4183_; size_t v_stop_boxed_4184_; lean_object* v_res_4185_; 
v_i_boxed_4183_ = lean_unbox_usize(v_i_4180_);
lean_dec(v_i_4180_);
v_stop_boxed_4184_ = lean_unbox_usize(v_stop_4181_);
lean_dec(v_stop_4181_);
v_res_4185_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(v_start_4178_, v_as_4179_, v_i_boxed_4183_, v_stop_boxed_4184_, v_b_4182_);
lean_dec_ref(v_as_4179_);
lean_dec(v_start_4178_);
return v_res_4185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg___boxed(lean_object* v_start_4186_, lean_object* v_x_4187_, lean_object* v_x_4188_){
_start:
{
lean_object* v_res_4189_; 
v_res_4189_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_4186_, v_x_4187_, v_x_4188_);
lean_dec(v_start_4186_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(lean_object* v_start_4190_, lean_object* v_t_4191_, lean_object* v_init_4192_){
_start:
{
lean_object* v_root_4193_; lean_object* v_tail_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; uint8_t v___x_4197_; 
v_root_4193_ = lean_ctor_get(v_t_4191_, 0);
lean_inc_ref(v_root_4193_);
v_tail_4194_ = lean_ctor_get(v_t_4191_, 1);
lean_inc_ref(v_tail_4194_);
lean_dec_ref(v_t_4191_);
v___x_4195_ = lean_array_get_size(v_tail_4194_);
v___x_4196_ = lean_unsigned_to_nat(0u);
v___x_4197_ = lean_nat_dec_lt(v___x_4196_, v___x_4195_);
if (v___x_4197_ == 0)
{
lean_object* v___x_4198_; 
lean_dec_ref(v_tail_4194_);
v___x_4198_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_4190_, v_root_4193_, v_init_4192_);
return v___x_4198_;
}
else
{
size_t v___x_4199_; size_t v___x_4200_; lean_object* v___x_4201_; 
v___x_4199_ = lean_usize_of_nat(v___x_4195_);
v___x_4200_ = ((size_t)0ULL);
v___x_4201_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_4190_, v_tail_4194_, v___x_4199_, v___x_4200_, v_init_4192_);
lean_dec_ref(v_tail_4194_);
if (lean_obj_tag(v___x_4201_) == 0)
{
lean_dec_ref(v_root_4193_);
return v___x_4201_;
}
else
{
lean_object* v_a_4202_; lean_object* v___x_4203_; 
v_a_4202_ = lean_ctor_get(v___x_4201_, 0);
lean_inc(v_a_4202_);
lean_dec_ref_known(v___x_4201_, 1);
v___x_4203_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_4190_, v_root_4193_, v_a_4202_);
return v___x_4203_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg___boxed(lean_object* v_start_4204_, lean_object* v_t_4205_, lean_object* v_init_4206_){
_start:
{
lean_object* v_res_4207_; 
v_res_4207_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(v_start_4204_, v_t_4205_, v_init_4206_);
lean_dec(v_start_4204_);
return v_res_4207_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(lean_object* v_start_4208_, lean_object* v_lctx_4209_, lean_object* v_init_4210_){
_start:
{
lean_object* v_decls_4211_; lean_object* v___x_4212_; 
v_decls_4211_ = lean_ctor_get(v_lctx_4209_, 1);
lean_inc_ref(v_decls_4211_);
lean_dec_ref(v_lctx_4209_);
v___x_4212_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(v_start_4208_, v_decls_4211_, v_init_4210_);
return v___x_4212_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg___boxed(lean_object* v_start_4213_, lean_object* v_lctx_4214_, lean_object* v_init_4215_){
_start:
{
lean_object* v_res_4216_; 
v_res_4216_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(v_start_4213_, v_lctx_4214_, v_init_4215_);
lean_dec(v_start_4213_);
return v_res_4216_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___redArg(lean_object* v_lctx_4219_, lean_object* v_userNames_4220_, lean_object* v_start_4221_){
_start:
{
lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; 
v___x_4222_ = ((lean_object*)(l_Lean_LocalContext_findFromUserNames___redArg___closed__0));
v___x_4223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4223_, 0, v_userNames_4220_);
lean_ctor_set(v___x_4223_, 1, v___x_4222_);
v___x_4224_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(v_start_4221_, v_lctx_4219_, v___x_4223_);
if (lean_obj_tag(v___x_4224_) == 0)
{
lean_object* v_a_4225_; lean_object* v___x_4226_; 
v_a_4225_ = lean_ctor_get(v___x_4224_, 0);
lean_inc(v_a_4225_);
lean_dec_ref_known(v___x_4224_, 1);
v___x_4226_ = l_Array_reverse___redArg(v_a_4225_);
return v___x_4226_;
}
else
{
lean_object* v_a_4227_; lean_object* v_snd_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; 
v_a_4227_ = lean_ctor_get(v___x_4224_, 0);
lean_inc(v_a_4227_);
lean_dec_ref_known(v___x_4224_, 1);
v_snd_4228_ = lean_ctor_get(v_a_4227_, 1);
lean_inc(v_snd_4228_);
lean_dec(v_a_4227_);
v___x_4229_ = l_Array_reverse___redArg(v_snd_4228_);
v___x_4230_ = l_Array_reverse___redArg(v___x_4229_);
return v___x_4230_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___redArg___boxed(lean_object* v_lctx_4231_, lean_object* v_userNames_4232_, lean_object* v_start_4233_){
_start:
{
lean_object* v_res_4234_; 
v_res_4234_ = l_Lean_LocalContext_findFromUserNames___redArg(v_lctx_4231_, v_userNames_4232_, v_start_4233_);
lean_dec(v_start_4233_);
return v_res_4234_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames(lean_object* v_00_u03b1_4235_, lean_object* v_lctx_4236_, lean_object* v_userNames_4237_, lean_object* v_start_4238_){
_start:
{
lean_object* v___x_4239_; 
v___x_4239_ = l_Lean_LocalContext_findFromUserNames___redArg(v_lctx_4236_, v_userNames_4237_, v_start_4238_);
return v___x_4239_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findFromUserNames___boxed(lean_object* v_00_u03b1_4240_, lean_object* v_lctx_4241_, lean_object* v_userNames_4242_, lean_object* v_start_4243_){
_start:
{
lean_object* v_res_4244_; 
v_res_4244_ = l_Lean_LocalContext_findFromUserNames(v_00_u03b1_4240_, v_lctx_4241_, v_userNames_4242_, v_start_4243_);
lean_dec(v_start_4243_);
return v_res_4244_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0(lean_object* v_00_u03b2_4245_, lean_object* v_m_4246_, lean_object* v_a_4247_){
_start:
{
uint8_t v___x_4248_; 
v___x_4248_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___redArg(v_m_4246_, v_a_4247_);
return v___x_4248_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0___boxed(lean_object* v_00_u03b2_4249_, lean_object* v_m_4250_, lean_object* v_a_4251_){
_start:
{
uint8_t v_res_4252_; lean_object* v_r_4253_; 
v_res_4252_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0(v_00_u03b2_4249_, v_m_4250_, v_a_4251_);
lean_dec(v_a_4251_);
lean_dec_ref(v_m_4250_);
v_r_4253_ = lean_box(v_res_4252_);
return v_r_4253_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1(lean_object* v_00_u03b2_4254_, lean_object* v_m_4255_, lean_object* v_a_4256_){
_start:
{
lean_object* v___x_4257_; 
v___x_4257_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___redArg(v_m_4255_, v_a_4256_);
return v___x_4257_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1___boxed(lean_object* v_00_u03b2_4258_, lean_object* v_m_4259_, lean_object* v_a_4260_){
_start:
{
lean_object* v_res_4261_; 
v_res_4261_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1(v_00_u03b2_4258_, v_m_4259_, v_a_4260_);
lean_dec(v_a_4260_);
return v_res_4261_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2(lean_object* v_00_u03b1_4262_, lean_object* v_start_4263_, lean_object* v_lctx_4264_, lean_object* v_init_4265_){
_start:
{
lean_object* v___x_4266_; 
v___x_4266_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___redArg(v_start_4263_, v_lctx_4264_, v_init_4265_);
return v___x_4266_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2___boxed(lean_object* v_00_u03b1_4267_, lean_object* v_start_4268_, lean_object* v_lctx_4269_, lean_object* v_init_4270_){
_start:
{
lean_object* v_res_4271_; 
v_res_4271_ = l_Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2(v_00_u03b1_4267_, v_start_4268_, v_lctx_4269_, v_init_4270_);
lean_dec(v_start_4268_);
return v_res_4271_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0(lean_object* v_00_u03b2_4272_, lean_object* v_a_4273_, lean_object* v_x_4274_){
_start:
{
uint8_t v___x_4275_; 
v___x_4275_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___redArg(v_a_4273_, v_x_4274_);
return v___x_4275_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4276_, lean_object* v_a_4277_, lean_object* v_x_4278_){
_start:
{
uint8_t v_res_4279_; lean_object* v_r_4280_; 
v_res_4279_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_LocalContext_findFromUserNames_spec__0_spec__0(v_00_u03b2_4276_, v_a_4277_, v_x_4278_);
lean_dec(v_x_4278_);
lean_dec(v_a_4277_);
v_r_4280_ = lean_box(v_res_4279_);
return v_r_4280_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2(lean_object* v_00_u03b2_4281_, lean_object* v_a_4282_, lean_object* v_x_4283_){
_start:
{
lean_object* v___x_4284_; 
v___x_4284_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___redArg(v_a_4282_, v_x_4283_);
return v___x_4284_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2___boxed(lean_object* v_00_u03b2_4285_, lean_object* v_a_4286_, lean_object* v_x_4287_){
_start:
{
lean_object* v_res_4288_; 
v_res_4288_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_LocalContext_findFromUserNames_spec__1_spec__2(v_00_u03b2_4285_, v_a_4286_, v_x_4287_);
lean_dec(v_a_4286_);
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4(lean_object* v_00_u03b1_4289_, lean_object* v_start_4290_, lean_object* v_t_4291_, lean_object* v_init_4292_){
_start:
{
lean_object* v___x_4293_; 
v___x_4293_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___redArg(v_start_4290_, v_t_4291_, v_init_4292_);
return v___x_4293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4___boxed(lean_object* v_00_u03b1_4294_, lean_object* v_start_4295_, lean_object* v_t_4296_, lean_object* v_init_4297_){
_start:
{
lean_object* v_res_4298_; 
v_res_4298_ = l_Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4(v_00_u03b1_4294_, v_start_4295_, v_t_4296_, v_init_4297_);
lean_dec(v_start_4295_);
return v_res_4298_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5(lean_object* v_00_u03b1_4299_, lean_object* v_start_4300_, lean_object* v_x_4301_, lean_object* v_x_4302_){
_start:
{
lean_object* v___x_4303_; 
v___x_4303_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___redArg(v_start_4300_, v_x_4301_, v_x_4302_);
return v___x_4303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5___boxed(lean_object* v_00_u03b1_4304_, lean_object* v_start_4305_, lean_object* v_x_4306_, lean_object* v_x_4307_){
_start:
{
lean_object* v_res_4308_; 
v_res_4308_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5(v_00_u03b1_4304_, v_start_4305_, v_x_4306_, v_x_4307_);
lean_dec(v_start_4305_);
return v_res_4308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6(lean_object* v_00_u03b1_4309_, lean_object* v_start_4310_, lean_object* v_as_4311_, size_t v_i_4312_, size_t v_stop_4313_, lean_object* v_b_4314_){
_start:
{
lean_object* v___x_4315_; 
v___x_4315_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___redArg(v_start_4310_, v_as_4311_, v_i_4312_, v_stop_4313_, v_b_4314_);
return v___x_4315_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b1_4316_, lean_object* v_start_4317_, lean_object* v_as_4318_, lean_object* v_i_4319_, lean_object* v_stop_4320_, lean_object* v_b_4321_){
_start:
{
size_t v_i_boxed_4322_; size_t v_stop_boxed_4323_; lean_object* v_res_4324_; 
v_i_boxed_4322_ = lean_unbox_usize(v_i_4319_);
lean_dec(v_i_4319_);
v_stop_boxed_4323_ = lean_unbox_usize(v_stop_4320_);
lean_dec(v_stop_4320_);
v_res_4324_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__6(v_00_u03b1_4316_, v_start_4317_, v_as_4318_, v_i_boxed_4322_, v_stop_boxed_4323_, v_b_4321_);
lean_dec_ref(v_as_4318_);
lean_dec(v_start_4317_);
return v_res_4324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b1_4325_, lean_object* v_start_4326_, lean_object* v_as_4327_, size_t v_i_4328_, size_t v_stop_4329_, lean_object* v_b_4330_){
_start:
{
lean_object* v___x_4331_; 
v___x_4331_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___redArg(v_start_4326_, v_as_4327_, v_i_4328_, v_stop_4329_, v_b_4330_);
return v___x_4331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6___boxed(lean_object* v_00_u03b1_4332_, lean_object* v_start_4333_, lean_object* v_as_4334_, lean_object* v_i_4335_, lean_object* v_stop_4336_, lean_object* v_b_4337_){
_start:
{
size_t v_i_boxed_4338_; size_t v_stop_boxed_4339_; lean_object* v_res_4340_; 
v_i_boxed_4338_ = lean_unbox_usize(v_i_4335_);
lean_dec(v_i_4335_);
v_stop_boxed_4339_ = lean_unbox_usize(v_stop_4336_);
lean_dec(v_stop_4336_);
v_res_4340_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___at___00Lean_PersistentArray_foldrM___at___00Lean_LocalContext_foldrM___at___00Lean_LocalContext_findFromUserNames_spec__2_spec__4_spec__5_spec__6(v_00_u03b1_4332_, v_start_4333_, v_as_4334_, v_i_boxed_4338_, v_stop_boxed_4339_, v_b_4337_);
lean_dec_ref(v_as_4334_);
lean_dec(v_start_4333_);
return v_res_4340_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLCtxOfMonadLift___redArg(lean_object* v_inst_4341_, lean_object* v_inst_4342_){
_start:
{
lean_object* v___x_4343_; 
v___x_4343_ = lean_apply_2(v_inst_4341_, lean_box(0), v_inst_4342_);
return v___x_4343_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadLCtxOfMonadLift(lean_object* v_m_4344_, lean_object* v_n_4345_, lean_object* v_inst_4346_, lean_object* v_inst_4347_){
_start:
{
lean_object* v___x_4348_; 
v___x_4348_ = lean_apply_2(v_inst_4346_, lean_box(0), v_inst_4347_);
return v___x_4348_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__0(lean_object* v_toPure_4349_, lean_object* v_d_x3f_4350_, lean_object* v_b_4351_){
_start:
{
if (lean_obj_tag(v_d_x3f_4350_) == 0)
{
lean_object* v___x_4352_; lean_object* v___x_4353_; 
v___x_4352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4352_, 0, v_b_4351_);
v___x_4353_ = lean_apply_2(v_toPure_4349_, lean_box(0), v___x_4352_);
return v___x_4353_;
}
else
{
lean_object* v_val_4354_; lean_object* v___x_4356_; uint8_t v_isShared_4357_; uint8_t v_isSharedCheck_4369_; 
v_val_4354_ = lean_ctor_get(v_d_x3f_4350_, 0);
v_isSharedCheck_4369_ = !lean_is_exclusive(v_d_x3f_4350_);
if (v_isSharedCheck_4369_ == 0)
{
v___x_4356_ = v_d_x3f_4350_;
v_isShared_4357_ = v_isSharedCheck_4369_;
goto v_resetjp_4355_;
}
else
{
lean_inc(v_val_4354_);
lean_dec(v_d_x3f_4350_);
v___x_4356_ = lean_box(0);
v_isShared_4357_ = v_isSharedCheck_4369_;
goto v_resetjp_4355_;
}
v_resetjp_4355_:
{
uint8_t v___x_4358_; 
v___x_4358_ = l_Lean_LocalDecl_isImplementationDetail(v_val_4354_);
if (v___x_4358_ == 0)
{
lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4362_; 
v___x_4359_ = l_Lean_LocalDecl_toExpr(v_val_4354_);
v___x_4360_ = lean_array_push(v_b_4351_, v___x_4359_);
if (v_isShared_4357_ == 0)
{
lean_ctor_set(v___x_4356_, 0, v___x_4360_);
v___x_4362_ = v___x_4356_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4364_; 
v_reuseFailAlloc_4364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4364_, 0, v___x_4360_);
v___x_4362_ = v_reuseFailAlloc_4364_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
lean_object* v___x_4363_; 
v___x_4363_ = lean_apply_2(v_toPure_4349_, lean_box(0), v___x_4362_);
return v___x_4363_;
}
}
else
{
lean_object* v___x_4366_; 
lean_dec(v_val_4354_);
if (v_isShared_4357_ == 0)
{
lean_ctor_set(v___x_4356_, 0, v_b_4351_);
v___x_4366_ = v___x_4356_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4368_; 
v_reuseFailAlloc_4368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4368_, 0, v_b_4351_);
v___x_4366_ = v_reuseFailAlloc_4368_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
lean_object* v___x_4367_; 
v___x_4367_ = lean_apply_2(v_toPure_4349_, lean_box(0), v___x_4366_);
return v___x_4367_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__1(lean_object* v_toPure_4370_, lean_object* v_____s_4371_){
_start:
{
lean_object* v___x_4372_; 
v___x_4372_ = lean_apply_2(v_toPure_4370_, lean_box(0), v_____s_4371_);
return v___x_4372_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__2(lean_object* v_inst_4373_, lean_object* v_hs_4374_, lean_object* v___f_4375_, lean_object* v_toBind_4376_, lean_object* v___f_4377_, lean_object* v_____do__lift_4378_){
_start:
{
lean_object* v_decls_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; 
v_decls_4379_ = lean_ctor_get(v_____do__lift_4378_, 1);
v___x_4380_ = l_Lean_PersistentArray_forIn___redArg(v_inst_4373_, v_decls_4379_, v_hs_4374_, v___f_4375_);
v___x_4381_ = lean_apply_4(v_toBind_4376_, lean_box(0), lean_box(0), v___x_4380_, v___f_4377_);
return v___x_4381_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg___lam__2___boxed(lean_object* v_inst_4382_, lean_object* v_hs_4383_, lean_object* v___f_4384_, lean_object* v_toBind_4385_, lean_object* v___f_4386_, lean_object* v_____do__lift_4387_){
_start:
{
lean_object* v_res_4388_; 
v_res_4388_ = l_Lean_getLocalHyps___redArg___lam__2(v_inst_4382_, v_hs_4383_, v___f_4384_, v_toBind_4385_, v___f_4386_, v_____do__lift_4387_);
lean_dec_ref(v_____do__lift_4387_);
return v_res_4388_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps___redArg(lean_object* v_inst_4391_, lean_object* v_inst_4392_){
_start:
{
lean_object* v_toApplicative_4393_; lean_object* v_toBind_4394_; lean_object* v_toPure_4395_; lean_object* v_hs_4396_; lean_object* v___f_4397_; lean_object* v___f_4398_; lean_object* v___f_4399_; lean_object* v___x_4400_; 
v_toApplicative_4393_ = lean_ctor_get(v_inst_4391_, 0);
v_toBind_4394_ = lean_ctor_get(v_inst_4391_, 1);
lean_inc_n(v_toBind_4394_, 2);
v_toPure_4395_ = lean_ctor_get(v_toApplicative_4393_, 1);
v_hs_4396_ = ((lean_object*)(l_Lean_getLocalHyps___redArg___closed__0));
lean_inc_n(v_toPure_4395_, 2);
v___f_4397_ = lean_alloc_closure((void*)(l_Lean_getLocalHyps___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4397_, 0, v_toPure_4395_);
v___f_4398_ = lean_alloc_closure((void*)(l_Lean_getLocalHyps___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4398_, 0, v_toPure_4395_);
v___f_4399_ = lean_alloc_closure((void*)(l_Lean_getLocalHyps___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_4399_, 0, v_inst_4391_);
lean_closure_set(v___f_4399_, 1, v_hs_4396_);
lean_closure_set(v___f_4399_, 2, v___f_4397_);
lean_closure_set(v___f_4399_, 3, v_toBind_4394_);
lean_closure_set(v___f_4399_, 4, v___f_4398_);
v___x_4400_ = lean_apply_4(v_toBind_4394_, lean_box(0), lean_box(0), v_inst_4392_, v___f_4399_);
return v___x_4400_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLocalHyps(lean_object* v_m_4401_, lean_object* v_inst_4402_, lean_object* v_inst_4403_){
_start:
{
lean_object* v___x_4404_; 
v___x_4404_ = l_Lean_getLocalHyps___redArg(v_inst_4402_, v_inst_4403_);
return v___x_4404_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_replaceFVarId(lean_object* v_fvarId_4405_, lean_object* v_e_4406_, lean_object* v_d_4407_){
_start:
{
lean_object* v___y_4409_; lean_object* v_fvarId_4441_; 
v_fvarId_4441_ = lean_ctor_get(v_d_4407_, 1);
lean_inc(v_fvarId_4441_);
v___y_4409_ = v_fvarId_4441_;
goto v___jp_4408_;
v___jp_4408_:
{
uint8_t v___x_4410_; 
v___x_4410_ = l_Lean_instBEqFVarId_beq(v___y_4409_, v_fvarId_4405_);
lean_dec(v___y_4409_);
if (v___x_4410_ == 0)
{
if (lean_obj_tag(v_d_4407_) == 0)
{
lean_object* v_index_4411_; lean_object* v_fvarId_4412_; lean_object* v_userName_4413_; lean_object* v_type_4414_; uint8_t v_bi_4415_; uint8_t v_kind_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4424_; 
v_index_4411_ = lean_ctor_get(v_d_4407_, 0);
v_fvarId_4412_ = lean_ctor_get(v_d_4407_, 1);
v_userName_4413_ = lean_ctor_get(v_d_4407_, 2);
v_type_4414_ = lean_ctor_get(v_d_4407_, 3);
v_bi_4415_ = lean_ctor_get_uint8(v_d_4407_, sizeof(void*)*4);
v_kind_4416_ = lean_ctor_get_uint8(v_d_4407_, sizeof(void*)*4 + 1);
v_isSharedCheck_4424_ = !lean_is_exclusive(v_d_4407_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4418_ = v_d_4407_;
v_isShared_4419_ = v_isSharedCheck_4424_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_type_4414_);
lean_inc(v_userName_4413_);
lean_inc(v_fvarId_4412_);
lean_inc(v_index_4411_);
lean_dec(v_d_4407_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4424_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
lean_object* v___x_4420_; lean_object* v___x_4422_; 
v___x_4420_ = l_Lean_Expr_replaceFVarId(v_type_4414_, v_fvarId_4405_, v_e_4406_);
lean_dec_ref(v_type_4414_);
if (v_isShared_4419_ == 0)
{
lean_ctor_set(v___x_4418_, 3, v___x_4420_);
v___x_4422_ = v___x_4418_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_index_4411_);
lean_ctor_set(v_reuseFailAlloc_4423_, 1, v_fvarId_4412_);
lean_ctor_set(v_reuseFailAlloc_4423_, 2, v_userName_4413_);
lean_ctor_set(v_reuseFailAlloc_4423_, 3, v___x_4420_);
lean_ctor_set_uint8(v_reuseFailAlloc_4423_, sizeof(void*)*4, v_bi_4415_);
lean_ctor_set_uint8(v_reuseFailAlloc_4423_, sizeof(void*)*4 + 1, v_kind_4416_);
v___x_4422_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
return v___x_4422_;
}
}
}
else
{
lean_object* v_index_4425_; lean_object* v_fvarId_4426_; lean_object* v_userName_4427_; lean_object* v_type_4428_; lean_object* v_value_4429_; uint8_t v_nondep_4430_; uint8_t v_kind_4431_; lean_object* v___x_4433_; uint8_t v_isShared_4434_; uint8_t v_isSharedCheck_4440_; 
v_index_4425_ = lean_ctor_get(v_d_4407_, 0);
v_fvarId_4426_ = lean_ctor_get(v_d_4407_, 1);
v_userName_4427_ = lean_ctor_get(v_d_4407_, 2);
v_type_4428_ = lean_ctor_get(v_d_4407_, 3);
v_value_4429_ = lean_ctor_get(v_d_4407_, 4);
v_nondep_4430_ = lean_ctor_get_uint8(v_d_4407_, sizeof(void*)*5);
v_kind_4431_ = lean_ctor_get_uint8(v_d_4407_, sizeof(void*)*5 + 1);
v_isSharedCheck_4440_ = !lean_is_exclusive(v_d_4407_);
if (v_isSharedCheck_4440_ == 0)
{
v___x_4433_ = v_d_4407_;
v_isShared_4434_ = v_isSharedCheck_4440_;
goto v_resetjp_4432_;
}
else
{
lean_inc(v_value_4429_);
lean_inc(v_type_4428_);
lean_inc(v_userName_4427_);
lean_inc(v_fvarId_4426_);
lean_inc(v_index_4425_);
lean_dec(v_d_4407_);
v___x_4433_ = lean_box(0);
v_isShared_4434_ = v_isSharedCheck_4440_;
goto v_resetjp_4432_;
}
v_resetjp_4432_:
{
lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4438_; 
lean_inc(v_fvarId_4405_);
v___x_4435_ = l_Lean_Expr_replaceFVarId(v_type_4428_, v_fvarId_4405_, v_e_4406_);
lean_dec_ref(v_type_4428_);
v___x_4436_ = l_Lean_Expr_replaceFVarId(v_value_4429_, v_fvarId_4405_, v_e_4406_);
lean_dec_ref(v_value_4429_);
if (v_isShared_4434_ == 0)
{
lean_ctor_set(v___x_4433_, 4, v___x_4436_);
lean_ctor_set(v___x_4433_, 3, v___x_4435_);
v___x_4438_ = v___x_4433_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4439_; 
v_reuseFailAlloc_4439_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_4439_, 0, v_index_4425_);
lean_ctor_set(v_reuseFailAlloc_4439_, 1, v_fvarId_4426_);
lean_ctor_set(v_reuseFailAlloc_4439_, 2, v_userName_4427_);
lean_ctor_set(v_reuseFailAlloc_4439_, 3, v___x_4435_);
lean_ctor_set(v_reuseFailAlloc_4439_, 4, v___x_4436_);
lean_ctor_set_uint8(v_reuseFailAlloc_4439_, sizeof(void*)*5, v_nondep_4430_);
lean_ctor_set_uint8(v_reuseFailAlloc_4439_, sizeof(void*)*5 + 1, v_kind_4431_);
v___x_4438_ = v_reuseFailAlloc_4439_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
return v___x_4438_;
}
}
}
}
else
{
lean_dec(v_fvarId_4405_);
return v_d_4407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalDecl_replaceFVarId___boxed(lean_object* v_fvarId_4442_, lean_object* v_e_4443_, lean_object* v_d_4444_){
_start:
{
lean_object* v_res_4445_; 
v_res_4445_ = l_Lean_LocalDecl_replaceFVarId(v_fvarId_4442_, v_e_4443_, v_d_4444_);
lean_dec_ref(v_e_4443_);
return v_res_4445_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId___lam__0(lean_object* v_fvarId_4446_, lean_object* v_e_4447_, lean_object* v_x_4448_){
_start:
{
lean_object* v___x_4449_; 
v___x_4449_ = l_Lean_LocalDecl_replaceFVarId(v_fvarId_4446_, v_e_4447_, v_x_4448_);
return v___x_4449_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId___lam__0___boxed(lean_object* v_fvarId_4450_, lean_object* v_e_4451_, lean_object* v_x_4452_){
_start:
{
lean_object* v_res_4453_; 
v_res_4453_ = l_Lean_LocalContext_replaceFVarId___lam__0(v_fvarId_4450_, v_e_4451_, v_x_4452_);
lean_dec_ref(v_e_4451_);
return v_res_4453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(lean_object* v_fvarId_4454_, lean_object* v_e_4455_, size_t v_sz_4456_, size_t v_i_4457_, lean_object* v_bs_4458_){
_start:
{
uint8_t v___x_4459_; 
v___x_4459_ = lean_usize_dec_lt(v_i_4457_, v_sz_4456_);
if (v___x_4459_ == 0)
{
lean_object* v___x_4460_; 
lean_dec(v_fvarId_4454_);
v___x_4460_ = l_unsafeCast___redArg(v_bs_4458_);
lean_dec_ref(v_bs_4458_);
return v___x_4460_;
}
else
{
lean_object* v_v_4461_; lean_object* v___x_4462_; lean_object* v_bs_x27_4463_; lean_object* v___y_4465_; lean_object* v___x_4471_; 
v_v_4461_ = lean_array_uget(v_bs_4458_, v_i_4457_);
v___x_4462_ = lean_unsigned_to_nat(0u);
v_bs_x27_4463_ = lean_array_uset(v_bs_4458_, v_i_4457_, v___x_4462_);
v___x_4471_ = l_unsafeCast___redArg(v_v_4461_);
lean_dec(v_v_4461_);
if (lean_obj_tag(v___x_4471_) == 0)
{
v___y_4465_ = v___x_4471_;
goto v___jp_4464_;
}
else
{
lean_object* v_val_4472_; lean_object* v___x_4474_; uint8_t v_isShared_4475_; uint8_t v_isSharedCheck_4480_; 
v_val_4472_ = lean_ctor_get(v___x_4471_, 0);
v_isSharedCheck_4480_ = !lean_is_exclusive(v___x_4471_);
if (v_isSharedCheck_4480_ == 0)
{
v___x_4474_ = v___x_4471_;
v_isShared_4475_ = v_isSharedCheck_4480_;
goto v_resetjp_4473_;
}
else
{
lean_inc(v_val_4472_);
lean_dec(v___x_4471_);
v___x_4474_ = lean_box(0);
v_isShared_4475_ = v_isSharedCheck_4480_;
goto v_resetjp_4473_;
}
v_resetjp_4473_:
{
lean_object* v___x_4476_; lean_object* v___x_4478_; 
lean_inc(v_fvarId_4454_);
v___x_4476_ = l_Lean_LocalDecl_replaceFVarId(v_fvarId_4454_, v_e_4455_, v_val_4472_);
if (v_isShared_4475_ == 0)
{
lean_ctor_set(v___x_4474_, 0, v___x_4476_);
v___x_4478_ = v___x_4474_;
goto v_reusejp_4477_;
}
else
{
lean_object* v_reuseFailAlloc_4479_; 
v_reuseFailAlloc_4479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4479_, 0, v___x_4476_);
v___x_4478_ = v_reuseFailAlloc_4479_;
goto v_reusejp_4477_;
}
v_reusejp_4477_:
{
v___y_4465_ = v___x_4478_;
goto v___jp_4464_;
}
}
}
v___jp_4464_:
{
size_t v___x_4466_; size_t v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; 
v___x_4466_ = ((size_t)1ULL);
v___x_4467_ = lean_usize_add(v_i_4457_, v___x_4466_);
v___x_4468_ = l_unsafeCast___redArg(v___y_4465_);
lean_dec(v___y_4465_);
v___x_4469_ = lean_array_uset(v_bs_x27_4463_, v_i_4457_, v___x_4468_);
v_i_4457_ = v___x_4467_;
v_bs_4458_ = v___x_4469_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3___boxed(lean_object* v_fvarId_4481_, lean_object* v_e_4482_, lean_object* v_sz_4483_, lean_object* v_i_4484_, lean_object* v_bs_4485_){
_start:
{
size_t v_sz_boxed_4486_; size_t v_i_boxed_4487_; lean_object* v_res_4488_; 
v_sz_boxed_4486_ = lean_unbox_usize(v_sz_4483_);
lean_dec(v_sz_4483_);
v_i_boxed_4487_ = lean_unbox_usize(v_i_4484_);
lean_dec(v_i_4484_);
v_res_4488_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(v_fvarId_4481_, v_e_4482_, v_sz_boxed_4486_, v_i_boxed_4487_, v_bs_4485_);
lean_dec_ref(v_e_4482_);
return v_res_4488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4(lean_object* v_fvarId_4489_, lean_object* v_e_4490_, size_t v_sz_4491_, size_t v_i_4492_, lean_object* v_bs_4493_){
_start:
{
uint8_t v___x_4494_; 
v___x_4494_ = lean_usize_dec_lt(v_i_4492_, v_sz_4491_);
if (v___x_4494_ == 0)
{
lean_object* v___x_4495_; 
lean_dec(v_fvarId_4489_);
v___x_4495_ = l_unsafeCast___redArg(v_bs_4493_);
lean_dec_ref(v_bs_4493_);
return v___x_4495_;
}
else
{
lean_object* v_v_4496_; lean_object* v___x_4497_; lean_object* v_bs_x27_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; size_t v___x_4501_; size_t v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v_v_4496_ = lean_array_uget(v_bs_4493_, v_i_4492_);
v___x_4497_ = lean_unsigned_to_nat(0u);
v_bs_x27_4498_ = lean_array_uset(v_bs_4493_, v_i_4492_, v___x_4497_);
v___x_4499_ = l_unsafeCast___redArg(v_v_4496_);
lean_dec(v_v_4496_);
lean_inc(v_fvarId_4489_);
v___x_4500_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(v_fvarId_4489_, v_e_4490_, v___x_4499_);
v___x_4501_ = ((size_t)1ULL);
v___x_4502_ = lean_usize_add(v_i_4492_, v___x_4501_);
v___x_4503_ = l_unsafeCast___redArg(v___x_4500_);
lean_dec_ref(v___x_4500_);
v___x_4504_ = lean_array_uset(v_bs_x27_4498_, v_i_4492_, v___x_4503_);
v_i_4492_ = v___x_4502_;
v_bs_4493_ = v___x_4504_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(lean_object* v_fvarId_4506_, lean_object* v_e_4507_, lean_object* v_x_4508_){
_start:
{
if (lean_obj_tag(v_x_4508_) == 0)
{
lean_object* v_cs_4509_; lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4521_; 
v_cs_4509_ = lean_ctor_get(v_x_4508_, 0);
v_isSharedCheck_4521_ = !lean_is_exclusive(v_x_4508_);
if (v_isSharedCheck_4521_ == 0)
{
v___x_4511_ = v_x_4508_;
v_isShared_4512_ = v_isSharedCheck_4521_;
goto v_resetjp_4510_;
}
else
{
lean_inc(v_cs_4509_);
lean_dec(v_x_4508_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4521_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
size_t v_sz_4513_; size_t v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4519_; 
v_sz_4513_ = lean_array_size(v_cs_4509_);
v___x_4514_ = ((size_t)0ULL);
v___x_4515_ = l_unsafeCast___redArg(v_cs_4509_);
lean_dec_ref(v_cs_4509_);
v___x_4516_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4(v_fvarId_4506_, v_e_4507_, v_sz_4513_, v___x_4514_, v___x_4515_);
v___x_4517_ = l_unsafeCast___redArg(v___x_4516_);
lean_dec_ref(v___x_4516_);
if (v_isShared_4512_ == 0)
{
lean_ctor_set(v___x_4511_, 0, v___x_4517_);
v___x_4519_ = v___x_4511_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4520_; 
v_reuseFailAlloc_4520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4520_, 0, v___x_4517_);
v___x_4519_ = v_reuseFailAlloc_4520_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
return v___x_4519_;
}
}
}
else
{
lean_object* v_vs_4522_; lean_object* v___x_4524_; uint8_t v_isShared_4525_; uint8_t v_isSharedCheck_4534_; 
v_vs_4522_ = lean_ctor_get(v_x_4508_, 0);
v_isSharedCheck_4534_ = !lean_is_exclusive(v_x_4508_);
if (v_isSharedCheck_4534_ == 0)
{
v___x_4524_ = v_x_4508_;
v_isShared_4525_ = v_isSharedCheck_4534_;
goto v_resetjp_4523_;
}
else
{
lean_inc(v_vs_4522_);
lean_dec(v_x_4508_);
v___x_4524_ = lean_box(0);
v_isShared_4525_ = v_isSharedCheck_4534_;
goto v_resetjp_4523_;
}
v_resetjp_4523_:
{
size_t v_sz_4526_; size_t v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4532_; 
v_sz_4526_ = lean_array_size(v_vs_4522_);
v___x_4527_ = ((size_t)0ULL);
v___x_4528_ = l_unsafeCast___redArg(v_vs_4522_);
lean_dec_ref(v_vs_4522_);
v___x_4529_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(v_fvarId_4506_, v_e_4507_, v_sz_4526_, v___x_4527_, v___x_4528_);
v___x_4530_ = l_unsafeCast___redArg(v___x_4529_);
lean_dec_ref(v___x_4529_);
if (v_isShared_4525_ == 0)
{
lean_ctor_set(v___x_4524_, 0, v___x_4530_);
v___x_4532_ = v___x_4524_;
goto v_reusejp_4531_;
}
else
{
lean_object* v_reuseFailAlloc_4533_; 
v_reuseFailAlloc_4533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4533_, 0, v___x_4530_);
v___x_4532_ = v_reuseFailAlloc_4533_;
goto v_reusejp_4531_;
}
v_reusejp_4531_:
{
return v___x_4532_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2___boxed(lean_object* v_fvarId_4535_, lean_object* v_e_4536_, lean_object* v_x_4537_){
_start:
{
lean_object* v_res_4538_; 
v_res_4538_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(v_fvarId_4535_, v_e_4536_, v_x_4537_);
lean_dec_ref(v_e_4536_);
return v_res_4538_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4___boxed(lean_object* v_fvarId_4539_, lean_object* v_e_4540_, lean_object* v_sz_4541_, lean_object* v_i_4542_, lean_object* v_bs_4543_){
_start:
{
size_t v_sz_boxed_4544_; size_t v_i_boxed_4545_; lean_object* v_res_4546_; 
v_sz_boxed_4544_ = lean_unbox_usize(v_sz_4541_);
lean_dec(v_sz_4541_);
v_i_boxed_4545_ = lean_unbox_usize(v_i_4542_);
lean_dec(v_i_4542_);
v_res_4546_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2_spec__4(v_fvarId_4539_, v_e_4540_, v_sz_boxed_4544_, v_i_boxed_4545_, v_bs_4543_);
lean_dec_ref(v_e_4540_);
return v_res_4546_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1(lean_object* v_fvarId_4547_, lean_object* v_e_4548_, lean_object* v_t_4549_){
_start:
{
lean_object* v_root_4550_; lean_object* v_tail_4551_; lean_object* v_size_4552_; size_t v_shift_4553_; lean_object* v_tailOff_4554_; lean_object* v___x_4556_; uint8_t v_isShared_4557_; uint8_t v_isSharedCheck_4567_; 
v_root_4550_ = lean_ctor_get(v_t_4549_, 0);
v_tail_4551_ = lean_ctor_get(v_t_4549_, 1);
v_size_4552_ = lean_ctor_get(v_t_4549_, 2);
v_shift_4553_ = lean_ctor_get_usize(v_t_4549_, 4);
v_tailOff_4554_ = lean_ctor_get(v_t_4549_, 3);
v_isSharedCheck_4567_ = !lean_is_exclusive(v_t_4549_);
if (v_isSharedCheck_4567_ == 0)
{
v___x_4556_ = v_t_4549_;
v_isShared_4557_ = v_isSharedCheck_4567_;
goto v_resetjp_4555_;
}
else
{
lean_inc(v_tailOff_4554_);
lean_inc(v_size_4552_);
lean_inc(v_tail_4551_);
lean_inc(v_root_4550_);
lean_dec(v_t_4549_);
v___x_4556_ = lean_box(0);
v_isShared_4557_ = v_isSharedCheck_4567_;
goto v_resetjp_4555_;
}
v_resetjp_4555_:
{
lean_object* v___x_4558_; size_t v_sz_4559_; size_t v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4565_; 
lean_inc(v_fvarId_4547_);
v___x_4558_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__2(v_fvarId_4547_, v_e_4548_, v_root_4550_);
v_sz_4559_ = lean_array_size(v_tail_4551_);
v___x_4560_ = ((size_t)0ULL);
v___x_4561_ = l_unsafeCast___redArg(v_tail_4551_);
lean_dec_ref(v_tail_4551_);
v___x_4562_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1_spec__3(v_fvarId_4547_, v_e_4548_, v_sz_4559_, v___x_4560_, v___x_4561_);
v___x_4563_ = l_unsafeCast___redArg(v___x_4562_);
lean_dec_ref(v___x_4562_);
if (v_isShared_4557_ == 0)
{
lean_ctor_set(v___x_4556_, 1, v___x_4563_);
lean_ctor_set(v___x_4556_, 0, v___x_4558_);
v___x_4565_ = v___x_4556_;
goto v_reusejp_4564_;
}
else
{
lean_object* v_reuseFailAlloc_4566_; 
v_reuseFailAlloc_4566_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_4566_, 0, v___x_4558_);
lean_ctor_set(v_reuseFailAlloc_4566_, 1, v___x_4563_);
lean_ctor_set(v_reuseFailAlloc_4566_, 2, v_size_4552_);
lean_ctor_set(v_reuseFailAlloc_4566_, 3, v_tailOff_4554_);
lean_ctor_set_usize(v_reuseFailAlloc_4566_, 4, v_shift_4553_);
v___x_4565_ = v_reuseFailAlloc_4566_;
goto v_reusejp_4564_;
}
v_reusejp_4564_:
{
return v___x_4565_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1___boxed(lean_object* v_fvarId_4568_, lean_object* v_e_4569_, lean_object* v_t_4570_){
_start:
{
lean_object* v_res_4571_; 
v_res_4571_ = l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1(v_fvarId_4568_, v_e_4569_, v_t_4570_);
lean_dec_ref(v_e_4569_);
return v_res_4571_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg___lam__0(lean_object* v_f_4572_, lean_object* v_x_4573_){
_start:
{
lean_object* v___x_4574_; 
v___x_4574_ = lean_apply_1(v_f_4572_, v_x_4573_);
return v___x_4574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(lean_object* v_f_4575_, lean_object* v_as_4576_, lean_object* v_i_4577_, lean_object* v_acc_4578_){
_start:
{
lean_object* v___x_4579_; uint8_t v___x_4580_; 
v___x_4579_ = lean_array_get_size(v_as_4576_);
v___x_4580_ = lean_nat_dec_eq(v_i_4577_, v___x_4579_);
if (v___x_4580_ == 0)
{
lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; 
v___x_4581_ = lean_array_fget_borrowed(v_as_4576_, v_i_4577_);
lean_inc(v_f_4575_);
lean_inc(v___x_4581_);
v___x_4582_ = lean_apply_1(v_f_4575_, v___x_4581_);
v___x_4583_ = lean_unsigned_to_nat(1u);
v___x_4584_ = lean_nat_add(v_i_4577_, v___x_4583_);
lean_dec(v_i_4577_);
v___x_4585_ = lean_array_push(v_acc_4578_, v___x_4582_);
v_i_4577_ = v___x_4584_;
v_acc_4578_ = v___x_4585_;
goto _start;
}
else
{
lean_dec(v_i_4577_);
lean_dec(v_f_4575_);
return v_acc_4578_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg___boxed(lean_object* v_f_4587_, lean_object* v_as_4588_, lean_object* v_i_4589_, lean_object* v_acc_4590_){
_start:
{
lean_object* v_res_4591_; 
v_res_4591_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_f_4587_, v_as_4588_, v_i_4589_, v_acc_4590_);
lean_dec_ref(v_as_4588_);
return v_res_4591_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_f_4592_, lean_object* v_as_4593_){
_start:
{
lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; 
v___x_4594_ = lean_unsigned_to_nat(0u);
v___x_4595_ = lean_array_get_size(v_as_4593_);
v___x_4596_ = lean_mk_empty_array_with_capacity(v___x_4595_);
v___x_4597_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_f_4592_, v_as_4593_, v___x_4594_, v___x_4596_);
return v___x_4597_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_f_4598_, lean_object* v_as_4599_){
_start:
{
lean_object* v_res_4600_; 
v_res_4600_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(v_f_4598_, v_as_4599_);
lean_dec_ref(v_as_4599_);
return v_res_4600_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_4601_, size_t v_sz_4602_, size_t v_i_4603_, lean_object* v_bs_4604_){
_start:
{
uint8_t v___x_4605_; 
v___x_4605_ = lean_usize_dec_lt(v_i_4603_, v_sz_4602_);
if (v___x_4605_ == 0)
{
lean_object* v___x_4606_; 
lean_dec(v_f_4601_);
v___x_4606_ = l_unsafeCast___redArg(v_bs_4604_);
lean_dec_ref(v_bs_4604_);
return v___x_4606_;
}
else
{
lean_object* v_v_4607_; lean_object* v___x_4608_; lean_object* v_bs_x27_4609_; lean_object* v___y_4611_; lean_object* v___x_4617_; 
v_v_4607_ = lean_array_uget(v_bs_4604_, v_i_4603_);
v___x_4608_ = lean_unsigned_to_nat(0u);
v_bs_x27_4609_ = lean_array_uset(v_bs_4604_, v_i_4603_, v___x_4608_);
v___x_4617_ = l_unsafeCast___redArg(v_v_4607_);
lean_dec(v_v_4607_);
switch(lean_obj_tag(v___x_4617_))
{
case 0:
{
lean_object* v_key_4618_; lean_object* v_val_4619_; lean_object* v___x_4621_; uint8_t v_isShared_4622_; uint8_t v_isSharedCheck_4627_; 
v_key_4618_ = lean_ctor_get(v___x_4617_, 0);
v_val_4619_ = lean_ctor_get(v___x_4617_, 1);
v_isSharedCheck_4627_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4627_ == 0)
{
v___x_4621_ = v___x_4617_;
v_isShared_4622_ = v_isSharedCheck_4627_;
goto v_resetjp_4620_;
}
else
{
lean_inc(v_val_4619_);
lean_inc(v_key_4618_);
lean_dec(v___x_4617_);
v___x_4621_ = lean_box(0);
v_isShared_4622_ = v_isSharedCheck_4627_;
goto v_resetjp_4620_;
}
v_resetjp_4620_:
{
lean_object* v___x_4623_; lean_object* v___x_4625_; 
lean_inc(v_f_4601_);
v___x_4623_ = lean_apply_1(v_f_4601_, v_val_4619_);
if (v_isShared_4622_ == 0)
{
lean_ctor_set(v___x_4621_, 1, v___x_4623_);
v___x_4625_ = v___x_4621_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4626_; 
v_reuseFailAlloc_4626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4626_, 0, v_key_4618_);
lean_ctor_set(v_reuseFailAlloc_4626_, 1, v___x_4623_);
v___x_4625_ = v_reuseFailAlloc_4626_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
v___y_4611_ = v___x_4625_;
goto v___jp_4610_;
}
}
}
case 1:
{
lean_object* v_node_4628_; lean_object* v___x_4630_; uint8_t v_isShared_4631_; uint8_t v_isSharedCheck_4636_; 
v_node_4628_ = lean_ctor_get(v___x_4617_, 0);
v_isSharedCheck_4636_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4636_ == 0)
{
v___x_4630_ = v___x_4617_;
v_isShared_4631_ = v_isSharedCheck_4636_;
goto v_resetjp_4629_;
}
else
{
lean_inc(v_node_4628_);
lean_dec(v___x_4617_);
v___x_4630_ = lean_box(0);
v_isShared_4631_ = v_isSharedCheck_4636_;
goto v_resetjp_4629_;
}
v_resetjp_4629_:
{
lean_object* v___x_4632_; lean_object* v___x_4634_; 
lean_inc(v_f_4601_);
v___x_4632_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_4601_, v_node_4628_);
if (v_isShared_4631_ == 0)
{
lean_ctor_set(v___x_4630_, 0, v___x_4632_);
v___x_4634_ = v___x_4630_;
goto v_reusejp_4633_;
}
else
{
lean_object* v_reuseFailAlloc_4635_; 
v_reuseFailAlloc_4635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4635_, 0, v___x_4632_);
v___x_4634_ = v_reuseFailAlloc_4635_;
goto v_reusejp_4633_;
}
v_reusejp_4633_:
{
v___y_4611_ = v___x_4634_;
goto v___jp_4610_;
}
}
}
default: 
{
lean_object* v___x_4637_; 
v___x_4637_ = lean_box(2);
v___y_4611_ = v___x_4637_;
goto v___jp_4610_;
}
}
v___jp_4610_:
{
size_t v___x_4612_; size_t v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; 
v___x_4612_ = ((size_t)1ULL);
v___x_4613_ = lean_usize_add(v_i_4603_, v___x_4612_);
v___x_4614_ = l_unsafeCast___redArg(v___y_4611_);
lean_dec(v___y_4611_);
v___x_4615_ = lean_array_uset(v_bs_x27_4609_, v_i_4603_, v___x_4614_);
v_i_4603_ = v___x_4613_;
v_bs_4604_ = v___x_4615_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(lean_object* v_f_4638_, lean_object* v_n_4639_){
_start:
{
if (lean_obj_tag(v_n_4639_) == 0)
{
lean_object* v_es_4640_; lean_object* v___x_4642_; uint8_t v_isShared_4643_; uint8_t v_isSharedCheck_4652_; 
v_es_4640_ = lean_ctor_get(v_n_4639_, 0);
v_isSharedCheck_4652_ = !lean_is_exclusive(v_n_4639_);
if (v_isSharedCheck_4652_ == 0)
{
v___x_4642_ = v_n_4639_;
v_isShared_4643_ = v_isSharedCheck_4652_;
goto v_resetjp_4641_;
}
else
{
lean_inc(v_es_4640_);
lean_dec(v_n_4639_);
v___x_4642_ = lean_box(0);
v_isShared_4643_ = v_isSharedCheck_4652_;
goto v_resetjp_4641_;
}
v_resetjp_4641_:
{
size_t v_sz_4644_; size_t v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4650_; 
v_sz_4644_ = lean_array_size(v_es_4640_);
v___x_4645_ = ((size_t)0ULL);
v___x_4646_ = l_unsafeCast___redArg(v_es_4640_);
lean_dec_ref(v_es_4640_);
v___x_4647_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(v_f_4638_, v_sz_4644_, v___x_4645_, v___x_4646_);
v___x_4648_ = l_unsafeCast___redArg(v___x_4647_);
lean_dec_ref(v___x_4647_);
if (v_isShared_4643_ == 0)
{
lean_ctor_set(v___x_4642_, 0, v___x_4648_);
v___x_4650_ = v___x_4642_;
goto v_reusejp_4649_;
}
else
{
lean_object* v_reuseFailAlloc_4651_; 
v_reuseFailAlloc_4651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4651_, 0, v___x_4648_);
v___x_4650_ = v_reuseFailAlloc_4651_;
goto v_reusejp_4649_;
}
v_reusejp_4649_:
{
return v___x_4650_;
}
}
}
else
{
lean_object* v_ks_4653_; lean_object* v_vs_4654_; lean_object* v___x_4656_; uint8_t v_isShared_4657_; uint8_t v_isSharedCheck_4662_; 
v_ks_4653_ = lean_ctor_get(v_n_4639_, 0);
v_vs_4654_ = lean_ctor_get(v_n_4639_, 1);
v_isSharedCheck_4662_ = !lean_is_exclusive(v_n_4639_);
if (v_isSharedCheck_4662_ == 0)
{
v___x_4656_ = v_n_4639_;
v_isShared_4657_ = v_isSharedCheck_4662_;
goto v_resetjp_4655_;
}
else
{
lean_inc(v_vs_4654_);
lean_inc(v_ks_4653_);
lean_dec(v_n_4639_);
v___x_4656_ = lean_box(0);
v_isShared_4657_ = v_isSharedCheck_4662_;
goto v_resetjp_4655_;
}
v_resetjp_4655_:
{
lean_object* v_val_4658_; lean_object* v___x_4660_; 
v_val_4658_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(v_f_4638_, v_vs_4654_);
lean_dec_ref(v_vs_4654_);
if (v_isShared_4657_ == 0)
{
lean_ctor_set(v___x_4656_, 1, v_val_4658_);
v___x_4660_ = v___x_4656_;
goto v_reusejp_4659_;
}
else
{
lean_object* v_reuseFailAlloc_4661_; 
v_reuseFailAlloc_4661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4661_, 0, v_ks_4653_);
lean_ctor_set(v_reuseFailAlloc_4661_, 1, v_val_4658_);
v___x_4660_ = v_reuseFailAlloc_4661_;
goto v_reusejp_4659_;
}
v_reusejp_4659_:
{
return v___x_4660_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_4663_, lean_object* v_sz_4664_, lean_object* v_i_4665_, lean_object* v_bs_4666_){
_start:
{
size_t v_sz_boxed_4667_; size_t v_i_boxed_4668_; lean_object* v_res_4669_; 
v_sz_boxed_4667_ = lean_unbox_usize(v_sz_4664_);
lean_dec(v_sz_4664_);
v_i_boxed_4668_ = lean_unbox_usize(v_i_4665_);
lean_dec(v_i_4665_);
v_res_4669_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(v_f_4663_, v_sz_boxed_4667_, v_i_boxed_4668_, v_bs_4666_);
return v_res_4669_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg(lean_object* v_pm_4670_, lean_object* v_f_4671_){
_start:
{
lean_object* v___f_4672_; lean_object* v___x_4673_; 
v___f_4672_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4672_, 0, v_f_4671_);
v___x_4673_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v___f_4672_, v_pm_4670_);
return v___x_4673_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_replaceFVarId(lean_object* v_fvarId_4674_, lean_object* v_e_4675_, lean_object* v_lctx_4676_){
_start:
{
lean_object* v_lctx_4677_; lean_object* v_fvarIdToDecl_4678_; lean_object* v_decls_4679_; lean_object* v_auxDeclToFullName_4680_; lean_object* v___x_4682_; uint8_t v_isShared_4683_; uint8_t v_isSharedCheck_4690_; 
lean_inc(v_fvarId_4674_);
v_lctx_4677_ = lean_local_ctx_erase(v_lctx_4676_, v_fvarId_4674_);
v_fvarIdToDecl_4678_ = lean_ctor_get(v_lctx_4677_, 0);
v_decls_4679_ = lean_ctor_get(v_lctx_4677_, 1);
v_auxDeclToFullName_4680_ = lean_ctor_get(v_lctx_4677_, 2);
v_isSharedCheck_4690_ = !lean_is_exclusive(v_lctx_4677_);
if (v_isSharedCheck_4690_ == 0)
{
v___x_4682_ = v_lctx_4677_;
v_isShared_4683_ = v_isSharedCheck_4690_;
goto v_resetjp_4681_;
}
else
{
lean_inc(v_auxDeclToFullName_4680_);
lean_inc(v_decls_4679_);
lean_inc(v_fvarIdToDecl_4678_);
lean_dec(v_lctx_4677_);
v___x_4682_ = lean_box(0);
v_isShared_4683_ = v_isSharedCheck_4690_;
goto v_resetjp_4681_;
}
v_resetjp_4681_:
{
lean_object* v___f_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4688_; 
lean_inc_ref(v_e_4675_);
lean_inc(v_fvarId_4674_);
v___f_4684_ = lean_alloc_closure((void*)(l_Lean_LocalContext_replaceFVarId___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4684_, 0, v_fvarId_4674_);
lean_closure_set(v___f_4684_, 1, v_e_4675_);
v___x_4685_ = l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg(v_fvarIdToDecl_4678_, v___f_4684_);
v___x_4686_ = l_Lean_PersistentArray_mapM___at___00Lean_LocalContext_replaceFVarId_spec__1(v_fvarId_4674_, v_e_4675_, v_decls_4679_);
lean_dec_ref(v_e_4675_);
if (v_isShared_4683_ == 0)
{
lean_ctor_set(v___x_4682_, 1, v___x_4686_);
lean_ctor_set(v___x_4682_, 0, v___x_4685_);
v___x_4688_ = v___x_4682_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4689_; 
v_reuseFailAlloc_4689_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4689_, 0, v___x_4685_);
lean_ctor_set(v_reuseFailAlloc_4689_, 1, v___x_4686_);
lean_ctor_set(v_reuseFailAlloc_4689_, 2, v_auxDeclToFullName_4680_);
v___x_4688_ = v_reuseFailAlloc_4689_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
return v___x_4688_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0(lean_object* v_00_u03b2_4691_, lean_object* v_00_u03c3_4692_, lean_object* v_pm_4693_, lean_object* v_f_4694_){
_start:
{
lean_object* v___x_4695_; 
v___x_4695_ = l_Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0___redArg(v_pm_4693_, v_f_4694_);
return v___x_4695_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0___redArg(lean_object* v_pm_4696_, lean_object* v_f_4697_){
_start:
{
lean_object* v___x_4698_; 
v___x_4698_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_4697_, v_pm_4696_);
return v___x_4698_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0(lean_object* v_00_u03b2_4699_, lean_object* v_00_u03c3_4700_, lean_object* v_pm_4701_, lean_object* v_f_4702_){
_start:
{
lean_object* v___x_4703_; 
v___x_4703_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_4702_, v_pm_4701_);
return v___x_4703_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4704_, lean_object* v_00_u03b2_4705_, lean_object* v_00_u03c3_4706_, lean_object* v_f_4707_, lean_object* v_n_4708_){
_start:
{
lean_object* v___x_4709_; 
v___x_4709_ = l_Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1___redArg(v_f_4707_, v_n_4708_);
return v___x_4709_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b1_4710_, lean_object* v_00_u03b2_4711_, lean_object* v_00_u03c3_4712_, lean_object* v_f_4713_, size_t v_sz_4714_, size_t v_i_4715_, lean_object* v_bs_4716_){
_start:
{
lean_object* v___x_4717_; 
v___x_4717_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___redArg(v_f_4713_, v_sz_4714_, v_i_4715_, v_bs_4716_);
return v___x_4717_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_4718_, lean_object* v_00_u03b2_4719_, lean_object* v_00_u03c3_4720_, lean_object* v_f_4721_, lean_object* v_sz_4722_, lean_object* v_i_4723_, lean_object* v_bs_4724_){
_start:
{
size_t v_sz_boxed_4725_; size_t v_i_boxed_4726_; lean_object* v_res_4727_; 
v_sz_boxed_4725_ = lean_unbox_usize(v_sz_4722_);
lean_dec(v_sz_4722_);
v_i_boxed_4726_ = lean_unbox_usize(v_i_4723_);
lean_dec(v_i_4723_);
v_res_4727_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__3(v_00_u03b1_4718_, v_00_u03b2_4719_, v_00_u03c3_4720_, v_f_4721_, v_sz_boxed_4725_, v_i_boxed_4726_, v_bs_4724_);
return v_res_4727_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_4728_, lean_object* v_00_u03b2_4729_, lean_object* v_f_4730_, lean_object* v_as_4731_){
_start:
{
lean_object* v___x_4732_; 
v___x_4732_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___redArg(v_f_4730_, v_as_4731_);
return v___x_4732_;
}
}
LEAN_EXPORT lean_object* l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_4733_, lean_object* v_00_u03b2_4734_, lean_object* v_f_4735_, lean_object* v_as_4736_){
_start:
{
lean_object* v_res_4737_; 
v_res_4737_ = l_Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_4733_, v_00_u03b2_4734_, v_f_4735_, v_as_4736_);
lean_dec_ref(v_as_4736_);
return v_res_4737_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7(lean_object* v_00_u03b1_4738_, lean_object* v_00_u03b2_4739_, lean_object* v_f_4740_, lean_object* v_as_4741_, lean_object* v_i_4742_, lean_object* v_acc_4743_, lean_object* v_hle_4744_){
_start:
{
lean_object* v___x_4745_; 
v___x_4745_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___redArg(v_f_4740_, v_as_4741_, v_i_4742_, v_acc_4743_);
return v___x_4745_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7___boxed(lean_object* v_00_u03b1_4746_, lean_object* v_00_u03b2_4747_, lean_object* v_f_4748_, lean_object* v_as_4749_, lean_object* v_i_4750_, lean_object* v_acc_4751_, lean_object* v_hle_4752_){
_start:
{
lean_object* v_res_4753_; 
v_res_4753_ = l___private_Init_Data_Array_BasicAux_0__Array_mapM_x27_go___at___00Array_mapM_x27___at___00Lean_PersistentHashMap_mapMAux___at___00Lean_PersistentHashMap_mapM___at___00Lean_PersistentHashMap_map___at___00Lean_LocalContext_replaceFVarId_spec__0_spec__0_spec__1_spec__4_spec__7(v_00_u03b1_4746_, v_00_u03b2_4747_, v_f_4748_, v_as_4749_, v_i_4750_, v_acc_4751_, v_hle_4752_);
lean_dec_ref(v_as_4749_);
return v_res_4753_;
}
}
lean_object* runtime_initialize_Init_Data_Nat_Control(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_PersistentArray(uint8_t builtin);
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_LocalContext(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Nat_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PersistentArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedLocalDeclKind_default = _init_l_Lean_instInhabitedLocalDeclKind_default();
l_Lean_instInhabitedLocalDeclKind = _init_l_Lean_instInhabitedLocalDeclKind();
l_Lean_instInhabitedLocalDecl_default = _init_l_Lean_instInhabitedLocalDecl_default();
lean_mark_persistent(l_Lean_instInhabitedLocalDecl_default);
l_Lean_instInhabitedLocalDecl = _init_l_Lean_instInhabitedLocalDecl();
lean_mark_persistent(l_Lean_instInhabitedLocalDecl);
l_Lean_instInhabitedLocalContext_default = _init_l_Lean_instInhabitedLocalContext_default();
lean_mark_persistent(l_Lean_instInhabitedLocalContext_default);
l_Lean_instInhabitedLocalContext = _init_l_Lean_instInhabitedLocalContext();
lean_mark_persistent(l_Lean_instInhabitedLocalContext);
l_Lean_LocalContext_empty = _init_l_Lean_LocalContext_empty();
lean_mark_persistent(l_Lean_LocalContext_empty);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_LocalContext(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Nat_Control(uint8_t builtin);
lean_object* initialize_Lean_Data_PersistentArray(uint8_t builtin);
lean_object* initialize_Lean_Expr(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_LocalContext(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Nat_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_PersistentArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_LocalContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_LocalContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_LocalContext(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Sym.LiftLet
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.ReplaceS
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
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_EStateM_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_seqRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_runShareCommonM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg();
uint8_t lean_usize_dec_lt(size_t, size_t);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_EStateM_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
static const lean_string_object l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instInhabitedDecl;
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv_unsafe__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv_unsafe__1___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv_unsafe__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv_unsafe__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__0, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__1, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__2, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_map, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_pure, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_seqRight, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_bind, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "_private.Lean.Meta.Sym.ReplaceS.0.Lean.Meta.Sym.visit"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.Sym.ReplaceS"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.Sym.AlphaShareBuilder"};
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.Sym.Internal.liftBuilderM"};
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "`Sym.liftLets` internal error, input term is not closed"};
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3;
static const lean_string_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "_private.Lean.Meta.Sym.LiftLet.0.Lean.Meta.Sym.LiftLet.go.visit"};
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Meta.Sym.LiftLet"};
static const lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Meta.Sym.LiftLet.0.Lean.Meta.Sym.LiftLet.mkLets"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "assertion violation: p < i\n          "};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_liftLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_liftLets___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_liftLets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_liftLets___closed__1;
static const lean_array_object l_Lean_Meta_Sym_liftLets___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Sym_liftLets___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_liftLets___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Sym_liftLets___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_liftLets___closed__3;
static const lean_string_object l_Lean_Meta_Sym_liftLets___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "`Sym.liftLets` internal error, input term has loose bound variables"};
static const lean_object* l_Lean_Meta_Sym_liftLets___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_liftLets___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Sym_liftLets___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_liftLets___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_box(0);
v___x_8_ = l_unsafeCast___redArg(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__4(void){
_start:
{
uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_9_ = 0;
v___x_10_ = lean_obj_once(&l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3, &l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3_once, _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__3);
v___x_11_ = lean_obj_once(&l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2, &l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2_once, _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__2);
v___x_12_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_10_);
lean_ctor_set(v___x_12_, 2, v___x_11_);
lean_ctor_set(v___x_12_, 3, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*4, v___x_9_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__4, &l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__4_once, _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default___closed__4);
return v___x_13_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instInhabitedDecl(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default;
return v___x_14_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv_unsafe__1(lean_object* v_xs_15_){
_start:
{
size_t v___x_16_; size_t v___x_17_; size_t v___x_18_; uint64_t v___x_19_; 
v___x_16_ = lean_ptr_addr(v_xs_15_);
v___x_17_ = ((size_t)3ULL);
v___x_18_ = lean_usize_shift_right(v___x_16_, v___x_17_);
v___x_19_ = lean_usize_to_uint64(v___x_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv_unsafe__1___boxed(lean_object* v_xs_20_){
_start:
{
uint64_t v_res_21_; lean_object* v_r_22_; 
v_res_21_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv_unsafe__1(v_xs_20_);
lean_dec_ref(v_xs_20_);
v_r_22_ = lean_box_uint64(v_res_21_);
return v_r_22_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv(lean_object* v_xs_23_){
_start:
{
size_t v___x_24_; size_t v___x_25_; size_t v___x_26_; uint64_t v___x_27_; 
v___x_24_ = lean_ptr_addr(v_xs_23_);
v___x_25_ = ((size_t)3ULL);
v___x_26_ = lean_usize_shift_right(v___x_24_, v___x_25_);
v___x_27_ = lean_usize_to_uint64(v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv___boxed(lean_object* v_xs_28_){
_start:
{
uint64_t v_res_29_; lean_object* v_r_30_; 
v_res_29_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hashPtrEnv(v_xs_28_);
lean_dec_ref(v_xs_28_);
v_r_30_ = lean_box_uint64(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv_unsafe__1(lean_object* v_xs_31_, lean_object* v_ys_32_){
_start:
{
size_t v___x_33_; size_t v___x_34_; uint8_t v___x_35_; 
v___x_33_ = lean_ptr_addr(v_xs_31_);
v___x_34_ = lean_ptr_addr(v_ys_32_);
v___x_35_ = lean_usize_dec_eq(v___x_33_, v___x_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv_unsafe__1___boxed(lean_object* v_xs_36_, lean_object* v_ys_37_){
_start:
{
uint8_t v_res_38_; lean_object* v_r_39_; 
v_res_38_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv_unsafe__1(v_xs_36_, v_ys_37_);
lean_dec_ref(v_ys_37_);
lean_dec_ref(v_xs_36_);
v_r_39_ = lean_box(v_res_38_);
return v_r_39_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv(lean_object* v_xs_40_, lean_object* v_ys_41_){
_start:
{
size_t v___x_42_; size_t v___x_43_; uint8_t v___x_44_; 
v___x_42_ = lean_ptr_addr(v_xs_40_);
v___x_43_ = lean_ptr_addr(v_ys_41_);
v___x_44_ = lean_usize_dec_eq(v___x_42_, v___x_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv___boxed(lean_object* v_xs_45_, lean_object* v_ys_46_){
_start:
{
uint8_t v_res_47_; lean_object* v_r_48_; 
v_res_47_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_isSameEnv(v_xs_45_, v_ys_46_);
lean_dec_ref(v_ys_46_);
lean_dec_ref(v_xs_45_);
v_r_48_ = lean_box(v_res_47_);
return v_r_48_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0(lean_object* v_k_49_){
_start:
{
size_t v___x_50_; size_t v___x_51_; size_t v___x_52_; uint64_t v___x_53_; 
v___x_50_ = lean_ptr_addr(v_k_49_);
v___x_51_ = ((size_t)3ULL);
v___x_52_ = lean_usize_shift_right(v___x_50_, v___x_51_);
v___x_53_ = lean_usize_to_uint64(v___x_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0___boxed(lean_object* v_k_54_){
_start:
{
uint64_t v_res_55_; lean_object* v_r_56_; 
v_res_55_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instHashableEnvPtr___lam__0(v_k_54_);
lean_dec_ref(v_k_54_);
v_r_56_ = lean_box_uint64(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0(lean_object* v_k_u2081_59_, lean_object* v_k_u2082_60_){
_start:
{
size_t v___x_61_; size_t v___x_62_; uint8_t v___x_63_; 
v___x_61_ = lean_ptr_addr(v_k_u2081_59_);
v___x_62_ = lean_ptr_addr(v_k_u2082_60_);
v___x_63_ = lean_usize_dec_eq(v___x_61_, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0___boxed(lean_object* v_k_u2081_64_, lean_object* v_k_u2082_65_){
_start:
{
uint8_t v_res_66_; lean_object* v_r_67_; 
v_res_66_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instBEqEnvPtr___lam__0(v_k_u2081_64_, v_k_u2082_65_);
lean_dec_ref(v_k_u2082_65_);
lean_dec_ref(v_k_u2081_64_);
v_r_67_ = lean_box(v_res_66_);
return v_r_67_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_70_, lean_object* v_x_71_){
_start:
{
if (lean_obj_tag(v_x_71_) == 0)
{
return v_x_70_;
}
else
{
lean_object* v_key_72_; lean_object* v_value_73_; lean_object* v_tail_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_100_; 
v_key_72_ = lean_ctor_get(v_x_71_, 0);
v_value_73_ = lean_ctor_get(v_x_71_, 1);
v_tail_74_ = lean_ctor_get(v_x_71_, 2);
v_isSharedCheck_100_ = !lean_is_exclusive(v_x_71_);
if (v_isSharedCheck_100_ == 0)
{
v___x_76_ = v_x_71_;
v_isShared_77_ = v_isSharedCheck_100_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_tail_74_);
lean_inc(v_value_73_);
lean_inc(v_key_72_);
lean_dec(v_x_71_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_100_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_78_; size_t v___x_79_; size_t v___x_80_; size_t v___x_81_; uint64_t v___x_82_; uint64_t v___x_83_; uint64_t v___x_84_; uint64_t v_fold_85_; uint64_t v___x_86_; uint64_t v___x_87_; uint64_t v___x_88_; size_t v___x_89_; size_t v___x_90_; size_t v___x_91_; size_t v___x_92_; size_t v___x_93_; lean_object* v___x_94_; lean_object* v___x_96_; 
v___x_78_ = lean_array_get_size(v_x_70_);
v___x_79_ = lean_ptr_addr(v_key_72_);
v___x_80_ = ((size_t)3ULL);
v___x_81_ = lean_usize_shift_right(v___x_79_, v___x_80_);
v___x_82_ = lean_usize_to_uint64(v___x_81_);
v___x_83_ = 32ULL;
v___x_84_ = lean_uint64_shift_right(v___x_82_, v___x_83_);
v_fold_85_ = lean_uint64_xor(v___x_82_, v___x_84_);
v___x_86_ = 16ULL;
v___x_87_ = lean_uint64_shift_right(v_fold_85_, v___x_86_);
v___x_88_ = lean_uint64_xor(v_fold_85_, v___x_87_);
v___x_89_ = lean_uint64_to_usize(v___x_88_);
v___x_90_ = lean_usize_of_nat(v___x_78_);
v___x_91_ = ((size_t)1ULL);
v___x_92_ = lean_usize_sub(v___x_90_, v___x_91_);
v___x_93_ = lean_usize_land(v___x_89_, v___x_92_);
v___x_94_ = lean_array_uget_borrowed(v_x_70_, v___x_93_);
lean_inc(v___x_94_);
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 2, v___x_94_);
v___x_96_ = v___x_76_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_key_72_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v_value_73_);
lean_ctor_set(v_reuseFailAlloc_99_, 2, v___x_94_);
v___x_96_ = v_reuseFailAlloc_99_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
lean_object* v___x_97_; 
v___x_97_ = lean_array_uset(v_x_70_, v___x_93_, v___x_96_);
v_x_70_ = v___x_97_;
v_x_71_ = v_tail_74_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4___redArg(lean_object* v_i_101_, lean_object* v_source_102_, lean_object* v_target_103_){
_start:
{
lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_104_ = lean_array_get_size(v_source_102_);
v___x_105_ = lean_nat_dec_lt(v_i_101_, v___x_104_);
if (v___x_105_ == 0)
{
lean_dec_ref(v_source_102_);
lean_dec(v_i_101_);
return v_target_103_;
}
else
{
lean_object* v_es_106_; lean_object* v___x_107_; lean_object* v_source_108_; lean_object* v_target_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v_es_106_ = lean_array_fget(v_source_102_, v_i_101_);
v___x_107_ = lean_box(0);
v_source_108_ = lean_array_fset(v_source_102_, v_i_101_, v___x_107_);
v_target_109_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5___redArg(v_target_103_, v_es_106_);
v___x_110_ = lean_unsigned_to_nat(1u);
v___x_111_ = lean_nat_add(v_i_101_, v___x_110_);
lean_dec(v_i_101_);
v_i_101_ = v___x_111_;
v_source_102_ = v_source_108_;
v_target_103_ = v_target_109_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3___redArg(lean_object* v_data_113_){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v_nbuckets_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_114_ = lean_array_get_size(v_data_113_);
v___x_115_ = lean_unsigned_to_nat(2u);
v_nbuckets_116_ = lean_nat_mul(v___x_114_, v___x_115_);
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_box(0);
v___x_119_ = lean_mk_array(v_nbuckets_116_, v___x_118_);
v___x_120_ = lean_array_propagate_mark(v_data_113_, v___x_119_);
v___x_121_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4___redArg(v___x_117_, v_data_113_, v___x_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4___redArg(lean_object* v_a_122_, lean_object* v_b_123_, lean_object* v_x_124_){
_start:
{
if (lean_obj_tag(v_x_124_) == 0)
{
lean_dec(v_b_123_);
lean_dec_ref(v_a_122_);
return v_x_124_;
}
else
{
lean_object* v_key_125_; lean_object* v_value_126_; lean_object* v_tail_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_141_; 
v_key_125_ = lean_ctor_get(v_x_124_, 0);
v_value_126_ = lean_ctor_get(v_x_124_, 1);
v_tail_127_ = lean_ctor_get(v_x_124_, 2);
v_isSharedCheck_141_ = !lean_is_exclusive(v_x_124_);
if (v_isSharedCheck_141_ == 0)
{
v___x_129_ = v_x_124_;
v_isShared_130_ = v_isSharedCheck_141_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_tail_127_);
lean_inc(v_value_126_);
lean_inc(v_key_125_);
lean_dec(v_x_124_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_141_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
size_t v___x_131_; size_t v___x_132_; uint8_t v___x_133_; 
v___x_131_ = lean_ptr_addr(v_key_125_);
v___x_132_ = lean_ptr_addr(v_a_122_);
v___x_133_ = lean_usize_dec_eq(v___x_131_, v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; lean_object* v___x_136_; 
v___x_134_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4___redArg(v_a_122_, v_b_123_, v_tail_127_);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 2, v___x_134_);
v___x_136_ = v___x_129_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_key_125_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v_value_126_);
lean_ctor_set(v_reuseFailAlloc_137_, 2, v___x_134_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
else
{
lean_object* v___x_139_; 
lean_dec(v_value_126_);
lean_dec(v_key_125_);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 1, v_b_123_);
lean_ctor_set(v___x_129_, 0, v_a_122_);
v___x_139_ = v___x_129_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_122_);
lean_ctor_set(v_reuseFailAlloc_140_, 1, v_b_123_);
lean_ctor_set(v_reuseFailAlloc_140_, 2, v_tail_127_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg(lean_object* v_a_142_, lean_object* v_x_143_){
_start:
{
if (lean_obj_tag(v_x_143_) == 0)
{
uint8_t v___x_144_; 
v___x_144_ = 0;
return v___x_144_;
}
else
{
lean_object* v_key_145_; lean_object* v_tail_146_; size_t v___x_147_; size_t v___x_148_; uint8_t v___x_149_; 
v_key_145_ = lean_ctor_get(v_x_143_, 0);
v_tail_146_ = lean_ctor_get(v_x_143_, 2);
v___x_147_ = lean_ptr_addr(v_key_145_);
v___x_148_ = lean_ptr_addr(v_a_142_);
v___x_149_ = lean_usize_dec_eq(v___x_147_, v___x_148_);
if (v___x_149_ == 0)
{
v_x_143_ = v_tail_146_;
goto _start;
}
else
{
return v___x_149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg___boxed(lean_object* v_a_151_, lean_object* v_x_152_){
_start:
{
uint8_t v_res_153_; lean_object* v_r_154_; 
v_res_153_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg(v_a_151_, v_x_152_);
lean_dec(v_x_152_);
lean_dec_ref(v_a_151_);
v_r_154_ = lean_box(v_res_153_);
return v_r_154_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1___redArg(lean_object* v_m_155_, lean_object* v_a_156_, lean_object* v_b_157_){
_start:
{
lean_object* v_size_158_; lean_object* v_buckets_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_205_; 
v_size_158_ = lean_ctor_get(v_m_155_, 0);
v_buckets_159_ = lean_ctor_get(v_m_155_, 1);
v_isSharedCheck_205_ = !lean_is_exclusive(v_m_155_);
if (v_isSharedCheck_205_ == 0)
{
v___x_161_ = v_m_155_;
v_isShared_162_ = v_isSharedCheck_205_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_buckets_159_);
lean_inc(v_size_158_);
lean_dec(v_m_155_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_205_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_163_; size_t v___x_164_; size_t v___x_165_; size_t v___x_166_; uint64_t v___x_167_; uint64_t v___x_168_; uint64_t v___x_169_; uint64_t v_fold_170_; uint64_t v___x_171_; uint64_t v___x_172_; uint64_t v___x_173_; size_t v___x_174_; size_t v___x_175_; size_t v___x_176_; size_t v___x_177_; size_t v___x_178_; lean_object* v_bkt_179_; uint8_t v___x_180_; 
v___x_163_ = lean_array_get_size(v_buckets_159_);
v___x_164_ = lean_ptr_addr(v_a_156_);
v___x_165_ = ((size_t)3ULL);
v___x_166_ = lean_usize_shift_right(v___x_164_, v___x_165_);
v___x_167_ = lean_usize_to_uint64(v___x_166_);
v___x_168_ = 32ULL;
v___x_169_ = lean_uint64_shift_right(v___x_167_, v___x_168_);
v_fold_170_ = lean_uint64_xor(v___x_167_, v___x_169_);
v___x_171_ = 16ULL;
v___x_172_ = lean_uint64_shift_right(v_fold_170_, v___x_171_);
v___x_173_ = lean_uint64_xor(v_fold_170_, v___x_172_);
v___x_174_ = lean_uint64_to_usize(v___x_173_);
v___x_175_ = lean_usize_of_nat(v___x_163_);
v___x_176_ = ((size_t)1ULL);
v___x_177_ = lean_usize_sub(v___x_175_, v___x_176_);
v___x_178_ = lean_usize_land(v___x_174_, v___x_177_);
v_bkt_179_ = lean_array_uget_borrowed(v_buckets_159_, v___x_178_);
v___x_180_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg(v_a_156_, v_bkt_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v_size_x27_182_; lean_object* v___x_183_; lean_object* v_buckets_x27_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_181_ = lean_unsigned_to_nat(1u);
v_size_x27_182_ = lean_nat_add(v_size_158_, v___x_181_);
lean_dec(v_size_158_);
lean_inc(v_bkt_179_);
v___x_183_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_183_, 0, v_a_156_);
lean_ctor_set(v___x_183_, 1, v_b_157_);
lean_ctor_set(v___x_183_, 2, v_bkt_179_);
v_buckets_x27_184_ = lean_array_uset(v_buckets_159_, v___x_178_, v___x_183_);
v___x_185_ = lean_unsigned_to_nat(4u);
v___x_186_ = lean_nat_mul(v_size_x27_182_, v___x_185_);
v___x_187_ = lean_unsigned_to_nat(3u);
v___x_188_ = lean_nat_div(v___x_186_, v___x_187_);
lean_dec(v___x_186_);
v___x_189_ = lean_array_get_size(v_buckets_x27_184_);
v___x_190_ = lean_nat_dec_le(v___x_188_, v___x_189_);
lean_dec(v___x_188_);
if (v___x_190_ == 0)
{
lean_object* v_val_191_; lean_object* v___x_193_; 
v_val_191_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3___redArg(v_buckets_x27_184_);
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 1, v_val_191_);
lean_ctor_set(v___x_161_, 0, v_size_x27_182_);
v___x_193_ = v___x_161_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_size_x27_182_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v_val_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
else
{
lean_object* v___x_196_; 
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 1, v_buckets_x27_184_);
lean_ctor_set(v___x_161_, 0, v_size_x27_182_);
v___x_196_ = v___x_161_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_size_x27_182_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v_buckets_x27_184_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
else
{
lean_object* v___x_198_; lean_object* v_buckets_x27_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_203_; 
lean_inc(v_bkt_179_);
v___x_198_ = lean_box(0);
v_buckets_x27_199_ = lean_array_uset(v_buckets_159_, v___x_178_, v___x_198_);
v___x_200_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4___redArg(v_a_156_, v_b_157_, v_bkt_179_);
v___x_201_ = lean_array_uset(v_buckets_x27_199_, v___x_178_, v___x_200_);
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 1, v___x_201_);
v___x_203_ = v___x_161_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_size_158_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v___x_201_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg(lean_object* v_a_206_, lean_object* v_x_207_){
_start:
{
if (lean_obj_tag(v_x_207_) == 0)
{
lean_object* v___x_208_; 
v___x_208_ = lean_box(0);
return v___x_208_;
}
else
{
lean_object* v_key_209_; lean_object* v_value_210_; lean_object* v_tail_211_; size_t v___x_212_; size_t v___x_213_; uint8_t v___x_214_; 
v_key_209_ = lean_ctor_get(v_x_207_, 0);
v_value_210_ = lean_ctor_get(v_x_207_, 1);
v_tail_211_ = lean_ctor_get(v_x_207_, 2);
v___x_212_ = lean_ptr_addr(v_key_209_);
v___x_213_ = lean_ptr_addr(v_a_206_);
v___x_214_ = lean_usize_dec_eq(v___x_212_, v___x_213_);
if (v___x_214_ == 0)
{
v_x_207_ = v_tail_211_;
goto _start;
}
else
{
lean_object* v___x_216_; 
lean_inc(v_value_210_);
v___x_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_216_, 0, v_value_210_);
return v___x_216_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg___boxed(lean_object* v_a_217_, lean_object* v_x_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg(v_a_217_, v_x_218_);
lean_dec(v_x_218_);
lean_dec_ref(v_a_217_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(lean_object* v_m_220_, lean_object* v_a_221_){
_start:
{
lean_object* v_buckets_222_; lean_object* v___x_223_; size_t v___x_224_; size_t v___x_225_; size_t v___x_226_; uint64_t v___x_227_; uint64_t v___x_228_; uint64_t v___x_229_; uint64_t v_fold_230_; uint64_t v___x_231_; uint64_t v___x_232_; uint64_t v___x_233_; size_t v___x_234_; size_t v___x_235_; size_t v___x_236_; size_t v___x_237_; size_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_buckets_222_ = lean_ctor_get(v_m_220_, 1);
v___x_223_ = lean_array_get_size(v_buckets_222_);
v___x_224_ = lean_ptr_addr(v_a_221_);
v___x_225_ = ((size_t)3ULL);
v___x_226_ = lean_usize_shift_right(v___x_224_, v___x_225_);
v___x_227_ = lean_usize_to_uint64(v___x_226_);
v___x_228_ = 32ULL;
v___x_229_ = lean_uint64_shift_right(v___x_227_, v___x_228_);
v_fold_230_ = lean_uint64_xor(v___x_227_, v___x_229_);
v___x_231_ = 16ULL;
v___x_232_ = lean_uint64_shift_right(v_fold_230_, v___x_231_);
v___x_233_ = lean_uint64_xor(v_fold_230_, v___x_232_);
v___x_234_ = lean_uint64_to_usize(v___x_233_);
v___x_235_ = lean_usize_of_nat(v___x_223_);
v___x_236_ = ((size_t)1ULL);
v___x_237_ = lean_usize_sub(v___x_235_, v___x_236_);
v___x_238_ = lean_usize_land(v___x_234_, v___x_237_);
v___x_239_ = lean_array_uget_borrowed(v_buckets_222_, v___x_238_);
v___x_240_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg(v_a_221_, v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg___boxed(lean_object* v_m_241_, lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(v_m_241_, v_a_242_);
lean_dec_ref(v_a_242_);
lean_dec_ref(v_m_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0___boxed(lean_object* v_fn_244_, lean_object* v_arg_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0(v_fn_244_, v_arg_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_248_);
lean_dec_ref(v___y_247_);
lean_dec(v___y_246_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___boxed(lean_object* v_e_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(v_e_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_, v_a_261_, v_a_262_);
lean_dec(v_a_262_);
lean_dec_ref(v_a_261_);
lean_dec(v_a_260_);
lean_dec_ref(v_a_259_);
lean_dec(v_a_258_);
lean_dec_ref(v_a_257_);
lean_dec(v_a_256_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(lean_object* v_e_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
lean_object* v_e_275_; lean_object* v_k_276_; lean_object* v___y_277_; lean_object* v___y_278_; lean_object* v___y_279_; lean_object* v___y_280_; lean_object* v___y_281_; lean_object* v___y_282_; lean_object* v___y_283_; 
switch(lean_obj_tag(v_e_265_))
{
case 8:
{
uint8_t v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
lean_dec_ref_known(v_e_265_, 4);
v___x_319_ = 1;
v___x_320_ = lean_box(v___x_319_);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
case 5:
{
lean_object* v_fn_322_; lean_object* v_arg_323_; lean_object* v___f_324_; 
v_fn_322_ = lean_ctor_get(v_e_265_, 0);
v_arg_323_ = lean_ctor_get(v_e_265_, 1);
lean_inc_ref(v_arg_323_);
lean_inc_ref(v_fn_322_);
v___f_324_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0___boxed), 10, 2);
lean_closure_set(v___f_324_, 0, v_fn_322_);
lean_closure_set(v___f_324_, 1, v_arg_323_);
v_e_275_ = v_e_265_;
v_k_276_ = v___f_324_;
v___y_277_ = v_a_266_;
v___y_278_ = v_a_267_;
v___y_279_ = v_a_268_;
v___y_280_ = v_a_269_;
v___y_281_ = v_a_270_;
v___y_282_ = v_a_271_;
v___y_283_ = v_a_272_;
goto v___jp_274_;
}
case 10:
{
lean_object* v_expr_325_; lean_object* v___x_326_; 
v_expr_325_ = lean_ctor_get(v_e_265_, 1);
lean_inc_ref(v_expr_325_);
v___x_326_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___boxed), 9, 1);
lean_closure_set(v___x_326_, 0, v_expr_325_);
v_e_275_ = v_e_265_;
v_k_276_ = v___x_326_;
v___y_277_ = v_a_266_;
v___y_278_ = v_a_267_;
v___y_279_ = v_a_268_;
v___y_280_ = v_a_269_;
v___y_281_ = v_a_270_;
v___y_282_ = v_a_271_;
v___y_283_ = v_a_272_;
goto v___jp_274_;
}
case 11:
{
lean_object* v_struct_327_; lean_object* v___x_328_; 
v_struct_327_ = lean_ctor_get(v_e_265_, 2);
lean_inc_ref(v_struct_327_);
v___x_328_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___boxed), 9, 1);
lean_closure_set(v___x_328_, 0, v_struct_327_);
v_e_275_ = v_e_265_;
v_k_276_ = v___x_328_;
v___y_277_ = v_a_266_;
v___y_278_ = v_a_267_;
v___y_279_ = v_a_268_;
v___y_280_ = v_a_269_;
v___y_281_ = v_a_270_;
v___y_282_ = v_a_271_;
v___y_283_ = v_a_272_;
goto v___jp_274_;
}
default: 
{
uint8_t v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
lean_dec_ref(v_e_265_);
v___x_329_ = 0;
v___x_330_ = lean_box(v___x_329_);
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
return v___x_331_;
}
}
v___jp_274_:
{
lean_object* v___x_284_; lean_object* v_hasLetCache_285_; lean_object* v___x_286_; 
v___x_284_ = lean_st_ref_get(v___y_277_);
v_hasLetCache_285_ = lean_ctor_get(v___x_284_, 2);
lean_inc_ref(v_hasLetCache_285_);
lean_dec(v___x_284_);
v___x_286_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(v_hasLetCache_285_, v_e_275_);
lean_dec_ref(v_hasLetCache_285_);
if (lean_obj_tag(v___x_286_) == 1)
{
lean_object* v_val_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec_ref(v_k_276_);
lean_dec_ref(v_e_275_);
v_val_287_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_286_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_val_287_);
lean_dec(v___x_286_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
lean_ctor_set_tag(v___x_289_, 0);
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_val_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
else
{
lean_object* v___x_295_; 
lean_dec(v___x_286_);
lean_inc(v___y_283_);
lean_inc_ref(v___y_282_);
lean_inc(v___y_281_);
lean_inc_ref(v___y_280_);
lean_inc(v___y_279_);
lean_inc_ref(v___y_278_);
lean_inc(v___y_277_);
v___x_295_ = lean_apply_8(v_k_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, lean_box(0));
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_318_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_318_ == 0)
{
v___x_298_ = v___x_295_;
v_isShared_299_ = v_isSharedCheck_318_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_295_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_318_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_300_; lean_object* v_cache_301_; lean_object* v_cacheClosed_302_; lean_object* v_hasLetCache_303_; lean_object* v_decls_304_; lean_object* v_valueMap_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_317_; 
v___x_300_ = lean_st_ref_take(v___y_277_);
v_cache_301_ = lean_ctor_get(v___x_300_, 0);
v_cacheClosed_302_ = lean_ctor_get(v___x_300_, 1);
v_hasLetCache_303_ = lean_ctor_get(v___x_300_, 2);
v_decls_304_ = lean_ctor_get(v___x_300_, 3);
v_valueMap_305_ = lean_ctor_get(v___x_300_, 4);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_317_ == 0)
{
v___x_307_ = v___x_300_;
v_isShared_308_ = v_isSharedCheck_317_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_valueMap_305_);
lean_inc(v_decls_304_);
lean_inc(v_hasLetCache_303_);
lean_inc(v_cacheClosed_302_);
lean_inc(v_cache_301_);
lean_dec(v___x_300_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_317_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_309_; lean_object* v___x_311_; 
lean_inc(v_a_296_);
v___x_309_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1___redArg(v_hasLetCache_303_, v_e_275_, v_a_296_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 2, v___x_309_);
v___x_311_ = v___x_307_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_cache_301_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_cacheClosed_302_);
lean_ctor_set(v_reuseFailAlloc_316_, 2, v___x_309_);
lean_ctor_set(v_reuseFailAlloc_316_, 3, v_decls_304_);
lean_ctor_set(v_reuseFailAlloc_316_, 4, v_valueMap_305_);
v___x_311_ = v_reuseFailAlloc_316_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
lean_object* v___x_312_; lean_object* v___x_314_; 
v___x_312_ = lean_st_ref_put(v___y_277_, v___x_311_);
if (v_isShared_299_ == 0)
{
v___x_314_ = v___x_298_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_296_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_275_);
return v___x_295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet___lam__0(lean_object* v_fn_332_, lean_object* v_arg_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(v_fn_332_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
if (lean_obj_tag(v___x_342_) == 0)
{
lean_object* v_a_343_; uint8_t v___x_344_; 
v_a_343_ = lean_ctor_get(v___x_342_, 0);
lean_inc(v_a_343_);
v___x_344_ = lean_unbox(v_a_343_);
lean_dec(v_a_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; 
lean_dec_ref_known(v___x_342_, 1);
v___x_345_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(v_arg_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
return v___x_345_;
}
else
{
lean_dec_ref(v_arg_333_);
return v___x_342_;
}
}
else
{
lean_dec_ref(v_arg_333_);
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0(lean_object* v_00_u03b2_346_, lean_object* v_m_347_, lean_object* v_a_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(v_m_347_, v_a_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___boxed(lean_object* v_00_u03b2_350_, lean_object* v_m_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0(v_00_u03b2_350_, v_m_351_, v_a_352_);
lean_dec_ref(v_a_352_);
lean_dec_ref(v_m_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1(lean_object* v_00_u03b2_354_, lean_object* v_m_355_, lean_object* v_a_356_, lean_object* v_b_357_){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1___redArg(v_m_355_, v_a_356_, v_b_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0(lean_object* v_00_u03b2_359_, lean_object* v_a_360_, lean_object* v_x_361_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___redArg(v_a_360_, v_x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0___boxed(lean_object* v_00_u03b2_363_, lean_object* v_a_364_, lean_object* v_x_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0_spec__0(v_00_u03b2_363_, v_a_364_, v_x_365_);
lean_dec(v_x_365_);
lean_dec_ref(v_a_364_);
return v_res_366_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2(lean_object* v_00_u03b2_367_, lean_object* v_a_368_, lean_object* v_x_369_){
_start:
{
uint8_t v___x_370_; 
v___x_370_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___redArg(v_a_368_, v_x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2___boxed(lean_object* v_00_u03b2_371_, lean_object* v_a_372_, lean_object* v_x_373_){
_start:
{
uint8_t v_res_374_; lean_object* v_r_375_; 
v_res_374_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__2(v_00_u03b2_371_, v_a_372_, v_x_373_);
lean_dec(v_x_373_);
lean_dec_ref(v_a_372_);
v_r_375_ = lean_box(v_res_374_);
return v_r_375_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3(lean_object* v_00_u03b2_376_, lean_object* v_data_377_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3___redArg(v_data_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4(lean_object* v_00_u03b2_379_, lean_object* v_a_380_, lean_object* v_b_381_, lean_object* v_x_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__4___redArg(v_a_380_, v_b_381_, v_x_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_384_, lean_object* v_i_385_, lean_object* v_source_386_, lean_object* v_target_387_){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4___redArg(v_i_385_, v_source_386_, v_target_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_389_, lean_object* v_x_390_, lean_object* v_x_391_){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1_spec__3_spec__4_spec__5___redArg(v_x_390_, v_x_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg(lean_object* v_fvarId_393_, lean_object* v___y_394_){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = l_Lean_Expr_fvar___override(v_fvarId_393_);
v___x_397_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_396_, v___y_394_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg___boxed(lean_object* v_fvarId_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg(v_fvarId_398_, v___y_399_);
lean_dec(v___y_399_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2(lean_object* v_fvarId_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg(v_fvarId_402_, v___y_405_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___boxed(lean_object* v_fvarId_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2(v_fvarId_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
lean_dec(v___y_413_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg(lean_object* v___y_422_){
_start:
{
lean_object* v___x_424_; lean_object* v_ngen_425_; lean_object* v_namePrefix_426_; lean_object* v_idx_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_456_; 
v___x_424_ = lean_st_ref_get(v___y_422_);
v_ngen_425_ = lean_ctor_get(v___x_424_, 2);
lean_inc_ref(v_ngen_425_);
lean_dec(v___x_424_);
v_namePrefix_426_ = lean_ctor_get(v_ngen_425_, 0);
v_idx_427_ = lean_ctor_get(v_ngen_425_, 1);
v_isSharedCheck_456_ = !lean_is_exclusive(v_ngen_425_);
if (v_isSharedCheck_456_ == 0)
{
v___x_429_ = v_ngen_425_;
v_isShared_430_ = v_isSharedCheck_456_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_idx_427_);
lean_inc(v_namePrefix_426_);
lean_dec(v_ngen_425_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_456_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v_r_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_435_; 
lean_inc(v_idx_427_);
lean_inc(v_namePrefix_426_);
v_r_431_ = l_Lean_Name_num___override(v_namePrefix_426_, v_idx_427_);
v___x_432_ = lean_unsigned_to_nat(1u);
v___x_433_ = lean_nat_add(v_idx_427_, v___x_432_);
lean_dec(v_idx_427_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 1, v___x_433_);
v___x_435_ = v___x_429_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_namePrefix_426_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v___x_433_);
v___x_435_ = v_reuseFailAlloc_455_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
lean_object* v___x_436_; lean_object* v_env_437_; lean_object* v_nextMacroScope_438_; lean_object* v_auxDeclNGen_439_; lean_object* v_traceState_440_; lean_object* v_cache_441_; lean_object* v_messages_442_; lean_object* v_infoState_443_; lean_object* v_snapshotTasks_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_453_; 
v___x_436_ = lean_st_ref_take(v___y_422_);
v_env_437_ = lean_ctor_get(v___x_436_, 0);
v_nextMacroScope_438_ = lean_ctor_get(v___x_436_, 1);
v_auxDeclNGen_439_ = lean_ctor_get(v___x_436_, 3);
v_traceState_440_ = lean_ctor_get(v___x_436_, 4);
v_cache_441_ = lean_ctor_get(v___x_436_, 5);
v_messages_442_ = lean_ctor_get(v___x_436_, 6);
v_infoState_443_ = lean_ctor_get(v___x_436_, 7);
v_snapshotTasks_444_ = lean_ctor_get(v___x_436_, 8);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_453_ == 0)
{
lean_object* v_unused_454_; 
v_unused_454_ = lean_ctor_get(v___x_436_, 2);
lean_dec(v_unused_454_);
v___x_446_ = v___x_436_;
v_isShared_447_ = v_isSharedCheck_453_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_snapshotTasks_444_);
lean_inc(v_infoState_443_);
lean_inc(v_messages_442_);
lean_inc(v_cache_441_);
lean_inc(v_traceState_440_);
lean_inc(v_auxDeclNGen_439_);
lean_inc(v_nextMacroScope_438_);
lean_inc(v_env_437_);
lean_dec(v___x_436_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_453_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 2, v___x_435_);
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_env_437_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_nextMacroScope_438_);
lean_ctor_set(v_reuseFailAlloc_452_, 2, v___x_435_);
lean_ctor_set(v_reuseFailAlloc_452_, 3, v_auxDeclNGen_439_);
lean_ctor_set(v_reuseFailAlloc_452_, 4, v_traceState_440_);
lean_ctor_set(v_reuseFailAlloc_452_, 5, v_cache_441_);
lean_ctor_set(v_reuseFailAlloc_452_, 6, v_messages_442_);
lean_ctor_set(v_reuseFailAlloc_452_, 7, v_infoState_443_);
lean_ctor_set(v_reuseFailAlloc_452_, 8, v_snapshotTasks_444_);
v___x_449_ = v_reuseFailAlloc_452_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = lean_st_ref_put(v___y_422_, v___x_449_);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v_r_431_);
return v___x_451_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg___boxed(lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg(v___y_457_);
lean_dec(v___y_457_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1(lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
lean_object* v___x_468_; lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
v___x_468_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg(v___y_466_);
v_a_469_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_476_ == 0)
{
v___x_471_ = v___x_468_;
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_468_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
if (v_isShared_472_ == 0)
{
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_a_469_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1___boxed(lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1(v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
lean_dec(v___y_479_);
lean_dec_ref(v___y_478_);
lean_dec(v___y_477_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg(lean_object* v_a_486_, lean_object* v_x_487_){
_start:
{
if (lean_obj_tag(v_x_487_) == 0)
{
lean_object* v___x_488_; 
v___x_488_ = lean_box(0);
return v___x_488_;
}
else
{
lean_object* v_key_489_; lean_object* v_value_490_; lean_object* v_tail_491_; lean_object* v_fst_492_; lean_object* v_snd_493_; lean_object* v_fst_494_; lean_object* v_snd_495_; size_t v___x_496_; size_t v___x_497_; uint8_t v___x_498_; 
v_key_489_ = lean_ctor_get(v_x_487_, 0);
v_value_490_ = lean_ctor_get(v_x_487_, 1);
v_tail_491_ = lean_ctor_get(v_x_487_, 2);
v_fst_492_ = lean_ctor_get(v_key_489_, 0);
v_snd_493_ = lean_ctor_get(v_key_489_, 1);
v_fst_494_ = lean_ctor_get(v_a_486_, 0);
v_snd_495_ = lean_ctor_get(v_a_486_, 1);
v___x_496_ = lean_ptr_addr(v_fst_492_);
v___x_497_ = lean_ptr_addr(v_fst_494_);
v___x_498_ = lean_usize_dec_eq(v___x_496_, v___x_497_);
if (v___x_498_ == 0)
{
v_x_487_ = v_tail_491_;
goto _start;
}
else
{
size_t v___x_500_; size_t v___x_501_; uint8_t v___x_502_; 
v___x_500_ = lean_ptr_addr(v_snd_493_);
v___x_501_ = lean_ptr_addr(v_snd_495_);
v___x_502_ = lean_usize_dec_eq(v___x_500_, v___x_501_);
if (v___x_502_ == 0)
{
v_x_487_ = v_tail_491_;
goto _start;
}
else
{
lean_object* v___x_504_; 
lean_inc(v_value_490_);
v___x_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_504_, 0, v_value_490_);
return v___x_504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg___boxed(lean_object* v_a_505_, lean_object* v_x_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg(v_a_505_, v_x_506_);
lean_dec(v_x_506_);
lean_dec_ref(v_a_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg(lean_object* v_m_508_, lean_object* v_a_509_){
_start:
{
lean_object* v_buckets_510_; lean_object* v_fst_511_; lean_object* v_snd_512_; lean_object* v___x_513_; size_t v___x_514_; size_t v___x_515_; size_t v___x_516_; uint64_t v___x_517_; size_t v___x_518_; size_t v___x_519_; uint64_t v___x_520_; uint64_t v___x_521_; uint64_t v___x_522_; uint64_t v___x_523_; uint64_t v_fold_524_; uint64_t v___x_525_; uint64_t v___x_526_; uint64_t v___x_527_; size_t v___x_528_; size_t v___x_529_; size_t v___x_530_; size_t v___x_531_; size_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v_buckets_510_ = lean_ctor_get(v_m_508_, 1);
v_fst_511_ = lean_ctor_get(v_a_509_, 0);
v_snd_512_ = lean_ctor_get(v_a_509_, 1);
v___x_513_ = lean_array_get_size(v_buckets_510_);
v___x_514_ = lean_ptr_addr(v_fst_511_);
v___x_515_ = ((size_t)3ULL);
v___x_516_ = lean_usize_shift_right(v___x_514_, v___x_515_);
v___x_517_ = lean_usize_to_uint64(v___x_516_);
v___x_518_ = lean_ptr_addr(v_snd_512_);
v___x_519_ = lean_usize_shift_right(v___x_518_, v___x_515_);
v___x_520_ = lean_usize_to_uint64(v___x_519_);
v___x_521_ = lean_uint64_mix_hash(v___x_517_, v___x_520_);
v___x_522_ = 32ULL;
v___x_523_ = lean_uint64_shift_right(v___x_521_, v___x_522_);
v_fold_524_ = lean_uint64_xor(v___x_521_, v___x_523_);
v___x_525_ = 16ULL;
v___x_526_ = lean_uint64_shift_right(v_fold_524_, v___x_525_);
v___x_527_ = lean_uint64_xor(v_fold_524_, v___x_526_);
v___x_528_ = lean_uint64_to_usize(v___x_527_);
v___x_529_ = lean_usize_of_nat(v___x_513_);
v___x_530_ = ((size_t)1ULL);
v___x_531_ = lean_usize_sub(v___x_529_, v___x_530_);
v___x_532_ = lean_usize_land(v___x_528_, v___x_531_);
v___x_533_ = lean_array_uget_borrowed(v_buckets_510_, v___x_532_);
v___x_534_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg(v_a_509_, v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg___boxed(lean_object* v_m_535_, lean_object* v_a_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg(v_m_535_, v_a_536_);
lean_dec_ref(v_a_536_);
lean_dec_ref(v_m_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7___redArg(lean_object* v_a_538_, lean_object* v_b_539_, lean_object* v_x_540_){
_start:
{
if (lean_obj_tag(v_x_540_) == 0)
{
lean_dec(v_b_539_);
lean_dec_ref(v_a_538_);
return v_x_540_;
}
else
{
lean_object* v_key_541_; lean_object* v_value_542_; lean_object* v_tail_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_563_; 
v_key_541_ = lean_ctor_get(v_x_540_, 0);
v_value_542_ = lean_ctor_get(v_x_540_, 1);
v_tail_543_ = lean_ctor_get(v_x_540_, 2);
v_isSharedCheck_563_ = !lean_is_exclusive(v_x_540_);
if (v_isSharedCheck_563_ == 0)
{
v___x_545_ = v_x_540_;
v_isShared_546_ = v_isSharedCheck_563_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_tail_543_);
lean_inc(v_value_542_);
lean_inc(v_key_541_);
lean_dec(v_x_540_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_563_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v_fst_552_; lean_object* v_snd_553_; lean_object* v_fst_554_; lean_object* v_snd_555_; size_t v___x_556_; size_t v___x_557_; uint8_t v___x_558_; 
v_fst_552_ = lean_ctor_get(v_key_541_, 0);
v_snd_553_ = lean_ctor_get(v_key_541_, 1);
v_fst_554_ = lean_ctor_get(v_a_538_, 0);
v_snd_555_ = lean_ctor_get(v_a_538_, 1);
v___x_556_ = lean_ptr_addr(v_fst_552_);
v___x_557_ = lean_ptr_addr(v_fst_554_);
v___x_558_ = lean_usize_dec_eq(v___x_556_, v___x_557_);
if (v___x_558_ == 0)
{
goto v___jp_547_;
}
else
{
size_t v___x_559_; size_t v___x_560_; uint8_t v___x_561_; 
v___x_559_ = lean_ptr_addr(v_snd_553_);
v___x_560_ = lean_ptr_addr(v_snd_555_);
v___x_561_ = lean_usize_dec_eq(v___x_559_, v___x_560_);
if (v___x_561_ == 0)
{
goto v___jp_547_;
}
else
{
lean_object* v___x_562_; 
lean_del_object(v___x_545_);
lean_dec(v_value_542_);
lean_dec(v_key_541_);
v___x_562_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_562_, 0, v_a_538_);
lean_ctor_set(v___x_562_, 1, v_b_539_);
lean_ctor_set(v___x_562_, 2, v_tail_543_);
return v___x_562_;
}
}
v___jp_547_:
{
lean_object* v___x_548_; lean_object* v___x_550_; 
v___x_548_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7___redArg(v_a_538_, v_b_539_, v_tail_543_);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 2, v___x_548_);
v___x_550_ = v___x_545_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_key_541_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v_value_542_);
lean_ctor_set(v_reuseFailAlloc_551_, 2, v___x_548_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg(lean_object* v_a_564_, lean_object* v_x_565_){
_start:
{
if (lean_obj_tag(v_x_565_) == 0)
{
uint8_t v___x_566_; 
v___x_566_ = 0;
return v___x_566_;
}
else
{
lean_object* v_key_567_; lean_object* v_tail_568_; lean_object* v_fst_569_; lean_object* v_snd_570_; lean_object* v_fst_571_; lean_object* v_snd_572_; size_t v___x_573_; size_t v___x_574_; uint8_t v___x_575_; 
v_key_567_ = lean_ctor_get(v_x_565_, 0);
v_tail_568_ = lean_ctor_get(v_x_565_, 2);
v_fst_569_ = lean_ctor_get(v_key_567_, 0);
v_snd_570_ = lean_ctor_get(v_key_567_, 1);
v_fst_571_ = lean_ctor_get(v_a_564_, 0);
v_snd_572_ = lean_ctor_get(v_a_564_, 1);
v___x_573_ = lean_ptr_addr(v_fst_569_);
v___x_574_ = lean_ptr_addr(v_fst_571_);
v___x_575_ = lean_usize_dec_eq(v___x_573_, v___x_574_);
if (v___x_575_ == 0)
{
v_x_565_ = v_tail_568_;
goto _start;
}
else
{
size_t v___x_577_; size_t v___x_578_; uint8_t v___x_579_; 
v___x_577_ = lean_ptr_addr(v_snd_570_);
v___x_578_ = lean_ptr_addr(v_snd_572_);
v___x_579_ = lean_usize_dec_eq(v___x_577_, v___x_578_);
if (v___x_579_ == 0)
{
v_x_565_ = v_tail_568_;
goto _start;
}
else
{
return v___x_579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg___boxed(lean_object* v_a_581_, lean_object* v_x_582_){
_start:
{
uint8_t v_res_583_; lean_object* v_r_584_; 
v_res_583_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg(v_a_581_, v_x_582_);
lean_dec(v_x_582_);
lean_dec_ref(v_a_581_);
v_r_584_ = lean_box(v_res_583_);
return v_r_584_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8___redArg(lean_object* v_x_585_, lean_object* v_x_586_){
_start:
{
if (lean_obj_tag(v_x_586_) == 0)
{
return v_x_585_;
}
else
{
lean_object* v_key_587_; lean_object* v_value_588_; lean_object* v_tail_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_621_; 
v_key_587_ = lean_ctor_get(v_x_586_, 0);
v_value_588_ = lean_ctor_get(v_x_586_, 1);
v_tail_589_ = lean_ctor_get(v_x_586_, 2);
v_isSharedCheck_621_ = !lean_is_exclusive(v_x_586_);
if (v_isSharedCheck_621_ == 0)
{
v___x_591_ = v_x_586_;
v_isShared_592_ = v_isSharedCheck_621_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_tail_589_);
lean_inc(v_value_588_);
lean_inc(v_key_587_);
lean_dec(v_x_586_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_621_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v_fst_593_; lean_object* v_snd_594_; lean_object* v___x_595_; size_t v___x_596_; size_t v___x_597_; size_t v___x_598_; uint64_t v___x_599_; size_t v___x_600_; size_t v___x_601_; uint64_t v___x_602_; uint64_t v___x_603_; uint64_t v___x_604_; uint64_t v___x_605_; uint64_t v_fold_606_; uint64_t v___x_607_; uint64_t v___x_608_; uint64_t v___x_609_; size_t v___x_610_; size_t v___x_611_; size_t v___x_612_; size_t v___x_613_; size_t v___x_614_; lean_object* v___x_615_; lean_object* v___x_617_; 
v_fst_593_ = lean_ctor_get(v_key_587_, 0);
v_snd_594_ = lean_ctor_get(v_key_587_, 1);
v___x_595_ = lean_array_get_size(v_x_585_);
v___x_596_ = lean_ptr_addr(v_fst_593_);
v___x_597_ = ((size_t)3ULL);
v___x_598_ = lean_usize_shift_right(v___x_596_, v___x_597_);
v___x_599_ = lean_usize_to_uint64(v___x_598_);
v___x_600_ = lean_ptr_addr(v_snd_594_);
v___x_601_ = lean_usize_shift_right(v___x_600_, v___x_597_);
v___x_602_ = lean_usize_to_uint64(v___x_601_);
v___x_603_ = lean_uint64_mix_hash(v___x_599_, v___x_602_);
v___x_604_ = 32ULL;
v___x_605_ = lean_uint64_shift_right(v___x_603_, v___x_604_);
v_fold_606_ = lean_uint64_xor(v___x_603_, v___x_605_);
v___x_607_ = 16ULL;
v___x_608_ = lean_uint64_shift_right(v_fold_606_, v___x_607_);
v___x_609_ = lean_uint64_xor(v_fold_606_, v___x_608_);
v___x_610_ = lean_uint64_to_usize(v___x_609_);
v___x_611_ = lean_usize_of_nat(v___x_595_);
v___x_612_ = ((size_t)1ULL);
v___x_613_ = lean_usize_sub(v___x_611_, v___x_612_);
v___x_614_ = lean_usize_land(v___x_610_, v___x_613_);
v___x_615_ = lean_array_uget_borrowed(v_x_585_, v___x_614_);
lean_inc(v___x_615_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 2, v___x_615_);
v___x_617_ = v___x_591_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_key_587_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_value_588_);
lean_ctor_set(v_reuseFailAlloc_620_, 2, v___x_615_);
v___x_617_ = v_reuseFailAlloc_620_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
lean_object* v___x_618_; 
v___x_618_ = lean_array_uset(v_x_585_, v___x_614_, v___x_617_);
v_x_585_ = v___x_618_;
v_x_586_ = v_tail_589_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7___redArg(lean_object* v_i_622_, lean_object* v_source_623_, lean_object* v_target_624_){
_start:
{
lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_625_ = lean_array_get_size(v_source_623_);
v___x_626_ = lean_nat_dec_lt(v_i_622_, v___x_625_);
if (v___x_626_ == 0)
{
lean_dec_ref(v_source_623_);
lean_dec(v_i_622_);
return v_target_624_;
}
else
{
lean_object* v_es_627_; lean_object* v___x_628_; lean_object* v_source_629_; lean_object* v_target_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v_es_627_ = lean_array_fget(v_source_623_, v_i_622_);
v___x_628_ = lean_box(0);
v_source_629_ = lean_array_fset(v_source_623_, v_i_622_, v___x_628_);
v_target_630_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8___redArg(v_target_624_, v_es_627_);
v___x_631_ = lean_unsigned_to_nat(1u);
v___x_632_ = lean_nat_add(v_i_622_, v___x_631_);
lean_dec(v_i_622_);
v_i_622_ = v___x_632_;
v_source_623_ = v_source_629_;
v_target_624_ = v_target_630_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6___redArg(lean_object* v_data_634_){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v_nbuckets_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_635_ = lean_array_get_size(v_data_634_);
v___x_636_ = lean_unsigned_to_nat(2u);
v_nbuckets_637_ = lean_nat_mul(v___x_635_, v___x_636_);
v___x_638_ = lean_unsigned_to_nat(0u);
v___x_639_ = lean_box(0);
v___x_640_ = lean_mk_array(v_nbuckets_637_, v___x_639_);
v___x_641_ = lean_array_propagate_mark(v_data_634_, v___x_640_);
v___x_642_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7___redArg(v___x_638_, v_data_634_, v___x_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3___redArg(lean_object* v_m_643_, lean_object* v_a_644_, lean_object* v_b_645_){
_start:
{
lean_object* v_size_646_; lean_object* v_buckets_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_699_; 
v_size_646_ = lean_ctor_get(v_m_643_, 0);
v_buckets_647_ = lean_ctor_get(v_m_643_, 1);
v_isSharedCheck_699_ = !lean_is_exclusive(v_m_643_);
if (v_isSharedCheck_699_ == 0)
{
v___x_649_ = v_m_643_;
v_isShared_650_ = v_isSharedCheck_699_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_buckets_647_);
lean_inc(v_size_646_);
lean_dec(v_m_643_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_699_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v_fst_651_; lean_object* v_snd_652_; lean_object* v___x_653_; size_t v___x_654_; size_t v___x_655_; size_t v___x_656_; uint64_t v___x_657_; size_t v___x_658_; size_t v___x_659_; uint64_t v___x_660_; uint64_t v___x_661_; uint64_t v___x_662_; uint64_t v___x_663_; uint64_t v_fold_664_; uint64_t v___x_665_; uint64_t v___x_666_; uint64_t v___x_667_; size_t v___x_668_; size_t v___x_669_; size_t v___x_670_; size_t v___x_671_; size_t v___x_672_; lean_object* v_bkt_673_; uint8_t v___x_674_; 
v_fst_651_ = lean_ctor_get(v_a_644_, 0);
v_snd_652_ = lean_ctor_get(v_a_644_, 1);
v___x_653_ = lean_array_get_size(v_buckets_647_);
v___x_654_ = lean_ptr_addr(v_fst_651_);
v___x_655_ = ((size_t)3ULL);
v___x_656_ = lean_usize_shift_right(v___x_654_, v___x_655_);
v___x_657_ = lean_usize_to_uint64(v___x_656_);
v___x_658_ = lean_ptr_addr(v_snd_652_);
v___x_659_ = lean_usize_shift_right(v___x_658_, v___x_655_);
v___x_660_ = lean_usize_to_uint64(v___x_659_);
v___x_661_ = lean_uint64_mix_hash(v___x_657_, v___x_660_);
v___x_662_ = 32ULL;
v___x_663_ = lean_uint64_shift_right(v___x_661_, v___x_662_);
v_fold_664_ = lean_uint64_xor(v___x_661_, v___x_663_);
v___x_665_ = 16ULL;
v___x_666_ = lean_uint64_shift_right(v_fold_664_, v___x_665_);
v___x_667_ = lean_uint64_xor(v_fold_664_, v___x_666_);
v___x_668_ = lean_uint64_to_usize(v___x_667_);
v___x_669_ = lean_usize_of_nat(v___x_653_);
v___x_670_ = ((size_t)1ULL);
v___x_671_ = lean_usize_sub(v___x_669_, v___x_670_);
v___x_672_ = lean_usize_land(v___x_668_, v___x_671_);
v_bkt_673_ = lean_array_uget_borrowed(v_buckets_647_, v___x_672_);
v___x_674_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg(v_a_644_, v_bkt_673_);
if (v___x_674_ == 0)
{
lean_object* v___x_675_; lean_object* v_size_x27_676_; lean_object* v___x_677_; lean_object* v_buckets_x27_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; uint8_t v___x_684_; 
v___x_675_ = lean_unsigned_to_nat(1u);
v_size_x27_676_ = lean_nat_add(v_size_646_, v___x_675_);
lean_dec(v_size_646_);
lean_inc(v_bkt_673_);
v___x_677_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_677_, 0, v_a_644_);
lean_ctor_set(v___x_677_, 1, v_b_645_);
lean_ctor_set(v___x_677_, 2, v_bkt_673_);
v_buckets_x27_678_ = lean_array_uset(v_buckets_647_, v___x_672_, v___x_677_);
v___x_679_ = lean_unsigned_to_nat(4u);
v___x_680_ = lean_nat_mul(v_size_x27_676_, v___x_679_);
v___x_681_ = lean_unsigned_to_nat(3u);
v___x_682_ = lean_nat_div(v___x_680_, v___x_681_);
lean_dec(v___x_680_);
v___x_683_ = lean_array_get_size(v_buckets_x27_678_);
v___x_684_ = lean_nat_dec_le(v___x_682_, v___x_683_);
lean_dec(v___x_682_);
if (v___x_684_ == 0)
{
lean_object* v_val_685_; lean_object* v___x_687_; 
v_val_685_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6___redArg(v_buckets_x27_678_);
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 1, v_val_685_);
lean_ctor_set(v___x_649_, 0, v_size_x27_676_);
v___x_687_ = v___x_649_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_size_x27_676_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v_val_685_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
else
{
lean_object* v___x_690_; 
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 1, v_buckets_x27_678_);
lean_ctor_set(v___x_649_, 0, v_size_x27_676_);
v___x_690_ = v___x_649_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_size_x27_676_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v_buckets_x27_678_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
else
{
lean_object* v___x_692_; lean_object* v_buckets_x27_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_697_; 
lean_inc(v_bkt_673_);
v___x_692_ = lean_box(0);
v_buckets_x27_693_ = lean_array_uset(v_buckets_647_, v___x_672_, v___x_692_);
v___x_694_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7___redArg(v_a_644_, v_b_645_, v_bkt_673_);
v___x_695_ = lean_array_uset(v_buckets_x27_693_, v___x_672_, v___x_694_);
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 1, v___x_695_);
v___x_697_ = v___x_649_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_size_646_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v___x_695_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl___closed__0(void){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = lean_box(0);
v___x_701_ = l_unsafeCast___redArg(v___x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl(lean_object* v_userName_702_, lean_object* v_type_703_, lean_object* v_value_704_, uint8_t v_nondep_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_){
_start:
{
lean_object* v___x_714_; lean_object* v_key_715_; lean_object* v___x_716_; lean_object* v_valueMap_717_; lean_object* v___x_718_; 
v___x_714_ = l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default;
lean_inc_ref(v_value_704_);
lean_inc_ref(v_type_703_);
v_key_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_715_, 0, v_type_703_);
lean_ctor_set(v_key_715_, 1, v_value_704_);
v___x_716_ = lean_st_ref_get(v_a_706_);
v_valueMap_717_ = lean_ctor_get(v___x_716_, 4);
lean_inc_ref(v_valueMap_717_);
lean_dec(v___x_716_);
v___x_718_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg(v_valueMap_717_, v_key_715_);
lean_dec_ref(v_valueMap_717_);
if (lean_obj_tag(v___x_718_) == 1)
{
lean_object* v_val_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_765_; 
lean_dec_ref_known(v_key_715_, 2);
lean_dec_ref(v_value_704_);
lean_dec_ref(v_type_703_);
lean_dec(v_userName_702_);
v_val_719_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_765_ == 0)
{
v___x_721_ = v___x_718_;
v_isShared_722_ = v_isSharedCheck_765_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_val_719_);
lean_dec(v___x_718_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_765_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___y_724_; 
if (v_nondep_705_ == 0)
{
lean_object* v___x_732_; lean_object* v_cache_733_; lean_object* v_cacheClosed_734_; lean_object* v_hasLetCache_735_; lean_object* v_decls_736_; lean_object* v_valueMap_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_764_; 
v___x_732_ = lean_st_ref_take(v_a_706_);
v_cache_733_ = lean_ctor_get(v___x_732_, 0);
v_cacheClosed_734_ = lean_ctor_get(v___x_732_, 1);
v_hasLetCache_735_ = lean_ctor_get(v___x_732_, 2);
v_decls_736_ = lean_ctor_get(v___x_732_, 3);
v_valueMap_737_ = lean_ctor_get(v___x_732_, 4);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_764_ == 0)
{
v___x_739_ = v___x_732_;
v_isShared_740_ = v_isSharedCheck_764_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_valueMap_737_);
lean_inc(v_decls_736_);
lean_inc(v_hasLetCache_735_);
lean_inc(v_cacheClosed_734_);
lean_inc(v_cache_733_);
lean_dec(v___x_732_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_764_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___y_742_; lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_747_ = lean_array_get_size(v_decls_736_);
v___x_748_ = lean_nat_dec_lt(v_val_719_, v___x_747_);
if (v___x_748_ == 0)
{
v___y_742_ = v_decls_736_;
goto v___jp_741_;
}
else
{
lean_object* v_v_749_; lean_object* v_fvar_750_; lean_object* v_userName_751_; lean_object* v_type_752_; lean_object* v_value_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_763_; 
v_v_749_ = lean_array_fget(v_decls_736_, v_val_719_);
v_fvar_750_ = lean_ctor_get(v_v_749_, 0);
v_userName_751_ = lean_ctor_get(v_v_749_, 1);
v_type_752_ = lean_ctor_get(v_v_749_, 2);
v_value_753_ = lean_ctor_get(v_v_749_, 3);
v_isSharedCheck_763_ = !lean_is_exclusive(v_v_749_);
if (v_isSharedCheck_763_ == 0)
{
v___x_755_ = v_v_749_;
v_isShared_756_ = v_isSharedCheck_763_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_value_753_);
lean_inc(v_type_752_);
lean_inc(v_userName_751_);
lean_inc(v_fvar_750_);
lean_dec(v_v_749_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_763_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; lean_object* v_xs_x27_758_; lean_object* v___x_760_; 
v___x_757_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl___closed__0, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl___closed__0_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl___closed__0);
v_xs_x27_758_ = lean_array_fset(v_decls_736_, v_val_719_, v___x_757_);
if (v_isShared_756_ == 0)
{
v___x_760_ = v___x_755_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_fvar_750_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v_userName_751_);
lean_ctor_set(v_reuseFailAlloc_762_, 2, v_type_752_);
lean_ctor_set(v_reuseFailAlloc_762_, 3, v_value_753_);
v___x_760_ = v_reuseFailAlloc_762_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_761_; 
lean_ctor_set_uint8(v___x_760_, sizeof(void*)*4, v_nondep_705_);
v___x_761_ = lean_array_fset(v_xs_x27_758_, v_val_719_, v___x_760_);
v___y_742_ = v___x_761_;
goto v___jp_741_;
}
}
}
v___jp_741_:
{
lean_object* v___x_744_; 
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 3, v___y_742_);
v___x_744_ = v___x_739_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_cache_733_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_cacheClosed_734_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v_hasLetCache_735_);
lean_ctor_set(v_reuseFailAlloc_746_, 3, v___y_742_);
lean_ctor_set(v_reuseFailAlloc_746_, 4, v_valueMap_737_);
v___x_744_ = v_reuseFailAlloc_746_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_745_; 
v___x_745_ = lean_st_ref_put(v_a_706_, v___x_744_);
v___y_724_ = v_a_706_;
goto v___jp_723_;
}
}
}
}
else
{
v___y_724_ = v_a_706_;
goto v___jp_723_;
}
v___jp_723_:
{
lean_object* v___x_725_; lean_object* v_decls_726_; lean_object* v___x_727_; lean_object* v_fvar_728_; lean_object* v___x_730_; 
v___x_725_ = lean_st_ref_get(v___y_724_);
v_decls_726_ = lean_ctor_get(v___x_725_, 3);
lean_inc_ref(v_decls_726_);
lean_dec(v___x_725_);
v___x_727_ = lean_array_get(v___x_714_, v_decls_726_, v_val_719_);
lean_dec(v_val_719_);
lean_dec_ref(v_decls_726_);
v_fvar_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc_ref(v_fvar_728_);
lean_dec(v___x_727_);
if (v_isShared_722_ == 0)
{
lean_ctor_set_tag(v___x_721_, 0);
lean_ctor_set(v___x_721_, 0, v_fvar_728_);
v___x_730_ = v___x_721_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_fvar_728_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
else
{
lean_object* v___x_766_; 
lean_dec(v___x_718_);
v___x_766_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1(v_a_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_768_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_766_, 1);
v___x_768_ = l_Lean_Meta_Sym_Internal_mkFVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__2___redArg(v_a_767_, v_a_708_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_796_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_796_ == 0)
{
v___x_771_ = v___x_768_;
v_isShared_772_ = v_isSharedCheck_796_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_768_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_796_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_773_; lean_object* v_decls_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v_cache_777_; lean_object* v_cacheClosed_778_; lean_object* v_hasLetCache_779_; lean_object* v_decls_780_; lean_object* v_valueMap_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_795_; 
v___x_773_ = lean_st_ref_get(v_a_706_);
v_decls_774_ = lean_ctor_get(v___x_773_, 3);
lean_inc_ref(v_decls_774_);
lean_dec(v___x_773_);
v___x_775_ = lean_array_get_size(v_decls_774_);
lean_dec_ref(v_decls_774_);
v___x_776_ = lean_st_ref_take(v_a_706_);
v_cache_777_ = lean_ctor_get(v___x_776_, 0);
v_cacheClosed_778_ = lean_ctor_get(v___x_776_, 1);
v_hasLetCache_779_ = lean_ctor_get(v___x_776_, 2);
v_decls_780_ = lean_ctor_get(v___x_776_, 3);
v_valueMap_781_ = lean_ctor_get(v___x_776_, 4);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_795_ == 0)
{
v___x_783_ = v___x_776_;
v_isShared_784_ = v_isSharedCheck_795_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_valueMap_781_);
lean_inc(v_decls_780_);
lean_inc(v_hasLetCache_779_);
lean_inc(v_cacheClosed_778_);
lean_inc(v_cache_777_);
lean_dec(v___x_776_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_795_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
lean_inc(v_a_769_);
v___x_785_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_785_, 0, v_a_769_);
lean_ctor_set(v___x_785_, 1, v_userName_702_);
lean_ctor_set(v___x_785_, 2, v_type_703_);
lean_ctor_set(v___x_785_, 3, v_value_704_);
lean_ctor_set_uint8(v___x_785_, sizeof(void*)*4, v_nondep_705_);
v___x_786_ = lean_array_push(v_decls_780_, v___x_785_);
v___x_787_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3___redArg(v_valueMap_781_, v_key_715_, v___x_775_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 4, v___x_787_);
lean_ctor_set(v___x_783_, 3, v___x_786_);
v___x_789_ = v___x_783_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_cache_777_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_cacheClosed_778_);
lean_ctor_set(v_reuseFailAlloc_794_, 2, v_hasLetCache_779_);
lean_ctor_set(v_reuseFailAlloc_794_, 3, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_794_, 4, v___x_787_);
v___x_789_ = v_reuseFailAlloc_794_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_790_ = lean_st_ref_put(v_a_706_, v___x_789_);
if (v_isShared_772_ == 0)
{
v___x_792_ = v___x_771_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_769_);
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
}
else
{
lean_dec_ref_known(v_key_715_, 2);
lean_dec_ref(v_value_704_);
lean_dec_ref(v_type_703_);
lean_dec(v_userName_702_);
return v___x_768_;
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
lean_dec_ref_known(v_key_715_, 2);
lean_dec_ref(v_value_704_);
lean_dec_ref(v_type_703_);
lean_dec(v_userName_702_);
v_a_797_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v___x_766_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_766_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_797_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl___boxed(lean_object* v_userName_805_, lean_object* v_type_806_, lean_object* v_value_807_, lean_object* v_nondep_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_){
_start:
{
uint8_t v_nondep_boxed_817_; lean_object* v_res_818_; 
v_nondep_boxed_817_ = lean_unbox(v_nondep_808_);
v_res_818_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl(v_userName_805_, v_type_806_, v_value_807_, v_nondep_boxed_817_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_);
lean_dec(v_a_815_);
lean_dec_ref(v_a_814_);
lean_dec(v_a_813_);
lean_dec_ref(v_a_812_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0(lean_object* v_00_u03b2_819_, lean_object* v_m_820_, lean_object* v_a_821_){
_start:
{
lean_object* v___x_822_; 
v___x_822_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___redArg(v_m_820_, v_a_821_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0___boxed(lean_object* v_00_u03b2_823_, lean_object* v_m_824_, lean_object* v_a_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0(v_00_u03b2_823_, v_m_824_, v_a_825_);
lean_dec_ref(v_a_825_);
lean_dec_ref(v_m_824_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2(lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___redArg(v___y_833_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2___boxed(lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__1_spec__2(v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_836_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3(lean_object* v_00_u03b2_845_, lean_object* v_m_846_, lean_object* v_a_847_, lean_object* v_b_848_){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3___redArg(v_m_846_, v_a_847_, v_b_848_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0(lean_object* v_00_u03b2_850_, lean_object* v_a_851_, lean_object* v_x_852_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___redArg(v_a_851_, v_x_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_854_, lean_object* v_a_855_, lean_object* v_x_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__0_spec__0(v_00_u03b2_854_, v_a_855_, v_x_856_);
lean_dec(v_x_856_);
lean_dec_ref(v_a_855_);
return v_res_857_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5(lean_object* v_00_u03b2_858_, lean_object* v_a_859_, lean_object* v_x_860_){
_start:
{
uint8_t v___x_861_; 
v___x_861_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___redArg(v_a_859_, v_x_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5___boxed(lean_object* v_00_u03b2_862_, lean_object* v_a_863_, lean_object* v_x_864_){
_start:
{
uint8_t v_res_865_; lean_object* v_r_866_; 
v_res_865_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__5(v_00_u03b2_862_, v_a_863_, v_x_864_);
lean_dec(v_x_864_);
lean_dec_ref(v_a_863_);
v_r_866_ = lean_box(v_res_865_);
return v_r_866_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6(lean_object* v_00_u03b2_867_, lean_object* v_data_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6___redArg(v_data_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7(lean_object* v_00_u03b2_870_, lean_object* v_a_871_, lean_object* v_b_872_, lean_object* v_x_873_){
_start:
{
lean_object* v___x_874_; 
v___x_874_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__7___redArg(v_a_871_, v_b_872_, v_x_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7(lean_object* v_00_u03b2_875_, lean_object* v_i_876_, lean_object* v_source_877_, lean_object* v_target_878_){
_start:
{
lean_object* v___x_879_; 
v___x_879_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7___redArg(v_i_876_, v_source_877_, v_target_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8(lean_object* v_00_u03b2_880_, lean_object* v_x_881_, lean_object* v_x_882_){
_start:
{
lean_object* v___x_883_; 
v___x_883_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl_spec__3_spec__6_spec__7_spec__8___redArg(v_x_881_, v_x_882_);
return v___x_883_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0(void){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = l_Lean_Meta_Sym_instInhabitedSymM___redArg();
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(lean_object* v_msg_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
lean_object* v___x_893_; lean_object* v___x_2263__overap_894_; lean_object* v___x_895_; 
v___x_893_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___closed__0);
v___x_2263__overap_894_ = lean_panic_fn_borrowed(v___x_893_, v_msg_885_);
lean_inc(v___y_891_);
lean_inc_ref(v___y_890_);
lean_inc(v___y_889_);
lean_inc_ref(v___y_888_);
lean_inc(v___y_887_);
lean_inc_ref(v___y_886_);
v___x_895_ = lean_apply_7(v___x_2263__overap_894_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_, lean_box(0));
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1___boxed(lean_object* v_msg_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(v_msg_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec(v___y_900_);
lean_dec_ref(v___y_899_);
lean_dec(v___y_898_);
lean_dec_ref(v___y_897_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(lean_object* v_x_905_, uint8_t v_bi_906_, lean_object* v_t_907_, lean_object* v_b_908_, lean_object* v___y_909_, uint8_t v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v___y_914_; lean_object* v___y_915_; 
if (v___y_910_ == 0)
{
v___y_914_ = v___y_909_;
v___y_915_ = v___y_912_;
goto v___jp_913_;
}
else
{
lean_object* v___x_937_; 
v___x_937_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_907_, v___y_910_, v___y_911_, v___y_912_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_939_; 
v_a_938_ = lean_ctor_get(v___x_937_, 1);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_937_, 2);
v___x_939_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_908_, v___y_910_, v___y_911_, v_a_938_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; 
v_a_940_ = lean_ctor_get(v___x_939_, 1);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_939_, 2);
v___y_914_ = v___y_909_;
v___y_915_ = v_a_940_;
goto v___jp_913_;
}
else
{
lean_object* v_a_941_; lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
lean_dec_ref(v___y_909_);
lean_dec_ref(v_b_908_);
lean_dec_ref(v_t_907_);
lean_dec(v_x_905_);
v_a_941_ = lean_ctor_get(v___x_939_, 0);
v_a_942_ = lean_ctor_get(v___x_939_, 1);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_939_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_inc(v_a_941_);
lean_dec(v___x_939_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_941_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
else
{
lean_object* v_a_950_; lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
lean_dec_ref(v___y_909_);
lean_dec_ref(v_b_908_);
lean_dec_ref(v_t_907_);
lean_dec(v_x_905_);
v_a_950_ = lean_ctor_get(v___x_937_, 0);
v_a_951_ = lean_ctor_get(v___x_937_, 1);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_937_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_inc(v_a_950_);
lean_dec(v___x_937_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_950_);
lean_ctor_set(v_reuseFailAlloc_957_, 1, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
v___jp_913_:
{
lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_916_ = l_Lean_Expr_lam___override(v_x_905_, v_t_907_, v_b_908_, v_bi_906_);
v___x_917_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_916_, v___y_915_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_927_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
v_a_919_ = lean_ctor_get(v___x_917_, 1);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_927_ == 0)
{
v___x_921_ = v___x_917_;
v_isShared_922_ = v_isSharedCheck_927_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_inc(v_a_918_);
lean_dec(v___x_917_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_927_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_923_; lean_object* v___x_925_; 
v___x_923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_923_, 0, v_a_918_);
lean_ctor_set(v___x_923_, 1, v___y_914_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 0, v___x_923_);
v___x_925_ = v___x_921_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_a_919_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
else
{
lean_object* v_a_928_; lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
lean_dec_ref(v___y_914_);
v_a_928_ = lean_ctor_get(v___x_917_, 0);
v_a_929_ = lean_ctor_get(v___x_917_, 1);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___x_917_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_inc(v_a_928_);
lean_dec(v___x_917_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_934_; 
if (v_isShared_932_ == 0)
{
v___x_934_ = v___x_931_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_928_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v_a_929_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2___boxed(lean_object* v_x_959_, lean_object* v_bi_960_, lean_object* v_t_961_, lean_object* v_b_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
uint8_t v_bi_boxed_967_; uint8_t v___y_25275__boxed_968_; lean_object* v_res_969_; 
v_bi_boxed_967_ = lean_unbox(v_bi_960_);
v___y_25275__boxed_968_ = lean_unbox(v___y_964_);
v_res_969_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(v_x_959_, v_bi_boxed_967_, v_t_961_, v_b_962_, v___y_963_, v___y_25275__boxed_968_, v___y_965_, v___y_966_);
lean_dec_ref(v___y_965_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6(lean_object* v_structName_970_, lean_object* v_idx_971_, lean_object* v_struct_972_, lean_object* v___y_973_, uint8_t v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___y_978_; lean_object* v___y_979_; 
if (v___y_974_ == 0)
{
v___y_978_ = v___y_973_;
v___y_979_ = v___y_976_;
goto v___jp_977_;
}
else
{
lean_object* v___x_1001_; 
v___x_1001_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_struct_972_, v___y_974_, v___y_975_, v___y_976_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v_a_1002_; 
v_a_1002_ = lean_ctor_get(v___x_1001_, 1);
lean_inc(v_a_1002_);
lean_dec_ref_known(v___x_1001_, 2);
v___y_978_ = v___y_973_;
v___y_979_ = v_a_1002_;
goto v___jp_977_;
}
else
{
lean_object* v_a_1003_; lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec_ref(v___y_973_);
lean_dec_ref(v_struct_972_);
lean_dec(v_idx_971_);
lean_dec(v_structName_970_);
v_a_1003_ = lean_ctor_get(v___x_1001_, 0);
v_a_1004_ = lean_ctor_get(v___x_1001_, 1);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_1001_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_inc(v_a_1003_);
lean_dec(v___x_1001_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1003_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
v___jp_977_:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = l_Lean_Expr_proj___override(v_structName_970_, v_idx_971_, v_struct_972_);
v___x_981_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_980_, v___y_979_);
if (lean_obj_tag(v___x_981_) == 0)
{
lean_object* v_a_982_; lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_991_; 
v_a_982_ = lean_ctor_get(v___x_981_, 0);
v_a_983_ = lean_ctor_get(v___x_981_, 1);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_991_ == 0)
{
v___x_985_ = v___x_981_;
v_isShared_986_ = v_isSharedCheck_991_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_inc(v_a_982_);
lean_dec(v___x_981_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_991_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_987_; lean_object* v___x_989_; 
v___x_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_987_, 0, v_a_982_);
lean_ctor_set(v___x_987_, 1, v___y_978_);
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 0, v___x_987_);
v___x_989_ = v___x_985_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_987_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_a_983_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
else
{
lean_object* v_a_992_; lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1000_; 
lean_dec_ref(v___y_978_);
v_a_992_ = lean_ctor_get(v___x_981_, 0);
v_a_993_ = lean_ctor_get(v___x_981_, 1);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_995_ = v___x_981_;
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_inc(v_a_992_);
lean_dec(v___x_981_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_998_; 
if (v_isShared_996_ == 0)
{
v___x_998_ = v___x_995_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_a_992_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v_a_993_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6___boxed(lean_object* v_structName_1012_, lean_object* v_idx_1013_, lean_object* v_struct_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
uint8_t v___y_25381__boxed_1019_; lean_object* v_res_1020_; 
v___y_25381__boxed_1019_ = lean_unbox(v___y_1016_);
v_res_1020_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6(v_structName_1012_, v_idx_1013_, v_struct_1014_, v___y_1015_, v___y_25381__boxed_1019_, v___y_1017_, v___y_1018_);
lean_dec_ref(v___y_1017_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(lean_object* v_f_1021_, lean_object* v_a_1022_, lean_object* v___y_1023_, uint8_t v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v___y_1028_; lean_object* v___y_1029_; 
if (v___y_1024_ == 0)
{
v___y_1028_ = v___y_1023_;
v___y_1029_ = v___y_1026_;
goto v___jp_1027_;
}
else
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_f_1021_, v___y_1024_, v___y_1025_, v___y_1026_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1053_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 1);
lean_inc(v_a_1052_);
lean_dec_ref_known(v___x_1051_, 2);
v___x_1053_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_a_1022_, v___y_1024_, v___y_1025_, v_a_1052_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 1);
lean_inc(v_a_1054_);
lean_dec_ref_known(v___x_1053_, 2);
v___y_1028_ = v___y_1023_;
v___y_1029_ = v_a_1054_;
goto v___jp_1027_;
}
else
{
lean_object* v_a_1055_; lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_dec_ref(v___y_1023_);
lean_dec_ref(v_a_1022_);
lean_dec_ref(v_f_1021_);
v_a_1055_ = lean_ctor_get(v___x_1053_, 0);
v_a_1056_ = lean_ctor_get(v___x_1053_, 1);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1053_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_inc(v_a_1055_);
lean_dec(v___x_1053_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1055_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
else
{
lean_object* v_a_1064_; lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1072_; 
lean_dec_ref(v___y_1023_);
lean_dec_ref(v_a_1022_);
lean_dec_ref(v_f_1021_);
v_a_1064_ = lean_ctor_get(v___x_1051_, 0);
v_a_1065_ = lean_ctor_get(v___x_1051_, 1);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1067_ = v___x_1051_;
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_inc(v_a_1064_);
lean_dec(v___x_1051_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1070_; 
if (v_isShared_1068_ == 0)
{
v___x_1070_ = v___x_1067_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_a_1064_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_a_1065_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
v___jp_1027_:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = l_Lean_Expr_app___override(v_f_1021_, v_a_1022_);
v___x_1031_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1030_, v___y_1029_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1041_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
v_a_1033_ = lean_ctor_get(v___x_1031_, 1);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1035_ = v___x_1031_;
v_isShared_1036_ = v_isSharedCheck_1041_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_inc(v_a_1032_);
lean_dec(v___x_1031_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1041_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v___x_1039_; 
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v_a_1032_);
lean_ctor_set(v___x_1037_, 1, v___y_1028_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 0, v___x_1037_);
v___x_1039_ = v___x_1035_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1037_);
lean_ctor_set(v_reuseFailAlloc_1040_, 1, v_a_1033_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
else
{
lean_object* v_a_1042_; lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
lean_dec_ref(v___y_1028_);
v_a_1042_ = lean_ctor_get(v___x_1031_, 0);
v_a_1043_ = lean_ctor_get(v___x_1031_, 1);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_1031_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_inc(v_a_1042_);
lean_dec(v___x_1031_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1042_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v_a_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1___boxed(lean_object* v_f_1073_, lean_object* v_a_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
uint8_t v___y_25464__boxed_1079_; lean_object* v_res_1080_; 
v___y_25464__boxed_1079_ = lean_unbox(v___y_1076_);
v_res_1080_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(v_f_1073_, v_a_1074_, v___y_1075_, v___y_25464__boxed_1079_, v___y_1077_, v___y_1078_);
lean_dec_ref(v___y_1077_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(lean_object* v_x_1081_, lean_object* v_t_1082_, lean_object* v_v_1083_, lean_object* v_b_1084_, uint8_t v_nondep_1085_, lean_object* v___y_1086_, uint8_t v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v___y_1091_; lean_object* v___y_1092_; 
if (v___y_1087_ == 0)
{
v___y_1091_ = v___y_1086_;
v___y_1092_ = v___y_1089_;
goto v___jp_1090_;
}
else
{
lean_object* v___x_1114_; 
v___x_1114_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_1082_, v___y_1087_, v___y_1088_, v___y_1089_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; lean_object* v___x_1116_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 1);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1114_, 2);
v___x_1116_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_v_1083_, v___y_1087_, v___y_1088_, v_a_1115_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v_a_1117_; lean_object* v___x_1118_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 1);
lean_inc(v_a_1117_);
lean_dec_ref_known(v___x_1116_, 2);
v___x_1118_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_1084_, v___y_1087_, v___y_1088_, v_a_1117_);
if (lean_obj_tag(v___x_1118_) == 0)
{
lean_object* v_a_1119_; 
v_a_1119_ = lean_ctor_get(v___x_1118_, 1);
lean_inc(v_a_1119_);
lean_dec_ref_known(v___x_1118_, 2);
v___y_1091_ = v___y_1086_;
v___y_1092_ = v_a_1119_;
goto v___jp_1090_;
}
else
{
lean_object* v_a_1120_; lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
lean_dec_ref(v___y_1086_);
lean_dec_ref(v_b_1084_);
lean_dec_ref(v_v_1083_);
lean_dec_ref(v_t_1082_);
lean_dec(v_x_1081_);
v_a_1120_ = lean_ctor_get(v___x_1118_, 0);
v_a_1121_ = lean_ctor_get(v___x_1118_, 1);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1118_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_inc(v_a_1120_);
lean_dec(v___x_1118_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1120_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
else
{
lean_object* v_a_1129_; lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
lean_dec_ref(v___y_1086_);
lean_dec_ref(v_b_1084_);
lean_dec_ref(v_v_1083_);
lean_dec_ref(v_t_1082_);
lean_dec(v_x_1081_);
v_a_1129_ = lean_ctor_get(v___x_1116_, 0);
v_a_1130_ = lean_ctor_get(v___x_1116_, 1);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1116_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_inc(v_a_1129_);
lean_dec(v___x_1116_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1129_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
else
{
lean_object* v_a_1138_; lean_object* v_a_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1146_; 
lean_dec_ref(v___y_1086_);
lean_dec_ref(v_b_1084_);
lean_dec_ref(v_v_1083_);
lean_dec_ref(v_t_1082_);
lean_dec(v_x_1081_);
v_a_1138_ = lean_ctor_get(v___x_1114_, 0);
v_a_1139_ = lean_ctor_get(v___x_1114_, 1);
v_isSharedCheck_1146_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1141_ = v___x_1114_;
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_a_1139_);
lean_inc(v_a_1138_);
lean_dec(v___x_1114_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1144_; 
if (v_isShared_1142_ == 0)
{
v___x_1144_ = v___x_1141_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v_a_1138_);
lean_ctor_set(v_reuseFailAlloc_1145_, 1, v_a_1139_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
}
}
v___jp_1090_:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = l_Lean_Expr_letE___override(v_x_1081_, v_t_1082_, v_v_1083_, v_b_1084_, v_nondep_1085_);
v___x_1094_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1093_, v___y_1092_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1104_; 
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
v_a_1096_ = lean_ctor_get(v___x_1094_, 1);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1098_ = v___x_1094_;
v_isShared_1099_ = v_isSharedCheck_1104_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_inc(v_a_1095_);
lean_dec(v___x_1094_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1104_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1100_; lean_object* v___x_1102_; 
v___x_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1100_, 0, v_a_1095_);
lean_ctor_set(v___x_1100_, 1, v___y_1091_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 0, v___x_1100_);
v___x_1102_ = v___x_1098_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v___x_1100_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v_a_1096_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
else
{
lean_object* v_a_1105_; lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1113_; 
lean_dec_ref(v___y_1091_);
v_a_1105_ = lean_ctor_get(v___x_1094_, 0);
v_a_1106_ = lean_ctor_get(v___x_1094_, 1);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1108_ = v___x_1094_;
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_inc(v_a_1105_);
lean_dec(v___x_1094_);
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
v_reuseFailAlloc_1112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_a_1105_);
lean_ctor_set(v_reuseFailAlloc_1112_, 1, v_a_1106_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4___boxed(lean_object* v_x_1147_, lean_object* v_t_1148_, lean_object* v_v_1149_, lean_object* v_b_1150_, lean_object* v_nondep_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
uint8_t v_nondep_boxed_1156_; uint8_t v___y_25570__boxed_1157_; lean_object* v_res_1158_; 
v_nondep_boxed_1156_ = lean_unbox(v_nondep_1151_);
v___y_25570__boxed_1157_ = lean_unbox(v___y_1153_);
v_res_1158_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_x_1147_, v_t_1148_, v_v_1149_, v_b_1150_, v_nondep_boxed_1156_, v___y_1152_, v___y_25570__boxed_1157_, v___y_1154_, v___y_1155_);
lean_dec_ref(v___y_1154_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7(lean_object* v_msg_1166_, lean_object* v___y_1167_, uint8_t v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v___f_1171_; lean_object* v___f_1172_; lean_object* v___f_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___f_1183_; lean_object* v___f_1184_; lean_object* v___f_1185_; lean_object* v___f_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_24789__overap_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___f_1171_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__0));
v___f_1172_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__1));
v___f_1173_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__2));
v___x_1174_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__3));
v___x_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
lean_ctor_set(v___x_1175_, 1, v___f_1171_);
v___x_1176_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__4));
v___x_1177_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__5));
v___x_1178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1175_);
lean_ctor_set(v___x_1178_, 1, v___x_1176_);
lean_ctor_set(v___x_1178_, 2, v___f_1172_);
lean_ctor_set(v___x_1178_, 3, v___f_1173_);
lean_ctor_set(v___x_1178_, 4, v___x_1177_);
v___x_1179_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___closed__6));
v___x_1180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1178_);
lean_ctor_set(v___x_1180_, 1, v___x_1179_);
v___x_1181_ = l_ReaderT_instMonad___redArg(v___x_1180_);
v___x_1182_ = l_ReaderT_instMonad___redArg(v___x_1181_);
lean_inc_ref_n(v___x_1182_, 6);
v___f_1183_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1183_, 0, v___x_1182_);
v___f_1184_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1184_, 0, v___x_1182_);
v___f_1185_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1185_, 0, v___x_1182_);
v___f_1186_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_1186_, 0, v___x_1182_);
v___x_1187_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_1187_, 0, lean_box(0));
lean_closure_set(v___x_1187_, 1, lean_box(0));
lean_closure_set(v___x_1187_, 2, v___x_1182_);
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1187_);
lean_ctor_set(v___x_1188_, 1, v___f_1183_);
v___x_1189_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_1189_, 0, lean_box(0));
lean_closure_set(v___x_1189_, 1, lean_box(0));
lean_closure_set(v___x_1189_, 2, v___x_1182_);
v___x_1190_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1188_);
lean_ctor_set(v___x_1190_, 1, v___x_1189_);
lean_ctor_set(v___x_1190_, 2, v___f_1184_);
lean_ctor_set(v___x_1190_, 3, v___f_1185_);
lean_ctor_set(v___x_1190_, 4, v___f_1186_);
v___x_1191_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_1191_, 0, lean_box(0));
lean_closure_set(v___x_1191_, 1, lean_box(0));
lean_closure_set(v___x_1191_, 2, v___x_1182_);
v___x_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1190_);
lean_ctor_set(v___x_1192_, 1, v___x_1191_);
v___x_1193_ = l_Lean_instInhabitedExpr;
v___x_1194_ = l_instInhabitedOfMonad___redArg(v___x_1192_, v___x_1193_);
v___x_24789__overap_1195_ = lean_panic_fn_borrowed(v___x_1194_, v_msg_1166_);
lean_dec(v___x_1194_);
v___x_1196_ = lean_box(v___y_1168_);
lean_inc_ref(v___y_1169_);
v___x_1197_ = lean_apply_4(v___x_24789__overap_1195_, v___y_1167_, v___x_1196_, v___y_1169_, v___y_1170_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7___boxed(lean_object* v_msg_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
uint8_t v___y_25713__boxed_1203_; lean_object* v_res_1204_; 
v___y_25713__boxed_1203_ = lean_unbox(v___y_1200_);
v_res_1204_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7(v_msg_1198_, v___y_1199_, v___y_25713__boxed_1203_, v___y_1201_, v___y_1202_);
lean_dec_ref(v___y_1201_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5(lean_object* v_d_1205_, lean_object* v_e_1206_, lean_object* v___y_1207_, uint8_t v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v___y_1212_; lean_object* v___y_1213_; 
if (v___y_1208_ == 0)
{
v___y_1212_ = v___y_1207_;
v___y_1213_ = v___y_1210_;
goto v___jp_1211_;
}
else
{
lean_object* v___x_1235_; 
v___x_1235_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_e_1206_, v___y_1208_, v___y_1209_, v___y_1210_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 1);
lean_inc(v_a_1236_);
lean_dec_ref_known(v___x_1235_, 2);
v___y_1212_ = v___y_1207_;
v___y_1213_ = v_a_1236_;
goto v___jp_1211_;
}
else
{
lean_object* v_a_1237_; lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
lean_dec_ref(v___y_1207_);
lean_dec_ref(v_e_1206_);
lean_dec(v_d_1205_);
v_a_1237_ = lean_ctor_get(v___x_1235_, 0);
v_a_1238_ = lean_ctor_get(v___x_1235_, 1);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1240_ = v___x_1235_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_inc(v_a_1237_);
lean_dec(v___x_1235_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1237_);
lean_ctor_set(v_reuseFailAlloc_1244_, 1, v_a_1238_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
}
v___jp_1211_:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = l_Lean_Expr_mdata___override(v_d_1205_, v_e_1206_);
v___x_1215_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1214_, v___y_1213_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_a_1216_; lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1225_; 
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
v_a_1217_ = lean_ctor_get(v___x_1215_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1219_ = v___x_1215_;
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_inc(v_a_1216_);
lean_dec(v___x_1215_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1221_, 0, v_a_1216_);
lean_ctor_set(v___x_1221_, 1, v___y_1212_);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v___x_1221_);
v___x_1223_ = v___x_1219_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_a_1217_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1234_; 
lean_dec_ref(v___y_1212_);
v_a_1226_ = lean_ctor_get(v___x_1215_, 0);
v_a_1227_ = lean_ctor_get(v___x_1215_, 1);
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1229_ = v___x_1215_;
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_inc(v_a_1226_);
lean_dec(v___x_1215_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1232_; 
if (v_isShared_1230_ == 0)
{
v___x_1232_ = v___x_1229_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1226_);
lean_ctor_set(v_reuseFailAlloc_1233_, 1, v_a_1227_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5___boxed(lean_object* v_d_1246_, lean_object* v_e_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
uint8_t v___y_25784__boxed_1252_; lean_object* v_res_1253_; 
v___y_25784__boxed_1252_ = lean_unbox(v___y_1249_);
v_res_1253_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5(v_d_1246_, v_e_1247_, v___y_1248_, v___y_25784__boxed_1252_, v___y_1250_, v___y_1251_);
lean_dec_ref(v___y_1250_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(lean_object* v_x_1254_, uint8_t v_bi_1255_, lean_object* v_t_1256_, lean_object* v_b_1257_, lean_object* v___y_1258_, uint8_t v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v___y_1263_; lean_object* v___y_1264_; 
if (v___y_1259_ == 0)
{
v___y_1263_ = v___y_1258_;
v___y_1264_ = v___y_1261_;
goto v___jp_1262_;
}
else
{
lean_object* v___x_1286_; 
v___x_1286_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_1256_, v___y_1259_, v___y_1260_, v___y_1261_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v___x_1288_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 1);
lean_inc(v_a_1287_);
lean_dec_ref_known(v___x_1286_, 2);
v___x_1288_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_1257_, v___y_1259_, v___y_1260_, v_a_1287_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_object* v_a_1289_; 
v_a_1289_ = lean_ctor_get(v___x_1288_, 1);
lean_inc(v_a_1289_);
lean_dec_ref_known(v___x_1288_, 2);
v___y_1263_ = v___y_1258_;
v___y_1264_ = v_a_1289_;
goto v___jp_1262_;
}
else
{
lean_object* v_a_1290_; lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
lean_dec_ref(v___y_1258_);
lean_dec_ref(v_b_1257_);
lean_dec_ref(v_t_1256_);
lean_dec(v_x_1254_);
v_a_1290_ = lean_ctor_get(v___x_1288_, 0);
v_a_1291_ = lean_ctor_get(v___x_1288_, 1);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1288_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1288_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_inc(v_a_1290_);
lean_dec(v___x_1288_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1290_);
lean_ctor_set(v_reuseFailAlloc_1297_, 1, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
else
{
lean_object* v_a_1299_; lean_object* v_a_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1307_; 
lean_dec_ref(v___y_1258_);
lean_dec_ref(v_b_1257_);
lean_dec_ref(v_t_1256_);
lean_dec(v_x_1254_);
v_a_1299_ = lean_ctor_get(v___x_1286_, 0);
v_a_1300_ = lean_ctor_get(v___x_1286_, 1);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1302_ = v___x_1286_;
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_a_1300_);
lean_inc(v_a_1299_);
lean_dec(v___x_1286_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___x_1305_; 
if (v_isShared_1303_ == 0)
{
v___x_1305_ = v___x_1302_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_a_1299_);
lean_ctor_set(v_reuseFailAlloc_1306_, 1, v_a_1300_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
}
v___jp_1262_:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1265_ = l_Lean_Expr_forallE___override(v_x_1254_, v_t_1256_, v_b_1257_, v_bi_1255_);
v___x_1266_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1265_, v___y_1264_);
if (lean_obj_tag(v___x_1266_) == 0)
{
lean_object* v_a_1267_; lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1276_; 
v_a_1267_ = lean_ctor_get(v___x_1266_, 0);
v_a_1268_ = lean_ctor_get(v___x_1266_, 1);
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1270_ = v___x_1266_;
v_isShared_1271_ = v_isSharedCheck_1276_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_inc(v_a_1267_);
lean_dec(v___x_1266_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1276_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1272_; lean_object* v___x_1274_; 
v___x_1272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1272_, 0, v_a_1267_);
lean_ctor_set(v___x_1272_, 1, v___y_1263_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 0, v___x_1272_);
v___x_1274_ = v___x_1270_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1272_);
lean_ctor_set(v_reuseFailAlloc_1275_, 1, v_a_1268_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
else
{
lean_object* v_a_1277_; lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec_ref(v___y_1263_);
v_a_1277_ = lean_ctor_get(v___x_1266_, 0);
v_a_1278_ = lean_ctor_get(v___x_1266_, 1);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1266_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_inc(v_a_1277_);
lean_dec(v___x_1266_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1277_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3___boxed(lean_object* v_x_1308_, lean_object* v_bi_1309_, lean_object* v_t_1310_, lean_object* v_b_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_){
_start:
{
uint8_t v_bi_boxed_1316_; uint8_t v___y_25867__boxed_1317_; lean_object* v_res_1318_; 
v_bi_boxed_1316_ = lean_unbox(v_bi_1309_);
v___y_25867__boxed_1317_ = lean_unbox(v___y_1313_);
v_res_1318_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(v_x_1308_, v_bi_boxed_1316_, v_t_1310_, v_b_1311_, v___y_1312_, v___y_25867__boxed_1317_, v___y_1314_, v___y_1315_);
lean_dec_ref(v___y_1314_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(lean_object* v_a_1319_, lean_object* v_x_1320_){
_start:
{
if (lean_obj_tag(v_x_1320_) == 0)
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_box(0);
return v___x_1321_;
}
else
{
lean_object* v_key_1322_; lean_object* v_value_1323_; lean_object* v_tail_1324_; lean_object* v_fst_1325_; lean_object* v_snd_1326_; lean_object* v_fst_1327_; lean_object* v_snd_1328_; size_t v___x_1329_; size_t v___x_1330_; uint8_t v___x_1331_; 
v_key_1322_ = lean_ctor_get(v_x_1320_, 0);
v_value_1323_ = lean_ctor_get(v_x_1320_, 1);
v_tail_1324_ = lean_ctor_get(v_x_1320_, 2);
v_fst_1325_ = lean_ctor_get(v_key_1322_, 0);
v_snd_1326_ = lean_ctor_get(v_key_1322_, 1);
v_fst_1327_ = lean_ctor_get(v_a_1319_, 0);
v_snd_1328_ = lean_ctor_get(v_a_1319_, 1);
v___x_1329_ = lean_ptr_addr(v_fst_1325_);
v___x_1330_ = lean_ptr_addr(v_fst_1327_);
v___x_1331_ = lean_usize_dec_eq(v___x_1329_, v___x_1330_);
if (v___x_1331_ == 0)
{
v_x_1320_ = v_tail_1324_;
goto _start;
}
else
{
uint8_t v___x_1333_; 
v___x_1333_ = lean_nat_dec_eq(v_snd_1326_, v_snd_1328_);
if (v___x_1333_ == 0)
{
v_x_1320_ = v_tail_1324_;
goto _start;
}
else
{
lean_object* v___x_1335_; 
lean_inc(v_value_1323_);
v___x_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1335_, 0, v_value_1323_);
return v___x_1335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg___boxed(lean_object* v_a_1336_, lean_object* v_x_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(v_a_1336_, v_x_1337_);
lean_dec(v_x_1337_);
lean_dec_ref(v_a_1336_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(lean_object* v_m_1339_, lean_object* v_a_1340_){
_start:
{
lean_object* v_buckets_1341_; lean_object* v_fst_1342_; lean_object* v_snd_1343_; lean_object* v___x_1344_; size_t v___x_1345_; size_t v___x_1346_; size_t v___x_1347_; uint64_t v___x_1348_; uint64_t v___x_1349_; uint64_t v___x_1350_; uint64_t v___x_1351_; uint64_t v___x_1352_; uint64_t v_fold_1353_; uint64_t v___x_1354_; uint64_t v___x_1355_; uint64_t v___x_1356_; size_t v___x_1357_; size_t v___x_1358_; size_t v___x_1359_; size_t v___x_1360_; size_t v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v_buckets_1341_ = lean_ctor_get(v_m_1339_, 1);
v_fst_1342_ = lean_ctor_get(v_a_1340_, 0);
v_snd_1343_ = lean_ctor_get(v_a_1340_, 1);
v___x_1344_ = lean_array_get_size(v_buckets_1341_);
v___x_1345_ = lean_ptr_addr(v_fst_1342_);
v___x_1346_ = ((size_t)3ULL);
v___x_1347_ = lean_usize_shift_right(v___x_1345_, v___x_1346_);
v___x_1348_ = lean_usize_to_uint64(v___x_1347_);
v___x_1349_ = lean_uint64_of_nat(v_snd_1343_);
v___x_1350_ = lean_uint64_mix_hash(v___x_1348_, v___x_1349_);
v___x_1351_ = 32ULL;
v___x_1352_ = lean_uint64_shift_right(v___x_1350_, v___x_1351_);
v_fold_1353_ = lean_uint64_xor(v___x_1350_, v___x_1352_);
v___x_1354_ = 16ULL;
v___x_1355_ = lean_uint64_shift_right(v_fold_1353_, v___x_1354_);
v___x_1356_ = lean_uint64_xor(v_fold_1353_, v___x_1355_);
v___x_1357_ = lean_uint64_to_usize(v___x_1356_);
v___x_1358_ = lean_usize_of_nat(v___x_1344_);
v___x_1359_ = ((size_t)1ULL);
v___x_1360_ = lean_usize_sub(v___x_1358_, v___x_1359_);
v___x_1361_ = lean_usize_land(v___x_1357_, v___x_1360_);
v___x_1362_ = lean_array_uget_borrowed(v_buckets_1341_, v___x_1361_);
v___x_1363_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(v_a_1340_, v___x_1362_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_m_1364_, lean_object* v_a_1365_){
_start:
{
lean_object* v_res_1366_; 
v_res_1366_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(v_m_1364_, v_a_1365_);
lean_dec_ref(v_a_1365_);
lean_dec_ref(v_m_1364_);
return v_res_1366_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1370_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2));
v___x_1371_ = lean_unsigned_to_nat(67u);
v___x_1372_ = lean_unsigned_to_nat(35u);
v___x_1373_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__1));
v___x_1374_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__0));
v___x_1375_ = l_mkPanicMessageWithDecl(v___x_1374_, v___x_1373_, v___x_1372_, v___x_1371_, v___x_1370_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0(lean_object* v_n_1376_, lean_object* v_xs_1377_, lean_object* v_e_1378_, lean_object* v_offset_1379_, lean_object* v_a_1380_, uint8_t v_a_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_){
_start:
{
switch(lean_obj_tag(v_e_1378_))
{
case 5:
{
lean_object* v_fn_1384_; lean_object* v_arg_1385_; lean_object* v___x_1386_; 
v_fn_1384_ = lean_ctor_get(v_e_1378_, 0);
v_arg_1385_ = lean_ctor_get(v_e_1378_, 1);
lean_inc(v_offset_1379_);
lean_inc_ref(v_fn_1384_);
v___x_1386_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1376_, v_xs_1377_, v_fn_1384_, v_offset_1379_, v_a_1380_, v_a_1381_, v_a_1382_, v_a_1383_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v_a_1388_; lean_object* v_fst_1389_; lean_object* v_snd_1390_; lean_object* v___x_1391_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
lean_inc(v_a_1387_);
v_a_1388_ = lean_ctor_get(v___x_1386_, 1);
lean_inc(v_a_1388_);
lean_dec_ref_known(v___x_1386_, 2);
v_fst_1389_ = lean_ctor_get(v_a_1387_, 0);
lean_inc(v_fst_1389_);
v_snd_1390_ = lean_ctor_get(v_a_1387_, 1);
lean_inc(v_snd_1390_);
lean_dec(v_a_1387_);
lean_inc_ref(v_arg_1385_);
v___x_1391_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1376_, v_xs_1377_, v_arg_1385_, v_offset_1379_, v_snd_1390_, v_a_1381_, v_a_1382_, v_a_1388_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v_a_1392_; lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1417_; 
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
v_a_1393_ = lean_ctor_get(v___x_1391_, 1);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1395_ = v___x_1391_;
v_isShared_1396_ = v_isSharedCheck_1417_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_inc(v_a_1392_);
lean_dec(v___x_1391_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1417_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v_fst_1397_; lean_object* v_snd_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1416_; 
v_fst_1397_ = lean_ctor_get(v_a_1392_, 0);
v_snd_1398_ = lean_ctor_get(v_a_1392_, 1);
v_isSharedCheck_1416_ = !lean_is_exclusive(v_a_1392_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1400_ = v_a_1392_;
v_isShared_1401_ = v_isSharedCheck_1416_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_snd_1398_);
lean_inc(v_fst_1397_);
lean_dec(v_a_1392_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1416_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
size_t v___x_1402_; size_t v___x_1403_; uint8_t v___x_1404_; 
v___x_1402_ = lean_ptr_addr(v_fn_1384_);
v___x_1403_ = lean_ptr_addr(v_fst_1389_);
v___x_1404_ = lean_usize_dec_eq(v___x_1402_, v___x_1403_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; 
lean_del_object(v___x_1400_);
lean_del_object(v___x_1395_);
lean_dec_ref_known(v_e_1378_, 2);
v___x_1405_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(v_fst_1389_, v_fst_1397_, v_snd_1398_, v_a_1381_, v_a_1382_, v_a_1393_);
return v___x_1405_;
}
else
{
size_t v___x_1406_; size_t v___x_1407_; uint8_t v___x_1408_; 
v___x_1406_ = lean_ptr_addr(v_arg_1385_);
v___x_1407_ = lean_ptr_addr(v_fst_1397_);
v___x_1408_ = lean_usize_dec_eq(v___x_1406_, v___x_1407_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; 
lean_del_object(v___x_1400_);
lean_del_object(v___x_1395_);
lean_dec_ref_known(v_e_1378_, 2);
v___x_1409_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(v_fst_1389_, v_fst_1397_, v_snd_1398_, v_a_1381_, v_a_1382_, v_a_1393_);
return v___x_1409_;
}
else
{
lean_object* v___x_1411_; 
lean_dec(v_fst_1397_);
lean_dec(v_fst_1389_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v_e_1378_);
v___x_1411_ = v___x_1400_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_e_1378_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v_snd_1398_);
v___x_1411_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
lean_object* v___x_1413_; 
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 0, v___x_1411_);
v___x_1413_ = v___x_1395_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
lean_ctor_set(v_reuseFailAlloc_1414_, 1, v_a_1393_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1389_);
lean_dec_ref_known(v_e_1378_, 2);
return v___x_1391_;
}
}
else
{
lean_dec_ref_known(v_e_1378_, 2);
lean_dec(v_offset_1379_);
return v___x_1386_;
}
}
case 6:
{
lean_object* v_binderName_1418_; lean_object* v_binderType_1419_; lean_object* v_body_1420_; uint8_t v_binderInfo_1421_; lean_object* v___x_1422_; 
v_binderName_1418_ = lean_ctor_get(v_e_1378_, 0);
v_binderType_1419_ = lean_ctor_get(v_e_1378_, 1);
v_body_1420_ = lean_ctor_get(v_e_1378_, 2);
v_binderInfo_1421_ = lean_ctor_get_uint8(v_e_1378_, sizeof(void*)*3 + 8);
lean_inc(v_offset_1379_);
lean_inc_ref(v_binderType_1419_);
v___x_1422_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1376_, v_xs_1377_, v_binderType_1419_, v_offset_1379_, v_a_1380_, v_a_1381_, v_a_1382_, v_a_1383_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v_a_1424_; lean_object* v_fst_1425_; lean_object* v_snd_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1423_);
v_a_1424_ = lean_ctor_get(v___x_1422_, 1);
lean_inc(v_a_1424_);
lean_dec_ref_known(v___x_1422_, 2);
v_fst_1425_ = lean_ctor_get(v_a_1423_, 0);
lean_inc(v_fst_1425_);
v_snd_1426_ = lean_ctor_get(v_a_1423_, 1);
lean_inc(v_snd_1426_);
lean_dec(v_a_1423_);
v___x_1427_ = lean_unsigned_to_nat(1u);
v___x_1428_ = lean_nat_add(v_offset_1379_, v___x_1427_);
lean_dec(v_offset_1379_);
lean_inc_ref(v_body_1420_);
v___x_1429_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1376_, v_xs_1377_, v_body_1420_, v___x_1428_, v_snd_1426_, v_a_1381_, v_a_1382_, v_a_1424_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v_a_1430_; lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1455_; 
v_a_1430_ = lean_ctor_get(v___x_1429_, 0);
v_a_1431_ = lean_ctor_get(v___x_1429_, 1);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1433_ = v___x_1429_;
v_isShared_1434_ = v_isSharedCheck_1455_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_inc(v_a_1430_);
lean_dec(v___x_1429_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1455_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v_fst_1435_; lean_object* v_snd_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1454_; 
v_fst_1435_ = lean_ctor_get(v_a_1430_, 0);
v_snd_1436_ = lean_ctor_get(v_a_1430_, 1);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_a_1430_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1438_ = v_a_1430_;
v_isShared_1439_ = v_isSharedCheck_1454_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_snd_1436_);
lean_inc(v_fst_1435_);
lean_dec(v_a_1430_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1454_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
size_t v___x_1440_; size_t v___x_1441_; uint8_t v___x_1442_; 
v___x_1440_ = lean_ptr_addr(v_binderType_1419_);
v___x_1441_ = lean_ptr_addr(v_fst_1425_);
v___x_1442_ = lean_usize_dec_eq(v___x_1440_, v___x_1441_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; 
lean_inc(v_binderName_1418_);
lean_del_object(v___x_1438_);
lean_del_object(v___x_1433_);
lean_dec_ref_known(v_e_1378_, 3);
v___x_1443_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(v_binderName_1418_, v_binderInfo_1421_, v_fst_1425_, v_fst_1435_, v_snd_1436_, v_a_1381_, v_a_1382_, v_a_1431_);
return v___x_1443_;
}
else
{
size_t v___x_1444_; size_t v___x_1445_; uint8_t v___x_1446_; 
v___x_1444_ = lean_ptr_addr(v_body_1420_);
v___x_1445_ = lean_ptr_addr(v_fst_1435_);
v___x_1446_ = lean_usize_dec_eq(v___x_1444_, v___x_1445_);
if (v___x_1446_ == 0)
{
lean_object* v___x_1447_; 
lean_inc(v_binderName_1418_);
lean_del_object(v___x_1438_);
lean_del_object(v___x_1433_);
lean_dec_ref_known(v_e_1378_, 3);
v___x_1447_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(v_binderName_1418_, v_binderInfo_1421_, v_fst_1425_, v_fst_1435_, v_snd_1436_, v_a_1381_, v_a_1382_, v_a_1431_);
return v___x_1447_;
}
else
{
lean_object* v___x_1449_; 
lean_dec(v_fst_1435_);
lean_dec(v_fst_1425_);
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 0, v_e_1378_);
v___x_1449_ = v___x_1438_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_e_1378_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v_snd_1436_);
v___x_1449_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
lean_object* v___x_1451_; 
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 0, v___x_1449_);
v___x_1451_ = v___x_1433_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v___x_1449_);
lean_ctor_set(v_reuseFailAlloc_1452_, 1, v_a_1431_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1425_);
lean_dec_ref_known(v_e_1378_, 3);
return v___x_1429_;
}
}
else
{
lean_dec_ref_known(v_e_1378_, 3);
lean_dec(v_offset_1379_);
return v___x_1422_;
}
}
case 7:
{
lean_object* v_binderName_1456_; lean_object* v_binderType_1457_; lean_object* v_body_1458_; uint8_t v_binderInfo_1459_; lean_object* v___x_1460_; 
v_binderName_1456_ = lean_ctor_get(v_e_1378_, 0);
v_binderType_1457_ = lean_ctor_get(v_e_1378_, 1);
v_body_1458_ = lean_ctor_get(v_e_1378_, 2);
v_binderInfo_1459_ = lean_ctor_get_uint8(v_e_1378_, sizeof(void*)*3 + 8);
lean_inc(v_offset_1379_);
lean_inc_ref(v_binderType_1457_);
v___x_1460_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1376_, v_xs_1377_, v_binderType_1457_, v_offset_1379_, v_a_1380_, v_a_1381_, v_a_1382_, v_a_1383_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v_a_1462_; lean_object* v_fst_1463_; lean_object* v_snd_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1461_);
v_a_1462_ = lean_ctor_get(v___x_1460_, 1);
lean_inc(v_a_1462_);
lean_dec_ref_known(v___x_1460_, 2);
v_fst_1463_ = lean_ctor_get(v_a_1461_, 0);
lean_inc(v_fst_1463_);
v_snd_1464_ = lean_ctor_get(v_a_1461_, 1);
lean_inc(v_snd_1464_);
lean_dec(v_a_1461_);
v___x_1465_ = lean_unsigned_to_nat(1u);
v___x_1466_ = lean_nat_add(v_offset_1379_, v___x_1465_);
lean_dec(v_offset_1379_);
lean_inc_ref(v_body_1458_);
v___x_1467_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1376_, v_xs_1377_, v_body_1458_, v___x_1466_, v_snd_1464_, v_a_1381_, v_a_1382_, v_a_1462_);
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_object* v_a_1468_; lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1493_; 
v_a_1468_ = lean_ctor_get(v___x_1467_, 0);
v_a_1469_ = lean_ctor_get(v___x_1467_, 1);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1471_ = v___x_1467_;
v_isShared_1472_ = v_isSharedCheck_1493_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_inc(v_a_1468_);
lean_dec(v___x_1467_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1493_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v_fst_1473_; lean_object* v_snd_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1492_; 
v_fst_1473_ = lean_ctor_get(v_a_1468_, 0);
v_snd_1474_ = lean_ctor_get(v_a_1468_, 1);
v_isSharedCheck_1492_ = !lean_is_exclusive(v_a_1468_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1476_ = v_a_1468_;
v_isShared_1477_ = v_isSharedCheck_1492_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_snd_1474_);
lean_inc(v_fst_1473_);
lean_dec(v_a_1468_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1492_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
size_t v___x_1478_; size_t v___x_1479_; uint8_t v___x_1480_; 
v___x_1478_ = lean_ptr_addr(v_binderType_1457_);
v___x_1479_ = lean_ptr_addr(v_fst_1463_);
v___x_1480_ = lean_usize_dec_eq(v___x_1478_, v___x_1479_);
if (v___x_1480_ == 0)
{
lean_object* v___x_1481_; 
lean_inc(v_binderName_1456_);
lean_del_object(v___x_1476_);
lean_del_object(v___x_1471_);
lean_dec_ref_known(v_e_1378_, 3);
v___x_1481_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(v_binderName_1456_, v_binderInfo_1459_, v_fst_1463_, v_fst_1473_, v_snd_1474_, v_a_1381_, v_a_1382_, v_a_1469_);
return v___x_1481_;
}
else
{
size_t v___x_1482_; size_t v___x_1483_; uint8_t v___x_1484_; 
v___x_1482_ = lean_ptr_addr(v_body_1458_);
v___x_1483_ = lean_ptr_addr(v_fst_1473_);
v___x_1484_ = lean_usize_dec_eq(v___x_1482_, v___x_1483_);
if (v___x_1484_ == 0)
{
lean_object* v___x_1485_; 
lean_inc(v_binderName_1456_);
lean_del_object(v___x_1476_);
lean_del_object(v___x_1471_);
lean_dec_ref_known(v_e_1378_, 3);
v___x_1485_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(v_binderName_1456_, v_binderInfo_1459_, v_fst_1463_, v_fst_1473_, v_snd_1474_, v_a_1381_, v_a_1382_, v_a_1469_);
return v___x_1485_;
}
else
{
lean_object* v___x_1487_; 
lean_dec(v_fst_1473_);
lean_dec(v_fst_1463_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 0, v_e_1378_);
v___x_1487_ = v___x_1476_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_e_1378_);
lean_ctor_set(v_reuseFailAlloc_1491_, 1, v_snd_1474_);
v___x_1487_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
lean_object* v___x_1489_; 
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 0, v___x_1487_);
v___x_1489_ = v___x_1471_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1487_);
lean_ctor_set(v_reuseFailAlloc_1490_, 1, v_a_1469_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1463_);
lean_dec_ref_known(v_e_1378_, 3);
return v___x_1467_;
}
}
else
{
lean_dec_ref_known(v_e_1378_, 3);
lean_dec(v_offset_1379_);
return v___x_1460_;
}
}
case 8:
{
lean_object* v_declName_1494_; lean_object* v_type_1495_; lean_object* v_value_1496_; lean_object* v_body_1497_; uint8_t v_nondep_1498_; lean_object* v___x_1499_; 
v_declName_1494_ = lean_ctor_get(v_e_1378_, 0);
v_type_1495_ = lean_ctor_get(v_e_1378_, 1);
v_value_1496_ = lean_ctor_get(v_e_1378_, 2);
v_body_1497_ = lean_ctor_get(v_e_1378_, 3);
v_nondep_1498_ = lean_ctor_get_uint8(v_e_1378_, sizeof(void*)*4 + 8);
lean_inc(v_offset_1379_);
lean_inc_ref(v_type_1495_);
v___x_1499_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1376_, v_xs_1377_, v_type_1495_, v_offset_1379_, v_a_1380_, v_a_1381_, v_a_1382_, v_a_1383_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; lean_object* v_a_1501_; lean_object* v_fst_1502_; lean_object* v_snd_1503_; lean_object* v___x_1504_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_a_1500_);
v_a_1501_ = lean_ctor_get(v___x_1499_, 1);
lean_inc(v_a_1501_);
lean_dec_ref_known(v___x_1499_, 2);
v_fst_1502_ = lean_ctor_get(v_a_1500_, 0);
lean_inc(v_fst_1502_);
v_snd_1503_ = lean_ctor_get(v_a_1500_, 1);
lean_inc(v_snd_1503_);
lean_dec(v_a_1500_);
lean_inc(v_offset_1379_);
lean_inc_ref(v_value_1496_);
v___x_1504_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1376_, v_xs_1377_, v_value_1496_, v_offset_1379_, v_snd_1503_, v_a_1381_, v_a_1382_, v_a_1501_);
if (lean_obj_tag(v___x_1504_) == 0)
{
lean_object* v_a_1505_; lean_object* v_a_1506_; lean_object* v_fst_1507_; lean_object* v_snd_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v_a_1505_ = lean_ctor_get(v___x_1504_, 0);
lean_inc(v_a_1505_);
v_a_1506_ = lean_ctor_get(v___x_1504_, 1);
lean_inc(v_a_1506_);
lean_dec_ref_known(v___x_1504_, 2);
v_fst_1507_ = lean_ctor_get(v_a_1505_, 0);
lean_inc(v_fst_1507_);
v_snd_1508_ = lean_ctor_get(v_a_1505_, 1);
lean_inc(v_snd_1508_);
lean_dec(v_a_1505_);
v___x_1509_ = lean_unsigned_to_nat(1u);
v___x_1510_ = lean_nat_add(v_offset_1379_, v___x_1509_);
lean_dec(v_offset_1379_);
lean_inc_ref(v_body_1497_);
v___x_1511_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1376_, v_xs_1377_, v_body_1497_, v___x_1510_, v_snd_1508_, v_a_1381_, v_a_1382_, v_a_1506_);
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_object* v_a_1512_; lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1541_; 
v_a_1512_ = lean_ctor_get(v___x_1511_, 0);
v_a_1513_ = lean_ctor_get(v___x_1511_, 1);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1515_ = v___x_1511_;
v_isShared_1516_ = v_isSharedCheck_1541_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_inc(v_a_1512_);
lean_dec(v___x_1511_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1541_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v_fst_1517_; lean_object* v_snd_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1540_; 
v_fst_1517_ = lean_ctor_get(v_a_1512_, 0);
v_snd_1518_ = lean_ctor_get(v_a_1512_, 1);
v_isSharedCheck_1540_ = !lean_is_exclusive(v_a_1512_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1520_ = v_a_1512_;
v_isShared_1521_ = v_isSharedCheck_1540_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_snd_1518_);
lean_inc(v_fst_1517_);
lean_dec(v_a_1512_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1540_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
size_t v___x_1522_; size_t v___x_1523_; uint8_t v___x_1524_; 
v___x_1522_ = lean_ptr_addr(v_type_1495_);
v___x_1523_ = lean_ptr_addr(v_fst_1502_);
v___x_1524_ = lean_usize_dec_eq(v___x_1522_, v___x_1523_);
if (v___x_1524_ == 0)
{
lean_object* v___x_1525_; 
lean_inc(v_declName_1494_);
lean_del_object(v___x_1520_);
lean_del_object(v___x_1515_);
lean_dec_ref_known(v_e_1378_, 4);
v___x_1525_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_1494_, v_fst_1502_, v_fst_1507_, v_fst_1517_, v_nondep_1498_, v_snd_1518_, v_a_1381_, v_a_1382_, v_a_1513_);
return v___x_1525_;
}
else
{
size_t v___x_1526_; size_t v___x_1527_; uint8_t v___x_1528_; 
v___x_1526_ = lean_ptr_addr(v_value_1496_);
v___x_1527_ = lean_ptr_addr(v_fst_1507_);
v___x_1528_ = lean_usize_dec_eq(v___x_1526_, v___x_1527_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; 
lean_inc(v_declName_1494_);
lean_del_object(v___x_1520_);
lean_del_object(v___x_1515_);
lean_dec_ref_known(v_e_1378_, 4);
v___x_1529_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_1494_, v_fst_1502_, v_fst_1507_, v_fst_1517_, v_nondep_1498_, v_snd_1518_, v_a_1381_, v_a_1382_, v_a_1513_);
return v___x_1529_;
}
else
{
size_t v___x_1530_; size_t v___x_1531_; uint8_t v___x_1532_; 
v___x_1530_ = lean_ptr_addr(v_body_1497_);
v___x_1531_ = lean_ptr_addr(v_fst_1517_);
v___x_1532_ = lean_usize_dec_eq(v___x_1530_, v___x_1531_);
if (v___x_1532_ == 0)
{
lean_object* v___x_1533_; 
lean_inc(v_declName_1494_);
lean_del_object(v___x_1520_);
lean_del_object(v___x_1515_);
lean_dec_ref_known(v_e_1378_, 4);
v___x_1533_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_1494_, v_fst_1502_, v_fst_1507_, v_fst_1517_, v_nondep_1498_, v_snd_1518_, v_a_1381_, v_a_1382_, v_a_1513_);
return v___x_1533_;
}
else
{
lean_object* v___x_1535_; 
lean_dec(v_fst_1517_);
lean_dec(v_fst_1507_);
lean_dec(v_fst_1502_);
if (v_isShared_1521_ == 0)
{
lean_ctor_set(v___x_1520_, 0, v_e_1378_);
v___x_1535_ = v___x_1520_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_e_1378_);
lean_ctor_set(v_reuseFailAlloc_1539_, 1, v_snd_1518_);
v___x_1535_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
lean_object* v___x_1537_; 
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 0, v___x_1535_);
v___x_1537_ = v___x_1515_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v___x_1535_);
lean_ctor_set(v_reuseFailAlloc_1538_, 1, v_a_1513_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
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
lean_dec(v_fst_1507_);
lean_dec(v_fst_1502_);
lean_dec_ref_known(v_e_1378_, 4);
return v___x_1511_;
}
}
else
{
lean_dec(v_fst_1502_);
lean_dec_ref_known(v_e_1378_, 4);
lean_dec(v_offset_1379_);
return v___x_1504_;
}
}
else
{
lean_dec_ref_known(v_e_1378_, 4);
lean_dec(v_offset_1379_);
return v___x_1499_;
}
}
case 10:
{
lean_object* v_data_1542_; lean_object* v_expr_1543_; lean_object* v___x_1544_; 
v_data_1542_ = lean_ctor_get(v_e_1378_, 0);
v_expr_1543_ = lean_ctor_get(v_e_1378_, 1);
lean_inc_ref(v_expr_1543_);
v___x_1544_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1376_, v_xs_1377_, v_expr_1543_, v_offset_1379_, v_a_1380_, v_a_1381_, v_a_1382_, v_a_1383_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v_a_1545_; lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1566_; 
v_a_1545_ = lean_ctor_get(v___x_1544_, 0);
v_a_1546_ = lean_ctor_get(v___x_1544_, 1);
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1548_ = v___x_1544_;
v_isShared_1549_ = v_isSharedCheck_1566_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_inc(v_a_1545_);
lean_dec(v___x_1544_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1566_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v_fst_1550_; lean_object* v_snd_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1565_; 
v_fst_1550_ = lean_ctor_get(v_a_1545_, 0);
v_snd_1551_ = lean_ctor_get(v_a_1545_, 1);
v_isSharedCheck_1565_ = !lean_is_exclusive(v_a_1545_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1553_ = v_a_1545_;
v_isShared_1554_ = v_isSharedCheck_1565_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_snd_1551_);
lean_inc(v_fst_1550_);
lean_dec(v_a_1545_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1565_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
size_t v___x_1555_; size_t v___x_1556_; uint8_t v___x_1557_; 
v___x_1555_ = lean_ptr_addr(v_expr_1543_);
v___x_1556_ = lean_ptr_addr(v_fst_1550_);
v___x_1557_ = lean_usize_dec_eq(v___x_1555_, v___x_1556_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; 
lean_inc(v_data_1542_);
lean_del_object(v___x_1553_);
lean_del_object(v___x_1548_);
lean_dec_ref_known(v_e_1378_, 2);
v___x_1558_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5(v_data_1542_, v_fst_1550_, v_snd_1551_, v_a_1381_, v_a_1382_, v_a_1546_);
return v___x_1558_;
}
else
{
lean_object* v___x_1560_; 
lean_dec(v_fst_1550_);
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 0, v_e_1378_);
v___x_1560_ = v___x_1553_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_e_1378_);
lean_ctor_set(v_reuseFailAlloc_1564_, 1, v_snd_1551_);
v___x_1560_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
lean_object* v___x_1562_; 
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 0, v___x_1560_);
v___x_1562_ = v___x_1548_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___x_1560_);
lean_ctor_set(v_reuseFailAlloc_1563_, 1, v_a_1546_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_1378_, 2);
return v___x_1544_;
}
}
case 11:
{
lean_object* v_typeName_1567_; lean_object* v_idx_1568_; lean_object* v_struct_1569_; lean_object* v___x_1570_; 
v_typeName_1567_ = lean_ctor_get(v_e_1378_, 0);
v_idx_1568_ = lean_ctor_get(v_e_1378_, 1);
v_struct_1569_ = lean_ctor_get(v_e_1378_, 2);
lean_inc_ref(v_struct_1569_);
v___x_1570_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1376_, v_xs_1377_, v_struct_1569_, v_offset_1379_, v_a_1380_, v_a_1381_, v_a_1382_, v_a_1383_);
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_a_1571_; lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1592_; 
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
v_a_1572_ = lean_ctor_get(v___x_1570_, 1);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1574_ = v___x_1570_;
v_isShared_1575_ = v_isSharedCheck_1592_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_inc(v_a_1571_);
lean_dec(v___x_1570_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1592_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v_fst_1576_; lean_object* v_snd_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1591_; 
v_fst_1576_ = lean_ctor_get(v_a_1571_, 0);
v_snd_1577_ = lean_ctor_get(v_a_1571_, 1);
v_isSharedCheck_1591_ = !lean_is_exclusive(v_a_1571_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1579_ = v_a_1571_;
v_isShared_1580_ = v_isSharedCheck_1591_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_snd_1577_);
lean_inc(v_fst_1576_);
lean_dec(v_a_1571_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1591_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
size_t v___x_1581_; size_t v___x_1582_; uint8_t v___x_1583_; 
v___x_1581_ = lean_ptr_addr(v_struct_1569_);
v___x_1582_ = lean_ptr_addr(v_fst_1576_);
v___x_1583_ = lean_usize_dec_eq(v___x_1581_, v___x_1582_);
if (v___x_1583_ == 0)
{
lean_object* v___x_1584_; 
lean_inc(v_idx_1568_);
lean_inc(v_typeName_1567_);
lean_del_object(v___x_1579_);
lean_del_object(v___x_1574_);
lean_dec_ref_known(v_e_1378_, 3);
v___x_1584_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6(v_typeName_1567_, v_idx_1568_, v_fst_1576_, v_snd_1577_, v_a_1381_, v_a_1382_, v_a_1572_);
return v___x_1584_;
}
else
{
lean_object* v___x_1586_; 
lean_dec(v_fst_1576_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 0, v_e_1378_);
v___x_1586_ = v___x_1579_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_e_1378_);
lean_ctor_set(v_reuseFailAlloc_1590_, 1, v_snd_1577_);
v___x_1586_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
lean_object* v___x_1588_; 
if (v_isShared_1575_ == 0)
{
lean_ctor_set(v___x_1574_, 0, v___x_1586_);
v___x_1588_ = v___x_1574_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1586_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v_a_1572_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_1378_, 3);
return v___x_1570_;
}
}
default: 
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
lean_dec(v_offset_1379_);
lean_dec_ref(v_e_1378_);
v___x_1593_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3);
v___x_1594_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7(v___x_1593_, v_a_1380_, v_a_1381_, v_a_1382_, v_a_1383_);
return v___x_1594_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(lean_object* v_n_1595_, lean_object* v_xs_1596_, lean_object* v_e_1597_, lean_object* v_offset_1598_, lean_object* v_a_1599_, uint8_t v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v_key_1603_; lean_object* v___x_1604_; 
lean_inc(v_offset_1598_);
lean_inc_ref(v_e_1597_);
v_key_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_1603_, 0, v_e_1597_);
lean_ctor_set(v_key_1603_, 1, v_offset_1598_);
v___x_1604_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(v_a_1599_, v_key_1603_);
if (lean_obj_tag(v___x_1604_) == 1)
{
lean_object* v_val_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
lean_dec_ref_known(v_key_1603_, 2);
lean_dec(v_offset_1598_);
lean_dec_ref(v_e_1597_);
v_val_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_val_1605_);
lean_dec_ref_known(v___x_1604_, 1);
v___x_1606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1606_, 0, v_val_1605_);
lean_ctor_set(v___x_1606_, 1, v_a_1599_);
v___x_1607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1607_, 0, v___x_1606_);
lean_ctor_set(v___x_1607_, 1, v_a_1602_);
return v___x_1607_;
}
else
{
lean_dec(v___x_1604_);
switch(lean_obj_tag(v_e_1597_))
{
case 0:
{
lean_object* v_deBruijnIndex_1608_; uint8_t v___x_1609_; 
v_deBruijnIndex_1608_ = lean_ctor_get(v_e_1597_, 0);
v___x_1609_ = lean_nat_dec_le(v_offset_1598_, v_deBruijnIndex_1608_);
if (v___x_1609_ == 0)
{
lean_object* v___x_1610_; 
lean_dec(v_offset_1598_);
v___x_1610_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1610_;
}
else
{
lean_object* v_size_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; uint8_t v___x_1617_; 
lean_inc(v_deBruijnIndex_1608_);
lean_dec_ref_known(v_e_1597_, 1);
v_size_1611_ = lean_ctor_get(v_xs_1596_, 2);
v___x_1612_ = l_Lean_instInhabitedExpr;
v___x_1613_ = lean_nat_sub(v_deBruijnIndex_1608_, v_offset_1598_);
lean_dec(v_offset_1598_);
lean_dec(v_deBruijnIndex_1608_);
v___x_1614_ = lean_nat_sub(v_n_1595_, v___x_1613_);
lean_dec(v___x_1613_);
v___x_1615_ = lean_unsigned_to_nat(1u);
v___x_1616_ = lean_nat_sub(v___x_1614_, v___x_1615_);
lean_dec(v___x_1614_);
v___x_1617_ = lean_nat_dec_lt(v___x_1616_, v_size_1611_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
lean_dec(v___x_1616_);
v___x_1618_ = l_outOfBounds___redArg(v___x_1612_);
v___x_1619_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v___x_1618_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1619_;
}
else
{
lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1620_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1612_, v_xs_1596_, v___x_1616_);
lean_dec(v___x_1616_);
v___x_1621_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v___x_1620_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1621_;
}
}
}
case 9:
{
lean_object* v___x_1622_; 
lean_dec(v_offset_1598_);
v___x_1622_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1622_;
}
case 2:
{
lean_object* v___x_1623_; 
lean_dec(v_offset_1598_);
v___x_1623_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1623_;
}
case 1:
{
lean_object* v___x_1624_; 
lean_dec(v_offset_1598_);
v___x_1624_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1624_;
}
case 4:
{
lean_object* v___x_1625_; 
lean_dec(v_offset_1598_);
v___x_1625_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1625_;
}
case 3:
{
lean_object* v___x_1626_; 
lean_dec(v_offset_1598_);
v___x_1626_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1626_;
}
default: 
{
lean_object* v___x_1627_; uint8_t v___x_1628_; 
v___x_1627_ = l_Lean_Expr_looseBVarRange(v_e_1597_);
v___x_1628_ = lean_nat_dec_le(v___x_1627_, v_offset_1598_);
lean_dec(v___x_1627_);
if (v___x_1628_ == 0)
{
switch(lean_obj_tag(v_e_1597_))
{
case 9:
{
lean_object* v___x_1629_; 
lean_dec(v_offset_1598_);
v___x_1629_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1629_;
}
case 2:
{
lean_object* v___x_1630_; 
lean_dec(v_offset_1598_);
v___x_1630_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1630_;
}
case 0:
{
lean_object* v___x_1631_; 
lean_dec(v_offset_1598_);
v___x_1631_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1631_;
}
case 1:
{
lean_object* v___x_1632_; 
lean_dec(v_offset_1598_);
v___x_1632_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1632_;
}
case 4:
{
lean_object* v___x_1633_; 
lean_dec(v_offset_1598_);
v___x_1633_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1633_;
}
case 3:
{
lean_object* v___x_1634_; 
lean_dec(v_offset_1598_);
v___x_1634_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1634_;
}
default: 
{
lean_object* v___x_1635_; 
v___x_1635_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0(v_n_1595_, v_xs_1596_, v_e_1597_, v_offset_1598_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
if (lean_obj_tag(v___x_1635_) == 0)
{
lean_object* v_a_1636_; lean_object* v_a_1637_; lean_object* v_fst_1638_; lean_object* v_snd_1639_; lean_object* v___x_1640_; 
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
lean_inc(v_a_1636_);
v_a_1637_ = lean_ctor_get(v___x_1635_, 1);
lean_inc(v_a_1637_);
lean_dec_ref_known(v___x_1635_, 2);
v_fst_1638_ = lean_ctor_get(v_a_1636_, 0);
lean_inc(v_fst_1638_);
v_snd_1639_ = lean_ctor_get(v_a_1636_, 1);
lean_inc(v_snd_1639_);
lean_dec(v_a_1636_);
v___x_1640_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_fst_1638_, v_snd_1639_, v_a_1600_, v_a_1601_, v_a_1637_);
return v___x_1640_;
}
else
{
lean_dec_ref_known(v_key_1603_, 2);
return v___x_1635_;
}
}
}
}
else
{
lean_object* v___x_1641_; 
lean_dec(v_offset_1598_);
v___x_1641_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1603_, v_e_1597_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_);
return v___x_1641_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0___boxed(lean_object* v_n_1642_, lean_object* v_xs_1643_, lean_object* v_e_1644_, lean_object* v_offset_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_){
_start:
{
uint8_t v_a_boxed_1650_; lean_object* v_res_1651_; 
v_a_boxed_1650_ = lean_unbox(v_a_1647_);
v_res_1651_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0(v_n_1642_, v_xs_1643_, v_e_1644_, v_offset_1645_, v_a_1646_, v_a_boxed_1650_, v_a_1648_, v_a_1649_);
lean_dec_ref(v_a_1648_);
lean_dec_ref(v_xs_1643_);
lean_dec(v_n_1642_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___boxed(lean_object* v_n_1652_, lean_object* v_xs_1653_, lean_object* v_e_1654_, lean_object* v_offset_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_){
_start:
{
uint8_t v_a_boxed_1660_; lean_object* v_res_1661_; 
v_a_boxed_1660_ = lean_unbox(v_a_1657_);
v_res_1661_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0(v_n_1652_, v_xs_1653_, v_e_1654_, v_offset_1655_, v_a_1656_, v_a_boxed_1660_, v_a_1658_, v_a_1659_);
lean_dec_ref(v_a_1658_);
lean_dec_ref(v_xs_1653_);
lean_dec(v_n_1652_);
return v_res_1661_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1662_ = lean_box(0);
v___x_1663_ = lean_unsigned_to_nat(16u);
v___x_1664_ = lean_mk_array(v___x_1663_, v___x_1662_);
return v___x_1664_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1665_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0);
v___x_1666_ = lean_unsigned_to_nat(0u);
v___x_1667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1666_);
lean_ctor_set(v___x_1667_, 1, v___x_1665_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0(lean_object* v_e_1668_, lean_object* v_size_1669_, lean_object* v___x_1670_, lean_object* v_xs_1671_, uint8_t v_debug_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = lean_unsigned_to_nat(0u);
switch(lean_obj_tag(v_e_1668_))
{
case 0:
{
lean_object* v_deBruijnIndex_1676_; uint8_t v___x_1677_; 
v_deBruijnIndex_1676_ = lean_ctor_get(v_e_1668_, 0);
v___x_1677_ = lean_nat_dec_le(v___x_1675_, v_deBruijnIndex_1676_);
if (v___x_1677_ == 0)
{
lean_object* v___x_1678_; 
v___x_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1678_, 0, v_e_1668_);
lean_ctor_set(v___x_1678_, 1, v___y_1674_);
return v___x_1678_;
}
else
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; uint8_t v___x_1682_; 
lean_inc(v_deBruijnIndex_1676_);
lean_dec_ref_known(v_e_1668_, 1);
v___x_1679_ = lean_nat_sub(v_size_1669_, v_deBruijnIndex_1676_);
lean_dec(v_deBruijnIndex_1676_);
v___x_1680_ = lean_unsigned_to_nat(1u);
v___x_1681_ = lean_nat_sub(v___x_1679_, v___x_1680_);
lean_dec(v___x_1679_);
v___x_1682_ = lean_nat_dec_lt(v___x_1681_, v_size_1669_);
if (v___x_1682_ == 0)
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
lean_dec(v___x_1681_);
v___x_1683_ = l_outOfBounds___redArg(v___x_1670_);
v___x_1684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1683_);
lean_ctor_set(v___x_1684_, 1, v___y_1674_);
return v___x_1684_;
}
else
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1685_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1670_, v_xs_1671_, v___x_1681_);
lean_dec(v___x_1681_);
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
lean_ctor_set(v___x_1686_, 1, v___y_1674_);
return v___x_1686_;
}
}
}
case 9:
{
lean_object* v___x_1687_; 
v___x_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1687_, 0, v_e_1668_);
lean_ctor_set(v___x_1687_, 1, v___y_1674_);
return v___x_1687_;
}
case 2:
{
lean_object* v___x_1688_; 
v___x_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1688_, 0, v_e_1668_);
lean_ctor_set(v___x_1688_, 1, v___y_1674_);
return v___x_1688_;
}
case 1:
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1689_, 0, v_e_1668_);
lean_ctor_set(v___x_1689_, 1, v___y_1674_);
return v___x_1689_;
}
case 4:
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1690_, 0, v_e_1668_);
lean_ctor_set(v___x_1690_, 1, v___y_1674_);
return v___x_1690_;
}
case 3:
{
lean_object* v___x_1691_; 
v___x_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1691_, 0, v_e_1668_);
lean_ctor_set(v___x_1691_, 1, v___y_1674_);
return v___x_1691_;
}
default: 
{
lean_object* v___x_1692_; uint8_t v___x_1693_; 
v___x_1692_ = l_Lean_Expr_looseBVarRange(v_e_1668_);
v___x_1693_ = lean_nat_dec_le(v___x_1692_, v___x_1675_);
lean_dec(v___x_1692_);
if (v___x_1693_ == 0)
{
switch(lean_obj_tag(v_e_1668_))
{
case 9:
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1694_, 0, v_e_1668_);
lean_ctor_set(v___x_1694_, 1, v___y_1674_);
return v___x_1694_;
}
case 2:
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1695_, 0, v_e_1668_);
lean_ctor_set(v___x_1695_, 1, v___y_1674_);
return v___x_1695_;
}
case 0:
{
lean_object* v___x_1696_; 
v___x_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1696_, 0, v_e_1668_);
lean_ctor_set(v___x_1696_, 1, v___y_1674_);
return v___x_1696_;
}
case 1:
{
lean_object* v___x_1697_; 
v___x_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1697_, 0, v_e_1668_);
lean_ctor_set(v___x_1697_, 1, v___y_1674_);
return v___x_1697_;
}
case 4:
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1698_, 0, v_e_1668_);
lean_ctor_set(v___x_1698_, 1, v___y_1674_);
return v___x_1698_;
}
case 3:
{
lean_object* v___x_1699_; 
v___x_1699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1699_, 0, v_e_1668_);
lean_ctor_set(v___x_1699_, 1, v___y_1674_);
return v___x_1699_;
}
default: 
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__1);
v___x_1701_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0(v_size_1669_, v_xs_1671_, v_e_1668_, v___x_1675_, v___x_1700_, v_debug_1672_, v___y_1673_, v___y_1674_);
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1711_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
v_a_1703_ = lean_ctor_get(v___x_1701_, 1);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1705_ = v___x_1701_;
v_isShared_1706_ = v_isSharedCheck_1711_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_inc(v_a_1702_);
lean_dec(v___x_1701_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1711_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v_fst_1707_; lean_object* v___x_1709_; 
v_fst_1707_ = lean_ctor_get(v_a_1702_, 0);
lean_inc(v_fst_1707_);
lean_dec(v_a_1702_);
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 0, v_fst_1707_);
v___x_1709_ = v___x_1705_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_fst_1707_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v_a_1703_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
}
else
{
lean_object* v_a_1712_; lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
v_a_1712_ = lean_ctor_get(v___x_1701_, 0);
v_a_1713_ = lean_ctor_get(v___x_1701_, 1);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1701_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_inc(v_a_1712_);
lean_dec(v___x_1701_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1712_);
lean_ctor_set(v_reuseFailAlloc_1719_, 1, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
}
}
else
{
lean_object* v___x_1721_; 
v___x_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1721_, 0, v_e_1668_);
lean_ctor_set(v___x_1721_, 1, v___y_1674_);
return v___x_1721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___boxed(lean_object* v_e_1722_, lean_object* v_size_1723_, lean_object* v___x_1724_, lean_object* v_xs_1725_, lean_object* v_debug_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
uint8_t v_debug_boxed_1729_; lean_object* v_res_1730_; 
v_debug_boxed_1729_ = lean_unbox(v_debug_1726_);
v_res_1730_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0(v_e_1722_, v_size_1723_, v___x_1724_, v_xs_1725_, v_debug_boxed_1729_, v___y_1727_, v___y_1728_);
lean_dec_ref(v___y_1727_);
lean_dec_ref(v_xs_1725_);
lean_dec_ref(v___x_1724_);
lean_dec(v_size_1723_);
return v_res_1730_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2(void){
_start:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1733_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2));
v___x_1734_ = lean_unsigned_to_nat(16u);
v___x_1735_ = lean_unsigned_to_nat(62u);
v___x_1736_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__1));
v___x_1737_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__0));
v___x_1738_ = l_mkPanicMessageWithDecl(v___x_1737_, v___x_1736_, v___x_1735_, v___x_1734_, v___x_1733_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg(lean_object* v_xs_1739_, lean_object* v_e_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_){
_start:
{
lean_object* v_size_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; uint8_t v_debug_1751_; lean_object* v___x_1752_; lean_object* v___f_1753_; lean_object* v___x_1754_; lean_object* v_env_1755_; uint8_t v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v_size_1748_ = lean_ctor_get(v_xs_1739_, 2);
lean_inc(v_size_1748_);
v___x_1749_ = l_Lean_instInhabitedExpr;
v___x_1750_ = lean_st_ref_get(v_a_1742_);
v_debug_1751_ = lean_ctor_get_uint8(v___x_1750_, sizeof(void*)*11);
lean_dec(v___x_1750_);
v___x_1752_ = lean_box(v_debug_1751_);
v___f_1753_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_1753_, 0, v_e_1740_);
lean_closure_set(v___f_1753_, 1, v_size_1748_);
lean_closure_set(v___f_1753_, 2, v___x_1749_);
lean_closure_set(v___f_1753_, 3, v_xs_1739_);
lean_closure_set(v___f_1753_, 4, v___x_1752_);
v___x_1754_ = lean_st_ref_get(v_a_1746_);
v_env_1755_ = lean_ctor_get(v___x_1754_, 0);
lean_inc_ref(v_env_1755_);
lean_dec(v___x_1754_);
v___x_1756_ = 0;
v___x_1757_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_1757_, 0, v_env_1755_);
lean_ctor_set_uint8(v___x_1757_, sizeof(void*)*1, v___x_1756_);
lean_ctor_set_uint8(v___x_1757_, sizeof(void*)*1 + 1, v___x_1756_);
v___x_1758_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_1753_, v___x_1757_, v_a_1742_);
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1769_; 
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1761_ = v___x_1758_;
v_isShared_1762_ = v_isSharedCheck_1769_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1758_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1769_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
if (lean_obj_tag(v_a_1759_) == 0)
{
lean_object* v___x_1763_; lean_object* v___x_1764_; 
lean_dec_ref_known(v_a_1759_, 1);
lean_del_object(v___x_1761_);
v___x_1763_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2);
v___x_1764_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(v___x_1763_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_, v_a_1746_);
return v___x_1764_;
}
else
{
lean_object* v_a_1765_; lean_object* v___x_1767_; 
v_a_1765_ = lean_ctor_get(v_a_1759_, 0);
lean_inc(v_a_1765_);
lean_dec_ref_known(v_a_1759_, 1);
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 0, v_a_1765_);
v___x_1767_ = v___x_1761_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1765_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
}
else
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1777_; 
v_a_1770_ = lean_ctor_get(v___x_1758_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1772_ = v___x_1758_;
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1758_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1775_; 
if (v_isShared_1773_ == 0)
{
v___x_1775_ = v___x_1772_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_a_1770_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___boxed(lean_object* v_xs_1778_, lean_object* v_e_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg(v_xs_1778_, v_e_1779_, v_a_1780_, v_a_1781_, v_a_1782_, v_a_1783_, v_a_1784_, v_a_1785_);
lean_dec(v_a_1785_);
lean_dec_ref(v_a_1784_);
lean_dec(v_a_1783_);
lean_dec_ref(v_a_1782_);
lean_dec(v_a_1781_);
lean_dec_ref(v_a_1780_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv(lean_object* v_xs_1788_, lean_object* v_e_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_){
_start:
{
lean_object* v___x_1798_; 
v___x_1798_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg(v_xs_1788_, v_e_1789_, v_a_1791_, v_a_1792_, v_a_1793_, v_a_1794_, v_a_1795_, v_a_1796_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___boxed(lean_object* v_xs_1799_, lean_object* v_e_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv(v_xs_1799_, v_e_1800_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_);
lean_dec(v_a_1807_);
lean_dec_ref(v_a_1806_);
lean_dec(v_a_1805_);
lean_dec_ref(v_a_1804_);
lean_dec(v_a_1803_);
lean_dec_ref(v_a_1802_);
lean_dec(v_a_1801_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1810_, lean_object* v_m_1811_, lean_object* v_a_1812_){
_start:
{
lean_object* v___x_1813_; 
v___x_1813_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(v_m_1811_, v_a_1812_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1814_, lean_object* v_m_1815_, lean_object* v_a_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2(v_00_u03b2_1814_, v_m_1815_, v_a_1816_);
lean_dec_ref(v_a_1816_);
lean_dec_ref(v_m_1815_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10(lean_object* v_00_u03b2_1818_, lean_object* v_a_1819_, lean_object* v_x_1820_){
_start:
{
lean_object* v___x_1821_; 
v___x_1821_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___redArg(v_a_1819_, v_x_1820_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10___boxed(lean_object* v_00_u03b2_1822_, lean_object* v_a_1823_, lean_object* v_x_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2_spec__10(v_00_u03b2_1822_, v_a_1823_, v_x_1824_);
lean_dec(v_x_1824_);
lean_dec_ref(v_a_1823_);
return v_res_1825_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1826_; 
v___x_1826_ = l_instMonadEIO___redArg();
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(lean_object* v_msg_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v_toApplicative_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1906_; 
v___x_1840_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__0);
v___x_1841_ = l_StateRefT_x27_instMonad___redArg(v___x_1840_);
v_toApplicative_1842_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1906_ == 0)
{
lean_object* v_unused_1907_; 
v_unused_1907_ = lean_ctor_get(v___x_1841_, 1);
lean_dec(v_unused_1907_);
v___x_1844_ = v___x_1841_;
v_isShared_1845_ = v_isSharedCheck_1906_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_toApplicative_1842_);
lean_dec(v___x_1841_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1906_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v_toFunctor_1846_; lean_object* v_toSeq_1847_; lean_object* v_toSeqLeft_1848_; lean_object* v_toSeqRight_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1904_; 
v_toFunctor_1846_ = lean_ctor_get(v_toApplicative_1842_, 0);
v_toSeq_1847_ = lean_ctor_get(v_toApplicative_1842_, 2);
v_toSeqLeft_1848_ = lean_ctor_get(v_toApplicative_1842_, 3);
v_toSeqRight_1849_ = lean_ctor_get(v_toApplicative_1842_, 4);
v_isSharedCheck_1904_ = !lean_is_exclusive(v_toApplicative_1842_);
if (v_isSharedCheck_1904_ == 0)
{
lean_object* v_unused_1905_; 
v_unused_1905_ = lean_ctor_get(v_toApplicative_1842_, 1);
lean_dec(v_unused_1905_);
v___x_1851_ = v_toApplicative_1842_;
v_isShared_1852_ = v_isSharedCheck_1904_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_toSeqRight_1849_);
lean_inc(v_toSeqLeft_1848_);
lean_inc(v_toSeq_1847_);
lean_inc(v_toFunctor_1846_);
lean_dec(v_toApplicative_1842_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1904_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___f_1853_; lean_object* v___f_1854_; lean_object* v___f_1855_; lean_object* v___f_1856_; lean_object* v___x_1857_; lean_object* v___f_1858_; lean_object* v___f_1859_; lean_object* v___f_1860_; lean_object* v___x_1862_; 
v___f_1853_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__1));
v___f_1854_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1846_);
v___f_1855_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1855_, 0, v_toFunctor_1846_);
v___f_1856_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1856_, 0, v_toFunctor_1846_);
v___x_1857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1857_, 0, v___f_1855_);
lean_ctor_set(v___x_1857_, 1, v___f_1856_);
v___f_1858_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1858_, 0, v_toSeqRight_1849_);
v___f_1859_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1859_, 0, v_toSeqLeft_1848_);
v___f_1860_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1860_, 0, v_toSeq_1847_);
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 4, v___f_1858_);
lean_ctor_set(v___x_1851_, 3, v___f_1859_);
lean_ctor_set(v___x_1851_, 2, v___f_1860_);
lean_ctor_set(v___x_1851_, 1, v___f_1853_);
lean_ctor_set(v___x_1851_, 0, v___x_1857_);
v___x_1862_ = v___x_1851_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1857_);
lean_ctor_set(v_reuseFailAlloc_1903_, 1, v___f_1853_);
lean_ctor_set(v_reuseFailAlloc_1903_, 2, v___f_1860_);
lean_ctor_set(v_reuseFailAlloc_1903_, 3, v___f_1859_);
lean_ctor_set(v_reuseFailAlloc_1903_, 4, v___f_1858_);
v___x_1862_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
lean_object* v___x_1864_; 
if (v_isShared_1845_ == 0)
{
lean_ctor_set(v___x_1844_, 1, v___f_1854_);
lean_ctor_set(v___x_1844_, 0, v___x_1862_);
v___x_1864_ = v___x_1844_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v___x_1862_);
lean_ctor_set(v_reuseFailAlloc_1902_, 1, v___f_1854_);
v___x_1864_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
lean_object* v___x_1865_; lean_object* v_toApplicative_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1900_; 
v___x_1865_ = l_StateRefT_x27_instMonad___redArg(v___x_1864_);
v_toApplicative_1866_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1900_ == 0)
{
lean_object* v_unused_1901_; 
v_unused_1901_ = lean_ctor_get(v___x_1865_, 1);
lean_dec(v_unused_1901_);
v___x_1868_ = v___x_1865_;
v_isShared_1869_ = v_isSharedCheck_1900_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_toApplicative_1866_);
lean_dec(v___x_1865_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1900_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v_toFunctor_1870_; lean_object* v_toSeq_1871_; lean_object* v_toSeqLeft_1872_; lean_object* v_toSeqRight_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1898_; 
v_toFunctor_1870_ = lean_ctor_get(v_toApplicative_1866_, 0);
v_toSeq_1871_ = lean_ctor_get(v_toApplicative_1866_, 2);
v_toSeqLeft_1872_ = lean_ctor_get(v_toApplicative_1866_, 3);
v_toSeqRight_1873_ = lean_ctor_get(v_toApplicative_1866_, 4);
v_isSharedCheck_1898_ = !lean_is_exclusive(v_toApplicative_1866_);
if (v_isSharedCheck_1898_ == 0)
{
lean_object* v_unused_1899_; 
v_unused_1899_ = lean_ctor_get(v_toApplicative_1866_, 1);
lean_dec(v_unused_1899_);
v___x_1875_ = v_toApplicative_1866_;
v_isShared_1876_ = v_isSharedCheck_1898_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_toSeqRight_1873_);
lean_inc(v_toSeqLeft_1872_);
lean_inc(v_toSeq_1871_);
lean_inc(v_toFunctor_1870_);
lean_dec(v_toApplicative_1866_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1898_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___f_1877_; lean_object* v___f_1878_; lean_object* v___f_1879_; lean_object* v___f_1880_; lean_object* v___x_1881_; lean_object* v___f_1882_; lean_object* v___f_1883_; lean_object* v___f_1884_; lean_object* v___x_1886_; 
v___f_1877_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__3));
v___f_1878_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1870_);
v___f_1879_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1879_, 0, v_toFunctor_1870_);
v___f_1880_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1880_, 0, v_toFunctor_1870_);
v___x_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1881_, 0, v___f_1879_);
lean_ctor_set(v___x_1881_, 1, v___f_1880_);
v___f_1882_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1882_, 0, v_toSeqRight_1873_);
v___f_1883_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1883_, 0, v_toSeqLeft_1872_);
v___f_1884_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1884_, 0, v_toSeq_1871_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 4, v___f_1882_);
lean_ctor_set(v___x_1875_, 3, v___f_1883_);
lean_ctor_set(v___x_1875_, 2, v___f_1884_);
lean_ctor_set(v___x_1875_, 1, v___f_1877_);
lean_ctor_set(v___x_1875_, 0, v___x_1881_);
v___x_1886_ = v___x_1875_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v___x_1881_);
lean_ctor_set(v_reuseFailAlloc_1897_, 1, v___f_1877_);
lean_ctor_set(v_reuseFailAlloc_1897_, 2, v___f_1884_);
lean_ctor_set(v_reuseFailAlloc_1897_, 3, v___f_1883_);
lean_ctor_set(v_reuseFailAlloc_1897_, 4, v___f_1882_);
v___x_1886_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
lean_object* v___x_1888_; 
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 1, v___f_1878_);
lean_ctor_set(v___x_1868_, 0, v___x_1886_);
v___x_1888_ = v___x_1868_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v___x_1886_);
lean_ctor_set(v_reuseFailAlloc_1896_, 1, v___f_1878_);
v___x_1888_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_14852__overap_1894_; lean_object* v___x_1895_; 
v___x_1889_ = l_StateRefT_x27_instMonad___redArg(v___x_1888_);
v___x_1890_ = l_ReaderT_instMonad___redArg(v___x_1889_);
v___x_1891_ = l_StateRefT_x27_instMonad___redArg(v___x_1890_);
v___x_1892_ = l_Lean_instInhabitedExpr;
v___x_1893_ = l_instInhabitedOfMonad___redArg(v___x_1891_, v___x_1892_);
v___x_14852__overap_1894_ = lean_panic_fn_borrowed(v___x_1893_, v_msg_1831_);
lean_dec(v___x_1893_);
lean_inc(v___y_1838_);
lean_inc_ref(v___y_1837_);
lean_inc(v___y_1836_);
lean_inc_ref(v___y_1835_);
lean_inc(v___y_1834_);
lean_inc_ref(v___y_1833_);
lean_inc(v___y_1832_);
v___x_1895_ = lean_apply_8(v___x_14852__overap_1894_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, lean_box(0));
return v___x_1895_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0___boxed(lean_object* v_msg_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v_msg_1908_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_);
lean_dec(v___y_1915_);
lean_dec_ref(v___y_1914_);
lean_dec(v___y_1913_);
lean_dec_ref(v___y_1912_);
lean_dec(v___y_1911_);
lean_dec_ref(v___y_1910_);
lean_dec(v___y_1909_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(lean_object* v_f_1918_, lean_object* v_a_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_){
_start:
{
lean_object* v___y_1928_; lean_object* v___x_1931_; uint8_t v_debug_1932_; 
v___x_1931_ = lean_st_ref_get(v___y_1921_);
v_debug_1932_ = lean_ctor_get_uint8(v___x_1931_, sizeof(void*)*11);
lean_dec(v___x_1931_);
if (v_debug_1932_ == 0)
{
v___y_1928_ = v___y_1921_;
goto v___jp_1927_;
}
else
{
lean_object* v___x_1933_; 
v___x_1933_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_1918_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v___x_1934_; 
lean_dec_ref_known(v___x_1933_, 1);
v___x_1934_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_);
if (lean_obj_tag(v___x_1934_) == 0)
{
lean_dec_ref_known(v___x_1934_, 1);
v___y_1928_ = v___y_1921_;
goto v___jp_1927_;
}
else
{
lean_object* v_a_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1942_; 
lean_dec_ref(v_a_1919_);
lean_dec_ref(v_f_1918_);
v_a_1935_ = lean_ctor_get(v___x_1934_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1934_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1937_ = v___x_1934_;
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_a_1935_);
lean_dec(v___x_1934_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1940_; 
if (v_isShared_1938_ == 0)
{
v___x_1940_ = v___x_1937_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_a_1935_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
else
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1950_; 
lean_dec_ref(v_a_1919_);
lean_dec_ref(v_f_1918_);
v_a_1943_ = lean_ctor_get(v___x_1933_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1945_ = v___x_1933_;
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1933_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_a_1943_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
}
v___jp_1927_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = l_Lean_Expr_app___override(v_f_1918_, v_a_1919_);
v___x_1930_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1929_, v___y_1928_);
return v___x_1930_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg___boxed(lean_object* v_f_1951_, lean_object* v_a_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(v_f_1951_, v_a_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1(lean_object* v_f_1961_, lean_object* v_a_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_){
_start:
{
lean_object* v___x_1971_; 
v___x_1971_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(v_f_1961_, v_a_1962_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___boxed(lean_object* v_f_1972_, lean_object* v_a_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_){
_start:
{
lean_object* v_res_1982_; 
v_res_1982_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1(v_f_1972_, v_a_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec(v___y_1976_);
lean_dec_ref(v___y_1975_);
lean_dec(v___y_1974_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg(lean_object* v_d_1983_, lean_object* v_e_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_){
_start:
{
lean_object* v___y_1993_; lean_object* v___x_1996_; uint8_t v_debug_1997_; 
v___x_1996_ = lean_st_ref_get(v___y_1986_);
v_debug_1997_ = lean_ctor_get_uint8(v___x_1996_, sizeof(void*)*11);
lean_dec(v___x_1996_);
if (v_debug_1997_ == 0)
{
v___y_1993_ = v___y_1986_;
goto v___jp_1992_;
}
else
{
lean_object* v___x_1998_; 
v___x_1998_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_e_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_dec_ref_known(v___x_1998_, 1);
v___y_1993_ = v___y_1986_;
goto v___jp_1992_;
}
else
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
lean_dec_ref(v_e_1984_);
lean_dec(v_d_1983_);
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1998_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1998_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_a_1999_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
}
v___jp_1992_:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1994_ = l_Lean_Expr_mdata___override(v_d_1983_, v_e_1984_);
v___x_1995_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_1994_, v___y_1993_);
return v___x_1995_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg___boxed(lean_object* v_d_2007_, lean_object* v_e_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg(v_d_2007_, v_e_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_);
lean_dec(v___y_2014_);
lean_dec_ref(v___y_2013_);
lean_dec(v___y_2012_);
lean_dec_ref(v___y_2011_);
lean_dec(v___y_2010_);
lean_dec_ref(v___y_2009_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2(lean_object* v_d_2017_, lean_object* v_e_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_){
_start:
{
lean_object* v___x_2027_; 
v___x_2027_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg(v_d_2017_, v_e_2018_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_);
return v___x_2027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___boxed(lean_object* v_d_2028_, lean_object* v_e_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_){
_start:
{
lean_object* v_res_2038_; 
v_res_2038_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2(v_d_2028_, v_e_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_);
lean_dec(v___y_2036_);
lean_dec_ref(v___y_2035_);
lean_dec(v___y_2034_);
lean_dec_ref(v___y_2033_);
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec(v___y_2030_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg(lean_object* v_structName_2039_, lean_object* v_idx_2040_, lean_object* v_struct_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
lean_object* v___y_2050_; lean_object* v___x_2053_; uint8_t v_debug_2054_; 
v___x_2053_ = lean_st_ref_get(v___y_2043_);
v_debug_2054_ = lean_ctor_get_uint8(v___x_2053_, sizeof(void*)*11);
lean_dec(v___x_2053_);
if (v_debug_2054_ == 0)
{
v___y_2050_ = v___y_2043_;
goto v___jp_2049_;
}
else
{
lean_object* v___x_2055_; 
v___x_2055_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_struct_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
if (lean_obj_tag(v___x_2055_) == 0)
{
lean_dec_ref_known(v___x_2055_, 1);
v___y_2050_ = v___y_2043_;
goto v___jp_2049_;
}
else
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
lean_dec_ref(v_struct_2041_);
lean_dec(v_idx_2040_);
lean_dec(v_structName_2039_);
v_a_2056_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v___x_2055_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2055_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_a_2056_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
v___jp_2049_:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2051_ = l_Lean_Expr_proj___override(v_structName_2039_, v_idx_2040_, v_struct_2041_);
v___x_2052_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2051_, v___y_2050_);
return v___x_2052_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg___boxed(lean_object* v_structName_2064_, lean_object* v_idx_2065_, lean_object* v_struct_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg(v_structName_2064_, v_idx_2065_, v_struct_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3(lean_object* v_structName_2075_, lean_object* v_idx_2076_, lean_object* v_struct_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_){
_start:
{
lean_object* v___x_2086_; 
v___x_2086_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg(v_structName_2075_, v_idx_2076_, v_struct_2077_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___boxed(lean_object* v_structName_2087_, lean_object* v_idx_2088_, lean_object* v_struct_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3(v_structName_2087_, v_idx_2088_, v_struct_2089_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
lean_dec(v___y_2092_);
lean_dec_ref(v___y_2091_);
lean_dec(v___y_2090_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5(lean_object* v_msgData_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v___x_2105_; lean_object* v_env_2106_; lean_object* v___x_2107_; lean_object* v_toCold_2108_; lean_object* v_mctx_2109_; lean_object* v_lctx_2110_; lean_object* v_options_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2105_ = lean_st_ref_get(v___y_2103_);
v_env_2106_ = lean_ctor_get(v___x_2105_, 0);
lean_inc_ref(v_env_2106_);
lean_dec(v___x_2105_);
v___x_2107_ = lean_st_ref_get(v___y_2101_);
v_toCold_2108_ = lean_ctor_get(v___y_2102_, 0);
v_mctx_2109_ = lean_ctor_get(v___x_2107_, 0);
lean_inc_ref(v_mctx_2109_);
lean_dec(v___x_2107_);
v_lctx_2110_ = lean_ctor_get(v___y_2100_, 2);
v_options_2111_ = lean_ctor_get(v_toCold_2108_, 2);
lean_inc_ref(v_options_2111_);
lean_inc_ref(v_lctx_2110_);
v___x_2112_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2112_, 0, v_env_2106_);
lean_ctor_set(v___x_2112_, 1, v_mctx_2109_);
lean_ctor_set(v___x_2112_, 2, v_lctx_2110_);
lean_ctor_set(v___x_2112_, 3, v_options_2111_);
v___x_2113_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
lean_ctor_set(v___x_2113_, 1, v_msgData_2099_);
v___x_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5___boxed(lean_object* v_msgData_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_){
_start:
{
lean_object* v_res_2121_; 
v_res_2121_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5(v_msgData_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_);
lean_dec(v___y_2119_);
lean_dec_ref(v___y_2118_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg(lean_object* v_msg_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v_ref_2128_; lean_object* v___x_2129_; lean_object* v_a_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2138_; 
v_ref_2128_ = lean_ctor_get(v___y_2125_, 2);
v___x_2129_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5(v_msg_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_);
v_a_2130_ = lean_ctor_get(v___x_2129_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2129_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2132_ = v___x_2129_;
v_isShared_2133_ = v_isSharedCheck_2138_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_a_2130_);
lean_dec(v___x_2129_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2138_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2134_; lean_object* v___x_2136_; 
lean_inc(v_ref_2128_);
v___x_2134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2134_, 0, v_ref_2128_);
lean_ctor_set(v___x_2134_, 1, v_a_2130_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set_tag(v___x_2132_, 1);
lean_ctor_set(v___x_2132_, 0, v___x_2134_);
v___x_2136_ = v___x_2132_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2134_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg___boxed(lean_object* v_msg_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg(v_msg_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_);
lean_dec(v___y_2143_);
lean_dec_ref(v___y_2142_);
lean_dec(v___y_2141_);
lean_dec_ref(v___y_2140_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg(lean_object* v_a_2146_, lean_object* v_x_2147_){
_start:
{
if (lean_obj_tag(v_x_2147_) == 0)
{
lean_object* v___x_2148_; 
v___x_2148_ = lean_box(0);
return v___x_2148_;
}
else
{
lean_object* v_key_2149_; lean_object* v_value_2150_; lean_object* v_tail_2151_; lean_object* v_fst_2152_; lean_object* v_snd_2153_; lean_object* v_fst_2154_; lean_object* v_snd_2155_; size_t v___x_2156_; size_t v___x_2157_; uint8_t v___x_2158_; 
v_key_2149_ = lean_ctor_get(v_x_2147_, 0);
v_value_2150_ = lean_ctor_get(v_x_2147_, 1);
v_tail_2151_ = lean_ctor_get(v_x_2147_, 2);
v_fst_2152_ = lean_ctor_get(v_key_2149_, 0);
v_snd_2153_ = lean_ctor_get(v_key_2149_, 1);
v_fst_2154_ = lean_ctor_get(v_a_2146_, 0);
v_snd_2155_ = lean_ctor_get(v_a_2146_, 1);
v___x_2156_ = lean_ptr_addr(v_fst_2152_);
v___x_2157_ = lean_ptr_addr(v_fst_2154_);
v___x_2158_ = lean_usize_dec_eq(v___x_2156_, v___x_2157_);
if (v___x_2158_ == 0)
{
v_x_2147_ = v_tail_2151_;
goto _start;
}
else
{
size_t v___x_2160_; size_t v___x_2161_; uint8_t v___x_2162_; 
v___x_2160_ = lean_ptr_addr(v_snd_2153_);
v___x_2161_ = lean_ptr_addr(v_snd_2155_);
v___x_2162_ = lean_usize_dec_eq(v___x_2160_, v___x_2161_);
if (v___x_2162_ == 0)
{
v_x_2147_ = v_tail_2151_;
goto _start;
}
else
{
lean_object* v___x_2164_; 
lean_inc(v_value_2150_);
v___x_2164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2164_, 0, v_value_2150_);
return v___x_2164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg___boxed(lean_object* v_a_2165_, lean_object* v_x_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg(v_a_2165_, v_x_2166_);
lean_dec(v_x_2166_);
lean_dec_ref(v_a_2165_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg(lean_object* v_m_2168_, lean_object* v_a_2169_){
_start:
{
lean_object* v_buckets_2170_; lean_object* v_fst_2171_; lean_object* v_snd_2172_; lean_object* v___x_2173_; size_t v___x_2174_; size_t v___x_2175_; size_t v___x_2176_; uint64_t v___x_2177_; size_t v___x_2178_; size_t v___x_2179_; uint64_t v___x_2180_; uint64_t v___x_2181_; uint64_t v___x_2182_; uint64_t v___x_2183_; uint64_t v_fold_2184_; uint64_t v___x_2185_; uint64_t v___x_2186_; uint64_t v___x_2187_; size_t v___x_2188_; size_t v___x_2189_; size_t v___x_2190_; size_t v___x_2191_; size_t v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v_buckets_2170_ = lean_ctor_get(v_m_2168_, 1);
v_fst_2171_ = lean_ctor_get(v_a_2169_, 0);
v_snd_2172_ = lean_ctor_get(v_a_2169_, 1);
v___x_2173_ = lean_array_get_size(v_buckets_2170_);
v___x_2174_ = lean_ptr_addr(v_fst_2171_);
v___x_2175_ = ((size_t)3ULL);
v___x_2176_ = lean_usize_shift_right(v___x_2174_, v___x_2175_);
v___x_2177_ = lean_usize_to_uint64(v___x_2176_);
v___x_2178_ = lean_ptr_addr(v_snd_2172_);
v___x_2179_ = lean_usize_shift_right(v___x_2178_, v___x_2175_);
v___x_2180_ = lean_usize_to_uint64(v___x_2179_);
v___x_2181_ = lean_uint64_mix_hash(v___x_2177_, v___x_2180_);
v___x_2182_ = 32ULL;
v___x_2183_ = lean_uint64_shift_right(v___x_2181_, v___x_2182_);
v_fold_2184_ = lean_uint64_xor(v___x_2181_, v___x_2183_);
v___x_2185_ = 16ULL;
v___x_2186_ = lean_uint64_shift_right(v_fold_2184_, v___x_2185_);
v___x_2187_ = lean_uint64_xor(v_fold_2184_, v___x_2186_);
v___x_2188_ = lean_uint64_to_usize(v___x_2187_);
v___x_2189_ = lean_usize_of_nat(v___x_2173_);
v___x_2190_ = ((size_t)1ULL);
v___x_2191_ = lean_usize_sub(v___x_2189_, v___x_2190_);
v___x_2192_ = lean_usize_land(v___x_2188_, v___x_2191_);
v___x_2193_ = lean_array_uget_borrowed(v_buckets_2170_, v___x_2192_);
v___x_2194_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg(v_a_2169_, v___x_2193_);
return v___x_2194_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg___boxed(lean_object* v_m_2195_, lean_object* v_a_2196_){
_start:
{
lean_object* v_res_2197_; 
v_res_2197_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg(v_m_2195_, v_a_2196_);
lean_dec_ref(v_a_2196_);
lean_dec_ref(v_m_2195_);
return v_res_2197_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg(lean_object* v_a_2198_, lean_object* v_x_2199_){
_start:
{
if (lean_obj_tag(v_x_2199_) == 0)
{
uint8_t v___x_2200_; 
v___x_2200_ = 0;
return v___x_2200_;
}
else
{
lean_object* v_key_2201_; lean_object* v_tail_2202_; lean_object* v_fst_2203_; lean_object* v_snd_2204_; lean_object* v_fst_2205_; lean_object* v_snd_2206_; size_t v___x_2207_; size_t v___x_2208_; uint8_t v___x_2209_; 
v_key_2201_ = lean_ctor_get(v_x_2199_, 0);
v_tail_2202_ = lean_ctor_get(v_x_2199_, 2);
v_fst_2203_ = lean_ctor_get(v_key_2201_, 0);
v_snd_2204_ = lean_ctor_get(v_key_2201_, 1);
v_fst_2205_ = lean_ctor_get(v_a_2198_, 0);
v_snd_2206_ = lean_ctor_get(v_a_2198_, 1);
v___x_2207_ = lean_ptr_addr(v_fst_2203_);
v___x_2208_ = lean_ptr_addr(v_fst_2205_);
v___x_2209_ = lean_usize_dec_eq(v___x_2207_, v___x_2208_);
if (v___x_2209_ == 0)
{
v_x_2199_ = v_tail_2202_;
goto _start;
}
else
{
size_t v___x_2211_; size_t v___x_2212_; uint8_t v___x_2213_; 
v___x_2211_ = lean_ptr_addr(v_snd_2204_);
v___x_2212_ = lean_ptr_addr(v_snd_2206_);
v___x_2213_ = lean_usize_dec_eq(v___x_2211_, v___x_2212_);
if (v___x_2213_ == 0)
{
v_x_2199_ = v_tail_2202_;
goto _start;
}
else
{
return v___x_2213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg___boxed(lean_object* v_a_2215_, lean_object* v_x_2216_){
_start:
{
uint8_t v_res_2217_; lean_object* v_r_2218_; 
v_res_2217_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg(v_a_2215_, v_x_2216_);
lean_dec(v_x_2216_);
lean_dec_ref(v_a_2215_);
v_r_2218_ = lean_box(v_res_2217_);
return v_r_2218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11___redArg(lean_object* v_a_2219_, lean_object* v_b_2220_, lean_object* v_x_2221_){
_start:
{
if (lean_obj_tag(v_x_2221_) == 0)
{
lean_dec(v_b_2220_);
lean_dec_ref(v_a_2219_);
return v_x_2221_;
}
else
{
lean_object* v_key_2222_; lean_object* v_value_2223_; lean_object* v_tail_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2244_; 
v_key_2222_ = lean_ctor_get(v_x_2221_, 0);
v_value_2223_ = lean_ctor_get(v_x_2221_, 1);
v_tail_2224_ = lean_ctor_get(v_x_2221_, 2);
v_isSharedCheck_2244_ = !lean_is_exclusive(v_x_2221_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2226_ = v_x_2221_;
v_isShared_2227_ = v_isSharedCheck_2244_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_tail_2224_);
lean_inc(v_value_2223_);
lean_inc(v_key_2222_);
lean_dec(v_x_2221_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2244_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v_fst_2233_; lean_object* v_snd_2234_; lean_object* v_fst_2235_; lean_object* v_snd_2236_; size_t v___x_2237_; size_t v___x_2238_; uint8_t v___x_2239_; 
v_fst_2233_ = lean_ctor_get(v_key_2222_, 0);
v_snd_2234_ = lean_ctor_get(v_key_2222_, 1);
v_fst_2235_ = lean_ctor_get(v_a_2219_, 0);
v_snd_2236_ = lean_ctor_get(v_a_2219_, 1);
v___x_2237_ = lean_ptr_addr(v_fst_2233_);
v___x_2238_ = lean_ptr_addr(v_fst_2235_);
v___x_2239_ = lean_usize_dec_eq(v___x_2237_, v___x_2238_);
if (v___x_2239_ == 0)
{
goto v___jp_2228_;
}
else
{
size_t v___x_2240_; size_t v___x_2241_; uint8_t v___x_2242_; 
v___x_2240_ = lean_ptr_addr(v_snd_2234_);
v___x_2241_ = lean_ptr_addr(v_snd_2236_);
v___x_2242_ = lean_usize_dec_eq(v___x_2240_, v___x_2241_);
if (v___x_2242_ == 0)
{
goto v___jp_2228_;
}
else
{
lean_object* v___x_2243_; 
lean_del_object(v___x_2226_);
lean_dec(v_value_2223_);
lean_dec(v_key_2222_);
v___x_2243_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2243_, 0, v_a_2219_);
lean_ctor_set(v___x_2243_, 1, v_b_2220_);
lean_ctor_set(v___x_2243_, 2, v_tail_2224_);
return v___x_2243_;
}
}
v___jp_2228_:
{
lean_object* v___x_2229_; lean_object* v___x_2231_; 
v___x_2229_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11___redArg(v_a_2219_, v_b_2220_, v_tail_2224_);
if (v_isShared_2227_ == 0)
{
lean_ctor_set(v___x_2226_, 2, v___x_2229_);
v___x_2231_ = v___x_2226_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_key_2222_);
lean_ctor_set(v_reuseFailAlloc_2232_, 1, v_value_2223_);
lean_ctor_set(v_reuseFailAlloc_2232_, 2, v___x_2229_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12___redArg(lean_object* v_x_2245_, lean_object* v_x_2246_){
_start:
{
if (lean_obj_tag(v_x_2246_) == 0)
{
return v_x_2245_;
}
else
{
lean_object* v_key_2247_; lean_object* v_value_2248_; lean_object* v_tail_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2281_; 
v_key_2247_ = lean_ctor_get(v_x_2246_, 0);
v_value_2248_ = lean_ctor_get(v_x_2246_, 1);
v_tail_2249_ = lean_ctor_get(v_x_2246_, 2);
v_isSharedCheck_2281_ = !lean_is_exclusive(v_x_2246_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2251_ = v_x_2246_;
v_isShared_2252_ = v_isSharedCheck_2281_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_tail_2249_);
lean_inc(v_value_2248_);
lean_inc(v_key_2247_);
lean_dec(v_x_2246_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2281_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v_fst_2253_; lean_object* v_snd_2254_; lean_object* v___x_2255_; size_t v___x_2256_; size_t v___x_2257_; size_t v___x_2258_; uint64_t v___x_2259_; size_t v___x_2260_; size_t v___x_2261_; uint64_t v___x_2262_; uint64_t v___x_2263_; uint64_t v___x_2264_; uint64_t v___x_2265_; uint64_t v_fold_2266_; uint64_t v___x_2267_; uint64_t v___x_2268_; uint64_t v___x_2269_; size_t v___x_2270_; size_t v___x_2271_; size_t v___x_2272_; size_t v___x_2273_; size_t v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2277_; 
v_fst_2253_ = lean_ctor_get(v_key_2247_, 0);
v_snd_2254_ = lean_ctor_get(v_key_2247_, 1);
v___x_2255_ = lean_array_get_size(v_x_2245_);
v___x_2256_ = lean_ptr_addr(v_fst_2253_);
v___x_2257_ = ((size_t)3ULL);
v___x_2258_ = lean_usize_shift_right(v___x_2256_, v___x_2257_);
v___x_2259_ = lean_usize_to_uint64(v___x_2258_);
v___x_2260_ = lean_ptr_addr(v_snd_2254_);
v___x_2261_ = lean_usize_shift_right(v___x_2260_, v___x_2257_);
v___x_2262_ = lean_usize_to_uint64(v___x_2261_);
v___x_2263_ = lean_uint64_mix_hash(v___x_2259_, v___x_2262_);
v___x_2264_ = 32ULL;
v___x_2265_ = lean_uint64_shift_right(v___x_2263_, v___x_2264_);
v_fold_2266_ = lean_uint64_xor(v___x_2263_, v___x_2265_);
v___x_2267_ = 16ULL;
v___x_2268_ = lean_uint64_shift_right(v_fold_2266_, v___x_2267_);
v___x_2269_ = lean_uint64_xor(v_fold_2266_, v___x_2268_);
v___x_2270_ = lean_uint64_to_usize(v___x_2269_);
v___x_2271_ = lean_usize_of_nat(v___x_2255_);
v___x_2272_ = ((size_t)1ULL);
v___x_2273_ = lean_usize_sub(v___x_2271_, v___x_2272_);
v___x_2274_ = lean_usize_land(v___x_2270_, v___x_2273_);
v___x_2275_ = lean_array_uget_borrowed(v_x_2245_, v___x_2274_);
lean_inc(v___x_2275_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 2, v___x_2275_);
v___x_2277_ = v___x_2251_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_key_2247_);
lean_ctor_set(v_reuseFailAlloc_2280_, 1, v_value_2248_);
lean_ctor_set(v_reuseFailAlloc_2280_, 2, v___x_2275_);
v___x_2277_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
lean_object* v___x_2278_; 
v___x_2278_ = lean_array_uset(v_x_2245_, v___x_2274_, v___x_2277_);
v_x_2245_ = v___x_2278_;
v_x_2246_ = v_tail_2249_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11___redArg(lean_object* v_i_2282_, lean_object* v_source_2283_, lean_object* v_target_2284_){
_start:
{
lean_object* v___x_2285_; uint8_t v___x_2286_; 
v___x_2285_ = lean_array_get_size(v_source_2283_);
v___x_2286_ = lean_nat_dec_lt(v_i_2282_, v___x_2285_);
if (v___x_2286_ == 0)
{
lean_dec_ref(v_source_2283_);
lean_dec(v_i_2282_);
return v_target_2284_;
}
else
{
lean_object* v_es_2287_; lean_object* v___x_2288_; lean_object* v_source_2289_; lean_object* v_target_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v_es_2287_ = lean_array_fget(v_source_2283_, v_i_2282_);
v___x_2288_ = lean_box(0);
v_source_2289_ = lean_array_fset(v_source_2283_, v_i_2282_, v___x_2288_);
v_target_2290_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12___redArg(v_target_2284_, v_es_2287_);
v___x_2291_ = lean_unsigned_to_nat(1u);
v___x_2292_ = lean_nat_add(v_i_2282_, v___x_2291_);
lean_dec(v_i_2282_);
v_i_2282_ = v___x_2292_;
v_source_2283_ = v_source_2289_;
v_target_2284_ = v_target_2290_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10___redArg(lean_object* v_data_2294_){
_start:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v_nbuckets_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2295_ = lean_array_get_size(v_data_2294_);
v___x_2296_ = lean_unsigned_to_nat(2u);
v_nbuckets_2297_ = lean_nat_mul(v___x_2295_, v___x_2296_);
v___x_2298_ = lean_unsigned_to_nat(0u);
v___x_2299_ = lean_box(0);
v___x_2300_ = lean_mk_array(v_nbuckets_2297_, v___x_2299_);
v___x_2301_ = lean_array_propagate_mark(v_data_2294_, v___x_2300_);
v___x_2302_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11___redArg(v___x_2298_, v_data_2294_, v___x_2301_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7___redArg(lean_object* v_m_2303_, lean_object* v_a_2304_, lean_object* v_b_2305_){
_start:
{
lean_object* v_size_2306_; lean_object* v_buckets_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2359_; 
v_size_2306_ = lean_ctor_get(v_m_2303_, 0);
v_buckets_2307_ = lean_ctor_get(v_m_2303_, 1);
v_isSharedCheck_2359_ = !lean_is_exclusive(v_m_2303_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2309_ = v_m_2303_;
v_isShared_2310_ = v_isSharedCheck_2359_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_buckets_2307_);
lean_inc(v_size_2306_);
lean_dec(v_m_2303_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2359_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v_fst_2311_; lean_object* v_snd_2312_; lean_object* v___x_2313_; size_t v___x_2314_; size_t v___x_2315_; size_t v___x_2316_; uint64_t v___x_2317_; size_t v___x_2318_; size_t v___x_2319_; uint64_t v___x_2320_; uint64_t v___x_2321_; uint64_t v___x_2322_; uint64_t v___x_2323_; uint64_t v_fold_2324_; uint64_t v___x_2325_; uint64_t v___x_2326_; uint64_t v___x_2327_; size_t v___x_2328_; size_t v___x_2329_; size_t v___x_2330_; size_t v___x_2331_; size_t v___x_2332_; lean_object* v_bkt_2333_; uint8_t v___x_2334_; 
v_fst_2311_ = lean_ctor_get(v_a_2304_, 0);
v_snd_2312_ = lean_ctor_get(v_a_2304_, 1);
v___x_2313_ = lean_array_get_size(v_buckets_2307_);
v___x_2314_ = lean_ptr_addr(v_fst_2311_);
v___x_2315_ = ((size_t)3ULL);
v___x_2316_ = lean_usize_shift_right(v___x_2314_, v___x_2315_);
v___x_2317_ = lean_usize_to_uint64(v___x_2316_);
v___x_2318_ = lean_ptr_addr(v_snd_2312_);
v___x_2319_ = lean_usize_shift_right(v___x_2318_, v___x_2315_);
v___x_2320_ = lean_usize_to_uint64(v___x_2319_);
v___x_2321_ = lean_uint64_mix_hash(v___x_2317_, v___x_2320_);
v___x_2322_ = 32ULL;
v___x_2323_ = lean_uint64_shift_right(v___x_2321_, v___x_2322_);
v_fold_2324_ = lean_uint64_xor(v___x_2321_, v___x_2323_);
v___x_2325_ = 16ULL;
v___x_2326_ = lean_uint64_shift_right(v_fold_2324_, v___x_2325_);
v___x_2327_ = lean_uint64_xor(v_fold_2324_, v___x_2326_);
v___x_2328_ = lean_uint64_to_usize(v___x_2327_);
v___x_2329_ = lean_usize_of_nat(v___x_2313_);
v___x_2330_ = ((size_t)1ULL);
v___x_2331_ = lean_usize_sub(v___x_2329_, v___x_2330_);
v___x_2332_ = lean_usize_land(v___x_2328_, v___x_2331_);
v_bkt_2333_ = lean_array_uget_borrowed(v_buckets_2307_, v___x_2332_);
v___x_2334_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg(v_a_2304_, v_bkt_2333_);
if (v___x_2334_ == 0)
{
lean_object* v___x_2335_; lean_object* v_size_x27_2336_; lean_object* v___x_2337_; lean_object* v_buckets_x27_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; uint8_t v___x_2344_; 
v___x_2335_ = lean_unsigned_to_nat(1u);
v_size_x27_2336_ = lean_nat_add(v_size_2306_, v___x_2335_);
lean_dec(v_size_2306_);
lean_inc(v_bkt_2333_);
v___x_2337_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2337_, 0, v_a_2304_);
lean_ctor_set(v___x_2337_, 1, v_b_2305_);
lean_ctor_set(v___x_2337_, 2, v_bkt_2333_);
v_buckets_x27_2338_ = lean_array_uset(v_buckets_2307_, v___x_2332_, v___x_2337_);
v___x_2339_ = lean_unsigned_to_nat(4u);
v___x_2340_ = lean_nat_mul(v_size_x27_2336_, v___x_2339_);
v___x_2341_ = lean_unsigned_to_nat(3u);
v___x_2342_ = lean_nat_div(v___x_2340_, v___x_2341_);
lean_dec(v___x_2340_);
v___x_2343_ = lean_array_get_size(v_buckets_x27_2338_);
v___x_2344_ = lean_nat_dec_le(v___x_2342_, v___x_2343_);
lean_dec(v___x_2342_);
if (v___x_2344_ == 0)
{
lean_object* v_val_2345_; lean_object* v___x_2347_; 
v_val_2345_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10___redArg(v_buckets_x27_2338_);
if (v_isShared_2310_ == 0)
{
lean_ctor_set(v___x_2309_, 1, v_val_2345_);
lean_ctor_set(v___x_2309_, 0, v_size_x27_2336_);
v___x_2347_ = v___x_2309_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v_size_x27_2336_);
lean_ctor_set(v_reuseFailAlloc_2348_, 1, v_val_2345_);
v___x_2347_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
return v___x_2347_;
}
}
else
{
lean_object* v___x_2350_; 
if (v_isShared_2310_ == 0)
{
lean_ctor_set(v___x_2309_, 1, v_buckets_x27_2338_);
lean_ctor_set(v___x_2309_, 0, v_size_x27_2336_);
v___x_2350_ = v___x_2309_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_size_x27_2336_);
lean_ctor_set(v_reuseFailAlloc_2351_, 1, v_buckets_x27_2338_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
}
else
{
lean_object* v___x_2352_; lean_object* v_buckets_x27_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2357_; 
lean_inc(v_bkt_2333_);
v___x_2352_ = lean_box(0);
v_buckets_x27_2353_ = lean_array_uset(v_buckets_2307_, v___x_2332_, v___x_2352_);
v___x_2354_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11___redArg(v_a_2304_, v_b_2305_, v_bkt_2333_);
v___x_2355_ = lean_array_uset(v_buckets_x27_2353_, v___x_2332_, v___x_2354_);
if (v_isShared_2310_ == 0)
{
lean_ctor_set(v___x_2309_, 1, v___x_2355_);
v___x_2357_ = v___x_2309_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_size_2306_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v___x_2355_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1(void){
_start:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2361_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__0));
v___x_2362_ = l_Lean_stringToMessageData(v___x_2361_);
return v___x_2362_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2(void){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2363_ = lean_unsigned_to_nat(32u);
v___x_2364_ = lean_mk_empty_array_with_capacity(v___x_2363_);
v___x_2365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2364_);
return v___x_2365_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3(void){
_start:
{
size_t v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2366_ = ((size_t)5ULL);
v___x_2367_ = lean_unsigned_to_nat(0u);
v___x_2368_ = lean_unsigned_to_nat(32u);
v___x_2369_ = lean_mk_empty_array_with_capacity(v___x_2368_);
v___x_2370_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__2);
v___x_2371_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2371_, 0, v___x_2370_);
lean_ctor_set(v___x_2371_, 1, v___x_2369_);
lean_ctor_set(v___x_2371_, 2, v___x_2367_);
lean_ctor_set(v___x_2371_, 3, v___x_2367_);
lean_ctor_set_usize(v___x_2371_, 4, v___x_2366_);
return v___x_2371_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2(void){
_start:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___x_2374_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__2));
v___x_2375_ = lean_unsigned_to_nat(73u);
v___x_2376_ = lean_unsigned_to_nat(213u);
v___x_2377_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__1));
v___x_2378_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__0));
v___x_2379_ = l_mkPanicMessageWithDecl(v___x_2378_, v___x_2377_, v___x_2376_, v___x_2375_, v___x_2374_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit(lean_object* v_xs_2380_, lean_object* v_e_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_){
_start:
{
switch(lean_obj_tag(v_e_2381_))
{
case 0:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; 
lean_dec_ref_known(v_e_2381_, 1);
lean_dec_ref(v_xs_2380_);
v___x_2390_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2391_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2390_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2391_;
}
case 1:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; 
lean_dec_ref_known(v_e_2381_, 1);
lean_dec_ref(v_xs_2380_);
v___x_2392_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2393_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2392_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2393_;
}
case 2:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
lean_dec_ref_known(v_e_2381_, 1);
lean_dec_ref(v_xs_2380_);
v___x_2394_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2395_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2394_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2395_;
}
case 3:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; 
lean_dec_ref_known(v_e_2381_, 1);
lean_dec_ref(v_xs_2380_);
v___x_2396_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2397_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2396_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2397_;
}
case 4:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; 
lean_dec_ref_known(v_e_2381_, 2);
lean_dec_ref(v_xs_2380_);
v___x_2398_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2399_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2398_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2399_;
}
case 5:
{
lean_object* v_fn_2400_; lean_object* v_arg_2401_; lean_object* v___x_2402_; 
v_fn_2400_ = lean_ctor_get(v_e_2381_, 0);
v_arg_2401_ = lean_ctor_get(v_e_2381_, 1);
lean_inc_ref(v_fn_2400_);
lean_inc_ref(v_xs_2380_);
v___x_2402_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2380_, v_fn_2400_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; lean_object* v___x_2404_; 
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_a_2403_);
lean_dec_ref_known(v___x_2402_, 1);
lean_inc_ref(v_arg_2401_);
v___x_2404_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2380_, v_arg_2401_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2420_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2420_ == 0)
{
v___x_2407_ = v___x_2404_;
v_isShared_2408_ = v_isSharedCheck_2420_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2404_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2420_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
size_t v___x_2409_; size_t v___x_2410_; uint8_t v___x_2411_; 
v___x_2409_ = lean_ptr_addr(v_fn_2400_);
v___x_2410_ = lean_ptr_addr(v_a_2403_);
v___x_2411_ = lean_usize_dec_eq(v___x_2409_, v___x_2410_);
if (v___x_2411_ == 0)
{
lean_object* v___x_2412_; 
lean_del_object(v___x_2407_);
lean_dec_ref_known(v_e_2381_, 2);
v___x_2412_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(v_a_2403_, v_a_2405_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2412_;
}
else
{
size_t v___x_2413_; size_t v___x_2414_; uint8_t v___x_2415_; 
v___x_2413_ = lean_ptr_addr(v_arg_2401_);
v___x_2414_ = lean_ptr_addr(v_a_2405_);
v___x_2415_ = lean_usize_dec_eq(v___x_2413_, v___x_2414_);
if (v___x_2415_ == 0)
{
lean_object* v___x_2416_; 
lean_del_object(v___x_2407_);
lean_dec_ref_known(v_e_2381_, 2);
v___x_2416_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__1___redArg(v_a_2403_, v_a_2405_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2416_;
}
else
{
lean_object* v___x_2418_; 
lean_dec(v_a_2405_);
lean_dec(v_a_2403_);
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 0, v_e_2381_);
v___x_2418_ = v___x_2407_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_e_2381_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
}
}
}
else
{
lean_dec(v_a_2403_);
lean_dec_ref_known(v_e_2381_, 2);
return v___x_2404_;
}
}
else
{
lean_dec_ref_known(v_e_2381_, 2);
lean_dec_ref(v_xs_2380_);
return v___x_2402_;
}
}
case 8:
{
lean_object* v_declName_2421_; lean_object* v_type_2422_; lean_object* v_value_2423_; lean_object* v_body_2424_; uint8_t v_nondep_2425_; lean_object* v___x_2426_; 
v_declName_2421_ = lean_ctor_get(v_e_2381_, 0);
lean_inc(v_declName_2421_);
v_type_2422_ = lean_ctor_get(v_e_2381_, 1);
lean_inc_ref(v_type_2422_);
v_value_2423_ = lean_ctor_get(v_e_2381_, 2);
lean_inc_ref(v_value_2423_);
v_body_2424_ = lean_ctor_get(v_e_2381_, 3);
lean_inc_ref(v_body_2424_);
v_nondep_2425_ = lean_ctor_get_uint8(v_e_2381_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2381_, 4);
lean_inc_ref(v_xs_2380_);
v___x_2426_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2380_, v_type_2422_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2426_) == 0)
{
lean_object* v_a_2427_; lean_object* v___x_2428_; 
v_a_2427_ = lean_ctor_get(v___x_2426_, 0);
lean_inc(v_a_2427_);
lean_dec_ref_known(v___x_2426_, 1);
lean_inc_ref(v_xs_2380_);
v___x_2428_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2380_, v_value_2423_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2430_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc(v_a_2429_);
lean_dec_ref_known(v___x_2428_, 1);
v___x_2430_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkDecl(v_declName_2421_, v_a_2427_, v_a_2429_, v_nondep_2425_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
lean_inc(v_a_2431_);
lean_dec_ref_known(v___x_2430_, 1);
v___x_2432_ = l_Lean_PersistentArray_push___redArg(v_xs_2380_, v_a_2431_);
v___x_2433_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v___x_2432_, v_body_2424_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2433_;
}
else
{
lean_dec_ref(v_body_2424_);
lean_dec_ref(v_xs_2380_);
return v___x_2430_;
}
}
else
{
lean_dec(v_a_2427_);
lean_dec_ref(v_body_2424_);
lean_dec(v_declName_2421_);
lean_dec_ref(v_xs_2380_);
return v___x_2428_;
}
}
else
{
lean_dec_ref(v_body_2424_);
lean_dec_ref(v_value_2423_);
lean_dec(v_declName_2421_);
lean_dec_ref(v_xs_2380_);
return v___x_2426_;
}
}
case 9:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; 
lean_dec_ref_known(v_e_2381_, 1);
lean_dec_ref(v_xs_2380_);
v___x_2434_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__2);
v___x_2435_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__0(v___x_2434_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2435_;
}
case 10:
{
lean_object* v_data_2436_; lean_object* v_expr_2437_; lean_object* v___x_2438_; 
v_data_2436_ = lean_ctor_get(v_e_2381_, 0);
v_expr_2437_ = lean_ctor_get(v_e_2381_, 1);
lean_inc_ref(v_expr_2437_);
v___x_2438_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2380_, v_expr_2437_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2450_; 
v_a_2439_ = lean_ctor_get(v___x_2438_, 0);
v_isSharedCheck_2450_ = !lean_is_exclusive(v___x_2438_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2441_ = v___x_2438_;
v_isShared_2442_ = v_isSharedCheck_2450_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2438_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2450_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
size_t v___x_2443_; size_t v___x_2444_; uint8_t v___x_2445_; 
v___x_2443_ = lean_ptr_addr(v_expr_2437_);
v___x_2444_ = lean_ptr_addr(v_a_2439_);
v___x_2445_ = lean_usize_dec_eq(v___x_2443_, v___x_2444_);
if (v___x_2445_ == 0)
{
lean_object* v___x_2446_; 
lean_inc(v_data_2436_);
lean_del_object(v___x_2441_);
lean_dec_ref_known(v_e_2381_, 2);
v___x_2446_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__2___redArg(v_data_2436_, v_a_2439_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2446_;
}
else
{
lean_object* v___x_2448_; 
lean_dec(v_a_2439_);
if (v_isShared_2442_ == 0)
{
lean_ctor_set(v___x_2441_, 0, v_e_2381_);
v___x_2448_ = v___x_2441_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_e_2381_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2381_, 2);
return v___x_2438_;
}
}
case 11:
{
lean_object* v_typeName_2451_; lean_object* v_idx_2452_; lean_object* v_struct_2453_; lean_object* v___x_2454_; 
v_typeName_2451_ = lean_ctor_get(v_e_2381_, 0);
v_idx_2452_ = lean_ctor_get(v_e_2381_, 1);
v_struct_2453_ = lean_ctor_get(v_e_2381_, 2);
lean_inc_ref(v_struct_2453_);
v___x_2454_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2380_, v_struct_2453_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
if (lean_obj_tag(v___x_2454_) == 0)
{
lean_object* v_a_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2466_; 
v_a_2455_ = lean_ctor_get(v___x_2454_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2454_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2457_ = v___x_2454_;
v_isShared_2458_ = v_isSharedCheck_2466_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_a_2455_);
lean_dec(v___x_2454_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2466_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
size_t v___x_2459_; size_t v___x_2460_; uint8_t v___x_2461_; 
v___x_2459_ = lean_ptr_addr(v_struct_2453_);
v___x_2460_ = lean_ptr_addr(v_a_2455_);
v___x_2461_ = lean_usize_dec_eq(v___x_2459_, v___x_2460_);
if (v___x_2461_ == 0)
{
lean_object* v___x_2462_; 
lean_inc(v_idx_2452_);
lean_inc(v_typeName_2451_);
lean_del_object(v___x_2457_);
lean_dec_ref_known(v_e_2381_, 3);
v___x_2462_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit_spec__3___redArg(v_typeName_2451_, v_idx_2452_, v_a_2455_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2462_;
}
else
{
lean_object* v___x_2464_; 
lean_dec(v_a_2455_);
if (v_isShared_2458_ == 0)
{
lean_ctor_set(v___x_2457_, 0, v_e_2381_);
v___x_2464_ = v___x_2457_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_e_2381_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2381_, 3);
return v___x_2454_;
}
}
default: 
{
lean_object* v___x_2467_; 
v___x_2467_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg(v_xs_2380_, v_e_2381_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2467_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(lean_object* v_xs_2468_, lean_object* v_e_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_){
_start:
{
switch(lean_obj_tag(v_e_2469_))
{
case 0:
{
lean_object* v_deBruijnIndex_2478_; lean_object* v_size_2479_; uint8_t v___x_2480_; 
v_deBruijnIndex_2478_ = lean_ctor_get(v_e_2469_, 0);
lean_inc(v_deBruijnIndex_2478_);
lean_dec_ref_known(v_e_2469_, 1);
v_size_2479_ = lean_ctor_get(v_xs_2468_, 2);
v___x_2480_ = lean_nat_dec_lt(v_deBruijnIndex_2478_, v_size_2479_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
lean_dec(v_deBruijnIndex_2478_);
lean_dec_ref(v_xs_2468_);
v___x_2481_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__1);
v___x_2482_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg(v___x_2481_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_);
return v___x_2482_;
}
else
{
lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2483_ = l_Lean_instInhabitedExpr;
v___x_2484_ = lean_nat_sub(v_size_2479_, v_deBruijnIndex_2478_);
lean_dec(v_deBruijnIndex_2478_);
v___x_2485_ = lean_unsigned_to_nat(1u);
v___x_2486_ = lean_nat_sub(v___x_2484_, v___x_2485_);
lean_dec(v___x_2484_);
v___x_2487_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2483_, v_xs_2468_, v___x_2486_);
lean_dec(v___x_2486_);
lean_dec_ref(v_xs_2468_);
v___x_2488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2487_);
return v___x_2488_;
}
}
case 1:
{
lean_object* v___x_2489_; 
lean_dec_ref(v_xs_2468_);
v___x_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2489_, 0, v_e_2469_);
return v___x_2489_;
}
case 2:
{
lean_object* v___x_2490_; 
lean_dec_ref(v_xs_2468_);
v___x_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2490_, 0, v_e_2469_);
return v___x_2490_;
}
case 3:
{
lean_object* v___x_2491_; 
lean_dec_ref(v_xs_2468_);
v___x_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2491_, 0, v_e_2469_);
return v___x_2491_;
}
case 4:
{
lean_object* v___x_2492_; 
lean_dec_ref(v_xs_2468_);
v___x_2492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2492_, 0, v_e_2469_);
return v___x_2492_;
}
case 9:
{
lean_object* v___x_2493_; 
lean_dec_ref(v_xs_2468_);
v___x_2493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2493_, 0, v_e_2469_);
return v___x_2493_;
}
default: 
{
uint8_t v___x_2494_; 
v___x_2494_ = l_Lean_Expr_hasLooseBVars(v_e_2469_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; 
lean_dec_ref(v_xs_2468_);
lean_inc_ref(v_e_2469_);
v___x_2495_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet(v_e_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2536_; 
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
v_isSharedCheck_2536_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2536_ == 0)
{
v___x_2498_ = v___x_2495_;
v_isShared_2499_ = v_isSharedCheck_2536_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v___x_2495_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2536_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
uint8_t v___x_2500_; 
v___x_2500_ = lean_unbox(v_a_2496_);
lean_dec(v_a_2496_);
if (v___x_2500_ == 0)
{
lean_object* v___x_2502_; 
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 0, v_e_2469_);
v___x_2502_ = v___x_2498_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v_e_2469_);
v___x_2502_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
return v___x_2502_;
}
}
else
{
lean_object* v___x_2504_; lean_object* v_cacheClosed_2505_; lean_object* v___x_2506_; 
v___x_2504_ = lean_st_ref_get(v_a_2470_);
v_cacheClosed_2505_ = lean_ctor_get(v___x_2504_, 1);
lean_inc_ref(v_cacheClosed_2505_);
lean_dec(v___x_2504_);
v___x_2506_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__0___redArg(v_cacheClosed_2505_, v_e_2469_);
lean_dec_ref(v_cacheClosed_2505_);
if (lean_obj_tag(v___x_2506_) == 1)
{
lean_object* v_val_2507_; lean_object* v___x_2509_; 
lean_dec_ref(v_e_2469_);
v_val_2507_ = lean_ctor_get(v___x_2506_, 0);
lean_inc(v_val_2507_);
lean_dec_ref_known(v___x_2506_, 1);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 0, v_val_2507_);
v___x_2509_ = v___x_2498_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2510_; 
v_reuseFailAlloc_2510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2510_, 0, v_val_2507_);
v___x_2509_ = v_reuseFailAlloc_2510_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
return v___x_2509_;
}
}
else
{
lean_object* v___x_2511_; lean_object* v___x_2512_; 
lean_dec(v___x_2506_);
lean_del_object(v___x_2498_);
v___x_2511_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3);
lean_inc_ref(v_e_2469_);
v___x_2512_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit(v___x_2511_, v_e_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_object* v_a_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2535_; 
v_a_2513_ = lean_ctor_get(v___x_2512_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2512_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2515_ = v___x_2512_;
v_isShared_2516_ = v_isSharedCheck_2535_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_a_2513_);
lean_dec(v___x_2512_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2535_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2517_; lean_object* v_cache_2518_; lean_object* v_cacheClosed_2519_; lean_object* v_hasLetCache_2520_; lean_object* v_decls_2521_; lean_object* v_valueMap_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2534_; 
v___x_2517_ = lean_st_ref_take(v_a_2470_);
v_cache_2518_ = lean_ctor_get(v___x_2517_, 0);
v_cacheClosed_2519_ = lean_ctor_get(v___x_2517_, 1);
v_hasLetCache_2520_ = lean_ctor_get(v___x_2517_, 2);
v_decls_2521_ = lean_ctor_get(v___x_2517_, 3);
v_valueMap_2522_ = lean_ctor_get(v___x_2517_, 4);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2524_ = v___x_2517_;
v_isShared_2525_ = v_isSharedCheck_2534_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_valueMap_2522_);
lean_inc(v_decls_2521_);
lean_inc(v_hasLetCache_2520_);
lean_inc(v_cacheClosed_2519_);
lean_inc(v_cache_2518_);
lean_dec(v___x_2517_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2534_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2526_; lean_object* v___x_2528_; 
lean_inc(v_a_2513_);
v___x_2526_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_hasLiftableLet_spec__1___redArg(v_cacheClosed_2519_, v_e_2469_, v_a_2513_);
if (v_isShared_2525_ == 0)
{
lean_ctor_set(v___x_2524_, 1, v___x_2526_);
v___x_2528_ = v___x_2524_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_cache_2518_);
lean_ctor_set(v_reuseFailAlloc_2533_, 1, v___x_2526_);
lean_ctor_set(v_reuseFailAlloc_2533_, 2, v_hasLetCache_2520_);
lean_ctor_set(v_reuseFailAlloc_2533_, 3, v_decls_2521_);
lean_ctor_set(v_reuseFailAlloc_2533_, 4, v_valueMap_2522_);
v___x_2528_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
lean_object* v___x_2529_; lean_object* v___x_2531_; 
v___x_2529_ = lean_st_ref_put(v_a_2470_, v___x_2528_);
if (v_isShared_2516_ == 0)
{
v___x_2531_ = v___x_2515_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2513_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_2469_);
return v___x_2512_;
}
}
}
}
}
else
{
lean_object* v_a_2537_; lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2544_; 
lean_dec_ref(v_e_2469_);
v_a_2537_ = lean_ctor_get(v___x_2495_, 0);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2539_ = v___x_2495_;
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
else
{
lean_inc(v_a_2537_);
lean_dec(v___x_2495_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v___x_2542_; 
if (v_isShared_2540_ == 0)
{
v___x_2542_ = v___x_2539_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v_a_2537_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
}
else
{
lean_object* v_key_2545_; lean_object* v___x_2546_; lean_object* v_cache_2547_; lean_object* v___x_2548_; 
lean_inc_ref(v_e_2469_);
lean_inc_ref(v_xs_2468_);
v_key_2545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_2545_, 0, v_xs_2468_);
lean_ctor_set(v_key_2545_, 1, v_e_2469_);
v___x_2546_ = lean_st_ref_get(v_a_2470_);
v_cache_2547_ = lean_ctor_get(v___x_2546_, 0);
lean_inc_ref(v_cache_2547_);
lean_dec(v___x_2546_);
v___x_2548_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg(v_cache_2547_, v_key_2545_);
lean_dec_ref(v_cache_2547_);
if (lean_obj_tag(v___x_2548_) == 1)
{
lean_object* v_val_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2556_; 
lean_dec_ref_known(v_key_2545_, 2);
lean_dec_ref(v_e_2469_);
lean_dec_ref(v_xs_2468_);
v_val_2549_ = lean_ctor_get(v___x_2548_, 0);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2548_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2551_ = v___x_2548_;
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_val_2549_);
lean_dec(v___x_2548_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2554_; 
if (v_isShared_2552_ == 0)
{
lean_ctor_set_tag(v___x_2551_, 0);
v___x_2554_ = v___x_2551_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_val_2549_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
return v___x_2554_;
}
}
}
else
{
lean_object* v___x_2557_; 
lean_dec(v___x_2548_);
v___x_2557_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit(v_xs_2468_, v_e_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2580_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2580_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2560_ = v___x_2557_;
v_isShared_2561_ = v_isSharedCheck_2580_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2557_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2580_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2562_; lean_object* v_cache_2563_; lean_object* v_cacheClosed_2564_; lean_object* v_hasLetCache_2565_; lean_object* v_decls_2566_; lean_object* v_valueMap_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2579_; 
v___x_2562_ = lean_st_ref_take(v_a_2470_);
v_cache_2563_ = lean_ctor_get(v___x_2562_, 0);
v_cacheClosed_2564_ = lean_ctor_get(v___x_2562_, 1);
v_hasLetCache_2565_ = lean_ctor_get(v___x_2562_, 2);
v_decls_2566_ = lean_ctor_get(v___x_2562_, 3);
v_valueMap_2567_ = lean_ctor_get(v___x_2562_, 4);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2569_ = v___x_2562_;
v_isShared_2570_ = v_isSharedCheck_2579_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_valueMap_2567_);
lean_inc(v_decls_2566_);
lean_inc(v_hasLetCache_2565_);
lean_inc(v_cacheClosed_2564_);
lean_inc(v_cache_2563_);
lean_dec(v___x_2562_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2579_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2571_; lean_object* v___x_2573_; 
lean_inc(v_a_2558_);
v___x_2571_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7___redArg(v_cache_2563_, v_key_2545_, v_a_2558_);
if (v_isShared_2570_ == 0)
{
lean_ctor_set(v___x_2569_, 0, v___x_2571_);
v___x_2573_ = v___x_2569_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v___x_2571_);
lean_ctor_set(v_reuseFailAlloc_2578_, 1, v_cacheClosed_2564_);
lean_ctor_set(v_reuseFailAlloc_2578_, 2, v_hasLetCache_2565_);
lean_ctor_set(v_reuseFailAlloc_2578_, 3, v_decls_2566_);
lean_ctor_set(v_reuseFailAlloc_2578_, 4, v_valueMap_2567_);
v___x_2573_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
lean_object* v___x_2574_; lean_object* v___x_2576_; 
v___x_2574_ = lean_st_ref_put(v_a_2470_, v___x_2573_);
if (v_isShared_2561_ == 0)
{
v___x_2576_ = v___x_2560_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2558_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_2545_, 2);
return v___x_2557_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___boxed(lean_object* v_xs_2581_, lean_object* v_e_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_, lean_object* v_a_2587_, lean_object* v_a_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v_xs_2581_, v_e_2582_, v_a_2583_, v_a_2584_, v_a_2585_, v_a_2586_, v_a_2587_, v_a_2588_, v_a_2589_);
lean_dec(v_a_2589_);
lean_dec_ref(v_a_2588_);
lean_dec(v_a_2587_);
lean_dec_ref(v_a_2586_);
lean_dec(v_a_2585_);
lean_dec_ref(v_a_2584_);
lean_dec(v_a_2583_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___boxed(lean_object* v_xs_2592_, lean_object* v_e_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_){
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit(v_xs_2592_, v_e_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_);
lean_dec(v_a_2600_);
lean_dec_ref(v_a_2599_);
lean_dec(v_a_2598_);
lean_dec_ref(v_a_2597_);
lean_dec(v_a_2596_);
lean_dec_ref(v_a_2595_);
lean_dec(v_a_2594_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5(lean_object* v_00_u03b1_2603_, lean_object* v_msg_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
lean_object* v___x_2613_; 
v___x_2613_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___redArg(v_msg_2604_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_);
return v___x_2613_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5___boxed(lean_object* v_00_u03b1_2614_, lean_object* v_msg_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_){
_start:
{
lean_object* v_res_2624_; 
v_res_2624_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5(v_00_u03b1_2614_, v_msg_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
lean_dec(v___y_2622_);
lean_dec_ref(v___y_2621_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
lean_dec(v___y_2616_);
return v_res_2624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6(lean_object* v_00_u03b2_2625_, lean_object* v_m_2626_, lean_object* v_a_2627_){
_start:
{
lean_object* v___x_2628_; 
v___x_2628_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___redArg(v_m_2626_, v_a_2627_);
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6___boxed(lean_object* v_00_u03b2_2629_, lean_object* v_m_2630_, lean_object* v_a_2631_){
_start:
{
lean_object* v_res_2632_; 
v_res_2632_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6(v_00_u03b2_2629_, v_m_2630_, v_a_2631_);
lean_dec_ref(v_a_2631_);
lean_dec_ref(v_m_2630_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7(lean_object* v_00_u03b2_2633_, lean_object* v_m_2634_, lean_object* v_a_2635_, lean_object* v_b_2636_){
_start:
{
lean_object* v___x_2637_; 
v___x_2637_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7___redArg(v_m_2634_, v_a_2635_, v_b_2636_);
return v___x_2637_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7(lean_object* v_00_u03b2_2638_, lean_object* v_a_2639_, lean_object* v_x_2640_){
_start:
{
lean_object* v___x_2641_; 
v___x_2641_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___redArg(v_a_2639_, v_x_2640_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7___boxed(lean_object* v_00_u03b2_2642_, lean_object* v_a_2643_, lean_object* v_x_2644_){
_start:
{
lean_object* v_res_2645_; 
v_res_2645_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__6_spec__7(v_00_u03b2_2642_, v_a_2643_, v_x_2644_);
lean_dec(v_x_2644_);
lean_dec_ref(v_a_2643_);
return v_res_2645_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9(lean_object* v_00_u03b2_2646_, lean_object* v_a_2647_, lean_object* v_x_2648_){
_start:
{
uint8_t v___x_2649_; 
v___x_2649_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___redArg(v_a_2647_, v_x_2648_);
return v___x_2649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9___boxed(lean_object* v_00_u03b2_2650_, lean_object* v_a_2651_, lean_object* v_x_2652_){
_start:
{
uint8_t v_res_2653_; lean_object* v_r_2654_; 
v_res_2653_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__9(v_00_u03b2_2650_, v_a_2651_, v_x_2652_);
lean_dec(v_x_2652_);
lean_dec_ref(v_a_2651_);
v_r_2654_ = lean_box(v_res_2653_);
return v_r_2654_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10(lean_object* v_00_u03b2_2655_, lean_object* v_data_2656_){
_start:
{
lean_object* v___x_2657_; 
v___x_2657_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10___redArg(v_data_2656_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11(lean_object* v_00_u03b2_2658_, lean_object* v_a_2659_, lean_object* v_b_2660_, lean_object* v_x_2661_){
_start:
{
lean_object* v___x_2662_; 
v___x_2662_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__11___redArg(v_a_2659_, v_b_2660_, v_x_2661_);
return v___x_2662_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11(lean_object* v_00_u03b2_2663_, lean_object* v_i_2664_, lean_object* v_source_2665_, lean_object* v_target_2666_){
_start:
{
lean_object* v___x_2667_; 
v___x_2667_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11___redArg(v_i_2664_, v_source_2665_, v_target_2666_);
return v___x_2667_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12(lean_object* v_00_u03b2_2668_, lean_object* v_x_2669_, lean_object* v_x_2670_){
_start:
{
lean_object* v___x_2671_; 
v___x_2671_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__7_spec__10_spec__11_spec__12___redArg(v_x_2669_, v_x_2670_);
return v___x_2671_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2672_; 
v___x_2672_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2672_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(lean_object* v_msg_2673_, uint8_t v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
lean_object* v___x_2677_; lean_object* v___f_2678_; lean_object* v___f_2679_; lean_object* v___f_2680_; lean_object* v___x_10671__overap_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
v___x_2677_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___closed__0);
v___f_2678_ = lean_alloc_closure((void*)(l_EStateM_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2678_, 0, v___x_2677_);
v___f_2679_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2679_, 0, v___f_2678_);
v___f_2680_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2680_, 0, v___f_2679_);
v___x_10671__overap_2681_ = lean_panic_fn_borrowed(v___f_2680_, v_msg_2673_);
lean_dec_ref(v___f_2680_);
v___x_2682_ = lean_box(v___y_2674_);
lean_inc_ref(v___y_2675_);
v___x_2683_ = lean_apply_3(v___x_10671__overap_2681_, v___x_2682_, v___y_2675_, v___y_2676_);
return v___x_2683_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3___boxed(lean_object* v_msg_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_){
_start:
{
uint8_t v___y_15640__boxed_2688_; lean_object* v_res_2689_; 
v___y_15640__boxed_2688_ = lean_unbox(v___y_2685_);
v_res_2689_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(v_msg_2684_, v___y_15640__boxed_2688_, v___y_2686_, v___y_2687_);
lean_dec_ref(v___y_2686_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(lean_object* v_idx_2690_, lean_object* v___y_2691_){
_start:
{
lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2692_ = l_Lean_Expr_bvar___override(v_idx_2690_);
v___x_2693_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_2692_, v___y_2691_);
return v___x_2693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4(lean_object* v_idx_2694_, uint8_t v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_){
_start:
{
lean_object* v___x_2698_; 
v___x_2698_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(v_idx_2694_, v___y_2697_);
return v___x_2698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___boxed(lean_object* v_idx_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
uint8_t v___y_15668__boxed_2703_; lean_object* v_res_2704_; 
v___y_15668__boxed_2703_ = lean_unbox(v___y_2700_);
v_res_2704_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4(v_idx_2699_, v___y_15668__boxed_2703_, v___y_2701_, v___y_2702_);
lean_dec_ref(v___y_2701_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(lean_object* v_x_2705_, lean_object* v_t_2706_, lean_object* v_v_2707_, lean_object* v_b_2708_, uint8_t v_nondep_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_){
_start:
{
lean_object* v___y_2718_; lean_object* v___x_2721_; uint8_t v_debug_2722_; 
v___x_2721_ = lean_st_ref_get(v___y_2711_);
v_debug_2722_ = lean_ctor_get_uint8(v___x_2721_, sizeof(void*)*11);
lean_dec(v___x_2721_);
if (v_debug_2722_ == 0)
{
v___y_2718_ = v___y_2711_;
goto v___jp_2717_;
}
else
{
lean_object* v___x_2723_; 
v___x_2723_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_2706_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_);
if (lean_obj_tag(v___x_2723_) == 0)
{
lean_object* v___x_2724_; 
lean_dec_ref_known(v___x_2723_, 1);
v___x_2724_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_v_2707_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_);
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v___x_2725_; 
lean_dec_ref_known(v___x_2724_, 1);
v___x_2725_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_2708_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_);
if (lean_obj_tag(v___x_2725_) == 0)
{
lean_dec_ref_known(v___x_2725_, 1);
v___y_2718_ = v___y_2711_;
goto v___jp_2717_;
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec_ref(v_b_2708_);
lean_dec_ref(v_v_2707_);
lean_dec_ref(v_t_2706_);
lean_dec(v_x_2705_);
v_a_2726_ = lean_ctor_get(v___x_2725_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2725_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2725_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2725_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec_ref(v_b_2708_);
lean_dec_ref(v_v_2707_);
lean_dec_ref(v_t_2706_);
lean_dec(v_x_2705_);
v_a_2734_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2724_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2724_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
else
{
lean_object* v_a_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2749_; 
lean_dec_ref(v_b_2708_);
lean_dec_ref(v_v_2707_);
lean_dec_ref(v_t_2706_);
lean_dec(v_x_2705_);
v_a_2742_ = lean_ctor_get(v___x_2723_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2723_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2744_ = v___x_2723_;
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_a_2742_);
lean_dec(v___x_2723_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2742_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
v___jp_2717_:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2719_ = l_Lean_Expr_letE___override(v_x_2705_, v_t_2706_, v_v_2707_, v_b_2708_, v_nondep_2709_);
v___x_2720_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2719_, v___y_2718_);
return v___x_2720_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg___boxed(lean_object* v_x_2750_, lean_object* v_t_2751_, lean_object* v_v_2752_, lean_object* v_b_2753_, lean_object* v_nondep_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
uint8_t v_nondep_boxed_2762_; lean_object* v_res_2763_; 
v_nondep_boxed_2762_ = lean_unbox(v_nondep_2754_);
v_res_2763_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(v_x_2750_, v_t_2751_, v_v_2752_, v_b_2753_, v_nondep_boxed_2762_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
lean_dec(v___y_2758_);
lean_dec_ref(v___y_2757_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6(lean_object* v_x_2764_, lean_object* v_t_2765_, lean_object* v_v_2766_, lean_object* v_b_2767_, uint8_t v_nondep_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_){
_start:
{
lean_object* v___x_2777_; 
v___x_2777_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(v_x_2764_, v_t_2765_, v_v_2766_, v_b_2767_, v_nondep_2768_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___boxed(lean_object* v_x_2778_, lean_object* v_t_2779_, lean_object* v_v_2780_, lean_object* v_b_2781_, lean_object* v_nondep_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_){
_start:
{
uint8_t v_nondep_boxed_2791_; lean_object* v_res_2792_; 
v_nondep_boxed_2791_ = lean_unbox(v_nondep_2782_);
v_res_2792_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6(v_x_2778_, v_t_2779_, v_v_2780_, v_b_2781_, v_nondep_boxed_2791_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
lean_dec(v___y_2789_);
lean_dec_ref(v___y_2788_);
lean_dec(v___y_2787_);
lean_dec_ref(v___y_2786_);
lean_dec(v___y_2785_);
lean_dec_ref(v___y_2784_);
lean_dec(v___y_2783_);
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg(lean_object* v_a_2793_, lean_object* v_x_2794_){
_start:
{
if (lean_obj_tag(v_x_2794_) == 0)
{
lean_object* v___x_2795_; 
v___x_2795_ = lean_box(0);
return v___x_2795_;
}
else
{
lean_object* v_key_2796_; lean_object* v_value_2797_; lean_object* v_tail_2798_; uint8_t v___x_2799_; 
v_key_2796_ = lean_ctor_get(v_x_2794_, 0);
v_value_2797_ = lean_ctor_get(v_x_2794_, 1);
v_tail_2798_ = lean_ctor_get(v_x_2794_, 2);
v___x_2799_ = l_Lean_instBEqFVarId_beq(v_key_2796_, v_a_2793_);
if (v___x_2799_ == 0)
{
v_x_2794_ = v_tail_2798_;
goto _start;
}
else
{
lean_object* v___x_2801_; 
lean_inc(v_value_2797_);
v___x_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2801_, 0, v_value_2797_);
return v___x_2801_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg___boxed(lean_object* v_a_2802_, lean_object* v_x_2803_){
_start:
{
lean_object* v_res_2804_; 
v_res_2804_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg(v_a_2802_, v_x_2803_);
lean_dec(v_x_2803_);
lean_dec(v_a_2802_);
return v_res_2804_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(lean_object* v_m_2805_, lean_object* v_a_2806_){
_start:
{
lean_object* v_buckets_2807_; lean_object* v___x_2808_; uint64_t v___x_2809_; uint64_t v___x_2810_; uint64_t v___x_2811_; uint64_t v_fold_2812_; uint64_t v___x_2813_; uint64_t v___x_2814_; uint64_t v___x_2815_; size_t v___x_2816_; size_t v___x_2817_; size_t v___x_2818_; size_t v___x_2819_; size_t v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; 
v_buckets_2807_ = lean_ctor_get(v_m_2805_, 1);
v___x_2808_ = lean_array_get_size(v_buckets_2807_);
v___x_2809_ = l_Lean_instHashableFVarId_hash(v_a_2806_);
v___x_2810_ = 32ULL;
v___x_2811_ = lean_uint64_shift_right(v___x_2809_, v___x_2810_);
v_fold_2812_ = lean_uint64_xor(v___x_2809_, v___x_2811_);
v___x_2813_ = 16ULL;
v___x_2814_ = lean_uint64_shift_right(v_fold_2812_, v___x_2813_);
v___x_2815_ = lean_uint64_xor(v_fold_2812_, v___x_2814_);
v___x_2816_ = lean_uint64_to_usize(v___x_2815_);
v___x_2817_ = lean_usize_of_nat(v___x_2808_);
v___x_2818_ = ((size_t)1ULL);
v___x_2819_ = lean_usize_sub(v___x_2817_, v___x_2818_);
v___x_2820_ = lean_usize_land(v___x_2816_, v___x_2819_);
v___x_2821_ = lean_array_uget_borrowed(v_buckets_2807_, v___x_2820_);
v___x_2822_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg(v_a_2806_, v___x_2821_);
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg___boxed(lean_object* v_m_2823_, lean_object* v_a_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(v_m_2823_, v_a_2824_);
lean_dec(v_a_2824_);
lean_dec_ref(v_m_2823_);
return v_res_2825_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2(void){
_start:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v___x_2828_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__1));
v___x_2829_ = lean_unsigned_to_nat(10u);
v___x_2830_ = lean_unsigned_to_nat(236u);
v___x_2831_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__0));
v___x_2832_ = ((lean_object*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_visit___closed__0));
v___x_2833_ = l_mkPanicMessageWithDecl(v___x_2832_, v___x_2831_, v___x_2830_, v___x_2829_, v___x_2828_);
return v___x_2833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(lean_object* v___x_2834_, lean_object* v_i_2835_, lean_object* v_e_2836_, lean_object* v_offset_2837_, lean_object* v_a_2838_, uint8_t v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_){
_start:
{
switch(lean_obj_tag(v_e_2836_))
{
case 5:
{
lean_object* v_fn_2842_; lean_object* v_arg_2843_; lean_object* v___x_2844_; 
v_fn_2842_ = lean_ctor_get(v_e_2836_, 0);
v_arg_2843_ = lean_ctor_get(v_e_2836_, 1);
lean_inc(v_offset_2837_);
lean_inc_ref(v_fn_2842_);
v___x_2844_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2834_, v_i_2835_, v_fn_2842_, v_offset_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_);
if (lean_obj_tag(v___x_2844_) == 0)
{
lean_object* v_a_2845_; lean_object* v_a_2846_; lean_object* v_fst_2847_; lean_object* v_snd_2848_; lean_object* v___x_2849_; 
v_a_2845_ = lean_ctor_get(v___x_2844_, 0);
lean_inc(v_a_2845_);
v_a_2846_ = lean_ctor_get(v___x_2844_, 1);
lean_inc(v_a_2846_);
lean_dec_ref_known(v___x_2844_, 2);
v_fst_2847_ = lean_ctor_get(v_a_2845_, 0);
lean_inc(v_fst_2847_);
v_snd_2848_ = lean_ctor_get(v_a_2845_, 1);
lean_inc(v_snd_2848_);
lean_dec(v_a_2845_);
lean_inc_ref(v_arg_2843_);
v___x_2849_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2834_, v_i_2835_, v_arg_2843_, v_offset_2837_, v_snd_2848_, v_a_2839_, v_a_2840_, v_a_2846_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2875_; 
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
v_a_2851_ = lean_ctor_get(v___x_2849_, 1);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2853_ = v___x_2849_;
v_isShared_2854_ = v_isSharedCheck_2875_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_inc(v_a_2850_);
lean_dec(v___x_2849_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2875_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v_fst_2855_; lean_object* v_snd_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2874_; 
v_fst_2855_ = lean_ctor_get(v_a_2850_, 0);
v_snd_2856_ = lean_ctor_get(v_a_2850_, 1);
v_isSharedCheck_2874_ = !lean_is_exclusive(v_a_2850_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2858_ = v_a_2850_;
v_isShared_2859_ = v_isSharedCheck_2874_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_snd_2856_);
lean_inc(v_fst_2855_);
lean_dec(v_a_2850_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2874_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
size_t v___x_2860_; size_t v___x_2861_; uint8_t v___x_2862_; 
v___x_2860_ = lean_ptr_addr(v_fn_2842_);
v___x_2861_ = lean_ptr_addr(v_fst_2847_);
v___x_2862_ = lean_usize_dec_eq(v___x_2860_, v___x_2861_);
if (v___x_2862_ == 0)
{
lean_object* v___x_2863_; 
lean_del_object(v___x_2858_);
lean_del_object(v___x_2853_);
lean_dec_ref_known(v_e_2836_, 2);
v___x_2863_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(v_fst_2847_, v_fst_2855_, v_snd_2856_, v_a_2839_, v_a_2840_, v_a_2851_);
return v___x_2863_;
}
else
{
size_t v___x_2864_; size_t v___x_2865_; uint8_t v___x_2866_; 
v___x_2864_ = lean_ptr_addr(v_arg_2843_);
v___x_2865_ = lean_ptr_addr(v_fst_2855_);
v___x_2866_ = lean_usize_dec_eq(v___x_2864_, v___x_2865_);
if (v___x_2866_ == 0)
{
lean_object* v___x_2867_; 
lean_del_object(v___x_2858_);
lean_del_object(v___x_2853_);
lean_dec_ref_known(v_e_2836_, 2);
v___x_2867_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__1(v_fst_2847_, v_fst_2855_, v_snd_2856_, v_a_2839_, v_a_2840_, v_a_2851_);
return v___x_2867_;
}
else
{
lean_object* v___x_2869_; 
lean_dec(v_fst_2855_);
lean_dec(v_fst_2847_);
if (v_isShared_2859_ == 0)
{
lean_ctor_set(v___x_2858_, 0, v_e_2836_);
v___x_2869_ = v___x_2858_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_e_2836_);
lean_ctor_set(v_reuseFailAlloc_2873_, 1, v_snd_2856_);
v___x_2869_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
lean_object* v___x_2871_; 
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 0, v___x_2869_);
v___x_2871_ = v___x_2853_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v___x_2869_);
lean_ctor_set(v_reuseFailAlloc_2872_, 1, v_a_2851_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_2847_);
lean_dec_ref_known(v_e_2836_, 2);
return v___x_2849_;
}
}
else
{
lean_dec_ref_known(v_e_2836_, 2);
lean_dec(v_offset_2837_);
return v___x_2844_;
}
}
case 6:
{
lean_object* v_binderName_2876_; lean_object* v_binderType_2877_; lean_object* v_body_2878_; uint8_t v_binderInfo_2879_; lean_object* v___x_2880_; 
v_binderName_2876_ = lean_ctor_get(v_e_2836_, 0);
v_binderType_2877_ = lean_ctor_get(v_e_2836_, 1);
v_body_2878_ = lean_ctor_get(v_e_2836_, 2);
v_binderInfo_2879_ = lean_ctor_get_uint8(v_e_2836_, sizeof(void*)*3 + 8);
lean_inc(v_offset_2837_);
lean_inc_ref(v_binderType_2877_);
v___x_2880_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2834_, v_i_2835_, v_binderType_2877_, v_offset_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v_a_2881_; lean_object* v_a_2882_; lean_object* v_fst_2883_; lean_object* v_snd_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v_a_2881_ = lean_ctor_get(v___x_2880_, 0);
lean_inc(v_a_2881_);
v_a_2882_ = lean_ctor_get(v___x_2880_, 1);
lean_inc(v_a_2882_);
lean_dec_ref_known(v___x_2880_, 2);
v_fst_2883_ = lean_ctor_get(v_a_2881_, 0);
lean_inc(v_fst_2883_);
v_snd_2884_ = lean_ctor_get(v_a_2881_, 1);
lean_inc(v_snd_2884_);
lean_dec(v_a_2881_);
v___x_2885_ = lean_unsigned_to_nat(1u);
v___x_2886_ = lean_nat_add(v_offset_2837_, v___x_2885_);
lean_dec(v_offset_2837_);
lean_inc_ref(v_body_2878_);
v___x_2887_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2834_, v_i_2835_, v_body_2878_, v___x_2886_, v_snd_2884_, v_a_2839_, v_a_2840_, v_a_2882_);
if (lean_obj_tag(v___x_2887_) == 0)
{
lean_object* v_a_2888_; lean_object* v_a_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2913_; 
v_a_2888_ = lean_ctor_get(v___x_2887_, 0);
v_a_2889_ = lean_ctor_get(v___x_2887_, 1);
v_isSharedCheck_2913_ = !lean_is_exclusive(v___x_2887_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2891_ = v___x_2887_;
v_isShared_2892_ = v_isSharedCheck_2913_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_a_2889_);
lean_inc(v_a_2888_);
lean_dec(v___x_2887_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2913_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v_fst_2893_; lean_object* v_snd_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2912_; 
v_fst_2893_ = lean_ctor_get(v_a_2888_, 0);
v_snd_2894_ = lean_ctor_get(v_a_2888_, 1);
v_isSharedCheck_2912_ = !lean_is_exclusive(v_a_2888_);
if (v_isSharedCheck_2912_ == 0)
{
v___x_2896_ = v_a_2888_;
v_isShared_2897_ = v_isSharedCheck_2912_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_snd_2894_);
lean_inc(v_fst_2893_);
lean_dec(v_a_2888_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2912_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
size_t v___x_2898_; size_t v___x_2899_; uint8_t v___x_2900_; 
v___x_2898_ = lean_ptr_addr(v_binderType_2877_);
v___x_2899_ = lean_ptr_addr(v_fst_2883_);
v___x_2900_ = lean_usize_dec_eq(v___x_2898_, v___x_2899_);
if (v___x_2900_ == 0)
{
lean_object* v___x_2901_; 
lean_inc(v_binderName_2876_);
lean_del_object(v___x_2896_);
lean_del_object(v___x_2891_);
lean_dec_ref_known(v_e_2836_, 3);
v___x_2901_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(v_binderName_2876_, v_binderInfo_2879_, v_fst_2883_, v_fst_2893_, v_snd_2894_, v_a_2839_, v_a_2840_, v_a_2889_);
return v___x_2901_;
}
else
{
size_t v___x_2902_; size_t v___x_2903_; uint8_t v___x_2904_; 
v___x_2902_ = lean_ptr_addr(v_body_2878_);
v___x_2903_ = lean_ptr_addr(v_fst_2893_);
v___x_2904_ = lean_usize_dec_eq(v___x_2902_, v___x_2903_);
if (v___x_2904_ == 0)
{
lean_object* v___x_2905_; 
lean_inc(v_binderName_2876_);
lean_del_object(v___x_2896_);
lean_del_object(v___x_2891_);
lean_dec_ref_known(v_e_2836_, 3);
v___x_2905_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__2(v_binderName_2876_, v_binderInfo_2879_, v_fst_2883_, v_fst_2893_, v_snd_2894_, v_a_2839_, v_a_2840_, v_a_2889_);
return v___x_2905_;
}
else
{
lean_object* v___x_2907_; 
lean_dec(v_fst_2893_);
lean_dec(v_fst_2883_);
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 0, v_e_2836_);
v___x_2907_ = v___x_2896_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v_e_2836_);
lean_ctor_set(v_reuseFailAlloc_2911_, 1, v_snd_2894_);
v___x_2907_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
lean_object* v___x_2909_; 
if (v_isShared_2892_ == 0)
{
lean_ctor_set(v___x_2891_, 0, v___x_2907_);
v___x_2909_ = v___x_2891_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v___x_2907_);
lean_ctor_set(v_reuseFailAlloc_2910_, 1, v_a_2889_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_2883_);
lean_dec_ref_known(v_e_2836_, 3);
return v___x_2887_;
}
}
else
{
lean_dec_ref_known(v_e_2836_, 3);
lean_dec(v_offset_2837_);
return v___x_2880_;
}
}
case 7:
{
lean_object* v_binderName_2914_; lean_object* v_binderType_2915_; lean_object* v_body_2916_; uint8_t v_binderInfo_2917_; lean_object* v___x_2918_; 
v_binderName_2914_ = lean_ctor_get(v_e_2836_, 0);
v_binderType_2915_ = lean_ctor_get(v_e_2836_, 1);
v_body_2916_ = lean_ctor_get(v_e_2836_, 2);
v_binderInfo_2917_ = lean_ctor_get_uint8(v_e_2836_, sizeof(void*)*3 + 8);
lean_inc(v_offset_2837_);
lean_inc_ref(v_binderType_2915_);
v___x_2918_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2834_, v_i_2835_, v_binderType_2915_, v_offset_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v_a_2919_; lean_object* v_a_2920_; lean_object* v_fst_2921_; lean_object* v_snd_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; 
v_a_2919_ = lean_ctor_get(v___x_2918_, 0);
lean_inc(v_a_2919_);
v_a_2920_ = lean_ctor_get(v___x_2918_, 1);
lean_inc(v_a_2920_);
lean_dec_ref_known(v___x_2918_, 2);
v_fst_2921_ = lean_ctor_get(v_a_2919_, 0);
lean_inc(v_fst_2921_);
v_snd_2922_ = lean_ctor_get(v_a_2919_, 1);
lean_inc(v_snd_2922_);
lean_dec(v_a_2919_);
v___x_2923_ = lean_unsigned_to_nat(1u);
v___x_2924_ = lean_nat_add(v_offset_2837_, v___x_2923_);
lean_dec(v_offset_2837_);
lean_inc_ref(v_body_2916_);
v___x_2925_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2834_, v_i_2835_, v_body_2916_, v___x_2924_, v_snd_2922_, v_a_2839_, v_a_2840_, v_a_2920_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_object* v_a_2926_; lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2951_; 
v_a_2926_ = lean_ctor_get(v___x_2925_, 0);
v_a_2927_ = lean_ctor_get(v___x_2925_, 1);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2925_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2929_ = v___x_2925_;
v_isShared_2930_ = v_isSharedCheck_2951_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_inc(v_a_2926_);
lean_dec(v___x_2925_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2951_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v_fst_2931_; lean_object* v_snd_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2950_; 
v_fst_2931_ = lean_ctor_get(v_a_2926_, 0);
v_snd_2932_ = lean_ctor_get(v_a_2926_, 1);
v_isSharedCheck_2950_ = !lean_is_exclusive(v_a_2926_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2934_ = v_a_2926_;
v_isShared_2935_ = v_isSharedCheck_2950_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_snd_2932_);
lean_inc(v_fst_2931_);
lean_dec(v_a_2926_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2950_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
size_t v___x_2936_; size_t v___x_2937_; uint8_t v___x_2938_; 
v___x_2936_ = lean_ptr_addr(v_binderType_2915_);
v___x_2937_ = lean_ptr_addr(v_fst_2921_);
v___x_2938_ = lean_usize_dec_eq(v___x_2936_, v___x_2937_);
if (v___x_2938_ == 0)
{
lean_object* v___x_2939_; 
lean_inc(v_binderName_2914_);
lean_del_object(v___x_2934_);
lean_del_object(v___x_2929_);
lean_dec_ref_known(v_e_2836_, 3);
v___x_2939_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(v_binderName_2914_, v_binderInfo_2917_, v_fst_2921_, v_fst_2931_, v_snd_2932_, v_a_2839_, v_a_2840_, v_a_2927_);
return v___x_2939_;
}
else
{
size_t v___x_2940_; size_t v___x_2941_; uint8_t v___x_2942_; 
v___x_2940_ = lean_ptr_addr(v_body_2916_);
v___x_2941_ = lean_ptr_addr(v_fst_2931_);
v___x_2942_ = lean_usize_dec_eq(v___x_2940_, v___x_2941_);
if (v___x_2942_ == 0)
{
lean_object* v___x_2943_; 
lean_inc(v_binderName_2914_);
lean_del_object(v___x_2934_);
lean_del_object(v___x_2929_);
lean_dec_ref_known(v_e_2836_, 3);
v___x_2943_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__3(v_binderName_2914_, v_binderInfo_2917_, v_fst_2921_, v_fst_2931_, v_snd_2932_, v_a_2839_, v_a_2840_, v_a_2927_);
return v___x_2943_;
}
else
{
lean_object* v___x_2945_; 
lean_dec(v_fst_2931_);
lean_dec(v_fst_2921_);
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 0, v_e_2836_);
v___x_2945_ = v___x_2934_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_e_2836_);
lean_ctor_set(v_reuseFailAlloc_2949_, 1, v_snd_2932_);
v___x_2945_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
lean_object* v___x_2947_; 
if (v_isShared_2930_ == 0)
{
lean_ctor_set(v___x_2929_, 0, v___x_2945_);
v___x_2947_ = v___x_2929_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v___x_2945_);
lean_ctor_set(v_reuseFailAlloc_2948_, 1, v_a_2927_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
return v___x_2947_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_2921_);
lean_dec_ref_known(v_e_2836_, 3);
return v___x_2925_;
}
}
else
{
lean_dec_ref_known(v_e_2836_, 3);
lean_dec(v_offset_2837_);
return v___x_2918_;
}
}
case 8:
{
lean_object* v_declName_2952_; lean_object* v_type_2953_; lean_object* v_value_2954_; lean_object* v_body_2955_; uint8_t v_nondep_2956_; lean_object* v___x_2957_; 
v_declName_2952_ = lean_ctor_get(v_e_2836_, 0);
v_type_2953_ = lean_ctor_get(v_e_2836_, 1);
v_value_2954_ = lean_ctor_get(v_e_2836_, 2);
v_body_2955_ = lean_ctor_get(v_e_2836_, 3);
v_nondep_2956_ = lean_ctor_get_uint8(v_e_2836_, sizeof(void*)*4 + 8);
lean_inc(v_offset_2837_);
lean_inc_ref(v_type_2953_);
v___x_2957_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2834_, v_i_2835_, v_type_2953_, v_offset_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v_a_2958_; lean_object* v_a_2959_; lean_object* v_fst_2960_; lean_object* v_snd_2961_; lean_object* v___x_2962_; 
v_a_2958_ = lean_ctor_get(v___x_2957_, 0);
lean_inc(v_a_2958_);
v_a_2959_ = lean_ctor_get(v___x_2957_, 1);
lean_inc(v_a_2959_);
lean_dec_ref_known(v___x_2957_, 2);
v_fst_2960_ = lean_ctor_get(v_a_2958_, 0);
lean_inc(v_fst_2960_);
v_snd_2961_ = lean_ctor_get(v_a_2958_, 1);
lean_inc(v_snd_2961_);
lean_dec(v_a_2958_);
lean_inc(v_offset_2837_);
lean_inc_ref(v_value_2954_);
v___x_2962_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2834_, v_i_2835_, v_value_2954_, v_offset_2837_, v_snd_2961_, v_a_2839_, v_a_2840_, v_a_2959_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v_a_2964_; lean_object* v_fst_2965_; lean_object* v_snd_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2963_);
v_a_2964_ = lean_ctor_get(v___x_2962_, 1);
lean_inc(v_a_2964_);
lean_dec_ref_known(v___x_2962_, 2);
v_fst_2965_ = lean_ctor_get(v_a_2963_, 0);
lean_inc(v_fst_2965_);
v_snd_2966_ = lean_ctor_get(v_a_2963_, 1);
lean_inc(v_snd_2966_);
lean_dec(v_a_2963_);
v___x_2967_ = lean_unsigned_to_nat(1u);
v___x_2968_ = lean_nat_add(v_offset_2837_, v___x_2967_);
lean_dec(v_offset_2837_);
lean_inc_ref(v_body_2955_);
v___x_2969_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2834_, v_i_2835_, v_body_2955_, v___x_2968_, v_snd_2966_, v_a_2839_, v_a_2840_, v_a_2964_);
if (lean_obj_tag(v___x_2969_) == 0)
{
lean_object* v_a_2970_; lean_object* v_a_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2999_; 
v_a_2970_ = lean_ctor_get(v___x_2969_, 0);
v_a_2971_ = lean_ctor_get(v___x_2969_, 1);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2969_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2973_ = v___x_2969_;
v_isShared_2974_ = v_isSharedCheck_2999_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_a_2971_);
lean_inc(v_a_2970_);
lean_dec(v___x_2969_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2999_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v_fst_2975_; lean_object* v_snd_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2998_; 
v_fst_2975_ = lean_ctor_get(v_a_2970_, 0);
v_snd_2976_ = lean_ctor_get(v_a_2970_, 1);
v_isSharedCheck_2998_ = !lean_is_exclusive(v_a_2970_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2978_ = v_a_2970_;
v_isShared_2979_ = v_isSharedCheck_2998_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_snd_2976_);
lean_inc(v_fst_2975_);
lean_dec(v_a_2970_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2998_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
size_t v___x_2980_; size_t v___x_2981_; uint8_t v___x_2982_; 
v___x_2980_ = lean_ptr_addr(v_type_2953_);
v___x_2981_ = lean_ptr_addr(v_fst_2960_);
v___x_2982_ = lean_usize_dec_eq(v___x_2980_, v___x_2981_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; 
lean_inc(v_declName_2952_);
lean_del_object(v___x_2978_);
lean_del_object(v___x_2973_);
lean_dec_ref_known(v_e_2836_, 4);
v___x_2983_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_2952_, v_fst_2960_, v_fst_2965_, v_fst_2975_, v_nondep_2956_, v_snd_2976_, v_a_2839_, v_a_2840_, v_a_2971_);
return v___x_2983_;
}
else
{
size_t v___x_2984_; size_t v___x_2985_; uint8_t v___x_2986_; 
v___x_2984_ = lean_ptr_addr(v_value_2954_);
v___x_2985_ = lean_ptr_addr(v_fst_2965_);
v___x_2986_ = lean_usize_dec_eq(v___x_2984_, v___x_2985_);
if (v___x_2986_ == 0)
{
lean_object* v___x_2987_; 
lean_inc(v_declName_2952_);
lean_del_object(v___x_2978_);
lean_del_object(v___x_2973_);
lean_dec_ref_known(v_e_2836_, 4);
v___x_2987_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_2952_, v_fst_2960_, v_fst_2965_, v_fst_2975_, v_nondep_2956_, v_snd_2976_, v_a_2839_, v_a_2840_, v_a_2971_);
return v___x_2987_;
}
else
{
size_t v___x_2988_; size_t v___x_2989_; uint8_t v___x_2990_; 
v___x_2988_ = lean_ptr_addr(v_body_2955_);
v___x_2989_ = lean_ptr_addr(v_fst_2975_);
v___x_2990_ = lean_usize_dec_eq(v___x_2988_, v___x_2989_);
if (v___x_2990_ == 0)
{
lean_object* v___x_2991_; 
lean_inc(v_declName_2952_);
lean_del_object(v___x_2978_);
lean_del_object(v___x_2973_);
lean_dec_ref_known(v_e_2836_, 4);
v___x_2991_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__4(v_declName_2952_, v_fst_2960_, v_fst_2965_, v_fst_2975_, v_nondep_2956_, v_snd_2976_, v_a_2839_, v_a_2840_, v_a_2971_);
return v___x_2991_;
}
else
{
lean_object* v___x_2993_; 
lean_dec(v_fst_2975_);
lean_dec(v_fst_2965_);
lean_dec(v_fst_2960_);
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 0, v_e_2836_);
v___x_2993_ = v___x_2978_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_e_2836_);
lean_ctor_set(v_reuseFailAlloc_2997_, 1, v_snd_2976_);
v___x_2993_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
lean_object* v___x_2995_; 
if (v_isShared_2974_ == 0)
{
lean_ctor_set(v___x_2973_, 0, v___x_2993_);
v___x_2995_ = v___x_2973_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v___x_2993_);
lean_ctor_set(v_reuseFailAlloc_2996_, 1, v_a_2971_);
v___x_2995_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
return v___x_2995_;
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
lean_dec(v_fst_2965_);
lean_dec(v_fst_2960_);
lean_dec_ref_known(v_e_2836_, 4);
return v___x_2969_;
}
}
else
{
lean_dec(v_fst_2960_);
lean_dec_ref_known(v_e_2836_, 4);
lean_dec(v_offset_2837_);
return v___x_2962_;
}
}
else
{
lean_dec_ref_known(v_e_2836_, 4);
lean_dec(v_offset_2837_);
return v___x_2957_;
}
}
case 10:
{
lean_object* v_data_3000_; lean_object* v_expr_3001_; lean_object* v___x_3002_; 
v_data_3000_ = lean_ctor_get(v_e_2836_, 0);
v_expr_3001_ = lean_ctor_get(v_e_2836_, 1);
lean_inc_ref(v_expr_3001_);
v___x_3002_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2834_, v_i_2835_, v_expr_3001_, v_offset_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3024_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
v_a_3004_ = lean_ctor_get(v___x_3002_, 1);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3006_ = v___x_3002_;
v_isShared_3007_ = v_isSharedCheck_3024_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_inc(v_a_3003_);
lean_dec(v___x_3002_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3024_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v_fst_3008_; lean_object* v_snd_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3023_; 
v_fst_3008_ = lean_ctor_get(v_a_3003_, 0);
v_snd_3009_ = lean_ctor_get(v_a_3003_, 1);
v_isSharedCheck_3023_ = !lean_is_exclusive(v_a_3003_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3011_ = v_a_3003_;
v_isShared_3012_ = v_isSharedCheck_3023_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_snd_3009_);
lean_inc(v_fst_3008_);
lean_dec(v_a_3003_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3023_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
size_t v___x_3013_; size_t v___x_3014_; uint8_t v___x_3015_; 
v___x_3013_ = lean_ptr_addr(v_expr_3001_);
v___x_3014_ = lean_ptr_addr(v_fst_3008_);
v___x_3015_ = lean_usize_dec_eq(v___x_3013_, v___x_3014_);
if (v___x_3015_ == 0)
{
lean_object* v___x_3016_; 
lean_inc(v_data_3000_);
lean_del_object(v___x_3011_);
lean_del_object(v___x_3006_);
lean_dec_ref_known(v_e_2836_, 2);
v___x_3016_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__5(v_data_3000_, v_fst_3008_, v_snd_3009_, v_a_2839_, v_a_2840_, v_a_3004_);
return v___x_3016_;
}
else
{
lean_object* v___x_3018_; 
lean_dec(v_fst_3008_);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v_e_2836_);
v___x_3018_ = v___x_3011_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_e_2836_);
lean_ctor_set(v_reuseFailAlloc_3022_, 1, v_snd_3009_);
v___x_3018_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
lean_object* v___x_3020_; 
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 0, v___x_3018_);
v___x_3020_ = v___x_3006_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v___x_3018_);
lean_ctor_set(v_reuseFailAlloc_3021_, 1, v_a_3004_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_2836_, 2);
return v___x_3002_;
}
}
case 11:
{
lean_object* v_typeName_3025_; lean_object* v_idx_3026_; lean_object* v_struct_3027_; lean_object* v___x_3028_; 
v_typeName_3025_ = lean_ctor_get(v_e_2836_, 0);
v_idx_3026_ = lean_ctor_get(v_e_2836_, 1);
v_struct_3027_ = lean_ctor_get(v_e_2836_, 2);
lean_inc_ref(v_struct_3027_);
v___x_3028_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_2834_, v_i_2835_, v_struct_3027_, v_offset_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_);
if (lean_obj_tag(v___x_3028_) == 0)
{
lean_object* v_a_3029_; lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3050_; 
v_a_3029_ = lean_ctor_get(v___x_3028_, 0);
v_a_3030_ = lean_ctor_get(v___x_3028_, 1);
v_isSharedCheck_3050_ = !lean_is_exclusive(v___x_3028_);
if (v_isSharedCheck_3050_ == 0)
{
v___x_3032_ = v___x_3028_;
v_isShared_3033_ = v_isSharedCheck_3050_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_inc(v_a_3029_);
lean_dec(v___x_3028_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3050_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v_fst_3034_; lean_object* v_snd_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3049_; 
v_fst_3034_ = lean_ctor_get(v_a_3029_, 0);
v_snd_3035_ = lean_ctor_get(v_a_3029_, 1);
v_isSharedCheck_3049_ = !lean_is_exclusive(v_a_3029_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3037_ = v_a_3029_;
v_isShared_3038_ = v_isSharedCheck_3049_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_snd_3035_);
lean_inc(v_fst_3034_);
lean_dec(v_a_3029_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3049_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
size_t v___x_3039_; size_t v___x_3040_; uint8_t v___x_3041_; 
v___x_3039_ = lean_ptr_addr(v_struct_3027_);
v___x_3040_ = lean_ptr_addr(v_fst_3034_);
v___x_3041_ = lean_usize_dec_eq(v___x_3039_, v___x_3040_);
if (v___x_3041_ == 0)
{
lean_object* v___x_3042_; 
lean_inc(v_idx_3026_);
lean_inc(v_typeName_3025_);
lean_del_object(v___x_3037_);
lean_del_object(v___x_3032_);
lean_dec_ref_known(v_e_2836_, 3);
v___x_3042_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__6(v_typeName_3025_, v_idx_3026_, v_fst_3034_, v_snd_3035_, v_a_2839_, v_a_2840_, v_a_3030_);
return v___x_3042_;
}
else
{
lean_object* v___x_3044_; 
lean_dec(v_fst_3034_);
if (v_isShared_3038_ == 0)
{
lean_ctor_set(v___x_3037_, 0, v_e_2836_);
v___x_3044_ = v___x_3037_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_e_2836_);
lean_ctor_set(v_reuseFailAlloc_3048_, 1, v_snd_3035_);
v___x_3044_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
lean_object* v___x_3046_; 
if (v_isShared_3033_ == 0)
{
lean_ctor_set(v___x_3032_, 0, v___x_3044_);
v___x_3046_ = v___x_3032_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v___x_3044_);
lean_ctor_set(v_reuseFailAlloc_3047_, 1, v_a_3030_);
v___x_3046_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
return v___x_3046_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_2836_, 3);
return v___x_3028_;
}
}
default: 
{
lean_object* v___x_3051_; lean_object* v___x_3052_; 
lean_dec(v_offset_2837_);
lean_dec_ref(v_e_2836_);
v___x_3051_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0___closed__3);
v___x_3052_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__7(v___x_3051_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_);
return v___x_3052_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(lean_object* v___x_3053_, lean_object* v_i_3054_, lean_object* v_e_3055_, lean_object* v_offset_3056_, lean_object* v_a_3057_, uint8_t v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_){
_start:
{
lean_object* v_key_3061_; lean_object* v_a_3063_; lean_object* v___x_3076_; 
lean_inc(v_offset_3056_);
lean_inc_ref(v_e_3055_);
v_key_3061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_3061_, 0, v_e_3055_);
lean_ctor_set(v_key_3061_, 1, v_offset_3056_);
v___x_3076_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__0_spec__0_spec__2___redArg(v_a_3057_, v_key_3061_);
if (lean_obj_tag(v___x_3076_) == 1)
{
lean_object* v_val_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
lean_dec_ref_known(v_key_3061_, 2);
lean_dec(v_offset_3056_);
lean_dec_ref(v_e_3055_);
v_val_3077_ = lean_ctor_get(v___x_3076_, 0);
lean_inc(v_val_3077_);
lean_dec_ref_known(v___x_3076_, 1);
v___x_3078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3078_, 0, v_val_3077_);
lean_ctor_set(v___x_3078_, 1, v_a_3057_);
v___x_3079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3079_, 0, v___x_3078_);
lean_ctor_set(v___x_3079_, 1, v_a_3060_);
return v___x_3079_;
}
else
{
lean_dec(v___x_3076_);
switch(lean_obj_tag(v_e_3055_))
{
case 1:
{
lean_object* v_fvarId_3080_; lean_object* v___x_3081_; 
v_fvarId_3080_ = lean_ctor_get(v_e_3055_, 0);
v___x_3081_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(v___x_3053_, v_fvarId_3080_);
if (lean_obj_tag(v___x_3081_) == 1)
{
lean_object* v_val_3082_; uint8_t v___x_3083_; 
v_val_3082_ = lean_ctor_get(v___x_3081_, 0);
lean_inc(v_val_3082_);
lean_dec_ref_known(v___x_3081_, 1);
v___x_3083_ = lean_nat_dec_lt(v_val_3082_, v_i_3054_);
if (v___x_3083_ == 0)
{
lean_object* v___x_3084_; lean_object* v___x_3085_; 
lean_dec(v_val_3082_);
v___x_3084_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2);
v___x_3085_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(v___x_3084_, v_a_3058_, v_a_3059_, v_a_3060_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_object* v_a_3086_; 
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
lean_inc(v_a_3086_);
if (lean_obj_tag(v_a_3086_) == 1)
{
lean_object* v_a_3087_; lean_object* v_val_3088_; lean_object* v___x_3089_; 
lean_dec_ref_known(v_e_3055_, 1);
lean_dec(v_offset_3056_);
v_a_3087_ = lean_ctor_get(v___x_3085_, 1);
lean_inc(v_a_3087_);
lean_dec_ref_known(v___x_3085_, 2);
v_val_3088_ = lean_ctor_get(v_a_3086_, 0);
lean_inc(v_val_3088_);
lean_dec_ref_known(v_a_3086_, 1);
v___x_3089_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_val_3088_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3087_);
return v___x_3089_;
}
else
{
lean_object* v_a_3090_; 
lean_dec(v_a_3086_);
v_a_3090_ = lean_ctor_get(v___x_3085_, 1);
lean_inc(v_a_3090_);
lean_dec_ref_known(v___x_3085_, 2);
v_a_3063_ = v_a_3090_;
goto v___jp_3062_;
}
}
else
{
lean_object* v_a_3091_; lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
lean_dec_ref_known(v_e_3055_, 1);
lean_dec_ref_known(v_key_3061_, 2);
lean_dec_ref(v_a_3057_);
lean_dec(v_offset_3056_);
v_a_3091_ = lean_ctor_get(v___x_3085_, 0);
v_a_3092_ = lean_ctor_get(v___x_3085_, 1);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_3085_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_inc(v_a_3091_);
lean_dec(v___x_3085_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3091_);
lean_ctor_set(v_reuseFailAlloc_3098_, 1, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
else
{
lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
lean_dec_ref_known(v_e_3055_, 1);
v___x_3100_ = lean_nat_add(v_offset_3056_, v_i_3054_);
lean_dec(v_offset_3056_);
v___x_3101_ = lean_nat_sub(v___x_3100_, v_val_3082_);
lean_dec(v_val_3082_);
lean_dec(v___x_3100_);
v___x_3102_ = lean_unsigned_to_nat(1u);
v___x_3103_ = lean_nat_sub(v___x_3101_, v___x_3102_);
lean_dec(v___x_3101_);
v___x_3104_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(v___x_3103_, v_a_3060_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; lean_object* v_a_3106_; lean_object* v___x_3107_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_a_3105_);
v_a_3106_ = lean_ctor_get(v___x_3104_, 1);
lean_inc(v_a_3106_);
lean_dec_ref_known(v___x_3104_, 2);
v___x_3107_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_a_3105_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3106_);
return v___x_3107_;
}
else
{
lean_object* v_a_3108_; lean_object* v_a_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3116_; 
lean_dec_ref_known(v_key_3061_, 2);
lean_dec_ref(v_a_3057_);
v_a_3108_ = lean_ctor_get(v___x_3104_, 0);
v_a_3109_ = lean_ctor_get(v___x_3104_, 1);
v_isSharedCheck_3116_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3111_ = v___x_3104_;
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_a_3109_);
lean_inc(v_a_3108_);
lean_dec(v___x_3104_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3114_; 
if (v_isShared_3112_ == 0)
{
v___x_3114_ = v___x_3111_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v_a_3108_);
lean_ctor_set(v_reuseFailAlloc_3115_, 1, v_a_3109_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
return v___x_3114_;
}
}
}
}
}
else
{
lean_object* v___x_3117_; 
lean_dec(v___x_3081_);
lean_dec(v_offset_3056_);
v___x_3117_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
return v___x_3117_;
}
}
case 9:
{
lean_object* v___x_3118_; 
lean_dec(v_offset_3056_);
v___x_3118_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
return v___x_3118_;
}
case 2:
{
lean_object* v___x_3119_; 
lean_dec(v_offset_3056_);
v___x_3119_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
return v___x_3119_;
}
case 0:
{
lean_object* v___x_3120_; 
lean_dec(v_offset_3056_);
v___x_3120_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
return v___x_3120_;
}
case 4:
{
lean_object* v___x_3121_; 
lean_dec(v_offset_3056_);
v___x_3121_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
return v___x_3121_;
}
case 3:
{
lean_object* v___x_3122_; 
lean_dec(v_offset_3056_);
v___x_3122_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
return v___x_3122_;
}
default: 
{
uint8_t v___x_3123_; 
v___x_3123_ = l_Lean_Expr_hasFVar(v_e_3055_);
if (v___x_3123_ == 0)
{
lean_object* v___x_3124_; 
lean_dec(v_offset_3056_);
v___x_3124_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
return v___x_3124_;
}
else
{
v_a_3063_ = v_a_3060_;
goto v___jp_3062_;
}
}
}
}
v___jp_3062_:
{
switch(lean_obj_tag(v_e_3055_))
{
case 9:
{
lean_object* v___x_3064_; 
lean_dec(v_offset_3056_);
v___x_3064_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3063_);
return v___x_3064_;
}
case 2:
{
lean_object* v___x_3065_; 
lean_dec(v_offset_3056_);
v___x_3065_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3063_);
return v___x_3065_;
}
case 0:
{
lean_object* v___x_3066_; 
lean_dec(v_offset_3056_);
v___x_3066_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3063_);
return v___x_3066_;
}
case 1:
{
lean_object* v___x_3067_; 
lean_dec(v_offset_3056_);
v___x_3067_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3063_);
return v___x_3067_;
}
case 4:
{
lean_object* v___x_3068_; 
lean_dec(v_offset_3056_);
v___x_3068_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3063_);
return v___x_3068_;
}
case 3:
{
lean_object* v___x_3069_; 
lean_dec(v_offset_3056_);
v___x_3069_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_e_3055_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3063_);
return v___x_3069_;
}
default: 
{
lean_object* v___x_3070_; 
v___x_3070_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(v___x_3053_, v_i_3054_, v_e_3055_, v_offset_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3063_);
if (lean_obj_tag(v___x_3070_) == 0)
{
lean_object* v_a_3071_; lean_object* v_a_3072_; lean_object* v_fst_3073_; lean_object* v_snd_3074_; lean_object* v___x_3075_; 
v_a_3071_ = lean_ctor_get(v___x_3070_, 0);
lean_inc(v_a_3071_);
v_a_3072_ = lean_ctor_get(v___x_3070_, 1);
lean_inc(v_a_3072_);
lean_dec_ref_known(v___x_3070_, 2);
v_fst_3073_ = lean_ctor_get(v_a_3071_, 0);
lean_inc(v_fst_3073_);
v_snd_3074_ = lean_ctor_get(v_a_3071_, 1);
lean_inc(v_snd_3074_);
lean_dec(v_a_3071_);
v___x_3075_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_3061_, v_fst_3073_, v_snd_3074_, v_a_3058_, v_a_3059_, v_a_3072_);
return v___x_3075_;
}
else
{
lean_dec_ref_known(v_key_3061_, 2);
return v___x_3070_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___boxed(lean_object* v___x_3125_, lean_object* v_i_3126_, lean_object* v_e_3127_, lean_object* v_offset_3128_, lean_object* v_a_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_){
_start:
{
uint8_t v_a_boxed_3133_; lean_object* v_res_3134_; 
v_a_boxed_3133_ = lean_unbox(v_a_3130_);
v_res_3134_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9(v___x_3125_, v_i_3126_, v_e_3127_, v_offset_3128_, v_a_3129_, v_a_boxed_3133_, v_a_3131_, v_a_3132_);
lean_dec_ref(v_a_3131_);
lean_dec(v_i_3126_);
lean_dec_ref(v___x_3125_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5___boxed(lean_object* v___x_3135_, lean_object* v_i_3136_, lean_object* v_e_3137_, lean_object* v_offset_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_){
_start:
{
uint8_t v_a_boxed_3143_; lean_object* v_res_3144_; 
v_a_boxed_3143_ = lean_unbox(v_a_3140_);
v_res_3144_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(v___x_3135_, v_i_3136_, v_e_3137_, v_offset_3138_, v_a_3139_, v_a_boxed_3143_, v_a_3141_, v_a_3142_);
lean_dec_ref(v_a_3141_);
lean_dec(v_i_3136_);
lean_dec_ref(v___x_3135_);
return v_res_3144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0(lean_object* v_e_3145_, lean_object* v___x_3146_, lean_object* v___x_3147_, lean_object* v_fst_3148_, lean_object* v___x_3149_, uint8_t v_debug_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_){
_start:
{
lean_object* v_a_3154_; 
switch(lean_obj_tag(v_e_3145_))
{
case 1:
{
lean_object* v_fvarId_3184_; lean_object* v___x_3185_; 
v_fvarId_3184_ = lean_ctor_get(v_e_3145_, 0);
v___x_3185_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(v_fst_3148_, v_fvarId_3184_);
if (lean_obj_tag(v___x_3185_) == 1)
{
lean_object* v_val_3186_; uint8_t v___x_3187_; 
v_val_3186_ = lean_ctor_get(v___x_3185_, 0);
lean_inc(v_val_3186_);
lean_dec_ref_known(v___x_3185_, 1);
v___x_3187_ = lean_nat_dec_lt(v_val_3186_, v___x_3149_);
if (v___x_3187_ == 0)
{
lean_object* v___x_3188_; lean_object* v___x_3189_; 
lean_dec(v_val_3186_);
v___x_3188_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2);
v___x_3189_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(v___x_3188_, v_debug_3150_, v___y_3151_, v___y_3152_);
if (lean_obj_tag(v___x_3189_) == 0)
{
lean_object* v_a_3190_; 
v_a_3190_ = lean_ctor_get(v___x_3189_, 0);
lean_inc(v_a_3190_);
if (lean_obj_tag(v_a_3190_) == 1)
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3199_; 
lean_dec_ref_known(v_e_3145_, 1);
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v_a_3191_ = lean_ctor_get(v___x_3189_, 1);
v_isSharedCheck_3199_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3199_ == 0)
{
lean_object* v_unused_3200_; 
v_unused_3200_ = lean_ctor_get(v___x_3189_, 0);
lean_dec(v_unused_3200_);
v___x_3193_ = v___x_3189_;
v_isShared_3194_ = v_isSharedCheck_3199_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3189_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3199_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v_val_3195_; lean_object* v___x_3197_; 
v_val_3195_ = lean_ctor_get(v_a_3190_, 0);
lean_inc(v_val_3195_);
lean_dec_ref_known(v_a_3190_, 1);
if (v_isShared_3194_ == 0)
{
lean_ctor_set(v___x_3193_, 0, v_val_3195_);
v___x_3197_ = v___x_3193_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v_val_3195_);
lean_ctor_set(v_reuseFailAlloc_3198_, 1, v_a_3191_);
v___x_3197_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
return v___x_3197_;
}
}
}
else
{
lean_object* v_a_3201_; 
lean_dec(v_a_3190_);
v_a_3201_ = lean_ctor_get(v___x_3189_, 1);
lean_inc(v_a_3201_);
lean_dec_ref_known(v___x_3189_, 2);
v_a_3154_ = v_a_3201_;
goto v___jp_3153_;
}
}
else
{
lean_object* v_a_3202_; lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
lean_dec_ref_known(v_e_3145_, 1);
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v_a_3202_ = lean_ctor_get(v___x_3189_, 0);
v_a_3203_ = lean_ctor_get(v___x_3189_, 1);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3189_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_inc(v_a_3202_);
lean_dec(v___x_3189_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3202_);
lean_ctor_set(v_reuseFailAlloc_3209_, 1, v_a_3203_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
}
else
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; 
lean_dec_ref_known(v_e_3145_, 1);
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3211_ = lean_nat_sub(v___x_3149_, v_val_3186_);
lean_dec(v_val_3186_);
v___x_3212_ = lean_unsigned_to_nat(1u);
v___x_3213_ = lean_nat_sub(v___x_3211_, v___x_3212_);
lean_dec(v___x_3211_);
v___x_3214_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(v___x_3213_, v___y_3152_);
return v___x_3214_;
}
}
else
{
lean_object* v___x_3215_; 
lean_dec(v___x_3185_);
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3215_, 0, v_e_3145_);
lean_ctor_set(v___x_3215_, 1, v___y_3152_);
return v___x_3215_;
}
}
case 9:
{
lean_object* v___x_3216_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3216_, 0, v_e_3145_);
lean_ctor_set(v___x_3216_, 1, v___y_3152_);
return v___x_3216_;
}
case 2:
{
lean_object* v___x_3217_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3217_, 0, v_e_3145_);
lean_ctor_set(v___x_3217_, 1, v___y_3152_);
return v___x_3217_;
}
case 0:
{
lean_object* v___x_3218_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3218_, 0, v_e_3145_);
lean_ctor_set(v___x_3218_, 1, v___y_3152_);
return v___x_3218_;
}
case 4:
{
lean_object* v___x_3219_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3219_, 0, v_e_3145_);
lean_ctor_set(v___x_3219_, 1, v___y_3152_);
return v___x_3219_;
}
case 3:
{
lean_object* v___x_3220_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3220_, 0, v_e_3145_);
lean_ctor_set(v___x_3220_, 1, v___y_3152_);
return v___x_3220_;
}
default: 
{
uint8_t v___x_3221_; 
v___x_3221_ = l_Lean_Expr_hasFVar(v_e_3145_);
if (v___x_3221_ == 0)
{
lean_object* v___x_3222_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3222_, 0, v_e_3145_);
lean_ctor_set(v___x_3222_, 1, v___y_3152_);
return v___x_3222_;
}
else
{
v_a_3154_ = v___y_3152_;
goto v___jp_3153_;
}
}
}
v___jp_3153_:
{
switch(lean_obj_tag(v_e_3145_))
{
case 9:
{
lean_object* v___x_3155_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3155_, 0, v_e_3145_);
lean_ctor_set(v___x_3155_, 1, v_a_3154_);
return v___x_3155_;
}
case 2:
{
lean_object* v___x_3156_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3156_, 0, v_e_3145_);
lean_ctor_set(v___x_3156_, 1, v_a_3154_);
return v___x_3156_;
}
case 0:
{
lean_object* v___x_3157_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3157_, 0, v_e_3145_);
lean_ctor_set(v___x_3157_, 1, v_a_3154_);
return v___x_3157_;
}
case 1:
{
lean_object* v___x_3158_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3158_, 0, v_e_3145_);
lean_ctor_set(v___x_3158_, 1, v_a_3154_);
return v___x_3158_;
}
case 4:
{
lean_object* v___x_3159_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3159_, 0, v_e_3145_);
lean_ctor_set(v___x_3159_, 1, v_a_3154_);
return v___x_3159_;
}
case 3:
{
lean_object* v___x_3160_; 
lean_dec(v___x_3147_);
lean_dec(v___x_3146_);
v___x_3160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3160_, 0, v_e_3145_);
lean_ctor_set(v___x_3160_, 1, v_a_3154_);
return v___x_3160_;
}
default: 
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3161_ = lean_box(0);
v___x_3162_ = lean_mk_array(v___x_3146_, v___x_3161_);
lean_inc(v___x_3147_);
v___x_3163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3147_);
lean_ctor_set(v___x_3163_, 1, v___x_3162_);
v___x_3164_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(v_fst_3148_, v___x_3149_, v_e_3145_, v___x_3147_, v___x_3163_, v_debug_3150_, v___y_3151_, v_a_3154_);
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_a_3165_; lean_object* v_a_3166_; lean_object* v___x_3168_; uint8_t v_isShared_3169_; uint8_t v_isSharedCheck_3174_; 
v_a_3165_ = lean_ctor_get(v___x_3164_, 0);
v_a_3166_ = lean_ctor_get(v___x_3164_, 1);
v_isSharedCheck_3174_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3168_ = v___x_3164_;
v_isShared_3169_ = v_isSharedCheck_3174_;
goto v_resetjp_3167_;
}
else
{
lean_inc(v_a_3166_);
lean_inc(v_a_3165_);
lean_dec(v___x_3164_);
v___x_3168_ = lean_box(0);
v_isShared_3169_ = v_isSharedCheck_3174_;
goto v_resetjp_3167_;
}
v_resetjp_3167_:
{
lean_object* v_fst_3170_; lean_object* v___x_3172_; 
v_fst_3170_ = lean_ctor_get(v_a_3165_, 0);
lean_inc(v_fst_3170_);
lean_dec(v_a_3165_);
if (v_isShared_3169_ == 0)
{
lean_ctor_set(v___x_3168_, 0, v_fst_3170_);
v___x_3172_ = v___x_3168_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_fst_3170_);
lean_ctor_set(v_reuseFailAlloc_3173_, 1, v_a_3166_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
return v___x_3172_;
}
}
}
else
{
lean_object* v_a_3175_; lean_object* v_a_3176_; lean_object* v___x_3178_; uint8_t v_isShared_3179_; uint8_t v_isSharedCheck_3183_; 
v_a_3175_ = lean_ctor_get(v___x_3164_, 0);
v_a_3176_ = lean_ctor_get(v___x_3164_, 1);
v_isSharedCheck_3183_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3178_ = v___x_3164_;
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
else
{
lean_inc(v_a_3176_);
lean_inc(v_a_3175_);
lean_dec(v___x_3164_);
v___x_3178_ = lean_box(0);
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
v_resetjp_3177_:
{
lean_object* v___x_3181_; 
if (v_isShared_3179_ == 0)
{
v___x_3181_ = v___x_3178_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_a_3175_);
lean_ctor_set(v_reuseFailAlloc_3182_, 1, v_a_3176_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0___boxed(lean_object* v_e_3223_, lean_object* v___x_3224_, lean_object* v___x_3225_, lean_object* v_fst_3226_, lean_object* v___x_3227_, lean_object* v_debug_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_){
_start:
{
uint8_t v_debug_boxed_3231_; lean_object* v_res_3232_; 
v_debug_boxed_3231_ = lean_unbox(v_debug_3228_);
v_res_3232_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0(v_e_3223_, v___x_3224_, v___x_3225_, v_fst_3226_, v___x_3227_, v_debug_boxed_3231_, v___y_3229_, v___y_3230_);
lean_dec_ref(v___y_3229_);
lean_dec(v___x_3227_);
lean_dec(v_fst_3226_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0(lean_object* v_piece_3233_, lean_object* v___x_3234_, lean_object* v___x_3235_, lean_object* v_i_3236_, uint8_t v_debug_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_){
_start:
{
lean_object* v_a_3241_; 
switch(lean_obj_tag(v_piece_3233_))
{
case 1:
{
lean_object* v_fvarId_3270_; lean_object* v___x_3271_; 
v_fvarId_3270_ = lean_ctor_get(v_piece_3233_, 0);
v___x_3271_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(v___x_3235_, v_fvarId_3270_);
if (lean_obj_tag(v___x_3271_) == 1)
{
lean_object* v_val_3272_; uint8_t v___x_3273_; 
v_val_3272_ = lean_ctor_get(v___x_3271_, 0);
lean_inc(v_val_3272_);
lean_dec_ref_known(v___x_3271_, 1);
v___x_3273_ = lean_nat_dec_lt(v_val_3272_, v_i_3236_);
if (v___x_3273_ == 0)
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
lean_dec(v_val_3272_);
v___x_3274_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5_spec__9___closed__2);
v___x_3275_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__3(v___x_3274_, v_debug_3237_, v___y_3238_, v___y_3239_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v_a_3276_; 
v_a_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc(v_a_3276_);
if (lean_obj_tag(v_a_3276_) == 1)
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3285_; 
lean_dec_ref_known(v_piece_3233_, 1);
lean_dec(v___x_3234_);
v_a_3277_ = lean_ctor_get(v___x_3275_, 1);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_3275_);
if (v_isSharedCheck_3285_ == 0)
{
lean_object* v_unused_3286_; 
v_unused_3286_ = lean_ctor_get(v___x_3275_, 0);
lean_dec(v_unused_3286_);
v___x_3279_ = v___x_3275_;
v_isShared_3280_ = v_isSharedCheck_3285_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3275_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3285_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v_val_3281_; lean_object* v___x_3283_; 
v_val_3281_ = lean_ctor_get(v_a_3276_, 0);
lean_inc(v_val_3281_);
lean_dec_ref_known(v_a_3276_, 1);
if (v_isShared_3280_ == 0)
{
lean_ctor_set(v___x_3279_, 0, v_val_3281_);
v___x_3283_ = v___x_3279_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_val_3281_);
lean_ctor_set(v_reuseFailAlloc_3284_, 1, v_a_3277_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
}
else
{
lean_object* v_a_3287_; 
lean_dec(v_a_3276_);
v_a_3287_ = lean_ctor_get(v___x_3275_, 1);
lean_inc(v_a_3287_);
lean_dec_ref_known(v___x_3275_, 2);
v_a_3241_ = v_a_3287_;
goto v___jp_3240_;
}
}
else
{
lean_object* v_a_3288_; lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3296_; 
lean_dec_ref_known(v_piece_3233_, 1);
lean_dec(v___x_3234_);
v_a_3288_ = lean_ctor_get(v___x_3275_, 0);
v_a_3289_ = lean_ctor_get(v___x_3275_, 1);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3275_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3291_ = v___x_3275_;
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_inc(v_a_3288_);
lean_dec(v___x_3275_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3294_; 
if (v_isShared_3292_ == 0)
{
v___x_3294_ = v___x_3291_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_a_3288_);
lean_ctor_set(v_reuseFailAlloc_3295_, 1, v_a_3289_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
return v___x_3294_;
}
}
}
}
else
{
lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
lean_dec_ref_known(v_piece_3233_, 1);
lean_dec(v___x_3234_);
v___x_3297_ = lean_nat_sub(v_i_3236_, v_val_3272_);
lean_dec(v_val_3272_);
v___x_3298_ = lean_unsigned_to_nat(1u);
v___x_3299_ = lean_nat_sub(v___x_3297_, v___x_3298_);
lean_dec(v___x_3297_);
v___x_3300_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__4___redArg(v___x_3299_, v___y_3239_);
return v___x_3300_;
}
}
else
{
lean_object* v___x_3301_; 
lean_dec(v___x_3271_);
lean_dec(v___x_3234_);
v___x_3301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3301_, 0, v_piece_3233_);
lean_ctor_set(v___x_3301_, 1, v___y_3239_);
return v___x_3301_;
}
}
case 9:
{
lean_object* v___x_3302_; 
lean_dec(v___x_3234_);
v___x_3302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3302_, 0, v_piece_3233_);
lean_ctor_set(v___x_3302_, 1, v___y_3239_);
return v___x_3302_;
}
case 2:
{
lean_object* v___x_3303_; 
lean_dec(v___x_3234_);
v___x_3303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3303_, 0, v_piece_3233_);
lean_ctor_set(v___x_3303_, 1, v___y_3239_);
return v___x_3303_;
}
case 0:
{
lean_object* v___x_3304_; 
lean_dec(v___x_3234_);
v___x_3304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3304_, 0, v_piece_3233_);
lean_ctor_set(v___x_3304_, 1, v___y_3239_);
return v___x_3304_;
}
case 4:
{
lean_object* v___x_3305_; 
lean_dec(v___x_3234_);
v___x_3305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3305_, 0, v_piece_3233_);
lean_ctor_set(v___x_3305_, 1, v___y_3239_);
return v___x_3305_;
}
case 3:
{
lean_object* v___x_3306_; 
lean_dec(v___x_3234_);
v___x_3306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3306_, 0, v_piece_3233_);
lean_ctor_set(v___x_3306_, 1, v___y_3239_);
return v___x_3306_;
}
default: 
{
uint8_t v___x_3307_; 
v___x_3307_ = l_Lean_Expr_hasFVar(v_piece_3233_);
if (v___x_3307_ == 0)
{
lean_object* v___x_3308_; 
lean_dec(v___x_3234_);
v___x_3308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3308_, 0, v_piece_3233_);
lean_ctor_set(v___x_3308_, 1, v___y_3239_);
return v___x_3308_;
}
else
{
v_a_3241_ = v___y_3239_;
goto v___jp_3240_;
}
}
}
v___jp_3240_:
{
switch(lean_obj_tag(v_piece_3233_))
{
case 9:
{
lean_object* v___x_3242_; 
lean_dec(v___x_3234_);
v___x_3242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3242_, 0, v_piece_3233_);
lean_ctor_set(v___x_3242_, 1, v_a_3241_);
return v___x_3242_;
}
case 2:
{
lean_object* v___x_3243_; 
lean_dec(v___x_3234_);
v___x_3243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3243_, 0, v_piece_3233_);
lean_ctor_set(v___x_3243_, 1, v_a_3241_);
return v___x_3243_;
}
case 0:
{
lean_object* v___x_3244_; 
lean_dec(v___x_3234_);
v___x_3244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3244_, 0, v_piece_3233_);
lean_ctor_set(v___x_3244_, 1, v_a_3241_);
return v___x_3244_;
}
case 1:
{
lean_object* v___x_3245_; 
lean_dec(v___x_3234_);
v___x_3245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3245_, 0, v_piece_3233_);
lean_ctor_set(v___x_3245_, 1, v_a_3241_);
return v___x_3245_;
}
case 4:
{
lean_object* v___x_3246_; 
lean_dec(v___x_3234_);
v___x_3246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3246_, 0, v_piece_3233_);
lean_ctor_set(v___x_3246_, 1, v_a_3241_);
return v___x_3246_;
}
case 3:
{
lean_object* v___x_3247_; 
lean_dec(v___x_3234_);
v___x_3247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3247_, 0, v_piece_3233_);
lean_ctor_set(v___x_3247_, 1, v_a_3241_);
return v___x_3247_;
}
default: 
{
lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3248_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___lam__0___closed__0);
lean_inc(v___x_3234_);
v___x_3249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3234_);
lean_ctor_set(v___x_3249_, 1, v___x_3248_);
v___x_3250_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__5(v___x_3235_, v_i_3236_, v_piece_3233_, v___x_3234_, v___x_3249_, v_debug_3237_, v___y_3238_, v_a_3241_);
if (lean_obj_tag(v___x_3250_) == 0)
{
lean_object* v_a_3251_; lean_object* v_a_3252_; lean_object* v___x_3254_; uint8_t v_isShared_3255_; uint8_t v_isSharedCheck_3260_; 
v_a_3251_ = lean_ctor_get(v___x_3250_, 0);
v_a_3252_ = lean_ctor_get(v___x_3250_, 1);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3254_ = v___x_3250_;
v_isShared_3255_ = v_isSharedCheck_3260_;
goto v_resetjp_3253_;
}
else
{
lean_inc(v_a_3252_);
lean_inc(v_a_3251_);
lean_dec(v___x_3250_);
v___x_3254_ = lean_box(0);
v_isShared_3255_ = v_isSharedCheck_3260_;
goto v_resetjp_3253_;
}
v_resetjp_3253_:
{
lean_object* v_fst_3256_; lean_object* v___x_3258_; 
v_fst_3256_ = lean_ctor_get(v_a_3251_, 0);
lean_inc(v_fst_3256_);
lean_dec(v_a_3251_);
if (v_isShared_3255_ == 0)
{
lean_ctor_set(v___x_3254_, 0, v_fst_3256_);
v___x_3258_ = v___x_3254_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_fst_3256_);
lean_ctor_set(v_reuseFailAlloc_3259_, 1, v_a_3252_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
else
{
lean_object* v_a_3261_; lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3269_; 
v_a_3261_ = lean_ctor_get(v___x_3250_, 0);
v_a_3262_ = lean_ctor_get(v___x_3250_, 1);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3250_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_inc(v_a_3261_);
lean_dec(v___x_3250_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3261_);
lean_ctor_set(v_reuseFailAlloc_3268_, 1, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
return v___x_3267_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0___boxed(lean_object* v_piece_3309_, lean_object* v___x_3310_, lean_object* v___x_3311_, lean_object* v_i_3312_, lean_object* v_debug_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_){
_start:
{
uint8_t v_debug_boxed_3316_; lean_object* v_res_3317_; 
v_debug_boxed_3316_ = lean_unbox(v_debug_3313_);
v_res_3317_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0(v_piece_3309_, v___x_3310_, v___x_3311_, v_i_3312_, v_debug_boxed_3316_, v___y_3314_, v___y_3315_);
lean_dec_ref(v___y_3314_);
lean_dec(v_i_3312_);
lean_dec_ref(v___x_3311_);
return v_res_3317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(lean_object* v___x_3318_, lean_object* v___x_3319_, uint8_t v___x_3320_, lean_object* v_piece_3321_, lean_object* v_i_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
lean_object* v___x_3331_; uint8_t v_debug_3332_; lean_object* v___x_3333_; lean_object* v___f_3334_; lean_object* v___x_3335_; lean_object* v_env_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___x_3331_ = lean_st_ref_get(v___y_3325_);
v_debug_3332_ = lean_ctor_get_uint8(v___x_3331_, sizeof(void*)*11);
lean_dec(v___x_3331_);
v___x_3333_ = lean_box(v_debug_3332_);
v___f_3334_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__0___boxed), 7, 5);
lean_closure_set(v___f_3334_, 0, v_piece_3321_);
lean_closure_set(v___f_3334_, 1, v___x_3318_);
lean_closure_set(v___f_3334_, 2, v___x_3319_);
lean_closure_set(v___f_3334_, 3, v_i_3322_);
lean_closure_set(v___f_3334_, 4, v___x_3333_);
v___x_3335_ = lean_st_ref_get(v___y_3329_);
v_env_3336_ = lean_ctor_get(v___x_3335_, 0);
lean_inc_ref(v_env_3336_);
lean_dec(v___x_3335_);
v___x_3337_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_3337_, 0, v_env_3336_);
lean_ctor_set_uint8(v___x_3337_, sizeof(void*)*1, v___x_3320_);
lean_ctor_set_uint8(v___x_3337_, sizeof(void*)*1 + 1, v___x_3320_);
v___x_3338_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_3334_, v___x_3337_, v___y_3325_);
if (lean_obj_tag(v___x_3338_) == 0)
{
lean_object* v_a_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3349_; 
v_a_3339_ = lean_ctor_get(v___x_3338_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___x_3338_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3341_ = v___x_3338_;
v_isShared_3342_ = v_isSharedCheck_3349_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_a_3339_);
lean_dec(v___x_3338_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3349_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
if (lean_obj_tag(v_a_3339_) == 0)
{
lean_object* v___x_3343_; lean_object* v___x_3344_; 
lean_dec_ref_known(v_a_3339_, 1);
lean_del_object(v___x_3341_);
v___x_3343_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2);
v___x_3344_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(v___x_3343_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
return v___x_3344_;
}
else
{
lean_object* v_a_3345_; lean_object* v___x_3347_; 
v_a_3345_ = lean_ctor_get(v_a_3339_, 0);
lean_inc(v_a_3345_);
lean_dec_ref_known(v_a_3339_, 1);
if (v_isShared_3342_ == 0)
{
lean_ctor_set(v___x_3341_, 0, v_a_3345_);
v___x_3347_ = v___x_3341_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_a_3345_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
}
}
else
{
lean_object* v_a_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3357_; 
v_a_3350_ = lean_ctor_get(v___x_3338_, 0);
v_isSharedCheck_3357_ = !lean_is_exclusive(v___x_3338_);
if (v_isSharedCheck_3357_ == 0)
{
v___x_3352_ = v___x_3338_;
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_a_3350_);
lean_dec(v___x_3338_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
lean_object* v___x_3355_; 
if (v_isShared_3353_ == 0)
{
v___x_3355_ = v___x_3352_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v_a_3350_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1___boxed(lean_object* v___x_3358_, lean_object* v___x_3359_, lean_object* v___x_3360_, lean_object* v_piece_3361_, lean_object* v_i_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_){
_start:
{
uint8_t v___x_16854__boxed_3371_; lean_object* v_res_3372_; 
v___x_16854__boxed_3371_ = lean_unbox(v___x_3360_);
v_res_3372_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(v___x_3358_, v___x_3359_, v___x_16854__boxed_3371_, v_piece_3361_, v_i_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_);
lean_dec(v___y_3369_);
lean_dec_ref(v___y_3368_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
return v_res_3372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12(lean_object* v___x_3373_, lean_object* v___x_3374_, lean_object* v_as_3375_, size_t v_sz_3376_, size_t v_i_3377_, lean_object* v_b_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_){
_start:
{
uint8_t v___x_3387_; 
v___x_3387_ = lean_usize_dec_lt(v_i_3377_, v_sz_3376_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3388_; 
lean_dec_ref(v___x_3373_);
v___x_3388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3388_, 0, v_b_3378_);
return v___x_3388_;
}
else
{
lean_object* v_fst_3389_; lean_object* v_snd_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3439_; 
v_fst_3389_ = lean_ctor_get(v_b_3378_, 0);
v_snd_3390_ = lean_ctor_get(v_b_3378_, 1);
v_isSharedCheck_3439_ = !lean_is_exclusive(v_b_3378_);
if (v_isSharedCheck_3439_ == 0)
{
v___x_3392_ = v_b_3378_;
v_isShared_3393_ = v_isSharedCheck_3439_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_snd_3390_);
lean_inc(v_fst_3389_);
lean_dec(v_b_3378_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3439_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v_a_3394_; lean_object* v_userName_3395_; lean_object* v_type_3396_; lean_object* v_value_3397_; uint8_t v_nondep_3398_; lean_object* v___x_3399_; uint8_t v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; 
v_a_3394_ = lean_array_uget_borrowed(v_as_3375_, v_i_3377_);
v_userName_3395_ = lean_ctor_get(v_a_3394_, 1);
v_type_3396_ = lean_ctor_get(v_a_3394_, 2);
v_value_3397_ = lean_ctor_get(v_a_3394_, 3);
v_nondep_3398_ = lean_ctor_get_uint8(v_a_3394_, sizeof(void*)*4);
v___x_3399_ = lean_unsigned_to_nat(0u);
v___x_3400_ = lean_nat_dec_eq(v___x_3374_, v___x_3399_);
v___x_3401_ = lean_unsigned_to_nat(1u);
v___x_3402_ = lean_nat_sub(v_snd_3390_, v___x_3401_);
lean_dec(v_snd_3390_);
lean_inc(v___x_3402_);
lean_inc_ref(v_type_3396_);
lean_inc_ref(v___x_3373_);
v___x_3403_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(v___x_3399_, v___x_3373_, v___x_3400_, v_type_3396_, v___x_3402_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_);
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_object* v_a_3404_; lean_object* v___x_3405_; 
v_a_3404_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_a_3404_);
lean_dec_ref_known(v___x_3403_, 1);
lean_inc(v___x_3402_);
lean_inc_ref(v_value_3397_);
lean_inc_ref(v___x_3373_);
v___x_3405_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(v___x_3399_, v___x_3373_, v___x_3400_, v_value_3397_, v___x_3402_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v_a_3406_; lean_object* v___x_3407_; 
v_a_3406_ = lean_ctor_get(v___x_3405_, 0);
lean_inc(v_a_3406_);
lean_dec_ref_known(v___x_3405_, 1);
lean_inc(v_userName_3395_);
v___x_3407_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(v_userName_3395_, v_a_3404_, v_a_3406_, v_fst_3389_, v_nondep_3398_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_);
if (lean_obj_tag(v___x_3407_) == 0)
{
lean_object* v_a_3408_; lean_object* v___x_3410_; 
v_a_3408_ = lean_ctor_get(v___x_3407_, 0);
lean_inc(v_a_3408_);
lean_dec_ref_known(v___x_3407_, 1);
if (v_isShared_3393_ == 0)
{
lean_ctor_set(v___x_3392_, 1, v___x_3402_);
lean_ctor_set(v___x_3392_, 0, v_a_3408_);
v___x_3410_ = v___x_3392_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v_a_3408_);
lean_ctor_set(v_reuseFailAlloc_3414_, 1, v___x_3402_);
v___x_3410_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
size_t v___x_3411_; size_t v___x_3412_; 
v___x_3411_ = ((size_t)1ULL);
v___x_3412_ = lean_usize_add(v_i_3377_, v___x_3411_);
v_i_3377_ = v___x_3412_;
v_b_3378_ = v___x_3410_;
goto _start;
}
}
else
{
lean_object* v_a_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3422_; 
lean_dec(v___x_3402_);
lean_del_object(v___x_3392_);
lean_dec_ref(v___x_3373_);
v_a_3415_ = lean_ctor_get(v___x_3407_, 0);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3407_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3417_ = v___x_3407_;
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_a_3415_);
lean_dec(v___x_3407_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3420_; 
if (v_isShared_3418_ == 0)
{
v___x_3420_ = v___x_3417_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_a_3415_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
else
{
lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3430_; 
lean_dec(v_a_3404_);
lean_dec(v___x_3402_);
lean_del_object(v___x_3392_);
lean_dec(v_fst_3389_);
lean_dec_ref(v___x_3373_);
v_a_3423_ = lean_ctor_get(v___x_3405_, 0);
v_isSharedCheck_3430_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3425_ = v___x_3405_;
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___x_3405_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3428_; 
if (v_isShared_3426_ == 0)
{
v___x_3428_ = v___x_3425_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_a_3423_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
}
}
else
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3438_; 
lean_dec(v___x_3402_);
lean_del_object(v___x_3392_);
lean_dec(v_fst_3389_);
lean_dec_ref(v___x_3373_);
v_a_3431_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3438_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3438_ == 0)
{
v___x_3433_ = v___x_3403_;
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3403_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3436_; 
if (v_isShared_3434_ == 0)
{
v___x_3436_ = v___x_3433_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v_a_3431_);
v___x_3436_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
return v___x_3436_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12___boxed(lean_object* v___x_3440_, lean_object* v___x_3441_, lean_object* v_as_3442_, lean_object* v_sz_3443_, lean_object* v_i_3444_, lean_object* v_b_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_){
_start:
{
size_t v_sz_boxed_3454_; size_t v_i_boxed_3455_; lean_object* v_res_3456_; 
v_sz_boxed_3454_ = lean_unbox_usize(v_sz_3443_);
lean_dec(v_sz_3443_);
v_i_boxed_3455_ = lean_unbox_usize(v_i_3444_);
lean_dec(v_i_3444_);
v_res_3456_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12(v___x_3440_, v___x_3441_, v_as_3442_, v_sz_boxed_3454_, v_i_boxed_3455_, v_b_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
lean_dec(v___y_3452_);
lean_dec_ref(v___y_3451_);
lean_dec(v___y_3450_);
lean_dec_ref(v___y_3449_);
lean_dec(v___y_3448_);
lean_dec_ref(v___y_3447_);
lean_dec(v___y_3446_);
lean_dec_ref(v_as_3442_);
lean_dec(v___x_3441_);
return v_res_3456_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7(lean_object* v___x_3457_, lean_object* v___x_3458_, lean_object* v_as_3459_, size_t v_sz_3460_, size_t v_i_3461_, lean_object* v_b_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_){
_start:
{
uint8_t v___x_3471_; 
v___x_3471_ = lean_usize_dec_lt(v_i_3461_, v_sz_3460_);
if (v___x_3471_ == 0)
{
lean_object* v___x_3472_; 
lean_dec_ref(v___x_3457_);
v___x_3472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3472_, 0, v_b_3462_);
return v___x_3472_;
}
else
{
lean_object* v_fst_3473_; lean_object* v_snd_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3523_; 
v_fst_3473_ = lean_ctor_get(v_b_3462_, 0);
v_snd_3474_ = lean_ctor_get(v_b_3462_, 1);
v_isSharedCheck_3523_ = !lean_is_exclusive(v_b_3462_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3476_ = v_b_3462_;
v_isShared_3477_ = v_isSharedCheck_3523_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_snd_3474_);
lean_inc(v_fst_3473_);
lean_dec(v_b_3462_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3523_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
lean_object* v_a_3478_; lean_object* v_userName_3479_; lean_object* v_type_3480_; lean_object* v_value_3481_; uint8_t v_nondep_3482_; lean_object* v___x_3483_; uint8_t v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v_a_3478_ = lean_array_uget_borrowed(v_as_3459_, v_i_3461_);
v_userName_3479_ = lean_ctor_get(v_a_3478_, 1);
v_type_3480_ = lean_ctor_get(v_a_3478_, 2);
v_value_3481_ = lean_ctor_get(v_a_3478_, 3);
v_nondep_3482_ = lean_ctor_get_uint8(v_a_3478_, sizeof(void*)*4);
v___x_3483_ = lean_unsigned_to_nat(0u);
v___x_3484_ = lean_nat_dec_eq(v___x_3458_, v___x_3483_);
v___x_3485_ = lean_unsigned_to_nat(1u);
v___x_3486_ = lean_nat_sub(v_snd_3474_, v___x_3485_);
lean_dec(v_snd_3474_);
lean_inc(v___x_3486_);
lean_inc_ref(v_type_3480_);
lean_inc_ref(v___x_3457_);
v___x_3487_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(v___x_3483_, v___x_3457_, v___x_3484_, v_type_3480_, v___x_3486_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3487_) == 0)
{
lean_object* v_a_3488_; lean_object* v___x_3489_; 
v_a_3488_ = lean_ctor_get(v___x_3487_, 0);
lean_inc(v_a_3488_);
lean_dec_ref_known(v___x_3487_, 1);
lean_inc(v___x_3486_);
lean_inc_ref(v_value_3481_);
lean_inc_ref(v___x_3457_);
v___x_3489_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___lam__1(v___x_3483_, v___x_3457_, v___x_3484_, v_value_3481_, v___x_3486_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; lean_object* v___x_3491_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___x_3489_, 1);
lean_inc(v_userName_3479_);
v___x_3491_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__6___redArg(v_userName_3479_, v_a_3488_, v_a_3490_, v_fst_3473_, v_nondep_3482_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v_a_3492_; lean_object* v___x_3494_; 
v_a_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3491_, 1);
if (v_isShared_3477_ == 0)
{
lean_ctor_set(v___x_3476_, 1, v___x_3486_);
lean_ctor_set(v___x_3476_, 0, v_a_3492_);
v___x_3494_ = v___x_3476_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_a_3492_);
lean_ctor_set(v_reuseFailAlloc_3498_, 1, v___x_3486_);
v___x_3494_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
size_t v___x_3495_; size_t v___x_3496_; lean_object* v___x_3497_; 
v___x_3495_ = ((size_t)1ULL);
v___x_3496_ = lean_usize_add(v_i_3461_, v___x_3495_);
v___x_3497_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7_spec__12(v___x_3457_, v___x_3458_, v_as_3459_, v_sz_3460_, v___x_3496_, v___x_3494_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
return v___x_3497_;
}
}
else
{
lean_object* v_a_3499_; lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3506_; 
lean_dec(v___x_3486_);
lean_del_object(v___x_3476_);
lean_dec_ref(v___x_3457_);
v_a_3499_ = lean_ctor_get(v___x_3491_, 0);
v_isSharedCheck_3506_ = !lean_is_exclusive(v___x_3491_);
if (v_isSharedCheck_3506_ == 0)
{
v___x_3501_ = v___x_3491_;
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
else
{
lean_inc(v_a_3499_);
lean_dec(v___x_3491_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
lean_object* v___x_3504_; 
if (v_isShared_3502_ == 0)
{
v___x_3504_ = v___x_3501_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v_a_3499_);
v___x_3504_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
return v___x_3504_;
}
}
}
}
else
{
lean_object* v_a_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3514_; 
lean_dec(v_a_3488_);
lean_dec(v___x_3486_);
lean_del_object(v___x_3476_);
lean_dec(v_fst_3473_);
lean_dec_ref(v___x_3457_);
v_a_3507_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3509_ = v___x_3489_;
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_a_3507_);
lean_dec(v___x_3489_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v___x_3512_; 
if (v_isShared_3510_ == 0)
{
v___x_3512_ = v___x_3509_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v_a_3507_);
v___x_3512_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
return v___x_3512_;
}
}
}
}
else
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3522_; 
lean_dec(v___x_3486_);
lean_del_object(v___x_3476_);
lean_dec(v_fst_3473_);
lean_dec_ref(v___x_3457_);
v_a_3515_ = lean_ctor_get(v___x_3487_, 0);
v_isSharedCheck_3522_ = !lean_is_exclusive(v___x_3487_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3517_ = v___x_3487_;
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3487_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v___x_3520_; 
if (v_isShared_3518_ == 0)
{
v___x_3520_ = v___x_3517_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_a_3515_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
return v___x_3520_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7___boxed(lean_object* v___x_3524_, lean_object* v___x_3525_, lean_object* v_as_3526_, lean_object* v_sz_3527_, lean_object* v_i_3528_, lean_object* v_b_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_){
_start:
{
size_t v_sz_boxed_3538_; size_t v_i_boxed_3539_; lean_object* v_res_3540_; 
v_sz_boxed_3538_ = lean_unbox_usize(v_sz_3527_);
lean_dec(v_sz_3527_);
v_i_boxed_3539_ = lean_unbox_usize(v_i_3528_);
lean_dec(v_i_3528_);
v_res_3540_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7(v___x_3524_, v___x_3525_, v_as_3526_, v_sz_boxed_3538_, v_i_boxed_3539_, v_b_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_);
lean_dec(v___y_3536_);
lean_dec_ref(v___y_3535_);
lean_dec(v___y_3534_);
lean_dec_ref(v___y_3533_);
lean_dec(v___y_3532_);
lean_dec_ref(v___y_3531_);
lean_dec(v___y_3530_);
lean_dec_ref(v_as_3526_);
lean_dec(v___x_3525_);
return v_res_3540_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg(lean_object* v_a_3541_, lean_object* v_x_3542_){
_start:
{
if (lean_obj_tag(v_x_3542_) == 0)
{
uint8_t v___x_3543_; 
v___x_3543_ = 0;
return v___x_3543_;
}
else
{
lean_object* v_key_3544_; lean_object* v_tail_3545_; uint8_t v___x_3546_; 
v_key_3544_ = lean_ctor_get(v_x_3542_, 0);
v_tail_3545_ = lean_ctor_get(v_x_3542_, 2);
v___x_3546_ = l_Lean_instBEqFVarId_beq(v_key_3544_, v_a_3541_);
if (v___x_3546_ == 0)
{
v_x_3542_ = v_tail_3545_;
goto _start;
}
else
{
return v___x_3546_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg___boxed(lean_object* v_a_3548_, lean_object* v_x_3549_){
_start:
{
uint8_t v_res_3550_; lean_object* v_r_3551_; 
v_res_3550_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg(v_a_3548_, v_x_3549_);
lean_dec(v_x_3549_);
lean_dec(v_a_3548_);
v_r_3551_ = lean_box(v_res_3550_);
return v_r_3551_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10___redArg(lean_object* v_x_3552_, lean_object* v_x_3553_){
_start:
{
if (lean_obj_tag(v_x_3553_) == 0)
{
return v_x_3552_;
}
else
{
lean_object* v_key_3554_; lean_object* v_value_3555_; lean_object* v_tail_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3579_; 
v_key_3554_ = lean_ctor_get(v_x_3553_, 0);
v_value_3555_ = lean_ctor_get(v_x_3553_, 1);
v_tail_3556_ = lean_ctor_get(v_x_3553_, 2);
v_isSharedCheck_3579_ = !lean_is_exclusive(v_x_3553_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3558_ = v_x_3553_;
v_isShared_3559_ = v_isSharedCheck_3579_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_tail_3556_);
lean_inc(v_value_3555_);
lean_inc(v_key_3554_);
lean_dec(v_x_3553_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3579_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___x_3560_; uint64_t v___x_3561_; uint64_t v___x_3562_; uint64_t v___x_3563_; uint64_t v_fold_3564_; uint64_t v___x_3565_; uint64_t v___x_3566_; uint64_t v___x_3567_; size_t v___x_3568_; size_t v___x_3569_; size_t v___x_3570_; size_t v___x_3571_; size_t v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3575_; 
v___x_3560_ = lean_array_get_size(v_x_3552_);
v___x_3561_ = l_Lean_instHashableFVarId_hash(v_key_3554_);
v___x_3562_ = 32ULL;
v___x_3563_ = lean_uint64_shift_right(v___x_3561_, v___x_3562_);
v_fold_3564_ = lean_uint64_xor(v___x_3561_, v___x_3563_);
v___x_3565_ = 16ULL;
v___x_3566_ = lean_uint64_shift_right(v_fold_3564_, v___x_3565_);
v___x_3567_ = lean_uint64_xor(v_fold_3564_, v___x_3566_);
v___x_3568_ = lean_uint64_to_usize(v___x_3567_);
v___x_3569_ = lean_usize_of_nat(v___x_3560_);
v___x_3570_ = ((size_t)1ULL);
v___x_3571_ = lean_usize_sub(v___x_3569_, v___x_3570_);
v___x_3572_ = lean_usize_land(v___x_3568_, v___x_3571_);
v___x_3573_ = lean_array_uget_borrowed(v_x_3552_, v___x_3572_);
lean_inc(v___x_3573_);
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 2, v___x_3573_);
v___x_3575_ = v___x_3558_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v_key_3554_);
lean_ctor_set(v_reuseFailAlloc_3578_, 1, v_value_3555_);
lean_ctor_set(v_reuseFailAlloc_3578_, 2, v___x_3573_);
v___x_3575_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
lean_object* v___x_3576_; 
v___x_3576_ = lean_array_uset(v_x_3552_, v___x_3572_, v___x_3575_);
v_x_3552_ = v___x_3576_;
v_x_3553_ = v_tail_3556_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5___redArg(lean_object* v_i_3580_, lean_object* v_source_3581_, lean_object* v_target_3582_){
_start:
{
lean_object* v___x_3583_; uint8_t v___x_3584_; 
v___x_3583_ = lean_array_get_size(v_source_3581_);
v___x_3584_ = lean_nat_dec_lt(v_i_3580_, v___x_3583_);
if (v___x_3584_ == 0)
{
lean_dec_ref(v_source_3581_);
lean_dec(v_i_3580_);
return v_target_3582_;
}
else
{
lean_object* v_es_3585_; lean_object* v___x_3586_; lean_object* v_source_3587_; lean_object* v_target_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v_es_3585_ = lean_array_fget(v_source_3581_, v_i_3580_);
v___x_3586_ = lean_box(0);
v_source_3587_ = lean_array_fset(v_source_3581_, v_i_3580_, v___x_3586_);
v_target_3588_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10___redArg(v_target_3582_, v_es_3585_);
v___x_3589_ = lean_unsigned_to_nat(1u);
v___x_3590_ = lean_nat_add(v_i_3580_, v___x_3589_);
lean_dec(v_i_3580_);
v_i_3580_ = v___x_3590_;
v_source_3581_ = v_source_3587_;
v_target_3582_ = v_target_3588_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1___redArg(lean_object* v_data_3592_){
_start:
{
lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v_nbuckets_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3593_ = lean_array_get_size(v_data_3592_);
v___x_3594_ = lean_unsigned_to_nat(2u);
v_nbuckets_3595_ = lean_nat_mul(v___x_3593_, v___x_3594_);
v___x_3596_ = lean_unsigned_to_nat(0u);
v___x_3597_ = lean_box(0);
v___x_3598_ = lean_mk_array(v_nbuckets_3595_, v___x_3597_);
v___x_3599_ = lean_array_propagate_mark(v_data_3592_, v___x_3598_);
v___x_3600_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5___redArg(v___x_3596_, v_data_3592_, v___x_3599_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2___redArg(lean_object* v_a_3601_, lean_object* v_b_3602_, lean_object* v_x_3603_){
_start:
{
if (lean_obj_tag(v_x_3603_) == 0)
{
lean_dec(v_b_3602_);
lean_dec(v_a_3601_);
return v_x_3603_;
}
else
{
lean_object* v_key_3604_; lean_object* v_value_3605_; lean_object* v_tail_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3618_; 
v_key_3604_ = lean_ctor_get(v_x_3603_, 0);
v_value_3605_ = lean_ctor_get(v_x_3603_, 1);
v_tail_3606_ = lean_ctor_get(v_x_3603_, 2);
v_isSharedCheck_3618_ = !lean_is_exclusive(v_x_3603_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3608_ = v_x_3603_;
v_isShared_3609_ = v_isSharedCheck_3618_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_tail_3606_);
lean_inc(v_value_3605_);
lean_inc(v_key_3604_);
lean_dec(v_x_3603_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3618_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
uint8_t v___x_3610_; 
v___x_3610_ = l_Lean_instBEqFVarId_beq(v_key_3604_, v_a_3601_);
if (v___x_3610_ == 0)
{
lean_object* v___x_3611_; lean_object* v___x_3613_; 
v___x_3611_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2___redArg(v_a_3601_, v_b_3602_, v_tail_3606_);
if (v_isShared_3609_ == 0)
{
lean_ctor_set(v___x_3608_, 2, v___x_3611_);
v___x_3613_ = v___x_3608_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v_key_3604_);
lean_ctor_set(v_reuseFailAlloc_3614_, 1, v_value_3605_);
lean_ctor_set(v_reuseFailAlloc_3614_, 2, v___x_3611_);
v___x_3613_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
return v___x_3613_;
}
}
else
{
lean_object* v___x_3616_; 
lean_dec(v_value_3605_);
lean_dec(v_key_3604_);
if (v_isShared_3609_ == 0)
{
lean_ctor_set(v___x_3608_, 1, v_b_3602_);
lean_ctor_set(v___x_3608_, 0, v_a_3601_);
v___x_3616_ = v___x_3608_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v_a_3601_);
lean_ctor_set(v_reuseFailAlloc_3617_, 1, v_b_3602_);
lean_ctor_set(v_reuseFailAlloc_3617_, 2, v_tail_3606_);
v___x_3616_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
return v___x_3616_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0___redArg(lean_object* v_m_3619_, lean_object* v_a_3620_, lean_object* v_b_3621_){
_start:
{
lean_object* v_size_3622_; lean_object* v_buckets_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3666_; 
v_size_3622_ = lean_ctor_get(v_m_3619_, 0);
v_buckets_3623_ = lean_ctor_get(v_m_3619_, 1);
v_isSharedCheck_3666_ = !lean_is_exclusive(v_m_3619_);
if (v_isSharedCheck_3666_ == 0)
{
v___x_3625_ = v_m_3619_;
v_isShared_3626_ = v_isSharedCheck_3666_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_buckets_3623_);
lean_inc(v_size_3622_);
lean_dec(v_m_3619_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3666_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3627_; uint64_t v___x_3628_; uint64_t v___x_3629_; uint64_t v___x_3630_; uint64_t v_fold_3631_; uint64_t v___x_3632_; uint64_t v___x_3633_; uint64_t v___x_3634_; size_t v___x_3635_; size_t v___x_3636_; size_t v___x_3637_; size_t v___x_3638_; size_t v___x_3639_; lean_object* v_bkt_3640_; uint8_t v___x_3641_; 
v___x_3627_ = lean_array_get_size(v_buckets_3623_);
v___x_3628_ = l_Lean_instHashableFVarId_hash(v_a_3620_);
v___x_3629_ = 32ULL;
v___x_3630_ = lean_uint64_shift_right(v___x_3628_, v___x_3629_);
v_fold_3631_ = lean_uint64_xor(v___x_3628_, v___x_3630_);
v___x_3632_ = 16ULL;
v___x_3633_ = lean_uint64_shift_right(v_fold_3631_, v___x_3632_);
v___x_3634_ = lean_uint64_xor(v_fold_3631_, v___x_3633_);
v___x_3635_ = lean_uint64_to_usize(v___x_3634_);
v___x_3636_ = lean_usize_of_nat(v___x_3627_);
v___x_3637_ = ((size_t)1ULL);
v___x_3638_ = lean_usize_sub(v___x_3636_, v___x_3637_);
v___x_3639_ = lean_usize_land(v___x_3635_, v___x_3638_);
v_bkt_3640_ = lean_array_uget_borrowed(v_buckets_3623_, v___x_3639_);
v___x_3641_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg(v_a_3620_, v_bkt_3640_);
if (v___x_3641_ == 0)
{
lean_object* v___x_3642_; lean_object* v_size_x27_3643_; lean_object* v___x_3644_; lean_object* v_buckets_x27_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; uint8_t v___x_3651_; 
v___x_3642_ = lean_unsigned_to_nat(1u);
v_size_x27_3643_ = lean_nat_add(v_size_3622_, v___x_3642_);
lean_dec(v_size_3622_);
lean_inc(v_bkt_3640_);
v___x_3644_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3644_, 0, v_a_3620_);
lean_ctor_set(v___x_3644_, 1, v_b_3621_);
lean_ctor_set(v___x_3644_, 2, v_bkt_3640_);
v_buckets_x27_3645_ = lean_array_uset(v_buckets_3623_, v___x_3639_, v___x_3644_);
v___x_3646_ = lean_unsigned_to_nat(4u);
v___x_3647_ = lean_nat_mul(v_size_x27_3643_, v___x_3646_);
v___x_3648_ = lean_unsigned_to_nat(3u);
v___x_3649_ = lean_nat_div(v___x_3647_, v___x_3648_);
lean_dec(v___x_3647_);
v___x_3650_ = lean_array_get_size(v_buckets_x27_3645_);
v___x_3651_ = lean_nat_dec_le(v___x_3649_, v___x_3650_);
lean_dec(v___x_3649_);
if (v___x_3651_ == 0)
{
lean_object* v_val_3652_; lean_object* v___x_3654_; 
v_val_3652_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1___redArg(v_buckets_x27_3645_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 1, v_val_3652_);
lean_ctor_set(v___x_3625_, 0, v_size_x27_3643_);
v___x_3654_ = v___x_3625_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v_size_x27_3643_);
lean_ctor_set(v_reuseFailAlloc_3655_, 1, v_val_3652_);
v___x_3654_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
return v___x_3654_;
}
}
else
{
lean_object* v___x_3657_; 
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 1, v_buckets_x27_3645_);
lean_ctor_set(v___x_3625_, 0, v_size_x27_3643_);
v___x_3657_ = v___x_3625_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v_size_x27_3643_);
lean_ctor_set(v_reuseFailAlloc_3658_, 1, v_buckets_x27_3645_);
v___x_3657_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
return v___x_3657_;
}
}
}
else
{
lean_object* v___x_3659_; lean_object* v_buckets_x27_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3664_; 
lean_inc(v_bkt_3640_);
v___x_3659_ = lean_box(0);
v_buckets_x27_3660_ = lean_array_uset(v_buckets_3623_, v___x_3639_, v___x_3659_);
v___x_3661_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2___redArg(v_a_3620_, v_b_3621_, v_bkt_3640_);
v___x_3662_ = lean_array_uset(v_buckets_x27_3660_, v___x_3639_, v___x_3661_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 1, v___x_3662_);
v___x_3664_ = v___x_3625_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v_size_3622_);
lean_ctor_set(v_reuseFailAlloc_3665_, 1, v___x_3662_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg(lean_object* v_as_3667_, size_t v_sz_3668_, size_t v_i_3669_, lean_object* v_b_3670_){
_start:
{
uint8_t v___x_3672_; 
v___x_3672_ = lean_usize_dec_lt(v_i_3669_, v_sz_3668_);
if (v___x_3672_ == 0)
{
lean_object* v___x_3673_; 
v___x_3673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3673_, 0, v_b_3670_);
return v___x_3673_;
}
else
{
lean_object* v_fst_3674_; lean_object* v_snd_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3691_; 
v_fst_3674_ = lean_ctor_get(v_b_3670_, 0);
v_snd_3675_ = lean_ctor_get(v_b_3670_, 1);
v_isSharedCheck_3691_ = !lean_is_exclusive(v_b_3670_);
if (v_isSharedCheck_3691_ == 0)
{
v___x_3677_ = v_b_3670_;
v_isShared_3678_ = v_isSharedCheck_3691_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_snd_3675_);
lean_inc(v_fst_3674_);
lean_dec(v_b_3670_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3691_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v_a_3679_; lean_object* v_fvar_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3686_; 
v_a_3679_ = lean_array_uget_borrowed(v_as_3667_, v_i_3669_);
v_fvar_3680_ = lean_ctor_get(v_a_3679_, 0);
v___x_3681_ = l_Lean_Expr_fvarId_x21(v_fvar_3680_);
lean_inc(v_snd_3675_);
v___x_3682_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0___redArg(v_fst_3674_, v___x_3681_, v_snd_3675_);
v___x_3683_ = lean_unsigned_to_nat(1u);
v___x_3684_ = lean_nat_add(v_snd_3675_, v___x_3683_);
lean_dec(v_snd_3675_);
if (v_isShared_3678_ == 0)
{
lean_ctor_set(v___x_3677_, 1, v___x_3684_);
lean_ctor_set(v___x_3677_, 0, v___x_3682_);
v___x_3686_ = v___x_3677_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v___x_3682_);
lean_ctor_set(v_reuseFailAlloc_3690_, 1, v___x_3684_);
v___x_3686_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
size_t v___x_3687_; size_t v___x_3688_; 
v___x_3687_ = ((size_t)1ULL);
v___x_3688_ = lean_usize_add(v_i_3669_, v___x_3687_);
v_i_3669_ = v___x_3688_;
v_b_3670_ = v___x_3686_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg___boxed(lean_object* v_as_3692_, lean_object* v_sz_3693_, lean_object* v_i_3694_, lean_object* v_b_3695_, lean_object* v___y_3696_){
_start:
{
size_t v_sz_boxed_3697_; size_t v_i_boxed_3698_; lean_object* v_res_3699_; 
v_sz_boxed_3697_ = lean_unbox_usize(v_sz_3693_);
lean_dec(v_sz_3693_);
v_i_boxed_3698_ = lean_unbox_usize(v_i_3694_);
lean_dec(v_i_3694_);
v_res_3699_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg(v_as_3692_, v_sz_boxed_3697_, v_i_boxed_3698_, v_b_3695_);
lean_dec_ref(v_as_3692_);
return v_res_3699_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0(void){
_start:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; 
v___x_3700_ = lean_box(0);
v___x_3701_ = lean_unsigned_to_nat(16u);
v___x_3702_ = lean_mk_array(v___x_3701_, v___x_3700_);
return v___x_3702_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1(void){
_start:
{
lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; 
v___x_3703_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__0);
v___x_3704_ = lean_unsigned_to_nat(0u);
v___x_3705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3705_, 0, v___x_3704_);
lean_ctor_set(v___x_3705_, 1, v___x_3703_);
return v___x_3705_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2(void){
_start:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3706_ = lean_unsigned_to_nat(0u);
v___x_3707_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__1);
v___x_3708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3708_, 0, v___x_3707_);
lean_ctor_set(v___x_3708_, 1, v___x_3706_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets(lean_object* v_e_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_, lean_object* v_a_3713_, lean_object* v_a_3714_, lean_object* v_a_3715_, lean_object* v_a_3716_){
_start:
{
lean_object* v___x_3718_; lean_object* v_decls_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; uint8_t v___x_3722_; 
v___x_3718_ = lean_st_ref_get(v_a_3710_);
v_decls_3719_ = lean_ctor_get(v___x_3718_, 3);
lean_inc_ref(v_decls_3719_);
lean_dec(v___x_3718_);
v___x_3720_ = lean_array_get_size(v_decls_3719_);
v___x_3721_ = lean_unsigned_to_nat(0u);
v___x_3722_ = lean_nat_dec_eq(v___x_3720_, v___x_3721_);
if (v___x_3722_ == 0)
{
lean_object* v___x_3723_; lean_object* v___x_3724_; size_t v_sz_3725_; size_t v___x_3726_; lean_object* v___x_3727_; 
v___x_3723_ = lean_unsigned_to_nat(16u);
v___x_3724_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___closed__2);
v_sz_3725_ = lean_array_size(v_decls_3719_);
v___x_3726_ = ((size_t)0ULL);
v___x_3727_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg(v_decls_3719_, v_sz_3725_, v___x_3726_, v___x_3724_);
if (lean_obj_tag(v___x_3727_) == 0)
{
lean_object* v_a_3728_; lean_object* v_fst_3729_; lean_object* v___x_3731_; uint8_t v_isShared_3732_; uint8_t v_isSharedCheck_3779_; 
v_a_3728_ = lean_ctor_get(v___x_3727_, 0);
lean_inc(v_a_3728_);
lean_dec_ref_known(v___x_3727_, 1);
v_fst_3729_ = lean_ctor_get(v_a_3728_, 0);
v_isSharedCheck_3779_ = !lean_is_exclusive(v_a_3728_);
if (v_isSharedCheck_3779_ == 0)
{
lean_object* v_unused_3780_; 
v_unused_3780_ = lean_ctor_get(v_a_3728_, 1);
lean_dec(v_unused_3780_);
v___x_3731_ = v_a_3728_;
v_isShared_3732_ = v_isSharedCheck_3779_;
goto v_resetjp_3730_;
}
else
{
lean_inc(v_fst_3729_);
lean_dec(v_a_3728_);
v___x_3731_ = lean_box(0);
v_isShared_3732_ = v_isSharedCheck_3779_;
goto v_resetjp_3730_;
}
v_resetjp_3730_:
{
lean_object* v_a_3734_; lean_object* v___x_3758_; uint8_t v_debug_3759_; lean_object* v___x_3760_; lean_object* v___f_3761_; lean_object* v___x_3762_; lean_object* v_env_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3758_ = lean_st_ref_get(v_a_3712_);
v_debug_3759_ = lean_ctor_get_uint8(v___x_3758_, sizeof(void*)*11);
lean_dec(v___x_3758_);
v___x_3760_ = lean_box(v_debug_3759_);
lean_inc(v_fst_3729_);
v___f_3761_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___lam__0___boxed), 8, 6);
lean_closure_set(v___f_3761_, 0, v_e_3709_);
lean_closure_set(v___f_3761_, 1, v___x_3723_);
lean_closure_set(v___f_3761_, 2, v___x_3721_);
lean_closure_set(v___f_3761_, 3, v_fst_3729_);
lean_closure_set(v___f_3761_, 4, v___x_3720_);
lean_closure_set(v___f_3761_, 5, v___x_3760_);
v___x_3762_ = lean_st_ref_get(v_a_3716_);
v_env_3763_ = lean_ctor_get(v___x_3762_, 0);
lean_inc_ref(v_env_3763_);
lean_dec(v___x_3762_);
v___x_3764_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_3764_, 0, v_env_3763_);
lean_ctor_set_uint8(v___x_3764_, sizeof(void*)*1, v___x_3722_);
lean_ctor_set_uint8(v___x_3764_, sizeof(void*)*1 + 1, v___x_3722_);
v___x_3765_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_3761_, v___x_3764_, v_a_3712_);
if (lean_obj_tag(v___x_3765_) == 0)
{
lean_object* v_a_3766_; 
v_a_3766_ = lean_ctor_get(v___x_3765_, 0);
lean_inc(v_a_3766_);
lean_dec_ref_known(v___x_3765_, 1);
if (lean_obj_tag(v_a_3766_) == 0)
{
lean_object* v___x_3767_; lean_object* v___x_3768_; 
lean_dec_ref_known(v_a_3766_, 1);
v___x_3767_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv___redArg___closed__2);
v___x_3768_ = l_panic___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_substEnv_spec__1(v___x_3767_, v_a_3711_, v_a_3712_, v_a_3713_, v_a_3714_, v_a_3715_, v_a_3716_);
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v_a_3769_; 
v_a_3769_ = lean_ctor_get(v___x_3768_, 0);
lean_inc(v_a_3769_);
lean_dec_ref_known(v___x_3768_, 1);
v_a_3734_ = v_a_3769_;
goto v___jp_3733_;
}
else
{
lean_del_object(v___x_3731_);
lean_dec(v_fst_3729_);
lean_dec_ref(v_decls_3719_);
return v___x_3768_;
}
}
else
{
lean_object* v_a_3770_; 
v_a_3770_ = lean_ctor_get(v_a_3766_, 0);
lean_inc(v_a_3770_);
lean_dec_ref_known(v_a_3766_, 1);
v_a_3734_ = v_a_3770_;
goto v___jp_3733_;
}
}
else
{
lean_object* v_a_3771_; lean_object* v___x_3773_; uint8_t v_isShared_3774_; uint8_t v_isSharedCheck_3778_; 
lean_del_object(v___x_3731_);
lean_dec(v_fst_3729_);
lean_dec_ref(v_decls_3719_);
v_a_3771_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3778_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3778_ == 0)
{
v___x_3773_ = v___x_3765_;
v_isShared_3774_ = v_isSharedCheck_3778_;
goto v_resetjp_3772_;
}
else
{
lean_inc(v_a_3771_);
lean_dec(v___x_3765_);
v___x_3773_ = lean_box(0);
v_isShared_3774_ = v_isSharedCheck_3778_;
goto v_resetjp_3772_;
}
v_resetjp_3772_:
{
lean_object* v___x_3776_; 
if (v_isShared_3774_ == 0)
{
v___x_3776_ = v___x_3773_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3777_; 
v_reuseFailAlloc_3777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3777_, 0, v_a_3771_);
v___x_3776_ = v_reuseFailAlloc_3777_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
return v___x_3776_;
}
}
}
v___jp_3733_:
{
lean_object* v___x_3735_; lean_object* v___x_3737_; 
v___x_3735_ = l_Array_reverse___redArg(v_decls_3719_);
if (v_isShared_3732_ == 0)
{
lean_ctor_set(v___x_3731_, 1, v___x_3720_);
lean_ctor_set(v___x_3731_, 0, v_a_3734_);
v___x_3737_ = v___x_3731_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v_a_3734_);
lean_ctor_set(v_reuseFailAlloc_3757_, 1, v___x_3720_);
v___x_3737_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
size_t v_sz_3738_; lean_object* v___x_3739_; 
v_sz_3738_ = lean_array_size(v___x_3735_);
v___x_3739_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__7(v_fst_3729_, v___x_3720_, v___x_3735_, v_sz_3738_, v___x_3726_, v___x_3737_, v_a_3710_, v_a_3711_, v_a_3712_, v_a_3713_, v_a_3714_, v_a_3715_, v_a_3716_);
lean_dec_ref(v___x_3735_);
if (lean_obj_tag(v___x_3739_) == 0)
{
lean_object* v_a_3740_; lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3748_; 
v_a_3740_ = lean_ctor_get(v___x_3739_, 0);
v_isSharedCheck_3748_ = !lean_is_exclusive(v___x_3739_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3742_ = v___x_3739_;
v_isShared_3743_ = v_isSharedCheck_3748_;
goto v_resetjp_3741_;
}
else
{
lean_inc(v_a_3740_);
lean_dec(v___x_3739_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3748_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v_fst_3744_; lean_object* v___x_3746_; 
v_fst_3744_ = lean_ctor_get(v_a_3740_, 0);
lean_inc(v_fst_3744_);
lean_dec(v_a_3740_);
if (v_isShared_3743_ == 0)
{
lean_ctor_set(v___x_3742_, 0, v_fst_3744_);
v___x_3746_ = v___x_3742_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v_fst_3744_);
v___x_3746_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
return v___x_3746_;
}
}
}
else
{
lean_object* v_a_3749_; lean_object* v___x_3751_; uint8_t v_isShared_3752_; uint8_t v_isSharedCheck_3756_; 
v_a_3749_ = lean_ctor_get(v___x_3739_, 0);
v_isSharedCheck_3756_ = !lean_is_exclusive(v___x_3739_);
if (v_isSharedCheck_3756_ == 0)
{
v___x_3751_ = v___x_3739_;
v_isShared_3752_ = v_isSharedCheck_3756_;
goto v_resetjp_3750_;
}
else
{
lean_inc(v_a_3749_);
lean_dec(v___x_3739_);
v___x_3751_ = lean_box(0);
v_isShared_3752_ = v_isSharedCheck_3756_;
goto v_resetjp_3750_;
}
v_resetjp_3750_:
{
lean_object* v___x_3754_; 
if (v_isShared_3752_ == 0)
{
v___x_3754_ = v___x_3751_;
goto v_reusejp_3753_;
}
else
{
lean_object* v_reuseFailAlloc_3755_; 
v_reuseFailAlloc_3755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3755_, 0, v_a_3749_);
v___x_3754_ = v_reuseFailAlloc_3755_;
goto v_reusejp_3753_;
}
v_reusejp_3753_:
{
return v___x_3754_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3788_; 
lean_dec_ref(v_decls_3719_);
lean_dec_ref(v_e_3709_);
v_a_3781_ = lean_ctor_get(v___x_3727_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3727_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3783_ = v___x_3727_;
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_a_3781_);
lean_dec(v___x_3727_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___x_3786_; 
if (v_isShared_3784_ == 0)
{
v___x_3786_ = v___x_3783_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_a_3781_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
}
else
{
lean_object* v___x_3789_; 
lean_dec_ref(v_decls_3719_);
v___x_3789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3789_, 0, v_e_3709_);
return v___x_3789_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets___boxed(lean_object* v_e_3790_, lean_object* v_a_3791_, lean_object* v_a_3792_, lean_object* v_a_3793_, lean_object* v_a_3794_, lean_object* v_a_3795_, lean_object* v_a_3796_, lean_object* v_a_3797_, lean_object* v_a_3798_){
_start:
{
lean_object* v_res_3799_; 
v_res_3799_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets(v_e_3790_, v_a_3791_, v_a_3792_, v_a_3793_, v_a_3794_, v_a_3795_, v_a_3796_, v_a_3797_);
lean_dec(v_a_3797_);
lean_dec_ref(v_a_3796_);
lean_dec(v_a_3795_);
lean_dec_ref(v_a_3794_);
lean_dec(v_a_3793_);
lean_dec_ref(v_a_3792_);
lean_dec(v_a_3791_);
return v_res_3799_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0(lean_object* v_00_u03b2_3800_, lean_object* v_m_3801_, lean_object* v_a_3802_, lean_object* v_b_3803_){
_start:
{
lean_object* v___x_3804_; 
v___x_3804_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0___redArg(v_m_3801_, v_a_3802_, v_b_3803_);
return v___x_3804_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1(lean_object* v_as_3805_, size_t v_sz_3806_, size_t v_i_3807_, lean_object* v_b_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_){
_start:
{
lean_object* v___x_3817_; 
v___x_3817_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___redArg(v_as_3805_, v_sz_3806_, v_i_3807_, v_b_3808_);
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1___boxed(lean_object* v_as_3818_, lean_object* v_sz_3819_, lean_object* v_i_3820_, lean_object* v_b_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_){
_start:
{
size_t v_sz_boxed_3830_; size_t v_i_boxed_3831_; lean_object* v_res_3832_; 
v_sz_boxed_3830_ = lean_unbox_usize(v_sz_3819_);
lean_dec(v_sz_3819_);
v_i_boxed_3831_ = lean_unbox_usize(v_i_3820_);
lean_dec(v_i_3820_);
v_res_3832_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__1(v_as_3818_, v_sz_boxed_3830_, v_i_boxed_3831_, v_b_3821_, v___y_3822_, v___y_3823_, v___y_3824_, v___y_3825_, v___y_3826_, v___y_3827_, v___y_3828_);
lean_dec(v___y_3828_);
lean_dec_ref(v___y_3827_);
lean_dec(v___y_3826_);
lean_dec_ref(v___y_3825_);
lean_dec(v___y_3824_);
lean_dec_ref(v___y_3823_);
lean_dec(v___y_3822_);
lean_dec_ref(v_as_3818_);
return v_res_3832_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2(lean_object* v_00_u03b2_3833_, lean_object* v_m_3834_, lean_object* v_a_3835_){
_start:
{
lean_object* v___x_3836_; 
v___x_3836_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___redArg(v_m_3834_, v_a_3835_);
return v___x_3836_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2___boxed(lean_object* v_00_u03b2_3837_, lean_object* v_m_3838_, lean_object* v_a_3839_){
_start:
{
lean_object* v_res_3840_; 
v_res_3840_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2(v_00_u03b2_3837_, v_m_3838_, v_a_3839_);
lean_dec(v_a_3839_);
lean_dec_ref(v_m_3838_);
return v_res_3840_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0(lean_object* v_00_u03b2_3841_, lean_object* v_a_3842_, lean_object* v_x_3843_){
_start:
{
uint8_t v___x_3844_; 
v___x_3844_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___redArg(v_a_3842_, v_x_3843_);
return v___x_3844_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3845_, lean_object* v_a_3846_, lean_object* v_x_3847_){
_start:
{
uint8_t v_res_3848_; lean_object* v_r_3849_; 
v_res_3848_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__0(v_00_u03b2_3845_, v_a_3846_, v_x_3847_);
lean_dec(v_x_3847_);
lean_dec(v_a_3846_);
v_r_3849_ = lean_box(v_res_3848_);
return v_r_3849_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1(lean_object* v_00_u03b2_3850_, lean_object* v_data_3851_){
_start:
{
lean_object* v___x_3852_; 
v___x_3852_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1___redArg(v_data_3851_);
return v___x_3852_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2(lean_object* v_00_u03b2_3853_, lean_object* v_a_3854_, lean_object* v_b_3855_, lean_object* v_x_3856_){
_start:
{
lean_object* v___x_3857_; 
v___x_3857_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__2___redArg(v_a_3854_, v_b_3855_, v_x_3856_);
return v___x_3857_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5(lean_object* v_00_u03b2_3858_, lean_object* v_a_3859_, lean_object* v_x_3860_){
_start:
{
lean_object* v___x_3861_; 
v___x_3861_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___redArg(v_a_3859_, v_x_3860_);
return v___x_3861_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5___boxed(lean_object* v_00_u03b2_3862_, lean_object* v_a_3863_, lean_object* v_x_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__2_spec__5(v_00_u03b2_3862_, v_a_3863_, v_x_3864_);
lean_dec(v_x_3864_);
lean_dec(v_a_3863_);
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_3866_, lean_object* v_i_3867_, lean_object* v_source_3868_, lean_object* v_target_3869_){
_start:
{
lean_object* v___x_3870_; 
v___x_3870_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5___redArg(v_i_3867_, v_source_3868_, v_target_3869_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10(lean_object* v_00_u03b2_3871_, lean_object* v_x_3872_, lean_object* v_x_3873_){
_start:
{
lean_object* v___x_3874_; 
v___x_3874_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets_spec__0_spec__1_spec__5_spec__10___redArg(v_x_3872_, v_x_3873_);
return v___x_3874_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg(lean_object* v_msg_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_){
_start:
{
lean_object* v_ref_3881_; lean_object* v___x_3882_; lean_object* v_a_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3891_; 
v_ref_3881_ = lean_ctor_get(v___y_3878_, 2);
v___x_3882_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go_spec__5_spec__5(v_msg_3875_, v___y_3876_, v___y_3877_, v___y_3878_, v___y_3879_);
v_a_3883_ = lean_ctor_get(v___x_3882_, 0);
v_isSharedCheck_3891_ = !lean_is_exclusive(v___x_3882_);
if (v_isSharedCheck_3891_ == 0)
{
v___x_3885_ = v___x_3882_;
v_isShared_3886_ = v_isSharedCheck_3891_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_a_3883_);
lean_dec(v___x_3882_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3891_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3887_; lean_object* v___x_3889_; 
lean_inc(v_ref_3881_);
v___x_3887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3887_, 0, v_ref_3881_);
lean_ctor_set(v___x_3887_, 1, v_a_3883_);
if (v_isShared_3886_ == 0)
{
lean_ctor_set_tag(v___x_3885_, 1);
lean_ctor_set(v___x_3885_, 0, v___x_3887_);
v___x_3889_ = v___x_3885_;
goto v_reusejp_3888_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v___x_3887_);
v___x_3889_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3888_;
}
v_reusejp_3888_:
{
return v___x_3889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg___boxed(lean_object* v_msg_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_){
_start:
{
lean_object* v_res_3898_; 
v_res_3898_ = l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg(v_msg_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
lean_dec(v___y_3896_);
lean_dec_ref(v___y_3895_);
lean_dec(v___y_3894_);
lean_dec_ref(v___y_3893_);
return v_res_3898_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_liftLets___closed__0(void){
_start:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; 
v___x_3899_ = lean_box(0);
v___x_3900_ = lean_unsigned_to_nat(16u);
v___x_3901_ = lean_mk_array(v___x_3900_, v___x_3899_);
return v___x_3901_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_liftLets___closed__1(void){
_start:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; 
v___x_3902_ = lean_obj_once(&l_Lean_Meta_Sym_liftLets___closed__0, &l_Lean_Meta_Sym_liftLets___closed__0_once, _init_l_Lean_Meta_Sym_liftLets___closed__0);
v___x_3903_ = lean_unsigned_to_nat(0u);
v___x_3904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3904_, 0, v___x_3903_);
lean_ctor_set(v___x_3904_, 1, v___x_3902_);
return v___x_3904_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_liftLets___closed__3(void){
_start:
{
lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; 
v___x_3907_ = ((lean_object*)(l_Lean_Meta_Sym_liftLets___closed__2));
v___x_3908_ = lean_obj_once(&l_Lean_Meta_Sym_liftLets___closed__1, &l_Lean_Meta_Sym_liftLets___closed__1_once, _init_l_Lean_Meta_Sym_liftLets___closed__1);
v___x_3909_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3909_, 0, v___x_3908_);
lean_ctor_set(v___x_3909_, 1, v___x_3908_);
lean_ctor_set(v___x_3909_, 2, v___x_3908_);
lean_ctor_set(v___x_3909_, 3, v___x_3907_);
lean_ctor_set(v___x_3909_, 4, v___x_3908_);
return v___x_3909_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_liftLets___closed__5(void){
_start:
{
lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___x_3911_ = ((lean_object*)(l_Lean_Meta_Sym_liftLets___closed__4));
v___x_3912_ = l_Lean_stringToMessageData(v___x_3911_);
return v___x_3912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLets(lean_object* v_e_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_, lean_object* v_a_3918_, lean_object* v_a_3919_){
_start:
{
lean_object* v___y_3922_; lean_object* v___y_3923_; lean_object* v___y_3934_; lean_object* v___y_3935_; lean_object* v___y_3936_; lean_object* v___y_3937_; lean_object* v___y_3938_; lean_object* v___y_3939_; uint8_t v___x_3946_; 
v___x_3946_ = l_Lean_Expr_hasLooseBVars(v_e_3913_);
if (v___x_3946_ == 0)
{
v___y_3934_ = v_a_3914_;
v___y_3935_ = v_a_3915_;
v___y_3936_ = v_a_3916_;
v___y_3937_ = v_a_3917_;
v___y_3938_ = v_a_3918_;
v___y_3939_ = v_a_3919_;
goto v___jp_3933_;
}
else
{
lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v_a_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3956_; 
lean_dec_ref(v_e_3913_);
v___x_3947_ = lean_obj_once(&l_Lean_Meta_Sym_liftLets___closed__5, &l_Lean_Meta_Sym_liftLets___closed__5_once, _init_l_Lean_Meta_Sym_liftLets___closed__5);
v___x_3948_ = l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg(v___x_3947_, v_a_3916_, v_a_3917_, v_a_3918_, v_a_3919_);
v_a_3949_ = lean_ctor_get(v___x_3948_, 0);
v_isSharedCheck_3956_ = !lean_is_exclusive(v___x_3948_);
if (v_isSharedCheck_3956_ == 0)
{
v___x_3951_ = v___x_3948_;
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_a_3949_);
lean_dec(v___x_3948_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3954_; 
if (v_isShared_3952_ == 0)
{
v___x_3954_ = v___x_3951_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v_a_3949_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
return v___x_3954_;
}
}
}
v___jp_3921_:
{
if (lean_obj_tag(v___y_3923_) == 0)
{
lean_object* v_a_3924_; lean_object* v___x_3926_; uint8_t v_isShared_3927_; uint8_t v_isSharedCheck_3932_; 
v_a_3924_ = lean_ctor_get(v___y_3923_, 0);
v_isSharedCheck_3932_ = !lean_is_exclusive(v___y_3923_);
if (v_isSharedCheck_3932_ == 0)
{
v___x_3926_ = v___y_3923_;
v_isShared_3927_ = v_isSharedCheck_3932_;
goto v_resetjp_3925_;
}
else
{
lean_inc(v_a_3924_);
lean_dec(v___y_3923_);
v___x_3926_ = lean_box(0);
v_isShared_3927_ = v_isSharedCheck_3932_;
goto v_resetjp_3925_;
}
v_resetjp_3925_:
{
lean_object* v___x_3928_; lean_object* v___x_3930_; 
v___x_3928_ = lean_st_ref_get(v___y_3922_);
lean_dec(v___y_3922_);
lean_dec(v___x_3928_);
if (v_isShared_3927_ == 0)
{
v___x_3930_ = v___x_3926_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v_a_3924_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
}
}
}
else
{
lean_dec(v___y_3922_);
return v___y_3923_;
}
}
v___jp_3933_:
{
lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; 
v___x_3940_ = lean_obj_once(&l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3, &l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3_once, _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go___closed__3);
v___x_3941_ = lean_obj_once(&l_Lean_Meta_Sym_liftLets___closed__3, &l_Lean_Meta_Sym_liftLets___closed__3_once, _init_l_Lean_Meta_Sym_liftLets___closed__3);
v___x_3942_ = lean_st_mk_ref(v___x_3941_);
v___x_3943_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_go(v___x_3940_, v_e_3913_, v___x_3942_, v___y_3934_, v___y_3935_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_);
if (lean_obj_tag(v___x_3943_) == 0)
{
lean_object* v_a_3944_; lean_object* v___x_3945_; 
v_a_3944_ = lean_ctor_get(v___x_3943_, 0);
lean_inc(v_a_3944_);
lean_dec_ref_known(v___x_3943_, 1);
v___x_3945_ = l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_mkLets(v_a_3944_, v___x_3942_, v___y_3934_, v___y_3935_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_);
v___y_3922_ = v___x_3942_;
v___y_3923_ = v___x_3945_;
goto v___jp_3921_;
}
else
{
v___y_3922_ = v___x_3942_;
v___y_3923_ = v___x_3943_;
goto v___jp_3921_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_liftLets___boxed(lean_object* v_e_3957_, lean_object* v_a_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_, lean_object* v_a_3964_){
_start:
{
lean_object* v_res_3965_; 
v_res_3965_ = l_Lean_Meta_Sym_liftLets(v_e_3957_, v_a_3958_, v_a_3959_, v_a_3960_, v_a_3961_, v_a_3962_, v_a_3963_);
lean_dec(v_a_3963_);
lean_dec_ref(v_a_3962_);
lean_dec(v_a_3961_);
lean_dec_ref(v_a_3960_);
lean_dec(v_a_3959_);
lean_dec_ref(v_a_3958_);
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0(lean_object* v_00_u03b1_3966_, lean_object* v_msg_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_){
_start:
{
lean_object* v___x_3975_; 
v___x_3975_ = l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___redArg(v_msg_3967_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
return v___x_3975_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0___boxed(lean_object* v_00_u03b1_3976_, lean_object* v_msg_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_){
_start:
{
lean_object* v_res_3985_; 
v_res_3985_ = l_Lean_throwError___at___00Lean_Meta_Sym_liftLets_spec__0(v_00_u03b1_3976_, v_msg_3977_, v___y_3978_, v___y_3979_, v___y_3980_, v___y_3981_, v___y_3982_, v___y_3983_);
lean_dec(v___y_3983_);
lean_dec_ref(v___y_3982_);
lean_dec(v___y_3981_);
lean_dec_ref(v___y_3980_);
lean_dec(v___y_3979_);
lean_dec_ref(v___y_3978_);
return v_res_3985_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_LiftLet(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default = _init_l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default();
lean_mark_persistent(l_Lean_Meta_Sym_LiftLet_instInhabitedDecl_default);
l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instInhabitedDecl = _init_l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instInhabitedDecl();
lean_mark_persistent(l___private_Lean_Meta_Sym_LiftLet_0__Lean_Meta_Sym_LiftLet_instInhabitedDecl);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_LiftLet(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_LiftLet(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_LiftLet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_LiftLet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_LiftLet(builtin);
}
#ifdef __cplusplus
}
#endif

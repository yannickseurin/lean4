// Lean compiler output
// Module: Lean.Meta.Tactic.Lets
// Imports: public import Lean.Meta.Tactic.Replace public import Lean.Meta.LetToHave
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAtomic(lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_isLet___boxed(lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForallWithParamInfos(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedExprParamInfo_default;
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableBool___lam__0___boxed(lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_instHashableProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLet(lean_object*);
uint8_t l_Lean_Expr_isMData(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_left(size_t, size_t);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withExistingLocalDecls___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_withReverted___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceLocalDeclDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_instInhabitedState;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_extractable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_ExtractLets_flushDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value),((lean_object*)&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_flushDecls___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_flushDecls___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5_value;
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8_value),((lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6_value)}};
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ExtractLets_containsLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_isLet___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ExtractLets_containsLet___closed__0 = (const lean_object*)&l_Lean_Meta_ExtractLets_containsLet___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_containsLet(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_containsLet___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instHashableBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7 = (const lean_object*)&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed__const__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "let expression expected"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Expr.updateLetE!"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4_value;
static const lean_string_object l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.ExtractLets.extractCore"};
static const lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3_value;
static const lean_string_object l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Meta.Tactic.Lets"};
static const lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_liftLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_liftLets___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "made no progress"};
static const lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_extractLets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extract_lets"};
static const lean_object* l_Lean_MVarId_extractLets___closed__0 = (const lean_object*)&l_Lean_MVarId_extractLets___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_extractLets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_extractLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 33, 143, 120, 246, 234, 114, 64)}};
static const lean_object* l_Lean_MVarId_extractLets___closed__1 = (const lean_object*)&l_Lean_MVarId_extractLets___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed(lean_object**);
static const lean_string_object l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unexpected auxiliary target"};
static const lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0 = (const lean_object*)&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0_value)}};
static const lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1 = (const lean_object*)&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2;
static lean_once_cell_t l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_liftLets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lift_lets"};
static const lean_object* l_Lean_MVarId_liftLets___closed__0 = (const lean_object*)&l_Lean_MVarId_liftLets___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_liftLets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_liftLets___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 227, 82, 255, 128, 171, 101)}};
static const lean_object* l_Lean_MVarId_liftLets___closed__1 = (const lean_object*)&l_Lean_MVarId_liftLets___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_letToHave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "let_to_have"};
static const lean_object* l_Lean_MVarId_letToHave___closed__0 = (const lean_object*)&l_Lean_MVarId_letToHave___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_letToHave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_letToHave___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 121, 21, 93, 142, 174, 18, 85)}};
static const lean_object* l_Lean_MVarId_letToHave___closed__1 = (const lean_object*)&l_Lean_MVarId_letToHave___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_unsigned_to_nat(16u);
v___x_5_ = lean_mk_array(v___x_4_, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1);
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_9_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2);
v___x_10_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_11_ = lean_box(0);
v___x_12_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_10_);
lean_ctor_set(v___x_12_, 2, v___x_9_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Meta_ExtractLets_instInhabitedState_default;
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg(lean_object* v_a_15_, lean_object* v_a_16_){
_start:
{
lean_object* v___x_18_; uint8_t v_onlyGivenNames_19_; 
v___x_18_ = lean_st_ref_get(v_a_16_);
v_onlyGivenNames_19_ = lean_ctor_get_uint8(v_a_15_, 8);
if (v_onlyGivenNames_19_ == 0)
{
uint8_t v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
lean_dec(v___x_18_);
v___x_20_ = 1;
v___x_21_ = lean_box(v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
else
{
lean_object* v_givenNames_23_; uint8_t v___x_24_; 
v_givenNames_23_ = lean_ctor_get(v___x_18_, 0);
lean_inc(v_givenNames_23_);
lean_dec(v___x_18_);
v___x_24_ = l_List_isEmpty___redArg(v_givenNames_23_);
lean_dec(v_givenNames_23_);
if (v___x_24_ == 0)
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_box(v_onlyGivenNames_19_);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
else
{
uint8_t v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = 0;
v___x_28_ = lean_box(v___x_27_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg___boxed(lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_30_, v_a_31_);
lean_dec(v_a_31_);
lean_dec_ref(v_a_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName(lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_34_, v_a_36_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___boxed(lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Meta_ExtractLets_hasNextName(v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_);
lean_dec(v_a_49_);
lean_dec_ref(v_a_48_);
lean_dec(v_a_47_);
lean_dec_ref(v_a_46_);
lean_dec(v_a_45_);
lean_dec(v_a_44_);
lean_dec_ref(v_a_43_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg(lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v___x_60_; lean_object* v_givenNames_61_; 
v___x_60_ = lean_st_ref_get(v_a_58_);
v_givenNames_61_ = lean_ctor_get(v___x_60_, 0);
lean_inc(v_givenNames_61_);
if (lean_obj_tag(v_givenNames_61_) == 0)
{
uint8_t v_onlyGivenNames_62_; 
lean_dec(v___x_60_);
v_onlyGivenNames_62_ = lean_ctor_get_uint8(v_a_57_, 8);
if (v_onlyGivenNames_62_ == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = ((lean_object*)(l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2));
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
else
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_box(0);
v___x_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
else
{
lean_object* v_decls_67_; lean_object* v_valueMap_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_80_; 
v_decls_67_ = lean_ctor_get(v___x_60_, 1);
v_valueMap_68_ = lean_ctor_get(v___x_60_, 2);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_60_);
if (v_isSharedCheck_80_ == 0)
{
lean_object* v_unused_81_; 
v_unused_81_ = lean_ctor_get(v___x_60_, 0);
lean_dec(v_unused_81_);
v___x_70_ = v___x_60_;
v_isShared_71_ = v_isSharedCheck_80_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_valueMap_68_);
lean_inc(v_decls_67_);
lean_dec(v___x_60_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_80_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v_head_72_; lean_object* v_tail_73_; lean_object* v___x_75_; 
v_head_72_ = lean_ctor_get(v_givenNames_61_, 0);
lean_inc(v_head_72_);
v_tail_73_ = lean_ctor_get(v_givenNames_61_, 1);
lean_inc(v_tail_73_);
lean_dec_ref_known(v_givenNames_61_, 2);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v_tail_73_);
v___x_75_ = v___x_70_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_tail_73_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v_decls_67_);
lean_ctor_set(v_reuseFailAlloc_79_, 2, v_valueMap_68_);
v___x_75_ = v_reuseFailAlloc_79_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = lean_st_ref_swap(v_a_58_, v___x_75_);
lean_dec(v___x_76_);
v___x_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_77_, 0, v_head_72_);
v___x_78_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
return v___x_78_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___boxed(lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_82_, v_a_83_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f(lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_86_, v_a_88_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___boxed(lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Meta_ExtractLets_nextName_x3f(v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
lean_dec(v_a_101_);
lean_dec_ref(v_a_100_);
lean_dec(v_a_99_);
lean_dec_ref(v_a_98_);
lean_dec(v_a_97_);
lean_dec(v_a_96_);
lean_dec_ref(v_a_95_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(lean_object* v_binderName_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
lean_object* v___x_113_; lean_object* v_a_114_; 
v___x_113_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_108_, v_a_109_);
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
if (lean_obj_tag(v_a_114_) == 1)
{
lean_object* v_val_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_165_; 
v_val_115_ = lean_ctor_get(v_a_114_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v_a_114_);
if (v_isSharedCheck_165_ == 0)
{
v___x_117_ = v_a_114_;
v_isShared_118_ = v_isSharedCheck_165_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_val_115_);
lean_dec(v_a_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_165_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = ((lean_object*)(l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1));
v___x_120_ = lean_name_eq(v_val_115_, v___x_119_);
if (v___x_120_ == 0)
{
lean_del_object(v___x_117_);
lean_dec(v_val_115_);
lean_dec(v_binderName_107_);
return v___x_113_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = l_Lean_Name_isAnonymous(v_binderName_107_);
if (v___x_121_ == 0)
{
uint8_t v_preserveBinderNames_122_; 
v_preserveBinderNames_122_ = lean_ctor_get_uint8(v_a_108_, 9);
if (v_preserveBinderNames_122_ == 0)
{
uint8_t v___x_123_; 
v___x_123_ = l_Lean_Name_hasMacroScopes(v_val_115_);
lean_dec(v_val_115_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; 
lean_dec_ref(v___x_113_);
v___x_124_ = l_Lean_Core_mkFreshUserName(v_binderName_107_, v_a_110_, v_a_111_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_135_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_135_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_135_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_135_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v_a_125_);
v___x_130_ = v___x_117_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_125_);
v___x_130_ = v_reuseFailAlloc_134_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
lean_object* v___x_132_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_130_);
v___x_132_ = v___x_127_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
lean_del_object(v___x_117_);
v_a_136_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_124_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_124_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
else
{
lean_del_object(v___x_117_);
lean_dec(v_binderName_107_);
return v___x_113_;
}
}
else
{
lean_del_object(v___x_117_);
lean_dec(v_val_115_);
lean_dec(v_binderName_107_);
return v___x_113_;
}
}
else
{
lean_object* v___x_144_; lean_object* v___x_145_; 
lean_dec(v_val_115_);
lean_dec_ref(v___x_113_);
lean_dec(v_binderName_107_);
v___x_144_ = ((lean_object*)(l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1));
v___x_145_ = l_Lean_Core_mkFreshUserName(v___x_144_, v_a_110_, v_a_111_);
if (lean_obj_tag(v___x_145_) == 0)
{
lean_object* v_a_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_156_; 
v_a_146_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_156_ == 0)
{
v___x_148_ = v___x_145_;
v_isShared_149_ = v_isSharedCheck_156_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_a_146_);
lean_dec(v___x_145_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_156_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_118_ == 0)
{
lean_ctor_set(v___x_117_, 0, v_a_146_);
v___x_151_ = v___x_117_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_146_);
v___x_151_ = v_reuseFailAlloc_155_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
lean_object* v___x_153_; 
if (v_isShared_149_ == 0)
{
lean_ctor_set(v___x_148_, 0, v___x_151_);
v___x_153_ = v___x_148_;
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
else
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
lean_del_object(v___x_117_);
v_a_157_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v___x_145_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_145_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_a_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_173_; 
lean_dec(v_a_114_);
lean_dec(v_binderName_107_);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_173_ == 0)
{
lean_object* v_unused_174_; 
v_unused_174_ = lean_ctor_get(v___x_113_, 0);
lean_dec(v_unused_174_);
v___x_167_ = v___x_113_;
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
else
{
lean_dec(v___x_113_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v___x_171_; 
v___x_169_ = lean_box(0);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_169_);
v___x_171_ = v___x_167_;
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___boxed(lean_object* v_binderName_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_binderName_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
lean_dec(v_a_179_);
lean_dec_ref(v_a_178_);
lean_dec(v_a_177_);
lean_dec_ref(v_a_176_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(lean_object* v_binderName_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_binderName_182_, v_a_183_, v_a_185_, v_a_188_, v_a_189_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___boxed(lean_object* v_binderName_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(v_binderName_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
lean_dec(v_a_199_);
lean_dec_ref(v_a_198_);
lean_dec(v_a_197_);
lean_dec_ref(v_a_196_);
lean_dec(v_a_195_);
lean_dec(v_a_194_);
lean_dec_ref(v_a_193_);
return v_res_201_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(lean_object* v_a_202_, lean_object* v_x_203_){
_start:
{
if (lean_obj_tag(v_x_203_) == 0)
{
uint8_t v___x_204_; 
v___x_204_ = 0;
return v___x_204_;
}
else
{
lean_object* v_head_205_; lean_object* v_tail_206_; uint8_t v___x_207_; 
v_head_205_ = lean_ctor_get(v_x_203_, 0);
v_tail_206_ = lean_ctor_get(v_x_203_, 1);
v___x_207_ = lean_expr_eqv(v_a_202_, v_head_205_);
if (v___x_207_ == 0)
{
v_x_203_ = v_tail_206_;
goto _start;
}
else
{
return v___x_207_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0___boxed(lean_object* v_a_209_, lean_object* v_x_210_){
_start:
{
uint8_t v_res_211_; lean_object* v_r_212_; 
v_res_211_ = l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(v_a_209_, v_x_210_);
lean_dec(v_x_210_);
lean_dec_ref(v_a_209_);
v_r_212_ = lean_box(v_res_211_);
return v_r_212_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(lean_object* v_fvars_213_, lean_object* v_e_214_){
_start:
{
uint8_t v___x_215_; lean_object* v_d_217_; lean_object* v_b_218_; 
v___x_215_ = l_Lean_Expr_hasFVar(v_e_214_);
if (v___x_215_ == 0)
{
lean_dec_ref(v_e_214_);
return v___x_215_;
}
else
{
switch(lean_obj_tag(v_e_214_))
{
case 7:
{
lean_object* v_binderType_221_; lean_object* v_body_222_; 
v_binderType_221_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_binderType_221_);
v_body_222_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_body_222_);
lean_dec_ref_known(v_e_214_, 3);
v_d_217_ = v_binderType_221_;
v_b_218_ = v_body_222_;
goto v___jp_216_;
}
case 6:
{
lean_object* v_binderType_223_; lean_object* v_body_224_; 
v_binderType_223_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_binderType_223_);
v_body_224_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_body_224_);
lean_dec_ref_known(v_e_214_, 3);
v_d_217_ = v_binderType_223_;
v_b_218_ = v_body_224_;
goto v___jp_216_;
}
case 10:
{
lean_object* v_expr_225_; 
v_expr_225_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_expr_225_);
lean_dec_ref_known(v_e_214_, 2);
v_e_214_ = v_expr_225_;
goto _start;
}
case 8:
{
lean_object* v_type_227_; lean_object* v_value_228_; lean_object* v_body_229_; uint8_t v___x_230_; 
v_type_227_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_type_227_);
v_value_228_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_value_228_);
v_body_229_ = lean_ctor_get(v_e_214_, 3);
lean_inc_ref(v_body_229_);
lean_dec_ref_known(v_e_214_, 4);
v___x_230_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_type_227_);
if (v___x_230_ == 0)
{
uint8_t v___x_231_; 
v___x_231_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_value_228_);
if (v___x_231_ == 0)
{
v_e_214_ = v_body_229_;
goto _start;
}
else
{
lean_dec_ref(v_body_229_);
return v___x_215_;
}
}
else
{
lean_dec_ref(v_body_229_);
lean_dec_ref(v_value_228_);
return v___x_215_;
}
}
case 5:
{
lean_object* v_fn_233_; lean_object* v_arg_234_; uint8_t v___x_235_; 
v_fn_233_ = lean_ctor_get(v_e_214_, 0);
lean_inc_ref(v_fn_233_);
v_arg_234_ = lean_ctor_get(v_e_214_, 1);
lean_inc_ref(v_arg_234_);
lean_dec_ref_known(v_e_214_, 2);
v___x_235_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_fn_233_);
if (v___x_235_ == 0)
{
v_e_214_ = v_arg_234_;
goto _start;
}
else
{
lean_dec_ref(v_arg_234_);
return v___x_215_;
}
}
case 11:
{
lean_object* v_struct_237_; 
v_struct_237_ = lean_ctor_get(v_e_214_, 2);
lean_inc_ref(v_struct_237_);
lean_dec_ref_known(v_e_214_, 3);
v_e_214_ = v_struct_237_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
v_fvarId_239_ = lean_ctor_get(v_e_214_, 0);
lean_inc(v_fvarId_239_);
lean_dec_ref_known(v_e_214_, 1);
v___x_240_ = l_Lean_Expr_fvar___override(v_fvarId_239_);
v___x_241_ = l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(v___x_240_, v_fvars_213_);
lean_dec_ref(v___x_240_);
return v___x_241_;
}
default: 
{
uint8_t v___x_242_; 
lean_dec_ref(v_e_214_);
v___x_242_ = 0;
return v___x_242_;
}
}
}
v___jp_216_:
{
uint8_t v___x_219_; 
v___x_219_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_213_, v_d_217_);
if (v___x_219_ == 0)
{
v_e_214_ = v_b_218_;
goto _start;
}
else
{
lean_dec_ref(v_b_218_);
return v___x_215_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1___boxed(lean_object* v_fvars_243_, lean_object* v_e_244_){
_start:
{
uint8_t v_res_245_; lean_object* v_r_246_; 
v_res_245_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_243_, v_e_244_);
lean_dec(v_fvars_243_);
v_r_246_ = lean_box(v_res_245_);
return v_r_246_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_extractable(lean_object* v_fvars_247_, lean_object* v_e_248_){
_start:
{
uint8_t v___x_249_; 
v___x_249_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_247_, v_e_248_);
if (v___x_249_ == 0)
{
uint8_t v___x_250_; 
v___x_250_ = 1;
return v___x_250_;
}
else
{
uint8_t v___x_251_; 
v___x_251_ = 0;
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractable___boxed(lean_object* v_fvars_252_, lean_object* v_e_253_){
_start:
{
uint8_t v_res_254_; lean_object* v_r_255_; 
v_res_254_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_252_, v_e_253_);
lean_dec(v_fvars_252_);
v_r_255_ = lean_box(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg(lean_object* v_fvars_256_, lean_object* v_n_257_, lean_object* v_t_258_, lean_object* v_v_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v___y_266_; lean_object* v___x_271_; lean_object* v_a_272_; uint8_t v___x_273_; 
v___x_271_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_260_, v_a_261_);
v_a_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_272_);
lean_dec_ref(v___x_271_);
v___x_273_ = lean_unbox(v_a_272_);
lean_dec(v_a_272_);
if (v___x_273_ == 0)
{
lean_dec_ref(v_v_259_);
lean_dec_ref(v_t_258_);
v___y_266_ = v_a_260_;
goto v___jp_265_;
}
else
{
uint8_t v___x_274_; 
v___x_274_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_256_, v_t_258_);
if (v___x_274_ == 0)
{
lean_dec_ref(v_v_259_);
v___y_266_ = v_a_260_;
goto v___jp_265_;
}
else
{
uint8_t v___x_275_; 
v___x_275_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_256_, v_v_259_);
if (v___x_275_ == 0)
{
v___y_266_ = v_a_260_;
goto v___jp_265_;
}
else
{
lean_object* v___x_276_; 
lean_inc(v_n_257_);
v___x_276_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_n_257_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_287_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_287_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_287_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_287_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
if (lean_obj_tag(v_a_277_) == 1)
{
lean_object* v_val_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_285_; 
lean_dec(v_n_257_);
v_val_281_ = lean_ctor_get(v_a_277_, 0);
lean_inc(v_val_281_);
lean_dec_ref_known(v_a_277_, 1);
v___x_282_ = lean_box(v___x_274_);
v___x_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v_val_281_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_283_);
v___x_285_ = v___x_279_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_283_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
else
{
lean_del_object(v___x_279_);
lean_dec(v_a_277_);
v___y_266_ = v_a_260_;
goto v___jp_265_;
}
}
}
else
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
lean_dec(v_n_257_);
v_a_288_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_295_ == 0)
{
v___x_290_ = v___x_276_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_276_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
}
}
v___jp_265_:
{
uint8_t v_lift_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v_lift_267_ = lean_ctor_get_uint8(v___y_266_, 10);
v___x_268_ = lean_box(v_lift_267_);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v_n_257_);
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
return v___x_270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg___boxed(lean_object* v_fvars_296_, lean_object* v_n_297_, lean_object* v_t_298_, lean_object* v_v_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_296_, v_n_297_, v_t_298_, v_v_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
lean_dec(v_fvars_296_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet(lean_object* v_fvars_306_, lean_object* v_n_307_, lean_object* v_t_308_, lean_object* v_v_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_306_, v_n_307_, v_t_308_, v_v_309_, v_a_310_, v_a_312_, v_a_315_, v_a_316_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___boxed(lean_object* v_fvars_319_, lean_object* v_n_320_, lean_object* v_t_321_, lean_object* v_v_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lean_Meta_ExtractLets_isExtractableLet(v_fvars_319_, v_n_320_, v_t_321_, v_v_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_);
lean_dec(v_a_329_);
lean_dec_ref(v_a_328_);
lean_dec(v_a_327_);
lean_dec_ref(v_a_326_);
lean_dec(v_a_325_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_fvars_319_);
return v_res_331_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(lean_object* v_a_332_, lean_object* v_x_333_){
_start:
{
if (lean_obj_tag(v_x_333_) == 0)
{
uint8_t v___x_334_; 
v___x_334_ = 0;
return v___x_334_;
}
else
{
lean_object* v_key_335_; lean_object* v_tail_336_; uint8_t v___x_337_; 
v_key_335_ = lean_ctor_get(v_x_333_, 0);
v_tail_336_ = lean_ctor_get(v_x_333_, 2);
v___x_337_ = l_Lean_ExprStructEq_beq(v_key_335_, v_a_332_);
if (v___x_337_ == 0)
{
v_x_333_ = v_tail_336_;
goto _start;
}
else
{
return v___x_337_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg___boxed(lean_object* v_a_339_, lean_object* v_x_340_){
_start:
{
uint8_t v_res_341_; lean_object* v_r_342_; 
v_res_341_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_339_, v_x_340_);
lean_dec(v_x_340_);
lean_dec_ref(v_a_339_);
v_r_342_ = lean_box(v_res_341_);
return v_r_342_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(lean_object* v_a_343_, lean_object* v_b_344_, lean_object* v_x_345_){
_start:
{
if (lean_obj_tag(v_x_345_) == 0)
{
lean_dec(v_b_344_);
lean_dec_ref(v_a_343_);
return v_x_345_;
}
else
{
lean_object* v_key_346_; lean_object* v_value_347_; lean_object* v_tail_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_360_; 
v_key_346_ = lean_ctor_get(v_x_345_, 0);
v_value_347_ = lean_ctor_get(v_x_345_, 1);
v_tail_348_ = lean_ctor_get(v_x_345_, 2);
v_isSharedCheck_360_ = !lean_is_exclusive(v_x_345_);
if (v_isSharedCheck_360_ == 0)
{
v___x_350_ = v_x_345_;
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_tail_348_);
lean_inc(v_value_347_);
lean_inc(v_key_346_);
lean_dec(v_x_345_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_360_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
uint8_t v___x_352_; 
v___x_352_ = l_Lean_ExprStructEq_beq(v_key_346_, v_a_343_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_353_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_343_, v_b_344_, v_tail_348_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 2, v___x_353_);
v___x_355_ = v___x_350_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_key_346_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v_value_347_);
lean_ctor_set(v_reuseFailAlloc_356_, 2, v___x_353_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
else
{
lean_object* v___x_358_; 
lean_dec(v_value_347_);
lean_dec(v_key_346_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 1, v_b_344_);
lean_ctor_set(v___x_350_, 0, v_a_343_);
v___x_358_ = v___x_350_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_343_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_b_344_);
lean_ctor_set(v_reuseFailAlloc_359_, 2, v_tail_348_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_361_, lean_object* v_x_362_){
_start:
{
if (lean_obj_tag(v_x_362_) == 0)
{
return v_x_361_;
}
else
{
lean_object* v_key_363_; lean_object* v_value_364_; lean_object* v_tail_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_388_; 
v_key_363_ = lean_ctor_get(v_x_362_, 0);
v_value_364_ = lean_ctor_get(v_x_362_, 1);
v_tail_365_ = lean_ctor_get(v_x_362_, 2);
v_isSharedCheck_388_ = !lean_is_exclusive(v_x_362_);
if (v_isSharedCheck_388_ == 0)
{
v___x_367_ = v_x_362_;
v_isShared_368_ = v_isSharedCheck_388_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_tail_365_);
lean_inc(v_value_364_);
lean_inc(v_key_363_);
lean_dec(v_x_362_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_388_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; uint64_t v___x_370_; uint64_t v___x_371_; uint64_t v___x_372_; uint64_t v_fold_373_; uint64_t v___x_374_; uint64_t v___x_375_; uint64_t v___x_376_; size_t v___x_377_; size_t v___x_378_; size_t v___x_379_; size_t v___x_380_; size_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_384_; 
v___x_369_ = lean_array_get_size(v_x_361_);
v___x_370_ = l_Lean_ExprStructEq_hash(v_key_363_);
v___x_371_ = 32ULL;
v___x_372_ = lean_uint64_shift_right(v___x_370_, v___x_371_);
v_fold_373_ = lean_uint64_xor(v___x_370_, v___x_372_);
v___x_374_ = 16ULL;
v___x_375_ = lean_uint64_shift_right(v_fold_373_, v___x_374_);
v___x_376_ = lean_uint64_xor(v_fold_373_, v___x_375_);
v___x_377_ = lean_uint64_to_usize(v___x_376_);
v___x_378_ = lean_usize_of_nat(v___x_369_);
v___x_379_ = ((size_t)1ULL);
v___x_380_ = lean_usize_sub(v___x_378_, v___x_379_);
v___x_381_ = lean_usize_land(v___x_377_, v___x_380_);
v___x_382_ = lean_array_uget_borrowed(v_x_361_, v___x_381_);
lean_inc(v___x_382_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 2, v___x_382_);
v___x_384_ = v___x_367_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_key_363_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v_value_364_);
lean_ctor_set(v_reuseFailAlloc_387_, 2, v___x_382_);
v___x_384_ = v_reuseFailAlloc_387_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_385_; 
v___x_385_ = lean_array_uset(v_x_361_, v___x_381_, v___x_384_);
v_x_361_ = v___x_385_;
v_x_362_ = v_tail_365_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(lean_object* v_i_389_, lean_object* v_source_390_, lean_object* v_target_391_){
_start:
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = lean_array_get_size(v_source_390_);
v___x_393_ = lean_nat_dec_lt(v_i_389_, v___x_392_);
if (v___x_393_ == 0)
{
lean_dec_ref(v_source_390_);
lean_dec(v_i_389_);
return v_target_391_;
}
else
{
lean_object* v_es_394_; lean_object* v___x_395_; lean_object* v_source_396_; lean_object* v_target_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v_es_394_ = lean_array_fget(v_source_390_, v_i_389_);
v___x_395_ = lean_box(0);
v_source_396_ = lean_array_fset(v_source_390_, v_i_389_, v___x_395_);
v_target_397_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(v_target_391_, v_es_394_);
v___x_398_ = lean_unsigned_to_nat(1u);
v___x_399_ = lean_nat_add(v_i_389_, v___x_398_);
lean_dec(v_i_389_);
v_i_389_ = v___x_399_;
v_source_390_ = v_source_396_;
v_target_391_ = v_target_397_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(lean_object* v_data_401_){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v_nbuckets_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_402_ = lean_array_get_size(v_data_401_);
v___x_403_ = lean_unsigned_to_nat(2u);
v_nbuckets_404_ = lean_nat_mul(v___x_402_, v___x_403_);
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_box(0);
v___x_407_ = lean_mk_array(v_nbuckets_404_, v___x_406_);
v___x_408_ = lean_array_propagate_mark(v_data_401_, v___x_407_);
v___x_409_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(v___x_405_, v_data_401_, v___x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(lean_object* v_m_410_, lean_object* v_a_411_, lean_object* v_b_412_){
_start:
{
lean_object* v_size_413_; lean_object* v_buckets_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_457_; 
v_size_413_ = lean_ctor_get(v_m_410_, 0);
v_buckets_414_ = lean_ctor_get(v_m_410_, 1);
v_isSharedCheck_457_ = !lean_is_exclusive(v_m_410_);
if (v_isSharedCheck_457_ == 0)
{
v___x_416_ = v_m_410_;
v_isShared_417_ = v_isSharedCheck_457_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_buckets_414_);
lean_inc(v_size_413_);
lean_dec(v_m_410_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_457_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_418_; uint64_t v___x_419_; uint64_t v___x_420_; uint64_t v___x_421_; uint64_t v_fold_422_; uint64_t v___x_423_; uint64_t v___x_424_; uint64_t v___x_425_; size_t v___x_426_; size_t v___x_427_; size_t v___x_428_; size_t v___x_429_; size_t v___x_430_; lean_object* v_bkt_431_; uint8_t v___x_432_; 
v___x_418_ = lean_array_get_size(v_buckets_414_);
v___x_419_ = l_Lean_ExprStructEq_hash(v_a_411_);
v___x_420_ = 32ULL;
v___x_421_ = lean_uint64_shift_right(v___x_419_, v___x_420_);
v_fold_422_ = lean_uint64_xor(v___x_419_, v___x_421_);
v___x_423_ = 16ULL;
v___x_424_ = lean_uint64_shift_right(v_fold_422_, v___x_423_);
v___x_425_ = lean_uint64_xor(v_fold_422_, v___x_424_);
v___x_426_ = lean_uint64_to_usize(v___x_425_);
v___x_427_ = lean_usize_of_nat(v___x_418_);
v___x_428_ = ((size_t)1ULL);
v___x_429_ = lean_usize_sub(v___x_427_, v___x_428_);
v___x_430_ = lean_usize_land(v___x_426_, v___x_429_);
v_bkt_431_ = lean_array_uget_borrowed(v_buckets_414_, v___x_430_);
v___x_432_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_411_, v_bkt_431_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; lean_object* v_size_x27_434_; lean_object* v___x_435_; lean_object* v_buckets_x27_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_433_ = lean_unsigned_to_nat(1u);
v_size_x27_434_ = lean_nat_add(v_size_413_, v___x_433_);
lean_dec(v_size_413_);
lean_inc(v_bkt_431_);
v___x_435_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_435_, 0, v_a_411_);
lean_ctor_set(v___x_435_, 1, v_b_412_);
lean_ctor_set(v___x_435_, 2, v_bkt_431_);
v_buckets_x27_436_ = lean_array_uset(v_buckets_414_, v___x_430_, v___x_435_);
v___x_437_ = lean_unsigned_to_nat(4u);
v___x_438_ = lean_nat_mul(v_size_x27_434_, v___x_437_);
v___x_439_ = lean_unsigned_to_nat(3u);
v___x_440_ = lean_nat_div(v___x_438_, v___x_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_array_get_size(v_buckets_x27_436_);
v___x_442_ = lean_nat_dec_le(v___x_440_, v___x_441_);
lean_dec(v___x_440_);
if (v___x_442_ == 0)
{
lean_object* v_val_443_; lean_object* v___x_445_; 
v_val_443_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(v_buckets_x27_436_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 1, v_val_443_);
lean_ctor_set(v___x_416_, 0, v_size_x27_434_);
v___x_445_ = v___x_416_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_size_x27_434_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v_val_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
else
{
lean_object* v___x_448_; 
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 1, v_buckets_x27_436_);
lean_ctor_set(v___x_416_, 0, v_size_x27_434_);
v___x_448_ = v___x_416_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_size_x27_434_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_buckets_x27_436_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
else
{
lean_object* v___x_450_; lean_object* v_buckets_x27_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_455_; 
lean_inc(v_bkt_431_);
v___x_450_ = lean_box(0);
v_buckets_x27_451_ = lean_array_uset(v_buckets_414_, v___x_430_, v___x_450_);
v___x_452_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_411_, v_b_412_, v_bkt_431_);
v___x_453_ = lean_array_uset(v_buckets_x27_451_, v___x_430_, v___x_452_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 1, v___x_453_);
v___x_455_ = v___x_416_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_size_413_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v___x_453_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg(lean_object* v_decl_458_, uint8_t v_isLet_459_, lean_object* v_a_460_, lean_object* v_a_461_){
_start:
{
lean_object* v___x_463_; lean_object* v_fst_465_; lean_object* v_snd_466_; lean_object* v_givenNames_469_; lean_object* v_decls_470_; lean_object* v_valueMap_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_489_; 
v___x_463_ = lean_st_ref_take(v_a_461_);
v_givenNames_469_ = lean_ctor_get(v___x_463_, 0);
v_decls_470_ = lean_ctor_get(v___x_463_, 1);
v_valueMap_471_ = lean_ctor_get(v___x_463_, 2);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_489_ == 0)
{
v___x_473_ = v___x_463_;
v_isShared_474_ = v_isSharedCheck_489_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_valueMap_471_);
lean_inc(v_decls_470_);
lean_inc(v_givenNames_469_);
lean_dec(v___x_463_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_489_;
goto v_resetjp_472_;
}
v___jp_464_:
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = lean_st_ref_put(v_a_461_, v_snd_466_);
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v_fst_465_);
return v___x_468_;
}
v_resetjp_472_:
{
uint8_t v_merge_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_merge_475_ = lean_ctor_get_uint8(v_a_460_, 6);
v___x_476_ = lean_box(0);
lean_inc_ref(v_decl_458_);
v___x_477_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_477_, 0, v_decl_458_);
lean_ctor_set_uint8(v___x_477_, sizeof(void*)*1, v_isLet_459_);
v___x_478_ = lean_array_push(v_decls_470_, v___x_477_);
if (v_merge_475_ == 0)
{
lean_object* v___x_480_; 
lean_dec_ref(v_decl_458_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 1, v___x_478_);
v___x_480_ = v___x_473_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_givenNames_469_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v___x_478_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_valueMap_471_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
v_fst_465_ = v___x_476_;
v_snd_466_ = v___x_480_;
goto v___jp_464_;
}
}
else
{
uint8_t v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_482_ = 0;
v___x_483_ = l_Lean_LocalDecl_value(v_decl_458_, v___x_482_);
v___x_484_ = l_Lean_LocalDecl_fvarId(v_decl_458_);
lean_dec_ref(v_decl_458_);
v___x_485_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_471_, v___x_483_, v___x_484_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 2, v___x_485_);
lean_ctor_set(v___x_473_, 1, v___x_478_);
v___x_487_ = v___x_473_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_givenNames_469_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v___x_478_);
lean_ctor_set(v_reuseFailAlloc_488_, 2, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
v_fst_465_ = v___x_476_;
v_snd_466_ = v___x_487_;
goto v___jp_464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg___boxed(lean_object* v_decl_490_, lean_object* v_isLet_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
uint8_t v_isLet_boxed_495_; lean_object* v_res_496_; 
v_isLet_boxed_495_ = lean_unbox(v_isLet_491_);
v_res_496_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_decl_490_, v_isLet_boxed_495_, v_a_492_, v_a_493_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl(lean_object* v_decl_497_, uint8_t v_isLet_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_decl_497_, v_isLet_498_, v_a_499_, v_a_501_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___boxed(lean_object* v_decl_508_, lean_object* v_isLet_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_){
_start:
{
uint8_t v_isLet_boxed_518_; lean_object* v_res_519_; 
v_isLet_boxed_518_ = lean_unbox(v_isLet_509_);
v_res_519_ = l_Lean_Meta_ExtractLets_addDecl(v_decl_508_, v_isLet_boxed_518_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_, v_a_515_, v_a_516_);
lean_dec(v_a_516_);
lean_dec_ref(v_a_515_);
lean_dec(v_a_514_);
lean_dec_ref(v_a_513_);
lean_dec(v_a_512_);
lean_dec(v_a_511_);
lean_dec_ref(v_a_510_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0(lean_object* v_00_u03b2_520_, lean_object* v_m_521_, lean_object* v_a_522_, lean_object* v_b_523_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_m_521_, v_a_522_, v_b_523_);
return v___x_524_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(lean_object* v_00_u03b2_525_, lean_object* v_a_526_, lean_object* v_x_527_){
_start:
{
uint8_t v___x_528_; 
v___x_528_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_526_, v_x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_529_, lean_object* v_a_530_, lean_object* v_x_531_){
_start:
{
uint8_t v_res_532_; lean_object* v_r_533_; 
v_res_532_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(v_00_u03b2_529_, v_a_530_, v_x_531_);
lean_dec(v_x_531_);
lean_dec_ref(v_a_530_);
v_r_533_ = lean_box(v_res_532_);
return v_r_533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1(lean_object* v_00_u03b2_534_, lean_object* v_data_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(v_data_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2(lean_object* v_00_u03b2_537_, lean_object* v_a_538_, lean_object* v_b_539_, lean_object* v_x_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_538_, v_b_539_, v_x_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_542_, lean_object* v_i_543_, lean_object* v_source_544_, lean_object* v_target_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(v_i_543_, v_source_544_, v_target_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(v_x_548_, v_x_549_);
return v___x_550_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(lean_object* v_k_551_, lean_object* v_t_552_){
_start:
{
if (lean_obj_tag(v_t_552_) == 0)
{
lean_object* v_k_553_; lean_object* v_l_554_; lean_object* v_r_555_; uint8_t v___x_556_; 
v_k_553_ = lean_ctor_get(v_t_552_, 1);
v_l_554_ = lean_ctor_get(v_t_552_, 3);
v_r_555_ = lean_ctor_get(v_t_552_, 4);
v___x_556_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_551_, v_k_553_);
switch(v___x_556_)
{
case 0:
{
v_t_552_ = v_l_554_;
goto _start;
}
case 1:
{
uint8_t v___x_558_; 
v___x_558_ = 1;
return v___x_558_;
}
default: 
{
v_t_552_ = v_r_555_;
goto _start;
}
}
}
else
{
uint8_t v___x_560_; 
v___x_560_ = 0;
return v___x_560_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg___boxed(lean_object* v_k_561_, lean_object* v_t_562_){
_start:
{
uint8_t v_res_563_; lean_object* v_r_564_; 
v_res_563_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(v_k_561_, v_t_562_);
lean_dec(v_t_562_);
lean_dec(v_k_561_);
v_r_564_ = lean_box(v_res_563_);
return v_r_564_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(lean_object* v___x_565_, lean_object* v_e_566_){
_start:
{
uint8_t v___x_567_; lean_object* v_d_569_; lean_object* v_b_570_; 
v___x_567_ = l_Lean_Expr_hasFVar(v_e_566_);
if (v___x_567_ == 0)
{
return v___x_567_;
}
else
{
switch(lean_obj_tag(v_e_566_))
{
case 7:
{
lean_object* v_binderType_573_; lean_object* v_body_574_; 
v_binderType_573_ = lean_ctor_get(v_e_566_, 1);
v_body_574_ = lean_ctor_get(v_e_566_, 2);
v_d_569_ = v_binderType_573_;
v_b_570_ = v_body_574_;
goto v___jp_568_;
}
case 6:
{
lean_object* v_binderType_575_; lean_object* v_body_576_; 
v_binderType_575_ = lean_ctor_get(v_e_566_, 1);
v_body_576_ = lean_ctor_get(v_e_566_, 2);
v_d_569_ = v_binderType_575_;
v_b_570_ = v_body_576_;
goto v___jp_568_;
}
case 10:
{
lean_object* v_expr_577_; 
v_expr_577_ = lean_ctor_get(v_e_566_, 1);
v_e_566_ = v_expr_577_;
goto _start;
}
case 8:
{
lean_object* v_type_579_; lean_object* v_value_580_; lean_object* v_body_581_; uint8_t v___x_582_; 
v_type_579_ = lean_ctor_get(v_e_566_, 1);
v_value_580_ = lean_ctor_get(v_e_566_, 2);
v_body_581_ = lean_ctor_get(v_e_566_, 3);
v___x_582_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_565_, v_type_579_);
if (v___x_582_ == 0)
{
uint8_t v___x_583_; 
v___x_583_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_565_, v_value_580_);
if (v___x_583_ == 0)
{
v_e_566_ = v_body_581_;
goto _start;
}
else
{
return v___x_567_;
}
}
else
{
return v___x_567_;
}
}
case 5:
{
lean_object* v_fn_585_; lean_object* v_arg_586_; uint8_t v___x_587_; 
v_fn_585_ = lean_ctor_get(v_e_566_, 0);
v_arg_586_ = lean_ctor_get(v_e_566_, 1);
v___x_587_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_565_, v_fn_585_);
if (v___x_587_ == 0)
{
v_e_566_ = v_arg_586_;
goto _start;
}
else
{
return v___x_567_;
}
}
case 11:
{
lean_object* v_struct_589_; 
v_struct_589_ = lean_ctor_get(v_e_566_, 2);
v_e_566_ = v_struct_589_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_591_; uint8_t v___x_592_; 
v_fvarId_591_ = lean_ctor_get(v_e_566_, 0);
v___x_592_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(v_fvarId_591_, v___x_565_);
return v___x_592_;
}
default: 
{
uint8_t v___x_593_; 
v___x_593_ = 0;
return v___x_593_;
}
}
}
v___jp_568_:
{
uint8_t v___x_571_; 
v___x_571_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_565_, v_d_569_);
if (v___x_571_ == 0)
{
v_e_566_ = v_b_570_;
goto _start;
}
else
{
return v___x_567_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___boxed(lean_object* v___x_594_, lean_object* v_e_595_){
_start:
{
uint8_t v_res_596_; lean_object* v_r_597_; 
v_res_596_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_594_, v_e_595_);
lean_dec_ref(v_e_595_);
lean_dec(v___x_594_);
v_r_597_ = lean_box(v_res_596_);
return v_r_597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(lean_object* v_as_598_, size_t v_sz_599_, size_t v_i_600_, lean_object* v_b_601_){
_start:
{
lean_object* v_a_604_; uint8_t v___x_608_; 
v___x_608_ = lean_usize_dec_lt(v_i_600_, v_sz_599_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; 
v___x_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_609_, 0, v_b_601_);
return v___x_609_;
}
else
{
lean_object* v_snd_610_; lean_object* v_fst_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_645_; 
v_snd_610_ = lean_ctor_get(v_b_601_, 1);
v_fst_611_ = lean_ctor_get(v_b_601_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v_b_601_);
if (v_isSharedCheck_645_ == 0)
{
v___x_613_ = v_b_601_;
v_isShared_614_ = v_isSharedCheck_645_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_snd_610_);
lean_inc(v_fst_611_);
lean_dec(v_b_601_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_645_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v_fst_615_; lean_object* v_snd_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_644_; 
v_fst_615_ = lean_ctor_get(v_snd_610_, 0);
v_snd_616_ = lean_ctor_get(v_snd_610_, 1);
v_isSharedCheck_644_ = !lean_is_exclusive(v_snd_610_);
if (v_isSharedCheck_644_ == 0)
{
v___x_618_ = v_snd_610_;
v_isShared_619_ = v_isSharedCheck_644_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_snd_616_);
lean_inc(v_fst_615_);
lean_dec(v_snd_610_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_644_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v_a_620_; lean_object* v_decl_621_; uint8_t v___y_623_; lean_object* v___x_640_; uint8_t v___x_641_; 
v_a_620_ = lean_array_uget_borrowed(v_as_598_, v_i_600_);
v_decl_621_ = lean_ctor_get(v_a_620_, 0);
v___x_640_ = l_Lean_LocalDecl_type(v_decl_621_);
v___x_641_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v_fst_611_, v___x_640_);
lean_dec_ref(v___x_640_);
if (v___x_641_ == 0)
{
lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_642_ = l_Lean_LocalDecl_value(v_decl_621_, v___x_641_);
v___x_643_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v_fst_611_, v___x_642_);
lean_dec_ref(v___x_642_);
v___y_623_ = v___x_643_;
goto v___jp_622_;
}
else
{
v___y_623_ = v___x_641_;
goto v___jp_622_;
}
v___jp_622_:
{
if (v___y_623_ == 0)
{
lean_object* v___x_624_; lean_object* v___x_626_; 
lean_inc(v_a_620_);
v___x_624_ = lean_array_push(v_fst_615_, v_a_620_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_624_);
v___x_626_ = v___x_618_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_624_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_snd_616_);
v___x_626_ = v_reuseFailAlloc_630_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
lean_object* v___x_628_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 1, v___x_626_);
v___x_628_ = v___x_613_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_fst_611_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v___x_626_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
v_a_604_ = v___x_628_;
goto v___jp_603_;
}
}
}
else
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_635_; 
lean_inc(v_a_620_);
v___x_631_ = lean_array_push(v_snd_616_, v_a_620_);
v___x_632_ = l_Lean_LocalDecl_fvarId(v_decl_621_);
v___x_633_ = l_Lean_FVarIdSet_insert(v_fst_611_, v___x_632_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 1, v___x_631_);
v___x_635_ = v___x_618_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_fst_615_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v___x_631_);
v___x_635_ = v_reuseFailAlloc_639_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_637_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 1, v___x_635_);
lean_ctor_set(v___x_613_, 0, v___x_633_);
v___x_637_ = v___x_613_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_633_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v___x_635_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
v_a_604_ = v___x_637_;
goto v___jp_603_;
}
}
}
}
}
}
}
v___jp_603_:
{
size_t v___x_605_; size_t v___x_606_; 
v___x_605_ = ((size_t)1ULL);
v___x_606_ = lean_usize_add(v_i_600_, v___x_605_);
v_i_600_ = v___x_606_;
v_b_601_ = v_a_604_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg___boxed(lean_object* v_as_646_, lean_object* v_sz_647_, lean_object* v_i_648_, lean_object* v_b_649_, lean_object* v___y_650_){
_start:
{
size_t v_sz_boxed_651_; size_t v_i_boxed_652_; lean_object* v_res_653_; 
v_sz_boxed_651_ = lean_unbox_usize(v_sz_647_);
lean_dec(v_sz_647_);
v_i_boxed_652_ = lean_unbox_usize(v_i_648_);
lean_dec(v_i_648_);
v_res_653_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(v_as_646_, v_sz_boxed_651_, v_i_boxed_652_, v_b_649_);
lean_dec_ref(v_as_646_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls(lean_object* v_fvar_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_){
_start:
{
lean_object* v_fvarSet_665_; lean_object* v_fvarSet_666_; lean_object* v___x_667_; lean_object* v_decls_668_; lean_object* v___x_669_; lean_object* v___x_670_; size_t v_sz_671_; size_t v___x_672_; lean_object* v___x_673_; 
v_fvarSet_665_ = lean_box(1);
v_fvarSet_666_ = l_Lean_FVarIdSet_insert(v_fvarSet_665_, v_fvar_656_);
v___x_667_ = lean_st_ref_get(v_a_659_);
v_decls_668_ = lean_ctor_get(v___x_667_, 1);
lean_inc_ref(v_decls_668_);
lean_dec(v___x_667_);
v___x_669_ = ((lean_object*)(l_Lean_Meta_ExtractLets_flushDecls___closed__0));
v___x_670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_670_, 0, v_fvarSet_666_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v_sz_671_ = lean_array_size(v_decls_668_);
v___x_672_ = ((size_t)0ULL);
v___x_673_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(v_decls_668_, v_sz_671_, v___x_672_, v___x_670_);
lean_dec_ref(v_decls_668_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_696_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_696_ == 0)
{
v___x_676_ = v___x_673_;
v_isShared_677_ = v_isSharedCheck_696_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_673_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_696_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v_snd_678_; lean_object* v_fst_679_; lean_object* v_snd_680_; lean_object* v___x_681_; lean_object* v_givenNames_682_; lean_object* v_valueMap_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_694_; 
v_snd_678_ = lean_ctor_get(v_a_674_, 1);
lean_inc(v_snd_678_);
lean_dec(v_a_674_);
v_fst_679_ = lean_ctor_get(v_snd_678_, 0);
lean_inc(v_fst_679_);
v_snd_680_ = lean_ctor_get(v_snd_678_, 1);
lean_inc(v_snd_680_);
lean_dec(v_snd_678_);
v___x_681_ = lean_st_ref_take(v_a_659_);
v_givenNames_682_ = lean_ctor_get(v___x_681_, 0);
v_valueMap_683_ = lean_ctor_get(v___x_681_, 2);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_694_ == 0)
{
lean_object* v_unused_695_; 
v_unused_695_ = lean_ctor_get(v___x_681_, 1);
lean_dec(v_unused_695_);
v___x_685_ = v___x_681_;
v_isShared_686_ = v_isSharedCheck_694_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_valueMap_683_);
lean_inc(v_givenNames_682_);
lean_dec(v___x_681_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_694_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 1, v_fst_679_);
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_givenNames_682_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_fst_679_);
lean_ctor_set(v_reuseFailAlloc_693_, 2, v_valueMap_683_);
v___x_688_ = v_reuseFailAlloc_693_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_689_ = lean_st_ref_put(v_a_659_, v___x_688_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v_snd_680_);
v___x_691_ = v___x_676_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_snd_680_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
}
else
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_704_; 
v_a_697_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_704_ == 0)
{
v___x_699_ = v___x_673_;
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_673_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_a_697_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls___boxed(lean_object* v_fvar_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lean_Meta_ExtractLets_flushDecls(v_fvar_705_, v_a_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_);
lean_dec(v_a_712_);
lean_dec_ref(v_a_711_);
lean_dec(v_a_710_);
lean_dec_ref(v_a_709_);
lean_dec(v_a_708_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
return v_res_714_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(lean_object* v_00_u03b2_715_, lean_object* v_k_716_, lean_object* v_t_717_){
_start:
{
uint8_t v___x_718_; 
v___x_718_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(v_k_716_, v_t_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___boxed(lean_object* v_00_u03b2_719_, lean_object* v_k_720_, lean_object* v_t_721_){
_start:
{
uint8_t v_res_722_; lean_object* v_r_723_; 
v_res_722_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(v_00_u03b2_719_, v_k_720_, v_t_721_);
lean_dec(v_t_721_);
lean_dec(v_k_720_);
v_r_723_ = lean_box(v_res_722_);
return v_r_723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2(lean_object* v_as_724_, size_t v_sz_725_, size_t v_i_726_, lean_object* v_b_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v___x_736_; 
v___x_736_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(v_as_724_, v_sz_725_, v_i_726_, v_b_727_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___boxed(lean_object* v_as_737_, lean_object* v_sz_738_, lean_object* v_i_739_, lean_object* v_b_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_){
_start:
{
size_t v_sz_boxed_749_; size_t v_i_boxed_750_; lean_object* v_res_751_; 
v_sz_boxed_749_ = lean_unbox_usize(v_sz_738_);
lean_dec(v_sz_738_);
v_i_boxed_750_ = lean_unbox_usize(v_i_739_);
lean_dec(v_i_739_);
v_res_751_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2(v_as_737_, v_sz_boxed_749_, v_i_boxed_750_, v_b_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_dec(v___y_745_);
lean_dec_ref(v___y_744_);
lean_dec(v___y_743_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec_ref(v_as_737_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(lean_object* v_x_752_){
_start:
{
lean_object* v_decl_753_; 
v_decl_753_ = lean_ctor_get(v_x_752_, 0);
lean_inc_ref(v_decl_753_);
return v_decl_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed(lean_object* v_x_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(v_x_754_);
lean_dec_ref(v_x_754_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(lean_object* v_lctx_756_, lean_object* v_x1_757_, lean_object* v_x2_758_){
_start:
{
lean_object* v_decl_759_; lean_object* v___x_760_; uint8_t v___x_761_; 
v_decl_759_ = lean_ctor_get(v_x2_758_, 0);
v___x_760_ = l_Lean_LocalDecl_fvarId(v_decl_759_);
v___x_761_ = l_Lean_LocalContext_contains(v_lctx_756_, v___x_760_);
lean_dec(v___x_760_);
if (v___x_761_ == 0)
{
lean_object* v___x_762_; 
v___x_762_ = lean_array_push(v_x1_757_, v_x2_758_);
return v___x_762_;
}
else
{
lean_dec_ref(v_x2_758_);
return v_x1_757_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed(lean_object* v_lctx_763_, lean_object* v_x1_764_, lean_object* v_x2_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(v_lctx_763_, v_x1_764_, v_x2_765_);
lean_dec_ref(v_lctx_763_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2(lean_object* v___f_786_, lean_object* v_inst_787_, lean_object* v_inst_788_, lean_object* v_k_789_, lean_object* v_decls_790_, lean_object* v_lctx_791_){
_start:
{
lean_object* v___y_793_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_array_get_size(v_decls_790_);
v___x_804_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_805_ = ((lean_object*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9));
v___x_806_ = lean_nat_dec_lt(v___x_802_, v___x_803_);
if (v___x_806_ == 0)
{
lean_dec_ref(v_lctx_791_);
lean_dec_ref(v_decls_790_);
v___y_793_ = v___x_804_;
goto v___jp_792_;
}
else
{
lean_object* v___f_807_; uint8_t v___x_808_; 
v___f_807_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_807_, 0, v_lctx_791_);
v___x_808_ = lean_nat_dec_le(v___x_803_, v___x_803_);
if (v___x_808_ == 0)
{
if (v___x_806_ == 0)
{
lean_dec_ref(v___f_807_);
lean_dec_ref(v_decls_790_);
v___y_793_ = v___x_804_;
goto v___jp_792_;
}
else
{
size_t v___x_809_; size_t v___x_810_; lean_object* v___x_811_; 
v___x_809_ = ((size_t)0ULL);
v___x_810_ = lean_usize_of_nat(v___x_803_);
v___x_811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_805_, v___f_807_, v_decls_790_, v___x_809_, v___x_810_, v___x_804_);
v___y_793_ = v___x_811_;
goto v___jp_792_;
}
}
else
{
size_t v___x_812_; size_t v___x_813_; lean_object* v___x_814_; 
v___x_812_ = ((size_t)0ULL);
v___x_813_ = lean_usize_of_nat(v___x_803_);
v___x_814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_805_, v___f_807_, v_decls_790_, v___x_812_, v___x_813_, v___x_804_);
v___y_793_ = v___x_814_;
goto v___jp_792_;
}
}
v___jp_792_:
{
lean_object* v___x_794_; size_t v_sz_795_; size_t v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v_decls_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_794_ = ((lean_object*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9));
v_sz_795_ = lean_array_size(v___y_793_);
v___x_796_ = ((size_t)0ULL);
v___x_797_ = l_unsafeCast___redArg(v___y_793_);
lean_dec_ref(v___y_793_);
v___x_798_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_794_, v___f_786_, v_sz_795_, v___x_796_, v___x_797_);
v_decls_799_ = l_unsafeCast___redArg(v___x_798_);
lean_dec(v___x_798_);
v___x_800_ = lean_array_to_list(v_decls_799_);
v___x_801_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_787_, v_inst_788_, v___x_800_, v_k_789_);
return v___x_801_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(lean_object* v_inst_816_, lean_object* v_inst_817_, lean_object* v_inst_818_, lean_object* v_decls_819_, lean_object* v_k_820_){
_start:
{
lean_object* v_toBind_821_; lean_object* v___f_822_; lean_object* v___f_823_; lean_object* v___x_824_; 
v_toBind_821_ = lean_ctor_get(v_inst_816_, 1);
lean_inc(v_toBind_821_);
v___f_822_ = ((lean_object*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0));
v___f_823_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2), 6, 5);
lean_closure_set(v___f_823_, 0, v___f_822_);
lean_closure_set(v___f_823_, 1, v_inst_817_);
lean_closure_set(v___f_823_, 2, v_inst_816_);
lean_closure_set(v___f_823_, 3, v_k_820_);
lean_closure_set(v___f_823_, 4, v_decls_819_);
v___x_824_ = lean_apply_4(v_toBind_821_, lean_box(0), lean_box(0), v_inst_818_, v___f_823_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext(lean_object* v_m_825_, lean_object* v_00_u03b1_826_, lean_object* v_inst_827_, lean_object* v_inst_828_, lean_object* v_inst_829_, lean_object* v_decls_830_, lean_object* v_k_831_){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(v_inst_827_, v_inst_828_, v_inst_829_, v_decls_830_, v_k_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(lean_object* v_as_833_, size_t v_i_834_, size_t v_stop_835_, lean_object* v_b_836_){
_start:
{
uint8_t v___x_837_; 
v___x_837_ = lean_usize_dec_eq(v_i_834_, v_stop_835_);
if (v___x_837_ == 0)
{
size_t v___x_838_; size_t v___x_839_; lean_object* v___x_840_; lean_object* v_decl_841_; uint8_t v_isLet_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_838_ = ((size_t)1ULL);
v___x_839_ = lean_usize_sub(v_i_834_, v___x_838_);
v___x_840_ = lean_array_uget_borrowed(v_as_833_, v___x_839_);
v_decl_841_ = lean_ctor_get(v___x_840_, 0);
v_isLet_842_ = lean_ctor_get_uint8(v___x_840_, sizeof(void*)*1);
v___x_843_ = l_Lean_LocalDecl_userName(v_decl_841_);
v___x_844_ = l_Lean_LocalDecl_type(v_decl_841_);
v___x_845_ = l_Lean_LocalDecl_value(v_decl_841_, v___x_837_);
lean_inc_ref(v_decl_841_);
v___x_846_ = l_Lean_LocalDecl_toExpr(v_decl_841_);
v___x_847_ = lean_unsigned_to_nat(1u);
v___x_848_ = lean_mk_empty_array_with_capacity(v___x_847_);
v___x_849_ = lean_array_push(v___x_848_, v___x_846_);
v___x_850_ = lean_expr_abstract(v_b_836_, v___x_849_);
lean_dec_ref(v___x_849_);
lean_dec_ref(v_b_836_);
if (v_isLet_842_ == 0)
{
uint8_t v___x_851_; lean_object* v___x_852_; 
v___x_851_ = 1;
v___x_852_ = l_Lean_Expr_letE___override(v___x_843_, v___x_844_, v___x_845_, v___x_850_, v___x_851_);
v_i_834_ = v___x_839_;
v_b_836_ = v___x_852_;
goto _start;
}
else
{
lean_object* v___x_854_; 
v___x_854_ = l_Lean_Expr_letE___override(v___x_843_, v___x_844_, v___x_845_, v___x_850_, v___x_837_);
v_i_834_ = v___x_839_;
v_b_836_ = v___x_854_;
goto _start;
}
}
else
{
return v_b_836_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0___boxed(lean_object* v_as_856_, lean_object* v_i_857_, lean_object* v_stop_858_, lean_object* v_b_859_){
_start:
{
size_t v_i_boxed_860_; size_t v_stop_boxed_861_; lean_object* v_res_862_; 
v_i_boxed_860_ = lean_unbox_usize(v_i_857_);
lean_dec(v_i_857_);
v_stop_boxed_861_ = lean_unbox_usize(v_stop_858_);
lean_dec(v_stop_858_);
v_res_862_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(v_as_856_, v_i_boxed_860_, v_stop_boxed_861_, v_b_859_);
lean_dec_ref(v_as_856_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls(lean_object* v_decls_863_, lean_object* v_e_864_){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; uint8_t v___x_867_; 
v___x_865_ = lean_array_get_size(v_decls_863_);
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = lean_nat_dec_lt(v___x_866_, v___x_865_);
if (v___x_867_ == 0)
{
return v_e_864_;
}
else
{
size_t v___x_868_; size_t v___x_869_; lean_object* v___x_870_; 
v___x_868_ = lean_usize_of_nat(v___x_865_);
v___x_869_ = ((size_t)0ULL);
v___x_870_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(v_decls_863_, v___x_868_, v___x_869_, v_e_864_);
return v___x_870_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls___boxed(lean_object* v_decls_871_, lean_object* v_e_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_decls_871_, v_e_872_);
lean_dec_ref(v_decls_871_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(lean_object* v_fvarId_874_, size_t v_sz_875_, size_t v_i_876_, lean_object* v_bs_877_){
_start:
{
uint8_t v___x_878_; 
v___x_878_ = lean_usize_dec_lt(v_i_876_, v_sz_875_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; 
v___x_879_ = l_unsafeCast___redArg(v_bs_877_);
lean_dec_ref(v_bs_877_);
return v___x_879_;
}
else
{
lean_object* v_v_880_; lean_object* v___x_881_; lean_object* v_decl_882_; lean_object* v___x_883_; lean_object* v_bs_x27_884_; lean_object* v___y_886_; lean_object* v___x_892_; uint8_t v___x_893_; 
v_v_880_ = lean_array_uget_borrowed(v_bs_877_, v_i_876_);
v___x_881_ = l_unsafeCast___redArg(v_v_880_);
v_decl_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc_ref(v_decl_882_);
v___x_883_ = lean_unsigned_to_nat(0u);
v_bs_x27_884_ = lean_array_uset(v_bs_877_, v_i_876_, v___x_883_);
v___x_892_ = l_Lean_LocalDecl_fvarId(v_decl_882_);
v___x_893_ = l_Lean_instBEqFVarId_beq(v___x_892_, v_fvarId_874_);
lean_dec(v___x_892_);
if (v___x_893_ == 0)
{
lean_dec_ref(v_decl_882_);
v___y_886_ = v___x_881_;
goto v___jp_885_;
}
else
{
lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_900_; 
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_900_ == 0)
{
lean_object* v_unused_901_; 
v_unused_901_ = lean_ctor_get(v___x_881_, 0);
lean_dec(v_unused_901_);
v___x_895_ = v___x_881_;
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
else
{
lean_dec(v___x_881_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_898_; 
if (v_isShared_896_ == 0)
{
v___x_898_ = v___x_895_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_decl_882_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
lean_ctor_set_uint8(v___x_898_, sizeof(void*)*1, v___x_893_);
v___y_886_ = v___x_898_;
goto v___jp_885_;
}
}
}
v___jp_885_:
{
size_t v___x_887_; size_t v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_887_ = ((size_t)1ULL);
v___x_888_ = lean_usize_add(v_i_876_, v___x_887_);
v___x_889_ = l_unsafeCast___redArg(v___y_886_);
lean_dec_ref(v___y_886_);
v___x_890_ = lean_array_uset(v_bs_x27_884_, v_i_876_, v___x_889_);
v_i_876_ = v___x_888_;
v_bs_877_ = v___x_890_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0___boxed(lean_object* v_fvarId_902_, lean_object* v_sz_903_, lean_object* v_i_904_, lean_object* v_bs_905_){
_start:
{
size_t v_sz_boxed_906_; size_t v_i_boxed_907_; lean_object* v_res_908_; 
v_sz_boxed_906_ = lean_unbox_usize(v_sz_903_);
lean_dec(v_sz_903_);
v_i_boxed_907_ = lean_unbox_usize(v_i_904_);
lean_dec(v_i_904_);
v_res_908_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(v_fvarId_902_, v_sz_boxed_906_, v_i_boxed_907_, v_bs_905_);
lean_dec(v_fvarId_902_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg(lean_object* v_fvarId_909_, lean_object* v_a_910_){
_start:
{
lean_object* v___x_912_; lean_object* v_givenNames_913_; lean_object* v_decls_914_; lean_object* v_valueMap_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_930_; 
v___x_912_ = lean_st_ref_take(v_a_910_);
v_givenNames_913_ = lean_ctor_get(v___x_912_, 0);
v_decls_914_ = lean_ctor_get(v___x_912_, 1);
v_valueMap_915_ = lean_ctor_get(v___x_912_, 2);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_930_ == 0)
{
v___x_917_ = v___x_912_;
v_isShared_918_ = v_isSharedCheck_930_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_valueMap_915_);
lean_inc(v_decls_914_);
lean_inc(v_givenNames_913_);
lean_dec(v___x_912_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_930_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_919_; size_t v_sz_920_; size_t v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_926_; 
v___x_919_ = lean_box(0);
v_sz_920_ = lean_array_size(v_decls_914_);
v___x_921_ = ((size_t)0ULL);
v___x_922_ = l_unsafeCast___redArg(v_decls_914_);
lean_dec_ref(v_decls_914_);
v___x_923_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(v_fvarId_909_, v_sz_920_, v___x_921_, v___x_922_);
v___x_924_ = l_unsafeCast___redArg(v___x_923_);
lean_dec_ref(v___x_923_);
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 1, v___x_924_);
v___x_926_ = v___x_917_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_givenNames_913_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v___x_924_);
lean_ctor_set(v_reuseFailAlloc_929_, 2, v_valueMap_915_);
v___x_926_ = v_reuseFailAlloc_929_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = lean_st_ref_put(v_a_910_, v___x_926_);
v___x_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_919_);
return v___x_928_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg___boxed(lean_object* v_fvarId_931_, lean_object* v_a_932_, lean_object* v_a_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_fvarId_931_, v_a_932_);
lean_dec(v_a_932_);
lean_dec(v_fvarId_931_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet(lean_object* v_fvarId_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_fvarId_935_, v_a_938_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___boxed(lean_object* v_fvarId_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_Lean_Meta_ExtractLets_ensureIsLet(v_fvarId_945_, v_a_946_, v_a_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_);
lean_dec(v_a_952_);
lean_dec_ref(v_a_951_);
lean_dec(v_a_950_);
lean_dec_ref(v_a_949_);
lean_dec(v_a_948_);
lean_dec(v_a_947_);
lean_dec_ref(v_a_946_);
lean_dec(v_fvarId_945_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(size_t v_sz_955_, size_t v_i_956_, lean_object* v_bs_957_){
_start:
{
uint8_t v___x_958_; 
v___x_958_ = lean_usize_dec_lt(v_i_956_, v_sz_955_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; 
v___x_959_ = l_unsafeCast___redArg(v_bs_957_);
lean_dec_ref(v_bs_957_);
return v___x_959_;
}
else
{
lean_object* v_v_960_; lean_object* v___x_961_; lean_object* v_decl_962_; lean_object* v___x_963_; lean_object* v_bs_x27_964_; size_t v___x_965_; size_t v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v_v_960_ = lean_array_uget_borrowed(v_bs_957_, v_i_956_);
v___x_961_ = l_unsafeCast___redArg(v_v_960_);
v_decl_962_ = lean_ctor_get(v___x_961_, 0);
lean_inc_ref(v_decl_962_);
lean_dec(v___x_961_);
v___x_963_ = lean_unsigned_to_nat(0u);
v_bs_x27_964_ = lean_array_uset(v_bs_957_, v_i_956_, v___x_963_);
v___x_965_ = ((size_t)1ULL);
v___x_966_ = lean_usize_add(v_i_956_, v___x_965_);
v___x_967_ = l_unsafeCast___redArg(v_decl_962_);
lean_dec_ref(v_decl_962_);
v___x_968_ = lean_array_uset(v_bs_x27_964_, v_i_956_, v___x_967_);
v_i_956_ = v___x_966_;
v_bs_957_ = v___x_968_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1___boxed(lean_object* v_sz_970_, lean_object* v_i_971_, lean_object* v_bs_972_){
_start:
{
size_t v_sz_boxed_973_; size_t v_i_boxed_974_; lean_object* v_res_975_; 
v_sz_boxed_973_ = lean_unbox_usize(v_sz_970_);
lean_dec(v_sz_970_);
v_i_boxed_974_ = lean_unbox_usize(v_i_971_);
lean_dec(v_i_971_);
v_res_975_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_boxed_973_, v_i_boxed_974_, v_bs_972_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(lean_object* v_x_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
lean_object* v___x_985_; 
lean_inc(v___y_979_);
lean_inc(v___y_978_);
lean_inc_ref(v___y_977_);
v___x_985_ = lean_apply_8(v_x_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, lean_box(0));
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v_x_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(v_x_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
lean_dec(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(lean_object* v_decls_996_, lean_object* v_x_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v___f_1006_; lean_object* v___x_1007_; 
lean_inc(v___y_1000_);
lean_inc(v___y_999_);
lean_inc_ref(v___y_998_);
v___f_1006_ = lean_alloc_closure((void*)(l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1006_, 0, v_x_997_);
lean_closure_set(v___f_1006_, 1, v___y_998_);
lean_closure_set(v___f_1006_, 2, v___y_999_);
lean_closure_set(v___f_1006_, 3, v___y_1000_);
v___x_1007_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_box(0), v_decls_996_, v___f_1006_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
if (lean_obj_tag(v___x_1007_) == 0)
{
return v___x_1007_;
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_1007_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_1007_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___boxed(lean_object* v_decls_1016_, lean_object* v_x_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v_decls_1016_, v_x_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec(v___y_1019_);
lean_dec_ref(v___y_1018_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(lean_object* v___x_1027_, lean_object* v_as_1028_, size_t v_i_1029_, size_t v_stop_1030_, lean_object* v_b_1031_){
_start:
{
lean_object* v___y_1033_; uint8_t v___x_1037_; 
v___x_1037_ = lean_usize_dec_eq(v_i_1029_, v_stop_1030_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; lean_object* v_decl_1039_; lean_object* v___x_1040_; uint8_t v___x_1041_; 
v___x_1038_ = lean_array_uget_borrowed(v_as_1028_, v_i_1029_);
v_decl_1039_ = lean_ctor_get(v___x_1038_, 0);
v___x_1040_ = l_Lean_LocalDecl_fvarId(v_decl_1039_);
v___x_1041_ = l_Lean_LocalContext_contains(v___x_1027_, v___x_1040_);
lean_dec(v___x_1040_);
if (v___x_1041_ == 0)
{
lean_object* v___x_1042_; 
lean_inc(v___x_1038_);
v___x_1042_ = lean_array_push(v_b_1031_, v___x_1038_);
v___y_1033_ = v___x_1042_;
goto v___jp_1032_;
}
else
{
v___y_1033_ = v_b_1031_;
goto v___jp_1032_;
}
}
else
{
return v_b_1031_;
}
v___jp_1032_:
{
size_t v___x_1034_; size_t v___x_1035_; 
v___x_1034_ = ((size_t)1ULL);
v___x_1035_ = lean_usize_add(v_i_1029_, v___x_1034_);
v_i_1029_ = v___x_1035_;
v_b_1031_ = v___y_1033_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3___boxed(lean_object* v___x_1043_, lean_object* v_as_1044_, lean_object* v_i_1045_, lean_object* v_stop_1046_, lean_object* v_b_1047_){
_start:
{
size_t v_i_boxed_1048_; size_t v_stop_boxed_1049_; lean_object* v_res_1050_; 
v_i_boxed_1048_ = lean_unbox_usize(v_i_1045_);
lean_dec(v_i_1045_);
v_stop_boxed_1049_ = lean_unbox_usize(v_stop_1046_);
lean_dec(v_stop_1046_);
v_res_1050_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(v___x_1043_, v_as_1044_, v_i_boxed_1048_, v_stop_boxed_1049_, v_b_1047_);
lean_dec_ref(v_as_1044_);
lean_dec_ref(v___x_1043_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(lean_object* v_decls_1051_, lean_object* v_k_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v___y_1062_; lean_object* v_lctx_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v_lctx_1070_ = lean_ctor_get(v___y_1056_, 2);
v___x_1071_ = lean_unsigned_to_nat(0u);
v___x_1072_ = lean_array_get_size(v_decls_1051_);
v___x_1073_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_1074_ = lean_nat_dec_lt(v___x_1071_, v___x_1072_);
if (v___x_1074_ == 0)
{
v___y_1062_ = v___x_1073_;
goto v___jp_1061_;
}
else
{
size_t v___x_1075_; size_t v___x_1076_; lean_object* v___x_1077_; 
v___x_1075_ = ((size_t)0ULL);
v___x_1076_ = lean_usize_of_nat(v___x_1072_);
v___x_1077_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(v_lctx_1070_, v_decls_1051_, v___x_1075_, v___x_1076_, v___x_1073_);
v___y_1062_ = v___x_1077_;
goto v___jp_1061_;
}
v___jp_1061_:
{
size_t v_sz_1063_; size_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v_decls_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v_sz_1063_ = lean_array_size(v___y_1062_);
v___x_1064_ = ((size_t)0ULL);
v___x_1065_ = l_unsafeCast___redArg(v___y_1062_);
lean_dec_ref(v___y_1062_);
v___x_1066_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_1063_, v___x_1064_, v___x_1065_);
v_decls_1067_ = l_unsafeCast___redArg(v___x_1066_);
lean_dec_ref(v___x_1066_);
v___x_1068_ = lean_array_to_list(v_decls_1067_);
v___x_1069_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v___x_1068_, v_k_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
return v___x_1069_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg___boxed(lean_object* v_decls_1078_, lean_object* v_k_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v_decls_1078_, v_k_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
lean_dec(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec_ref(v_decls_1078_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(lean_object* v_fvarId_1089_, lean_object* v_as_1090_, lean_object* v_j_1091_){
_start:
{
lean_object* v___x_1092_; uint8_t v___x_1093_; 
v___x_1092_ = lean_array_get_size(v_as_1090_);
v___x_1093_ = lean_nat_dec_lt(v_j_1091_, v___x_1092_);
if (v___x_1093_ == 0)
{
lean_object* v___x_1094_; 
lean_dec(v_j_1091_);
v___x_1094_ = lean_box(0);
return v___x_1094_;
}
else
{
lean_object* v___x_1095_; lean_object* v_decl_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; 
v___x_1095_ = lean_array_fget_borrowed(v_as_1090_, v_j_1091_);
v_decl_1096_ = lean_ctor_get(v___x_1095_, 0);
v___x_1097_ = l_Lean_LocalDecl_fvarId(v_decl_1096_);
v___x_1098_ = l_Lean_instBEqFVarId_beq(v___x_1097_, v_fvarId_1089_);
lean_dec(v___x_1097_);
if (v___x_1098_ == 0)
{
lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1099_ = lean_unsigned_to_nat(1u);
v___x_1100_ = lean_nat_add(v_j_1091_, v___x_1099_);
lean_dec(v_j_1091_);
v_j_1091_ = v___x_1100_;
goto _start;
}
else
{
lean_object* v___x_1102_; 
v___x_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1102_, 0, v_j_1091_);
return v___x_1102_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0___boxed(lean_object* v_fvarId_1103_, lean_object* v_as_1104_, lean_object* v_j_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(v_fvarId_1103_, v_as_1104_, v_j_1105_);
lean_dec_ref(v_as_1104_);
lean_dec(v_fvarId_1103_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg(lean_object* v_fvarId_1107_, lean_object* v_k_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_){
_start:
{
lean_object* v___x_1117_; lean_object* v_lctx_1118_; uint8_t v___x_1119_; 
v___x_1117_ = lean_st_ref_get(v_a_1111_);
v_lctx_1118_ = lean_ctor_get(v_a_1112_, 2);
v___x_1119_ = l_Lean_LocalContext_contains(v_lctx_1118_, v_fvarId_1107_);
if (v___x_1119_ == 0)
{
lean_object* v_decls_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v_decls_1120_ = lean_ctor_get(v___x_1117_, 1);
lean_inc_ref(v_decls_1120_);
lean_dec(v___x_1117_);
v___x_1121_ = lean_unsigned_to_nat(0u);
v___x_1122_ = l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(v_fvarId_1107_, v_decls_1120_, v___x_1121_);
if (lean_obj_tag(v___x_1122_) == 1)
{
lean_object* v_val_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v_val_1123_ = lean_ctor_get(v___x_1122_, 0);
lean_inc(v_val_1123_);
lean_dec_ref_known(v___x_1122_, 1);
v___x_1124_ = lean_unsigned_to_nat(1u);
v___x_1125_ = lean_nat_add(v_val_1123_, v___x_1124_);
lean_dec(v_val_1123_);
v___x_1126_ = l_Array_toSubarray___redArg(v_decls_1120_, v___x_1121_, v___x_1125_);
v___x_1127_ = l_Subarray_copy___redArg(v___x_1126_);
v___x_1128_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v___x_1127_, v_k_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_);
lean_dec_ref(v___x_1127_);
return v___x_1128_;
}
else
{
lean_object* v___x_1129_; 
lean_dec(v___x_1122_);
lean_dec_ref(v_decls_1120_);
lean_inc(v_a_1115_);
lean_inc_ref(v_a_1114_);
lean_inc(v_a_1113_);
lean_inc_ref(v_a_1112_);
lean_inc(v_a_1111_);
lean_inc(v_a_1110_);
lean_inc_ref(v_a_1109_);
v___x_1129_ = lean_apply_8(v_k_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, lean_box(0));
return v___x_1129_;
}
}
else
{
lean_object* v___x_1130_; 
lean_dec(v___x_1117_);
lean_inc(v_a_1115_);
lean_inc_ref(v_a_1114_);
lean_inc(v_a_1113_);
lean_inc_ref(v_a_1112_);
lean_inc(v_a_1111_);
lean_inc(v_a_1110_);
lean_inc_ref(v_a_1109_);
v___x_1130_ = lean_apply_8(v_k_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, lean_box(0));
return v___x_1130_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg___boxed(lean_object* v_fvarId_1131_, lean_object* v_k_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v_fvarId_1131_, v_k_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_);
lean_dec(v_a_1139_);
lean_dec_ref(v_a_1138_);
lean_dec(v_a_1137_);
lean_dec_ref(v_a_1136_);
lean_dec(v_a_1135_);
lean_dec(v_a_1134_);
lean_dec_ref(v_a_1133_);
lean_dec(v_fvarId_1131_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext(lean_object* v_00_u03b1_1142_, lean_object* v_fvarId_1143_, lean_object* v_k_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v_fvarId_1143_, v_k_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___boxed(lean_object* v_00_u03b1_1154_, lean_object* v_fvarId_1155_, lean_object* v_k_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lean_Meta_ExtractLets_withDeclInContext(v_00_u03b1_1154_, v_fvarId_1155_, v_k_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_, v_a_1163_);
lean_dec(v_a_1163_);
lean_dec_ref(v_a_1162_);
lean_dec(v_a_1161_);
lean_dec_ref(v_a_1160_);
lean_dec(v_a_1159_);
lean_dec(v_a_1158_);
lean_dec_ref(v_a_1157_);
lean_dec(v_fvarId_1155_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(lean_object* v_00_u03b1_1166_, lean_object* v_decls_1167_, lean_object* v_x_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v_decls_1167_, v_x_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1178_, lean_object* v_decls_1179_, lean_object* v_x_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(v_00_u03b1_1178_, v_decls_1179_, v_x_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec(v___y_1183_);
lean_dec(v___y_1182_);
lean_dec_ref(v___y_1181_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(lean_object* v_00_u03b1_1190_, lean_object* v_decls_1191_, lean_object* v_k_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___x_1201_; 
v___x_1201_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v_decls_1191_, v_k_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___boxed(lean_object* v_00_u03b1_1202_, lean_object* v_decls_1203_, lean_object* v_k_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(v_00_u03b1_1202_, v_decls_1203_, v_k_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
lean_dec_ref(v_decls_1203_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(lean_object* v_e_1214_, lean_object* v___y_1215_){
_start:
{
uint8_t v___x_1217_; 
v___x_1217_ = l_Lean_Expr_hasMVar(v_e_1214_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; 
v___x_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1218_, 0, v_e_1214_);
return v___x_1218_;
}
else
{
lean_object* v___x_1219_; lean_object* v_mctx_1220_; lean_object* v___x_1221_; lean_object* v_fst_1222_; lean_object* v_snd_1223_; lean_object* v___x_1224_; lean_object* v_cache_1225_; lean_object* v_zetaDeltaFVarIds_1226_; lean_object* v_postponed_1227_; lean_object* v_diag_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1237_; 
v___x_1219_ = lean_st_ref_get(v___y_1215_);
v_mctx_1220_ = lean_ctor_get(v___x_1219_, 0);
lean_inc_ref(v_mctx_1220_);
lean_dec(v___x_1219_);
v___x_1221_ = l_Lean_instantiateMVarsCore(v_mctx_1220_, v_e_1214_);
v_fst_1222_ = lean_ctor_get(v___x_1221_, 0);
lean_inc(v_fst_1222_);
v_snd_1223_ = lean_ctor_get(v___x_1221_, 1);
lean_inc(v_snd_1223_);
lean_dec_ref(v___x_1221_);
v___x_1224_ = lean_st_ref_take(v___y_1215_);
v_cache_1225_ = lean_ctor_get(v___x_1224_, 1);
v_zetaDeltaFVarIds_1226_ = lean_ctor_get(v___x_1224_, 2);
v_postponed_1227_ = lean_ctor_get(v___x_1224_, 3);
v_diag_1228_ = lean_ctor_get(v___x_1224_, 4);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1237_ == 0)
{
lean_object* v_unused_1238_; 
v_unused_1238_ = lean_ctor_get(v___x_1224_, 0);
lean_dec(v_unused_1238_);
v___x_1230_ = v___x_1224_;
v_isShared_1231_ = v_isSharedCheck_1237_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_diag_1228_);
lean_inc(v_postponed_1227_);
lean_inc(v_zetaDeltaFVarIds_1226_);
lean_inc(v_cache_1225_);
lean_dec(v___x_1224_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1237_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 0, v_snd_1223_);
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_snd_1223_);
lean_ctor_set(v_reuseFailAlloc_1236_, 1, v_cache_1225_);
lean_ctor_set(v_reuseFailAlloc_1236_, 2, v_zetaDeltaFVarIds_1226_);
lean_ctor_set(v_reuseFailAlloc_1236_, 3, v_postponed_1227_);
lean_ctor_set(v_reuseFailAlloc_1236_, 4, v_diag_1228_);
v___x_1233_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = lean_st_ref_put(v___y_1215_, v___x_1233_);
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v_fst_1222_);
return v___x_1235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg___boxed(lean_object* v_e_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_1239_, v___y_1240_);
lean_dec(v___y_1240_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(lean_object* v_e_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v___x_1252_; 
v___x_1252_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_1243_, v___y_1248_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___boxed(lean_object* v_e_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(v_e_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
lean_dec(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(lean_object* v_as_1263_, size_t v_i_1264_, size_t v_stop_1265_, lean_object* v_b_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v_a_1276_; uint8_t v___x_1282_; 
v___x_1282_ = lean_usize_dec_eq(v_i_1264_, v_stop_1265_);
if (v___x_1282_ == 0)
{
lean_object* v___x_1283_; 
v___x_1283_ = lean_array_uget_borrowed(v_as_1263_, v_i_1264_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v___x_1284_; 
v___x_1284_ = lean_box(0);
v_a_1276_ = v___x_1284_;
goto v___jp_1275_;
}
else
{
lean_object* v_val_1285_; uint8_t v___y_1287_; uint8_t v___x_1314_; 
v_val_1285_ = lean_ctor_get(v___x_1283_, 0);
v___x_1314_ = l_Lean_LocalDecl_isLet(v_val_1285_, v___x_1282_);
if (v___x_1314_ == 0)
{
v___y_1287_ = v___x_1314_;
goto v___jp_1286_;
}
else
{
uint8_t v___x_1315_; 
v___x_1315_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1285_);
if (v___x_1315_ == 0)
{
v___y_1287_ = v___x_1314_;
goto v___jp_1286_;
}
else
{
goto v___jp_1280_;
}
}
v___jp_1286_:
{
if (v___y_1287_ == 0)
{
goto v___jp_1280_;
}
else
{
lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1288_ = l_Lean_LocalDecl_value(v_val_1285_, v___x_1282_);
v___x_1289_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v___x_1288_, v___y_1271_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v___x_1291_; lean_object* v_givenNames_1292_; lean_object* v_decls_1293_; lean_object* v_valueMap_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1305_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_a_1290_);
lean_dec_ref_known(v___x_1289_, 1);
v___x_1291_ = lean_st_ref_take(v___y_1269_);
v_givenNames_1292_ = lean_ctor_get(v___x_1291_, 0);
v_decls_1293_ = lean_ctor_get(v___x_1291_, 1);
v_valueMap_1294_ = lean_ctor_get(v___x_1291_, 2);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1296_ = v___x_1291_;
v_isShared_1297_ = v_isSharedCheck_1305_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_valueMap_1294_);
lean_inc(v_decls_1293_);
lean_inc(v_givenNames_1292_);
lean_dec(v___x_1291_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1305_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1302_; 
v___x_1298_ = lean_box(0);
v___x_1299_ = l_Lean_LocalDecl_fvarId(v_val_1285_);
v___x_1300_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_1294_, v_a_1290_, v___x_1299_);
if (v_isShared_1297_ == 0)
{
lean_ctor_set(v___x_1296_, 2, v___x_1300_);
v___x_1302_ = v___x_1296_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_givenNames_1292_);
lean_ctor_set(v_reuseFailAlloc_1304_, 1, v_decls_1293_);
lean_ctor_set(v_reuseFailAlloc_1304_, 2, v___x_1300_);
v___x_1302_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
lean_object* v___x_1303_; 
v___x_1303_ = lean_st_ref_put(v___y_1269_, v___x_1302_);
v_a_1276_ = v___x_1298_;
goto v___jp_1275_;
}
}
}
else
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1313_; 
v_a_1306_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1308_ = v___x_1289_;
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1289_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_a_1306_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1316_; 
v___x_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1316_, 0, v_b_1266_);
return v___x_1316_;
}
v___jp_1275_:
{
size_t v___x_1277_; size_t v___x_1278_; 
v___x_1277_ = ((size_t)1ULL);
v___x_1278_ = lean_usize_add(v_i_1264_, v___x_1277_);
v_i_1264_ = v___x_1278_;
v_b_1266_ = v_a_1276_;
goto _start;
}
v___jp_1280_:
{
lean_object* v___x_1281_; 
v___x_1281_ = lean_box(0);
v_a_1276_ = v___x_1281_;
goto v___jp_1275_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6___boxed(lean_object* v_as_1317_, lean_object* v_i_1318_, lean_object* v_stop_1319_, lean_object* v_b_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
size_t v_i_boxed_1329_; size_t v_stop_boxed_1330_; lean_object* v_res_1331_; 
v_i_boxed_1329_ = lean_unbox_usize(v_i_1318_);
lean_dec(v_i_1318_);
v_stop_boxed_1330_ = lean_unbox_usize(v_stop_1319_);
lean_dec(v_stop_1319_);
v_res_1331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(v_as_1317_, v_i_boxed_1329_, v_stop_boxed_1330_, v_b_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
lean_dec(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec_ref(v_as_1317_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(lean_object* v_as_1332_, size_t v_i_1333_, size_t v_stop_1334_, lean_object* v_b_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v_a_1345_; uint8_t v___x_1351_; 
v___x_1351_ = lean_usize_dec_eq(v_i_1333_, v_stop_1334_);
if (v___x_1351_ == 0)
{
lean_object* v___x_1352_; 
v___x_1352_ = lean_array_uget_borrowed(v_as_1332_, v_i_1333_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v___x_1353_; 
v___x_1353_ = lean_box(0);
v_a_1345_ = v___x_1353_;
goto v___jp_1344_;
}
else
{
lean_object* v_val_1354_; uint8_t v___y_1356_; uint8_t v___x_1383_; 
v_val_1354_ = lean_ctor_get(v___x_1352_, 0);
v___x_1383_ = l_Lean_LocalDecl_isLet(v_val_1354_, v___x_1351_);
if (v___x_1383_ == 0)
{
v___y_1356_ = v___x_1383_;
goto v___jp_1355_;
}
else
{
uint8_t v___x_1384_; 
v___x_1384_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1354_);
if (v___x_1384_ == 0)
{
v___y_1356_ = v___x_1383_;
goto v___jp_1355_;
}
else
{
goto v___jp_1349_;
}
}
v___jp_1355_:
{
if (v___y_1356_ == 0)
{
goto v___jp_1349_;
}
else
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = l_Lean_LocalDecl_value(v_val_1354_, v___x_1351_);
v___x_1358_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v___x_1357_, v___y_1340_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v_a_1359_; lean_object* v___x_1360_; lean_object* v_givenNames_1361_; lean_object* v_decls_1362_; lean_object* v_valueMap_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1374_; 
v_a_1359_ = lean_ctor_get(v___x_1358_, 0);
lean_inc(v_a_1359_);
lean_dec_ref_known(v___x_1358_, 1);
v___x_1360_ = lean_st_ref_take(v___y_1338_);
v_givenNames_1361_ = lean_ctor_get(v___x_1360_, 0);
v_decls_1362_ = lean_ctor_get(v___x_1360_, 1);
v_valueMap_1363_ = lean_ctor_get(v___x_1360_, 2);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1365_ = v___x_1360_;
v_isShared_1366_ = v_isSharedCheck_1374_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_valueMap_1363_);
lean_inc(v_decls_1362_);
lean_inc(v_givenNames_1361_);
lean_dec(v___x_1360_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1374_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1371_; 
v___x_1367_ = lean_box(0);
v___x_1368_ = l_Lean_LocalDecl_fvarId(v_val_1354_);
v___x_1369_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_1363_, v_a_1359_, v___x_1368_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 2, v___x_1369_);
v___x_1371_ = v___x_1365_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_givenNames_1361_);
lean_ctor_set(v_reuseFailAlloc_1373_, 1, v_decls_1362_);
lean_ctor_set(v_reuseFailAlloc_1373_, 2, v___x_1369_);
v___x_1371_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_st_ref_put(v___y_1338_, v___x_1371_);
v_a_1345_ = v___x_1367_;
goto v___jp_1344_;
}
}
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
v_a_1375_ = lean_ctor_get(v___x_1358_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1358_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1358_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1358_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1385_; 
v___x_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1385_, 0, v_b_1335_);
return v___x_1385_;
}
v___jp_1344_:
{
size_t v___x_1346_; size_t v___x_1347_; lean_object* v___x_1348_; 
v___x_1346_ = ((size_t)1ULL);
v___x_1347_ = lean_usize_add(v_i_1333_, v___x_1346_);
v___x_1348_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(v_as_1332_, v___x_1347_, v_stop_1334_, v_a_1345_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_);
return v___x_1348_;
}
v___jp_1349_:
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_box(0);
v_a_1345_ = v___x_1350_;
goto v___jp_1344_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3___boxed(lean_object* v_as_1386_, lean_object* v_i_1387_, lean_object* v_stop_1388_, lean_object* v_b_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
size_t v_i_boxed_1398_; size_t v_stop_boxed_1399_; lean_object* v_res_1400_; 
v_i_boxed_1398_ = lean_unbox_usize(v_i_1387_);
lean_dec(v_i_1387_);
v_stop_boxed_1399_ = lean_unbox_usize(v_stop_1388_);
lean_dec(v_stop_1388_);
v_res_1400_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_as_1386_, v_i_boxed_1398_, v_stop_boxed_1399_, v_b_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec_ref(v_as_1386_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(lean_object* v_x_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
if (lean_obj_tag(v_x_1401_) == 0)
{
lean_object* v_cs_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1424_; 
v_cs_1410_ = lean_ctor_get(v_x_1401_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v_x_1401_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1412_ = v_x_1401_;
v_isShared_1413_ = v_isSharedCheck_1424_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_cs_1410_);
lean_dec(v_x_1401_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1424_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; uint8_t v___x_1417_; 
v___x_1414_ = lean_unsigned_to_nat(0u);
v___x_1415_ = lean_array_get_size(v_cs_1410_);
v___x_1416_ = lean_box(0);
v___x_1417_ = lean_nat_dec_lt(v___x_1414_, v___x_1415_);
if (v___x_1417_ == 0)
{
lean_object* v___x_1419_; 
lean_dec_ref(v_cs_1410_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 0, v___x_1416_);
v___x_1419_ = v___x_1412_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v___x_1416_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
else
{
size_t v___x_1421_; size_t v___x_1422_; lean_object* v___x_1423_; 
lean_del_object(v___x_1412_);
v___x_1421_ = ((size_t)0ULL);
v___x_1422_ = lean_usize_of_nat(v___x_1415_);
v___x_1423_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_cs_1410_, v___x_1421_, v___x_1422_, v___x_1416_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
lean_dec_ref(v_cs_1410_);
return v___x_1423_;
}
}
}
else
{
lean_object* v_vs_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1439_; 
v_vs_1425_ = lean_ctor_get(v_x_1401_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v_x_1401_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1427_ = v_x_1401_;
v_isShared_1428_ = v_isSharedCheck_1439_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_vs_1425_);
lean_dec(v_x_1401_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1439_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; uint8_t v___x_1432_; 
v___x_1429_ = lean_unsigned_to_nat(0u);
v___x_1430_ = lean_array_get_size(v_vs_1425_);
v___x_1431_ = lean_box(0);
v___x_1432_ = lean_nat_dec_lt(v___x_1429_, v___x_1430_);
if (v___x_1432_ == 0)
{
lean_object* v___x_1434_; 
lean_dec_ref(v_vs_1425_);
if (v_isShared_1428_ == 0)
{
lean_ctor_set_tag(v___x_1427_, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1431_);
v___x_1434_ = v___x_1427_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1431_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
else
{
size_t v___x_1436_; size_t v___x_1437_; lean_object* v___x_1438_; 
lean_del_object(v___x_1427_);
v___x_1436_ = ((size_t)0ULL);
v___x_1437_ = lean_usize_of_nat(v___x_1430_);
v___x_1438_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_vs_1425_, v___x_1436_, v___x_1437_, v___x_1431_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
lean_dec_ref(v_vs_1425_);
return v___x_1438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(lean_object* v_as_1440_, size_t v_i_1441_, size_t v_stop_1442_, lean_object* v_b_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
uint8_t v___x_1452_; 
v___x_1452_ = lean_usize_dec_eq(v_i_1441_, v_stop_1442_);
if (v___x_1452_ == 0)
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1453_ = lean_array_uget_borrowed(v_as_1440_, v_i_1441_);
lean_inc(v___x_1453_);
v___x_1454_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v___x_1453_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; size_t v___x_1456_; size_t v___x_1457_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1455_);
lean_dec_ref_known(v___x_1454_, 1);
v___x_1456_ = ((size_t)1ULL);
v___x_1457_ = lean_usize_add(v_i_1441_, v___x_1456_);
v_i_1441_ = v___x_1457_;
v_b_1443_ = v_a_1455_;
goto _start;
}
else
{
return v___x_1454_;
}
}
else
{
lean_object* v___x_1459_; 
v___x_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1459_, 0, v_b_1443_);
return v___x_1459_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_as_1460_, lean_object* v_i_1461_, lean_object* v_stop_1462_, lean_object* v_b_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
size_t v_i_boxed_1472_; size_t v_stop_boxed_1473_; lean_object* v_res_1474_; 
v_i_boxed_1472_ = lean_unbox_usize(v_i_1461_);
lean_dec(v_i_1461_);
v_stop_boxed_1473_ = lean_unbox_usize(v_stop_1462_);
lean_dec(v_stop_1462_);
v_res_1474_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_as_1460_, v_i_boxed_1472_, v_stop_boxed_1473_, v_b_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
lean_dec(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec_ref(v_as_1460_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_x_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v_x_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(lean_object* v_t_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v_root_1494_; lean_object* v_tail_1495_; lean_object* v___x_1496_; 
v_root_1494_ = lean_ctor_get(v_t_1485_, 0);
lean_inc_ref(v_root_1494_);
v_tail_1495_ = lean_ctor_get(v_t_1485_, 1);
lean_inc_ref(v_tail_1495_);
lean_dec_ref(v_t_1485_);
v___x_1496_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v_root_1494_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1510_; 
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1510_ == 0)
{
lean_object* v_unused_1511_; 
v_unused_1511_ = lean_ctor_get(v___x_1496_, 0);
lean_dec(v_unused_1511_);
v___x_1498_ = v___x_1496_;
v_isShared_1499_ = v_isSharedCheck_1510_;
goto v_resetjp_1497_;
}
else
{
lean_dec(v___x_1496_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1510_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; uint8_t v___x_1503_; 
v___x_1500_ = lean_unsigned_to_nat(0u);
v___x_1501_ = lean_array_get_size(v_tail_1495_);
v___x_1502_ = lean_box(0);
v___x_1503_ = lean_nat_dec_lt(v___x_1500_, v___x_1501_);
if (v___x_1503_ == 0)
{
lean_object* v___x_1505_; 
lean_dec_ref(v_tail_1495_);
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 0, v___x_1502_);
v___x_1505_ = v___x_1498_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v___x_1502_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
else
{
size_t v___x_1507_; size_t v___x_1508_; lean_object* v___x_1509_; 
lean_del_object(v___x_1498_);
v___x_1507_ = ((size_t)0ULL);
v___x_1508_ = lean_usize_of_nat(v___x_1501_);
v___x_1509_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1495_, v___x_1507_, v___x_1508_, v___x_1502_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
lean_dec_ref(v_tail_1495_);
return v___x_1509_;
}
}
}
else
{
lean_dec_ref(v_tail_1495_);
return v___x_1496_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4___boxed(lean_object* v_t_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(v_t_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
lean_dec(v___y_1515_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
return v_res_1521_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1522_; 
v___x_1522_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(lean_object* v_x_1523_, size_t v_x_1524_, size_t v_x_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
if (lean_obj_tag(v_x_1523_) == 0)
{
lean_object* v_cs_1534_; lean_object* v___x_1535_; size_t v___x_1536_; lean_object* v_j_1537_; lean_object* v___x_1538_; size_t v___x_1539_; size_t v___x_1540_; size_t v___x_1541_; size_t v___x_1542_; size_t v___x_1543_; size_t v___x_1544_; lean_object* v___x_1545_; 
v_cs_1534_ = lean_ctor_get(v_x_1523_, 0);
lean_inc_ref(v_cs_1534_);
lean_dec_ref_known(v_x_1523_, 1);
v___x_1535_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0);
v___x_1536_ = lean_usize_shift_right(v_x_1524_, v_x_1525_);
v_j_1537_ = lean_usize_to_nat(v___x_1536_);
v___x_1538_ = lean_array_get_borrowed(v___x_1535_, v_cs_1534_, v_j_1537_);
v___x_1539_ = ((size_t)1ULL);
v___x_1540_ = lean_usize_shift_left(v___x_1539_, v_x_1525_);
v___x_1541_ = lean_usize_sub(v___x_1540_, v___x_1539_);
v___x_1542_ = lean_usize_land(v_x_1524_, v___x_1541_);
v___x_1543_ = ((size_t)5ULL);
v___x_1544_ = lean_usize_sub(v_x_1525_, v___x_1543_);
lean_inc(v___x_1538_);
v___x_1545_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v___x_1538_, v___x_1542_, v___x_1544_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1560_; 
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1560_ == 0)
{
lean_object* v_unused_1561_; 
v_unused_1561_ = lean_ctor_get(v___x_1545_, 0);
lean_dec(v_unused_1561_);
v___x_1547_ = v___x_1545_;
v_isShared_1548_ = v_isSharedCheck_1560_;
goto v_resetjp_1546_;
}
else
{
lean_dec(v___x_1545_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1560_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; uint8_t v___x_1553_; 
v___x_1549_ = lean_unsigned_to_nat(1u);
v___x_1550_ = lean_nat_add(v_j_1537_, v___x_1549_);
lean_dec(v_j_1537_);
v___x_1551_ = lean_array_get_size(v_cs_1534_);
v___x_1552_ = lean_box(0);
v___x_1553_ = lean_nat_dec_lt(v___x_1550_, v___x_1551_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1555_; 
lean_dec(v___x_1550_);
lean_dec_ref(v_cs_1534_);
if (v_isShared_1548_ == 0)
{
lean_ctor_set(v___x_1547_, 0, v___x_1552_);
v___x_1555_ = v___x_1547_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v___x_1552_);
v___x_1555_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
return v___x_1555_;
}
}
else
{
size_t v___x_1557_; size_t v___x_1558_; lean_object* v___x_1559_; 
lean_del_object(v___x_1547_);
v___x_1557_ = lean_usize_of_nat(v___x_1550_);
lean_dec(v___x_1550_);
v___x_1558_ = lean_usize_of_nat(v___x_1551_);
v___x_1559_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_cs_1534_, v___x_1557_, v___x_1558_, v___x_1552_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
lean_dec_ref(v_cs_1534_);
return v___x_1559_;
}
}
}
else
{
lean_dec(v_j_1537_);
lean_dec_ref(v_cs_1534_);
return v___x_1545_;
}
}
else
{
lean_object* v_vs_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1576_; 
v_vs_1562_ = lean_ctor_get(v_x_1523_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v_x_1523_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1564_ = v_x_1523_;
v_isShared_1565_ = v_isSharedCheck_1576_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_vs_1562_);
lean_dec(v_x_1523_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1576_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; uint8_t v___x_1569_; 
v___x_1566_ = lean_usize_to_nat(v_x_1524_);
v___x_1567_ = lean_array_get_size(v_vs_1562_);
v___x_1568_ = lean_box(0);
v___x_1569_ = lean_nat_dec_lt(v___x_1566_, v___x_1567_);
if (v___x_1569_ == 0)
{
lean_object* v___x_1571_; 
lean_dec(v___x_1566_);
lean_dec_ref(v_vs_1562_);
if (v_isShared_1565_ == 0)
{
lean_ctor_set_tag(v___x_1564_, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1568_);
v___x_1571_ = v___x_1564_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v___x_1568_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
else
{
size_t v___x_1573_; size_t v___x_1574_; lean_object* v___x_1575_; 
lean_del_object(v___x_1564_);
v___x_1573_ = lean_usize_of_nat(v___x_1566_);
lean_dec(v___x_1566_);
v___x_1574_ = lean_usize_of_nat(v___x_1567_);
v___x_1575_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_vs_1562_, v___x_1573_, v___x_1574_, v___x_1568_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
lean_dec_ref(v_vs_1562_);
return v___x_1575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___boxed(lean_object* v_x_1577_, lean_object* v_x_1578_, lean_object* v_x_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
size_t v_x_9185__boxed_1588_; size_t v_x_9186__boxed_1589_; lean_object* v_res_1590_; 
v_x_9185__boxed_1588_ = lean_unbox_usize(v_x_1578_);
lean_dec(v_x_1578_);
v_x_9186__boxed_1589_ = lean_unbox_usize(v_x_1579_);
lean_dec(v_x_1579_);
v_res_1590_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v_x_1577_, v_x_9185__boxed_1588_, v_x_9186__boxed_1589_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
lean_dec(v___y_1582_);
lean_dec(v___y_1581_);
lean_dec_ref(v___y_1580_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(lean_object* v_t_1591_, lean_object* v_start_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v___x_1601_; uint8_t v___x_1602_; 
v___x_1601_ = lean_unsigned_to_nat(0u);
v___x_1602_ = lean_nat_dec_eq(v_start_1592_, v___x_1601_);
if (v___x_1602_ == 0)
{
lean_object* v_root_1603_; lean_object* v_tail_1604_; size_t v_shift_1605_; lean_object* v_tailOff_1606_; uint8_t v___x_1607_; 
v_root_1603_ = lean_ctor_get(v_t_1591_, 0);
lean_inc_ref(v_root_1603_);
v_tail_1604_ = lean_ctor_get(v_t_1591_, 1);
lean_inc_ref(v_tail_1604_);
v_shift_1605_ = lean_ctor_get_usize(v_t_1591_, 4);
v_tailOff_1606_ = lean_ctor_get(v_t_1591_, 3);
lean_inc(v_tailOff_1606_);
lean_dec_ref(v_t_1591_);
v___x_1607_ = lean_nat_dec_le(v_tailOff_1606_, v_start_1592_);
if (v___x_1607_ == 0)
{
size_t v___x_1608_; lean_object* v___x_1609_; 
lean_dec(v_tailOff_1606_);
v___x_1608_ = lean_usize_of_nat(v_start_1592_);
v___x_1609_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v_root_1603_, v___x_1608_, v_shift_1605_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1622_; 
v_isSharedCheck_1622_ = !lean_is_exclusive(v___x_1609_);
if (v_isSharedCheck_1622_ == 0)
{
lean_object* v_unused_1623_; 
v_unused_1623_ = lean_ctor_get(v___x_1609_, 0);
lean_dec(v_unused_1623_);
v___x_1611_ = v___x_1609_;
v_isShared_1612_ = v_isSharedCheck_1622_;
goto v_resetjp_1610_;
}
else
{
lean_dec(v___x_1609_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1622_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; uint8_t v___x_1615_; 
v___x_1613_ = lean_array_get_size(v_tail_1604_);
v___x_1614_ = lean_box(0);
v___x_1615_ = lean_nat_dec_lt(v___x_1601_, v___x_1613_);
if (v___x_1615_ == 0)
{
lean_object* v___x_1617_; 
lean_dec_ref(v_tail_1604_);
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 0, v___x_1614_);
v___x_1617_ = v___x_1611_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v___x_1614_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
else
{
size_t v___x_1619_; size_t v___x_1620_; lean_object* v___x_1621_; 
lean_del_object(v___x_1611_);
v___x_1619_ = ((size_t)0ULL);
v___x_1620_ = lean_usize_of_nat(v___x_1613_);
v___x_1621_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1604_, v___x_1619_, v___x_1620_, v___x_1614_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec_ref(v_tail_1604_);
return v___x_1621_;
}
}
}
else
{
lean_dec_ref(v_tail_1604_);
return v___x_1609_;
}
}
else
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; uint8_t v___x_1627_; 
lean_dec_ref(v_root_1603_);
v___x_1624_ = lean_nat_sub(v_start_1592_, v_tailOff_1606_);
lean_dec(v_tailOff_1606_);
v___x_1625_ = lean_array_get_size(v_tail_1604_);
v___x_1626_ = lean_box(0);
v___x_1627_ = lean_nat_dec_lt(v___x_1624_, v___x_1625_);
if (v___x_1627_ == 0)
{
lean_object* v___x_1628_; 
lean_dec(v___x_1624_);
lean_dec_ref(v_tail_1604_);
v___x_1628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1626_);
return v___x_1628_;
}
else
{
size_t v___x_1629_; size_t v___x_1630_; lean_object* v___x_1631_; 
v___x_1629_ = lean_usize_of_nat(v___x_1624_);
lean_dec(v___x_1624_);
v___x_1630_ = lean_usize_of_nat(v___x_1625_);
v___x_1631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1604_, v___x_1629_, v___x_1630_, v___x_1626_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec_ref(v_tail_1604_);
return v___x_1631_;
}
}
}
else
{
lean_object* v___x_1632_; 
v___x_1632_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(v_t_1591_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
return v___x_1632_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1___boxed(lean_object* v_t_1633_, lean_object* v_start_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_){
_start:
{
lean_object* v_res_1643_; 
v_res_1643_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(v_t_1633_, v_start_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec(v___y_1639_);
lean_dec_ref(v___y_1638_);
lean_dec(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v_start_1634_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(lean_object* v_lctx_1644_, lean_object* v_start_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v_decls_1654_; lean_object* v___x_1655_; 
v_decls_1654_ = lean_ctor_get(v_lctx_1644_, 1);
lean_inc_ref(v_decls_1654_);
lean_dec_ref(v_lctx_1644_);
v___x_1655_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(v_decls_1654_, v_start_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1___boxed(lean_object* v_lctx_1656_, lean_object* v_start_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(v_lctx_1656_, v_start_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
lean_dec(v_start_1657_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap(lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v_lctx_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v_lctx_1675_ = lean_ctor_get(v_a_1670_, 2);
v___x_1676_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_lctx_1675_);
v___x_1677_ = l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(v_lctx_1675_, v___x_1676_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap___boxed(lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lean_Meta_ExtractLets_initializeValueMap(v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
lean_dec(v_a_1684_);
lean_dec_ref(v_a_1683_);
lean_dec(v_a_1682_);
lean_dec_ref(v_a_1681_);
lean_dec(v_a_1680_);
lean_dec(v_a_1679_);
lean_dec_ref(v_a_1678_);
return v_res_1686_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_containsLet(lean_object* v_e_1688_){
_start:
{
lean_object* v___f_1689_; lean_object* v___x_1690_; 
v___f_1689_ = ((lean_object*)(l_Lean_Meta_ExtractLets_containsLet___closed__0));
v___x_1690_ = lean_find_expr(v___f_1689_, v_e_1688_);
if (lean_obj_tag(v___x_1690_) == 0)
{
uint8_t v___x_1691_; 
v___x_1691_ = 0;
return v___x_1691_;
}
else
{
uint8_t v___x_1692_; 
lean_dec_ref_known(v___x_1690_, 1);
v___x_1692_ = 1;
return v___x_1692_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_containsLet___boxed(lean_object* v_e_1693_){
_start:
{
uint8_t v_res_1694_; lean_object* v_r_1695_; 
v_res_1694_ = l_Lean_Meta_ExtractLets_containsLet(v_e_1693_);
lean_dec_ref(v_e_1693_);
v_r_1695_ = lean_box(v_res_1694_);
return v_r_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(lean_object* v_k_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v_b_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
lean_object* v___x_1706_; 
lean_inc(v___y_1704_);
lean_inc_ref(v___y_1703_);
lean_inc(v___y_1702_);
lean_inc_ref(v___y_1701_);
lean_inc(v___y_1699_);
lean_inc(v___y_1698_);
lean_inc_ref(v___y_1697_);
v___x_1706_ = lean_apply_9(v_k_1696_, v_b_1700_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, lean_box(0));
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed(lean_object* v_k_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v_b_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(v_k_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v_b_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1710_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(lean_object* v_name_1718_, uint8_t v_bi_1719_, lean_object* v_type_1720_, lean_object* v_k_1721_, uint8_t v_kind_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v___f_1731_; lean_object* v___x_1732_; 
lean_inc(v___y_1725_);
lean_inc(v___y_1724_);
lean_inc_ref(v___y_1723_);
v___f_1731_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1731_, 0, v_k_1721_);
lean_closure_set(v___f_1731_, 1, v___y_1723_);
lean_closure_set(v___f_1731_, 2, v___y_1724_);
lean_closure_set(v___f_1731_, 3, v___y_1725_);
v___x_1732_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1718_, v_bi_1719_, v_type_1720_, v___f_1731_, v_kind_1722_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
if (lean_obj_tag(v___x_1732_) == 0)
{
return v___x_1732_;
}
else
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1740_; 
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1735_ = v___x_1732_;
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1732_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1738_; 
if (v_isShared_1736_ == 0)
{
v___x_1738_ = v___x_1735_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_a_1733_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___boxed(lean_object* v_name_1741_, lean_object* v_bi_1742_, lean_object* v_type_1743_, lean_object* v_k_1744_, lean_object* v_kind_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_){
_start:
{
uint8_t v_bi_boxed_1754_; uint8_t v_kind_boxed_1755_; lean_object* v_res_1756_; 
v_bi_boxed_1754_ = lean_unbox(v_bi_1742_);
v_kind_boxed_1755_ = lean_unbox(v_kind_1745_);
v_res_1756_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_name_1741_, v_bi_boxed_1754_, v_type_1743_, v_k_1744_, v_kind_boxed_1755_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec(v___y_1750_);
lean_dec_ref(v___y_1749_);
lean_dec(v___y_1748_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(lean_object* v_00_u03b1_1757_, lean_object* v_name_1758_, uint8_t v_bi_1759_, lean_object* v_type_1760_, lean_object* v_k_1761_, uint8_t v_kind_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_name_1758_, v_bi_1759_, v_type_1760_, v_k_1761_, v_kind_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_);
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___boxed(lean_object* v_00_u03b1_1772_, lean_object* v_name_1773_, lean_object* v_bi_1774_, lean_object* v_type_1775_, lean_object* v_k_1776_, lean_object* v_kind_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_){
_start:
{
uint8_t v_bi_boxed_1786_; uint8_t v_kind_boxed_1787_; lean_object* v_res_1788_; 
v_bi_boxed_1786_ = lean_unbox(v_bi_1774_);
v_kind_boxed_1787_ = lean_unbox(v_kind_1777_);
v_res_1788_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(v_00_u03b1_1772_, v_name_1773_, v_bi_boxed_1786_, v_type_1775_, v_k_1776_, v_kind_boxed_1787_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
lean_dec(v___y_1784_);
lean_dec_ref(v___y_1783_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v___y_1780_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4(uint8_t v_types_1789_, lean_object* v_e_1790_, lean_object* v___f_1791_, lean_object* v_____r_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_){
_start:
{
if (v_types_1789_ == 0)
{
lean_object* v___x_1801_; 
lean_inc_ref(v_e_1790_);
v___x_1801_ = l_Lean_Meta_isType(v_e_1790_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1812_; 
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1804_ = v___x_1801_;
v_isShared_1805_ = v_isSharedCheck_1812_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1801_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1812_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
uint8_t v___x_1806_; 
v___x_1806_ = lean_unbox(v_a_1802_);
lean_dec(v_a_1802_);
if (v___x_1806_ == 0)
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
lean_del_object(v___x_1804_);
lean_dec_ref(v_e_1790_);
v___x_1807_ = lean_box(0);
lean_inc(v___y_1799_);
lean_inc_ref(v___y_1798_);
lean_inc(v___y_1797_);
lean_inc_ref(v___y_1796_);
lean_inc(v___y_1795_);
lean_inc(v___y_1794_);
lean_inc_ref(v___y_1793_);
v___x_1808_ = lean_apply_9(v___f_1791_, v___x_1807_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, lean_box(0));
return v___x_1808_;
}
else
{
lean_object* v___x_1810_; 
lean_dec_ref(v___f_1791_);
if (v_isShared_1805_ == 0)
{
lean_ctor_set(v___x_1804_, 0, v_e_1790_);
v___x_1810_ = v___x_1804_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_e_1790_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
lean_dec_ref(v___f_1791_);
lean_dec_ref(v_e_1790_);
v_a_1813_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1801_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1801_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
else
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
lean_dec_ref(v_e_1790_);
v___x_1821_ = lean_box(0);
lean_inc(v___y_1799_);
lean_inc_ref(v___y_1798_);
lean_inc(v___y_1797_);
lean_inc_ref(v___y_1796_);
lean_inc(v___y_1795_);
lean_inc(v___y_1794_);
lean_inc_ref(v___y_1793_);
v___x_1822_ = lean_apply_9(v___f_1791_, v___x_1821_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, lean_box(0));
return v___x_1822_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed(lean_object* v_types_1823_, lean_object* v_e_1824_, lean_object* v___f_1825_, lean_object* v_____r_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
uint8_t v_types_boxed_1835_; lean_object* v_res_1836_; 
v_types_boxed_1835_ = lean_unbox(v_types_1823_);
v_res_1836_ = l_Lean_Meta_ExtractLets_extractCore___lam__4(v_types_boxed_1835_, v_e_1824_, v___f_1825_, v_____r_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
lean_dec(v___y_1833_);
lean_dec_ref(v___y_1832_);
lean_dec(v___y_1831_);
lean_dec_ref(v___y_1830_);
lean_dec(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
return v_res_1836_;
}
}
LEAN_EXPORT uint8_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(uint8_t v___y_1837_, uint8_t v___y_1838_){
_start:
{
if (v___y_1838_ == 0)
{
if (v___y_1837_ == 0)
{
uint8_t v___x_1839_; 
v___x_1839_ = 1;
return v___x_1839_;
}
else
{
return v___y_1838_;
}
}
else
{
return v___y_1837_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed(lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
uint8_t v___y_41181__boxed_1842_; uint8_t v___y_41182__boxed_1843_; uint8_t v_res_1844_; lean_object* v_r_1845_; 
v___y_41181__boxed_1842_ = lean_unbox(v___y_1840_);
v___y_41182__boxed_1843_ = lean_unbox(v___y_1841_);
v_res_1844_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(v___y_41181__boxed_1842_, v___y_41182__boxed_1843_);
v_r_1845_ = lean_box(v_res_1844_);
return v_r_1845_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1846_; 
v___x_1846_ = l_instMonadEIO___redArg();
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(lean_object* v_msg_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v_toApplicative_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1937_; 
v___x_1863_ = lean_box(0);
v___x_1864_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0);
v___x_1865_ = l_StateRefT_x27_instMonad___redArg(v___x_1864_);
v_toApplicative_1866_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1937_ == 0)
{
lean_object* v_unused_1938_; 
v_unused_1938_ = lean_ctor_get(v___x_1865_, 1);
lean_dec(v_unused_1938_);
v___x_1868_ = v___x_1865_;
v_isShared_1869_ = v_isSharedCheck_1937_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_toApplicative_1866_);
lean_dec(v___x_1865_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1937_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v_toFunctor_1870_; lean_object* v_toSeq_1871_; lean_object* v_toSeqLeft_1872_; lean_object* v_toSeqRight_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1935_; 
v_toFunctor_1870_ = lean_ctor_get(v_toApplicative_1866_, 0);
v_toSeq_1871_ = lean_ctor_get(v_toApplicative_1866_, 2);
v_toSeqLeft_1872_ = lean_ctor_get(v_toApplicative_1866_, 3);
v_toSeqRight_1873_ = lean_ctor_get(v_toApplicative_1866_, 4);
v_isSharedCheck_1935_ = !lean_is_exclusive(v_toApplicative_1866_);
if (v_isSharedCheck_1935_ == 0)
{
lean_object* v_unused_1936_; 
v_unused_1936_ = lean_ctor_get(v_toApplicative_1866_, 1);
lean_dec(v_unused_1936_);
v___x_1875_ = v_toApplicative_1866_;
v_isShared_1876_ = v_isSharedCheck_1935_;
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
v_isShared_1876_ = v_isSharedCheck_1935_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___f_1877_; lean_object* v___f_1878_; lean_object* v___f_1879_; lean_object* v___f_1880_; lean_object* v___x_1881_; lean_object* v___f_1882_; lean_object* v___f_1883_; lean_object* v___f_1884_; lean_object* v___x_1886_; 
v___f_1877_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1));
v___f_1878_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2));
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
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1881_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v___f_1877_);
lean_ctor_set(v_reuseFailAlloc_1934_, 2, v___f_1884_);
lean_ctor_set(v_reuseFailAlloc_1934_, 3, v___f_1883_);
lean_ctor_set(v_reuseFailAlloc_1934_, 4, v___f_1882_);
v___x_1886_ = v_reuseFailAlloc_1934_;
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
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v___x_1886_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v___f_1878_);
v___x_1888_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
lean_object* v___x_1889_; lean_object* v_toApplicative_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1931_; 
v___x_1889_ = l_StateRefT_x27_instMonad___redArg(v___x_1888_);
v_toApplicative_1890_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1931_ == 0)
{
lean_object* v_unused_1932_; 
v_unused_1932_ = lean_ctor_get(v___x_1889_, 1);
lean_dec(v_unused_1932_);
v___x_1892_ = v___x_1889_;
v_isShared_1893_ = v_isSharedCheck_1931_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_toApplicative_1890_);
lean_dec(v___x_1889_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1931_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v_toFunctor_1894_; lean_object* v_toSeq_1895_; lean_object* v_toSeqLeft_1896_; lean_object* v_toSeqRight_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1929_; 
v_toFunctor_1894_ = lean_ctor_get(v_toApplicative_1890_, 0);
v_toSeq_1895_ = lean_ctor_get(v_toApplicative_1890_, 2);
v_toSeqLeft_1896_ = lean_ctor_get(v_toApplicative_1890_, 3);
v_toSeqRight_1897_ = lean_ctor_get(v_toApplicative_1890_, 4);
v_isSharedCheck_1929_ = !lean_is_exclusive(v_toApplicative_1890_);
if (v_isSharedCheck_1929_ == 0)
{
lean_object* v_unused_1930_; 
v_unused_1930_ = lean_ctor_get(v_toApplicative_1890_, 1);
lean_dec(v_unused_1930_);
v___x_1899_ = v_toApplicative_1890_;
v_isShared_1900_ = v_isSharedCheck_1929_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_toSeqRight_1897_);
lean_inc(v_toSeqLeft_1896_);
lean_inc(v_toSeq_1895_);
lean_inc(v_toFunctor_1894_);
lean_dec(v_toApplicative_1890_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1929_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___f_1901_; lean_object* v___f_1902_; lean_object* v___x_1903_; lean_object* v___f_1904_; lean_object* v___f_1905_; lean_object* v___x_1906_; lean_object* v___f_1907_; lean_object* v___f_1908_; lean_object* v___f_1909_; lean_object* v___f_1910_; lean_object* v___f_1911_; lean_object* v___x_1912_; lean_object* v___f_1913_; lean_object* v___f_1914_; lean_object* v___f_1915_; lean_object* v___x_1917_; 
v___f_1901_ = lean_alloc_closure((void*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed), 2, 0);
v___f_1902_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1902_, 0, v___f_1901_);
v___x_1903_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3));
v___f_1904_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1904_, 0, v___f_1902_);
lean_closure_set(v___f_1904_, 1, v___x_1903_);
v___f_1905_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4));
v___x_1906_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5));
v___f_1907_ = lean_alloc_closure((void*)(l_instHashableProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1907_, 0, v___f_1905_);
lean_closure_set(v___f_1907_, 1, v___x_1906_);
v___f_1908_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6));
v___f_1909_ = ((lean_object*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7));
lean_inc_ref(v_toFunctor_1894_);
v___f_1910_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1910_, 0, v_toFunctor_1894_);
v___f_1911_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1911_, 0, v_toFunctor_1894_);
v___x_1912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1912_, 0, v___f_1910_);
lean_ctor_set(v___x_1912_, 1, v___f_1911_);
v___f_1913_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1913_, 0, v_toSeqRight_1897_);
v___f_1914_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1914_, 0, v_toSeqLeft_1896_);
v___f_1915_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1915_, 0, v_toSeq_1895_);
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 4, v___f_1913_);
lean_ctor_set(v___x_1899_, 3, v___f_1914_);
lean_ctor_set(v___x_1899_, 2, v___f_1915_);
lean_ctor_set(v___x_1899_, 1, v___f_1908_);
lean_ctor_set(v___x_1899_, 0, v___x_1912_);
v___x_1917_ = v___x_1899_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1912_);
lean_ctor_set(v_reuseFailAlloc_1928_, 1, v___f_1908_);
lean_ctor_set(v_reuseFailAlloc_1928_, 2, v___f_1915_);
lean_ctor_set(v_reuseFailAlloc_1928_, 3, v___f_1914_);
lean_ctor_set(v_reuseFailAlloc_1928_, 4, v___f_1913_);
v___x_1917_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
lean_object* v___x_1919_; 
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 1, v___f_1909_);
lean_ctor_set(v___x_1892_, 0, v___x_1917_);
v___x_1919_ = v___x_1892_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v___x_1917_);
lean_ctor_set(v_reuseFailAlloc_1927_, 1, v___f_1909_);
v___x_1919_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___f_1924_; lean_object* v___x_37998__overap_1925_; lean_object* v___x_1926_; 
v___x_1920_ = l_StateRefT_x27_instMonad___redArg(v___x_1919_);
v___x_1921_ = l_Lean_MonadCacheT_instMonad___redArg(v___x_1863_, v___f_1904_, v___f_1907_, v___x_1920_);
v___x_1922_ = l_Lean_instInhabitedExpr;
v___x_1923_ = l_instInhabitedOfMonad___redArg(v___x_1921_, v___x_1922_);
v___f_1924_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1924_, 0, v___x_1923_);
v___x_37998__overap_1925_ = lean_panic_fn_borrowed(v___f_1924_, v_msg_1854_);
lean_dec_ref(v___f_1924_);
lean_inc(v___y_1861_);
lean_inc_ref(v___y_1860_);
lean_inc(v___y_1859_);
lean_inc_ref(v___y_1858_);
lean_inc(v___y_1857_);
lean_inc(v___y_1856_);
lean_inc_ref(v___y_1855_);
v___x_1926_ = lean_apply_8(v___x_37998__overap_1925_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, lean_box(0));
return v___x_1926_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___boxed(lean_object* v_msg_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v_msg_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
lean_dec(v___y_1942_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0(lean_object* v_binderType_1949_, lean_object* v_binderName_1950_, uint8_t v_binderInfo_1951_, lean_object* v_body_1952_, lean_object* v_e_1953_, lean_object* v_t_1954_, lean_object* v_b_1955_){
_start:
{
size_t v___x_1956_; size_t v___x_1957_; uint8_t v___x_1958_; 
v___x_1956_ = lean_ptr_addr(v_binderType_1949_);
v___x_1957_ = lean_ptr_addr(v_t_1954_);
v___x_1958_ = lean_usize_dec_eq(v___x_1956_, v___x_1957_);
if (v___x_1958_ == 0)
{
lean_object* v___x_1959_; 
v___x_1959_ = l_Lean_Expr_lam___override(v_binderName_1950_, v_t_1954_, v_b_1955_, v_binderInfo_1951_);
return v___x_1959_;
}
else
{
size_t v___x_1960_; size_t v___x_1961_; uint8_t v___x_1962_; 
v___x_1960_ = lean_ptr_addr(v_body_1952_);
v___x_1961_ = lean_ptr_addr(v_b_1955_);
v___x_1962_ = lean_usize_dec_eq(v___x_1960_, v___x_1961_);
if (v___x_1962_ == 0)
{
lean_object* v___x_1963_; 
v___x_1963_ = l_Lean_Expr_lam___override(v_binderName_1950_, v_t_1954_, v_b_1955_, v_binderInfo_1951_);
return v___x_1963_;
}
else
{
uint8_t v___x_1964_; 
v___x_1964_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1951_, v_binderInfo_1951_);
if (v___x_1964_ == 0)
{
lean_object* v___x_1965_; 
v___x_1965_ = l_Lean_Expr_lam___override(v_binderName_1950_, v_t_1954_, v_b_1955_, v_binderInfo_1951_);
return v___x_1965_;
}
else
{
lean_dec_ref(v_b_1955_);
lean_dec_ref(v_t_1954_);
lean_dec(v_binderName_1950_);
lean_inc_ref(v_e_1953_);
return v_e_1953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed(lean_object* v_binderType_1966_, lean_object* v_binderName_1967_, lean_object* v_binderInfo_1968_, lean_object* v_body_1969_, lean_object* v_e_1970_, lean_object* v_t_1971_, lean_object* v_b_1972_){
_start:
{
uint8_t v_binderInfo_41369__boxed_1973_; lean_object* v_res_1974_; 
v_binderInfo_41369__boxed_1973_ = lean_unbox(v_binderInfo_1968_);
v_res_1974_ = l_Lean_Meta_ExtractLets_extractCore___lam__0(v_binderType_1966_, v_binderName_1967_, v_binderInfo_41369__boxed_1973_, v_body_1969_, v_e_1970_, v_t_1971_, v_b_1972_);
lean_dec_ref(v_e_1970_);
lean_dec_ref(v_body_1969_);
lean_dec_ref(v_binderType_1966_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1(lean_object* v_binderType_1975_, lean_object* v_binderName_1976_, uint8_t v_binderInfo_1977_, lean_object* v_body_1978_, lean_object* v_e_1979_, lean_object* v_t_1980_, lean_object* v_b_1981_){
_start:
{
size_t v___x_1982_; size_t v___x_1983_; uint8_t v___x_1984_; 
v___x_1982_ = lean_ptr_addr(v_binderType_1975_);
v___x_1983_ = lean_ptr_addr(v_t_1980_);
v___x_1984_ = lean_usize_dec_eq(v___x_1982_, v___x_1983_);
if (v___x_1984_ == 0)
{
lean_object* v___x_1985_; 
v___x_1985_ = l_Lean_Expr_forallE___override(v_binderName_1976_, v_t_1980_, v_b_1981_, v_binderInfo_1977_);
return v___x_1985_;
}
else
{
size_t v___x_1986_; size_t v___x_1987_; uint8_t v___x_1988_; 
v___x_1986_ = lean_ptr_addr(v_body_1978_);
v___x_1987_ = lean_ptr_addr(v_b_1981_);
v___x_1988_ = lean_usize_dec_eq(v___x_1986_, v___x_1987_);
if (v___x_1988_ == 0)
{
lean_object* v___x_1989_; 
v___x_1989_ = l_Lean_Expr_forallE___override(v_binderName_1976_, v_t_1980_, v_b_1981_, v_binderInfo_1977_);
return v___x_1989_;
}
else
{
uint8_t v___x_1990_; 
v___x_1990_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1977_, v_binderInfo_1977_);
if (v___x_1990_ == 0)
{
lean_object* v___x_1991_; 
v___x_1991_ = l_Lean_Expr_forallE___override(v_binderName_1976_, v_t_1980_, v_b_1981_, v_binderInfo_1977_);
return v___x_1991_;
}
else
{
lean_dec_ref(v_b_1981_);
lean_dec_ref(v_t_1980_);
lean_dec(v_binderName_1976_);
lean_inc_ref(v_e_1979_);
return v_e_1979_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed(lean_object* v_binderType_1992_, lean_object* v_binderName_1993_, lean_object* v_binderInfo_1994_, lean_object* v_body_1995_, lean_object* v_e_1996_, lean_object* v_t_1997_, lean_object* v_b_1998_){
_start:
{
uint8_t v_binderInfo_41401__boxed_1999_; lean_object* v_res_2000_; 
v_binderInfo_41401__boxed_1999_ = lean_unbox(v_binderInfo_1994_);
v_res_2000_ = l_Lean_Meta_ExtractLets_extractCore___lam__1(v_binderType_1992_, v_binderName_1993_, v_binderInfo_41401__boxed_1999_, v_body_1995_, v_e_1996_, v_t_1997_, v_b_1998_);
lean_dec_ref(v_e_1996_);
lean_dec_ref(v_body_1995_);
lean_dec_ref(v_binderType_1992_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(lean_object* v_name_2001_, lean_object* v_type_2002_, lean_object* v_val_2003_, lean_object* v_k_2004_, uint8_t v_nondep_2005_, uint8_t v_kind_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_){
_start:
{
lean_object* v___f_2015_; lean_object* v___x_2016_; 
lean_inc(v___y_2009_);
lean_inc(v___y_2008_);
lean_inc_ref(v___y_2007_);
v___f_2015_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_2015_, 0, v_k_2004_);
lean_closure_set(v___f_2015_, 1, v___y_2007_);
lean_closure_set(v___f_2015_, 2, v___y_2008_);
lean_closure_set(v___f_2015_, 3, v___y_2009_);
v___x_2016_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2001_, v_type_2002_, v_val_2003_, v___f_2015_, v_nondep_2005_, v_kind_2006_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
if (lean_obj_tag(v___x_2016_) == 0)
{
return v___x_2016_;
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg___boxed(lean_object* v_name_2025_, lean_object* v_type_2026_, lean_object* v_val_2027_, lean_object* v_k_2028_, lean_object* v_nondep_2029_, lean_object* v_kind_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_){
_start:
{
uint8_t v_nondep_boxed_2039_; uint8_t v_kind_boxed_2040_; lean_object* v_res_2041_; 
v_nondep_boxed_2039_ = lean_unbox(v_nondep_2029_);
v_kind_boxed_2040_ = lean_unbox(v_kind_2030_);
v_res_2041_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_2025_, v_type_2026_, v_val_2027_, v_k_2028_, v_nondep_boxed_2039_, v_kind_boxed_2040_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_);
lean_dec(v___y_2037_);
lean_dec_ref(v___y_2036_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(lean_object* v_msg_2042_){
_start:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2043_ = l_Lean_instInhabitedExpr;
v___x_2044_ = lean_panic_fn_borrowed(v___x_2043_, v_msg_2042_);
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(lean_object* v_a_2045_, lean_object* v_x_2046_){
_start:
{
if (lean_obj_tag(v_x_2046_) == 0)
{
lean_object* v___x_2047_; 
v___x_2047_ = lean_box(0);
return v___x_2047_;
}
else
{
lean_object* v_key_2048_; lean_object* v_value_2049_; lean_object* v_tail_2050_; uint8_t v___x_2051_; 
v_key_2048_ = lean_ctor_get(v_x_2046_, 0);
v_value_2049_ = lean_ctor_get(v_x_2046_, 1);
v_tail_2050_ = lean_ctor_get(v_x_2046_, 2);
v___x_2051_ = l_Lean_ExprStructEq_beq(v_key_2048_, v_a_2045_);
if (v___x_2051_ == 0)
{
v_x_2046_ = v_tail_2050_;
goto _start;
}
else
{
lean_object* v___x_2053_; 
lean_inc(v_value_2049_);
v___x_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2053_, 0, v_value_2049_);
return v___x_2053_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg___boxed(lean_object* v_a_2054_, lean_object* v_x_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_2054_, v_x_2055_);
lean_dec(v_x_2055_);
lean_dec_ref(v_a_2054_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(lean_object* v_m_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v_buckets_2059_; lean_object* v___x_2060_; uint64_t v___x_2061_; uint64_t v___x_2062_; uint64_t v___x_2063_; uint64_t v_fold_2064_; uint64_t v___x_2065_; uint64_t v___x_2066_; uint64_t v___x_2067_; size_t v___x_2068_; size_t v___x_2069_; size_t v___x_2070_; size_t v___x_2071_; size_t v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v_buckets_2059_ = lean_ctor_get(v_m_2057_, 1);
v___x_2060_ = lean_array_get_size(v_buckets_2059_);
v___x_2061_ = l_Lean_ExprStructEq_hash(v_a_2058_);
v___x_2062_ = 32ULL;
v___x_2063_ = lean_uint64_shift_right(v___x_2061_, v___x_2062_);
v_fold_2064_ = lean_uint64_xor(v___x_2061_, v___x_2063_);
v___x_2065_ = 16ULL;
v___x_2066_ = lean_uint64_shift_right(v_fold_2064_, v___x_2065_);
v___x_2067_ = lean_uint64_xor(v_fold_2064_, v___x_2066_);
v___x_2068_ = lean_uint64_to_usize(v___x_2067_);
v___x_2069_ = lean_usize_of_nat(v___x_2060_);
v___x_2070_ = ((size_t)1ULL);
v___x_2071_ = lean_usize_sub(v___x_2069_, v___x_2070_);
v___x_2072_ = lean_usize_land(v___x_2068_, v___x_2071_);
v___x_2073_ = lean_array_uget_borrowed(v_buckets_2059_, v___x_2072_);
v___x_2074_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_2058_, v___x_2073_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg___boxed(lean_object* v_m_2075_, lean_object* v_a_2076_){
_start:
{
lean_object* v_res_2077_; 
v_res_2077_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_2075_, v_a_2076_);
lean_dec_ref(v_a_2076_);
lean_dec_ref(v_m_2075_);
return v_res_2077_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(lean_object* v_a_2078_, lean_object* v_x_2079_){
_start:
{
if (lean_obj_tag(v_x_2079_) == 0)
{
uint8_t v___x_2080_; 
v___x_2080_ = 0;
return v___x_2080_;
}
else
{
lean_object* v_key_2081_; lean_object* v_tail_2082_; lean_object* v_fst_2083_; lean_object* v_snd_2084_; lean_object* v_fst_2085_; lean_object* v_snd_2086_; uint8_t v___x_2090_; 
v_key_2081_ = lean_ctor_get(v_x_2079_, 0);
v_tail_2082_ = lean_ctor_get(v_x_2079_, 2);
v_fst_2083_ = lean_ctor_get(v_key_2081_, 0);
v_snd_2084_ = lean_ctor_get(v_key_2081_, 1);
v_fst_2085_ = lean_ctor_get(v_a_2078_, 0);
v_snd_2086_ = lean_ctor_get(v_a_2078_, 1);
v___x_2090_ = lean_unbox(v_fst_2085_);
if (v___x_2090_ == 0)
{
uint8_t v___x_2091_; 
v___x_2091_ = lean_unbox(v_fst_2083_);
if (v___x_2091_ == 0)
{
goto v___jp_2087_;
}
else
{
v_x_2079_ = v_tail_2082_;
goto _start;
}
}
else
{
uint8_t v___x_2093_; 
v___x_2093_ = lean_unbox(v_fst_2083_);
if (v___x_2093_ == 0)
{
v_x_2079_ = v_tail_2082_;
goto _start;
}
else
{
goto v___jp_2087_;
}
}
v___jp_2087_:
{
uint8_t v___x_2088_; 
v___x_2088_ = l_Lean_ExprStructEq_beq(v_snd_2084_, v_snd_2086_);
if (v___x_2088_ == 0)
{
v_x_2079_ = v_tail_2082_;
goto _start;
}
else
{
return v___x_2088_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg___boxed(lean_object* v_a_2095_, lean_object* v_x_2096_){
_start:
{
uint8_t v_res_2097_; lean_object* v_r_2098_; 
v_res_2097_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2095_, v_x_2096_);
lean_dec(v_x_2096_);
lean_dec_ref(v_a_2095_);
v_r_2098_ = lean_box(v_res_2097_);
return v_r_2098_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(lean_object* v_a_2099_, lean_object* v_b_2100_, lean_object* v_x_2101_){
_start:
{
if (lean_obj_tag(v_x_2101_) == 0)
{
lean_dec(v_b_2100_);
lean_dec_ref(v_a_2099_);
return v_x_2101_;
}
else
{
lean_object* v_key_2102_; lean_object* v_value_2103_; lean_object* v_tail_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2123_; 
v_key_2102_ = lean_ctor_get(v_x_2101_, 0);
v_value_2103_ = lean_ctor_get(v_x_2101_, 1);
v_tail_2104_ = lean_ctor_get(v_x_2101_, 2);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_x_2101_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2106_ = v_x_2101_;
v_isShared_2107_ = v_isSharedCheck_2123_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_tail_2104_);
lean_inc(v_value_2103_);
lean_inc(v_key_2102_);
lean_dec(v_x_2101_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2123_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v_fst_2113_; lean_object* v_snd_2114_; lean_object* v_fst_2115_; lean_object* v_snd_2116_; uint8_t v___x_2120_; 
v_fst_2113_ = lean_ctor_get(v_key_2102_, 0);
v_snd_2114_ = lean_ctor_get(v_key_2102_, 1);
v_fst_2115_ = lean_ctor_get(v_a_2099_, 0);
v_snd_2116_ = lean_ctor_get(v_a_2099_, 1);
v___x_2120_ = lean_unbox(v_fst_2115_);
if (v___x_2120_ == 0)
{
uint8_t v___x_2121_; 
v___x_2121_ = lean_unbox(v_fst_2113_);
if (v___x_2121_ == 0)
{
goto v___jp_2117_;
}
else
{
goto v___jp_2108_;
}
}
else
{
uint8_t v___x_2122_; 
v___x_2122_ = lean_unbox(v_fst_2113_);
if (v___x_2122_ == 0)
{
goto v___jp_2108_;
}
else
{
goto v___jp_2117_;
}
}
v___jp_2108_:
{
lean_object* v___x_2109_; lean_object* v___x_2111_; 
v___x_2109_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2099_, v_b_2100_, v_tail_2104_);
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 2, v___x_2109_);
v___x_2111_ = v___x_2106_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_key_2102_);
lean_ctor_set(v_reuseFailAlloc_2112_, 1, v_value_2103_);
lean_ctor_set(v_reuseFailAlloc_2112_, 2, v___x_2109_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
v___jp_2117_:
{
uint8_t v___x_2118_; 
v___x_2118_ = l_Lean_ExprStructEq_beq(v_snd_2114_, v_snd_2116_);
if (v___x_2118_ == 0)
{
goto v___jp_2108_;
}
else
{
lean_object* v___x_2119_; 
lean_del_object(v___x_2106_);
lean_dec(v_value_2103_);
lean_dec(v_key_2102_);
v___x_2119_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2119_, 0, v_a_2099_);
lean_ctor_set(v___x_2119_, 1, v_b_2100_);
lean_ctor_set(v___x_2119_, 2, v_tail_2104_);
return v___x_2119_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(lean_object* v_x_2124_, lean_object* v_x_2125_){
_start:
{
if (lean_obj_tag(v_x_2125_) == 0)
{
return v_x_2124_;
}
else
{
lean_object* v_key_2126_; lean_object* v_value_2127_; lean_object* v_tail_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2159_; 
v_key_2126_ = lean_ctor_get(v_x_2125_, 0);
v_value_2127_ = lean_ctor_get(v_x_2125_, 1);
v_tail_2128_ = lean_ctor_get(v_x_2125_, 2);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_x_2125_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2130_ = v_x_2125_;
v_isShared_2131_ = v_isSharedCheck_2159_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_tail_2128_);
lean_inc(v_value_2127_);
lean_inc(v_key_2126_);
lean_dec(v_x_2125_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2159_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v_fst_2132_; lean_object* v_snd_2133_; lean_object* v___x_2134_; uint64_t v___y_2136_; uint8_t v___x_2156_; 
v_fst_2132_ = lean_ctor_get(v_key_2126_, 0);
v_snd_2133_ = lean_ctor_get(v_key_2126_, 1);
v___x_2134_ = lean_array_get_size(v_x_2124_);
v___x_2156_ = lean_unbox(v_fst_2132_);
if (v___x_2156_ == 0)
{
uint64_t v___x_2157_; 
v___x_2157_ = 13ULL;
v___y_2136_ = v___x_2157_;
goto v___jp_2135_;
}
else
{
uint64_t v___x_2158_; 
v___x_2158_ = 11ULL;
v___y_2136_ = v___x_2158_;
goto v___jp_2135_;
}
v___jp_2135_:
{
uint64_t v___x_2137_; uint64_t v___x_2138_; uint64_t v___x_2139_; uint64_t v___x_2140_; uint64_t v_fold_2141_; uint64_t v___x_2142_; uint64_t v___x_2143_; uint64_t v___x_2144_; size_t v___x_2145_; size_t v___x_2146_; size_t v___x_2147_; size_t v___x_2148_; size_t v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2152_; 
v___x_2137_ = l_Lean_ExprStructEq_hash(v_snd_2133_);
v___x_2138_ = lean_uint64_mix_hash(v___y_2136_, v___x_2137_);
v___x_2139_ = 32ULL;
v___x_2140_ = lean_uint64_shift_right(v___x_2138_, v___x_2139_);
v_fold_2141_ = lean_uint64_xor(v___x_2138_, v___x_2140_);
v___x_2142_ = 16ULL;
v___x_2143_ = lean_uint64_shift_right(v_fold_2141_, v___x_2142_);
v___x_2144_ = lean_uint64_xor(v_fold_2141_, v___x_2143_);
v___x_2145_ = lean_uint64_to_usize(v___x_2144_);
v___x_2146_ = lean_usize_of_nat(v___x_2134_);
v___x_2147_ = ((size_t)1ULL);
v___x_2148_ = lean_usize_sub(v___x_2146_, v___x_2147_);
v___x_2149_ = lean_usize_land(v___x_2145_, v___x_2148_);
v___x_2150_ = lean_array_uget_borrowed(v_x_2124_, v___x_2149_);
lean_inc(v___x_2150_);
if (v_isShared_2131_ == 0)
{
lean_ctor_set(v___x_2130_, 2, v___x_2150_);
v___x_2152_ = v___x_2130_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_key_2126_);
lean_ctor_set(v_reuseFailAlloc_2155_, 1, v_value_2127_);
lean_ctor_set(v_reuseFailAlloc_2155_, 2, v___x_2150_);
v___x_2152_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
lean_object* v___x_2153_; 
v___x_2153_ = lean_array_uset(v_x_2124_, v___x_2149_, v___x_2152_);
v_x_2124_ = v___x_2153_;
v_x_2125_ = v_tail_2128_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(lean_object* v_i_2160_, lean_object* v_source_2161_, lean_object* v_target_2162_){
_start:
{
lean_object* v___x_2163_; uint8_t v___x_2164_; 
v___x_2163_ = lean_array_get_size(v_source_2161_);
v___x_2164_ = lean_nat_dec_lt(v_i_2160_, v___x_2163_);
if (v___x_2164_ == 0)
{
lean_dec_ref(v_source_2161_);
lean_dec(v_i_2160_);
return v_target_2162_;
}
else
{
lean_object* v_es_2165_; lean_object* v___x_2166_; lean_object* v_source_2167_; lean_object* v_target_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
v_es_2165_ = lean_array_fget(v_source_2161_, v_i_2160_);
v___x_2166_ = lean_box(0);
v_source_2167_ = lean_array_fset(v_source_2161_, v_i_2160_, v___x_2166_);
v_target_2168_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_target_2162_, v_es_2165_);
v___x_2169_ = lean_unsigned_to_nat(1u);
v___x_2170_ = lean_nat_add(v_i_2160_, v___x_2169_);
lean_dec(v_i_2160_);
v_i_2160_ = v___x_2170_;
v_source_2161_ = v_source_2167_;
v_target_2162_ = v_target_2168_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(lean_object* v_data_2172_){
_start:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v_nbuckets_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2173_ = lean_array_get_size(v_data_2172_);
v___x_2174_ = lean_unsigned_to_nat(2u);
v_nbuckets_2175_ = lean_nat_mul(v___x_2173_, v___x_2174_);
v___x_2176_ = lean_unsigned_to_nat(0u);
v___x_2177_ = lean_box(0);
v___x_2178_ = lean_mk_array(v_nbuckets_2175_, v___x_2177_);
v___x_2179_ = lean_array_propagate_mark(v_data_2172_, v___x_2178_);
v___x_2180_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v___x_2176_, v_data_2172_, v___x_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(lean_object* v_m_2181_, lean_object* v_a_2182_, lean_object* v_b_2183_){
_start:
{
lean_object* v_size_2184_; lean_object* v_buckets_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2236_; 
v_size_2184_ = lean_ctor_get(v_m_2181_, 0);
v_buckets_2185_ = lean_ctor_get(v_m_2181_, 1);
v_isSharedCheck_2236_ = !lean_is_exclusive(v_m_2181_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2187_ = v_m_2181_;
v_isShared_2188_ = v_isSharedCheck_2236_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_buckets_2185_);
lean_inc(v_size_2184_);
lean_dec(v_m_2181_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2236_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v_fst_2189_; lean_object* v_snd_2190_; lean_object* v___x_2191_; uint64_t v___y_2193_; uint8_t v___x_2233_; 
v_fst_2189_ = lean_ctor_get(v_a_2182_, 0);
v_snd_2190_ = lean_ctor_get(v_a_2182_, 1);
v___x_2191_ = lean_array_get_size(v_buckets_2185_);
v___x_2233_ = lean_unbox(v_fst_2189_);
if (v___x_2233_ == 0)
{
uint64_t v___x_2234_; 
v___x_2234_ = 13ULL;
v___y_2193_ = v___x_2234_;
goto v___jp_2192_;
}
else
{
uint64_t v___x_2235_; 
v___x_2235_ = 11ULL;
v___y_2193_ = v___x_2235_;
goto v___jp_2192_;
}
v___jp_2192_:
{
uint64_t v___x_2194_; uint64_t v___x_2195_; uint64_t v___x_2196_; uint64_t v___x_2197_; uint64_t v_fold_2198_; uint64_t v___x_2199_; uint64_t v___x_2200_; uint64_t v___x_2201_; size_t v___x_2202_; size_t v___x_2203_; size_t v___x_2204_; size_t v___x_2205_; size_t v___x_2206_; lean_object* v_bkt_2207_; uint8_t v___x_2208_; 
v___x_2194_ = l_Lean_ExprStructEq_hash(v_snd_2190_);
v___x_2195_ = lean_uint64_mix_hash(v___y_2193_, v___x_2194_);
v___x_2196_ = 32ULL;
v___x_2197_ = lean_uint64_shift_right(v___x_2195_, v___x_2196_);
v_fold_2198_ = lean_uint64_xor(v___x_2195_, v___x_2197_);
v___x_2199_ = 16ULL;
v___x_2200_ = lean_uint64_shift_right(v_fold_2198_, v___x_2199_);
v___x_2201_ = lean_uint64_xor(v_fold_2198_, v___x_2200_);
v___x_2202_ = lean_uint64_to_usize(v___x_2201_);
v___x_2203_ = lean_usize_of_nat(v___x_2191_);
v___x_2204_ = ((size_t)1ULL);
v___x_2205_ = lean_usize_sub(v___x_2203_, v___x_2204_);
v___x_2206_ = lean_usize_land(v___x_2202_, v___x_2205_);
v_bkt_2207_ = lean_array_uget_borrowed(v_buckets_2185_, v___x_2206_);
v___x_2208_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2182_, v_bkt_2207_);
if (v___x_2208_ == 0)
{
lean_object* v___x_2209_; lean_object* v_size_x27_2210_; lean_object* v___x_2211_; lean_object* v_buckets_x27_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; uint8_t v___x_2218_; 
v___x_2209_ = lean_unsigned_to_nat(1u);
v_size_x27_2210_ = lean_nat_add(v_size_2184_, v___x_2209_);
lean_dec(v_size_2184_);
lean_inc(v_bkt_2207_);
v___x_2211_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2211_, 0, v_a_2182_);
lean_ctor_set(v___x_2211_, 1, v_b_2183_);
lean_ctor_set(v___x_2211_, 2, v_bkt_2207_);
v_buckets_x27_2212_ = lean_array_uset(v_buckets_2185_, v___x_2206_, v___x_2211_);
v___x_2213_ = lean_unsigned_to_nat(4u);
v___x_2214_ = lean_nat_mul(v_size_x27_2210_, v___x_2213_);
v___x_2215_ = lean_unsigned_to_nat(3u);
v___x_2216_ = lean_nat_div(v___x_2214_, v___x_2215_);
lean_dec(v___x_2214_);
v___x_2217_ = lean_array_get_size(v_buckets_x27_2212_);
v___x_2218_ = lean_nat_dec_le(v___x_2216_, v___x_2217_);
lean_dec(v___x_2216_);
if (v___x_2218_ == 0)
{
lean_object* v_val_2219_; lean_object* v___x_2221_; 
v_val_2219_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_buckets_x27_2212_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 1, v_val_2219_);
lean_ctor_set(v___x_2187_, 0, v_size_x27_2210_);
v___x_2221_ = v___x_2187_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_size_x27_2210_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v_val_2219_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
else
{
lean_object* v___x_2224_; 
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 1, v_buckets_x27_2212_);
lean_ctor_set(v___x_2187_, 0, v_size_x27_2210_);
v___x_2224_ = v___x_2187_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_size_x27_2210_);
lean_ctor_set(v_reuseFailAlloc_2225_, 1, v_buckets_x27_2212_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
else
{
lean_object* v___x_2226_; lean_object* v_buckets_x27_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2231_; 
lean_inc(v_bkt_2207_);
v___x_2226_ = lean_box(0);
v_buckets_x27_2227_ = lean_array_uset(v_buckets_2185_, v___x_2206_, v___x_2226_);
v___x_2228_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2182_, v_b_2183_, v_bkt_2207_);
v___x_2229_ = lean_array_uset(v_buckets_x27_2227_, v___x_2206_, v___x_2228_);
if (v_isShared_2188_ == 0)
{
lean_ctor_set(v___x_2187_, 1, v___x_2229_);
v___x_2231_ = v___x_2187_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_size_2184_);
lean_ctor_set(v_reuseFailAlloc_2232_, 1, v___x_2229_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(lean_object* v_a_2237_, lean_object* v_x_2238_){
_start:
{
if (lean_obj_tag(v_x_2238_) == 0)
{
lean_object* v___x_2239_; 
v___x_2239_ = lean_box(0);
return v___x_2239_;
}
else
{
lean_object* v_key_2240_; lean_object* v_value_2241_; lean_object* v_tail_2242_; lean_object* v_fst_2243_; lean_object* v_snd_2244_; lean_object* v_fst_2245_; lean_object* v_snd_2246_; uint8_t v___x_2251_; 
v_key_2240_ = lean_ctor_get(v_x_2238_, 0);
v_value_2241_ = lean_ctor_get(v_x_2238_, 1);
v_tail_2242_ = lean_ctor_get(v_x_2238_, 2);
v_fst_2243_ = lean_ctor_get(v_key_2240_, 0);
v_snd_2244_ = lean_ctor_get(v_key_2240_, 1);
v_fst_2245_ = lean_ctor_get(v_a_2237_, 0);
v_snd_2246_ = lean_ctor_get(v_a_2237_, 1);
v___x_2251_ = lean_unbox(v_fst_2245_);
if (v___x_2251_ == 0)
{
uint8_t v___x_2252_; 
v___x_2252_ = lean_unbox(v_fst_2243_);
if (v___x_2252_ == 0)
{
goto v___jp_2247_;
}
else
{
v_x_2238_ = v_tail_2242_;
goto _start;
}
}
else
{
uint8_t v___x_2254_; 
v___x_2254_ = lean_unbox(v_fst_2243_);
if (v___x_2254_ == 0)
{
v_x_2238_ = v_tail_2242_;
goto _start;
}
else
{
goto v___jp_2247_;
}
}
v___jp_2247_:
{
uint8_t v___x_2248_; 
v___x_2248_ = l_Lean_ExprStructEq_beq(v_snd_2244_, v_snd_2246_);
if (v___x_2248_ == 0)
{
v_x_2238_ = v_tail_2242_;
goto _start;
}
else
{
lean_object* v___x_2250_; 
lean_inc(v_value_2241_);
v___x_2250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2250_, 0, v_value_2241_);
return v___x_2250_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg___boxed(lean_object* v_a_2256_, lean_object* v_x_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2256_, v_x_2257_);
lean_dec(v_x_2257_);
lean_dec_ref(v_a_2256_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(lean_object* v_m_2259_, lean_object* v_a_2260_){
_start:
{
lean_object* v_buckets_2261_; lean_object* v_fst_2262_; lean_object* v_snd_2263_; lean_object* v___x_2264_; uint64_t v___y_2266_; uint8_t v___x_2282_; 
v_buckets_2261_ = lean_ctor_get(v_m_2259_, 1);
v_fst_2262_ = lean_ctor_get(v_a_2260_, 0);
v_snd_2263_ = lean_ctor_get(v_a_2260_, 1);
v___x_2264_ = lean_array_get_size(v_buckets_2261_);
v___x_2282_ = lean_unbox(v_fst_2262_);
if (v___x_2282_ == 0)
{
uint64_t v___x_2283_; 
v___x_2283_ = 13ULL;
v___y_2266_ = v___x_2283_;
goto v___jp_2265_;
}
else
{
uint64_t v___x_2284_; 
v___x_2284_ = 11ULL;
v___y_2266_ = v___x_2284_;
goto v___jp_2265_;
}
v___jp_2265_:
{
uint64_t v___x_2267_; uint64_t v___x_2268_; uint64_t v___x_2269_; uint64_t v___x_2270_; uint64_t v_fold_2271_; uint64_t v___x_2272_; uint64_t v___x_2273_; uint64_t v___x_2274_; size_t v___x_2275_; size_t v___x_2276_; size_t v___x_2277_; size_t v___x_2278_; size_t v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2267_ = l_Lean_ExprStructEq_hash(v_snd_2263_);
v___x_2268_ = lean_uint64_mix_hash(v___y_2266_, v___x_2267_);
v___x_2269_ = 32ULL;
v___x_2270_ = lean_uint64_shift_right(v___x_2268_, v___x_2269_);
v_fold_2271_ = lean_uint64_xor(v___x_2268_, v___x_2270_);
v___x_2272_ = 16ULL;
v___x_2273_ = lean_uint64_shift_right(v_fold_2271_, v___x_2272_);
v___x_2274_ = lean_uint64_xor(v_fold_2271_, v___x_2273_);
v___x_2275_ = lean_uint64_to_usize(v___x_2274_);
v___x_2276_ = lean_usize_of_nat(v___x_2264_);
v___x_2277_ = ((size_t)1ULL);
v___x_2278_ = lean_usize_sub(v___x_2276_, v___x_2277_);
v___x_2279_ = lean_usize_land(v___x_2275_, v___x_2278_);
v___x_2280_ = lean_array_uget_borrowed(v_buckets_2261_, v___x_2279_);
v___x_2281_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2260_, v___x_2280_);
return v___x_2281_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg___boxed(lean_object* v_m_2285_, lean_object* v_a_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_2285_, v_a_2286_);
lean_dec_ref(v_a_2286_);
lean_dec_ref(v_m_2285_);
return v_res_2287_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0(void){
_start:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2288_ = lean_box(0);
v___x_2289_ = l_unsafeCast___redArg(v___x_2288_);
return v___x_2289_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2290_; lean_object* v_dummy_2291_; 
v___x_2290_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0);
v_dummy_2291_ = l_Lean_Expr_sort___override(v___x_2290_);
return v_dummy_2291_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(lean_object* v_upperBound_2292_, lean_object* v_fst_2293_, lean_object* v_fvars_2294_, lean_object* v_a_2295_, lean_object* v_b_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v_a_2306_; uint8_t v___x_2310_; 
v___x_2310_ = lean_nat_dec_lt(v_a_2295_, v_upperBound_2292_);
if (v___x_2310_ == 0)
{
lean_object* v___x_2311_; 
lean_dec(v_a_2295_);
lean_dec(v_fvars_2294_);
v___x_2311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2311_, 0, v_b_2296_);
return v___x_2311_;
}
else
{
lean_object* v___x_2312_; lean_object* v___x_2313_; uint8_t v_binderInfo_2314_; uint8_t v___x_2315_; 
v___x_2312_ = l_Lean_Meta_instInhabitedExprParamInfo_default;
v___x_2313_ = lean_array_get_borrowed(v___x_2312_, v_fst_2293_, v_a_2295_);
v_binderInfo_2314_ = lean_ctor_get_uint8(v___x_2313_, sizeof(void*)*2);
v___x_2315_ = l_Lean_BinderInfo_isExplicit(v_binderInfo_2314_);
if (v___x_2315_ == 0)
{
v_a_2306_ = v_b_2296_;
goto v___jp_2305_;
}
else
{
lean_object* v___x_2316_; uint8_t v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2316_ = l_Lean_instInhabitedExpr;
v___x_2317_ = 0;
v___x_2318_ = lean_array_get_borrowed(v___x_2316_, v_b_2296_, v_a_2295_);
lean_inc(v___x_2318_);
lean_inc(v_fvars_2294_);
v___x_2319_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2294_, v___x_2318_, v___x_2317_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_a_2320_; lean_object* v___x_2321_; 
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_a_2320_);
lean_dec_ref_known(v___x_2319_, 1);
v___x_2321_ = lean_array_set(v_b_2296_, v_a_2295_, v_a_2320_);
v_a_2306_ = v___x_2321_;
goto v___jp_2305_;
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
lean_dec_ref(v_b_2296_);
lean_dec(v_a_2295_);
lean_dec(v_fvars_2294_);
v_a_2322_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___x_2319_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v___x_2319_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2322_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
}
v___jp_2305_:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2307_ = lean_unsigned_to_nat(1u);
v___x_2308_ = lean_nat_add(v_a_2295_, v___x_2307_);
lean_dec(v_a_2295_);
v_a_2295_ = v___x_2308_;
v_b_2296_ = v_a_2306_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(lean_object* v_fvars_2332_, size_t v_sz_2333_, size_t v_i_2334_, lean_object* v_bs_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_){
_start:
{
uint8_t v___x_2344_; 
v___x_2344_ = lean_usize_dec_lt(v_i_2334_, v_sz_2333_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2345_; lean_object* v___x_2346_; 
lean_dec(v_fvars_2332_);
v___x_2345_ = l_unsafeCast___redArg(v_bs_2335_);
lean_dec_ref(v_bs_2335_);
v___x_2346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2346_, 0, v___x_2345_);
return v___x_2346_;
}
else
{
uint8_t v___x_2347_; lean_object* v_v_2348_; lean_object* v___x_2349_; lean_object* v_bs_x27_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2347_ = 0;
v_v_2348_ = lean_array_uget(v_bs_2335_, v_i_2334_);
v___x_2349_ = lean_unsigned_to_nat(0u);
v_bs_x27_2350_ = lean_array_uset(v_bs_2335_, v_i_2334_, v___x_2349_);
v___x_2351_ = l_unsafeCast___redArg(v_v_2348_);
lean_dec(v_v_2348_);
lean_inc(v_fvars_2332_);
v___x_2352_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2332_, v___x_2351_, v___x_2347_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v_a_2353_; size_t v___x_2354_; size_t v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; 
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_a_2353_);
lean_dec_ref_known(v___x_2352_, 1);
v___x_2354_ = ((size_t)1ULL);
v___x_2355_ = lean_usize_add(v_i_2334_, v___x_2354_);
v___x_2356_ = l_unsafeCast___redArg(v_a_2353_);
lean_dec(v_a_2353_);
v___x_2357_ = lean_array_uset(v_bs_x27_2350_, v_i_2334_, v___x_2356_);
v_i_2334_ = v___x_2355_;
v_bs_2335_ = v___x_2357_;
goto _start;
}
else
{
lean_object* v_a_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2366_; 
lean_dec_ref(v_bs_x27_2350_);
lean_dec(v_fvars_2332_);
v_a_2359_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2361_ = v___x_2352_;
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_a_2359_);
lean_dec(v___x_2352_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2364_; 
if (v_isShared_2362_ == 0)
{
v___x_2364_ = v___x_2361_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v_a_2359_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7___boxed(lean_object* v_fvars_2367_, lean_object* v_sz_2368_, lean_object* v_i_2369_, lean_object* v_bs_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
size_t v_sz_boxed_2379_; size_t v_i_boxed_2380_; lean_object* v_res_2381_; 
v_sz_boxed_2379_ = lean_unbox_usize(v_sz_2368_);
lean_dec(v_sz_2368_);
v_i_boxed_2380_ = lean_unbox_usize(v_i_2369_);
lean_dec(v_i_2369_);
v_res_2381_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(v_fvars_2367_, v_sz_boxed_2379_, v_i_boxed_2380_, v_bs_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_);
lean_dec(v___y_2377_);
lean_dec_ref(v___y_2376_);
lean_dec(v___y_2375_);
lean_dec_ref(v___y_2374_);
lean_dec(v___y_2373_);
lean_dec(v___y_2372_);
lean_dec_ref(v___y_2371_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(lean_object* v_fvars_2382_, lean_object* v_f_2383_, lean_object* v_args_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_){
_start:
{
uint8_t v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = 0;
lean_inc_ref(v_f_2383_);
lean_inc(v_fvars_2382_);
v___x_2394_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2382_, v_f_2383_, v___x_2393_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_);
if (lean_obj_tag(v___x_2394_) == 0)
{
uint8_t v_implicits_2395_; 
v_implicits_2395_ = lean_ctor_get_uint8(v_a_2385_, 2);
if (v_implicits_2395_ == 0)
{
lean_object* v_a_2396_; lean_object* v___x_2397_; 
v_a_2396_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2396_);
lean_dec_ref_known(v___x_2394_, 1);
lean_inc(v_a_2391_);
lean_inc_ref(v_a_2390_);
lean_inc(v_a_2389_);
lean_inc_ref(v_a_2388_);
v___x_2397_ = lean_infer_type(v_f_2383_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v_a_2398_; lean_object* v___x_2399_; 
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
lean_inc(v_a_2398_);
lean_dec_ref_known(v___x_2397_, 1);
v___x_2399_ = l_Lean_Meta_instantiateForallWithParamInfos(v_a_2398_, v_args_2384_, v___x_2393_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v_a_2400_; lean_object* v_fst_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v_a_2400_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_a_2400_);
lean_dec_ref_known(v___x_2399_, 1);
v_fst_2401_ = lean_ctor_get(v_a_2400_, 0);
lean_inc(v_fst_2401_);
lean_dec(v_a_2400_);
v___x_2402_ = lean_array_get_size(v_args_2384_);
v___x_2403_ = lean_unsigned_to_nat(0u);
v___x_2404_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v___x_2402_, v_fst_2401_, v_fvars_2382_, v___x_2403_, v_args_2384_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_);
lean_dec(v_fst_2401_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2413_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2407_ = v___x_2404_;
v_isShared_2408_ = v_isSharedCheck_2413_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2404_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2413_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2409_; lean_object* v___x_2411_; 
v___x_2409_ = l_Lean_mkAppN(v_a_2396_, v_a_2405_);
lean_dec(v_a_2405_);
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 0, v___x_2409_);
v___x_2411_ = v___x_2407_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v___x_2409_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
}
else
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
lean_dec(v_a_2396_);
v_a_2414_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___x_2404_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2404_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
lean_dec(v_a_2396_);
lean_dec_ref(v_args_2384_);
lean_dec(v_fvars_2382_);
v_a_2422_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2399_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2399_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
else
{
lean_dec(v_a_2396_);
lean_dec_ref(v_args_2384_);
lean_dec(v_fvars_2382_);
return v___x_2397_;
}
}
else
{
lean_object* v_a_2430_; size_t v_sz_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_40617__overap_2436_; lean_object* v___x_2437_; 
lean_dec_ref(v_f_2383_);
v_a_2430_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2430_);
lean_dec_ref_known(v___x_2394_, 1);
v_sz_2431_ = lean_array_size(v_args_2384_);
v___x_2432_ = l_unsafeCast___redArg(v_args_2384_);
lean_dec_ref(v_args_2384_);
v___x_2433_ = lean_box_usize(v_sz_2431_);
v___x_2434_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed__const__1));
v___x_2435_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7___boxed), 12, 4);
lean_closure_set(v___x_2435_, 0, v_fvars_2382_);
lean_closure_set(v___x_2435_, 1, v___x_2433_);
lean_closure_set(v___x_2435_, 2, v___x_2434_);
lean_closure_set(v___x_2435_, 3, v___x_2432_);
v___x_40617__overap_2436_ = l_unsafeCast___redArg(v___x_2435_);
lean_dec_ref(v___x_2435_);
lean_inc(v_a_2391_);
lean_inc_ref(v_a_2390_);
lean_inc(v_a_2389_);
lean_inc_ref(v_a_2388_);
lean_inc(v_a_2387_);
lean_inc(v_a_2386_);
lean_inc_ref(v_a_2385_);
v___x_2437_ = lean_apply_8(v___x_40617__overap_2436_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_, lean_box(0));
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2446_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2440_ = v___x_2437_;
v_isShared_2441_ = v_isSharedCheck_2446_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_a_2438_);
lean_dec(v___x_2437_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2446_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
lean_object* v___x_2442_; lean_object* v___x_2444_; 
v___x_2442_ = l_Lean_mkAppN(v_a_2430_, v_a_2438_);
lean_dec(v_a_2438_);
if (v_isShared_2441_ == 0)
{
lean_ctor_set(v___x_2440_, 0, v___x_2442_);
v___x_2444_ = v___x_2440_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v___x_2442_);
v___x_2444_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
return v___x_2444_;
}
}
}
else
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2454_; 
lean_dec(v_a_2430_);
v_a_2447_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2449_ = v___x_2437_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2437_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2452_; 
if (v_isShared_2450_ == 0)
{
v___x_2452_ = v___x_2449_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_a_2447_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
}
}
}
}
}
else
{
lean_dec_ref(v_args_2384_);
lean_dec_ref(v_f_2383_);
lean_dec(v_fvars_2382_);
return v___x_2394_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed(lean_object* v_fvars_2455_, lean_object* v_f_2456_, lean_object* v_args_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(v_fvars_2455_, v_f_2456_, v_args_2457_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_);
lean_dec(v_a_2464_);
lean_dec_ref(v_a_2463_);
lean_dec(v_a_2462_);
lean_dec_ref(v_a_2461_);
lean_dec(v_a_2460_);
lean_dec(v_a_2459_);
lean_dec_ref(v_a_2458_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(lean_object* v_fvars_2467_, lean_object* v_b_2468_, uint8_t v___x_2469_, lean_object* v_mk_2470_, lean_object* v_a_2471_, lean_object* v_x_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_){
_start:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
lean_inc_ref(v_x_2472_);
v___x_2481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2481_, 0, v_x_2472_);
lean_ctor_set(v___x_2481_, 1, v_fvars_2467_);
v___x_2482_ = lean_expr_instantiate1(v_b_2468_, v_x_2472_);
v___x_2483_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2481_, v___x_2482_, v___x_2469_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_);
if (lean_obj_tag(v___x_2483_) == 0)
{
uint8_t v_lift_2484_; 
v_lift_2484_ = lean_ctor_get_uint8(v___y_2473_, 10);
if (v_lift_2484_ == 0)
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2497_; 
v_a_2485_ = lean_ctor_get(v___x_2483_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2483_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2487_ = v___x_2483_;
v_isShared_2488_ = v_isSharedCheck_2497_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2483_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2497_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2495_; 
v___x_2489_ = lean_unsigned_to_nat(1u);
v___x_2490_ = lean_mk_empty_array_with_capacity(v___x_2489_);
v___x_2491_ = lean_array_push(v___x_2490_, v_x_2472_);
v___x_2492_ = lean_expr_abstract(v_a_2485_, v___x_2491_);
lean_dec_ref(v___x_2491_);
lean_dec(v_a_2485_);
v___x_2493_ = lean_apply_2(v_mk_2470_, v_a_2471_, v___x_2492_);
if (v_isShared_2488_ == 0)
{
lean_ctor_set(v___x_2487_, 0, v___x_2493_);
v___x_2495_ = v___x_2487_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v___x_2493_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
}
else
{
lean_object* v_a_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
v_a_2498_ = lean_ctor_get(v___x_2483_, 0);
lean_inc(v_a_2498_);
lean_dec_ref_known(v___x_2483_, 1);
v___x_2499_ = l_Lean_Expr_fvarId_x21(v_x_2472_);
v___x_2500_ = l_Lean_Meta_ExtractLets_flushDecls(v___x_2499_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_);
if (lean_obj_tag(v___x_2500_) == 0)
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2514_; 
v_a_2501_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2503_ = v___x_2500_;
v_isShared_2504_ = v_isSharedCheck_2514_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2500_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2514_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2512_; 
v___x_2505_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_a_2501_, v_a_2498_);
lean_dec(v_a_2501_);
v___x_2506_ = lean_unsigned_to_nat(1u);
v___x_2507_ = lean_mk_empty_array_with_capacity(v___x_2506_);
v___x_2508_ = lean_array_push(v___x_2507_, v_x_2472_);
v___x_2509_ = lean_expr_abstract(v___x_2505_, v___x_2508_);
lean_dec_ref(v___x_2508_);
lean_dec_ref(v___x_2505_);
v___x_2510_ = lean_apply_2(v_mk_2470_, v_a_2471_, v___x_2509_);
if (v_isShared_2504_ == 0)
{
lean_ctor_set(v___x_2503_, 0, v___x_2510_);
v___x_2512_ = v___x_2503_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v___x_2510_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
else
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2522_; 
lean_dec(v_a_2498_);
lean_dec_ref(v_x_2472_);
lean_dec_ref(v_a_2471_);
lean_dec_ref(v_mk_2470_);
v_a_2515_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2517_ = v___x_2500_;
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2500_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2515_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
}
}
else
{
lean_dec_ref(v_x_2472_);
lean_dec_ref(v_a_2471_);
lean_dec_ref(v_mk_2470_);
return v___x_2483_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed(lean_object* v_fvars_2523_, lean_object* v_b_2524_, lean_object* v___x_2525_, lean_object* v_mk_2526_, lean_object* v_a_2527_, lean_object* v_x_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_){
_start:
{
uint8_t v___x_41995__boxed_2537_; lean_object* v_res_2538_; 
v___x_41995__boxed_2537_ = lean_unbox(v___x_2525_);
v_res_2538_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(v_fvars_2523_, v_b_2524_, v___x_41995__boxed_2537_, v_mk_2526_, v_a_2527_, v_x_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_);
lean_dec(v___y_2535_);
lean_dec_ref(v___y_2534_);
lean_dec(v___y_2533_);
lean_dec_ref(v___y_2532_);
lean_dec(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec_ref(v_b_2524_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(lean_object* v_fvars_2539_, lean_object* v_n_2540_, lean_object* v_t_2541_, lean_object* v_b_2542_, uint8_t v_i_2543_, lean_object* v_mk_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_){
_start:
{
uint8_t v___x_2553_; lean_object* v___x_2554_; 
v___x_2553_ = 0;
lean_inc(v_fvars_2539_);
v___x_2554_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2539_, v_t_2541_, v___x_2553_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_);
if (lean_obj_tag(v___x_2554_) == 0)
{
uint8_t v_underBinder_2555_; 
v_underBinder_2555_ = lean_ctor_get_uint8(v_a_2545_, 4);
if (v_underBinder_2555_ == 0)
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2564_; 
lean_dec(v_n_2540_);
lean_dec(v_fvars_2539_);
v_a_2556_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2564_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2558_ = v___x_2554_;
v_isShared_2559_ = v_isSharedCheck_2564_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v___x_2554_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2564_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2560_; lean_object* v___x_2562_; 
v___x_2560_ = lean_apply_2(v_mk_2544_, v_a_2556_, v_b_2542_);
if (v_isShared_2559_ == 0)
{
lean_ctor_set(v___x_2558_, 0, v___x_2560_);
v___x_2562_ = v___x_2558_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v___x_2560_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
return v___x_2562_;
}
}
}
else
{
lean_object* v_a_2565_; lean_object* v___x_2566_; lean_object* v___f_2567_; uint8_t v___x_2568_; lean_object* v___x_2569_; 
v_a_2565_ = lean_ctor_get(v___x_2554_, 0);
lean_inc_n(v_a_2565_, 2);
lean_dec_ref_known(v___x_2554_, 1);
v___x_2566_ = lean_box(v___x_2553_);
v___f_2567_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed), 14, 5);
lean_closure_set(v___f_2567_, 0, v_fvars_2539_);
lean_closure_set(v___f_2567_, 1, v_b_2542_);
lean_closure_set(v___f_2567_, 2, v___x_2566_);
lean_closure_set(v___f_2567_, 3, v_mk_2544_);
lean_closure_set(v___f_2567_, 4, v_a_2565_);
v___x_2568_ = 0;
v___x_2569_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_n_2540_, v_i_2543_, v_a_2565_, v___f_2567_, v___x_2568_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_);
return v___x_2569_;
}
}
else
{
lean_dec_ref(v_mk_2544_);
lean_dec_ref(v_b_2542_);
lean_dec(v_n_2540_);
lean_dec(v_fvars_2539_);
return v___x_2554_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed(lean_object* v_fvars_2570_, lean_object* v_n_2571_, lean_object* v_t_2572_, lean_object* v_b_2573_, lean_object* v_i_2574_, lean_object* v_mk_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_){
_start:
{
uint8_t v_i_boxed_2584_; lean_object* v_res_2585_; 
v_i_boxed_2584_ = lean_unbox(v_i_2574_);
v_res_2585_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(v_fvars_2570_, v_n_2571_, v_t_2572_, v_b_2573_, v_i_boxed_2584_, v_mk_2575_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_, v_a_2580_, v_a_2581_, v_a_2582_);
lean_dec(v_a_2582_);
lean_dec_ref(v_a_2581_);
lean_dec(v_a_2580_);
lean_dec_ref(v_a_2579_);
lean_dec(v_a_2578_);
lean_dec(v_a_2577_);
lean_dec_ref(v_a_2576_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___boxed(lean_object* v_fvars_2586_, lean_object* v_e_2587_, lean_object* v_topLevel_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_){
_start:
{
uint8_t v_topLevel_boxed_2597_; lean_object* v_res_2598_; 
v_topLevel_boxed_2597_ = lean_unbox(v_topLevel_2588_);
v_res_2598_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2586_, v_e_2587_, v_topLevel_boxed_2597_, v_a_2589_, v_a_2590_, v_a_2591_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_);
lean_dec(v_a_2595_);
lean_dec_ref(v_a_2594_);
lean_dec(v_a_2593_);
lean_dec_ref(v_a_2592_);
lean_dec(v_a_2591_);
lean_dec(v_a_2590_);
lean_dec_ref(v_a_2589_);
return v_res_2598_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2602_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2));
v___x_2603_ = lean_unsigned_to_nat(27u);
v___x_2604_ = lean_unsigned_to_nat(1964u);
v___x_2605_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1));
v___x_2606_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0));
v___x_2607_ = l_mkPanicMessageWithDecl(v___x_2606_, v___x_2605_, v___x_2604_, v___x_2603_, v___x_2602_);
return v___x_2607_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(uint8_t v_fst_2608_, lean_object* v_fvars_2609_, lean_object* v_b_2610_, uint8_t v___x_2611_, lean_object* v_e_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, uint8_t v_isLet_2615_, uint8_t v_topLevel_2616_, lean_object* v_x_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_){
_start:
{
if (v_fst_2608_ == 0)
{
lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
lean_inc_ref(v_x_2617_);
v___x_2626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2626_, 0, v_x_2617_);
lean_ctor_set(v___x_2626_, 1, v_fvars_2609_);
v___x_2627_ = lean_expr_instantiate1(v_b_2610_, v_x_2617_);
v___x_2628_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2626_, v___x_2627_, v___x_2611_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_);
if (lean_obj_tag(v___x_2628_) == 0)
{
if (lean_obj_tag(v_e_2612_) == 8)
{
lean_object* v_a_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2666_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2631_ = v___x_2628_;
v_isShared_2632_ = v_isSharedCheck_2666_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_a_2629_);
lean_dec(v___x_2628_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2666_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v_declName_2633_; lean_object* v_type_2634_; lean_object* v_value_2635_; lean_object* v_body_2636_; uint8_t v_nondep_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; size_t v___x_2642_; size_t v___x_2643_; uint8_t v___x_2644_; 
v_declName_2633_ = lean_ctor_get(v_e_2612_, 0);
v_type_2634_ = lean_ctor_get(v_e_2612_, 1);
v_value_2635_ = lean_ctor_get(v_e_2612_, 2);
v_body_2636_ = lean_ctor_get(v_e_2612_, 3);
v_nondep_2637_ = lean_ctor_get_uint8(v_e_2612_, sizeof(void*)*4 + 8);
v___x_2638_ = lean_unsigned_to_nat(1u);
v___x_2639_ = lean_mk_empty_array_with_capacity(v___x_2638_);
v___x_2640_ = lean_array_push(v___x_2639_, v_x_2617_);
v___x_2641_ = lean_expr_abstract(v_a_2629_, v___x_2640_);
lean_dec_ref(v___x_2640_);
lean_dec(v_a_2629_);
v___x_2642_ = lean_ptr_addr(v_type_2634_);
v___x_2643_ = lean_ptr_addr(v_a_2613_);
v___x_2644_ = lean_usize_dec_eq(v___x_2642_, v___x_2643_);
if (v___x_2644_ == 0)
{
lean_object* v___x_2645_; lean_object* v___x_2647_; 
lean_inc(v_declName_2633_);
lean_dec_ref_known(v_e_2612_, 4);
v___x_2645_ = l_Lean_Expr_letE___override(v_declName_2633_, v_a_2613_, v_a_2614_, v___x_2641_, v_nondep_2637_);
if (v_isShared_2632_ == 0)
{
lean_ctor_set(v___x_2631_, 0, v___x_2645_);
v___x_2647_ = v___x_2631_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v___x_2645_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
else
{
size_t v___x_2649_; size_t v___x_2650_; uint8_t v___x_2651_; 
v___x_2649_ = lean_ptr_addr(v_value_2635_);
v___x_2650_ = lean_ptr_addr(v_a_2614_);
v___x_2651_ = lean_usize_dec_eq(v___x_2649_, v___x_2650_);
if (v___x_2651_ == 0)
{
lean_object* v___x_2652_; lean_object* v___x_2654_; 
lean_inc(v_declName_2633_);
lean_dec_ref_known(v_e_2612_, 4);
v___x_2652_ = l_Lean_Expr_letE___override(v_declName_2633_, v_a_2613_, v_a_2614_, v___x_2641_, v_nondep_2637_);
if (v_isShared_2632_ == 0)
{
lean_ctor_set(v___x_2631_, 0, v___x_2652_);
v___x_2654_ = v___x_2631_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v___x_2652_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
else
{
size_t v___x_2656_; size_t v___x_2657_; uint8_t v___x_2658_; 
v___x_2656_ = lean_ptr_addr(v_body_2636_);
v___x_2657_ = lean_ptr_addr(v___x_2641_);
v___x_2658_ = lean_usize_dec_eq(v___x_2656_, v___x_2657_);
if (v___x_2658_ == 0)
{
lean_object* v___x_2659_; lean_object* v___x_2661_; 
lean_inc(v_declName_2633_);
lean_dec_ref_known(v_e_2612_, 4);
v___x_2659_ = l_Lean_Expr_letE___override(v_declName_2633_, v_a_2613_, v_a_2614_, v___x_2641_, v_nondep_2637_);
if (v_isShared_2632_ == 0)
{
lean_ctor_set(v___x_2631_, 0, v___x_2659_);
v___x_2661_ = v___x_2631_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v___x_2659_);
v___x_2661_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
return v___x_2661_;
}
}
else
{
lean_object* v___x_2664_; 
lean_dec_ref(v___x_2641_);
lean_dec_ref(v_a_2614_);
lean_dec_ref(v_a_2613_);
if (v_isShared_2632_ == 0)
{
lean_ctor_set(v___x_2631_, 0, v_e_2612_);
v___x_2664_ = v___x_2631_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_e_2612_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
}
}
}
else
{
lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2675_; 
lean_dec_ref(v_x_2617_);
lean_dec_ref(v_a_2614_);
lean_dec_ref(v_a_2613_);
lean_dec_ref(v_e_2612_);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2675_ == 0)
{
lean_object* v_unused_2676_; 
v_unused_2676_ = lean_ctor_get(v___x_2628_, 0);
lean_dec(v_unused_2676_);
v___x_2668_ = v___x_2628_;
v_isShared_2669_ = v_isSharedCheck_2675_;
goto v_resetjp_2667_;
}
else
{
lean_dec(v___x_2628_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2675_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2673_; 
v___x_2670_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2671_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2670_);
if (v_isShared_2669_ == 0)
{
lean_ctor_set(v___x_2668_, 0, v___x_2671_);
v___x_2673_ = v___x_2668_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v___x_2671_);
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
else
{
lean_dec_ref(v_x_2617_);
lean_dec_ref(v_a_2614_);
lean_dec_ref(v_a_2613_);
lean_dec_ref(v_e_2612_);
return v___x_2628_;
}
}
else
{
lean_object* v___x_2677_; lean_object* v___x_2678_; 
lean_dec_ref(v_a_2614_);
lean_dec_ref(v_a_2613_);
lean_dec_ref(v_e_2612_);
v___x_2677_ = l_Lean_Expr_fvarId_x21(v_x_2617_);
v___x_2678_ = l_Lean_FVarId_getDecl___redArg(v___x_2677_, v___y_2621_, v___y_2623_, v___y_2624_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v___x_2680_; 
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_a_2679_);
lean_dec_ref_known(v___x_2678_, 1);
v___x_2680_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_a_2679_, v_isLet_2615_, v___y_2618_, v___y_2620_);
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_object* v___x_2681_; lean_object* v___x_2682_; 
lean_dec_ref_known(v___x_2680_, 1);
v___x_2681_ = lean_expr_instantiate1(v_b_2610_, v_x_2617_);
lean_dec_ref(v_x_2617_);
v___x_2682_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2609_, v___x_2681_, v_topLevel_2616_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_);
return v___x_2682_;
}
else
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2690_; 
lean_dec_ref(v_x_2617_);
lean_dec(v_fvars_2609_);
v_a_2683_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2685_ = v___x_2680_;
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2680_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_dec_ref(v_x_2617_);
lean_dec(v_fvars_2609_);
v_a_2691_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2678_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2678_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed(lean_object** _args){
lean_object* v_fst_2699_ = _args[0];
lean_object* v_fvars_2700_ = _args[1];
lean_object* v_b_2701_ = _args[2];
lean_object* v___x_2702_ = _args[3];
lean_object* v_e_2703_ = _args[4];
lean_object* v_a_2704_ = _args[5];
lean_object* v_a_2705_ = _args[6];
lean_object* v_isLet_2706_ = _args[7];
lean_object* v_topLevel_2707_ = _args[8];
lean_object* v_x_2708_ = _args[9];
lean_object* v___y_2709_ = _args[10];
lean_object* v___y_2710_ = _args[11];
lean_object* v___y_2711_ = _args[12];
lean_object* v___y_2712_ = _args[13];
lean_object* v___y_2713_ = _args[14];
lean_object* v___y_2714_ = _args[15];
lean_object* v___y_2715_ = _args[16];
lean_object* v___y_2716_ = _args[17];
_start:
{
uint8_t v_fst_42144__boxed_2717_; uint8_t v___x_42145__boxed_2718_; uint8_t v_isLet_boxed_2719_; uint8_t v_topLevel_boxed_2720_; lean_object* v_res_2721_; 
v_fst_42144__boxed_2717_ = lean_unbox(v_fst_2699_);
v___x_42145__boxed_2718_ = lean_unbox(v___x_2702_);
v_isLet_boxed_2719_ = lean_unbox(v_isLet_2706_);
v_topLevel_boxed_2720_ = lean_unbox(v_topLevel_2707_);
v_res_2721_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(v_fst_42144__boxed_2717_, v_fvars_2700_, v_b_2701_, v___x_42145__boxed_2718_, v_e_2703_, v_a_2704_, v_a_2705_, v_isLet_boxed_2719_, v_topLevel_boxed_2720_, v_x_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_);
lean_dec(v___y_2715_);
lean_dec_ref(v___y_2714_);
lean_dec(v___y_2713_);
lean_dec_ref(v___y_2712_);
lean_dec(v___y_2711_);
lean_dec(v___y_2710_);
lean_dec_ref(v___y_2709_);
lean_dec_ref(v_b_2701_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(lean_object* v_fvars_2722_, lean_object* v_e_2723_, uint8_t v_isLet_2724_, lean_object* v_n_2725_, lean_object* v_t_2726_, lean_object* v_v_2727_, lean_object* v_b_2728_, uint8_t v_topLevel_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_){
_start:
{
lean_object* v___y_2739_; lean_object* v___y_2740_; lean_object* v___y_2741_; lean_object* v___y_2742_; lean_object* v___y_2743_; lean_object* v___y_2744_; lean_object* v___y_2745_; lean_object* v___y_2746_; uint8_t v___x_2752_; lean_object* v___x_2753_; 
v___x_2752_ = 0;
lean_inc(v_fvars_2722_);
v___x_2753_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2722_, v_t_2726_, v___x_2752_, v_a_2730_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2755_; 
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_a_2754_);
lean_dec_ref_known(v___x_2753_, 1);
lean_inc(v_fvars_2722_);
v___x_2755_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2722_, v_v_2727_, v___x_2752_, v_a_2730_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_);
if (lean_obj_tag(v___x_2755_) == 0)
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2867_; 
v_a_2756_ = lean_ctor_get(v___x_2755_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2755_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2758_ = v___x_2755_;
v_isShared_2759_ = v_isSharedCheck_2867_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v___x_2755_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2867_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___y_2796_; lean_object* v___y_2797_; lean_object* v___y_2798_; lean_object* v___y_2799_; lean_object* v___y_2800_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2804_; uint8_t v_descend_2807_; uint8_t v_underBinder_2808_; uint8_t v_usedOnly_2809_; uint8_t v_merge_2810_; uint8_t v_lift_2811_; lean_object* v___y_2813_; lean_object* v___y_2814_; lean_object* v___y_2815_; lean_object* v___y_2816_; lean_object* v___y_2817_; lean_object* v___y_2818_; lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2821_; uint8_t v___y_2823_; lean_object* v___y_2824_; lean_object* v___y_2825_; lean_object* v___y_2826_; lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; uint8_t v___y_2849_; 
v_descend_2807_ = lean_ctor_get_uint8(v_a_2730_, 3);
v_underBinder_2808_ = lean_ctor_get_uint8(v_a_2730_, 4);
v_usedOnly_2809_ = lean_ctor_get_uint8(v_a_2730_, 5);
v_merge_2810_ = lean_ctor_get_uint8(v_a_2730_, 6);
v_lift_2811_ = lean_ctor_get_uint8(v_a_2730_, 10);
if (v_usedOnly_2809_ == 0)
{
v___y_2849_ = v___x_2752_;
goto v___jp_2848_;
}
else
{
uint8_t v___x_2865_; 
v___x_2865_ = l_Lean_Expr_hasLooseBVars(v_b_2728_);
if (v___x_2865_ == 0)
{
lean_object* v___x_2866_; 
lean_del_object(v___x_2758_);
lean_dec(v_a_2756_);
lean_dec(v_a_2754_);
lean_dec(v_n_2725_);
lean_dec_ref(v_e_2723_);
v___x_2866_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2722_, v_b_2728_, v_topLevel_2729_, v_a_2730_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_);
return v___x_2866_;
}
else
{
v___y_2849_ = v___x_2752_;
goto v___jp_2848_;
}
}
v___jp_2760_:
{
if (lean_obj_tag(v_e_2723_) == 8)
{
lean_object* v_declName_2761_; lean_object* v_type_2762_; lean_object* v_value_2763_; lean_object* v_body_2764_; uint8_t v_nondep_2765_; size_t v___x_2766_; size_t v___x_2767_; uint8_t v___x_2768_; 
v_declName_2761_ = lean_ctor_get(v_e_2723_, 0);
v_type_2762_ = lean_ctor_get(v_e_2723_, 1);
v_value_2763_ = lean_ctor_get(v_e_2723_, 2);
v_body_2764_ = lean_ctor_get(v_e_2723_, 3);
v_nondep_2765_ = lean_ctor_get_uint8(v_e_2723_, sizeof(void*)*4 + 8);
v___x_2766_ = lean_ptr_addr(v_type_2762_);
v___x_2767_ = lean_ptr_addr(v_a_2754_);
v___x_2768_ = lean_usize_dec_eq(v___x_2766_, v___x_2767_);
if (v___x_2768_ == 0)
{
lean_object* v___x_2769_; lean_object* v___x_2771_; 
lean_inc(v_declName_2761_);
lean_dec_ref_known(v_e_2723_, 4);
v___x_2769_ = l_Lean_Expr_letE___override(v_declName_2761_, v_a_2754_, v_a_2756_, v_b_2728_, v_nondep_2765_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set(v___x_2758_, 0, v___x_2769_);
v___x_2771_ = v___x_2758_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2769_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
else
{
size_t v___x_2773_; size_t v___x_2774_; uint8_t v___x_2775_; 
v___x_2773_ = lean_ptr_addr(v_value_2763_);
v___x_2774_ = lean_ptr_addr(v_a_2756_);
v___x_2775_ = lean_usize_dec_eq(v___x_2773_, v___x_2774_);
if (v___x_2775_ == 0)
{
lean_object* v___x_2776_; lean_object* v___x_2778_; 
lean_inc(v_declName_2761_);
lean_dec_ref_known(v_e_2723_, 4);
v___x_2776_ = l_Lean_Expr_letE___override(v_declName_2761_, v_a_2754_, v_a_2756_, v_b_2728_, v_nondep_2765_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set(v___x_2758_, 0, v___x_2776_);
v___x_2778_ = v___x_2758_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v___x_2776_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
else
{
size_t v___x_2780_; size_t v___x_2781_; uint8_t v___x_2782_; 
v___x_2780_ = lean_ptr_addr(v_body_2764_);
v___x_2781_ = lean_ptr_addr(v_b_2728_);
v___x_2782_ = lean_usize_dec_eq(v___x_2780_, v___x_2781_);
if (v___x_2782_ == 0)
{
lean_object* v___x_2783_; lean_object* v___x_2785_; 
lean_inc(v_declName_2761_);
lean_dec_ref_known(v_e_2723_, 4);
v___x_2783_ = l_Lean_Expr_letE___override(v_declName_2761_, v_a_2754_, v_a_2756_, v_b_2728_, v_nondep_2765_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set(v___x_2758_, 0, v___x_2783_);
v___x_2785_ = v___x_2758_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v___x_2783_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
else
{
lean_object* v___x_2788_; 
lean_dec(v_a_2756_);
lean_dec(v_a_2754_);
lean_dec_ref(v_b_2728_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set(v___x_2758_, 0, v_e_2723_);
v___x_2788_ = v___x_2758_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_e_2723_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
}
}
else
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2793_; 
lean_dec(v_a_2756_);
lean_dec(v_a_2754_);
lean_dec_ref(v_b_2728_);
lean_dec_ref(v_e_2723_);
v___x_2790_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2791_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2790_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set(v___x_2758_, 0, v___x_2791_);
v___x_2793_ = v___x_2758_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v___x_2791_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
}
v___jp_2795_:
{
uint8_t v___x_2805_; lean_object* v___x_2806_; 
v___x_2805_ = 0;
v___x_2806_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v___y_2801_, v_a_2754_, v_a_2756_, v___y_2800_, v___x_2752_, v___x_2805_, v___y_2796_, v___y_2803_, v___y_2797_, v___y_2798_, v___y_2802_, v___y_2799_, v___y_2804_);
return v___x_2806_;
}
v___jp_2812_:
{
if (v_underBinder_2808_ == 0)
{
lean_dec_ref(v___y_2818_);
lean_dec(v___y_2817_);
goto v___jp_2760_;
}
else
{
if (v_descend_2807_ == 0)
{
lean_dec_ref(v___y_2818_);
lean_dec(v___y_2817_);
goto v___jp_2760_;
}
else
{
lean_del_object(v___x_2758_);
lean_dec_ref(v_b_2728_);
lean_dec_ref(v_e_2723_);
v___y_2796_ = v___y_2813_;
v___y_2797_ = v___y_2814_;
v___y_2798_ = v___y_2815_;
v___y_2799_ = v___y_2816_;
v___y_2800_ = v___y_2818_;
v___y_2801_ = v___y_2817_;
v___y_2802_ = v___y_2819_;
v___y_2803_ = v___y_2820_;
v___y_2804_ = v___y_2821_;
goto v___jp_2795_;
}
}
}
v___jp_2822_:
{
lean_object* v___x_2831_; 
lean_inc(v_a_2756_);
lean_inc(v_a_2754_);
v___x_2831_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_2722_, v_n_2725_, v_a_2754_, v_a_2756_, v___y_2824_, v___y_2826_, v___y_2829_, v___y_2830_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v_a_2832_; lean_object* v_fst_2833_; lean_object* v_snd_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___f_2838_; uint8_t v___x_2839_; 
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_a_2832_);
lean_dec_ref_known(v___x_2831_, 1);
v_fst_2833_ = lean_ctor_get(v_a_2832_, 0);
lean_inc_n(v_fst_2833_, 2);
v_snd_2834_ = lean_ctor_get(v_a_2832_, 1);
lean_inc(v_snd_2834_);
lean_dec(v_a_2832_);
v___x_2835_ = lean_box(v___x_2752_);
v___x_2836_ = lean_box(v_isLet_2724_);
v___x_2837_ = lean_box(v_topLevel_2729_);
lean_inc(v_a_2756_);
lean_inc(v_a_2754_);
lean_inc_ref(v_e_2723_);
lean_inc_ref(v_b_2728_);
v___f_2838_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed), 18, 9);
lean_closure_set(v___f_2838_, 0, v_fst_2833_);
lean_closure_set(v___f_2838_, 1, v_fvars_2722_);
lean_closure_set(v___f_2838_, 2, v_b_2728_);
lean_closure_set(v___f_2838_, 3, v___x_2835_);
lean_closure_set(v___f_2838_, 4, v_e_2723_);
lean_closure_set(v___f_2838_, 5, v_a_2754_);
lean_closure_set(v___f_2838_, 6, v_a_2756_);
lean_closure_set(v___f_2838_, 7, v___x_2836_);
lean_closure_set(v___f_2838_, 8, v___x_2837_);
v___x_2839_ = lean_unbox(v_fst_2833_);
lean_dec(v_fst_2833_);
if (v___x_2839_ == 0)
{
v___y_2813_ = v___y_2824_;
v___y_2814_ = v___y_2826_;
v___y_2815_ = v___y_2827_;
v___y_2816_ = v___y_2829_;
v___y_2817_ = v_snd_2834_;
v___y_2818_ = v___f_2838_;
v___y_2819_ = v___y_2828_;
v___y_2820_ = v___y_2825_;
v___y_2821_ = v___y_2830_;
goto v___jp_2812_;
}
else
{
if (v___y_2823_ == 0)
{
lean_del_object(v___x_2758_);
lean_dec_ref(v_b_2728_);
lean_dec_ref(v_e_2723_);
v___y_2796_ = v___y_2824_;
v___y_2797_ = v___y_2826_;
v___y_2798_ = v___y_2827_;
v___y_2799_ = v___y_2829_;
v___y_2800_ = v___f_2838_;
v___y_2801_ = v_snd_2834_;
v___y_2802_ = v___y_2828_;
v___y_2803_ = v___y_2825_;
v___y_2804_ = v___y_2830_;
goto v___jp_2795_;
}
else
{
v___y_2813_ = v___y_2824_;
v___y_2814_ = v___y_2826_;
v___y_2815_ = v___y_2827_;
v___y_2816_ = v___y_2829_;
v___y_2817_ = v_snd_2834_;
v___y_2818_ = v___f_2838_;
v___y_2819_ = v___y_2828_;
v___y_2820_ = v___y_2825_;
v___y_2821_ = v___y_2830_;
goto v___jp_2812_;
}
}
}
else
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2847_; 
lean_del_object(v___x_2758_);
lean_dec(v_a_2756_);
lean_dec(v_a_2754_);
lean_dec_ref(v_b_2728_);
lean_dec_ref(v_e_2723_);
lean_dec(v_fvars_2722_);
v_a_2840_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2842_ = v___x_2831_;
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v___x_2831_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_a_2840_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
v___jp_2848_:
{
if (v_merge_2810_ == 0)
{
v___y_2823_ = v___y_2849_;
v___y_2824_ = v_a_2730_;
v___y_2825_ = v_a_2731_;
v___y_2826_ = v_a_2732_;
v___y_2827_ = v_a_2733_;
v___y_2828_ = v_a_2734_;
v___y_2829_ = v_a_2735_;
v___y_2830_ = v_a_2736_;
goto v___jp_2822_;
}
else
{
lean_object* v___x_2850_; lean_object* v_valueMap_2851_; lean_object* v___x_2852_; 
v___x_2850_ = lean_st_ref_get(v_a_2732_);
v_valueMap_2851_ = lean_ctor_get(v___x_2850_, 2);
lean_inc_ref(v_valueMap_2851_);
lean_dec(v___x_2850_);
v___x_2852_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_valueMap_2851_, v_a_2756_);
lean_dec_ref(v_valueMap_2851_);
if (lean_obj_tag(v___x_2852_) == 1)
{
lean_del_object(v___x_2758_);
lean_dec(v_a_2756_);
lean_dec(v_a_2754_);
lean_dec(v_n_2725_);
lean_dec_ref(v_e_2723_);
if (v_isLet_2724_ == 0)
{
lean_object* v_val_2853_; 
v_val_2853_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_val_2853_);
lean_dec_ref_known(v___x_2852_, 1);
v___y_2739_ = v_val_2853_;
v___y_2740_ = v_a_2730_;
v___y_2741_ = v_a_2731_;
v___y_2742_ = v_a_2732_;
v___y_2743_ = v_a_2733_;
v___y_2744_ = v_a_2734_;
v___y_2745_ = v_a_2735_;
v___y_2746_ = v_a_2736_;
goto v___jp_2738_;
}
else
{
if (v_lift_2811_ == 0)
{
lean_object* v_val_2854_; 
v_val_2854_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_val_2854_);
lean_dec_ref_known(v___x_2852_, 1);
v___y_2739_ = v_val_2854_;
v___y_2740_ = v_a_2730_;
v___y_2741_ = v_a_2731_;
v___y_2742_ = v_a_2732_;
v___y_2743_ = v_a_2733_;
v___y_2744_ = v_a_2734_;
v___y_2745_ = v_a_2735_;
v___y_2746_ = v_a_2736_;
goto v___jp_2738_;
}
else
{
lean_object* v_val_2855_; lean_object* v___x_2856_; 
v_val_2855_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_val_2855_);
lean_dec_ref_known(v___x_2852_, 1);
v___x_2856_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_val_2855_, v_a_2732_);
if (lean_obj_tag(v___x_2856_) == 0)
{
lean_dec_ref_known(v___x_2856_, 1);
v___y_2739_ = v_val_2855_;
v___y_2740_ = v_a_2730_;
v___y_2741_ = v_a_2731_;
v___y_2742_ = v_a_2732_;
v___y_2743_ = v_a_2733_;
v___y_2744_ = v_a_2734_;
v___y_2745_ = v_a_2735_;
v___y_2746_ = v_a_2736_;
goto v___jp_2738_;
}
else
{
lean_object* v_a_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2864_; 
lean_dec(v_val_2855_);
lean_dec_ref(v_b_2728_);
lean_dec(v_fvars_2722_);
v_a_2857_ = lean_ctor_get(v___x_2856_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2856_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2859_ = v___x_2856_;
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_a_2857_);
lean_dec(v___x_2856_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2862_; 
if (v_isShared_2860_ == 0)
{
v___x_2862_ = v___x_2859_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_a_2857_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
}
}
}
else
{
lean_dec(v___x_2852_);
v___y_2823_ = v___y_2849_;
v___y_2824_ = v_a_2730_;
v___y_2825_ = v_a_2731_;
v___y_2826_ = v_a_2732_;
v___y_2827_ = v_a_2733_;
v___y_2828_ = v_a_2734_;
v___y_2829_ = v_a_2735_;
v___y_2830_ = v_a_2736_;
goto v___jp_2822_;
}
}
}
}
}
else
{
lean_dec(v_a_2754_);
lean_dec_ref(v_b_2728_);
lean_dec(v_n_2725_);
lean_dec_ref(v_e_2723_);
lean_dec(v_fvars_2722_);
return v___x_2755_;
}
}
else
{
lean_dec_ref(v_b_2728_);
lean_dec_ref(v_v_2727_);
lean_dec(v_n_2725_);
lean_dec_ref(v_e_2723_);
lean_dec(v_fvars_2722_);
return v___x_2753_;
}
v___jp_2738_:
{
lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; 
lean_inc(v___y_2739_);
v___x_2747_ = l_Lean_Expr_fvar___override(v___y_2739_);
v___x_2748_ = lean_expr_instantiate1(v_b_2728_, v___x_2747_);
lean_dec_ref(v___x_2747_);
lean_dec_ref(v_b_2728_);
v___x_2749_ = lean_box(v_topLevel_2729_);
v___x_2750_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___boxed), 11, 3);
lean_closure_set(v___x_2750_, 0, v_fvars_2722_);
lean_closure_set(v___x_2750_, 1, v___x_2748_);
lean_closure_set(v___x_2750_, 2, v___x_2749_);
v___x_2751_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v___y_2739_, v___x_2750_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
lean_dec(v___y_2739_);
return v___x_2751_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed(lean_object* v_fvars_2868_, lean_object* v_struct_2869_, lean_object* v___y_2870_, lean_object* v_typeName_2871_, lean_object* v_idx_2872_, lean_object* v_e_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_){
_start:
{
uint8_t v___y_41913__boxed_2882_; lean_object* v_res_2883_; 
v___y_41913__boxed_2882_ = lean_unbox(v___y_2870_);
v_res_2883_ = l_Lean_Meta_ExtractLets_extractCore___lam__2(v_fvars_2868_, v_struct_2869_, v___y_41913__boxed_2882_, v_typeName_2871_, v_idx_2872_, v_e_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
return v_res_2883_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__5(void){
_start:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2887_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4));
v___x_2888_ = lean_unsigned_to_nat(75u);
v___x_2889_ = lean_unsigned_to_nat(229u);
v___x_2890_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3));
v___x_2891_ = ((lean_object*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2));
v___x_2892_ = l_mkPanicMessageWithDecl(v___x_2891_, v___x_2890_, v___x_2889_, v___x_2888_, v___x_2887_);
return v___x_2892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3(uint8_t v_descend_2893_, lean_object* v_e_2894_, lean_object* v_fvars_2895_, uint8_t v___x_2896_, uint8_t v_topLevel_2897_, uint8_t v___y_2898_, lean_object* v_____r_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
lean_object* v_k_2909_; 
switch(lean_obj_tag(v_e_2894_))
{
case 5:
{
lean_object* v___x_2912_; lean_object* v_dummy_2913_; lean_object* v_nargs_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v___x_2912_ = l_Lean_Expr_getAppFn(v_e_2894_);
v_dummy_2913_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1);
v_nargs_2914_ = l_Lean_Expr_getAppNumArgs(v_e_2894_);
lean_inc(v_nargs_2914_);
v___x_2915_ = lean_mk_array(v_nargs_2914_, v_dummy_2913_);
v___x_2916_ = lean_unsigned_to_nat(1u);
v___x_2917_ = lean_nat_sub(v_nargs_2914_, v___x_2916_);
lean_dec(v_nargs_2914_);
lean_inc_ref(v_e_2894_);
v___x_2918_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2894_, v___x_2915_, v___x_2917_);
v___x_2919_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed), 11, 3);
lean_closure_set(v___x_2919_, 0, v_fvars_2895_);
lean_closure_set(v___x_2919_, 1, v___x_2912_);
lean_closure_set(v___x_2919_, 2, v___x_2918_);
v_k_2909_ = v___x_2919_;
goto v___jp_2908_;
}
case 6:
{
lean_object* v_binderName_2920_; lean_object* v_binderType_2921_; lean_object* v_body_2922_; uint8_t v_binderInfo_2923_; lean_object* v___x_2924_; lean_object* v___f_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; 
v_binderName_2920_ = lean_ctor_get(v_e_2894_, 0);
v_binderType_2921_ = lean_ctor_get(v_e_2894_, 1);
v_body_2922_ = lean_ctor_get(v_e_2894_, 2);
v_binderInfo_2923_ = lean_ctor_get_uint8(v_e_2894_, sizeof(void*)*3 + 8);
v___x_2924_ = lean_box(v_binderInfo_2923_);
lean_inc_ref(v_e_2894_);
lean_inc_ref_n(v_body_2922_, 2);
lean_inc_n(v_binderName_2920_, 2);
lean_inc_ref_n(v_binderType_2921_, 2);
v___f_2925_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2925_, 0, v_binderType_2921_);
lean_closure_set(v___f_2925_, 1, v_binderName_2920_);
lean_closure_set(v___f_2925_, 2, v___x_2924_);
lean_closure_set(v___f_2925_, 3, v_body_2922_);
lean_closure_set(v___f_2925_, 4, v_e_2894_);
v___x_2926_ = lean_box(v_binderInfo_2923_);
v___x_2927_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2927_, 0, v_fvars_2895_);
lean_closure_set(v___x_2927_, 1, v_binderName_2920_);
lean_closure_set(v___x_2927_, 2, v_binderType_2921_);
lean_closure_set(v___x_2927_, 3, v_body_2922_);
lean_closure_set(v___x_2927_, 4, v___x_2926_);
lean_closure_set(v___x_2927_, 5, v___f_2925_);
v_k_2909_ = v___x_2927_;
goto v___jp_2908_;
}
case 7:
{
lean_object* v_binderName_2928_; lean_object* v_binderType_2929_; lean_object* v_body_2930_; uint8_t v_binderInfo_2931_; lean_object* v___x_2932_; lean_object* v___f_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; 
v_binderName_2928_ = lean_ctor_get(v_e_2894_, 0);
v_binderType_2929_ = lean_ctor_get(v_e_2894_, 1);
v_body_2930_ = lean_ctor_get(v_e_2894_, 2);
v_binderInfo_2931_ = lean_ctor_get_uint8(v_e_2894_, sizeof(void*)*3 + 8);
v___x_2932_ = lean_box(v_binderInfo_2931_);
lean_inc_ref(v_e_2894_);
lean_inc_ref_n(v_body_2930_, 2);
lean_inc_n(v_binderName_2928_, 2);
lean_inc_ref_n(v_binderType_2929_, 2);
v___f_2933_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2933_, 0, v_binderType_2929_);
lean_closure_set(v___f_2933_, 1, v_binderName_2928_);
lean_closure_set(v___f_2933_, 2, v___x_2932_);
lean_closure_set(v___f_2933_, 3, v_body_2930_);
lean_closure_set(v___f_2933_, 4, v_e_2894_);
v___x_2934_ = lean_box(v_binderInfo_2931_);
v___x_2935_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2935_, 0, v_fvars_2895_);
lean_closure_set(v___x_2935_, 1, v_binderName_2928_);
lean_closure_set(v___x_2935_, 2, v_binderType_2929_);
lean_closure_set(v___x_2935_, 3, v_body_2930_);
lean_closure_set(v___x_2935_, 4, v___x_2934_);
lean_closure_set(v___x_2935_, 5, v___f_2933_);
v_k_2909_ = v___x_2935_;
goto v___jp_2908_;
}
case 8:
{
uint8_t v_nondep_2936_; 
v_nondep_2936_ = lean_ctor_get_uint8(v_e_2894_, sizeof(void*)*4 + 8);
if (v_nondep_2936_ == 0)
{
lean_object* v_declName_2937_; lean_object* v_type_2938_; lean_object* v_value_2939_; lean_object* v_body_2940_; lean_object* v___x_2941_; 
v_declName_2937_ = lean_ctor_get(v_e_2894_, 0);
lean_inc(v_declName_2937_);
v_type_2938_ = lean_ctor_get(v_e_2894_, 1);
lean_inc_ref(v_type_2938_);
v_value_2939_ = lean_ctor_get(v_e_2894_, 2);
lean_inc_ref(v_value_2939_);
v_body_2940_ = lean_ctor_get(v_e_2894_, 3);
lean_inc_ref(v_body_2940_);
v___x_2941_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2895_, v_e_2894_, v___x_2896_, v_declName_2937_, v_type_2938_, v_value_2939_, v_body_2940_, v_topLevel_2897_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_);
return v___x_2941_;
}
else
{
lean_object* v_declName_2942_; lean_object* v_type_2943_; lean_object* v_value_2944_; lean_object* v_body_2945_; lean_object* v___x_2946_; 
v_declName_2942_ = lean_ctor_get(v_e_2894_, 0);
lean_inc(v_declName_2942_);
v_type_2943_ = lean_ctor_get(v_e_2894_, 1);
lean_inc_ref(v_type_2943_);
v_value_2944_ = lean_ctor_get(v_e_2894_, 2);
lean_inc_ref(v_value_2944_);
v_body_2945_ = lean_ctor_get(v_e_2894_, 3);
lean_inc_ref(v_body_2945_);
v___x_2946_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2895_, v_e_2894_, v___y_2898_, v_declName_2942_, v_type_2943_, v_value_2944_, v_body_2945_, v_topLevel_2897_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_);
return v___x_2946_;
}
}
case 10:
{
lean_object* v_data_2947_; lean_object* v_expr_2948_; lean_object* v___x_2949_; 
v_data_2947_ = lean_ctor_get(v_e_2894_, 0);
v_expr_2948_ = lean_ctor_get(v_e_2894_, 1);
lean_inc_ref(v_expr_2948_);
v___x_2949_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2895_, v_expr_2948_, v_topLevel_2897_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_);
if (lean_obj_tag(v___x_2949_) == 0)
{
lean_object* v_a_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2964_; 
v_a_2950_ = lean_ctor_get(v___x_2949_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v___x_2949_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2952_ = v___x_2949_;
v_isShared_2953_ = v_isSharedCheck_2964_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_a_2950_);
lean_dec(v___x_2949_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2964_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
size_t v___x_2954_; size_t v___x_2955_; uint8_t v___x_2956_; 
v___x_2954_ = lean_ptr_addr(v_expr_2948_);
v___x_2955_ = lean_ptr_addr(v_a_2950_);
v___x_2956_ = lean_usize_dec_eq(v___x_2954_, v___x_2955_);
if (v___x_2956_ == 0)
{
lean_object* v___x_2957_; lean_object* v___x_2959_; 
lean_inc(v_data_2947_);
lean_dec_ref_known(v_e_2894_, 2);
v___x_2957_ = l_Lean_Expr_mdata___override(v_data_2947_, v_a_2950_);
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 0, v___x_2957_);
v___x_2959_ = v___x_2952_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v___x_2957_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
return v___x_2959_;
}
}
else
{
lean_object* v___x_2962_; 
lean_dec(v_a_2950_);
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 0, v_e_2894_);
v___x_2962_ = v___x_2952_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v_e_2894_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
return v___x_2962_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_2894_, 2);
return v___x_2949_;
}
}
case 11:
{
lean_object* v_typeName_2965_; lean_object* v_idx_2966_; lean_object* v_struct_2967_; lean_object* v___x_2968_; lean_object* v___f_2969_; 
v_typeName_2965_ = lean_ctor_get(v_e_2894_, 0);
v_idx_2966_ = lean_ctor_get(v_e_2894_, 1);
v_struct_2967_ = lean_ctor_get(v_e_2894_, 2);
v___x_2968_ = lean_box(v___y_2898_);
lean_inc_ref(v_e_2894_);
lean_inc(v_idx_2966_);
lean_inc(v_typeName_2965_);
lean_inc_ref(v_struct_2967_);
v___f_2969_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed), 14, 6);
lean_closure_set(v___f_2969_, 0, v_fvars_2895_);
lean_closure_set(v___f_2969_, 1, v_struct_2967_);
lean_closure_set(v___f_2969_, 2, v___x_2968_);
lean_closure_set(v___f_2969_, 3, v_typeName_2965_);
lean_closure_set(v___f_2969_, 4, v_idx_2966_);
lean_closure_set(v___f_2969_, 5, v_e_2894_);
v_k_2909_ = v___f_2969_;
goto v___jp_2908_;
}
default: 
{
lean_object* v___x_2970_; lean_object* v___x_2971_; 
lean_dec(v_fvars_2895_);
lean_dec_ref(v_e_2894_);
v___x_2970_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__5, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__5_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__5);
v___x_2971_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v___x_2970_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_);
return v___x_2971_;
}
}
v___jp_2908_:
{
if (v_descend_2893_ == 0)
{
lean_object* v___x_2910_; 
lean_dec_ref(v_k_2909_);
v___x_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2910_, 0, v_e_2894_);
return v___x_2910_;
}
else
{
lean_object* v___x_2911_; 
lean_dec_ref(v_e_2894_);
lean_inc(v___y_2906_);
lean_inc_ref(v___y_2905_);
lean_inc(v___y_2904_);
lean_inc_ref(v___y_2903_);
lean_inc(v___y_2902_);
lean_inc(v___y_2901_);
lean_inc_ref(v___y_2900_);
v___x_2911_ = lean_apply_8(v_k_2909_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, lean_box(0));
return v___x_2911_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed(lean_object* v_descend_2972_, lean_object* v_e_2973_, lean_object* v_fvars_2974_, lean_object* v___x_2975_, lean_object* v_topLevel_2976_, lean_object* v___y_2977_, lean_object* v_____r_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_){
_start:
{
uint8_t v_descend_boxed_2987_; uint8_t v___x_42073__boxed_2988_; uint8_t v_topLevel_boxed_2989_; uint8_t v___y_42074__boxed_2990_; lean_object* v_res_2991_; 
v_descend_boxed_2987_ = lean_unbox(v_descend_2972_);
v___x_42073__boxed_2988_ = lean_unbox(v___x_2975_);
v_topLevel_boxed_2989_ = lean_unbox(v_topLevel_2976_);
v___y_42074__boxed_2990_ = lean_unbox(v___y_2977_);
v_res_2991_ = l_Lean_Meta_ExtractLets_extractCore___lam__3(v_descend_boxed_2987_, v_e_2973_, v_fvars_2974_, v___x_42073__boxed_2988_, v_topLevel_boxed_2989_, v___y_42074__boxed_2990_, v_____r_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
lean_dec(v___y_2985_);
lean_dec_ref(v___y_2984_);
lean_dec(v___y_2983_);
lean_dec_ref(v___y_2982_);
lean_dec(v___y_2981_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore(lean_object* v_fvars_2992_, lean_object* v_e_2993_, uint8_t v_topLevel_2994_, lean_object* v_a_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_){
_start:
{
lean_object* v___y_3004_; lean_object* v_a_3005_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3015_; lean_object* v___y_3016_; uint8_t v___x_3019_; 
v___x_3019_ = l_Lean_Expr_isAtomic(v_e_2993_);
if (v___x_3019_ == 0)
{
uint8_t v_proofs_3020_; uint8_t v_types_3021_; uint8_t v_descend_3022_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; uint8_t v___y_3027_; uint8_t v___y_3044_; 
v_proofs_3020_ = lean_ctor_get_uint8(v_a_2995_, 0);
v_types_3021_ = lean_ctor_get_uint8(v_a_2995_, 1);
v_descend_3022_ = lean_ctor_get_uint8(v_a_2995_, 3);
if (v_descend_3022_ == 0)
{
goto v___jp_3068_;
}
else
{
if (v___x_3019_ == 0)
{
v___y_3044_ = v___x_3019_;
goto v___jp_3043_;
}
else
{
goto v___jp_3068_;
}
}
v___jp_3023_:
{
if (v___y_3027_ == 0)
{
lean_dec_ref(v___y_3025_);
if (v_proofs_3020_ == 0)
{
lean_object* v___x_3028_; 
lean_inc_ref(v_e_2993_);
v___x_3028_ = l_Lean_Meta_isProof(v_e_2993_, v_a_2998_, v_a_2999_, v_a_3000_, v_a_3001_);
if (lean_obj_tag(v___x_3028_) == 0)
{
lean_object* v_a_3029_; uint8_t v___x_3030_; 
v_a_3029_ = lean_ctor_get(v___x_3028_, 0);
lean_inc(v_a_3029_);
lean_dec_ref_known(v___x_3028_, 1);
v___x_3030_ = lean_unbox(v_a_3029_);
lean_dec(v_a_3029_);
if (v___x_3030_ == 0)
{
lean_object* v___x_3031_; lean_object* v___x_3032_; 
lean_dec_ref(v_e_2993_);
v___x_3031_ = lean_box(0);
lean_inc(v_a_3001_);
lean_inc_ref(v_a_3000_);
lean_inc(v_a_2999_);
lean_inc_ref(v_a_2998_);
lean_inc(v_a_2997_);
lean_inc(v_a_2996_);
lean_inc_ref(v_a_2995_);
v___x_3032_ = lean_apply_9(v___y_3026_, v___x_3031_, v_a_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_, v_a_3000_, v_a_3001_, lean_box(0));
v___y_3011_ = v___y_3024_;
v___y_3012_ = v___x_3032_;
goto v___jp_3010_;
}
else
{
lean_dec_ref(v___y_3026_);
v___y_3004_ = v___y_3024_;
v_a_3005_ = v_e_2993_;
goto v___jp_3003_;
}
}
else
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3040_; 
lean_dec_ref(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec_ref(v_e_2993_);
v_a_3033_ = lean_ctor_get(v___x_3028_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v___x_3028_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3035_ = v___x_3028_;
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_3028_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v___x_3038_; 
if (v_isShared_3036_ == 0)
{
v___x_3038_ = v___x_3035_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v_a_3033_);
v___x_3038_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
return v___x_3038_;
}
}
}
}
else
{
lean_object* v___x_3041_; lean_object* v___x_3042_; 
lean_dec_ref(v_e_2993_);
v___x_3041_ = lean_box(0);
lean_inc(v_a_3001_);
lean_inc_ref(v_a_3000_);
lean_inc(v_a_2999_);
lean_inc_ref(v_a_2998_);
lean_inc(v_a_2997_);
lean_inc(v_a_2996_);
lean_inc_ref(v_a_2995_);
v___x_3042_ = lean_apply_9(v___y_3026_, v___x_3041_, v_a_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_, v_a_3000_, v_a_3001_, lean_box(0));
v___y_3011_ = v___y_3024_;
v___y_3012_ = v___x_3042_;
goto v___jp_3010_;
}
}
else
{
lean_dec_ref(v___y_3026_);
lean_dec_ref(v_e_2993_);
v___y_3015_ = v___y_3024_;
v___y_3016_ = v___y_3025_;
goto v___jp_3014_;
}
}
v___jp_3043_:
{
if (v___y_3044_ == 0)
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; 
v___x_3045_ = lean_box(v_topLevel_2994_);
lean_inc_ref(v_e_2993_);
v___x_3046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
lean_ctor_set(v___x_3046_, 1, v_e_2993_);
v___x_3047_ = lean_st_ref_get(v_a_2996_);
v___x_3048_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v___x_3047_, v___x_3046_);
lean_dec(v___x_3047_);
if (lean_obj_tag(v___x_3048_) == 0)
{
uint8_t v___x_3049_; 
v___x_3049_ = l_Lean_Meta_ExtractLets_containsLet(v_e_2993_);
if (v___x_3049_ == 0)
{
lean_dec(v_fvars_2992_);
v___y_3004_ = v___x_3046_;
v_a_3005_ = v_e_2993_;
goto v___jp_3003_;
}
else
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___f_3054_; lean_object* v___x_3055_; lean_object* v___f_3056_; 
v___x_3050_ = lean_box(v_descend_3022_);
v___x_3051_ = lean_box(v___x_3049_);
v___x_3052_ = lean_box(v_topLevel_2994_);
v___x_3053_ = lean_box(v___y_3044_);
lean_inc_ref_n(v_e_2993_, 2);
v___f_3054_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed), 15, 6);
lean_closure_set(v___f_3054_, 0, v___x_3050_);
lean_closure_set(v___f_3054_, 1, v_e_2993_);
lean_closure_set(v___f_3054_, 2, v_fvars_2992_);
lean_closure_set(v___f_3054_, 3, v___x_3051_);
lean_closure_set(v___f_3054_, 4, v___x_3052_);
lean_closure_set(v___f_3054_, 5, v___x_3053_);
v___x_3055_ = lean_box(v_types_3021_);
lean_inc_ref(v___f_3054_);
v___f_3056_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed), 12, 3);
lean_closure_set(v___f_3056_, 0, v___x_3055_);
lean_closure_set(v___f_3056_, 1, v_e_2993_);
lean_closure_set(v___f_3056_, 2, v___f_3054_);
if (v_topLevel_2994_ == 0)
{
v___y_3024_ = v___x_3046_;
v___y_3025_ = v___f_3054_;
v___y_3026_ = v___f_3056_;
v___y_3027_ = v___x_3019_;
goto v___jp_3023_;
}
else
{
uint8_t v___x_3057_; 
v___x_3057_ = l_Lean_Expr_isLet(v_e_2993_);
if (v___x_3057_ == 0)
{
uint8_t v___x_3058_; 
v___x_3058_ = l_Lean_Expr_isMData(v_e_2993_);
v___y_3024_ = v___x_3046_;
v___y_3025_ = v___f_3054_;
v___y_3026_ = v___f_3056_;
v___y_3027_ = v___x_3058_;
goto v___jp_3023_;
}
else
{
lean_dec_ref(v___f_3056_);
lean_dec_ref(v_e_2993_);
v___y_3015_ = v___x_3046_;
v___y_3016_ = v___f_3054_;
goto v___jp_3014_;
}
}
}
}
else
{
lean_object* v_val_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3066_; 
lean_dec_ref_known(v___x_3046_, 2);
lean_dec_ref(v_e_2993_);
lean_dec(v_fvars_2992_);
v_val_3059_ = lean_ctor_get(v___x_3048_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3048_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3061_ = v___x_3048_;
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_val_3059_);
lean_dec(v___x_3048_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3064_; 
if (v_isShared_3062_ == 0)
{
lean_ctor_set_tag(v___x_3061_, 0);
v___x_3064_ = v___x_3061_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_val_3059_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
}
else
{
lean_object* v___x_3067_; 
lean_dec(v_fvars_2992_);
v___x_3067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3067_, 0, v_e_2993_);
return v___x_3067_;
}
}
v___jp_3068_:
{
if (v_topLevel_2994_ == 0)
{
lean_object* v___x_3069_; 
lean_dec(v_fvars_2992_);
v___x_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3069_, 0, v_e_2993_);
return v___x_3069_;
}
else
{
v___y_3044_ = v___x_3019_;
goto v___jp_3043_;
}
}
}
else
{
lean_object* v___x_3070_; 
lean_dec(v_fvars_2992_);
v___x_3070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3070_, 0, v_e_2993_);
return v___x_3070_;
}
v___jp_3003_:
{
lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; 
v___x_3006_ = lean_st_ref_take(v_a_2996_);
lean_inc_ref(v_a_3005_);
v___x_3007_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v___x_3006_, v___y_3004_, v_a_3005_);
v___x_3008_ = lean_st_ref_put(v_a_2996_, v___x_3007_);
v___x_3009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3009_, 0, v_a_3005_);
return v___x_3009_;
}
v___jp_3010_:
{
if (lean_obj_tag(v___y_3012_) == 0)
{
lean_object* v_a_3013_; 
v_a_3013_ = lean_ctor_get(v___y_3012_, 0);
lean_inc(v_a_3013_);
lean_dec_ref_known(v___y_3012_, 1);
v___y_3004_ = v___y_3011_;
v_a_3005_ = v_a_3013_;
goto v___jp_3003_;
}
else
{
lean_dec_ref(v___y_3011_);
return v___y_3012_;
}
}
v___jp_3014_:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; 
v___x_3017_ = lean_box(0);
lean_inc(v_a_3001_);
lean_inc_ref(v_a_3000_);
lean_inc(v_a_2999_);
lean_inc_ref(v_a_2998_);
lean_inc(v_a_2997_);
lean_inc(v_a_2996_);
lean_inc_ref(v_a_2995_);
v___x_3018_ = lean_apply_9(v___y_3016_, v___x_3017_, v_a_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_, v_a_3000_, v_a_3001_, lean_box(0));
v___y_3011_ = v___y_3015_;
v___y_3012_ = v___x_3018_;
goto v___jp_3010_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2(lean_object* v_fvars_3071_, lean_object* v_struct_3072_, uint8_t v___y_3073_, lean_object* v_typeName_3074_, lean_object* v_idx_3075_, lean_object* v_e_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_){
_start:
{
lean_object* v___x_3085_; 
lean_inc_ref(v_struct_3072_);
v___x_3085_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_3071_, v_struct_3072_, v___y_3073_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3100_; 
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3088_ = v___x_3085_;
v_isShared_3089_ = v_isSharedCheck_3100_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3085_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3100_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
size_t v___x_3090_; size_t v___x_3091_; uint8_t v___x_3092_; 
v___x_3090_ = lean_ptr_addr(v_struct_3072_);
lean_dec_ref(v_struct_3072_);
v___x_3091_ = lean_ptr_addr(v_a_3086_);
v___x_3092_ = lean_usize_dec_eq(v___x_3090_, v___x_3091_);
if (v___x_3092_ == 0)
{
lean_object* v___x_3093_; lean_object* v___x_3095_; 
lean_dec_ref(v_e_3076_);
v___x_3093_ = l_Lean_Expr_proj___override(v_typeName_3074_, v_idx_3075_, v_a_3086_);
if (v_isShared_3089_ == 0)
{
lean_ctor_set(v___x_3088_, 0, v___x_3093_);
v___x_3095_ = v___x_3088_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v___x_3093_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
else
{
lean_object* v___x_3098_; 
lean_dec(v_a_3086_);
lean_dec(v_idx_3075_);
lean_dec(v_typeName_3074_);
if (v_isShared_3089_ == 0)
{
lean_ctor_set(v___x_3088_, 0, v_e_3076_);
v___x_3098_ = v___x_3088_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_e_3076_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
return v___x_3098_;
}
}
}
}
else
{
lean_dec_ref(v_e_3076_);
lean_dec(v_idx_3075_);
lean_dec(v_typeName_3074_);
lean_dec_ref(v_struct_3072_);
return v___x_3085_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg___boxed(lean_object* v_upperBound_3101_, lean_object* v_fst_3102_, lean_object* v_fvars_3103_, lean_object* v_a_3104_, lean_object* v_b_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_){
_start:
{
lean_object* v_res_3114_; 
v_res_3114_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3101_, v_fst_3102_, v_fvars_3103_, v_a_3104_, v_b_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_);
lean_dec(v___y_3112_);
lean_dec_ref(v___y_3111_);
lean_dec(v___y_3110_);
lean_dec_ref(v___y_3109_);
lean_dec(v___y_3108_);
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
lean_dec_ref(v_fst_3102_);
lean_dec(v_upperBound_3101_);
return v_res_3114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___boxed(lean_object* v_fvars_3115_, lean_object* v_e_3116_, lean_object* v_isLet_3117_, lean_object* v_n_3118_, lean_object* v_t_3119_, lean_object* v_v_3120_, lean_object* v_b_3121_, lean_object* v_topLevel_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_, lean_object* v_a_3130_){
_start:
{
uint8_t v_isLet_boxed_3131_; uint8_t v_topLevel_boxed_3132_; lean_object* v_res_3133_; 
v_isLet_boxed_3131_ = lean_unbox(v_isLet_3117_);
v_topLevel_boxed_3132_ = lean_unbox(v_topLevel_3122_);
v_res_3133_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_3115_, v_e_3116_, v_isLet_boxed_3131_, v_n_3118_, v_t_3119_, v_v_3120_, v_b_3121_, v_topLevel_boxed_3132_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_, v_a_3129_);
lean_dec(v_a_3129_);
lean_dec_ref(v_a_3128_);
lean_dec(v_a_3127_);
lean_dec_ref(v_a_3126_);
lean_dec(v_a_3125_);
lean_dec(v_a_3124_);
lean_dec_ref(v_a_3123_);
return v_res_3133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(lean_object* v_00_u03b1_3134_, lean_object* v_name_3135_, lean_object* v_type_3136_, lean_object* v_val_3137_, lean_object* v_k_3138_, uint8_t v_nondep_3139_, uint8_t v_kind_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_){
_start:
{
lean_object* v___x_3149_; 
v___x_3149_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_3135_, v_type_3136_, v_val_3137_, v_k_3138_, v_nondep_3139_, v_kind_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___boxed(lean_object* v_00_u03b1_3150_, lean_object* v_name_3151_, lean_object* v_type_3152_, lean_object* v_val_3153_, lean_object* v_k_3154_, lean_object* v_nondep_3155_, lean_object* v_kind_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_){
_start:
{
uint8_t v_nondep_boxed_3165_; uint8_t v_kind_boxed_3166_; lean_object* v_res_3167_; 
v_nondep_boxed_3165_ = lean_unbox(v_nondep_3155_);
v_kind_boxed_3166_ = lean_unbox(v_kind_3156_);
v_res_3167_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(v_00_u03b1_3150_, v_name_3151_, v_type_3152_, v_val_3153_, v_k_3154_, v_nondep_boxed_3165_, v_kind_boxed_3166_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec(v___y_3159_);
lean_dec(v___y_3158_);
lean_dec_ref(v___y_3157_);
return v_res_3167_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2(lean_object* v_00_u03b2_3168_, lean_object* v_m_3169_, lean_object* v_a_3170_, lean_object* v_b_3171_){
_start:
{
lean_object* v___x_3172_; 
v___x_3172_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v_m_3169_, v_a_3170_, v_b_3171_);
return v___x_3172_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(lean_object* v_00_u03b2_3173_, lean_object* v_m_3174_, lean_object* v_a_3175_){
_start:
{
lean_object* v___x_3176_; 
v___x_3176_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_3174_, v_a_3175_);
return v___x_3176_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___boxed(lean_object* v_00_u03b2_3177_, lean_object* v_m_3178_, lean_object* v_a_3179_){
_start:
{
lean_object* v_res_3180_; 
v_res_3180_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(v_00_u03b2_3177_, v_m_3178_, v_a_3179_);
lean_dec_ref(v_a_3179_);
lean_dec_ref(v_m_3178_);
return v_res_3180_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(lean_object* v_upperBound_3181_, lean_object* v_fst_3182_, lean_object* v_fvars_3183_, lean_object* v_inst_3184_, lean_object* v_R_3185_, lean_object* v_a_3186_, lean_object* v_b_3187_, lean_object* v_c_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_){
_start:
{
lean_object* v___x_3197_; 
v___x_3197_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3181_, v_fst_3182_, v_fvars_3183_, v_a_3186_, v_b_3187_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___boxed(lean_object* v_upperBound_3198_, lean_object* v_fst_3199_, lean_object* v_fvars_3200_, lean_object* v_inst_3201_, lean_object* v_R_3202_, lean_object* v_a_3203_, lean_object* v_b_3204_, lean_object* v_c_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_){
_start:
{
lean_object* v_res_3214_; 
v_res_3214_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(v_upperBound_3198_, v_fst_3199_, v_fvars_3200_, v_inst_3201_, v_R_3202_, v_a_3203_, v_b_3204_, v_c_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
lean_dec(v___y_3212_);
lean_dec_ref(v___y_3211_);
lean_dec(v___y_3210_);
lean_dec_ref(v___y_3209_);
lean_dec(v___y_3208_);
lean_dec(v___y_3207_);
lean_dec_ref(v___y_3206_);
lean_dec_ref(v_fst_3199_);
lean_dec(v_upperBound_3198_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(lean_object* v_00_u03b2_3215_, lean_object* v_m_3216_, lean_object* v_a_3217_){
_start:
{
lean_object* v___x_3218_; 
v___x_3218_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_3216_, v_a_3217_);
return v___x_3218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___boxed(lean_object* v_00_u03b2_3219_, lean_object* v_m_3220_, lean_object* v_a_3221_){
_start:
{
lean_object* v_res_3222_; 
v_res_3222_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(v_00_u03b2_3219_, v_m_3220_, v_a_3221_);
lean_dec_ref(v_a_3221_);
lean_dec_ref(v_m_3220_);
return v_res_3222_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(lean_object* v_00_u03b2_3223_, lean_object* v_a_3224_, lean_object* v_x_3225_){
_start:
{
uint8_t v___x_3226_; 
v___x_3226_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_3224_, v_x_3225_);
return v___x_3226_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3227_, lean_object* v_a_3228_, lean_object* v_x_3229_){
_start:
{
uint8_t v_res_3230_; lean_object* v_r_3231_; 
v_res_3230_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(v_00_u03b2_3227_, v_a_3228_, v_x_3229_);
lean_dec(v_x_3229_);
lean_dec_ref(v_a_3228_);
v_r_3231_ = lean_box(v_res_3230_);
return v_r_3231_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3(lean_object* v_00_u03b2_3232_, lean_object* v_data_3233_){
_start:
{
lean_object* v___x_3234_; 
v___x_3234_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_data_3233_);
return v___x_3234_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4(lean_object* v_00_u03b2_3235_, lean_object* v_a_3236_, lean_object* v_b_3237_, lean_object* v_x_3238_){
_start:
{
lean_object* v___x_3239_; 
v___x_3239_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_3236_, v_b_3237_, v_x_3238_);
return v___x_3239_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(lean_object* v_00_u03b2_3240_, lean_object* v_a_3241_, lean_object* v_x_3242_){
_start:
{
lean_object* v___x_3243_; 
v___x_3243_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_3241_, v_x_3242_);
return v___x_3243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3244_, lean_object* v_a_3245_, lean_object* v_x_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(v_00_u03b2_3244_, v_a_3245_, v_x_3246_);
lean_dec(v_x_3246_);
lean_dec_ref(v_a_3245_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(lean_object* v_00_u03b2_3248_, lean_object* v_a_3249_, lean_object* v_x_3250_){
_start:
{
lean_object* v___x_3251_; 
v___x_3251_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_3249_, v_x_3250_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___boxed(lean_object* v_00_u03b2_3252_, lean_object* v_a_3253_, lean_object* v_x_3254_){
_start:
{
lean_object* v_res_3255_; 
v_res_3255_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(v_00_u03b2_3252_, v_a_3253_, v_x_3254_);
lean_dec(v_x_3254_);
lean_dec_ref(v_a_3253_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9(lean_object* v_00_u03b2_3256_, lean_object* v_i_3257_, lean_object* v_source_3258_, lean_object* v_target_3259_){
_start:
{
lean_object* v___x_3260_; 
v___x_3260_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v_i_3257_, v_source_3258_, v_target_3259_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14(lean_object* v_00_u03b2_3261_, lean_object* v_x_3262_, lean_object* v_x_3263_){
_start:
{
lean_object* v___x_3264_; 
v___x_3264_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_x_3262_, v_x_3263_);
return v___x_3264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel(lean_object* v_e_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_, lean_object* v_a_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_){
_start:
{
lean_object* v___x_3274_; lean_object* v_a_3275_; lean_object* v___x_3276_; uint8_t v___x_3277_; lean_object* v___x_3278_; 
v___x_3274_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_3265_, v_a_3270_);
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3275_);
lean_dec_ref(v___x_3274_);
v___x_3276_ = lean_box(0);
v___x_3277_ = 1;
v___x_3278_ = l_Lean_Meta_ExtractLets_extractCore(v___x_3276_, v_a_3275_, v___x_3277_, v_a_3266_, v_a_3267_, v_a_3268_, v_a_3269_, v_a_3270_, v_a_3271_, v_a_3272_);
return v___x_3278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel___boxed(lean_object* v_e_3279_, lean_object* v_a_3280_, lean_object* v_a_3281_, lean_object* v_a_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_, lean_object* v_a_3287_){
_start:
{
lean_object* v_res_3288_; 
v_res_3288_ = l_Lean_Meta_ExtractLets_extractTopLevel(v_e_3279_, v_a_3280_, v_a_3281_, v_a_3282_, v_a_3283_, v_a_3284_, v_a_3285_, v_a_3286_);
lean_dec(v_a_3286_);
lean_dec_ref(v_a_3285_);
lean_dec(v_a_3284_);
lean_dec_ref(v_a_3283_);
lean_dec(v_a_3282_);
lean_dec(v_a_3281_);
lean_dec_ref(v_a_3280_);
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(size_t v_sz_3289_, size_t v_i_3290_, lean_object* v_bs_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_){
_start:
{
uint8_t v___x_3300_; 
v___x_3300_ = lean_usize_dec_lt(v_i_3290_, v_sz_3289_);
if (v___x_3300_ == 0)
{
lean_object* v___x_3301_; lean_object* v___x_3302_; 
v___x_3301_ = l_unsafeCast___redArg(v_bs_3291_);
lean_dec_ref(v_bs_3291_);
v___x_3302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3302_, 0, v___x_3301_);
return v___x_3302_;
}
else
{
lean_object* v_v_3303_; lean_object* v___x_3304_; lean_object* v_bs_x27_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; 
v_v_3303_ = lean_array_uget(v_bs_3291_, v_i_3290_);
v___x_3304_ = lean_unsigned_to_nat(0u);
v_bs_x27_3305_ = lean_array_uset(v_bs_3291_, v_i_3290_, v___x_3304_);
v___x_3306_ = l_unsafeCast___redArg(v_v_3303_);
lean_dec(v_v_3303_);
v___x_3307_ = l_Lean_Meta_ExtractLets_extractTopLevel(v___x_3306_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v_a_3308_; size_t v___x_3309_; size_t v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; 
v_a_3308_ = lean_ctor_get(v___x_3307_, 0);
lean_inc(v_a_3308_);
lean_dec_ref_known(v___x_3307_, 1);
v___x_3309_ = ((size_t)1ULL);
v___x_3310_ = lean_usize_add(v_i_3290_, v___x_3309_);
v___x_3311_ = l_unsafeCast___redArg(v_a_3308_);
lean_dec(v_a_3308_);
v___x_3312_ = lean_array_uset(v_bs_x27_3305_, v_i_3290_, v___x_3311_);
v_i_3290_ = v___x_3310_;
v_bs_3291_ = v___x_3312_;
goto _start;
}
else
{
lean_object* v_a_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3321_; 
lean_dec_ref(v_bs_x27_3305_);
v_a_3314_ = lean_ctor_get(v___x_3307_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3307_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3316_ = v___x_3307_;
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_a_3314_);
lean_dec(v___x_3307_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v___x_3319_; 
if (v_isShared_3317_ == 0)
{
v___x_3319_ = v___x_3316_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v_a_3314_);
v___x_3319_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
return v___x_3319_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0___boxed(lean_object* v_sz_3322_, lean_object* v_i_3323_, lean_object* v_bs_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
size_t v_sz_boxed_3333_; size_t v_i_boxed_3334_; lean_object* v_res_3335_; 
v_sz_boxed_3333_ = lean_unbox_usize(v_sz_3322_);
lean_dec(v_sz_3322_);
v_i_boxed_3334_ = lean_unbox_usize(v_i_3323_);
lean_dec(v_i_3323_);
v_res_3335_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(v_sz_boxed_3333_, v_i_boxed_3334_, v_bs_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
lean_dec(v___y_3331_);
lean_dec_ref(v___y_3330_);
lean_dec(v___y_3329_);
lean_dec_ref(v___y_3328_);
lean_dec(v___y_3327_);
lean_dec(v___y_3326_);
lean_dec_ref(v___y_3325_);
return v_res_3335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract(lean_object* v_es_3336_, lean_object* v_a_3337_, lean_object* v_a_3338_, lean_object* v_a_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_){
_start:
{
lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3350_; lean_object* v___y_3351_; lean_object* v___y_3352_; uint8_t v_merge_3360_; 
v_merge_3360_ = lean_ctor_get_uint8(v_a_3337_, 6);
if (v_merge_3360_ == 0)
{
v___y_3346_ = v_a_3337_;
v___y_3347_ = v_a_3338_;
v___y_3348_ = v_a_3339_;
v___y_3349_ = v_a_3340_;
v___y_3350_ = v_a_3341_;
v___y_3351_ = v_a_3342_;
v___y_3352_ = v_a_3343_;
goto v___jp_3345_;
}
else
{
uint8_t v_useContext_3361_; 
v_useContext_3361_ = lean_ctor_get_uint8(v_a_3337_, 7);
if (v_useContext_3361_ == 0)
{
v___y_3346_ = v_a_3337_;
v___y_3347_ = v_a_3338_;
v___y_3348_ = v_a_3339_;
v___y_3349_ = v_a_3340_;
v___y_3350_ = v_a_3341_;
v___y_3351_ = v_a_3342_;
v___y_3352_ = v_a_3343_;
goto v___jp_3345_;
}
else
{
lean_object* v___x_3362_; 
v___x_3362_ = l_Lean_Meta_ExtractLets_initializeValueMap(v_a_3337_, v_a_3338_, v_a_3339_, v_a_3340_, v_a_3341_, v_a_3342_, v_a_3343_);
if (lean_obj_tag(v___x_3362_) == 0)
{
lean_dec_ref_known(v___x_3362_, 1);
v___y_3346_ = v_a_3337_;
v___y_3347_ = v_a_3338_;
v___y_3348_ = v_a_3339_;
v___y_3349_ = v_a_3340_;
v___y_3350_ = v_a_3341_;
v___y_3351_ = v_a_3342_;
v___y_3352_ = v_a_3343_;
goto v___jp_3345_;
}
else
{
lean_object* v_a_3363_; lean_object* v___x_3365_; uint8_t v_isShared_3366_; uint8_t v_isSharedCheck_3370_; 
v_a_3363_ = lean_ctor_get(v___x_3362_, 0);
v_isSharedCheck_3370_ = !lean_is_exclusive(v___x_3362_);
if (v_isSharedCheck_3370_ == 0)
{
v___x_3365_ = v___x_3362_;
v_isShared_3366_ = v_isSharedCheck_3370_;
goto v_resetjp_3364_;
}
else
{
lean_inc(v_a_3363_);
lean_dec(v___x_3362_);
v___x_3365_ = lean_box(0);
v_isShared_3366_ = v_isSharedCheck_3370_;
goto v_resetjp_3364_;
}
v_resetjp_3364_:
{
lean_object* v___x_3368_; 
if (v_isShared_3366_ == 0)
{
v___x_3368_ = v___x_3365_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v_a_3363_);
v___x_3368_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
return v___x_3368_;
}
}
}
}
}
v___jp_3345_:
{
size_t v_sz_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_1374__overap_3358_; lean_object* v___x_3359_; 
v_sz_3353_ = lean_array_size(v_es_3336_);
v___x_3354_ = l_unsafeCast___redArg(v_es_3336_);
v___x_3355_ = lean_box_usize(v_sz_3353_);
v___x_3356_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed__const__1));
v___x_3357_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0___boxed), 11, 3);
lean_closure_set(v___x_3357_, 0, v___x_3355_);
lean_closure_set(v___x_3357_, 1, v___x_3356_);
lean_closure_set(v___x_3357_, 2, v___x_3354_);
v___x_1374__overap_3358_ = l_unsafeCast___redArg(v___x_3357_);
lean_dec_ref(v___x_3357_);
lean_inc(v___y_3352_);
lean_inc_ref(v___y_3351_);
lean_inc(v___y_3350_);
lean_inc_ref(v___y_3349_);
lean_inc(v___y_3348_);
lean_inc(v___y_3347_);
lean_inc_ref(v___y_3346_);
v___x_3359_ = lean_apply_8(v___x_1374__overap_3358_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_, lean_box(0));
return v___x_3359_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract___boxed(lean_object* v_es_3371_, lean_object* v_a_3372_, lean_object* v_a_3373_, lean_object* v_a_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_, lean_object* v_a_3377_, lean_object* v_a_3378_, lean_object* v_a_3379_){
_start:
{
lean_object* v_res_3380_; 
v_res_3380_ = l_Lean_Meta_ExtractLets_extract(v_es_3371_, v_a_3372_, v_a_3373_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_);
lean_dec(v_a_3378_);
lean_dec_ref(v_a_3377_);
lean_dec(v_a_3376_);
lean_dec_ref(v_a_3375_);
lean_dec(v_a_3374_);
lean_dec(v_a_3373_);
lean_dec_ref(v_a_3372_);
lean_dec_ref(v_es_3371_);
return v_res_3380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(lean_object* v_decls_3381_, lean_object* v_x_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_){
_start:
{
lean_object* v___x_3388_; 
v___x_3388_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_box(0), v_decls_3381_, v_x_3382_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_);
if (lean_obj_tag(v___x_3388_) == 0)
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
v_a_3389_ = lean_ctor_get(v___x_3388_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3388_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3388_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3394_; 
if (v_isShared_3392_ == 0)
{
v___x_3394_ = v___x_3391_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_a_3389_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
else
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3404_; 
v_a_3397_ = lean_ctor_get(v___x_3388_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v___x_3388_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3399_ = v___x_3388_;
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3388_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
return v___x_3402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg___boxed(lean_object* v_decls_3405_, lean_object* v_x_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3405_, v_x_3406_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_);
lean_dec(v___y_3410_);
lean_dec_ref(v___y_3409_);
lean_dec(v___y_3408_);
lean_dec_ref(v___y_3407_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(lean_object* v_00_u03b1_3413_, lean_object* v_decls_3414_, lean_object* v_x_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_){
_start:
{
lean_object* v___x_3421_; 
v___x_3421_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3414_, v_x_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___boxed(lean_object* v_00_u03b1_3422_, lean_object* v_decls_3423_, lean_object* v_x_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_){
_start:
{
lean_object* v_res_3430_; 
v_res_3430_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(v_00_u03b1_3422_, v_decls_3423_, v_x_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_);
lean_dec(v___y_3428_);
lean_dec_ref(v___y_3427_);
lean_dec(v___y_3426_);
lean_dec_ref(v___y_3425_);
return v_res_3430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(size_t v_sz_3431_, size_t v_i_3432_, lean_object* v_bs_3433_){
_start:
{
uint8_t v___x_3434_; 
v___x_3434_ = lean_usize_dec_lt(v_i_3432_, v_sz_3431_);
if (v___x_3434_ == 0)
{
lean_object* v___x_3435_; 
v___x_3435_ = l_unsafeCast___redArg(v_bs_3433_);
lean_dec_ref(v_bs_3433_);
return v___x_3435_;
}
else
{
lean_object* v_v_3436_; lean_object* v___x_3437_; lean_object* v_bs_x27_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; size_t v___x_3441_; size_t v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v_v_3436_ = lean_array_uget(v_bs_3433_, v_i_3432_);
v___x_3437_ = lean_unsigned_to_nat(0u);
v_bs_x27_3438_ = lean_array_uset(v_bs_3433_, v_i_3432_, v___x_3437_);
v___x_3439_ = l_unsafeCast___redArg(v_v_3436_);
lean_dec(v_v_3436_);
v___x_3440_ = l_Lean_LocalDecl_fvarId(v___x_3439_);
lean_dec(v___x_3439_);
v___x_3441_ = ((size_t)1ULL);
v___x_3442_ = lean_usize_add(v_i_3432_, v___x_3441_);
v___x_3443_ = l_unsafeCast___redArg(v___x_3440_);
lean_dec(v___x_3440_);
v___x_3444_ = lean_array_uset(v_bs_x27_3438_, v_i_3432_, v___x_3443_);
v_i_3432_ = v___x_3442_;
v_bs_3433_ = v___x_3444_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0___boxed(lean_object* v_sz_3446_, lean_object* v_i_3447_, lean_object* v_bs_3448_){
_start:
{
size_t v_sz_boxed_3449_; size_t v_i_boxed_3450_; lean_object* v_res_3451_; 
v_sz_boxed_3449_ = lean_unbox_usize(v_sz_3446_);
lean_dec(v_sz_3446_);
v_i_boxed_3450_ = lean_unbox_usize(v_i_3447_);
lean_dec(v_i_3447_);
v_res_3451_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_boxed_3449_, v_i_boxed_3450_, v_bs_3448_);
return v_res_3451_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0(void){
_start:
{
lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; 
v___x_3452_ = lean_box(0);
v___x_3453_ = lean_unsigned_to_nat(16u);
v___x_3454_ = lean_mk_array(v___x_3453_, v___x_3452_);
return v___x_3454_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1(void){
_start:
{
lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3455_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0);
v___x_3456_ = lean_unsigned_to_nat(0u);
v___x_3457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3456_);
lean_ctor_set(v___x_3457_, 1, v___x_3455_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(lean_object* v_es_3458_, lean_object* v_givenNames_3459_, lean_object* v_k_3460_, lean_object* v_config_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_){
_start:
{
lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; 
v___x_3467_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3468_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_3469_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3469_, 0, v_givenNames_3459_);
lean_ctor_set(v___x_3469_, 1, v___x_3468_);
lean_ctor_set(v___x_3469_, 2, v___x_3467_);
v___x_3470_ = lean_st_mk_ref(v___x_3469_);
v___x_3471_ = lean_st_mk_ref(v___x_3467_);
v___x_3472_ = l_Lean_Meta_ExtractLets_extract(v_es_3458_, v_config_3461_, v___x_3471_, v___x_3470_, v_a_3462_, v_a_3463_, v_a_3464_, v_a_3465_);
if (lean_obj_tag(v___x_3472_) == 0)
{
lean_object* v_a_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v_givenNames_3476_; lean_object* v_decls_3477_; size_t v_sz_3478_; size_t v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; size_t v_sz_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v_a_3473_ = lean_ctor_get(v___x_3472_, 0);
lean_inc(v_a_3473_);
lean_dec_ref_known(v___x_3472_, 1);
v___x_3474_ = lean_st_ref_get(v___x_3471_);
lean_dec(v___x_3471_);
lean_dec(v___x_3474_);
v___x_3475_ = lean_st_ref_get(v___x_3470_);
lean_dec(v___x_3470_);
v_givenNames_3476_ = lean_ctor_get(v___x_3475_, 0);
lean_inc(v_givenNames_3476_);
v_decls_3477_ = lean_ctor_get(v___x_3475_, 1);
lean_inc_ref(v_decls_3477_);
lean_dec(v___x_3475_);
v_sz_3478_ = lean_array_size(v_decls_3477_);
v___x_3479_ = ((size_t)0ULL);
v___x_3480_ = l_unsafeCast___redArg(v_decls_3477_);
lean_dec_ref(v_decls_3477_);
v___x_3481_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_3478_, v___x_3479_, v___x_3480_);
v___x_3482_ = l_unsafeCast___redArg(v___x_3481_);
lean_dec_ref(v___x_3481_);
lean_inc(v___x_3482_);
v___x_3483_ = lean_array_to_list(v___x_3482_);
v_sz_3484_ = lean_array_size(v___x_3482_);
v___x_3485_ = l_unsafeCast___redArg(v___x_3482_);
lean_dec(v___x_3482_);
v___x_3486_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_3484_, v___x_3479_, v___x_3485_);
v___x_3487_ = l_unsafeCast___redArg(v___x_3486_);
lean_dec_ref(v___x_3486_);
v___x_3488_ = lean_apply_3(v_k_3460_, v___x_3487_, v_a_3473_, v_givenNames_3476_);
v___x_3489_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v___x_3483_, v___x_3488_, v_a_3462_, v_a_3463_, v_a_3464_, v_a_3465_);
return v___x_3489_;
}
else
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
lean_dec(v___x_3471_);
lean_dec(v___x_3470_);
lean_dec_ref(v_k_3460_);
v_a_3490_ = lean_ctor_get(v___x_3472_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3492_ = v___x_3472_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3472_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3490_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___boxed(lean_object* v_es_3498_, lean_object* v_givenNames_3499_, lean_object* v_k_3500_, lean_object* v_config_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_, lean_object* v_a_3506_){
_start:
{
lean_object* v_res_3507_; 
v_res_3507_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3498_, v_givenNames_3499_, v_k_3500_, v_config_3501_, v_a_3502_, v_a_3503_, v_a_3504_, v_a_3505_);
lean_dec(v_a_3505_);
lean_dec_ref(v_a_3504_);
lean_dec(v_a_3503_);
lean_dec_ref(v_a_3502_);
lean_dec_ref(v_config_3501_);
lean_dec_ref(v_es_3498_);
return v_res_3507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object* v_00_u03b1_3508_, lean_object* v_es_3509_, lean_object* v_givenNames_3510_, lean_object* v_k_3511_, lean_object* v_config_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_, lean_object* v_a_3515_, lean_object* v_a_3516_){
_start:
{
lean_object* v___x_3518_; 
v___x_3518_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3509_, v_givenNames_3510_, v_k_3511_, v_config_3512_, v_a_3513_, v_a_3514_, v_a_3515_, v_a_3516_);
return v___x_3518_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___boxed(lean_object* v_00_u03b1_3519_, lean_object* v_es_3520_, lean_object* v_givenNames_3521_, lean_object* v_k_3522_, lean_object* v_config_3523_, lean_object* v_a_3524_, lean_object* v_a_3525_, lean_object* v_a_3526_, lean_object* v_a_3527_, lean_object* v_a_3528_){
_start:
{
lean_object* v_res_3529_; 
v_res_3529_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(v_00_u03b1_3519_, v_es_3520_, v_givenNames_3521_, v_k_3522_, v_config_3523_, v_a_3524_, v_a_3525_, v_a_3526_, v_a_3527_);
lean_dec(v_a_3527_);
lean_dec_ref(v_a_3526_);
lean_dec(v_a_3525_);
lean_dec_ref(v_a_3524_);
lean_dec_ref(v_config_3523_);
lean_dec_ref(v_es_3520_);
return v_res_3529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0(lean_object* v_k_3530_, lean_object* v_runInBase_3531_, lean_object* v_b_3532_, lean_object* v_c_3533_, lean_object* v_d_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_){
_start:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; 
v___x_3540_ = lean_apply_3(v_k_3530_, v_b_3532_, v_c_3533_, v_d_3534_);
lean_inc(v___y_3538_);
lean_inc_ref(v___y_3537_);
lean_inc(v___y_3536_);
lean_inc_ref(v___y_3535_);
v___x_3541_ = lean_apply_7(v_runInBase_3531_, lean_box(0), v___x_3540_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_, lean_box(0));
return v___x_3541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0___boxed(lean_object* v_k_3542_, lean_object* v_runInBase_3543_, lean_object* v_b_3544_, lean_object* v_c_3545_, lean_object* v_d_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_){
_start:
{
lean_object* v_res_3552_; 
v_res_3552_ = l_Lean_Meta_extractLets___redArg___lam__0(v_k_3542_, v_runInBase_3543_, v_b_3544_, v_c_3545_, v_d_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_);
lean_dec(v___y_3550_);
lean_dec_ref(v___y_3549_);
lean_dec(v___y_3548_);
lean_dec_ref(v___y_3547_);
return v_res_3552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1(lean_object* v_k_3553_, lean_object* v_es_3554_, lean_object* v_givenNames_3555_, lean_object* v_config_3556_, lean_object* v_runInBase_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_){
_start:
{
lean_object* v___f_3563_; lean_object* v___x_3564_; 
v___f_3563_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_3563_, 0, v_k_3553_);
lean_closure_set(v___f_3563_, 1, v_runInBase_3557_);
v___x_3564_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3554_, v_givenNames_3555_, v___f_3563_, v_config_3556_, v___y_3558_, v___y_3559_, v___y_3560_, v___y_3561_);
return v___x_3564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1___boxed(lean_object* v_k_3565_, lean_object* v_es_3566_, lean_object* v_givenNames_3567_, lean_object* v_config_3568_, lean_object* v_runInBase_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_){
_start:
{
lean_object* v_res_3575_; 
v_res_3575_ = l_Lean_Meta_extractLets___redArg___lam__1(v_k_3565_, v_es_3566_, v_givenNames_3567_, v_config_3568_, v_runInBase_3569_, v___y_3570_, v___y_3571_, v___y_3572_, v___y_3573_);
lean_dec(v___y_3573_);
lean_dec_ref(v___y_3572_);
lean_dec(v___y_3571_);
lean_dec_ref(v___y_3570_);
lean_dec_ref(v_config_3568_);
lean_dec_ref(v_es_3566_);
return v_res_3575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg(lean_object* v_inst_3576_, lean_object* v_inst_3577_, lean_object* v_es_3578_, lean_object* v_givenNames_3579_, lean_object* v_k_3580_, lean_object* v_config_3581_){
_start:
{
lean_object* v_toBind_3582_; lean_object* v_liftWith_3583_; lean_object* v_restoreM_3584_; lean_object* v___f_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v_toBind_3582_ = lean_ctor_get(v_inst_3576_, 1);
lean_inc(v_toBind_3582_);
lean_dec_ref(v_inst_3576_);
v_liftWith_3583_ = lean_ctor_get(v_inst_3577_, 0);
lean_inc(v_liftWith_3583_);
v_restoreM_3584_ = lean_ctor_get(v_inst_3577_, 1);
lean_inc(v_restoreM_3584_);
lean_dec_ref(v_inst_3577_);
v___f_3585_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3585_, 0, v_k_3580_);
lean_closure_set(v___f_3585_, 1, v_es_3578_);
lean_closure_set(v___f_3585_, 2, v_givenNames_3579_);
lean_closure_set(v___f_3585_, 3, v_config_3581_);
v___x_3586_ = lean_apply_2(v_liftWith_3583_, lean_box(0), v___f_3585_);
v___x_3587_ = lean_apply_1(v_restoreM_3584_, lean_box(0));
v___x_3588_ = lean_apply_4(v_toBind_3582_, lean_box(0), lean_box(0), v___x_3586_, v___x_3587_);
return v___x_3588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets(lean_object* v_m_3589_, lean_object* v_00_u03b1_3590_, lean_object* v_inst_3591_, lean_object* v_inst_3592_, lean_object* v_es_3593_, lean_object* v_givenNames_3594_, lean_object* v_k_3595_, lean_object* v_config_3596_){
_start:
{
lean_object* v___x_3597_; 
v___x_3597_ = l_Lean_Meta_extractLets___redArg(v_inst_3591_, v_inst_3592_, v_es_3593_, v_givenNames_3594_, v_k_3595_, v_config_3596_);
return v___x_3597_;
}
}
static lean_object* _init_l_Lean_Meta_liftLets___closed__0(void){
_start:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3598_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3599_ = ((lean_object*)(l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0));
v___x_3600_ = lean_box(0);
v___x_3601_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3600_);
lean_ctor_set(v___x_3601_, 1, v___x_3599_);
lean_ctor_set(v___x_3601_, 2, v___x_3598_);
return v___x_3601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets(lean_object* v_e_3602_, lean_object* v_config_3603_, lean_object* v_a_3604_, lean_object* v_a_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_){
_start:
{
uint8_t v_proofs_3609_; uint8_t v_types_3610_; uint8_t v_implicits_3611_; uint8_t v_descend_3612_; uint8_t v_underBinder_3613_; uint8_t v_usedOnly_3614_; uint8_t v_merge_3615_; uint8_t v_useContext_3616_; uint8_t v_preserveBinderNames_3617_; uint8_t v_lift_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3657_; 
v_proofs_3609_ = lean_ctor_get_uint8(v_config_3603_, 0);
v_types_3610_ = lean_ctor_get_uint8(v_config_3603_, 1);
v_implicits_3611_ = lean_ctor_get_uint8(v_config_3603_, 2);
v_descend_3612_ = lean_ctor_get_uint8(v_config_3603_, 3);
v_underBinder_3613_ = lean_ctor_get_uint8(v_config_3603_, 4);
v_usedOnly_3614_ = lean_ctor_get_uint8(v_config_3603_, 5);
v_merge_3615_ = lean_ctor_get_uint8(v_config_3603_, 6);
v_useContext_3616_ = lean_ctor_get_uint8(v_config_3603_, 7);
v_preserveBinderNames_3617_ = lean_ctor_get_uint8(v_config_3603_, 9);
v_lift_3618_ = lean_ctor_get_uint8(v_config_3603_, 10);
v_isSharedCheck_3657_ = !lean_is_exclusive(v_config_3603_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3620_ = v_config_3603_;
v_isShared_3621_ = v_isSharedCheck_3657_;
goto v_resetjp_3619_;
}
else
{
lean_dec(v_config_3603_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3657_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; uint8_t v___x_3626_; lean_object* v___x_3628_; 
v___x_3622_ = l_Lean_instInhabitedExpr;
v___x_3623_ = lean_unsigned_to_nat(1u);
v___x_3624_ = lean_mk_empty_array_with_capacity(v___x_3623_);
v___x_3625_ = lean_array_push(v___x_3624_, v_e_3602_);
v___x_3626_ = 1;
if (v_isShared_3621_ == 0)
{
v___x_3628_ = v___x_3620_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, 0, v_proofs_3609_);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, 1, v_types_3610_);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, 2, v_implicits_3611_);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, 3, v_descend_3612_);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, 4, v_underBinder_3613_);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, 5, v_usedOnly_3614_);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, 6, v_merge_3615_);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, 7, v_useContext_3616_);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, 9, v_preserveBinderNames_3617_);
lean_ctor_set_uint8(v_reuseFailAlloc_3656_, 10, v_lift_3618_);
v___x_3628_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; 
lean_ctor_set_uint8(v___x_3628_, 8, v___x_3626_);
v___x_3629_ = lean_unsigned_to_nat(0u);
v___x_3630_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3631_ = lean_obj_once(&l_Lean_Meta_liftLets___closed__0, &l_Lean_Meta_liftLets___closed__0_once, _init_l_Lean_Meta_liftLets___closed__0);
v___x_3632_ = lean_st_mk_ref(v___x_3631_);
v___x_3633_ = lean_st_mk_ref(v___x_3630_);
v___x_3634_ = l_Lean_Meta_ExtractLets_extract(v___x_3625_, v___x_3628_, v___x_3633_, v___x_3632_, v_a_3604_, v_a_3605_, v_a_3606_, v_a_3607_);
lean_dec_ref(v___x_3628_);
lean_dec_ref(v___x_3625_);
if (lean_obj_tag(v___x_3634_) == 0)
{
lean_object* v_a_3635_; lean_object* v___x_3637_; uint8_t v_isShared_3638_; uint8_t v_isSharedCheck_3647_; 
v_a_3635_ = lean_ctor_get(v___x_3634_, 0);
v_isSharedCheck_3647_ = !lean_is_exclusive(v___x_3634_);
if (v_isSharedCheck_3647_ == 0)
{
v___x_3637_ = v___x_3634_;
v_isShared_3638_ = v_isSharedCheck_3647_;
goto v_resetjp_3636_;
}
else
{
lean_inc(v_a_3635_);
lean_dec(v___x_3634_);
v___x_3637_ = lean_box(0);
v_isShared_3638_ = v_isSharedCheck_3647_;
goto v_resetjp_3636_;
}
v_resetjp_3636_:
{
lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v_decls_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3645_; 
v___x_3639_ = lean_st_ref_get(v___x_3633_);
lean_dec(v___x_3633_);
lean_dec(v___x_3639_);
v___x_3640_ = lean_st_ref_get(v___x_3632_);
lean_dec(v___x_3632_);
v_decls_3641_ = lean_ctor_get(v___x_3640_, 1);
lean_inc_ref(v_decls_3641_);
lean_dec(v___x_3640_);
v___x_3642_ = lean_array_get(v___x_3622_, v_a_3635_, v___x_3629_);
lean_dec(v_a_3635_);
v___x_3643_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_decls_3641_, v___x_3642_);
lean_dec_ref(v_decls_3641_);
if (v_isShared_3638_ == 0)
{
lean_ctor_set(v___x_3637_, 0, v___x_3643_);
v___x_3645_ = v___x_3637_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v___x_3643_);
v___x_3645_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
return v___x_3645_;
}
}
}
else
{
lean_object* v_a_3648_; lean_object* v___x_3650_; uint8_t v_isShared_3651_; uint8_t v_isSharedCheck_3655_; 
lean_dec(v___x_3633_);
lean_dec(v___x_3632_);
v_a_3648_ = lean_ctor_get(v___x_3634_, 0);
v_isSharedCheck_3655_ = !lean_is_exclusive(v___x_3634_);
if (v_isSharedCheck_3655_ == 0)
{
v___x_3650_ = v___x_3634_;
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
else
{
lean_inc(v_a_3648_);
lean_dec(v___x_3634_);
v___x_3650_ = lean_box(0);
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
v_resetjp_3649_:
{
lean_object* v___x_3653_; 
if (v_isShared_3651_ == 0)
{
v___x_3653_ = v___x_3650_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v_a_3648_);
v___x_3653_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
return v___x_3653_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets___boxed(lean_object* v_e_3658_, lean_object* v_config_3659_, lean_object* v_a_3660_, lean_object* v_a_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_, lean_object* v_a_3664_){
_start:
{
lean_object* v_res_3665_; 
v_res_3665_ = l_Lean_Meta_liftLets(v_e_3658_, v_config_3659_, v_a_3660_, v_a_3661_, v_a_3662_, v_a_3663_);
lean_dec(v_a_3663_);
lean_dec_ref(v_a_3662_);
lean_dec(v_a_3661_);
lean_dec_ref(v_a_3660_);
return v_res_3665_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1(void){
_start:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; 
v___x_3667_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0));
v___x_3668_ = l_Lean_stringToMessageData(v___x_3667_);
return v___x_3668_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2(void){
_start:
{
lean_object* v___x_3669_; lean_object* v___x_3670_; 
v___x_3669_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1);
v___x_3670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3670_, 0, v___x_3669_);
return v___x_3670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(lean_object* v_tactic_3671_, lean_object* v_mvarId_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_){
_start:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; 
v___x_3678_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2);
v___x_3679_ = l_Lean_Meta_throwTacticEx___redArg(v_tactic_3671_, v_mvarId_3672_, v___x_3678_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
return v___x_3679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___boxed(lean_object* v_tactic_3680_, lean_object* v_mvarId_3681_, lean_object* v_a_3682_, lean_object* v_a_3683_, lean_object* v_a_3684_, lean_object* v_a_3685_, lean_object* v_a_3686_){
_start:
{
lean_object* v_res_3687_; 
v_res_3687_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3680_, v_mvarId_3681_, v_a_3682_, v_a_3683_, v_a_3684_, v_a_3685_);
lean_dec(v_a_3685_);
lean_dec_ref(v_a_3684_);
lean_dec(v_a_3683_);
lean_dec_ref(v_a_3682_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(lean_object* v_00_u03b1_3688_, lean_object* v_tactic_3689_, lean_object* v_mvarId_3690_, lean_object* v_a_3691_, lean_object* v_a_3692_, lean_object* v_a_3693_, lean_object* v_a_3694_){
_start:
{
lean_object* v___x_3696_; 
v___x_3696_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3689_, v_mvarId_3690_, v_a_3691_, v_a_3692_, v_a_3693_, v_a_3694_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___boxed(lean_object* v_00_u03b1_3697_, lean_object* v_tactic_3698_, lean_object* v_mvarId_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_, lean_object* v_a_3704_){
_start:
{
lean_object* v_res_3705_; 
v_res_3705_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(v_00_u03b1_3697_, v_tactic_3698_, v_mvarId_3699_, v_a_3700_, v_a_3701_, v_a_3702_, v_a_3703_);
lean_dec(v_a_3703_);
lean_dec_ref(v_a_3702_);
lean_dec(v_a_3701_);
lean_dec_ref(v_a_3700_);
return v_res_3705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(lean_object* v_k_3706_, lean_object* v_b_3707_, lean_object* v_c_3708_, lean_object* v_d_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_){
_start:
{
lean_object* v___x_3715_; 
lean_inc(v___y_3713_);
lean_inc_ref(v___y_3712_);
lean_inc(v___y_3711_);
lean_inc_ref(v___y_3710_);
v___x_3715_ = lean_apply_8(v_k_3706_, v_b_3707_, v_c_3708_, v_d_3709_, v___y_3710_, v___y_3711_, v___y_3712_, v___y_3713_, lean_box(0));
return v___x_3715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed(lean_object* v_k_3716_, lean_object* v_b_3717_, lean_object* v_c_3718_, lean_object* v_d_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_){
_start:
{
lean_object* v_res_3725_; 
v_res_3725_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(v_k_3716_, v_b_3717_, v_c_3718_, v_d_3719_, v___y_3720_, v___y_3721_, v___y_3722_, v___y_3723_);
lean_dec(v___y_3723_);
lean_dec_ref(v___y_3722_);
lean_dec(v___y_3721_);
lean_dec_ref(v___y_3720_);
return v_res_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(lean_object* v_es_3726_, lean_object* v_givenNames_3727_, lean_object* v_k_3728_, lean_object* v_config_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_){
_start:
{
lean_object* v___f_3735_; lean_object* v___x_3736_; 
v___f_3735_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3735_, 0, v_k_3728_);
v___x_3736_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3726_, v_givenNames_3727_, v___f_3735_, v_config_3729_, v___y_3730_, v___y_3731_, v___y_3732_, v___y_3733_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3744_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
v_isSharedCheck_3744_ = !lean_is_exclusive(v___x_3736_);
if (v_isSharedCheck_3744_ == 0)
{
v___x_3739_ = v___x_3736_;
v_isShared_3740_ = v_isSharedCheck_3744_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_a_3737_);
lean_dec(v___x_3736_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3744_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v___x_3742_; 
if (v_isShared_3740_ == 0)
{
v___x_3742_ = v___x_3739_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v_a_3737_);
v___x_3742_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
return v___x_3742_;
}
}
}
else
{
lean_object* v_a_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3752_; 
v_a_3745_ = lean_ctor_get(v___x_3736_, 0);
v_isSharedCheck_3752_ = !lean_is_exclusive(v___x_3736_);
if (v_isSharedCheck_3752_ == 0)
{
v___x_3747_ = v___x_3736_;
v_isShared_3748_ = v_isSharedCheck_3752_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_a_3745_);
lean_dec(v___x_3736_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3752_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v___x_3750_; 
if (v_isShared_3748_ == 0)
{
v___x_3750_ = v___x_3747_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v_a_3745_);
v___x_3750_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
return v___x_3750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___boxed(lean_object* v_es_3753_, lean_object* v_givenNames_3754_, lean_object* v_k_3755_, lean_object* v_config_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_){
_start:
{
lean_object* v_res_3762_; 
v_res_3762_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3753_, v_givenNames_3754_, v_k_3755_, v_config_3756_, v___y_3757_, v___y_3758_, v___y_3759_, v___y_3760_);
lean_dec(v___y_3760_);
lean_dec_ref(v___y_3759_);
lean_dec(v___y_3758_);
lean_dec_ref(v___y_3757_);
lean_dec_ref(v_config_3756_);
lean_dec_ref(v_es_3753_);
return v_res_3762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(lean_object* v_00_u03b1_3763_, lean_object* v_es_3764_, lean_object* v_givenNames_3765_, lean_object* v_k_3766_, lean_object* v_config_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_){
_start:
{
lean_object* v___x_3773_; 
v___x_3773_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3764_, v_givenNames_3765_, v_k_3766_, v_config_3767_, v___y_3768_, v___y_3769_, v___y_3770_, v___y_3771_);
return v___x_3773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___boxed(lean_object* v_00_u03b1_3774_, lean_object* v_es_3775_, lean_object* v_givenNames_3776_, lean_object* v_k_3777_, lean_object* v_config_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(v_00_u03b1_3774_, v_es_3775_, v_givenNames_3776_, v_k_3777_, v_config_3778_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_);
lean_dec(v___y_3782_);
lean_dec_ref(v___y_3781_);
lean_dec(v___y_3780_);
lean_dec_ref(v___y_3779_);
lean_dec_ref(v_config_3778_);
lean_dec_ref(v_es_3775_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(lean_object* v_mvarId_3785_, lean_object* v_x_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_){
_start:
{
lean_object* v___x_3792_; 
v___x_3792_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3785_, v_x_3786_, v___y_3787_, v___y_3788_, v___y_3789_, v___y_3790_);
if (lean_obj_tag(v___x_3792_) == 0)
{
lean_object* v_a_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3800_; 
v_a_3793_ = lean_ctor_get(v___x_3792_, 0);
v_isSharedCheck_3800_ = !lean_is_exclusive(v___x_3792_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3795_ = v___x_3792_;
v_isShared_3796_ = v_isSharedCheck_3800_;
goto v_resetjp_3794_;
}
else
{
lean_inc(v_a_3793_);
lean_dec(v___x_3792_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3800_;
goto v_resetjp_3794_;
}
v_resetjp_3794_:
{
lean_object* v___x_3798_; 
if (v_isShared_3796_ == 0)
{
v___x_3798_ = v___x_3795_;
goto v_reusejp_3797_;
}
else
{
lean_object* v_reuseFailAlloc_3799_; 
v_reuseFailAlloc_3799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3799_, 0, v_a_3793_);
v___x_3798_ = v_reuseFailAlloc_3799_;
goto v_reusejp_3797_;
}
v_reusejp_3797_:
{
return v___x_3798_;
}
}
}
else
{
lean_object* v_a_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3808_; 
v_a_3801_ = lean_ctor_get(v___x_3792_, 0);
v_isSharedCheck_3808_ = !lean_is_exclusive(v___x_3792_);
if (v_isSharedCheck_3808_ == 0)
{
v___x_3803_ = v___x_3792_;
v_isShared_3804_ = v_isSharedCheck_3808_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_a_3801_);
lean_dec(v___x_3792_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3808_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
lean_object* v___x_3806_; 
if (v_isShared_3804_ == 0)
{
v___x_3806_ = v___x_3803_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v_a_3801_);
v___x_3806_ = v_reuseFailAlloc_3807_;
goto v_reusejp_3805_;
}
v_reusejp_3805_:
{
return v___x_3806_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg___boxed(lean_object* v_mvarId_3809_, lean_object* v_x_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_){
_start:
{
lean_object* v_res_3816_; 
v_res_3816_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3809_, v_x_3810_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_);
lean_dec(v___y_3814_);
lean_dec_ref(v___y_3813_);
lean_dec(v___y_3812_);
lean_dec_ref(v___y_3811_);
return v_res_3816_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(lean_object* v_00_u03b1_3817_, lean_object* v_mvarId_3818_, lean_object* v_x_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_){
_start:
{
lean_object* v___x_3825_; 
v___x_3825_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3818_, v_x_3819_, v___y_3820_, v___y_3821_, v___y_3822_, v___y_3823_);
return v___x_3825_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___boxed(lean_object* v_00_u03b1_3826_, lean_object* v_mvarId_3827_, lean_object* v_x_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_){
_start:
{
lean_object* v_res_3834_; 
v_res_3834_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(v_00_u03b1_3826_, v_mvarId_3827_, v_x_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_);
lean_dec(v___y_3832_);
lean_dec_ref(v___y_3831_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_x_3835_, lean_object* v_x_3836_, lean_object* v_x_3837_, lean_object* v_x_3838_){
_start:
{
lean_object* v_ks_3839_; lean_object* v_vs_3840_; lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3864_; 
v_ks_3839_ = lean_ctor_get(v_x_3835_, 0);
v_vs_3840_ = lean_ctor_get(v_x_3835_, 1);
v_isSharedCheck_3864_ = !lean_is_exclusive(v_x_3835_);
if (v_isSharedCheck_3864_ == 0)
{
v___x_3842_ = v_x_3835_;
v_isShared_3843_ = v_isSharedCheck_3864_;
goto v_resetjp_3841_;
}
else
{
lean_inc(v_vs_3840_);
lean_inc(v_ks_3839_);
lean_dec(v_x_3835_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3864_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v___x_3844_; uint8_t v___x_3845_; 
v___x_3844_ = lean_array_get_size(v_ks_3839_);
v___x_3845_ = lean_nat_dec_lt(v_x_3836_, v___x_3844_);
if (v___x_3845_ == 0)
{
lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3849_; 
lean_dec(v_x_3836_);
v___x_3846_ = lean_array_push(v_ks_3839_, v_x_3837_);
v___x_3847_ = lean_array_push(v_vs_3840_, v_x_3838_);
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 1, v___x_3847_);
lean_ctor_set(v___x_3842_, 0, v___x_3846_);
v___x_3849_ = v___x_3842_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v___x_3846_);
lean_ctor_set(v_reuseFailAlloc_3850_, 1, v___x_3847_);
v___x_3849_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
return v___x_3849_;
}
}
else
{
lean_object* v_k_x27_3851_; uint8_t v___x_3852_; 
v_k_x27_3851_ = lean_array_fget_borrowed(v_ks_3839_, v_x_3836_);
v___x_3852_ = l_Lean_instBEqMVarId_beq(v_x_3837_, v_k_x27_3851_);
if (v___x_3852_ == 0)
{
lean_object* v___x_3854_; 
if (v_isShared_3843_ == 0)
{
v___x_3854_ = v___x_3842_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_ks_3839_);
lean_ctor_set(v_reuseFailAlloc_3858_, 1, v_vs_3840_);
v___x_3854_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
lean_object* v___x_3855_; lean_object* v___x_3856_; 
v___x_3855_ = lean_unsigned_to_nat(1u);
v___x_3856_ = lean_nat_add(v_x_3836_, v___x_3855_);
lean_dec(v_x_3836_);
v_x_3835_ = v___x_3854_;
v_x_3836_ = v___x_3856_;
goto _start;
}
}
else
{
lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3862_; 
v___x_3859_ = lean_array_fset(v_ks_3839_, v_x_3836_, v_x_3837_);
v___x_3860_ = lean_array_fset(v_vs_3840_, v_x_3836_, v_x_3838_);
lean_dec(v_x_3836_);
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 1, v___x_3860_);
lean_ctor_set(v___x_3842_, 0, v___x_3859_);
v___x_3862_ = v___x_3842_;
goto v_reusejp_3861_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v___x_3859_);
lean_ctor_set(v_reuseFailAlloc_3863_, 1, v___x_3860_);
v___x_3862_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3861_;
}
v_reusejp_3861_:
{
return v___x_3862_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(lean_object* v_n_3865_, lean_object* v_k_3866_, lean_object* v_v_3867_){
_start:
{
lean_object* v___x_3868_; lean_object* v___x_3869_; 
v___x_3868_ = lean_unsigned_to_nat(0u);
v___x_3869_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_n_3865_, v___x_3868_, v_k_3866_, v_v_3867_);
return v___x_3869_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; 
v___x_3870_ = lean_box(0);
v___x_3871_ = l_unsafeCast___redArg(v___x_3870_);
return v___x_3871_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_3872_; 
v___x_3872_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(lean_object* v_x_3873_, size_t v_x_3874_, size_t v_x_3875_, lean_object* v_x_3876_, lean_object* v_x_3877_){
_start:
{
if (lean_obj_tag(v_x_3873_) == 0)
{
lean_object* v_es_3878_; size_t v___x_3879_; size_t v___x_3880_; lean_object* v_j_3881_; lean_object* v___x_3882_; uint8_t v___x_3883_; 
v_es_3878_ = lean_ctor_get(v_x_3873_, 0);
v___x_3879_ = ((size_t)31ULL);
v___x_3880_ = lean_usize_land(v_x_3874_, v___x_3879_);
v_j_3881_ = lean_usize_to_nat(v___x_3880_);
v___x_3882_ = lean_array_get_size(v_es_3878_);
v___x_3883_ = lean_nat_dec_lt(v_j_3881_, v___x_3882_);
if (v___x_3883_ == 0)
{
lean_dec(v_j_3881_);
lean_dec(v_x_3877_);
lean_dec(v_x_3876_);
return v_x_3873_;
}
else
{
lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3922_; 
lean_inc_ref(v_es_3878_);
v_isSharedCheck_3922_ = !lean_is_exclusive(v_x_3873_);
if (v_isSharedCheck_3922_ == 0)
{
lean_object* v_unused_3923_; 
v_unused_3923_ = lean_ctor_get(v_x_3873_, 0);
lean_dec(v_unused_3923_);
v___x_3885_ = v_x_3873_;
v_isShared_3886_ = v_isSharedCheck_3922_;
goto v_resetjp_3884_;
}
else
{
lean_dec(v_x_3873_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3922_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v_v_3887_; lean_object* v___x_3888_; lean_object* v_xs_x27_3889_; lean_object* v___y_3891_; 
v_v_3887_ = lean_array_fget(v_es_3878_, v_j_3881_);
v___x_3888_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0);
v_xs_x27_3889_ = lean_array_fset(v_es_3878_, v_j_3881_, v___x_3888_);
switch(lean_obj_tag(v_v_3887_))
{
case 0:
{
lean_object* v_key_3896_; lean_object* v_val_3897_; lean_object* v___x_3899_; uint8_t v_isShared_3900_; uint8_t v_isSharedCheck_3907_; 
v_key_3896_ = lean_ctor_get(v_v_3887_, 0);
v_val_3897_ = lean_ctor_get(v_v_3887_, 1);
v_isSharedCheck_3907_ = !lean_is_exclusive(v_v_3887_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3899_ = v_v_3887_;
v_isShared_3900_ = v_isSharedCheck_3907_;
goto v_resetjp_3898_;
}
else
{
lean_inc(v_val_3897_);
lean_inc(v_key_3896_);
lean_dec(v_v_3887_);
v___x_3899_ = lean_box(0);
v_isShared_3900_ = v_isSharedCheck_3907_;
goto v_resetjp_3898_;
}
v_resetjp_3898_:
{
uint8_t v___x_3901_; 
v___x_3901_ = l_Lean_instBEqMVarId_beq(v_x_3876_, v_key_3896_);
if (v___x_3901_ == 0)
{
lean_object* v___x_3902_; lean_object* v___x_3903_; 
lean_del_object(v___x_3899_);
v___x_3902_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3896_, v_val_3897_, v_x_3876_, v_x_3877_);
v___x_3903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3902_);
v___y_3891_ = v___x_3903_;
goto v___jp_3890_;
}
else
{
lean_object* v___x_3905_; 
lean_dec(v_val_3897_);
lean_dec(v_key_3896_);
if (v_isShared_3900_ == 0)
{
lean_ctor_set(v___x_3899_, 1, v_x_3877_);
lean_ctor_set(v___x_3899_, 0, v_x_3876_);
v___x_3905_ = v___x_3899_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_x_3876_);
lean_ctor_set(v_reuseFailAlloc_3906_, 1, v_x_3877_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
v___y_3891_ = v___x_3905_;
goto v___jp_3890_;
}
}
}
}
case 1:
{
lean_object* v_node_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3920_; 
v_node_3908_ = lean_ctor_get(v_v_3887_, 0);
v_isSharedCheck_3920_ = !lean_is_exclusive(v_v_3887_);
if (v_isSharedCheck_3920_ == 0)
{
v___x_3910_ = v_v_3887_;
v_isShared_3911_ = v_isSharedCheck_3920_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_node_3908_);
lean_dec(v_v_3887_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3920_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
size_t v___x_3912_; size_t v___x_3913_; size_t v___x_3914_; size_t v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3918_; 
v___x_3912_ = ((size_t)5ULL);
v___x_3913_ = lean_usize_shift_right(v_x_3874_, v___x_3912_);
v___x_3914_ = ((size_t)1ULL);
v___x_3915_ = lean_usize_add(v_x_3875_, v___x_3914_);
v___x_3916_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_node_3908_, v___x_3913_, v___x_3915_, v_x_3876_, v_x_3877_);
if (v_isShared_3911_ == 0)
{
lean_ctor_set(v___x_3910_, 0, v___x_3916_);
v___x_3918_ = v___x_3910_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3919_; 
v_reuseFailAlloc_3919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3919_, 0, v___x_3916_);
v___x_3918_ = v_reuseFailAlloc_3919_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
v___y_3891_ = v___x_3918_;
goto v___jp_3890_;
}
}
}
default: 
{
lean_object* v___x_3921_; 
v___x_3921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3921_, 0, v_x_3876_);
lean_ctor_set(v___x_3921_, 1, v_x_3877_);
v___y_3891_ = v___x_3921_;
goto v___jp_3890_;
}
}
v___jp_3890_:
{
lean_object* v___x_3892_; lean_object* v___x_3894_; 
v___x_3892_ = lean_array_fset(v_xs_x27_3889_, v_j_3881_, v___y_3891_);
lean_dec(v_j_3881_);
if (v_isShared_3886_ == 0)
{
lean_ctor_set(v___x_3885_, 0, v___x_3892_);
v___x_3894_ = v___x_3885_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v___x_3892_);
v___x_3894_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
return v___x_3894_;
}
}
}
}
}
else
{
lean_object* v_ks_3924_; lean_object* v_vs_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3943_; 
v_ks_3924_ = lean_ctor_get(v_x_3873_, 0);
v_vs_3925_ = lean_ctor_get(v_x_3873_, 1);
v_isSharedCheck_3943_ = !lean_is_exclusive(v_x_3873_);
if (v_isSharedCheck_3943_ == 0)
{
v___x_3927_ = v_x_3873_;
v_isShared_3928_ = v_isSharedCheck_3943_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_vs_3925_);
lean_inc(v_ks_3924_);
lean_dec(v_x_3873_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3943_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3930_; 
if (v_isShared_3928_ == 0)
{
v___x_3930_ = v___x_3927_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v_ks_3924_);
lean_ctor_set(v_reuseFailAlloc_3942_, 1, v_vs_3925_);
v___x_3930_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
lean_object* v_newNode_3931_; size_t v___x_3932_; uint8_t v___x_3933_; 
v_newNode_3931_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v___x_3930_, v_x_3876_, v_x_3877_);
v___x_3932_ = ((size_t)7ULL);
v___x_3933_ = lean_usize_dec_le(v___x_3932_, v_x_3875_);
if (v___x_3933_ == 0)
{
lean_object* v___x_3934_; lean_object* v___x_3935_; uint8_t v___x_3936_; 
v___x_3934_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3931_);
v___x_3935_ = lean_unsigned_to_nat(4u);
v___x_3936_ = lean_nat_dec_lt(v___x_3934_, v___x_3935_);
lean_dec(v___x_3934_);
if (v___x_3936_ == 0)
{
lean_object* v_ks_3937_; lean_object* v_vs_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v_ks_3937_ = lean_ctor_get(v_newNode_3931_, 0);
lean_inc_ref(v_ks_3937_);
v_vs_3938_ = lean_ctor_get(v_newNode_3931_, 1);
lean_inc_ref(v_vs_3938_);
lean_dec_ref(v_newNode_3931_);
v___x_3939_ = lean_unsigned_to_nat(0u);
v___x_3940_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1);
v___x_3941_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_x_3875_, v_ks_3937_, v_vs_3938_, v___x_3939_, v___x_3940_);
lean_dec_ref(v_vs_3938_);
lean_dec_ref(v_ks_3937_);
return v___x_3941_;
}
else
{
return v_newNode_3931_;
}
}
else
{
return v_newNode_3931_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(size_t v_depth_3944_, lean_object* v_keys_3945_, lean_object* v_vals_3946_, lean_object* v_i_3947_, lean_object* v_entries_3948_){
_start:
{
lean_object* v___x_3949_; uint8_t v___x_3950_; 
v___x_3949_ = lean_array_get_size(v_keys_3945_);
v___x_3950_ = lean_nat_dec_lt(v_i_3947_, v___x_3949_);
if (v___x_3950_ == 0)
{
lean_dec(v_i_3947_);
return v_entries_3948_;
}
else
{
lean_object* v_k_3951_; lean_object* v_v_3952_; uint64_t v___x_3953_; size_t v_h_3954_; size_t v___x_3955_; lean_object* v___x_3956_; size_t v___x_3957_; size_t v___x_3958_; size_t v___x_3959_; size_t v_h_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; 
v_k_3951_ = lean_array_fget_borrowed(v_keys_3945_, v_i_3947_);
v_v_3952_ = lean_array_fget_borrowed(v_vals_3946_, v_i_3947_);
v___x_3953_ = l_Lean_instHashableMVarId_hash(v_k_3951_);
v_h_3954_ = lean_uint64_to_usize(v___x_3953_);
v___x_3955_ = ((size_t)5ULL);
v___x_3956_ = lean_unsigned_to_nat(1u);
v___x_3957_ = ((size_t)1ULL);
v___x_3958_ = lean_usize_sub(v_depth_3944_, v___x_3957_);
v___x_3959_ = lean_usize_mul(v___x_3955_, v___x_3958_);
v_h_3960_ = lean_usize_shift_right(v_h_3954_, v___x_3959_);
v___x_3961_ = lean_nat_add(v_i_3947_, v___x_3956_);
lean_dec(v_i_3947_);
lean_inc(v_v_3952_);
lean_inc(v_k_3951_);
v___x_3962_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_entries_3948_, v_h_3960_, v_depth_3944_, v_k_3951_, v_v_3952_);
v_i_3947_ = v___x_3961_;
v_entries_3948_ = v___x_3962_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_depth_3964_, lean_object* v_keys_3965_, lean_object* v_vals_3966_, lean_object* v_i_3967_, lean_object* v_entries_3968_){
_start:
{
size_t v_depth_boxed_3969_; lean_object* v_res_3970_; 
v_depth_boxed_3969_ = lean_unbox_usize(v_depth_3964_);
lean_dec(v_depth_3964_);
v_res_3970_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_boxed_3969_, v_keys_3965_, v_vals_3966_, v_i_3967_, v_entries_3968_);
lean_dec_ref(v_vals_3966_);
lean_dec_ref(v_keys_3965_);
return v_res_3970_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_x_3971_, lean_object* v_x_3972_, lean_object* v_x_3973_, lean_object* v_x_3974_, lean_object* v_x_3975_){
_start:
{
size_t v_x_2335__boxed_3976_; size_t v_x_2336__boxed_3977_; lean_object* v_res_3978_; 
v_x_2335__boxed_3976_ = lean_unbox_usize(v_x_3972_);
lean_dec(v_x_3972_);
v_x_2336__boxed_3977_ = lean_unbox_usize(v_x_3973_);
lean_dec(v_x_3973_);
v_res_3978_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_3971_, v_x_2335__boxed_3976_, v_x_2336__boxed_3977_, v_x_3974_, v_x_3975_);
return v_res_3978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(lean_object* v_x_3979_, lean_object* v_x_3980_, lean_object* v_x_3981_){
_start:
{
uint64_t v___x_3982_; size_t v___x_3983_; size_t v___x_3984_; lean_object* v___x_3985_; 
v___x_3982_ = l_Lean_instHashableMVarId_hash(v_x_3980_);
v___x_3983_ = lean_uint64_to_usize(v___x_3982_);
v___x_3984_ = ((size_t)1ULL);
v___x_3985_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_3979_, v___x_3983_, v___x_3984_, v_x_3980_, v_x_3981_);
return v___x_3985_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(lean_object* v_mvarId_3986_, lean_object* v_val_3987_, lean_object* v___y_3988_){
_start:
{
lean_object* v___x_3990_; lean_object* v_mctx_3991_; lean_object* v_cache_3992_; lean_object* v_zetaDeltaFVarIds_3993_; lean_object* v_postponed_3994_; lean_object* v_diag_3995_; lean_object* v___x_3997_; uint8_t v_isShared_3998_; uint8_t v_isSharedCheck_4024_; 
v___x_3990_ = lean_st_ref_take(v___y_3988_);
v_mctx_3991_ = lean_ctor_get(v___x_3990_, 0);
v_cache_3992_ = lean_ctor_get(v___x_3990_, 1);
v_zetaDeltaFVarIds_3993_ = lean_ctor_get(v___x_3990_, 2);
v_postponed_3994_ = lean_ctor_get(v___x_3990_, 3);
v_diag_3995_ = lean_ctor_get(v___x_3990_, 4);
v_isSharedCheck_4024_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_3997_ = v___x_3990_;
v_isShared_3998_ = v_isSharedCheck_4024_;
goto v_resetjp_3996_;
}
else
{
lean_inc(v_diag_3995_);
lean_inc(v_postponed_3994_);
lean_inc(v_zetaDeltaFVarIds_3993_);
lean_inc(v_cache_3992_);
lean_inc(v_mctx_3991_);
lean_dec(v___x_3990_);
v___x_3997_ = lean_box(0);
v_isShared_3998_ = v_isSharedCheck_4024_;
goto v_resetjp_3996_;
}
v_resetjp_3996_:
{
lean_object* v_depth_3999_; lean_object* v_levelAssignDepth_4000_; lean_object* v_lmvarCounter_4001_; lean_object* v_mvarCounter_4002_; lean_object* v_lDecls_4003_; lean_object* v_decls_4004_; lean_object* v_userNames_4005_; lean_object* v_lAssignment_4006_; lean_object* v_eAssignment_4007_; lean_object* v_dAssignment_4008_; lean_object* v_instanceTypedMVars_4009_; lean_object* v___x_4011_; uint8_t v_isShared_4012_; uint8_t v_isSharedCheck_4023_; 
v_depth_3999_ = lean_ctor_get(v_mctx_3991_, 0);
v_levelAssignDepth_4000_ = lean_ctor_get(v_mctx_3991_, 1);
v_lmvarCounter_4001_ = lean_ctor_get(v_mctx_3991_, 2);
v_mvarCounter_4002_ = lean_ctor_get(v_mctx_3991_, 3);
v_lDecls_4003_ = lean_ctor_get(v_mctx_3991_, 4);
v_decls_4004_ = lean_ctor_get(v_mctx_3991_, 5);
v_userNames_4005_ = lean_ctor_get(v_mctx_3991_, 6);
v_lAssignment_4006_ = lean_ctor_get(v_mctx_3991_, 7);
v_eAssignment_4007_ = lean_ctor_get(v_mctx_3991_, 8);
v_dAssignment_4008_ = lean_ctor_get(v_mctx_3991_, 9);
v_instanceTypedMVars_4009_ = lean_ctor_get(v_mctx_3991_, 10);
v_isSharedCheck_4023_ = !lean_is_exclusive(v_mctx_3991_);
if (v_isSharedCheck_4023_ == 0)
{
v___x_4011_ = v_mctx_3991_;
v_isShared_4012_ = v_isSharedCheck_4023_;
goto v_resetjp_4010_;
}
else
{
lean_inc(v_instanceTypedMVars_4009_);
lean_inc(v_dAssignment_4008_);
lean_inc(v_eAssignment_4007_);
lean_inc(v_lAssignment_4006_);
lean_inc(v_userNames_4005_);
lean_inc(v_decls_4004_);
lean_inc(v_lDecls_4003_);
lean_inc(v_mvarCounter_4002_);
lean_inc(v_lmvarCounter_4001_);
lean_inc(v_levelAssignDepth_4000_);
lean_inc(v_depth_3999_);
lean_dec(v_mctx_3991_);
v___x_4011_ = lean_box(0);
v_isShared_4012_ = v_isSharedCheck_4023_;
goto v_resetjp_4010_;
}
v_resetjp_4010_:
{
lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4016_; 
v___x_4013_ = lean_box(0);
v___x_4014_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_eAssignment_4007_, v_mvarId_3986_, v_val_3987_);
if (v_isShared_4012_ == 0)
{
lean_ctor_set(v___x_4011_, 8, v___x_4014_);
v___x_4016_ = v___x_4011_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v_depth_3999_);
lean_ctor_set(v_reuseFailAlloc_4022_, 1, v_levelAssignDepth_4000_);
lean_ctor_set(v_reuseFailAlloc_4022_, 2, v_lmvarCounter_4001_);
lean_ctor_set(v_reuseFailAlloc_4022_, 3, v_mvarCounter_4002_);
lean_ctor_set(v_reuseFailAlloc_4022_, 4, v_lDecls_4003_);
lean_ctor_set(v_reuseFailAlloc_4022_, 5, v_decls_4004_);
lean_ctor_set(v_reuseFailAlloc_4022_, 6, v_userNames_4005_);
lean_ctor_set(v_reuseFailAlloc_4022_, 7, v_lAssignment_4006_);
lean_ctor_set(v_reuseFailAlloc_4022_, 8, v___x_4014_);
lean_ctor_set(v_reuseFailAlloc_4022_, 9, v_dAssignment_4008_);
lean_ctor_set(v_reuseFailAlloc_4022_, 10, v_instanceTypedMVars_4009_);
v___x_4016_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
lean_object* v___x_4018_; 
if (v_isShared_3998_ == 0)
{
lean_ctor_set(v___x_3997_, 0, v___x_4016_);
v___x_4018_ = v___x_3997_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4021_; 
v_reuseFailAlloc_4021_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4021_, 0, v___x_4016_);
lean_ctor_set(v_reuseFailAlloc_4021_, 1, v_cache_3992_);
lean_ctor_set(v_reuseFailAlloc_4021_, 2, v_zetaDeltaFVarIds_3993_);
lean_ctor_set(v_reuseFailAlloc_4021_, 3, v_postponed_3994_);
lean_ctor_set(v_reuseFailAlloc_4021_, 4, v_diag_3995_);
v___x_4018_ = v_reuseFailAlloc_4021_;
goto v_reusejp_4017_;
}
v_reusejp_4017_:
{
lean_object* v___x_4019_; lean_object* v___x_4020_; 
v___x_4019_ = lean_st_ref_put(v___y_3988_, v___x_4018_);
v___x_4020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4020_, 0, v___x_4013_);
return v___x_4020_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg___boxed(lean_object* v_mvarId_4025_, lean_object* v_val_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_){
_start:
{
lean_object* v_res_4029_; 
v_res_4029_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4025_, v_val_4026_, v___y_4027_);
lean_dec(v___y_4027_);
return v_res_4029_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(size_t v_sz_4030_, size_t v_i_4031_, lean_object* v_bs_4032_){
_start:
{
uint8_t v___x_4033_; 
v___x_4033_ = lean_usize_dec_lt(v_i_4031_, v_sz_4030_);
if (v___x_4033_ == 0)
{
lean_object* v___x_4034_; 
v___x_4034_ = l_unsafeCast___redArg(v_bs_4032_);
lean_dec_ref(v_bs_4032_);
return v___x_4034_;
}
else
{
lean_object* v_v_4035_; lean_object* v___x_4036_; lean_object* v_bs_x27_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; size_t v___x_4040_; size_t v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; 
v_v_4035_ = lean_array_uget(v_bs_4032_, v_i_4031_);
v___x_4036_ = lean_unsigned_to_nat(0u);
v_bs_x27_4037_ = lean_array_uset(v_bs_4032_, v_i_4031_, v___x_4036_);
v___x_4038_ = l_unsafeCast___redArg(v_v_4035_);
lean_dec(v_v_4035_);
v___x_4039_ = l_Lean_Expr_fvar___override(v___x_4038_);
v___x_4040_ = ((size_t)1ULL);
v___x_4041_ = lean_usize_add(v_i_4031_, v___x_4040_);
v___x_4042_ = l_unsafeCast___redArg(v___x_4039_);
lean_dec_ref(v___x_4039_);
v___x_4043_ = lean_array_uset(v_bs_x27_4037_, v_i_4031_, v___x_4042_);
v_i_4031_ = v___x_4041_;
v_bs_4032_ = v___x_4043_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0___boxed(lean_object* v_sz_4045_, lean_object* v_i_4046_, lean_object* v_bs_4047_){
_start:
{
size_t v_sz_boxed_4048_; size_t v_i_boxed_4049_; lean_object* v_res_4050_; 
v_sz_boxed_4048_ = lean_unbox_usize(v_sz_4045_);
lean_dec(v_sz_4045_);
v_i_boxed_4049_ = lean_unbox_usize(v_i_4046_);
lean_dec(v_i_4046_);
v_res_4050_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_boxed_4048_, v_i_boxed_4049_, v_bs_4047_);
return v_res_4050_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0(lean_object* v___x_4051_, lean_object* v_mvarId_4052_, lean_object* v_a_4053_, lean_object* v___x_4054_, lean_object* v_fvarIds_4055_, lean_object* v_es_4056_, lean_object* v_givenNames_x27_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_){
_start:
{
lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4116_; uint8_t v___x_4117_; 
v___x_4063_ = lean_unsigned_to_nat(0u);
v___x_4064_ = lean_array_get_borrowed(v___x_4051_, v_es_4056_, v___x_4063_);
v___x_4116_ = lean_array_get_size(v_fvarIds_4055_);
v___x_4117_ = lean_nat_dec_eq(v___x_4116_, v___x_4063_);
if (v___x_4117_ == 0)
{
lean_dec(v___x_4054_);
goto v___jp_4065_;
}
else
{
uint8_t v___x_4118_; 
v___x_4118_ = lean_expr_eqv(v_a_4053_, v___x_4064_);
if (v___x_4118_ == 0)
{
lean_dec(v___x_4054_);
goto v___jp_4065_;
}
else
{
lean_object* v___x_4119_; 
lean_inc(v_mvarId_4052_);
v___x_4119_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4054_, v_mvarId_4052_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_);
if (lean_obj_tag(v___x_4119_) == 0)
{
lean_dec_ref_known(v___x_4119_, 1);
goto v___jp_4065_;
}
else
{
lean_object* v_a_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4127_; 
lean_dec(v_givenNames_x27_4057_);
lean_dec_ref(v_fvarIds_4055_);
lean_dec(v_mvarId_4052_);
v_a_4120_ = lean_ctor_get(v___x_4119_, 0);
v_isSharedCheck_4127_ = !lean_is_exclusive(v___x_4119_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4122_ = v___x_4119_;
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_a_4120_);
lean_dec(v___x_4119_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_a_4120_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
return v___x_4125_;
}
}
}
}
}
v___jp_4065_:
{
lean_object* v___x_4066_; 
lean_inc(v_mvarId_4052_);
v___x_4066_ = l_Lean_MVarId_getTag(v_mvarId_4052_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_);
if (lean_obj_tag(v___x_4066_) == 0)
{
lean_object* v_a_4067_; lean_object* v___x_4068_; 
v_a_4067_ = lean_ctor_get(v___x_4066_, 0);
lean_inc(v_a_4067_);
lean_dec_ref_known(v___x_4066_, 1);
lean_inc(v___x_4064_);
v___x_4068_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_4064_, v_a_4067_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_);
if (lean_obj_tag(v___x_4068_) == 0)
{
lean_object* v_a_4069_; size_t v_sz_4070_; size_t v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; uint8_t v___x_4075_; uint8_t v___x_4076_; uint8_t v___x_4077_; lean_object* v___x_4078_; 
v_a_4069_ = lean_ctor_get(v___x_4068_, 0);
lean_inc_n(v_a_4069_, 2);
lean_dec_ref_known(v___x_4068_, 1);
v_sz_4070_ = lean_array_size(v_fvarIds_4055_);
v___x_4071_ = ((size_t)0ULL);
v___x_4072_ = l_unsafeCast___redArg(v_fvarIds_4055_);
v___x_4073_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_4070_, v___x_4071_, v___x_4072_);
v___x_4074_ = l_unsafeCast___redArg(v___x_4073_);
lean_dec_ref(v___x_4073_);
v___x_4075_ = 0;
v___x_4076_ = 1;
v___x_4077_ = 1;
v___x_4078_ = l_Lean_Meta_mkLetFVars(v___x_4074_, v_a_4069_, v___x_4075_, v___x_4076_, v___x_4077_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_);
if (lean_obj_tag(v___x_4078_) == 0)
{
lean_object* v_a_4079_; lean_object* v___x_4080_; lean_object* v___x_4082_; uint8_t v_isShared_4083_; uint8_t v_isSharedCheck_4090_; 
v_a_4079_ = lean_ctor_get(v___x_4078_, 0);
lean_inc(v_a_4079_);
lean_dec_ref_known(v___x_4078_, 1);
v___x_4080_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4052_, v_a_4079_, v___y_4059_);
v_isSharedCheck_4090_ = !lean_is_exclusive(v___x_4080_);
if (v_isSharedCheck_4090_ == 0)
{
lean_object* v_unused_4091_; 
v_unused_4091_ = lean_ctor_get(v___x_4080_, 0);
lean_dec(v_unused_4091_);
v___x_4082_ = v___x_4080_;
v_isShared_4083_ = v_isSharedCheck_4090_;
goto v_resetjp_4081_;
}
else
{
lean_dec(v___x_4080_);
v___x_4082_ = lean_box(0);
v_isShared_4083_ = v_isSharedCheck_4090_;
goto v_resetjp_4081_;
}
v_resetjp_4081_:
{
lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4088_; 
v___x_4084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4084_, 0, v_fvarIds_4055_);
lean_ctor_set(v___x_4084_, 1, v_givenNames_x27_4057_);
v___x_4085_ = l_Lean_Expr_mvarId_x21(v_a_4069_);
lean_dec(v_a_4069_);
v___x_4086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4086_, 0, v___x_4084_);
lean_ctor_set(v___x_4086_, 1, v___x_4085_);
if (v_isShared_4083_ == 0)
{
lean_ctor_set(v___x_4082_, 0, v___x_4086_);
v___x_4088_ = v___x_4082_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4089_; 
v_reuseFailAlloc_4089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4089_, 0, v___x_4086_);
v___x_4088_ = v_reuseFailAlloc_4089_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
return v___x_4088_;
}
}
}
else
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4099_; 
lean_dec(v_a_4069_);
lean_dec(v_givenNames_x27_4057_);
lean_dec_ref(v_fvarIds_4055_);
lean_dec(v_mvarId_4052_);
v_a_4092_ = lean_ctor_get(v___x_4078_, 0);
v_isSharedCheck_4099_ = !lean_is_exclusive(v___x_4078_);
if (v_isSharedCheck_4099_ == 0)
{
v___x_4094_ = v___x_4078_;
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v___x_4078_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4097_; 
if (v_isShared_4095_ == 0)
{
v___x_4097_ = v___x_4094_;
goto v_reusejp_4096_;
}
else
{
lean_object* v_reuseFailAlloc_4098_; 
v_reuseFailAlloc_4098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4098_, 0, v_a_4092_);
v___x_4097_ = v_reuseFailAlloc_4098_;
goto v_reusejp_4096_;
}
v_reusejp_4096_:
{
return v___x_4097_;
}
}
}
}
else
{
lean_object* v_a_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4107_; 
lean_dec(v_givenNames_x27_4057_);
lean_dec_ref(v_fvarIds_4055_);
lean_dec(v_mvarId_4052_);
v_a_4100_ = lean_ctor_get(v___x_4068_, 0);
v_isSharedCheck_4107_ = !lean_is_exclusive(v___x_4068_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4102_ = v___x_4068_;
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_a_4100_);
lean_dec(v___x_4068_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4105_; 
if (v_isShared_4103_ == 0)
{
v___x_4105_ = v___x_4102_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_a_4100_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
return v___x_4105_;
}
}
}
}
else
{
lean_object* v_a_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4115_; 
lean_dec(v_givenNames_x27_4057_);
lean_dec_ref(v_fvarIds_4055_);
lean_dec(v_mvarId_4052_);
v_a_4108_ = lean_ctor_get(v___x_4066_, 0);
v_isSharedCheck_4115_ = !lean_is_exclusive(v___x_4066_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4110_ = v___x_4066_;
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_a_4108_);
lean_dec(v___x_4066_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4113_; 
if (v_isShared_4111_ == 0)
{
v___x_4113_ = v___x_4110_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v_a_4108_);
v___x_4113_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
return v___x_4113_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0___boxed(lean_object* v___x_4128_, lean_object* v_mvarId_4129_, lean_object* v_a_4130_, lean_object* v___x_4131_, lean_object* v_fvarIds_4132_, lean_object* v_es_4133_, lean_object* v_givenNames_x27_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_){
_start:
{
lean_object* v_res_4140_; 
v_res_4140_ = l_Lean_MVarId_extractLets___lam__0(v___x_4128_, v_mvarId_4129_, v_a_4130_, v___x_4131_, v_fvarIds_4132_, v_es_4133_, v_givenNames_x27_4134_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_);
lean_dec(v___y_4138_);
lean_dec_ref(v___y_4137_);
lean_dec(v___y_4136_);
lean_dec_ref(v___y_4135_);
lean_dec_ref(v_es_4133_);
lean_dec_ref(v_a_4130_);
lean_dec_ref(v___x_4128_);
return v_res_4140_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1(lean_object* v_mvarId_4141_, lean_object* v___x_4142_, lean_object* v___x_4143_, lean_object* v_givenNames_4144_, lean_object* v_config_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_){
_start:
{
lean_object* v___x_4151_; 
lean_inc(v___x_4142_);
lean_inc(v_mvarId_4141_);
v___x_4151_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4141_, v___x_4142_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_);
if (lean_obj_tag(v___x_4151_) == 0)
{
lean_object* v___x_4152_; 
lean_dec_ref_known(v___x_4151_, 1);
lean_inc(v_mvarId_4141_);
v___x_4152_ = l_Lean_MVarId_getType(v_mvarId_4141_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_);
if (lean_obj_tag(v___x_4152_) == 0)
{
lean_object* v_a_4153_; lean_object* v___f_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; 
v_a_4153_ = lean_ctor_get(v___x_4152_, 0);
lean_inc_n(v_a_4153_, 2);
lean_dec_ref_known(v___x_4152_, 1);
v___f_4154_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__0___boxed), 12, 4);
lean_closure_set(v___f_4154_, 0, v___x_4143_);
lean_closure_set(v___f_4154_, 1, v_mvarId_4141_);
lean_closure_set(v___f_4154_, 2, v_a_4153_);
lean_closure_set(v___f_4154_, 3, v___x_4142_);
v___x_4155_ = lean_unsigned_to_nat(1u);
v___x_4156_ = lean_mk_empty_array_with_capacity(v___x_4155_);
v___x_4157_ = lean_array_push(v___x_4156_, v_a_4153_);
v___x_4158_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4157_, v_givenNames_4144_, v___f_4154_, v_config_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_);
lean_dec_ref(v___x_4157_);
return v___x_4158_;
}
else
{
lean_object* v_a_4159_; lean_object* v___x_4161_; uint8_t v_isShared_4162_; uint8_t v_isSharedCheck_4166_; 
lean_dec(v_givenNames_4144_);
lean_dec_ref(v___x_4143_);
lean_dec(v___x_4142_);
lean_dec(v_mvarId_4141_);
v_a_4159_ = lean_ctor_get(v___x_4152_, 0);
v_isSharedCheck_4166_ = !lean_is_exclusive(v___x_4152_);
if (v_isSharedCheck_4166_ == 0)
{
v___x_4161_ = v___x_4152_;
v_isShared_4162_ = v_isSharedCheck_4166_;
goto v_resetjp_4160_;
}
else
{
lean_inc(v_a_4159_);
lean_dec(v___x_4152_);
v___x_4161_ = lean_box(0);
v_isShared_4162_ = v_isSharedCheck_4166_;
goto v_resetjp_4160_;
}
v_resetjp_4160_:
{
lean_object* v___x_4164_; 
if (v_isShared_4162_ == 0)
{
v___x_4164_ = v___x_4161_;
goto v_reusejp_4163_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v_a_4159_);
v___x_4164_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4163_;
}
v_reusejp_4163_:
{
return v___x_4164_;
}
}
}
}
else
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4174_; 
lean_dec(v_givenNames_4144_);
lean_dec_ref(v___x_4143_);
lean_dec(v___x_4142_);
lean_dec(v_mvarId_4141_);
v_a_4167_ = lean_ctor_get(v___x_4151_, 0);
v_isSharedCheck_4174_ = !lean_is_exclusive(v___x_4151_);
if (v_isSharedCheck_4174_ == 0)
{
v___x_4169_ = v___x_4151_;
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v___x_4151_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4172_; 
if (v_isShared_4170_ == 0)
{
v___x_4172_ = v___x_4169_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4173_, 0, v_a_4167_);
v___x_4172_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
return v___x_4172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1___boxed(lean_object* v_mvarId_4175_, lean_object* v___x_4176_, lean_object* v___x_4177_, lean_object* v_givenNames_4178_, lean_object* v_config_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_){
_start:
{
lean_object* v_res_4185_; 
v_res_4185_ = l_Lean_MVarId_extractLets___lam__1(v_mvarId_4175_, v___x_4176_, v___x_4177_, v_givenNames_4178_, v_config_4179_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_);
lean_dec(v___y_4183_);
lean_dec_ref(v___y_4182_);
lean_dec(v___y_4181_);
lean_dec_ref(v___y_4180_);
lean_dec_ref(v_config_4179_);
return v_res_4185_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets(lean_object* v_mvarId_4189_, lean_object* v_givenNames_4190_, lean_object* v_config_4191_, lean_object* v_a_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_){
_start:
{
lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___f_4199_; lean_object* v___x_4200_; 
v___x_4197_ = l_Lean_instInhabitedExpr;
v___x_4198_ = ((lean_object*)(l_Lean_MVarId_extractLets___closed__1));
lean_inc(v_mvarId_4189_);
v___f_4199_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__1___boxed), 10, 5);
lean_closure_set(v___f_4199_, 0, v_mvarId_4189_);
lean_closure_set(v___f_4199_, 1, v___x_4198_);
lean_closure_set(v___f_4199_, 2, v___x_4197_);
lean_closure_set(v___f_4199_, 3, v_givenNames_4190_);
lean_closure_set(v___f_4199_, 4, v_config_4191_);
v___x_4200_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4189_, v___f_4199_, v_a_4192_, v_a_4193_, v_a_4194_, v_a_4195_);
return v___x_4200_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___boxed(lean_object* v_mvarId_4201_, lean_object* v_givenNames_4202_, lean_object* v_config_4203_, lean_object* v_a_4204_, lean_object* v_a_4205_, lean_object* v_a_4206_, lean_object* v_a_4207_, lean_object* v_a_4208_){
_start:
{
lean_object* v_res_4209_; 
v_res_4209_ = l_Lean_MVarId_extractLets(v_mvarId_4201_, v_givenNames_4202_, v_config_4203_, v_a_4204_, v_a_4205_, v_a_4206_, v_a_4207_);
lean_dec(v_a_4207_);
lean_dec_ref(v_a_4206_);
lean_dec(v_a_4205_);
lean_dec_ref(v_a_4204_);
return v_res_4209_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(lean_object* v_mvarId_4210_, lean_object* v_val_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_){
_start:
{
lean_object* v___x_4217_; 
v___x_4217_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4210_, v_val_4211_, v___y_4213_);
return v___x_4217_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___boxed(lean_object* v_mvarId_4218_, lean_object* v_val_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_){
_start:
{
lean_object* v_res_4225_; 
v_res_4225_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(v_mvarId_4218_, v_val_4219_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_);
lean_dec(v___y_4223_);
lean_dec_ref(v___y_4222_);
lean_dec(v___y_4221_);
lean_dec_ref(v___y_4220_);
return v_res_4225_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1(lean_object* v_00_u03b2_4226_, lean_object* v_x_4227_, lean_object* v_x_4228_, lean_object* v_x_4229_){
_start:
{
lean_object* v___x_4230_; 
v___x_4230_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_x_4227_, v_x_4228_, v_x_4229_);
return v___x_4230_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_4231_, lean_object* v_x_4232_, size_t v_x_4233_, size_t v_x_4234_, lean_object* v_x_4235_, lean_object* v_x_4236_){
_start:
{
lean_object* v___x_4237_; 
v___x_4237_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_4232_, v_x_4233_, v_x_4234_, v_x_4235_, v_x_4236_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_4238_, lean_object* v_x_4239_, lean_object* v_x_4240_, lean_object* v_x_4241_, lean_object* v_x_4242_, lean_object* v_x_4243_){
_start:
{
size_t v_x_2837__boxed_4244_; size_t v_x_2838__boxed_4245_; lean_object* v_res_4246_; 
v_x_2837__boxed_4244_ = lean_unbox_usize(v_x_4240_);
lean_dec(v_x_4240_);
v_x_2838__boxed_4245_ = lean_unbox_usize(v_x_4241_);
lean_dec(v_x_4241_);
v_res_4246_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(v_00_u03b2_4238_, v_x_4239_, v_x_2837__boxed_4244_, v_x_2838__boxed_4245_, v_x_4242_, v_x_4243_);
return v_res_4246_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_4247_, lean_object* v_n_4248_, lean_object* v_k_4249_, lean_object* v_v_4250_){
_start:
{
lean_object* v___x_4251_; 
v___x_4251_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v_n_4248_, v_k_4249_, v_v_4250_);
return v___x_4251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(lean_object* v_00_u03b2_4252_, size_t v_depth_4253_, lean_object* v_keys_4254_, lean_object* v_vals_4255_, lean_object* v_heq_4256_, lean_object* v_i_4257_, lean_object* v_entries_4258_){
_start:
{
lean_object* v___x_4259_; 
v___x_4259_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_4253_, v_keys_4254_, v_vals_4255_, v_i_4257_, v_entries_4258_);
return v___x_4259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b2_4260_, lean_object* v_depth_4261_, lean_object* v_keys_4262_, lean_object* v_vals_4263_, lean_object* v_heq_4264_, lean_object* v_i_4265_, lean_object* v_entries_4266_){
_start:
{
size_t v_depth_boxed_4267_; lean_object* v_res_4268_; 
v_depth_boxed_4267_ = lean_unbox_usize(v_depth_4261_);
lean_dec(v_depth_4261_);
v_res_4268_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(v_00_u03b2_4260_, v_depth_boxed_4267_, v_keys_4262_, v_vals_4263_, v_heq_4264_, v_i_4265_, v_entries_4266_);
lean_dec_ref(v_vals_4263_);
lean_dec_ref(v_keys_4262_);
return v_res_4268_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_4269_, lean_object* v_x_4270_, lean_object* v_x_4271_, lean_object* v_x_4272_, lean_object* v_x_4273_){
_start:
{
lean_object* v___x_4274_; 
v___x_4274_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_x_4270_, v_x_4271_, v_x_4272_, v_x_4273_);
return v___x_4274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(size_t v_sz_4275_, size_t v_i_4276_, lean_object* v_bs_4277_){
_start:
{
uint8_t v___x_4278_; 
v___x_4278_ = lean_usize_dec_lt(v_i_4276_, v_sz_4275_);
if (v___x_4278_ == 0)
{
lean_object* v___x_4279_; 
v___x_4279_ = l_unsafeCast___redArg(v_bs_4277_);
lean_dec_ref(v_bs_4277_);
return v___x_4279_;
}
else
{
lean_object* v_v_4280_; lean_object* v___x_4281_; lean_object* v_bs_x27_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; size_t v___x_4285_; size_t v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; 
v_v_4280_ = lean_array_uget(v_bs_4277_, v_i_4276_);
v___x_4281_ = lean_unsigned_to_nat(0u);
v_bs_x27_4282_ = lean_array_uset(v_bs_4277_, v_i_4276_, v___x_4281_);
v___x_4283_ = l_unsafeCast___redArg(v_v_4280_);
lean_dec(v_v_4280_);
v___x_4284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4284_, 0, v___x_4283_);
v___x_4285_ = ((size_t)1ULL);
v___x_4286_ = lean_usize_add(v_i_4276_, v___x_4285_);
v___x_4287_ = l_unsafeCast___redArg(v___x_4284_);
lean_dec_ref_known(v___x_4284_, 1);
v___x_4288_ = lean_array_uset(v_bs_x27_4282_, v_i_4276_, v___x_4287_);
v_i_4276_ = v___x_4286_;
v_bs_4277_ = v___x_4288_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0___boxed(lean_object* v_sz_4290_, lean_object* v_i_4291_, lean_object* v_bs_4292_){
_start:
{
size_t v_sz_boxed_4293_; size_t v_i_boxed_4294_; lean_object* v_res_4295_; 
v_sz_boxed_4293_ = lean_unbox_usize(v_sz_4290_);
lean_dec(v_sz_4290_);
v_i_boxed_4294_ = lean_unbox_usize(v_i_4291_);
lean_dec(v_i_4291_);
v_res_4295_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_boxed_4293_, v_i_boxed_4294_, v_bs_4292_);
return v_res_4295_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0(lean_object* v_mvarId_4296_, lean_object* v_fvars_4297_, lean_object* v_fvarIds_4298_, lean_object* v_givenNames_x27_4299_, lean_object* v_targetNew_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_){
_start:
{
lean_object* v___x_4306_; 
lean_inc(v_mvarId_4296_);
v___x_4306_ = l_Lean_MVarId_getTag(v_mvarId_4296_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_);
if (lean_obj_tag(v___x_4306_) == 0)
{
lean_object* v_a_4307_; lean_object* v___x_4308_; 
v_a_4307_ = lean_ctor_get(v___x_4306_, 0);
lean_inc(v_a_4307_);
lean_dec_ref_known(v___x_4306_, 1);
v___x_4308_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_targetNew_4300_, v_a_4307_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_);
if (lean_obj_tag(v___x_4308_) == 0)
{
lean_object* v_a_4309_; size_t v_sz_4310_; size_t v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; uint8_t v___x_4315_; uint8_t v___x_4316_; uint8_t v___x_4317_; lean_object* v___x_4318_; 
v_a_4309_ = lean_ctor_get(v___x_4308_, 0);
lean_inc_n(v_a_4309_, 2);
lean_dec_ref_known(v___x_4308_, 1);
v_sz_4310_ = lean_array_size(v_fvarIds_4298_);
v___x_4311_ = ((size_t)0ULL);
v___x_4312_ = l_unsafeCast___redArg(v_fvarIds_4298_);
v___x_4313_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_4310_, v___x_4311_, v___x_4312_);
v___x_4314_ = l_unsafeCast___redArg(v___x_4313_);
lean_dec_ref(v___x_4313_);
v___x_4315_ = 0;
v___x_4316_ = 1;
v___x_4317_ = 1;
v___x_4318_ = l_Lean_Meta_mkLetFVars(v___x_4314_, v_a_4309_, v___x_4315_, v___x_4316_, v___x_4317_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_);
if (lean_obj_tag(v___x_4318_) == 0)
{
lean_object* v_a_4319_; lean_object* v___x_4320_; lean_object* v___x_4322_; uint8_t v_isShared_4323_; uint8_t v_isSharedCheck_4335_; 
v_a_4319_ = lean_ctor_get(v___x_4318_, 0);
lean_inc(v_a_4319_);
lean_dec_ref_known(v___x_4318_, 1);
v___x_4320_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4296_, v_a_4319_, v___y_4302_);
v_isSharedCheck_4335_ = !lean_is_exclusive(v___x_4320_);
if (v_isSharedCheck_4335_ == 0)
{
lean_object* v_unused_4336_; 
v_unused_4336_ = lean_ctor_get(v___x_4320_, 0);
lean_dec(v_unused_4336_);
v___x_4322_ = v___x_4320_;
v_isShared_4323_ = v_isSharedCheck_4335_;
goto v_resetjp_4321_;
}
else
{
lean_dec(v___x_4320_);
v___x_4322_ = lean_box(0);
v_isShared_4323_ = v_isSharedCheck_4335_;
goto v_resetjp_4321_;
}
v_resetjp_4321_:
{
lean_object* v___x_4324_; size_t v_sz_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4333_; 
v___x_4324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4324_, 0, v_fvarIds_4298_);
lean_ctor_set(v___x_4324_, 1, v_givenNames_x27_4299_);
v_sz_4325_ = lean_array_size(v_fvars_4297_);
v___x_4326_ = l_unsafeCast___redArg(v_fvars_4297_);
v___x_4327_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4325_, v___x_4311_, v___x_4326_);
v___x_4328_ = l_unsafeCast___redArg(v___x_4327_);
lean_dec_ref(v___x_4327_);
v___x_4329_ = l_Lean_Expr_mvarId_x21(v_a_4309_);
lean_dec(v_a_4309_);
v___x_4330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4330_, 0, v___x_4328_);
lean_ctor_set(v___x_4330_, 1, v___x_4329_);
v___x_4331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4331_, 0, v___x_4324_);
lean_ctor_set(v___x_4331_, 1, v___x_4330_);
if (v_isShared_4323_ == 0)
{
lean_ctor_set(v___x_4322_, 0, v___x_4331_);
v___x_4333_ = v___x_4322_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v___x_4331_);
v___x_4333_ = v_reuseFailAlloc_4334_;
goto v_reusejp_4332_;
}
v_reusejp_4332_:
{
return v___x_4333_;
}
}
}
else
{
lean_object* v_a_4337_; lean_object* v___x_4339_; uint8_t v_isShared_4340_; uint8_t v_isSharedCheck_4344_; 
lean_dec(v_a_4309_);
lean_dec(v_givenNames_x27_4299_);
lean_dec_ref(v_fvarIds_4298_);
lean_dec(v_mvarId_4296_);
v_a_4337_ = lean_ctor_get(v___x_4318_, 0);
v_isSharedCheck_4344_ = !lean_is_exclusive(v___x_4318_);
if (v_isSharedCheck_4344_ == 0)
{
v___x_4339_ = v___x_4318_;
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
else
{
lean_inc(v_a_4337_);
lean_dec(v___x_4318_);
v___x_4339_ = lean_box(0);
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
v_resetjp_4338_:
{
lean_object* v___x_4342_; 
if (v_isShared_4340_ == 0)
{
v___x_4342_ = v___x_4339_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v_a_4337_);
v___x_4342_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
return v___x_4342_;
}
}
}
}
else
{
lean_object* v_a_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4352_; 
lean_dec(v_givenNames_x27_4299_);
lean_dec_ref(v_fvarIds_4298_);
lean_dec(v_mvarId_4296_);
v_a_4345_ = lean_ctor_get(v___x_4308_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4308_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4347_ = v___x_4308_;
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_a_4345_);
lean_dec(v___x_4308_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v___x_4350_; 
if (v_isShared_4348_ == 0)
{
v___x_4350_ = v___x_4347_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v_a_4345_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
}
else
{
lean_object* v_a_4353_; lean_object* v___x_4355_; uint8_t v_isShared_4356_; uint8_t v_isSharedCheck_4360_; 
lean_dec_ref(v_targetNew_4300_);
lean_dec(v_givenNames_x27_4299_);
lean_dec_ref(v_fvarIds_4298_);
lean_dec(v_mvarId_4296_);
v_a_4353_ = lean_ctor_get(v___x_4306_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4306_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4355_ = v___x_4306_;
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
else
{
lean_inc(v_a_4353_);
lean_dec(v___x_4306_);
v___x_4355_ = lean_box(0);
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
v_resetjp_4354_:
{
lean_object* v___x_4358_; 
if (v_isShared_4356_ == 0)
{
v___x_4358_ = v___x_4355_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v_a_4353_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4361_, lean_object* v_fvars_4362_, lean_object* v_fvarIds_4363_, lean_object* v_givenNames_x27_4364_, lean_object* v_targetNew_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_){
_start:
{
lean_object* v_res_4371_; 
v_res_4371_ = l_Lean_MVarId_extractLetsLocalDecl___lam__0(v_mvarId_4361_, v_fvars_4362_, v_fvarIds_4363_, v_givenNames_x27_4364_, v_targetNew_4365_, v___y_4366_, v___y_4367_, v___y_4368_, v___y_4369_);
lean_dec(v___y_4369_);
lean_dec_ref(v___y_4368_);
lean_dec(v___y_4367_);
lean_dec_ref(v___y_4366_);
lean_dec_ref(v_fvars_4362_);
return v_res_4371_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1(lean_object* v___x_4372_, lean_object* v_binderName_4373_, lean_object* v_body_4374_, uint8_t v_binderInfo_4375_, lean_object* v___f_4376_, lean_object* v_binderType_4377_, lean_object* v___x_4378_, lean_object* v_mvarId_4379_, lean_object* v_fvarIds_4380_, lean_object* v_es_4381_, lean_object* v_givenNames_x27_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_){
_start:
{
lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4393_; uint8_t v___x_4394_; 
v___x_4388_ = lean_unsigned_to_nat(0u);
v___x_4389_ = lean_array_get_borrowed(v___x_4372_, v_es_4381_, v___x_4388_);
v___x_4393_ = lean_array_get_size(v_fvarIds_4380_);
v___x_4394_ = lean_nat_dec_eq(v___x_4393_, v___x_4388_);
if (v___x_4394_ == 0)
{
lean_dec(v_mvarId_4379_);
lean_dec(v___x_4378_);
goto v___jp_4390_;
}
else
{
uint8_t v___x_4395_; 
v___x_4395_ = lean_expr_eqv(v_binderType_4377_, v___x_4389_);
if (v___x_4395_ == 0)
{
lean_dec(v_mvarId_4379_);
lean_dec(v___x_4378_);
goto v___jp_4390_;
}
else
{
lean_object* v___x_4396_; 
v___x_4396_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4378_, v_mvarId_4379_, v___y_4383_, v___y_4384_, v___y_4385_, v___y_4386_);
if (lean_obj_tag(v___x_4396_) == 0)
{
lean_dec_ref_known(v___x_4396_, 1);
goto v___jp_4390_;
}
else
{
lean_object* v_a_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4404_; 
lean_dec(v_givenNames_x27_4382_);
lean_dec_ref(v_fvarIds_4380_);
lean_dec_ref(v___f_4376_);
lean_dec_ref(v_body_4374_);
lean_dec(v_binderName_4373_);
v_a_4397_ = lean_ctor_get(v___x_4396_, 0);
v_isSharedCheck_4404_ = !lean_is_exclusive(v___x_4396_);
if (v_isSharedCheck_4404_ == 0)
{
v___x_4399_ = v___x_4396_;
v_isShared_4400_ = v_isSharedCheck_4404_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_a_4397_);
lean_dec(v___x_4396_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4404_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
lean_object* v___x_4402_; 
if (v_isShared_4400_ == 0)
{
v___x_4402_ = v___x_4399_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v_a_4397_);
v___x_4402_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
return v___x_4402_;
}
}
}
}
}
v___jp_4390_:
{
lean_object* v___x_4391_; lean_object* v___x_4392_; 
lean_inc(v___x_4389_);
v___x_4391_ = l_Lean_Expr_forallE___override(v_binderName_4373_, v___x_4389_, v_body_4374_, v_binderInfo_4375_);
lean_inc(v___y_4386_);
lean_inc_ref(v___y_4385_);
lean_inc(v___y_4384_);
lean_inc_ref(v___y_4383_);
v___x_4392_ = lean_apply_8(v___f_4376_, v_fvarIds_4380_, v_givenNames_x27_4382_, v___x_4391_, v___y_4383_, v___y_4384_, v___y_4385_, v___y_4386_, lean_box(0));
return v___x_4392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed(lean_object* v___x_4405_, lean_object* v_binderName_4406_, lean_object* v_body_4407_, lean_object* v_binderInfo_4408_, lean_object* v___f_4409_, lean_object* v_binderType_4410_, lean_object* v___x_4411_, lean_object* v_mvarId_4412_, lean_object* v_fvarIds_4413_, lean_object* v_es_4414_, lean_object* v_givenNames_x27_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_){
_start:
{
uint8_t v_binderInfo_1867__boxed_4421_; lean_object* v_res_4422_; 
v_binderInfo_1867__boxed_4421_ = lean_unbox(v_binderInfo_4408_);
v_res_4422_ = l_Lean_MVarId_extractLetsLocalDecl___lam__1(v___x_4405_, v_binderName_4406_, v_body_4407_, v_binderInfo_1867__boxed_4421_, v___f_4409_, v_binderType_4410_, v___x_4411_, v_mvarId_4412_, v_fvarIds_4413_, v_es_4414_, v_givenNames_x27_4415_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_);
lean_dec(v___y_4419_);
lean_dec_ref(v___y_4418_);
lean_dec(v___y_4417_);
lean_dec_ref(v___y_4416_);
lean_dec_ref(v_es_4414_);
lean_dec_ref(v_binderType_4410_);
lean_dec_ref(v___x_4405_);
return v_res_4422_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2(lean_object* v___x_4423_, lean_object* v_declName_4424_, lean_object* v_body_4425_, uint8_t v_nondep_4426_, lean_object* v___f_4427_, lean_object* v_type_4428_, lean_object* v_value_4429_, lean_object* v___x_4430_, lean_object* v_mvarId_4431_, lean_object* v_fvarIds_4432_, lean_object* v_es_4433_, lean_object* v_givenNames_x27_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_){
_start:
{
lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4447_; uint8_t v___x_4448_; 
v___x_4440_ = lean_unsigned_to_nat(0u);
v___x_4441_ = lean_array_get_borrowed(v___x_4423_, v_es_4433_, v___x_4440_);
v___x_4442_ = lean_unsigned_to_nat(1u);
v___x_4443_ = lean_array_get_borrowed(v___x_4423_, v_es_4433_, v___x_4442_);
v___x_4447_ = lean_array_get_size(v_fvarIds_4432_);
v___x_4448_ = lean_nat_dec_eq(v___x_4447_, v___x_4440_);
if (v___x_4448_ == 0)
{
lean_dec(v_mvarId_4431_);
lean_dec(v___x_4430_);
goto v___jp_4444_;
}
else
{
uint8_t v___x_4449_; 
v___x_4449_ = lean_expr_eqv(v_type_4428_, v___x_4441_);
if (v___x_4449_ == 0)
{
lean_dec(v_mvarId_4431_);
lean_dec(v___x_4430_);
goto v___jp_4444_;
}
else
{
uint8_t v___x_4450_; 
v___x_4450_ = lean_expr_eqv(v_value_4429_, v___x_4443_);
if (v___x_4450_ == 0)
{
lean_dec(v_mvarId_4431_);
lean_dec(v___x_4430_);
goto v___jp_4444_;
}
else
{
lean_object* v___x_4451_; 
v___x_4451_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4430_, v_mvarId_4431_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_);
if (lean_obj_tag(v___x_4451_) == 0)
{
lean_dec_ref_known(v___x_4451_, 1);
goto v___jp_4444_;
}
else
{
lean_object* v_a_4452_; lean_object* v___x_4454_; uint8_t v_isShared_4455_; uint8_t v_isSharedCheck_4459_; 
lean_dec(v_givenNames_x27_4434_);
lean_dec_ref(v_fvarIds_4432_);
lean_dec_ref(v___f_4427_);
lean_dec_ref(v_body_4425_);
lean_dec(v_declName_4424_);
v_a_4452_ = lean_ctor_get(v___x_4451_, 0);
v_isSharedCheck_4459_ = !lean_is_exclusive(v___x_4451_);
if (v_isSharedCheck_4459_ == 0)
{
v___x_4454_ = v___x_4451_;
v_isShared_4455_ = v_isSharedCheck_4459_;
goto v_resetjp_4453_;
}
else
{
lean_inc(v_a_4452_);
lean_dec(v___x_4451_);
v___x_4454_ = lean_box(0);
v_isShared_4455_ = v_isSharedCheck_4459_;
goto v_resetjp_4453_;
}
v_resetjp_4453_:
{
lean_object* v___x_4457_; 
if (v_isShared_4455_ == 0)
{
v___x_4457_ = v___x_4454_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4458_; 
v_reuseFailAlloc_4458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4458_, 0, v_a_4452_);
v___x_4457_ = v_reuseFailAlloc_4458_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
return v___x_4457_;
}
}
}
}
}
}
v___jp_4444_:
{
lean_object* v___x_4445_; lean_object* v___x_4446_; 
lean_inc(v___x_4443_);
lean_inc(v___x_4441_);
v___x_4445_ = l_Lean_Expr_letE___override(v_declName_4424_, v___x_4441_, v___x_4443_, v_body_4425_, v_nondep_4426_);
lean_inc(v___y_4438_);
lean_inc_ref(v___y_4437_);
lean_inc(v___y_4436_);
lean_inc_ref(v___y_4435_);
v___x_4446_ = lean_apply_8(v___f_4427_, v_fvarIds_4432_, v_givenNames_x27_4434_, v___x_4445_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, lean_box(0));
return v___x_4446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed(lean_object** _args){
lean_object* v___x_4460_ = _args[0];
lean_object* v_declName_4461_ = _args[1];
lean_object* v_body_4462_ = _args[2];
lean_object* v_nondep_4463_ = _args[3];
lean_object* v___f_4464_ = _args[4];
lean_object* v_type_4465_ = _args[5];
lean_object* v_value_4466_ = _args[6];
lean_object* v___x_4467_ = _args[7];
lean_object* v_mvarId_4468_ = _args[8];
lean_object* v_fvarIds_4469_ = _args[9];
lean_object* v_es_4470_ = _args[10];
lean_object* v_givenNames_x27_4471_ = _args[11];
lean_object* v___y_4472_ = _args[12];
lean_object* v___y_4473_ = _args[13];
lean_object* v___y_4474_ = _args[14];
lean_object* v___y_4475_ = _args[15];
lean_object* v___y_4476_ = _args[16];
_start:
{
uint8_t v_nondep_1938__boxed_4477_; lean_object* v_res_4478_; 
v_nondep_1938__boxed_4477_ = lean_unbox(v_nondep_4463_);
v_res_4478_ = l_Lean_MVarId_extractLetsLocalDecl___lam__2(v___x_4460_, v_declName_4461_, v_body_4462_, v_nondep_1938__boxed_4477_, v___f_4464_, v_type_4465_, v_value_4466_, v___x_4467_, v_mvarId_4468_, v_fvarIds_4469_, v_es_4470_, v_givenNames_x27_4471_, v___y_4472_, v___y_4473_, v___y_4474_, v___y_4475_);
lean_dec(v___y_4475_);
lean_dec_ref(v___y_4474_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
lean_dec_ref(v_es_4470_);
lean_dec_ref(v_value_4466_);
lean_dec_ref(v_type_4465_);
lean_dec_ref(v___x_4460_);
return v_res_4478_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2(void){
_start:
{
lean_object* v___x_4482_; lean_object* v___x_4483_; 
v___x_4482_ = ((lean_object*)(l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1));
v___x_4483_ = l_Lean_MessageData_ofFormat(v___x_4482_);
return v___x_4483_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3(void){
_start:
{
lean_object* v___x_4484_; lean_object* v___x_4485_; 
v___x_4484_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2);
v___x_4485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4485_, 0, v___x_4484_);
return v___x_4485_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3(lean_object* v_mvarId_4486_, lean_object* v___x_4487_, lean_object* v___f_4488_, lean_object* v___x_4489_, lean_object* v_givenNames_4490_, lean_object* v_config_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_){
_start:
{
lean_object* v___x_4497_; 
lean_inc(v_mvarId_4486_);
v___x_4497_ = l_Lean_MVarId_getType(v_mvarId_4486_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
if (lean_obj_tag(v___x_4497_) == 0)
{
lean_object* v_a_4498_; 
v_a_4498_ = lean_ctor_get(v___x_4497_, 0);
lean_inc(v_a_4498_);
lean_dec_ref_known(v___x_4497_, 1);
switch(lean_obj_tag(v_a_4498_))
{
case 7:
{
lean_object* v_binderName_4499_; lean_object* v_binderType_4500_; lean_object* v_body_4501_; uint8_t v_binderInfo_4502_; lean_object* v___x_4503_; lean_object* v___f_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; 
v_binderName_4499_ = lean_ctor_get(v_a_4498_, 0);
lean_inc(v_binderName_4499_);
v_binderType_4500_ = lean_ctor_get(v_a_4498_, 1);
lean_inc_ref_n(v_binderType_4500_, 2);
v_body_4501_ = lean_ctor_get(v_a_4498_, 2);
lean_inc_ref(v_body_4501_);
v_binderInfo_4502_ = lean_ctor_get_uint8(v_a_4498_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4498_, 3);
v___x_4503_ = lean_box(v_binderInfo_4502_);
v___f_4504_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed), 16, 8);
lean_closure_set(v___f_4504_, 0, v___x_4487_);
lean_closure_set(v___f_4504_, 1, v_binderName_4499_);
lean_closure_set(v___f_4504_, 2, v_body_4501_);
lean_closure_set(v___f_4504_, 3, v___x_4503_);
lean_closure_set(v___f_4504_, 4, v___f_4488_);
lean_closure_set(v___f_4504_, 5, v_binderType_4500_);
lean_closure_set(v___f_4504_, 6, v___x_4489_);
lean_closure_set(v___f_4504_, 7, v_mvarId_4486_);
v___x_4505_ = lean_unsigned_to_nat(1u);
v___x_4506_ = lean_mk_empty_array_with_capacity(v___x_4505_);
v___x_4507_ = lean_array_push(v___x_4506_, v_binderType_4500_);
v___x_4508_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4507_, v_givenNames_4490_, v___f_4504_, v_config_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
lean_dec_ref(v___x_4507_);
return v___x_4508_;
}
case 8:
{
lean_object* v_declName_4509_; lean_object* v_type_4510_; lean_object* v_value_4511_; lean_object* v_body_4512_; uint8_t v_nondep_4513_; lean_object* v___x_4514_; lean_object* v___f_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; 
v_declName_4509_ = lean_ctor_get(v_a_4498_, 0);
lean_inc(v_declName_4509_);
v_type_4510_ = lean_ctor_get(v_a_4498_, 1);
lean_inc_ref_n(v_type_4510_, 2);
v_value_4511_ = lean_ctor_get(v_a_4498_, 2);
lean_inc_ref_n(v_value_4511_, 2);
v_body_4512_ = lean_ctor_get(v_a_4498_, 3);
lean_inc_ref(v_body_4512_);
v_nondep_4513_ = lean_ctor_get_uint8(v_a_4498_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_a_4498_, 4);
v___x_4514_ = lean_box(v_nondep_4513_);
v___f_4515_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed), 17, 9);
lean_closure_set(v___f_4515_, 0, v___x_4487_);
lean_closure_set(v___f_4515_, 1, v_declName_4509_);
lean_closure_set(v___f_4515_, 2, v_body_4512_);
lean_closure_set(v___f_4515_, 3, v___x_4514_);
lean_closure_set(v___f_4515_, 4, v___f_4488_);
lean_closure_set(v___f_4515_, 5, v_type_4510_);
lean_closure_set(v___f_4515_, 6, v_value_4511_);
lean_closure_set(v___f_4515_, 7, v___x_4489_);
lean_closure_set(v___f_4515_, 8, v_mvarId_4486_);
v___x_4516_ = lean_unsigned_to_nat(2u);
v___x_4517_ = lean_mk_empty_array_with_capacity(v___x_4516_);
v___x_4518_ = lean_array_push(v___x_4517_, v_type_4510_);
v___x_4519_ = lean_array_push(v___x_4518_, v_value_4511_);
v___x_4520_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4519_, v_givenNames_4490_, v___f_4515_, v_config_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
lean_dec_ref(v___x_4519_);
return v___x_4520_;
}
default: 
{
lean_object* v___x_4521_; lean_object* v___x_4522_; 
lean_dec(v_a_4498_);
lean_dec(v_givenNames_4490_);
lean_dec_ref(v___f_4488_);
lean_dec_ref(v___x_4487_);
v___x_4521_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4522_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4489_, v_mvarId_4486_, v___x_4521_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
return v___x_4522_;
}
}
}
else
{
lean_object* v_a_4523_; lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4530_; 
lean_dec(v_givenNames_4490_);
lean_dec(v___x_4489_);
lean_dec_ref(v___f_4488_);
lean_dec_ref(v___x_4487_);
lean_dec(v_mvarId_4486_);
v_a_4523_ = lean_ctor_get(v___x_4497_, 0);
v_isSharedCheck_4530_ = !lean_is_exclusive(v___x_4497_);
if (v_isSharedCheck_4530_ == 0)
{
v___x_4525_ = v___x_4497_;
v_isShared_4526_ = v_isSharedCheck_4530_;
goto v_resetjp_4524_;
}
else
{
lean_inc(v_a_4523_);
lean_dec(v___x_4497_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4530_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
lean_object* v___x_4528_; 
if (v_isShared_4526_ == 0)
{
v___x_4528_ = v___x_4525_;
goto v_reusejp_4527_;
}
else
{
lean_object* v_reuseFailAlloc_4529_; 
v_reuseFailAlloc_4529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4529_, 0, v_a_4523_);
v___x_4528_ = v_reuseFailAlloc_4529_;
goto v_reusejp_4527_;
}
v_reusejp_4527_:
{
return v___x_4528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed(lean_object* v_mvarId_4531_, lean_object* v___x_4532_, lean_object* v___f_4533_, lean_object* v___x_4534_, lean_object* v_givenNames_4535_, lean_object* v_config_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_){
_start:
{
lean_object* v_res_4542_; 
v_res_4542_ = l_Lean_MVarId_extractLetsLocalDecl___lam__3(v_mvarId_4531_, v___x_4532_, v___f_4533_, v___x_4534_, v_givenNames_4535_, v_config_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_);
lean_dec(v___y_4540_);
lean_dec_ref(v___y_4539_);
lean_dec(v___y_4538_);
lean_dec_ref(v___y_4537_);
lean_dec_ref(v_config_4536_);
return v_res_4542_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4(lean_object* v___x_4543_, lean_object* v___x_4544_, lean_object* v_givenNames_4545_, lean_object* v_config_4546_, lean_object* v_mvarId_4547_, lean_object* v_fvars_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_){
_start:
{
lean_object* v___f_4554_; lean_object* v___f_4555_; lean_object* v___x_4556_; 
lean_inc_n(v_mvarId_4547_, 2);
v___f_4554_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed), 10, 2);
lean_closure_set(v___f_4554_, 0, v_mvarId_4547_);
lean_closure_set(v___f_4554_, 1, v_fvars_4548_);
v___f_4555_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed), 11, 6);
lean_closure_set(v___f_4555_, 0, v_mvarId_4547_);
lean_closure_set(v___f_4555_, 1, v___x_4543_);
lean_closure_set(v___f_4555_, 2, v___f_4554_);
lean_closure_set(v___f_4555_, 3, v___x_4544_);
lean_closure_set(v___f_4555_, 4, v_givenNames_4545_);
lean_closure_set(v___f_4555_, 5, v_config_4546_);
v___x_4556_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4547_, v___f_4555_, v___y_4549_, v___y_4550_, v___y_4551_, v___y_4552_);
return v___x_4556_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed(lean_object* v___x_4557_, lean_object* v___x_4558_, lean_object* v_givenNames_4559_, lean_object* v_config_4560_, lean_object* v_mvarId_4561_, lean_object* v_fvars_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_){
_start:
{
lean_object* v_res_4568_; 
v_res_4568_ = l_Lean_MVarId_extractLetsLocalDecl___lam__4(v___x_4557_, v___x_4558_, v_givenNames_4559_, v_config_4560_, v_mvarId_4561_, v_fvars_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_);
lean_dec(v___y_4566_);
lean_dec_ref(v___y_4565_);
lean_dec(v___y_4564_);
lean_dec_ref(v___y_4563_);
return v_res_4568_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl(lean_object* v_mvarId_4569_, lean_object* v_fvarId_4570_, lean_object* v_givenNames_4571_, lean_object* v_config_4572_, lean_object* v_a_4573_, lean_object* v_a_4574_, lean_object* v_a_4575_, lean_object* v_a_4576_){
_start:
{
lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___f_4580_; lean_object* v___x_4581_; 
v___x_4578_ = l_Lean_instInhabitedExpr;
v___x_4579_ = ((lean_object*)(l_Lean_MVarId_extractLets___closed__1));
v___f_4580_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed), 11, 4);
lean_closure_set(v___f_4580_, 0, v___x_4578_);
lean_closure_set(v___f_4580_, 1, v___x_4579_);
lean_closure_set(v___f_4580_, 2, v_givenNames_4571_);
lean_closure_set(v___f_4580_, 3, v_config_4572_);
lean_inc(v_mvarId_4569_);
v___x_4581_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4569_, v___x_4579_, v_a_4573_, v_a_4574_, v_a_4575_, v_a_4576_);
if (lean_obj_tag(v___x_4581_) == 0)
{
lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; uint8_t v___x_4585_; lean_object* v___x_4586_; 
lean_dec_ref_known(v___x_4581_, 1);
v___x_4582_ = lean_unsigned_to_nat(1u);
v___x_4583_ = lean_mk_empty_array_with_capacity(v___x_4582_);
v___x_4584_ = lean_array_push(v___x_4583_, v_fvarId_4570_);
v___x_4585_ = 0;
v___x_4586_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4569_, v___x_4584_, v___f_4580_, v___x_4585_, v_a_4573_, v_a_4574_, v_a_4575_, v_a_4576_);
return v___x_4586_;
}
else
{
lean_object* v_a_4587_; lean_object* v___x_4589_; uint8_t v_isShared_4590_; uint8_t v_isSharedCheck_4594_; 
lean_dec_ref(v___f_4580_);
lean_dec(v_fvarId_4570_);
lean_dec(v_mvarId_4569_);
v_a_4587_ = lean_ctor_get(v___x_4581_, 0);
v_isSharedCheck_4594_ = !lean_is_exclusive(v___x_4581_);
if (v_isSharedCheck_4594_ == 0)
{
v___x_4589_ = v___x_4581_;
v_isShared_4590_ = v_isSharedCheck_4594_;
goto v_resetjp_4588_;
}
else
{
lean_inc(v_a_4587_);
lean_dec(v___x_4581_);
v___x_4589_ = lean_box(0);
v_isShared_4590_ = v_isSharedCheck_4594_;
goto v_resetjp_4588_;
}
v_resetjp_4588_:
{
lean_object* v___x_4592_; 
if (v_isShared_4590_ == 0)
{
v___x_4592_ = v___x_4589_;
goto v_reusejp_4591_;
}
else
{
lean_object* v_reuseFailAlloc_4593_; 
v_reuseFailAlloc_4593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4593_, 0, v_a_4587_);
v___x_4592_ = v_reuseFailAlloc_4593_;
goto v_reusejp_4591_;
}
v_reusejp_4591_:
{
return v___x_4592_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___boxed(lean_object* v_mvarId_4595_, lean_object* v_fvarId_4596_, lean_object* v_givenNames_4597_, lean_object* v_config_4598_, lean_object* v_a_4599_, lean_object* v_a_4600_, lean_object* v_a_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_){
_start:
{
lean_object* v_res_4604_; 
v_res_4604_ = l_Lean_MVarId_extractLetsLocalDecl(v_mvarId_4595_, v_fvarId_4596_, v_givenNames_4597_, v_config_4598_, v_a_4599_, v_a_4600_, v_a_4601_, v_a_4602_);
lean_dec(v_a_4602_);
lean_dec_ref(v_a_4601_);
lean_dec(v_a_4600_);
lean_dec_ref(v_a_4599_);
return v_res_4604_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0(lean_object* v_mvarId_4605_, lean_object* v___x_4606_, lean_object* v_config_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_){
_start:
{
lean_object* v___x_4613_; 
lean_inc(v___x_4606_);
lean_inc(v_mvarId_4605_);
v___x_4613_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4605_, v___x_4606_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_);
if (lean_obj_tag(v___x_4613_) == 0)
{
lean_object* v___x_4614_; 
lean_dec_ref_known(v___x_4613_, 1);
lean_inc(v_mvarId_4605_);
v___x_4614_ = l_Lean_MVarId_getType(v_mvarId_4605_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_);
if (lean_obj_tag(v___x_4614_) == 0)
{
lean_object* v_a_4615_; lean_object* v___x_4616_; 
v_a_4615_ = lean_ctor_get(v___x_4614_, 0);
lean_inc_n(v_a_4615_, 2);
lean_dec_ref_known(v___x_4614_, 1);
v___x_4616_ = l_Lean_Meta_liftLets(v_a_4615_, v_config_4607_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_);
if (lean_obj_tag(v___x_4616_) == 0)
{
lean_object* v_a_4617_; uint8_t v___x_4618_; 
v_a_4617_ = lean_ctor_get(v___x_4616_, 0);
lean_inc(v_a_4617_);
lean_dec_ref_known(v___x_4616_, 1);
v___x_4618_ = lean_expr_eqv(v_a_4615_, v_a_4617_);
lean_dec(v_a_4615_);
if (v___x_4618_ == 0)
{
lean_object* v___x_4619_; 
lean_dec(v___x_4606_);
v___x_4619_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4605_, v_a_4617_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_);
return v___x_4619_;
}
else
{
lean_object* v___x_4620_; 
lean_inc(v_mvarId_4605_);
v___x_4620_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4606_, v_mvarId_4605_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_);
if (lean_obj_tag(v___x_4620_) == 0)
{
lean_object* v___x_4621_; 
lean_dec_ref_known(v___x_4620_, 1);
v___x_4621_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4605_, v_a_4617_, v___y_4608_, v___y_4609_, v___y_4610_, v___y_4611_);
return v___x_4621_;
}
else
{
lean_object* v_a_4622_; lean_object* v___x_4624_; uint8_t v_isShared_4625_; uint8_t v_isSharedCheck_4629_; 
lean_dec(v_a_4617_);
lean_dec(v_mvarId_4605_);
v_a_4622_ = lean_ctor_get(v___x_4620_, 0);
v_isSharedCheck_4629_ = !lean_is_exclusive(v___x_4620_);
if (v_isSharedCheck_4629_ == 0)
{
v___x_4624_ = v___x_4620_;
v_isShared_4625_ = v_isSharedCheck_4629_;
goto v_resetjp_4623_;
}
else
{
lean_inc(v_a_4622_);
lean_dec(v___x_4620_);
v___x_4624_ = lean_box(0);
v_isShared_4625_ = v_isSharedCheck_4629_;
goto v_resetjp_4623_;
}
v_resetjp_4623_:
{
lean_object* v___x_4627_; 
if (v_isShared_4625_ == 0)
{
v___x_4627_ = v___x_4624_;
goto v_reusejp_4626_;
}
else
{
lean_object* v_reuseFailAlloc_4628_; 
v_reuseFailAlloc_4628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4628_, 0, v_a_4622_);
v___x_4627_ = v_reuseFailAlloc_4628_;
goto v_reusejp_4626_;
}
v_reusejp_4626_:
{
return v___x_4627_;
}
}
}
}
}
else
{
lean_object* v_a_4630_; lean_object* v___x_4632_; uint8_t v_isShared_4633_; uint8_t v_isSharedCheck_4637_; 
lean_dec(v_a_4615_);
lean_dec(v___x_4606_);
lean_dec(v_mvarId_4605_);
v_a_4630_ = lean_ctor_get(v___x_4616_, 0);
v_isSharedCheck_4637_ = !lean_is_exclusive(v___x_4616_);
if (v_isSharedCheck_4637_ == 0)
{
v___x_4632_ = v___x_4616_;
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
else
{
lean_inc(v_a_4630_);
lean_dec(v___x_4616_);
v___x_4632_ = lean_box(0);
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
v_resetjp_4631_:
{
lean_object* v___x_4635_; 
if (v_isShared_4633_ == 0)
{
v___x_4635_ = v___x_4632_;
goto v_reusejp_4634_;
}
else
{
lean_object* v_reuseFailAlloc_4636_; 
v_reuseFailAlloc_4636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4636_, 0, v_a_4630_);
v___x_4635_ = v_reuseFailAlloc_4636_;
goto v_reusejp_4634_;
}
v_reusejp_4634_:
{
return v___x_4635_;
}
}
}
}
else
{
lean_object* v_a_4638_; lean_object* v___x_4640_; uint8_t v_isShared_4641_; uint8_t v_isSharedCheck_4645_; 
lean_dec_ref(v_config_4607_);
lean_dec(v___x_4606_);
lean_dec(v_mvarId_4605_);
v_a_4638_ = lean_ctor_get(v___x_4614_, 0);
v_isSharedCheck_4645_ = !lean_is_exclusive(v___x_4614_);
if (v_isSharedCheck_4645_ == 0)
{
v___x_4640_ = v___x_4614_;
v_isShared_4641_ = v_isSharedCheck_4645_;
goto v_resetjp_4639_;
}
else
{
lean_inc(v_a_4638_);
lean_dec(v___x_4614_);
v___x_4640_ = lean_box(0);
v_isShared_4641_ = v_isSharedCheck_4645_;
goto v_resetjp_4639_;
}
v_resetjp_4639_:
{
lean_object* v___x_4643_; 
if (v_isShared_4641_ == 0)
{
v___x_4643_ = v___x_4640_;
goto v_reusejp_4642_;
}
else
{
lean_object* v_reuseFailAlloc_4644_; 
v_reuseFailAlloc_4644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4644_, 0, v_a_4638_);
v___x_4643_ = v_reuseFailAlloc_4644_;
goto v_reusejp_4642_;
}
v_reusejp_4642_:
{
return v___x_4643_;
}
}
}
}
else
{
lean_object* v_a_4646_; lean_object* v___x_4648_; uint8_t v_isShared_4649_; uint8_t v_isSharedCheck_4653_; 
lean_dec_ref(v_config_4607_);
lean_dec(v___x_4606_);
lean_dec(v_mvarId_4605_);
v_a_4646_ = lean_ctor_get(v___x_4613_, 0);
v_isSharedCheck_4653_ = !lean_is_exclusive(v___x_4613_);
if (v_isSharedCheck_4653_ == 0)
{
v___x_4648_ = v___x_4613_;
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
else
{
lean_inc(v_a_4646_);
lean_dec(v___x_4613_);
v___x_4648_ = lean_box(0);
v_isShared_4649_ = v_isSharedCheck_4653_;
goto v_resetjp_4647_;
}
v_resetjp_4647_:
{
lean_object* v___x_4651_; 
if (v_isShared_4649_ == 0)
{
v___x_4651_ = v___x_4648_;
goto v_reusejp_4650_;
}
else
{
lean_object* v_reuseFailAlloc_4652_; 
v_reuseFailAlloc_4652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4652_, 0, v_a_4646_);
v___x_4651_ = v_reuseFailAlloc_4652_;
goto v_reusejp_4650_;
}
v_reusejp_4650_:
{
return v___x_4651_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0___boxed(lean_object* v_mvarId_4654_, lean_object* v___x_4655_, lean_object* v_config_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
lean_object* v_res_4662_; 
v_res_4662_ = l_Lean_MVarId_liftLets___lam__0(v_mvarId_4654_, v___x_4655_, v_config_4656_, v___y_4657_, v___y_4658_, v___y_4659_, v___y_4660_);
lean_dec(v___y_4660_);
lean_dec_ref(v___y_4659_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
return v_res_4662_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets(lean_object* v_mvarId_4666_, lean_object* v_config_4667_, lean_object* v_a_4668_, lean_object* v_a_4669_, lean_object* v_a_4670_, lean_object* v_a_4671_){
_start:
{
lean_object* v___x_4673_; lean_object* v___f_4674_; lean_object* v___x_4675_; 
v___x_4673_ = ((lean_object*)(l_Lean_MVarId_liftLets___closed__1));
lean_inc(v_mvarId_4666_);
v___f_4674_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLets___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4674_, 0, v_mvarId_4666_);
lean_closure_set(v___f_4674_, 1, v___x_4673_);
lean_closure_set(v___f_4674_, 2, v_config_4667_);
v___x_4675_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4666_, v___f_4674_, v_a_4668_, v_a_4669_, v_a_4670_, v_a_4671_);
return v___x_4675_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___boxed(lean_object* v_mvarId_4676_, lean_object* v_config_4677_, lean_object* v_a_4678_, lean_object* v_a_4679_, lean_object* v_a_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_){
_start:
{
lean_object* v_res_4683_; 
v_res_4683_ = l_Lean_MVarId_liftLets(v_mvarId_4676_, v_config_4677_, v_a_4678_, v_a_4679_, v_a_4680_, v_a_4681_);
lean_dec(v_a_4681_);
lean_dec_ref(v_a_4680_);
lean_dec(v_a_4679_);
lean_dec_ref(v_a_4678_);
return v_res_4683_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0(lean_object* v_mvarId_4684_, lean_object* v_fvars_4685_, lean_object* v_targetNew_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_){
_start:
{
lean_object* v___x_4692_; 
v___x_4692_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4684_, v_targetNew_4686_, v___y_4687_, v___y_4688_, v___y_4689_, v___y_4690_);
if (lean_obj_tag(v___x_4692_) == 0)
{
lean_object* v_a_4693_; lean_object* v___x_4695_; uint8_t v_isShared_4696_; uint8_t v_isSharedCheck_4708_; 
v_a_4693_ = lean_ctor_get(v___x_4692_, 0);
v_isSharedCheck_4708_ = !lean_is_exclusive(v___x_4692_);
if (v_isSharedCheck_4708_ == 0)
{
v___x_4695_ = v___x_4692_;
v_isShared_4696_ = v_isSharedCheck_4708_;
goto v_resetjp_4694_;
}
else
{
lean_inc(v_a_4693_);
lean_dec(v___x_4692_);
v___x_4695_ = lean_box(0);
v_isShared_4696_ = v_isSharedCheck_4708_;
goto v_resetjp_4694_;
}
v_resetjp_4694_:
{
lean_object* v___x_4697_; size_t v_sz_4698_; size_t v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4706_; 
v___x_4697_ = lean_box(0);
v_sz_4698_ = lean_array_size(v_fvars_4685_);
v___x_4699_ = ((size_t)0ULL);
v___x_4700_ = l_unsafeCast___redArg(v_fvars_4685_);
v___x_4701_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4698_, v___x_4699_, v___x_4700_);
v___x_4702_ = l_unsafeCast___redArg(v___x_4701_);
lean_dec_ref(v___x_4701_);
v___x_4703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4703_, 0, v___x_4702_);
lean_ctor_set(v___x_4703_, 1, v_a_4693_);
v___x_4704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4704_, 0, v___x_4697_);
lean_ctor_set(v___x_4704_, 1, v___x_4703_);
if (v_isShared_4696_ == 0)
{
lean_ctor_set(v___x_4695_, 0, v___x_4704_);
v___x_4706_ = v___x_4695_;
goto v_reusejp_4705_;
}
else
{
lean_object* v_reuseFailAlloc_4707_; 
v_reuseFailAlloc_4707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4707_, 0, v___x_4704_);
v___x_4706_ = v_reuseFailAlloc_4707_;
goto v_reusejp_4705_;
}
v_reusejp_4705_:
{
return v___x_4706_;
}
}
}
else
{
lean_object* v_a_4709_; lean_object* v___x_4711_; uint8_t v_isShared_4712_; uint8_t v_isSharedCheck_4716_; 
v_a_4709_ = lean_ctor_get(v___x_4692_, 0);
v_isSharedCheck_4716_ = !lean_is_exclusive(v___x_4692_);
if (v_isSharedCheck_4716_ == 0)
{
v___x_4711_ = v___x_4692_;
v_isShared_4712_ = v_isSharedCheck_4716_;
goto v_resetjp_4710_;
}
else
{
lean_inc(v_a_4709_);
lean_dec(v___x_4692_);
v___x_4711_ = lean_box(0);
v_isShared_4712_ = v_isSharedCheck_4716_;
goto v_resetjp_4710_;
}
v_resetjp_4710_:
{
lean_object* v___x_4714_; 
if (v_isShared_4712_ == 0)
{
v___x_4714_ = v___x_4711_;
goto v_reusejp_4713_;
}
else
{
lean_object* v_reuseFailAlloc_4715_; 
v_reuseFailAlloc_4715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4715_, 0, v_a_4709_);
v___x_4714_ = v_reuseFailAlloc_4715_;
goto v_reusejp_4713_;
}
v_reusejp_4713_:
{
return v___x_4714_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4717_, lean_object* v_fvars_4718_, lean_object* v_targetNew_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_){
_start:
{
lean_object* v_res_4725_; 
v_res_4725_ = l_Lean_MVarId_liftLetsLocalDecl___lam__0(v_mvarId_4717_, v_fvars_4718_, v_targetNew_4719_, v___y_4720_, v___y_4721_, v___y_4722_, v___y_4723_);
lean_dec(v___y_4723_);
lean_dec_ref(v___y_4722_);
lean_dec(v___y_4721_);
lean_dec_ref(v___y_4720_);
lean_dec_ref(v_fvars_4718_);
return v_res_4725_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1(lean_object* v_mvarId_4726_, lean_object* v_config_4727_, lean_object* v___f_4728_, lean_object* v___x_4729_, lean_object* v___y_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_, lean_object* v___y_4733_){
_start:
{
lean_object* v___x_4735_; 
lean_inc(v_mvarId_4726_);
v___x_4735_ = l_Lean_MVarId_getType(v_mvarId_4726_, v___y_4730_, v___y_4731_, v___y_4732_, v___y_4733_);
if (lean_obj_tag(v___x_4735_) == 0)
{
lean_object* v_a_4736_; 
v_a_4736_ = lean_ctor_get(v___x_4735_, 0);
lean_inc(v_a_4736_);
lean_dec_ref_known(v___x_4735_, 1);
switch(lean_obj_tag(v_a_4736_))
{
case 7:
{
lean_object* v_binderName_4737_; lean_object* v_binderType_4738_; lean_object* v_body_4739_; uint8_t v_binderInfo_4740_; lean_object* v___x_4741_; 
v_binderName_4737_ = lean_ctor_get(v_a_4736_, 0);
lean_inc(v_binderName_4737_);
v_binderType_4738_ = lean_ctor_get(v_a_4736_, 1);
lean_inc_ref_n(v_binderType_4738_, 2);
v_body_4739_ = lean_ctor_get(v_a_4736_, 2);
lean_inc_ref(v_body_4739_);
v_binderInfo_4740_ = lean_ctor_get_uint8(v_a_4736_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_4736_, 3);
v___x_4741_ = l_Lean_Meta_liftLets(v_binderType_4738_, v_config_4727_, v___y_4730_, v___y_4731_, v___y_4732_, v___y_4733_);
if (lean_obj_tag(v___x_4741_) == 0)
{
lean_object* v_a_4742_; lean_object* v___y_4744_; lean_object* v___y_4745_; lean_object* v___y_4746_; lean_object* v___y_4747_; uint8_t v___x_4750_; 
v_a_4742_ = lean_ctor_get(v___x_4741_, 0);
lean_inc(v_a_4742_);
lean_dec_ref_known(v___x_4741_, 1);
v___x_4750_ = lean_expr_eqv(v_binderType_4738_, v_a_4742_);
lean_dec_ref(v_binderType_4738_);
if (v___x_4750_ == 0)
{
lean_dec(v___x_4729_);
lean_dec(v_mvarId_4726_);
v___y_4744_ = v___y_4730_;
v___y_4745_ = v___y_4731_;
v___y_4746_ = v___y_4732_;
v___y_4747_ = v___y_4733_;
goto v___jp_4743_;
}
else
{
lean_object* v___x_4751_; 
v___x_4751_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4729_, v_mvarId_4726_, v___y_4730_, v___y_4731_, v___y_4732_, v___y_4733_);
if (lean_obj_tag(v___x_4751_) == 0)
{
lean_dec_ref_known(v___x_4751_, 1);
v___y_4744_ = v___y_4730_;
v___y_4745_ = v___y_4731_;
v___y_4746_ = v___y_4732_;
v___y_4747_ = v___y_4733_;
goto v___jp_4743_;
}
else
{
lean_object* v_a_4752_; lean_object* v___x_4754_; uint8_t v_isShared_4755_; uint8_t v_isSharedCheck_4759_; 
lean_dec(v_a_4742_);
lean_dec_ref(v_body_4739_);
lean_dec(v_binderName_4737_);
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4732_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
lean_dec_ref(v___f_4728_);
v_a_4752_ = lean_ctor_get(v___x_4751_, 0);
v_isSharedCheck_4759_ = !lean_is_exclusive(v___x_4751_);
if (v_isSharedCheck_4759_ == 0)
{
v___x_4754_ = v___x_4751_;
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
else
{
lean_inc(v_a_4752_);
lean_dec(v___x_4751_);
v___x_4754_ = lean_box(0);
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
v_resetjp_4753_:
{
lean_object* v___x_4757_; 
if (v_isShared_4755_ == 0)
{
v___x_4757_ = v___x_4754_;
goto v_reusejp_4756_;
}
else
{
lean_object* v_reuseFailAlloc_4758_; 
v_reuseFailAlloc_4758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4758_, 0, v_a_4752_);
v___x_4757_ = v_reuseFailAlloc_4758_;
goto v_reusejp_4756_;
}
v_reusejp_4756_:
{
return v___x_4757_;
}
}
}
}
v___jp_4743_:
{
lean_object* v___x_4748_; lean_object* v___x_4749_; 
v___x_4748_ = l_Lean_Expr_forallE___override(v_binderName_4737_, v_a_4742_, v_body_4739_, v_binderInfo_4740_);
v___x_4749_ = lean_apply_6(v___f_4728_, v___x_4748_, v___y_4744_, v___y_4745_, v___y_4746_, v___y_4747_, lean_box(0));
return v___x_4749_;
}
}
else
{
lean_object* v_a_4760_; lean_object* v___x_4762_; uint8_t v_isShared_4763_; uint8_t v_isSharedCheck_4767_; 
lean_dec_ref(v_body_4739_);
lean_dec_ref(v_binderType_4738_);
lean_dec(v_binderName_4737_);
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4732_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
lean_dec(v___x_4729_);
lean_dec_ref(v___f_4728_);
lean_dec(v_mvarId_4726_);
v_a_4760_ = lean_ctor_get(v___x_4741_, 0);
v_isSharedCheck_4767_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4767_ == 0)
{
v___x_4762_ = v___x_4741_;
v_isShared_4763_ = v_isSharedCheck_4767_;
goto v_resetjp_4761_;
}
else
{
lean_inc(v_a_4760_);
lean_dec(v___x_4741_);
v___x_4762_ = lean_box(0);
v_isShared_4763_ = v_isSharedCheck_4767_;
goto v_resetjp_4761_;
}
v_resetjp_4761_:
{
lean_object* v___x_4765_; 
if (v_isShared_4763_ == 0)
{
v___x_4765_ = v___x_4762_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4766_; 
v_reuseFailAlloc_4766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4766_, 0, v_a_4760_);
v___x_4765_ = v_reuseFailAlloc_4766_;
goto v_reusejp_4764_;
}
v_reusejp_4764_:
{
return v___x_4765_;
}
}
}
}
case 8:
{
lean_object* v_declName_4768_; lean_object* v_type_4769_; lean_object* v_value_4770_; lean_object* v_body_4771_; uint8_t v_nondep_4772_; lean_object* v___x_4773_; 
v_declName_4768_ = lean_ctor_get(v_a_4736_, 0);
lean_inc(v_declName_4768_);
v_type_4769_ = lean_ctor_get(v_a_4736_, 1);
lean_inc_ref_n(v_type_4769_, 2);
v_value_4770_ = lean_ctor_get(v_a_4736_, 2);
lean_inc_ref(v_value_4770_);
v_body_4771_ = lean_ctor_get(v_a_4736_, 3);
lean_inc_ref(v_body_4771_);
v_nondep_4772_ = lean_ctor_get_uint8(v_a_4736_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_a_4736_, 4);
lean_inc_ref(v_config_4727_);
v___x_4773_ = l_Lean_Meta_liftLets(v_type_4769_, v_config_4727_, v___y_4730_, v___y_4731_, v___y_4732_, v___y_4733_);
if (lean_obj_tag(v___x_4773_) == 0)
{
lean_object* v_a_4774_; lean_object* v___x_4775_; 
v_a_4774_ = lean_ctor_get(v___x_4773_, 0);
lean_inc(v_a_4774_);
lean_dec_ref_known(v___x_4773_, 1);
lean_inc_ref(v_value_4770_);
v___x_4775_ = l_Lean_Meta_liftLets(v_value_4770_, v_config_4727_, v___y_4730_, v___y_4731_, v___y_4732_, v___y_4733_);
if (lean_obj_tag(v___x_4775_) == 0)
{
lean_object* v_a_4776_; lean_object* v___y_4778_; lean_object* v___y_4779_; lean_object* v___y_4780_; lean_object* v___y_4781_; uint8_t v___y_4785_; uint8_t v___x_4795_; 
v_a_4776_ = lean_ctor_get(v___x_4775_, 0);
lean_inc(v_a_4776_);
lean_dec_ref_known(v___x_4775_, 1);
v___x_4795_ = lean_expr_eqv(v_type_4769_, v_a_4774_);
lean_dec_ref(v_type_4769_);
if (v___x_4795_ == 0)
{
lean_dec_ref(v_value_4770_);
v___y_4785_ = v___x_4795_;
goto v___jp_4784_;
}
else
{
uint8_t v___x_4796_; 
v___x_4796_ = lean_expr_eqv(v_value_4770_, v_a_4776_);
lean_dec_ref(v_value_4770_);
v___y_4785_ = v___x_4796_;
goto v___jp_4784_;
}
v___jp_4777_:
{
lean_object* v___x_4782_; lean_object* v___x_4783_; 
v___x_4782_ = l_Lean_Expr_letE___override(v_declName_4768_, v_a_4774_, v_a_4776_, v_body_4771_, v_nondep_4772_);
v___x_4783_ = lean_apply_6(v___f_4728_, v___x_4782_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_, lean_box(0));
return v___x_4783_;
}
v___jp_4784_:
{
if (v___y_4785_ == 0)
{
lean_dec(v___x_4729_);
lean_dec(v_mvarId_4726_);
v___y_4778_ = v___y_4730_;
v___y_4779_ = v___y_4731_;
v___y_4780_ = v___y_4732_;
v___y_4781_ = v___y_4733_;
goto v___jp_4777_;
}
else
{
lean_object* v___x_4786_; 
v___x_4786_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4729_, v_mvarId_4726_, v___y_4730_, v___y_4731_, v___y_4732_, v___y_4733_);
if (lean_obj_tag(v___x_4786_) == 0)
{
lean_dec_ref_known(v___x_4786_, 1);
v___y_4778_ = v___y_4730_;
v___y_4779_ = v___y_4731_;
v___y_4780_ = v___y_4732_;
v___y_4781_ = v___y_4733_;
goto v___jp_4777_;
}
else
{
lean_object* v_a_4787_; lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4794_; 
lean_dec(v_a_4776_);
lean_dec(v_a_4774_);
lean_dec_ref(v_body_4771_);
lean_dec(v_declName_4768_);
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4732_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
lean_dec_ref(v___f_4728_);
v_a_4787_ = lean_ctor_get(v___x_4786_, 0);
v_isSharedCheck_4794_ = !lean_is_exclusive(v___x_4786_);
if (v_isSharedCheck_4794_ == 0)
{
v___x_4789_ = v___x_4786_;
v_isShared_4790_ = v_isSharedCheck_4794_;
goto v_resetjp_4788_;
}
else
{
lean_inc(v_a_4787_);
lean_dec(v___x_4786_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4794_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
lean_object* v___x_4792_; 
if (v_isShared_4790_ == 0)
{
v___x_4792_ = v___x_4789_;
goto v_reusejp_4791_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v_a_4787_);
v___x_4792_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4791_;
}
v_reusejp_4791_:
{
return v___x_4792_;
}
}
}
}
}
}
else
{
lean_object* v_a_4797_; lean_object* v___x_4799_; uint8_t v_isShared_4800_; uint8_t v_isSharedCheck_4804_; 
lean_dec(v_a_4774_);
lean_dec_ref(v_body_4771_);
lean_dec_ref(v_value_4770_);
lean_dec_ref(v_type_4769_);
lean_dec(v_declName_4768_);
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4732_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
lean_dec(v___x_4729_);
lean_dec_ref(v___f_4728_);
lean_dec(v_mvarId_4726_);
v_a_4797_ = lean_ctor_get(v___x_4775_, 0);
v_isSharedCheck_4804_ = !lean_is_exclusive(v___x_4775_);
if (v_isSharedCheck_4804_ == 0)
{
v___x_4799_ = v___x_4775_;
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
else
{
lean_inc(v_a_4797_);
lean_dec(v___x_4775_);
v___x_4799_ = lean_box(0);
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
v_resetjp_4798_:
{
lean_object* v___x_4802_; 
if (v_isShared_4800_ == 0)
{
v___x_4802_ = v___x_4799_;
goto v_reusejp_4801_;
}
else
{
lean_object* v_reuseFailAlloc_4803_; 
v_reuseFailAlloc_4803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4803_, 0, v_a_4797_);
v___x_4802_ = v_reuseFailAlloc_4803_;
goto v_reusejp_4801_;
}
v_reusejp_4801_:
{
return v___x_4802_;
}
}
}
}
else
{
lean_object* v_a_4805_; lean_object* v___x_4807_; uint8_t v_isShared_4808_; uint8_t v_isSharedCheck_4812_; 
lean_dec_ref(v_body_4771_);
lean_dec_ref(v_value_4770_);
lean_dec_ref(v_type_4769_);
lean_dec(v_declName_4768_);
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4732_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
lean_dec(v___x_4729_);
lean_dec_ref(v___f_4728_);
lean_dec_ref(v_config_4727_);
lean_dec(v_mvarId_4726_);
v_a_4805_ = lean_ctor_get(v___x_4773_, 0);
v_isSharedCheck_4812_ = !lean_is_exclusive(v___x_4773_);
if (v_isSharedCheck_4812_ == 0)
{
v___x_4807_ = v___x_4773_;
v_isShared_4808_ = v_isSharedCheck_4812_;
goto v_resetjp_4806_;
}
else
{
lean_inc(v_a_4805_);
lean_dec(v___x_4773_);
v___x_4807_ = lean_box(0);
v_isShared_4808_ = v_isSharedCheck_4812_;
goto v_resetjp_4806_;
}
v_resetjp_4806_:
{
lean_object* v___x_4810_; 
if (v_isShared_4808_ == 0)
{
v___x_4810_ = v___x_4807_;
goto v_reusejp_4809_;
}
else
{
lean_object* v_reuseFailAlloc_4811_; 
v_reuseFailAlloc_4811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4811_, 0, v_a_4805_);
v___x_4810_ = v_reuseFailAlloc_4811_;
goto v_reusejp_4809_;
}
v_reusejp_4809_:
{
return v___x_4810_;
}
}
}
}
default: 
{
lean_object* v___x_4813_; lean_object* v___x_4814_; 
lean_dec(v_a_4736_);
lean_dec_ref(v___f_4728_);
lean_dec_ref(v_config_4727_);
v___x_4813_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4814_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4729_, v_mvarId_4726_, v___x_4813_, v___y_4730_, v___y_4731_, v___y_4732_, v___y_4733_);
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4732_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
return v___x_4814_;
}
}
}
else
{
lean_object* v_a_4815_; lean_object* v___x_4817_; uint8_t v_isShared_4818_; uint8_t v_isSharedCheck_4822_; 
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4732_);
lean_dec(v___y_4731_);
lean_dec_ref(v___y_4730_);
lean_dec(v___x_4729_);
lean_dec_ref(v___f_4728_);
lean_dec_ref(v_config_4727_);
lean_dec(v_mvarId_4726_);
v_a_4815_ = lean_ctor_get(v___x_4735_, 0);
v_isSharedCheck_4822_ = !lean_is_exclusive(v___x_4735_);
if (v_isSharedCheck_4822_ == 0)
{
v___x_4817_ = v___x_4735_;
v_isShared_4818_ = v_isSharedCheck_4822_;
goto v_resetjp_4816_;
}
else
{
lean_inc(v_a_4815_);
lean_dec(v___x_4735_);
v___x_4817_ = lean_box(0);
v_isShared_4818_ = v_isSharedCheck_4822_;
goto v_resetjp_4816_;
}
v_resetjp_4816_:
{
lean_object* v___x_4820_; 
if (v_isShared_4818_ == 0)
{
v___x_4820_ = v___x_4817_;
goto v_reusejp_4819_;
}
else
{
lean_object* v_reuseFailAlloc_4821_; 
v_reuseFailAlloc_4821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4821_, 0, v_a_4815_);
v___x_4820_ = v_reuseFailAlloc_4821_;
goto v_reusejp_4819_;
}
v_reusejp_4819_:
{
return v___x_4820_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed(lean_object* v_mvarId_4823_, lean_object* v_config_4824_, lean_object* v___f_4825_, lean_object* v___x_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_){
_start:
{
lean_object* v_res_4832_; 
v_res_4832_ = l_Lean_MVarId_liftLetsLocalDecl___lam__1(v_mvarId_4823_, v_config_4824_, v___f_4825_, v___x_4826_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_);
return v_res_4832_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2(lean_object* v_config_4833_, lean_object* v___x_4834_, lean_object* v_mvarId_4835_, lean_object* v_fvars_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_){
_start:
{
lean_object* v___f_4842_; lean_object* v___f_4843_; lean_object* v___x_4844_; 
lean_inc_n(v_mvarId_4835_, 2);
v___f_4842_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4842_, 0, v_mvarId_4835_);
lean_closure_set(v___f_4842_, 1, v_fvars_4836_);
v___f_4843_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4843_, 0, v_mvarId_4835_);
lean_closure_set(v___f_4843_, 1, v_config_4833_);
lean_closure_set(v___f_4843_, 2, v___f_4842_);
lean_closure_set(v___f_4843_, 3, v___x_4834_);
v___x_4844_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4835_, v___f_4843_, v___y_4837_, v___y_4838_, v___y_4839_, v___y_4840_);
return v___x_4844_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed(lean_object* v_config_4845_, lean_object* v___x_4846_, lean_object* v_mvarId_4847_, lean_object* v_fvars_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_){
_start:
{
lean_object* v_res_4854_; 
v_res_4854_ = l_Lean_MVarId_liftLetsLocalDecl___lam__2(v_config_4845_, v___x_4846_, v_mvarId_4847_, v_fvars_4848_, v___y_4849_, v___y_4850_, v___y_4851_, v___y_4852_);
lean_dec(v___y_4852_);
lean_dec_ref(v___y_4851_);
lean_dec(v___y_4850_);
lean_dec_ref(v___y_4849_);
return v_res_4854_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl(lean_object* v_mvarId_4855_, lean_object* v_fvarId_4856_, lean_object* v_config_4857_, lean_object* v_a_4858_, lean_object* v_a_4859_, lean_object* v_a_4860_, lean_object* v_a_4861_){
_start:
{
lean_object* v___x_4863_; lean_object* v___f_4864_; lean_object* v___x_4865_; 
v___x_4863_ = ((lean_object*)(l_Lean_MVarId_liftLets___closed__1));
v___f_4864_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed), 9, 2);
lean_closure_set(v___f_4864_, 0, v_config_4857_);
lean_closure_set(v___f_4864_, 1, v___x_4863_);
lean_inc(v_mvarId_4855_);
v___x_4865_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4855_, v___x_4863_, v_a_4858_, v_a_4859_, v_a_4860_, v_a_4861_);
if (lean_obj_tag(v___x_4865_) == 0)
{
lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; uint8_t v___x_4869_; lean_object* v___x_4870_; 
lean_dec_ref_known(v___x_4865_, 1);
v___x_4866_ = lean_unsigned_to_nat(1u);
v___x_4867_ = lean_mk_empty_array_with_capacity(v___x_4866_);
v___x_4868_ = lean_array_push(v___x_4867_, v_fvarId_4856_);
v___x_4869_ = 0;
v___x_4870_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4855_, v___x_4868_, v___f_4864_, v___x_4869_, v_a_4858_, v_a_4859_, v_a_4860_, v_a_4861_);
if (lean_obj_tag(v___x_4870_) == 0)
{
lean_object* v_a_4871_; lean_object* v___x_4873_; uint8_t v_isShared_4874_; uint8_t v_isSharedCheck_4879_; 
v_a_4871_ = lean_ctor_get(v___x_4870_, 0);
v_isSharedCheck_4879_ = !lean_is_exclusive(v___x_4870_);
if (v_isSharedCheck_4879_ == 0)
{
v___x_4873_ = v___x_4870_;
v_isShared_4874_ = v_isSharedCheck_4879_;
goto v_resetjp_4872_;
}
else
{
lean_inc(v_a_4871_);
lean_dec(v___x_4870_);
v___x_4873_ = lean_box(0);
v_isShared_4874_ = v_isSharedCheck_4879_;
goto v_resetjp_4872_;
}
v_resetjp_4872_:
{
lean_object* v_snd_4875_; lean_object* v___x_4877_; 
v_snd_4875_ = lean_ctor_get(v_a_4871_, 1);
lean_inc(v_snd_4875_);
lean_dec(v_a_4871_);
if (v_isShared_4874_ == 0)
{
lean_ctor_set(v___x_4873_, 0, v_snd_4875_);
v___x_4877_ = v___x_4873_;
goto v_reusejp_4876_;
}
else
{
lean_object* v_reuseFailAlloc_4878_; 
v_reuseFailAlloc_4878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4878_, 0, v_snd_4875_);
v___x_4877_ = v_reuseFailAlloc_4878_;
goto v_reusejp_4876_;
}
v_reusejp_4876_:
{
return v___x_4877_;
}
}
}
else
{
lean_object* v_a_4880_; lean_object* v___x_4882_; uint8_t v_isShared_4883_; uint8_t v_isSharedCheck_4887_; 
v_a_4880_ = lean_ctor_get(v___x_4870_, 0);
v_isSharedCheck_4887_ = !lean_is_exclusive(v___x_4870_);
if (v_isSharedCheck_4887_ == 0)
{
v___x_4882_ = v___x_4870_;
v_isShared_4883_ = v_isSharedCheck_4887_;
goto v_resetjp_4881_;
}
else
{
lean_inc(v_a_4880_);
lean_dec(v___x_4870_);
v___x_4882_ = lean_box(0);
v_isShared_4883_ = v_isSharedCheck_4887_;
goto v_resetjp_4881_;
}
v_resetjp_4881_:
{
lean_object* v___x_4885_; 
if (v_isShared_4883_ == 0)
{
v___x_4885_ = v___x_4882_;
goto v_reusejp_4884_;
}
else
{
lean_object* v_reuseFailAlloc_4886_; 
v_reuseFailAlloc_4886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4886_, 0, v_a_4880_);
v___x_4885_ = v_reuseFailAlloc_4886_;
goto v_reusejp_4884_;
}
v_reusejp_4884_:
{
return v___x_4885_;
}
}
}
}
else
{
lean_object* v_a_4888_; lean_object* v___x_4890_; uint8_t v_isShared_4891_; uint8_t v_isSharedCheck_4895_; 
lean_dec_ref(v___f_4864_);
lean_dec(v_fvarId_4856_);
lean_dec(v_mvarId_4855_);
v_a_4888_ = lean_ctor_get(v___x_4865_, 0);
v_isSharedCheck_4895_ = !lean_is_exclusive(v___x_4865_);
if (v_isSharedCheck_4895_ == 0)
{
v___x_4890_ = v___x_4865_;
v_isShared_4891_ = v_isSharedCheck_4895_;
goto v_resetjp_4889_;
}
else
{
lean_inc(v_a_4888_);
lean_dec(v___x_4865_);
v___x_4890_ = lean_box(0);
v_isShared_4891_ = v_isSharedCheck_4895_;
goto v_resetjp_4889_;
}
v_resetjp_4889_:
{
lean_object* v___x_4893_; 
if (v_isShared_4891_ == 0)
{
v___x_4893_ = v___x_4890_;
goto v_reusejp_4892_;
}
else
{
lean_object* v_reuseFailAlloc_4894_; 
v_reuseFailAlloc_4894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4894_, 0, v_a_4888_);
v___x_4893_ = v_reuseFailAlloc_4894_;
goto v_reusejp_4892_;
}
v_reusejp_4892_:
{
return v___x_4893_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___boxed(lean_object* v_mvarId_4896_, lean_object* v_fvarId_4897_, lean_object* v_config_4898_, lean_object* v_a_4899_, lean_object* v_a_4900_, lean_object* v_a_4901_, lean_object* v_a_4902_, lean_object* v_a_4903_){
_start:
{
lean_object* v_res_4904_; 
v_res_4904_ = l_Lean_MVarId_liftLetsLocalDecl(v_mvarId_4896_, v_fvarId_4897_, v_config_4898_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_);
lean_dec(v_a_4902_);
lean_dec_ref(v_a_4901_);
lean_dec(v_a_4900_);
lean_dec_ref(v_a_4899_);
return v_res_4904_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0(lean_object* v_mvarId_4905_, lean_object* v___x_4906_, uint8_t v_failIfUnchanged_4907_, lean_object* v___y_4908_, lean_object* v___y_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_){
_start:
{
lean_object* v___x_4913_; 
lean_inc(v___x_4906_);
lean_inc(v_mvarId_4905_);
v___x_4913_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4905_, v___x_4906_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
if (lean_obj_tag(v___x_4913_) == 0)
{
lean_object* v___x_4914_; 
lean_dec_ref_known(v___x_4913_, 1);
lean_inc(v_mvarId_4905_);
v___x_4914_ = l_Lean_MVarId_getType(v_mvarId_4905_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
if (lean_obj_tag(v___x_4914_) == 0)
{
lean_object* v_a_4915_; lean_object* v___x_4916_; 
v_a_4915_ = lean_ctor_get(v___x_4914_, 0);
lean_inc_n(v_a_4915_, 2);
lean_dec_ref_known(v___x_4914_, 1);
v___x_4916_ = l_Lean_Meta_letToHave(v_a_4915_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
if (lean_obj_tag(v___x_4916_) == 0)
{
if (v_failIfUnchanged_4907_ == 0)
{
lean_object* v_a_4917_; lean_object* v___x_4918_; 
lean_dec(v_a_4915_);
lean_dec(v___x_4906_);
v_a_4917_ = lean_ctor_get(v___x_4916_, 0);
lean_inc(v_a_4917_);
lean_dec_ref_known(v___x_4916_, 1);
v___x_4918_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4905_, v_a_4917_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
return v___x_4918_;
}
else
{
lean_object* v_a_4919_; uint8_t v___x_4920_; 
v_a_4919_ = lean_ctor_get(v___x_4916_, 0);
lean_inc(v_a_4919_);
lean_dec_ref_known(v___x_4916_, 1);
v___x_4920_ = lean_expr_eqv(v_a_4915_, v_a_4919_);
lean_dec(v_a_4915_);
if (v___x_4920_ == 0)
{
lean_object* v___x_4921_; 
lean_dec(v___x_4906_);
v___x_4921_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4905_, v_a_4919_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
return v___x_4921_;
}
else
{
lean_object* v___x_4922_; 
lean_inc(v_mvarId_4905_);
v___x_4922_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4906_, v_mvarId_4905_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
if (lean_obj_tag(v___x_4922_) == 0)
{
lean_object* v___x_4923_; 
lean_dec_ref_known(v___x_4922_, 1);
v___x_4923_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4905_, v_a_4919_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
return v___x_4923_;
}
else
{
lean_object* v_a_4924_; lean_object* v___x_4926_; uint8_t v_isShared_4927_; uint8_t v_isSharedCheck_4931_; 
lean_dec(v_a_4919_);
lean_dec(v_mvarId_4905_);
v_a_4924_ = lean_ctor_get(v___x_4922_, 0);
v_isSharedCheck_4931_ = !lean_is_exclusive(v___x_4922_);
if (v_isSharedCheck_4931_ == 0)
{
v___x_4926_ = v___x_4922_;
v_isShared_4927_ = v_isSharedCheck_4931_;
goto v_resetjp_4925_;
}
else
{
lean_inc(v_a_4924_);
lean_dec(v___x_4922_);
v___x_4926_ = lean_box(0);
v_isShared_4927_ = v_isSharedCheck_4931_;
goto v_resetjp_4925_;
}
v_resetjp_4925_:
{
lean_object* v___x_4929_; 
if (v_isShared_4927_ == 0)
{
v___x_4929_ = v___x_4926_;
goto v_reusejp_4928_;
}
else
{
lean_object* v_reuseFailAlloc_4930_; 
v_reuseFailAlloc_4930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4930_, 0, v_a_4924_);
v___x_4929_ = v_reuseFailAlloc_4930_;
goto v_reusejp_4928_;
}
v_reusejp_4928_:
{
return v___x_4929_;
}
}
}
}
}
}
else
{
lean_object* v_a_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_4939_; 
lean_dec(v_a_4915_);
lean_dec(v___x_4906_);
lean_dec(v_mvarId_4905_);
v_a_4932_ = lean_ctor_get(v___x_4916_, 0);
v_isSharedCheck_4939_ = !lean_is_exclusive(v___x_4916_);
if (v_isSharedCheck_4939_ == 0)
{
v___x_4934_ = v___x_4916_;
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_a_4932_);
lean_dec(v___x_4916_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
v_resetjp_4933_:
{
lean_object* v___x_4937_; 
if (v_isShared_4935_ == 0)
{
v___x_4937_ = v___x_4934_;
goto v_reusejp_4936_;
}
else
{
lean_object* v_reuseFailAlloc_4938_; 
v_reuseFailAlloc_4938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4938_, 0, v_a_4932_);
v___x_4937_ = v_reuseFailAlloc_4938_;
goto v_reusejp_4936_;
}
v_reusejp_4936_:
{
return v___x_4937_;
}
}
}
}
else
{
lean_object* v_a_4940_; lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_4947_; 
lean_dec(v___x_4906_);
lean_dec(v_mvarId_4905_);
v_a_4940_ = lean_ctor_get(v___x_4914_, 0);
v_isSharedCheck_4947_ = !lean_is_exclusive(v___x_4914_);
if (v_isSharedCheck_4947_ == 0)
{
v___x_4942_ = v___x_4914_;
v_isShared_4943_ = v_isSharedCheck_4947_;
goto v_resetjp_4941_;
}
else
{
lean_inc(v_a_4940_);
lean_dec(v___x_4914_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_4947_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
lean_object* v___x_4945_; 
if (v_isShared_4943_ == 0)
{
v___x_4945_ = v___x_4942_;
goto v_reusejp_4944_;
}
else
{
lean_object* v_reuseFailAlloc_4946_; 
v_reuseFailAlloc_4946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4946_, 0, v_a_4940_);
v___x_4945_ = v_reuseFailAlloc_4946_;
goto v_reusejp_4944_;
}
v_reusejp_4944_:
{
return v___x_4945_;
}
}
}
}
else
{
lean_object* v_a_4948_; lean_object* v___x_4950_; uint8_t v_isShared_4951_; uint8_t v_isSharedCheck_4955_; 
lean_dec(v___x_4906_);
lean_dec(v_mvarId_4905_);
v_a_4948_ = lean_ctor_get(v___x_4913_, 0);
v_isSharedCheck_4955_ = !lean_is_exclusive(v___x_4913_);
if (v_isSharedCheck_4955_ == 0)
{
v___x_4950_ = v___x_4913_;
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
else
{
lean_inc(v_a_4948_);
lean_dec(v___x_4913_);
v___x_4950_ = lean_box(0);
v_isShared_4951_ = v_isSharedCheck_4955_;
goto v_resetjp_4949_;
}
v_resetjp_4949_:
{
lean_object* v___x_4953_; 
if (v_isShared_4951_ == 0)
{
v___x_4953_ = v___x_4950_;
goto v_reusejp_4952_;
}
else
{
lean_object* v_reuseFailAlloc_4954_; 
v_reuseFailAlloc_4954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4954_, 0, v_a_4948_);
v___x_4953_ = v_reuseFailAlloc_4954_;
goto v_reusejp_4952_;
}
v_reusejp_4952_:
{
return v___x_4953_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0___boxed(lean_object* v_mvarId_4956_, lean_object* v___x_4957_, lean_object* v_failIfUnchanged_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4964_; lean_object* v_res_4965_; 
v_failIfUnchanged_boxed_4964_ = lean_unbox(v_failIfUnchanged_4958_);
v_res_4965_ = l_Lean_MVarId_letToHave___lam__0(v_mvarId_4956_, v___x_4957_, v_failIfUnchanged_boxed_4964_, v___y_4959_, v___y_4960_, v___y_4961_, v___y_4962_);
lean_dec(v___y_4962_);
lean_dec_ref(v___y_4961_);
lean_dec(v___y_4960_);
lean_dec_ref(v___y_4959_);
return v_res_4965_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave(lean_object* v_mvarId_4969_, uint8_t v_failIfUnchanged_4970_, lean_object* v_a_4971_, lean_object* v_a_4972_, lean_object* v_a_4973_, lean_object* v_a_4974_){
_start:
{
lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___f_4978_; lean_object* v___x_4979_; 
v___x_4976_ = ((lean_object*)(l_Lean_MVarId_letToHave___closed__1));
v___x_4977_ = lean_box(v_failIfUnchanged_4970_);
lean_inc(v_mvarId_4969_);
v___f_4978_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHave___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4978_, 0, v_mvarId_4969_);
lean_closure_set(v___f_4978_, 1, v___x_4976_);
lean_closure_set(v___f_4978_, 2, v___x_4977_);
v___x_4979_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4969_, v___f_4978_, v_a_4971_, v_a_4972_, v_a_4973_, v_a_4974_);
return v___x_4979_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___boxed(lean_object* v_mvarId_4980_, lean_object* v_failIfUnchanged_4981_, lean_object* v_a_4982_, lean_object* v_a_4983_, lean_object* v_a_4984_, lean_object* v_a_4985_, lean_object* v_a_4986_){
_start:
{
uint8_t v_failIfUnchanged_boxed_4987_; lean_object* v_res_4988_; 
v_failIfUnchanged_boxed_4987_ = lean_unbox(v_failIfUnchanged_4981_);
v_res_4988_ = l_Lean_MVarId_letToHave(v_mvarId_4980_, v_failIfUnchanged_boxed_4987_, v_a_4982_, v_a_4983_, v_a_4984_, v_a_4985_);
lean_dec(v_a_4985_);
lean_dec_ref(v_a_4984_);
lean_dec(v_a_4983_);
lean_dec_ref(v_a_4982_);
return v_res_4988_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0(lean_object* v_mvarId_4989_, lean_object* v___x_4990_, lean_object* v_fvarId_4991_, uint8_t v_failIfUnchanged_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_){
_start:
{
lean_object* v___x_4998_; 
lean_inc(v___x_4990_);
lean_inc(v_mvarId_4989_);
v___x_4998_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4989_, v___x_4990_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_);
if (lean_obj_tag(v___x_4998_) == 0)
{
lean_object* v___x_4999_; 
lean_dec_ref_known(v___x_4998_, 1);
lean_inc(v_fvarId_4991_);
v___x_4999_ = l_Lean_FVarId_getType___redArg(v_fvarId_4991_, v___y_4993_, v___y_4995_, v___y_4996_);
if (lean_obj_tag(v___x_4999_) == 0)
{
lean_object* v_a_5000_; lean_object* v___x_5001_; 
v_a_5000_ = lean_ctor_get(v___x_4999_, 0);
lean_inc_n(v_a_5000_, 2);
lean_dec_ref_known(v___x_4999_, 1);
v___x_5001_ = l_Lean_Meta_letToHave(v_a_5000_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_);
if (lean_obj_tag(v___x_5001_) == 0)
{
if (v_failIfUnchanged_4992_ == 0)
{
lean_object* v_a_5002_; lean_object* v___x_5003_; 
lean_dec(v_a_5000_);
lean_dec(v___x_4990_);
v_a_5002_ = lean_ctor_get(v___x_5001_, 0);
lean_inc(v_a_5002_);
lean_dec_ref_known(v___x_5001_, 1);
v___x_5003_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4989_, v_fvarId_4991_, v_a_5002_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_);
return v___x_5003_;
}
else
{
lean_object* v_a_5004_; uint8_t v___x_5005_; 
v_a_5004_ = lean_ctor_get(v___x_5001_, 0);
lean_inc(v_a_5004_);
lean_dec_ref_known(v___x_5001_, 1);
v___x_5005_ = lean_expr_eqv(v_a_5000_, v_a_5004_);
lean_dec(v_a_5000_);
if (v___x_5005_ == 0)
{
lean_object* v___x_5006_; 
lean_dec(v___x_4990_);
v___x_5006_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4989_, v_fvarId_4991_, v_a_5004_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_);
return v___x_5006_;
}
else
{
lean_object* v___x_5007_; 
lean_inc(v_mvarId_4989_);
v___x_5007_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4990_, v_mvarId_4989_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_);
if (lean_obj_tag(v___x_5007_) == 0)
{
lean_object* v___x_5008_; 
lean_dec_ref_known(v___x_5007_, 1);
v___x_5008_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_4989_, v_fvarId_4991_, v_a_5004_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_);
return v___x_5008_;
}
else
{
lean_object* v_a_5009_; lean_object* v___x_5011_; uint8_t v_isShared_5012_; uint8_t v_isSharedCheck_5016_; 
lean_dec(v_a_5004_);
lean_dec(v_fvarId_4991_);
lean_dec(v_mvarId_4989_);
v_a_5009_ = lean_ctor_get(v___x_5007_, 0);
v_isSharedCheck_5016_ = !lean_is_exclusive(v___x_5007_);
if (v_isSharedCheck_5016_ == 0)
{
v___x_5011_ = v___x_5007_;
v_isShared_5012_ = v_isSharedCheck_5016_;
goto v_resetjp_5010_;
}
else
{
lean_inc(v_a_5009_);
lean_dec(v___x_5007_);
v___x_5011_ = lean_box(0);
v_isShared_5012_ = v_isSharedCheck_5016_;
goto v_resetjp_5010_;
}
v_resetjp_5010_:
{
lean_object* v___x_5014_; 
if (v_isShared_5012_ == 0)
{
v___x_5014_ = v___x_5011_;
goto v_reusejp_5013_;
}
else
{
lean_object* v_reuseFailAlloc_5015_; 
v_reuseFailAlloc_5015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5015_, 0, v_a_5009_);
v___x_5014_ = v_reuseFailAlloc_5015_;
goto v_reusejp_5013_;
}
v_reusejp_5013_:
{
return v___x_5014_;
}
}
}
}
}
}
else
{
lean_object* v_a_5017_; lean_object* v___x_5019_; uint8_t v_isShared_5020_; uint8_t v_isSharedCheck_5024_; 
lean_dec(v_a_5000_);
lean_dec(v_fvarId_4991_);
lean_dec(v___x_4990_);
lean_dec(v_mvarId_4989_);
v_a_5017_ = lean_ctor_get(v___x_5001_, 0);
v_isSharedCheck_5024_ = !lean_is_exclusive(v___x_5001_);
if (v_isSharedCheck_5024_ == 0)
{
v___x_5019_ = v___x_5001_;
v_isShared_5020_ = v_isSharedCheck_5024_;
goto v_resetjp_5018_;
}
else
{
lean_inc(v_a_5017_);
lean_dec(v___x_5001_);
v___x_5019_ = lean_box(0);
v_isShared_5020_ = v_isSharedCheck_5024_;
goto v_resetjp_5018_;
}
v_resetjp_5018_:
{
lean_object* v___x_5022_; 
if (v_isShared_5020_ == 0)
{
v___x_5022_ = v___x_5019_;
goto v_reusejp_5021_;
}
else
{
lean_object* v_reuseFailAlloc_5023_; 
v_reuseFailAlloc_5023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5023_, 0, v_a_5017_);
v___x_5022_ = v_reuseFailAlloc_5023_;
goto v_reusejp_5021_;
}
v_reusejp_5021_:
{
return v___x_5022_;
}
}
}
}
else
{
lean_object* v_a_5025_; lean_object* v___x_5027_; uint8_t v_isShared_5028_; uint8_t v_isSharedCheck_5032_; 
lean_dec(v_fvarId_4991_);
lean_dec(v___x_4990_);
lean_dec(v_mvarId_4989_);
v_a_5025_ = lean_ctor_get(v___x_4999_, 0);
v_isSharedCheck_5032_ = !lean_is_exclusive(v___x_4999_);
if (v_isSharedCheck_5032_ == 0)
{
v___x_5027_ = v___x_4999_;
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
else
{
lean_inc(v_a_5025_);
lean_dec(v___x_4999_);
v___x_5027_ = lean_box(0);
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
v_resetjp_5026_:
{
lean_object* v___x_5030_; 
if (v_isShared_5028_ == 0)
{
v___x_5030_ = v___x_5027_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5031_; 
v_reuseFailAlloc_5031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5031_, 0, v_a_5025_);
v___x_5030_ = v_reuseFailAlloc_5031_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
return v___x_5030_;
}
}
}
}
else
{
lean_object* v_a_5033_; lean_object* v___x_5035_; uint8_t v_isShared_5036_; uint8_t v_isSharedCheck_5040_; 
lean_dec(v_fvarId_4991_);
lean_dec(v___x_4990_);
lean_dec(v_mvarId_4989_);
v_a_5033_ = lean_ctor_get(v___x_4998_, 0);
v_isSharedCheck_5040_ = !lean_is_exclusive(v___x_4998_);
if (v_isSharedCheck_5040_ == 0)
{
v___x_5035_ = v___x_4998_;
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
else
{
lean_inc(v_a_5033_);
lean_dec(v___x_4998_);
v___x_5035_ = lean_box(0);
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
v_resetjp_5034_:
{
lean_object* v___x_5038_; 
if (v_isShared_5036_ == 0)
{
v___x_5038_ = v___x_5035_;
goto v_reusejp_5037_;
}
else
{
lean_object* v_reuseFailAlloc_5039_; 
v_reuseFailAlloc_5039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5039_, 0, v_a_5033_);
v___x_5038_ = v_reuseFailAlloc_5039_;
goto v_reusejp_5037_;
}
v_reusejp_5037_:
{
return v___x_5038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed(lean_object* v_mvarId_5041_, lean_object* v___x_5042_, lean_object* v_fvarId_5043_, lean_object* v_failIfUnchanged_5044_, lean_object* v___y_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_){
_start:
{
uint8_t v_failIfUnchanged_boxed_5050_; lean_object* v_res_5051_; 
v_failIfUnchanged_boxed_5050_ = lean_unbox(v_failIfUnchanged_5044_);
v_res_5051_ = l_Lean_MVarId_letToHaveLocalDecl___lam__0(v_mvarId_5041_, v___x_5042_, v_fvarId_5043_, v_failIfUnchanged_boxed_5050_, v___y_5045_, v___y_5046_, v___y_5047_, v___y_5048_);
lean_dec(v___y_5048_);
lean_dec_ref(v___y_5047_);
lean_dec(v___y_5046_);
lean_dec_ref(v___y_5045_);
return v_res_5051_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl(lean_object* v_mvarId_5052_, lean_object* v_fvarId_5053_, uint8_t v_failIfUnchanged_5054_, lean_object* v_a_5055_, lean_object* v_a_5056_, lean_object* v_a_5057_, lean_object* v_a_5058_){
_start:
{
lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___f_5062_; lean_object* v___x_5063_; 
v___x_5060_ = ((lean_object*)(l_Lean_MVarId_letToHave___closed__1));
v___x_5061_ = lean_box(v_failIfUnchanged_5054_);
lean_inc(v_mvarId_5052_);
v___f_5062_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed), 9, 4);
lean_closure_set(v___f_5062_, 0, v_mvarId_5052_);
lean_closure_set(v___f_5062_, 1, v___x_5060_);
lean_closure_set(v___f_5062_, 2, v_fvarId_5053_);
lean_closure_set(v___f_5062_, 3, v___x_5061_);
v___x_5063_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_5052_, v___f_5062_, v_a_5055_, v_a_5056_, v_a_5057_, v_a_5058_);
return v___x_5063_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___boxed(lean_object* v_mvarId_5064_, lean_object* v_fvarId_5065_, lean_object* v_failIfUnchanged_5066_, lean_object* v_a_5067_, lean_object* v_a_5068_, lean_object* v_a_5069_, lean_object* v_a_5070_, lean_object* v_a_5071_){
_start:
{
uint8_t v_failIfUnchanged_boxed_5072_; lean_object* v_res_5073_; 
v_failIfUnchanged_boxed_5072_ = lean_unbox(v_failIfUnchanged_5066_);
v_res_5073_ = l_Lean_MVarId_letToHaveLocalDecl(v_mvarId_5064_, v_fvarId_5065_, v_failIfUnchanged_boxed_5072_, v_a_5067_, v_a_5068_, v_a_5069_, v_a_5070_);
lean_dec(v_a_5070_);
lean_dec_ref(v_a_5069_);
lean_dec(v_a_5068_);
lean_dec_ref(v_a_5067_);
return v_res_5073_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LetToHave(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_ExtractLets_instInhabitedState_default = _init_l_Lean_Meta_ExtractLets_instInhabitedState_default();
lean_mark_persistent(l_Lean_Meta_ExtractLets_instInhabitedState_default);
l_Lean_Meta_ExtractLets_instInhabitedState = _init_l_Lean_Meta_ExtractLets_instInhabitedState();
lean_mark_persistent(l_Lean_Meta_ExtractLets_instInhabitedState);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* initialize_Lean_Meta_LetToHave(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Lets(builtin);
}
#ifdef __cplusplus
}
#endif

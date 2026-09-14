// Lean compiler output
// Module: Lean.Meta.InferType
// Imports: public import Lean.Data.LBool public import Lean.Meta.Basic import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_expr_equal(lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_instantiate_level_mvars(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_instMonadExceptOfEIO___redArg();
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_ProjReductionKind_ctorIdx(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqEtaStructMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
uint8_t l_Lean_Level_isNeverZero(lean_object*);
uint8_t l_Lean_Level_isZero(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* l_Lean_Level_normalize(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_throwUnknown___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Core_instantiateTypeLevelParams___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Meta_mkExprConfigCacheKey___redArg(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_expr_lift_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_UInt64_ofNat___boxed(lean_object*);
lean_object* l_instHashableProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadStateCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isBVar(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppRange(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Literal_type(lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_expr_consume_type_annotations(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t l_Lean_Bool_toLBool(uint8_t);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadRefCoreM;
extern lean_object* l_Lean_Core_instAddMessageContextCoreM;
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_throwInterruptException___redArg(lean_object*);
lean_object* l_Lean_Meta_instBEqExprConfigCacheKey___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instHashableExprConfigCacheKey___private__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp_spec__6(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0_value;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_UInt64_ofNat___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2_value;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "_private.Lean.Meta.InferType.0.Lean.Expr.instantiateBetaRevRange.visit"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1_value;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.InferType"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "application expected"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__2 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__2_value;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateApp!Impl"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__1 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__1_value;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___boxed__const__1 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_instantiateBetaRevRange___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__0;
static lean_once_cell_t l_Lean_Expr_instantiateBetaRevRange___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__1;
static const lean_string_object l_Lean_Expr_instantiateBetaRevRange___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Expr.instantiateBetaRevRange"};
static const lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__2 = (const lean_object*)&l_Lean_Expr_instantiateBetaRevRange___closed__2_value;
static const lean_string_object l_Lean_Expr_instantiateBetaRevRange___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 42, .m_data = "assertion violation: stop ≤ args.size\n    "};
static const lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__3 = (const lean_object*)&l_Lean_Expr_instantiateBetaRevRange___closed__3_value;
static lean_once_cell_t l_Lean_Expr_instantiateBetaRevRange___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_instantiateBetaRevRange___closed__4;
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwFunctionExpected___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "function expected"};
static const lean_object* l_Lean_Meta_throwFunctionExpected___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwFunctionExpected___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwFunctionExpected___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwFunctionExpected___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "incorrect number of universe levels "};
static const lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid projection"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nfrom type"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwTypeExpected___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "type expected"};
static const lean_object* l_Lean_Meta_throwTypeExpected___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwTypeExpected___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwTypeExpected___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwTypeExpected___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwUnknownMVar___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unknown metavariable '\?"};
static const lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwUnknownMVar___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwUnknownMVar___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__1;
static const lean_string_object l_Lean_Meta_throwUnknownMVar___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_throwUnknownMVar___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_throwUnknownMVar___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwUnknownMVar___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqExprConfigCacheKey___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11_value;
static const lean_closure_object l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instHashableExprConfigCacheKey___private__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected bound variable "};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "outParam"};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_isPropFormerType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isPropFormerType___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected dependent type "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_arrowDomainsN___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "type "};
static const lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_arrowDomainsN___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_arrowDomainsN___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_arrowDomainsN___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " does not have "};
static const lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_arrowDomainsN___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_arrowDomainsN___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_arrowDomainsN___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " parameters"};
static const lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_arrowDomainsN___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_arrowDomainsN___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_arrowDomainsN___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar(lean_object* v_start_1_, lean_object* v_stop_2_, lean_object* v_args_3_, lean_object* v_vidx_4_, lean_object* v_offset_5_){
_start:
{
lean_object* v_n_6_; lean_object* v___x_7_; uint8_t v___x_8_; 
v_n_6_ = lean_nat_sub(v_stop_2_, v_start_1_);
v___x_7_ = lean_nat_add(v_offset_5_, v_n_6_);
v___x_8_ = lean_nat_dec_lt(v_vidx_4_, v___x_7_);
lean_dec(v___x_7_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_nat_sub(v_vidx_4_, v_n_6_);
lean_dec(v_n_6_);
v___x_10_ = l_Lean_Expr_bvar___override(v___x_9_);
return v___x_10_;
}
else
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
lean_dec(v_n_6_);
v___x_11_ = l_Lean_instInhabitedExpr;
v___x_12_ = lean_nat_sub(v_vidx_4_, v_offset_5_);
v___x_13_ = lean_nat_sub(v_stop_2_, v___x_12_);
lean_dec(v___x_12_);
v___x_14_ = lean_unsigned_to_nat(1u);
v___x_15_ = lean_nat_sub(v___x_13_, v___x_14_);
lean_dec(v___x_13_);
v___x_16_ = lean_array_get_borrowed(v___x_11_, v_args_3_, v___x_15_);
lean_dec(v___x_15_);
v___x_17_ = lean_unsigned_to_nat(0u);
v___x_18_ = lean_expr_lift_loose_bvars(v___x_16_, v___x_17_, v_offset_5_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar___boxed(lean_object* v_start_19_, lean_object* v_stop_20_, lean_object* v_args_21_, lean_object* v_vidx_22_, lean_object* v_offset_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar(v_start_19_, v_stop_20_, v_args_21_, v_vidx_22_, v_offset_23_);
lean_dec(v_offset_23_);
lean_dec(v_vidx_22_);
lean_dec_ref(v_args_21_);
lean_dec(v_stop_20_);
lean_dec(v_start_19_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10___redArg(lean_object* v_x_25_, lean_object* v_x_26_){
_start:
{
if (lean_obj_tag(v_x_26_) == 0)
{
return v_x_25_;
}
else
{
lean_object* v_key_27_; lean_object* v_value_28_; lean_object* v_tail_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_56_; 
v_key_27_ = lean_ctor_get(v_x_26_, 0);
v_value_28_ = lean_ctor_get(v_x_26_, 1);
v_tail_29_ = lean_ctor_get(v_x_26_, 2);
v_isSharedCheck_56_ = !lean_is_exclusive(v_x_26_);
if (v_isSharedCheck_56_ == 0)
{
v___x_31_ = v_x_26_;
v_isShared_32_ = v_isSharedCheck_56_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_tail_29_);
lean_inc(v_value_28_);
lean_inc(v_key_27_);
lean_dec(v_x_26_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_56_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v_fst_33_; lean_object* v_snd_34_; lean_object* v___x_35_; uint64_t v___x_36_; uint64_t v___x_37_; uint64_t v___x_38_; uint64_t v___x_39_; uint64_t v___x_40_; uint64_t v_fold_41_; uint64_t v___x_42_; uint64_t v___x_43_; uint64_t v___x_44_; size_t v___x_45_; size_t v___x_46_; size_t v___x_47_; size_t v___x_48_; size_t v___x_49_; lean_object* v___x_50_; lean_object* v___x_52_; 
v_fst_33_ = lean_ctor_get(v_key_27_, 0);
v_snd_34_ = lean_ctor_get(v_key_27_, 1);
v___x_35_ = lean_array_get_size(v_x_25_);
v___x_36_ = l_Lean_ExprStructEq_hash(v_fst_33_);
v___x_37_ = lean_uint64_of_nat(v_snd_34_);
v___x_38_ = lean_uint64_mix_hash(v___x_36_, v___x_37_);
v___x_39_ = 32ULL;
v___x_40_ = lean_uint64_shift_right(v___x_38_, v___x_39_);
v_fold_41_ = lean_uint64_xor(v___x_38_, v___x_40_);
v___x_42_ = 16ULL;
v___x_43_ = lean_uint64_shift_right(v_fold_41_, v___x_42_);
v___x_44_ = lean_uint64_xor(v_fold_41_, v___x_43_);
v___x_45_ = lean_uint64_to_usize(v___x_44_);
v___x_46_ = lean_usize_of_nat(v___x_35_);
v___x_47_ = ((size_t)1ULL);
v___x_48_ = lean_usize_sub(v___x_46_, v___x_47_);
v___x_49_ = lean_usize_land(v___x_45_, v___x_48_);
v___x_50_ = lean_array_uget_borrowed(v_x_25_, v___x_49_);
lean_inc(v___x_50_);
if (v_isShared_32_ == 0)
{
lean_ctor_set(v___x_31_, 2, v___x_50_);
v___x_52_ = v___x_31_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_key_27_);
lean_ctor_set(v_reuseFailAlloc_55_, 1, v_value_28_);
lean_ctor_set(v_reuseFailAlloc_55_, 2, v___x_50_);
v___x_52_ = v_reuseFailAlloc_55_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
lean_object* v___x_53_; 
v___x_53_ = lean_array_uset(v_x_25_, v___x_49_, v___x_52_);
v_x_25_ = v___x_53_;
v_x_26_ = v_tail_29_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8___redArg(lean_object* v_i_57_, lean_object* v_source_58_, lean_object* v_target_59_){
_start:
{
lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_60_ = lean_array_get_size(v_source_58_);
v___x_61_ = lean_nat_dec_lt(v_i_57_, v___x_60_);
if (v___x_61_ == 0)
{
lean_dec_ref(v_source_58_);
lean_dec(v_i_57_);
return v_target_59_;
}
else
{
lean_object* v_es_62_; lean_object* v___x_63_; lean_object* v_source_64_; lean_object* v_target_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v_es_62_ = lean_array_fget(v_source_58_, v_i_57_);
v___x_63_ = lean_box(0);
v_source_64_ = lean_array_fset(v_source_58_, v_i_57_, v___x_63_);
v_target_65_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10___redArg(v_target_59_, v_es_62_);
v___x_66_ = lean_unsigned_to_nat(1u);
v___x_67_ = lean_nat_add(v_i_57_, v___x_66_);
lean_dec(v_i_57_);
v_i_57_ = v___x_67_;
v_source_58_ = v_source_64_;
v_target_59_ = v_target_65_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3___redArg(lean_object* v_data_69_){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v_nbuckets_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_70_ = lean_array_get_size(v_data_69_);
v___x_71_ = lean_unsigned_to_nat(2u);
v_nbuckets_72_ = lean_nat_mul(v___x_70_, v___x_71_);
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = lean_box(0);
v___x_75_ = lean_mk_array(v_nbuckets_72_, v___x_74_);
v___x_76_ = lean_array_propagate_mark(v_data_69_, v___x_75_);
v___x_77_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8___redArg(v___x_73_, v_data_69_, v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(lean_object* v_a_78_, lean_object* v_x_79_){
_start:
{
if (lean_obj_tag(v_x_79_) == 0)
{
uint8_t v___x_80_; 
v___x_80_ = 0;
return v___x_80_;
}
else
{
lean_object* v_key_81_; lean_object* v_tail_82_; uint8_t v___y_84_; lean_object* v_fst_86_; lean_object* v_snd_87_; lean_object* v_fst_88_; lean_object* v_snd_89_; uint8_t v___x_90_; 
v_key_81_ = lean_ctor_get(v_x_79_, 0);
v_tail_82_ = lean_ctor_get(v_x_79_, 2);
v_fst_86_ = lean_ctor_get(v_key_81_, 0);
v_snd_87_ = lean_ctor_get(v_key_81_, 1);
v_fst_88_ = lean_ctor_get(v_a_78_, 0);
v_snd_89_ = lean_ctor_get(v_a_78_, 1);
v___x_90_ = l_Lean_ExprStructEq_beq(v_fst_86_, v_fst_88_);
if (v___x_90_ == 0)
{
v___y_84_ = v___x_90_;
goto v___jp_83_;
}
else
{
uint8_t v___x_91_; 
v___x_91_ = lean_nat_dec_eq(v_snd_87_, v_snd_89_);
v___y_84_ = v___x_91_;
goto v___jp_83_;
}
v___jp_83_:
{
if (v___y_84_ == 0)
{
v_x_79_ = v_tail_82_;
goto _start;
}
else
{
return v___y_84_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg___boxed(lean_object* v_a_92_, lean_object* v_x_93_){
_start:
{
uint8_t v_res_94_; lean_object* v_r_95_; 
v_res_94_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(v_a_92_, v_x_93_);
lean_dec(v_x_93_);
lean_dec_ref(v_a_92_);
v_r_95_ = lean_box(v_res_94_);
return v_r_95_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(lean_object* v_a_96_, lean_object* v_b_97_, lean_object* v_x_98_){
_start:
{
if (lean_obj_tag(v_x_98_) == 0)
{
lean_dec(v_b_97_);
lean_dec_ref(v_a_96_);
return v_x_98_;
}
else
{
lean_object* v_key_99_; lean_object* v_value_100_; lean_object* v_tail_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_120_; 
v_key_99_ = lean_ctor_get(v_x_98_, 0);
v_value_100_ = lean_ctor_get(v_x_98_, 1);
v_tail_101_ = lean_ctor_get(v_x_98_, 2);
v_isSharedCheck_120_ = !lean_is_exclusive(v_x_98_);
if (v_isSharedCheck_120_ == 0)
{
v___x_103_ = v_x_98_;
v_isShared_104_ = v_isSharedCheck_120_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_tail_101_);
lean_inc(v_value_100_);
lean_inc(v_key_99_);
lean_dec(v_x_98_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_120_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
uint8_t v___y_106_; lean_object* v_fst_114_; lean_object* v_snd_115_; lean_object* v_fst_116_; lean_object* v_snd_117_; uint8_t v___x_118_; 
v_fst_114_ = lean_ctor_get(v_key_99_, 0);
v_snd_115_ = lean_ctor_get(v_key_99_, 1);
v_fst_116_ = lean_ctor_get(v_a_96_, 0);
v_snd_117_ = lean_ctor_get(v_a_96_, 1);
v___x_118_ = l_Lean_ExprStructEq_beq(v_fst_114_, v_fst_116_);
if (v___x_118_ == 0)
{
v___y_106_ = v___x_118_;
goto v___jp_105_;
}
else
{
uint8_t v___x_119_; 
v___x_119_ = lean_nat_dec_eq(v_snd_115_, v_snd_117_);
v___y_106_ = v___x_119_;
goto v___jp_105_;
}
v___jp_105_:
{
if (v___y_106_ == 0)
{
lean_object* v___x_107_; lean_object* v___x_109_; 
v___x_107_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(v_a_96_, v_b_97_, v_tail_101_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 2, v___x_107_);
v___x_109_ = v___x_103_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_key_99_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v_value_100_);
lean_ctor_set(v_reuseFailAlloc_110_, 2, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
else
{
lean_object* v___x_112_; 
lean_dec(v_value_100_);
lean_dec(v_key_99_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v_b_97_);
lean_ctor_set(v___x_103_, 0, v_a_96_);
v___x_112_ = v___x_103_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_96_);
lean_ctor_set(v_reuseFailAlloc_113_, 1, v_b_97_);
lean_ctor_set(v_reuseFailAlloc_113_, 2, v_tail_101_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(lean_object* v_m_121_, lean_object* v_a_122_, lean_object* v_b_123_){
_start:
{
lean_object* v_size_124_; lean_object* v_buckets_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_172_; 
v_size_124_ = lean_ctor_get(v_m_121_, 0);
v_buckets_125_ = lean_ctor_get(v_m_121_, 1);
v_isSharedCheck_172_ = !lean_is_exclusive(v_m_121_);
if (v_isSharedCheck_172_ == 0)
{
v___x_127_ = v_m_121_;
v_isShared_128_ = v_isSharedCheck_172_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_buckets_125_);
lean_inc(v_size_124_);
lean_dec(v_m_121_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_172_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v_fst_129_; lean_object* v_snd_130_; lean_object* v___x_131_; uint64_t v___x_132_; uint64_t v___x_133_; uint64_t v___x_134_; uint64_t v___x_135_; uint64_t v___x_136_; uint64_t v_fold_137_; uint64_t v___x_138_; uint64_t v___x_139_; uint64_t v___x_140_; size_t v___x_141_; size_t v___x_142_; size_t v___x_143_; size_t v___x_144_; size_t v___x_145_; lean_object* v_bkt_146_; uint8_t v___x_147_; 
v_fst_129_ = lean_ctor_get(v_a_122_, 0);
v_snd_130_ = lean_ctor_get(v_a_122_, 1);
v___x_131_ = lean_array_get_size(v_buckets_125_);
v___x_132_ = l_Lean_ExprStructEq_hash(v_fst_129_);
v___x_133_ = lean_uint64_of_nat(v_snd_130_);
v___x_134_ = lean_uint64_mix_hash(v___x_132_, v___x_133_);
v___x_135_ = 32ULL;
v___x_136_ = lean_uint64_shift_right(v___x_134_, v___x_135_);
v_fold_137_ = lean_uint64_xor(v___x_134_, v___x_136_);
v___x_138_ = 16ULL;
v___x_139_ = lean_uint64_shift_right(v_fold_137_, v___x_138_);
v___x_140_ = lean_uint64_xor(v_fold_137_, v___x_139_);
v___x_141_ = lean_uint64_to_usize(v___x_140_);
v___x_142_ = lean_usize_of_nat(v___x_131_);
v___x_143_ = ((size_t)1ULL);
v___x_144_ = lean_usize_sub(v___x_142_, v___x_143_);
v___x_145_ = lean_usize_land(v___x_141_, v___x_144_);
v_bkt_146_ = lean_array_uget_borrowed(v_buckets_125_, v___x_145_);
v___x_147_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(v_a_122_, v_bkt_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; lean_object* v_size_x27_149_; lean_object* v___x_150_; lean_object* v_buckets_x27_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; 
v___x_148_ = lean_unsigned_to_nat(1u);
v_size_x27_149_ = lean_nat_add(v_size_124_, v___x_148_);
lean_dec(v_size_124_);
lean_inc(v_bkt_146_);
v___x_150_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_150_, 0, v_a_122_);
lean_ctor_set(v___x_150_, 1, v_b_123_);
lean_ctor_set(v___x_150_, 2, v_bkt_146_);
v_buckets_x27_151_ = lean_array_uset(v_buckets_125_, v___x_145_, v___x_150_);
v___x_152_ = lean_unsigned_to_nat(4u);
v___x_153_ = lean_nat_mul(v_size_x27_149_, v___x_152_);
v___x_154_ = lean_unsigned_to_nat(3u);
v___x_155_ = lean_nat_div(v___x_153_, v___x_154_);
lean_dec(v___x_153_);
v___x_156_ = lean_array_get_size(v_buckets_x27_151_);
v___x_157_ = lean_nat_dec_le(v___x_155_, v___x_156_);
lean_dec(v___x_155_);
if (v___x_157_ == 0)
{
lean_object* v_val_158_; lean_object* v___x_160_; 
v_val_158_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3___redArg(v_buckets_x27_151_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v_val_158_);
lean_ctor_set(v___x_127_, 0, v_size_x27_149_);
v___x_160_ = v___x_127_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_size_x27_149_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v_val_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
else
{
lean_object* v___x_163_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v_buckets_x27_151_);
lean_ctor_set(v___x_127_, 0, v_size_x27_149_);
v___x_163_ = v___x_127_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_size_x27_149_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v_buckets_x27_151_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
else
{
lean_object* v___x_165_; lean_object* v_buckets_x27_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_170_; 
lean_inc(v_bkt_146_);
v___x_165_ = lean_box(0);
v_buckets_x27_166_ = lean_array_uset(v_buckets_125_, v___x_145_, v___x_165_);
v___x_167_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(v_a_122_, v_b_123_, v_bkt_146_);
v___x_168_ = lean_array_uset(v_buckets_x27_166_, v___x_145_, v___x_167_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 1, v___x_168_);
v___x_170_ = v___x_127_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_size_124_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v___x_168_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp_spec__6(lean_object* v_msg_173_){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = l_Lean_instInhabitedExpr;
v___x_175_ = lean_panic_fn_borrowed(v___x_174_, v_msg_173_);
return v___x_175_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1(void){
_start:
{
lean_object* v___x_177_; lean_object* v___f_178_; 
v___x_177_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___f_178_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_178_, 0, v___x_177_);
return v___f_178_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(lean_object* v_msg_188_, lean_object* v___y_189_){
_start:
{
lean_object* v___x_190_; lean_object* v___f_191_; lean_object* v___f_192_; lean_object* v___x_193_; lean_object* v___f_194_; lean_object* v___f_195_; lean_object* v___f_196_; lean_object* v___f_197_; lean_object* v___f_198_; lean_object* v___f_199_; lean_object* v___f_200_; lean_object* v___f_201_; lean_object* v___f_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_4810__overap_209_; lean_object* v___x_210_; 
v___x_190_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__0));
v___f_191_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1, &l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1_once, _init_l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__1);
v___f_192_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_192_, 0, v___x_190_);
lean_closure_set(v___f_192_, 1, v___f_191_);
v___x_193_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__2));
v___f_194_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__3));
v___f_195_ = lean_alloc_closure((void*)(l_instHashableProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_195_, 0, v___x_193_);
lean_closure_set(v___f_195_, 1, v___f_194_);
v___f_196_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__4));
v___f_197_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__5));
v___f_198_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__6));
v___f_199_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__7));
v___f_200_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__8));
v___f_201_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__9));
v___f_202_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3___closed__10));
v___x_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_203_, 0, v___f_196_);
lean_ctor_set(v___x_203_, 1, v___f_197_);
v___x_204_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set(v___x_204_, 1, v___f_198_);
lean_ctor_set(v___x_204_, 2, v___f_199_);
lean_ctor_set(v___x_204_, 3, v___f_200_);
lean_ctor_set(v___x_204_, 4, v___f_201_);
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
lean_ctor_set(v___x_205_, 1, v___f_202_);
v___x_206_ = l_Lean_MonadStateCacheT_instMonad___redArg(v___f_192_, v___f_195_, v___x_205_);
v___x_207_ = l_Lean_instInhabitedExpr;
v___x_208_ = l_instInhabitedOfMonad___redArg(v___x_206_, v___x_207_);
v___x_4810__overap_209_ = lean_panic_fn_borrowed(v___x_208_, v_msg_188_);
lean_dec(v___x_208_);
v___x_210_ = lean_apply_1(v___x_4810__overap_209_, v___y_189_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(lean_object* v_a_211_, lean_object* v_x_212_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
lean_object* v___x_213_; 
v___x_213_ = lean_box(0);
return v___x_213_;
}
else
{
lean_object* v_key_214_; lean_object* v_value_215_; lean_object* v_tail_216_; uint8_t v___y_218_; lean_object* v_fst_221_; lean_object* v_snd_222_; lean_object* v_fst_223_; lean_object* v_snd_224_; uint8_t v___x_225_; 
v_key_214_ = lean_ctor_get(v_x_212_, 0);
v_value_215_ = lean_ctor_get(v_x_212_, 1);
v_tail_216_ = lean_ctor_get(v_x_212_, 2);
v_fst_221_ = lean_ctor_get(v_key_214_, 0);
v_snd_222_ = lean_ctor_get(v_key_214_, 1);
v_fst_223_ = lean_ctor_get(v_a_211_, 0);
v_snd_224_ = lean_ctor_get(v_a_211_, 1);
v___x_225_ = l_Lean_ExprStructEq_beq(v_fst_221_, v_fst_223_);
if (v___x_225_ == 0)
{
v___y_218_ = v___x_225_;
goto v___jp_217_;
}
else
{
uint8_t v___x_226_; 
v___x_226_ = lean_nat_dec_eq(v_snd_222_, v_snd_224_);
v___y_218_ = v___x_226_;
goto v___jp_217_;
}
v___jp_217_:
{
if (v___y_218_ == 0)
{
v_x_212_ = v_tail_216_;
goto _start;
}
else
{
lean_object* v___x_220_; 
lean_inc(v_value_215_);
v___x_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_220_, 0, v_value_215_);
return v___x_220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg___boxed(lean_object* v_a_227_, lean_object* v_x_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(v_a_227_, v_x_228_);
lean_dec(v_x_228_);
lean_dec_ref(v_a_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(lean_object* v_m_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_buckets_232_; lean_object* v_fst_233_; lean_object* v_snd_234_; lean_object* v___x_235_; uint64_t v___x_236_; uint64_t v___x_237_; uint64_t v___x_238_; uint64_t v___x_239_; uint64_t v___x_240_; uint64_t v_fold_241_; uint64_t v___x_242_; uint64_t v___x_243_; uint64_t v___x_244_; size_t v___x_245_; size_t v___x_246_; size_t v___x_247_; size_t v___x_248_; size_t v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v_buckets_232_ = lean_ctor_get(v_m_230_, 1);
v_fst_233_ = lean_ctor_get(v_a_231_, 0);
v_snd_234_ = lean_ctor_get(v_a_231_, 1);
v___x_235_ = lean_array_get_size(v_buckets_232_);
v___x_236_ = l_Lean_ExprStructEq_hash(v_fst_233_);
v___x_237_ = lean_uint64_of_nat(v_snd_234_);
v___x_238_ = lean_uint64_mix_hash(v___x_236_, v___x_237_);
v___x_239_ = 32ULL;
v___x_240_ = lean_uint64_shift_right(v___x_238_, v___x_239_);
v_fold_241_ = lean_uint64_xor(v___x_238_, v___x_240_);
v___x_242_ = 16ULL;
v___x_243_ = lean_uint64_shift_right(v_fold_241_, v___x_242_);
v___x_244_ = lean_uint64_xor(v_fold_241_, v___x_243_);
v___x_245_ = lean_uint64_to_usize(v___x_244_);
v___x_246_ = lean_usize_of_nat(v___x_235_);
v___x_247_ = ((size_t)1ULL);
v___x_248_ = lean_usize_sub(v___x_246_, v___x_247_);
v___x_249_ = lean_usize_land(v___x_245_, v___x_248_);
v___x_250_ = lean_array_uget_borrowed(v_buckets_232_, v___x_249_);
v___x_251_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(v_a_231_, v___x_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg___boxed(lean_object* v_m_252_, lean_object* v_a_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v_m_252_, v_a_253_);
lean_dec_ref(v_a_253_);
lean_dec_ref(v_m_252_);
return v_res_254_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_258_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_259_ = lean_unsigned_to_nat(21u);
v___x_260_ = lean_unsigned_to_nat(96u);
v___x_261_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_262_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_263_ = l_mkPanicMessageWithDecl(v___x_262_, v___x_261_, v___x_260_, v___x_259_, v___x_258_);
return v___x_263_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_264_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_265_ = lean_unsigned_to_nat(21u);
v___x_266_ = lean_unsigned_to_nat(97u);
v___x_267_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_268_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_269_ = l_mkPanicMessageWithDecl(v___x_268_, v___x_267_, v___x_266_, v___x_265_, v___x_264_);
return v___x_269_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_270_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_271_ = lean_unsigned_to_nat(21u);
v___x_272_ = lean_unsigned_to_nat(98u);
v___x_273_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_274_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_275_ = l_mkPanicMessageWithDecl(v___x_274_, v___x_273_, v___x_272_, v___x_271_, v___x_270_);
return v___x_275_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_276_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_277_ = lean_unsigned_to_nat(21u);
v___x_278_ = lean_unsigned_to_nat(95u);
v___x_279_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_280_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_281_ = l_mkPanicMessageWithDecl(v___x_280_, v___x_279_, v___x_278_, v___x_277_, v___x_276_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta(lean_object* v_start_282_, lean_object* v_stop_283_, lean_object* v_args_284_, lean_object* v_e_285_, lean_object* v_offset_286_, lean_object* v_a_287_){
_start:
{
lean_object* v___x_288_; uint8_t v___x_289_; 
v___x_288_ = l_Lean_Expr_looseBVarRange(v_e_285_);
v___x_289_ = lean_nat_dec_le(v___x_288_, v_offset_286_);
lean_dec(v___x_288_);
if (v___x_289_ == 0)
{
if (lean_obj_tag(v_e_285_) == 5)
{
lean_object* v_fn_290_; lean_object* v_arg_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v_fn_290_ = lean_ctor_get(v_e_285_, 0);
lean_inc_ref(v_fn_290_);
v_arg_291_ = lean_ctor_get(v_e_285_, 1);
lean_inc_ref(v_arg_291_);
lean_inc(v_offset_286_);
lean_inc_ref(v_e_285_);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v_e_285_);
lean_ctor_set(v___x_292_, 1, v_offset_286_);
v___x_293_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v_a_287_, v___x_292_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v___x_294_; lean_object* v_fst_295_; lean_object* v_snd_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_304_; 
v___x_294_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(v_start_282_, v_stop_283_, v_args_284_, v_e_285_, v_fn_290_, v_arg_291_, v_offset_286_, v_a_287_);
v_fst_295_ = lean_ctor_get(v___x_294_, 0);
v_snd_296_ = lean_ctor_get(v___x_294_, 1);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_304_ == 0)
{
v___x_298_ = v___x_294_;
v_isShared_299_ = v_isSharedCheck_304_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_snd_296_);
lean_inc(v_fst_295_);
lean_dec(v___x_294_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_304_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_300_; lean_object* v___x_302_; 
lean_inc(v_fst_295_);
v___x_300_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(v_snd_296_, v___x_292_, v_fst_295_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 1, v___x_300_);
v___x_302_ = v___x_298_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_fst_295_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v___x_300_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
else
{
lean_object* v_val_305_; lean_object* v___x_306_; 
lean_dec_ref_known(v___x_292_, 2);
lean_dec_ref(v_arg_291_);
lean_dec_ref(v_fn_290_);
lean_dec_ref_known(v_e_285_, 2);
lean_dec(v_offset_286_);
lean_dec_ref(v_args_284_);
lean_dec(v_stop_283_);
lean_dec(v_start_282_);
v_val_305_ = lean_ctor_get(v___x_293_, 0);
lean_inc(v_val_305_);
lean_dec_ref_known(v___x_293_, 1);
v___x_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_306_, 0, v_val_305_);
lean_ctor_set(v___x_306_, 1, v_a_287_);
return v___x_306_;
}
}
else
{
lean_object* v___x_307_; 
v___x_307_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_282_, v_stop_283_, v_args_284_, v_e_285_, v_offset_286_, v_a_287_);
return v___x_307_;
}
}
else
{
lean_object* v___x_308_; 
lean_dec(v_offset_286_);
lean_dec_ref(v_args_284_);
lean_dec(v_stop_283_);
lean_dec(v_start_282_);
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v_e_285_);
lean_ctor_set(v___x_308_, 1, v_a_287_);
return v___x_308_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_312_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__2));
v___x_313_ = lean_unsigned_to_nat(18u);
v___x_314_ = lean_unsigned_to_nat(1847u);
v___x_315_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__1));
v___x_316_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__0));
v___x_317_ = l_mkPanicMessageWithDecl(v___x_316_, v___x_315_, v___x_314_, v___x_313_, v___x_312_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(lean_object* v_start_318_, lean_object* v_stop_319_, lean_object* v_args_320_, lean_object* v_e_321_, lean_object* v_f_322_, lean_object* v_a_323_, lean_object* v_offset_324_, lean_object* v_a_325_){
_start:
{
lean_object* v___x_326_; lean_object* v_fst_327_; lean_object* v_snd_328_; lean_object* v___x_329_; 
lean_inc(v_offset_324_);
lean_inc_ref(v_args_320_);
lean_inc(v_stop_319_);
lean_inc(v_start_318_);
v___x_326_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta(v_start_318_, v_stop_319_, v_args_320_, v_f_322_, v_offset_324_, v_a_325_);
v_fst_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_fst_327_);
v_snd_328_ = lean_ctor_get(v___x_326_, 1);
lean_inc(v_snd_328_);
lean_dec_ref(v___x_326_);
v___x_329_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_318_, v_stop_319_, v_args_320_, v_a_323_, v_offset_324_, v_snd_328_);
if (lean_obj_tag(v_e_321_) == 5)
{
lean_object* v_fst_330_; lean_object* v_snd_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_354_; 
v_fst_330_ = lean_ctor_get(v___x_329_, 0);
v_snd_331_ = lean_ctor_get(v___x_329_, 1);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_354_ == 0)
{
v___x_333_ = v___x_329_;
v_isShared_334_ = v_isSharedCheck_354_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_snd_331_);
lean_inc(v_fst_330_);
lean_dec(v___x_329_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_354_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v_fn_335_; lean_object* v_arg_336_; size_t v___x_337_; size_t v___x_338_; uint8_t v___x_339_; 
v_fn_335_ = lean_ctor_get(v_e_321_, 0);
v_arg_336_ = lean_ctor_get(v_e_321_, 1);
v___x_337_ = lean_ptr_addr(v_fn_335_);
v___x_338_ = lean_ptr_addr(v_fst_327_);
v___x_339_ = lean_usize_dec_eq(v___x_337_, v___x_338_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; lean_object* v___x_342_; 
lean_dec_ref_known(v_e_321_, 2);
v___x_340_ = l_Lean_Expr_app___override(v_fst_327_, v_fst_330_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_340_);
v___x_342_ = v___x_333_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_340_);
lean_ctor_set(v_reuseFailAlloc_343_, 1, v_snd_331_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
else
{
size_t v___x_344_; size_t v___x_345_; uint8_t v___x_346_; 
v___x_344_ = lean_ptr_addr(v_arg_336_);
v___x_345_ = lean_ptr_addr(v_fst_330_);
v___x_346_ = lean_usize_dec_eq(v___x_344_, v___x_345_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_349_; 
lean_dec_ref_known(v_e_321_, 2);
v___x_347_ = l_Lean_Expr_app___override(v_fst_327_, v_fst_330_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_347_);
v___x_349_ = v___x_333_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_347_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_snd_331_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
else
{
lean_object* v___x_352_; 
lean_dec(v_fst_330_);
lean_dec(v_fst_327_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v_e_321_);
v___x_352_ = v___x_333_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_e_321_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_snd_331_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
}
else
{
lean_object* v_snd_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_364_; 
lean_dec(v_fst_327_);
lean_dec_ref(v_e_321_);
v_snd_355_ = lean_ctor_get(v___x_329_, 1);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_364_ == 0)
{
lean_object* v_unused_365_; 
v_unused_365_ = lean_ctor_get(v___x_329_, 0);
lean_dec(v_unused_365_);
v___x_357_ = v___x_329_;
v_isShared_358_ = v_isSharedCheck_364_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_snd_355_);
lean_dec(v___x_329_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_364_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_359_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp___closed__3);
v___x_360_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp_spec__6(v___x_359_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v___x_360_);
v___x_362_ = v___x_357_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_360_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v_snd_355_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4___boxed(lean_object* v_start_368_, lean_object* v_stop_369_, lean_object* v_args_370_, lean_object* v_offset_371_, lean_object* v_sz_372_, lean_object* v_i_373_, lean_object* v_bs_374_, lean_object* v___y_375_){
_start:
{
size_t v_sz_boxed_376_; size_t v_i_boxed_377_; lean_object* v_res_378_; 
v_sz_boxed_376_ = lean_unbox_usize(v_sz_372_);
lean_dec(v_sz_372_);
v_i_boxed_377_ = lean_unbox_usize(v_i_373_);
lean_dec(v_i_373_);
v_res_378_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(v_start_368_, v_stop_369_, v_args_370_, v_offset_371_, v_sz_boxed_376_, v_i_boxed_377_, v_bs_374_, v___y_375_);
return v_res_378_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_379_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__2));
v___x_380_ = lean_unsigned_to_nat(21u);
v___x_381_ = lean_unsigned_to_nat(99u);
v___x_382_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__1));
v___x_383_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_384_ = l_mkPanicMessageWithDecl(v___x_383_, v___x_382_, v___x_381_, v___x_380_, v___x_379_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(lean_object* v_start_385_, lean_object* v_stop_386_, lean_object* v_args_387_, lean_object* v_e_388_, lean_object* v_offset_389_, lean_object* v_a_390_){
_start:
{
lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_391_ = l_Lean_Expr_looseBVarRange(v_e_388_);
v___x_392_ = lean_nat_dec_le(v___x_391_, v_offset_389_);
lean_dec(v___x_391_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; lean_object* v_fst_395_; lean_object* v_snd_396_; lean_object* v___y_400_; lean_object* v___x_403_; 
lean_inc(v_offset_389_);
lean_inc_ref(v_e_388_);
v___x_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_393_, 0, v_e_388_);
lean_ctor_set(v___x_393_, 1, v_offset_389_);
v___x_403_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v_a_390_, v___x_393_);
if (lean_obj_tag(v___x_403_) == 0)
{
switch(lean_obj_tag(v_e_388_))
{
case 0:
{
lean_object* v_deBruijnIndex_404_; lean_object* v___x_405_; 
v_deBruijnIndex_404_ = lean_ctor_get(v_e_388_, 0);
lean_inc(v_deBruijnIndex_404_);
lean_dec_ref_known(v_e_388_, 1);
v___x_405_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitBVar(v_start_385_, v_stop_386_, v_args_387_, v_deBruijnIndex_404_, v_offset_389_);
lean_dec(v_offset_389_);
lean_dec(v_deBruijnIndex_404_);
lean_dec_ref(v_args_387_);
lean_dec(v_stop_386_);
lean_dec(v_start_385_);
v_fst_395_ = v___x_405_;
v_snd_396_ = v_a_390_;
goto v___jp_394_;
}
case 1:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec_ref_known(v_e_388_, 1);
lean_dec(v_offset_389_);
lean_dec_ref(v_args_387_);
lean_dec(v_stop_386_);
lean_dec(v_start_385_);
v___x_406_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__3);
v___x_407_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_406_, v_a_390_);
v___y_400_ = v___x_407_;
goto v___jp_399_;
}
case 2:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec_ref_known(v_e_388_, 1);
lean_dec(v_offset_389_);
lean_dec_ref(v_args_387_);
lean_dec(v_stop_386_);
lean_dec(v_start_385_);
v___x_408_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__4);
v___x_409_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_408_, v_a_390_);
v___y_400_ = v___x_409_;
goto v___jp_399_;
}
case 3:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
lean_dec_ref_known(v_e_388_, 1);
lean_dec(v_offset_389_);
lean_dec_ref(v_args_387_);
lean_dec(v_stop_386_);
lean_dec(v_start_385_);
v___x_410_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__5);
v___x_411_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_410_, v_a_390_);
v___y_400_ = v___x_411_;
goto v___jp_399_;
}
case 4:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
lean_dec_ref_known(v_e_388_, 2);
lean_dec(v_offset_389_);
lean_dec_ref(v_args_387_);
lean_dec(v_stop_386_);
lean_dec(v_start_385_);
v___x_412_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__6);
v___x_413_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_412_, v_a_390_);
v___y_400_ = v___x_413_;
goto v___jp_399_;
}
case 5:
{
lean_object* v_fn_414_; lean_object* v_arg_415_; lean_object* v_head_416_; uint8_t v___x_417_; 
v_fn_414_ = lean_ctor_get(v_e_388_, 0);
v_arg_415_ = lean_ctor_get(v_e_388_, 1);
v_head_416_ = l_Lean_Expr_getAppFn(v_e_388_);
v___x_417_ = l_Lean_Expr_isBVar(v_head_416_);
if (v___x_417_ == 0)
{
lean_object* v___x_418_; 
lean_inc_ref(v_arg_415_);
lean_inc_ref(v_fn_414_);
lean_dec_ref(v_head_416_);
v___x_418_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp(v_start_385_, v_stop_386_, v_args_387_, v_e_388_, v_fn_414_, v_arg_415_, v_offset_389_, v_a_390_);
v___y_400_ = v___x_418_;
goto v___jp_399_;
}
else
{
lean_object* v___x_419_; lean_object* v_fst_420_; lean_object* v_snd_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; size_t v_sz_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_5516__overap_430_; lean_object* v___x_431_; lean_object* v_fst_432_; lean_object* v_snd_433_; lean_object* v___x_434_; 
lean_inc(v_offset_389_);
lean_inc_ref(v_args_387_);
lean_inc(v_stop_386_);
lean_inc(v_start_385_);
v___x_419_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_385_, v_stop_386_, v_args_387_, v_head_416_, v_offset_389_, v_a_390_);
v_fst_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_fst_420_);
v_snd_421_ = lean_ctor_get(v___x_419_, 1);
lean_inc(v_snd_421_);
lean_dec_ref(v___x_419_);
v___x_422_ = l_Lean_Expr_getAppNumArgs(v_e_388_);
v___x_423_ = lean_mk_empty_array_with_capacity(v___x_422_);
lean_dec(v___x_422_);
v___x_424_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_388_, v___x_423_);
v_sz_425_ = lean_array_size(v___x_424_);
v___x_426_ = l_unsafeCast___redArg(v___x_424_);
lean_dec_ref(v___x_424_);
v___x_427_ = lean_box_usize(v_sz_425_);
v___x_428_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___boxed__const__1));
v___x_429_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4___boxed), 8, 7);
lean_closure_set(v___x_429_, 0, v_start_385_);
lean_closure_set(v___x_429_, 1, v_stop_386_);
lean_closure_set(v___x_429_, 2, v_args_387_);
lean_closure_set(v___x_429_, 3, v_offset_389_);
lean_closure_set(v___x_429_, 4, v___x_427_);
lean_closure_set(v___x_429_, 5, v___x_428_);
lean_closure_set(v___x_429_, 6, v___x_426_);
v___x_5516__overap_430_ = l_unsafeCast___redArg(v___x_429_);
lean_dec_ref(v___x_429_);
v___x_431_ = lean_apply_1(v___x_5516__overap_430_, v_snd_421_);
v_fst_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_fst_432_);
v_snd_433_ = lean_ctor_get(v___x_431_, 1);
lean_inc(v_snd_433_);
lean_dec(v___x_431_);
v___x_434_ = l_Lean_Expr_betaRev(v_fst_420_, v_fst_432_, v___x_392_, v___x_392_);
lean_dec(v_fst_432_);
v_fst_395_ = v___x_434_;
v_snd_396_ = v_snd_433_;
goto v___jp_394_;
}
}
case 6:
{
lean_object* v_binderName_435_; lean_object* v_binderType_436_; lean_object* v_body_437_; uint8_t v_binderInfo_438_; lean_object* v___x_439_; lean_object* v_fst_440_; lean_object* v_snd_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v_fst_445_; lean_object* v_snd_446_; size_t v___x_447_; size_t v___x_448_; uint8_t v___x_449_; 
v_binderName_435_ = lean_ctor_get(v_e_388_, 0);
v_binderType_436_ = lean_ctor_get(v_e_388_, 1);
v_body_437_ = lean_ctor_get(v_e_388_, 2);
v_binderInfo_438_ = lean_ctor_get_uint8(v_e_388_, sizeof(void*)*3 + 8);
lean_inc(v_offset_389_);
lean_inc_ref(v_binderType_436_);
lean_inc_ref(v_args_387_);
lean_inc(v_stop_386_);
lean_inc(v_start_385_);
v___x_439_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_385_, v_stop_386_, v_args_387_, v_binderType_436_, v_offset_389_, v_a_390_);
v_fst_440_ = lean_ctor_get(v___x_439_, 0);
lean_inc(v_fst_440_);
v_snd_441_ = lean_ctor_get(v___x_439_, 1);
lean_inc(v_snd_441_);
lean_dec_ref(v___x_439_);
v___x_442_ = lean_unsigned_to_nat(1u);
v___x_443_ = lean_nat_add(v_offset_389_, v___x_442_);
lean_dec(v_offset_389_);
lean_inc_ref(v_body_437_);
v___x_444_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_385_, v_stop_386_, v_args_387_, v_body_437_, v___x_443_, v_snd_441_);
v_fst_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_fst_445_);
v_snd_446_ = lean_ctor_get(v___x_444_, 1);
lean_inc(v_snd_446_);
lean_dec_ref(v___x_444_);
v___x_447_ = lean_ptr_addr(v_binderType_436_);
v___x_448_ = lean_ptr_addr(v_fst_440_);
v___x_449_ = lean_usize_dec_eq(v___x_447_, v___x_448_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; 
lean_inc(v_binderName_435_);
lean_dec_ref_known(v_e_388_, 3);
v___x_450_ = l_Lean_Expr_lam___override(v_binderName_435_, v_fst_440_, v_fst_445_, v_binderInfo_438_);
v_fst_395_ = v___x_450_;
v_snd_396_ = v_snd_446_;
goto v___jp_394_;
}
else
{
size_t v___x_451_; size_t v___x_452_; uint8_t v___x_453_; 
v___x_451_ = lean_ptr_addr(v_body_437_);
v___x_452_ = lean_ptr_addr(v_fst_445_);
v___x_453_ = lean_usize_dec_eq(v___x_451_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
lean_inc(v_binderName_435_);
lean_dec_ref_known(v_e_388_, 3);
v___x_454_ = l_Lean_Expr_lam___override(v_binderName_435_, v_fst_440_, v_fst_445_, v_binderInfo_438_);
v_fst_395_ = v___x_454_;
v_snd_396_ = v_snd_446_;
goto v___jp_394_;
}
else
{
uint8_t v___x_455_; 
v___x_455_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_438_, v_binderInfo_438_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; 
lean_inc(v_binderName_435_);
lean_dec_ref_known(v_e_388_, 3);
v___x_456_ = l_Lean_Expr_lam___override(v_binderName_435_, v_fst_440_, v_fst_445_, v_binderInfo_438_);
v_fst_395_ = v___x_456_;
v_snd_396_ = v_snd_446_;
goto v___jp_394_;
}
else
{
lean_dec(v_fst_445_);
lean_dec(v_fst_440_);
v_fst_395_ = v_e_388_;
v_snd_396_ = v_snd_446_;
goto v___jp_394_;
}
}
}
}
case 7:
{
lean_object* v_binderName_457_; lean_object* v_binderType_458_; lean_object* v_body_459_; uint8_t v_binderInfo_460_; lean_object* v___x_461_; lean_object* v_fst_462_; lean_object* v_snd_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v_fst_467_; lean_object* v_snd_468_; size_t v___x_469_; size_t v___x_470_; uint8_t v___x_471_; 
v_binderName_457_ = lean_ctor_get(v_e_388_, 0);
v_binderType_458_ = lean_ctor_get(v_e_388_, 1);
v_body_459_ = lean_ctor_get(v_e_388_, 2);
v_binderInfo_460_ = lean_ctor_get_uint8(v_e_388_, sizeof(void*)*3 + 8);
lean_inc(v_offset_389_);
lean_inc_ref(v_binderType_458_);
lean_inc_ref(v_args_387_);
lean_inc(v_stop_386_);
lean_inc(v_start_385_);
v___x_461_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_385_, v_stop_386_, v_args_387_, v_binderType_458_, v_offset_389_, v_a_390_);
v_fst_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_fst_462_);
v_snd_463_ = lean_ctor_get(v___x_461_, 1);
lean_inc(v_snd_463_);
lean_dec_ref(v___x_461_);
v___x_464_ = lean_unsigned_to_nat(1u);
v___x_465_ = lean_nat_add(v_offset_389_, v___x_464_);
lean_dec(v_offset_389_);
lean_inc_ref(v_body_459_);
v___x_466_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_385_, v_stop_386_, v_args_387_, v_body_459_, v___x_465_, v_snd_463_);
v_fst_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_fst_467_);
v_snd_468_ = lean_ctor_get(v___x_466_, 1);
lean_inc(v_snd_468_);
lean_dec_ref(v___x_466_);
v___x_469_ = lean_ptr_addr(v_binderType_458_);
v___x_470_ = lean_ptr_addr(v_fst_462_);
v___x_471_ = lean_usize_dec_eq(v___x_469_, v___x_470_);
if (v___x_471_ == 0)
{
lean_object* v___x_472_; 
lean_inc(v_binderName_457_);
lean_dec_ref_known(v_e_388_, 3);
v___x_472_ = l_Lean_Expr_forallE___override(v_binderName_457_, v_fst_462_, v_fst_467_, v_binderInfo_460_);
v_fst_395_ = v___x_472_;
v_snd_396_ = v_snd_468_;
goto v___jp_394_;
}
else
{
size_t v___x_473_; size_t v___x_474_; uint8_t v___x_475_; 
v___x_473_ = lean_ptr_addr(v_body_459_);
v___x_474_ = lean_ptr_addr(v_fst_467_);
v___x_475_ = lean_usize_dec_eq(v___x_473_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; 
lean_inc(v_binderName_457_);
lean_dec_ref_known(v_e_388_, 3);
v___x_476_ = l_Lean_Expr_forallE___override(v_binderName_457_, v_fst_462_, v_fst_467_, v_binderInfo_460_);
v_fst_395_ = v___x_476_;
v_snd_396_ = v_snd_468_;
goto v___jp_394_;
}
else
{
uint8_t v___x_477_; 
v___x_477_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_460_, v_binderInfo_460_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; 
lean_inc(v_binderName_457_);
lean_dec_ref_known(v_e_388_, 3);
v___x_478_ = l_Lean_Expr_forallE___override(v_binderName_457_, v_fst_462_, v_fst_467_, v_binderInfo_460_);
v_fst_395_ = v___x_478_;
v_snd_396_ = v_snd_468_;
goto v___jp_394_;
}
else
{
lean_dec(v_fst_467_);
lean_dec(v_fst_462_);
v_fst_395_ = v_e_388_;
v_snd_396_ = v_snd_468_;
goto v___jp_394_;
}
}
}
}
case 8:
{
lean_object* v_declName_479_; lean_object* v_type_480_; lean_object* v_value_481_; lean_object* v_body_482_; uint8_t v_nondep_483_; lean_object* v___x_484_; lean_object* v_fst_485_; lean_object* v_snd_486_; lean_object* v___x_487_; lean_object* v_fst_488_; lean_object* v_snd_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v_fst_493_; lean_object* v_snd_494_; size_t v___x_495_; size_t v___x_496_; uint8_t v___x_497_; 
v_declName_479_ = lean_ctor_get(v_e_388_, 0);
v_type_480_ = lean_ctor_get(v_e_388_, 1);
v_value_481_ = lean_ctor_get(v_e_388_, 2);
v_body_482_ = lean_ctor_get(v_e_388_, 3);
v_nondep_483_ = lean_ctor_get_uint8(v_e_388_, sizeof(void*)*4 + 8);
lean_inc_n(v_offset_389_, 2);
lean_inc_ref(v_type_480_);
lean_inc_ref_n(v_args_387_, 2);
lean_inc_n(v_stop_386_, 2);
lean_inc_n(v_start_385_, 2);
v___x_484_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_385_, v_stop_386_, v_args_387_, v_type_480_, v_offset_389_, v_a_390_);
v_fst_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_fst_485_);
v_snd_486_ = lean_ctor_get(v___x_484_, 1);
lean_inc(v_snd_486_);
lean_dec_ref(v___x_484_);
lean_inc_ref(v_value_481_);
v___x_487_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_385_, v_stop_386_, v_args_387_, v_value_481_, v_offset_389_, v_snd_486_);
v_fst_488_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_fst_488_);
v_snd_489_ = lean_ctor_get(v___x_487_, 1);
lean_inc(v_snd_489_);
lean_dec_ref(v___x_487_);
v___x_490_ = lean_unsigned_to_nat(1u);
v___x_491_ = lean_nat_add(v_offset_389_, v___x_490_);
lean_dec(v_offset_389_);
lean_inc_ref(v_body_482_);
v___x_492_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_385_, v_stop_386_, v_args_387_, v_body_482_, v___x_491_, v_snd_489_);
v_fst_493_ = lean_ctor_get(v___x_492_, 0);
lean_inc(v_fst_493_);
v_snd_494_ = lean_ctor_get(v___x_492_, 1);
lean_inc(v_snd_494_);
lean_dec_ref(v___x_492_);
v___x_495_ = lean_ptr_addr(v_type_480_);
v___x_496_ = lean_ptr_addr(v_fst_485_);
v___x_497_ = lean_usize_dec_eq(v___x_495_, v___x_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; 
lean_inc(v_declName_479_);
lean_dec_ref_known(v_e_388_, 4);
v___x_498_ = l_Lean_Expr_letE___override(v_declName_479_, v_fst_485_, v_fst_488_, v_fst_493_, v_nondep_483_);
v_fst_395_ = v___x_498_;
v_snd_396_ = v_snd_494_;
goto v___jp_394_;
}
else
{
size_t v___x_499_; size_t v___x_500_; uint8_t v___x_501_; 
v___x_499_ = lean_ptr_addr(v_value_481_);
v___x_500_ = lean_ptr_addr(v_fst_488_);
v___x_501_ = lean_usize_dec_eq(v___x_499_, v___x_500_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; 
lean_inc(v_declName_479_);
lean_dec_ref_known(v_e_388_, 4);
v___x_502_ = l_Lean_Expr_letE___override(v_declName_479_, v_fst_485_, v_fst_488_, v_fst_493_, v_nondep_483_);
v_fst_395_ = v___x_502_;
v_snd_396_ = v_snd_494_;
goto v___jp_394_;
}
else
{
size_t v___x_503_; size_t v___x_504_; uint8_t v___x_505_; 
v___x_503_ = lean_ptr_addr(v_body_482_);
v___x_504_ = lean_ptr_addr(v_fst_493_);
v___x_505_ = lean_usize_dec_eq(v___x_503_, v___x_504_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; 
lean_inc(v_declName_479_);
lean_dec_ref_known(v_e_388_, 4);
v___x_506_ = l_Lean_Expr_letE___override(v_declName_479_, v_fst_485_, v_fst_488_, v_fst_493_, v_nondep_483_);
v_fst_395_ = v___x_506_;
v_snd_396_ = v_snd_494_;
goto v___jp_394_;
}
else
{
lean_dec(v_fst_493_);
lean_dec(v_fst_488_);
lean_dec(v_fst_485_);
v_fst_395_ = v_e_388_;
v_snd_396_ = v_snd_494_;
goto v___jp_394_;
}
}
}
}
case 9:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
lean_dec_ref_known(v_e_388_, 1);
lean_dec(v_offset_389_);
lean_dec_ref(v_args_387_);
lean_dec(v_stop_386_);
lean_dec(v_start_385_);
v___x_507_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7, &l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7_once, _init_l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__7);
v___x_508_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__3(v___x_507_, v_a_390_);
v___y_400_ = v___x_508_;
goto v___jp_399_;
}
case 10:
{
lean_object* v_data_509_; lean_object* v_expr_510_; lean_object* v___x_511_; lean_object* v_fst_512_; lean_object* v_snd_513_; size_t v___x_514_; size_t v___x_515_; uint8_t v___x_516_; 
v_data_509_ = lean_ctor_get(v_e_388_, 0);
v_expr_510_ = lean_ctor_get(v_e_388_, 1);
lean_inc_ref(v_expr_510_);
v___x_511_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_385_, v_stop_386_, v_args_387_, v_expr_510_, v_offset_389_, v_a_390_);
v_fst_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_fst_512_);
v_snd_513_ = lean_ctor_get(v___x_511_, 1);
lean_inc(v_snd_513_);
lean_dec_ref(v___x_511_);
v___x_514_ = lean_ptr_addr(v_expr_510_);
v___x_515_ = lean_ptr_addr(v_fst_512_);
v___x_516_ = lean_usize_dec_eq(v___x_514_, v___x_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; 
lean_inc(v_data_509_);
lean_dec_ref_known(v_e_388_, 2);
v___x_517_ = l_Lean_Expr_mdata___override(v_data_509_, v_fst_512_);
v_fst_395_ = v___x_517_;
v_snd_396_ = v_snd_513_;
goto v___jp_394_;
}
else
{
lean_dec(v_fst_512_);
v_fst_395_ = v_e_388_;
v_snd_396_ = v_snd_513_;
goto v___jp_394_;
}
}
default: 
{
lean_object* v_typeName_518_; lean_object* v_idx_519_; lean_object* v_struct_520_; lean_object* v___x_521_; lean_object* v_fst_522_; lean_object* v_snd_523_; size_t v___x_524_; size_t v___x_525_; uint8_t v___x_526_; 
v_typeName_518_ = lean_ctor_get(v_e_388_, 0);
v_idx_519_ = lean_ctor_get(v_e_388_, 1);
v_struct_520_ = lean_ctor_get(v_e_388_, 2);
lean_inc_ref(v_struct_520_);
v___x_521_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_385_, v_stop_386_, v_args_387_, v_struct_520_, v_offset_389_, v_a_390_);
v_fst_522_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_fst_522_);
v_snd_523_ = lean_ctor_get(v___x_521_, 1);
lean_inc(v_snd_523_);
lean_dec_ref(v___x_521_);
v___x_524_ = lean_ptr_addr(v_struct_520_);
v___x_525_ = lean_ptr_addr(v_fst_522_);
v___x_526_ = lean_usize_dec_eq(v___x_524_, v___x_525_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; 
lean_inc(v_idx_519_);
lean_inc(v_typeName_518_);
lean_dec_ref_known(v_e_388_, 3);
v___x_527_ = l_Lean_Expr_proj___override(v_typeName_518_, v_idx_519_, v_fst_522_);
v_fst_395_ = v___x_527_;
v_snd_396_ = v_snd_523_;
goto v___jp_394_;
}
else
{
lean_dec(v_fst_522_);
v_fst_395_ = v_e_388_;
v_snd_396_ = v_snd_523_;
goto v___jp_394_;
}
}
}
}
else
{
lean_object* v_val_528_; lean_object* v___x_529_; 
lean_dec_ref_known(v___x_393_, 2);
lean_dec(v_offset_389_);
lean_dec_ref(v_e_388_);
lean_dec_ref(v_args_387_);
lean_dec(v_stop_386_);
lean_dec(v_start_385_);
v_val_528_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_val_528_);
lean_dec_ref_known(v___x_403_, 1);
v___x_529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_529_, 0, v_val_528_);
lean_ctor_set(v___x_529_, 1, v_a_390_);
return v___x_529_;
}
v___jp_394_:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
lean_inc_ref(v_fst_395_);
v___x_397_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(v_snd_396_, v___x_393_, v_fst_395_);
v___x_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_398_, 0, v_fst_395_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
return v___x_398_;
}
v___jp_399_:
{
lean_object* v_fst_401_; lean_object* v_snd_402_; 
v_fst_401_ = lean_ctor_get(v___y_400_, 0);
lean_inc(v_fst_401_);
v_snd_402_ = lean_ctor_get(v___y_400_, 1);
lean_inc(v_snd_402_);
lean_dec_ref(v___y_400_);
v_fst_395_ = v_fst_401_;
v_snd_396_ = v_snd_402_;
goto v___jp_394_;
}
}
else
{
lean_object* v___x_530_; 
lean_dec(v_offset_389_);
lean_dec_ref(v_args_387_);
lean_dec(v_stop_386_);
lean_dec(v_start_385_);
v___x_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_530_, 0, v_e_388_);
lean_ctor_set(v___x_530_, 1, v_a_390_);
return v___x_530_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit_spec__4(lean_object* v_start_531_, lean_object* v_stop_532_, lean_object* v_args_533_, lean_object* v_offset_534_, size_t v_sz_535_, size_t v_i_536_, lean_object* v_bs_537_, lean_object* v___y_538_){
_start:
{
uint8_t v___x_539_; 
v___x_539_ = lean_usize_dec_lt(v_i_536_, v_sz_535_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; lean_object* v___x_541_; 
lean_dec(v_offset_534_);
lean_dec_ref(v_args_533_);
lean_dec(v_stop_532_);
lean_dec(v_start_531_);
v___x_540_ = l_unsafeCast___redArg(v_bs_537_);
lean_dec_ref(v_bs_537_);
v___x_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
lean_ctor_set(v___x_541_, 1, v___y_538_);
return v___x_541_;
}
else
{
lean_object* v_v_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v_fst_545_; lean_object* v_snd_546_; lean_object* v___x_547_; lean_object* v_bs_x27_548_; size_t v___x_549_; size_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v_v_542_ = lean_array_uget_borrowed(v_bs_537_, v_i_536_);
v___x_543_ = l_unsafeCast___redArg(v_v_542_);
lean_inc(v_offset_534_);
lean_inc_ref(v_args_533_);
lean_inc(v_stop_532_);
lean_inc(v_start_531_);
v___x_544_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_531_, v_stop_532_, v_args_533_, v___x_543_, v_offset_534_, v___y_538_);
v_fst_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_fst_545_);
v_snd_546_ = lean_ctor_get(v___x_544_, 1);
lean_inc(v_snd_546_);
lean_dec_ref(v___x_544_);
v___x_547_ = lean_unsigned_to_nat(0u);
v_bs_x27_548_ = lean_array_uset(v_bs_537_, v_i_536_, v___x_547_);
v___x_549_ = ((size_t)1ULL);
v___x_550_ = lean_usize_add(v_i_536_, v___x_549_);
v___x_551_ = l_unsafeCast___redArg(v_fst_545_);
lean_dec(v_fst_545_);
v___x_552_ = lean_array_uset(v_bs_x27_548_, v_i_536_, v___x_551_);
v_i_536_ = v___x_550_;
v_bs_537_ = v___x_552_;
v___y_538_ = v_snd_546_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0(lean_object* v_00_u03b2_554_, lean_object* v_m_555_, lean_object* v_a_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___redArg(v_m_555_, v_a_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0___boxed(lean_object* v_00_u03b2_558_, lean_object* v_m_559_, lean_object* v_a_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0(v_00_u03b2_558_, v_m_559_, v_a_560_);
lean_dec_ref(v_a_560_);
lean_dec_ref(v_m_559_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1(lean_object* v_00_u03b2_562_, lean_object* v_m_563_, lean_object* v_a_564_, lean_object* v_b_565_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1___redArg(v_m_563_, v_a_564_, v_b_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0(lean_object* v_00_u03b2_567_, lean_object* v_a_568_, lean_object* v_x_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___redArg(v_a_568_, v_x_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0___boxed(lean_object* v_00_u03b2_571_, lean_object* v_a_572_, lean_object* v_x_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__0_spec__0(v_00_u03b2_571_, v_a_572_, v_x_573_);
lean_dec(v_x_573_);
lean_dec_ref(v_a_572_);
return v_res_574_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2(lean_object* v_00_u03b2_575_, lean_object* v_a_576_, lean_object* v_x_577_){
_start:
{
uint8_t v___x_578_; 
v___x_578_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___redArg(v_a_576_, v_x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2___boxed(lean_object* v_00_u03b2_579_, lean_object* v_a_580_, lean_object* v_x_581_){
_start:
{
uint8_t v_res_582_; lean_object* v_r_583_; 
v_res_582_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__2(v_00_u03b2_579_, v_a_580_, v_x_581_);
lean_dec(v_x_581_);
lean_dec_ref(v_a_580_);
v_r_583_ = lean_box(v_res_582_);
return v_r_583_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3(lean_object* v_00_u03b2_584_, lean_object* v_data_585_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3___redArg(v_data_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4(lean_object* v_00_u03b2_587_, lean_object* v_a_588_, lean_object* v_b_589_, lean_object* v_x_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__4___redArg(v_a_588_, v_b_589_, v_x_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_592_, lean_object* v_i_593_, lean_object* v_source_594_, lean_object* v_target_595_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8___redArg(v_i_593_, v_source_594_, v_target_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10(lean_object* v_00_u03b2_597_, lean_object* v_x_598_, lean_object* v_x_599_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitWithoutBeta_spec__1_spec__3_spec__8_spec__10___redArg(v_x_598_, v_x_599_);
return v___x_600_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0(lean_object* v_as_601_, size_t v_i_602_, size_t v_stop_603_){
_start:
{
uint8_t v___x_604_; 
v___x_604_ = lean_usize_dec_eq(v_i_602_, v_stop_603_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; lean_object* v___x_606_; uint8_t v___x_607_; 
v___x_605_ = lean_array_uget_borrowed(v_as_601_, v_i_602_);
v___x_606_ = l_Lean_Expr_consumeMData(v___x_605_);
v___x_607_ = l_Lean_Expr_isLambda(v___x_606_);
lean_dec_ref(v___x_606_);
if (v___x_607_ == 0)
{
size_t v___x_608_; size_t v___x_609_; 
v___x_608_ = ((size_t)1ULL);
v___x_609_ = lean_usize_add(v_i_602_, v___x_608_);
v_i_602_ = v___x_609_;
goto _start;
}
else
{
return v___x_607_;
}
}
else
{
uint8_t v___x_611_; 
v___x_611_ = 0;
return v___x_611_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0___boxed(lean_object* v_as_612_, lean_object* v_i_613_, lean_object* v_stop_614_){
_start:
{
size_t v_i_boxed_615_; size_t v_stop_boxed_616_; uint8_t v_res_617_; lean_object* v_r_618_; 
v_i_boxed_615_ = lean_unbox_usize(v_i_613_);
lean_dec(v_i_613_);
v_stop_boxed_616_ = lean_unbox_usize(v_stop_614_);
lean_dec(v_stop_614_);
v_res_617_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0(v_as_612_, v_i_boxed_615_, v_stop_boxed_616_);
lean_dec_ref(v_as_612_);
v_r_618_ = lean_box(v_res_617_);
return v_r_618_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__0(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = lean_box(0);
v___x_620_ = lean_unsigned_to_nat(16u);
v___x_621_ = lean_mk_array(v___x_620_, v___x_619_);
return v___x_621_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__1(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_622_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__0, &l_Lean_Expr_instantiateBetaRevRange___closed__0_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__0);
v___x_623_ = lean_unsigned_to_nat(0u);
v___x_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
lean_ctor_set(v___x_624_, 1, v___x_622_);
return v___x_624_;
}
}
static lean_object* _init_l_Lean_Expr_instantiateBetaRevRange___closed__4(void){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_627_ = ((lean_object*)(l_Lean_Expr_instantiateBetaRevRange___closed__3));
v___x_628_ = lean_unsigned_to_nat(4u);
v___x_629_ = lean_unsigned_to_nat(39u);
v___x_630_ = ((lean_object*)(l_Lean_Expr_instantiateBetaRevRange___closed__2));
v___x_631_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___closed__0));
v___x_632_ = l_mkPanicMessageWithDecl(v___x_631_, v___x_630_, v___x_629_, v___x_628_, v___x_627_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_instantiateBetaRevRange(lean_object* v_e_633_, lean_object* v_start_634_, lean_object* v_stop_635_, lean_object* v_args_636_){
_start:
{
lean_object* v___y_638_; uint8_t v___y_650_; uint8_t v___x_657_; 
v___x_657_ = l_Lean_Expr_hasLooseBVars(v_e_633_);
if (v___x_657_ == 0)
{
v___y_650_ = v___x_657_;
goto v___jp_649_;
}
else
{
uint8_t v___x_658_; 
v___x_658_ = lean_nat_dec_lt(v_start_634_, v_stop_635_);
v___y_650_ = v___x_658_;
goto v___jp_649_;
}
v___jp_637_:
{
uint8_t v___x_639_; 
v___x_639_ = lean_nat_dec_lt(v_start_634_, v___y_638_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; 
lean_dec(v___y_638_);
v___x_640_ = lean_expr_instantiate_rev_range(v_e_633_, v_start_634_, v_stop_635_, v_args_636_);
lean_dec_ref(v_args_636_);
lean_dec(v_stop_635_);
lean_dec(v_start_634_);
lean_dec_ref(v_e_633_);
return v___x_640_;
}
else
{
size_t v___x_641_; size_t v___x_642_; uint8_t v___x_643_; 
v___x_641_ = lean_usize_of_nat(v_start_634_);
v___x_642_ = lean_usize_of_nat(v___y_638_);
lean_dec(v___y_638_);
v___x_643_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Expr_instantiateBetaRevRange_spec__0(v_args_636_, v___x_641_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; 
v___x_644_ = lean_expr_instantiate_rev_range(v_e_633_, v_start_634_, v_stop_635_, v_args_636_);
lean_dec_ref(v_args_636_);
lean_dec(v_stop_635_);
lean_dec(v_start_634_);
lean_dec_ref(v_e_633_);
return v___x_644_;
}
else
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v_fst_648_; 
v___x_645_ = lean_unsigned_to_nat(0u);
v___x_646_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__1, &l_Lean_Expr_instantiateBetaRevRange___closed__1_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__1);
v___x_647_ = l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit(v_start_634_, v_stop_635_, v_args_636_, v_e_633_, v___x_645_, v___x_646_);
v_fst_648_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_fst_648_);
lean_dec_ref(v___x_647_);
return v_fst_648_;
}
}
}
v___jp_649_:
{
if (v___y_650_ == 0)
{
lean_dec_ref(v_args_636_);
lean_dec(v_stop_635_);
lean_dec(v_start_634_);
return v_e_633_;
}
else
{
lean_object* v___x_651_; uint8_t v___x_652_; 
v___x_651_ = lean_array_get_size(v_args_636_);
v___x_652_ = lean_nat_dec_le(v_stop_635_, v___x_651_);
if (v___x_652_ == 0)
{
lean_object* v___x_653_; lean_object* v___x_654_; 
lean_dec_ref(v_args_636_);
lean_dec(v_stop_635_);
lean_dec(v_start_634_);
lean_dec_ref(v_e_633_);
v___x_653_ = lean_obj_once(&l_Lean_Expr_instantiateBetaRevRange___closed__4, &l_Lean_Expr_instantiateBetaRevRange___closed__4_once, _init_l_Lean_Expr_instantiateBetaRevRange___closed__4);
v___x_654_ = l_panic___at___00__private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visitApp_spec__6(v___x_653_);
return v___x_654_;
}
else
{
uint8_t v___x_655_; 
v___x_655_ = lean_nat_dec_lt(v_start_634_, v_stop_635_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; 
v___x_656_ = lean_expr_instantiate_rev_range(v_e_633_, v_start_634_, v_stop_635_, v_args_636_);
lean_dec_ref(v_args_636_);
lean_dec(v_stop_635_);
lean_dec(v_start_634_);
lean_dec_ref(v_e_633_);
return v___x_656_;
}
else
{
if (v___x_652_ == 0)
{
v___y_638_ = v___x_651_;
goto v___jp_637_;
}
else
{
lean_inc(v_stop_635_);
v___y_638_ = v_stop_635_;
goto v___jp_637_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(lean_object* v_msgData_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
lean_object* v___x_665_; lean_object* v_env_666_; lean_object* v___x_667_; lean_object* v_toCold_668_; lean_object* v_mctx_669_; lean_object* v_lctx_670_; lean_object* v_options_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_665_ = lean_st_ref_get(v___y_663_);
v_env_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc_ref(v_env_666_);
lean_dec(v___x_665_);
v___x_667_ = lean_st_ref_get(v___y_661_);
v_toCold_668_ = lean_ctor_get(v___y_662_, 0);
v_mctx_669_ = lean_ctor_get(v___x_667_, 0);
lean_inc_ref(v_mctx_669_);
lean_dec(v___x_667_);
v_lctx_670_ = lean_ctor_get(v___y_660_, 2);
v_options_671_ = lean_ctor_get(v_toCold_668_, 2);
lean_inc_ref(v_options_671_);
lean_inc_ref(v_lctx_670_);
v___x_672_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_672_, 0, v_env_666_);
lean_ctor_set(v___x_672_, 1, v_mctx_669_);
lean_ctor_set(v___x_672_, 2, v_lctx_670_);
lean_ctor_set(v___x_672_, 3, v_options_671_);
v___x_673_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
lean_ctor_set(v___x_673_, 1, v_msgData_659_);
v___x_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0___boxed(lean_object* v_msgData_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(v_msgData_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(lean_object* v_msg_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
lean_object* v_ref_688_; lean_object* v___x_689_; lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_698_; 
v_ref_688_ = lean_ctor_get(v___y_685_, 2);
v___x_689_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0_spec__0(v_msg_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
v_a_690_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_698_ == 0)
{
v___x_692_ = v___x_689_;
v_isShared_693_ = v_isSharedCheck_698_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_698_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_694_; lean_object* v___x_696_; 
lean_inc(v_ref_688_);
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v_ref_688_);
lean_ctor_set(v___x_694_, 1, v_a_690_);
if (v_isShared_693_ == 0)
{
lean_ctor_set_tag(v___x_692_, 1);
lean_ctor_set(v___x_692_, 0, v___x_694_);
v___x_696_ = v___x_692_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_694_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg___boxed(lean_object* v_msg_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_);
lean_dec(v___y_703_);
lean_dec_ref(v___y_702_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
return v_res_705_;
}
}
static lean_object* _init_l_Lean_Meta_throwFunctionExpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_707_ = ((lean_object*)(l_Lean_Meta_throwFunctionExpected___redArg___closed__0));
v___x_708_ = l_Lean_stringToMessageData(v___x_707_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg(lean_object* v_f_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_715_ = lean_obj_once(&l_Lean_Meta_throwFunctionExpected___redArg___closed__1, &l_Lean_Meta_throwFunctionExpected___redArg___closed__1_once, _init_l_Lean_Meta_throwFunctionExpected___redArg___closed__1);
v___x_716_ = l_Lean_indentExpr(v_f_709_);
v___x_717_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_715_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
v___x_718_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_717_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___redArg___boxed(lean_object* v_f_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_Meta_throwFunctionExpected___redArg(v_f_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_);
lean_dec(v_a_723_);
lean_dec_ref(v_a_722_);
lean_dec(v_a_721_);
lean_dec_ref(v_a_720_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected(lean_object* v_00_u03b1_726_, lean_object* v_f_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = l_Lean_Meta_throwFunctionExpected___redArg(v_f_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwFunctionExpected___boxed(lean_object* v_00_u03b1_734_, lean_object* v_f_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lean_Meta_throwFunctionExpected(v_00_u03b1_734_, v_f_735_, v_a_736_, v_a_737_, v_a_738_, v_a_739_);
lean_dec(v_a_739_);
lean_dec_ref(v_a_738_);
lean_dec(v_a_737_);
lean_dec_ref(v_a_736_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0(lean_object* v_00_u03b1_742_, lean_object* v_msg_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___boxed(lean_object* v_00_u03b1_750_, lean_object* v_msg_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0(v_00_u03b1_750_, v_msg_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(lean_object* v_upperBound_758_, lean_object* v_args_759_, lean_object* v_f_760_, lean_object* v_a_761_, lean_object* v_b_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_a_769_; uint8_t v___x_773_; 
v___x_773_ = lean_nat_dec_lt(v_a_761_, v_upperBound_758_);
if (v___x_773_ == 0)
{
lean_object* v___x_774_; 
lean_dec(v_a_761_);
lean_dec_ref(v_f_760_);
lean_dec_ref(v_args_759_);
v___x_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_774_, 0, v_b_762_);
return v___x_774_;
}
else
{
lean_object* v_fst_775_; 
v_fst_775_ = lean_ctor_get(v_b_762_, 0);
lean_inc(v_fst_775_);
if (lean_obj_tag(v_fst_775_) == 7)
{
lean_object* v_snd_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_784_; 
v_snd_776_ = lean_ctor_get(v_b_762_, 1);
v_isSharedCheck_784_ = !lean_is_exclusive(v_b_762_);
if (v_isSharedCheck_784_ == 0)
{
lean_object* v_unused_785_; 
v_unused_785_ = lean_ctor_get(v_b_762_, 0);
lean_dec(v_unused_785_);
v___x_778_ = v_b_762_;
v_isShared_779_ = v_isSharedCheck_784_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_snd_776_);
lean_dec(v_b_762_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_784_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v_body_780_; lean_object* v___x_782_; 
v_body_780_ = lean_ctor_get(v_fst_775_, 2);
lean_inc_ref(v_body_780_);
lean_dec_ref_known(v_fst_775_, 3);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 0, v_body_780_);
v___x_782_ = v___x_778_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_body_780_);
lean_ctor_set(v_reuseFailAlloc_783_, 1, v_snd_776_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
v_a_769_ = v___x_782_;
goto v___jp_768_;
}
}
}
else
{
lean_object* v_snd_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_821_; 
v_snd_786_ = lean_ctor_get(v_b_762_, 1);
v_isSharedCheck_821_ = !lean_is_exclusive(v_b_762_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; 
v_unused_822_ = lean_ctor_get(v_b_762_, 0);
lean_dec(v_unused_822_);
v___x_788_ = v_b_762_;
v_isShared_789_ = v_isSharedCheck_821_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_snd_786_);
lean_dec(v_b_762_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_821_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_790_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_args_759_);
lean_inc(v_a_761_);
lean_inc(v_snd_786_);
lean_inc(v_fst_775_);
v___x_791_ = l_Lean_Expr_instantiateBetaRevRange(v_fst_775_, v_snd_786_, v_a_761_, v_args_759_);
lean_inc(v___y_766_);
lean_inc_ref(v___y_765_);
lean_inc(v___y_764_);
lean_inc_ref(v___y_763_);
v___x_792_ = lean_whnf(v___x_791_, v___y_763_, v___y_764_, v___y_765_, v___y_766_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
if (lean_obj_tag(v_a_793_) == 7)
{
lean_object* v_body_794_; lean_object* v___x_796_; 
lean_dec(v_snd_786_);
lean_dec(v_fst_775_);
v_body_794_ = lean_ctor_get(v_a_793_, 2);
lean_inc_ref(v_body_794_);
lean_dec_ref_known(v_a_793_, 3);
lean_inc(v_a_761_);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 1, v_a_761_);
lean_ctor_set(v___x_788_, 0, v_body_794_);
v___x_796_ = v___x_788_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_body_794_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v_a_761_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
v_a_769_ = v___x_796_;
goto v___jp_768_;
}
}
else
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
lean_dec(v_a_793_);
v___x_798_ = lean_unsigned_to_nat(1u);
v___x_799_ = lean_nat_add(v_a_761_, v___x_798_);
lean_inc_ref(v_f_760_);
v___x_800_ = l_Lean_mkAppRange(v_f_760_, v___x_790_, v___x_799_, v_args_759_);
lean_dec(v___x_799_);
v___x_801_ = l_Lean_Meta_throwFunctionExpected___redArg(v___x_800_, v___y_763_, v___y_764_, v___y_765_, v___y_766_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v___x_803_; 
lean_dec_ref_known(v___x_801_, 1);
if (v_isShared_789_ == 0)
{
v___x_803_ = v___x_788_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_fst_775_);
lean_ctor_set(v_reuseFailAlloc_804_, 1, v_snd_786_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
v_a_769_ = v___x_803_;
goto v___jp_768_;
}
}
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
lean_del_object(v___x_788_);
lean_dec(v_snd_786_);
lean_dec(v_fst_775_);
lean_dec(v_a_761_);
lean_dec_ref(v_f_760_);
lean_dec_ref(v_args_759_);
v_a_805_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_801_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_801_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
lean_del_object(v___x_788_);
lean_dec(v_snd_786_);
lean_dec(v_fst_775_);
lean_dec(v_a_761_);
lean_dec_ref(v_f_760_);
lean_dec_ref(v_args_759_);
v_a_813_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_792_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_792_);
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
}
}
v___jp_768_:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = lean_unsigned_to_nat(1u);
v___x_771_ = lean_nat_add(v_a_761_, v___x_770_);
lean_dec(v_a_761_);
v_a_761_ = v___x_771_;
v_b_762_ = v_a_769_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg___boxed(lean_object* v_upperBound_823_, lean_object* v_args_824_, lean_object* v_f_825_, lean_object* v_a_826_, lean_object* v_b_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v_upperBound_823_, v_args_824_, v_f_825_, v_a_826_, v_b_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_);
lean_dec(v___y_831_);
lean_dec_ref(v___y_830_);
lean_dec(v___y_829_);
lean_dec_ref(v___y_828_);
lean_dec(v_upperBound_823_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(lean_object* v_f_834_, lean_object* v_args_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_){
_start:
{
lean_object* v___x_841_; 
lean_inc(v_a_839_);
lean_inc_ref(v_a_838_);
lean_inc(v_a_837_);
lean_inc_ref(v_a_836_);
lean_inc_ref(v_f_834_);
v___x_841_ = lean_infer_type(v_f_834_, v_a_836_, v_a_837_, v_a_838_, v_a_839_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_a_842_);
lean_dec_ref_known(v___x_841_, 1);
v___x_843_ = lean_array_get_size(v_args_835_);
v___x_844_ = lean_unsigned_to_nat(0u);
v___x_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_845_, 0, v_a_842_);
lean_ctor_set(v___x_845_, 1, v___x_844_);
lean_inc_ref(v_args_835_);
v___x_846_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v___x_843_, v_args_835_, v_f_834_, v___x_844_, v___x_845_, v_a_836_, v_a_837_, v_a_838_, v_a_839_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_857_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_857_ == 0)
{
v___x_849_ = v___x_846_;
v_isShared_850_ = v_isSharedCheck_857_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_846_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_857_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v_fst_851_; lean_object* v_snd_852_; lean_object* v___x_853_; lean_object* v___x_855_; 
v_fst_851_ = lean_ctor_get(v_a_847_, 0);
lean_inc(v_fst_851_);
v_snd_852_ = lean_ctor_get(v_a_847_, 1);
lean_inc(v_snd_852_);
lean_dec(v_a_847_);
v___x_853_ = l_Lean_Expr_instantiateBetaRevRange(v_fst_851_, v_snd_852_, v___x_843_, v_args_835_);
if (v_isShared_850_ == 0)
{
lean_ctor_set(v___x_849_, 0, v___x_853_);
v___x_855_ = v___x_849_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_853_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
lean_dec_ref(v_args_835_);
v_a_858_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_846_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_846_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
else
{
lean_dec_ref(v_args_835_);
lean_dec_ref(v_f_834_);
return v___x_841_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType___boxed(lean_object* v_f_866_, lean_object* v_args_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v_f_866_, v_args_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_);
lean_dec(v_a_871_);
lean_dec_ref(v_a_870_);
lean_dec(v_a_869_);
lean_dec_ref(v_a_868_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0(lean_object* v_upperBound_874_, lean_object* v_args_875_, lean_object* v_f_876_, lean_object* v_inst_877_, lean_object* v_R_878_, lean_object* v_a_879_, lean_object* v_b_880_, lean_object* v_c_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___redArg(v_upperBound_874_, v_args_875_, v_f_876_, v_a_879_, v_b_880_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0___boxed(lean_object* v_upperBound_888_, lean_object* v_args_889_, lean_object* v_f_890_, lean_object* v_inst_891_, lean_object* v_R_892_, lean_object* v_a_893_, lean_object* v_b_894_, lean_object* v_c_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferAppType_spec__0(v_upperBound_888_, v_args_889_, v_f_890_, v_inst_891_, v_R_892_, v_a_893_, v_b_894_, v_c_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
lean_dec(v_upperBound_888_);
return v_res_901_;
}
}
static lean_object* _init_l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1(void){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = ((lean_object*)(l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__0));
v___x_904_ = l_Lean_stringToMessageData(v___x_903_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(lean_object* v_constName_905_, lean_object* v_us_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_912_ = lean_obj_once(&l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1, &l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1_once, _init_l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___closed__1);
v___x_913_ = l_Lean_mkConst(v_constName_905_, v_us_906_);
v___x_914_ = l_Lean_MessageData_ofExpr(v___x_913_);
v___x_915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_912_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_915_, v_a_907_, v_a_908_, v_a_909_, v_a_910_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg___boxed(lean_object* v_constName_917_, lean_object* v_us_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_constName_917_, v_us_918_, v_a_919_, v_a_920_, v_a_921_, v_a_922_);
lean_dec(v_a_922_);
lean_dec_ref(v_a_921_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels(lean_object* v_00_u03b1_925_, lean_object* v_constName_926_, lean_object* v_us_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_constName_926_, v_us_927_, v_a_928_, v_a_929_, v_a_930_, v_a_931_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___boxed(lean_object* v_00_u03b1_934_, lean_object* v_constName_935_, lean_object* v_us_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_Meta_throwIncorrectNumberOfLevels(v_00_u03b1_934_, v_constName_935_, v_us_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_ref_943_, lean_object* v_msg_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
lean_object* v_toCold_950_; lean_object* v_currRecDepth_951_; lean_object* v_ref_952_; uint8_t v_diag_953_; uint8_t v_suppressElabErrors_954_; lean_object* v_ref_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v_toCold_950_ = lean_ctor_get(v___y_947_, 0);
v_currRecDepth_951_ = lean_ctor_get(v___y_947_, 1);
v_ref_952_ = lean_ctor_get(v___y_947_, 2);
v_diag_953_ = lean_ctor_get_uint8(v___y_947_, sizeof(void*)*3);
v_suppressElabErrors_954_ = lean_ctor_get_uint8(v___y_947_, sizeof(void*)*3 + 1);
v_ref_955_ = l_Lean_replaceRef(v_ref_943_, v_ref_952_);
lean_inc(v_currRecDepth_951_);
lean_inc_ref(v_toCold_950_);
v___x_956_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_956_, 0, v_toCold_950_);
lean_ctor_set(v___x_956_, 1, v_currRecDepth_951_);
lean_ctor_set(v___x_956_, 2, v_ref_955_);
lean_ctor_set_uint8(v___x_956_, sizeof(void*)*3, v_diag_953_);
lean_ctor_set_uint8(v___x_956_, sizeof(void*)*3 + 1, v_suppressElabErrors_954_);
v___x_957_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v_msg_944_, v___y_945_, v___y_946_, v___x_956_, v___y_948_);
lean_dec_ref_known(v___x_956_, 3);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_ref_958_, lean_object* v_msg_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_958_, v_msg_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
lean_dec(v___y_963_);
lean_dec_ref(v___y_962_);
lean_dec(v___y_961_);
lean_dec_ref(v___y_960_);
lean_dec(v_ref_958_);
return v_res_965_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_966_; 
v___x_966_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_966_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
return v___x_968_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_969_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_970_ = lean_unsigned_to_nat(0u);
v___x_971_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
lean_ctor_set(v___x_971_, 2, v___x_970_);
lean_ctor_set(v___x_971_, 3, v___x_970_);
lean_ctor_set(v___x_971_, 4, v___x_969_);
lean_ctor_set(v___x_971_, 5, v___x_969_);
lean_ctor_set(v___x_971_, 6, v___x_969_);
lean_ctor_set(v___x_971_, 7, v___x_969_);
lean_ctor_set(v___x_971_, 8, v___x_969_);
lean_ctor_set(v___x_971_, 9, v___x_969_);
lean_ctor_set(v___x_971_, 10, v___x_969_);
return v___x_971_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_972_ = lean_unsigned_to_nat(32u);
v___x_973_ = lean_mk_empty_array_with_capacity(v___x_972_);
v___x_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_974_, 0, v___x_973_);
return v___x_974_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4(void){
_start:
{
size_t v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_975_ = ((size_t)5ULL);
v___x_976_ = lean_unsigned_to_nat(0u);
v___x_977_ = lean_unsigned_to_nat(32u);
v___x_978_ = lean_mk_empty_array_with_capacity(v___x_977_);
v___x_979_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_980_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_980_, 0, v___x_979_);
lean_ctor_set(v___x_980_, 1, v___x_978_);
lean_ctor_set(v___x_980_, 2, v___x_976_);
lean_ctor_set(v___x_980_, 3, v___x_976_);
lean_ctor_set_usize(v___x_980_, 4, v___x_975_);
return v___x_980_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_981_ = lean_box(1);
v___x_982_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4);
v___x_983_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_984_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
lean_ctor_set(v___x_984_, 1, v___x_982_);
lean_ctor_set(v___x_984_, 2, v___x_981_);
return v___x_984_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_986_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6));
v___x_987_ = l_Lean_stringToMessageData(v___x_986_);
return v___x_987_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8));
v___x_990_ = l_Lean_stringToMessageData(v___x_989_);
return v___x_990_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10));
v___x_993_ = l_Lean_stringToMessageData(v___x_992_);
return v___x_993_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12));
v___x_996_ = l_Lean_stringToMessageData(v___x_995_);
return v___x_996_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15(void){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14));
v___x_999_ = l_Lean_stringToMessageData(v___x_998_);
return v___x_999_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17(void){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_1001_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16));
v___x_1002_ = l_Lean_stringToMessageData(v___x_1001_);
return v___x_1002_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18));
v___x_1005_ = l_Lean_stringToMessageData(v___x_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_msg_1006_, lean_object* v_declHint_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v_env_1012_; uint8_t v___x_1013_; 
v___x_1010_ = l_Lean_instInhabitedName;
v___x_1011_ = lean_st_ref_get(v___y_1008_);
v_env_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc_ref(v_env_1012_);
lean_dec(v___x_1011_);
v___x_1013_ = l_Lean_Name_isAnonymous(v_declHint_1007_);
if (v___x_1013_ == 0)
{
uint8_t v_isExporting_1014_; 
v_isExporting_1014_ = lean_ctor_get_uint8(v_env_1012_, sizeof(void*)*8);
if (v_isExporting_1014_ == 0)
{
lean_object* v___x_1015_; 
lean_dec_ref(v_env_1012_);
lean_dec(v_declHint_1007_);
v___x_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1015_, 0, v_msg_1006_);
return v___x_1015_;
}
else
{
lean_object* v___x_1016_; uint8_t v___x_1017_; 
lean_inc_ref(v_env_1012_);
v___x_1016_ = l_Lean_Environment_setExporting(v_env_1012_, v___x_1013_);
lean_inc(v_declHint_1007_);
lean_inc_ref(v___x_1016_);
v___x_1017_ = l_Lean_Environment_contains(v___x_1016_, v_declHint_1007_, v_isExporting_1014_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; 
lean_dec_ref(v___x_1016_);
lean_dec_ref(v_env_1012_);
lean_dec(v_declHint_1007_);
v___x_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1018_, 0, v_msg_1006_);
return v___x_1018_;
}
else
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v_c_1024_; lean_object* v___x_1025_; 
v___x_1019_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_1020_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5);
v___x_1021_ = l_Lean_Options_empty;
v___x_1022_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1016_);
lean_ctor_set(v___x_1022_, 1, v___x_1019_);
lean_ctor_set(v___x_1022_, 2, v___x_1020_);
lean_ctor_set(v___x_1022_, 3, v___x_1021_);
lean_inc(v_declHint_1007_);
v___x_1023_ = l_Lean_MessageData_ofConstName(v_declHint_1007_, v___x_1013_);
v_c_1024_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1024_, 0, v___x_1022_);
lean_ctor_set(v_c_1024_, 1, v___x_1023_);
v___x_1025_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1012_, v_declHint_1007_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_dec_ref(v_env_1012_);
lean_dec(v_declHint_1007_);
v___x_1026_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_1027_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
lean_ctor_set(v___x_1027_, 1, v_c_1024_);
v___x_1028_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9);
v___x_1029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = l_Lean_MessageData_note(v___x_1029_);
v___x_1031_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1031_, 0, v_msg_1006_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
v___x_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
else
{
lean_object* v_val_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1067_; 
v_val_1033_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1035_ = v___x_1025_;
v_isShared_1036_ = v_isSharedCheck_1067_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_val_1033_);
lean_dec(v___x_1025_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1067_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v_mod_1039_; uint8_t v___x_1040_; 
v___x_1037_ = l_Lean_Environment_header(v_env_1012_);
lean_dec_ref(v_env_1012_);
v___x_1038_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1037_);
lean_dec_ref(v___x_1037_);
v_mod_1039_ = lean_array_get(v___x_1010_, v___x_1038_, v_val_1033_);
lean_dec(v_val_1033_);
lean_dec_ref(v___x_1038_);
v___x_1040_ = l_Lean_isPrivateName(v_declHint_1007_);
lean_dec(v_declHint_1007_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1041_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11);
v___x_1042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
lean_ctor_set(v___x_1042_, 1, v_c_1024_);
v___x_1043_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13);
v___x_1044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1042_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
v___x_1045_ = l_Lean_MessageData_ofName(v_mod_1039_);
v___x_1046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1044_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15);
v___x_1048_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1046_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = l_Lean_MessageData_note(v___x_1048_);
v___x_1050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1050_, 0, v_msg_1006_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set_tag(v___x_1035_, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1050_);
v___x_1052_ = v___x_1035_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v___x_1050_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
else
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1065_; 
v___x_1054_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_1055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
lean_ctor_set(v___x_1055_, 1, v_c_1024_);
v___x_1056_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17);
v___x_1057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1055_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = l_Lean_MessageData_ofName(v_mod_1039_);
v___x_1059_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1057_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19);
v___x_1061_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1059_);
lean_ctor_set(v___x_1061_, 1, v___x_1060_);
v___x_1062_ = l_Lean_MessageData_note(v___x_1061_);
v___x_1063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1063_, 0, v_msg_1006_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set_tag(v___x_1035_, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1063_);
v___x_1065_ = v___x_1035_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1063_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1068_; 
lean_dec_ref(v_env_1012_);
lean_dec(v_declHint_1007_);
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v_msg_1006_);
return v___x_1068_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_msg_1069_, lean_object* v_declHint_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1069_, v_declHint_1070_, v___y_1071_);
lean_dec(v___y_1071_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_msg_1074_, lean_object* v_declHint_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v___x_1081_; lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1091_; 
v___x_1081_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1074_, v_declHint_1075_, v___y_1079_);
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1084_ = v___x_1081_;
v_isShared_1085_ = v_isSharedCheck_1091_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_1081_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1091_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1089_; 
v___x_1086_ = l_Lean_unknownIdentifierMessageTag;
v___x_1087_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
lean_ctor_set(v___x_1087_, 1, v_a_1082_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 0, v___x_1087_);
v___x_1089_ = v___x_1084_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_msg_1092_, lean_object* v_declHint_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_1092_, v_declHint_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_);
lean_dec(v___y_1097_);
lean_dec_ref(v___y_1096_);
lean_dec(v___y_1095_);
lean_dec_ref(v___y_1094_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_ref_1100_, lean_object* v_msg_1101_, lean_object* v_declHint_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
lean_object* v___x_1108_; lean_object* v_a_1109_; lean_object* v___x_1110_; 
v___x_1108_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_1101_, v_declHint_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
lean_inc(v_a_1109_);
lean_dec_ref(v___x_1108_);
v___x_1110_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1100_, v_a_1109_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_ref_1111_, lean_object* v_msg_1112_, lean_object* v_declHint_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1111_, v_msg_1112_, v_declHint_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
lean_dec(v___y_1117_);
lean_dec_ref(v___y_1116_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
lean_dec(v_ref_1111_);
return v_res_1119_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1121_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_1122_ = l_Lean_stringToMessageData(v___x_1121_);
return v___x_1122_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1124_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__2));
v___x_1125_ = l_Lean_stringToMessageData(v___x_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1126_, lean_object* v_constName_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v___x_1133_; uint8_t v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1133_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1134_ = 0;
lean_inc(v_constName_1127_);
v___x_1135_ = l_Lean_MessageData_ofConstName(v_constName_1127_, v___x_1134_);
v___x_1136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1133_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
v___x_1137_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_1138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1136_);
lean_ctor_set(v___x_1138_, 1, v___x_1137_);
v___x_1139_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1126_, v___x_1138_, v_constName_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1140_, lean_object* v_constName_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1140_, v_constName_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v_ref_1140_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(lean_object* v_constName_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v_ref_1154_; lean_object* v___x_1155_; 
v_ref_1154_ = lean_ctor_get(v___y_1151_, 2);
v___x_1155_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1154_, v_constName_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(lean_object* v_constName_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_){
_start:
{
lean_object* v___x_1169_; lean_object* v_env_1170_; uint8_t v___x_1171_; lean_object* v___x_1172_; 
v___x_1169_ = lean_st_ref_get(v___y_1167_);
v_env_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc_ref(v_env_1170_);
lean_dec(v___x_1169_);
v___x_1171_ = 0;
lean_inc(v_constName_1163_);
v___x_1172_ = l_Lean_Environment_findConstVal_x3f(v_env_1170_, v_constName_1163_, v___x_1171_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v___x_1173_; 
v___x_1173_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
return v___x_1173_;
}
else
{
lean_object* v_val_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
lean_dec(v_constName_1163_);
v_val_1174_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1172_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_val_1174_);
lean_dec(v___x_1172_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1179_; 
if (v_isShared_1177_ == 0)
{
lean_ctor_set_tag(v___x_1176_, 0);
v___x_1179_ = v___x_1176_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_val_1174_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0___boxed(lean_object* v_constName_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v_res_1188_; 
v_res_1188_ = l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(v_constName_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
return v_res_1188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(lean_object* v_c_1189_, lean_object* v_us_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_){
_start:
{
lean_object* v___x_1196_; 
lean_inc(v_c_1189_);
v___x_1196_ = l_Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0(v_c_1189_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v_levelParams_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; uint8_t v___x_1201_; 
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc(v_a_1197_);
lean_dec_ref_known(v___x_1196_, 1);
v_levelParams_1198_ = lean_ctor_get(v_a_1197_, 1);
v___x_1199_ = l_List_lengthTR___redArg(v_levelParams_1198_);
v___x_1200_ = l_List_lengthTR___redArg(v_us_1190_);
v___x_1201_ = lean_nat_dec_eq(v___x_1199_, v___x_1200_);
lean_dec(v___x_1200_);
lean_dec(v___x_1199_);
if (v___x_1201_ == 0)
{
lean_object* v___x_1202_; 
lean_dec(v_a_1197_);
v___x_1202_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_c_1189_, v_us_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
return v___x_1202_;
}
else
{
lean_object* v___x_1203_; 
lean_dec(v_c_1189_);
v___x_1203_ = l_Lean_Core_instantiateTypeLevelParams___redArg(v_a_1197_, v_us_1190_, v_a_1194_);
return v___x_1203_;
}
}
else
{
lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1211_; 
lean_dec(v_us_1190_);
lean_dec(v_c_1189_);
v_a_1204_ = lean_ctor_get(v___x_1196_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1206_ = v___x_1196_;
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v___x_1196_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1209_; 
if (v_isShared_1207_ == 0)
{
v___x_1209_ = v___x_1206_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_a_1204_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType___boxed(lean_object* v_c_1212_, lean_object* v_us_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_c_1212_, v_us_1213_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_);
lean_dec(v_a_1217_);
lean_dec_ref(v_a_1216_);
lean_dec(v_a_1215_);
lean_dec_ref(v_a_1214_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0(lean_object* v_00_u03b1_1220_, lean_object* v_constName_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1228_, lean_object* v_constName_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0(v_00_u03b1_1228_, v_constName_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1236_, lean_object* v_ref_1237_, lean_object* v_constName_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___redArg(v_ref_1237_, v_constName_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1245_, lean_object* v_ref_1246_, lean_object* v_constName_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1(v_00_u03b1_1245_, v_ref_1246_, v_constName_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
lean_dec(v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec(v_ref_1246_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1254_, lean_object* v_ref_1255_, lean_object* v_msg_1256_, lean_object* v_declHint_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1255_, v_msg_1256_, v_declHint_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1264_, lean_object* v_ref_1265_, lean_object* v_msg_1266_, lean_object* v_declHint_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_1264_, v_ref_1265_, v_msg_1266_, v_declHint_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
lean_dec(v_ref_1265_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_msg_1274_, lean_object* v_declHint_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v___x_1281_; 
v___x_1281_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1274_, v_declHint_1275_, v___y_1279_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_1282_, lean_object* v_declHint_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_msg_1282_, v_declHint_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b1_1290_, lean_object* v_ref_1291_, lean_object* v_msg_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1291_, v_msg_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1298_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1299_, lean_object* v_ref_1300_, lean_object* v_msg_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
lean_object* v_res_1307_; 
v_res_1307_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0_spec__1_spec__2_spec__4(v_00_u03b1_1299_, v_ref_1300_, v_msg_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v_ref_1300_);
return v_res_1307_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1309_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__0));
v___x_1310_ = l_Lean_stringToMessageData(v___x_1309_);
return v___x_1310_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__2));
v___x_1313_ = l_Lean_stringToMessageData(v___x_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(lean_object* v_structName_1314_, lean_object* v_idx_1315_, lean_object* v_e_1316_, lean_object* v_a_1317_, lean_object* v_00_u03b1_1318_, lean_object* v_x_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1325_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
v___x_1326_ = l_Lean_mkProj(v_structName_1314_, v_idx_1315_, v_e_1316_);
v___x_1327_ = l_Lean_indentExpr(v___x_1326_);
v___x_1328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1325_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1328_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = l_Lean_indentExpr(v_a_1317_);
v___x_1332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
v___x_1333_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1332_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___boxed(lean_object* v_structName_1334_, lean_object* v_idx_1335_, lean_object* v_e_1336_, lean_object* v_a_1337_, lean_object* v_00_u03b1_1338_, lean_object* v_x_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1334_, v_idx_1335_, v_e_1336_, v_a_1337_, v_00_u03b1_1338_, v_x_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
lean_dec(v___y_1343_);
lean_dec_ref(v___y_1342_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(lean_object* v_constName_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_){
_start:
{
lean_object* v___x_1352_; lean_object* v_env_1353_; uint8_t v___x_1354_; lean_object* v___x_1355_; 
v___x_1352_ = lean_st_ref_get(v___y_1350_);
v_env_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc_ref(v_env_1353_);
lean_dec(v___x_1352_);
v___x_1354_ = 0;
lean_inc(v_constName_1346_);
v___x_1355_ = l_Lean_Environment_find_x3f(v_env_1353_, v_constName_1346_, v___x_1354_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v___x_1356_; 
v___x_1356_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferConstType_spec__0_spec__0___redArg(v_constName_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_);
return v___x_1356_;
}
else
{
lean_object* v_val_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
lean_dec(v_constName_1346_);
v_val_1357_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1359_ = v___x_1355_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_val_1357_);
lean_dec(v___x_1355_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
lean_ctor_set_tag(v___x_1359_, 0);
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_val_1357_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0___boxed(lean_object* v_constName_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(v_constName_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(lean_object* v_upperBound_1372_, lean_object* v_structName_1373_, lean_object* v_e_1374_, lean_object* v_idx_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_b_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v_a_1385_; uint8_t v___x_1389_; 
v___x_1389_ = lean_nat_dec_lt(v_a_1377_, v_upperBound_1372_);
if (v___x_1389_ == 0)
{
lean_object* v___x_1390_; 
lean_dec(v_a_1377_);
lean_dec_ref(v_a_1376_);
lean_dec(v_idx_1375_);
lean_dec_ref(v_e_1374_);
lean_dec(v_structName_1373_);
v___x_1390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1390_, 0, v_b_1378_);
return v___x_1390_;
}
else
{
lean_object* v___x_1391_; 
lean_inc(v___y_1382_);
lean_inc_ref(v___y_1381_);
lean_inc(v___y_1380_);
lean_inc_ref(v___y_1379_);
v___x_1391_ = lean_whnf(v_b_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v_a_1392_; 
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
lean_inc(v_a_1392_);
lean_dec_ref_known(v___x_1391_, 1);
if (lean_obj_tag(v_a_1392_) == 7)
{
lean_object* v_body_1393_; uint8_t v___x_1394_; 
v_body_1393_ = lean_ctor_get(v_a_1392_, 2);
lean_inc_ref(v_body_1393_);
lean_dec_ref_known(v_a_1392_, 3);
v___x_1394_ = l_Lean_Expr_hasLooseBVars(v_body_1393_);
if (v___x_1394_ == 0)
{
v_a_1385_ = v_body_1393_;
goto v___jp_1384_;
}
else
{
lean_object* v___x_1395_; lean_object* v___x_1396_; 
lean_inc_ref(v_e_1374_);
lean_inc(v_a_1377_);
lean_inc(v_structName_1373_);
v___x_1395_ = l_Lean_mkProj(v_structName_1373_, v_a_1377_, v_e_1374_);
v___x_1396_ = lean_expr_instantiate1(v_body_1393_, v___x_1395_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v_body_1393_);
v_a_1385_ = v___x_1396_;
goto v___jp_1384_;
}
}
else
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1397_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
lean_inc_ref(v_e_1374_);
lean_inc(v_idx_1375_);
lean_inc(v_structName_1373_);
v___x_1398_ = l_Lean_mkProj(v_structName_1373_, v_idx_1375_, v_e_1374_);
v___x_1399_ = l_Lean_indentExpr(v___x_1398_);
v___x_1400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1397_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
v___x_1401_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1402_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
lean_inc_ref(v_a_1376_);
v___x_1403_ = l_Lean_indentExpr(v_a_1376_);
v___x_1404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1402_);
lean_ctor_set(v___x_1404_, 1, v___x_1403_);
v___x_1405_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1404_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_dec_ref_known(v___x_1405_, 1);
v_a_1385_ = v_a_1392_;
goto v___jp_1384_;
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v_a_1392_);
lean_dec(v_a_1377_);
lean_dec_ref(v_a_1376_);
lean_dec(v_idx_1375_);
lean_dec_ref(v_e_1374_);
lean_dec(v_structName_1373_);
v_a_1406_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1405_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1405_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
else
{
lean_dec(v_a_1377_);
lean_dec_ref(v_a_1376_);
lean_dec(v_idx_1375_);
lean_dec_ref(v_e_1374_);
lean_dec(v_structName_1373_);
return v___x_1391_;
}
}
v___jp_1384_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1386_ = lean_unsigned_to_nat(1u);
v___x_1387_ = lean_nat_add(v_a_1377_, v___x_1386_);
lean_dec(v_a_1377_);
v_a_1377_ = v___x_1387_;
v_b_1378_ = v_a_1385_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg___boxed(lean_object* v_upperBound_1414_, lean_object* v_structName_1415_, lean_object* v_e_1416_, lean_object* v_idx_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_b_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1414_, v_structName_1415_, v_e_1416_, v_idx_1417_, v_a_1418_, v_a_1419_, v_b_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
lean_dec(v_upperBound_1414_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(lean_object* v_upperBound_1427_, lean_object* v_structName_1428_, lean_object* v_e_1429_, lean_object* v_idx_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_b_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v_a_1440_; uint8_t v___x_1444_; 
v___x_1444_ = lean_nat_dec_lt(v_a_1432_, v_upperBound_1427_);
if (v___x_1444_ == 0)
{
lean_object* v___x_1445_; 
lean_dec(v_a_1432_);
lean_dec_ref(v_a_1431_);
lean_dec(v_idx_1430_);
lean_dec_ref(v_e_1429_);
lean_dec(v_structName_1428_);
v___x_1445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1445_, 0, v_b_1433_);
return v___x_1445_;
}
else
{
lean_object* v___x_1446_; 
lean_inc(v___y_1437_);
lean_inc_ref(v___y_1436_);
lean_inc(v___y_1435_);
lean_inc_ref(v___y_1434_);
v___x_1446_ = lean_whnf(v_b_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1446_, 1);
if (lean_obj_tag(v_a_1447_) == 7)
{
lean_object* v_body_1448_; uint8_t v___x_1449_; 
v_body_1448_ = lean_ctor_get(v_a_1447_, 2);
lean_inc_ref(v_body_1448_);
lean_dec_ref_known(v_a_1447_, 3);
v___x_1449_ = l_Lean_Expr_hasLooseBVars(v_body_1448_);
if (v___x_1449_ == 0)
{
v_a_1440_ = v_body_1448_;
goto v___jp_1439_;
}
else
{
lean_object* v___x_1450_; lean_object* v___x_1451_; 
lean_inc_ref(v_e_1429_);
lean_inc(v_a_1432_);
lean_inc(v_structName_1428_);
v___x_1450_ = l_Lean_mkProj(v_structName_1428_, v_a_1432_, v_e_1429_);
v___x_1451_ = lean_expr_instantiate1(v_body_1448_, v___x_1450_);
lean_dec_ref(v___x_1450_);
lean_dec_ref(v_body_1448_);
v_a_1440_ = v___x_1451_;
goto v___jp_1439_;
}
}
else
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1452_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__1);
lean_inc_ref(v_e_1429_);
lean_inc(v_idx_1430_);
lean_inc(v_structName_1428_);
v___x_1453_ = l_Lean_mkProj(v_structName_1428_, v_idx_1430_, v_e_1429_);
v___x_1454_ = l_Lean_indentExpr(v___x_1453_);
v___x_1455_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1452_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0___closed__3);
v___x_1457_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1457_, 0, v___x_1455_);
lean_ctor_set(v___x_1457_, 1, v___x_1456_);
lean_inc_ref(v_a_1431_);
v___x_1458_ = l_Lean_indentExpr(v_a_1431_);
v___x_1459_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1457_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
v___x_1460_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1459_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_dec_ref_known(v___x_1460_, 1);
v_a_1440_ = v_a_1447_;
goto v___jp_1439_;
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_dec(v_a_1447_);
lean_dec(v_a_1432_);
lean_dec_ref(v_a_1431_);
lean_dec(v_idx_1430_);
lean_dec_ref(v_e_1429_);
lean_dec(v_structName_1428_);
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1460_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1460_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
}
else
{
lean_dec(v_a_1432_);
lean_dec_ref(v_a_1431_);
lean_dec(v_idx_1430_);
lean_dec_ref(v_e_1429_);
lean_dec(v_structName_1428_);
return v___x_1446_;
}
}
v___jp_1439_:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_1441_ = lean_unsigned_to_nat(1u);
v___x_1442_ = lean_nat_add(v_a_1432_, v___x_1441_);
lean_dec(v_a_1432_);
v___x_1443_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1427_, v_structName_1428_, v_e_1429_, v_idx_1430_, v_a_1431_, v___x_1442_, v_a_1440_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
return v___x_1443_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg___boxed(lean_object* v_upperBound_1469_, lean_object* v_structName_1470_, lean_object* v_e_1471_, lean_object* v_idx_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_b_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_upperBound_1469_, v_structName_1470_, v_e_1471_, v_idx_1472_, v_a_1473_, v_a_1474_, v_b_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v_upperBound_1469_);
return v_res_1481_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0(void){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1482_ = lean_box(0);
v___x_1483_ = l_unsafeCast___redArg(v___x_1482_);
return v___x_1483_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__1(void){
_start:
{
lean_object* v___x_1484_; lean_object* v_dummy_1485_; 
v___x_1484_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0);
v_dummy_1485_ = l_Lean_Expr_sort___override(v___x_1484_);
return v_dummy_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(lean_object* v_structName_1486_, lean_object* v_idx_1487_, lean_object* v_e_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_){
_start:
{
lean_object* v___x_1494_; 
lean_inc(v_a_1492_);
lean_inc_ref(v_a_1491_);
lean_inc(v_a_1490_);
lean_inc_ref(v_a_1489_);
lean_inc_ref(v_e_1488_);
v___x_1494_ = lean_infer_type(v_e_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; lean_object* v___x_1496_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1495_);
lean_dec_ref_known(v___x_1494_, 1);
lean_inc(v_a_1492_);
lean_inc_ref(v_a_1491_);
lean_inc(v_a_1490_);
lean_inc_ref(v_a_1489_);
v___x_1496_ = lean_whnf(v_a_1495_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_a_1497_; lean_object* v___x_1498_; 
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
lean_inc(v_a_1497_);
lean_dec_ref_known(v___x_1496_, 1);
v___x_1498_ = l_Lean_Expr_getAppFn(v_a_1497_);
if (lean_obj_tag(v___x_1498_) == 4)
{
lean_object* v_declName_1499_; lean_object* v_us_1500_; lean_object* v___x_1501_; lean_object* v_env_1505_; uint8_t v___x_1506_; lean_object* v___x_1507_; 
v_declName_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_declName_1499_);
v_us_1500_ = lean_ctor_get(v___x_1498_, 1);
lean_inc(v_us_1500_);
lean_dec_ref_known(v___x_1498_, 2);
v___x_1501_ = lean_st_ref_get(v_a_1492_);
v_env_1505_ = lean_ctor_get(v___x_1501_, 0);
lean_inc_ref(v_env_1505_);
lean_dec(v___x_1501_);
v___x_1506_ = 0;
v___x_1507_ = l_Lean_Environment_find_x3f(v_env_1505_, v_declName_1499_, v___x_1506_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
lean_dec(v_us_1500_);
v___x_1508_ = lean_box(0);
v___x_1509_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1486_, v_idx_1487_, v_e_1488_, v_a_1497_, lean_box(0), v___x_1508_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
return v___x_1509_;
}
else
{
lean_object* v_val_1510_; 
v_val_1510_ = lean_ctor_get(v___x_1507_, 0);
lean_inc(v_val_1510_);
lean_dec_ref_known(v___x_1507_, 1);
if (lean_obj_tag(v_val_1510_) == 5)
{
lean_object* v_val_1511_; lean_object* v_ctors_1512_; 
v_val_1511_ = lean_ctor_get(v_val_1510_, 0);
lean_inc_ref(v_val_1511_);
lean_dec_ref_known(v_val_1510_, 1);
v_ctors_1512_ = lean_ctor_get(v_val_1511_, 4);
lean_inc(v_ctors_1512_);
if (lean_obj_tag(v_ctors_1512_) == 1)
{
lean_object* v_tail_1513_; 
v_tail_1513_ = lean_ctor_get(v_ctors_1512_, 1);
if (lean_obj_tag(v_tail_1513_) == 0)
{
lean_object* v_toConstantVal_1514_; lean_object* v_numParams_1515_; lean_object* v_numIndices_1516_; lean_object* v_head_1517_; lean_object* v___x_1518_; 
v_toConstantVal_1514_ = lean_ctor_get(v_val_1511_, 0);
lean_inc_ref(v_toConstantVal_1514_);
v_numParams_1515_ = lean_ctor_get(v_val_1511_, 1);
lean_inc(v_numParams_1515_);
v_numIndices_1516_ = lean_ctor_get(v_val_1511_, 2);
lean_inc(v_numIndices_1516_);
lean_dec_ref(v_val_1511_);
v_head_1517_ = lean_ctor_get(v_ctors_1512_, 0);
lean_inc(v_head_1517_);
lean_dec_ref_known(v_ctors_1512_, 2);
v___x_1518_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__0(v_head_1517_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
if (lean_obj_tag(v___x_1518_) == 0)
{
lean_object* v_a_1519_; 
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
lean_inc(v_a_1519_);
lean_dec_ref_known(v___x_1518_, 1);
if (lean_obj_tag(v_a_1519_) == 6)
{
lean_object* v_val_1520_; lean_object* v___y_1522_; lean_object* v___y_1523_; lean_object* v___y_1524_; lean_object* v___y_1525_; lean_object* v_name_1560_; uint8_t v___x_1561_; 
v_val_1520_ = lean_ctor_get(v_a_1519_, 0);
lean_inc_ref(v_val_1520_);
lean_dec_ref_known(v_a_1519_, 1);
v_name_1560_ = lean_ctor_get(v_toConstantVal_1514_, 0);
lean_inc(v_name_1560_);
lean_dec_ref(v_toConstantVal_1514_);
v___x_1561_ = lean_name_eq(v_name_1560_, v_structName_1486_);
lean_dec(v_name_1560_);
if (v___x_1561_ == 0)
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
lean_dec_ref(v_val_1520_);
lean_dec(v_numIndices_1516_);
lean_dec(v_numParams_1515_);
lean_dec(v_us_1500_);
v___x_1562_ = lean_box(0);
v___x_1563_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1486_, v_idx_1487_, v_e_1488_, v_a_1497_, lean_box(0), v___x_1562_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
v_a_1564_ = lean_ctor_get(v___x_1563_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v___x_1563_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1563_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
else
{
v___y_1522_ = v_a_1489_;
v___y_1523_ = v_a_1490_;
v___y_1524_ = v_a_1491_;
v___y_1525_ = v_a_1492_;
goto v___jp_1521_;
}
v___jp_1521_:
{
lean_object* v_dummy_1526_; lean_object* v_nargs_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; uint8_t v___x_1534_; 
v_dummy_1526_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__1);
v_nargs_1527_ = l_Lean_Expr_getAppNumArgs(v_a_1497_);
lean_inc(v_nargs_1527_);
v___x_1528_ = lean_mk_array(v_nargs_1527_, v_dummy_1526_);
v___x_1529_ = lean_unsigned_to_nat(1u);
v___x_1530_ = lean_nat_sub(v_nargs_1527_, v___x_1529_);
lean_dec(v_nargs_1527_);
lean_inc(v_a_1497_);
v___x_1531_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1497_, v___x_1528_, v___x_1530_);
v___x_1532_ = lean_nat_add(v_numParams_1515_, v_numIndices_1516_);
lean_dec(v_numIndices_1516_);
v___x_1533_ = lean_array_get_size(v___x_1531_);
v___x_1534_ = lean_nat_dec_eq(v___x_1532_, v___x_1533_);
lean_dec(v___x_1532_);
if (v___x_1534_ == 0)
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
lean_dec_ref(v___x_1531_);
lean_dec_ref(v_val_1520_);
lean_dec(v_numParams_1515_);
lean_dec(v_us_1500_);
v___x_1535_ = lean_box(0);
v___x_1536_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1486_, v_idx_1487_, v_e_1488_, v_a_1497_, lean_box(0), v___x_1535_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
return v___x_1536_;
}
else
{
lean_object* v_toConstantVal_1537_; lean_object* v_name_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v_toConstantVal_1537_ = lean_ctor_get(v_val_1520_, 0);
lean_inc_ref(v_toConstantVal_1537_);
lean_dec_ref(v_val_1520_);
v_name_1538_ = lean_ctor_get(v_toConstantVal_1537_, 0);
lean_inc(v_name_1538_);
lean_dec_ref(v_toConstantVal_1537_);
v___x_1539_ = l_Lean_mkConst(v_name_1538_, v_us_1500_);
v___x_1540_ = lean_unsigned_to_nat(0u);
v___x_1541_ = l_Array_toSubarray___redArg(v___x_1531_, v___x_1540_, v_numParams_1515_);
v___x_1542_ = l_Subarray_copy___redArg(v___x_1541_);
v___x_1543_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_1539_, v___x_1542_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1544_; lean_object* v___x_1545_; 
v_a_1544_ = lean_ctor_get(v___x_1543_, 0);
lean_inc(v_a_1544_);
lean_dec_ref_known(v___x_1543_, 1);
lean_inc(v_a_1497_);
lean_inc_ref(v_e_1488_);
lean_inc(v_structName_1486_);
lean_inc(v_idx_1487_);
v___x_1545_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_idx_1487_, v_structName_1486_, v_e_1488_, v_idx_1487_, v_a_1497_, v___x_1540_, v_a_1544_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v_a_1546_; lean_object* v___x_1547_; 
v_a_1546_ = lean_ctor_get(v___x_1545_, 0);
lean_inc(v_a_1546_);
lean_dec_ref_known(v___x_1545_, 1);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
v___x_1547_ = lean_whnf(v_a_1546_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1559_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1550_ = v___x_1547_;
v_isShared_1551_ = v_isSharedCheck_1559_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1547_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1559_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
if (lean_obj_tag(v_a_1548_) == 7)
{
lean_object* v_binderType_1552_; lean_object* v___x_1553_; lean_object* v___x_1555_; 
lean_dec(v_a_1497_);
lean_dec_ref(v_e_1488_);
lean_dec(v_idx_1487_);
lean_dec(v_structName_1486_);
v_binderType_1552_ = lean_ctor_get(v_a_1548_, 1);
lean_inc_ref(v_binderType_1552_);
lean_dec_ref_known(v_a_1548_, 3);
v___x_1553_ = lean_expr_consume_type_annotations(v_binderType_1552_);
if (v_isShared_1551_ == 0)
{
lean_ctor_set(v___x_1550_, 0, v___x_1553_);
v___x_1555_ = v___x_1550_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v___x_1553_);
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
lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_del_object(v___x_1550_);
lean_dec(v_a_1548_);
v___x_1557_ = lean_box(0);
v___x_1558_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1486_, v_idx_1487_, v_e_1488_, v_a_1497_, lean_box(0), v___x_1557_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
return v___x_1558_;
}
}
}
else
{
lean_dec(v_a_1497_);
lean_dec_ref(v_e_1488_);
lean_dec(v_idx_1487_);
lean_dec(v_structName_1486_);
return v___x_1547_;
}
}
else
{
lean_dec(v_a_1497_);
lean_dec_ref(v_e_1488_);
lean_dec(v_idx_1487_);
lean_dec(v_structName_1486_);
return v___x_1545_;
}
}
else
{
lean_dec(v_a_1497_);
lean_dec_ref(v_e_1488_);
lean_dec(v_idx_1487_);
lean_dec(v_structName_1486_);
return v___x_1543_;
}
}
}
}
else
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_dec(v_a_1519_);
lean_dec(v_numIndices_1516_);
lean_dec(v_numParams_1515_);
lean_dec_ref(v_toConstantVal_1514_);
lean_dec(v_us_1500_);
v___x_1572_ = lean_box(0);
v___x_1573_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1486_, v_idx_1487_, v_e_1488_, v_a_1497_, lean_box(0), v___x_1572_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
return v___x_1573_;
}
}
else
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
lean_dec(v_numIndices_1516_);
lean_dec(v_numParams_1515_);
lean_dec_ref(v_toConstantVal_1514_);
lean_dec(v_us_1500_);
lean_dec(v_a_1497_);
lean_dec_ref(v_e_1488_);
lean_dec(v_idx_1487_);
lean_dec(v_structName_1486_);
v_a_1574_ = lean_ctor_get(v___x_1518_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1518_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1518_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1518_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
else
{
lean_dec_ref_known(v_ctors_1512_, 2);
lean_dec_ref(v_val_1511_);
lean_dec(v_us_1500_);
goto v___jp_1502_;
}
}
else
{
lean_dec(v_ctors_1512_);
lean_dec_ref(v_val_1511_);
lean_dec(v_us_1500_);
goto v___jp_1502_;
}
}
else
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
lean_dec(v_val_1510_);
lean_dec(v_us_1500_);
v___x_1582_ = lean_box(0);
v___x_1583_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1486_, v_idx_1487_, v_e_1488_, v_a_1497_, lean_box(0), v___x_1582_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
return v___x_1583_;
}
}
v___jp_1502_:
{
lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1503_ = lean_box(0);
v___x_1504_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1486_, v_idx_1487_, v_e_1488_, v_a_1497_, lean_box(0), v___x_1503_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
return v___x_1504_;
}
}
else
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
lean_dec_ref(v___x_1498_);
v___x_1584_ = lean_box(0);
v___x_1585_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___lam__0(v_structName_1486_, v_idx_1487_, v_e_1488_, v_a_1497_, lean_box(0), v___x_1584_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
return v___x_1585_;
}
}
else
{
lean_dec_ref(v_e_1488_);
lean_dec(v_idx_1487_);
lean_dec(v_structName_1486_);
return v___x_1496_;
}
}
else
{
lean_dec_ref(v_e_1488_);
lean_dec(v_idx_1487_);
lean_dec(v_structName_1486_);
return v___x_1494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___boxed(lean_object* v_structName_1586_, lean_object* v_idx_1587_, lean_object* v_e_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_){
_start:
{
lean_object* v_res_1594_; 
v_res_1594_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_structName_1586_, v_idx_1587_, v_e_1588_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_);
lean_dec(v_a_1592_);
lean_dec_ref(v_a_1591_);
lean_dec(v_a_1590_);
lean_dec_ref(v_a_1589_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1(lean_object* v_upperBound_1595_, lean_object* v_structName_1596_, lean_object* v_e_1597_, lean_object* v_idx_1598_, lean_object* v_a_1599_, lean_object* v_inst_1600_, lean_object* v_R_1601_, lean_object* v_a_1602_, lean_object* v_b_1603_, lean_object* v_c_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___redArg(v_upperBound_1595_, v_structName_1596_, v_e_1597_, v_idx_1598_, v_a_1599_, v_a_1602_, v_b_1603_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1___boxed(lean_object* v_upperBound_1611_, lean_object* v_structName_1612_, lean_object* v_e_1613_, lean_object* v_idx_1614_, lean_object* v_a_1615_, lean_object* v_inst_1616_, lean_object* v_R_1617_, lean_object* v_a_1618_, lean_object* v_b_1619_, lean_object* v_c_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1(v_upperBound_1611_, v_structName_1612_, v_e_1613_, v_idx_1614_, v_a_1615_, v_inst_1616_, v_R_1617_, v_a_1618_, v_b_1619_, v_c_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
lean_dec(v___y_1622_);
lean_dec_ref(v___y_1621_);
lean_dec(v_upperBound_1611_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1(lean_object* v_upperBound_1627_, lean_object* v_structName_1628_, lean_object* v_e_1629_, lean_object* v_idx_1630_, lean_object* v_a_1631_, lean_object* v_inst_1632_, lean_object* v_R_1633_, lean_object* v_a_1634_, lean_object* v_b_1635_, lean_object* v_c_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
lean_object* v___x_1642_; 
v___x_1642_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___redArg(v_upperBound_1627_, v_structName_1628_, v_e_1629_, v_idx_1630_, v_a_1631_, v_a_1634_, v_b_1635_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1___boxed(lean_object* v_upperBound_1643_, lean_object* v_structName_1644_, lean_object* v_e_1645_, lean_object* v_idx_1646_, lean_object* v_a_1647_, lean_object* v_inst_1648_, lean_object* v_R_1649_, lean_object* v_a_1650_, lean_object* v_b_1651_, lean_object* v_c_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferProjType_spec__1_spec__1(v_upperBound_1643_, v_structName_1644_, v_e_1645_, v_idx_1646_, v_a_1647_, v_inst_1648_, v_R_1649_, v_a_1650_, v_b_1651_, v_c_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
lean_dec(v_upperBound_1643_);
return v_res_1658_;
}
}
static lean_object* _init_l_Lean_Meta_throwTypeExpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = ((lean_object*)(l_Lean_Meta_throwTypeExpected___redArg___closed__0));
v___x_1661_ = l_Lean_stringToMessageData(v___x_1660_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg(lean_object* v_type_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_){
_start:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1668_ = lean_obj_once(&l_Lean_Meta_throwTypeExpected___redArg___closed__1, &l_Lean_Meta_throwTypeExpected___redArg___closed__1_once, _init_l_Lean_Meta_throwTypeExpected___redArg___closed__1);
v___x_1669_ = l_Lean_indentExpr(v_type_1662_);
v___x_1670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1668_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
v___x_1671_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_1670_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___redArg___boxed(lean_object* v_type_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_);
lean_dec(v_a_1676_);
lean_dec_ref(v_a_1675_);
lean_dec(v_a_1674_);
lean_dec_ref(v_a_1673_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected(lean_object* v_00_u03b1_1679_, lean_object* v_type_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_){
_start:
{
lean_object* v___x_1686_; 
v___x_1686_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTypeExpected___boxed(lean_object* v_00_u03b1_1687_, lean_object* v_type_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l_Lean_Meta_throwTypeExpected(v_00_u03b1_1687_, v_type_1688_, v_a_1689_, v_a_1690_, v_a_1691_, v_a_1692_);
lean_dec(v_a_1692_);
lean_dec_ref(v_a_1691_);
lean_dec(v_a_1690_);
lean_dec_ref(v_a_1689_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_1695_, lean_object* v_x_1696_, lean_object* v_x_1697_, lean_object* v_x_1698_){
_start:
{
lean_object* v_ks_1699_; lean_object* v_vs_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1724_; 
v_ks_1699_ = lean_ctor_get(v_x_1695_, 0);
v_vs_1700_ = lean_ctor_get(v_x_1695_, 1);
v_isSharedCheck_1724_ = !lean_is_exclusive(v_x_1695_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1702_ = v_x_1695_;
v_isShared_1703_ = v_isSharedCheck_1724_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_vs_1700_);
lean_inc(v_ks_1699_);
lean_dec(v_x_1695_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1724_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1704_; uint8_t v___x_1705_; 
v___x_1704_ = lean_array_get_size(v_ks_1699_);
v___x_1705_ = lean_nat_dec_lt(v_x_1696_, v___x_1704_);
if (v___x_1705_ == 0)
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1709_; 
lean_dec(v_x_1696_);
v___x_1706_ = lean_array_push(v_ks_1699_, v_x_1697_);
v___x_1707_ = lean_array_push(v_vs_1700_, v_x_1698_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 1, v___x_1707_);
lean_ctor_set(v___x_1702_, 0, v___x_1706_);
v___x_1709_ = v___x_1702_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1706_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v___x_1707_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
else
{
lean_object* v_k_x27_1711_; uint8_t v___x_1712_; 
v_k_x27_1711_ = lean_array_fget_borrowed(v_ks_1699_, v_x_1696_);
v___x_1712_ = l_Lean_instBEqMVarId_beq(v_x_1697_, v_k_x27_1711_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1714_; 
if (v_isShared_1703_ == 0)
{
v___x_1714_ = v___x_1702_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_ks_1699_);
lean_ctor_set(v_reuseFailAlloc_1718_, 1, v_vs_1700_);
v___x_1714_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1715_ = lean_unsigned_to_nat(1u);
v___x_1716_ = lean_nat_add(v_x_1696_, v___x_1715_);
lean_dec(v_x_1696_);
v_x_1695_ = v___x_1714_;
v_x_1696_ = v___x_1716_;
goto _start;
}
}
else
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1722_; 
v___x_1719_ = lean_array_fset(v_ks_1699_, v_x_1696_, v_x_1697_);
v___x_1720_ = lean_array_fset(v_vs_1700_, v_x_1696_, v_x_1698_);
lean_dec(v_x_1696_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 1, v___x_1720_);
lean_ctor_set(v___x_1702_, 0, v___x_1719_);
v___x_1722_ = v___x_1702_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1719_);
lean_ctor_set(v_reuseFailAlloc_1723_, 1, v___x_1720_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_1725_, lean_object* v_k_1726_, lean_object* v_v_1727_){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = lean_unsigned_to_nat(0u);
v___x_1729_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_1725_, v___x_1728_, v_k_1726_, v_v_1727_);
return v___x_1729_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = lean_box(0);
v___x_1731_ = l_unsafeCast___redArg(v___x_1730_);
return v___x_1731_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1733_, size_t v_x_1734_, size_t v_x_1735_, lean_object* v_x_1736_, lean_object* v_x_1737_){
_start:
{
if (lean_obj_tag(v_x_1733_) == 0)
{
lean_object* v_es_1738_; size_t v___x_1739_; size_t v___x_1740_; lean_object* v_j_1741_; lean_object* v___x_1742_; uint8_t v___x_1743_; 
v_es_1738_ = lean_ctor_get(v_x_1733_, 0);
v___x_1739_ = ((size_t)31ULL);
v___x_1740_ = lean_usize_land(v_x_1734_, v___x_1739_);
v_j_1741_ = lean_usize_to_nat(v___x_1740_);
v___x_1742_ = lean_array_get_size(v_es_1738_);
v___x_1743_ = lean_nat_dec_lt(v_j_1741_, v___x_1742_);
if (v___x_1743_ == 0)
{
lean_dec(v_j_1741_);
lean_dec(v_x_1737_);
lean_dec(v_x_1736_);
return v_x_1733_;
}
else
{
lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1782_; 
lean_inc_ref(v_es_1738_);
v_isSharedCheck_1782_ = !lean_is_exclusive(v_x_1733_);
if (v_isSharedCheck_1782_ == 0)
{
lean_object* v_unused_1783_; 
v_unused_1783_ = lean_ctor_get(v_x_1733_, 0);
lean_dec(v_unused_1783_);
v___x_1745_ = v_x_1733_;
v_isShared_1746_ = v_isSharedCheck_1782_;
goto v_resetjp_1744_;
}
else
{
lean_dec(v_x_1733_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1782_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v_v_1747_; lean_object* v___x_1748_; lean_object* v_xs_x27_1749_; lean_object* v___y_1751_; 
v_v_1747_ = lean_array_fget(v_es_1738_, v_j_1741_);
v___x_1748_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0);
v_xs_x27_1749_ = lean_array_fset(v_es_1738_, v_j_1741_, v___x_1748_);
switch(lean_obj_tag(v_v_1747_))
{
case 0:
{
lean_object* v_key_1756_; lean_object* v_val_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1767_; 
v_key_1756_ = lean_ctor_get(v_v_1747_, 0);
v_val_1757_ = lean_ctor_get(v_v_1747_, 1);
v_isSharedCheck_1767_ = !lean_is_exclusive(v_v_1747_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1759_ = v_v_1747_;
v_isShared_1760_ = v_isSharedCheck_1767_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_val_1757_);
lean_inc(v_key_1756_);
lean_dec(v_v_1747_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1767_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
uint8_t v___x_1761_; 
v___x_1761_ = l_Lean_instBEqMVarId_beq(v_x_1736_, v_key_1756_);
if (v___x_1761_ == 0)
{
lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_del_object(v___x_1759_);
v___x_1762_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1756_, v_val_1757_, v_x_1736_, v_x_1737_);
v___x_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
v___y_1751_ = v___x_1763_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1765_; 
lean_dec(v_val_1757_);
lean_dec(v_key_1756_);
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 1, v_x_1737_);
lean_ctor_set(v___x_1759_, 0, v_x_1736_);
v___x_1765_ = v___x_1759_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_x_1736_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v_x_1737_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
v___y_1751_ = v___x_1765_;
goto v___jp_1750_;
}
}
}
}
case 1:
{
lean_object* v_node_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1780_; 
v_node_1768_ = lean_ctor_get(v_v_1747_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_v_1747_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1770_ = v_v_1747_;
v_isShared_1771_ = v_isSharedCheck_1780_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_node_1768_);
lean_dec(v_v_1747_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1780_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
size_t v___x_1772_; size_t v___x_1773_; size_t v___x_1774_; size_t v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1778_; 
v___x_1772_ = ((size_t)5ULL);
v___x_1773_ = lean_usize_shift_right(v_x_1734_, v___x_1772_);
v___x_1774_ = ((size_t)1ULL);
v___x_1775_ = lean_usize_add(v_x_1735_, v___x_1774_);
v___x_1776_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_node_1768_, v___x_1773_, v___x_1775_, v_x_1736_, v_x_1737_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 0, v___x_1776_);
v___x_1778_ = v___x_1770_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1776_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
v___y_1751_ = v___x_1778_;
goto v___jp_1750_;
}
}
}
default: 
{
lean_object* v___x_1781_; 
v___x_1781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1781_, 0, v_x_1736_);
lean_ctor_set(v___x_1781_, 1, v_x_1737_);
v___y_1751_ = v___x_1781_;
goto v___jp_1750_;
}
}
v___jp_1750_:
{
lean_object* v___x_1752_; lean_object* v___x_1754_; 
v___x_1752_ = lean_array_fset(v_xs_x27_1749_, v_j_1741_, v___y_1751_);
lean_dec(v_j_1741_);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v___x_1752_);
v___x_1754_ = v___x_1745_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v___x_1752_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
}
}
else
{
lean_object* v_ks_1784_; lean_object* v_vs_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1803_; 
v_ks_1784_ = lean_ctor_get(v_x_1733_, 0);
v_vs_1785_ = lean_ctor_get(v_x_1733_, 1);
v_isSharedCheck_1803_ = !lean_is_exclusive(v_x_1733_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1787_ = v_x_1733_;
v_isShared_1788_ = v_isSharedCheck_1803_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_vs_1785_);
lean_inc(v_ks_1784_);
lean_dec(v_x_1733_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1803_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_ks_1784_);
lean_ctor_set(v_reuseFailAlloc_1802_, 1, v_vs_1785_);
v___x_1790_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
lean_object* v_newNode_1791_; size_t v___x_1792_; uint8_t v___x_1793_; 
v_newNode_1791_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(v___x_1790_, v_x_1736_, v_x_1737_);
v___x_1792_ = ((size_t)7ULL);
v___x_1793_ = lean_usize_dec_le(v___x_1792_, v_x_1735_);
if (v___x_1793_ == 0)
{
lean_object* v___x_1794_; lean_object* v___x_1795_; uint8_t v___x_1796_; 
v___x_1794_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1791_);
v___x_1795_ = lean_unsigned_to_nat(4u);
v___x_1796_ = lean_nat_dec_lt(v___x_1794_, v___x_1795_);
lean_dec(v___x_1794_);
if (v___x_1796_ == 0)
{
lean_object* v_ks_1797_; lean_object* v_vs_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v_ks_1797_ = lean_ctor_get(v_newNode_1791_, 0);
lean_inc_ref(v_ks_1797_);
v_vs_1798_ = lean_ctor_get(v_newNode_1791_, 1);
lean_inc_ref(v_vs_1798_);
lean_dec_ref(v_newNode_1791_);
v___x_1799_ = lean_unsigned_to_nat(0u);
v___x_1800_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1801_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1735_, v_ks_1797_, v_vs_1798_, v___x_1799_, v___x_1800_);
lean_dec_ref(v_vs_1798_);
lean_dec_ref(v_ks_1797_);
return v___x_1801_;
}
else
{
return v_newNode_1791_;
}
}
else
{
return v_newNode_1791_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_1804_, lean_object* v_keys_1805_, lean_object* v_vals_1806_, lean_object* v_i_1807_, lean_object* v_entries_1808_){
_start:
{
lean_object* v___x_1809_; uint8_t v___x_1810_; 
v___x_1809_ = lean_array_get_size(v_keys_1805_);
v___x_1810_ = lean_nat_dec_lt(v_i_1807_, v___x_1809_);
if (v___x_1810_ == 0)
{
lean_dec(v_i_1807_);
return v_entries_1808_;
}
else
{
lean_object* v_k_1811_; lean_object* v_v_1812_; uint64_t v___x_1813_; size_t v_h_1814_; size_t v___x_1815_; lean_object* v___x_1816_; size_t v___x_1817_; size_t v___x_1818_; size_t v___x_1819_; size_t v_h_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; 
v_k_1811_ = lean_array_fget_borrowed(v_keys_1805_, v_i_1807_);
v_v_1812_ = lean_array_fget_borrowed(v_vals_1806_, v_i_1807_);
v___x_1813_ = l_Lean_instHashableMVarId_hash(v_k_1811_);
v_h_1814_ = lean_uint64_to_usize(v___x_1813_);
v___x_1815_ = ((size_t)5ULL);
v___x_1816_ = lean_unsigned_to_nat(1u);
v___x_1817_ = ((size_t)1ULL);
v___x_1818_ = lean_usize_sub(v_depth_1804_, v___x_1817_);
v___x_1819_ = lean_usize_mul(v___x_1815_, v___x_1818_);
v_h_1820_ = lean_usize_shift_right(v_h_1814_, v___x_1819_);
v___x_1821_ = lean_nat_add(v_i_1807_, v___x_1816_);
lean_dec(v_i_1807_);
lean_inc(v_v_1812_);
lean_inc(v_k_1811_);
v___x_1822_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_entries_1808_, v_h_1820_, v_depth_1804_, v_k_1811_, v_v_1812_);
v_i_1807_ = v___x_1821_;
v_entries_1808_ = v___x_1822_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_1824_, lean_object* v_keys_1825_, lean_object* v_vals_1826_, lean_object* v_i_1827_, lean_object* v_entries_1828_){
_start:
{
size_t v_depth_boxed_1829_; lean_object* v_res_1830_; 
v_depth_boxed_1829_ = lean_unbox_usize(v_depth_1824_);
lean_dec(v_depth_1824_);
v_res_1830_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_1829_, v_keys_1825_, v_vals_1826_, v_i_1827_, v_entries_1828_);
lean_dec_ref(v_vals_1826_);
lean_dec_ref(v_keys_1825_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1831_, lean_object* v_x_1832_, lean_object* v_x_1833_, lean_object* v_x_1834_, lean_object* v_x_1835_){
_start:
{
size_t v_x_1158__boxed_1836_; size_t v_x_1159__boxed_1837_; lean_object* v_res_1838_; 
v_x_1158__boxed_1836_ = lean_unbox_usize(v_x_1832_);
lean_dec(v_x_1832_);
v_x_1159__boxed_1837_ = lean_unbox_usize(v_x_1833_);
lean_dec(v_x_1833_);
v_res_1838_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_1831_, v_x_1158__boxed_1836_, v_x_1159__boxed_1837_, v_x_1834_, v_x_1835_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(lean_object* v_x_1839_, lean_object* v_x_1840_, lean_object* v_x_1841_){
_start:
{
uint64_t v___x_1842_; size_t v___x_1843_; size_t v___x_1844_; lean_object* v___x_1845_; 
v___x_1842_ = l_Lean_instHashableMVarId_hash(v_x_1840_);
v___x_1843_ = lean_uint64_to_usize(v___x_1842_);
v___x_1844_ = ((size_t)1ULL);
v___x_1845_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_1839_, v___x_1843_, v___x_1844_, v_x_1840_, v_x_1841_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(lean_object* v_mvarId_1846_, lean_object* v_val_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v___x_1850_; lean_object* v_mctx_1851_; lean_object* v_cache_1852_; lean_object* v_zetaDeltaFVarIds_1853_; lean_object* v_postponed_1854_; lean_object* v_diag_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1884_; 
v___x_1850_ = lean_st_ref_take(v___y_1848_);
v_mctx_1851_ = lean_ctor_get(v___x_1850_, 0);
v_cache_1852_ = lean_ctor_get(v___x_1850_, 1);
v_zetaDeltaFVarIds_1853_ = lean_ctor_get(v___x_1850_, 2);
v_postponed_1854_ = lean_ctor_get(v___x_1850_, 3);
v_diag_1855_ = lean_ctor_get(v___x_1850_, 4);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1857_ = v___x_1850_;
v_isShared_1858_ = v_isSharedCheck_1884_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_diag_1855_);
lean_inc(v_postponed_1854_);
lean_inc(v_zetaDeltaFVarIds_1853_);
lean_inc(v_cache_1852_);
lean_inc(v_mctx_1851_);
lean_dec(v___x_1850_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1884_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v_depth_1859_; lean_object* v_levelAssignDepth_1860_; lean_object* v_lmvarCounter_1861_; lean_object* v_mvarCounter_1862_; lean_object* v_lDecls_1863_; lean_object* v_decls_1864_; lean_object* v_userNames_1865_; lean_object* v_lAssignment_1866_; lean_object* v_eAssignment_1867_; lean_object* v_dAssignment_1868_; lean_object* v_instanceTypedMVars_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1883_; 
v_depth_1859_ = lean_ctor_get(v_mctx_1851_, 0);
v_levelAssignDepth_1860_ = lean_ctor_get(v_mctx_1851_, 1);
v_lmvarCounter_1861_ = lean_ctor_get(v_mctx_1851_, 2);
v_mvarCounter_1862_ = lean_ctor_get(v_mctx_1851_, 3);
v_lDecls_1863_ = lean_ctor_get(v_mctx_1851_, 4);
v_decls_1864_ = lean_ctor_get(v_mctx_1851_, 5);
v_userNames_1865_ = lean_ctor_get(v_mctx_1851_, 6);
v_lAssignment_1866_ = lean_ctor_get(v_mctx_1851_, 7);
v_eAssignment_1867_ = lean_ctor_get(v_mctx_1851_, 8);
v_dAssignment_1868_ = lean_ctor_get(v_mctx_1851_, 9);
v_instanceTypedMVars_1869_ = lean_ctor_get(v_mctx_1851_, 10);
v_isSharedCheck_1883_ = !lean_is_exclusive(v_mctx_1851_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1871_ = v_mctx_1851_;
v_isShared_1872_ = v_isSharedCheck_1883_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_instanceTypedMVars_1869_);
lean_inc(v_dAssignment_1868_);
lean_inc(v_eAssignment_1867_);
lean_inc(v_lAssignment_1866_);
lean_inc(v_userNames_1865_);
lean_inc(v_decls_1864_);
lean_inc(v_lDecls_1863_);
lean_inc(v_mvarCounter_1862_);
lean_inc(v_lmvarCounter_1861_);
lean_inc(v_levelAssignDepth_1860_);
lean_inc(v_depth_1859_);
lean_dec(v_mctx_1851_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1883_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1876_; 
v___x_1873_ = lean_box(0);
v___x_1874_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(v_eAssignment_1867_, v_mvarId_1846_, v_val_1847_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 8, v___x_1874_);
v___x_1876_ = v___x_1871_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_depth_1859_);
lean_ctor_set(v_reuseFailAlloc_1882_, 1, v_levelAssignDepth_1860_);
lean_ctor_set(v_reuseFailAlloc_1882_, 2, v_lmvarCounter_1861_);
lean_ctor_set(v_reuseFailAlloc_1882_, 3, v_mvarCounter_1862_);
lean_ctor_set(v_reuseFailAlloc_1882_, 4, v_lDecls_1863_);
lean_ctor_set(v_reuseFailAlloc_1882_, 5, v_decls_1864_);
lean_ctor_set(v_reuseFailAlloc_1882_, 6, v_userNames_1865_);
lean_ctor_set(v_reuseFailAlloc_1882_, 7, v_lAssignment_1866_);
lean_ctor_set(v_reuseFailAlloc_1882_, 8, v___x_1874_);
lean_ctor_set(v_reuseFailAlloc_1882_, 9, v_dAssignment_1868_);
lean_ctor_set(v_reuseFailAlloc_1882_, 10, v_instanceTypedMVars_1869_);
v___x_1876_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
lean_object* v___x_1878_; 
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 0, v___x_1876_);
v___x_1878_ = v___x_1857_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1876_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v_cache_1852_);
lean_ctor_set(v_reuseFailAlloc_1881_, 2, v_zetaDeltaFVarIds_1853_);
lean_ctor_set(v_reuseFailAlloc_1881_, 3, v_postponed_1854_);
lean_ctor_set(v_reuseFailAlloc_1881_, 4, v_diag_1855_);
v___x_1878_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = lean_st_ref_put(v___y_1848_, v___x_1878_);
v___x_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1873_);
return v___x_1880_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg___boxed(lean_object* v_mvarId_1885_, lean_object* v_val_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_1885_, v_val_1886_, v___y_1887_);
lean_dec(v___y_1887_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel(lean_object* v_type_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_){
_start:
{
lean_object* v___x_1896_; 
lean_inc(v_a_1894_);
lean_inc_ref(v_a_1893_);
lean_inc(v_a_1892_);
lean_inc_ref(v_a_1891_);
lean_inc_ref(v_type_1890_);
v___x_1896_ = lean_infer_type(v_type_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v___x_1898_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1897_);
lean_dec_ref_known(v___x_1896_, 1);
v___x_1898_ = l_Lean_Meta_whnfD(v_a_1897_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_);
if (lean_obj_tag(v___x_1898_) == 0)
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1933_; 
v_a_1899_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1901_ = v___x_1898_;
v_isShared_1902_ = v_isSharedCheck_1933_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v___x_1898_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1933_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
switch(lean_obj_tag(v_a_1899_))
{
case 3:
{
lean_object* v_u_1903_; lean_object* v___x_1905_; 
lean_dec_ref(v_type_1890_);
v_u_1903_ = lean_ctor_get(v_a_1899_, 0);
lean_inc(v_u_1903_);
lean_dec_ref_known(v_a_1899_, 1);
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 0, v_u_1903_);
v___x_1905_ = v___x_1901_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_u_1903_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
case 2:
{
lean_object* v_mvarId_1907_; lean_object* v___x_1908_; 
lean_del_object(v___x_1901_);
v_mvarId_1907_ = lean_ctor_get(v_a_1899_, 0);
lean_inc_n(v_mvarId_1907_, 2);
lean_dec_ref_known(v_a_1899_, 1);
v___x_1908_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_1907_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; uint8_t v___x_1910_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1908_, 1);
v___x_1910_ = lean_unbox(v_a_1909_);
lean_dec(v_a_1909_);
if (v___x_1910_ == 0)
{
lean_object* v___x_1911_; 
lean_dec_ref(v_type_1890_);
v___x_1911_ = l_Lean_Meta_mkFreshLevelMVar(v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc_n(v_a_1912_, 2);
lean_dec_ref_known(v___x_1911_, 1);
v___x_1913_ = l_Lean_mkSort(v_a_1912_);
v___x_1914_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_1907_, v___x_1913_, v_a_1892_);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1921_ == 0)
{
lean_object* v_unused_1922_; 
v_unused_1922_ = lean_ctor_get(v___x_1914_, 0);
lean_dec(v_unused_1922_);
v___x_1916_ = v___x_1914_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_dec(v___x_1914_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
lean_ctor_set(v___x_1916_, 0, v_a_1912_);
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_a_1912_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
return v___x_1919_;
}
}
}
else
{
lean_dec(v_mvarId_1907_);
return v___x_1911_;
}
}
else
{
lean_object* v___x_1923_; 
lean_dec(v_mvarId_1907_);
v___x_1923_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_);
return v___x_1923_;
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
lean_dec(v_mvarId_1907_);
lean_dec_ref(v_type_1890_);
v_a_1924_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___x_1908_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1908_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
default: 
{
lean_object* v___x_1932_; 
lean_del_object(v___x_1901_);
lean_dec(v_a_1899_);
v___x_1932_ = l_Lean_Meta_throwTypeExpected___redArg(v_type_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_);
return v___x_1932_;
}
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
lean_dec_ref(v_type_1890_);
v_a_1934_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___x_1898_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1898_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
lean_dec_ref(v_type_1890_);
v_a_1942_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1896_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1896_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getLevel___boxed(lean_object* v_type_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Lean_Meta_getLevel(v_type_1950_, v_a_1951_, v_a_1952_, v_a_1953_, v_a_1954_);
lean_dec(v_a_1954_);
lean_dec_ref(v_a_1953_);
lean_dec(v_a_1952_);
lean_dec_ref(v_a_1951_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0(lean_object* v_mvarId_1957_, lean_object* v_val_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
lean_object* v___x_1964_; 
v___x_1964_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___redArg(v_mvarId_1957_, v_val_1958_, v___y_1960_);
return v___x_1964_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0___boxed(lean_object* v_mvarId_1965_, lean_object* v_val_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_){
_start:
{
lean_object* v_res_1972_; 
v_res_1972_ = l_Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0(v_mvarId_1965_, v_val_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0(lean_object* v_00_u03b2_1973_, lean_object* v_x_1974_, lean_object* v_x_1975_, lean_object* v_x_1976_){
_start:
{
lean_object* v___x_1977_; 
v___x_1977_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0___redArg(v_x_1974_, v_x_1975_, v_x_1976_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1978_, lean_object* v_x_1979_, size_t v_x_1980_, size_t v_x_1981_, lean_object* v_x_1982_, lean_object* v_x_1983_){
_start:
{
lean_object* v___x_1984_; 
v___x_1984_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg(v_x_1979_, v_x_1980_, v_x_1981_, v_x_1982_, v_x_1983_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1985_, lean_object* v_x_1986_, lean_object* v_x_1987_, lean_object* v_x_1988_, lean_object* v_x_1989_, lean_object* v_x_1990_){
_start:
{
size_t v_x_1509__boxed_1991_; size_t v_x_1510__boxed_1992_; lean_object* v_res_1993_; 
v_x_1509__boxed_1991_ = lean_unbox_usize(v_x_1987_);
lean_dec(v_x_1987_);
v_x_1510__boxed_1992_ = lean_unbox_usize(v_x_1988_);
lean_dec(v_x_1988_);
v_res_1993_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1(v_00_u03b2_1985_, v_x_1986_, v_x_1509__boxed_1991_, v_x_1510__boxed_1992_, v_x_1989_, v_x_1990_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1994_, lean_object* v_n_1995_, lean_object* v_k_1996_, lean_object* v_v_1997_){
_start:
{
lean_object* v___x_1998_; 
v___x_1998_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2___redArg(v_n_1995_, v_k_1996_, v_v_1997_);
return v___x_1998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1999_, size_t v_depth_2000_, lean_object* v_keys_2001_, lean_object* v_vals_2002_, lean_object* v_heq_2003_, lean_object* v_i_2004_, lean_object* v_entries_2005_){
_start:
{
lean_object* v___x_2006_; 
v___x_2006_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_2000_, v_keys_2001_, v_vals_2002_, v_i_2004_, v_entries_2005_);
return v___x_2006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2007_, lean_object* v_depth_2008_, lean_object* v_keys_2009_, lean_object* v_vals_2010_, lean_object* v_heq_2011_, lean_object* v_i_2012_, lean_object* v_entries_2013_){
_start:
{
size_t v_depth_boxed_2014_; lean_object* v_res_2015_; 
v_depth_boxed_2014_ = lean_unbox_usize(v_depth_2008_);
lean_dec(v_depth_2008_);
v_res_2015_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_2007_, v_depth_boxed_2014_, v_keys_2009_, v_vals_2010_, v_heq_2011_, v_i_2012_, v_entries_2013_);
lean_dec_ref(v_vals_2010_);
lean_dec_ref(v_keys_2009_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2016_, lean_object* v_x_2017_, lean_object* v_x_2018_, lean_object* v_x_2019_, lean_object* v_x_2020_){
_start:
{
lean_object* v___x_2021_; 
v___x_2021_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_2017_, v_x_2018_, v_x_2019_, v_x_2020_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0(lean_object* v_k_2022_, lean_object* v_b_2023_, lean_object* v_c_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_){
_start:
{
lean_object* v___x_2030_; 
lean_inc(v___y_2028_);
lean_inc_ref(v___y_2027_);
lean_inc(v___y_2026_);
lean_inc_ref(v___y_2025_);
v___x_2030_ = lean_apply_7(v_k_2022_, v_b_2023_, v_c_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, lean_box(0));
return v___x_2030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed(lean_object* v_k_2031_, lean_object* v_b_2032_, lean_object* v_c_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_){
_start:
{
lean_object* v_res_2039_; 
v_res_2039_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0(v_k_2031_, v_b_2032_, v_c_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_);
lean_dec(v___y_2037_);
lean_dec_ref(v___y_2036_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
return v_res_2039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(lean_object* v_type_2040_, lean_object* v_k_2041_, uint8_t v_cleanupAnnotations_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v___f_2048_; uint8_t v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___f_2048_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2048_, 0, v_k_2041_);
v___x_2049_ = 0;
v___x_2050_ = lean_box(0);
v___x_2051_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_2049_, v___x_2050_, v_type_2040_, v___f_2048_, v_cleanupAnnotations_2042_, v___x_2049_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2059_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2054_ = v___x_2051_;
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v___x_2051_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2057_; 
if (v_isShared_2055_ == 0)
{
v___x_2057_ = v___x_2054_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_a_2052_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
return v___x_2057_;
}
}
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2067_; 
v_a_2060_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2062_ = v___x_2051_;
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v___x_2051_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2067_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2063_ == 0)
{
v___x_2065_ = v___x_2062_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v_a_2060_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___boxed(lean_object* v_type_2068_, lean_object* v_k_2069_, lean_object* v_cleanupAnnotations_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2076_; lean_object* v_res_2077_; 
v_cleanupAnnotations_boxed_2076_ = lean_unbox(v_cleanupAnnotations_2070_);
v_res_2077_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_type_2068_, v_k_2069_, v_cleanupAnnotations_boxed_2076_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1(lean_object* v_00_u03b1_2078_, lean_object* v_type_2079_, lean_object* v_k_2080_, uint8_t v_cleanupAnnotations_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_){
_start:
{
lean_object* v___x_2087_; 
v___x_2087_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_type_2079_, v_k_2080_, v_cleanupAnnotations_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
return v___x_2087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___boxed(lean_object* v_00_u03b1_2088_, lean_object* v_type_2089_, lean_object* v_k_2090_, lean_object* v_cleanupAnnotations_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2097_; lean_object* v_res_2098_; 
v_cleanupAnnotations_boxed_2097_ = lean_unbox(v_cleanupAnnotations_2091_);
v_res_2098_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1(v_00_u03b1_2088_, v_type_2089_, v_k_2090_, v_cleanupAnnotations_boxed_2097_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_);
lean_dec(v___y_2095_);
lean_dec_ref(v___y_2094_);
lean_dec(v___y_2093_);
lean_dec_ref(v___y_2092_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(lean_object* v_as_2099_, size_t v_i_2100_, size_t v_stop_2101_, lean_object* v_b_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
uint8_t v___x_2108_; 
v___x_2108_ = lean_usize_dec_eq(v_i_2100_, v_stop_2101_);
if (v___x_2108_ == 0)
{
size_t v___x_2109_; size_t v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2109_ = ((size_t)1ULL);
v___x_2110_ = lean_usize_sub(v_i_2100_, v___x_2109_);
v___x_2111_ = lean_array_uget_borrowed(v_as_2099_, v___x_2110_);
lean_inc(v___y_2106_);
lean_inc_ref(v___y_2105_);
lean_inc(v___y_2104_);
lean_inc_ref(v___y_2103_);
lean_inc(v___x_2111_);
v___x_2112_ = lean_infer_type(v___x_2111_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2114_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v___x_2114_ = l_Lean_Meta_getLevel(v_a_2113_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v_a_2115_; lean_object* v___x_2116_; 
v_a_2115_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_a_2115_);
lean_dec_ref_known(v___x_2114_, 1);
v___x_2116_ = l_Lean_mkLevelIMax_x27(v_a_2115_, v_b_2102_);
v_i_2100_ = v___x_2110_;
v_b_2102_ = v___x_2116_;
goto _start;
}
else
{
lean_dec(v_b_2102_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v_a_2118_; 
v_a_2118_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_a_2118_);
lean_dec_ref_known(v___x_2114_, 1);
v_i_2100_ = v___x_2110_;
v_b_2102_ = v_a_2118_;
goto _start;
}
else
{
return v___x_2114_;
}
}
}
else
{
lean_object* v_a_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2127_; 
lean_dec(v_b_2102_);
v_a_2120_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2122_ = v___x_2112_;
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_a_2120_);
lean_dec(v___x_2112_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2125_; 
if (v_isShared_2123_ == 0)
{
v___x_2125_ = v___x_2122_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_a_2120_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
}
else
{
lean_object* v___x_2128_; 
v___x_2128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2128_, 0, v_b_2102_);
return v___x_2128_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0___boxed(lean_object* v_as_2129_, lean_object* v_i_2130_, lean_object* v_stop_2131_, lean_object* v_b_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
size_t v_i_boxed_2138_; size_t v_stop_boxed_2139_; lean_object* v_res_2140_; 
v_i_boxed_2138_ = lean_unbox_usize(v_i_2130_);
lean_dec(v_i_2130_);
v_stop_boxed_2139_ = lean_unbox_usize(v_stop_2131_);
lean_dec(v_stop_2131_);
v_res_2140_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(v_as_2129_, v_i_boxed_2138_, v_stop_boxed_2139_, v_b_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_);
lean_dec(v___y_2136_);
lean_dec_ref(v___y_2135_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
lean_dec_ref(v_as_2129_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0(lean_object* v_xs_2141_, lean_object* v_e_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_){
_start:
{
lean_object* v___y_2149_; lean_object* v___x_2168_; 
v___x_2168_ = l_Lean_Meta_getLevel(v_e_2142_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_);
if (lean_obj_tag(v___x_2168_) == 0)
{
lean_object* v_a_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; uint8_t v___x_2172_; 
v_a_2169_ = lean_ctor_get(v___x_2168_, 0);
lean_inc(v_a_2169_);
v___x_2170_ = lean_array_get_size(v_xs_2141_);
v___x_2171_ = lean_unsigned_to_nat(0u);
v___x_2172_ = lean_nat_dec_lt(v___x_2171_, v___x_2170_);
if (v___x_2172_ == 0)
{
lean_dec(v_a_2169_);
v___y_2149_ = v___x_2168_;
goto v___jp_2148_;
}
else
{
size_t v___x_2173_; size_t v___x_2174_; lean_object* v___x_2175_; 
lean_dec_ref_known(v___x_2168_, 1);
v___x_2173_ = lean_usize_of_nat(v___x_2170_);
v___x_2174_ = ((size_t)0ULL);
v___x_2175_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__0(v_xs_2141_, v___x_2173_, v___x_2174_, v_a_2169_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_);
v___y_2149_ = v___x_2175_;
goto v___jp_2148_;
}
}
else
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
v_a_2176_ = lean_ctor_get(v___x_2168_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2168_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2168_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2168_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
v___jp_2148_:
{
if (lean_obj_tag(v___y_2149_) == 0)
{
lean_object* v_a_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2159_; 
v_a_2150_ = lean_ctor_get(v___y_2149_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v___y_2149_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2152_ = v___y_2149_;
v_isShared_2153_ = v_isSharedCheck_2159_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_a_2150_);
lean_dec(v___y_2149_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2159_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2157_; 
v___x_2154_ = l_Lean_Level_normalize(v_a_2150_);
lean_dec(v_a_2150_);
v___x_2155_ = l_Lean_mkSort(v___x_2154_);
if (v_isShared_2153_ == 0)
{
lean_ctor_set(v___x_2152_, 0, v___x_2155_);
v___x_2157_ = v___x_2152_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2155_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
else
{
lean_object* v_a_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2167_; 
v_a_2160_ = lean_ctor_get(v___y_2149_, 0);
v_isSharedCheck_2167_ = !lean_is_exclusive(v___y_2149_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2162_ = v___y_2149_;
v_isShared_2163_ = v_isSharedCheck_2167_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_a_2160_);
lean_dec(v___y_2149_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2167_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2165_; 
if (v_isShared_2163_ == 0)
{
v___x_2165_ = v___x_2162_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_a_2160_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0___boxed(lean_object* v_xs_2184_, lean_object* v_e_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_){
_start:
{
lean_object* v_res_2191_; 
v_res_2191_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___lam__0(v_xs_2184_, v_e_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec_ref(v_xs_2184_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(lean_object* v_e_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_){
_start:
{
lean_object* v___f_2199_; uint8_t v___x_2200_; lean_object* v___x_2201_; 
v___f_2199_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___closed__0));
v___x_2200_ = 0;
v___x_2201_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg(v_e_2193_, v___f_2199_, v___x_2200_, v_a_2194_, v_a_2195_, v_a_2196_, v_a_2197_);
return v___x_2201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___boxed(lean_object* v_e_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_){
_start:
{
lean_object* v_res_2208_; 
v_res_2208_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_2202_, v_a_2203_, v_a_2204_, v_a_2205_, v_a_2206_);
lean_dec(v_a_2206_);
lean_dec_ref(v_a_2205_);
lean_dec(v_a_2204_);
lean_dec_ref(v_a_2203_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(lean_object* v_e_2209_, lean_object* v_k_2210_, uint8_t v_cleanupAnnotations_2211_, uint8_t v_preserveNondepLet_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_){
_start:
{
lean_object* v___f_2218_; uint8_t v___x_2219_; uint8_t v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___f_2218_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2218_, 0, v_k_2210_);
v___x_2219_ = 1;
v___x_2220_ = 0;
v___x_2221_ = lean_box(0);
v___x_2222_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2209_, v___x_2219_, v___x_2219_, v_preserveNondepLet_2212_, v___x_2220_, v___x_2221_, v___f_2218_, v_cleanupAnnotations_2211_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_);
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
v_a_2223_ = lean_ctor_get(v___x_2222_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2222_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2222_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2222_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2223_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
v_a_2231_ = lean_ctor_get(v___x_2222_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2222_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2222_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2222_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg___boxed(lean_object* v_e_2239_, lean_object* v_k_2240_, lean_object* v_cleanupAnnotations_2241_, lean_object* v_preserveNondepLet_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2248_; uint8_t v_preserveNondepLet_boxed_2249_; lean_object* v_res_2250_; 
v_cleanupAnnotations_boxed_2248_ = lean_unbox(v_cleanupAnnotations_2241_);
v_preserveNondepLet_boxed_2249_ = lean_unbox(v_preserveNondepLet_2242_);
v_res_2250_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2239_, v_k_2240_, v_cleanupAnnotations_boxed_2248_, v_preserveNondepLet_boxed_2249_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec(v___y_2244_);
lean_dec_ref(v___y_2243_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0(lean_object* v_00_u03b1_2251_, lean_object* v_e_2252_, lean_object* v_k_2253_, uint8_t v_cleanupAnnotations_2254_, uint8_t v_preserveNondepLet_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2252_, v_k_2253_, v_cleanupAnnotations_2254_, v_preserveNondepLet_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___boxed(lean_object* v_00_u03b1_2262_, lean_object* v_e_2263_, lean_object* v_k_2264_, lean_object* v_cleanupAnnotations_2265_, lean_object* v_preserveNondepLet_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2272_; uint8_t v_preserveNondepLet_boxed_2273_; lean_object* v_res_2274_; 
v_cleanupAnnotations_boxed_2272_ = lean_unbox(v_cleanupAnnotations_2265_);
v_preserveNondepLet_boxed_2273_ = lean_unbox(v_preserveNondepLet_2266_);
v_res_2274_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0(v_00_u03b1_2262_, v_e_2263_, v_k_2264_, v_cleanupAnnotations_boxed_2272_, v_preserveNondepLet_boxed_2273_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec(v___y_2268_);
lean_dec_ref(v___y_2267_);
return v_res_2274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0(lean_object* v_xs_2275_, lean_object* v_e_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_){
_start:
{
lean_object* v___x_2282_; 
lean_inc(v___y_2280_);
lean_inc_ref(v___y_2279_);
lean_inc(v___y_2278_);
lean_inc_ref(v___y_2277_);
v___x_2282_ = lean_infer_type(v_e_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; uint8_t v___x_2284_; uint8_t v___x_2285_; uint8_t v___x_2286_; lean_object* v___x_2287_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
lean_dec_ref_known(v___x_2282_, 1);
v___x_2284_ = 0;
v___x_2285_ = 1;
v___x_2286_ = 1;
v___x_2287_ = l_Lean_Meta_mkForallFVars(v_xs_2275_, v_a_2283_, v___x_2284_, v___x_2285_, v___x_2284_, v___x_2286_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
return v___x_2287_;
}
else
{
lean_dec_ref(v_xs_2275_);
return v___x_2282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0___boxed(lean_object* v_xs_2288_, lean_object* v_e_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___lam__0(v_xs_2288_, v_e_2289_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
lean_dec(v___y_2291_);
lean_dec_ref(v___y_2290_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(lean_object* v_e_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_){
_start:
{
lean_object* v___f_2303_; uint8_t v___x_2304_; uint8_t v___x_2305_; lean_object* v___x_2306_; 
v___f_2303_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___closed__0));
v___x_2304_ = 0;
v___x_2305_ = 1;
v___x_2306_ = l_Lean_Meta_lambdaLetTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType_spec__0___redArg(v_e_2297_, v___f_2303_, v___x_2304_, v___x_2305_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___boxed(lean_object* v_e_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_){
_start:
{
lean_object* v_res_2313_; 
v_res_2313_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_2307_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_);
lean_dec(v_a_2311_);
lean_dec_ref(v_a_2310_);
lean_dec(v_a_2309_);
lean_dec_ref(v_a_2308_);
return v_res_2313_;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__1(void){
_start:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2315_ = ((lean_object*)(l_Lean_Meta_throwUnknownMVar___redArg___closed__0));
v___x_2316_ = l_Lean_stringToMessageData(v___x_2315_);
return v___x_2316_;
}
}
static lean_object* _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__3(void){
_start:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = ((lean_object*)(l_Lean_Meta_throwUnknownMVar___redArg___closed__2));
v___x_2319_ = l_Lean_stringToMessageData(v___x_2318_);
return v___x_2319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg(lean_object* v_mvarId_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2326_ = lean_obj_once(&l_Lean_Meta_throwUnknownMVar___redArg___closed__1, &l_Lean_Meta_throwUnknownMVar___redArg___closed__1_once, _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__1);
v___x_2327_ = l_Lean_MessageData_ofName(v_mvarId_2320_);
v___x_2328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2326_);
lean_ctor_set(v___x_2328_, 1, v___x_2327_);
v___x_2329_ = lean_obj_once(&l_Lean_Meta_throwUnknownMVar___redArg___closed__3, &l_Lean_Meta_throwUnknownMVar___redArg___closed__3_once, _init_l_Lean_Meta_throwUnknownMVar___redArg___closed__3);
v___x_2330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2330_, 0, v___x_2328_);
lean_ctor_set(v___x_2330_, 1, v___x_2329_);
v___x_2331_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_2330_, v_a_2321_, v_a_2322_, v_a_2323_, v_a_2324_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___redArg___boxed(lean_object* v_mvarId_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2332_, v_a_2333_, v_a_2334_, v_a_2335_, v_a_2336_);
lean_dec(v_a_2336_);
lean_dec_ref(v_a_2335_);
lean_dec(v_a_2334_);
lean_dec_ref(v_a_2333_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar(lean_object* v_00_u03b1_2339_, lean_object* v_mvarId_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v___x_2346_; 
v___x_2346_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwUnknownMVar___boxed(lean_object* v_00_u03b1_2347_, lean_object* v_mvarId_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_){
_start:
{
lean_object* v_res_2354_; 
v_res_2354_ = l_Lean_Meta_throwUnknownMVar(v_00_u03b1_2347_, v_mvarId_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_);
lean_dec(v_a_2352_);
lean_dec_ref(v_a_2351_);
lean_dec(v_a_2350_);
lean_dec_ref(v_a_2349_);
return v_res_2354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(lean_object* v_mvarId_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_){
_start:
{
lean_object* v___x_2361_; lean_object* v_mctx_2362_; lean_object* v___x_2363_; 
v___x_2361_ = lean_st_ref_get(v_a_2357_);
v_mctx_2362_ = lean_ctor_get(v___x_2361_, 0);
lean_inc_ref(v_mctx_2362_);
lean_dec(v___x_2361_);
v___x_2363_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2362_, v_mvarId_2355_);
lean_dec_ref(v_mctx_2362_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v___x_2364_; 
v___x_2364_ = l_Lean_Meta_throwUnknownMVar___redArg(v_mvarId_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_);
return v___x_2364_;
}
else
{
lean_object* v_val_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2373_; 
lean_dec(v_mvarId_2355_);
v_val_2365_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2367_ = v___x_2363_;
v_isShared_2368_ = v_isSharedCheck_2373_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_val_2365_);
lean_dec(v___x_2363_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2373_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v_type_2369_; lean_object* v___x_2371_; 
v_type_2369_ = lean_ctor_get(v_val_2365_, 2);
lean_inc_ref(v_type_2369_);
lean_dec(v_val_2365_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set_tag(v___x_2367_, 0);
lean_ctor_set(v___x_2367_, 0, v_type_2369_);
v___x_2371_ = v___x_2367_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_type_2369_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType___boxed(lean_object* v_mvarId_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_2374_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_);
lean_dec(v_a_2378_);
lean_dec_ref(v_a_2377_);
lean_dec(v_a_2376_);
lean_dec_ref(v_a_2375_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(lean_object* v_fvarId_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_){
_start:
{
lean_object* v_lctx_2386_; lean_object* v___x_2387_; 
v_lctx_2386_ = lean_ctor_get(v_a_2382_, 2);
lean_inc(v_fvarId_2381_);
lean_inc_ref(v_lctx_2386_);
v___x_2387_ = lean_local_ctx_find(v_lctx_2386_, v_fvarId_2381_);
if (lean_obj_tag(v___x_2387_) == 0)
{
lean_object* v___x_2388_; 
v___x_2388_ = l_Lean_FVarId_throwUnknown___redArg(v_fvarId_2381_, v_a_2383_, v_a_2384_);
return v___x_2388_;
}
else
{
lean_object* v_val_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2397_; 
lean_dec(v_fvarId_2381_);
v_val_2389_ = lean_ctor_get(v___x_2387_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2387_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2391_ = v___x_2387_;
v_isShared_2392_ = v_isSharedCheck_2397_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_val_2389_);
lean_dec(v___x_2387_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2397_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2393_; lean_object* v___x_2395_; 
v___x_2393_ = l_Lean_LocalDecl_type(v_val_2389_);
lean_dec(v_val_2389_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set_tag(v___x_2391_, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2393_);
v___x_2395_ = v___x_2391_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v___x_2393_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg___boxed(lean_object* v_fvarId_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_){
_start:
{
lean_object* v_res_2403_; 
v_res_2403_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_2398_, v_a_2399_, v_a_2400_, v_a_2401_);
lean_dec(v_a_2401_);
lean_dec_ref(v_a_2400_);
lean_dec_ref(v_a_2399_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(lean_object* v_fvarId_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_){
_start:
{
lean_object* v___x_2410_; 
v___x_2410_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_2404_, v_a_2405_, v_a_2407_, v_a_2408_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___boxed(lean_object* v_fvarId_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_){
_start:
{
lean_object* v_res_2417_; 
v_res_2417_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType(v_fvarId_2411_, v_a_2412_, v_a_2413_, v_a_2414_, v_a_2415_);
lean_dec(v_a_2415_);
lean_dec_ref(v_a_2414_);
lean_dec(v_a_2413_);
lean_dec_ref(v_a_2412_);
return v_res_2417_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0(void){
_start:
{
lean_object* v___x_2418_; 
v___x_2418_ = l_instMonadEIO___redArg();
return v___x_2418_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1(void){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2419_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__0);
v___x_2420_ = l_StateRefT_x27_instMonad___redArg(v___x_2419_);
return v___x_2420_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4(void){
_start:
{
lean_object* v___x_2423_; 
v___x_2423_ = l_instMonadExceptOfEIO___redArg();
return v___x_2423_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5(void){
_start:
{
lean_object* v___x_2424_; lean_object* v___f_2425_; 
v___x_2424_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4);
v___f_2425_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2425_, 0, v___x_2424_);
return v___f_2425_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6(void){
_start:
{
lean_object* v___x_2426_; lean_object* v___f_2427_; 
v___x_2426_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__4);
v___f_2427_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_2427_, 0, v___x_2426_);
return v___f_2427_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7(void){
_start:
{
lean_object* v___f_2428_; lean_object* v___f_2429_; lean_object* v___x_2430_; 
v___f_2428_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__6);
v___f_2429_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__5);
v___x_2430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2430_, 0, v___f_2429_);
lean_ctor_set(v___x_2430_, 1, v___f_2428_);
return v___x_2430_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8(void){
_start:
{
lean_object* v___x_2431_; lean_object* v___f_2432_; 
v___x_2431_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7);
v___f_2432_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2432_, 0, v___x_2431_);
return v___f_2432_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9(void){
_start:
{
lean_object* v___x_2433_; lean_object* v___f_2434_; 
v___x_2433_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__7);
v___f_2434_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_2434_, 0, v___x_2433_);
return v___f_2434_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10(void){
_start:
{
lean_object* v___f_2435_; lean_object* v___f_2436_; lean_object* v___x_2437_; 
v___f_2435_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__9);
v___f_2436_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__8);
v___x_2437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2437_, 0, v___f_2436_);
lean_ctor_set(v___x_2437_, 1, v___f_2435_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(lean_object* v_e_2440_, lean_object* v_inferType_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_){
_start:
{
uint8_t v_cacheInferType_2486_; 
v_cacheInferType_2486_ = lean_ctor_get_uint8(v_a_2442_, sizeof(void*)*7 + 3);
if (v_cacheInferType_2486_ == 0)
{
lean_dec_ref(v_e_2440_);
goto v___jp_2447_;
}
else
{
uint8_t v___x_2487_; 
v___x_2487_ = l_Lean_Expr_hasMVar(v_e_2440_);
if (v___x_2487_ == 0)
{
lean_object* v___f_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___f_2488_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__11));
v___x_2489_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__12));
v___x_2490_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_2440_, v_a_2442_);
if (lean_obj_tag(v___x_2490_) == 0)
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2588_; 
v_a_2491_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2493_ = v___x_2490_;
v_isShared_2494_ = v_isSharedCheck_2588_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2490_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2588_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2535_; lean_object* v_cache_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2583_; 
v___x_2535_ = lean_st_ref_get(v_a_2443_);
v_cache_2536_ = lean_ctor_get(v___x_2535_, 1);
v_isSharedCheck_2583_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2583_ == 0)
{
lean_object* v_unused_2584_; lean_object* v_unused_2585_; lean_object* v_unused_2586_; lean_object* v_unused_2587_; 
v_unused_2584_ = lean_ctor_get(v___x_2535_, 4);
lean_dec(v_unused_2584_);
v_unused_2585_ = lean_ctor_get(v___x_2535_, 3);
lean_dec(v_unused_2585_);
v_unused_2586_ = lean_ctor_get(v___x_2535_, 2);
lean_dec(v_unused_2586_);
v_unused_2587_ = lean_ctor_get(v___x_2535_, 0);
lean_dec(v_unused_2587_);
v___x_2538_ = v___x_2535_;
v_isShared_2539_ = v_isSharedCheck_2583_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_cache_2536_);
lean_dec(v___x_2535_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2583_;
goto v_resetjp_2537_;
}
v___jp_2495_:
{
lean_object* v___x_2496_; 
lean_inc(v_a_2445_);
lean_inc_ref(v_a_2444_);
lean_inc(v_a_2443_);
lean_inc_ref(v_a_2442_);
v___x_2496_ = lean_apply_5(v_inferType_2441_, v_a_2442_, v_a_2443_, v_a_2444_, v_a_2445_, lean_box(0));
if (lean_obj_tag(v___x_2496_) == 0)
{
lean_object* v_a_2497_; uint8_t v___x_2498_; 
v_a_2497_ = lean_ctor_get(v___x_2496_, 0);
lean_inc(v_a_2497_);
v___x_2498_ = l_Lean_Expr_hasMVar(v_a_2497_);
if (v___x_2498_ == 0)
{
lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2533_; 
v_isSharedCheck_2533_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2533_ == 0)
{
lean_object* v_unused_2534_; 
v_unused_2534_ = lean_ctor_get(v___x_2496_, 0);
lean_dec(v_unused_2534_);
v___x_2500_ = v___x_2496_;
v_isShared_2501_ = v_isSharedCheck_2533_;
goto v_resetjp_2499_;
}
else
{
lean_dec(v___x_2496_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2533_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2502_; lean_object* v_cache_2503_; lean_object* v_mctx_2504_; lean_object* v_zetaDeltaFVarIds_2505_; lean_object* v_postponed_2506_; lean_object* v_diag_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2532_; 
v___x_2502_ = lean_st_ref_take(v_a_2443_);
v_cache_2503_ = lean_ctor_get(v___x_2502_, 1);
v_mctx_2504_ = lean_ctor_get(v___x_2502_, 0);
v_zetaDeltaFVarIds_2505_ = lean_ctor_get(v___x_2502_, 2);
v_postponed_2506_ = lean_ctor_get(v___x_2502_, 3);
v_diag_2507_ = lean_ctor_get(v___x_2502_, 4);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2509_ = v___x_2502_;
v_isShared_2510_ = v_isSharedCheck_2532_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_diag_2507_);
lean_inc(v_postponed_2506_);
lean_inc(v_zetaDeltaFVarIds_2505_);
lean_inc(v_cache_2503_);
lean_inc(v_mctx_2504_);
lean_dec(v___x_2502_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2532_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v_inferType_2511_; lean_object* v_funInfo_2512_; lean_object* v_synthInstance_2513_; lean_object* v_whnf_2514_; lean_object* v_defEqTrans_2515_; lean_object* v_defEqPerm_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2531_; 
v_inferType_2511_ = lean_ctor_get(v_cache_2503_, 0);
v_funInfo_2512_ = lean_ctor_get(v_cache_2503_, 1);
v_synthInstance_2513_ = lean_ctor_get(v_cache_2503_, 2);
v_whnf_2514_ = lean_ctor_get(v_cache_2503_, 3);
v_defEqTrans_2515_ = lean_ctor_get(v_cache_2503_, 4);
v_defEqPerm_2516_ = lean_ctor_get(v_cache_2503_, 5);
v_isSharedCheck_2531_ = !lean_is_exclusive(v_cache_2503_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2518_ = v_cache_2503_;
v_isShared_2519_ = v_isSharedCheck_2531_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_defEqPerm_2516_);
lean_inc(v_defEqTrans_2515_);
lean_inc(v_whnf_2514_);
lean_inc(v_synthInstance_2513_);
lean_inc(v_funInfo_2512_);
lean_inc(v_inferType_2511_);
lean_dec(v_cache_2503_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2531_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2520_; lean_object* v___x_2522_; 
lean_inc(v_a_2497_);
v___x_2520_ = l_Lean_PersistentHashMap_insert___redArg(v___f_2488_, v___x_2489_, v_inferType_2511_, v_a_2491_, v_a_2497_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 0, v___x_2520_);
v___x_2522_ = v___x_2518_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v___x_2520_);
lean_ctor_set(v_reuseFailAlloc_2530_, 1, v_funInfo_2512_);
lean_ctor_set(v_reuseFailAlloc_2530_, 2, v_synthInstance_2513_);
lean_ctor_set(v_reuseFailAlloc_2530_, 3, v_whnf_2514_);
lean_ctor_set(v_reuseFailAlloc_2530_, 4, v_defEqTrans_2515_);
lean_ctor_set(v_reuseFailAlloc_2530_, 5, v_defEqPerm_2516_);
v___x_2522_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
lean_object* v___x_2524_; 
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 1, v___x_2522_);
v___x_2524_ = v___x_2509_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_mctx_2504_);
lean_ctor_set(v_reuseFailAlloc_2529_, 1, v___x_2522_);
lean_ctor_set(v_reuseFailAlloc_2529_, 2, v_zetaDeltaFVarIds_2505_);
lean_ctor_set(v_reuseFailAlloc_2529_, 3, v_postponed_2506_);
lean_ctor_set(v_reuseFailAlloc_2529_, 4, v_diag_2507_);
v___x_2524_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
lean_object* v___x_2525_; lean_object* v___x_2527_; 
v___x_2525_ = lean_st_ref_put(v_a_2443_, v___x_2524_);
if (v_isShared_2501_ == 0)
{
v___x_2527_ = v___x_2500_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2497_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_2497_);
lean_dec(v_a_2491_);
return v___x_2496_;
}
}
else
{
lean_dec(v_a_2491_);
return v___x_2496_;
}
}
v_resetjp_2537_:
{
lean_object* v_inferType_2540_; lean_object* v___x_2541_; 
v_inferType_2540_ = lean_ctor_get(v_cache_2536_, 0);
lean_inc_ref(v_inferType_2540_);
lean_dec_ref(v_cache_2536_);
lean_inc(v_a_2491_);
v___x_2541_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_2488_, v___x_2489_, v_inferType_2540_, v_a_2491_);
lean_dec_ref(v_inferType_2540_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v___x_2542_; lean_object* v_toApplicative_2543_; lean_object* v_toFunctor_2544_; lean_object* v_toSeq_2545_; lean_object* v_toSeqLeft_2546_; lean_object* v_toSeqRight_2547_; lean_object* v___f_2548_; lean_object* v___f_2549_; lean_object* v___f_2550_; lean_object* v___f_2551_; lean_object* v___x_2552_; lean_object* v___f_2553_; lean_object* v___f_2554_; lean_object* v___f_2555_; lean_object* v___x_2557_; 
lean_del_object(v___x_2493_);
v___x_2542_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1);
v_toApplicative_2543_ = lean_ctor_get(v___x_2542_, 0);
v_toFunctor_2544_ = lean_ctor_get(v_toApplicative_2543_, 0);
v_toSeq_2545_ = lean_ctor_get(v_toApplicative_2543_, 2);
v_toSeqLeft_2546_ = lean_ctor_get(v_toApplicative_2543_, 3);
v_toSeqRight_2547_ = lean_ctor_get(v_toApplicative_2543_, 4);
v___f_2548_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2));
v___f_2549_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3));
lean_inc_ref_n(v_toFunctor_2544_, 2);
v___f_2550_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2550_, 0, v_toFunctor_2544_);
v___f_2551_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2551_, 0, v_toFunctor_2544_);
v___x_2552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2552_, 0, v___f_2550_);
lean_ctor_set(v___x_2552_, 1, v___f_2551_);
lean_inc(v_toSeqRight_2547_);
v___f_2553_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2553_, 0, v_toSeqRight_2547_);
lean_inc(v_toSeqLeft_2546_);
v___f_2554_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2554_, 0, v_toSeqLeft_2546_);
lean_inc(v_toSeq_2545_);
v___f_2555_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2555_, 0, v_toSeq_2545_);
if (v_isShared_2539_ == 0)
{
lean_ctor_set(v___x_2538_, 4, v___f_2553_);
lean_ctor_set(v___x_2538_, 3, v___f_2554_);
lean_ctor_set(v___x_2538_, 2, v___f_2555_);
lean_ctor_set(v___x_2538_, 1, v___f_2548_);
lean_ctor_set(v___x_2538_, 0, v___x_2552_);
v___x_2557_ = v___x_2538_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v___x_2552_);
lean_ctor_set(v_reuseFailAlloc_2578_, 1, v___f_2548_);
lean_ctor_set(v_reuseFailAlloc_2578_, 2, v___f_2555_);
lean_ctor_set(v_reuseFailAlloc_2578_, 3, v___f_2554_);
lean_ctor_set(v_reuseFailAlloc_2578_, 4, v___f_2553_);
v___x_2557_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v_toCold_2564_; lean_object* v_cancelTk_x3f_2565_; 
v___x_2558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2557_);
lean_ctor_set(v___x_2558_, 1, v___f_2549_);
v___x_2559_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10);
v___x_2560_ = l_Lean_Core_instMonadRefCoreM;
v___x_2561_ = l_Lean_Core_instAddMessageContextCoreM;
v___x_2562_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_2561_, v___x_2558_);
v___x_2563_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2559_);
lean_ctor_set(v___x_2563_, 1, v___x_2560_);
lean_ctor_set(v___x_2563_, 2, v___x_2562_);
v_toCold_2564_ = lean_ctor_get(v_a_2444_, 0);
v_cancelTk_x3f_2565_ = lean_ctor_get(v_toCold_2564_, 10);
if (lean_obj_tag(v_cancelTk_x3f_2565_) == 1)
{
lean_object* v_val_2566_; uint8_t v___x_2567_; 
v_val_2566_ = lean_ctor_get(v_cancelTk_x3f_2565_, 0);
v___x_2567_ = l_IO_CancelToken_isSet(v_val_2566_);
if (v___x_2567_ == 0)
{
lean_dec_ref_known(v___x_2563_, 3);
goto v___jp_2495_;
}
else
{
lean_object* v___x_2060__overap_2568_; lean_object* v___x_2569_; 
v___x_2060__overap_2568_ = l_Lean_throwInterruptException___redArg(v___x_2563_);
lean_inc(v_a_2445_);
lean_inc_ref(v_a_2444_);
v___x_2569_ = lean_apply_3(v___x_2060__overap_2568_, v_a_2444_, v_a_2445_, lean_box(0));
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_dec_ref_known(v___x_2569_, 1);
goto v___jp_2495_;
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2577_; 
lean_dec(v_a_2491_);
lean_dec_ref(v_inferType_2441_);
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2572_ = v___x_2569_;
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___x_2569_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2575_; 
if (v_isShared_2573_ == 0)
{
v___x_2575_ = v___x_2572_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_a_2570_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_2563_, 3);
goto v___jp_2495_;
}
}
}
else
{
lean_object* v_val_2579_; lean_object* v___x_2581_; 
lean_del_object(v___x_2538_);
lean_dec(v_a_2491_);
lean_dec_ref(v_inferType_2441_);
v_val_2579_ = lean_ctor_get(v___x_2541_, 0);
lean_inc(v_val_2579_);
lean_dec_ref_known(v___x_2541_, 1);
if (v_isShared_2494_ == 0)
{
lean_ctor_set(v___x_2493_, 0, v_val_2579_);
v___x_2581_ = v___x_2493_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v_val_2579_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
return v___x_2581_;
}
}
}
}
}
else
{
lean_object* v_a_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2596_; 
lean_dec_ref(v_inferType_2441_);
v_a_2589_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2596_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2596_ == 0)
{
v___x_2591_ = v___x_2490_;
v_isShared_2592_ = v_isSharedCheck_2596_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_a_2589_);
lean_dec(v___x_2490_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2596_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v___x_2594_; 
if (v_isShared_2592_ == 0)
{
v___x_2594_ = v___x_2591_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v_a_2589_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
return v___x_2594_;
}
}
}
}
else
{
lean_dec_ref(v_e_2440_);
goto v___jp_2447_;
}
}
v___jp_2447_:
{
lean_object* v___x_2448_; lean_object* v_toApplicative_2449_; lean_object* v_toFunctor_2450_; lean_object* v_toSeq_2451_; lean_object* v_toSeqLeft_2452_; lean_object* v_toSeqRight_2453_; lean_object* v___f_2454_; lean_object* v___f_2455_; lean_object* v___f_2456_; lean_object* v___f_2457_; lean_object* v___x_2458_; lean_object* v___f_2459_; lean_object* v___f_2460_; lean_object* v___f_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v_toCold_2469_; lean_object* v_cancelTk_x3f_2470_; 
v___x_2448_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__1);
v_toApplicative_2449_ = lean_ctor_get(v___x_2448_, 0);
v_toFunctor_2450_ = lean_ctor_get(v_toApplicative_2449_, 0);
v_toSeq_2451_ = lean_ctor_get(v_toApplicative_2449_, 2);
v_toSeqLeft_2452_ = lean_ctor_get(v_toApplicative_2449_, 3);
v_toSeqRight_2453_ = lean_ctor_get(v_toApplicative_2449_, 4);
v___f_2454_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__2));
v___f_2455_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__3));
lean_inc_ref_n(v_toFunctor_2450_, 2);
v___f_2456_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2456_, 0, v_toFunctor_2450_);
v___f_2457_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2457_, 0, v_toFunctor_2450_);
v___x_2458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2458_, 0, v___f_2456_);
lean_ctor_set(v___x_2458_, 1, v___f_2457_);
lean_inc(v_toSeqRight_2453_);
v___f_2459_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2459_, 0, v_toSeqRight_2453_);
lean_inc(v_toSeqLeft_2452_);
v___f_2460_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2460_, 0, v_toSeqLeft_2452_);
lean_inc(v_toSeq_2451_);
v___f_2461_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2461_, 0, v_toSeq_2451_);
v___x_2462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2458_);
lean_ctor_set(v___x_2462_, 1, v___f_2454_);
lean_ctor_set(v___x_2462_, 2, v___f_2461_);
lean_ctor_set(v___x_2462_, 3, v___f_2460_);
lean_ctor_set(v___x_2462_, 4, v___f_2459_);
v___x_2463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2462_);
lean_ctor_set(v___x_2463_, 1, v___f_2455_);
v___x_2464_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10, &l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___closed__10);
v___x_2465_ = l_Lean_Core_instMonadRefCoreM;
v___x_2466_ = l_Lean_Core_instAddMessageContextCoreM;
v___x_2467_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_2466_, v___x_2463_);
v___x_2468_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2464_);
lean_ctor_set(v___x_2468_, 1, v___x_2465_);
lean_ctor_set(v___x_2468_, 2, v___x_2467_);
v_toCold_2469_ = lean_ctor_get(v_a_2444_, 0);
v_cancelTk_x3f_2470_ = lean_ctor_get(v_toCold_2469_, 10);
if (lean_obj_tag(v_cancelTk_x3f_2470_) == 1)
{
lean_object* v_val_2471_; uint8_t v___x_2472_; 
v_val_2471_ = lean_ctor_get(v_cancelTk_x3f_2470_, 0);
v___x_2472_ = l_IO_CancelToken_isSet(v_val_2471_);
if (v___x_2472_ == 0)
{
lean_object* v___x_2473_; 
lean_dec_ref_known(v___x_2468_, 3);
lean_inc(v_a_2445_);
lean_inc_ref(v_a_2444_);
lean_inc(v_a_2443_);
lean_inc_ref(v_a_2442_);
v___x_2473_ = lean_apply_5(v_inferType_2441_, v_a_2442_, v_a_2443_, v_a_2444_, v_a_2445_, lean_box(0));
return v___x_2473_;
}
else
{
lean_object* v___x_2032__overap_2474_; lean_object* v___x_2475_; 
v___x_2032__overap_2474_ = l_Lean_throwInterruptException___redArg(v___x_2468_);
lean_inc(v_a_2445_);
lean_inc_ref(v_a_2444_);
v___x_2475_ = lean_apply_3(v___x_2032__overap_2474_, v_a_2444_, v_a_2445_, lean_box(0));
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v___x_2476_; 
lean_dec_ref_known(v___x_2475_, 1);
lean_inc(v_a_2445_);
lean_inc_ref(v_a_2444_);
lean_inc(v_a_2443_);
lean_inc_ref(v_a_2442_);
v___x_2476_ = lean_apply_5(v_inferType_2441_, v_a_2442_, v_a_2443_, v_a_2444_, v_a_2445_, lean_box(0));
return v___x_2476_;
}
else
{
lean_object* v_a_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2484_; 
lean_dec_ref(v_inferType_2441_);
v_a_2477_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2484_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2479_ = v___x_2475_;
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_a_2477_);
lean_dec(v___x_2475_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2482_; 
if (v_isShared_2480_ == 0)
{
v___x_2482_ = v___x_2479_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v_a_2477_);
v___x_2482_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
return v___x_2482_;
}
}
}
}
}
else
{
lean_object* v___x_2485_; 
lean_dec_ref_known(v___x_2468_, 3);
lean_inc(v_a_2445_);
lean_inc_ref(v_a_2444_);
lean_inc(v_a_2443_);
lean_inc_ref(v_a_2442_);
v___x_2485_ = lean_apply_5(v_inferType_2441_, v_a_2442_, v_a_2443_, v_a_2444_, v_a_2445_, lean_box(0));
return v___x_2485_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache___boxed(lean_object* v_e_2597_, lean_object* v_inferType_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_){
_start:
{
lean_object* v_res_2604_; 
v_res_2604_ = l___private_Lean_Meta_InferType_0__Lean_Meta_checkInferTypeCache(v_e_2597_, v_inferType_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_);
lean_dec(v_a_2602_);
lean_dec_ref(v_a_2601_);
lean_dec(v_a_2600_);
lean_dec_ref(v_a_2599_);
return v_res_2604_;
}
}
static lean_object* _init_l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0(void){
_start:
{
uint8_t v___x_2605_; lean_object* v___x_2606_; 
v___x_2605_ = 2;
v___x_2606_ = l_Lean_Meta_ProjReductionKind_ctorIdx(v___x_2605_);
return v___x_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0(lean_object* v_x_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
lean_object* v___x_2659_; uint8_t v_beta_2660_; 
v___x_2659_ = l_Lean_Meta_Context_config(v___y_2608_);
v_beta_2660_ = lean_ctor_get_uint8(v___x_2659_, 13);
if (v_beta_2660_ == 0)
{
lean_dec_ref(v___x_2659_);
goto v___jp_2613_;
}
else
{
uint8_t v_iota_2661_; 
v_iota_2661_ = lean_ctor_get_uint8(v___x_2659_, 12);
if (v_iota_2661_ == 0)
{
lean_dec_ref(v___x_2659_);
goto v___jp_2613_;
}
else
{
uint8_t v_zeta_2662_; 
v_zeta_2662_ = lean_ctor_get_uint8(v___x_2659_, 15);
if (v_zeta_2662_ == 0)
{
lean_dec_ref(v___x_2659_);
goto v___jp_2613_;
}
else
{
uint8_t v_zetaHave_2663_; 
v_zetaHave_2663_ = lean_ctor_get_uint8(v___x_2659_, 18);
if (v_zetaHave_2663_ == 0)
{
lean_dec_ref(v___x_2659_);
goto v___jp_2613_;
}
else
{
uint8_t v_zetaDelta_2664_; 
v_zetaDelta_2664_ = lean_ctor_get_uint8(v___x_2659_, 16);
if (v_zetaDelta_2664_ == 0)
{
lean_dec_ref(v___x_2659_);
goto v___jp_2613_;
}
else
{
uint8_t v_etaStruct_2665_; uint8_t v_proj_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; uint8_t v___x_2669_; 
v_etaStruct_2665_ = lean_ctor_get_uint8(v___x_2659_, 10);
v_proj_2666_ = lean_ctor_get_uint8(v___x_2659_, 14);
lean_dec_ref(v___x_2659_);
v___x_2667_ = l_Lean_Meta_ProjReductionKind_ctorIdx(v_proj_2666_);
v___x_2668_ = lean_obj_once(&l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0, &l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0);
v___x_2669_ = lean_nat_dec_eq(v___x_2667_, v___x_2668_);
lean_dec(v___x_2667_);
if (v___x_2669_ == 0)
{
goto v___jp_2613_;
}
else
{
uint8_t v___x_2670_; uint8_t v___x_2671_; 
v___x_2670_ = 0;
v___x_2671_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_2665_, v___x_2670_);
if (v___x_2671_ == 0)
{
goto v___jp_2613_;
}
else
{
lean_object* v___x_2672_; 
v___x_2672_ = lean_apply_5(v_x_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_, lean_box(0));
return v___x_2672_;
}
}
}
}
}
}
}
v___jp_2613_:
{
lean_object* v___x_2614_; uint8_t v_foApprox_2615_; uint8_t v_ctxApprox_2616_; uint8_t v_quasiPatternApprox_2617_; uint8_t v_constApprox_2618_; uint8_t v_isDefEqStuckEx_2619_; uint8_t v_unificationHints_2620_; uint8_t v_proofIrrelevance_2621_; uint8_t v_assignSyntheticOpaque_2622_; uint8_t v_offsetCnstrs_2623_; uint8_t v_transparency_2624_; uint8_t v_univApprox_2625_; uint8_t v_zetaUnused_2626_; uint8_t v_canUnfoldPredicateConfig_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2658_; 
v___x_2614_ = l_Lean_Meta_Context_config(v___y_2608_);
v_foApprox_2615_ = lean_ctor_get_uint8(v___x_2614_, 0);
v_ctxApprox_2616_ = lean_ctor_get_uint8(v___x_2614_, 1);
v_quasiPatternApprox_2617_ = lean_ctor_get_uint8(v___x_2614_, 2);
v_constApprox_2618_ = lean_ctor_get_uint8(v___x_2614_, 3);
v_isDefEqStuckEx_2619_ = lean_ctor_get_uint8(v___x_2614_, 4);
v_unificationHints_2620_ = lean_ctor_get_uint8(v___x_2614_, 5);
v_proofIrrelevance_2621_ = lean_ctor_get_uint8(v___x_2614_, 6);
v_assignSyntheticOpaque_2622_ = lean_ctor_get_uint8(v___x_2614_, 7);
v_offsetCnstrs_2623_ = lean_ctor_get_uint8(v___x_2614_, 8);
v_transparency_2624_ = lean_ctor_get_uint8(v___x_2614_, 9);
v_univApprox_2625_ = lean_ctor_get_uint8(v___x_2614_, 11);
v_zetaUnused_2626_ = lean_ctor_get_uint8(v___x_2614_, 17);
v_canUnfoldPredicateConfig_2627_ = lean_ctor_get_uint8(v___x_2614_, 19);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2629_ = v___x_2614_;
v_isShared_2630_ = v_isSharedCheck_2658_;
goto v_resetjp_2628_;
}
else
{
lean_dec(v___x_2614_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2658_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
uint8_t v___x_2631_; uint8_t v___x_2632_; uint8_t v___x_2633_; lean_object* v___x_2635_; 
v___x_2631_ = 1;
v___x_2632_ = 0;
v___x_2633_ = 2;
if (v_isShared_2630_ == 0)
{
v___x_2635_ = v___x_2629_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 0, v_foApprox_2615_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 1, v_ctxApprox_2616_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 2, v_quasiPatternApprox_2617_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 3, v_constApprox_2618_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 4, v_isDefEqStuckEx_2619_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 5, v_unificationHints_2620_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 6, v_proofIrrelevance_2621_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 7, v_assignSyntheticOpaque_2622_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 8, v_offsetCnstrs_2623_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 9, v_transparency_2624_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 11, v_univApprox_2625_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 17, v_zetaUnused_2626_);
lean_ctor_set_uint8(v_reuseFailAlloc_2657_, 19, v_canUnfoldPredicateConfig_2627_);
v___x_2635_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
uint8_t v_trackZetaDelta_2636_; lean_object* v_zetaDeltaSet_2637_; lean_object* v_lctx_2638_; lean_object* v_localInstances_2639_; lean_object* v_defEqCtx_x3f_2640_; lean_object* v_synthPendingDepth_2641_; lean_object* v_customCanUnfoldPredicate_x3f_2642_; uint8_t v_univApprox_2643_; uint8_t v_inTypeClassResolution_2644_; uint8_t v_cacheInferType_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2655_; 
lean_ctor_set_uint8(v___x_2635_, 10, v___x_2632_);
lean_ctor_set_uint8(v___x_2635_, 12, v___x_2631_);
lean_ctor_set_uint8(v___x_2635_, 13, v___x_2631_);
lean_ctor_set_uint8(v___x_2635_, 14, v___x_2633_);
lean_ctor_set_uint8(v___x_2635_, 15, v___x_2631_);
lean_ctor_set_uint8(v___x_2635_, 16, v___x_2631_);
lean_ctor_set_uint8(v___x_2635_, 18, v___x_2631_);
v_trackZetaDelta_2636_ = lean_ctor_get_uint8(v___y_2608_, sizeof(void*)*7);
v_zetaDeltaSet_2637_ = lean_ctor_get(v___y_2608_, 1);
v_lctx_2638_ = lean_ctor_get(v___y_2608_, 2);
v_localInstances_2639_ = lean_ctor_get(v___y_2608_, 3);
v_defEqCtx_x3f_2640_ = lean_ctor_get(v___y_2608_, 4);
v_synthPendingDepth_2641_ = lean_ctor_get(v___y_2608_, 5);
v_customCanUnfoldPredicate_x3f_2642_ = lean_ctor_get(v___y_2608_, 6);
v_univApprox_2643_ = lean_ctor_get_uint8(v___y_2608_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2644_ = lean_ctor_get_uint8(v___y_2608_, sizeof(void*)*7 + 2);
v_cacheInferType_2645_ = lean_ctor_get_uint8(v___y_2608_, sizeof(void*)*7 + 3);
v_isSharedCheck_2655_ = !lean_is_exclusive(v___y_2608_);
if (v_isSharedCheck_2655_ == 0)
{
lean_object* v_unused_2656_; 
v_unused_2656_ = lean_ctor_get(v___y_2608_, 0);
lean_dec(v_unused_2656_);
v___x_2647_ = v___y_2608_;
v_isShared_2648_ = v_isSharedCheck_2655_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_2642_);
lean_inc(v_synthPendingDepth_2641_);
lean_inc(v_defEqCtx_x3f_2640_);
lean_inc(v_localInstances_2639_);
lean_inc(v_lctx_2638_);
lean_inc(v_zetaDeltaSet_2637_);
lean_dec(v___y_2608_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2655_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
uint64_t v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2652_; 
v___x_2649_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2635_);
v___x_2650_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2650_, 0, v___x_2635_);
lean_ctor_set_uint64(v___x_2650_, sizeof(void*)*1, v___x_2649_);
if (v_isShared_2648_ == 0)
{
lean_ctor_set(v___x_2647_, 0, v___x_2650_);
v___x_2652_ = v___x_2647_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v___x_2650_);
lean_ctor_set(v_reuseFailAlloc_2654_, 1, v_zetaDeltaSet_2637_);
lean_ctor_set(v_reuseFailAlloc_2654_, 2, v_lctx_2638_);
lean_ctor_set(v_reuseFailAlloc_2654_, 3, v_localInstances_2639_);
lean_ctor_set(v_reuseFailAlloc_2654_, 4, v_defEqCtx_x3f_2640_);
lean_ctor_set(v_reuseFailAlloc_2654_, 5, v_synthPendingDepth_2641_);
lean_ctor_set(v_reuseFailAlloc_2654_, 6, v_customCanUnfoldPredicate_x3f_2642_);
lean_ctor_set_uint8(v_reuseFailAlloc_2654_, sizeof(void*)*7, v_trackZetaDelta_2636_);
lean_ctor_set_uint8(v_reuseFailAlloc_2654_, sizeof(void*)*7 + 1, v_univApprox_2643_);
lean_ctor_set_uint8(v_reuseFailAlloc_2654_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2644_);
lean_ctor_set_uint8(v_reuseFailAlloc_2654_, sizeof(void*)*7 + 3, v_cacheInferType_2645_);
v___x_2652_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
lean_object* v___x_2653_; 
v___x_2653_ = lean_apply_5(v_x_2607_, v___x_2652_, v___y_2609_, v___y_2610_, v___y_2611_, lean_box(0));
return v___x_2653_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___lam__0___boxed(lean_object* v_x_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg(lean_object* v_x_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_){
_start:
{
lean_object* v___y_2687_; lean_object* v___x_2704_; uint8_t v_transparency_2705_; uint8_t v___x_2706_; uint8_t v___x_2707_; 
v___x_2704_ = l_Lean_Meta_Context_config(v_a_2681_);
v_transparency_2705_ = lean_ctor_get_uint8(v___x_2704_, 9);
lean_dec_ref(v___x_2704_);
v___x_2706_ = 1;
v___x_2707_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_2705_, v___x_2706_);
if (v___x_2707_ == 0)
{
lean_object* v___x_2708_; 
lean_inc(v_a_2684_);
lean_inc_ref(v_a_2683_);
lean_inc(v_a_2682_);
lean_inc_ref(v_a_2681_);
v___x_2708_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2680_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_);
v___y_2687_ = v___x_2708_;
goto v___jp_2686_;
}
else
{
lean_object* v_keyedConfig_2709_; uint8_t v_trackZetaDelta_2710_; lean_object* v_zetaDeltaSet_2711_; lean_object* v_lctx_2712_; lean_object* v_localInstances_2713_; lean_object* v_defEqCtx_x3f_2714_; lean_object* v_synthPendingDepth_2715_; lean_object* v_customCanUnfoldPredicate_x3f_2716_; uint8_t v_univApprox_2717_; uint8_t v_inTypeClassResolution_2718_; uint8_t v_cacheInferType_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; 
v_keyedConfig_2709_ = lean_ctor_get(v_a_2681_, 0);
v_trackZetaDelta_2710_ = lean_ctor_get_uint8(v_a_2681_, sizeof(void*)*7);
v_zetaDeltaSet_2711_ = lean_ctor_get(v_a_2681_, 1);
v_lctx_2712_ = lean_ctor_get(v_a_2681_, 2);
v_localInstances_2713_ = lean_ctor_get(v_a_2681_, 3);
v_defEqCtx_x3f_2714_ = lean_ctor_get(v_a_2681_, 4);
v_synthPendingDepth_2715_ = lean_ctor_get(v_a_2681_, 5);
v_customCanUnfoldPredicate_x3f_2716_ = lean_ctor_get(v_a_2681_, 6);
v_univApprox_2717_ = lean_ctor_get_uint8(v_a_2681_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2718_ = lean_ctor_get_uint8(v_a_2681_, sizeof(void*)*7 + 2);
v_cacheInferType_2719_ = lean_ctor_get_uint8(v_a_2681_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2709_);
v___x_2720_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2706_, v_keyedConfig_2709_);
lean_inc(v_customCanUnfoldPredicate_x3f_2716_);
lean_inc(v_synthPendingDepth_2715_);
lean_inc(v_defEqCtx_x3f_2714_);
lean_inc_ref(v_localInstances_2713_);
lean_inc_ref(v_lctx_2712_);
lean_inc(v_zetaDeltaSet_2711_);
v___x_2721_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2721_, 0, v___x_2720_);
lean_ctor_set(v___x_2721_, 1, v_zetaDeltaSet_2711_);
lean_ctor_set(v___x_2721_, 2, v_lctx_2712_);
lean_ctor_set(v___x_2721_, 3, v_localInstances_2713_);
lean_ctor_set(v___x_2721_, 4, v_defEqCtx_x3f_2714_);
lean_ctor_set(v___x_2721_, 5, v_synthPendingDepth_2715_);
lean_ctor_set(v___x_2721_, 6, v_customCanUnfoldPredicate_x3f_2716_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7, v_trackZetaDelta_2710_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 1, v_univApprox_2717_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2718_);
lean_ctor_set_uint8(v___x_2721_, sizeof(void*)*7 + 3, v_cacheInferType_2719_);
lean_inc(v_a_2684_);
lean_inc_ref(v_a_2683_);
lean_inc(v_a_2682_);
v___x_2722_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2680_, v___x_2721_, v_a_2682_, v_a_2683_, v_a_2684_);
v___y_2687_ = v___x_2722_;
goto v___jp_2686_;
}
v___jp_2686_:
{
if (lean_obj_tag(v___y_2687_) == 0)
{
lean_object* v_a_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2695_; 
v_a_2688_ = lean_ctor_get(v___y_2687_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v___y_2687_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2690_ = v___y_2687_;
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_a_2688_);
lean_dec(v___y_2687_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2693_; 
if (v_isShared_2691_ == 0)
{
v___x_2693_ = v___x_2690_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_a_2688_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
}
}
}
else
{
lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2703_; 
v_a_2696_ = lean_ctor_get(v___y_2687_, 0);
v_isSharedCheck_2703_ = !lean_is_exclusive(v___y_2687_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2698_ = v___y_2687_;
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_dec(v___y_2687_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2701_; 
if (v_isShared_2699_ == 0)
{
v___x_2701_ = v___x_2698_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_a_2696_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___redArg___boxed(lean_object* v_x_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = l_Lean_Meta_withInferTypeConfig___redArg(v_x_2723_, v_a_2724_, v_a_2725_, v_a_2726_, v_a_2727_);
lean_dec(v_a_2727_);
lean_dec_ref(v_a_2726_);
lean_dec(v_a_2725_);
lean_dec_ref(v_a_2724_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig(lean_object* v_00_u03b1_2730_, lean_object* v_x_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_){
_start:
{
lean_object* v___y_2738_; lean_object* v___x_2755_; uint8_t v_transparency_2756_; uint8_t v___x_2757_; uint8_t v___x_2758_; 
v___x_2755_ = l_Lean_Meta_Context_config(v_a_2732_);
v_transparency_2756_ = lean_ctor_get_uint8(v___x_2755_, 9);
lean_dec_ref(v___x_2755_);
v___x_2757_ = 1;
v___x_2758_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_2756_, v___x_2757_);
if (v___x_2758_ == 0)
{
lean_object* v___x_2759_; 
lean_inc(v_a_2735_);
lean_inc_ref(v_a_2734_);
lean_inc(v_a_2733_);
lean_inc_ref(v_a_2732_);
v___x_2759_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_);
v___y_2738_ = v___x_2759_;
goto v___jp_2737_;
}
else
{
lean_object* v_keyedConfig_2760_; uint8_t v_trackZetaDelta_2761_; lean_object* v_zetaDeltaSet_2762_; lean_object* v_lctx_2763_; lean_object* v_localInstances_2764_; lean_object* v_defEqCtx_x3f_2765_; lean_object* v_synthPendingDepth_2766_; lean_object* v_customCanUnfoldPredicate_x3f_2767_; uint8_t v_univApprox_2768_; uint8_t v_inTypeClassResolution_2769_; uint8_t v_cacheInferType_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v_keyedConfig_2760_ = lean_ctor_get(v_a_2732_, 0);
v_trackZetaDelta_2761_ = lean_ctor_get_uint8(v_a_2732_, sizeof(void*)*7);
v_zetaDeltaSet_2762_ = lean_ctor_get(v_a_2732_, 1);
v_lctx_2763_ = lean_ctor_get(v_a_2732_, 2);
v_localInstances_2764_ = lean_ctor_get(v_a_2732_, 3);
v_defEqCtx_x3f_2765_ = lean_ctor_get(v_a_2732_, 4);
v_synthPendingDepth_2766_ = lean_ctor_get(v_a_2732_, 5);
v_customCanUnfoldPredicate_x3f_2767_ = lean_ctor_get(v_a_2732_, 6);
v_univApprox_2768_ = lean_ctor_get_uint8(v_a_2732_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2769_ = lean_ctor_get_uint8(v_a_2732_, sizeof(void*)*7 + 2);
v_cacheInferType_2770_ = lean_ctor_get_uint8(v_a_2732_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2760_);
v___x_2771_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2757_, v_keyedConfig_2760_);
lean_inc(v_customCanUnfoldPredicate_x3f_2767_);
lean_inc(v_synthPendingDepth_2766_);
lean_inc(v_defEqCtx_x3f_2765_);
lean_inc_ref(v_localInstances_2764_);
lean_inc_ref(v_lctx_2763_);
lean_inc(v_zetaDeltaSet_2762_);
v___x_2772_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2772_, 0, v___x_2771_);
lean_ctor_set(v___x_2772_, 1, v_zetaDeltaSet_2762_);
lean_ctor_set(v___x_2772_, 2, v_lctx_2763_);
lean_ctor_set(v___x_2772_, 3, v_localInstances_2764_);
lean_ctor_set(v___x_2772_, 4, v_defEqCtx_x3f_2765_);
lean_ctor_set(v___x_2772_, 5, v_synthPendingDepth_2766_);
lean_ctor_set(v___x_2772_, 6, v_customCanUnfoldPredicate_x3f_2767_);
lean_ctor_set_uint8(v___x_2772_, sizeof(void*)*7, v_trackZetaDelta_2761_);
lean_ctor_set_uint8(v___x_2772_, sizeof(void*)*7 + 1, v_univApprox_2768_);
lean_ctor_set_uint8(v___x_2772_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2769_);
lean_ctor_set_uint8(v___x_2772_, sizeof(void*)*7 + 3, v_cacheInferType_2770_);
lean_inc(v_a_2735_);
lean_inc_ref(v_a_2734_);
lean_inc(v_a_2733_);
v___x_2773_ = l_Lean_Meta_withInferTypeConfig___redArg___lam__0(v_x_2731_, v___x_2772_, v_a_2733_, v_a_2734_, v_a_2735_);
v___y_2738_ = v___x_2773_;
goto v___jp_2737_;
}
v___jp_2737_:
{
if (lean_obj_tag(v___y_2738_) == 0)
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2746_; 
v_a_2739_ = lean_ctor_get(v___y_2738_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___y_2738_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2741_ = v___y_2738_;
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___y_2738_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2744_; 
if (v_isShared_2742_ == 0)
{
v___x_2744_ = v___x_2741_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2739_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
}
else
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2754_; 
v_a_2747_ = lean_ctor_get(v___y_2738_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___y_2738_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2749_ = v___y_2738_;
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v___y_2738_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2752_; 
if (v_isShared_2750_ == 0)
{
v___x_2752_ = v___x_2749_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2747_);
v___x_2752_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
return v___x_2752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withInferTypeConfig___boxed(lean_object* v_00_u03b1_2774_, lean_object* v_x_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_){
_start:
{
lean_object* v_res_2781_; 
v_res_2781_ = l_Lean_Meta_withInferTypeConfig(v_00_u03b1_2774_, v_x_2775_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_);
lean_dec(v_a_2779_);
lean_dec_ref(v_a_2778_);
lean_dec(v_a_2777_);
lean_dec_ref(v_a_2776_);
return v_res_2781_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2782_ = lean_box(0);
v___x_2783_ = l_Lean_interruptExceptionId;
v___x_2784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2783_);
lean_ctor_set(v___x_2784_, 1, v___x_2782_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg(){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2786_ = lean_obj_once(&l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0, &l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___closed__0);
v___x_2787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2786_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg___boxed(lean_object* v___y_2788_){
_start:
{
lean_object* v_res_2789_; 
v_res_2789_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
return v_res_2789_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(lean_object* v_00_u03b1_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_){
_start:
{
lean_object* v___x_2794_; 
v___x_2794_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___boxed(lean_object* v_00_u03b1_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_){
_start:
{
lean_object* v_res_2799_; 
v_res_2799_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0(v_00_u03b1_2795_, v___y_2796_, v___y_2797_);
lean_dec(v___y_2797_);
lean_dec_ref(v___y_2796_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4___redArg(lean_object* v_x_2800_, lean_object* v_x_2801_, lean_object* v_x_2802_, lean_object* v_x_2803_){
_start:
{
lean_object* v_ks_2804_; lean_object* v_vs_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2834_; 
v_ks_2804_ = lean_ctor_get(v_x_2800_, 0);
v_vs_2805_ = lean_ctor_get(v_x_2800_, 1);
v_isSharedCheck_2834_ = !lean_is_exclusive(v_x_2800_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2807_ = v_x_2800_;
v_isShared_2808_ = v_isSharedCheck_2834_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_vs_2805_);
lean_inc(v_ks_2804_);
lean_dec(v_x_2800_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2834_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
uint8_t v___y_2810_; lean_object* v___x_2822_; uint8_t v___x_2823_; 
v___x_2822_ = lean_array_get_size(v_ks_2804_);
v___x_2823_ = lean_nat_dec_lt(v_x_2801_, v___x_2822_);
if (v___x_2823_ == 0)
{
lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; 
lean_del_object(v___x_2807_);
lean_dec(v_x_2801_);
v___x_2824_ = lean_array_push(v_ks_2804_, v_x_2802_);
v___x_2825_ = lean_array_push(v_vs_2805_, v_x_2803_);
v___x_2826_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2824_);
lean_ctor_set(v___x_2826_, 1, v___x_2825_);
return v___x_2826_;
}
else
{
lean_object* v_expr_2827_; uint64_t v_configKey_2828_; lean_object* v_k_x27_2829_; lean_object* v_expr_2830_; uint64_t v_configKey_2831_; uint8_t v___x_2832_; 
v_expr_2827_ = lean_ctor_get(v_x_2802_, 0);
v_configKey_2828_ = lean_ctor_get_uint64(v_x_2802_, sizeof(void*)*1);
v_k_x27_2829_ = lean_array_fget_borrowed(v_ks_2804_, v_x_2801_);
v_expr_2830_ = lean_ctor_get(v_k_x27_2829_, 0);
v_configKey_2831_ = lean_ctor_get_uint64(v_k_x27_2829_, sizeof(void*)*1);
v___x_2832_ = lean_expr_equal(v_expr_2827_, v_expr_2830_);
if (v___x_2832_ == 0)
{
v___y_2810_ = v___x_2832_;
goto v___jp_2809_;
}
else
{
uint8_t v___x_2833_; 
v___x_2833_ = lean_uint64_dec_eq(v_configKey_2828_, v_configKey_2831_);
v___y_2810_ = v___x_2833_;
goto v___jp_2809_;
}
}
v___jp_2809_:
{
if (v___y_2810_ == 0)
{
lean_object* v___x_2812_; 
if (v_isShared_2808_ == 0)
{
v___x_2812_ = v___x_2807_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_ks_2804_);
lean_ctor_set(v_reuseFailAlloc_2816_, 1, v_vs_2805_);
v___x_2812_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2813_ = lean_unsigned_to_nat(1u);
v___x_2814_ = lean_nat_add(v_x_2801_, v___x_2813_);
lean_dec(v_x_2801_);
v_x_2800_ = v___x_2812_;
v_x_2801_ = v___x_2814_;
goto _start;
}
}
else
{
lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2820_; 
v___x_2817_ = lean_array_fset(v_ks_2804_, v_x_2801_, v_x_2802_);
v___x_2818_ = lean_array_fset(v_vs_2805_, v_x_2801_, v_x_2803_);
lean_dec(v_x_2801_);
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 1, v___x_2818_);
lean_ctor_set(v___x_2807_, 0, v___x_2817_);
v___x_2820_ = v___x_2807_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v___x_2817_);
lean_ctor_set(v_reuseFailAlloc_2821_, 1, v___x_2818_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(lean_object* v_n_2835_, lean_object* v_k_2836_, lean_object* v_v_2837_){
_start:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = lean_unsigned_to_nat(0u);
v___x_2839_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4___redArg(v_n_2835_, v___x_2838_, v_k_2836_, v_v_2837_);
return v___x_2839_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(lean_object* v_x_2840_, size_t v_x_2841_, size_t v_x_2842_, lean_object* v_x_2843_, lean_object* v_x_2844_){
_start:
{
if (lean_obj_tag(v_x_2840_) == 0)
{
lean_object* v_es_2845_; size_t v___x_2846_; size_t v___x_2847_; lean_object* v_j_2848_; lean_object* v___x_2849_; uint8_t v___x_2850_; 
v_es_2845_ = lean_ctor_get(v_x_2840_, 0);
v___x_2846_ = ((size_t)31ULL);
v___x_2847_ = lean_usize_land(v_x_2841_, v___x_2846_);
v_j_2848_ = lean_usize_to_nat(v___x_2847_);
v___x_2849_ = lean_array_get_size(v_es_2845_);
v___x_2850_ = lean_nat_dec_lt(v_j_2848_, v___x_2849_);
if (v___x_2850_ == 0)
{
lean_dec(v_j_2848_);
lean_dec(v_x_2844_);
lean_dec_ref(v_x_2843_);
return v_x_2840_;
}
else
{
lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2896_; 
lean_inc_ref(v_es_2845_);
v_isSharedCheck_2896_ = !lean_is_exclusive(v_x_2840_);
if (v_isSharedCheck_2896_ == 0)
{
lean_object* v_unused_2897_; 
v_unused_2897_ = lean_ctor_get(v_x_2840_, 0);
lean_dec(v_unused_2897_);
v___x_2852_ = v_x_2840_;
v_isShared_2853_ = v_isSharedCheck_2896_;
goto v_resetjp_2851_;
}
else
{
lean_dec(v_x_2840_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2896_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v_v_2854_; lean_object* v___x_2855_; lean_object* v_xs_x27_2856_; lean_object* v___y_2858_; 
v_v_2854_ = lean_array_fget(v_es_2845_, v_j_2848_);
v___x_2855_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__0);
v_xs_x27_2856_ = lean_array_fset(v_es_2845_, v_j_2848_, v___x_2855_);
switch(lean_obj_tag(v_v_2854_))
{
case 0:
{
lean_object* v_key_2863_; lean_object* v_val_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2881_; 
v_key_2863_ = lean_ctor_get(v_v_2854_, 0);
v_val_2864_ = lean_ctor_get(v_v_2854_, 1);
v_isSharedCheck_2881_ = !lean_is_exclusive(v_v_2854_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2866_ = v_v_2854_;
v_isShared_2867_ = v_isSharedCheck_2881_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_val_2864_);
lean_inc(v_key_2863_);
lean_dec(v_v_2854_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2881_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
uint8_t v___y_2869_; lean_object* v_expr_2875_; uint64_t v_configKey_2876_; lean_object* v_expr_2877_; uint64_t v_configKey_2878_; uint8_t v___x_2879_; 
v_expr_2875_ = lean_ctor_get(v_x_2843_, 0);
v_configKey_2876_ = lean_ctor_get_uint64(v_x_2843_, sizeof(void*)*1);
v_expr_2877_ = lean_ctor_get(v_key_2863_, 0);
v_configKey_2878_ = lean_ctor_get_uint64(v_key_2863_, sizeof(void*)*1);
v___x_2879_ = lean_expr_equal(v_expr_2875_, v_expr_2877_);
if (v___x_2879_ == 0)
{
v___y_2869_ = v___x_2879_;
goto v___jp_2868_;
}
else
{
uint8_t v___x_2880_; 
v___x_2880_ = lean_uint64_dec_eq(v_configKey_2876_, v_configKey_2878_);
v___y_2869_ = v___x_2880_;
goto v___jp_2868_;
}
v___jp_2868_:
{
if (v___y_2869_ == 0)
{
lean_object* v___x_2870_; lean_object* v___x_2871_; 
lean_del_object(v___x_2866_);
v___x_2870_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2863_, v_val_2864_, v_x_2843_, v_x_2844_);
v___x_2871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2870_);
v___y_2858_ = v___x_2871_;
goto v___jp_2857_;
}
else
{
lean_object* v___x_2873_; 
lean_dec(v_val_2864_);
lean_dec(v_key_2863_);
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 1, v_x_2844_);
lean_ctor_set(v___x_2866_, 0, v_x_2843_);
v___x_2873_ = v___x_2866_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_x_2843_);
lean_ctor_set(v_reuseFailAlloc_2874_, 1, v_x_2844_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
v___y_2858_ = v___x_2873_;
goto v___jp_2857_;
}
}
}
}
}
case 1:
{
lean_object* v_node_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2894_; 
v_node_2882_ = lean_ctor_get(v_v_2854_, 0);
v_isSharedCheck_2894_ = !lean_is_exclusive(v_v_2854_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2884_ = v_v_2854_;
v_isShared_2885_ = v_isSharedCheck_2894_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_node_2882_);
lean_dec(v_v_2854_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2894_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
size_t v___x_2886_; size_t v___x_2887_; size_t v___x_2888_; size_t v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2892_; 
v___x_2886_ = ((size_t)5ULL);
v___x_2887_ = lean_usize_shift_right(v_x_2841_, v___x_2886_);
v___x_2888_ = ((size_t)1ULL);
v___x_2889_ = lean_usize_add(v_x_2842_, v___x_2888_);
v___x_2890_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_node_2882_, v___x_2887_, v___x_2889_, v_x_2843_, v_x_2844_);
if (v_isShared_2885_ == 0)
{
lean_ctor_set(v___x_2884_, 0, v___x_2890_);
v___x_2892_ = v___x_2884_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v___x_2890_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
v___y_2858_ = v___x_2892_;
goto v___jp_2857_;
}
}
}
default: 
{
lean_object* v___x_2895_; 
v___x_2895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2895_, 0, v_x_2843_);
lean_ctor_set(v___x_2895_, 1, v_x_2844_);
v___y_2858_ = v___x_2895_;
goto v___jp_2857_;
}
}
v___jp_2857_:
{
lean_object* v___x_2859_; lean_object* v___x_2861_; 
v___x_2859_ = lean_array_fset(v_xs_x27_2856_, v_j_2848_, v___y_2858_);
lean_dec(v_j_2848_);
if (v_isShared_2853_ == 0)
{
lean_ctor_set(v___x_2852_, 0, v___x_2859_);
v___x_2861_ = v___x_2852_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v___x_2859_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
return v___x_2861_;
}
}
}
}
}
else
{
lean_object* v_ks_2898_; lean_object* v_vs_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2917_; 
v_ks_2898_ = lean_ctor_get(v_x_2840_, 0);
v_vs_2899_ = lean_ctor_get(v_x_2840_, 1);
v_isSharedCheck_2917_ = !lean_is_exclusive(v_x_2840_);
if (v_isSharedCheck_2917_ == 0)
{
v___x_2901_ = v_x_2840_;
v_isShared_2902_ = v_isSharedCheck_2917_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_vs_2899_);
lean_inc(v_ks_2898_);
lean_dec(v_x_2840_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2917_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___x_2904_; 
if (v_isShared_2902_ == 0)
{
v___x_2904_ = v___x_2901_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v_ks_2898_);
lean_ctor_set(v_reuseFailAlloc_2916_, 1, v_vs_2899_);
v___x_2904_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
lean_object* v_newNode_2905_; size_t v___x_2906_; uint8_t v___x_2907_; 
v_newNode_2905_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(v___x_2904_, v_x_2843_, v_x_2844_);
v___x_2906_ = ((size_t)7ULL);
v___x_2907_ = lean_usize_dec_le(v___x_2906_, v_x_2842_);
if (v___x_2907_ == 0)
{
lean_object* v___x_2908_; lean_object* v___x_2909_; uint8_t v___x_2910_; 
v___x_2908_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2905_);
v___x_2909_ = lean_unsigned_to_nat(4u);
v___x_2910_ = lean_nat_dec_lt(v___x_2908_, v___x_2909_);
lean_dec(v___x_2908_);
if (v___x_2910_ == 0)
{
lean_object* v_ks_2911_; lean_object* v_vs_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v_ks_2911_ = lean_ctor_get(v_newNode_2905_, 0);
lean_inc_ref(v_ks_2911_);
v_vs_2912_ = lean_ctor_get(v_newNode_2905_, 1);
lean_inc_ref(v_vs_2912_);
lean_dec_ref(v_newNode_2905_);
v___x_2913_ = lean_unsigned_to_nat(0u);
v___x_2914_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_getLevel_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_2915_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_x_2842_, v_ks_2911_, v_vs_2912_, v___x_2913_, v___x_2914_);
lean_dec_ref(v_vs_2912_);
lean_dec_ref(v_ks_2911_);
return v___x_2915_;
}
else
{
return v_newNode_2905_;
}
}
else
{
return v_newNode_2905_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(size_t v_depth_2918_, lean_object* v_keys_2919_, lean_object* v_vals_2920_, lean_object* v_i_2921_, lean_object* v_entries_2922_){
_start:
{
lean_object* v___x_2923_; uint8_t v___x_2924_; 
v___x_2923_ = lean_array_get_size(v_keys_2919_);
v___x_2924_ = lean_nat_dec_lt(v_i_2921_, v___x_2923_);
if (v___x_2924_ == 0)
{
lean_dec(v_i_2921_);
return v_entries_2922_;
}
else
{
lean_object* v_k_2925_; lean_object* v_expr_2926_; uint64_t v_configKey_2927_; lean_object* v_v_2928_; uint64_t v___x_2929_; uint64_t v___x_2930_; size_t v_h_2931_; size_t v___x_2932_; lean_object* v___x_2933_; size_t v___x_2934_; size_t v___x_2935_; size_t v___x_2936_; size_t v_h_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v_k_2925_ = lean_array_fget_borrowed(v_keys_2919_, v_i_2921_);
v_expr_2926_ = lean_ctor_get(v_k_2925_, 0);
v_configKey_2927_ = lean_ctor_get_uint64(v_k_2925_, sizeof(void*)*1);
v_v_2928_ = lean_array_fget_borrowed(v_vals_2920_, v_i_2921_);
v___x_2929_ = l_Lean_Expr_hash(v_expr_2926_);
v___x_2930_ = lean_uint64_mix_hash(v___x_2929_, v_configKey_2927_);
v_h_2931_ = lean_uint64_to_usize(v___x_2930_);
v___x_2932_ = ((size_t)5ULL);
v___x_2933_ = lean_unsigned_to_nat(1u);
v___x_2934_ = ((size_t)1ULL);
v___x_2935_ = lean_usize_sub(v_depth_2918_, v___x_2934_);
v___x_2936_ = lean_usize_mul(v___x_2932_, v___x_2935_);
v_h_2937_ = lean_usize_shift_right(v_h_2931_, v___x_2936_);
v___x_2938_ = lean_nat_add(v_i_2921_, v___x_2933_);
lean_dec(v_i_2921_);
lean_inc(v_v_2928_);
lean_inc(v_k_2925_);
v___x_2939_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_entries_2922_, v_h_2937_, v_depth_2918_, v_k_2925_, v_v_2928_);
v_i_2921_ = v___x_2938_;
v_entries_2922_ = v___x_2939_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_depth_2941_, lean_object* v_keys_2942_, lean_object* v_vals_2943_, lean_object* v_i_2944_, lean_object* v_entries_2945_){
_start:
{
size_t v_depth_boxed_2946_; lean_object* v_res_2947_; 
v_depth_boxed_2946_ = lean_unbox_usize(v_depth_2941_);
lean_dec(v_depth_2941_);
v_res_2947_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_depth_boxed_2946_, v_keys_2942_, v_vals_2943_, v_i_2944_, v_entries_2945_);
lean_dec_ref(v_vals_2943_);
lean_dec_ref(v_keys_2942_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg___boxed(lean_object* v_x_2948_, lean_object* v_x_2949_, lean_object* v_x_2950_, lean_object* v_x_2951_, lean_object* v_x_2952_){
_start:
{
size_t v_x_2800__boxed_2953_; size_t v_x_2801__boxed_2954_; lean_object* v_res_2955_; 
v_x_2800__boxed_2953_ = lean_unbox_usize(v_x_2949_);
lean_dec(v_x_2949_);
v_x_2801__boxed_2954_ = lean_unbox_usize(v_x_2950_);
lean_dec(v_x_2950_);
v_res_2955_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_2948_, v_x_2800__boxed_2953_, v_x_2801__boxed_2954_, v_x_2951_, v_x_2952_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(lean_object* v_x_2956_, lean_object* v_x_2957_, lean_object* v_x_2958_){
_start:
{
lean_object* v_expr_2959_; uint64_t v_configKey_2960_; uint64_t v___x_2961_; uint64_t v___x_2962_; size_t v___x_2963_; size_t v___x_2964_; lean_object* v___x_2965_; 
v_expr_2959_ = lean_ctor_get(v_x_2957_, 0);
v_configKey_2960_ = lean_ctor_get_uint64(v_x_2957_, sizeof(void*)*1);
v___x_2961_ = l_Lean_Expr_hash(v_expr_2959_);
v___x_2962_ = lean_uint64_mix_hash(v___x_2961_, v_configKey_2960_);
v___x_2963_ = lean_uint64_to_usize(v___x_2962_);
v___x_2964_ = ((size_t)1ULL);
v___x_2965_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_2956_, v___x_2963_, v___x_2964_, v_x_2957_, v_x_2958_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(lean_object* v_keys_2966_, lean_object* v_vals_2967_, lean_object* v_i_2968_, lean_object* v_k_2969_){
_start:
{
uint8_t v___y_2971_; lean_object* v___x_2977_; uint8_t v___x_2978_; 
v___x_2977_ = lean_array_get_size(v_keys_2966_);
v___x_2978_ = lean_nat_dec_lt(v_i_2968_, v___x_2977_);
if (v___x_2978_ == 0)
{
lean_object* v___x_2979_; 
lean_dec(v_i_2968_);
v___x_2979_ = lean_box(0);
return v___x_2979_;
}
else
{
lean_object* v_expr_2980_; uint64_t v_configKey_2981_; lean_object* v_k_x27_2982_; lean_object* v_expr_2983_; uint64_t v_configKey_2984_; uint8_t v___x_2985_; 
v_expr_2980_ = lean_ctor_get(v_k_2969_, 0);
v_configKey_2981_ = lean_ctor_get_uint64(v_k_2969_, sizeof(void*)*1);
v_k_x27_2982_ = lean_array_fget_borrowed(v_keys_2966_, v_i_2968_);
v_expr_2983_ = lean_ctor_get(v_k_x27_2982_, 0);
v_configKey_2984_ = lean_ctor_get_uint64(v_k_x27_2982_, sizeof(void*)*1);
v___x_2985_ = lean_expr_equal(v_expr_2980_, v_expr_2983_);
if (v___x_2985_ == 0)
{
v___y_2971_ = v___x_2985_;
goto v___jp_2970_;
}
else
{
uint8_t v___x_2986_; 
v___x_2986_ = lean_uint64_dec_eq(v_configKey_2981_, v_configKey_2984_);
v___y_2971_ = v___x_2986_;
goto v___jp_2970_;
}
}
v___jp_2970_:
{
if (v___y_2971_ == 0)
{
lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2972_ = lean_unsigned_to_nat(1u);
v___x_2973_ = lean_nat_add(v_i_2968_, v___x_2972_);
lean_dec(v_i_2968_);
v_i_2968_ = v___x_2973_;
goto _start;
}
else
{
lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2975_ = lean_array_fget_borrowed(v_vals_2967_, v_i_2968_);
lean_dec(v_i_2968_);
lean_inc(v___x_2975_);
v___x_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2976_, 0, v___x_2975_);
return v___x_2976_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_keys_2987_, lean_object* v_vals_2988_, lean_object* v_i_2989_, lean_object* v_k_2990_){
_start:
{
lean_object* v_res_2991_; 
v_res_2991_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_keys_2987_, v_vals_2988_, v_i_2989_, v_k_2990_);
lean_dec_ref(v_k_2990_);
lean_dec_ref(v_vals_2988_);
lean_dec_ref(v_keys_2987_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(lean_object* v_x_2992_, size_t v_x_2993_, lean_object* v_x_2994_){
_start:
{
if (lean_obj_tag(v_x_2992_) == 0)
{
lean_object* v_es_2995_; lean_object* v___x_2996_; size_t v___x_2997_; size_t v___x_2998_; lean_object* v_j_2999_; lean_object* v___x_3000_; 
v_es_2995_ = lean_ctor_get(v_x_2992_, 0);
v___x_2996_ = lean_box(2);
v___x_2997_ = ((size_t)31ULL);
v___x_2998_ = lean_usize_land(v_x_2993_, v___x_2997_);
v_j_2999_ = lean_usize_to_nat(v___x_2998_);
v___x_3000_ = lean_array_get_borrowed(v___x_2996_, v_es_2995_, v_j_2999_);
lean_dec(v_j_2999_);
switch(lean_obj_tag(v___x_3000_))
{
case 0:
{
lean_object* v_key_3001_; lean_object* v_val_3002_; uint8_t v___y_3004_; lean_object* v_expr_3007_; uint64_t v_configKey_3008_; lean_object* v_expr_3009_; uint64_t v_configKey_3010_; uint8_t v___x_3011_; 
v_key_3001_ = lean_ctor_get(v___x_3000_, 0);
v_val_3002_ = lean_ctor_get(v___x_3000_, 1);
v_expr_3007_ = lean_ctor_get(v_x_2994_, 0);
v_configKey_3008_ = lean_ctor_get_uint64(v_x_2994_, sizeof(void*)*1);
v_expr_3009_ = lean_ctor_get(v_key_3001_, 0);
v_configKey_3010_ = lean_ctor_get_uint64(v_key_3001_, sizeof(void*)*1);
v___x_3011_ = lean_expr_equal(v_expr_3007_, v_expr_3009_);
if (v___x_3011_ == 0)
{
v___y_3004_ = v___x_3011_;
goto v___jp_3003_;
}
else
{
uint8_t v___x_3012_; 
v___x_3012_ = lean_uint64_dec_eq(v_configKey_3008_, v_configKey_3010_);
v___y_3004_ = v___x_3012_;
goto v___jp_3003_;
}
v___jp_3003_:
{
if (v___y_3004_ == 0)
{
lean_object* v___x_3005_; 
v___x_3005_ = lean_box(0);
return v___x_3005_;
}
else
{
lean_object* v___x_3006_; 
lean_inc(v_val_3002_);
v___x_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3006_, 0, v_val_3002_);
return v___x_3006_;
}
}
}
case 1:
{
lean_object* v_node_3013_; size_t v___x_3014_; size_t v___x_3015_; 
v_node_3013_ = lean_ctor_get(v___x_3000_, 0);
v___x_3014_ = ((size_t)5ULL);
v___x_3015_ = lean_usize_shift_right(v_x_2993_, v___x_3014_);
v_x_2992_ = v_node_3013_;
v_x_2993_ = v___x_3015_;
goto _start;
}
default: 
{
lean_object* v___x_3017_; 
v___x_3017_ = lean_box(0);
return v___x_3017_;
}
}
}
else
{
lean_object* v_ks_3018_; lean_object* v_vs_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; 
v_ks_3018_ = lean_ctor_get(v_x_2992_, 0);
v_vs_3019_ = lean_ctor_get(v_x_2992_, 1);
v___x_3020_ = lean_unsigned_to_nat(0u);
v___x_3021_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_ks_3018_, v_vs_3019_, v___x_3020_, v_x_2994_);
return v___x_3021_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg___boxed(lean_object* v_x_3022_, lean_object* v_x_3023_, lean_object* v_x_3024_){
_start:
{
size_t v_x_3005__boxed_3025_; lean_object* v_res_3026_; 
v_x_3005__boxed_3025_ = lean_unbox_usize(v_x_3023_);
lean_dec(v_x_3023_);
v_res_3026_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_3022_, v_x_3005__boxed_3025_, v_x_3024_);
lean_dec_ref(v_x_3024_);
lean_dec_ref(v_x_3022_);
return v_res_3026_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(lean_object* v_x_3027_, lean_object* v_x_3028_){
_start:
{
lean_object* v_expr_3029_; uint64_t v_configKey_3030_; uint64_t v___x_3031_; uint64_t v___x_3032_; size_t v___x_3033_; lean_object* v___x_3034_; 
v_expr_3029_ = lean_ctor_get(v_x_3028_, 0);
v_configKey_3030_ = lean_ctor_get_uint64(v_x_3028_, sizeof(void*)*1);
v___x_3031_ = l_Lean_Expr_hash(v_expr_3029_);
v___x_3032_ = lean_uint64_mix_hash(v___x_3031_, v_configKey_3030_);
v___x_3033_ = lean_uint64_to_usize(v___x_3032_);
v___x_3034_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_3027_, v___x_3033_, v_x_3028_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg___boxed(lean_object* v_x_3035_, lean_object* v_x_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_x_3035_, v_x_3036_);
lean_dec_ref(v_x_3036_);
lean_dec_ref(v_x_3035_);
return v_res_3037_;
}
}
static lean_object* _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1(void){
_start:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; 
v___x_3039_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__0));
v___x_3040_ = l_Lean_stringToMessageData(v___x_3039_);
return v___x_3040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(lean_object* v_e_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_){
_start:
{
switch(lean_obj_tag(v_e_3041_))
{
case 0:
{
lean_object* v_deBruijnIndex_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; 
v_deBruijnIndex_3079_ = lean_ctor_get(v_e_3041_, 0);
lean_inc(v_deBruijnIndex_3079_);
lean_dec_ref_known(v_e_3041_, 1);
v___x_3080_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___closed__1);
v___x_3081_ = l_Lean_mkBVar(v_deBruijnIndex_3079_);
v___x_3082_ = l_Lean_MessageData_ofExpr(v___x_3081_);
v___x_3083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3080_);
lean_ctor_set(v___x_3083_, 1, v___x_3082_);
v___x_3084_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_3083_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3084_;
}
case 1:
{
lean_object* v_fvarId_3085_; lean_object* v___x_3086_; 
v_fvarId_3085_ = lean_ctor_get(v_e_3041_, 0);
lean_inc(v_fvarId_3085_);
lean_dec_ref_known(v_e_3041_, 1);
v___x_3086_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_3085_, v_a_3042_, v_a_3044_, v_a_3045_);
return v___x_3086_;
}
case 2:
{
lean_object* v_mvarId_3087_; lean_object* v___x_3088_; 
v_mvarId_3087_ = lean_ctor_get(v_e_3041_, 0);
lean_inc(v_mvarId_3087_);
lean_dec_ref_known(v_e_3041_, 1);
v___x_3088_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_3087_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3088_;
}
case 3:
{
lean_object* v_u_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; 
v_u_3089_ = lean_ctor_get(v_e_3041_, 0);
lean_inc(v_u_3089_);
lean_dec_ref_known(v_e_3041_, 1);
v___x_3090_ = l_Lean_Level_succ___override(v_u_3089_);
v___x_3091_ = l_Lean_mkSort(v___x_3090_);
v___x_3092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3091_);
return v___x_3092_;
}
case 4:
{
lean_object* v_declName_3093_; lean_object* v_us_3094_; 
v_declName_3093_ = lean_ctor_get(v_e_3041_, 0);
lean_inc(v_declName_3093_);
v_us_3094_ = lean_ctor_get(v_e_3041_, 1);
lean_inc(v_us_3094_);
if (lean_obj_tag(v_us_3094_) == 0)
{
lean_object* v___x_3111_; 
lean_dec_ref_known(v_e_3041_, 2);
v___x_3111_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3093_, v_us_3094_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3111_;
}
else
{
uint8_t v_cacheInferType_3112_; 
v_cacheInferType_3112_ = lean_ctor_get_uint8(v_a_3042_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3112_ == 0)
{
lean_dec_ref_known(v_e_3041_, 2);
goto v___jp_3095_;
}
else
{
uint8_t v___x_3113_; 
v___x_3113_ = l_Lean_Expr_hasMVar(v_e_3041_);
if (v___x_3113_ == 0)
{
lean_object* v___x_3114_; 
v___x_3114_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3041_, v_a_3042_);
if (lean_obj_tag(v___x_3114_) == 0)
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3180_; 
v_a_3115_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3117_ = v___x_3114_;
v_isShared_3118_ = v_isSharedCheck_3180_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_3114_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3180_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3159_; lean_object* v_cache_3160_; lean_object* v_inferType_3161_; lean_object* v___x_3162_; 
v___x_3159_ = lean_st_ref_get(v_a_3043_);
v_cache_3160_ = lean_ctor_get(v___x_3159_, 1);
lean_inc_ref(v_cache_3160_);
lean_dec(v___x_3159_);
v_inferType_3161_ = lean_ctor_get(v_cache_3160_, 0);
lean_inc_ref(v_inferType_3161_);
lean_dec_ref(v_cache_3160_);
v___x_3162_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3161_, v_a_3115_);
lean_dec_ref(v_inferType_3161_);
if (lean_obj_tag(v___x_3162_) == 0)
{
lean_object* v_toCold_3163_; lean_object* v_cancelTk_x3f_3164_; 
lean_del_object(v___x_3117_);
v_toCold_3163_ = lean_ctor_get(v_a_3044_, 0);
v_cancelTk_x3f_3164_ = lean_ctor_get(v_toCold_3163_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3164_) == 1)
{
lean_object* v_val_3165_; uint8_t v___x_3166_; 
v_val_3165_ = lean_ctor_get(v_cancelTk_x3f_3164_, 0);
v___x_3166_ = l_IO_CancelToken_isSet(v_val_3165_);
if (v___x_3166_ == 0)
{
goto v___jp_3119_;
}
else
{
lean_object* v___x_3167_; lean_object* v_a_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3175_; 
lean_dec(v_a_3115_);
lean_dec(v_us_3094_);
lean_dec(v_declName_3093_);
v___x_3167_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3168_ = lean_ctor_get(v___x_3167_, 0);
v_isSharedCheck_3175_ = !lean_is_exclusive(v___x_3167_);
if (v_isSharedCheck_3175_ == 0)
{
v___x_3170_ = v___x_3167_;
v_isShared_3171_ = v_isSharedCheck_3175_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_a_3168_);
lean_dec(v___x_3167_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3175_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v___x_3173_; 
if (v_isShared_3171_ == 0)
{
v___x_3173_ = v___x_3170_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v_a_3168_);
v___x_3173_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
return v___x_3173_;
}
}
}
}
else
{
goto v___jp_3119_;
}
}
else
{
lean_object* v_val_3176_; lean_object* v___x_3178_; 
lean_dec(v_a_3115_);
lean_dec(v_us_3094_);
lean_dec(v_declName_3093_);
v_val_3176_ = lean_ctor_get(v___x_3162_, 0);
lean_inc(v_val_3176_);
lean_dec_ref_known(v___x_3162_, 1);
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 0, v_val_3176_);
v___x_3178_ = v___x_3117_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_val_3176_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
v___jp_3119_:
{
lean_object* v___x_3120_; 
v___x_3120_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3093_, v_us_3094_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
if (lean_obj_tag(v___x_3120_) == 0)
{
lean_object* v_a_3121_; uint8_t v___x_3122_; 
v_a_3121_ = lean_ctor_get(v___x_3120_, 0);
lean_inc(v_a_3121_);
v___x_3122_ = l_Lean_Expr_hasMVar(v_a_3121_);
if (v___x_3122_ == 0)
{
lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3157_; 
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3120_);
if (v_isSharedCheck_3157_ == 0)
{
lean_object* v_unused_3158_; 
v_unused_3158_ = lean_ctor_get(v___x_3120_, 0);
lean_dec(v_unused_3158_);
v___x_3124_ = v___x_3120_;
v_isShared_3125_ = v_isSharedCheck_3157_;
goto v_resetjp_3123_;
}
else
{
lean_dec(v___x_3120_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3157_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
lean_object* v___x_3126_; lean_object* v_cache_3127_; lean_object* v_mctx_3128_; lean_object* v_zetaDeltaFVarIds_3129_; lean_object* v_postponed_3130_; lean_object* v_diag_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3156_; 
v___x_3126_ = lean_st_ref_take(v_a_3043_);
v_cache_3127_ = lean_ctor_get(v___x_3126_, 1);
v_mctx_3128_ = lean_ctor_get(v___x_3126_, 0);
v_zetaDeltaFVarIds_3129_ = lean_ctor_get(v___x_3126_, 2);
v_postponed_3130_ = lean_ctor_get(v___x_3126_, 3);
v_diag_3131_ = lean_ctor_get(v___x_3126_, 4);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3126_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3133_ = v___x_3126_;
v_isShared_3134_ = v_isSharedCheck_3156_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_diag_3131_);
lean_inc(v_postponed_3130_);
lean_inc(v_zetaDeltaFVarIds_3129_);
lean_inc(v_cache_3127_);
lean_inc(v_mctx_3128_);
lean_dec(v___x_3126_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3156_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
lean_object* v_inferType_3135_; lean_object* v_funInfo_3136_; lean_object* v_synthInstance_3137_; lean_object* v_whnf_3138_; lean_object* v_defEqTrans_3139_; lean_object* v_defEqPerm_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3155_; 
v_inferType_3135_ = lean_ctor_get(v_cache_3127_, 0);
v_funInfo_3136_ = lean_ctor_get(v_cache_3127_, 1);
v_synthInstance_3137_ = lean_ctor_get(v_cache_3127_, 2);
v_whnf_3138_ = lean_ctor_get(v_cache_3127_, 3);
v_defEqTrans_3139_ = lean_ctor_get(v_cache_3127_, 4);
v_defEqPerm_3140_ = lean_ctor_get(v_cache_3127_, 5);
v_isSharedCheck_3155_ = !lean_is_exclusive(v_cache_3127_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3142_ = v_cache_3127_;
v_isShared_3143_ = v_isSharedCheck_3155_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_defEqPerm_3140_);
lean_inc(v_defEqTrans_3139_);
lean_inc(v_whnf_3138_);
lean_inc(v_synthInstance_3137_);
lean_inc(v_funInfo_3136_);
lean_inc(v_inferType_3135_);
lean_dec(v_cache_3127_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3155_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3144_; lean_object* v___x_3146_; 
lean_inc(v_a_3121_);
v___x_3144_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3135_, v_a_3115_, v_a_3121_);
if (v_isShared_3143_ == 0)
{
lean_ctor_set(v___x_3142_, 0, v___x_3144_);
v___x_3146_ = v___x_3142_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v___x_3144_);
lean_ctor_set(v_reuseFailAlloc_3154_, 1, v_funInfo_3136_);
lean_ctor_set(v_reuseFailAlloc_3154_, 2, v_synthInstance_3137_);
lean_ctor_set(v_reuseFailAlloc_3154_, 3, v_whnf_3138_);
lean_ctor_set(v_reuseFailAlloc_3154_, 4, v_defEqTrans_3139_);
lean_ctor_set(v_reuseFailAlloc_3154_, 5, v_defEqPerm_3140_);
v___x_3146_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
lean_object* v___x_3148_; 
if (v_isShared_3134_ == 0)
{
lean_ctor_set(v___x_3133_, 1, v___x_3146_);
v___x_3148_ = v___x_3133_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_mctx_3128_);
lean_ctor_set(v_reuseFailAlloc_3153_, 1, v___x_3146_);
lean_ctor_set(v_reuseFailAlloc_3153_, 2, v_zetaDeltaFVarIds_3129_);
lean_ctor_set(v_reuseFailAlloc_3153_, 3, v_postponed_3130_);
lean_ctor_set(v_reuseFailAlloc_3153_, 4, v_diag_3131_);
v___x_3148_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
lean_object* v___x_3149_; lean_object* v___x_3151_; 
v___x_3149_ = lean_st_ref_put(v_a_3043_, v___x_3148_);
if (v_isShared_3125_ == 0)
{
v___x_3151_ = v___x_3124_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_a_3121_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3121_);
lean_dec(v_a_3115_);
return v___x_3120_;
}
}
else
{
lean_dec(v_a_3115_);
return v___x_3120_;
}
}
}
}
else
{
lean_object* v_a_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3188_; 
lean_dec(v_us_3094_);
lean_dec(v_declName_3093_);
v_a_3181_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3183_ = v___x_3114_;
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_a_3181_);
lean_dec(v___x_3114_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
lean_object* v___x_3186_; 
if (v_isShared_3184_ == 0)
{
v___x_3186_ = v___x_3183_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v_a_3181_);
v___x_3186_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
return v___x_3186_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3041_, 2);
goto v___jp_3095_;
}
}
}
v___jp_3095_:
{
lean_object* v_toCold_3096_; lean_object* v_cancelTk_x3f_3097_; 
v_toCold_3096_ = lean_ctor_get(v_a_3044_, 0);
v_cancelTk_x3f_3097_ = lean_ctor_get(v_toCold_3096_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3097_) == 1)
{
lean_object* v_val_3098_; uint8_t v___x_3099_; 
v_val_3098_ = lean_ctor_get(v_cancelTk_x3f_3097_, 0);
v___x_3099_ = l_IO_CancelToken_isSet(v_val_3098_);
if (v___x_3099_ == 0)
{
lean_object* v___x_3100_; 
v___x_3100_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3093_, v_us_3094_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3100_;
}
else
{
lean_object* v___x_3101_; lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
lean_dec(v_us_3094_);
lean_dec(v_declName_3093_);
v___x_3101_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3101_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v___x_3101_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3101_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_a_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
}
}
}
}
else
{
lean_object* v___x_3110_; 
v___x_3110_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3093_, v_us_3094_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3110_;
}
}
}
case 5:
{
lean_object* v_fn_3189_; uint8_t v_cacheInferType_3190_; lean_object* v_nargs_3191_; lean_object* v___x_3192_; lean_object* v_dummy_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; 
v_fn_3189_ = lean_ctor_get(v_e_3041_, 0);
v_cacheInferType_3190_ = lean_ctor_get_uint8(v_a_3042_, sizeof(void*)*7 + 3);
v_nargs_3191_ = l_Lean_Expr_getAppNumArgs(v_e_3041_);
v___x_3192_ = l_Lean_Expr_getAppFn(v_fn_3189_);
v_dummy_3193_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__1, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__1_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__1);
lean_inc(v_nargs_3191_);
v___x_3194_ = lean_mk_array(v_nargs_3191_, v_dummy_3193_);
v___x_3195_ = lean_unsigned_to_nat(1u);
v___x_3196_ = lean_nat_sub(v_nargs_3191_, v___x_3195_);
lean_dec(v_nargs_3191_);
lean_inc_ref(v_e_3041_);
v___x_3197_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3041_, v___x_3194_, v___x_3196_);
if (v_cacheInferType_3190_ == 0)
{
lean_dec_ref_known(v_e_3041_, 2);
goto v___jp_3198_;
}
else
{
uint8_t v___x_3214_; 
v___x_3214_ = l_Lean_Expr_hasMVar(v_e_3041_);
if (v___x_3214_ == 0)
{
lean_object* v___x_3215_; 
v___x_3215_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3041_, v_a_3042_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3281_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3218_ = v___x_3215_;
v_isShared_3219_ = v_isSharedCheck_3281_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3215_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3281_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3260_; lean_object* v_cache_3261_; lean_object* v_inferType_3262_; lean_object* v___x_3263_; 
v___x_3260_ = lean_st_ref_get(v_a_3043_);
v_cache_3261_ = lean_ctor_get(v___x_3260_, 1);
lean_inc_ref(v_cache_3261_);
lean_dec(v___x_3260_);
v_inferType_3262_ = lean_ctor_get(v_cache_3261_, 0);
lean_inc_ref(v_inferType_3262_);
lean_dec_ref(v_cache_3261_);
v___x_3263_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3262_, v_a_3216_);
lean_dec_ref(v_inferType_3262_);
if (lean_obj_tag(v___x_3263_) == 0)
{
lean_object* v_toCold_3264_; lean_object* v_cancelTk_x3f_3265_; 
lean_del_object(v___x_3218_);
v_toCold_3264_ = lean_ctor_get(v_a_3044_, 0);
v_cancelTk_x3f_3265_ = lean_ctor_get(v_toCold_3264_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3265_) == 1)
{
lean_object* v_val_3266_; uint8_t v___x_3267_; 
v_val_3266_ = lean_ctor_get(v_cancelTk_x3f_3265_, 0);
v___x_3267_ = l_IO_CancelToken_isSet(v_val_3266_);
if (v___x_3267_ == 0)
{
goto v___jp_3220_;
}
else
{
lean_object* v___x_3268_; lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
lean_dec(v_a_3216_);
lean_dec_ref(v___x_3197_);
lean_dec_ref(v___x_3192_);
v___x_3268_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3268_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3268_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
}
else
{
goto v___jp_3220_;
}
}
else
{
lean_object* v_val_3277_; lean_object* v___x_3279_; 
lean_dec(v_a_3216_);
lean_dec_ref(v___x_3197_);
lean_dec_ref(v___x_3192_);
v_val_3277_ = lean_ctor_get(v___x_3263_, 0);
lean_inc(v_val_3277_);
lean_dec_ref_known(v___x_3263_, 1);
if (v_isShared_3219_ == 0)
{
lean_ctor_set(v___x_3218_, 0, v_val_3277_);
v___x_3279_ = v___x_3218_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_val_3277_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
v___jp_3220_:
{
lean_object* v___x_3221_; 
v___x_3221_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3192_, v___x_3197_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
if (lean_obj_tag(v___x_3221_) == 0)
{
lean_object* v_a_3222_; uint8_t v___x_3223_; 
v_a_3222_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3222_);
v___x_3223_ = l_Lean_Expr_hasMVar(v_a_3222_);
if (v___x_3223_ == 0)
{
lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3258_; 
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3221_);
if (v_isSharedCheck_3258_ == 0)
{
lean_object* v_unused_3259_; 
v_unused_3259_ = lean_ctor_get(v___x_3221_, 0);
lean_dec(v_unused_3259_);
v___x_3225_ = v___x_3221_;
v_isShared_3226_ = v_isSharedCheck_3258_;
goto v_resetjp_3224_;
}
else
{
lean_dec(v___x_3221_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3258_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
lean_object* v___x_3227_; lean_object* v_cache_3228_; lean_object* v_mctx_3229_; lean_object* v_zetaDeltaFVarIds_3230_; lean_object* v_postponed_3231_; lean_object* v_diag_3232_; lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3257_; 
v___x_3227_ = lean_st_ref_take(v_a_3043_);
v_cache_3228_ = lean_ctor_get(v___x_3227_, 1);
v_mctx_3229_ = lean_ctor_get(v___x_3227_, 0);
v_zetaDeltaFVarIds_3230_ = lean_ctor_get(v___x_3227_, 2);
v_postponed_3231_ = lean_ctor_get(v___x_3227_, 3);
v_diag_3232_ = lean_ctor_get(v___x_3227_, 4);
v_isSharedCheck_3257_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3234_ = v___x_3227_;
v_isShared_3235_ = v_isSharedCheck_3257_;
goto v_resetjp_3233_;
}
else
{
lean_inc(v_diag_3232_);
lean_inc(v_postponed_3231_);
lean_inc(v_zetaDeltaFVarIds_3230_);
lean_inc(v_cache_3228_);
lean_inc(v_mctx_3229_);
lean_dec(v___x_3227_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3257_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
lean_object* v_inferType_3236_; lean_object* v_funInfo_3237_; lean_object* v_synthInstance_3238_; lean_object* v_whnf_3239_; lean_object* v_defEqTrans_3240_; lean_object* v_defEqPerm_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3256_; 
v_inferType_3236_ = lean_ctor_get(v_cache_3228_, 0);
v_funInfo_3237_ = lean_ctor_get(v_cache_3228_, 1);
v_synthInstance_3238_ = lean_ctor_get(v_cache_3228_, 2);
v_whnf_3239_ = lean_ctor_get(v_cache_3228_, 3);
v_defEqTrans_3240_ = lean_ctor_get(v_cache_3228_, 4);
v_defEqPerm_3241_ = lean_ctor_get(v_cache_3228_, 5);
v_isSharedCheck_3256_ = !lean_is_exclusive(v_cache_3228_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3243_ = v_cache_3228_;
v_isShared_3244_ = v_isSharedCheck_3256_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_defEqPerm_3241_);
lean_inc(v_defEqTrans_3240_);
lean_inc(v_whnf_3239_);
lean_inc(v_synthInstance_3238_);
lean_inc(v_funInfo_3237_);
lean_inc(v_inferType_3236_);
lean_dec(v_cache_3228_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3256_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3245_; lean_object* v___x_3247_; 
lean_inc(v_a_3222_);
v___x_3245_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3236_, v_a_3216_, v_a_3222_);
if (v_isShared_3244_ == 0)
{
lean_ctor_set(v___x_3243_, 0, v___x_3245_);
v___x_3247_ = v___x_3243_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v___x_3245_);
lean_ctor_set(v_reuseFailAlloc_3255_, 1, v_funInfo_3237_);
lean_ctor_set(v_reuseFailAlloc_3255_, 2, v_synthInstance_3238_);
lean_ctor_set(v_reuseFailAlloc_3255_, 3, v_whnf_3239_);
lean_ctor_set(v_reuseFailAlloc_3255_, 4, v_defEqTrans_3240_);
lean_ctor_set(v_reuseFailAlloc_3255_, 5, v_defEqPerm_3241_);
v___x_3247_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
lean_object* v___x_3249_; 
if (v_isShared_3235_ == 0)
{
lean_ctor_set(v___x_3234_, 1, v___x_3247_);
v___x_3249_ = v___x_3234_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v_mctx_3229_);
lean_ctor_set(v_reuseFailAlloc_3254_, 1, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3254_, 2, v_zetaDeltaFVarIds_3230_);
lean_ctor_set(v_reuseFailAlloc_3254_, 3, v_postponed_3231_);
lean_ctor_set(v_reuseFailAlloc_3254_, 4, v_diag_3232_);
v___x_3249_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
lean_object* v___x_3250_; lean_object* v___x_3252_; 
v___x_3250_ = lean_st_ref_put(v_a_3043_, v___x_3249_);
if (v_isShared_3226_ == 0)
{
v___x_3252_ = v___x_3225_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v_a_3222_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3222_);
lean_dec(v_a_3216_);
return v___x_3221_;
}
}
else
{
lean_dec(v_a_3216_);
return v___x_3221_;
}
}
}
}
else
{
lean_object* v_a_3282_; lean_object* v___x_3284_; uint8_t v_isShared_3285_; uint8_t v_isSharedCheck_3289_; 
lean_dec_ref(v___x_3197_);
lean_dec_ref(v___x_3192_);
v_a_3282_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3289_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3289_ == 0)
{
v___x_3284_ = v___x_3215_;
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
else
{
lean_inc(v_a_3282_);
lean_dec(v___x_3215_);
v___x_3284_ = lean_box(0);
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
v_resetjp_3283_:
{
lean_object* v___x_3287_; 
if (v_isShared_3285_ == 0)
{
v___x_3287_ = v___x_3284_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v_a_3282_);
v___x_3287_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
return v___x_3287_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3041_, 2);
goto v___jp_3198_;
}
}
v___jp_3198_:
{
lean_object* v_toCold_3199_; lean_object* v_cancelTk_x3f_3200_; 
v_toCold_3199_ = lean_ctor_get(v_a_3044_, 0);
v_cancelTk_x3f_3200_ = lean_ctor_get(v_toCold_3199_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3200_) == 1)
{
lean_object* v_val_3201_; uint8_t v___x_3202_; 
v_val_3201_ = lean_ctor_get(v_cancelTk_x3f_3200_, 0);
v___x_3202_ = l_IO_CancelToken_isSet(v_val_3201_);
if (v___x_3202_ == 0)
{
lean_object* v___x_3203_; 
v___x_3203_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3192_, v___x_3197_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3203_;
}
else
{
lean_object* v___x_3204_; lean_object* v_a_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3212_; 
lean_dec_ref(v___x_3197_);
lean_dec_ref(v___x_3192_);
v___x_3204_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3205_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3212_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3212_ == 0)
{
v___x_3207_ = v___x_3204_;
v_isShared_3208_ = v_isSharedCheck_3212_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_a_3205_);
lean_dec(v___x_3204_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3212_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v___x_3210_; 
if (v_isShared_3208_ == 0)
{
v___x_3210_ = v___x_3207_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v_a_3205_);
v___x_3210_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
return v___x_3210_;
}
}
}
}
else
{
lean_object* v___x_3213_; 
v___x_3213_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferAppType(v___x_3192_, v___x_3197_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3213_;
}
}
}
case 7:
{
uint8_t v_cacheInferType_3290_; 
v_cacheInferType_3290_ = lean_ctor_get_uint8(v_a_3042_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3290_ == 0)
{
goto v___jp_3063_;
}
else
{
uint8_t v___x_3291_; 
v___x_3291_ = l_Lean_Expr_hasMVar(v_e_3041_);
if (v___x_3291_ == 0)
{
lean_object* v___x_3292_; 
lean_inc_ref(v_e_3041_);
v___x_3292_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3041_, v_a_3042_);
if (lean_obj_tag(v___x_3292_) == 0)
{
lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3358_; 
v_a_3293_ = lean_ctor_get(v___x_3292_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3292_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3295_ = v___x_3292_;
v_isShared_3296_ = v_isSharedCheck_3358_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v___x_3292_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3358_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v___x_3337_; lean_object* v_cache_3338_; lean_object* v_inferType_3339_; lean_object* v___x_3340_; 
v___x_3337_ = lean_st_ref_get(v_a_3043_);
v_cache_3338_ = lean_ctor_get(v___x_3337_, 1);
lean_inc_ref(v_cache_3338_);
lean_dec(v___x_3337_);
v_inferType_3339_ = lean_ctor_get(v_cache_3338_, 0);
lean_inc_ref(v_inferType_3339_);
lean_dec_ref(v_cache_3338_);
v___x_3340_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3339_, v_a_3293_);
lean_dec_ref(v_inferType_3339_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v_toCold_3341_; lean_object* v_cancelTk_x3f_3342_; 
lean_del_object(v___x_3295_);
v_toCold_3341_ = lean_ctor_get(v_a_3044_, 0);
v_cancelTk_x3f_3342_ = lean_ctor_get(v_toCold_3341_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3342_) == 1)
{
lean_object* v_val_3343_; uint8_t v___x_3344_; 
v_val_3343_ = lean_ctor_get(v_cancelTk_x3f_3342_, 0);
v___x_3344_ = l_IO_CancelToken_isSet(v_val_3343_);
if (v___x_3344_ == 0)
{
goto v___jp_3297_;
}
else
{
lean_object* v___x_3345_; lean_object* v_a_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3353_; 
lean_dec(v_a_3293_);
lean_dec_ref_known(v_e_3041_, 3);
v___x_3345_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3346_ = lean_ctor_get(v___x_3345_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3345_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3348_ = v___x_3345_;
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_a_3346_);
lean_dec(v___x_3345_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3351_; 
if (v_isShared_3349_ == 0)
{
v___x_3351_ = v___x_3348_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_a_3346_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
return v___x_3351_;
}
}
}
}
else
{
goto v___jp_3297_;
}
}
else
{
lean_object* v_val_3354_; lean_object* v___x_3356_; 
lean_dec(v_a_3293_);
lean_dec_ref_known(v_e_3041_, 3);
v_val_3354_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_val_3354_);
lean_dec_ref_known(v___x_3340_, 1);
if (v_isShared_3296_ == 0)
{
lean_ctor_set(v___x_3295_, 0, v_val_3354_);
v___x_3356_ = v___x_3295_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v_val_3354_);
v___x_3356_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
return v___x_3356_;
}
}
v___jp_3297_:
{
lean_object* v___x_3298_; 
v___x_3298_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3041_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v_a_3299_; uint8_t v___x_3300_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
lean_inc(v_a_3299_);
v___x_3300_ = l_Lean_Expr_hasMVar(v_a_3299_);
if (v___x_3300_ == 0)
{
lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3335_; 
v_isSharedCheck_3335_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3335_ == 0)
{
lean_object* v_unused_3336_; 
v_unused_3336_ = lean_ctor_get(v___x_3298_, 0);
lean_dec(v_unused_3336_);
v___x_3302_ = v___x_3298_;
v_isShared_3303_ = v_isSharedCheck_3335_;
goto v_resetjp_3301_;
}
else
{
lean_dec(v___x_3298_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3335_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3304_; lean_object* v_cache_3305_; lean_object* v_mctx_3306_; lean_object* v_zetaDeltaFVarIds_3307_; lean_object* v_postponed_3308_; lean_object* v_diag_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3334_; 
v___x_3304_ = lean_st_ref_take(v_a_3043_);
v_cache_3305_ = lean_ctor_get(v___x_3304_, 1);
v_mctx_3306_ = lean_ctor_get(v___x_3304_, 0);
v_zetaDeltaFVarIds_3307_ = lean_ctor_get(v___x_3304_, 2);
v_postponed_3308_ = lean_ctor_get(v___x_3304_, 3);
v_diag_3309_ = lean_ctor_get(v___x_3304_, 4);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3304_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3311_ = v___x_3304_;
v_isShared_3312_ = v_isSharedCheck_3334_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_diag_3309_);
lean_inc(v_postponed_3308_);
lean_inc(v_zetaDeltaFVarIds_3307_);
lean_inc(v_cache_3305_);
lean_inc(v_mctx_3306_);
lean_dec(v___x_3304_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3334_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v_inferType_3313_; lean_object* v_funInfo_3314_; lean_object* v_synthInstance_3315_; lean_object* v_whnf_3316_; lean_object* v_defEqTrans_3317_; lean_object* v_defEqPerm_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3333_; 
v_inferType_3313_ = lean_ctor_get(v_cache_3305_, 0);
v_funInfo_3314_ = lean_ctor_get(v_cache_3305_, 1);
v_synthInstance_3315_ = lean_ctor_get(v_cache_3305_, 2);
v_whnf_3316_ = lean_ctor_get(v_cache_3305_, 3);
v_defEqTrans_3317_ = lean_ctor_get(v_cache_3305_, 4);
v_defEqPerm_3318_ = lean_ctor_get(v_cache_3305_, 5);
v_isSharedCheck_3333_ = !lean_is_exclusive(v_cache_3305_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3320_ = v_cache_3305_;
v_isShared_3321_ = v_isSharedCheck_3333_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_defEqPerm_3318_);
lean_inc(v_defEqTrans_3317_);
lean_inc(v_whnf_3316_);
lean_inc(v_synthInstance_3315_);
lean_inc(v_funInfo_3314_);
lean_inc(v_inferType_3313_);
lean_dec(v_cache_3305_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3333_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3322_; lean_object* v___x_3324_; 
lean_inc(v_a_3299_);
v___x_3322_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3313_, v_a_3293_, v_a_3299_);
if (v_isShared_3321_ == 0)
{
lean_ctor_set(v___x_3320_, 0, v___x_3322_);
v___x_3324_ = v___x_3320_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v___x_3322_);
lean_ctor_set(v_reuseFailAlloc_3332_, 1, v_funInfo_3314_);
lean_ctor_set(v_reuseFailAlloc_3332_, 2, v_synthInstance_3315_);
lean_ctor_set(v_reuseFailAlloc_3332_, 3, v_whnf_3316_);
lean_ctor_set(v_reuseFailAlloc_3332_, 4, v_defEqTrans_3317_);
lean_ctor_set(v_reuseFailAlloc_3332_, 5, v_defEqPerm_3318_);
v___x_3324_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
lean_object* v___x_3326_; 
if (v_isShared_3312_ == 0)
{
lean_ctor_set(v___x_3311_, 1, v___x_3324_);
v___x_3326_ = v___x_3311_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_mctx_3306_);
lean_ctor_set(v_reuseFailAlloc_3331_, 1, v___x_3324_);
lean_ctor_set(v_reuseFailAlloc_3331_, 2, v_zetaDeltaFVarIds_3307_);
lean_ctor_set(v_reuseFailAlloc_3331_, 3, v_postponed_3308_);
lean_ctor_set(v_reuseFailAlloc_3331_, 4, v_diag_3309_);
v___x_3326_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
lean_object* v___x_3327_; lean_object* v___x_3329_; 
v___x_3327_ = lean_st_ref_put(v_a_3043_, v___x_3326_);
if (v_isShared_3303_ == 0)
{
v___x_3329_ = v___x_3302_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_a_3299_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3299_);
lean_dec(v_a_3293_);
return v___x_3298_;
}
}
else
{
lean_dec(v_a_3293_);
return v___x_3298_;
}
}
}
}
else
{
lean_object* v_a_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3366_; 
lean_dec_ref_known(v_e_3041_, 3);
v_a_3359_ = lean_ctor_get(v___x_3292_, 0);
v_isSharedCheck_3366_ = !lean_is_exclusive(v___x_3292_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3361_ = v___x_3292_;
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_a_3359_);
lean_dec(v___x_3292_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3364_; 
if (v_isShared_3362_ == 0)
{
v___x_3364_ = v___x_3361_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v_a_3359_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
}
}
}
}
else
{
goto v___jp_3063_;
}
}
}
case 9:
{
lean_object* v_a_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v_a_3367_ = lean_ctor_get(v_e_3041_, 0);
lean_inc_ref(v_a_3367_);
lean_dec_ref_known(v_e_3041_, 1);
v___x_3368_ = l_Lean_Literal_type(v_a_3367_);
lean_dec_ref(v_a_3367_);
v___x_3369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3368_);
return v___x_3369_;
}
case 10:
{
lean_object* v_expr_3370_; 
v_expr_3370_ = lean_ctor_get(v_e_3041_, 1);
lean_inc_ref(v_expr_3370_);
lean_dec_ref_known(v_e_3041_, 2);
v_e_3041_ = v_expr_3370_;
goto _start;
}
case 11:
{
lean_object* v_typeName_3372_; lean_object* v_idx_3373_; lean_object* v_struct_3374_; uint8_t v_cacheInferType_3391_; 
v_typeName_3372_ = lean_ctor_get(v_e_3041_, 0);
lean_inc(v_typeName_3372_);
v_idx_3373_ = lean_ctor_get(v_e_3041_, 1);
lean_inc(v_idx_3373_);
v_struct_3374_ = lean_ctor_get(v_e_3041_, 2);
lean_inc_ref(v_struct_3374_);
v_cacheInferType_3391_ = lean_ctor_get_uint8(v_a_3042_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3391_ == 0)
{
lean_dec_ref_known(v_e_3041_, 3);
goto v___jp_3375_;
}
else
{
uint8_t v___x_3392_; 
v___x_3392_ = l_Lean_Expr_hasMVar(v_e_3041_);
if (v___x_3392_ == 0)
{
lean_object* v___x_3393_; 
v___x_3393_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3041_, v_a_3042_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3459_; 
v_a_3394_ = lean_ctor_get(v___x_3393_, 0);
v_isSharedCheck_3459_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3459_ == 0)
{
v___x_3396_ = v___x_3393_;
v_isShared_3397_ = v_isSharedCheck_3459_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3393_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3459_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3438_; lean_object* v_cache_3439_; lean_object* v_inferType_3440_; lean_object* v___x_3441_; 
v___x_3438_ = lean_st_ref_get(v_a_3043_);
v_cache_3439_ = lean_ctor_get(v___x_3438_, 1);
lean_inc_ref(v_cache_3439_);
lean_dec(v___x_3438_);
v_inferType_3440_ = lean_ctor_get(v_cache_3439_, 0);
lean_inc_ref(v_inferType_3440_);
lean_dec_ref(v_cache_3439_);
v___x_3441_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3440_, v_a_3394_);
lean_dec_ref(v_inferType_3440_);
if (lean_obj_tag(v___x_3441_) == 0)
{
lean_object* v_toCold_3442_; lean_object* v_cancelTk_x3f_3443_; 
lean_del_object(v___x_3396_);
v_toCold_3442_ = lean_ctor_get(v_a_3044_, 0);
v_cancelTk_x3f_3443_ = lean_ctor_get(v_toCold_3442_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3443_) == 1)
{
lean_object* v_val_3444_; uint8_t v___x_3445_; 
v_val_3444_ = lean_ctor_get(v_cancelTk_x3f_3443_, 0);
v___x_3445_ = l_IO_CancelToken_isSet(v_val_3444_);
if (v___x_3445_ == 0)
{
goto v___jp_3398_;
}
else
{
lean_object* v___x_3446_; lean_object* v_a_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3454_; 
lean_dec(v_a_3394_);
lean_dec_ref(v_struct_3374_);
lean_dec(v_idx_3373_);
lean_dec(v_typeName_3372_);
v___x_3446_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3449_ = v___x_3446_;
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_a_3447_);
lean_dec(v___x_3446_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
lean_object* v___x_3452_; 
if (v_isShared_3450_ == 0)
{
v___x_3452_ = v___x_3449_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_a_3447_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
return v___x_3452_;
}
}
}
}
else
{
goto v___jp_3398_;
}
}
else
{
lean_object* v_val_3455_; lean_object* v___x_3457_; 
lean_dec(v_a_3394_);
lean_dec_ref(v_struct_3374_);
lean_dec(v_idx_3373_);
lean_dec(v_typeName_3372_);
v_val_3455_ = lean_ctor_get(v___x_3441_, 0);
lean_inc(v_val_3455_);
lean_dec_ref_known(v___x_3441_, 1);
if (v_isShared_3397_ == 0)
{
lean_ctor_set(v___x_3396_, 0, v_val_3455_);
v___x_3457_ = v___x_3396_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v_val_3455_);
v___x_3457_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
return v___x_3457_;
}
}
v___jp_3398_:
{
lean_object* v___x_3399_; 
v___x_3399_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3372_, v_idx_3373_, v_struct_3374_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
if (lean_obj_tag(v___x_3399_) == 0)
{
lean_object* v_a_3400_; uint8_t v___x_3401_; 
v_a_3400_ = lean_ctor_get(v___x_3399_, 0);
lean_inc(v_a_3400_);
v___x_3401_ = l_Lean_Expr_hasMVar(v_a_3400_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3436_; 
v_isSharedCheck_3436_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3436_ == 0)
{
lean_object* v_unused_3437_; 
v_unused_3437_ = lean_ctor_get(v___x_3399_, 0);
lean_dec(v_unused_3437_);
v___x_3403_ = v___x_3399_;
v_isShared_3404_ = v_isSharedCheck_3436_;
goto v_resetjp_3402_;
}
else
{
lean_dec(v___x_3399_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3436_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3405_; lean_object* v_cache_3406_; lean_object* v_mctx_3407_; lean_object* v_zetaDeltaFVarIds_3408_; lean_object* v_postponed_3409_; lean_object* v_diag_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3435_; 
v___x_3405_ = lean_st_ref_take(v_a_3043_);
v_cache_3406_ = lean_ctor_get(v___x_3405_, 1);
v_mctx_3407_ = lean_ctor_get(v___x_3405_, 0);
v_zetaDeltaFVarIds_3408_ = lean_ctor_get(v___x_3405_, 2);
v_postponed_3409_ = lean_ctor_get(v___x_3405_, 3);
v_diag_3410_ = lean_ctor_get(v___x_3405_, 4);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3412_ = v___x_3405_;
v_isShared_3413_ = v_isSharedCheck_3435_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_diag_3410_);
lean_inc(v_postponed_3409_);
lean_inc(v_zetaDeltaFVarIds_3408_);
lean_inc(v_cache_3406_);
lean_inc(v_mctx_3407_);
lean_dec(v___x_3405_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3435_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v_inferType_3414_; lean_object* v_funInfo_3415_; lean_object* v_synthInstance_3416_; lean_object* v_whnf_3417_; lean_object* v_defEqTrans_3418_; lean_object* v_defEqPerm_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3434_; 
v_inferType_3414_ = lean_ctor_get(v_cache_3406_, 0);
v_funInfo_3415_ = lean_ctor_get(v_cache_3406_, 1);
v_synthInstance_3416_ = lean_ctor_get(v_cache_3406_, 2);
v_whnf_3417_ = lean_ctor_get(v_cache_3406_, 3);
v_defEqTrans_3418_ = lean_ctor_get(v_cache_3406_, 4);
v_defEqPerm_3419_ = lean_ctor_get(v_cache_3406_, 5);
v_isSharedCheck_3434_ = !lean_is_exclusive(v_cache_3406_);
if (v_isSharedCheck_3434_ == 0)
{
v___x_3421_ = v_cache_3406_;
v_isShared_3422_ = v_isSharedCheck_3434_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_defEqPerm_3419_);
lean_inc(v_defEqTrans_3418_);
lean_inc(v_whnf_3417_);
lean_inc(v_synthInstance_3416_);
lean_inc(v_funInfo_3415_);
lean_inc(v_inferType_3414_);
lean_dec(v_cache_3406_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3434_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v___x_3423_; lean_object* v___x_3425_; 
lean_inc(v_a_3400_);
v___x_3423_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3414_, v_a_3394_, v_a_3400_);
if (v_isShared_3422_ == 0)
{
lean_ctor_set(v___x_3421_, 0, v___x_3423_);
v___x_3425_ = v___x_3421_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3433_; 
v_reuseFailAlloc_3433_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3433_, 0, v___x_3423_);
lean_ctor_set(v_reuseFailAlloc_3433_, 1, v_funInfo_3415_);
lean_ctor_set(v_reuseFailAlloc_3433_, 2, v_synthInstance_3416_);
lean_ctor_set(v_reuseFailAlloc_3433_, 3, v_whnf_3417_);
lean_ctor_set(v_reuseFailAlloc_3433_, 4, v_defEqTrans_3418_);
lean_ctor_set(v_reuseFailAlloc_3433_, 5, v_defEqPerm_3419_);
v___x_3425_ = v_reuseFailAlloc_3433_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
lean_object* v___x_3427_; 
if (v_isShared_3413_ == 0)
{
lean_ctor_set(v___x_3412_, 1, v___x_3425_);
v___x_3427_ = v___x_3412_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_mctx_3407_);
lean_ctor_set(v_reuseFailAlloc_3432_, 1, v___x_3425_);
lean_ctor_set(v_reuseFailAlloc_3432_, 2, v_zetaDeltaFVarIds_3408_);
lean_ctor_set(v_reuseFailAlloc_3432_, 3, v_postponed_3409_);
lean_ctor_set(v_reuseFailAlloc_3432_, 4, v_diag_3410_);
v___x_3427_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
lean_object* v___x_3428_; lean_object* v___x_3430_; 
v___x_3428_ = lean_st_ref_put(v_a_3043_, v___x_3427_);
if (v_isShared_3404_ == 0)
{
v___x_3430_ = v___x_3403_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_a_3400_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3400_);
lean_dec(v_a_3394_);
return v___x_3399_;
}
}
else
{
lean_dec(v_a_3394_);
return v___x_3399_;
}
}
}
}
else
{
lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3467_; 
lean_dec_ref(v_struct_3374_);
lean_dec(v_idx_3373_);
lean_dec(v_typeName_3372_);
v_a_3460_ = lean_ctor_get(v___x_3393_, 0);
v_isSharedCheck_3467_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3467_ == 0)
{
v___x_3462_ = v___x_3393_;
v_isShared_3463_ = v_isSharedCheck_3467_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3393_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3467_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v___x_3465_; 
if (v_isShared_3463_ == 0)
{
v___x_3465_ = v___x_3462_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v_a_3460_);
v___x_3465_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
return v___x_3465_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3041_, 3);
goto v___jp_3375_;
}
}
v___jp_3375_:
{
lean_object* v_toCold_3376_; lean_object* v_cancelTk_x3f_3377_; 
v_toCold_3376_ = lean_ctor_get(v_a_3044_, 0);
v_cancelTk_x3f_3377_ = lean_ctor_get(v_toCold_3376_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3377_) == 1)
{
lean_object* v_val_3378_; uint8_t v___x_3379_; 
v_val_3378_ = lean_ctor_get(v_cancelTk_x3f_3377_, 0);
v___x_3379_ = l_IO_CancelToken_isSet(v_val_3378_);
if (v___x_3379_ == 0)
{
lean_object* v___x_3380_; 
v___x_3380_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3372_, v_idx_3373_, v_struct_3374_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3380_;
}
else
{
lean_object* v___x_3381_; lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3389_; 
lean_dec_ref(v_struct_3374_);
lean_dec(v_idx_3373_);
lean_dec(v_typeName_3372_);
v___x_3381_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3389_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3389_ == 0)
{
v___x_3384_ = v___x_3381_;
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___x_3381_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3387_; 
if (v_isShared_3385_ == 0)
{
v___x_3387_ = v___x_3384_;
goto v_reusejp_3386_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v_a_3382_);
v___x_3387_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3386_;
}
v_reusejp_3386_:
{
return v___x_3387_;
}
}
}
}
else
{
lean_object* v___x_3390_; 
v___x_3390_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType(v_typeName_3372_, v_idx_3373_, v_struct_3374_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3390_;
}
}
}
default: 
{
uint8_t v_cacheInferType_3468_; 
v_cacheInferType_3468_ = lean_ctor_get_uint8(v_a_3042_, sizeof(void*)*7 + 3);
if (v_cacheInferType_3468_ == 0)
{
goto v___jp_3047_;
}
else
{
uint8_t v___x_3469_; 
v___x_3469_ = l_Lean_Expr_hasMVar(v_e_3041_);
if (v___x_3469_ == 0)
{
lean_object* v___x_3470_; 
lean_inc_ref(v_e_3041_);
v___x_3470_ = l_Lean_Meta_mkExprConfigCacheKey___redArg(v_e_3041_, v_a_3042_);
if (lean_obj_tag(v___x_3470_) == 0)
{
lean_object* v_a_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3536_; 
v_a_3471_ = lean_ctor_get(v___x_3470_, 0);
v_isSharedCheck_3536_ = !lean_is_exclusive(v___x_3470_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3473_ = v___x_3470_;
v_isShared_3474_ = v_isSharedCheck_3536_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_a_3471_);
lean_dec(v___x_3470_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3536_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v___x_3515_; lean_object* v_cache_3516_; lean_object* v_inferType_3517_; lean_object* v___x_3518_; 
v___x_3515_ = lean_st_ref_get(v_a_3043_);
v_cache_3516_ = lean_ctor_get(v___x_3515_, 1);
lean_inc_ref(v_cache_3516_);
lean_dec(v___x_3515_);
v_inferType_3517_ = lean_ctor_get(v_cache_3516_, 0);
lean_inc_ref(v_inferType_3517_);
lean_dec_ref(v_cache_3516_);
v___x_3518_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_inferType_3517_, v_a_3471_);
lean_dec_ref(v_inferType_3517_);
if (lean_obj_tag(v___x_3518_) == 0)
{
lean_object* v_toCold_3519_; lean_object* v_cancelTk_x3f_3520_; 
lean_del_object(v___x_3473_);
v_toCold_3519_ = lean_ctor_get(v_a_3044_, 0);
v_cancelTk_x3f_3520_ = lean_ctor_get(v_toCold_3519_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3520_) == 1)
{
lean_object* v_val_3521_; uint8_t v___x_3522_; 
v_val_3521_ = lean_ctor_get(v_cancelTk_x3f_3520_, 0);
v___x_3522_ = l_IO_CancelToken_isSet(v_val_3521_);
if (v___x_3522_ == 0)
{
goto v___jp_3475_;
}
else
{
lean_object* v___x_3523_; lean_object* v_a_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3531_; 
lean_dec(v_a_3471_);
lean_dec_ref(v_e_3041_);
v___x_3523_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3524_ = lean_ctor_get(v___x_3523_, 0);
v_isSharedCheck_3531_ = !lean_is_exclusive(v___x_3523_);
if (v_isSharedCheck_3531_ == 0)
{
v___x_3526_ = v___x_3523_;
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_a_3524_);
lean_dec(v___x_3523_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3529_; 
if (v_isShared_3527_ == 0)
{
v___x_3529_ = v___x_3526_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v_a_3524_);
v___x_3529_ = v_reuseFailAlloc_3530_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
return v___x_3529_;
}
}
}
}
else
{
goto v___jp_3475_;
}
}
else
{
lean_object* v_val_3532_; lean_object* v___x_3534_; 
lean_dec(v_a_3471_);
lean_dec_ref(v_e_3041_);
v_val_3532_ = lean_ctor_get(v___x_3518_, 0);
lean_inc(v_val_3532_);
lean_dec_ref_known(v___x_3518_, 1);
if (v_isShared_3474_ == 0)
{
lean_ctor_set(v___x_3473_, 0, v_val_3532_);
v___x_3534_ = v___x_3473_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v_val_3532_);
v___x_3534_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
return v___x_3534_;
}
}
v___jp_3475_:
{
lean_object* v___x_3476_; 
v___x_3476_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3041_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v_a_3477_; uint8_t v___x_3478_; 
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_a_3477_);
v___x_3478_ = l_Lean_Expr_hasMVar(v_a_3477_);
if (v___x_3478_ == 0)
{
lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3513_; 
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3513_ == 0)
{
lean_object* v_unused_3514_; 
v_unused_3514_ = lean_ctor_get(v___x_3476_, 0);
lean_dec(v_unused_3514_);
v___x_3480_ = v___x_3476_;
v_isShared_3481_ = v_isSharedCheck_3513_;
goto v_resetjp_3479_;
}
else
{
lean_dec(v___x_3476_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3513_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v___x_3482_; lean_object* v_cache_3483_; lean_object* v_mctx_3484_; lean_object* v_zetaDeltaFVarIds_3485_; lean_object* v_postponed_3486_; lean_object* v_diag_3487_; lean_object* v___x_3489_; uint8_t v_isShared_3490_; uint8_t v_isSharedCheck_3512_; 
v___x_3482_ = lean_st_ref_take(v_a_3043_);
v_cache_3483_ = lean_ctor_get(v___x_3482_, 1);
v_mctx_3484_ = lean_ctor_get(v___x_3482_, 0);
v_zetaDeltaFVarIds_3485_ = lean_ctor_get(v___x_3482_, 2);
v_postponed_3486_ = lean_ctor_get(v___x_3482_, 3);
v_diag_3487_ = lean_ctor_get(v___x_3482_, 4);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3482_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3489_ = v___x_3482_;
v_isShared_3490_ = v_isSharedCheck_3512_;
goto v_resetjp_3488_;
}
else
{
lean_inc(v_diag_3487_);
lean_inc(v_postponed_3486_);
lean_inc(v_zetaDeltaFVarIds_3485_);
lean_inc(v_cache_3483_);
lean_inc(v_mctx_3484_);
lean_dec(v___x_3482_);
v___x_3489_ = lean_box(0);
v_isShared_3490_ = v_isSharedCheck_3512_;
goto v_resetjp_3488_;
}
v_resetjp_3488_:
{
lean_object* v_inferType_3491_; lean_object* v_funInfo_3492_; lean_object* v_synthInstance_3493_; lean_object* v_whnf_3494_; lean_object* v_defEqTrans_3495_; lean_object* v_defEqPerm_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3511_; 
v_inferType_3491_ = lean_ctor_get(v_cache_3483_, 0);
v_funInfo_3492_ = lean_ctor_get(v_cache_3483_, 1);
v_synthInstance_3493_ = lean_ctor_get(v_cache_3483_, 2);
v_whnf_3494_ = lean_ctor_get(v_cache_3483_, 3);
v_defEqTrans_3495_ = lean_ctor_get(v_cache_3483_, 4);
v_defEqPerm_3496_ = lean_ctor_get(v_cache_3483_, 5);
v_isSharedCheck_3511_ = !lean_is_exclusive(v_cache_3483_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3498_ = v_cache_3483_;
v_isShared_3499_ = v_isSharedCheck_3511_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_defEqPerm_3496_);
lean_inc(v_defEqTrans_3495_);
lean_inc(v_whnf_3494_);
lean_inc(v_synthInstance_3493_);
lean_inc(v_funInfo_3492_);
lean_inc(v_inferType_3491_);
lean_dec(v_cache_3483_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3511_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v___x_3500_; lean_object* v___x_3502_; 
lean_inc(v_a_3477_);
v___x_3500_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_inferType_3491_, v_a_3471_, v_a_3477_);
if (v_isShared_3499_ == 0)
{
lean_ctor_set(v___x_3498_, 0, v___x_3500_);
v___x_3502_ = v___x_3498_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v___x_3500_);
lean_ctor_set(v_reuseFailAlloc_3510_, 1, v_funInfo_3492_);
lean_ctor_set(v_reuseFailAlloc_3510_, 2, v_synthInstance_3493_);
lean_ctor_set(v_reuseFailAlloc_3510_, 3, v_whnf_3494_);
lean_ctor_set(v_reuseFailAlloc_3510_, 4, v_defEqTrans_3495_);
lean_ctor_set(v_reuseFailAlloc_3510_, 5, v_defEqPerm_3496_);
v___x_3502_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
lean_object* v___x_3504_; 
if (v_isShared_3490_ == 0)
{
lean_ctor_set(v___x_3489_, 1, v___x_3502_);
v___x_3504_ = v___x_3489_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v_mctx_3484_);
lean_ctor_set(v_reuseFailAlloc_3509_, 1, v___x_3502_);
lean_ctor_set(v_reuseFailAlloc_3509_, 2, v_zetaDeltaFVarIds_3485_);
lean_ctor_set(v_reuseFailAlloc_3509_, 3, v_postponed_3486_);
lean_ctor_set(v_reuseFailAlloc_3509_, 4, v_diag_3487_);
v___x_3504_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
lean_object* v___x_3505_; lean_object* v___x_3507_; 
v___x_3505_ = lean_st_ref_put(v_a_3043_, v___x_3504_);
if (v_isShared_3481_ == 0)
{
v___x_3507_ = v___x_3480_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_a_3477_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3477_);
lean_dec(v_a_3471_);
return v___x_3476_;
}
}
else
{
lean_dec(v_a_3471_);
return v___x_3476_;
}
}
}
}
else
{
lean_object* v_a_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3544_; 
lean_dec_ref(v_e_3041_);
v_a_3537_ = lean_ctor_get(v___x_3470_, 0);
v_isSharedCheck_3544_ = !lean_is_exclusive(v___x_3470_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3539_ = v___x_3470_;
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_a_3537_);
lean_dec(v___x_3470_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3542_; 
if (v_isShared_3540_ == 0)
{
v___x_3542_ = v___x_3539_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v_a_3537_);
v___x_3542_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
return v___x_3542_;
}
}
}
}
else
{
goto v___jp_3047_;
}
}
}
}
v___jp_3047_:
{
lean_object* v_toCold_3048_; lean_object* v_cancelTk_x3f_3049_; 
v_toCold_3048_ = lean_ctor_get(v_a_3044_, 0);
v_cancelTk_x3f_3049_ = lean_ctor_get(v_toCold_3048_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3049_) == 1)
{
lean_object* v_val_3050_; uint8_t v___x_3051_; 
v_val_3050_ = lean_ctor_get(v_cancelTk_x3f_3049_, 0);
v___x_3051_ = l_IO_CancelToken_isSet(v_val_3050_);
if (v___x_3051_ == 0)
{
lean_object* v___x_3052_; 
v___x_3052_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3041_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3052_;
}
else
{
lean_object* v___x_3053_; lean_object* v_a_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3061_; 
lean_dec_ref(v_e_3041_);
v___x_3053_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3054_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3061_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_3056_ = v___x_3053_;
v_isShared_3057_ = v_isSharedCheck_3061_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_a_3054_);
lean_dec(v___x_3053_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3061_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v___x_3059_; 
if (v_isShared_3057_ == 0)
{
v___x_3059_ = v___x_3056_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v_a_3054_);
v___x_3059_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
return v___x_3059_;
}
}
}
}
else
{
lean_object* v___x_3062_; 
v___x_3062_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType(v_e_3041_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3062_;
}
}
v___jp_3063_:
{
lean_object* v_toCold_3064_; lean_object* v_cancelTk_x3f_3065_; 
v_toCold_3064_ = lean_ctor_get(v_a_3044_, 0);
v_cancelTk_x3f_3065_ = lean_ctor_get(v_toCold_3064_, 10);
if (lean_obj_tag(v_cancelTk_x3f_3065_) == 1)
{
lean_object* v_val_3066_; uint8_t v___x_3067_; 
v_val_3066_ = lean_ctor_get(v_cancelTk_x3f_3065_, 0);
v___x_3067_ = l_IO_CancelToken_isSet(v_val_3066_);
if (v___x_3067_ == 0)
{
lean_object* v___x_3068_; 
v___x_3068_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3041_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3068_;
}
else
{
lean_object* v___x_3069_; lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3077_; 
lean_dec_ref(v_e_3041_);
v___x_3069_ = l_Lean_throwInterruptException___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__0___redArg();
v_a_3070_ = lean_ctor_get(v___x_3069_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_3069_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3072_ = v___x_3069_;
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v___x_3069_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3075_; 
if (v_isShared_3073_ == 0)
{
v___x_3075_ = v___x_3072_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_a_3070_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
return v___x_3075_;
}
}
}
}
else
{
lean_object* v___x_3078_; 
v___x_3078_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType(v_e_3041_, v_a_3042_, v_a_3043_, v_a_3044_, v_a_3045_);
return v___x_3078_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer___boxed(lean_object* v_e_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_){
_start:
{
lean_object* v_res_3551_; 
v_res_3551_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3545_, v_a_3546_, v_a_3547_, v_a_3548_, v_a_3549_);
lean_dec(v_a_3549_);
lean_dec_ref(v_a_3548_);
lean_dec(v_a_3547_);
lean_dec_ref(v_a_3546_);
return v_res_3551_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1(lean_object* v_00_u03b2_3552_, lean_object* v_x_3553_, lean_object* v_x_3554_, lean_object* v_x_3555_){
_start:
{
lean_object* v___x_3556_; 
v___x_3556_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1___redArg(v_x_3553_, v_x_3554_, v_x_3555_);
return v___x_3556_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2(lean_object* v_00_u03b2_3557_, lean_object* v_x_3558_, lean_object* v_x_3559_){
_start:
{
lean_object* v___x_3560_; 
v___x_3560_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___redArg(v_x_3558_, v_x_3559_);
return v___x_3560_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2___boxed(lean_object* v_00_u03b2_3561_, lean_object* v_x_3562_, lean_object* v_x_3563_){
_start:
{
lean_object* v_res_3564_; 
v_res_3564_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2(v_00_u03b2_3561_, v_x_3562_, v_x_3563_);
lean_dec_ref(v_x_3563_);
lean_dec_ref(v_x_3562_);
return v_res_3564_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1(lean_object* v_00_u03b2_3565_, lean_object* v_x_3566_, size_t v_x_3567_, size_t v_x_3568_, lean_object* v_x_3569_, lean_object* v_x_3570_){
_start:
{
lean_object* v___x_3571_; 
v___x_3571_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___redArg(v_x_3566_, v_x_3567_, v_x_3568_, v_x_3569_, v_x_3570_);
return v___x_3571_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1___boxed(lean_object* v_00_u03b2_3572_, lean_object* v_x_3573_, lean_object* v_x_3574_, lean_object* v_x_3575_, lean_object* v_x_3576_, lean_object* v_x_3577_){
_start:
{
size_t v_x_4045__boxed_3578_; size_t v_x_4046__boxed_3579_; lean_object* v_res_3580_; 
v_x_4045__boxed_3578_ = lean_unbox_usize(v_x_3574_);
lean_dec(v_x_3574_);
v_x_4046__boxed_3579_ = lean_unbox_usize(v_x_3575_);
lean_dec(v_x_3575_);
v_res_3580_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1(v_00_u03b2_3572_, v_x_3573_, v_x_4045__boxed_3578_, v_x_4046__boxed_3579_, v_x_3576_, v_x_3577_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3(lean_object* v_00_u03b2_3581_, lean_object* v_x_3582_, size_t v_x_3583_, lean_object* v_x_3584_){
_start:
{
lean_object* v___x_3585_; 
v___x_3585_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___redArg(v_x_3582_, v_x_3583_, v_x_3584_);
return v___x_3585_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3___boxed(lean_object* v_00_u03b2_3586_, lean_object* v_x_3587_, lean_object* v_x_3588_, lean_object* v_x_3589_){
_start:
{
size_t v_x_4062__boxed_3590_; lean_object* v_res_3591_; 
v_x_4062__boxed_3590_ = lean_unbox_usize(v_x_3588_);
lean_dec(v_x_3588_);
v_res_3591_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3(v_00_u03b2_3586_, v_x_3587_, v_x_4062__boxed_3590_, v_x_3589_);
lean_dec_ref(v_x_3589_);
lean_dec_ref(v_x_3587_);
return v_res_3591_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_3592_, lean_object* v_n_3593_, lean_object* v_k_3594_, lean_object* v_v_3595_){
_start:
{
lean_object* v___x_3596_; 
v___x_3596_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2___redArg(v_n_3593_, v_k_3594_, v_v_3595_);
return v___x_3596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_3597_, size_t v_depth_3598_, lean_object* v_keys_3599_, lean_object* v_vals_3600_, lean_object* v_heq_3601_, lean_object* v_i_3602_, lean_object* v_entries_3603_){
_start:
{
lean_object* v___x_3604_; 
v___x_3604_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___redArg(v_depth_3598_, v_keys_3599_, v_vals_3600_, v_i_3602_, v_entries_3603_);
return v___x_3604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_3605_, lean_object* v_depth_3606_, lean_object* v_keys_3607_, lean_object* v_vals_3608_, lean_object* v_heq_3609_, lean_object* v_i_3610_, lean_object* v_entries_3611_){
_start:
{
size_t v_depth_boxed_3612_; lean_object* v_res_3613_; 
v_depth_boxed_3612_ = lean_unbox_usize(v_depth_3606_);
lean_dec(v_depth_3606_);
v_res_3613_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__3(v_00_u03b2_3605_, v_depth_boxed_3612_, v_keys_3607_, v_vals_3608_, v_heq_3609_, v_i_3610_, v_entries_3611_);
lean_dec_ref(v_vals_3608_);
lean_dec_ref(v_keys_3607_);
return v_res_3613_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_3614_, lean_object* v_keys_3615_, lean_object* v_vals_3616_, lean_object* v_heq_3617_, lean_object* v_i_3618_, lean_object* v_k_3619_){
_start:
{
lean_object* v___x_3620_; 
v___x_3620_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___redArg(v_keys_3615_, v_vals_3616_, v_i_3618_, v_k_3619_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3621_, lean_object* v_keys_3622_, lean_object* v_vals_3623_, lean_object* v_heq_3624_, lean_object* v_i_3625_, lean_object* v_k_3626_){
_start:
{
lean_object* v_res_3627_; 
v_res_3627_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__2_spec__3_spec__6(v_00_u03b2_3621_, v_keys_3622_, v_vals_3623_, v_heq_3624_, v_i_3625_, v_k_3626_);
lean_dec_ref(v_k_3626_);
lean_dec_ref(v_vals_3623_);
lean_dec_ref(v_keys_3622_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_3628_, lean_object* v_x_3629_, lean_object* v_x_3630_, lean_object* v_x_3631_, lean_object* v_x_3632_){
_start:
{
lean_object* v___x_3633_; 
v___x_3633_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer_spec__1_spec__1_spec__2_spec__4___redArg(v_x_3629_, v_x_3630_, v_x_3631_, v_x_3632_);
return v___x_3633_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_3639_; lean_object* v___x_3640_; 
v___x_3639_ = l_Lean_maxRecDepthErrorMessage;
v___x_3640_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3640_, 0, v___x_3639_);
return v___x_3640_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; 
v___x_3641_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__3);
v___x_3642_ = l_Lean_MessageData_ofFormat(v___x_3641_);
return v___x_3642_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3643_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__4);
v___x_3644_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__2));
v___x_3645_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3645_, 0, v___x_3644_);
lean_ctor_set(v___x_3645_, 1, v___x_3643_);
return v___x_3645_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(lean_object* v_ref_3646_){
_start:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; 
v___x_3648_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___closed__5);
v___x_3649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3649_, 0, v_ref_3646_);
lean_ctor_set(v___x_3649_, 1, v___x_3648_);
v___x_3650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3650_, 0, v___x_3649_);
return v___x_3650_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg___boxed(lean_object* v_ref_3651_, lean_object* v___y_3652_){
_start:
{
lean_object* v_res_3653_; 
v_res_3653_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3651_);
return v_res_3653_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(lean_object* v_00_u03b1_3654_, lean_object* v_ref_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_){
_start:
{
lean_object* v___x_3661_; 
v___x_3661_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3655_);
return v___x_3661_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___boxed(lean_object* v_00_u03b1_3662_, lean_object* v_ref_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_){
_start:
{
lean_object* v_res_3669_; 
v_res_3669_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0(v_00_u03b1_3662_, v_ref_3663_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_);
lean_dec(v___y_3667_);
lean_dec_ref(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec_ref(v___y_3664_);
return v_res_3669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0(lean_object* v_e_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_){
_start:
{
lean_object* v___x_3722_; uint8_t v_beta_3723_; 
v___x_3722_ = l_Lean_Meta_Context_config(v___y_3671_);
v_beta_3723_ = lean_ctor_get_uint8(v___x_3722_, 13);
if (v_beta_3723_ == 0)
{
lean_dec_ref(v___x_3722_);
goto v___jp_3676_;
}
else
{
uint8_t v_iota_3724_; 
v_iota_3724_ = lean_ctor_get_uint8(v___x_3722_, 12);
if (v_iota_3724_ == 0)
{
lean_dec_ref(v___x_3722_);
goto v___jp_3676_;
}
else
{
uint8_t v_zeta_3725_; 
v_zeta_3725_ = lean_ctor_get_uint8(v___x_3722_, 15);
if (v_zeta_3725_ == 0)
{
lean_dec_ref(v___x_3722_);
goto v___jp_3676_;
}
else
{
uint8_t v_zetaHave_3726_; 
v_zetaHave_3726_ = lean_ctor_get_uint8(v___x_3722_, 18);
if (v_zetaHave_3726_ == 0)
{
lean_dec_ref(v___x_3722_);
goto v___jp_3676_;
}
else
{
uint8_t v_zetaDelta_3727_; 
v_zetaDelta_3727_ = lean_ctor_get_uint8(v___x_3722_, 16);
if (v_zetaDelta_3727_ == 0)
{
lean_dec_ref(v___x_3722_);
goto v___jp_3676_;
}
else
{
uint8_t v_etaStruct_3728_; uint8_t v_proj_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; uint8_t v___x_3732_; 
v_etaStruct_3728_ = lean_ctor_get_uint8(v___x_3722_, 10);
v_proj_3729_ = lean_ctor_get_uint8(v___x_3722_, 14);
lean_dec_ref(v___x_3722_);
v___x_3730_ = l_Lean_Meta_ProjReductionKind_ctorIdx(v_proj_3729_);
v___x_3731_ = lean_obj_once(&l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0, &l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_withInferTypeConfig___redArg___lam__0___closed__0);
v___x_3732_ = lean_nat_dec_eq(v___x_3730_, v___x_3731_);
lean_dec(v___x_3730_);
if (v___x_3732_ == 0)
{
goto v___jp_3676_;
}
else
{
uint8_t v___x_3733_; uint8_t v___x_3734_; 
v___x_3733_ = 0;
v___x_3734_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_3728_, v___x_3733_);
if (v___x_3734_ == 0)
{
goto v___jp_3676_;
}
else
{
lean_object* v___x_3735_; 
v___x_3735_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3670_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_);
lean_dec_ref(v___y_3671_);
return v___x_3735_;
}
}
}
}
}
}
}
v___jp_3676_:
{
lean_object* v___x_3677_; uint8_t v_foApprox_3678_; uint8_t v_ctxApprox_3679_; uint8_t v_quasiPatternApprox_3680_; uint8_t v_constApprox_3681_; uint8_t v_isDefEqStuckEx_3682_; uint8_t v_unificationHints_3683_; uint8_t v_proofIrrelevance_3684_; uint8_t v_assignSyntheticOpaque_3685_; uint8_t v_offsetCnstrs_3686_; uint8_t v_transparency_3687_; uint8_t v_univApprox_3688_; uint8_t v_zetaUnused_3689_; uint8_t v_canUnfoldPredicateConfig_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3721_; 
v___x_3677_ = l_Lean_Meta_Context_config(v___y_3671_);
v_foApprox_3678_ = lean_ctor_get_uint8(v___x_3677_, 0);
v_ctxApprox_3679_ = lean_ctor_get_uint8(v___x_3677_, 1);
v_quasiPatternApprox_3680_ = lean_ctor_get_uint8(v___x_3677_, 2);
v_constApprox_3681_ = lean_ctor_get_uint8(v___x_3677_, 3);
v_isDefEqStuckEx_3682_ = lean_ctor_get_uint8(v___x_3677_, 4);
v_unificationHints_3683_ = lean_ctor_get_uint8(v___x_3677_, 5);
v_proofIrrelevance_3684_ = lean_ctor_get_uint8(v___x_3677_, 6);
v_assignSyntheticOpaque_3685_ = lean_ctor_get_uint8(v___x_3677_, 7);
v_offsetCnstrs_3686_ = lean_ctor_get_uint8(v___x_3677_, 8);
v_transparency_3687_ = lean_ctor_get_uint8(v___x_3677_, 9);
v_univApprox_3688_ = lean_ctor_get_uint8(v___x_3677_, 11);
v_zetaUnused_3689_ = lean_ctor_get_uint8(v___x_3677_, 17);
v_canUnfoldPredicateConfig_3690_ = lean_ctor_get_uint8(v___x_3677_, 19);
v_isSharedCheck_3721_ = !lean_is_exclusive(v___x_3677_);
if (v_isSharedCheck_3721_ == 0)
{
v___x_3692_ = v___x_3677_;
v_isShared_3693_ = v_isSharedCheck_3721_;
goto v_resetjp_3691_;
}
else
{
lean_dec(v___x_3677_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3721_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
uint8_t v___x_3694_; uint8_t v___x_3695_; uint8_t v___x_3696_; lean_object* v___x_3698_; 
v___x_3694_ = 1;
v___x_3695_ = 0;
v___x_3696_ = 2;
if (v_isShared_3693_ == 0)
{
v___x_3698_ = v___x_3692_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 0, v_foApprox_3678_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 1, v_ctxApprox_3679_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 2, v_quasiPatternApprox_3680_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 3, v_constApprox_3681_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 4, v_isDefEqStuckEx_3682_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 5, v_unificationHints_3683_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 6, v_proofIrrelevance_3684_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 7, v_assignSyntheticOpaque_3685_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 8, v_offsetCnstrs_3686_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 9, v_transparency_3687_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 11, v_univApprox_3688_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 17, v_zetaUnused_3689_);
lean_ctor_set_uint8(v_reuseFailAlloc_3720_, 19, v_canUnfoldPredicateConfig_3690_);
v___x_3698_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
uint8_t v_trackZetaDelta_3699_; lean_object* v_zetaDeltaSet_3700_; lean_object* v_lctx_3701_; lean_object* v_localInstances_3702_; lean_object* v_defEqCtx_x3f_3703_; lean_object* v_synthPendingDepth_3704_; lean_object* v_customCanUnfoldPredicate_x3f_3705_; uint8_t v_univApprox_3706_; uint8_t v_inTypeClassResolution_3707_; uint8_t v_cacheInferType_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3718_; 
lean_ctor_set_uint8(v___x_3698_, 10, v___x_3695_);
lean_ctor_set_uint8(v___x_3698_, 12, v___x_3694_);
lean_ctor_set_uint8(v___x_3698_, 13, v___x_3694_);
lean_ctor_set_uint8(v___x_3698_, 14, v___x_3696_);
lean_ctor_set_uint8(v___x_3698_, 15, v___x_3694_);
lean_ctor_set_uint8(v___x_3698_, 16, v___x_3694_);
lean_ctor_set_uint8(v___x_3698_, 18, v___x_3694_);
v_trackZetaDelta_3699_ = lean_ctor_get_uint8(v___y_3671_, sizeof(void*)*7);
v_zetaDeltaSet_3700_ = lean_ctor_get(v___y_3671_, 1);
v_lctx_3701_ = lean_ctor_get(v___y_3671_, 2);
v_localInstances_3702_ = lean_ctor_get(v___y_3671_, 3);
v_defEqCtx_x3f_3703_ = lean_ctor_get(v___y_3671_, 4);
v_synthPendingDepth_3704_ = lean_ctor_get(v___y_3671_, 5);
v_customCanUnfoldPredicate_x3f_3705_ = lean_ctor_get(v___y_3671_, 6);
v_univApprox_3706_ = lean_ctor_get_uint8(v___y_3671_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3707_ = lean_ctor_get_uint8(v___y_3671_, sizeof(void*)*7 + 2);
v_cacheInferType_3708_ = lean_ctor_get_uint8(v___y_3671_, sizeof(void*)*7 + 3);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___y_3671_);
if (v_isSharedCheck_3718_ == 0)
{
lean_object* v_unused_3719_; 
v_unused_3719_ = lean_ctor_get(v___y_3671_, 0);
lean_dec(v_unused_3719_);
v___x_3710_ = v___y_3671_;
v_isShared_3711_ = v_isSharedCheck_3718_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_3705_);
lean_inc(v_synthPendingDepth_3704_);
lean_inc(v_defEqCtx_x3f_3703_);
lean_inc(v_localInstances_3702_);
lean_inc(v_lctx_3701_);
lean_inc(v_zetaDeltaSet_3700_);
lean_dec(v___y_3671_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3718_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
uint64_t v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3715_; 
v___x_3712_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3698_);
v___x_3713_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3713_, 0, v___x_3698_);
lean_ctor_set_uint64(v___x_3713_, sizeof(void*)*1, v___x_3712_);
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 0, v___x_3713_);
v___x_3715_ = v___x_3710_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v___x_3713_);
lean_ctor_set(v_reuseFailAlloc_3717_, 1, v_zetaDeltaSet_3700_);
lean_ctor_set(v_reuseFailAlloc_3717_, 2, v_lctx_3701_);
lean_ctor_set(v_reuseFailAlloc_3717_, 3, v_localInstances_3702_);
lean_ctor_set(v_reuseFailAlloc_3717_, 4, v_defEqCtx_x3f_3703_);
lean_ctor_set(v_reuseFailAlloc_3717_, 5, v_synthPendingDepth_3704_);
lean_ctor_set(v_reuseFailAlloc_3717_, 6, v_customCanUnfoldPredicate_x3f_3705_);
lean_ctor_set_uint8(v_reuseFailAlloc_3717_, sizeof(void*)*7, v_trackZetaDelta_3699_);
lean_ctor_set_uint8(v_reuseFailAlloc_3717_, sizeof(void*)*7 + 1, v_univApprox_3706_);
lean_ctor_set_uint8(v_reuseFailAlloc_3717_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3707_);
lean_ctor_set_uint8(v_reuseFailAlloc_3717_, sizeof(void*)*7 + 3, v_cacheInferType_3708_);
v___x_3715_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
lean_object* v___x_3716_; 
v___x_3716_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferTypeImp_infer(v_e_3670_, v___x_3715_, v___y_3672_, v___y_3673_, v___y_3674_);
lean_dec_ref(v___x_3715_);
return v___x_3716_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___lam__0___boxed(lean_object* v_e_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_){
_start:
{
lean_object* v_res_3742_; 
v_res_3742_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_);
lean_dec(v___y_3740_);
lean_dec_ref(v___y_3739_);
lean_dec(v___y_3738_);
return v_res_3742_;
}
}
LEAN_EXPORT lean_object* lean_infer_type(lean_object* v_e_3743_, lean_object* v_a_3744_, lean_object* v_a_3745_, lean_object* v_a_3746_, lean_object* v_a_3747_){
_start:
{
lean_object* v___y_3750_; lean_object* v_toCold_3767_; lean_object* v_currRecDepth_3768_; lean_object* v_ref_3769_; uint8_t v_diag_3770_; uint8_t v_suppressElabErrors_3771_; lean_object* v___x_3773_; uint8_t v_isShared_3774_; uint8_t v_isSharedCheck_3811_; 
v_toCold_3767_ = lean_ctor_get(v_a_3746_, 0);
v_currRecDepth_3768_ = lean_ctor_get(v_a_3746_, 1);
v_ref_3769_ = lean_ctor_get(v_a_3746_, 2);
v_diag_3770_ = lean_ctor_get_uint8(v_a_3746_, sizeof(void*)*3);
v_suppressElabErrors_3771_ = lean_ctor_get_uint8(v_a_3746_, sizeof(void*)*3 + 1);
v_isSharedCheck_3811_ = !lean_is_exclusive(v_a_3746_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3773_ = v_a_3746_;
v_isShared_3774_ = v_isSharedCheck_3811_;
goto v_resetjp_3772_;
}
else
{
lean_inc(v_ref_3769_);
lean_inc(v_currRecDepth_3768_);
lean_inc(v_toCold_3767_);
lean_dec(v_a_3746_);
v___x_3773_ = lean_box(0);
v_isShared_3774_ = v_isSharedCheck_3811_;
goto v_resetjp_3772_;
}
v___jp_3749_:
{
if (lean_obj_tag(v___y_3750_) == 0)
{
lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3758_; 
v_a_3751_ = lean_ctor_get(v___y_3750_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___y_3750_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3753_ = v___y_3750_;
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___y_3750_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v___x_3756_; 
if (v_isShared_3754_ == 0)
{
v___x_3756_ = v___x_3753_;
goto v_reusejp_3755_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v_a_3751_);
v___x_3756_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3755_;
}
v_reusejp_3755_:
{
return v___x_3756_;
}
}
}
else
{
lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3766_; 
v_a_3759_ = lean_ctor_get(v___y_3750_, 0);
v_isSharedCheck_3766_ = !lean_is_exclusive(v___y_3750_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3761_ = v___y_3750_;
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___y_3750_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3766_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3764_; 
if (v_isShared_3762_ == 0)
{
v___x_3764_ = v___x_3761_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v_a_3759_);
v___x_3764_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
return v___x_3764_;
}
}
}
}
v_resetjp_3772_:
{
lean_object* v_maxRecDepth_3775_; lean_object* v___x_3807_; uint8_t v___x_3808_; 
v_maxRecDepth_3775_ = lean_ctor_get(v_toCold_3767_, 3);
v___x_3807_ = lean_unsigned_to_nat(0u);
v___x_3808_ = lean_nat_dec_eq(v_maxRecDepth_3775_, v___x_3807_);
if (v___x_3808_ == 0)
{
uint8_t v___x_3809_; 
v___x_3809_ = lean_nat_dec_eq(v_currRecDepth_3768_, v_maxRecDepth_3775_);
if (v___x_3809_ == 0)
{
goto v___jp_3776_;
}
else
{
lean_object* v___x_3810_; 
lean_del_object(v___x_3773_);
lean_dec(v_currRecDepth_3768_);
lean_dec_ref(v_toCold_3767_);
lean_dec(v_a_3747_);
lean_dec(v_a_3745_);
lean_dec_ref(v_a_3744_);
lean_dec_ref(v_e_3743_);
v___x_3810_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_inferTypeImp_spec__0___redArg(v_ref_3769_);
return v___x_3810_;
}
}
else
{
goto v___jp_3776_;
}
v___jp_3776_:
{
lean_object* v___x_3777_; uint8_t v_transparency_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3782_; 
v___x_3777_ = l_Lean_Meta_Context_config(v_a_3744_);
v_transparency_3778_ = lean_ctor_get_uint8(v___x_3777_, 9);
lean_dec_ref(v___x_3777_);
v___x_3779_ = lean_unsigned_to_nat(1u);
v___x_3780_ = lean_nat_add(v_currRecDepth_3768_, v___x_3779_);
lean_dec(v_currRecDepth_3768_);
if (v_isShared_3774_ == 0)
{
lean_ctor_set(v___x_3773_, 1, v___x_3780_);
v___x_3782_ = v___x_3773_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3806_; 
v_reuseFailAlloc_3806_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3806_, 0, v_toCold_3767_);
lean_ctor_set(v_reuseFailAlloc_3806_, 1, v___x_3780_);
lean_ctor_set(v_reuseFailAlloc_3806_, 2, v_ref_3769_);
lean_ctor_set_uint8(v_reuseFailAlloc_3806_, sizeof(void*)*3, v_diag_3770_);
lean_ctor_set_uint8(v_reuseFailAlloc_3806_, sizeof(void*)*3 + 1, v_suppressElabErrors_3771_);
v___x_3782_ = v_reuseFailAlloc_3806_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
uint8_t v___x_3783_; uint8_t v___x_3784_; 
v___x_3783_ = 1;
v___x_3784_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_3778_, v___x_3783_);
if (v___x_3784_ == 0)
{
lean_object* v___x_3785_; 
v___x_3785_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_3743_, v_a_3744_, v_a_3745_, v___x_3782_, v_a_3747_);
lean_dec(v_a_3747_);
lean_dec_ref(v___x_3782_);
lean_dec(v_a_3745_);
v___y_3750_ = v___x_3785_;
goto v___jp_3749_;
}
else
{
lean_object* v_keyedConfig_3786_; uint8_t v_trackZetaDelta_3787_; lean_object* v_zetaDeltaSet_3788_; lean_object* v_lctx_3789_; lean_object* v_localInstances_3790_; lean_object* v_defEqCtx_x3f_3791_; lean_object* v_synthPendingDepth_3792_; lean_object* v_customCanUnfoldPredicate_x3f_3793_; uint8_t v_univApprox_3794_; uint8_t v_inTypeClassResolution_3795_; uint8_t v_cacheInferType_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3805_; 
v_keyedConfig_3786_ = lean_ctor_get(v_a_3744_, 0);
v_trackZetaDelta_3787_ = lean_ctor_get_uint8(v_a_3744_, sizeof(void*)*7);
v_zetaDeltaSet_3788_ = lean_ctor_get(v_a_3744_, 1);
v_lctx_3789_ = lean_ctor_get(v_a_3744_, 2);
v_localInstances_3790_ = lean_ctor_get(v_a_3744_, 3);
v_defEqCtx_x3f_3791_ = lean_ctor_get(v_a_3744_, 4);
v_synthPendingDepth_3792_ = lean_ctor_get(v_a_3744_, 5);
v_customCanUnfoldPredicate_x3f_3793_ = lean_ctor_get(v_a_3744_, 6);
v_univApprox_3794_ = lean_ctor_get_uint8(v_a_3744_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3795_ = lean_ctor_get_uint8(v_a_3744_, sizeof(void*)*7 + 2);
v_cacheInferType_3796_ = lean_ctor_get_uint8(v_a_3744_, sizeof(void*)*7 + 3);
v_isSharedCheck_3805_ = !lean_is_exclusive(v_a_3744_);
if (v_isSharedCheck_3805_ == 0)
{
v___x_3798_ = v_a_3744_;
v_isShared_3799_ = v_isSharedCheck_3805_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_3793_);
lean_inc(v_synthPendingDepth_3792_);
lean_inc(v_defEqCtx_x3f_3791_);
lean_inc(v_localInstances_3790_);
lean_inc(v_lctx_3789_);
lean_inc(v_zetaDeltaSet_3788_);
lean_inc(v_keyedConfig_3786_);
lean_dec(v_a_3744_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3805_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3800_; lean_object* v___x_3802_; 
v___x_3800_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3783_, v_keyedConfig_3786_);
if (v_isShared_3799_ == 0)
{
lean_ctor_set(v___x_3798_, 0, v___x_3800_);
v___x_3802_ = v___x_3798_;
goto v_reusejp_3801_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v___x_3800_);
lean_ctor_set(v_reuseFailAlloc_3804_, 1, v_zetaDeltaSet_3788_);
lean_ctor_set(v_reuseFailAlloc_3804_, 2, v_lctx_3789_);
lean_ctor_set(v_reuseFailAlloc_3804_, 3, v_localInstances_3790_);
lean_ctor_set(v_reuseFailAlloc_3804_, 4, v_defEqCtx_x3f_3791_);
lean_ctor_set(v_reuseFailAlloc_3804_, 5, v_synthPendingDepth_3792_);
lean_ctor_set(v_reuseFailAlloc_3804_, 6, v_customCanUnfoldPredicate_x3f_3793_);
lean_ctor_set_uint8(v_reuseFailAlloc_3804_, sizeof(void*)*7, v_trackZetaDelta_3787_);
lean_ctor_set_uint8(v_reuseFailAlloc_3804_, sizeof(void*)*7 + 1, v_univApprox_3794_);
lean_ctor_set_uint8(v_reuseFailAlloc_3804_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3795_);
lean_ctor_set_uint8(v_reuseFailAlloc_3804_, sizeof(void*)*7 + 3, v_cacheInferType_3796_);
v___x_3802_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3801_;
}
v_reusejp_3801_:
{
lean_object* v___x_3803_; 
v___x_3803_ = l_Lean_Meta_inferTypeImp___lam__0(v_e_3743_, v___x_3802_, v_a_3745_, v___x_3782_, v_a_3747_);
lean_dec(v_a_3747_);
lean_dec_ref(v___x_3782_);
lean_dec(v_a_3745_);
v___y_3750_ = v___x_3803_;
goto v___jp_3749_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferTypeImp___boxed(lean_object* v_e_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_){
_start:
{
lean_object* v_res_3818_; 
v_res_3818_ = lean_infer_type(v_e_3812_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_);
return v_res_3818_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(lean_object* v_x_3819_){
_start:
{
switch(lean_obj_tag(v_x_3819_))
{
case 0:
{
uint8_t v___x_3820_; 
v___x_3820_ = 1;
return v___x_3820_;
}
case 2:
{
lean_object* v_a_3821_; lean_object* v_a_3822_; uint8_t v___x_3823_; 
v_a_3821_ = lean_ctor_get(v_x_3819_, 0);
v_a_3822_ = lean_ctor_get(v_x_3819_, 1);
v___x_3823_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_3821_);
if (v___x_3823_ == 0)
{
return v___x_3823_;
}
else
{
v_x_3819_ = v_a_3822_;
goto _start;
}
}
case 3:
{
lean_object* v_a_3825_; 
v_a_3825_ = lean_ctor_get(v_x_3819_, 1);
v_x_3819_ = v_a_3825_;
goto _start;
}
default: 
{
uint8_t v___x_3827_; 
v___x_3827_ = 0;
return v___x_3827_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero___boxed(lean_object* v_x_3828_){
_start:
{
uint8_t v_res_3829_; lean_object* v_r_3830_; 
v_res_3829_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_x_3828_);
lean_dec(v_x_3828_);
v_r_3830_ = lean_box(v_res_3829_);
return v_r_3830_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(lean_object* v_l_3831_, lean_object* v___y_3832_){
_start:
{
lean_object* v___x_3834_; lean_object* v_mctx_3835_; lean_object* v___x_3836_; lean_object* v_fst_3837_; lean_object* v_snd_3838_; lean_object* v___x_3839_; lean_object* v_cache_3840_; lean_object* v_zetaDeltaFVarIds_3841_; lean_object* v_postponed_3842_; lean_object* v_diag_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3852_; 
v___x_3834_ = lean_st_ref_get(v___y_3832_);
v_mctx_3835_ = lean_ctor_get(v___x_3834_, 0);
lean_inc_ref(v_mctx_3835_);
lean_dec(v___x_3834_);
v___x_3836_ = lean_instantiate_level_mvars(v_mctx_3835_, v_l_3831_);
v_fst_3837_ = lean_ctor_get(v___x_3836_, 0);
lean_inc(v_fst_3837_);
v_snd_3838_ = lean_ctor_get(v___x_3836_, 1);
lean_inc(v_snd_3838_);
lean_dec_ref(v___x_3836_);
v___x_3839_ = lean_st_ref_take(v___y_3832_);
v_cache_3840_ = lean_ctor_get(v___x_3839_, 1);
v_zetaDeltaFVarIds_3841_ = lean_ctor_get(v___x_3839_, 2);
v_postponed_3842_ = lean_ctor_get(v___x_3839_, 3);
v_diag_3843_ = lean_ctor_get(v___x_3839_, 4);
v_isSharedCheck_3852_ = !lean_is_exclusive(v___x_3839_);
if (v_isSharedCheck_3852_ == 0)
{
lean_object* v_unused_3853_; 
v_unused_3853_ = lean_ctor_get(v___x_3839_, 0);
lean_dec(v_unused_3853_);
v___x_3845_ = v___x_3839_;
v_isShared_3846_ = v_isSharedCheck_3852_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_diag_3843_);
lean_inc(v_postponed_3842_);
lean_inc(v_zetaDeltaFVarIds_3841_);
lean_inc(v_cache_3840_);
lean_dec(v___x_3839_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3852_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
lean_ctor_set(v___x_3845_, 0, v_fst_3837_);
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_fst_3837_);
lean_ctor_set(v_reuseFailAlloc_3851_, 1, v_cache_3840_);
lean_ctor_set(v_reuseFailAlloc_3851_, 2, v_zetaDeltaFVarIds_3841_);
lean_ctor_set(v_reuseFailAlloc_3851_, 3, v_postponed_3842_);
lean_ctor_set(v_reuseFailAlloc_3851_, 4, v_diag_3843_);
v___x_3848_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
lean_object* v___x_3849_; lean_object* v___x_3850_; 
v___x_3849_ = lean_st_ref_put(v___y_3832_, v___x_3848_);
v___x_3850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3850_, 0, v_snd_3838_);
return v___x_3850_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg___boxed(lean_object* v_l_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_){
_start:
{
lean_object* v_res_3857_; 
v_res_3857_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_l_3854_, v___y_3855_);
lean_dec(v___y_3855_);
return v_res_3857_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(lean_object* v_l_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_){
_start:
{
lean_object* v___x_3864_; 
v___x_3864_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_l_3858_, v___y_3860_);
return v___x_3864_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___boxed(lean_object* v_l_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_){
_start:
{
lean_object* v_res_3871_; 
v_res_3871_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0(v_l_3865_, v___y_3866_, v___y_3867_, v___y_3868_, v___y_3869_);
lean_dec(v___y_3869_);
lean_dec_ref(v___y_3868_);
lean_dec(v___y_3867_);
lean_dec_ref(v___y_3866_);
return v_res_3871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(lean_object* v_x_3872_, lean_object* v_x_3873_, lean_object* v_a_3874_, lean_object* v_a_3875_, lean_object* v_a_3876_, lean_object* v_a_3877_){
_start:
{
switch(lean_obj_tag(v_x_3872_))
{
case 3:
{
lean_object* v_u_3883_; lean_object* v___x_3884_; uint8_t v___x_3885_; 
v_u_3883_ = lean_ctor_get(v_x_3872_, 0);
lean_inc(v_u_3883_);
lean_dec_ref_known(v_x_3872_, 1);
v___x_3884_ = lean_unsigned_to_nat(0u);
v___x_3885_ = lean_nat_dec_eq(v_x_3873_, v___x_3884_);
lean_dec(v_x_3873_);
if (v___x_3885_ == 0)
{
lean_dec(v_u_3883_);
goto v___jp_3879_;
}
else
{
lean_object* v___x_3886_; 
v___x_3886_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_u_3883_, v_a_3875_);
if (lean_obj_tag(v___x_3886_) == 0)
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3897_; 
v_a_3887_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3889_ = v___x_3886_;
v_isShared_3890_ = v_isSharedCheck_3897_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v___x_3886_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3897_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
uint8_t v___x_3891_; uint8_t v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3895_; 
v___x_3891_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_3887_);
lean_dec(v_a_3887_);
v___x_3892_ = l_Lean_Bool_toLBool(v___x_3891_);
v___x_3893_ = lean_box(v___x_3892_);
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 0, v___x_3893_);
v___x_3895_ = v___x_3889_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v___x_3893_);
v___x_3895_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
return v___x_3895_;
}
}
}
else
{
lean_object* v_a_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3905_; 
v_a_3898_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3900_ = v___x_3886_;
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_a_3898_);
lean_dec(v___x_3886_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_a_3898_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
return v___x_3903_;
}
}
}
}
}
case 7:
{
lean_object* v_body_3906_; lean_object* v_zero_3907_; uint8_t v_isZero_3908_; 
v_body_3906_ = lean_ctor_get(v_x_3872_, 2);
lean_inc_ref(v_body_3906_);
lean_dec_ref_known(v_x_3872_, 3);
v_zero_3907_ = lean_unsigned_to_nat(0u);
v_isZero_3908_ = lean_nat_dec_eq(v_x_3873_, v_zero_3907_);
if (v_isZero_3908_ == 1)
{
uint8_t v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; 
lean_dec_ref(v_body_3906_);
lean_dec(v_x_3873_);
v___x_3909_ = 0;
v___x_3910_ = lean_box(v___x_3909_);
v___x_3911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3911_, 0, v___x_3910_);
return v___x_3911_;
}
else
{
lean_object* v_one_3912_; lean_object* v_n_3913_; 
v_one_3912_ = lean_unsigned_to_nat(1u);
v_n_3913_ = lean_nat_sub(v_x_3873_, v_one_3912_);
lean_dec(v_x_3873_);
v_x_3872_ = v_body_3906_;
v_x_3873_ = v_n_3913_;
goto _start;
}
}
case 8:
{
lean_object* v_body_3915_; 
v_body_3915_ = lean_ctor_get(v_x_3872_, 3);
lean_inc_ref(v_body_3915_);
lean_dec_ref_known(v_x_3872_, 4);
v_x_3872_ = v_body_3915_;
goto _start;
}
case 10:
{
lean_object* v_expr_3917_; 
v_expr_3917_ = lean_ctor_get(v_x_3872_, 1);
lean_inc_ref(v_expr_3917_);
lean_dec_ref_known(v_x_3872_, 2);
v_x_3872_ = v_expr_3917_;
goto _start;
}
default: 
{
lean_dec(v_x_3873_);
lean_dec_ref(v_x_3872_);
goto v___jp_3879_;
}
}
v___jp_3879_:
{
uint8_t v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
v___x_3880_ = 2;
v___x_3881_ = lean_box(v___x_3880_);
v___x_3882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3881_);
return v___x_3882_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp___boxed(lean_object* v_x_3919_, lean_object* v_x_3920_, lean_object* v_a_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_){
_start:
{
lean_object* v_res_3926_; 
v_res_3926_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_x_3919_, v_x_3920_, v_a_3921_, v_a_3922_, v_a_3923_, v_a_3924_);
lean_dec(v_a_3924_);
lean_dec_ref(v_a_3923_);
lean_dec(v_a_3922_);
lean_dec_ref(v_a_3921_);
return v_res_3926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(lean_object* v_x_3927_, lean_object* v_x_3928_, lean_object* v_a_3929_, lean_object* v_a_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_){
_start:
{
switch(lean_obj_tag(v_x_3927_))
{
case 4:
{
lean_object* v_declName_3934_; lean_object* v_us_3935_; lean_object* v___x_3936_; 
v_declName_3934_ = lean_ctor_get(v_x_3927_, 0);
lean_inc(v_declName_3934_);
v_us_3935_ = lean_ctor_get(v_x_3927_, 1);
lean_inc(v_us_3935_);
lean_dec_ref_known(v_x_3927_, 2);
v___x_3936_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_3934_, v_us_3935_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_);
if (lean_obj_tag(v___x_3936_) == 0)
{
lean_object* v_a_3937_; lean_object* v___x_3938_; 
v_a_3937_ = lean_ctor_get(v___x_3936_, 0);
lean_inc(v_a_3937_);
lean_dec_ref_known(v___x_3936_, 1);
v___x_3938_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3937_, v_x_3928_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_);
return v___x_3938_;
}
else
{
lean_object* v_a_3939_; lean_object* v___x_3941_; uint8_t v_isShared_3942_; uint8_t v_isSharedCheck_3946_; 
lean_dec(v_x_3928_);
v_a_3939_ = lean_ctor_get(v___x_3936_, 0);
v_isSharedCheck_3946_ = !lean_is_exclusive(v___x_3936_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3941_ = v___x_3936_;
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
else
{
lean_inc(v_a_3939_);
lean_dec(v___x_3936_);
v___x_3941_ = lean_box(0);
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
v_resetjp_3940_:
{
lean_object* v___x_3944_; 
if (v_isShared_3942_ == 0)
{
v___x_3944_ = v___x_3941_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_a_3939_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
return v___x_3944_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_3947_; lean_object* v___x_3948_; 
v_fvarId_3947_ = lean_ctor_get(v_x_3927_, 0);
lean_inc(v_fvarId_3947_);
lean_dec_ref_known(v_x_3927_, 1);
v___x_3948_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_3947_, v_a_3929_, v_a_3931_, v_a_3932_);
if (lean_obj_tag(v___x_3948_) == 0)
{
lean_object* v_a_3949_; lean_object* v___x_3950_; 
v_a_3949_ = lean_ctor_get(v___x_3948_, 0);
lean_inc(v_a_3949_);
lean_dec_ref_known(v___x_3948_, 1);
v___x_3950_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3949_, v_x_3928_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_);
return v___x_3950_;
}
else
{
lean_object* v_a_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3958_; 
lean_dec(v_x_3928_);
v_a_3951_ = lean_ctor_get(v___x_3948_, 0);
v_isSharedCheck_3958_ = !lean_is_exclusive(v___x_3948_);
if (v_isSharedCheck_3958_ == 0)
{
v___x_3953_ = v___x_3948_;
v_isShared_3954_ = v_isSharedCheck_3958_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_a_3951_);
lean_dec(v___x_3948_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3958_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3956_; 
if (v_isShared_3954_ == 0)
{
v___x_3956_ = v___x_3953_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_3957_; 
v_reuseFailAlloc_3957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3957_, 0, v_a_3951_);
v___x_3956_ = v_reuseFailAlloc_3957_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
return v___x_3956_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_3959_; lean_object* v___x_3960_; 
v_mvarId_3959_ = lean_ctor_get(v_x_3927_, 0);
lean_inc(v_mvarId_3959_);
lean_dec_ref_known(v_x_3927_, 1);
v___x_3960_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_3959_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_);
if (lean_obj_tag(v___x_3960_) == 0)
{
lean_object* v_a_3961_; lean_object* v___x_3962_; 
v_a_3961_ = lean_ctor_get(v___x_3960_, 0);
lean_inc(v_a_3961_);
lean_dec_ref_known(v___x_3960_, 1);
v___x_3962_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_3961_, v_x_3928_, v_a_3929_, v_a_3930_, v_a_3931_, v_a_3932_);
return v___x_3962_;
}
else
{
lean_object* v_a_3963_; lean_object* v___x_3965_; uint8_t v_isShared_3966_; uint8_t v_isSharedCheck_3970_; 
lean_dec(v_x_3928_);
v_a_3963_ = lean_ctor_get(v___x_3960_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v___x_3960_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3965_ = v___x_3960_;
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
else
{
lean_inc(v_a_3963_);
lean_dec(v___x_3960_);
v___x_3965_ = lean_box(0);
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
v_resetjp_3964_:
{
lean_object* v___x_3968_; 
if (v_isShared_3966_ == 0)
{
v___x_3968_ = v___x_3965_;
goto v_reusejp_3967_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v_a_3963_);
v___x_3968_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3967_;
}
v_reusejp_3967_:
{
return v___x_3968_;
}
}
}
}
case 5:
{
lean_object* v_fn_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; 
v_fn_3971_ = lean_ctor_get(v_x_3927_, 0);
lean_inc_ref(v_fn_3971_);
lean_dec_ref_known(v_x_3927_, 2);
v___x_3972_ = lean_unsigned_to_nat(1u);
v___x_3973_ = lean_nat_add(v_x_3928_, v___x_3972_);
lean_dec(v_x_3928_);
v_x_3927_ = v_fn_3971_;
v_x_3928_ = v___x_3973_;
goto _start;
}
case 10:
{
lean_object* v_expr_3975_; 
v_expr_3975_ = lean_ctor_get(v_x_3927_, 1);
lean_inc_ref(v_expr_3975_);
lean_dec_ref_known(v_x_3927_, 2);
v_x_3927_ = v_expr_3975_;
goto _start;
}
case 8:
{
lean_object* v_body_3977_; 
v_body_3977_ = lean_ctor_get(v_x_3927_, 3);
lean_inc_ref(v_body_3977_);
lean_dec_ref_known(v_x_3927_, 4);
v_x_3927_ = v_body_3977_;
goto _start;
}
case 6:
{
lean_object* v_body_3979_; lean_object* v_zero_3980_; uint8_t v_isZero_3981_; 
v_body_3979_ = lean_ctor_get(v_x_3927_, 2);
lean_inc_ref(v_body_3979_);
lean_dec_ref_known(v_x_3927_, 3);
v_zero_3980_ = lean_unsigned_to_nat(0u);
v_isZero_3981_ = lean_nat_dec_eq(v_x_3928_, v_zero_3980_);
if (v_isZero_3981_ == 1)
{
uint8_t v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; 
lean_dec_ref(v_body_3979_);
lean_dec(v_x_3928_);
v___x_3982_ = 0;
v___x_3983_ = lean_box(v___x_3982_);
v___x_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3984_, 0, v___x_3983_);
return v___x_3984_;
}
else
{
lean_object* v_one_3985_; lean_object* v_n_3986_; 
v_one_3985_ = lean_unsigned_to_nat(1u);
v_n_3986_ = lean_nat_sub(v_x_3928_, v_one_3985_);
lean_dec(v_x_3928_);
v_x_3927_ = v_body_3979_;
v_x_3928_ = v_n_3986_;
goto _start;
}
}
default: 
{
uint8_t v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; 
lean_dec(v_x_3928_);
lean_dec_ref(v_x_3927_);
v___x_3988_ = 2;
v___x_3989_ = lean_box(v___x_3988_);
v___x_3990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3989_);
return v___x_3990_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp___boxed(lean_object* v_x_3991_, lean_object* v_x_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(v_x_3991_, v_x_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_);
lean_dec(v_a_3996_);
lean_dec_ref(v_a_3995_);
lean_dec(v_a_3994_);
lean_dec_ref(v_a_3993_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick(lean_object* v_x_3999_, lean_object* v_a_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_){
_start:
{
switch(lean_obj_tag(v_x_3999_))
{
case 0:
{
uint8_t v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; 
lean_dec_ref_known(v_x_3999_, 1);
v___x_4005_ = 2;
v___x_4006_ = lean_box(v___x_4005_);
v___x_4007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4007_, 0, v___x_4006_);
return v___x_4007_;
}
case 1:
{
lean_object* v_fvarId_4008_; lean_object* v___x_4009_; 
v_fvarId_4008_ = lean_ctor_get(v_x_3999_, 0);
lean_inc(v_fvarId_4008_);
lean_dec_ref_known(v_x_3999_, 1);
v___x_4009_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4008_, v_a_4000_, v_a_4002_, v_a_4003_);
if (lean_obj_tag(v___x_4009_) == 0)
{
lean_object* v_a_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; 
v_a_4010_ = lean_ctor_get(v___x_4009_, 0);
lean_inc(v_a_4010_);
lean_dec_ref_known(v___x_4009_, 1);
v___x_4011_ = lean_unsigned_to_nat(0u);
v___x_4012_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_4010_, v___x_4011_, v_a_4000_, v_a_4001_, v_a_4002_, v_a_4003_);
return v___x_4012_;
}
else
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4020_; 
v_a_4013_ = lean_ctor_get(v___x_4009_, 0);
v_isSharedCheck_4020_ = !lean_is_exclusive(v___x_4009_);
if (v_isSharedCheck_4020_ == 0)
{
v___x_4015_ = v___x_4009_;
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_4009_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4018_; 
if (v_isShared_4016_ == 0)
{
v___x_4018_ = v___x_4015_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4019_; 
v_reuseFailAlloc_4019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4019_, 0, v_a_4013_);
v___x_4018_ = v_reuseFailAlloc_4019_;
goto v_reusejp_4017_;
}
v_reusejp_4017_:
{
return v___x_4018_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4021_; lean_object* v___x_4022_; 
v_mvarId_4021_ = lean_ctor_get(v_x_3999_, 0);
lean_inc(v_mvarId_4021_);
lean_dec_ref_known(v_x_3999_, 1);
v___x_4022_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4021_, v_a_4000_, v_a_4001_, v_a_4002_, v_a_4003_);
if (lean_obj_tag(v___x_4022_) == 0)
{
lean_object* v_a_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; 
v_a_4023_ = lean_ctor_get(v___x_4022_, 0);
lean_inc(v_a_4023_);
lean_dec_ref_known(v___x_4022_, 1);
v___x_4024_ = lean_unsigned_to_nat(0u);
v___x_4025_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_4023_, v___x_4024_, v_a_4000_, v_a_4001_, v_a_4002_, v_a_4003_);
return v___x_4025_;
}
else
{
lean_object* v_a_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4033_; 
v_a_4026_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4033_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4033_ == 0)
{
v___x_4028_ = v___x_4022_;
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_a_4026_);
lean_dec(v___x_4022_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4031_; 
if (v_isShared_4029_ == 0)
{
v___x_4031_ = v___x_4028_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_a_4026_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
return v___x_4031_;
}
}
}
}
case 4:
{
lean_object* v_declName_4034_; lean_object* v_us_4035_; lean_object* v___x_4036_; 
v_declName_4034_ = lean_ctor_get(v_x_3999_, 0);
lean_inc(v_declName_4034_);
v_us_4035_ = lean_ctor_get(v_x_3999_, 1);
lean_inc(v_us_4035_);
lean_dec_ref_known(v_x_3999_, 2);
v___x_4036_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4034_, v_us_4035_, v_a_4000_, v_a_4001_, v_a_4002_, v_a_4003_);
if (lean_obj_tag(v___x_4036_) == 0)
{
lean_object* v_a_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; 
v_a_4037_ = lean_ctor_get(v___x_4036_, 0);
lean_inc(v_a_4037_);
lean_dec_ref_known(v___x_4036_, 1);
v___x_4038_ = lean_unsigned_to_nat(0u);
v___x_4039_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp(v_a_4037_, v___x_4038_, v_a_4000_, v_a_4001_, v_a_4002_, v_a_4003_);
return v___x_4039_;
}
else
{
lean_object* v_a_4040_; lean_object* v___x_4042_; uint8_t v_isShared_4043_; uint8_t v_isSharedCheck_4047_; 
v_a_4040_ = lean_ctor_get(v___x_4036_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v___x_4036_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4042_ = v___x_4036_;
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
else
{
lean_inc(v_a_4040_);
lean_dec(v___x_4036_);
v___x_4042_ = lean_box(0);
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
v_resetjp_4041_:
{
lean_object* v___x_4045_; 
if (v_isShared_4043_ == 0)
{
v___x_4045_ = v___x_4042_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_a_4040_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
return v___x_4045_;
}
}
}
}
case 5:
{
lean_object* v_fn_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; 
v_fn_4048_ = lean_ctor_get(v_x_3999_, 0);
lean_inc_ref(v_fn_4048_);
lean_dec_ref_known(v_x_3999_, 2);
v___x_4049_ = lean_unsigned_to_nat(1u);
v___x_4050_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isPropQuickApp(v_fn_4048_, v___x_4049_, v_a_4000_, v_a_4001_, v_a_4002_, v_a_4003_);
return v___x_4050_;
}
case 7:
{
lean_object* v_body_4051_; 
v_body_4051_ = lean_ctor_get(v_x_3999_, 2);
lean_inc_ref(v_body_4051_);
lean_dec_ref_known(v_x_3999_, 3);
v_x_3999_ = v_body_4051_;
goto _start;
}
case 8:
{
lean_object* v_body_4053_; 
v_body_4053_ = lean_ctor_get(v_x_3999_, 3);
lean_inc_ref(v_body_4053_);
lean_dec_ref_known(v_x_3999_, 4);
v_x_3999_ = v_body_4053_;
goto _start;
}
case 10:
{
lean_object* v_expr_4055_; 
v_expr_4055_ = lean_ctor_get(v_x_3999_, 1);
lean_inc_ref(v_expr_4055_);
lean_dec_ref_known(v_x_3999_, 2);
v_x_3999_ = v_expr_4055_;
goto _start;
}
case 11:
{
uint8_t v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; 
lean_dec_ref_known(v_x_3999_, 3);
v___x_4057_ = 2;
v___x_4058_ = lean_box(v___x_4057_);
v___x_4059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4059_, 0, v___x_4058_);
return v___x_4059_;
}
default: 
{
uint8_t v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; 
lean_dec_ref(v_x_3999_);
v___x_4060_ = 0;
v___x_4061_ = lean_box(v___x_4060_);
v___x_4062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4062_, 0, v___x_4061_);
return v___x_4062_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropQuick___boxed(lean_object* v_x_4063_, lean_object* v_a_4064_, lean_object* v_a_4065_, lean_object* v_a_4066_, lean_object* v_a_4067_, lean_object* v_a_4068_){
_start:
{
lean_object* v_res_4069_; 
v_res_4069_ = l_Lean_Meta_isPropQuick(v_x_4063_, v_a_4064_, v_a_4065_, v_a_4066_, v_a_4067_);
lean_dec(v_a_4067_);
lean_dec_ref(v_a_4066_);
lean_dec(v_a_4065_);
lean_dec_ref(v_a_4064_);
return v_res_4069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProp(lean_object* v_e_4070_, lean_object* v_a_4071_, lean_object* v_a_4072_, lean_object* v_a_4073_, lean_object* v_a_4074_){
_start:
{
lean_object* v___x_4076_; 
lean_inc_ref(v_e_4070_);
v___x_4076_ = l_Lean_Meta_isPropQuick(v_e_4070_, v_a_4071_, v_a_4072_, v_a_4073_, v_a_4074_);
if (lean_obj_tag(v___x_4076_) == 0)
{
lean_object* v_a_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4133_; 
v_a_4077_ = lean_ctor_get(v___x_4076_, 0);
v_isSharedCheck_4133_ = !lean_is_exclusive(v___x_4076_);
if (v_isSharedCheck_4133_ == 0)
{
v___x_4079_ = v___x_4076_;
v_isShared_4080_ = v_isSharedCheck_4133_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_a_4077_);
lean_dec(v___x_4076_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4133_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
uint8_t v___x_4081_; 
v___x_4081_ = lean_unbox(v_a_4077_);
lean_dec(v_a_4077_);
switch(v___x_4081_)
{
case 0:
{
uint8_t v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4085_; 
lean_dec_ref(v_e_4070_);
v___x_4082_ = 0;
v___x_4083_ = lean_box(v___x_4082_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 0, v___x_4083_);
v___x_4085_ = v___x_4079_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v___x_4083_);
v___x_4085_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
return v___x_4085_;
}
}
case 1:
{
uint8_t v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4090_; 
lean_dec_ref(v_e_4070_);
v___x_4087_ = 1;
v___x_4088_ = lean_box(v___x_4087_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 0, v___x_4088_);
v___x_4090_ = v___x_4079_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v___x_4088_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
return v___x_4090_;
}
}
default: 
{
lean_object* v___x_4092_; 
lean_del_object(v___x_4079_);
lean_inc(v_a_4074_);
lean_inc_ref(v_a_4073_);
lean_inc(v_a_4072_);
lean_inc_ref(v_a_4071_);
v___x_4092_ = lean_infer_type(v_e_4070_, v_a_4071_, v_a_4072_, v_a_4073_, v_a_4074_);
if (lean_obj_tag(v___x_4092_) == 0)
{
lean_object* v_a_4093_; lean_object* v___x_4094_; 
v_a_4093_ = lean_ctor_get(v___x_4092_, 0);
lean_inc(v_a_4093_);
lean_dec_ref_known(v___x_4092_, 1);
v___x_4094_ = l_Lean_Meta_whnfD(v_a_4093_, v_a_4071_, v_a_4072_, v_a_4073_, v_a_4074_);
if (lean_obj_tag(v___x_4094_) == 0)
{
lean_object* v_a_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4116_; 
v_a_4095_ = lean_ctor_get(v___x_4094_, 0);
v_isSharedCheck_4116_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4097_ = v___x_4094_;
v_isShared_4098_ = v_isSharedCheck_4116_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_a_4095_);
lean_dec(v___x_4094_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4116_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
if (lean_obj_tag(v_a_4095_) == 3)
{
lean_object* v_u_4099_; lean_object* v___x_4100_; lean_object* v_a_4101_; lean_object* v___x_4103_; uint8_t v_isShared_4104_; uint8_t v_isSharedCheck_4110_; 
lean_del_object(v___x_4097_);
v_u_4099_ = lean_ctor_get(v_a_4095_, 0);
lean_inc(v_u_4099_);
lean_dec_ref_known(v_a_4095_, 1);
v___x_4100_ = l_Lean_instantiateLevelMVars___at___00__private_Lean_Meta_InferType_0__Lean_Meta_isArrowProp_spec__0___redArg(v_u_4099_, v_a_4072_);
v_a_4101_ = lean_ctor_get(v___x_4100_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v___x_4100_);
if (v_isSharedCheck_4110_ == 0)
{
v___x_4103_ = v___x_4100_;
v_isShared_4104_ = v_isSharedCheck_4110_;
goto v_resetjp_4102_;
}
else
{
lean_inc(v_a_4101_);
lean_dec(v___x_4100_);
v___x_4103_ = lean_box(0);
v_isShared_4104_ = v_isSharedCheck_4110_;
goto v_resetjp_4102_;
}
v_resetjp_4102_:
{
uint8_t v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4108_; 
v___x_4105_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isAlwaysZero(v_a_4101_);
lean_dec(v_a_4101_);
v___x_4106_ = lean_box(v___x_4105_);
if (v_isShared_4104_ == 0)
{
lean_ctor_set(v___x_4103_, 0, v___x_4106_);
v___x_4108_ = v___x_4103_;
goto v_reusejp_4107_;
}
else
{
lean_object* v_reuseFailAlloc_4109_; 
v_reuseFailAlloc_4109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4109_, 0, v___x_4106_);
v___x_4108_ = v_reuseFailAlloc_4109_;
goto v_reusejp_4107_;
}
v_reusejp_4107_:
{
return v___x_4108_;
}
}
}
else
{
uint8_t v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4114_; 
lean_dec(v_a_4095_);
v___x_4111_ = 0;
v___x_4112_ = lean_box(v___x_4111_);
if (v_isShared_4098_ == 0)
{
lean_ctor_set(v___x_4097_, 0, v___x_4112_);
v___x_4114_ = v___x_4097_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v___x_4112_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
return v___x_4114_;
}
}
}
}
else
{
lean_object* v_a_4117_; lean_object* v___x_4119_; uint8_t v_isShared_4120_; uint8_t v_isSharedCheck_4124_; 
v_a_4117_ = lean_ctor_get(v___x_4094_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4124_ == 0)
{
v___x_4119_ = v___x_4094_;
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
else
{
lean_inc(v_a_4117_);
lean_dec(v___x_4094_);
v___x_4119_ = lean_box(0);
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
v_resetjp_4118_:
{
lean_object* v___x_4122_; 
if (v_isShared_4120_ == 0)
{
v___x_4122_ = v___x_4119_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v_a_4117_);
v___x_4122_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
return v___x_4122_;
}
}
}
}
else
{
lean_object* v_a_4125_; lean_object* v___x_4127_; uint8_t v_isShared_4128_; uint8_t v_isSharedCheck_4132_; 
v_a_4125_ = lean_ctor_get(v___x_4092_, 0);
v_isSharedCheck_4132_ = !lean_is_exclusive(v___x_4092_);
if (v_isSharedCheck_4132_ == 0)
{
v___x_4127_ = v___x_4092_;
v_isShared_4128_ = v_isSharedCheck_4132_;
goto v_resetjp_4126_;
}
else
{
lean_inc(v_a_4125_);
lean_dec(v___x_4092_);
v___x_4127_ = lean_box(0);
v_isShared_4128_ = v_isSharedCheck_4132_;
goto v_resetjp_4126_;
}
v_resetjp_4126_:
{
lean_object* v___x_4130_; 
if (v_isShared_4128_ == 0)
{
v___x_4130_ = v___x_4127_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v_a_4125_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
return v___x_4130_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4134_; lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4141_; 
lean_dec_ref(v_e_4070_);
v_a_4134_ = lean_ctor_get(v___x_4076_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v___x_4076_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4136_ = v___x_4076_;
v_isShared_4137_ = v_isSharedCheck_4141_;
goto v_resetjp_4135_;
}
else
{
lean_inc(v_a_4134_);
lean_dec(v___x_4076_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProp___boxed(lean_object* v_e_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_){
_start:
{
lean_object* v_res_4148_; 
v_res_4148_ = l_Lean_Meta_isProp(v_e_4142_, v_a_4143_, v_a_4144_, v_a_4145_, v_a_4146_);
lean_dec(v_a_4146_);
lean_dec_ref(v_a_4145_);
lean_dec(v_a_4144_);
lean_dec_ref(v_a_4143_);
return v_res_4148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx(lean_object* v_x_4149_){
_start:
{
switch(lean_obj_tag(v_x_4149_))
{
case 0:
{
lean_object* v___x_4150_; 
v___x_4150_ = lean_unsigned_to_nat(0u);
return v___x_4150_;
}
case 1:
{
lean_object* v___x_4151_; 
v___x_4151_ = lean_unsigned_to_nat(1u);
return v___x_4151_;
}
case 2:
{
lean_object* v___x_4152_; 
v___x_4152_ = lean_unsigned_to_nat(2u);
return v___x_4152_;
}
default: 
{
lean_object* v___x_4153_; 
v___x_4153_ = lean_unsigned_to_nat(3u);
return v___x_4153_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx___boxed(lean_object* v_x_4154_){
_start:
{
lean_object* v_res_4155_; 
v_res_4155_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorIdx(v_x_4154_);
lean_dec(v_x_4154_);
return v_res_4155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(lean_object* v_t_4156_, lean_object* v_k_4157_){
_start:
{
if (lean_obj_tag(v_t_4156_) == 3)
{
lean_object* v_idx_4158_; lean_object* v___x_4159_; 
v_idx_4158_ = lean_ctor_get(v_t_4156_, 0);
lean_inc(v_idx_4158_);
lean_dec_ref_known(v_t_4156_, 1);
v___x_4159_ = lean_apply_1(v_k_4157_, v_idx_4158_);
return v___x_4159_;
}
else
{
lean_dec(v_t_4156_);
return v_k_4157_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(lean_object* v_motive_4160_, lean_object* v_ctorIdx_4161_, lean_object* v_t_4162_, lean_object* v_h_4163_, lean_object* v_k_4164_){
_start:
{
lean_object* v___x_4165_; 
v___x_4165_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4162_, v_k_4164_);
return v___x_4165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___boxed(lean_object* v_motive_4166_, lean_object* v_ctorIdx_4167_, lean_object* v_t_4168_, lean_object* v_h_4169_, lean_object* v_k_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim(v_motive_4166_, v_ctorIdx_4167_, v_t_4168_, v_h_4169_, v_k_4170_);
lean_dec(v_ctorIdx_4167_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim___redArg(lean_object* v_t_4172_, lean_object* v_false_4173_){
_start:
{
lean_object* v___x_4174_; 
v___x_4174_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4172_, v_false_4173_);
return v___x_4174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_false_elim(lean_object* v_motive_4175_, lean_object* v_t_4176_, lean_object* v_h_4177_, lean_object* v_false_4178_){
_start:
{
lean_object* v___x_4179_; 
v___x_4179_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4176_, v_false_4178_);
return v___x_4179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim___redArg(lean_object* v_t_4180_, lean_object* v_true_4181_){
_start:
{
lean_object* v___x_4182_; 
v___x_4182_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4180_, v_true_4181_);
return v___x_4182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_true_elim(lean_object* v_motive_4183_, lean_object* v_t_4184_, lean_object* v_h_4185_, lean_object* v_true_4186_){
_start:
{
lean_object* v___x_4187_; 
v___x_4187_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4184_, v_true_4186_);
return v___x_4187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim___redArg(lean_object* v_t_4188_, lean_object* v_undef_4189_){
_start:
{
lean_object* v___x_4190_; 
v___x_4190_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4188_, v_undef_4189_);
return v___x_4190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_undef_elim(lean_object* v_motive_4191_, lean_object* v_t_4192_, lean_object* v_h_4193_, lean_object* v_undef_4194_){
_start:
{
lean_object* v___x_4195_; 
v___x_4195_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4192_, v_undef_4194_);
return v___x_4195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim___redArg(lean_object* v_t_4196_, lean_object* v_bvar_4197_){
_start:
{
lean_object* v___x_4198_; 
v___x_4198_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4196_, v_bvar_4197_);
return v___x_4198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_bvar_elim(lean_object* v_motive_4199_, lean_object* v_t_4200_, lean_object* v_h_4201_, lean_object* v_bvar_4202_){
_start:
{
lean_object* v___x_4203_; 
v___x_4203_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_ctorElim___redArg(v_t_4200_, v_bvar_4202_);
return v___x_4203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(uint8_t v_x_4204_){
_start:
{
switch(v_x_4204_)
{
case 0:
{
lean_object* v___x_4205_; 
v___x_4205_ = lean_box(0);
return v___x_4205_;
}
case 1:
{
lean_object* v___x_4206_; 
v___x_4206_ = lean_box(1);
return v___x_4206_;
}
default: 
{
lean_object* v___x_4207_; 
v___x_4207_ = lean_box(2);
return v___x_4207_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult___boxed(lean_object* v_x_4208_){
_start:
{
uint8_t v_x_25__boxed_4209_; lean_object* v_res_4210_; 
v_x_25__boxed_4209_ = lean_unbox(v_x_4208_);
v_res_4210_ = l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(v_x_25__boxed_4209_);
return v_res_4210_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(lean_object* v_x_4211_){
_start:
{
switch(lean_obj_tag(v_x_4211_))
{
case 0:
{
uint8_t v___x_4212_; 
v___x_4212_ = 0;
return v___x_4212_;
}
case 1:
{
uint8_t v___x_4213_; 
v___x_4213_ = 1;
return v___x_4213_;
}
default: 
{
uint8_t v___x_4214_; 
v___x_4214_ = 2;
return v___x_4214_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool___boxed(lean_object* v_x_4215_){
_start:
{
uint8_t v_res_4216_; lean_object* v_r_4217_; 
v_res_4216_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(v_x_4215_);
lean_dec(v_x_4215_);
v_r_4217_ = lean_box(v_res_4216_);
return v_r_4217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(lean_object* v_e_4219_){
_start:
{
switch(lean_obj_tag(v_e_4219_))
{
case 3:
{
lean_object* v_u_4220_; uint8_t v___x_4221_; 
v_u_4220_ = lean_ctor_get(v_e_4219_, 0);
v___x_4221_ = l_Lean_Level_isNeverZero(v_u_4220_);
if (v___x_4221_ == 0)
{
uint8_t v___x_4222_; 
v___x_4222_ = l_Lean_Level_isZero(v_u_4220_);
if (v___x_4222_ == 0)
{
lean_object* v___x_4223_; 
v___x_4223_ = lean_box(2);
return v___x_4223_;
}
else
{
lean_object* v___x_4224_; 
v___x_4224_ = lean_box(1);
return v___x_4224_;
}
}
else
{
lean_object* v___x_4225_; 
v___x_4225_ = lean_box(0);
return v___x_4225_;
}
}
case 5:
{
lean_object* v_fn_4226_; 
v_fn_4226_ = lean_ctor_get(v_e_4219_, 0);
if (lean_obj_tag(v_fn_4226_) == 4)
{
lean_object* v_declName_4227_; 
v_declName_4227_ = lean_ctor_get(v_fn_4226_, 0);
if (lean_obj_tag(v_declName_4227_) == 1)
{
lean_object* v_pre_4228_; 
v_pre_4228_ = lean_ctor_get(v_declName_4227_, 0);
if (lean_obj_tag(v_pre_4228_) == 0)
{
lean_object* v_arg_4229_; lean_object* v_str_4230_; lean_object* v___x_4231_; uint8_t v___x_4232_; 
v_arg_4229_ = lean_ctor_get(v_e_4219_, 1);
v_str_4230_ = lean_ctor_get(v_declName_4227_, 1);
v___x_4231_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___closed__0));
v___x_4232_ = lean_string_dec_eq(v_str_4230_, v___x_4231_);
if (v___x_4232_ == 0)
{
lean_object* v___x_4233_; 
v___x_4233_ = lean_box(2);
return v___x_4233_;
}
else
{
v_e_4219_ = v_arg_4229_;
goto _start;
}
}
else
{
lean_object* v___x_4235_; 
v___x_4235_ = lean_box(2);
return v___x_4235_;
}
}
else
{
lean_object* v___x_4236_; 
v___x_4236_ = lean_box(2);
return v___x_4236_;
}
}
else
{
lean_object* v___x_4237_; 
v___x_4237_ = lean_box(2);
return v___x_4237_;
}
}
default: 
{
lean_object* v___x_4238_; 
v___x_4238_ = lean_box(2);
return v___x_4238_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp___boxed(lean_object* v_e_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(v_e_4239_);
lean_dec_ref(v_e_4239_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(lean_object* v_r_4241_, lean_object* v_binderType_4242_){
_start:
{
if (lean_obj_tag(v_r_4241_) == 3)
{
lean_object* v_idx_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4255_; 
v_idx_4243_ = lean_ctor_get(v_r_4241_, 0);
v_isSharedCheck_4255_ = !lean_is_exclusive(v_r_4241_);
if (v_isSharedCheck_4255_ == 0)
{
v___x_4245_ = v_r_4241_;
v_isShared_4246_ = v_isSharedCheck_4255_;
goto v_resetjp_4244_;
}
else
{
lean_inc(v_idx_4243_);
lean_dec(v_r_4241_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4255_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
lean_object* v_zero_4247_; uint8_t v_isZero_4248_; 
v_zero_4247_ = lean_unsigned_to_nat(0u);
v_isZero_4248_ = lean_nat_dec_eq(v_idx_4243_, v_zero_4247_);
if (v_isZero_4248_ == 1)
{
lean_object* v___x_4249_; 
lean_del_object(v___x_4245_);
lean_dec(v_idx_4243_);
v___x_4249_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_checkProp(v_binderType_4242_);
return v___x_4249_;
}
else
{
lean_object* v_one_4250_; lean_object* v_n_4251_; lean_object* v___x_4253_; 
v_one_4250_ = lean_unsigned_to_nat(1u);
v_n_4251_ = lean_nat_sub(v_idx_4243_, v_one_4250_);
lean_dec(v_idx_4243_);
if (v_isShared_4246_ == 0)
{
lean_ctor_set(v___x_4245_, 0, v_n_4251_);
v___x_4253_ = v___x_4245_;
goto v_reusejp_4252_;
}
else
{
lean_object* v_reuseFailAlloc_4254_; 
v_reuseFailAlloc_4254_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4254_, 0, v_n_4251_);
v___x_4253_ = v_reuseFailAlloc_4254_;
goto v_reusejp_4252_;
}
v_reusejp_4252_:
{
return v___x_4253_;
}
}
}
}
else
{
return v_r_4241_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult___boxed(lean_object* v_r_4256_, lean_object* v_binderType_4257_){
_start:
{
lean_object* v_res_4258_; 
v_res_4258_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_r_4256_, v_binderType_4257_);
lean_dec_ref(v_binderType_4257_);
return v_res_4258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(lean_object* v_x_4259_, lean_object* v_x_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_){
_start:
{
lean_object* v_type_4267_; lean_object* v___y_4268_; lean_object* v___y_4269_; lean_object* v___y_4270_; lean_object* v___y_4271_; 
switch(lean_obj_tag(v_x_4259_))
{
case 7:
{
lean_object* v_binderType_4294_; lean_object* v_body_4295_; lean_object* v_zero_4296_; uint8_t v_isZero_4297_; 
v_binderType_4294_ = lean_ctor_get(v_x_4259_, 1);
v_body_4295_ = lean_ctor_get(v_x_4259_, 2);
v_zero_4296_ = lean_unsigned_to_nat(0u);
v_isZero_4297_ = lean_nat_dec_eq(v_x_4260_, v_zero_4296_);
if (v_isZero_4297_ == 1)
{
v_type_4267_ = v_x_4259_;
v___y_4268_ = v_a_4261_;
v___y_4269_ = v_a_4262_;
v___y_4270_ = v_a_4263_;
v___y_4271_ = v_a_4264_;
goto v___jp_4266_;
}
else
{
lean_object* v_one_4298_; lean_object* v_n_4299_; lean_object* v___x_4300_; 
lean_inc_ref(v_body_4295_);
lean_inc_ref(v_binderType_4294_);
lean_dec_ref_known(v_x_4259_, 3);
v_one_4298_ = lean_unsigned_to_nat(1u);
v_n_4299_ = lean_nat_sub(v_x_4260_, v_one_4298_);
v___x_4300_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_body_4295_, v_n_4299_, v_a_4261_, v_a_4262_, v_a_4263_, v_a_4264_);
lean_dec(v_n_4299_);
if (lean_obj_tag(v___x_4300_) == 0)
{
lean_object* v_a_4301_; lean_object* v___x_4303_; uint8_t v_isShared_4304_; uint8_t v_isSharedCheck_4309_; 
v_a_4301_ = lean_ctor_get(v___x_4300_, 0);
v_isSharedCheck_4309_ = !lean_is_exclusive(v___x_4300_);
if (v_isSharedCheck_4309_ == 0)
{
v___x_4303_ = v___x_4300_;
v_isShared_4304_ = v_isSharedCheck_4309_;
goto v_resetjp_4302_;
}
else
{
lean_inc(v_a_4301_);
lean_dec(v___x_4300_);
v___x_4303_ = lean_box(0);
v_isShared_4304_ = v_isSharedCheck_4309_;
goto v_resetjp_4302_;
}
v_resetjp_4302_:
{
lean_object* v___x_4305_; lean_object* v___x_4307_; 
v___x_4305_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_a_4301_, v_binderType_4294_);
lean_dec_ref(v_binderType_4294_);
if (v_isShared_4304_ == 0)
{
lean_ctor_set(v___x_4303_, 0, v___x_4305_);
v___x_4307_ = v___x_4303_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4308_; 
v_reuseFailAlloc_4308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4308_, 0, v___x_4305_);
v___x_4307_ = v_reuseFailAlloc_4308_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
return v___x_4307_;
}
}
}
else
{
lean_dec_ref(v_binderType_4294_);
return v___x_4300_;
}
}
}
case 8:
{
lean_object* v_type_4310_; lean_object* v_body_4311_; lean_object* v___x_4312_; 
v_type_4310_ = lean_ctor_get(v_x_4259_, 1);
lean_inc_ref(v_type_4310_);
v_body_4311_ = lean_ctor_get(v_x_4259_, 3);
lean_inc_ref(v_body_4311_);
lean_dec_ref_known(v_x_4259_, 4);
v___x_4312_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_body_4311_, v_x_4260_, v_a_4261_, v_a_4262_, v_a_4263_, v_a_4264_);
if (lean_obj_tag(v___x_4312_) == 0)
{
lean_object* v_a_4313_; lean_object* v___x_4315_; uint8_t v_isShared_4316_; uint8_t v_isSharedCheck_4321_; 
v_a_4313_ = lean_ctor_get(v___x_4312_, 0);
v_isSharedCheck_4321_ = !lean_is_exclusive(v___x_4312_);
if (v_isSharedCheck_4321_ == 0)
{
v___x_4315_ = v___x_4312_;
v_isShared_4316_ = v_isSharedCheck_4321_;
goto v_resetjp_4314_;
}
else
{
lean_inc(v_a_4313_);
lean_dec(v___x_4312_);
v___x_4315_ = lean_box(0);
v_isShared_4316_ = v_isSharedCheck_4321_;
goto v_resetjp_4314_;
}
v_resetjp_4314_:
{
lean_object* v___x_4317_; lean_object* v___x_4319_; 
v___x_4317_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27_processResult(v_a_4313_, v_type_4310_);
lean_dec_ref(v_type_4310_);
if (v_isShared_4316_ == 0)
{
lean_ctor_set(v___x_4315_, 0, v___x_4317_);
v___x_4319_ = v___x_4315_;
goto v_reusejp_4318_;
}
else
{
lean_object* v_reuseFailAlloc_4320_; 
v_reuseFailAlloc_4320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4320_, 0, v___x_4317_);
v___x_4319_ = v_reuseFailAlloc_4320_;
goto v_reusejp_4318_;
}
v_reusejp_4318_:
{
return v___x_4319_;
}
}
}
else
{
lean_dec_ref(v_type_4310_);
return v___x_4312_;
}
}
case 10:
{
lean_object* v_expr_4322_; 
v_expr_4322_ = lean_ctor_get(v_x_4259_, 1);
lean_inc_ref(v_expr_4322_);
lean_dec_ref_known(v_x_4259_, 2);
v_x_4259_ = v_expr_4322_;
goto _start;
}
case 0:
{
lean_object* v_deBruijnIndex_4324_; lean_object* v___x_4325_; uint8_t v___x_4326_; 
v_deBruijnIndex_4324_ = lean_ctor_get(v_x_4259_, 0);
lean_inc(v_deBruijnIndex_4324_);
lean_dec_ref_known(v_x_4259_, 1);
v___x_4325_ = lean_unsigned_to_nat(0u);
v___x_4326_ = lean_nat_dec_eq(v_x_4260_, v___x_4325_);
if (v___x_4326_ == 0)
{
lean_dec(v_deBruijnIndex_4324_);
goto v___jp_4291_;
}
else
{
lean_object* v___x_4327_; lean_object* v___x_4328_; 
v___x_4327_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4327_, 0, v_deBruijnIndex_4324_);
v___x_4328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4328_, 0, v___x_4327_);
return v___x_4328_;
}
}
default: 
{
lean_object* v___x_4329_; uint8_t v___x_4330_; 
v___x_4329_ = lean_unsigned_to_nat(0u);
v___x_4330_ = lean_nat_dec_eq(v_x_4260_, v___x_4329_);
if (v___x_4330_ == 0)
{
lean_dec_ref(v_x_4259_);
goto v___jp_4291_;
}
else
{
v_type_4267_ = v_x_4259_;
v___y_4268_ = v_a_4261_;
v___y_4269_ = v_a_4262_;
v___y_4270_ = v_a_4263_;
v___y_4271_ = v_a_4264_;
goto v___jp_4266_;
}
}
}
v___jp_4266_:
{
lean_object* v___x_4272_; 
v___x_4272_ = l_Lean_Meta_isPropQuick(v_type_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_);
if (lean_obj_tag(v___x_4272_) == 0)
{
lean_object* v_a_4273_; lean_object* v___x_4275_; uint8_t v_isShared_4276_; uint8_t v_isSharedCheck_4282_; 
v_a_4273_ = lean_ctor_get(v___x_4272_, 0);
v_isSharedCheck_4282_ = !lean_is_exclusive(v___x_4272_);
if (v_isSharedCheck_4282_ == 0)
{
v___x_4275_ = v___x_4272_;
v_isShared_4276_ = v_isSharedCheck_4282_;
goto v_resetjp_4274_;
}
else
{
lean_inc(v_a_4273_);
lean_dec(v___x_4272_);
v___x_4275_ = lean_box(0);
v_isShared_4276_ = v_isSharedCheck_4282_;
goto v_resetjp_4274_;
}
v_resetjp_4274_:
{
uint8_t v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4280_; 
v___x_4277_ = lean_unbox(v_a_4273_);
lean_dec(v_a_4273_);
v___x_4278_ = l___private_Lean_Meta_InferType_0__Lean_Meta_toArrowPropResult(v___x_4277_);
if (v_isShared_4276_ == 0)
{
lean_ctor_set(v___x_4275_, 0, v___x_4278_);
v___x_4280_ = v___x_4275_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4281_; 
v_reuseFailAlloc_4281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4281_, 0, v___x_4278_);
v___x_4280_ = v_reuseFailAlloc_4281_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
return v___x_4280_;
}
}
}
else
{
lean_object* v_a_4283_; lean_object* v___x_4285_; uint8_t v_isShared_4286_; uint8_t v_isSharedCheck_4290_; 
v_a_4283_ = lean_ctor_get(v___x_4272_, 0);
v_isSharedCheck_4290_ = !lean_is_exclusive(v___x_4272_);
if (v_isSharedCheck_4290_ == 0)
{
v___x_4285_ = v___x_4272_;
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
else
{
lean_inc(v_a_4283_);
lean_dec(v___x_4272_);
v___x_4285_ = lean_box(0);
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
v_resetjp_4284_:
{
lean_object* v___x_4288_; 
if (v_isShared_4286_ == 0)
{
v___x_4288_ = v___x_4285_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v_a_4283_);
v___x_4288_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
return v___x_4288_;
}
}
}
}
v___jp_4291_:
{
lean_object* v___x_4292_; lean_object* v___x_4293_; 
v___x_4292_ = lean_box(2);
v___x_4293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4293_, 0, v___x_4292_);
return v___x_4293_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27___boxed(lean_object* v_x_4331_, lean_object* v_x_4332_, lean_object* v_a_4333_, lean_object* v_a_4334_, lean_object* v_a_4335_, lean_object* v_a_4336_, lean_object* v_a_4337_){
_start:
{
lean_object* v_res_4338_; 
v_res_4338_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_x_4331_, v_x_4332_, v_a_4333_, v_a_4334_, v_a_4335_, v_a_4336_);
lean_dec(v_a_4336_);
lean_dec_ref(v_a_4335_);
lean_dec(v_a_4334_);
lean_dec_ref(v_a_4333_);
lean_dec(v_x_4332_);
return v_res_4338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(lean_object* v_e_4339_, lean_object* v_n_4340_, lean_object* v_a_4341_, lean_object* v_a_4342_, lean_object* v_a_4343_, lean_object* v_a_4344_){
_start:
{
lean_object* v___x_4346_; 
v___x_4346_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition_x27(v_e_4339_, v_n_4340_, v_a_4341_, v_a_4342_, v_a_4343_, v_a_4344_);
if (lean_obj_tag(v___x_4346_) == 0)
{
lean_object* v_a_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4356_; 
v_a_4347_ = lean_ctor_get(v___x_4346_, 0);
v_isSharedCheck_4356_ = !lean_is_exclusive(v___x_4346_);
if (v_isSharedCheck_4356_ == 0)
{
v___x_4349_ = v___x_4346_;
v_isShared_4350_ = v_isSharedCheck_4356_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_a_4347_);
lean_dec(v___x_4346_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4356_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
uint8_t v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4354_; 
v___x_4351_ = l___private_Lean_Meta_InferType_0__Lean_Meta_ArrowPropResult_toLBool(v_a_4347_);
lean_dec(v_a_4347_);
v___x_4352_ = lean_box(v___x_4351_);
if (v_isShared_4350_ == 0)
{
lean_ctor_set(v___x_4349_, 0, v___x_4352_);
v___x_4354_ = v___x_4349_;
goto v_reusejp_4353_;
}
else
{
lean_object* v_reuseFailAlloc_4355_; 
v_reuseFailAlloc_4355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4355_, 0, v___x_4352_);
v___x_4354_ = v_reuseFailAlloc_4355_;
goto v_reusejp_4353_;
}
v_reusejp_4353_:
{
return v___x_4354_;
}
}
}
else
{
lean_object* v_a_4357_; lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4364_; 
v_a_4357_ = lean_ctor_get(v___x_4346_, 0);
v_isSharedCheck_4364_ = !lean_is_exclusive(v___x_4346_);
if (v_isSharedCheck_4364_ == 0)
{
v___x_4359_ = v___x_4346_;
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
else
{
lean_inc(v_a_4357_);
lean_dec(v___x_4346_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v___x_4362_; 
if (v_isShared_4360_ == 0)
{
v___x_4362_ = v___x_4359_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4363_; 
v_reuseFailAlloc_4363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4363_, 0, v_a_4357_);
v___x_4362_ = v_reuseFailAlloc_4363_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
return v___x_4362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition___boxed(lean_object* v_e_4365_, lean_object* v_n_4366_, lean_object* v_a_4367_, lean_object* v_a_4368_, lean_object* v_a_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_){
_start:
{
lean_object* v_res_4372_; 
v_res_4372_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_e_4365_, v_n_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_);
lean_dec(v_a_4370_);
lean_dec_ref(v_a_4369_);
lean_dec(v_a_4368_);
lean_dec_ref(v_a_4367_);
lean_dec(v_n_4366_);
return v_res_4372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(lean_object* v_x_4373_, lean_object* v_x_4374_, lean_object* v_a_4375_, lean_object* v_a_4376_, lean_object* v_a_4377_, lean_object* v_a_4378_){
_start:
{
switch(lean_obj_tag(v_x_4373_))
{
case 4:
{
lean_object* v_declName_4380_; lean_object* v_us_4381_; lean_object* v___x_4382_; 
v_declName_4380_ = lean_ctor_get(v_x_4373_, 0);
lean_inc(v_declName_4380_);
v_us_4381_ = lean_ctor_get(v_x_4373_, 1);
lean_inc(v_us_4381_);
lean_dec_ref_known(v_x_4373_, 2);
v___x_4382_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4380_, v_us_4381_, v_a_4375_, v_a_4376_, v_a_4377_, v_a_4378_);
if (lean_obj_tag(v___x_4382_) == 0)
{
lean_object* v_a_4383_; lean_object* v___x_4384_; 
v_a_4383_ = lean_ctor_get(v___x_4382_, 0);
lean_inc(v_a_4383_);
lean_dec_ref_known(v___x_4382_, 1);
v___x_4384_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4383_, v_x_4374_, v_a_4375_, v_a_4376_, v_a_4377_, v_a_4378_);
lean_dec(v_x_4374_);
return v___x_4384_;
}
else
{
lean_object* v_a_4385_; lean_object* v___x_4387_; uint8_t v_isShared_4388_; uint8_t v_isSharedCheck_4392_; 
lean_dec(v_x_4374_);
v_a_4385_ = lean_ctor_get(v___x_4382_, 0);
v_isSharedCheck_4392_ = !lean_is_exclusive(v___x_4382_);
if (v_isSharedCheck_4392_ == 0)
{
v___x_4387_ = v___x_4382_;
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
else
{
lean_inc(v_a_4385_);
lean_dec(v___x_4382_);
v___x_4387_ = lean_box(0);
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
v_resetjp_4386_:
{
lean_object* v___x_4390_; 
if (v_isShared_4388_ == 0)
{
v___x_4390_ = v___x_4387_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v_a_4385_);
v___x_4390_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
return v___x_4390_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_4393_; lean_object* v___x_4394_; 
v_fvarId_4393_ = lean_ctor_get(v_x_4373_, 0);
lean_inc(v_fvarId_4393_);
lean_dec_ref_known(v_x_4373_, 1);
v___x_4394_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4393_, v_a_4375_, v_a_4377_, v_a_4378_);
if (lean_obj_tag(v___x_4394_) == 0)
{
lean_object* v_a_4395_; lean_object* v___x_4396_; 
v_a_4395_ = lean_ctor_get(v___x_4394_, 0);
lean_inc(v_a_4395_);
lean_dec_ref_known(v___x_4394_, 1);
v___x_4396_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4395_, v_x_4374_, v_a_4375_, v_a_4376_, v_a_4377_, v_a_4378_);
lean_dec(v_x_4374_);
return v___x_4396_;
}
else
{
lean_object* v_a_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4404_; 
lean_dec(v_x_4374_);
v_a_4397_ = lean_ctor_get(v___x_4394_, 0);
v_isSharedCheck_4404_ = !lean_is_exclusive(v___x_4394_);
if (v_isSharedCheck_4404_ == 0)
{
v___x_4399_ = v___x_4394_;
v_isShared_4400_ = v_isSharedCheck_4404_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_a_4397_);
lean_dec(v___x_4394_);
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
case 2:
{
lean_object* v_mvarId_4405_; lean_object* v___x_4406_; 
v_mvarId_4405_ = lean_ctor_get(v_x_4373_, 0);
lean_inc(v_mvarId_4405_);
lean_dec_ref_known(v_x_4373_, 1);
v___x_4406_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4405_, v_a_4375_, v_a_4376_, v_a_4377_, v_a_4378_);
if (lean_obj_tag(v___x_4406_) == 0)
{
lean_object* v_a_4407_; lean_object* v___x_4408_; 
v_a_4407_ = lean_ctor_get(v___x_4406_, 0);
lean_inc(v_a_4407_);
lean_dec_ref_known(v___x_4406_, 1);
v___x_4408_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4407_, v_x_4374_, v_a_4375_, v_a_4376_, v_a_4377_, v_a_4378_);
lean_dec(v_x_4374_);
return v___x_4408_;
}
else
{
lean_object* v_a_4409_; lean_object* v___x_4411_; uint8_t v_isShared_4412_; uint8_t v_isSharedCheck_4416_; 
lean_dec(v_x_4374_);
v_a_4409_ = lean_ctor_get(v___x_4406_, 0);
v_isSharedCheck_4416_ = !lean_is_exclusive(v___x_4406_);
if (v_isSharedCheck_4416_ == 0)
{
v___x_4411_ = v___x_4406_;
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
else
{
lean_inc(v_a_4409_);
lean_dec(v___x_4406_);
v___x_4411_ = lean_box(0);
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
v_resetjp_4410_:
{
lean_object* v___x_4414_; 
if (v_isShared_4412_ == 0)
{
v___x_4414_ = v___x_4411_;
goto v_reusejp_4413_;
}
else
{
lean_object* v_reuseFailAlloc_4415_; 
v_reuseFailAlloc_4415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4415_, 0, v_a_4409_);
v___x_4414_ = v_reuseFailAlloc_4415_;
goto v_reusejp_4413_;
}
v_reusejp_4413_:
{
return v___x_4414_;
}
}
}
}
case 5:
{
lean_object* v_fn_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; 
v_fn_4417_ = lean_ctor_get(v_x_4373_, 0);
lean_inc_ref(v_fn_4417_);
lean_dec_ref_known(v_x_4373_, 2);
v___x_4418_ = lean_unsigned_to_nat(1u);
v___x_4419_ = lean_nat_add(v_x_4374_, v___x_4418_);
lean_dec(v_x_4374_);
v_x_4373_ = v_fn_4417_;
v_x_4374_ = v___x_4419_;
goto _start;
}
case 10:
{
lean_object* v_expr_4421_; 
v_expr_4421_ = lean_ctor_get(v_x_4373_, 1);
lean_inc_ref(v_expr_4421_);
lean_dec_ref_known(v_x_4373_, 2);
v_x_4373_ = v_expr_4421_;
goto _start;
}
case 8:
{
lean_object* v_body_4423_; 
v_body_4423_ = lean_ctor_get(v_x_4373_, 3);
lean_inc_ref(v_body_4423_);
lean_dec_ref_known(v_x_4373_, 4);
v_x_4373_ = v_body_4423_;
goto _start;
}
case 6:
{
lean_object* v_body_4425_; lean_object* v_zero_4426_; uint8_t v_isZero_4427_; 
v_body_4425_ = lean_ctor_get(v_x_4373_, 2);
lean_inc_ref(v_body_4425_);
lean_dec_ref_known(v_x_4373_, 3);
v_zero_4426_ = lean_unsigned_to_nat(0u);
v_isZero_4427_ = lean_nat_dec_eq(v_x_4374_, v_zero_4426_);
if (v_isZero_4427_ == 1)
{
lean_object* v___x_4428_; 
lean_dec(v_x_4374_);
v___x_4428_ = l_Lean_Meta_isProofQuick(v_body_4425_, v_a_4375_, v_a_4376_, v_a_4377_, v_a_4378_);
return v___x_4428_;
}
else
{
lean_object* v_one_4429_; lean_object* v_n_4430_; 
v_one_4429_ = lean_unsigned_to_nat(1u);
v_n_4430_ = lean_nat_sub(v_x_4374_, v_one_4429_);
lean_dec(v_x_4374_);
v_x_4373_ = v_body_4425_;
v_x_4374_ = v_n_4430_;
goto _start;
}
}
default: 
{
uint8_t v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; 
lean_dec(v_x_4374_);
lean_dec_ref(v_x_4373_);
v___x_4432_ = 2;
v___x_4433_ = lean_box(v___x_4432_);
v___x_4434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4434_, 0, v___x_4433_);
return v___x_4434_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick(lean_object* v_x_4435_, lean_object* v_a_4436_, lean_object* v_a_4437_, lean_object* v_a_4438_, lean_object* v_a_4439_){
_start:
{
switch(lean_obj_tag(v_x_4435_))
{
case 0:
{
uint8_t v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; 
lean_dec_ref_known(v_x_4435_, 1);
v___x_4441_ = 2;
v___x_4442_ = lean_box(v___x_4441_);
v___x_4443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4443_, 0, v___x_4442_);
return v___x_4443_;
}
case 1:
{
lean_object* v_fvarId_4444_; lean_object* v___x_4445_; 
v_fvarId_4444_ = lean_ctor_get(v_x_4435_, 0);
lean_inc(v_fvarId_4444_);
lean_dec_ref_known(v_x_4435_, 1);
v___x_4445_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4444_, v_a_4436_, v_a_4438_, v_a_4439_);
if (lean_obj_tag(v___x_4445_) == 0)
{
lean_object* v_a_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; 
v_a_4446_ = lean_ctor_get(v___x_4445_, 0);
lean_inc(v_a_4446_);
lean_dec_ref_known(v___x_4445_, 1);
v___x_4447_ = lean_unsigned_to_nat(0u);
v___x_4448_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4446_, v___x_4447_, v_a_4436_, v_a_4437_, v_a_4438_, v_a_4439_);
return v___x_4448_;
}
else
{
lean_object* v_a_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4456_; 
v_a_4449_ = lean_ctor_get(v___x_4445_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4445_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4451_ = v___x_4445_;
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_a_4449_);
lean_dec(v___x_4445_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
lean_object* v___x_4454_; 
if (v_isShared_4452_ == 0)
{
v___x_4454_ = v___x_4451_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4449_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4457_; lean_object* v___x_4458_; 
v_mvarId_4457_ = lean_ctor_get(v_x_4435_, 0);
lean_inc(v_mvarId_4457_);
lean_dec_ref_known(v_x_4435_, 1);
v___x_4458_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4457_, v_a_4436_, v_a_4437_, v_a_4438_, v_a_4439_);
if (lean_obj_tag(v___x_4458_) == 0)
{
lean_object* v_a_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; 
v_a_4459_ = lean_ctor_get(v___x_4458_, 0);
lean_inc(v_a_4459_);
lean_dec_ref_known(v___x_4458_, 1);
v___x_4460_ = lean_unsigned_to_nat(0u);
v___x_4461_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4459_, v___x_4460_, v_a_4436_, v_a_4437_, v_a_4438_, v_a_4439_);
return v___x_4461_;
}
else
{
lean_object* v_a_4462_; lean_object* v___x_4464_; uint8_t v_isShared_4465_; uint8_t v_isSharedCheck_4469_; 
v_a_4462_ = lean_ctor_get(v___x_4458_, 0);
v_isSharedCheck_4469_ = !lean_is_exclusive(v___x_4458_);
if (v_isSharedCheck_4469_ == 0)
{
v___x_4464_ = v___x_4458_;
v_isShared_4465_ = v_isSharedCheck_4469_;
goto v_resetjp_4463_;
}
else
{
lean_inc(v_a_4462_);
lean_dec(v___x_4458_);
v___x_4464_ = lean_box(0);
v_isShared_4465_ = v_isSharedCheck_4469_;
goto v_resetjp_4463_;
}
v_resetjp_4463_:
{
lean_object* v___x_4467_; 
if (v_isShared_4465_ == 0)
{
v___x_4467_ = v___x_4464_;
goto v_reusejp_4466_;
}
else
{
lean_object* v_reuseFailAlloc_4468_; 
v_reuseFailAlloc_4468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4468_, 0, v_a_4462_);
v___x_4467_ = v_reuseFailAlloc_4468_;
goto v_reusejp_4466_;
}
v_reusejp_4466_:
{
return v___x_4467_;
}
}
}
}
case 4:
{
lean_object* v_declName_4470_; lean_object* v_us_4471_; lean_object* v___x_4472_; 
v_declName_4470_ = lean_ctor_get(v_x_4435_, 0);
lean_inc(v_declName_4470_);
v_us_4471_ = lean_ctor_get(v_x_4435_, 1);
lean_inc(v_us_4471_);
lean_dec_ref_known(v_x_4435_, 2);
v___x_4472_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4470_, v_us_4471_, v_a_4436_, v_a_4437_, v_a_4438_, v_a_4439_);
if (lean_obj_tag(v___x_4472_) == 0)
{
lean_object* v_a_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; 
v_a_4473_ = lean_ctor_get(v___x_4472_, 0);
lean_inc(v_a_4473_);
lean_dec_ref_known(v___x_4472_, 1);
v___x_4474_ = lean_unsigned_to_nat(0u);
v___x_4475_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowProposition(v_a_4473_, v___x_4474_, v_a_4436_, v_a_4437_, v_a_4438_, v_a_4439_);
return v___x_4475_;
}
else
{
lean_object* v_a_4476_; lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4483_; 
v_a_4476_ = lean_ctor_get(v___x_4472_, 0);
v_isSharedCheck_4483_ = !lean_is_exclusive(v___x_4472_);
if (v_isSharedCheck_4483_ == 0)
{
v___x_4478_ = v___x_4472_;
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
else
{
lean_inc(v_a_4476_);
lean_dec(v___x_4472_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
lean_object* v___x_4481_; 
if (v_isShared_4479_ == 0)
{
v___x_4481_ = v___x_4478_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v_a_4476_);
v___x_4481_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
return v___x_4481_;
}
}
}
}
case 5:
{
lean_object* v_fn_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
v_fn_4484_ = lean_ctor_get(v_x_4435_, 0);
lean_inc_ref(v_fn_4484_);
lean_dec_ref_known(v_x_4435_, 2);
v___x_4485_ = lean_unsigned_to_nat(1u);
v___x_4486_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(v_fn_4484_, v___x_4485_, v_a_4436_, v_a_4437_, v_a_4438_, v_a_4439_);
return v___x_4486_;
}
case 6:
{
lean_object* v_body_4487_; 
v_body_4487_ = lean_ctor_get(v_x_4435_, 2);
lean_inc_ref(v_body_4487_);
lean_dec_ref_known(v_x_4435_, 3);
v_x_4435_ = v_body_4487_;
goto _start;
}
case 8:
{
lean_object* v_body_4489_; 
v_body_4489_ = lean_ctor_get(v_x_4435_, 3);
lean_inc_ref(v_body_4489_);
lean_dec_ref_known(v_x_4435_, 4);
v_x_4435_ = v_body_4489_;
goto _start;
}
case 10:
{
lean_object* v_expr_4491_; 
v_expr_4491_ = lean_ctor_get(v_x_4435_, 1);
lean_inc_ref(v_expr_4491_);
lean_dec_ref_known(v_x_4435_, 2);
v_x_4435_ = v_expr_4491_;
goto _start;
}
case 11:
{
uint8_t v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; 
lean_dec_ref_known(v_x_4435_, 3);
v___x_4493_ = 2;
v___x_4494_ = lean_box(v___x_4493_);
v___x_4495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4495_, 0, v___x_4494_);
return v___x_4495_;
}
default: 
{
uint8_t v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; 
lean_dec_ref(v_x_4435_);
v___x_4496_ = 0;
v___x_4497_ = lean_box(v___x_4496_);
v___x_4498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4498_, 0, v___x_4497_);
return v___x_4498_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProofQuick___boxed(lean_object* v_x_4499_, lean_object* v_a_4500_, lean_object* v_a_4501_, lean_object* v_a_4502_, lean_object* v_a_4503_, lean_object* v_a_4504_){
_start:
{
lean_object* v_res_4505_; 
v_res_4505_ = l_Lean_Meta_isProofQuick(v_x_4499_, v_a_4500_, v_a_4501_, v_a_4502_, v_a_4503_);
lean_dec(v_a_4503_);
lean_dec_ref(v_a_4502_);
lean_dec(v_a_4501_);
lean_dec_ref(v_a_4500_);
return v_res_4505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp___boxed(lean_object* v_x_4506_, lean_object* v_x_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_, lean_object* v_a_4510_, lean_object* v_a_4511_, lean_object* v_a_4512_){
_start:
{
lean_object* v_res_4513_; 
v_res_4513_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isProofQuickApp(v_x_4506_, v_x_4507_, v_a_4508_, v_a_4509_, v_a_4510_, v_a_4511_);
lean_dec(v_a_4511_);
lean_dec_ref(v_a_4510_);
lean_dec(v_a_4509_);
lean_dec_ref(v_a_4508_);
return v_res_4513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProof(lean_object* v_e_4514_, lean_object* v_a_4515_, lean_object* v_a_4516_, lean_object* v_a_4517_, lean_object* v_a_4518_){
_start:
{
lean_object* v___x_4520_; 
lean_inc_ref(v_e_4514_);
v___x_4520_ = l_Lean_Meta_isProofQuick(v_e_4514_, v_a_4515_, v_a_4516_, v_a_4517_, v_a_4518_);
if (lean_obj_tag(v___x_4520_) == 0)
{
lean_object* v_a_4521_; lean_object* v___x_4523_; uint8_t v_isShared_4524_; uint8_t v_isSharedCheck_4547_; 
v_a_4521_ = lean_ctor_get(v___x_4520_, 0);
v_isSharedCheck_4547_ = !lean_is_exclusive(v___x_4520_);
if (v_isSharedCheck_4547_ == 0)
{
v___x_4523_ = v___x_4520_;
v_isShared_4524_ = v_isSharedCheck_4547_;
goto v_resetjp_4522_;
}
else
{
lean_inc(v_a_4521_);
lean_dec(v___x_4520_);
v___x_4523_ = lean_box(0);
v_isShared_4524_ = v_isSharedCheck_4547_;
goto v_resetjp_4522_;
}
v_resetjp_4522_:
{
uint8_t v___x_4525_; 
v___x_4525_ = lean_unbox(v_a_4521_);
lean_dec(v_a_4521_);
switch(v___x_4525_)
{
case 0:
{
uint8_t v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4529_; 
lean_dec_ref(v_e_4514_);
v___x_4526_ = 0;
v___x_4527_ = lean_box(v___x_4526_);
if (v_isShared_4524_ == 0)
{
lean_ctor_set(v___x_4523_, 0, v___x_4527_);
v___x_4529_ = v___x_4523_;
goto v_reusejp_4528_;
}
else
{
lean_object* v_reuseFailAlloc_4530_; 
v_reuseFailAlloc_4530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4530_, 0, v___x_4527_);
v___x_4529_ = v_reuseFailAlloc_4530_;
goto v_reusejp_4528_;
}
v_reusejp_4528_:
{
return v___x_4529_;
}
}
case 1:
{
uint8_t v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4534_; 
lean_dec_ref(v_e_4514_);
v___x_4531_ = 1;
v___x_4532_ = lean_box(v___x_4531_);
if (v_isShared_4524_ == 0)
{
lean_ctor_set(v___x_4523_, 0, v___x_4532_);
v___x_4534_ = v___x_4523_;
goto v_reusejp_4533_;
}
else
{
lean_object* v_reuseFailAlloc_4535_; 
v_reuseFailAlloc_4535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4535_, 0, v___x_4532_);
v___x_4534_ = v_reuseFailAlloc_4535_;
goto v_reusejp_4533_;
}
v_reusejp_4533_:
{
return v___x_4534_;
}
}
default: 
{
lean_object* v___x_4536_; 
lean_del_object(v___x_4523_);
lean_inc(v_a_4518_);
lean_inc_ref(v_a_4517_);
lean_inc(v_a_4516_);
lean_inc_ref(v_a_4515_);
v___x_4536_ = lean_infer_type(v_e_4514_, v_a_4515_, v_a_4516_, v_a_4517_, v_a_4518_);
if (lean_obj_tag(v___x_4536_) == 0)
{
lean_object* v_a_4537_; lean_object* v___x_4538_; 
v_a_4537_ = lean_ctor_get(v___x_4536_, 0);
lean_inc(v_a_4537_);
lean_dec_ref_known(v___x_4536_, 1);
v___x_4538_ = l_Lean_Meta_isProp(v_a_4537_, v_a_4515_, v_a_4516_, v_a_4517_, v_a_4518_);
return v___x_4538_;
}
else
{
lean_object* v_a_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4546_; 
v_a_4539_ = lean_ctor_get(v___x_4536_, 0);
v_isSharedCheck_4546_ = !lean_is_exclusive(v___x_4536_);
if (v_isSharedCheck_4546_ == 0)
{
v___x_4541_ = v___x_4536_;
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
else
{
lean_inc(v_a_4539_);
lean_dec(v___x_4536_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4544_; 
if (v_isShared_4542_ == 0)
{
v___x_4544_ = v___x_4541_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v_a_4539_);
v___x_4544_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
return v___x_4544_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4548_; lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4555_; 
lean_dec_ref(v_e_4514_);
v_a_4548_ = lean_ctor_get(v___x_4520_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v___x_4520_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4550_ = v___x_4520_;
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
else
{
lean_inc(v_a_4548_);
lean_dec(v___x_4520_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v___x_4553_; 
if (v_isShared_4551_ == 0)
{
v___x_4553_ = v___x_4550_;
goto v_reusejp_4552_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v_a_4548_);
v___x_4553_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4552_;
}
v_reusejp_4552_:
{
return v___x_4553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isProof___boxed(lean_object* v_e_4556_, lean_object* v_a_4557_, lean_object* v_a_4558_, lean_object* v_a_4559_, lean_object* v_a_4560_, lean_object* v_a_4561_){
_start:
{
lean_object* v_res_4562_; 
v_res_4562_ = l_Lean_Meta_isProof(v_e_4556_, v_a_4557_, v_a_4558_, v_a_4559_, v_a_4560_);
lean_dec(v_a_4560_);
lean_dec_ref(v_a_4559_);
lean_dec(v_a_4558_);
lean_dec_ref(v_a_4557_);
return v_res_4562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(lean_object* v_x_4563_, lean_object* v_x_4564_){
_start:
{
switch(lean_obj_tag(v_x_4563_))
{
case 3:
{
lean_object* v___x_4570_; uint8_t v___x_4571_; 
v___x_4570_ = lean_unsigned_to_nat(0u);
v___x_4571_ = lean_nat_dec_eq(v_x_4564_, v___x_4570_);
lean_dec(v_x_4564_);
if (v___x_4571_ == 0)
{
goto v___jp_4566_;
}
else
{
uint8_t v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; 
v___x_4572_ = 1;
v___x_4573_ = lean_box(v___x_4572_);
v___x_4574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4574_, 0, v___x_4573_);
return v___x_4574_;
}
}
case 7:
{
lean_object* v_body_4575_; lean_object* v_zero_4576_; uint8_t v_isZero_4577_; 
v_body_4575_ = lean_ctor_get(v_x_4563_, 2);
v_zero_4576_ = lean_unsigned_to_nat(0u);
v_isZero_4577_ = lean_nat_dec_eq(v_x_4564_, v_zero_4576_);
if (v_isZero_4577_ == 1)
{
uint8_t v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4580_; 
lean_dec(v_x_4564_);
v___x_4578_ = 0;
v___x_4579_ = lean_box(v___x_4578_);
v___x_4580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4580_, 0, v___x_4579_);
return v___x_4580_;
}
else
{
lean_object* v_one_4581_; lean_object* v_n_4582_; 
v_one_4581_ = lean_unsigned_to_nat(1u);
v_n_4582_ = lean_nat_sub(v_x_4564_, v_one_4581_);
lean_dec(v_x_4564_);
v_x_4563_ = v_body_4575_;
v_x_4564_ = v_n_4582_;
goto _start;
}
}
case 8:
{
lean_object* v_body_4584_; 
v_body_4584_ = lean_ctor_get(v_x_4563_, 3);
v_x_4563_ = v_body_4584_;
goto _start;
}
case 10:
{
lean_object* v_expr_4586_; 
v_expr_4586_ = lean_ctor_get(v_x_4563_, 1);
v_x_4563_ = v_expr_4586_;
goto _start;
}
default: 
{
lean_dec(v_x_4564_);
goto v___jp_4566_;
}
}
v___jp_4566_:
{
uint8_t v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; 
v___x_4567_ = 2;
v___x_4568_ = lean_box(v___x_4567_);
v___x_4569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4569_, 0, v___x_4568_);
return v___x_4569_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg___boxed(lean_object* v_x_4588_, lean_object* v_x_4589_, lean_object* v_a_4590_){
_start:
{
lean_object* v_res_4591_; 
v_res_4591_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_x_4588_, v_x_4589_);
lean_dec_ref(v_x_4588_);
return v_res_4591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(lean_object* v_x_4592_, lean_object* v_x_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_, lean_object* v_a_4596_, lean_object* v_a_4597_){
_start:
{
lean_object* v___x_4599_; 
v___x_4599_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_x_4592_, v_x_4593_);
return v___x_4599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___boxed(lean_object* v_x_4600_, lean_object* v_x_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_){
_start:
{
lean_object* v_res_4607_; 
v_res_4607_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType(v_x_4600_, v_x_4601_, v_a_4602_, v_a_4603_, v_a_4604_, v_a_4605_);
lean_dec(v_a_4605_);
lean_dec_ref(v_a_4604_);
lean_dec(v_a_4603_);
lean_dec_ref(v_a_4602_);
lean_dec_ref(v_x_4600_);
return v_res_4607_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(lean_object* v_x_4608_, lean_object* v_x_4609_, lean_object* v_a_4610_, lean_object* v_a_4611_, lean_object* v_a_4612_, lean_object* v_a_4613_){
_start:
{
switch(lean_obj_tag(v_x_4608_))
{
case 4:
{
lean_object* v_declName_4615_; lean_object* v_us_4616_; lean_object* v___x_4617_; 
v_declName_4615_ = lean_ctor_get(v_x_4608_, 0);
lean_inc(v_declName_4615_);
v_us_4616_ = lean_ctor_get(v_x_4608_, 1);
lean_inc(v_us_4616_);
lean_dec_ref_known(v_x_4608_, 2);
v___x_4617_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4615_, v_us_4616_, v_a_4610_, v_a_4611_, v_a_4612_, v_a_4613_);
if (lean_obj_tag(v___x_4617_) == 0)
{
lean_object* v_a_4618_; lean_object* v___x_4619_; 
v_a_4618_ = lean_ctor_get(v___x_4617_, 0);
lean_inc(v_a_4618_);
lean_dec_ref_known(v___x_4617_, 1);
v___x_4619_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4618_, v_x_4609_);
lean_dec(v_a_4618_);
return v___x_4619_;
}
else
{
lean_object* v_a_4620_; lean_object* v___x_4622_; uint8_t v_isShared_4623_; uint8_t v_isSharedCheck_4627_; 
lean_dec(v_x_4609_);
v_a_4620_ = lean_ctor_get(v___x_4617_, 0);
v_isSharedCheck_4627_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4627_ == 0)
{
v___x_4622_ = v___x_4617_;
v_isShared_4623_ = v_isSharedCheck_4627_;
goto v_resetjp_4621_;
}
else
{
lean_inc(v_a_4620_);
lean_dec(v___x_4617_);
v___x_4622_ = lean_box(0);
v_isShared_4623_ = v_isSharedCheck_4627_;
goto v_resetjp_4621_;
}
v_resetjp_4621_:
{
lean_object* v___x_4625_; 
if (v_isShared_4623_ == 0)
{
v___x_4625_ = v___x_4622_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4626_; 
v_reuseFailAlloc_4626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4626_, 0, v_a_4620_);
v___x_4625_ = v_reuseFailAlloc_4626_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
return v___x_4625_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_4628_; lean_object* v___x_4629_; 
v_fvarId_4628_ = lean_ctor_get(v_x_4608_, 0);
lean_inc(v_fvarId_4628_);
lean_dec_ref_known(v_x_4608_, 1);
v___x_4629_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4628_, v_a_4610_, v_a_4612_, v_a_4613_);
if (lean_obj_tag(v___x_4629_) == 0)
{
lean_object* v_a_4630_; lean_object* v___x_4631_; 
v_a_4630_ = lean_ctor_get(v___x_4629_, 0);
lean_inc(v_a_4630_);
lean_dec_ref_known(v___x_4629_, 1);
v___x_4631_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4630_, v_x_4609_);
lean_dec(v_a_4630_);
return v___x_4631_;
}
else
{
lean_object* v_a_4632_; lean_object* v___x_4634_; uint8_t v_isShared_4635_; uint8_t v_isSharedCheck_4639_; 
lean_dec(v_x_4609_);
v_a_4632_ = lean_ctor_get(v___x_4629_, 0);
v_isSharedCheck_4639_ = !lean_is_exclusive(v___x_4629_);
if (v_isSharedCheck_4639_ == 0)
{
v___x_4634_ = v___x_4629_;
v_isShared_4635_ = v_isSharedCheck_4639_;
goto v_resetjp_4633_;
}
else
{
lean_inc(v_a_4632_);
lean_dec(v___x_4629_);
v___x_4634_ = lean_box(0);
v_isShared_4635_ = v_isSharedCheck_4639_;
goto v_resetjp_4633_;
}
v_resetjp_4633_:
{
lean_object* v___x_4637_; 
if (v_isShared_4635_ == 0)
{
v___x_4637_ = v___x_4634_;
goto v_reusejp_4636_;
}
else
{
lean_object* v_reuseFailAlloc_4638_; 
v_reuseFailAlloc_4638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4638_, 0, v_a_4632_);
v___x_4637_ = v_reuseFailAlloc_4638_;
goto v_reusejp_4636_;
}
v_reusejp_4636_:
{
return v___x_4637_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4640_; lean_object* v___x_4641_; 
v_mvarId_4640_ = lean_ctor_get(v_x_4608_, 0);
lean_inc(v_mvarId_4640_);
lean_dec_ref_known(v_x_4608_, 1);
v___x_4641_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4640_, v_a_4610_, v_a_4611_, v_a_4612_, v_a_4613_);
if (lean_obj_tag(v___x_4641_) == 0)
{
lean_object* v_a_4642_; lean_object* v___x_4643_; 
v_a_4642_ = lean_ctor_get(v___x_4641_, 0);
lean_inc(v_a_4642_);
lean_dec_ref_known(v___x_4641_, 1);
v___x_4643_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4642_, v_x_4609_);
lean_dec(v_a_4642_);
return v___x_4643_;
}
else
{
lean_object* v_a_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4651_; 
lean_dec(v_x_4609_);
v_a_4644_ = lean_ctor_get(v___x_4641_, 0);
v_isSharedCheck_4651_ = !lean_is_exclusive(v___x_4641_);
if (v_isSharedCheck_4651_ == 0)
{
v___x_4646_ = v___x_4641_;
v_isShared_4647_ = v_isSharedCheck_4651_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_a_4644_);
lean_dec(v___x_4641_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4651_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
lean_object* v___x_4649_; 
if (v_isShared_4647_ == 0)
{
v___x_4649_ = v___x_4646_;
goto v_reusejp_4648_;
}
else
{
lean_object* v_reuseFailAlloc_4650_; 
v_reuseFailAlloc_4650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4650_, 0, v_a_4644_);
v___x_4649_ = v_reuseFailAlloc_4650_;
goto v_reusejp_4648_;
}
v_reusejp_4648_:
{
return v___x_4649_;
}
}
}
}
case 5:
{
lean_object* v_fn_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; 
v_fn_4652_ = lean_ctor_get(v_x_4608_, 0);
lean_inc_ref(v_fn_4652_);
lean_dec_ref_known(v_x_4608_, 2);
v___x_4653_ = lean_unsigned_to_nat(1u);
v___x_4654_ = lean_nat_add(v_x_4609_, v___x_4653_);
lean_dec(v_x_4609_);
v_x_4608_ = v_fn_4652_;
v_x_4609_ = v___x_4654_;
goto _start;
}
case 10:
{
lean_object* v_expr_4656_; 
v_expr_4656_ = lean_ctor_get(v_x_4608_, 1);
lean_inc_ref(v_expr_4656_);
lean_dec_ref_known(v_x_4608_, 2);
v_x_4608_ = v_expr_4656_;
goto _start;
}
case 8:
{
lean_object* v_body_4658_; 
v_body_4658_ = lean_ctor_get(v_x_4608_, 3);
lean_inc_ref(v_body_4658_);
lean_dec_ref_known(v_x_4608_, 4);
v_x_4608_ = v_body_4658_;
goto _start;
}
case 6:
{
lean_object* v_body_4660_; lean_object* v_zero_4661_; uint8_t v_isZero_4662_; 
v_body_4660_ = lean_ctor_get(v_x_4608_, 2);
lean_inc_ref(v_body_4660_);
lean_dec_ref_known(v_x_4608_, 3);
v_zero_4661_ = lean_unsigned_to_nat(0u);
v_isZero_4662_ = lean_nat_dec_eq(v_x_4609_, v_zero_4661_);
if (v_isZero_4662_ == 1)
{
uint8_t v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; 
lean_dec_ref(v_body_4660_);
lean_dec(v_x_4609_);
v___x_4663_ = 0;
v___x_4664_ = lean_box(v___x_4663_);
v___x_4665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4665_, 0, v___x_4664_);
return v___x_4665_;
}
else
{
lean_object* v_one_4666_; lean_object* v_n_4667_; 
v_one_4666_ = lean_unsigned_to_nat(1u);
v_n_4667_ = lean_nat_sub(v_x_4609_, v_one_4666_);
lean_dec(v_x_4609_);
v_x_4608_ = v_body_4660_;
v_x_4609_ = v_n_4667_;
goto _start;
}
}
default: 
{
uint8_t v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
lean_dec(v_x_4609_);
lean_dec_ref(v_x_4608_);
v___x_4669_ = 2;
v___x_4670_ = lean_box(v___x_4669_);
v___x_4671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4671_, 0, v___x_4670_);
return v___x_4671_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp___boxed(lean_object* v_x_4672_, lean_object* v_x_4673_, lean_object* v_a_4674_, lean_object* v_a_4675_, lean_object* v_a_4676_, lean_object* v_a_4677_, lean_object* v_a_4678_){
_start:
{
lean_object* v_res_4679_; 
v_res_4679_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(v_x_4672_, v_x_4673_, v_a_4674_, v_a_4675_, v_a_4676_, v_a_4677_);
lean_dec(v_a_4677_);
lean_dec_ref(v_a_4676_);
lean_dec(v_a_4675_);
lean_dec_ref(v_a_4674_);
return v_res_4679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick(lean_object* v_x_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_){
_start:
{
switch(lean_obj_tag(v_x_4680_))
{
case 1:
{
lean_object* v_fvarId_4686_; lean_object* v___x_4687_; 
v_fvarId_4686_ = lean_ctor_get(v_x_4680_, 0);
lean_inc(v_fvarId_4686_);
lean_dec_ref_known(v_x_4680_, 1);
v___x_4687_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferFVarType___redArg(v_fvarId_4686_, v_a_4681_, v_a_4683_, v_a_4684_);
if (lean_obj_tag(v___x_4687_) == 0)
{
lean_object* v_a_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; 
v_a_4688_ = lean_ctor_get(v___x_4687_, 0);
lean_inc(v_a_4688_);
lean_dec_ref_known(v___x_4687_, 1);
v___x_4689_ = lean_unsigned_to_nat(0u);
v___x_4690_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4688_, v___x_4689_);
lean_dec(v_a_4688_);
return v___x_4690_;
}
else
{
lean_object* v_a_4691_; lean_object* v___x_4693_; uint8_t v_isShared_4694_; uint8_t v_isSharedCheck_4698_; 
v_a_4691_ = lean_ctor_get(v___x_4687_, 0);
v_isSharedCheck_4698_ = !lean_is_exclusive(v___x_4687_);
if (v_isSharedCheck_4698_ == 0)
{
v___x_4693_ = v___x_4687_;
v_isShared_4694_ = v_isSharedCheck_4698_;
goto v_resetjp_4692_;
}
else
{
lean_inc(v_a_4691_);
lean_dec(v___x_4687_);
v___x_4693_ = lean_box(0);
v_isShared_4694_ = v_isSharedCheck_4698_;
goto v_resetjp_4692_;
}
v_resetjp_4692_:
{
lean_object* v___x_4696_; 
if (v_isShared_4694_ == 0)
{
v___x_4696_ = v___x_4693_;
goto v_reusejp_4695_;
}
else
{
lean_object* v_reuseFailAlloc_4697_; 
v_reuseFailAlloc_4697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4697_, 0, v_a_4691_);
v___x_4696_ = v_reuseFailAlloc_4697_;
goto v_reusejp_4695_;
}
v_reusejp_4695_:
{
return v___x_4696_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_4699_; lean_object* v___x_4700_; 
v_mvarId_4699_ = lean_ctor_get(v_x_4680_, 0);
lean_inc(v_mvarId_4699_);
lean_dec_ref_known(v_x_4680_, 1);
v___x_4700_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferMVarType(v_mvarId_4699_, v_a_4681_, v_a_4682_, v_a_4683_, v_a_4684_);
if (lean_obj_tag(v___x_4700_) == 0)
{
lean_object* v_a_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; 
v_a_4701_ = lean_ctor_get(v___x_4700_, 0);
lean_inc(v_a_4701_);
lean_dec_ref_known(v___x_4700_, 1);
v___x_4702_ = lean_unsigned_to_nat(0u);
v___x_4703_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4701_, v___x_4702_);
lean_dec(v_a_4701_);
return v___x_4703_;
}
else
{
lean_object* v_a_4704_; lean_object* v___x_4706_; uint8_t v_isShared_4707_; uint8_t v_isSharedCheck_4711_; 
v_a_4704_ = lean_ctor_get(v___x_4700_, 0);
v_isSharedCheck_4711_ = !lean_is_exclusive(v___x_4700_);
if (v_isSharedCheck_4711_ == 0)
{
v___x_4706_ = v___x_4700_;
v_isShared_4707_ = v_isSharedCheck_4711_;
goto v_resetjp_4705_;
}
else
{
lean_inc(v_a_4704_);
lean_dec(v___x_4700_);
v___x_4706_ = lean_box(0);
v_isShared_4707_ = v_isSharedCheck_4711_;
goto v_resetjp_4705_;
}
v_resetjp_4705_:
{
lean_object* v___x_4709_; 
if (v_isShared_4707_ == 0)
{
v___x_4709_ = v___x_4706_;
goto v_reusejp_4708_;
}
else
{
lean_object* v_reuseFailAlloc_4710_; 
v_reuseFailAlloc_4710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4710_, 0, v_a_4704_);
v___x_4709_ = v_reuseFailAlloc_4710_;
goto v_reusejp_4708_;
}
v_reusejp_4708_:
{
return v___x_4709_;
}
}
}
}
case 3:
{
uint8_t v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; 
lean_dec_ref_known(v_x_4680_, 1);
v___x_4712_ = 1;
v___x_4713_ = lean_box(v___x_4712_);
v___x_4714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4714_, 0, v___x_4713_);
return v___x_4714_;
}
case 4:
{
lean_object* v_declName_4715_; lean_object* v_us_4716_; lean_object* v___x_4717_; 
v_declName_4715_ = lean_ctor_get(v_x_4680_, 0);
lean_inc(v_declName_4715_);
v_us_4716_ = lean_ctor_get(v_x_4680_, 1);
lean_inc(v_us_4716_);
lean_dec_ref_known(v_x_4680_, 2);
v___x_4717_ = l___private_Lean_Meta_InferType_0__Lean_Meta_inferConstType(v_declName_4715_, v_us_4716_, v_a_4681_, v_a_4682_, v_a_4683_, v_a_4684_);
if (lean_obj_tag(v___x_4717_) == 0)
{
lean_object* v_a_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; 
v_a_4718_ = lean_ctor_get(v___x_4717_, 0);
lean_inc(v_a_4718_);
lean_dec_ref_known(v___x_4717_, 1);
v___x_4719_ = lean_unsigned_to_nat(0u);
v___x_4720_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isArrowType___redArg(v_a_4718_, v___x_4719_);
lean_dec(v_a_4718_);
return v___x_4720_;
}
else
{
lean_object* v_a_4721_; lean_object* v___x_4723_; uint8_t v_isShared_4724_; uint8_t v_isSharedCheck_4728_; 
v_a_4721_ = lean_ctor_get(v___x_4717_, 0);
v_isSharedCheck_4728_ = !lean_is_exclusive(v___x_4717_);
if (v_isSharedCheck_4728_ == 0)
{
v___x_4723_ = v___x_4717_;
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
else
{
lean_inc(v_a_4721_);
lean_dec(v___x_4717_);
v___x_4723_ = lean_box(0);
v_isShared_4724_ = v_isSharedCheck_4728_;
goto v_resetjp_4722_;
}
v_resetjp_4722_:
{
lean_object* v___x_4726_; 
if (v_isShared_4724_ == 0)
{
v___x_4726_ = v___x_4723_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v_a_4721_);
v___x_4726_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
return v___x_4726_;
}
}
}
}
case 5:
{
lean_object* v_fn_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; 
v_fn_4729_ = lean_ctor_get(v_x_4680_, 0);
lean_inc_ref(v_fn_4729_);
lean_dec_ref_known(v_x_4680_, 2);
v___x_4730_ = lean_unsigned_to_nat(1u);
v___x_4731_ = l___private_Lean_Meta_InferType_0__Lean_Meta_isTypeQuickApp(v_fn_4729_, v___x_4730_, v_a_4681_, v_a_4682_, v_a_4683_, v_a_4684_);
return v___x_4731_;
}
case 6:
{
uint8_t v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; 
lean_dec_ref_known(v_x_4680_, 3);
v___x_4732_ = 0;
v___x_4733_ = lean_box(v___x_4732_);
v___x_4734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4734_, 0, v___x_4733_);
return v___x_4734_;
}
case 7:
{
uint8_t v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; 
lean_dec_ref_known(v_x_4680_, 3);
v___x_4735_ = 1;
v___x_4736_ = lean_box(v___x_4735_);
v___x_4737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4737_, 0, v___x_4736_);
return v___x_4737_;
}
case 8:
{
lean_object* v_body_4738_; 
v_body_4738_ = lean_ctor_get(v_x_4680_, 3);
lean_inc_ref(v_body_4738_);
lean_dec_ref_known(v_x_4680_, 4);
v_x_4680_ = v_body_4738_;
goto _start;
}
case 9:
{
uint8_t v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; 
lean_dec_ref_known(v_x_4680_, 1);
v___x_4740_ = 0;
v___x_4741_ = lean_box(v___x_4740_);
v___x_4742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4742_, 0, v___x_4741_);
return v___x_4742_;
}
case 10:
{
lean_object* v_expr_4743_; 
v_expr_4743_ = lean_ctor_get(v_x_4680_, 1);
lean_inc_ref(v_expr_4743_);
lean_dec_ref_known(v_x_4680_, 2);
v_x_4680_ = v_expr_4743_;
goto _start;
}
default: 
{
uint8_t v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; 
lean_dec_ref(v_x_4680_);
v___x_4745_ = 2;
v___x_4746_ = lean_box(v___x_4745_);
v___x_4747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4747_, 0, v___x_4746_);
return v___x_4747_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeQuick___boxed(lean_object* v_x_4748_, lean_object* v_a_4749_, lean_object* v_a_4750_, lean_object* v_a_4751_, lean_object* v_a_4752_, lean_object* v_a_4753_){
_start:
{
lean_object* v_res_4754_; 
v_res_4754_ = l_Lean_Meta_isTypeQuick(v_x_4748_, v_a_4749_, v_a_4750_, v_a_4751_, v_a_4752_);
lean_dec(v_a_4752_);
lean_dec_ref(v_a_4751_);
lean_dec(v_a_4750_);
lean_dec_ref(v_a_4749_);
return v_res_4754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isType(lean_object* v_e_4755_, lean_object* v_a_4756_, lean_object* v_a_4757_, lean_object* v_a_4758_, lean_object* v_a_4759_){
_start:
{
lean_object* v___x_4761_; 
lean_inc_ref(v_e_4755_);
v___x_4761_ = l_Lean_Meta_isTypeQuick(v_e_4755_, v_a_4756_, v_a_4757_, v_a_4758_, v_a_4759_);
if (lean_obj_tag(v___x_4761_) == 0)
{
lean_object* v_a_4762_; lean_object* v___x_4764_; uint8_t v_isShared_4765_; uint8_t v_isSharedCheck_4811_; 
v_a_4762_ = lean_ctor_get(v___x_4761_, 0);
v_isSharedCheck_4811_ = !lean_is_exclusive(v___x_4761_);
if (v_isSharedCheck_4811_ == 0)
{
v___x_4764_ = v___x_4761_;
v_isShared_4765_ = v_isSharedCheck_4811_;
goto v_resetjp_4763_;
}
else
{
lean_inc(v_a_4762_);
lean_dec(v___x_4761_);
v___x_4764_ = lean_box(0);
v_isShared_4765_ = v_isSharedCheck_4811_;
goto v_resetjp_4763_;
}
v_resetjp_4763_:
{
uint8_t v___x_4766_; 
v___x_4766_ = lean_unbox(v_a_4762_);
lean_dec(v_a_4762_);
switch(v___x_4766_)
{
case 0:
{
uint8_t v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4770_; 
lean_dec_ref(v_e_4755_);
v___x_4767_ = 0;
v___x_4768_ = lean_box(v___x_4767_);
if (v_isShared_4765_ == 0)
{
lean_ctor_set(v___x_4764_, 0, v___x_4768_);
v___x_4770_ = v___x_4764_;
goto v_reusejp_4769_;
}
else
{
lean_object* v_reuseFailAlloc_4771_; 
v_reuseFailAlloc_4771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4771_, 0, v___x_4768_);
v___x_4770_ = v_reuseFailAlloc_4771_;
goto v_reusejp_4769_;
}
v_reusejp_4769_:
{
return v___x_4770_;
}
}
case 1:
{
uint8_t v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4775_; 
lean_dec_ref(v_e_4755_);
v___x_4772_ = 1;
v___x_4773_ = lean_box(v___x_4772_);
if (v_isShared_4765_ == 0)
{
lean_ctor_set(v___x_4764_, 0, v___x_4773_);
v___x_4775_ = v___x_4764_;
goto v_reusejp_4774_;
}
else
{
lean_object* v_reuseFailAlloc_4776_; 
v_reuseFailAlloc_4776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4776_, 0, v___x_4773_);
v___x_4775_ = v_reuseFailAlloc_4776_;
goto v_reusejp_4774_;
}
v_reusejp_4774_:
{
return v___x_4775_;
}
}
default: 
{
lean_object* v___x_4777_; 
lean_del_object(v___x_4764_);
lean_inc(v_a_4759_);
lean_inc_ref(v_a_4758_);
lean_inc(v_a_4757_);
lean_inc_ref(v_a_4756_);
v___x_4777_ = lean_infer_type(v_e_4755_, v_a_4756_, v_a_4757_, v_a_4758_, v_a_4759_);
if (lean_obj_tag(v___x_4777_) == 0)
{
lean_object* v_a_4778_; lean_object* v___x_4779_; 
v_a_4778_ = lean_ctor_get(v___x_4777_, 0);
lean_inc(v_a_4778_);
lean_dec_ref_known(v___x_4777_, 1);
v___x_4779_ = l_Lean_Meta_whnfD(v_a_4778_, v_a_4756_, v_a_4757_, v_a_4758_, v_a_4759_);
if (lean_obj_tag(v___x_4779_) == 0)
{
lean_object* v_a_4780_; lean_object* v___x_4782_; uint8_t v_isShared_4783_; uint8_t v_isSharedCheck_4794_; 
v_a_4780_ = lean_ctor_get(v___x_4779_, 0);
v_isSharedCheck_4794_ = !lean_is_exclusive(v___x_4779_);
if (v_isSharedCheck_4794_ == 0)
{
v___x_4782_ = v___x_4779_;
v_isShared_4783_ = v_isSharedCheck_4794_;
goto v_resetjp_4781_;
}
else
{
lean_inc(v_a_4780_);
lean_dec(v___x_4779_);
v___x_4782_ = lean_box(0);
v_isShared_4783_ = v_isSharedCheck_4794_;
goto v_resetjp_4781_;
}
v_resetjp_4781_:
{
if (lean_obj_tag(v_a_4780_) == 3)
{
uint8_t v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4787_; 
lean_dec_ref_known(v_a_4780_, 1);
v___x_4784_ = 1;
v___x_4785_ = lean_box(v___x_4784_);
if (v_isShared_4783_ == 0)
{
lean_ctor_set(v___x_4782_, 0, v___x_4785_);
v___x_4787_ = v___x_4782_;
goto v_reusejp_4786_;
}
else
{
lean_object* v_reuseFailAlloc_4788_; 
v_reuseFailAlloc_4788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4788_, 0, v___x_4785_);
v___x_4787_ = v_reuseFailAlloc_4788_;
goto v_reusejp_4786_;
}
v_reusejp_4786_:
{
return v___x_4787_;
}
}
else
{
uint8_t v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4792_; 
lean_dec(v_a_4780_);
v___x_4789_ = 0;
v___x_4790_ = lean_box(v___x_4789_);
if (v_isShared_4783_ == 0)
{
lean_ctor_set(v___x_4782_, 0, v___x_4790_);
v___x_4792_ = v___x_4782_;
goto v_reusejp_4791_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v___x_4790_);
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
else
{
lean_object* v_a_4795_; lean_object* v___x_4797_; uint8_t v_isShared_4798_; uint8_t v_isSharedCheck_4802_; 
v_a_4795_ = lean_ctor_get(v___x_4779_, 0);
v_isSharedCheck_4802_ = !lean_is_exclusive(v___x_4779_);
if (v_isSharedCheck_4802_ == 0)
{
v___x_4797_ = v___x_4779_;
v_isShared_4798_ = v_isSharedCheck_4802_;
goto v_resetjp_4796_;
}
else
{
lean_inc(v_a_4795_);
lean_dec(v___x_4779_);
v___x_4797_ = lean_box(0);
v_isShared_4798_ = v_isSharedCheck_4802_;
goto v_resetjp_4796_;
}
v_resetjp_4796_:
{
lean_object* v___x_4800_; 
if (v_isShared_4798_ == 0)
{
v___x_4800_ = v___x_4797_;
goto v_reusejp_4799_;
}
else
{
lean_object* v_reuseFailAlloc_4801_; 
v_reuseFailAlloc_4801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4801_, 0, v_a_4795_);
v___x_4800_ = v_reuseFailAlloc_4801_;
goto v_reusejp_4799_;
}
v_reusejp_4799_:
{
return v___x_4800_;
}
}
}
}
else
{
lean_object* v_a_4803_; lean_object* v___x_4805_; uint8_t v_isShared_4806_; uint8_t v_isSharedCheck_4810_; 
v_a_4803_ = lean_ctor_get(v___x_4777_, 0);
v_isSharedCheck_4810_ = !lean_is_exclusive(v___x_4777_);
if (v_isSharedCheck_4810_ == 0)
{
v___x_4805_ = v___x_4777_;
v_isShared_4806_ = v_isSharedCheck_4810_;
goto v_resetjp_4804_;
}
else
{
lean_inc(v_a_4803_);
lean_dec(v___x_4777_);
v___x_4805_ = lean_box(0);
v_isShared_4806_ = v_isSharedCheck_4810_;
goto v_resetjp_4804_;
}
v_resetjp_4804_:
{
lean_object* v___x_4808_; 
if (v_isShared_4806_ == 0)
{
v___x_4808_ = v___x_4805_;
goto v_reusejp_4807_;
}
else
{
lean_object* v_reuseFailAlloc_4809_; 
v_reuseFailAlloc_4809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4809_, 0, v_a_4803_);
v___x_4808_ = v_reuseFailAlloc_4809_;
goto v_reusejp_4807_;
}
v_reusejp_4807_:
{
return v___x_4808_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4812_; lean_object* v___x_4814_; uint8_t v_isShared_4815_; uint8_t v_isSharedCheck_4819_; 
lean_dec_ref(v_e_4755_);
v_a_4812_ = lean_ctor_get(v___x_4761_, 0);
v_isSharedCheck_4819_ = !lean_is_exclusive(v___x_4761_);
if (v_isSharedCheck_4819_ == 0)
{
v___x_4814_ = v___x_4761_;
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
else
{
lean_inc(v_a_4812_);
lean_dec(v___x_4761_);
v___x_4814_ = lean_box(0);
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
v_resetjp_4813_:
{
lean_object* v___x_4817_; 
if (v_isShared_4815_ == 0)
{
v___x_4817_ = v___x_4814_;
goto v_reusejp_4816_;
}
else
{
lean_object* v_reuseFailAlloc_4818_; 
v_reuseFailAlloc_4818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4818_, 0, v_a_4812_);
v___x_4817_ = v_reuseFailAlloc_4818_;
goto v_reusejp_4816_;
}
v_reusejp_4816_:
{
return v___x_4817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isType___boxed(lean_object* v_e_4820_, lean_object* v_a_4821_, lean_object* v_a_4822_, lean_object* v_a_4823_, lean_object* v_a_4824_, lean_object* v_a_4825_){
_start:
{
lean_object* v_res_4826_; 
v_res_4826_ = l_Lean_Meta_isType(v_e_4820_, v_a_4821_, v_a_4822_, v_a_4823_, v_a_4824_);
lean_dec(v_a_4824_);
lean_dec_ref(v_a_4823_);
lean_dec(v_a_4822_);
lean_dec_ref(v_a_4821_);
return v_res_4826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick(lean_object* v_x_4827_){
_start:
{
switch(lean_obj_tag(v_x_4827_))
{
case 7:
{
lean_object* v_body_4828_; 
v_body_4828_ = lean_ctor_get(v_x_4827_, 2);
v_x_4827_ = v_body_4828_;
goto _start;
}
case 3:
{
lean_object* v_u_4830_; lean_object* v___x_4831_; 
v_u_4830_ = lean_ctor_get(v_x_4827_, 0);
lean_inc(v_u_4830_);
v___x_4831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4831_, 0, v_u_4830_);
return v___x_4831_;
}
default: 
{
lean_object* v___x_4832_; 
v___x_4832_ = lean_box(0);
return v___x_4832_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevelQuick___boxed(lean_object* v_x_4833_){
_start:
{
lean_object* v_res_4834_; 
v_res_4834_ = l_Lean_Meta_typeFormerTypeLevelQuick(v_x_4833_);
lean_dec_ref(v_x_4833_);
return v_res_4834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed(lean_object* v_xs_4835_, lean_object* v_body_4836_, lean_object* v_x_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_){
_start:
{
lean_object* v_res_4843_; 
v_res_4843_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(v_xs_4835_, v_body_4836_, v_x_4837_, v___y_4838_, v___y_4839_, v___y_4840_, v___y_4841_);
lean_dec(v___y_4841_);
lean_dec_ref(v___y_4840_);
lean_dec(v___y_4839_);
lean_dec_ref(v___y_4838_);
return v_res_4843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(lean_object* v_type_4846_, lean_object* v_xs_4847_, lean_object* v_a_4848_, lean_object* v_a_4849_, lean_object* v_a_4850_, lean_object* v_a_4851_){
_start:
{
switch(lean_obj_tag(v_type_4846_))
{
case 3:
{
lean_object* v_u_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; 
lean_dec_ref(v_xs_4847_);
v_u_4853_ = lean_ctor_get(v_type_4846_, 0);
lean_inc(v_u_4853_);
lean_dec_ref_known(v_type_4846_, 1);
v___x_4854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4854_, 0, v_u_4853_);
v___x_4855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4855_, 0, v___x_4854_);
return v___x_4855_;
}
case 7:
{
lean_object* v_binderName_4856_; lean_object* v_binderType_4857_; lean_object* v_body_4858_; uint8_t v_binderInfo_4859_; lean_object* v___f_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; 
v_binderName_4856_ = lean_ctor_get(v_type_4846_, 0);
lean_inc(v_binderName_4856_);
v_binderType_4857_ = lean_ctor_get(v_type_4846_, 1);
lean_inc_ref(v_binderType_4857_);
v_body_4858_ = lean_ctor_get(v_type_4846_, 2);
lean_inc_ref(v_body_4858_);
v_binderInfo_4859_ = lean_ctor_get_uint8(v_type_4846_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_type_4846_, 3);
lean_inc_ref(v_xs_4847_);
v___f_4860_ = lean_alloc_closure((void*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4860_, 0, v_xs_4847_);
lean_closure_set(v___f_4860_, 1, v_body_4858_);
v___x_4861_ = lean_expr_instantiate_rev(v_binderType_4857_, v_xs_4847_);
lean_dec_ref(v_xs_4847_);
lean_dec_ref(v_binderType_4857_);
v___x_4862_ = l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(v_binderName_4856_, v_binderInfo_4859_, v___x_4861_, v___f_4860_, v_a_4848_, v_a_4849_, v_a_4850_, v_a_4851_);
return v___x_4862_;
}
default: 
{
lean_object* v___x_4863_; lean_object* v___x_4864_; 
v___x_4863_ = lean_expr_instantiate_rev(v_type_4846_, v_xs_4847_);
lean_dec_ref(v_xs_4847_);
lean_dec_ref(v_type_4846_);
v___x_4864_ = l_Lean_Meta_whnfD(v___x_4863_, v_a_4848_, v_a_4849_, v_a_4850_, v_a_4851_);
if (lean_obj_tag(v___x_4864_) == 0)
{
lean_object* v_a_4865_; lean_object* v___x_4867_; uint8_t v_isShared_4868_; uint8_t v_isSharedCheck_4880_; 
v_a_4865_ = lean_ctor_get(v___x_4864_, 0);
v_isSharedCheck_4880_ = !lean_is_exclusive(v___x_4864_);
if (v_isSharedCheck_4880_ == 0)
{
v___x_4867_ = v___x_4864_;
v_isShared_4868_ = v_isSharedCheck_4880_;
goto v_resetjp_4866_;
}
else
{
lean_inc(v_a_4865_);
lean_dec(v___x_4864_);
v___x_4867_ = lean_box(0);
v_isShared_4868_ = v_isSharedCheck_4880_;
goto v_resetjp_4866_;
}
v_resetjp_4866_:
{
switch(lean_obj_tag(v_a_4865_))
{
case 3:
{
lean_object* v_u_4869_; lean_object* v___x_4870_; lean_object* v___x_4872_; 
v_u_4869_ = lean_ctor_get(v_a_4865_, 0);
lean_inc(v_u_4869_);
lean_dec_ref_known(v_a_4865_, 1);
v___x_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4870_, 0, v_u_4869_);
if (v_isShared_4868_ == 0)
{
lean_ctor_set(v___x_4867_, 0, v___x_4870_);
v___x_4872_ = v___x_4867_;
goto v_reusejp_4871_;
}
else
{
lean_object* v_reuseFailAlloc_4873_; 
v_reuseFailAlloc_4873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4873_, 0, v___x_4870_);
v___x_4872_ = v_reuseFailAlloc_4873_;
goto v_reusejp_4871_;
}
v_reusejp_4871_:
{
return v___x_4872_;
}
}
case 7:
{
lean_object* v___x_4874_; 
lean_del_object(v___x_4867_);
v___x_4874_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0));
v_type_4846_ = v_a_4865_;
v_xs_4847_ = v___x_4874_;
goto _start;
}
default: 
{
lean_object* v___x_4876_; lean_object* v___x_4878_; 
lean_dec(v_a_4865_);
v___x_4876_ = lean_box(0);
if (v_isShared_4868_ == 0)
{
lean_ctor_set(v___x_4867_, 0, v___x_4876_);
v___x_4878_ = v___x_4867_;
goto v_reusejp_4877_;
}
else
{
lean_object* v_reuseFailAlloc_4879_; 
v_reuseFailAlloc_4879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4879_, 0, v___x_4876_);
v___x_4878_ = v_reuseFailAlloc_4879_;
goto v_reusejp_4877_;
}
v_reusejp_4877_:
{
return v___x_4878_;
}
}
}
}
}
else
{
lean_object* v_a_4881_; lean_object* v___x_4883_; uint8_t v_isShared_4884_; uint8_t v_isSharedCheck_4888_; 
v_a_4881_ = lean_ctor_get(v___x_4864_, 0);
v_isSharedCheck_4888_ = !lean_is_exclusive(v___x_4864_);
if (v_isSharedCheck_4888_ == 0)
{
v___x_4883_ = v___x_4864_;
v_isShared_4884_ = v_isSharedCheck_4888_;
goto v_resetjp_4882_;
}
else
{
lean_inc(v_a_4881_);
lean_dec(v___x_4864_);
v___x_4883_ = lean_box(0);
v_isShared_4884_ = v_isSharedCheck_4888_;
goto v_resetjp_4882_;
}
v_resetjp_4882_:
{
lean_object* v___x_4886_; 
if (v_isShared_4884_ == 0)
{
v___x_4886_ = v___x_4883_;
goto v_reusejp_4885_;
}
else
{
lean_object* v_reuseFailAlloc_4887_; 
v_reuseFailAlloc_4887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4887_, 0, v_a_4881_);
v___x_4886_ = v_reuseFailAlloc_4887_;
goto v_reusejp_4885_;
}
v_reusejp_4885_:
{
return v___x_4886_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___lam__0(lean_object* v_xs_4889_, lean_object* v_body_4890_, lean_object* v_x_4891_, lean_object* v___y_4892_, lean_object* v___y_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_){
_start:
{
lean_object* v___x_4897_; lean_object* v___x_4898_; 
v___x_4897_ = lean_array_push(v_xs_4889_, v_x_4891_);
v___x_4898_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_body_4890_, v___x_4897_, v___y_4892_, v___y_4893_, v___y_4894_, v___y_4895_);
return v___x_4898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___boxed(lean_object* v_type_4899_, lean_object* v_xs_4900_, lean_object* v_a_4901_, lean_object* v_a_4902_, lean_object* v_a_4903_, lean_object* v_a_4904_, lean_object* v_a_4905_){
_start:
{
lean_object* v_res_4906_; 
v_res_4906_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_type_4899_, v_xs_4900_, v_a_4901_, v_a_4902_, v_a_4903_, v_a_4904_);
lean_dec(v_a_4904_);
lean_dec_ref(v_a_4903_);
lean_dec(v_a_4902_);
lean_dec_ref(v_a_4901_);
return v_res_4906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0(lean_object* v_a_4907_, lean_object* v_cache_4908_, lean_object* v_a_x3f_4909_){
_start:
{
lean_object* v___x_4911_; lean_object* v_mctx_4912_; lean_object* v_zetaDeltaFVarIds_4913_; lean_object* v_postponed_4914_; lean_object* v_diag_4915_; lean_object* v___x_4917_; uint8_t v_isShared_4918_; uint8_t v_isSharedCheck_4925_; 
v___x_4911_ = lean_st_ref_take(v_a_4907_);
v_mctx_4912_ = lean_ctor_get(v___x_4911_, 0);
v_zetaDeltaFVarIds_4913_ = lean_ctor_get(v___x_4911_, 2);
v_postponed_4914_ = lean_ctor_get(v___x_4911_, 3);
v_diag_4915_ = lean_ctor_get(v___x_4911_, 4);
v_isSharedCheck_4925_ = !lean_is_exclusive(v___x_4911_);
if (v_isSharedCheck_4925_ == 0)
{
lean_object* v_unused_4926_; 
v_unused_4926_ = lean_ctor_get(v___x_4911_, 1);
lean_dec(v_unused_4926_);
v___x_4917_ = v___x_4911_;
v_isShared_4918_ = v_isSharedCheck_4925_;
goto v_resetjp_4916_;
}
else
{
lean_inc(v_diag_4915_);
lean_inc(v_postponed_4914_);
lean_inc(v_zetaDeltaFVarIds_4913_);
lean_inc(v_mctx_4912_);
lean_dec(v___x_4911_);
v___x_4917_ = lean_box(0);
v_isShared_4918_ = v_isSharedCheck_4925_;
goto v_resetjp_4916_;
}
v_resetjp_4916_:
{
lean_object* v___x_4919_; lean_object* v___x_4921_; 
v___x_4919_ = lean_box(0);
if (v_isShared_4918_ == 0)
{
lean_ctor_set(v___x_4917_, 1, v_cache_4908_);
v___x_4921_ = v___x_4917_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4924_; 
v_reuseFailAlloc_4924_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4924_, 0, v_mctx_4912_);
lean_ctor_set(v_reuseFailAlloc_4924_, 1, v_cache_4908_);
lean_ctor_set(v_reuseFailAlloc_4924_, 2, v_zetaDeltaFVarIds_4913_);
lean_ctor_set(v_reuseFailAlloc_4924_, 3, v_postponed_4914_);
lean_ctor_set(v_reuseFailAlloc_4924_, 4, v_diag_4915_);
v___x_4921_ = v_reuseFailAlloc_4924_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
lean_object* v___x_4922_; lean_object* v___x_4923_; 
v___x_4922_ = lean_st_ref_put(v_a_4907_, v___x_4921_);
v___x_4923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4923_, 0, v___x_4919_);
return v___x_4923_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___lam__0___boxed(lean_object* v_a_4927_, lean_object* v_cache_4928_, lean_object* v_a_x3f_4929_, lean_object* v___y_4930_){
_start:
{
lean_object* v_res_4931_; 
v_res_4931_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v_a_4927_, v_cache_4928_, v_a_x3f_4929_);
lean_dec(v_a_x3f_4929_);
lean_dec(v_a_4927_);
return v_res_4931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object* v_type_4932_, lean_object* v_a_4933_, lean_object* v_a_4934_, lean_object* v_a_4935_, lean_object* v_a_4936_){
_start:
{
lean_object* v___x_4938_; 
v___x_4938_ = l_Lean_Meta_typeFormerTypeLevelQuick(v_type_4932_);
if (lean_obj_tag(v___x_4938_) == 0)
{
lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v_cache_4941_; lean_object* v___x_4942_; 
v___x_4939_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go___closed__0));
v___x_4940_ = lean_st_ref_get(v_a_4934_);
v_cache_4941_ = lean_ctor_get(v___x_4940_, 1);
lean_inc_ref(v_cache_4941_);
lean_dec(v___x_4940_);
v___x_4942_ = l___private_Lean_Meta_InferType_0__Lean_Meta_typeFormerTypeLevel_go(v_type_4932_, v___x_4939_, v_a_4933_, v_a_4934_, v_a_4935_, v_a_4936_);
if (lean_obj_tag(v___x_4942_) == 0)
{
lean_object* v_a_4943_; lean_object* v___x_4945_; uint8_t v_isShared_4946_; uint8_t v_isSharedCheck_4959_; 
v_a_4943_ = lean_ctor_get(v___x_4942_, 0);
v_isSharedCheck_4959_ = !lean_is_exclusive(v___x_4942_);
if (v_isSharedCheck_4959_ == 0)
{
v___x_4945_ = v___x_4942_;
v_isShared_4946_ = v_isSharedCheck_4959_;
goto v_resetjp_4944_;
}
else
{
lean_inc(v_a_4943_);
lean_dec(v___x_4942_);
v___x_4945_ = lean_box(0);
v_isShared_4946_ = v_isSharedCheck_4959_;
goto v_resetjp_4944_;
}
v_resetjp_4944_:
{
lean_object* v___x_4948_; 
lean_inc(v_a_4943_);
if (v_isShared_4946_ == 0)
{
lean_ctor_set_tag(v___x_4945_, 1);
v___x_4948_ = v___x_4945_;
goto v_reusejp_4947_;
}
else
{
lean_object* v_reuseFailAlloc_4958_; 
v_reuseFailAlloc_4958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4958_, 0, v_a_4943_);
v___x_4948_ = v_reuseFailAlloc_4958_;
goto v_reusejp_4947_;
}
v_reusejp_4947_:
{
lean_object* v___x_4949_; lean_object* v___x_4951_; uint8_t v_isShared_4952_; uint8_t v_isSharedCheck_4956_; 
v___x_4949_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v_a_4934_, v_cache_4941_, v___x_4948_);
lean_dec_ref(v___x_4948_);
v_isSharedCheck_4956_ = !lean_is_exclusive(v___x_4949_);
if (v_isSharedCheck_4956_ == 0)
{
lean_object* v_unused_4957_; 
v_unused_4957_ = lean_ctor_get(v___x_4949_, 0);
lean_dec(v_unused_4957_);
v___x_4951_ = v___x_4949_;
v_isShared_4952_ = v_isSharedCheck_4956_;
goto v_resetjp_4950_;
}
else
{
lean_dec(v___x_4949_);
v___x_4951_ = lean_box(0);
v_isShared_4952_ = v_isSharedCheck_4956_;
goto v_resetjp_4950_;
}
v_resetjp_4950_:
{
lean_object* v___x_4954_; 
if (v_isShared_4952_ == 0)
{
lean_ctor_set(v___x_4951_, 0, v_a_4943_);
v___x_4954_ = v___x_4951_;
goto v_reusejp_4953_;
}
else
{
lean_object* v_reuseFailAlloc_4955_; 
v_reuseFailAlloc_4955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4955_, 0, v_a_4943_);
v___x_4954_ = v_reuseFailAlloc_4955_;
goto v_reusejp_4953_;
}
v_reusejp_4953_:
{
return v___x_4954_;
}
}
}
}
}
else
{
lean_object* v_a_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4964_; uint8_t v_isShared_4965_; uint8_t v_isSharedCheck_4969_; 
v_a_4960_ = lean_ctor_get(v___x_4942_, 0);
lean_inc(v_a_4960_);
lean_dec_ref_known(v___x_4942_, 1);
v___x_4961_ = lean_box(0);
v___x_4962_ = l_Lean_Meta_typeFormerTypeLevel___lam__0(v_a_4934_, v_cache_4941_, v___x_4961_);
v_isSharedCheck_4969_ = !lean_is_exclusive(v___x_4962_);
if (v_isSharedCheck_4969_ == 0)
{
lean_object* v_unused_4970_; 
v_unused_4970_ = lean_ctor_get(v___x_4962_, 0);
lean_dec(v_unused_4970_);
v___x_4964_ = v___x_4962_;
v_isShared_4965_ = v_isSharedCheck_4969_;
goto v_resetjp_4963_;
}
else
{
lean_dec(v___x_4962_);
v___x_4964_ = lean_box(0);
v_isShared_4965_ = v_isSharedCheck_4969_;
goto v_resetjp_4963_;
}
v_resetjp_4963_:
{
lean_object* v___x_4967_; 
if (v_isShared_4965_ == 0)
{
lean_ctor_set_tag(v___x_4964_, 1);
lean_ctor_set(v___x_4964_, 0, v_a_4960_);
v___x_4967_ = v___x_4964_;
goto v_reusejp_4966_;
}
else
{
lean_object* v_reuseFailAlloc_4968_; 
v_reuseFailAlloc_4968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4968_, 0, v_a_4960_);
v___x_4967_ = v_reuseFailAlloc_4968_;
goto v_reusejp_4966_;
}
v_reusejp_4966_:
{
return v___x_4967_;
}
}
}
}
else
{
lean_object* v___x_4971_; 
lean_dec_ref(v_type_4932_);
v___x_4971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4971_, 0, v___x_4938_);
return v___x_4971_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_typeFormerTypeLevel___boxed(lean_object* v_type_4972_, lean_object* v_a_4973_, lean_object* v_a_4974_, lean_object* v_a_4975_, lean_object* v_a_4976_, lean_object* v_a_4977_){
_start:
{
lean_object* v_res_4978_; 
v_res_4978_ = l_Lean_Meta_typeFormerTypeLevel(v_type_4972_, v_a_4973_, v_a_4974_, v_a_4975_, v_a_4976_);
lean_dec(v_a_4976_);
lean_dec_ref(v_a_4975_);
lean_dec(v_a_4974_);
lean_dec_ref(v_a_4973_);
return v_res_4978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType(lean_object* v_type_4979_, lean_object* v_a_4980_, lean_object* v_a_4981_, lean_object* v_a_4982_, lean_object* v_a_4983_){
_start:
{
lean_object* v___x_4985_; 
v___x_4985_ = l_Lean_Meta_typeFormerTypeLevel(v_type_4979_, v_a_4980_, v_a_4981_, v_a_4982_, v_a_4983_);
if (lean_obj_tag(v___x_4985_) == 0)
{
lean_object* v_a_4986_; lean_object* v___x_4988_; uint8_t v_isShared_4989_; uint8_t v_isSharedCheck_5000_; 
v_a_4986_ = lean_ctor_get(v___x_4985_, 0);
v_isSharedCheck_5000_ = !lean_is_exclusive(v___x_4985_);
if (v_isSharedCheck_5000_ == 0)
{
v___x_4988_ = v___x_4985_;
v_isShared_4989_ = v_isSharedCheck_5000_;
goto v_resetjp_4987_;
}
else
{
lean_inc(v_a_4986_);
lean_dec(v___x_4985_);
v___x_4988_ = lean_box(0);
v_isShared_4989_ = v_isSharedCheck_5000_;
goto v_resetjp_4987_;
}
v_resetjp_4987_:
{
if (lean_obj_tag(v_a_4986_) == 0)
{
uint8_t v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4993_; 
v___x_4990_ = 0;
v___x_4991_ = lean_box(v___x_4990_);
if (v_isShared_4989_ == 0)
{
lean_ctor_set(v___x_4988_, 0, v___x_4991_);
v___x_4993_ = v___x_4988_;
goto v_reusejp_4992_;
}
else
{
lean_object* v_reuseFailAlloc_4994_; 
v_reuseFailAlloc_4994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4994_, 0, v___x_4991_);
v___x_4993_ = v_reuseFailAlloc_4994_;
goto v_reusejp_4992_;
}
v_reusejp_4992_:
{
return v___x_4993_;
}
}
else
{
uint8_t v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4998_; 
lean_dec_ref_known(v_a_4986_, 1);
v___x_4995_ = 1;
v___x_4996_ = lean_box(v___x_4995_);
if (v_isShared_4989_ == 0)
{
lean_ctor_set(v___x_4988_, 0, v___x_4996_);
v___x_4998_ = v___x_4988_;
goto v_reusejp_4997_;
}
else
{
lean_object* v_reuseFailAlloc_4999_; 
v_reuseFailAlloc_4999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4999_, 0, v___x_4996_);
v___x_4998_ = v_reuseFailAlloc_4999_;
goto v_reusejp_4997_;
}
v_reusejp_4997_:
{
return v___x_4998_;
}
}
}
}
else
{
lean_object* v_a_5001_; lean_object* v___x_5003_; uint8_t v_isShared_5004_; uint8_t v_isSharedCheck_5008_; 
v_a_5001_ = lean_ctor_get(v___x_4985_, 0);
v_isSharedCheck_5008_ = !lean_is_exclusive(v___x_4985_);
if (v_isSharedCheck_5008_ == 0)
{
v___x_5003_ = v___x_4985_;
v_isShared_5004_ = v_isSharedCheck_5008_;
goto v_resetjp_5002_;
}
else
{
lean_inc(v_a_5001_);
lean_dec(v___x_4985_);
v___x_5003_ = lean_box(0);
v_isShared_5004_ = v_isSharedCheck_5008_;
goto v_resetjp_5002_;
}
v_resetjp_5002_:
{
lean_object* v___x_5006_; 
if (v_isShared_5004_ == 0)
{
v___x_5006_ = v___x_5003_;
goto v_reusejp_5005_;
}
else
{
lean_object* v_reuseFailAlloc_5007_; 
v_reuseFailAlloc_5007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5007_, 0, v_a_5001_);
v___x_5006_ = v_reuseFailAlloc_5007_;
goto v_reusejp_5005_;
}
v_reusejp_5005_:
{
return v___x_5006_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormerType___boxed(lean_object* v_type_5009_, lean_object* v_a_5010_, lean_object* v_a_5011_, lean_object* v_a_5012_, lean_object* v_a_5013_, lean_object* v_a_5014_){
_start:
{
lean_object* v_res_5015_; 
v_res_5015_ = l_Lean_Meta_isTypeFormerType(v_type_5009_, v_a_5010_, v_a_5011_, v_a_5012_, v_a_5013_);
lean_dec(v_a_5013_);
lean_dec_ref(v_a_5012_);
lean_dec(v_a_5011_);
lean_dec_ref(v_a_5010_);
return v_res_5015_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(lean_object* v_x_5016_, lean_object* v_x_5017_){
_start:
{
if (lean_obj_tag(v_x_5016_) == 0)
{
if (lean_obj_tag(v_x_5017_) == 0)
{
uint8_t v___x_5018_; 
v___x_5018_ = 1;
return v___x_5018_;
}
else
{
uint8_t v___x_5019_; 
v___x_5019_ = 0;
return v___x_5019_;
}
}
else
{
if (lean_obj_tag(v_x_5017_) == 0)
{
uint8_t v___x_5020_; 
v___x_5020_ = 0;
return v___x_5020_;
}
else
{
lean_object* v_val_5021_; lean_object* v_val_5022_; uint8_t v___x_5023_; 
v_val_5021_ = lean_ctor_get(v_x_5016_, 0);
v_val_5022_ = lean_ctor_get(v_x_5017_, 0);
v___x_5023_ = lean_level_eq(v_val_5021_, v_val_5022_);
return v___x_5023_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0___boxed(lean_object* v_x_5024_, lean_object* v_x_5025_){
_start:
{
uint8_t v_res_5026_; lean_object* v_r_5027_; 
v_res_5026_ = l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(v_x_5024_, v_x_5025_);
lean_dec(v_x_5025_);
lean_dec(v_x_5024_);
v_r_5027_ = lean_box(v_res_5026_);
return v_r_5027_;
}
}
static lean_object* _init_l_Lean_Meta_isPropFormerType___closed__0(void){
_start:
{
lean_object* v___x_5028_; lean_object* v___x_5029_; 
v___x_5028_ = lean_obj_once(&l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0, &l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0_once, _init_l___private_Lean_Meta_InferType_0__Lean_Meta_inferProjType___closed__0);
v___x_5029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5029_, 0, v___x_5028_);
return v___x_5029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType(lean_object* v_type_5030_, lean_object* v_a_5031_, lean_object* v_a_5032_, lean_object* v_a_5033_, lean_object* v_a_5034_){
_start:
{
lean_object* v___x_5036_; 
v___x_5036_ = l_Lean_Meta_typeFormerTypeLevel(v_type_5030_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
if (lean_obj_tag(v___x_5036_) == 0)
{
lean_object* v_a_5037_; lean_object* v___x_5039_; uint8_t v_isShared_5040_; uint8_t v_isSharedCheck_5047_; 
v_a_5037_ = lean_ctor_get(v___x_5036_, 0);
v_isSharedCheck_5047_ = !lean_is_exclusive(v___x_5036_);
if (v_isSharedCheck_5047_ == 0)
{
v___x_5039_ = v___x_5036_;
v_isShared_5040_ = v_isSharedCheck_5047_;
goto v_resetjp_5038_;
}
else
{
lean_inc(v_a_5037_);
lean_dec(v___x_5036_);
v___x_5039_ = lean_box(0);
v_isShared_5040_ = v_isSharedCheck_5047_;
goto v_resetjp_5038_;
}
v_resetjp_5038_:
{
lean_object* v___x_5041_; uint8_t v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5045_; 
v___x_5041_ = lean_obj_once(&l_Lean_Meta_isPropFormerType___closed__0, &l_Lean_Meta_isPropFormerType___closed__0_once, _init_l_Lean_Meta_isPropFormerType___closed__0);
v___x_5042_ = l_Option_instBEq_beq___at___00Lean_Meta_isPropFormerType_spec__0(v_a_5037_, v___x_5041_);
lean_dec(v_a_5037_);
v___x_5043_ = lean_box(v___x_5042_);
if (v_isShared_5040_ == 0)
{
lean_ctor_set(v___x_5039_, 0, v___x_5043_);
v___x_5045_ = v___x_5039_;
goto v_reusejp_5044_;
}
else
{
lean_object* v_reuseFailAlloc_5046_; 
v_reuseFailAlloc_5046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5046_, 0, v___x_5043_);
v___x_5045_ = v_reuseFailAlloc_5046_;
goto v_reusejp_5044_;
}
v_reusejp_5044_:
{
return v___x_5045_;
}
}
}
else
{
lean_object* v_a_5048_; lean_object* v___x_5050_; uint8_t v_isShared_5051_; uint8_t v_isSharedCheck_5055_; 
v_a_5048_ = lean_ctor_get(v___x_5036_, 0);
v_isSharedCheck_5055_ = !lean_is_exclusive(v___x_5036_);
if (v_isSharedCheck_5055_ == 0)
{
v___x_5050_ = v___x_5036_;
v_isShared_5051_ = v_isSharedCheck_5055_;
goto v_resetjp_5049_;
}
else
{
lean_inc(v_a_5048_);
lean_dec(v___x_5036_);
v___x_5050_ = lean_box(0);
v_isShared_5051_ = v_isSharedCheck_5055_;
goto v_resetjp_5049_;
}
v_resetjp_5049_:
{
lean_object* v___x_5053_; 
if (v_isShared_5051_ == 0)
{
v___x_5053_ = v___x_5050_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v_a_5048_);
v___x_5053_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
return v___x_5053_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isPropFormerType___boxed(lean_object* v_type_5056_, lean_object* v_a_5057_, lean_object* v_a_5058_, lean_object* v_a_5059_, lean_object* v_a_5060_, lean_object* v_a_5061_){
_start:
{
lean_object* v_res_5062_; 
v_res_5062_ = l_Lean_Meta_isPropFormerType(v_type_5056_, v_a_5057_, v_a_5058_, v_a_5059_, v_a_5060_);
lean_dec(v_a_5060_);
lean_dec_ref(v_a_5059_);
lean_dec(v_a_5058_);
lean_dec_ref(v_a_5057_);
return v_res_5062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer(lean_object* v_e_5063_, lean_object* v_a_5064_, lean_object* v_a_5065_, lean_object* v_a_5066_, lean_object* v_a_5067_){
_start:
{
lean_object* v___x_5069_; 
lean_inc(v_a_5067_);
lean_inc_ref(v_a_5066_);
lean_inc(v_a_5065_);
lean_inc_ref(v_a_5064_);
v___x_5069_ = lean_infer_type(v_e_5063_, v_a_5064_, v_a_5065_, v_a_5066_, v_a_5067_);
if (lean_obj_tag(v___x_5069_) == 0)
{
lean_object* v_a_5070_; lean_object* v___x_5071_; 
v_a_5070_ = lean_ctor_get(v___x_5069_, 0);
lean_inc(v_a_5070_);
lean_dec_ref_known(v___x_5069_, 1);
v___x_5071_ = l_Lean_Meta_isTypeFormerType(v_a_5070_, v_a_5064_, v_a_5065_, v_a_5066_, v_a_5067_);
return v___x_5071_;
}
else
{
lean_object* v_a_5072_; lean_object* v___x_5074_; uint8_t v_isShared_5075_; uint8_t v_isSharedCheck_5079_; 
v_a_5072_ = lean_ctor_get(v___x_5069_, 0);
v_isSharedCheck_5079_ = !lean_is_exclusive(v___x_5069_);
if (v_isSharedCheck_5079_ == 0)
{
v___x_5074_ = v___x_5069_;
v_isShared_5075_ = v_isSharedCheck_5079_;
goto v_resetjp_5073_;
}
else
{
lean_inc(v_a_5072_);
lean_dec(v___x_5069_);
v___x_5074_ = lean_box(0);
v_isShared_5075_ = v_isSharedCheck_5079_;
goto v_resetjp_5073_;
}
v_resetjp_5073_:
{
lean_object* v___x_5077_; 
if (v_isShared_5075_ == 0)
{
v___x_5077_ = v___x_5074_;
goto v_reusejp_5076_;
}
else
{
lean_object* v_reuseFailAlloc_5078_; 
v_reuseFailAlloc_5078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5078_, 0, v_a_5072_);
v___x_5077_ = v_reuseFailAlloc_5078_;
goto v_reusejp_5076_;
}
v_reusejp_5076_:
{
return v___x_5077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeFormer___boxed(lean_object* v_e_5080_, lean_object* v_a_5081_, lean_object* v_a_5082_, lean_object* v_a_5083_, lean_object* v_a_5084_, lean_object* v_a_5085_){
_start:
{
lean_object* v_res_5086_; 
v_res_5086_ = l_Lean_Meta_isTypeFormer(v_e_5080_, v_a_5081_, v_a_5082_, v_a_5083_, v_a_5084_);
lean_dec(v_a_5084_);
lean_dec_ref(v_a_5083_);
lean_dec(v_a_5082_);
lean_dec_ref(v_a_5081_);
return v_res_5086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(lean_object* v_type_5087_, lean_object* v_maxFVars_x3f_5088_, lean_object* v_k_5089_, uint8_t v_cleanupAnnotations_5090_, uint8_t v_whnfType_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_){
_start:
{
lean_object* v___f_5097_; lean_object* v___x_5098_; 
v___f_5097_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_InferType_0__Lean_Meta_inferForallType_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5097_, 0, v_k_5089_);
v___x_5098_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_5087_, v_maxFVars_x3f_5088_, v___f_5097_, v_cleanupAnnotations_5090_, v_whnfType_5091_, v___y_5092_, v___y_5093_, v___y_5094_, v___y_5095_);
if (lean_obj_tag(v___x_5098_) == 0)
{
lean_object* v_a_5099_; lean_object* v___x_5101_; uint8_t v_isShared_5102_; uint8_t v_isSharedCheck_5106_; 
v_a_5099_ = lean_ctor_get(v___x_5098_, 0);
v_isSharedCheck_5106_ = !lean_is_exclusive(v___x_5098_);
if (v_isSharedCheck_5106_ == 0)
{
v___x_5101_ = v___x_5098_;
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
else
{
lean_inc(v_a_5099_);
lean_dec(v___x_5098_);
v___x_5101_ = lean_box(0);
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
v_resetjp_5100_:
{
lean_object* v___x_5104_; 
if (v_isShared_5102_ == 0)
{
v___x_5104_ = v___x_5101_;
goto v_reusejp_5103_;
}
else
{
lean_object* v_reuseFailAlloc_5105_; 
v_reuseFailAlloc_5105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5105_, 0, v_a_5099_);
v___x_5104_ = v_reuseFailAlloc_5105_;
goto v_reusejp_5103_;
}
v_reusejp_5103_:
{
return v___x_5104_;
}
}
}
else
{
lean_object* v_a_5107_; lean_object* v___x_5109_; uint8_t v_isShared_5110_; uint8_t v_isSharedCheck_5114_; 
v_a_5107_ = lean_ctor_get(v___x_5098_, 0);
v_isSharedCheck_5114_ = !lean_is_exclusive(v___x_5098_);
if (v_isSharedCheck_5114_ == 0)
{
v___x_5109_ = v___x_5098_;
v_isShared_5110_ = v_isSharedCheck_5114_;
goto v_resetjp_5108_;
}
else
{
lean_inc(v_a_5107_);
lean_dec(v___x_5098_);
v___x_5109_ = lean_box(0);
v_isShared_5110_ = v_isSharedCheck_5114_;
goto v_resetjp_5108_;
}
v_resetjp_5108_:
{
lean_object* v___x_5112_; 
if (v_isShared_5110_ == 0)
{
v___x_5112_ = v___x_5109_;
goto v_reusejp_5111_;
}
else
{
lean_object* v_reuseFailAlloc_5113_; 
v_reuseFailAlloc_5113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5113_, 0, v_a_5107_);
v___x_5112_ = v_reuseFailAlloc_5113_;
goto v_reusejp_5111_;
}
v_reusejp_5111_:
{
return v___x_5112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg___boxed(lean_object* v_type_5115_, lean_object* v_maxFVars_x3f_5116_, lean_object* v_k_5117_, lean_object* v_cleanupAnnotations_5118_, lean_object* v_whnfType_5119_, lean_object* v___y_5120_, lean_object* v___y_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_5125_; uint8_t v_whnfType_boxed_5126_; lean_object* v_res_5127_; 
v_cleanupAnnotations_boxed_5125_ = lean_unbox(v_cleanupAnnotations_5118_);
v_whnfType_boxed_5126_ = lean_unbox(v_whnfType_5119_);
v_res_5127_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5115_, v_maxFVars_x3f_5116_, v_k_5117_, v_cleanupAnnotations_boxed_5125_, v_whnfType_boxed_5126_, v___y_5120_, v___y_5121_, v___y_5122_, v___y_5123_);
lean_dec(v___y_5123_);
lean_dec_ref(v___y_5122_);
lean_dec(v___y_5121_);
lean_dec_ref(v___y_5120_);
return v_res_5127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(lean_object* v_00_u03b1_5128_, lean_object* v_type_5129_, lean_object* v_maxFVars_x3f_5130_, lean_object* v_k_5131_, uint8_t v_cleanupAnnotations_5132_, uint8_t v_whnfType_5133_, lean_object* v___y_5134_, lean_object* v___y_5135_, lean_object* v___y_5136_, lean_object* v___y_5137_){
_start:
{
lean_object* v___x_5139_; 
v___x_5139_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5129_, v_maxFVars_x3f_5130_, v_k_5131_, v_cleanupAnnotations_5132_, v_whnfType_5133_, v___y_5134_, v___y_5135_, v___y_5136_, v___y_5137_);
return v___x_5139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___boxed(lean_object* v_00_u03b1_5140_, lean_object* v_type_5141_, lean_object* v_maxFVars_x3f_5142_, lean_object* v_k_5143_, lean_object* v_cleanupAnnotations_5144_, lean_object* v_whnfType_5145_, lean_object* v___y_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_5151_; uint8_t v_whnfType_boxed_5152_; lean_object* v_res_5153_; 
v_cleanupAnnotations_boxed_5151_ = lean_unbox(v_cleanupAnnotations_5144_);
v_whnfType_boxed_5152_ = lean_unbox(v_whnfType_5145_);
v_res_5153_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4(v_00_u03b1_5140_, v_type_5141_, v_maxFVars_x3f_5142_, v_k_5143_, v_cleanupAnnotations_boxed_5151_, v_whnfType_boxed_5152_, v___y_5146_, v___y_5147_, v___y_5148_, v___y_5149_);
lean_dec(v___y_5149_);
lean_dec_ref(v___y_5148_);
lean_dec(v___y_5147_);
lean_dec_ref(v___y_5146_);
return v_res_5153_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(lean_object* v_a_5154_, lean_object* v_as_5155_, size_t v_i_5156_, size_t v_stop_5157_){
_start:
{
uint8_t v___x_5158_; 
v___x_5158_ = lean_usize_dec_eq(v_i_5156_, v_stop_5157_);
if (v___x_5158_ == 0)
{
lean_object* v___x_5159_; uint8_t v___x_5160_; 
v___x_5159_ = lean_array_uget_borrowed(v_as_5155_, v_i_5156_);
v___x_5160_ = lean_expr_eqv(v_a_5154_, v___x_5159_);
if (v___x_5160_ == 0)
{
size_t v___x_5161_; size_t v___x_5162_; 
v___x_5161_ = ((size_t)1ULL);
v___x_5162_ = lean_usize_add(v_i_5156_, v___x_5161_);
v_i_5156_ = v___x_5162_;
goto _start;
}
else
{
return v___x_5160_;
}
}
else
{
uint8_t v___x_5164_; 
v___x_5164_ = 0;
return v___x_5164_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0___boxed(lean_object* v_a_5165_, lean_object* v_as_5166_, lean_object* v_i_5167_, lean_object* v_stop_5168_){
_start:
{
size_t v_i_boxed_5169_; size_t v_stop_boxed_5170_; uint8_t v_res_5171_; lean_object* v_r_5172_; 
v_i_boxed_5169_ = lean_unbox_usize(v_i_5167_);
lean_dec(v_i_5167_);
v_stop_boxed_5170_ = lean_unbox_usize(v_stop_5168_);
lean_dec(v_stop_5168_);
v_res_5171_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(v_a_5165_, v_as_5166_, v_i_boxed_5169_, v_stop_boxed_5170_);
lean_dec_ref(v_as_5166_);
lean_dec_ref(v_a_5165_);
v_r_5172_ = lean_box(v_res_5171_);
return v_r_5172_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(lean_object* v_as_5173_, lean_object* v_a_5174_){
_start:
{
lean_object* v___x_5175_; lean_object* v___x_5176_; uint8_t v___x_5177_; 
v___x_5175_ = lean_unsigned_to_nat(0u);
v___x_5176_ = lean_array_get_size(v_as_5173_);
v___x_5177_ = lean_nat_dec_lt(v___x_5175_, v___x_5176_);
if (v___x_5177_ == 0)
{
return v___x_5177_;
}
else
{
if (v___x_5177_ == 0)
{
return v___x_5177_;
}
else
{
size_t v___x_5178_; size_t v___x_5179_; uint8_t v___x_5180_; 
v___x_5178_ = ((size_t)0ULL);
v___x_5179_ = lean_usize_of_nat(v___x_5176_);
v___x_5180_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0_spec__0(v_a_5174_, v_as_5173_, v___x_5178_, v___x_5179_);
return v___x_5180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0___boxed(lean_object* v_as_5181_, lean_object* v_a_5182_){
_start:
{
uint8_t v_res_5183_; lean_object* v_r_5184_; 
v_res_5183_ = l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(v_as_5181_, v_a_5182_);
lean_dec_ref(v_a_5182_);
lean_dec_ref(v_as_5181_);
v_r_5184_ = lean_box(v_res_5183_);
return v_r_5184_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(lean_object* v_xs_5185_, lean_object* v_e_5186_){
_start:
{
uint8_t v___x_5187_; lean_object* v_d_5189_; lean_object* v_b_5190_; 
v___x_5187_ = l_Lean_Expr_hasFVar(v_e_5186_);
if (v___x_5187_ == 0)
{
lean_dec_ref(v_e_5186_);
return v___x_5187_;
}
else
{
switch(lean_obj_tag(v_e_5186_))
{
case 7:
{
lean_object* v_binderType_5193_; lean_object* v_body_5194_; 
v_binderType_5193_ = lean_ctor_get(v_e_5186_, 1);
lean_inc_ref(v_binderType_5193_);
v_body_5194_ = lean_ctor_get(v_e_5186_, 2);
lean_inc_ref(v_body_5194_);
lean_dec_ref_known(v_e_5186_, 3);
v_d_5189_ = v_binderType_5193_;
v_b_5190_ = v_body_5194_;
goto v___jp_5188_;
}
case 6:
{
lean_object* v_binderType_5195_; lean_object* v_body_5196_; 
v_binderType_5195_ = lean_ctor_get(v_e_5186_, 1);
lean_inc_ref(v_binderType_5195_);
v_body_5196_ = lean_ctor_get(v_e_5186_, 2);
lean_inc_ref(v_body_5196_);
lean_dec_ref_known(v_e_5186_, 3);
v_d_5189_ = v_binderType_5195_;
v_b_5190_ = v_body_5196_;
goto v___jp_5188_;
}
case 10:
{
lean_object* v_expr_5197_; 
v_expr_5197_ = lean_ctor_get(v_e_5186_, 1);
lean_inc_ref(v_expr_5197_);
lean_dec_ref_known(v_e_5186_, 2);
v_e_5186_ = v_expr_5197_;
goto _start;
}
case 8:
{
lean_object* v_type_5199_; lean_object* v_value_5200_; lean_object* v_body_5201_; uint8_t v___x_5202_; 
v_type_5199_ = lean_ctor_get(v_e_5186_, 1);
lean_inc_ref(v_type_5199_);
v_value_5200_ = lean_ctor_get(v_e_5186_, 2);
lean_inc_ref(v_value_5200_);
v_body_5201_ = lean_ctor_get(v_e_5186_, 3);
lean_inc_ref(v_body_5201_);
lean_dec_ref_known(v_e_5186_, 4);
v___x_5202_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5185_, v_type_5199_);
if (v___x_5202_ == 0)
{
uint8_t v___x_5203_; 
v___x_5203_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5185_, v_value_5200_);
if (v___x_5203_ == 0)
{
v_e_5186_ = v_body_5201_;
goto _start;
}
else
{
lean_dec_ref(v_body_5201_);
return v___x_5187_;
}
}
else
{
lean_dec_ref(v_body_5201_);
lean_dec_ref(v_value_5200_);
return v___x_5187_;
}
}
case 5:
{
lean_object* v_fn_5205_; lean_object* v_arg_5206_; uint8_t v___x_5207_; 
v_fn_5205_ = lean_ctor_get(v_e_5186_, 0);
lean_inc_ref(v_fn_5205_);
v_arg_5206_ = lean_ctor_get(v_e_5186_, 1);
lean_inc_ref(v_arg_5206_);
lean_dec_ref_known(v_e_5186_, 2);
v___x_5207_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5185_, v_fn_5205_);
if (v___x_5207_ == 0)
{
v_e_5186_ = v_arg_5206_;
goto _start;
}
else
{
lean_dec_ref(v_arg_5206_);
return v___x_5187_;
}
}
case 11:
{
lean_object* v_struct_5209_; 
v_struct_5209_ = lean_ctor_get(v_e_5186_, 2);
lean_inc_ref(v_struct_5209_);
lean_dec_ref_known(v_e_5186_, 3);
v_e_5186_ = v_struct_5209_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_5211_; lean_object* v___x_5212_; uint8_t v___x_5213_; 
v_fvarId_5211_ = lean_ctor_get(v_e_5186_, 0);
lean_inc(v_fvarId_5211_);
lean_dec_ref_known(v_e_5186_, 1);
v___x_5212_ = l_Lean_Expr_fvar___override(v_fvarId_5211_);
v___x_5213_ = l_Array_contains___at___00Lean_Meta_arrowDomainsN_spec__0(v_xs_5185_, v___x_5212_);
lean_dec_ref(v___x_5212_);
return v___x_5213_;
}
default: 
{
uint8_t v___x_5214_; 
lean_dec_ref(v_e_5186_);
v___x_5214_ = 0;
return v___x_5214_;
}
}
}
v___jp_5188_:
{
uint8_t v___x_5191_; 
v___x_5191_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5185_, v_d_5189_);
if (v___x_5191_ == 0)
{
v_e_5186_ = v_b_5190_;
goto _start;
}
else
{
lean_dec_ref(v_b_5190_);
return v___x_5187_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2___boxed(lean_object* v_xs_5215_, lean_object* v_e_5216_){
_start:
{
uint8_t v_res_5217_; lean_object* v_r_5218_; 
v_res_5217_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5215_, v_e_5216_);
lean_dec_ref(v_xs_5215_);
v_r_5218_ = lean_box(v_res_5217_);
return v_r_5218_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1(void){
_start:
{
lean_object* v___x_5220_; lean_object* v___x_5221_; 
v___x_5220_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__0));
v___x_5221_ = l_Lean_stringToMessageData(v___x_5220_);
return v___x_5221_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3(void){
_start:
{
lean_object* v___x_5223_; lean_object* v___x_5224_; 
v___x_5223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__2));
v___x_5224_ = l_Lean_stringToMessageData(v___x_5223_);
return v___x_5224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(lean_object* v_xs_5225_, lean_object* v_type_5226_, lean_object* v_as_5227_, size_t v_sz_5228_, size_t v_i_5229_, lean_object* v_b_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_){
_start:
{
lean_object* v_a_5237_; uint8_t v___x_5241_; 
v___x_5241_ = lean_usize_dec_lt(v_i_5229_, v_sz_5228_);
if (v___x_5241_ == 0)
{
lean_object* v___x_5242_; 
lean_dec_ref(v_type_5226_);
v___x_5242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5242_, 0, v_b_5230_);
return v___x_5242_;
}
else
{
lean_object* v___x_5243_; lean_object* v_a_5244_; uint8_t v___x_5245_; 
v___x_5243_ = lean_box(0);
v_a_5244_ = lean_array_uget_borrowed(v_as_5227_, v_i_5229_);
lean_inc(v_a_5244_);
v___x_5245_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_arrowDomainsN_spec__2(v_xs_5225_, v_a_5244_);
if (v___x_5245_ == 0)
{
v_a_5237_ = v___x_5243_;
goto v___jp_5236_;
}
else
{
lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; 
v___x_5246_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__1);
lean_inc(v_a_5244_);
v___x_5247_ = l_Lean_MessageData_ofExpr(v_a_5244_);
v___x_5248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5248_, 0, v___x_5246_);
lean_ctor_set(v___x_5248_, 1, v___x_5247_);
v___x_5249_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___closed__3);
v___x_5250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5250_, 0, v___x_5248_);
lean_ctor_set(v___x_5250_, 1, v___x_5249_);
lean_inc_ref(v_type_5226_);
v___x_5251_ = l_Lean_MessageData_ofExpr(v_type_5226_);
v___x_5252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5252_, 0, v___x_5250_);
lean_ctor_set(v___x_5252_, 1, v___x_5251_);
v___x_5253_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_5252_, v___y_5231_, v___y_5232_, v___y_5233_, v___y_5234_);
if (lean_obj_tag(v___x_5253_) == 0)
{
lean_dec_ref_known(v___x_5253_, 1);
v_a_5237_ = v___x_5243_;
goto v___jp_5236_;
}
else
{
lean_dec_ref(v_type_5226_);
return v___x_5253_;
}
}
}
v___jp_5236_:
{
size_t v___x_5238_; size_t v___x_5239_; 
v___x_5238_ = ((size_t)1ULL);
v___x_5239_ = lean_usize_add(v_i_5229_, v___x_5238_);
v_i_5229_ = v___x_5239_;
v_b_5230_ = v_a_5237_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3___boxed(lean_object* v_xs_5254_, lean_object* v_type_5255_, lean_object* v_as_5256_, lean_object* v_sz_5257_, lean_object* v_i_5258_, lean_object* v_b_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_){
_start:
{
size_t v_sz_boxed_5265_; size_t v_i_boxed_5266_; lean_object* v_res_5267_; 
v_sz_boxed_5265_ = lean_unbox_usize(v_sz_5257_);
lean_dec(v_sz_5257_);
v_i_boxed_5266_ = lean_unbox_usize(v_i_5258_);
lean_dec(v_i_5258_);
v_res_5267_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(v_xs_5254_, v_type_5255_, v_as_5256_, v_sz_boxed_5265_, v_i_boxed_5266_, v_b_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_);
lean_dec(v___y_5263_);
lean_dec_ref(v___y_5262_);
lean_dec(v___y_5261_);
lean_dec_ref(v___y_5260_);
lean_dec_ref(v_as_5256_);
lean_dec_ref(v_xs_5254_);
return v_res_5267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(size_t v_sz_5268_, size_t v_i_5269_, lean_object* v_bs_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_){
_start:
{
uint8_t v___x_5276_; 
v___x_5276_ = lean_usize_dec_lt(v_i_5269_, v_sz_5268_);
if (v___x_5276_ == 0)
{
lean_object* v___x_5277_; lean_object* v___x_5278_; 
v___x_5277_ = l_unsafeCast___redArg(v_bs_5270_);
lean_dec_ref(v_bs_5270_);
v___x_5278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5278_, 0, v___x_5277_);
return v___x_5278_;
}
else
{
lean_object* v_v_5279_; lean_object* v___x_5280_; lean_object* v_bs_x27_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; 
v_v_5279_ = lean_array_uget(v_bs_5270_, v_i_5269_);
v___x_5280_ = lean_unsigned_to_nat(0u);
v_bs_x27_5281_ = lean_array_uset(v_bs_5270_, v_i_5269_, v___x_5280_);
v___x_5282_ = l_unsafeCast___redArg(v_v_5279_);
lean_dec(v_v_5279_);
lean_inc(v___y_5274_);
lean_inc_ref(v___y_5273_);
lean_inc(v___y_5272_);
lean_inc_ref(v___y_5271_);
v___x_5283_ = lean_infer_type(v___x_5282_, v___y_5271_, v___y_5272_, v___y_5273_, v___y_5274_);
if (lean_obj_tag(v___x_5283_) == 0)
{
lean_object* v_a_5284_; size_t v___x_5285_; size_t v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; 
v_a_5284_ = lean_ctor_get(v___x_5283_, 0);
lean_inc(v_a_5284_);
lean_dec_ref_known(v___x_5283_, 1);
v___x_5285_ = ((size_t)1ULL);
v___x_5286_ = lean_usize_add(v_i_5269_, v___x_5285_);
v___x_5287_ = l_unsafeCast___redArg(v_a_5284_);
lean_dec(v_a_5284_);
v___x_5288_ = lean_array_uset(v_bs_x27_5281_, v_i_5269_, v___x_5287_);
v_i_5269_ = v___x_5286_;
v_bs_5270_ = v___x_5288_;
goto _start;
}
else
{
lean_object* v_a_5290_; lean_object* v___x_5292_; uint8_t v_isShared_5293_; uint8_t v_isSharedCheck_5297_; 
lean_dec_ref(v_bs_x27_5281_);
v_a_5290_ = lean_ctor_get(v___x_5283_, 0);
v_isSharedCheck_5297_ = !lean_is_exclusive(v___x_5283_);
if (v_isSharedCheck_5297_ == 0)
{
v___x_5292_ = v___x_5283_;
v_isShared_5293_ = v_isSharedCheck_5297_;
goto v_resetjp_5291_;
}
else
{
lean_inc(v_a_5290_);
lean_dec(v___x_5283_);
v___x_5292_ = lean_box(0);
v_isShared_5293_ = v_isSharedCheck_5297_;
goto v_resetjp_5291_;
}
v_resetjp_5291_:
{
lean_object* v___x_5295_; 
if (v_isShared_5293_ == 0)
{
v___x_5295_ = v___x_5292_;
goto v_reusejp_5294_;
}
else
{
lean_object* v_reuseFailAlloc_5296_; 
v_reuseFailAlloc_5296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5296_, 0, v_a_5290_);
v___x_5295_ = v_reuseFailAlloc_5296_;
goto v_reusejp_5294_;
}
v_reusejp_5294_:
{
return v___x_5295_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1___boxed(lean_object* v_sz_5298_, lean_object* v_i_5299_, lean_object* v_bs_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_, lean_object* v___y_5304_, lean_object* v___y_5305_){
_start:
{
size_t v_sz_boxed_5306_; size_t v_i_boxed_5307_; lean_object* v_res_5308_; 
v_sz_boxed_5306_ = lean_unbox_usize(v_sz_5298_);
lean_dec(v_sz_5298_);
v_i_boxed_5307_ = lean_unbox_usize(v_i_5299_);
lean_dec(v_i_5299_);
v_res_5308_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1(v_sz_boxed_5306_, v_i_boxed_5307_, v_bs_5300_, v___y_5301_, v___y_5302_, v___y_5303_, v___y_5304_);
lean_dec(v___y_5304_);
lean_dec_ref(v___y_5303_);
lean_dec(v___y_5302_);
lean_dec_ref(v___y_5301_);
return v_res_5308_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5310_; lean_object* v___x_5311_; 
v___x_5310_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__0));
v___x_5311_ = l_Lean_stringToMessageData(v___x_5310_);
return v___x_5311_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5313_; lean_object* v___x_5314_; 
v___x_5313_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__2));
v___x_5314_ = l_Lean_stringToMessageData(v___x_5313_);
return v___x_5314_;
}
}
static lean_object* _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__5(void){
_start:
{
lean_object* v___x_5316_; lean_object* v___x_5317_; 
v___x_5316_ = ((lean_object*)(l_Lean_Meta_arrowDomainsN___lam__0___closed__4));
v___x_5317_ = l_Lean_stringToMessageData(v___x_5316_);
return v___x_5317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0(lean_object* v_type_5318_, lean_object* v_n_5319_, lean_object* v_xs_5320_, lean_object* v_x_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_){
_start:
{
lean_object* v___x_5356_; uint8_t v___x_5357_; 
v___x_5356_ = lean_array_get_size(v_xs_5320_);
v___x_5357_ = lean_nat_dec_eq(v___x_5356_, v_n_5319_);
if (v___x_5357_ == 0)
{
lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v_a_5370_; lean_object* v___x_5372_; uint8_t v_isShared_5373_; uint8_t v_isSharedCheck_5377_; 
v___x_5358_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__1, &l_Lean_Meta_arrowDomainsN___lam__0___closed__1_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__1);
v___x_5359_ = l_Lean_MessageData_ofExpr(v_type_5318_);
v___x_5360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5360_, 0, v___x_5358_);
lean_ctor_set(v___x_5360_, 1, v___x_5359_);
v___x_5361_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__3, &l_Lean_Meta_arrowDomainsN___lam__0___closed__3_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__3);
v___x_5362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5362_, 0, v___x_5360_);
lean_ctor_set(v___x_5362_, 1, v___x_5361_);
v___x_5363_ = l_Nat_reprFast(v_n_5319_);
v___x_5364_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5364_, 0, v___x_5363_);
v___x_5365_ = l_Lean_MessageData_ofFormat(v___x_5364_);
v___x_5366_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5366_, 0, v___x_5362_);
lean_ctor_set(v___x_5366_, 1, v___x_5365_);
v___x_5367_ = lean_obj_once(&l_Lean_Meta_arrowDomainsN___lam__0___closed__5, &l_Lean_Meta_arrowDomainsN___lam__0___closed__5_once, _init_l_Lean_Meta_arrowDomainsN___lam__0___closed__5);
v___x_5368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5368_, 0, v___x_5366_);
lean_ctor_set(v___x_5368_, 1, v___x_5367_);
v___x_5369_ = l_Lean_throwError___at___00Lean_Meta_throwFunctionExpected_spec__0___redArg(v___x_5368_, v___y_5322_, v___y_5323_, v___y_5324_, v___y_5325_);
v_a_5370_ = lean_ctor_get(v___x_5369_, 0);
v_isSharedCheck_5377_ = !lean_is_exclusive(v___x_5369_);
if (v_isSharedCheck_5377_ == 0)
{
v___x_5372_ = v___x_5369_;
v_isShared_5373_ = v_isSharedCheck_5377_;
goto v_resetjp_5371_;
}
else
{
lean_inc(v_a_5370_);
lean_dec(v___x_5369_);
v___x_5372_ = lean_box(0);
v_isShared_5373_ = v_isSharedCheck_5377_;
goto v_resetjp_5371_;
}
v_resetjp_5371_:
{
lean_object* v___x_5375_; 
if (v_isShared_5373_ == 0)
{
v___x_5375_ = v___x_5372_;
goto v_reusejp_5374_;
}
else
{
lean_object* v_reuseFailAlloc_5376_; 
v_reuseFailAlloc_5376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5376_, 0, v_a_5370_);
v___x_5375_ = v_reuseFailAlloc_5376_;
goto v_reusejp_5374_;
}
v_reusejp_5374_:
{
return v___x_5375_;
}
}
}
else
{
lean_dec(v_n_5319_);
goto v___jp_5327_;
}
v___jp_5327_:
{
size_t v_sz_5328_; size_t v___x_5329_; lean_object* v___x_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; lean_object* v___x_2052__overap_5334_; lean_object* v___x_5335_; 
v_sz_5328_ = lean_array_size(v_xs_5320_);
v___x_5329_ = ((size_t)0ULL);
v___x_5330_ = l_unsafeCast___redArg(v_xs_5320_);
v___x_5331_ = lean_box_usize(v_sz_5328_);
v___x_5332_ = ((lean_object*)(l___private_Lean_Meta_InferType_0__Lean_Expr_instantiateBetaRevRange_visit___boxed__const__1));
v___x_5333_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_arrowDomainsN_spec__1___boxed), 8, 3);
lean_closure_set(v___x_5333_, 0, v___x_5331_);
lean_closure_set(v___x_5333_, 1, v___x_5332_);
lean_closure_set(v___x_5333_, 2, v___x_5330_);
v___x_2052__overap_5334_ = l_unsafeCast___redArg(v___x_5333_);
lean_dec_ref(v___x_5333_);
lean_inc(v___y_5325_);
lean_inc_ref(v___y_5324_);
lean_inc(v___y_5323_);
lean_inc_ref(v___y_5322_);
v___x_5335_ = lean_apply_5(v___x_2052__overap_5334_, v___y_5322_, v___y_5323_, v___y_5324_, v___y_5325_, lean_box(0));
if (lean_obj_tag(v___x_5335_) == 0)
{
lean_object* v_a_5336_; lean_object* v___x_5337_; size_t v_sz_5338_; lean_object* v___x_5339_; 
v_a_5336_ = lean_ctor_get(v___x_5335_, 0);
lean_inc(v_a_5336_);
lean_dec_ref_known(v___x_5335_, 1);
v___x_5337_ = lean_box(0);
v_sz_5338_ = lean_array_size(v_a_5336_);
v___x_5339_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_arrowDomainsN_spec__3(v_xs_5320_, v_type_5318_, v_a_5336_, v_sz_5338_, v___x_5329_, v___x_5337_, v___y_5322_, v___y_5323_, v___y_5324_, v___y_5325_);
if (lean_obj_tag(v___x_5339_) == 0)
{
lean_object* v___x_5341_; uint8_t v_isShared_5342_; uint8_t v_isSharedCheck_5346_; 
v_isSharedCheck_5346_ = !lean_is_exclusive(v___x_5339_);
if (v_isSharedCheck_5346_ == 0)
{
lean_object* v_unused_5347_; 
v_unused_5347_ = lean_ctor_get(v___x_5339_, 0);
lean_dec(v_unused_5347_);
v___x_5341_ = v___x_5339_;
v_isShared_5342_ = v_isSharedCheck_5346_;
goto v_resetjp_5340_;
}
else
{
lean_dec(v___x_5339_);
v___x_5341_ = lean_box(0);
v_isShared_5342_ = v_isSharedCheck_5346_;
goto v_resetjp_5340_;
}
v_resetjp_5340_:
{
lean_object* v___x_5344_; 
if (v_isShared_5342_ == 0)
{
lean_ctor_set(v___x_5341_, 0, v_a_5336_);
v___x_5344_ = v___x_5341_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5345_; 
v_reuseFailAlloc_5345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5345_, 0, v_a_5336_);
v___x_5344_ = v_reuseFailAlloc_5345_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
return v___x_5344_;
}
}
}
else
{
lean_object* v_a_5348_; lean_object* v___x_5350_; uint8_t v_isShared_5351_; uint8_t v_isSharedCheck_5355_; 
lean_dec(v_a_5336_);
v_a_5348_ = lean_ctor_get(v___x_5339_, 0);
v_isSharedCheck_5355_ = !lean_is_exclusive(v___x_5339_);
if (v_isSharedCheck_5355_ == 0)
{
v___x_5350_ = v___x_5339_;
v_isShared_5351_ = v_isSharedCheck_5355_;
goto v_resetjp_5349_;
}
else
{
lean_inc(v_a_5348_);
lean_dec(v___x_5339_);
v___x_5350_ = lean_box(0);
v_isShared_5351_ = v_isSharedCheck_5355_;
goto v_resetjp_5349_;
}
v_resetjp_5349_:
{
lean_object* v___x_5353_; 
if (v_isShared_5351_ == 0)
{
v___x_5353_ = v___x_5350_;
goto v_reusejp_5352_;
}
else
{
lean_object* v_reuseFailAlloc_5354_; 
v_reuseFailAlloc_5354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5354_, 0, v_a_5348_);
v___x_5353_ = v_reuseFailAlloc_5354_;
goto v_reusejp_5352_;
}
v_reusejp_5352_:
{
return v___x_5353_;
}
}
}
}
else
{
lean_dec_ref(v_type_5318_);
return v___x_5335_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___lam__0___boxed(lean_object* v_type_5378_, lean_object* v_n_5379_, lean_object* v_xs_5380_, lean_object* v_x_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_){
_start:
{
lean_object* v_res_5387_; 
v_res_5387_ = l_Lean_Meta_arrowDomainsN___lam__0(v_type_5378_, v_n_5379_, v_xs_5380_, v_x_5381_, v___y_5382_, v___y_5383_, v___y_5384_, v___y_5385_);
lean_dec(v___y_5385_);
lean_dec_ref(v___y_5384_);
lean_dec(v___y_5383_);
lean_dec_ref(v___y_5382_);
lean_dec_ref(v_x_5381_);
lean_dec_ref(v_xs_5380_);
return v_res_5387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN(lean_object* v_n_5388_, lean_object* v_type_5389_, lean_object* v_a_5390_, lean_object* v_a_5391_, lean_object* v_a_5392_, lean_object* v_a_5393_){
_start:
{
lean_object* v___f_5395_; lean_object* v___x_5396_; uint8_t v___x_5397_; lean_object* v___x_5398_; 
lean_inc(v_n_5388_);
lean_inc_ref(v_type_5389_);
v___f_5395_ = lean_alloc_closure((void*)(l_Lean_Meta_arrowDomainsN___lam__0___boxed), 9, 2);
lean_closure_set(v___f_5395_, 0, v_type_5389_);
lean_closure_set(v___f_5395_, 1, v_n_5388_);
v___x_5396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5396_, 0, v_n_5388_);
v___x_5397_ = 0;
v___x_5398_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_arrowDomainsN_spec__4___redArg(v_type_5389_, v___x_5396_, v___f_5395_, v___x_5397_, v___x_5397_, v_a_5390_, v_a_5391_, v_a_5392_, v_a_5393_);
return v___x_5398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_arrowDomainsN___boxed(lean_object* v_n_5399_, lean_object* v_type_5400_, lean_object* v_a_5401_, lean_object* v_a_5402_, lean_object* v_a_5403_, lean_object* v_a_5404_, lean_object* v_a_5405_){
_start:
{
lean_object* v_res_5406_; 
v_res_5406_ = l_Lean_Meta_arrowDomainsN(v_n_5399_, v_type_5400_, v_a_5401_, v_a_5402_, v_a_5403_, v_a_5404_);
lean_dec(v_a_5404_);
lean_dec_ref(v_a_5403_);
lean_dec(v_a_5402_);
lean_dec_ref(v_a_5401_);
return v_res_5406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object* v_n_5407_, lean_object* v_e_5408_, lean_object* v_a_5409_, lean_object* v_a_5410_, lean_object* v_a_5411_, lean_object* v_a_5412_){
_start:
{
lean_object* v___x_5414_; 
lean_inc(v_a_5412_);
lean_inc_ref(v_a_5411_);
lean_inc(v_a_5410_);
lean_inc_ref(v_a_5409_);
v___x_5414_ = lean_infer_type(v_e_5408_, v_a_5409_, v_a_5410_, v_a_5411_, v_a_5412_);
if (lean_obj_tag(v___x_5414_) == 0)
{
lean_object* v_a_5415_; lean_object* v___x_5416_; 
v_a_5415_ = lean_ctor_get(v___x_5414_, 0);
lean_inc(v_a_5415_);
lean_dec_ref_known(v___x_5414_, 1);
v___x_5416_ = l_Lean_Meta_arrowDomainsN(v_n_5407_, v_a_5415_, v_a_5409_, v_a_5410_, v_a_5411_, v_a_5412_);
return v___x_5416_;
}
else
{
lean_object* v_a_5417_; lean_object* v___x_5419_; uint8_t v_isShared_5420_; uint8_t v_isSharedCheck_5424_; 
lean_dec(v_n_5407_);
v_a_5417_ = lean_ctor_get(v___x_5414_, 0);
v_isSharedCheck_5424_ = !lean_is_exclusive(v___x_5414_);
if (v_isSharedCheck_5424_ == 0)
{
v___x_5419_ = v___x_5414_;
v_isShared_5420_ = v_isSharedCheck_5424_;
goto v_resetjp_5418_;
}
else
{
lean_inc(v_a_5417_);
lean_dec(v___x_5414_);
v___x_5419_ = lean_box(0);
v_isShared_5420_ = v_isSharedCheck_5424_;
goto v_resetjp_5418_;
}
v_resetjp_5418_:
{
lean_object* v___x_5422_; 
if (v_isShared_5420_ == 0)
{
v___x_5422_ = v___x_5419_;
goto v_reusejp_5421_;
}
else
{
lean_object* v_reuseFailAlloc_5423_; 
v_reuseFailAlloc_5423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5423_, 0, v_a_5417_);
v___x_5422_ = v_reuseFailAlloc_5423_;
goto v_reusejp_5421_;
}
v_reusejp_5421_:
{
return v___x_5422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object* v_n_5425_, lean_object* v_e_5426_, lean_object* v_a_5427_, lean_object* v_a_5428_, lean_object* v_a_5429_, lean_object* v_a_5430_, lean_object* v_a_5431_){
_start:
{
lean_object* v_res_5432_; 
v_res_5432_ = l_Lean_Meta_inferArgumentTypesN(v_n_5425_, v_e_5426_, v_a_5427_, v_a_5428_, v_a_5429_, v_a_5430_);
lean_dec(v_a_5430_);
lean_dec_ref(v_a_5429_);
lean_dec(v_a_5428_);
lean_dec_ref(v_a_5427_);
return v_res_5432_;
}
}
lean_object* runtime_initialize_Lean_Data_LBool(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_LBool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_InferType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_LBool(uint8_t builtin);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_InferType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_LBool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_InferType(builtin);
}
#ifdef __cplusplus
}
#endif

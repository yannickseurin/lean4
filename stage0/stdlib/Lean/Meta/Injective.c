// Lean compiler output
// Module: Lean.Meta.Injective
// Imports: public import Lean.Meta.Basic import Lean.Meta.Tactic.Refl import Lean.Meta.Tactic.Assumption import Lean.Meta.SameCtorUtils import Init.Omega import Lean.Meta.Tactic.Injection import Lean.Meta.Tactic.Simp.Attr
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_occursOrInType(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_introSubstEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_applyN(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_injection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_splitAndCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assumptionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
extern lean_object* l_Lean_Meta_simpExtension;
lean_object* l_Lean_Meta_addSimpTheorem(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_mkArrowN(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Lean_MVarId_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_registerReservedNameAction(lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_elimOptParam___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optParam"};
static const lean_object* l_Lean_Meta_elimOptParam___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_elimOptParam___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 160, 223, 165, 16, 51, 54, 209)}};
static const lean_object* l_Lean_Meta_elimOptParam___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Meta_elimOptParam___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_elimOptParam___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__1;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4___boxed__const__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_elimOptParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_elimOptParam___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_elimOptParam___closed__0 = (const lean_object*)&l_Lean_Meta_elimOptParam___closed__0_value;
static const lean_closure_object l_Lean_Meta_elimOptParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_elimOptParam___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_elimOptParam___closed__1 = (const lean_object*)&l_Lean_Meta_elimOptParam___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unexpected constructor type for `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "failed to prove injectivity theorem for constructor `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "`, use 'set_option genInjectivity false' to disable the generation"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.Injective"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "_private.Lean.Meta.Injective.0.Lean.Meta.solveEqOfCtorEq"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "injective"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5_value),LEAN_SCALAR_PTR_LITERAL(39, 126, 11, 127, 131, 182, 22, 10)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "solving injectivity goal for "};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " with hypothesis "};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " at\n"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inj"};
static const lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0 = (const lean_object*)&l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(38, 11, 58, 56, 192, 58, 162, 195)}};
static const lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1 = (const lean_object*)&l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "generating `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "type: "};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "injEq"};
static const lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0 = (const lean_object*)&l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(139, 235, 155, 31, 77, 126, 235, 172)}};
static const lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1 = (const lean_object*)&l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "unexpected number of goals after applying `Lean.and_imp`"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0___boxed, .m_arity = 8, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "injEq_helper"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(167, 111, 180, 146, 132, 58, 155, 57)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "unexpected number of subgoals when proving injective theorem for constructor `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "propIntro"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(189, 136, 38, 165, 207, 169, 133, 34)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "genInjectivity"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(56, 68, 112, 222, 169, 79, 62, 37)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 169, .m_capacity = 169, .m_length = 168, .m_data = "generate injectivity theorems for inductive datatype constructors. Temporarily (for bootstrapping reasons) also controls the generation of the\n    `ctorIdx` definition."};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 17, 232, 138, 187, 170, 36, 13)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_genInjectivity;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__0;
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__1;
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__2;
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__3;
static const lean_array_object l_Lean_Meta_mkInjectiveTheorems___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__4 = (const lean_object*)&l_Lean_Meta_mkInjectiveTheorems___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Injective"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "failed to generate heterogeneous injectivity theorem for `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "noConfusion"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hinj"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkHInjectiveTheoremNameFor(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1));
v___x_6_ = l_Lean_mkConst(v___x_5_, v___x_4_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(lean_object* v_a_7_, lean_object* v_b_8_){
_start:
{
lean_object* v_array_9_; lean_object* v_start_10_; lean_object* v_stop_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_25_; 
v_array_9_ = lean_ctor_get(v_a_7_, 0);
v_start_10_ = lean_ctor_get(v_a_7_, 1);
v_stop_11_ = lean_ctor_get(v_a_7_, 2);
v_isSharedCheck_25_ = !lean_is_exclusive(v_a_7_);
if (v_isSharedCheck_25_ == 0)
{
v___x_13_ = v_a_7_;
v_isShared_14_ = v_isSharedCheck_25_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_stop_11_);
lean_inc(v_start_10_);
lean_inc(v_array_9_);
lean_dec(v_a_7_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_25_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
uint8_t v___x_15_; 
v___x_15_ = lean_nat_dec_lt(v_start_10_, v_stop_11_);
if (v___x_15_ == 0)
{
lean_del_object(v___x_13_);
lean_dec(v_stop_11_);
lean_dec(v_start_10_);
lean_dec_ref(v_array_9_);
return v_b_8_;
}
else
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_19_; 
v___x_16_ = lean_unsigned_to_nat(1u);
v___x_17_ = lean_nat_add(v_start_10_, v___x_16_);
lean_inc_ref(v_array_9_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 1, v___x_17_);
v___x_19_ = v___x_13_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_array_9_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v___x_17_);
lean_ctor_set(v_reuseFailAlloc_24_, 2, v_stop_11_);
v___x_19_ = v_reuseFailAlloc_24_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = lean_array_fget(v_array_9_, v_start_10_);
lean_dec(v_start_10_);
lean_dec_ref(v_array_9_);
v___x_21_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2);
v___x_22_ = l_Lean_mkAppB(v___x_21_, v___x_20_, v_b_8_);
v_a_7_ = v___x_19_;
v_b_8_ = v___x_22_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(lean_object* v_args_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_27_ = lean_array_get_size(v_args_26_);
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lean_nat_dec_eq(v___x_27_, v___x_28_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v_result_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_30_ = l_Lean_instInhabitedExpr;
v___x_31_ = lean_unsigned_to_nat(1u);
v___x_32_ = lean_nat_sub(v___x_27_, v___x_31_);
v_result_33_ = lean_array_get(v___x_30_, v_args_26_, v___x_32_);
lean_dec(v___x_32_);
v___x_34_ = l_Array_reverse___redArg(v_args_26_);
v___x_35_ = lean_array_get_size(v___x_34_);
v___x_36_ = l_Array_toSubarray___redArg(v___x_34_, v___x_31_, v___x_35_);
v___x_37_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(v___x_36_, v_result_33_);
v___x_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
else
{
lean_object* v___x_39_; 
lean_dec_ref(v_args_26_);
v___x_39_ = lean_box(0);
return v___x_39_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0(lean_object* v_inst_40_, lean_object* v_R_41_, lean_object* v_a_42_, lean_object* v_b_43_, lean_object* v_c_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(v_a_42_, v_b_43_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0(lean_object* v_e_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_55_ = ((lean_object*)(l_Lean_Meta_elimOptParam___lam__0___closed__1));
v___x_56_ = lean_unsigned_to_nat(2u);
v___x_57_ = l_Lean_Expr_isAppOfArity(v_e_51_, v___x_55_, v___x_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = ((lean_object*)(l_Lean_Meta_elimOptParam___lam__0___closed__2));
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
else
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_60_ = l_Lean_Expr_getAppNumArgs(v_e_51_);
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_sub(v___x_60_, v___x_61_);
lean_dec(v___x_60_);
v___x_63_ = l_Lean_Expr_getRevArg_x21(v_e_51_, v___x_62_);
v___x_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0___boxed(lean_object* v_e_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Meta_elimOptParam___lam__0(v_e_66_, v___y_67_, v___y_68_);
lean_dec(v___y_68_);
lean_dec_ref(v___y_67_);
lean_dec_ref(v_e_66_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1(lean_object* v_e_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v_e_71_);
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1___boxed(lean_object* v_e_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_Meta_elimOptParam___lam__1(v_e_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object* v_x_82_, lean_object* v_x_83_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
return v_x_82_;
}
else
{
lean_object* v_key_84_; lean_object* v_value_85_; lean_object* v_tail_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_109_; 
v_key_84_ = lean_ctor_get(v_x_83_, 0);
v_value_85_ = lean_ctor_get(v_x_83_, 1);
v_tail_86_ = lean_ctor_get(v_x_83_, 2);
v_isSharedCheck_109_ = !lean_is_exclusive(v_x_83_);
if (v_isSharedCheck_109_ == 0)
{
v___x_88_ = v_x_83_;
v_isShared_89_ = v_isSharedCheck_109_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_tail_86_);
lean_inc(v_value_85_);
lean_inc(v_key_84_);
lean_dec(v_x_83_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_109_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_90_; uint64_t v___x_91_; uint64_t v___x_92_; uint64_t v___x_93_; uint64_t v_fold_94_; uint64_t v___x_95_; uint64_t v___x_96_; uint64_t v___x_97_; size_t v___x_98_; size_t v___x_99_; size_t v___x_100_; size_t v___x_101_; size_t v___x_102_; lean_object* v___x_103_; lean_object* v___x_105_; 
v___x_90_ = lean_array_get_size(v_x_82_);
v___x_91_ = l_Lean_ExprStructEq_hash(v_key_84_);
v___x_92_ = 32ULL;
v___x_93_ = lean_uint64_shift_right(v___x_91_, v___x_92_);
v_fold_94_ = lean_uint64_xor(v___x_91_, v___x_93_);
v___x_95_ = 16ULL;
v___x_96_ = lean_uint64_shift_right(v_fold_94_, v___x_95_);
v___x_97_ = lean_uint64_xor(v_fold_94_, v___x_96_);
v___x_98_ = lean_uint64_to_usize(v___x_97_);
v___x_99_ = lean_usize_of_nat(v___x_90_);
v___x_100_ = ((size_t)1ULL);
v___x_101_ = lean_usize_sub(v___x_99_, v___x_100_);
v___x_102_ = lean_usize_land(v___x_98_, v___x_101_);
v___x_103_ = lean_array_uget_borrowed(v_x_82_, v___x_102_);
lean_inc(v___x_103_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 2, v___x_103_);
v___x_105_ = v___x_88_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_key_84_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_value_85_);
lean_ctor_set(v_reuseFailAlloc_108_, 2, v___x_103_);
v___x_105_ = v_reuseFailAlloc_108_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
lean_object* v___x_106_; 
v___x_106_ = lean_array_uset(v_x_82_, v___x_102_, v___x_105_);
v_x_82_ = v___x_106_;
v_x_83_ = v_tail_86_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object* v_i_110_, lean_object* v_source_111_, lean_object* v_target_112_){
_start:
{
lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_113_ = lean_array_get_size(v_source_111_);
v___x_114_ = lean_nat_dec_lt(v_i_110_, v___x_113_);
if (v___x_114_ == 0)
{
lean_dec_ref(v_source_111_);
lean_dec(v_i_110_);
return v_target_112_;
}
else
{
lean_object* v_es_115_; lean_object* v___x_116_; lean_object* v_source_117_; lean_object* v_target_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_es_115_ = lean_array_fget(v_source_111_, v_i_110_);
v___x_116_ = lean_box(0);
v_source_117_ = lean_array_fset(v_source_111_, v_i_110_, v___x_116_);
v_target_118_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_target_112_, v_es_115_);
v___x_119_ = lean_unsigned_to_nat(1u);
v___x_120_ = lean_nat_add(v_i_110_, v___x_119_);
lean_dec(v_i_110_);
v_i_110_ = v___x_120_;
v_source_111_ = v_source_117_;
v_target_112_ = v_target_118_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_data_122_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v_nbuckets_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_123_ = lean_array_get_size(v_data_122_);
v___x_124_ = lean_unsigned_to_nat(2u);
v_nbuckets_125_ = lean_nat_mul(v___x_123_, v___x_124_);
v___x_126_ = lean_unsigned_to_nat(0u);
v___x_127_ = lean_box(0);
v___x_128_ = lean_mk_array(v_nbuckets_125_, v___x_127_);
v___x_129_ = lean_array_propagate_mark(v_data_122_, v___x_128_);
v___x_130_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v___x_126_, v_data_122_, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12___redArg(lean_object* v_a_131_, lean_object* v_b_132_, lean_object* v_x_133_){
_start:
{
if (lean_obj_tag(v_x_133_) == 0)
{
lean_dec(v_b_132_);
lean_dec_ref(v_a_131_);
return v_x_133_;
}
else
{
lean_object* v_key_134_; lean_object* v_value_135_; lean_object* v_tail_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_148_; 
v_key_134_ = lean_ctor_get(v_x_133_, 0);
v_value_135_ = lean_ctor_get(v_x_133_, 1);
v_tail_136_ = lean_ctor_get(v_x_133_, 2);
v_isSharedCheck_148_ = !lean_is_exclusive(v_x_133_);
if (v_isSharedCheck_148_ == 0)
{
v___x_138_ = v_x_133_;
v_isShared_139_ = v_isSharedCheck_148_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_tail_136_);
lean_inc(v_value_135_);
lean_inc(v_key_134_);
lean_dec(v_x_133_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_148_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
uint8_t v___x_140_; 
v___x_140_ = l_Lean_ExprStructEq_beq(v_key_134_, v_a_131_);
if (v___x_140_ == 0)
{
lean_object* v___x_141_; lean_object* v___x_143_; 
v___x_141_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12___redArg(v_a_131_, v_b_132_, v_tail_136_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 2, v___x_141_);
v___x_143_ = v___x_138_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_key_134_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v_value_135_);
lean_ctor_set(v_reuseFailAlloc_144_, 2, v___x_141_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
else
{
lean_object* v___x_146_; 
lean_dec(v_value_135_);
lean_dec(v_key_134_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 1, v_b_132_);
lean_ctor_set(v___x_138_, 0, v_a_131_);
v___x_146_ = v___x_138_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_a_131_);
lean_ctor_set(v_reuseFailAlloc_147_, 1, v_b_132_);
lean_ctor_set(v_reuseFailAlloc_147_, 2, v_tail_136_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_a_149_, lean_object* v_x_150_){
_start:
{
if (lean_obj_tag(v_x_150_) == 0)
{
uint8_t v___x_151_; 
v___x_151_ = 0;
return v___x_151_;
}
else
{
lean_object* v_key_152_; lean_object* v_tail_153_; uint8_t v___x_154_; 
v_key_152_ = lean_ctor_get(v_x_150_, 0);
v_tail_153_ = lean_ctor_get(v_x_150_, 2);
v___x_154_ = l_Lean_ExprStructEq_beq(v_key_152_, v_a_149_);
if (v___x_154_ == 0)
{
v_x_150_ = v_tail_153_;
goto _start;
}
else
{
return v___x_154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object* v_a_156_, lean_object* v_x_157_){
_start:
{
uint8_t v_res_158_; lean_object* v_r_159_; 
v_res_158_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(v_a_156_, v_x_157_);
lean_dec(v_x_157_);
lean_dec_ref(v_a_156_);
v_r_159_ = lean_box(v_res_158_);
return v_r_159_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(lean_object* v_m_160_, lean_object* v_a_161_, lean_object* v_b_162_){
_start:
{
lean_object* v_size_163_; lean_object* v_buckets_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_207_; 
v_size_163_ = lean_ctor_get(v_m_160_, 0);
v_buckets_164_ = lean_ctor_get(v_m_160_, 1);
v_isSharedCheck_207_ = !lean_is_exclusive(v_m_160_);
if (v_isSharedCheck_207_ == 0)
{
v___x_166_ = v_m_160_;
v_isShared_167_ = v_isSharedCheck_207_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_buckets_164_);
lean_inc(v_size_163_);
lean_dec(v_m_160_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_207_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_168_; uint64_t v___x_169_; uint64_t v___x_170_; uint64_t v___x_171_; uint64_t v_fold_172_; uint64_t v___x_173_; uint64_t v___x_174_; uint64_t v___x_175_; size_t v___x_176_; size_t v___x_177_; size_t v___x_178_; size_t v___x_179_; size_t v___x_180_; lean_object* v_bkt_181_; uint8_t v___x_182_; 
v___x_168_ = lean_array_get_size(v_buckets_164_);
v___x_169_ = l_Lean_ExprStructEq_hash(v_a_161_);
v___x_170_ = 32ULL;
v___x_171_ = lean_uint64_shift_right(v___x_169_, v___x_170_);
v_fold_172_ = lean_uint64_xor(v___x_169_, v___x_171_);
v___x_173_ = 16ULL;
v___x_174_ = lean_uint64_shift_right(v_fold_172_, v___x_173_);
v___x_175_ = lean_uint64_xor(v_fold_172_, v___x_174_);
v___x_176_ = lean_uint64_to_usize(v___x_175_);
v___x_177_ = lean_usize_of_nat(v___x_168_);
v___x_178_ = ((size_t)1ULL);
v___x_179_ = lean_usize_sub(v___x_177_, v___x_178_);
v___x_180_ = lean_usize_land(v___x_176_, v___x_179_);
v_bkt_181_ = lean_array_uget_borrowed(v_buckets_164_, v___x_180_);
v___x_182_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(v_a_161_, v_bkt_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v_size_x27_184_; lean_object* v___x_185_; lean_object* v_buckets_x27_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_183_ = lean_unsigned_to_nat(1u);
v_size_x27_184_ = lean_nat_add(v_size_163_, v___x_183_);
lean_dec(v_size_163_);
lean_inc(v_bkt_181_);
v___x_185_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_185_, 0, v_a_161_);
lean_ctor_set(v___x_185_, 1, v_b_162_);
lean_ctor_set(v___x_185_, 2, v_bkt_181_);
v_buckets_x27_186_ = lean_array_uset(v_buckets_164_, v___x_180_, v___x_185_);
v___x_187_ = lean_unsigned_to_nat(4u);
v___x_188_ = lean_nat_mul(v_size_x27_184_, v___x_187_);
v___x_189_ = lean_unsigned_to_nat(3u);
v___x_190_ = lean_nat_div(v___x_188_, v___x_189_);
lean_dec(v___x_188_);
v___x_191_ = lean_array_get_size(v_buckets_x27_186_);
v___x_192_ = lean_nat_dec_le(v___x_190_, v___x_191_);
lean_dec(v___x_190_);
if (v___x_192_ == 0)
{
lean_object* v_val_193_; lean_object* v___x_195_; 
v_val_193_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(v_buckets_x27_186_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 1, v_val_193_);
lean_ctor_set(v___x_166_, 0, v_size_x27_184_);
v___x_195_ = v___x_166_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_size_x27_184_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v_val_193_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
else
{
lean_object* v___x_198_; 
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 1, v_buckets_x27_186_);
lean_ctor_set(v___x_166_, 0, v_size_x27_184_);
v___x_198_ = v___x_166_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_size_x27_184_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_buckets_x27_186_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
else
{
lean_object* v___x_200_; lean_object* v_buckets_x27_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_205_; 
lean_inc(v_bkt_181_);
v___x_200_ = lean_box(0);
v_buckets_x27_201_ = lean_array_uset(v_buckets_164_, v___x_180_, v___x_200_);
v___x_202_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12___redArg(v_a_161_, v_b_162_, v_bkt_181_);
v___x_203_ = lean_array_uset(v_buckets_x27_201_, v___x_180_, v___x_202_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 1, v___x_203_);
v___x_205_ = v___x_166_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_size_163_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v___x_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2(lean_object* v_a_208_, lean_object* v_e_209_, lean_object* v_a_210_){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_212_ = lean_st_ref_take(v_a_208_);
v___x_213_ = lean_box(0);
v___x_214_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(v___x_212_, v_e_209_, v_a_210_);
v___x_215_ = lean_st_ref_put(v_a_208_, v___x_214_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2___boxed(lean_object* v_a_216_, lean_object* v_e_217_, lean_object* v_a_218_, lean_object* v___y_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2(v_a_216_, v_e_217_, v_a_218_);
lean_dec(v_a_216_);
return v_res_220_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = lean_box(0);
v___x_222_ = l_Lean_interruptExceptionId;
v___x_223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___x_221_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg(){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_225_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0);
v___x_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object* v___y_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg();
return v_res_228_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_234_ = l_Lean_maxRecDepthErrorMessage;
v___x_235_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
return v___x_235_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_237_ = l_Lean_MessageData_ofFormat(v___x_236_);
return v___x_237_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_239_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2));
v___x_240_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set(v___x_240_, 1, v___x_238_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_241_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_243_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v_ref_241_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_246_, lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_246_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(lean_object* v_x_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v___y_255_; lean_object* v___y_265_; lean_object* v___y_266_; uint8_t v___y_267_; lean_object* v___y_268_; uint8_t v___y_269_; lean_object* v_toCold_274_; lean_object* v_currRecDepth_275_; lean_object* v_ref_276_; uint8_t v_diag_277_; uint8_t v_suppressElabErrors_278_; lean_object* v_maxRecDepth_279_; lean_object* v_cancelTk_x3f_280_; 
v_toCold_274_ = lean_ctor_get(v___y_251_, 0);
v_currRecDepth_275_ = lean_ctor_get(v___y_251_, 1);
v_ref_276_ = lean_ctor_get(v___y_251_, 2);
v_diag_277_ = lean_ctor_get_uint8(v___y_251_, sizeof(void*)*3);
v_suppressElabErrors_278_ = lean_ctor_get_uint8(v___y_251_, sizeof(void*)*3 + 1);
v_maxRecDepth_279_ = lean_ctor_get(v_toCold_274_, 3);
v_cancelTk_x3f_280_ = lean_ctor_get(v_toCold_274_, 10);
if (lean_obj_tag(v_cancelTk_x3f_280_) == 1)
{
lean_object* v_val_286_; uint8_t v___x_287_; 
v_val_286_ = lean_ctor_get(v_cancelTk_x3f_280_, 0);
v___x_287_ = l_IO_CancelToken_isSet(v_val_286_);
if (v___x_287_ == 0)
{
goto v___jp_281_;
}
else
{
lean_object* v___x_288_; lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec_ref(v_x_249_);
v___x_288_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg();
v_a_289_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_288_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_288_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
else
{
goto v___jp_281_;
}
v___jp_254_:
{
if (lean_obj_tag(v___y_255_) == 0)
{
return v___y_255_;
}
else
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
v_a_256_ = lean_ctor_get(v___y_255_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___y_255_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___y_255_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___y_255_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
v___jp_264_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_270_ = lean_unsigned_to_nat(1u);
v___x_271_ = lean_nat_add(v___y_268_, v___x_270_);
lean_inc_ref(v___y_266_);
v___x_272_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_272_, 0, v___y_266_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
lean_ctor_set(v___x_272_, 2, v___y_265_);
lean_ctor_set_uint8(v___x_272_, sizeof(void*)*3, v___y_267_);
lean_ctor_set_uint8(v___x_272_, sizeof(void*)*3 + 1, v___y_269_);
lean_inc(v___y_252_);
lean_inc(v___y_250_);
v___x_273_ = lean_apply_4(v_x_249_, v___y_250_, v___x_272_, v___y_252_, lean_box(0));
v___y_255_ = v___x_273_;
goto v___jp_254_;
}
v___jp_281_:
{
lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_282_ = lean_unsigned_to_nat(0u);
v___x_283_ = lean_nat_dec_eq(v_maxRecDepth_279_, v___x_282_);
if (v___x_283_ == 0)
{
uint8_t v___x_284_; 
v___x_284_ = lean_nat_dec_eq(v_currRecDepth_275_, v_maxRecDepth_279_);
if (v___x_284_ == 0)
{
lean_inc(v_ref_276_);
v___y_265_ = v_ref_276_;
v___y_266_ = v_toCold_274_;
v___y_267_ = v_diag_277_;
v___y_268_ = v_currRecDepth_275_;
v___y_269_ = v_suppressElabErrors_278_;
goto v___jp_264_;
}
else
{
lean_object* v___x_285_; 
lean_dec_ref(v_x_249_);
lean_inc(v_ref_276_);
v___x_285_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_276_);
v___y_255_ = v___x_285_;
goto v___jp_254_;
}
}
else
{
lean_inc(v_ref_276_);
v___y_265_ = v_ref_276_;
v___y_266_ = v_toCold_274_;
v___y_267_ = v_diag_277_;
v___y_268_ = v_currRecDepth_275_;
v___y_269_ = v_suppressElabErrors_278_;
goto v___jp_264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(v_x_297_, v___y_298_, v___y_299_, v___y_300_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec(v___y_298_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_303_, lean_object* v_x_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = lean_apply_1(v_x_304_, lean_box(0));
v___x_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_310_, lean_object* v_x_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(v_00_u03b1_310_, v_x_311_, v___y_312_, v___y_313_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_316_, lean_object* v_x_317_){
_start:
{
if (lean_obj_tag(v_x_317_) == 0)
{
lean_object* v___x_318_; 
v___x_318_ = lean_box(0);
return v___x_318_;
}
else
{
lean_object* v_key_319_; lean_object* v_value_320_; lean_object* v_tail_321_; uint8_t v___x_322_; 
v_key_319_ = lean_ctor_get(v_x_317_, 0);
v_value_320_ = lean_ctor_get(v_x_317_, 1);
v_tail_321_ = lean_ctor_get(v_x_317_, 2);
v___x_322_ = l_Lean_ExprStructEq_beq(v_key_319_, v_a_316_);
if (v___x_322_ == 0)
{
v_x_317_ = v_tail_321_;
goto _start;
}
else
{
lean_object* v___x_324_; 
lean_inc(v_value_320_);
v___x_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_324_, 0, v_value_320_);
return v___x_324_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_325_, lean_object* v_x_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg(v_a_325_, v_x_326_);
lean_dec(v_x_326_);
lean_dec_ref(v_a_325_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg(lean_object* v_m_328_, lean_object* v_a_329_){
_start:
{
lean_object* v_buckets_330_; lean_object* v___x_331_; uint64_t v___x_332_; uint64_t v___x_333_; uint64_t v___x_334_; uint64_t v_fold_335_; uint64_t v___x_336_; uint64_t v___x_337_; uint64_t v___x_338_; size_t v___x_339_; size_t v___x_340_; size_t v___x_341_; size_t v___x_342_; size_t v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_buckets_330_ = lean_ctor_get(v_m_328_, 1);
v___x_331_ = lean_array_get_size(v_buckets_330_);
v___x_332_ = l_Lean_ExprStructEq_hash(v_a_329_);
v___x_333_ = 32ULL;
v___x_334_ = lean_uint64_shift_right(v___x_332_, v___x_333_);
v_fold_335_ = lean_uint64_xor(v___x_332_, v___x_334_);
v___x_336_ = 16ULL;
v___x_337_ = lean_uint64_shift_right(v_fold_335_, v___x_336_);
v___x_338_ = lean_uint64_xor(v_fold_335_, v___x_337_);
v___x_339_ = lean_uint64_to_usize(v___x_338_);
v___x_340_ = lean_usize_of_nat(v___x_331_);
v___x_341_ = ((size_t)1ULL);
v___x_342_ = lean_usize_sub(v___x_340_, v___x_341_);
v___x_343_ = lean_usize_land(v___x_339_, v___x_342_);
v___x_344_ = lean_array_uget_borrowed(v_buckets_330_, v___x_343_);
v___x_345_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg(v_a_329_, v___x_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg(v_m_346_, v_a_347_);
lean_dec_ref(v_a_347_);
lean_dec_ref(v_m_346_);
return v_res_348_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_box(0);
v___x_351_ = l_unsafeCast___redArg(v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__1(void){
_start:
{
lean_object* v___x_352_; lean_object* v_dummy_353_; 
v___x_352_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0);
v_dummy_353_ = l_Lean_Expr_sort___override(v___x_352_);
return v_dummy_353_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1(lean_object* v_pre_356_, lean_object* v_post_357_, size_t v_sz_358_, size_t v_i_359_, lean_object* v_bs_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
uint8_t v___x_365_; 
v___x_365_ = lean_usize_dec_lt(v_i_359_, v_sz_358_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; lean_object* v___x_367_; 
lean_dec_ref(v_post_357_);
lean_dec_ref(v_pre_356_);
v___x_366_ = l_unsafeCast___redArg(v_bs_360_);
lean_dec_ref(v_bs_360_);
v___x_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
return v___x_367_;
}
else
{
lean_object* v_v_368_; lean_object* v___x_369_; lean_object* v_bs_x27_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v_v_368_ = lean_array_uget(v_bs_360_, v_i_359_);
v___x_369_ = lean_unsigned_to_nat(0u);
v_bs_x27_370_ = lean_array_uset(v_bs_360_, v_i_359_, v___x_369_);
v___x_371_ = l_unsafeCast___redArg(v_v_368_);
lean_dec(v_v_368_);
lean_inc_ref(v_post_357_);
lean_inc_ref(v_pre_356_);
v___x_372_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_356_, v_post_357_, v___x_371_, v___y_361_, v___y_362_, v___y_363_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; size_t v___x_374_; size_t v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_a_373_);
lean_dec_ref_known(v___x_372_, 1);
v___x_374_ = ((size_t)1ULL);
v___x_375_ = lean_usize_add(v_i_359_, v___x_374_);
v___x_376_ = l_unsafeCast___redArg(v_a_373_);
lean_dec(v_a_373_);
v___x_377_ = lean_array_uset(v_bs_x27_370_, v_i_359_, v___x_376_);
v_i_359_ = v___x_375_;
v_bs_360_ = v___x_377_;
goto _start;
}
else
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_386_; 
lean_dec_ref(v_bs_x27_370_);
lean_dec_ref(v_post_357_);
lean_dec_ref(v_pre_356_);
v_a_379_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_386_ == 0)
{
v___x_381_ = v___x_372_;
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_372_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_384_; 
if (v_isShared_382_ == 0)
{
v___x_384_ = v___x_381_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v_a_379_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_387_, lean_object* v_post_388_, lean_object* v_sz_389_, lean_object* v_i_390_, lean_object* v_bs_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
size_t v_sz_boxed_396_; size_t v_i_boxed_397_; lean_object* v_res_398_; 
v_sz_boxed_396_ = lean_unbox_usize(v_sz_389_);
lean_dec(v_sz_389_);
v_i_boxed_397_ = lean_unbox_usize(v_i_390_);
lean_dec(v_i_390_);
v_res_398_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1(v_pre_387_, v_post_388_, v_sz_boxed_396_, v_i_boxed_397_, v_bs_391_, v___y_392_, v___y_393_, v___y_394_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec(v___y_392_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(lean_object* v_pre_399_, lean_object* v_post_400_, lean_object* v_x_401_, lean_object* v_x_402_, lean_object* v_x_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
if (lean_obj_tag(v_x_401_) == 5)
{
lean_object* v_fn_408_; lean_object* v_arg_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v_fn_408_ = lean_ctor_get(v_x_401_, 0);
lean_inc_ref(v_fn_408_);
v_arg_409_ = lean_ctor_get(v_x_401_, 1);
lean_inc_ref(v_arg_409_);
lean_dec_ref_known(v_x_401_, 2);
v___x_410_ = lean_array_set(v_x_402_, v_x_403_, v_arg_409_);
v___x_411_ = lean_unsigned_to_nat(1u);
v___x_412_ = lean_nat_sub(v_x_403_, v___x_411_);
lean_dec(v_x_403_);
v_x_401_ = v_fn_408_;
v_x_402_ = v___x_410_;
v_x_403_ = v___x_412_;
goto _start;
}
else
{
lean_object* v___x_414_; 
lean_dec(v_x_403_);
lean_inc_ref(v_post_400_);
lean_inc_ref(v_pre_399_);
v___x_414_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_399_, v_post_400_, v_x_401_, v___y_404_, v___y_405_, v___y_406_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; size_t v_sz_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_5527__overap_421_; lean_object* v___x_422_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_a_415_);
lean_dec_ref_known(v___x_414_, 1);
v_sz_416_ = lean_array_size(v_x_402_);
v___x_417_ = l_unsafeCast___redArg(v_x_402_);
lean_dec_ref(v_x_402_);
v___x_418_ = lean_box_usize(v_sz_416_);
v___x_419_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4___boxed__const__1));
lean_inc_ref(v_post_400_);
lean_inc_ref(v_pre_399_);
v___x_420_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___boxed), 9, 5);
lean_closure_set(v___x_420_, 0, v_pre_399_);
lean_closure_set(v___x_420_, 1, v_post_400_);
lean_closure_set(v___x_420_, 2, v___x_418_);
lean_closure_set(v___x_420_, 3, v___x_419_);
lean_closure_set(v___x_420_, 4, v___x_417_);
v___x_5527__overap_421_ = l_unsafeCast___redArg(v___x_420_);
lean_dec_ref(v___x_420_);
lean_inc(v___y_406_);
lean_inc_ref(v___y_405_);
lean_inc(v___y_404_);
v___x_422_ = lean_apply_4(v___x_5527__overap_421_, v___y_404_, v___y_405_, v___y_406_, lean_box(0));
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_a_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v_a_423_ = lean_ctor_get(v___x_422_, 0);
lean_inc(v_a_423_);
lean_dec_ref_known(v___x_422_, 1);
v___x_424_ = l_Lean_mkAppN(v_a_415_, v_a_423_);
lean_dec(v_a_423_);
v___x_425_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_399_, v_post_400_, v___x_424_, v___y_404_, v___y_405_, v___y_406_);
return v___x_425_;
}
else
{
lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_433_; 
lean_dec(v_a_415_);
lean_dec_ref(v_post_400_);
lean_dec_ref(v_pre_399_);
v_a_426_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_433_ == 0)
{
v___x_428_ = v___x_422_;
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_dec(v___x_422_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_431_; 
if (v_isShared_429_ == 0)
{
v___x_431_ = v___x_428_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_a_426_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
else
{
lean_dec_ref(v_x_402_);
lean_dec_ref(v_post_400_);
lean_dec_ref(v_pre_399_);
return v___x_414_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1(lean_object* v___x_434_, lean_object* v_pre_435_, lean_object* v_e_436_, lean_object* v_post_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lean_Core_checkSystem(v___x_434_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v___x_443_; 
lean_dec_ref_known(v___x_442_, 1);
lean_inc_ref(v_pre_435_);
lean_inc(v___y_440_);
lean_inc_ref(v___y_439_);
lean_inc_ref(v_e_436_);
v___x_443_ = lean_apply_4(v_pre_435_, v_e_436_, v___y_439_, v___y_440_, lean_box(0));
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_559_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_559_ == 0)
{
v___x_446_ = v___x_443_;
v_isShared_447_ = v_isSharedCheck_559_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_443_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_559_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___y_449_; 
switch(lean_obj_tag(v_a_444_))
{
case 0:
{
lean_object* v_e_549_; lean_object* v___x_551_; 
lean_dec_ref(v_post_437_);
lean_dec_ref(v_e_436_);
lean_dec_ref(v_pre_435_);
v_e_549_ = lean_ctor_get(v_a_444_, 0);
lean_inc_ref(v_e_549_);
lean_dec_ref_known(v_a_444_, 1);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v_e_549_);
v___x_551_ = v___x_446_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_e_549_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
case 1:
{
lean_object* v_e_553_; lean_object* v___x_554_; 
lean_del_object(v___x_446_);
lean_dec_ref(v_e_436_);
v_e_553_ = lean_ctor_get(v_a_444_, 0);
lean_inc_ref(v_e_553_);
lean_dec_ref_known(v_a_444_, 1);
lean_inc_ref(v_post_437_);
lean_inc_ref(v_pre_435_);
v___x_554_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_435_, v_post_437_, v_e_553_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v_a_555_; lean_object* v___x_556_; 
v_a_555_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_a_555_);
lean_dec_ref_known(v___x_554_, 1);
v___x_556_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v_a_555_, v___y_438_, v___y_439_, v___y_440_);
return v___x_556_;
}
else
{
lean_dec_ref(v_post_437_);
lean_dec_ref(v_pre_435_);
return v___x_554_;
}
}
default: 
{
lean_object* v_e_x3f_557_; 
lean_del_object(v___x_446_);
v_e_x3f_557_ = lean_ctor_get(v_a_444_, 0);
lean_inc(v_e_x3f_557_);
lean_dec_ref_known(v_a_444_, 1);
if (lean_obj_tag(v_e_x3f_557_) == 0)
{
v___y_449_ = v_e_436_;
goto v___jp_448_;
}
else
{
lean_object* v_val_558_; 
lean_dec_ref(v_e_436_);
v_val_558_ = lean_ctor_get(v_e_x3f_557_, 0);
lean_inc(v_val_558_);
lean_dec_ref_known(v_e_x3f_557_, 1);
v___y_449_ = v_val_558_;
goto v___jp_448_;
}
}
}
v___jp_448_:
{
switch(lean_obj_tag(v___y_449_))
{
case 7:
{
lean_object* v_binderName_450_; lean_object* v_binderType_451_; lean_object* v_body_452_; uint8_t v_binderInfo_453_; lean_object* v___x_454_; 
v_binderName_450_ = lean_ctor_get(v___y_449_, 0);
v_binderType_451_ = lean_ctor_get(v___y_449_, 1);
v_body_452_ = lean_ctor_get(v___y_449_, 2);
v_binderInfo_453_ = lean_ctor_get_uint8(v___y_449_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_451_);
lean_inc_ref(v_post_437_);
lean_inc_ref(v_pre_435_);
v___x_454_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_435_, v_post_437_, v_binderType_451_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; lean_object* v___x_456_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
lean_dec_ref_known(v___x_454_, 1);
lean_inc_ref(v_body_452_);
lean_inc_ref(v_post_437_);
lean_inc_ref(v_pre_435_);
v___x_456_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_435_, v_post_437_, v_body_452_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; size_t v___x_458_; size_t v___x_459_; uint8_t v___x_460_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_457_);
lean_dec_ref_known(v___x_456_, 1);
v___x_458_ = lean_ptr_addr(v_binderType_451_);
v___x_459_ = lean_ptr_addr(v_a_455_);
v___x_460_ = lean_usize_dec_eq(v___x_458_, v___x_459_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; 
lean_inc(v_binderName_450_);
lean_dec_ref_known(v___y_449_, 3);
v___x_461_ = l_Lean_Expr_forallE___override(v_binderName_450_, v_a_455_, v_a_457_, v_binderInfo_453_);
v___x_462_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___x_461_, v___y_438_, v___y_439_, v___y_440_);
return v___x_462_;
}
else
{
size_t v___x_463_; size_t v___x_464_; uint8_t v___x_465_; 
v___x_463_ = lean_ptr_addr(v_body_452_);
v___x_464_ = lean_ptr_addr(v_a_457_);
v___x_465_ = lean_usize_dec_eq(v___x_463_, v___x_464_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; lean_object* v___x_467_; 
lean_inc(v_binderName_450_);
lean_dec_ref_known(v___y_449_, 3);
v___x_466_ = l_Lean_Expr_forallE___override(v_binderName_450_, v_a_455_, v_a_457_, v_binderInfo_453_);
v___x_467_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___x_466_, v___y_438_, v___y_439_, v___y_440_);
return v___x_467_;
}
else
{
uint8_t v___x_468_; 
v___x_468_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_453_, v_binderInfo_453_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; lean_object* v___x_470_; 
lean_inc(v_binderName_450_);
lean_dec_ref_known(v___y_449_, 3);
v___x_469_ = l_Lean_Expr_forallE___override(v_binderName_450_, v_a_455_, v_a_457_, v_binderInfo_453_);
v___x_470_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___x_469_, v___y_438_, v___y_439_, v___y_440_);
return v___x_470_;
}
else
{
lean_object* v___x_471_; 
lean_dec(v_a_457_);
lean_dec(v_a_455_);
v___x_471_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___y_449_, v___y_438_, v___y_439_, v___y_440_);
return v___x_471_;
}
}
}
}
else
{
lean_dec(v_a_455_);
lean_dec_ref_known(v___y_449_, 3);
lean_dec_ref(v_post_437_);
lean_dec_ref(v_pre_435_);
return v___x_456_;
}
}
else
{
lean_dec_ref_known(v___y_449_, 3);
lean_dec_ref(v_post_437_);
lean_dec_ref(v_pre_435_);
return v___x_454_;
}
}
case 6:
{
lean_object* v_binderName_472_; lean_object* v_binderType_473_; lean_object* v_body_474_; uint8_t v_binderInfo_475_; lean_object* v___x_476_; 
v_binderName_472_ = lean_ctor_get(v___y_449_, 0);
v_binderType_473_ = lean_ctor_get(v___y_449_, 1);
v_body_474_ = lean_ctor_get(v___y_449_, 2);
v_binderInfo_475_ = lean_ctor_get_uint8(v___y_449_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_473_);
lean_inc_ref(v_post_437_);
lean_inc_ref(v_pre_435_);
v___x_476_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_435_, v_post_437_, v_binderType_473_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; lean_object* v___x_478_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc(v_a_477_);
lean_dec_ref_known(v___x_476_, 1);
lean_inc_ref(v_body_474_);
lean_inc_ref(v_post_437_);
lean_inc_ref(v_pre_435_);
v___x_478_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_435_, v_post_437_, v_body_474_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_object* v_a_479_; size_t v___x_480_; size_t v___x_481_; uint8_t v___x_482_; 
v_a_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc(v_a_479_);
lean_dec_ref_known(v___x_478_, 1);
v___x_480_ = lean_ptr_addr(v_binderType_473_);
v___x_481_ = lean_ptr_addr(v_a_477_);
v___x_482_ = lean_usize_dec_eq(v___x_480_, v___x_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v___x_484_; 
lean_inc(v_binderName_472_);
lean_dec_ref_known(v___y_449_, 3);
v___x_483_ = l_Lean_Expr_lam___override(v_binderName_472_, v_a_477_, v_a_479_, v_binderInfo_475_);
v___x_484_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___x_483_, v___y_438_, v___y_439_, v___y_440_);
return v___x_484_;
}
else
{
size_t v___x_485_; size_t v___x_486_; uint8_t v___x_487_; 
v___x_485_ = lean_ptr_addr(v_body_474_);
v___x_486_ = lean_ptr_addr(v_a_479_);
v___x_487_ = lean_usize_dec_eq(v___x_485_, v___x_486_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; lean_object* v___x_489_; 
lean_inc(v_binderName_472_);
lean_dec_ref_known(v___y_449_, 3);
v___x_488_ = l_Lean_Expr_lam___override(v_binderName_472_, v_a_477_, v_a_479_, v_binderInfo_475_);
v___x_489_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___x_488_, v___y_438_, v___y_439_, v___y_440_);
return v___x_489_;
}
else
{
uint8_t v___x_490_; 
v___x_490_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_475_, v_binderInfo_475_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; 
lean_inc(v_binderName_472_);
lean_dec_ref_known(v___y_449_, 3);
v___x_491_ = l_Lean_Expr_lam___override(v_binderName_472_, v_a_477_, v_a_479_, v_binderInfo_475_);
v___x_492_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___x_491_, v___y_438_, v___y_439_, v___y_440_);
return v___x_492_;
}
else
{
lean_object* v___x_493_; 
lean_dec(v_a_479_);
lean_dec(v_a_477_);
v___x_493_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___y_449_, v___y_438_, v___y_439_, v___y_440_);
return v___x_493_;
}
}
}
}
else
{
lean_dec(v_a_477_);
lean_dec_ref_known(v___y_449_, 3);
lean_dec_ref(v_post_437_);
lean_dec_ref(v_pre_435_);
return v___x_478_;
}
}
else
{
lean_dec_ref_known(v___y_449_, 3);
lean_dec_ref(v_post_437_);
lean_dec_ref(v_pre_435_);
return v___x_476_;
}
}
case 8:
{
lean_object* v_declName_494_; lean_object* v_type_495_; lean_object* v_value_496_; lean_object* v_body_497_; uint8_t v_nondep_498_; lean_object* v___x_499_; 
v_declName_494_ = lean_ctor_get(v___y_449_, 0);
v_type_495_ = lean_ctor_get(v___y_449_, 1);
v_value_496_ = lean_ctor_get(v___y_449_, 2);
v_body_497_ = lean_ctor_get(v___y_449_, 3);
v_nondep_498_ = lean_ctor_get_uint8(v___y_449_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_495_);
lean_inc_ref(v_post_437_);
lean_inc_ref(v_pre_435_);
v___x_499_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_435_, v_post_437_, v_type_495_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_501_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_a_500_);
lean_dec_ref_known(v___x_499_, 1);
lean_inc_ref(v_value_496_);
lean_inc_ref(v_post_437_);
lean_inc_ref(v_pre_435_);
v___x_501_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_435_, v_post_437_, v_value_496_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v___x_503_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
lean_inc_ref(v_body_497_);
lean_inc_ref(v_post_437_);
lean_inc_ref(v_pre_435_);
v___x_503_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_435_, v_post_437_, v_body_497_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; size_t v___x_505_; size_t v___x_506_; uint8_t v___x_507_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_a_504_);
lean_dec_ref_known(v___x_503_, 1);
v___x_505_ = lean_ptr_addr(v_type_495_);
v___x_506_ = lean_ptr_addr(v_a_500_);
v___x_507_ = lean_usize_dec_eq(v___x_505_, v___x_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
lean_inc(v_declName_494_);
lean_dec_ref_known(v___y_449_, 4);
v___x_508_ = l_Lean_Expr_letE___override(v_declName_494_, v_a_500_, v_a_502_, v_a_504_, v_nondep_498_);
v___x_509_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___x_508_, v___y_438_, v___y_439_, v___y_440_);
return v___x_509_;
}
else
{
size_t v___x_510_; size_t v___x_511_; uint8_t v___x_512_; 
v___x_510_ = lean_ptr_addr(v_value_496_);
v___x_511_ = lean_ptr_addr(v_a_502_);
v___x_512_ = lean_usize_dec_eq(v___x_510_, v___x_511_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; lean_object* v___x_514_; 
lean_inc(v_declName_494_);
lean_dec_ref_known(v___y_449_, 4);
v___x_513_ = l_Lean_Expr_letE___override(v_declName_494_, v_a_500_, v_a_502_, v_a_504_, v_nondep_498_);
v___x_514_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___x_513_, v___y_438_, v___y_439_, v___y_440_);
return v___x_514_;
}
else
{
size_t v___x_515_; size_t v___x_516_; uint8_t v___x_517_; 
v___x_515_ = lean_ptr_addr(v_body_497_);
v___x_516_ = lean_ptr_addr(v_a_504_);
v___x_517_ = lean_usize_dec_eq(v___x_515_, v___x_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; lean_object* v___x_519_; 
lean_inc(v_declName_494_);
lean_dec_ref_known(v___y_449_, 4);
v___x_518_ = l_Lean_Expr_letE___override(v_declName_494_, v_a_500_, v_a_502_, v_a_504_, v_nondep_498_);
v___x_519_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___x_518_, v___y_438_, v___y_439_, v___y_440_);
return v___x_519_;
}
else
{
lean_object* v___x_520_; 
lean_dec(v_a_504_);
lean_dec(v_a_502_);
lean_dec(v_a_500_);
v___x_520_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___y_449_, v___y_438_, v___y_439_, v___y_440_);
return v___x_520_;
}
}
}
}
else
{
lean_dec(v_a_502_);
lean_dec(v_a_500_);
lean_dec_ref_known(v___y_449_, 4);
lean_dec_ref(v_post_437_);
lean_dec_ref(v_pre_435_);
return v___x_503_;
}
}
else
{
lean_dec(v_a_500_);
lean_dec_ref_known(v___y_449_, 4);
lean_dec_ref(v_post_437_);
lean_dec_ref(v_pre_435_);
return v___x_501_;
}
}
else
{
lean_dec_ref_known(v___y_449_, 4);
lean_dec_ref(v_post_437_);
lean_dec_ref(v_pre_435_);
return v___x_499_;
}
}
case 5:
{
lean_object* v_dummy_521_; lean_object* v_nargs_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v_dummy_521_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__1);
v_nargs_522_ = l_Lean_Expr_getAppNumArgs(v___y_449_);
lean_inc(v_nargs_522_);
v___x_523_ = lean_mk_array(v_nargs_522_, v_dummy_521_);
v___x_524_ = lean_unsigned_to_nat(1u);
v___x_525_ = lean_nat_sub(v_nargs_522_, v___x_524_);
lean_dec(v_nargs_522_);
v___x_526_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(v_pre_435_, v_post_437_, v___y_449_, v___x_523_, v___x_525_, v___y_438_, v___y_439_, v___y_440_);
return v___x_526_;
}
case 10:
{
lean_object* v_data_527_; lean_object* v_expr_528_; lean_object* v___x_529_; 
v_data_527_ = lean_ctor_get(v___y_449_, 0);
v_expr_528_ = lean_ctor_get(v___y_449_, 1);
lean_inc_ref(v_expr_528_);
lean_inc_ref(v_post_437_);
lean_inc_ref(v_pre_435_);
v___x_529_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_435_, v_post_437_, v_expr_528_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_529_) == 0)
{
lean_object* v_a_530_; size_t v___x_531_; size_t v___x_532_; uint8_t v___x_533_; 
v_a_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_a_530_);
lean_dec_ref_known(v___x_529_, 1);
v___x_531_ = lean_ptr_addr(v_expr_528_);
v___x_532_ = lean_ptr_addr(v_a_530_);
v___x_533_ = lean_usize_dec_eq(v___x_531_, v___x_532_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; lean_object* v___x_535_; 
lean_inc(v_data_527_);
lean_dec_ref_known(v___y_449_, 2);
v___x_534_ = l_Lean_Expr_mdata___override(v_data_527_, v_a_530_);
v___x_535_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___x_534_, v___y_438_, v___y_439_, v___y_440_);
return v___x_535_;
}
else
{
lean_object* v___x_536_; 
lean_dec(v_a_530_);
v___x_536_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___y_449_, v___y_438_, v___y_439_, v___y_440_);
return v___x_536_;
}
}
else
{
lean_dec_ref_known(v___y_449_, 2);
lean_dec_ref(v_post_437_);
lean_dec_ref(v_pre_435_);
return v___x_529_;
}
}
case 11:
{
lean_object* v_typeName_537_; lean_object* v_idx_538_; lean_object* v_struct_539_; lean_object* v___x_540_; 
v_typeName_537_ = lean_ctor_get(v___y_449_, 0);
v_idx_538_ = lean_ctor_get(v___y_449_, 1);
v_struct_539_ = lean_ctor_get(v___y_449_, 2);
lean_inc_ref(v_struct_539_);
lean_inc_ref(v_post_437_);
lean_inc_ref(v_pre_435_);
v___x_540_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_435_, v_post_437_, v_struct_539_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; size_t v___x_542_; size_t v___x_543_; uint8_t v___x_544_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_a_541_);
lean_dec_ref_known(v___x_540_, 1);
v___x_542_ = lean_ptr_addr(v_struct_539_);
v___x_543_ = lean_ptr_addr(v_a_541_);
v___x_544_ = lean_usize_dec_eq(v___x_542_, v___x_543_);
if (v___x_544_ == 0)
{
lean_object* v___x_545_; lean_object* v___x_546_; 
lean_inc(v_idx_538_);
lean_inc(v_typeName_537_);
lean_dec_ref_known(v___y_449_, 3);
v___x_545_ = l_Lean_Expr_proj___override(v_typeName_537_, v_idx_538_, v_a_541_);
v___x_546_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___x_545_, v___y_438_, v___y_439_, v___y_440_);
return v___x_546_;
}
else
{
lean_object* v___x_547_; 
lean_dec(v_a_541_);
v___x_547_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___y_449_, v___y_438_, v___y_439_, v___y_440_);
return v___x_547_;
}
}
else
{
lean_dec_ref_known(v___y_449_, 3);
lean_dec_ref(v_post_437_);
lean_dec_ref(v_pre_435_);
return v___x_540_;
}
}
default: 
{
lean_object* v___x_548_; 
v___x_548_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_435_, v_post_437_, v___y_449_, v___y_438_, v___y_439_, v___y_440_);
return v___x_548_;
}
}
}
}
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
lean_dec_ref(v_post_437_);
lean_dec_ref(v_e_436_);
lean_dec_ref(v_pre_435_);
v_a_560_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_443_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_443_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
else
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
lean_dec_ref(v_post_437_);
lean_dec_ref(v_e_436_);
lean_dec_ref(v_pre_435_);
v_a_568_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_575_ == 0)
{
v___x_570_ = v___x_442_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___x_442_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_a_568_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___boxed(lean_object* v___x_576_, lean_object* v_pre_577_, lean_object* v_e_578_, lean_object* v_post_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1(v___x_576_, v_pre_577_, v_e_578_, v_post_579_, v___y_580_, v___y_581_, v___y_582_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v___y_580_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(lean_object* v_pre_585_, lean_object* v_post_586_, lean_object* v_e_587_, lean_object* v_a_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
lean_inc(v_a_588_);
v___x_592_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_592_, 0, lean_box(0));
lean_closure_set(v___x_592_, 1, lean_box(0));
lean_closure_set(v___x_592_, 2, v_a_588_);
v___x_593_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_box(0), v___x_592_, v___y_589_, v___y_590_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_625_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_625_ == 0)
{
v___x_596_ = v___x_593_;
v_isShared_597_ = v_isSharedCheck_625_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_593_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_625_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_598_; 
v___x_598_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg(v_a_594_, v_e_587_);
lean_dec(v_a_594_);
if (lean_obj_tag(v___x_598_) == 0)
{
lean_object* v___x_599_; lean_object* v___f_600_; lean_object* v___x_601_; 
lean_del_object(v___x_596_);
v___x_599_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___closed__0));
lean_inc_ref(v_e_587_);
v___f_600_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___boxed), 8, 4);
lean_closure_set(v___f_600_, 0, v___x_599_);
lean_closure_set(v___f_600_, 1, v_pre_585_);
lean_closure_set(v___f_600_, 2, v_e_587_);
lean_closure_set(v___f_600_, 3, v_post_586_);
v___x_601_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(v___f_600_, v_a_588_, v___y_589_, v___y_590_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___f_603_; lean_object* v___x_604_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc_n(v_a_602_, 2);
lean_dec_ref_known(v___x_601_, 1);
lean_inc(v_a_588_);
v___f_603_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_603_, 0, v_a_588_);
lean_closure_set(v___f_603_, 1, v_e_587_);
lean_closure_set(v___f_603_, 2, v_a_602_);
v___x_604_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_box(0), v___f_603_, v___y_589_, v___y_590_);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_611_; 
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_611_ == 0)
{
lean_object* v_unused_612_; 
v_unused_612_ = lean_ctor_get(v___x_604_, 0);
lean_dec(v_unused_612_);
v___x_606_ = v___x_604_;
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
else
{
lean_dec(v___x_604_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_609_; 
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v_a_602_);
v___x_609_ = v___x_606_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_602_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec(v_a_602_);
v_a_613_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_604_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_604_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
else
{
lean_dec_ref(v_e_587_);
return v___x_601_;
}
}
else
{
lean_object* v_val_621_; lean_object* v___x_623_; 
lean_dec_ref(v_e_587_);
lean_dec_ref(v_post_586_);
lean_dec_ref(v_pre_585_);
v_val_621_ = lean_ctor_get(v___x_598_, 0);
lean_inc(v_val_621_);
lean_dec_ref_known(v___x_598_, 1);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v_val_621_);
v___x_623_ = v___x_596_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_val_621_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec_ref(v_e_587_);
lean_dec_ref(v_post_586_);
lean_dec_ref(v_pre_585_);
v_a_626_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_593_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_593_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(lean_object* v_pre_634_, lean_object* v_post_635_, lean_object* v_e_636_, lean_object* v_a_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
lean_object* v___x_641_; 
lean_inc_ref(v_post_635_);
lean_inc(v___y_639_);
lean_inc_ref(v___y_638_);
lean_inc_ref(v_e_636_);
v___x_641_ = lean_apply_4(v_post_635_, v_e_636_, v___y_638_, v___y_639_, lean_box(0));
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_660_; 
v_a_642_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_660_ == 0)
{
v___x_644_ = v___x_641_;
v_isShared_645_ = v_isSharedCheck_660_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_641_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_660_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
switch(lean_obj_tag(v_a_642_))
{
case 0:
{
lean_object* v_e_646_; lean_object* v___x_648_; 
lean_dec_ref(v_e_636_);
lean_dec_ref(v_post_635_);
lean_dec_ref(v_pre_634_);
v_e_646_ = lean_ctor_get(v_a_642_, 0);
lean_inc_ref(v_e_646_);
lean_dec_ref_known(v_a_642_, 1);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v_e_646_);
v___x_648_ = v___x_644_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_e_646_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
case 1:
{
lean_object* v_e_650_; lean_object* v___x_651_; 
lean_del_object(v___x_644_);
lean_dec_ref(v_e_636_);
v_e_650_ = lean_ctor_get(v_a_642_, 0);
lean_inc_ref(v_e_650_);
lean_dec_ref_known(v_a_642_, 1);
v___x_651_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_634_, v_post_635_, v_e_650_, v_a_637_, v___y_638_, v___y_639_);
return v___x_651_;
}
default: 
{
lean_object* v_e_x3f_652_; 
lean_dec_ref(v_post_635_);
lean_dec_ref(v_pre_634_);
v_e_x3f_652_ = lean_ctor_get(v_a_642_, 0);
lean_inc(v_e_x3f_652_);
lean_dec_ref_known(v_a_642_, 1);
if (lean_obj_tag(v_e_x3f_652_) == 0)
{
lean_object* v___x_654_; 
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v_e_636_);
v___x_654_ = v___x_644_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_e_636_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
else
{
lean_object* v_val_656_; lean_object* v___x_658_; 
lean_dec_ref(v_e_636_);
v_val_656_ = lean_ctor_get(v_e_x3f_652_, 0);
lean_inc(v_val_656_);
lean_dec_ref_known(v_e_x3f_652_, 1);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v_val_656_);
v___x_658_ = v___x_644_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_val_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
}
}
else
{
lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_668_; 
lean_dec_ref(v_e_636_);
lean_dec_ref(v_post_635_);
lean_dec_ref(v_pre_634_);
v_a_661_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_668_ == 0)
{
v___x_663_ = v___x_641_;
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v___x_641_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_666_; 
if (v_isShared_664_ == 0)
{
v___x_666_ = v___x_663_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_a_661_);
v___x_666_ = v_reuseFailAlloc_667_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
return v___x_666_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_669_, lean_object* v_post_670_, lean_object* v_e_671_, lean_object* v_a_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_669_, v_post_670_, v_e_671_, v_a_672_, v___y_673_, v___y_674_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec(v_a_672_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_677_, lean_object* v_post_678_, lean_object* v_x_679_, lean_object* v_x_680_, lean_object* v_x_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(v_pre_677_, v_post_678_, v_x_679_, v_x_680_, v_x_681_, v___y_682_, v___y_683_, v___y_684_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___boxed(lean_object* v_pre_687_, lean_object* v_post_688_, lean_object* v_e_689_, lean_object* v_a_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_687_, v_post_688_, v_e_689_, v_a_690_, v___y_691_, v___y_692_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v_a_690_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_object* v_00_u03b1_695_, lean_object* v_x_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = lean_apply_1(v_x_696_, lean_box(0));
v___x_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_701_, 0, v___x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0___boxed(lean_object* v_00_u03b1_702_, lean_object* v_x_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(v_00_u03b1_702_, v_x_703_, v___y_704_, v___y_705_);
lean_dec(v___y_705_);
lean_dec_ref(v___y_704_);
return v_res_707_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0(void){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_708_ = lean_box(0);
v___x_709_ = lean_unsigned_to_nat(16u);
v___x_710_ = lean_mk_array(v___x_709_, v___x_708_);
return v___x_710_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_711_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0, &l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0_once, _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0);
v___x_712_ = lean_unsigned_to_nat(0u);
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
lean_ctor_set(v___x_713_, 1, v___x_711_);
return v___x_713_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2(void){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1, &l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1_once, _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1);
v___x_715_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_715_, 0, lean_box(0));
lean_closure_set(v___x_715_, 1, lean_box(0));
lean_closure_set(v___x_715_, 2, v___x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(lean_object* v_input_716_, lean_object* v_pre_717_, lean_object* v_post_718_, lean_object* v___y_719_, lean_object* v___y_720_){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v_a_724_; lean_object* v___x_725_; 
v___x_722_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2, &l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2_once, _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2);
v___x_723_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_box(0), v___x_722_, v___y_719_, v___y_720_);
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref(v___x_723_);
v___x_725_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_717_, v_post_718_, v_input_716_, v_a_724_, v___y_719_, v___y_720_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_725_, 1);
v___x_727_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_727_, 0, lean_box(0));
lean_closure_set(v___x_727_, 1, lean_box(0));
lean_closure_set(v___x_727_, 2, v_a_724_);
v___x_728_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_box(0), v___x_727_, v___y_719_, v___y_720_);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_735_ == 0)
{
lean_object* v_unused_736_; 
v_unused_736_ = lean_ctor_get(v___x_728_, 0);
lean_dec(v_unused_736_);
v___x_730_ = v___x_728_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_dec(v___x_728_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v_a_726_);
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_726_);
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
lean_dec(v_a_724_);
return v___x_725_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___boxed(lean_object* v_input_737_, lean_object* v_pre_738_, lean_object* v_post_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(v_input_737_, v_pre_738_, v_post_739_, v___y_740_, v___y_741_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam(lean_object* v_type_746_, lean_object* v_a_747_, lean_object* v_a_748_){
_start:
{
lean_object* v___f_750_; lean_object* v___f_751_; lean_object* v___x_752_; 
v___f_750_ = ((lean_object*)(l_Lean_Meta_elimOptParam___closed__0));
v___f_751_ = ((lean_object*)(l_Lean_Meta_elimOptParam___closed__1));
v___x_752_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(v_type_746_, v___f_750_, v___f_751_, v_a_747_, v_a_748_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___boxed(lean_object* v_type_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lean_Meta_elimOptParam(v_type_753_, v_a_754_, v_a_755_);
lean_dec(v_a_755_);
lean_dec_ref(v_a_754_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_758_, lean_object* v_m_759_, lean_object* v_a_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___redArg(v_m_759_, v_a_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_762_, lean_object* v_m_763_, lean_object* v_a_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_00_u03b2_762_, v_m_763_, v_a_764_);
lean_dec_ref(v_a_764_);
lean_dec_ref(v_m_763_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_766_, lean_object* v_ref_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_767_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_772_, lean_object* v_ref_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_772_, v_ref_773_, v___y_774_, v___y_775_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8(lean_object* v_00_u03b1_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg();
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___boxed(lean_object* v_00_u03b1_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8(v_00_u03b1_783_, v___y_784_, v___y_785_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_788_, lean_object* v_x_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v___x_794_; 
v___x_794_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(v_x_789_, v___y_790_, v___y_791_, v___y_792_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_795_, lean_object* v_x_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5(v_00_u03b1_795_, v_x_796_, v___y_797_, v___y_798_, v___y_799_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_802_, lean_object* v_m_803_, lean_object* v_a_804_, lean_object* v_b_805_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(v_m_803_, v_a_804_, v_b_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_807_, lean_object* v_a_808_, lean_object* v_x_809_){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___redArg(v_a_808_, v_x_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_811_, lean_object* v_a_812_, lean_object* v_x_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_811_, v_a_812_, v_x_813_);
lean_dec(v_x_813_);
lean_dec_ref(v_a_812_);
return v_res_814_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_815_, lean_object* v_a_816_, lean_object* v_x_817_){
_start:
{
uint8_t v___x_818_; 
v___x_818_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(v_a_816_, v_x_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___boxed(lean_object* v_00_u03b2_819_, lean_object* v_a_820_, lean_object* v_x_821_){
_start:
{
uint8_t v_res_822_; lean_object* v_r_823_; 
v_res_822_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10(v_00_u03b2_819_, v_a_820_, v_x_821_);
lean_dec(v_x_821_);
lean_dec_ref(v_a_820_);
v_r_823_ = lean_box(v_res_822_);
return v_r_823_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_824_, lean_object* v_data_825_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(v_data_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12(lean_object* v_00_u03b2_827_, lean_object* v_a_828_, lean_object* v_b_829_, lean_object* v_x_830_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12___redArg(v_a_828_, v_b_829_, v_x_830_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object* v_00_u03b2_832_, lean_object* v_i_833_, lean_object* v_source_834_, lean_object* v_target_835_){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v_i_833_, v_source_834_, v_target_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_837_, lean_object* v_x_838_, lean_object* v_x_839_){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_x_838_, v_x_839_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(uint8_t v_skipIfPropOrEq_841_, lean_object* v_as_842_, size_t v_sz_843_, size_t v_i_844_, lean_object* v_b_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_){
_start:
{
lean_object* v_a_852_; uint8_t v___x_856_; 
v___x_856_ = lean_usize_dec_lt(v_i_844_, v_sz_843_);
if (v___x_856_ == 0)
{
lean_object* v___x_857_; 
v___x_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_857_, 0, v_b_845_);
return v___x_857_;
}
else
{
lean_object* v_snd_858_; lean_object* v_fst_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_937_; 
v_snd_858_ = lean_ctor_get(v_b_845_, 1);
v_fst_859_ = lean_ctor_get(v_b_845_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v_b_845_);
if (v_isSharedCheck_937_ == 0)
{
v___x_861_ = v_b_845_;
v_isShared_862_ = v_isSharedCheck_937_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_snd_858_);
lean_inc(v_fst_859_);
lean_dec(v_b_845_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_937_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v_array_863_; lean_object* v_start_864_; lean_object* v_stop_865_; uint8_t v___x_866_; 
v_array_863_ = lean_ctor_get(v_snd_858_, 0);
v_start_864_ = lean_ctor_get(v_snd_858_, 1);
v_stop_865_ = lean_ctor_get(v_snd_858_, 2);
v___x_866_ = lean_nat_dec_lt(v_start_864_, v_stop_865_);
if (v___x_866_ == 0)
{
lean_object* v___x_868_; 
if (v_isShared_862_ == 0)
{
v___x_868_ = v___x_861_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_fst_859_);
lean_ctor_set(v_reuseFailAlloc_870_, 1, v_snd_858_);
v___x_868_ = v_reuseFailAlloc_870_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_869_; 
v___x_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
return v___x_869_;
}
}
else
{
lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_933_; 
lean_inc(v_stop_865_);
lean_inc(v_start_864_);
lean_inc_ref(v_array_863_);
v_isSharedCheck_933_ = !lean_is_exclusive(v_snd_858_);
if (v_isSharedCheck_933_ == 0)
{
lean_object* v_unused_934_; lean_object* v_unused_935_; lean_object* v_unused_936_; 
v_unused_934_ = lean_ctor_get(v_snd_858_, 2);
lean_dec(v_unused_934_);
v_unused_935_ = lean_ctor_get(v_snd_858_, 1);
lean_dec(v_unused_935_);
v_unused_936_ = lean_ctor_get(v_snd_858_, 0);
lean_dec(v_unused_936_);
v___x_872_ = v_snd_858_;
v_isShared_873_ = v_isSharedCheck_933_;
goto v_resetjp_871_;
}
else
{
lean_dec(v_snd_858_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_933_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v_a_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_879_; 
v_a_874_ = lean_array_uget_borrowed(v_as_842_, v_i_844_);
v___x_875_ = lean_array_fget(v_array_863_, v_start_864_);
v___x_876_ = lean_unsigned_to_nat(1u);
v___x_877_ = lean_nat_add(v_start_864_, v___x_876_);
lean_dec(v_start_864_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 1, v___x_877_);
v___x_879_ = v___x_872_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_array_863_);
lean_ctor_set(v_reuseFailAlloc_932_, 1, v___x_877_);
lean_ctor_set(v_reuseFailAlloc_932_, 2, v_stop_865_);
v___x_879_ = v_reuseFailAlloc_932_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_object* v___x_880_; 
lean_inc(v___y_849_);
lean_inc_ref(v___y_848_);
lean_inc(v___y_847_);
lean_inc_ref(v___y_846_);
lean_inc(v_a_874_);
v___x_880_ = lean_infer_type(v_a_874_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
if (lean_obj_tag(v___x_880_) == 0)
{
if (v_skipIfPropOrEq_841_ == 0)
{
lean_object* v___x_881_; 
lean_dec_ref_known(v___x_880_, 1);
lean_inc(v_a_874_);
v___x_881_ = l_Lean_Meta_mkEqHEq(v_a_874_, v___x_875_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_882_);
lean_dec_ref_known(v___x_881_, 1);
v___x_883_ = lean_array_push(v_fst_859_, v_a_882_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 1, v___x_879_);
lean_ctor_set(v___x_861_, 0, v___x_883_);
v___x_885_ = v___x_861_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_883_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v___x_879_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
v_a_852_ = v___x_885_;
goto v___jp_851_;
}
}
else
{
lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_894_; 
lean_dec_ref(v___x_879_);
lean_del_object(v___x_861_);
lean_dec(v_fst_859_);
v_a_887_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_894_ == 0)
{
v___x_889_ = v___x_881_;
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_dec(v___x_881_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_892_; 
if (v_isShared_890_ == 0)
{
v___x_892_ = v___x_889_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_a_887_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
else
{
lean_object* v_a_895_; lean_object* v___x_896_; 
v_a_895_ = lean_ctor_get(v___x_880_, 0);
lean_inc(v_a_895_);
lean_dec_ref_known(v___x_880_, 1);
v___x_896_ = l_Lean_Meta_isProp(v_a_895_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; uint8_t v___x_902_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_896_, 1);
v___x_902_ = lean_unbox(v_a_897_);
lean_dec(v_a_897_);
if (v___x_902_ == 0)
{
uint8_t v___x_903_; 
v___x_903_ = lean_expr_eqv(v_a_874_, v___x_875_);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; 
lean_del_object(v___x_861_);
lean_inc(v_a_874_);
v___x_904_ = l_Lean_Meta_mkEqHEq(v_a_874_, v___x_875_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_904_, 1);
v___x_906_ = lean_array_push(v_fst_859_, v_a_905_);
v___x_907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_907_, 0, v___x_906_);
lean_ctor_set(v___x_907_, 1, v___x_879_);
v_a_852_ = v___x_907_;
goto v___jp_851_;
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
lean_dec_ref(v___x_879_);
lean_dec(v_fst_859_);
v_a_908_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_904_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_904_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
else
{
lean_dec(v___x_875_);
goto v___jp_898_;
}
}
else
{
lean_dec(v___x_875_);
goto v___jp_898_;
}
v___jp_898_:
{
lean_object* v___x_900_; 
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 1, v___x_879_);
v___x_900_ = v___x_861_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_fst_859_);
lean_ctor_set(v_reuseFailAlloc_901_, 1, v___x_879_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
v_a_852_ = v___x_900_;
goto v___jp_851_;
}
}
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
lean_dec_ref(v___x_879_);
lean_dec(v___x_875_);
lean_del_object(v___x_861_);
lean_dec(v_fst_859_);
v_a_916_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_896_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_896_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec_ref(v___x_879_);
lean_dec(v___x_875_);
lean_del_object(v___x_861_);
lean_dec(v_fst_859_);
v_a_924_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_880_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_880_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
}
}
}
}
v___jp_851_:
{
size_t v___x_853_; size_t v___x_854_; 
v___x_853_ = ((size_t)1ULL);
v___x_854_ = lean_usize_add(v_i_844_, v___x_853_);
v_i_844_ = v___x_854_;
v_b_845_ = v_a_852_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0___boxed(lean_object* v_skipIfPropOrEq_938_, lean_object* v_as_939_, lean_object* v_sz_940_, lean_object* v_i_941_, lean_object* v_b_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
uint8_t v_skipIfPropOrEq_boxed_948_; size_t v_sz_boxed_949_; size_t v_i_boxed_950_; lean_object* v_res_951_; 
v_skipIfPropOrEq_boxed_948_ = lean_unbox(v_skipIfPropOrEq_938_);
v_sz_boxed_949_ = lean_unbox_usize(v_sz_940_);
lean_dec(v_sz_940_);
v_i_boxed_950_ = lean_unbox_usize(v_i_941_);
lean_dec(v_i_941_);
v_res_951_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(v_skipIfPropOrEq_boxed_948_, v_as_939_, v_sz_boxed_949_, v_i_boxed_950_, v_b_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec_ref(v_as_939_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(lean_object* v_args1_954_, lean_object* v_args2_955_, uint8_t v_skipIfPropOrEq_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
lean_object* v___x_962_; lean_object* v_eqs_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; size_t v_sz_967_; size_t v___x_968_; lean_object* v___x_969_; 
v___x_962_ = lean_unsigned_to_nat(0u);
v_eqs_963_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_964_ = lean_array_get_size(v_args2_955_);
v___x_965_ = l_Array_toSubarray___redArg(v_args2_955_, v___x_962_, v___x_964_);
v___x_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_966_, 0, v_eqs_963_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v_sz_967_ = lean_array_size(v_args1_954_);
v___x_968_ = ((size_t)0ULL);
v___x_969_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(v_skipIfPropOrEq_956_, v_args1_954_, v_sz_967_, v___x_968_, v___x_966_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_978_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_978_ == 0)
{
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_978_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_978_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v_fst_974_; lean_object* v___x_976_; 
v_fst_974_ = lean_ctor_get(v_a_970_, 0);
lean_inc(v_fst_974_);
lean_dec(v_a_970_);
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 0, v_fst_974_);
v___x_976_ = v___x_972_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_fst_974_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
else
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
v_a_979_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_969_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_969_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___boxed(lean_object* v_args1_987_, lean_object* v_args2_988_, lean_object* v_skipIfPropOrEq_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_){
_start:
{
uint8_t v_skipIfPropOrEq_boxed_995_; lean_object* v_res_996_; 
v_skipIfPropOrEq_boxed_995_ = lean_unbox(v_skipIfPropOrEq_989_);
v_res_996_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v_args1_987_, v_args2_988_, v_skipIfPropOrEq_boxed_995_, v_a_990_, v_a_991_, v_a_992_, v_a_993_);
lean_dec(v_a_993_);
lean_dec_ref(v_a_992_);
lean_dec(v_a_991_);
lean_dec_ref(v_a_990_);
lean_dec_ref(v_args1_987_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0(lean_object* v_k_997_, lean_object* v_b_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v___x_1004_; 
lean_inc(v___y_1002_);
lean_inc_ref(v___y_1001_);
lean_inc(v___y_1000_);
lean_inc_ref(v___y_999_);
v___x_1004_ = lean_apply_6(v_k_997_, v_b_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, lean_box(0));
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0___boxed(lean_object* v_k_1005_, lean_object* v_b_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0(v_k_1005_, v_b_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_);
lean_dec(v___y_1010_);
lean_dec_ref(v___y_1009_);
lean_dec(v___y_1008_);
lean_dec_ref(v___y_1007_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(lean_object* v_name_1013_, uint8_t v_bi_1014_, lean_object* v_type_1015_, lean_object* v_k_1016_, uint8_t v_kind_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v___f_1023_; lean_object* v___x_1024_; 
v___f_1023_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1023_, 0, v_k_1016_);
v___x_1024_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1013_, v_bi_1014_, v_type_1015_, v___f_1023_, v_kind_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1024_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1024_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
else
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
v_a_1033_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_1024_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1024_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___boxed(lean_object* v_name_1041_, lean_object* v_bi_1042_, lean_object* v_type_1043_, lean_object* v_k_1044_, lean_object* v_kind_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
uint8_t v_bi_boxed_1051_; uint8_t v_kind_boxed_1052_; lean_object* v_res_1053_; 
v_bi_boxed_1051_ = lean_unbox(v_bi_1042_);
v_kind_boxed_1052_ = lean_unbox(v_kind_1045_);
v_res_1053_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_name_1041_, v_bi_boxed_1051_, v_type_1043_, v_k_1044_, v_kind_boxed_1052_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0(lean_object* v_00_u03b1_1054_, lean_object* v_name_1055_, uint8_t v_bi_1056_, lean_object* v_type_1057_, lean_object* v_k_1058_, uint8_t v_kind_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_name_1055_, v_bi_1056_, v_type_1057_, v_k_1058_, v_kind_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___boxed(lean_object* v_00_u03b1_1066_, lean_object* v_name_1067_, lean_object* v_bi_1068_, lean_object* v_type_1069_, lean_object* v_k_1070_, lean_object* v_kind_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
uint8_t v_bi_boxed_1077_; uint8_t v_kind_boxed_1078_; lean_object* v_res_1079_; 
v_bi_boxed_1077_ = lean_unbox(v_bi_1068_);
v_kind_boxed_1078_ = lean_unbox(v_kind_1071_);
v_res_1079_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0(v_00_u03b1_1066_, v_name_1067_, v_bi_boxed_1077_, v_type_1069_, v_k_1070_, v_kind_boxed_1078_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(lean_object* v_msgData_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_){
_start:
{
lean_object* v___x_1086_; lean_object* v_env_1087_; lean_object* v___x_1088_; lean_object* v_toCold_1089_; lean_object* v_mctx_1090_; lean_object* v_lctx_1091_; lean_object* v_options_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1086_ = lean_st_ref_get(v___y_1084_);
v_env_1087_ = lean_ctor_get(v___x_1086_, 0);
lean_inc_ref(v_env_1087_);
lean_dec(v___x_1086_);
v___x_1088_ = lean_st_ref_get(v___y_1082_);
v_toCold_1089_ = lean_ctor_get(v___y_1083_, 0);
v_mctx_1090_ = lean_ctor_get(v___x_1088_, 0);
lean_inc_ref(v_mctx_1090_);
lean_dec(v___x_1088_);
v_lctx_1091_ = lean_ctor_get(v___y_1081_, 2);
v_options_1092_ = lean_ctor_get(v_toCold_1089_, 2);
lean_inc_ref(v_options_1092_);
lean_inc_ref(v_lctx_1091_);
v___x_1093_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1093_, 0, v_env_1087_);
lean_ctor_set(v___x_1093_, 1, v_mctx_1090_);
lean_ctor_set(v___x_1093_, 2, v_lctx_1091_);
lean_ctor_set(v___x_1093_, 3, v_options_1092_);
v___x_1094_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1093_);
lean_ctor_set(v___x_1094_, 1, v_msgData_1080_);
v___x_1095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1___boxed(lean_object* v_msgData_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msgData_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(lean_object* v_msg_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v_ref_1109_; lean_object* v___x_1110_; lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1119_; 
v_ref_1109_ = lean_ctor_get(v___y_1106_, 2);
v___x_1110_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msg_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1113_ = v___x_1110_;
v_isShared_1114_ = v_isSharedCheck_1119_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1110_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1119_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; lean_object* v___x_1117_; 
lean_inc(v_ref_1109_);
v___x_1115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1115_, 0, v_ref_1109_);
lean_ctor_set(v___x_1115_, 1, v_a_1111_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set_tag(v___x_1113_, 1);
lean_ctor_set(v___x_1113_, 0, v___x_1115_);
v___x_1117_ = v___x_1113_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg___boxed(lean_object* v_msg_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v_msg_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0___boxed(lean_object* v_i_1127_, lean_object* v_body_1128_, lean_object* v_args2_1129_, lean_object* v_args2New_1130_, lean_object* v_ctorVal_1131_, lean_object* v_useEq_1132_, lean_object* v_args1_1133_, lean_object* v_resultType_1134_, lean_object* v_k_1135_, lean_object* v_arg2_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
uint8_t v_useEq_boxed_1142_; lean_object* v_res_1143_; 
v_useEq_boxed_1142_ = lean_unbox(v_useEq_1132_);
v_res_1143_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0(v_i_1127_, v_body_1128_, v_args2_1129_, v_args2New_1130_, v_ctorVal_1131_, v_useEq_boxed_1142_, v_args1_1133_, v_resultType_1134_, v_k_1135_, v_arg2_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec_ref(v_body_1128_);
lean_dec(v_i_1127_);
return v_res_1143_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1(void){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0));
v___x_1146_ = l_Lean_stringToMessageData(v___x_1145_);
return v___x_1146_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3(void){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1148_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2));
v___x_1149_ = l_Lean_stringToMessageData(v___x_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(lean_object* v_ctorVal_1150_, uint8_t v_useEq_1151_, lean_object* v_args1_1152_, lean_object* v_resultType_1153_, lean_object* v_k_1154_, lean_object* v_i_1155_, lean_object* v_type_1156_, lean_object* v_args2_1157_, lean_object* v_args2New_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_){
_start:
{
lean_object* v___x_1164_; uint8_t v___x_1165_; 
v___x_1164_ = lean_array_get_size(v_args1_1152_);
v___x_1165_ = lean_nat_dec_lt(v_i_1155_, v___x_1164_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; 
lean_dec_ref(v_type_1156_);
lean_dec(v_i_1155_);
lean_dec_ref(v_resultType_1153_);
lean_dec_ref(v_args1_1152_);
lean_dec_ref(v_ctorVal_1150_);
lean_inc(v_a_1162_);
lean_inc_ref(v_a_1161_);
lean_inc(v_a_1160_);
lean_inc_ref(v_a_1159_);
v___x_1166_ = lean_apply_7(v_k_1154_, v_args2_1157_, v_args2New_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_, lean_box(0));
return v___x_1166_;
}
else
{
lean_object* v___x_1167_; 
lean_inc(v_a_1162_);
lean_inc_ref(v_a_1161_);
lean_inc(v_a_1160_);
lean_inc_ref(v_a_1159_);
v___x_1167_ = lean_whnf(v_type_1156_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v_a_1168_; 
v_a_1168_ = lean_ctor_get(v___x_1167_, 0);
lean_inc(v_a_1168_);
lean_dec_ref_known(v___x_1167_, 1);
if (lean_obj_tag(v_a_1168_) == 7)
{
lean_object* v_binderName_1169_; lean_object* v_binderType_1170_; lean_object* v_body_1171_; lean_object* v_lctx_1172_; lean_object* v___x_1173_; uint8_t v___x_1174_; 
v_binderName_1169_ = lean_ctor_get(v_a_1168_, 0);
lean_inc(v_binderName_1169_);
v_binderType_1170_ = lean_ctor_get(v_a_1168_, 1);
lean_inc_ref(v_binderType_1170_);
v_body_1171_ = lean_ctor_get(v_a_1168_, 2);
lean_inc_ref(v_body_1171_);
lean_dec_ref_known(v_a_1168_, 3);
v_lctx_1172_ = lean_ctor_get(v_a_1159_, 2);
v___x_1173_ = lean_array_fget_borrowed(v_args1_1152_, v_i_1155_);
lean_inc(v___x_1173_);
lean_inc_ref(v_lctx_1172_);
v___x_1174_ = l_Lean_Meta_occursOrInType(v_lctx_1172_, v___x_1173_, v_resultType_1153_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; lean_object* v___f_1176_; uint8_t v___y_1178_; 
v___x_1175_ = lean_box(v_useEq_1151_);
v___f_1176_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1176_, 0, v_i_1155_);
lean_closure_set(v___f_1176_, 1, v_body_1171_);
lean_closure_set(v___f_1176_, 2, v_args2_1157_);
lean_closure_set(v___f_1176_, 3, v_args2New_1158_);
lean_closure_set(v___f_1176_, 4, v_ctorVal_1150_);
lean_closure_set(v___f_1176_, 5, v___x_1175_);
lean_closure_set(v___f_1176_, 6, v_args1_1152_);
lean_closure_set(v___f_1176_, 7, v_resultType_1153_);
lean_closure_set(v___f_1176_, 8, v_k_1154_);
if (v_useEq_1151_ == 0)
{
uint8_t v___x_1181_; 
v___x_1181_ = 1;
v___y_1178_ = v___x_1181_;
goto v___jp_1177_;
}
else
{
uint8_t v___x_1182_; 
v___x_1182_ = 0;
v___y_1178_ = v___x_1182_;
goto v___jp_1177_;
}
v___jp_1177_:
{
uint8_t v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = 0;
v___x_1180_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_binderName_1169_, v___y_1178_, v_binderType_1170_, v___f_1176_, v___x_1179_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_);
return v___x_1180_;
}
}
else
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
lean_dec_ref(v_binderType_1170_);
lean_dec(v_binderName_1169_);
v___x_1183_ = lean_unsigned_to_nat(1u);
v___x_1184_ = lean_nat_add(v_i_1155_, v___x_1183_);
lean_dec(v_i_1155_);
v___x_1185_ = lean_expr_instantiate1(v_body_1171_, v___x_1173_);
lean_dec_ref(v_body_1171_);
lean_inc(v___x_1173_);
v___x_1186_ = lean_array_push(v_args2_1157_, v___x_1173_);
v_i_1155_ = v___x_1184_;
v_type_1156_ = v___x_1185_;
v_args2_1157_ = v___x_1186_;
goto _start;
}
}
else
{
lean_object* v_toConstantVal_1188_; lean_object* v_name_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
lean_dec(v_a_1168_);
lean_dec_ref(v_args2New_1158_);
lean_dec_ref(v_args2_1157_);
lean_dec(v_i_1155_);
lean_dec_ref(v_k_1154_);
lean_dec_ref(v_resultType_1153_);
lean_dec_ref(v_args1_1152_);
v_toConstantVal_1188_ = lean_ctor_get(v_ctorVal_1150_, 0);
lean_inc_ref(v_toConstantVal_1188_);
lean_dec_ref(v_ctorVal_1150_);
v_name_1189_ = lean_ctor_get(v_toConstantVal_1188_, 0);
lean_inc(v_name_1189_);
lean_dec_ref(v_toConstantVal_1188_);
v___x_1190_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1);
v___x_1191_ = l_Lean_MessageData_ofName(v_name_1189_);
v___x_1192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1190_);
lean_ctor_set(v___x_1192_, 1, v___x_1191_);
v___x_1193_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_1194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1192_);
lean_ctor_set(v___x_1194_, 1, v___x_1193_);
v___x_1195_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_1194_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_);
return v___x_1195_;
}
}
else
{
lean_object* v_a_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1203_; 
lean_dec_ref(v_args2New_1158_);
lean_dec_ref(v_args2_1157_);
lean_dec(v_i_1155_);
lean_dec_ref(v_k_1154_);
lean_dec_ref(v_resultType_1153_);
lean_dec_ref(v_args1_1152_);
lean_dec_ref(v_ctorVal_1150_);
v_a_1196_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1198_ = v___x_1167_;
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v___x_1167_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1201_; 
if (v_isShared_1199_ == 0)
{
v___x_1201_ = v___x_1198_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_a_1196_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0(lean_object* v_i_1204_, lean_object* v_body_1205_, lean_object* v_args2_1206_, lean_object* v_args2New_1207_, lean_object* v_ctorVal_1208_, uint8_t v_useEq_1209_, lean_object* v_args1_1210_, lean_object* v_resultType_1211_, lean_object* v_k_1212_, lean_object* v_arg2_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1219_ = lean_unsigned_to_nat(1u);
v___x_1220_ = lean_nat_add(v_i_1204_, v___x_1219_);
v___x_1221_ = lean_expr_instantiate1(v_body_1205_, v_arg2_1213_);
lean_inc_ref(v_arg2_1213_);
v___x_1222_ = lean_array_push(v_args2_1206_, v_arg2_1213_);
v___x_1223_ = lean_array_push(v_args2New_1207_, v_arg2_1213_);
v___x_1224_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(v_ctorVal_1208_, v_useEq_1209_, v_args1_1210_, v_resultType_1211_, v_k_1212_, v___x_1220_, v___x_1221_, v___x_1222_, v___x_1223_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___boxed(lean_object* v_ctorVal_1225_, lean_object* v_useEq_1226_, lean_object* v_args1_1227_, lean_object* v_resultType_1228_, lean_object* v_k_1229_, lean_object* v_i_1230_, lean_object* v_type_1231_, lean_object* v_args2_1232_, lean_object* v_args2New_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_){
_start:
{
uint8_t v_useEq_boxed_1239_; lean_object* v_res_1240_; 
v_useEq_boxed_1239_ = lean_unbox(v_useEq_1226_);
v_res_1240_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(v_ctorVal_1225_, v_useEq_boxed_1239_, v_args1_1227_, v_resultType_1228_, v_k_1229_, v_i_1230_, v_type_1231_, v_args2_1232_, v_args2New_1233_, v_a_1234_, v_a_1235_, v_a_1236_, v_a_1237_);
lean_dec(v_a_1237_);
lean_dec_ref(v_a_1236_);
lean_dec(v_a_1235_);
lean_dec_ref(v_a_1234_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1(lean_object* v_00_u03b1_1241_, lean_object* v_msg_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
lean_object* v___x_1248_; 
v___x_1248_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v_msg_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
return v___x_1248_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___boxed(lean_object* v_00_u03b1_1249_, lean_object* v_msg_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1(v_00_u03b1_1249_, v_msg_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter___redArg(lean_object* v_____x_1257_, lean_object* v_h__1_1258_, lean_object* v_h__2_1259_){
_start:
{
if (lean_obj_tag(v_____x_1257_) == 7)
{
lean_object* v_binderName_1260_; lean_object* v_binderType_1261_; lean_object* v_body_1262_; uint8_t v_binderInfo_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
lean_dec(v_h__2_1259_);
v_binderName_1260_ = lean_ctor_get(v_____x_1257_, 0);
lean_inc(v_binderName_1260_);
v_binderType_1261_ = lean_ctor_get(v_____x_1257_, 1);
lean_inc_ref(v_binderType_1261_);
v_body_1262_ = lean_ctor_get(v_____x_1257_, 2);
lean_inc_ref(v_body_1262_);
v_binderInfo_1263_ = lean_ctor_get_uint8(v_____x_1257_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_____x_1257_, 3);
v___x_1264_ = lean_box(v_binderInfo_1263_);
v___x_1265_ = lean_apply_4(v_h__1_1258_, v_binderName_1260_, v_binderType_1261_, v_body_1262_, v___x_1264_);
return v___x_1265_;
}
else
{
lean_object* v___x_1266_; 
lean_dec(v_h__1_1258_);
v___x_1266_ = lean_apply_2(v_h__2_1259_, v_____x_1257_, lean_box(0));
return v___x_1266_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter(lean_object* v_motive_1267_, lean_object* v_____x_1268_, lean_object* v_h__1_1269_, lean_object* v_h__2_1270_){
_start:
{
if (lean_obj_tag(v_____x_1268_) == 7)
{
lean_object* v_binderName_1271_; lean_object* v_binderType_1272_; lean_object* v_body_1273_; uint8_t v_binderInfo_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
lean_dec(v_h__2_1270_);
v_binderName_1271_ = lean_ctor_get(v_____x_1268_, 0);
lean_inc(v_binderName_1271_);
v_binderType_1272_ = lean_ctor_get(v_____x_1268_, 1);
lean_inc_ref(v_binderType_1272_);
v_body_1273_ = lean_ctor_get(v_____x_1268_, 2);
lean_inc_ref(v_body_1273_);
v_binderInfo_1274_ = lean_ctor_get_uint8(v_____x_1268_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_____x_1268_, 3);
v___x_1275_ = lean_box(v_binderInfo_1274_);
v___x_1276_ = lean_apply_4(v_h__1_1269_, v_binderName_1271_, v_binderType_1272_, v_body_1273_, v___x_1275_);
return v___x_1276_;
}
else
{
lean_object* v___x_1277_; 
lean_dec(v_h__1_1269_);
v___x_1277_ = lean_apply_2(v_h__2_1270_, v_____x_1268_, lean_box(0));
return v___x_1277_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0(lean_object* v_k_1278_, lean_object* v_b_1279_, lean_object* v_c_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v___x_1286_; 
lean_inc(v___y_1284_);
lean_inc_ref(v___y_1283_);
lean_inc(v___y_1282_);
lean_inc_ref(v___y_1281_);
v___x_1286_ = lean_apply_7(v_k_1278_, v_b_1279_, v_c_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, lean_box(0));
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed(lean_object* v_k_1287_, lean_object* v_b_1288_, lean_object* v_c_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0(v_k_1287_, v_b_1288_, v_c_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_);
lean_dec(v___y_1293_);
lean_dec_ref(v___y_1292_);
lean_dec(v___y_1291_);
lean_dec_ref(v___y_1290_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(lean_object* v_type_1296_, lean_object* v_k_1297_, uint8_t v_cleanupAnnotations_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v___f_1304_; uint8_t v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___f_1304_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1304_, 0, v_k_1297_);
v___x_1305_ = 0;
v___x_1306_ = lean_box(0);
v___x_1307_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_1305_, v___x_1306_, v_type_1296_, v___f_1304_, v_cleanupAnnotations_1298_, v___x_1305_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1315_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1315_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1310_ = v___x_1307_;
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_a_1308_);
lean_dec(v___x_1307_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v___x_1313_; 
if (v_isShared_1311_ == 0)
{
v___x_1313_ = v___x_1310_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_a_1308_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
else
{
lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
v_a_1316_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1318_ = v___x_1307_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_dec(v___x_1307_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1316_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___boxed(lean_object* v_type_1324_, lean_object* v_k_1325_, lean_object* v_cleanupAnnotations_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1332_; lean_object* v_res_1333_; 
v_cleanupAnnotations_boxed_1332_ = lean_unbox(v_cleanupAnnotations_1326_);
v_res_1333_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_type_1324_, v_k_1325_, v_cleanupAnnotations_boxed_1332_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2(lean_object* v_00_u03b1_1334_, lean_object* v_type_1335_, lean_object* v_k_1336_, uint8_t v_cleanupAnnotations_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_){
_start:
{
lean_object* v___x_1343_; 
v___x_1343_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_type_1335_, v_k_1336_, v_cleanupAnnotations_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___boxed(lean_object* v_00_u03b1_1344_, lean_object* v_type_1345_, lean_object* v_k_1346_, lean_object* v_cleanupAnnotations_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1353_; lean_object* v_res_1354_; 
v_cleanupAnnotations_boxed_1353_ = lean_unbox(v_cleanupAnnotations_1347_);
v_res_1354_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2(v_00_u03b1_1344_, v_type_1345_, v_k_1346_, v_cleanupAnnotations_boxed_1353_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(lean_object* v_type_1355_, lean_object* v_maxFVars_x3f_1356_, lean_object* v_k_1357_, uint8_t v_cleanupAnnotations_1358_, uint8_t v_whnfType_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v___f_1365_; lean_object* v___x_1366_; 
v___f_1365_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1365_, 0, v_k_1357_);
v___x_1366_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_1355_, v_maxFVars_x3f_1356_, v___f_1365_, v_cleanupAnnotations_1358_, v_whnfType_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1366_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1366_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
v_a_1375_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1366_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1366_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg___boxed(lean_object* v_type_1383_, lean_object* v_maxFVars_x3f_1384_, lean_object* v_k_1385_, lean_object* v_cleanupAnnotations_1386_, lean_object* v_whnfType_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1393_; uint8_t v_whnfType_boxed_1394_; lean_object* v_res_1395_; 
v_cleanupAnnotations_boxed_1393_ = lean_unbox(v_cleanupAnnotations_1386_);
v_whnfType_boxed_1394_ = lean_unbox(v_whnfType_1387_);
v_res_1395_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(v_type_1383_, v_maxFVars_x3f_1384_, v_k_1385_, v_cleanupAnnotations_boxed_1393_, v_whnfType_boxed_1394_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
return v_res_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3(lean_object* v_00_u03b1_1396_, lean_object* v_type_1397_, lean_object* v_maxFVars_x3f_1398_, lean_object* v_k_1399_, uint8_t v_cleanupAnnotations_1400_, uint8_t v_whnfType_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v___x_1407_; 
v___x_1407_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(v_type_1397_, v_maxFVars_x3f_1398_, v_k_1399_, v_cleanupAnnotations_1400_, v_whnfType_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___boxed(lean_object* v_00_u03b1_1408_, lean_object* v_type_1409_, lean_object* v_maxFVars_x3f_1410_, lean_object* v_k_1411_, lean_object* v_cleanupAnnotations_1412_, lean_object* v_whnfType_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1419_; uint8_t v_whnfType_boxed_1420_; lean_object* v_res_1421_; 
v_cleanupAnnotations_boxed_1419_ = lean_unbox(v_cleanupAnnotations_1412_);
v_whnfType_boxed_1420_ = lean_unbox(v_whnfType_1413_);
v_res_1421_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3(v_00_u03b1_1408_, v_type_1409_, v_maxFVars_x3f_1410_, v_k_1411_, v_cleanupAnnotations_boxed_1419_, v_whnfType_boxed_1420_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_);
lean_dec(v___y_1417_);
lean_dec_ref(v___y_1416_);
lean_dec(v___y_1415_);
lean_dec_ref(v___y_1414_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0(lean_object* v_name_1422_, lean_object* v_us_1423_, lean_object* v_params_1424_, lean_object* v_args1_1425_, uint8_t v_useEq_1426_, lean_object* v_args2_1427_, lean_object* v_args2New_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1434_ = l_Lean_mkConst(v_name_1422_, v_us_1423_);
v___x_1435_ = l_Lean_mkAppN(v___x_1434_, v_params_1424_);
lean_inc_ref(v___x_1435_);
v___x_1436_ = l_Lean_mkAppN(v___x_1435_, v_args1_1425_);
v___x_1437_ = l_Lean_mkAppN(v___x_1435_, v_args2_1427_);
v___x_1438_ = l_Lean_Meta_mkEq(v___x_1436_, v___x_1437_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_a_1439_; uint8_t v___x_1440_; lean_object* v_result_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___x_1487_; 
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
lean_inc(v_a_1439_);
lean_dec_ref_known(v___x_1438_, 1);
v___x_1440_ = 1;
v___x_1487_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v_args1_1425_, v_args2_1427_, v___x_1440_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v_a_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1519_; 
v_a_1488_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1490_ = v___x_1487_;
v_isShared_1491_ = v_isSharedCheck_1519_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_a_1488_);
lean_dec(v___x_1487_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1519_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1492_; 
v___x_1492_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(v_a_1488_);
if (lean_obj_tag(v___x_1492_) == 1)
{
lean_del_object(v___x_1490_);
if (v_useEq_1426_ == 0)
{
lean_object* v_val_1493_; lean_object* v___x_1494_; 
v_val_1493_ = lean_ctor_get(v___x_1492_, 0);
lean_inc(v_val_1493_);
lean_dec_ref_known(v___x_1492_, 1);
v___x_1494_ = l_Lean_mkArrow(v_a_1439_, v_val_1493_, v___y_1431_, v___y_1432_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1495_);
lean_dec_ref_known(v___x_1494_, 1);
v_result_1442_ = v_a_1495_;
v___y_1443_ = v___y_1429_;
v___y_1444_ = v___y_1430_;
v___y_1445_ = v___y_1431_;
v___y_1446_ = v___y_1432_;
goto v___jp_1441_;
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
lean_dec_ref(v_args2New_1428_);
lean_dec_ref(v_args1_1425_);
lean_dec_ref(v_params_1424_);
v_a_1496_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1494_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1494_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
else
{
lean_object* v_val_1504_; lean_object* v___x_1505_; 
v_val_1504_ = lean_ctor_get(v___x_1492_, 0);
lean_inc(v_val_1504_);
lean_dec_ref_known(v___x_1492_, 1);
v___x_1505_ = l_Lean_Meta_mkEq(v_a_1439_, v_val_1504_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
lean_dec_ref_known(v___x_1505_, 1);
v_result_1442_ = v_a_1506_;
v___y_1443_ = v___y_1429_;
v___y_1444_ = v___y_1430_;
v___y_1445_ = v___y_1431_;
v___y_1446_ = v___y_1432_;
goto v___jp_1441_;
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
lean_dec_ref(v_args2New_1428_);
lean_dec_ref(v_args1_1425_);
lean_dec_ref(v_params_1424_);
v_a_1507_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1509_ = v___x_1505_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1505_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
else
{
lean_object* v___x_1515_; lean_object* v___x_1517_; 
lean_dec(v___x_1492_);
lean_dec(v_a_1439_);
lean_dec_ref(v_args2New_1428_);
lean_dec_ref(v_args1_1425_);
lean_dec_ref(v_params_1424_);
v___x_1515_ = lean_box(0);
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 0, v___x_1515_);
v___x_1517_ = v___x_1490_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v___x_1515_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
lean_dec(v_a_1439_);
lean_dec_ref(v_args2New_1428_);
lean_dec_ref(v_args1_1425_);
lean_dec_ref(v_params_1424_);
v_a_1520_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1487_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1487_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
v___jp_1441_:
{
uint8_t v___x_1447_; uint8_t v___x_1448_; lean_object* v___x_1449_; 
v___x_1447_ = 0;
v___x_1448_ = 1;
v___x_1449_ = l_Lean_Meta_mkForallFVars(v_args2New_1428_, v_result_1442_, v___x_1447_, v___x_1440_, v___x_1440_, v___x_1448_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v_a_1450_; lean_object* v___x_1451_; 
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_a_1450_);
lean_dec_ref_known(v___x_1449_, 1);
v___x_1451_ = l_Lean_Meta_mkForallFVars(v_args1_1425_, v_a_1450_, v___x_1447_, v___x_1440_, v___x_1440_, v___x_1448_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; lean_object* v___x_1453_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1452_);
lean_dec_ref_known(v___x_1451_, 1);
v___x_1453_ = l_Lean_Meta_mkForallFVars(v_params_1424_, v_a_1452_, v___x_1447_, v___x_1440_, v___x_1440_, v___x_1448_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
if (lean_obj_tag(v___x_1453_) == 0)
{
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1462_; 
v_a_1454_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1456_ = v___x_1453_;
v_isShared_1457_ = v_isSharedCheck_1462_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1453_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1462_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1458_; lean_object* v___x_1460_; 
v___x_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1458_, 0, v_a_1454_);
if (v_isShared_1457_ == 0)
{
lean_ctor_set(v___x_1456_, 0, v___x_1458_);
v___x_1460_ = v___x_1456_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v___x_1458_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
else
{
lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1470_; 
v_a_1463_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1465_ = v___x_1453_;
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_dec(v___x_1453_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___x_1468_; 
if (v_isShared_1466_ == 0)
{
v___x_1468_ = v___x_1465_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v_a_1463_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
lean_dec_ref(v_params_1424_);
v_a_1471_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1451_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1451_);
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
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref(v_args1_1425_);
lean_dec_ref(v_params_1424_);
v_a_1479_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1449_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1449_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1535_; 
lean_dec_ref(v_args2New_1428_);
lean_dec_ref(v_args2_1427_);
lean_dec_ref(v_args1_1425_);
lean_dec_ref(v_params_1424_);
v_a_1528_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1530_ = v___x_1438_;
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1438_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1531_ == 0)
{
v___x_1533_ = v___x_1530_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_a_1528_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0___boxed(lean_object* v_name_1536_, lean_object* v_us_1537_, lean_object* v_params_1538_, lean_object* v_args1_1539_, lean_object* v_useEq_1540_, lean_object* v_args2_1541_, lean_object* v_args2New_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
uint8_t v_useEq_boxed_1548_; lean_object* v_res_1549_; 
v_useEq_boxed_1548_ = lean_unbox(v_useEq_1540_);
v_res_1549_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0(v_name_1536_, v_us_1537_, v_params_1538_, v_args1_1539_, v_useEq_boxed_1548_, v_args2_1541_, v_args2New_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(size_t v_sz_1550_, size_t v_i_1551_, lean_object* v_bs_1552_){
_start:
{
uint8_t v___x_1553_; 
v___x_1553_ = lean_usize_dec_lt(v_i_1551_, v_sz_1550_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1554_; 
v___x_1554_ = l_unsafeCast___redArg(v_bs_1552_);
lean_dec_ref(v_bs_1552_);
return v___x_1554_;
}
else
{
lean_object* v_v_1555_; lean_object* v___x_1556_; lean_object* v_bs_x27_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; uint8_t v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; size_t v___x_1563_; size_t v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v_v_1555_ = lean_array_uget(v_bs_1552_, v_i_1551_);
v___x_1556_ = lean_unsigned_to_nat(0u);
v_bs_x27_1557_ = lean_array_uset(v_bs_1552_, v_i_1551_, v___x_1556_);
v___x_1558_ = l_unsafeCast___redArg(v_v_1555_);
lean_dec(v_v_1555_);
v___x_1559_ = l_Lean_Expr_fvarId_x21(v___x_1558_);
lean_dec(v___x_1558_);
v___x_1560_ = 1;
v___x_1561_ = lean_box(v___x_1560_);
v___x_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1559_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
v___x_1563_ = ((size_t)1ULL);
v___x_1564_ = lean_usize_add(v_i_1551_, v___x_1563_);
v___x_1565_ = l_unsafeCast___redArg(v___x_1562_);
lean_dec_ref_known(v___x_1562_, 2);
v___x_1566_ = lean_array_uset(v_bs_x27_1557_, v_i_1551_, v___x_1565_);
v_i_1551_ = v___x_1564_;
v_bs_1552_ = v___x_1566_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1___boxed(lean_object* v_sz_1568_, lean_object* v_i_1569_, lean_object* v_bs_1570_){
_start:
{
size_t v_sz_boxed_1571_; size_t v_i_boxed_1572_; lean_object* v_res_1573_; 
v_sz_boxed_1571_ = lean_unbox_usize(v_sz_1568_);
lean_dec(v_sz_1568_);
v_i_boxed_1572_ = lean_unbox_usize(v_i_1569_);
lean_dec(v_i_1569_);
v_res_1573_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(v_sz_boxed_1571_, v_i_boxed_1572_, v_bs_1570_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(lean_object* v_bs_1574_, lean_object* v_k_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_box(0), v_bs_1574_, v_k_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1581_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1581_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
v_a_1590_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1581_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1581_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1590_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg___boxed(lean_object* v_bs_1598_, lean_object* v_k_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v_res_1605_; 
v_res_1605_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(v_bs_1598_, v_k_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
lean_dec_ref(v_bs_1598_);
return v_res_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(lean_object* v_bs_1606_, lean_object* v_k_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
size_t v_sz_1613_; size_t v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
v_sz_1613_ = lean_array_size(v_bs_1606_);
v___x_1614_ = ((size_t)0ULL);
v___x_1615_ = l_unsafeCast___redArg(v_bs_1606_);
v___x_1616_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(v_sz_1613_, v___x_1614_, v___x_1615_);
v___x_1617_ = l_unsafeCast___redArg(v___x_1616_);
lean_dec_ref(v___x_1616_);
v___x_1618_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(v___x_1617_, v_k_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
lean_dec(v___x_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg___boxed(lean_object* v_bs_1619_, lean_object* v_k_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v_bs_1619_, v_k_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
lean_dec(v___y_1622_);
lean_dec_ref(v___y_1621_);
lean_dec_ref(v_bs_1619_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1(lean_object* v_name_1627_, lean_object* v_us_1628_, lean_object* v_params_1629_, uint8_t v_useEq_1630_, lean_object* v_ctorVal_1631_, lean_object* v_type_1632_, lean_object* v_args1_1633_, lean_object* v_resultType_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
lean_object* v___x_1640_; lean_object* v___f_1641_; 
v___x_1640_ = lean_box(v_useEq_1630_);
lean_inc_ref(v_args1_1633_);
lean_inc_ref(v_params_1629_);
v___f_1641_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1641_, 0, v_name_1627_);
lean_closure_set(v___f_1641_, 1, v_us_1628_);
lean_closure_set(v___f_1641_, 2, v_params_1629_);
lean_closure_set(v___f_1641_, 3, v_args1_1633_);
lean_closure_set(v___f_1641_, 4, v___x_1640_);
if (v_useEq_1630_ == 0)
{
lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1642_ = l_Array_append___redArg(v_params_1629_, v_args1_1633_);
v___x_1643_ = lean_unsigned_to_nat(0u);
v___x_1644_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_1645_ = lean_box(v_useEq_1630_);
v___x_1646_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___boxed), 14, 9);
lean_closure_set(v___x_1646_, 0, v_ctorVal_1631_);
lean_closure_set(v___x_1646_, 1, v___x_1645_);
lean_closure_set(v___x_1646_, 2, v_args1_1633_);
lean_closure_set(v___x_1646_, 3, v_resultType_1634_);
lean_closure_set(v___x_1646_, 4, v___f_1641_);
lean_closure_set(v___x_1646_, 5, v___x_1643_);
lean_closure_set(v___x_1646_, 6, v_type_1632_);
lean_closure_set(v___x_1646_, 7, v___x_1644_);
lean_closure_set(v___x_1646_, 8, v___x_1644_);
v___x_1647_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v___x_1642_, v___x_1646_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
lean_dec_ref(v___x_1642_);
return v___x_1647_;
}
else
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
lean_dec_ref(v_params_1629_);
v___x_1648_ = lean_unsigned_to_nat(0u);
v___x_1649_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_1650_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(v_ctorVal_1631_, v_useEq_1630_, v_args1_1633_, v_resultType_1634_, v___f_1641_, v___x_1648_, v_type_1632_, v___x_1649_, v___x_1649_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
return v___x_1650_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1___boxed(lean_object* v_name_1651_, lean_object* v_us_1652_, lean_object* v_params_1653_, lean_object* v_useEq_1654_, lean_object* v_ctorVal_1655_, lean_object* v_type_1656_, lean_object* v_args1_1657_, lean_object* v_resultType_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
uint8_t v_useEq_boxed_1664_; lean_object* v_res_1665_; 
v_useEq_boxed_1664_ = lean_unbox(v_useEq_1654_);
v_res_1665_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1(v_name_1651_, v_us_1652_, v_params_1653_, v_useEq_boxed_1664_, v_ctorVal_1655_, v_type_1656_, v_args1_1657_, v_resultType_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2(lean_object* v_name_1666_, lean_object* v_us_1667_, uint8_t v_useEq_1668_, lean_object* v_ctorVal_1669_, lean_object* v_params_1670_, lean_object* v_type_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_){
_start:
{
lean_object* v___x_1677_; lean_object* v___f_1678_; uint8_t v___x_1679_; lean_object* v___x_1680_; 
v___x_1677_ = lean_box(v_useEq_1668_);
lean_inc_ref(v_type_1671_);
v___f_1678_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1___boxed), 13, 6);
lean_closure_set(v___f_1678_, 0, v_name_1666_);
lean_closure_set(v___f_1678_, 1, v_us_1667_);
lean_closure_set(v___f_1678_, 2, v_params_1670_);
lean_closure_set(v___f_1678_, 3, v___x_1677_);
lean_closure_set(v___f_1678_, 4, v_ctorVal_1669_);
lean_closure_set(v___f_1678_, 5, v_type_1671_);
v___x_1679_ = 0;
v___x_1680_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_type_1671_, v___f_1678_, v___x_1679_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2___boxed(lean_object* v_name_1681_, lean_object* v_us_1682_, lean_object* v_useEq_1683_, lean_object* v_ctorVal_1684_, lean_object* v_params_1685_, lean_object* v_type_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_){
_start:
{
uint8_t v_useEq_boxed_1692_; lean_object* v_res_1693_; 
v_useEq_boxed_1692_ = lean_unbox(v_useEq_1683_);
v_res_1693_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2(v_name_1681_, v_us_1682_, v_useEq_boxed_1692_, v_ctorVal_1684_, v_params_1685_, v_type_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
lean_dec(v___y_1688_);
lean_dec_ref(v___y_1687_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(lean_object* v_a_1694_, lean_object* v_a_1695_){
_start:
{
if (lean_obj_tag(v_a_1694_) == 0)
{
lean_object* v___x_1696_; 
v___x_1696_ = l_List_reverse___redArg(v_a_1695_);
return v___x_1696_;
}
else
{
lean_object* v_head_1697_; lean_object* v_tail_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1707_; 
v_head_1697_ = lean_ctor_get(v_a_1694_, 0);
v_tail_1698_ = lean_ctor_get(v_a_1694_, 1);
v_isSharedCheck_1707_ = !lean_is_exclusive(v_a_1694_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1700_ = v_a_1694_;
v_isShared_1701_ = v_isSharedCheck_1707_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_tail_1698_);
lean_inc(v_head_1697_);
lean_dec(v_a_1694_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1707_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1702_; lean_object* v___x_1704_; 
v___x_1702_ = l_Lean_mkLevelParam(v_head_1697_);
if (v_isShared_1701_ == 0)
{
lean_ctor_set(v___x_1700_, 1, v_a_1695_);
lean_ctor_set(v___x_1700_, 0, v___x_1702_);
v___x_1704_ = v___x_1700_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v___x_1702_);
lean_ctor_set(v_reuseFailAlloc_1706_, 1, v_a_1695_);
v___x_1704_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
v_a_1694_ = v_tail_1698_;
v_a_1695_ = v___x_1704_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(lean_object* v_ctorVal_1708_, uint8_t v_useEq_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_){
_start:
{
lean_object* v_toConstantVal_1715_; lean_object* v_numParams_1716_; lean_object* v_name_1717_; lean_object* v_levelParams_1718_; lean_object* v_type_1719_; lean_object* v___x_1720_; lean_object* v_us_1721_; lean_object* v___x_1722_; lean_object* v___f_1723_; lean_object* v___x_1724_; 
v_toConstantVal_1715_ = lean_ctor_get(v_ctorVal_1708_, 0);
v_numParams_1716_ = lean_ctor_get(v_ctorVal_1708_, 3);
lean_inc(v_numParams_1716_);
v_name_1717_ = lean_ctor_get(v_toConstantVal_1715_, 0);
lean_inc(v_name_1717_);
v_levelParams_1718_ = lean_ctor_get(v_toConstantVal_1715_, 1);
v_type_1719_ = lean_ctor_get(v_toConstantVal_1715_, 2);
lean_inc_ref(v_type_1719_);
v___x_1720_ = lean_box(0);
lean_inc(v_levelParams_1718_);
v_us_1721_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(v_levelParams_1718_, v___x_1720_);
v___x_1722_ = lean_box(v_useEq_1709_);
v___f_1723_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2___boxed), 11, 4);
lean_closure_set(v___f_1723_, 0, v_name_1717_);
lean_closure_set(v___f_1723_, 1, v_us_1721_);
lean_closure_set(v___f_1723_, 2, v___x_1722_);
lean_closure_set(v___f_1723_, 3, v_ctorVal_1708_);
v___x_1724_ = l_Lean_Meta_elimOptParam(v_type_1719_, v_a_1712_, v_a_1713_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v_a_1725_; lean_object* v___x_1726_; uint8_t v___x_1727_; lean_object* v___x_1728_; 
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_a_1725_);
lean_dec_ref_known(v___x_1724_, 1);
v___x_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1726_, 0, v_numParams_1716_);
v___x_1727_ = 0;
v___x_1728_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(v_a_1725_, v___x_1726_, v___f_1723_, v___x_1727_, v___x_1727_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_);
return v___x_1728_;
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
lean_dec_ref(v___f_1723_);
lean_dec(v_numParams_1716_);
v_a_1729_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1724_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1724_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1729_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___boxed(lean_object* v_ctorVal_1737_, lean_object* v_useEq_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_){
_start:
{
uint8_t v_useEq_boxed_1744_; lean_object* v_res_1745_; 
v_useEq_boxed_1744_ = lean_unbox(v_useEq_1738_);
v_res_1745_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(v_ctorVal_1737_, v_useEq_boxed_1744_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_);
lean_dec(v_a_1742_);
lean_dec_ref(v_a_1741_);
lean_dec(v_a_1740_);
lean_dec_ref(v_a_1739_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2(lean_object* v_00_u03b1_1746_, lean_object* v_bs_1747_, lean_object* v_k_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(v_bs_1747_, v_k_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1755_, lean_object* v_bs_1756_, lean_object* v_k_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_){
_start:
{
lean_object* v_res_1763_; 
v_res_1763_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2(v_00_u03b1_1755_, v_bs_1756_, v_k_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec_ref(v_bs_1756_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1(lean_object* v_00_u03b1_1764_, lean_object* v_bs_1765_, lean_object* v_k_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_){
_start:
{
lean_object* v___x_1772_; 
v___x_1772_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v_bs_1765_, v_k_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___boxed(lean_object* v_00_u03b1_1773_, lean_object* v_bs_1774_, lean_object* v_k_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1(v_00_u03b1_1773_, v_bs_1774_, v_k_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec(v___y_1777_);
lean_dec_ref(v___y_1776_);
lean_dec_ref(v_bs_1774_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(lean_object* v_ctorVal_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_){
_start:
{
uint8_t v___x_1788_; lean_object* v___x_1789_; 
v___x_1788_ = 0;
v___x_1789_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(v_ctorVal_1782_, v___x_1788_, v_a_1783_, v_a_1784_, v_a_1785_, v_a_1786_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f___boxed(lean_object* v_ctorVal_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_1790_, v_a_1791_, v_a_1792_, v_a_1793_, v_a_1794_);
lean_dec(v_a_1794_);
lean_dec_ref(v_a_1793_);
lean_dec(v_a_1792_);
lean_dec_ref(v_a_1791_);
return v_res_1796_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1(void){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1798_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0));
v___x_1799_ = l_Lean_stringToMessageData(v___x_1798_);
return v___x_1799_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3(void){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1801_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2));
v___x_1802_ = l_Lean_stringToMessageData(v___x_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(lean_object* v_ctorName_1803_){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1804_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1);
v___x_1805_ = l_Lean_MessageData_ofName(v_ctorName_1803_);
v___x_1806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1804_);
lean_ctor_set(v___x_1806_, 1, v___x_1805_);
v___x_1807_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3);
v___x_1808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1806_);
lean_ctor_set(v___x_1808_, 1, v___x_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(lean_object* v_ctorName_1809_, lean_object* v_mvarId_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1816_ = l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(v_ctorName_1809_);
v___x_1817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1817_, 0, v_mvarId_1810_);
v___x_1818_ = l_Lean_indentD(v___x_1817_);
v___x_1819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1816_);
lean_ctor_set(v___x_1819_, 1, v___x_1818_);
v___x_1820_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_1819_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg___boxed(lean_object* v_ctorName_1821_, lean_object* v_mvarId_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(v_ctorName_1821_, v_mvarId_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_);
lean_dec(v_a_1826_);
lean_dec_ref(v_a_1825_);
lean_dec(v_a_1824_);
lean_dec_ref(v_a_1823_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure(lean_object* v_00_u03b1_1829_, lean_object* v_ctorName_1830_, lean_object* v_mvarId_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_){
_start:
{
lean_object* v___x_1837_; 
v___x_1837_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(v_ctorName_1830_, v_mvarId_1831_, v_a_1832_, v_a_1833_, v_a_1834_, v_a_1835_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___boxed(lean_object* v_00_u03b1_1838_, lean_object* v_ctorName_1839_, lean_object* v_mvarId_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure(v_00_u03b1_1838_, v_ctorName_1839_, v_mvarId_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_);
lean_dec(v_a_1844_);
lean_dec_ref(v_a_1843_);
lean_dec(v_a_1842_);
lean_dec_ref(v_a_1841_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(lean_object* v_ctorName_1847_, lean_object* v_as_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
if (lean_obj_tag(v_as_1848_) == 0)
{
lean_object* v___x_1854_; lean_object* v___x_1855_; 
lean_dec(v_ctorName_1847_);
v___x_1854_ = lean_box(0);
v___x_1855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1854_);
return v___x_1855_;
}
else
{
lean_object* v_head_1856_; lean_object* v_tail_1857_; lean_object* v___x_1858_; 
v_head_1856_ = lean_ctor_get(v_as_1848_, 0);
lean_inc_n(v_head_1856_, 2);
v_tail_1857_ = lean_ctor_get(v_as_1848_, 1);
lean_inc(v_tail_1857_);
lean_dec_ref_known(v_as_1848_, 2);
v___x_1858_ = l_Lean_MVarId_assumptionCore(v_head_1856_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_);
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v_a_1859_; uint8_t v___x_1860_; 
v_a_1859_ = lean_ctor_get(v___x_1858_, 0);
lean_inc(v_a_1859_);
lean_dec_ref_known(v___x_1858_, 1);
v___x_1860_ = lean_unbox(v_a_1859_);
lean_dec(v_a_1859_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; 
lean_dec(v_tail_1857_);
v___x_1861_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(v_ctorName_1847_, v_head_1856_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_);
return v___x_1861_;
}
else
{
lean_dec(v_head_1856_);
v_as_1848_ = v_tail_1857_;
goto _start;
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
lean_dec(v_tail_1857_);
lean_dec(v_head_1856_);
lean_dec(v_ctorName_1847_);
v_a_1863_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1858_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1858_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0___boxed(lean_object* v_ctorName_1871_, lean_object* v_as_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_){
_start:
{
lean_object* v_res_1878_; 
v_res_1878_ = l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(v_ctorName_1871_, v_as_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
lean_dec(v___y_1874_);
lean_dec_ref(v___y_1873_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(lean_object* v_mvarId_1879_, lean_object* v_ctorName_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = l_Lean_MVarId_splitAndCore(v_mvarId_1879_, v_a_1881_, v_a_1882_, v_a_1883_, v_a_1884_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v_a_1887_; lean_object* v___x_1888_; 
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
lean_inc(v_a_1887_);
lean_dec_ref_known(v___x_1886_, 1);
v___x_1888_ = l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(v_ctorName_1880_, v_a_1887_, v_a_1881_, v_a_1882_, v_a_1883_, v_a_1884_);
return v___x_1888_;
}
else
{
lean_object* v_a_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1896_; 
lean_dec(v_ctorName_1880_);
v_a_1889_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1891_ = v___x_1886_;
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_a_1889_);
lean_dec(v___x_1886_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1894_; 
if (v_isShared_1892_ == 0)
{
v___x_1894_ = v___x_1891_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v_a_1889_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption___boxed(lean_object* v_mvarId_1897_, lean_object* v_ctorName_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(v_mvarId_1897_, v_ctorName_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_);
lean_dec(v_a_1902_);
lean_dec_ref(v_a_1901_);
lean_dec(v_a_1900_);
lean_dec_ref(v_a_1899_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(lean_object* v_msg_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v___f_1912_; lean_object* v___x_905__overap_1913_; lean_object* v___x_1914_; 
v___f_1912_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0));
v___x_905__overap_1913_ = lean_panic_fn_borrowed(v___f_1912_, v_msg_1906_);
lean_inc(v___y_1910_);
lean_inc_ref(v___y_1909_);
lean_inc(v___y_1908_);
lean_inc_ref(v___y_1907_);
v___x_1914_ = lean_apply_5(v___x_905__overap_1913_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, lean_box(0));
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___boxed(lean_object* v_msg_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(v_msg_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
return v_res_1921_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1922_; double v___x_1923_; 
v___x_1922_ = lean_unsigned_to_nat(0u);
v___x_1923_ = lean_float_of_nat(v___x_1922_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(lean_object* v_cls_1927_, lean_object* v_msg_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
lean_object* v_ref_1934_; lean_object* v___x_1935_; lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1980_; 
v_ref_1934_ = lean_ctor_get(v___y_1931_, 2);
v___x_1935_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msg_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_);
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1938_ = v___x_1935_;
v_isShared_1939_ = v_isSharedCheck_1980_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1935_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1980_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; lean_object* v_traceState_1941_; lean_object* v_env_1942_; lean_object* v_nextMacroScope_1943_; lean_object* v_ngen_1944_; lean_object* v_auxDeclNGen_1945_; lean_object* v_cache_1946_; lean_object* v_messages_1947_; lean_object* v_infoState_1948_; lean_object* v_snapshotTasks_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1979_; 
v___x_1940_ = lean_st_ref_take(v___y_1932_);
v_traceState_1941_ = lean_ctor_get(v___x_1940_, 4);
v_env_1942_ = lean_ctor_get(v___x_1940_, 0);
v_nextMacroScope_1943_ = lean_ctor_get(v___x_1940_, 1);
v_ngen_1944_ = lean_ctor_get(v___x_1940_, 2);
v_auxDeclNGen_1945_ = lean_ctor_get(v___x_1940_, 3);
v_cache_1946_ = lean_ctor_get(v___x_1940_, 5);
v_messages_1947_ = lean_ctor_get(v___x_1940_, 6);
v_infoState_1948_ = lean_ctor_get(v___x_1940_, 7);
v_snapshotTasks_1949_ = lean_ctor_get(v___x_1940_, 8);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1951_ = v___x_1940_;
v_isShared_1952_ = v_isSharedCheck_1979_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_snapshotTasks_1949_);
lean_inc(v_infoState_1948_);
lean_inc(v_messages_1947_);
lean_inc(v_cache_1946_);
lean_inc(v_traceState_1941_);
lean_inc(v_auxDeclNGen_1945_);
lean_inc(v_ngen_1944_);
lean_inc(v_nextMacroScope_1943_);
lean_inc(v_env_1942_);
lean_dec(v___x_1940_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1979_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
uint64_t v_tid_1953_; lean_object* v_traces_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1978_; 
v_tid_1953_ = lean_ctor_get_uint64(v_traceState_1941_, sizeof(void*)*1);
v_traces_1954_ = lean_ctor_get(v_traceState_1941_, 0);
v_isSharedCheck_1978_ = !lean_is_exclusive(v_traceState_1941_);
if (v_isSharedCheck_1978_ == 0)
{
v___x_1956_ = v_traceState_1941_;
v_isShared_1957_ = v_isSharedCheck_1978_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_traces_1954_);
lean_dec(v_traceState_1941_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1978_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; double v___x_1960_; uint8_t v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1969_; 
v___x_1958_ = lean_box(0);
v___x_1959_ = lean_box(0);
v___x_1960_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0);
v___x_1961_ = 0;
v___x_1962_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_1963_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1963_, 0, v_cls_1927_);
lean_ctor_set(v___x_1963_, 1, v___x_1959_);
lean_ctor_set(v___x_1963_, 2, v___x_1962_);
lean_ctor_set_float(v___x_1963_, sizeof(void*)*3, v___x_1960_);
lean_ctor_set_float(v___x_1963_, sizeof(void*)*3 + 8, v___x_1960_);
lean_ctor_set_uint8(v___x_1963_, sizeof(void*)*3 + 16, v___x_1961_);
v___x_1964_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2));
v___x_1965_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1963_);
lean_ctor_set(v___x_1965_, 1, v_a_1936_);
lean_ctor_set(v___x_1965_, 2, v___x_1964_);
lean_inc(v_ref_1934_);
v___x_1966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1966_, 0, v_ref_1934_);
lean_ctor_set(v___x_1966_, 1, v___x_1965_);
v___x_1967_ = l_Lean_PersistentArray_push___redArg(v_traces_1954_, v___x_1966_);
if (v_isShared_1957_ == 0)
{
lean_ctor_set(v___x_1956_, 0, v___x_1967_);
v___x_1969_ = v___x_1956_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v___x_1967_);
lean_ctor_set_uint64(v_reuseFailAlloc_1977_, sizeof(void*)*1, v_tid_1953_);
v___x_1969_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
lean_object* v___x_1971_; 
if (v_isShared_1952_ == 0)
{
lean_ctor_set(v___x_1951_, 4, v___x_1969_);
v___x_1971_ = v___x_1951_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_env_1942_);
lean_ctor_set(v_reuseFailAlloc_1976_, 1, v_nextMacroScope_1943_);
lean_ctor_set(v_reuseFailAlloc_1976_, 2, v_ngen_1944_);
lean_ctor_set(v_reuseFailAlloc_1976_, 3, v_auxDeclNGen_1945_);
lean_ctor_set(v_reuseFailAlloc_1976_, 4, v___x_1969_);
lean_ctor_set(v_reuseFailAlloc_1976_, 5, v_cache_1946_);
lean_ctor_set(v_reuseFailAlloc_1976_, 6, v_messages_1947_);
lean_ctor_set(v_reuseFailAlloc_1976_, 7, v_infoState_1948_);
lean_ctor_set(v_reuseFailAlloc_1976_, 8, v_snapshotTasks_1949_);
v___x_1971_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
lean_object* v___x_1972_; lean_object* v___x_1974_; 
v___x_1972_ = lean_st_ref_put(v___y_1932_, v___x_1971_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 0, v___x_1958_);
v___x_1974_ = v___x_1938_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v___x_1958_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___boxed(lean_object* v_cls_1981_, lean_object* v_msg_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_1981_, v_msg_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
return v_res_1988_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3(void){
_start:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1992_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2));
v___x_1993_ = lean_unsigned_to_nat(30u);
v___x_1994_ = lean_unsigned_to_nat(96u);
v___x_1995_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1));
v___x_1996_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0));
v___x_1997_ = l_mkPanicMessageWithDecl(v___x_1996_, v___x_1995_, v___x_1994_, v___x_1993_, v___x_1992_);
return v___x_1997_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9(void){
_start:
{
lean_object* v_cls_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v_cls_2006_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_2007_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8));
v___x_2008_ = l_Lean_Name_append(v___x_2007_, v_cls_2006_);
return v___x_2008_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11(void){
_start:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_2010_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10));
v___x_2011_ = l_Lean_stringToMessageData(v___x_2010_);
return v___x_2011_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13(void){
_start:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2013_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12));
v___x_2014_ = l_Lean_stringToMessageData(v___x_2013_);
return v___x_2014_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15(void){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14));
v___x_2017_ = l_Lean_stringToMessageData(v___x_2016_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(lean_object* v_ctorName_2018_, lean_object* v_mvarId_2019_, lean_object* v_h_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_){
_start:
{
lean_object* v___y_2027_; lean_object* v___y_2028_; lean_object* v___y_2029_; lean_object* v___y_2030_; lean_object* v_toCold_2046_; lean_object* v_options_2047_; uint8_t v_hasTrace_2048_; 
v_toCold_2046_ = lean_ctor_get(v_a_2023_, 0);
v_options_2047_ = lean_ctor_get(v_toCold_2046_, 2);
v_hasTrace_2048_ = lean_ctor_get_uint8(v_options_2047_, sizeof(void*)*1);
if (v_hasTrace_2048_ == 0)
{
v___y_2027_ = v_a_2021_;
v___y_2028_ = v_a_2022_;
v___y_2029_ = v_a_2023_;
v___y_2030_ = v_a_2024_;
goto v___jp_2026_;
}
else
{
lean_object* v_inheritedTraceOptions_2049_; lean_object* v_cls_2050_; lean_object* v___x_2051_; uint8_t v___x_2052_; 
v_inheritedTraceOptions_2049_ = lean_ctor_get(v_toCold_2046_, 11);
v_cls_2050_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_2051_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_2052_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2049_, v_options_2047_, v___x_2051_);
if (v___x_2052_ == 0)
{
v___y_2027_ = v_a_2021_;
v___y_2028_ = v_a_2022_;
v___y_2029_ = v_a_2023_;
v___y_2030_ = v_a_2024_;
goto v___jp_2026_;
}
else
{
lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2053_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11);
lean_inc(v_ctorName_2018_);
v___x_2054_ = l_Lean_MessageData_ofName(v_ctorName_2018_);
v___x_2055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2053_);
lean_ctor_set(v___x_2055_, 1, v___x_2054_);
v___x_2056_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13);
v___x_2057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
lean_inc(v_h_2020_);
v___x_2058_ = l_Lean_mkFVar(v_h_2020_);
v___x_2059_ = l_Lean_MessageData_ofExpr(v___x_2058_);
v___x_2060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2057_);
lean_ctor_set(v___x_2060_, 1, v___x_2059_);
v___x_2061_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15);
v___x_2062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2060_);
lean_ctor_set(v___x_2062_, 1, v___x_2061_);
lean_inc(v_mvarId_2019_);
v___x_2063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2063_, 0, v_mvarId_2019_);
v___x_2064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2062_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2050_, v___x_2064_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_dec_ref_known(v___x_2065_, 1);
v___y_2027_ = v_a_2021_;
v___y_2028_ = v_a_2022_;
v___y_2029_ = v_a_2023_;
v___y_2030_ = v_a_2024_;
goto v___jp_2026_;
}
else
{
lean_dec(v_h_2020_);
lean_dec(v_mvarId_2019_);
lean_dec(v_ctorName_2018_);
return v___x_2065_;
}
}
}
v___jp_2026_:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2031_ = lean_box(0);
v___x_2032_ = l_Lean_Meta_injection(v_mvarId_2019_, v_h_2020_, v___x_2031_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v_a_2033_; 
v_a_2033_ = lean_ctor_get(v___x_2032_, 0);
lean_inc(v_a_2033_);
lean_dec_ref_known(v___x_2032_, 1);
if (lean_obj_tag(v_a_2033_) == 0)
{
lean_object* v___x_2034_; lean_object* v___x_2035_; 
lean_dec(v_ctorName_2018_);
v___x_2034_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3);
v___x_2035_ = l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(v___x_2034_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
return v___x_2035_;
}
else
{
lean_object* v_mvarId_2036_; lean_object* v___x_2037_; 
v_mvarId_2036_ = lean_ctor_get(v_a_2033_, 0);
lean_inc(v_mvarId_2036_);
lean_dec_ref_known(v_a_2033_, 3);
v___x_2037_ = l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(v_mvarId_2036_, v_ctorName_2018_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
return v___x_2037_;
}
}
else
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2045_; 
lean_dec(v_ctorName_2018_);
v_a_2038_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2040_ = v___x_2032_;
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2032_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2045_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2041_ == 0)
{
v___x_2043_ = v___x_2040_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v_a_2038_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
return v___x_2043_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___boxed(lean_object* v_ctorName_2066_, lean_object* v_mvarId_2067_, lean_object* v_h_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(v_ctorName_2066_, v_mvarId_2067_, v_h_2068_, v_a_2069_, v_a_2070_, v_a_2071_, v_a_2072_);
lean_dec(v_a_2072_);
lean_dec_ref(v_a_2071_);
lean_dec(v_a_2070_);
lean_dec_ref(v_a_2069_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(lean_object* v_type_2075_, lean_object* v_k_2076_, uint8_t v_cleanupAnnotations_2077_, uint8_t v_whnfType_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_){
_start:
{
lean_object* v___f_2084_; lean_object* v___x_2085_; 
v___f_2084_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2084_, 0, v_k_2076_);
v___x_2085_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_2075_, v___f_2084_, v_cleanupAnnotations_2077_, v_whnfType_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2085_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2085_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2085_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
else
{
lean_object* v_a_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2101_; 
v_a_2094_ = lean_ctor_get(v___x_2085_, 0);
v_isSharedCheck_2101_ = !lean_is_exclusive(v___x_2085_);
if (v_isSharedCheck_2101_ == 0)
{
v___x_2096_ = v___x_2085_;
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_a_2094_);
lean_dec(v___x_2085_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2099_; 
if (v_isShared_2097_ == 0)
{
v___x_2099_ = v___x_2096_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_a_2094_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg___boxed(lean_object* v_type_2102_, lean_object* v_k_2103_, lean_object* v_cleanupAnnotations_2104_, lean_object* v_whnfType_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2111_; uint8_t v_whnfType_boxed_2112_; lean_object* v_res_2113_; 
v_cleanupAnnotations_boxed_2111_ = lean_unbox(v_cleanupAnnotations_2104_);
v_whnfType_boxed_2112_ = lean_unbox(v_whnfType_2105_);
v_res_2113_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_type_2102_, v_k_2103_, v_cleanupAnnotations_boxed_2111_, v_whnfType_boxed_2112_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0(lean_object* v_00_u03b1_2114_, lean_object* v_type_2115_, lean_object* v_k_2116_, uint8_t v_cleanupAnnotations_2117_, uint8_t v_whnfType_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
lean_object* v___x_2124_; 
v___x_2124_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_type_2115_, v_k_2116_, v_cleanupAnnotations_2117_, v_whnfType_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___boxed(lean_object* v_00_u03b1_2125_, lean_object* v_type_2126_, lean_object* v_k_2127_, lean_object* v_cleanupAnnotations_2128_, lean_object* v_whnfType_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2135_; uint8_t v_whnfType_boxed_2136_; lean_object* v_res_2137_; 
v_cleanupAnnotations_boxed_2135_ = lean_unbox(v_cleanupAnnotations_2128_);
v_whnfType_boxed_2136_ = lean_unbox(v_whnfType_2129_);
v_res_2137_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0(v_00_u03b1_2125_, v_type_2126_, v_k_2127_, v_cleanupAnnotations_boxed_2135_, v_whnfType_boxed_2136_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
return v_res_2137_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2138_ = lean_box(0);
v___x_2139_ = l_unsafeCast___redArg(v___x_2138_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0(lean_object* v___x_2140_, lean_object* v_ctorName_2141_, lean_object* v_xs_2142_, lean_object* v_type_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_){
_start:
{
lean_object* v___x_2149_; lean_object* v___x_2150_; 
v___x_2149_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0);
v___x_2150_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_type_2143_, v___x_2149_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_object* v_a_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
v_a_2151_ = lean_ctor_get(v___x_2150_, 0);
lean_inc(v_a_2151_);
lean_dec_ref_known(v___x_2150_, 1);
v___x_2152_ = l_Lean_Expr_mvarId_x21(v_a_2151_);
v___x_2153_ = lean_array_get_size(v_xs_2142_);
v___x_2154_ = lean_unsigned_to_nat(1u);
v___x_2155_ = lean_nat_sub(v___x_2153_, v___x_2154_);
v___x_2156_ = lean_array_get_borrowed(v___x_2140_, v_xs_2142_, v___x_2155_);
lean_dec(v___x_2155_);
v___x_2157_ = l_Lean_Expr_fvarId_x21(v___x_2156_);
v___x_2158_ = l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(v_ctorName_2141_, v___x_2152_, v___x_2157_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_);
if (lean_obj_tag(v___x_2158_) == 0)
{
uint8_t v___x_2159_; uint8_t v___x_2160_; uint8_t v___x_2161_; lean_object* v___x_2162_; 
lean_dec_ref_known(v___x_2158_, 1);
v___x_2159_ = 0;
v___x_2160_ = 1;
v___x_2161_ = 1;
v___x_2162_ = l_Lean_Meta_mkLambdaFVars(v_xs_2142_, v_a_2151_, v___x_2159_, v___x_2160_, v___x_2159_, v___x_2160_, v___x_2161_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_);
return v___x_2162_;
}
else
{
lean_object* v_a_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2170_; 
lean_dec(v_a_2151_);
lean_dec_ref(v_xs_2142_);
v_a_2163_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2165_ = v___x_2158_;
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_a_2163_);
lean_dec(v___x_2158_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2168_; 
if (v_isShared_2166_ == 0)
{
v___x_2168_ = v___x_2165_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_a_2163_);
v___x_2168_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
return v___x_2168_;
}
}
}
}
else
{
lean_dec_ref(v_xs_2142_);
lean_dec(v_ctorName_2141_);
return v___x_2150_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___boxed(lean_object* v___x_2171_, lean_object* v_ctorName_2172_, lean_object* v_xs_2173_, lean_object* v_type_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_){
_start:
{
lean_object* v_res_2180_; 
v_res_2180_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0(v___x_2171_, v_ctorName_2172_, v_xs_2173_, v_type_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_);
lean_dec(v___y_2178_);
lean_dec_ref(v___y_2177_);
lean_dec(v___y_2176_);
lean_dec_ref(v___y_2175_);
lean_dec_ref(v___x_2171_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(lean_object* v_ctorName_2181_, lean_object* v_targetType_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_){
_start:
{
lean_object* v___x_2188_; lean_object* v___f_2189_; uint8_t v___x_2190_; lean_object* v___x_2191_; 
v___x_2188_ = l_Lean_instInhabitedExpr;
v___f_2189_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2189_, 0, v___x_2188_);
lean_closure_set(v___f_2189_, 1, v_ctorName_2181_);
v___x_2190_ = 0;
v___x_2191_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_targetType_2182_, v___f_2189_, v___x_2190_, v___x_2190_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___boxed(lean_object* v_ctorName_2192_, lean_object* v_targetType_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_ctorName_2192_, v_targetType_2193_, v_a_2194_, v_a_2195_, v_a_2196_, v_a_2197_);
lean_dec(v_a_2197_);
lean_dec_ref(v_a_2196_);
lean_dec(v_a_2195_);
lean_dec_ref(v_a_2194_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor(lean_object* v_ctorName_2203_){
_start:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1));
v___x_2205_ = l_Lean_Name_append(v_ctorName_2203_, v___x_2204_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(lean_object* v_e_2206_, lean_object* v___y_2207_){
_start:
{
uint8_t v___x_2209_; 
v___x_2209_ = l_Lean_Expr_hasMVar(v_e_2206_);
if (v___x_2209_ == 0)
{
lean_object* v___x_2210_; 
v___x_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2210_, 0, v_e_2206_);
return v___x_2210_;
}
else
{
lean_object* v___x_2211_; lean_object* v_mctx_2212_; lean_object* v___x_2213_; lean_object* v_fst_2214_; lean_object* v_snd_2215_; lean_object* v___x_2216_; lean_object* v_cache_2217_; lean_object* v_zetaDeltaFVarIds_2218_; lean_object* v_postponed_2219_; lean_object* v_diag_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2229_; 
v___x_2211_ = lean_st_ref_get(v___y_2207_);
v_mctx_2212_ = lean_ctor_get(v___x_2211_, 0);
lean_inc_ref(v_mctx_2212_);
lean_dec(v___x_2211_);
v___x_2213_ = l_Lean_instantiateMVarsCore(v_mctx_2212_, v_e_2206_);
v_fst_2214_ = lean_ctor_get(v___x_2213_, 0);
lean_inc(v_fst_2214_);
v_snd_2215_ = lean_ctor_get(v___x_2213_, 1);
lean_inc(v_snd_2215_);
lean_dec_ref(v___x_2213_);
v___x_2216_ = lean_st_ref_take(v___y_2207_);
v_cache_2217_ = lean_ctor_get(v___x_2216_, 1);
v_zetaDeltaFVarIds_2218_ = lean_ctor_get(v___x_2216_, 2);
v_postponed_2219_ = lean_ctor_get(v___x_2216_, 3);
v_diag_2220_ = lean_ctor_get(v___x_2216_, 4);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2229_ == 0)
{
lean_object* v_unused_2230_; 
v_unused_2230_ = lean_ctor_get(v___x_2216_, 0);
lean_dec(v_unused_2230_);
v___x_2222_ = v___x_2216_;
v_isShared_2223_ = v_isSharedCheck_2229_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_diag_2220_);
lean_inc(v_postponed_2219_);
lean_inc(v_zetaDeltaFVarIds_2218_);
lean_inc(v_cache_2217_);
lean_dec(v___x_2216_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2229_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2225_; 
if (v_isShared_2223_ == 0)
{
lean_ctor_set(v___x_2222_, 0, v_snd_2215_);
v___x_2225_ = v___x_2222_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_snd_2215_);
lean_ctor_set(v_reuseFailAlloc_2228_, 1, v_cache_2217_);
lean_ctor_set(v_reuseFailAlloc_2228_, 2, v_zetaDeltaFVarIds_2218_);
lean_ctor_set(v_reuseFailAlloc_2228_, 3, v_postponed_2219_);
lean_ctor_set(v_reuseFailAlloc_2228_, 4, v_diag_2220_);
v___x_2225_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2226_ = lean_st_ref_put(v___y_2207_, v___x_2225_);
v___x_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2227_, 0, v_fst_2214_);
return v___x_2227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg___boxed(lean_object* v_e_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_e_2231_, v___y_2232_);
lean_dec(v___y_2232_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0(lean_object* v_e_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_e_2235_, v___y_2237_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___boxed(lean_object* v_e_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_){
_start:
{
lean_object* v_res_2248_; 
v_res_2248_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0(v_e_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec(v___y_2244_);
lean_dec_ref(v___y_2243_);
return v_res_2248_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2249_ = lean_unsigned_to_nat(32u);
v___x_2250_ = lean_mk_empty_array_with_capacity(v___x_2249_);
v___x_2251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
return v___x_2251_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2252_ = ((size_t)5ULL);
v___x_2253_ = lean_unsigned_to_nat(0u);
v___x_2254_ = lean_unsigned_to_nat(32u);
v___x_2255_ = lean_mk_empty_array_with_capacity(v___x_2254_);
v___x_2256_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0);
v___x_2257_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2257_, 0, v___x_2256_);
lean_ctor_set(v___x_2257_, 1, v___x_2255_);
lean_ctor_set(v___x_2257_, 2, v___x_2253_);
lean_ctor_set(v___x_2257_, 3, v___x_2253_);
lean_ctor_set_usize(v___x_2257_, 4, v___x_2252_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(lean_object* v___y_2258_){
_start:
{
lean_object* v___x_2260_; lean_object* v_traceState_2261_; lean_object* v_traces_2262_; lean_object* v___x_2263_; lean_object* v_traceState_2264_; lean_object* v_env_2265_; lean_object* v_nextMacroScope_2266_; lean_object* v_ngen_2267_; lean_object* v_auxDeclNGen_2268_; lean_object* v_cache_2269_; lean_object* v_messages_2270_; lean_object* v_infoState_2271_; lean_object* v_snapshotTasks_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2291_; 
v___x_2260_ = lean_st_ref_get(v___y_2258_);
v_traceState_2261_ = lean_ctor_get(v___x_2260_, 4);
lean_inc_ref(v_traceState_2261_);
lean_dec(v___x_2260_);
v_traces_2262_ = lean_ctor_get(v_traceState_2261_, 0);
lean_inc_ref(v_traces_2262_);
lean_dec_ref(v_traceState_2261_);
v___x_2263_ = lean_st_ref_take(v___y_2258_);
v_traceState_2264_ = lean_ctor_get(v___x_2263_, 4);
v_env_2265_ = lean_ctor_get(v___x_2263_, 0);
v_nextMacroScope_2266_ = lean_ctor_get(v___x_2263_, 1);
v_ngen_2267_ = lean_ctor_get(v___x_2263_, 2);
v_auxDeclNGen_2268_ = lean_ctor_get(v___x_2263_, 3);
v_cache_2269_ = lean_ctor_get(v___x_2263_, 5);
v_messages_2270_ = lean_ctor_get(v___x_2263_, 6);
v_infoState_2271_ = lean_ctor_get(v___x_2263_, 7);
v_snapshotTasks_2272_ = lean_ctor_get(v___x_2263_, 8);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2274_ = v___x_2263_;
v_isShared_2275_ = v_isSharedCheck_2291_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_snapshotTasks_2272_);
lean_inc(v_infoState_2271_);
lean_inc(v_messages_2270_);
lean_inc(v_cache_2269_);
lean_inc(v_traceState_2264_);
lean_inc(v_auxDeclNGen_2268_);
lean_inc(v_ngen_2267_);
lean_inc(v_nextMacroScope_2266_);
lean_inc(v_env_2265_);
lean_dec(v___x_2263_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2291_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
uint64_t v_tid_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2289_; 
v_tid_2276_ = lean_ctor_get_uint64(v_traceState_2264_, sizeof(void*)*1);
v_isSharedCheck_2289_ = !lean_is_exclusive(v_traceState_2264_);
if (v_isSharedCheck_2289_ == 0)
{
lean_object* v_unused_2290_; 
v_unused_2290_ = lean_ctor_get(v_traceState_2264_, 0);
lean_dec(v_unused_2290_);
v___x_2278_ = v_traceState_2264_;
v_isShared_2279_ = v_isSharedCheck_2289_;
goto v_resetjp_2277_;
}
else
{
lean_dec(v_traceState_2264_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2289_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2280_; lean_object* v___x_2282_; 
v___x_2280_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1);
if (v_isShared_2279_ == 0)
{
lean_ctor_set(v___x_2278_, 0, v___x_2280_);
v___x_2282_ = v___x_2278_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v___x_2280_);
lean_ctor_set_uint64(v_reuseFailAlloc_2288_, sizeof(void*)*1, v_tid_2276_);
v___x_2282_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
lean_object* v___x_2284_; 
if (v_isShared_2275_ == 0)
{
lean_ctor_set(v___x_2274_, 4, v___x_2282_);
v___x_2284_ = v___x_2274_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_env_2265_);
lean_ctor_set(v_reuseFailAlloc_2287_, 1, v_nextMacroScope_2266_);
lean_ctor_set(v_reuseFailAlloc_2287_, 2, v_ngen_2267_);
lean_ctor_set(v_reuseFailAlloc_2287_, 3, v_auxDeclNGen_2268_);
lean_ctor_set(v_reuseFailAlloc_2287_, 4, v___x_2282_);
lean_ctor_set(v_reuseFailAlloc_2287_, 5, v_cache_2269_);
lean_ctor_set(v_reuseFailAlloc_2287_, 6, v_messages_2270_);
lean_ctor_set(v_reuseFailAlloc_2287_, 7, v_infoState_2271_);
lean_ctor_set(v_reuseFailAlloc_2287_, 8, v_snapshotTasks_2272_);
v___x_2284_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2285_ = lean_st_ref_put(v___y_2258_, v___x_2284_);
v___x_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2286_, 0, v_traces_2262_);
return v___x_2286_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___boxed(lean_object* v___y_2292_, lean_object* v___y_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_2292_);
lean_dec(v___y_2292_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1(lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_){
_start:
{
lean_object* v___x_2300_; 
v___x_2300_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_2298_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___boxed(lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_){
_start:
{
lean_object* v_res_2306_; 
v_res_2306_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1(v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_);
lean_dec(v___y_2304_);
lean_dec_ref(v___y_2303_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
return v_res_2306_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(lean_object* v_opts_2307_, lean_object* v_opt_2308_){
_start:
{
lean_object* v_name_2309_; lean_object* v_defValue_2310_; lean_object* v_map_2311_; lean_object* v___x_2312_; 
v_name_2309_ = lean_ctor_get(v_opt_2308_, 0);
v_defValue_2310_ = lean_ctor_get(v_opt_2308_, 1);
v_map_2311_ = lean_ctor_get(v_opts_2307_, 0);
v___x_2312_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2311_, v_name_2309_);
if (lean_obj_tag(v___x_2312_) == 0)
{
uint8_t v___x_2313_; 
v___x_2313_ = lean_unbox(v_defValue_2310_);
return v___x_2313_;
}
else
{
lean_object* v_val_2314_; 
v_val_2314_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_val_2314_);
lean_dec_ref_known(v___x_2312_, 1);
if (lean_obj_tag(v_val_2314_) == 1)
{
uint8_t v_v_2315_; 
v_v_2315_ = lean_ctor_get_uint8(v_val_2314_, 0);
lean_dec_ref_known(v_val_2314_, 0);
return v_v_2315_;
}
else
{
uint8_t v___x_2316_; 
lean_dec(v_val_2314_);
v___x_2316_ = lean_unbox(v_defValue_2310_);
return v___x_2316_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2___boxed(lean_object* v_opts_2317_, lean_object* v_opt_2318_){
_start:
{
uint8_t v_res_2319_; lean_object* v_r_2320_; 
v_res_2319_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_opts_2317_, v_opt_2318_);
lean_dec_ref(v_opt_2318_);
lean_dec_ref(v_opts_2317_);
v_r_2320_ = lean_box(v_res_2319_);
return v_r_2320_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0));
v___x_2323_ = l_Lean_stringToMessageData(v___x_2322_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0(lean_object* v_name_2324_, lean_object* v_x_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2331_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1);
v___x_2332_ = l_Lean_MessageData_ofName(v_name_2324_);
v___x_2333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2331_);
lean_ctor_set(v___x_2333_, 1, v___x_2332_);
v___x_2334_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_2335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2333_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
v___x_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2335_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed(lean_object* v_name_2337_, lean_object* v_x_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_){
_start:
{
lean_object* v_res_2344_; 
v_res_2344_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0(v_name_2337_, v_x_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_);
lean_dec(v___y_2342_);
lean_dec_ref(v___y_2341_);
lean_dec(v___y_2340_);
lean_dec_ref(v___y_2339_);
lean_dec_ref(v_x_2338_);
return v_res_2344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(lean_object* v_name_2345_, lean_object* v_val_2346_, lean_object* v_name_2347_, lean_object* v_levelParams_2348_, uint8_t v___x_2349_, lean_object* v_____r_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_){
_start:
{
lean_object* v___x_2356_; 
lean_inc_ref(v_val_2346_);
v___x_2356_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2345_, v_val_2346_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_);
if (lean_obj_tag(v___x_2356_) == 0)
{
lean_object* v_a_2357_; lean_object* v___x_2358_; lean_object* v_a_2359_; lean_object* v___x_2360_; lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2373_; 
v_a_2357_ = lean_ctor_get(v___x_2356_, 0);
lean_inc(v_a_2357_);
lean_dec_ref_known(v___x_2356_, 1);
v___x_2358_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2346_, v___y_2352_);
v_a_2359_ = lean_ctor_get(v___x_2358_, 0);
lean_inc(v_a_2359_);
lean_dec_ref(v___x_2358_);
v___x_2360_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2357_, v___y_2352_);
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2363_ = v___x_2360_;
v_isShared_2364_ = v_isSharedCheck_2373_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2360_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2373_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2370_; 
lean_inc(v_name_2347_);
v___x_2365_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2365_, 0, v_name_2347_);
lean_ctor_set(v___x_2365_, 1, v_levelParams_2348_);
lean_ctor_set(v___x_2365_, 2, v_a_2359_);
v___x_2366_ = lean_box(0);
v___x_2367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2367_, 0, v_name_2347_);
lean_ctor_set(v___x_2367_, 1, v___x_2366_);
v___x_2368_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2368_, 0, v___x_2365_);
lean_ctor_set(v___x_2368_, 1, v_a_2361_);
lean_ctor_set(v___x_2368_, 2, v___x_2367_);
if (v_isShared_2364_ == 0)
{
lean_ctor_set_tag(v___x_2363_, 2);
lean_ctor_set(v___x_2363_, 0, v___x_2368_);
v___x_2370_ = v___x_2363_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v___x_2368_);
v___x_2370_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
lean_object* v___x_2371_; 
v___x_2371_ = l_Lean_addDecl(v___x_2370_, v___x_2349_, v___y_2353_, v___y_2354_);
return v___x_2371_;
}
}
}
else
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2381_; 
lean_dec(v_levelParams_2348_);
lean_dec(v_name_2347_);
lean_dec_ref(v_val_2346_);
v_a_2374_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2376_ = v___x_2356_;
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2356_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2381_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v___x_2379_; 
if (v_isShared_2377_ == 0)
{
v___x_2379_ = v___x_2376_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_a_2374_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1___boxed(lean_object* v_name_2382_, lean_object* v_val_2383_, lean_object* v_name_2384_, lean_object* v_levelParams_2385_, lean_object* v___x_2386_, lean_object* v_____r_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
uint8_t v___x_12433__boxed_2393_; lean_object* v_res_2394_; 
v___x_12433__boxed_2393_ = lean_unbox(v___x_2386_);
v_res_2394_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(v_name_2382_, v_val_2383_, v_name_2384_, v_levelParams_2385_, v___x_12433__boxed_2393_, v_____r_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v___y_2389_);
lean_dec_ref(v___y_2388_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(lean_object* v_name_2395_, lean_object* v_val_2396_, lean_object* v_name_2397_, lean_object* v_levelParams_2398_, lean_object* v_____r_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v___x_2405_; 
lean_inc_ref(v_val_2396_);
v___x_2405_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2395_, v_val_2396_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_a_2406_; lean_object* v___x_2407_; lean_object* v_a_2408_; lean_object* v___x_2409_; lean_object* v_a_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2423_; 
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
lean_inc(v_a_2406_);
lean_dec_ref_known(v___x_2405_, 1);
v___x_2407_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2396_, v___y_2401_);
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref(v___x_2407_);
v___x_2409_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2406_, v___y_2401_);
v_a_2410_ = lean_ctor_get(v___x_2409_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2409_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2412_ = v___x_2409_;
v_isShared_2413_ = v_isSharedCheck_2423_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_a_2410_);
lean_dec(v___x_2409_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2423_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2419_; 
lean_inc(v_name_2397_);
v___x_2414_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2414_, 0, v_name_2397_);
lean_ctor_set(v___x_2414_, 1, v_levelParams_2398_);
lean_ctor_set(v___x_2414_, 2, v_a_2408_);
v___x_2415_ = lean_box(0);
v___x_2416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2416_, 0, v_name_2397_);
lean_ctor_set(v___x_2416_, 1, v___x_2415_);
v___x_2417_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2417_, 0, v___x_2414_);
lean_ctor_set(v___x_2417_, 1, v_a_2410_);
lean_ctor_set(v___x_2417_, 2, v___x_2416_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set_tag(v___x_2412_, 2);
lean_ctor_set(v___x_2412_, 0, v___x_2417_);
v___x_2419_ = v___x_2412_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v___x_2417_);
v___x_2419_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
uint8_t v___x_2420_; lean_object* v___x_2421_; 
v___x_2420_ = 0;
v___x_2421_ = l_Lean_addDecl(v___x_2419_, v___x_2420_, v___y_2402_, v___y_2403_);
return v___x_2421_;
}
}
}
else
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2431_; 
lean_dec(v_levelParams_2398_);
lean_dec(v_name_2397_);
lean_dec_ref(v_val_2396_);
v_a_2424_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2431_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2431_ == 0)
{
v___x_2426_ = v___x_2405_;
v_isShared_2427_ = v_isSharedCheck_2431_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2405_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2431_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2429_; 
if (v_isShared_2427_ == 0)
{
v___x_2429_ = v___x_2426_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v_a_2424_);
v___x_2429_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
return v___x_2429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2___boxed(lean_object* v_name_2432_, lean_object* v_val_2433_, lean_object* v_name_2434_, lean_object* v_levelParams_2435_, lean_object* v_____r_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(v_name_2432_, v_val_2433_, v_name_2434_, v_levelParams_2435_, v_____r_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_);
lean_dec(v___y_2440_);
lean_dec_ref(v___y_2439_);
lean_dec(v___y_2438_);
lean_dec_ref(v___y_2437_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4(size_t v_sz_2443_, size_t v_i_2444_, lean_object* v_bs_2445_){
_start:
{
uint8_t v___x_2446_; 
v___x_2446_ = lean_usize_dec_lt(v_i_2444_, v_sz_2443_);
if (v___x_2446_ == 0)
{
lean_object* v___x_2447_; 
v___x_2447_ = l_unsafeCast___redArg(v_bs_2445_);
lean_dec_ref(v_bs_2445_);
return v___x_2447_;
}
else
{
lean_object* v_v_2448_; lean_object* v___x_2449_; lean_object* v_msg_2450_; lean_object* v___x_2451_; lean_object* v_bs_x27_2452_; size_t v___x_2453_; size_t v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v_v_2448_ = lean_array_uget_borrowed(v_bs_2445_, v_i_2444_);
v___x_2449_ = l_unsafeCast___redArg(v_v_2448_);
v_msg_2450_ = lean_ctor_get(v___x_2449_, 1);
lean_inc_ref(v_msg_2450_);
lean_dec(v___x_2449_);
v___x_2451_ = lean_unsigned_to_nat(0u);
v_bs_x27_2452_ = lean_array_uset(v_bs_2445_, v_i_2444_, v___x_2451_);
v___x_2453_ = ((size_t)1ULL);
v___x_2454_ = lean_usize_add(v_i_2444_, v___x_2453_);
v___x_2455_ = l_unsafeCast___redArg(v_msg_2450_);
lean_dec_ref(v_msg_2450_);
v___x_2456_ = lean_array_uset(v_bs_x27_2452_, v_i_2444_, v___x_2455_);
v_i_2444_ = v___x_2454_;
v_bs_2445_ = v___x_2456_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_2458_, lean_object* v_i_2459_, lean_object* v_bs_2460_){
_start:
{
size_t v_sz_boxed_2461_; size_t v_i_boxed_2462_; lean_object* v_res_2463_; 
v_sz_boxed_2461_ = lean_unbox_usize(v_sz_2458_);
lean_dec(v_sz_2458_);
v_i_boxed_2462_ = lean_unbox_usize(v_i_2459_);
lean_dec(v_i_2459_);
v_res_2463_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4(v_sz_boxed_2461_, v_i_boxed_2462_, v_bs_2460_);
return v_res_2463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(lean_object* v_oldTraces_2464_, lean_object* v_data_2465_, lean_object* v_ref_2466_, lean_object* v_msg_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
lean_object* v_toCold_2473_; lean_object* v_currRecDepth_2474_; lean_object* v_ref_2475_; uint8_t v_diag_2476_; uint8_t v_suppressElabErrors_2477_; lean_object* v_ref_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v_traceState_2481_; lean_object* v_traces_2482_; lean_object* v___x_2483_; size_t v_sz_2484_; size_t v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v_msg_2489_; lean_object* v___x_2490_; lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2528_; 
v_toCold_2473_ = lean_ctor_get(v___y_2470_, 0);
v_currRecDepth_2474_ = lean_ctor_get(v___y_2470_, 1);
v_ref_2475_ = lean_ctor_get(v___y_2470_, 2);
v_diag_2476_ = lean_ctor_get_uint8(v___y_2470_, sizeof(void*)*3);
v_suppressElabErrors_2477_ = lean_ctor_get_uint8(v___y_2470_, sizeof(void*)*3 + 1);
v_ref_2478_ = l_Lean_replaceRef(v_ref_2466_, v_ref_2475_);
lean_inc(v_currRecDepth_2474_);
lean_inc_ref(v_toCold_2473_);
v___x_2479_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2479_, 0, v_toCold_2473_);
lean_ctor_set(v___x_2479_, 1, v_currRecDepth_2474_);
lean_ctor_set(v___x_2479_, 2, v_ref_2478_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*3, v_diag_2476_);
lean_ctor_set_uint8(v___x_2479_, sizeof(void*)*3 + 1, v_suppressElabErrors_2477_);
v___x_2480_ = lean_st_ref_get(v___y_2471_);
v_traceState_2481_ = lean_ctor_get(v___x_2480_, 4);
lean_inc_ref(v_traceState_2481_);
lean_dec(v___x_2480_);
v_traces_2482_ = lean_ctor_get(v_traceState_2481_, 0);
lean_inc_ref(v_traces_2482_);
lean_dec_ref(v_traceState_2481_);
v___x_2483_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2482_);
lean_dec_ref(v_traces_2482_);
v_sz_2484_ = lean_array_size(v___x_2483_);
v___x_2485_ = ((size_t)0ULL);
v___x_2486_ = l_unsafeCast___redArg(v___x_2483_);
lean_dec_ref(v___x_2483_);
v___x_2487_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4(v_sz_2484_, v___x_2485_, v___x_2486_);
v___x_2488_ = l_unsafeCast___redArg(v___x_2487_);
lean_dec_ref(v___x_2487_);
v_msg_2489_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2489_, 0, v_data_2465_);
lean_ctor_set(v_msg_2489_, 1, v_msg_2467_);
lean_ctor_set(v_msg_2489_, 2, v___x_2488_);
v___x_2490_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msg_2489_, v___y_2468_, v___y_2469_, v___x_2479_, v___y_2471_);
lean_dec_ref_known(v___x_2479_, 3);
v_a_2491_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2493_ = v___x_2490_;
v_isShared_2494_ = v_isSharedCheck_2528_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2490_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2528_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2495_; lean_object* v_traceState_2496_; lean_object* v_env_2497_; lean_object* v_nextMacroScope_2498_; lean_object* v_ngen_2499_; lean_object* v_auxDeclNGen_2500_; lean_object* v_cache_2501_; lean_object* v_messages_2502_; lean_object* v_infoState_2503_; lean_object* v_snapshotTasks_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2527_; 
v___x_2495_ = lean_st_ref_take(v___y_2471_);
v_traceState_2496_ = lean_ctor_get(v___x_2495_, 4);
v_env_2497_ = lean_ctor_get(v___x_2495_, 0);
v_nextMacroScope_2498_ = lean_ctor_get(v___x_2495_, 1);
v_ngen_2499_ = lean_ctor_get(v___x_2495_, 2);
v_auxDeclNGen_2500_ = lean_ctor_get(v___x_2495_, 3);
v_cache_2501_ = lean_ctor_get(v___x_2495_, 5);
v_messages_2502_ = lean_ctor_get(v___x_2495_, 6);
v_infoState_2503_ = lean_ctor_get(v___x_2495_, 7);
v_snapshotTasks_2504_ = lean_ctor_get(v___x_2495_, 8);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2506_ = v___x_2495_;
v_isShared_2507_ = v_isSharedCheck_2527_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_snapshotTasks_2504_);
lean_inc(v_infoState_2503_);
lean_inc(v_messages_2502_);
lean_inc(v_cache_2501_);
lean_inc(v_traceState_2496_);
lean_inc(v_auxDeclNGen_2500_);
lean_inc(v_ngen_2499_);
lean_inc(v_nextMacroScope_2498_);
lean_inc(v_env_2497_);
lean_dec(v___x_2495_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2527_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
uint64_t v_tid_2508_; lean_object* v___x_2510_; uint8_t v_isShared_2511_; uint8_t v_isSharedCheck_2525_; 
v_tid_2508_ = lean_ctor_get_uint64(v_traceState_2496_, sizeof(void*)*1);
v_isSharedCheck_2525_ = !lean_is_exclusive(v_traceState_2496_);
if (v_isSharedCheck_2525_ == 0)
{
lean_object* v_unused_2526_; 
v_unused_2526_ = lean_ctor_get(v_traceState_2496_, 0);
lean_dec(v_unused_2526_);
v___x_2510_ = v_traceState_2496_;
v_isShared_2511_ = v_isSharedCheck_2525_;
goto v_resetjp_2509_;
}
else
{
lean_dec(v_traceState_2496_);
v___x_2510_ = lean_box(0);
v_isShared_2511_ = v_isSharedCheck_2525_;
goto v_resetjp_2509_;
}
v_resetjp_2509_:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2516_; 
v___x_2512_ = lean_box(0);
v___x_2513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2513_, 0, v_ref_2466_);
lean_ctor_set(v___x_2513_, 1, v_a_2491_);
v___x_2514_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2464_, v___x_2513_);
if (v_isShared_2511_ == 0)
{
lean_ctor_set(v___x_2510_, 0, v___x_2514_);
v___x_2516_ = v___x_2510_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v___x_2514_);
lean_ctor_set_uint64(v_reuseFailAlloc_2524_, sizeof(void*)*1, v_tid_2508_);
v___x_2516_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
lean_object* v___x_2518_; 
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 4, v___x_2516_);
v___x_2518_ = v___x_2506_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v_env_2497_);
lean_ctor_set(v_reuseFailAlloc_2523_, 1, v_nextMacroScope_2498_);
lean_ctor_set(v_reuseFailAlloc_2523_, 2, v_ngen_2499_);
lean_ctor_set(v_reuseFailAlloc_2523_, 3, v_auxDeclNGen_2500_);
lean_ctor_set(v_reuseFailAlloc_2523_, 4, v___x_2516_);
lean_ctor_set(v_reuseFailAlloc_2523_, 5, v_cache_2501_);
lean_ctor_set(v_reuseFailAlloc_2523_, 6, v_messages_2502_);
lean_ctor_set(v_reuseFailAlloc_2523_, 7, v_infoState_2503_);
lean_ctor_set(v_reuseFailAlloc_2523_, 8, v_snapshotTasks_2504_);
v___x_2518_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
lean_object* v___x_2519_; lean_object* v___x_2521_; 
v___x_2519_ = lean_st_ref_put(v___y_2471_, v___x_2518_);
if (v_isShared_2494_ == 0)
{
lean_ctor_set(v___x_2493_, 0, v___x_2512_);
v___x_2521_ = v___x_2493_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v___x_2512_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3___boxed(lean_object* v_oldTraces_2529_, lean_object* v_data_2530_, lean_object* v_ref_2531_, lean_object* v_msg_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(v_oldTraces_2529_, v_data_2530_, v_ref_2531_, v_msg_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
lean_dec(v___y_2536_);
lean_dec_ref(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(lean_object* v_opts_2539_, lean_object* v_opt_2540_){
_start:
{
lean_object* v_name_2541_; lean_object* v_defValue_2542_; lean_object* v_map_2543_; lean_object* v___x_2544_; 
v_name_2541_ = lean_ctor_get(v_opt_2540_, 0);
v_defValue_2542_ = lean_ctor_get(v_opt_2540_, 1);
v_map_2543_ = lean_ctor_get(v_opts_2539_, 0);
v___x_2544_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2543_, v_name_2541_);
if (lean_obj_tag(v___x_2544_) == 0)
{
lean_inc(v_defValue_2542_);
return v_defValue_2542_;
}
else
{
lean_object* v_val_2545_; 
v_val_2545_ = lean_ctor_get(v___x_2544_, 0);
lean_inc(v_val_2545_);
lean_dec_ref_known(v___x_2544_, 1);
if (lean_obj_tag(v_val_2545_) == 3)
{
lean_object* v_v_2546_; 
v_v_2546_ = lean_ctor_get(v_val_2545_, 0);
lean_inc(v_v_2546_);
lean_dec_ref_known(v_val_2545_, 1);
return v_v_2546_;
}
else
{
lean_dec(v_val_2545_);
lean_inc(v_defValue_2542_);
return v_defValue_2542_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6___boxed(lean_object* v_opts_2547_, lean_object* v_opt_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(v_opts_2547_, v_opt_2548_);
lean_dec_ref(v_opt_2548_);
lean_dec_ref(v_opts_2547_);
return v_res_2549_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5(lean_object* v_e_2550_){
_start:
{
if (lean_obj_tag(v_e_2550_) == 0)
{
uint8_t v___x_2551_; 
v___x_2551_ = 2;
return v___x_2551_;
}
else
{
uint8_t v___x_2552_; 
v___x_2552_ = 0;
return v___x_2552_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___boxed(lean_object* v_e_2553_){
_start:
{
uint8_t v_res_2554_; lean_object* v_r_2555_; 
v_res_2554_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5(v_e_2553_);
lean_dec_ref(v_e_2553_);
v_r_2555_ = lean_box(v_res_2554_);
return v_r_2555_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(lean_object* v_x_2556_){
_start:
{
if (lean_obj_tag(v_x_2556_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
v_a_2558_ = lean_ctor_get(v_x_2556_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v_x_2556_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v_x_2556_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v_x_2556_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
lean_ctor_set_tag(v___x_2560_, 1);
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
else
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2573_; 
v_a_2566_ = lean_ctor_get(v_x_2556_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v_x_2556_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2568_ = v_x_2556_;
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v_x_2556_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
lean_ctor_set_tag(v___x_2568_, 0);
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_a_2566_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg___boxed(lean_object* v_x_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(v_x_2574_);
return v_res_2576_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2578_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0));
v___x_2579_ = l_Lean_stringToMessageData(v___x_2578_);
return v___x_2579_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2(void){
_start:
{
lean_object* v___x_2580_; double v___x_2581_; 
v___x_2580_ = lean_unsigned_to_nat(1000u);
v___x_2581_ = lean_float_of_nat(v___x_2580_);
return v___x_2581_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(lean_object* v_cls_2582_, uint8_t v_collapsed_2583_, lean_object* v_tag_2584_, lean_object* v_opts_2585_, uint8_t v_clsEnabled_2586_, lean_object* v_oldTraces_2587_, lean_object* v_msg_2588_, lean_object* v_resStartStop_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_){
_start:
{
lean_object* v_fst_2595_; lean_object* v_snd_2596_; lean_object* v___y_2598_; lean_object* v___y_2599_; lean_object* v_data_2600_; lean_object* v_fst_2603_; lean_object* v_snd_2604_; lean_object* v___x_2605_; uint8_t v___x_2606_; lean_object* v___y_2608_; lean_object* v_a_2609_; uint8_t v___y_2624_; double v___y_2655_; 
v_fst_2595_ = lean_ctor_get(v_resStartStop_2589_, 0);
lean_inc(v_fst_2595_);
v_snd_2596_ = lean_ctor_get(v_resStartStop_2589_, 1);
lean_inc(v_snd_2596_);
lean_dec_ref(v_resStartStop_2589_);
v_fst_2603_ = lean_ctor_get(v_snd_2596_, 0);
lean_inc(v_fst_2603_);
v_snd_2604_ = lean_ctor_get(v_snd_2596_, 1);
lean_inc(v_snd_2604_);
lean_dec(v_snd_2596_);
v___x_2605_ = l_Lean_trace_profiler;
v___x_2606_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_opts_2585_, v___x_2605_);
if (v___x_2606_ == 0)
{
v___y_2624_ = v___x_2606_;
goto v___jp_2623_;
}
else
{
lean_object* v___x_2660_; uint8_t v___x_2661_; 
v___x_2660_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2661_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_opts_2585_, v___x_2660_);
if (v___x_2661_ == 0)
{
lean_object* v___x_2662_; lean_object* v___x_2663_; double v___x_2664_; double v___x_2665_; double v___x_2666_; 
v___x_2662_ = l_Lean_trace_profiler_threshold;
v___x_2663_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(v_opts_2585_, v___x_2662_);
v___x_2664_ = lean_float_of_nat(v___x_2663_);
v___x_2665_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2);
v___x_2666_ = lean_float_div(v___x_2664_, v___x_2665_);
v___y_2655_ = v___x_2666_;
goto v___jp_2654_;
}
else
{
lean_object* v___x_2667_; lean_object* v___x_2668_; double v___x_2669_; 
v___x_2667_ = l_Lean_trace_profiler_threshold;
v___x_2668_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(v_opts_2585_, v___x_2667_);
v___x_2669_ = lean_float_of_nat(v___x_2668_);
v___y_2655_ = v___x_2669_;
goto v___jp_2654_;
}
}
v___jp_2597_:
{
lean_object* v___x_2601_; 
lean_inc(v___y_2599_);
v___x_2601_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(v_oldTraces_2587_, v_data_2600_, v___y_2599_, v___y_2598_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_);
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v___x_2602_; 
lean_dec_ref_known(v___x_2601_, 1);
v___x_2602_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(v_fst_2595_);
return v___x_2602_;
}
else
{
lean_dec(v_fst_2595_);
return v___x_2601_;
}
}
v___jp_2607_:
{
uint8_t v_result_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; double v___x_2613_; lean_object* v_data_2614_; 
v_result_2610_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5(v_fst_2595_);
v___x_2611_ = lean_box(v_result_2610_);
v___x_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2611_);
v___x_2613_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0);
lean_inc_ref(v_tag_2584_);
lean_inc_ref(v___x_2612_);
lean_inc(v_cls_2582_);
v_data_2614_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2614_, 0, v_cls_2582_);
lean_ctor_set(v_data_2614_, 1, v___x_2612_);
lean_ctor_set(v_data_2614_, 2, v_tag_2584_);
lean_ctor_set_float(v_data_2614_, sizeof(void*)*3, v___x_2613_);
lean_ctor_set_float(v_data_2614_, sizeof(void*)*3 + 8, v___x_2613_);
lean_ctor_set_uint8(v_data_2614_, sizeof(void*)*3 + 16, v_collapsed_2583_);
if (v___x_2606_ == 0)
{
lean_dec_ref_known(v___x_2612_, 1);
lean_dec(v_snd_2604_);
lean_dec(v_fst_2603_);
lean_dec_ref(v_tag_2584_);
lean_dec(v_cls_2582_);
v___y_2598_ = v_a_2609_;
v___y_2599_ = v___y_2608_;
v_data_2600_ = v_data_2614_;
goto v___jp_2597_;
}
else
{
lean_object* v_data_2615_; double v___x_2616_; double v___x_2617_; 
lean_dec_ref_known(v_data_2614_, 3);
v_data_2615_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2615_, 0, v_cls_2582_);
lean_ctor_set(v_data_2615_, 1, v___x_2612_);
lean_ctor_set(v_data_2615_, 2, v_tag_2584_);
v___x_2616_ = lean_unbox_float(v_fst_2603_);
lean_dec(v_fst_2603_);
lean_ctor_set_float(v_data_2615_, sizeof(void*)*3, v___x_2616_);
v___x_2617_ = lean_unbox_float(v_snd_2604_);
lean_dec(v_snd_2604_);
lean_ctor_set_float(v_data_2615_, sizeof(void*)*3 + 8, v___x_2617_);
lean_ctor_set_uint8(v_data_2615_, sizeof(void*)*3 + 16, v_collapsed_2583_);
v___y_2598_ = v_a_2609_;
v___y_2599_ = v___y_2608_;
v_data_2600_ = v_data_2615_;
goto v___jp_2597_;
}
}
v___jp_2618_:
{
lean_object* v_ref_2619_; lean_object* v___x_2620_; 
v_ref_2619_ = lean_ctor_get(v___y_2592_, 2);
lean_inc(v___y_2593_);
lean_inc_ref(v___y_2592_);
lean_inc(v___y_2591_);
lean_inc_ref(v___y_2590_);
lean_inc(v_fst_2595_);
v___x_2620_ = lean_apply_6(v_msg_2588_, v_fst_2595_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_, lean_box(0));
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
lean_inc(v_a_2621_);
lean_dec_ref_known(v___x_2620_, 1);
v___y_2608_ = v_ref_2619_;
v_a_2609_ = v_a_2621_;
goto v___jp_2607_;
}
else
{
lean_object* v___x_2622_; 
lean_dec_ref_known(v___x_2620_, 1);
v___x_2622_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1);
v___y_2608_ = v_ref_2619_;
v_a_2609_ = v___x_2622_;
goto v___jp_2607_;
}
}
v___jp_2623_:
{
if (v_clsEnabled_2586_ == 0)
{
if (v___y_2624_ == 0)
{
lean_object* v___x_2625_; lean_object* v_traceState_2626_; lean_object* v_env_2627_; lean_object* v_nextMacroScope_2628_; lean_object* v_ngen_2629_; lean_object* v_auxDeclNGen_2630_; lean_object* v_cache_2631_; lean_object* v_messages_2632_; lean_object* v_infoState_2633_; lean_object* v_snapshotTasks_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2653_; 
lean_dec(v_snd_2604_);
lean_dec(v_fst_2603_);
lean_dec_ref(v_msg_2588_);
lean_dec_ref(v_tag_2584_);
lean_dec(v_cls_2582_);
v___x_2625_ = lean_st_ref_take(v___y_2593_);
v_traceState_2626_ = lean_ctor_get(v___x_2625_, 4);
v_env_2627_ = lean_ctor_get(v___x_2625_, 0);
v_nextMacroScope_2628_ = lean_ctor_get(v___x_2625_, 1);
v_ngen_2629_ = lean_ctor_get(v___x_2625_, 2);
v_auxDeclNGen_2630_ = lean_ctor_get(v___x_2625_, 3);
v_cache_2631_ = lean_ctor_get(v___x_2625_, 5);
v_messages_2632_ = lean_ctor_get(v___x_2625_, 6);
v_infoState_2633_ = lean_ctor_get(v___x_2625_, 7);
v_snapshotTasks_2634_ = lean_ctor_get(v___x_2625_, 8);
v_isSharedCheck_2653_ = !lean_is_exclusive(v___x_2625_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2636_ = v___x_2625_;
v_isShared_2637_ = v_isSharedCheck_2653_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_snapshotTasks_2634_);
lean_inc(v_infoState_2633_);
lean_inc(v_messages_2632_);
lean_inc(v_cache_2631_);
lean_inc(v_traceState_2626_);
lean_inc(v_auxDeclNGen_2630_);
lean_inc(v_ngen_2629_);
lean_inc(v_nextMacroScope_2628_);
lean_inc(v_env_2627_);
lean_dec(v___x_2625_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2653_;
goto v_resetjp_2635_;
}
v_resetjp_2635_:
{
uint64_t v_tid_2638_; lean_object* v_traces_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2652_; 
v_tid_2638_ = lean_ctor_get_uint64(v_traceState_2626_, sizeof(void*)*1);
v_traces_2639_ = lean_ctor_get(v_traceState_2626_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v_traceState_2626_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2641_ = v_traceState_2626_;
v_isShared_2642_ = v_isSharedCheck_2652_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_traces_2639_);
lean_dec(v_traceState_2626_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2652_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v___x_2643_; lean_object* v___x_2645_; 
v___x_2643_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2587_, v_traces_2639_);
lean_dec_ref(v_traces_2639_);
if (v_isShared_2642_ == 0)
{
lean_ctor_set(v___x_2641_, 0, v___x_2643_);
v___x_2645_ = v___x_2641_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v___x_2643_);
lean_ctor_set_uint64(v_reuseFailAlloc_2651_, sizeof(void*)*1, v_tid_2638_);
v___x_2645_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
lean_object* v___x_2647_; 
if (v_isShared_2637_ == 0)
{
lean_ctor_set(v___x_2636_, 4, v___x_2645_);
v___x_2647_ = v___x_2636_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_env_2627_);
lean_ctor_set(v_reuseFailAlloc_2650_, 1, v_nextMacroScope_2628_);
lean_ctor_set(v_reuseFailAlloc_2650_, 2, v_ngen_2629_);
lean_ctor_set(v_reuseFailAlloc_2650_, 3, v_auxDeclNGen_2630_);
lean_ctor_set(v_reuseFailAlloc_2650_, 4, v___x_2645_);
lean_ctor_set(v_reuseFailAlloc_2650_, 5, v_cache_2631_);
lean_ctor_set(v_reuseFailAlloc_2650_, 6, v_messages_2632_);
lean_ctor_set(v_reuseFailAlloc_2650_, 7, v_infoState_2633_);
lean_ctor_set(v_reuseFailAlloc_2650_, 8, v_snapshotTasks_2634_);
v___x_2647_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2648_ = lean_st_ref_put(v___y_2593_, v___x_2647_);
v___x_2649_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(v_fst_2595_);
return v___x_2649_;
}
}
}
}
}
else
{
goto v___jp_2618_;
}
}
else
{
goto v___jp_2618_;
}
}
v___jp_2654_:
{
double v___x_2656_; double v___x_2657_; double v___x_2658_; uint8_t v___x_2659_; 
v___x_2656_ = lean_unbox_float(v_snd_2604_);
v___x_2657_ = lean_unbox_float(v_fst_2603_);
v___x_2658_ = lean_float_sub(v___x_2656_, v___x_2657_);
v___x_2659_ = lean_float_decLt(v___y_2655_, v___x_2658_);
v___y_2624_ = v___x_2659_;
goto v___jp_2623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___boxed(lean_object* v_cls_2670_, lean_object* v_collapsed_2671_, lean_object* v_tag_2672_, lean_object* v_opts_2673_, lean_object* v_clsEnabled_2674_, lean_object* v_oldTraces_2675_, lean_object* v_msg_2676_, lean_object* v_resStartStop_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_){
_start:
{
uint8_t v_collapsed_boxed_2683_; uint8_t v_clsEnabled_boxed_2684_; lean_object* v_res_2685_; 
v_collapsed_boxed_2683_ = lean_unbox(v_collapsed_2671_);
v_clsEnabled_boxed_2684_ = lean_unbox(v_clsEnabled_2674_);
v_res_2685_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_2670_, v_collapsed_boxed_2683_, v_tag_2672_, v_opts_2673_, v_clsEnabled_boxed_2684_, v_oldTraces_2675_, v_msg_2676_, v_resStartStop_2677_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
lean_dec_ref(v_opts_2673_);
return v_res_2685_;
}
}
static double _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0(void){
_start:
{
lean_object* v___x_2686_; double v___x_2687_; 
v___x_2686_ = lean_unsigned_to_nat(1000000000u);
v___x_2687_ = lean_float_of_nat(v___x_2686_);
return v___x_2687_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2(void){
_start:
{
lean_object* v___x_2689_; lean_object* v___x_2690_; 
v___x_2689_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1));
v___x_2690_ = l_Lean_stringToMessageData(v___x_2689_);
return v___x_2690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(lean_object* v_ctorVal_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_){
_start:
{
lean_object* v_toConstantVal_2697_; lean_object* v_toCold_2698_; lean_object* v_options_2699_; lean_object* v_name_2700_; lean_object* v_levelParams_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2912_; 
v_toConstantVal_2697_ = lean_ctor_get(v_ctorVal_2691_, 0);
lean_inc_ref(v_toConstantVal_2697_);
v_toCold_2698_ = lean_ctor_get(v_a_2694_, 0);
v_options_2699_ = lean_ctor_get(v_toCold_2698_, 2);
v_name_2700_ = lean_ctor_get(v_toConstantVal_2697_, 0);
v_levelParams_2701_ = lean_ctor_get(v_toConstantVal_2697_, 1);
v_isSharedCheck_2912_ = !lean_is_exclusive(v_toConstantVal_2697_);
if (v_isSharedCheck_2912_ == 0)
{
lean_object* v_unused_2913_; 
v_unused_2913_ = lean_ctor_get(v_toConstantVal_2697_, 2);
lean_dec(v_unused_2913_);
v___x_2703_ = v_toConstantVal_2697_;
v_isShared_2704_ = v_isSharedCheck_2912_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_levelParams_2701_);
lean_inc(v_name_2700_);
lean_dec(v_toConstantVal_2697_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2912_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v_inheritedTraceOptions_2705_; uint8_t v_hasTrace_2706_; lean_object* v_name_2707_; 
v_inheritedTraceOptions_2705_ = lean_ctor_get(v_toCold_2698_, 11);
v_hasTrace_2706_ = lean_ctor_get_uint8(v_options_2699_, sizeof(void*)*1);
lean_inc(v_name_2700_);
v_name_2707_ = l_Lean_Meta_mkInjectiveTheoremNameFor(v_name_2700_);
if (v_hasTrace_2706_ == 0)
{
lean_object* v___x_2708_; 
v___x_2708_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2691_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2746_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2711_ = v___x_2708_;
v_isShared_2712_ = v_isSharedCheck_2746_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2708_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2746_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
if (lean_obj_tag(v_a_2709_) == 1)
{
lean_object* v_val_2713_; lean_object* v___x_2714_; 
lean_del_object(v___x_2711_);
v_val_2713_ = lean_ctor_get(v_a_2709_, 0);
lean_inc_n(v_val_2713_, 2);
lean_dec_ref_known(v_a_2709_, 1);
v___x_2714_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2700_, v_val_2713_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
if (lean_obj_tag(v___x_2714_) == 0)
{
lean_object* v_a_2715_; lean_object* v___x_2716_; lean_object* v_a_2717_; lean_object* v___x_2718_; lean_object* v_a_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2733_; 
v_a_2715_ = lean_ctor_get(v___x_2714_, 0);
lean_inc(v_a_2715_);
lean_dec_ref_known(v___x_2714_, 1);
v___x_2716_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2713_, v_a_2693_);
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
lean_inc(v_a_2717_);
lean_dec_ref(v___x_2716_);
v___x_2718_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2715_, v_a_2693_);
v_a_2719_ = lean_ctor_get(v___x_2718_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2718_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2721_ = v___x_2718_;
v_isShared_2722_ = v_isSharedCheck_2733_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_a_2719_);
lean_dec(v___x_2718_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2733_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
lean_object* v___x_2724_; 
lean_inc(v_name_2707_);
if (v_isShared_2704_ == 0)
{
lean_ctor_set(v___x_2703_, 2, v_a_2717_);
lean_ctor_set(v___x_2703_, 0, v_name_2707_);
v___x_2724_ = v___x_2703_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_name_2707_);
lean_ctor_set(v_reuseFailAlloc_2732_, 1, v_levelParams_2701_);
lean_ctor_set(v_reuseFailAlloc_2732_, 2, v_a_2717_);
v___x_2724_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2729_; 
v___x_2725_ = lean_box(0);
v___x_2726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2726_, 0, v_name_2707_);
lean_ctor_set(v___x_2726_, 1, v___x_2725_);
v___x_2727_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2724_);
lean_ctor_set(v___x_2727_, 1, v_a_2719_);
lean_ctor_set(v___x_2727_, 2, v___x_2726_);
if (v_isShared_2722_ == 0)
{
lean_ctor_set_tag(v___x_2721_, 2);
lean_ctor_set(v___x_2721_, 0, v___x_2727_);
v___x_2729_ = v___x_2721_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v___x_2727_);
v___x_2729_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
lean_object* v___x_2730_; 
v___x_2730_ = l_Lean_addDecl(v___x_2729_, v_hasTrace_2706_, v_a_2694_, v_a_2695_);
return v___x_2730_;
}
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec(v_val_2713_);
lean_dec(v_name_2707_);
lean_del_object(v___x_2703_);
lean_dec(v_levelParams_2701_);
v_a_2734_ = lean_ctor_get(v___x_2714_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2714_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2714_);
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
lean_object* v___x_2742_; lean_object* v___x_2744_; 
lean_dec(v_a_2709_);
lean_dec(v_name_2707_);
lean_del_object(v___x_2703_);
lean_dec(v_levelParams_2701_);
lean_dec(v_name_2700_);
v___x_2742_ = lean_box(0);
if (v_isShared_2712_ == 0)
{
lean_ctor_set(v___x_2711_, 0, v___x_2742_);
v___x_2744_ = v___x_2711_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v___x_2742_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
}
}
else
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2754_; 
lean_dec(v_name_2707_);
lean_del_object(v___x_2703_);
lean_dec(v_levelParams_2701_);
lean_dec(v_name_2700_);
v_a_2747_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2749_ = v___x_2708_;
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v___x_2708_);
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
else
{
lean_object* v___f_2755_; lean_object* v_cls_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; uint8_t v___x_2759_; lean_object* v___y_2761_; lean_object* v___y_2762_; lean_object* v_a_2763_; lean_object* v___y_2773_; lean_object* v___y_2774_; lean_object* v_a_2775_; lean_object* v___y_2778_; lean_object* v___y_2779_; lean_object* v_a_2780_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2785_; lean_object* v___y_2789_; lean_object* v___y_2790_; lean_object* v_a_2791_; lean_object* v___y_2804_; lean_object* v___y_2805_; lean_object* v_a_2806_; lean_object* v___y_2809_; lean_object* v___y_2810_; lean_object* v_a_2811_; lean_object* v___y_2814_; lean_object* v___y_2815_; lean_object* v___y_2816_; 
lean_inc(v_name_2707_);
v___f_2755_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2755_, 0, v_name_2707_);
v_cls_2756_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_2757_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_2758_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_2759_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2705_, v_options_2699_, v___x_2758_);
if (v___x_2759_ == 0)
{
lean_object* v___x_2854_; uint8_t v___x_2855_; 
v___x_2854_ = l_Lean_trace_profiler;
v___x_2855_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_2699_, v___x_2854_);
if (v___x_2855_ == 0)
{
lean_object* v___x_2856_; 
lean_dec_ref(v___f_2755_);
v___x_2856_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2691_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
if (lean_obj_tag(v___x_2856_) == 0)
{
lean_object* v_a_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2903_; 
v_a_2857_ = lean_ctor_get(v___x_2856_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2856_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2859_ = v___x_2856_;
v_isShared_2860_ = v_isSharedCheck_2903_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_a_2857_);
lean_dec(v___x_2856_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2903_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
if (lean_obj_tag(v_a_2857_) == 1)
{
lean_object* v_val_2861_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v___y_2866_; 
lean_del_object(v___x_2859_);
v_val_2861_ = lean_ctor_get(v_a_2857_, 0);
lean_inc(v_val_2861_);
lean_dec_ref_known(v_a_2857_, 1);
if (v___x_2759_ == 0)
{
v___y_2863_ = v_a_2692_;
v___y_2864_ = v_a_2693_;
v___y_2865_ = v_a_2694_;
v___y_2866_ = v_a_2695_;
goto v___jp_2862_;
}
else
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
v___x_2895_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
lean_inc(v_val_2861_);
v___x_2896_ = l_Lean_MessageData_ofExpr(v_val_2861_);
v___x_2897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2895_);
lean_ctor_set(v___x_2897_, 1, v___x_2896_);
v___x_2898_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2756_, v___x_2897_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
if (lean_obj_tag(v___x_2898_) == 0)
{
lean_dec_ref_known(v___x_2898_, 1);
v___y_2863_ = v_a_2692_;
v___y_2864_ = v_a_2693_;
v___y_2865_ = v_a_2694_;
v___y_2866_ = v_a_2695_;
goto v___jp_2862_;
}
else
{
lean_dec(v_val_2861_);
lean_dec(v_name_2707_);
lean_del_object(v___x_2703_);
lean_dec(v_levelParams_2701_);
lean_dec(v_name_2700_);
return v___x_2898_;
}
}
v___jp_2862_:
{
lean_object* v___x_2867_; 
lean_inc(v_val_2861_);
v___x_2867_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2700_, v_val_2861_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_);
if (lean_obj_tag(v___x_2867_) == 0)
{
lean_object* v_a_2868_; lean_object* v___x_2869_; lean_object* v_a_2870_; lean_object* v___x_2871_; lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2886_; 
v_a_2868_ = lean_ctor_get(v___x_2867_, 0);
lean_inc(v_a_2868_);
lean_dec_ref_known(v___x_2867_, 1);
v___x_2869_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2861_, v___y_2864_);
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
lean_inc(v_a_2870_);
lean_dec_ref(v___x_2869_);
v___x_2871_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2868_, v___y_2864_);
v_a_2872_ = lean_ctor_get(v___x_2871_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2874_ = v___x_2871_;
v_isShared_2875_ = v_isSharedCheck_2886_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v___x_2871_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2886_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2877_; 
lean_inc(v_name_2707_);
if (v_isShared_2704_ == 0)
{
lean_ctor_set(v___x_2703_, 2, v_a_2870_);
lean_ctor_set(v___x_2703_, 0, v_name_2707_);
v___x_2877_ = v___x_2703_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_name_2707_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v_levelParams_2701_);
lean_ctor_set(v_reuseFailAlloc_2885_, 2, v_a_2870_);
v___x_2877_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2882_; 
v___x_2878_ = lean_box(0);
v___x_2879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2879_, 0, v_name_2707_);
lean_ctor_set(v___x_2879_, 1, v___x_2878_);
v___x_2880_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2877_);
lean_ctor_set(v___x_2880_, 1, v_a_2872_);
lean_ctor_set(v___x_2880_, 2, v___x_2879_);
if (v_isShared_2875_ == 0)
{
lean_ctor_set_tag(v___x_2874_, 2);
lean_ctor_set(v___x_2874_, 0, v___x_2880_);
v___x_2882_ = v___x_2874_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v___x_2880_);
v___x_2882_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
lean_object* v___x_2883_; 
v___x_2883_ = l_Lean_addDecl(v___x_2882_, v___x_2855_, v___y_2865_, v___y_2866_);
return v___x_2883_;
}
}
}
}
else
{
lean_object* v_a_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2894_; 
lean_dec(v_val_2861_);
lean_dec(v_name_2707_);
lean_del_object(v___x_2703_);
lean_dec(v_levelParams_2701_);
v_a_2887_ = lean_ctor_get(v___x_2867_, 0);
v_isSharedCheck_2894_ = !lean_is_exclusive(v___x_2867_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2889_ = v___x_2867_;
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_a_2887_);
lean_dec(v___x_2867_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
lean_object* v___x_2892_; 
if (v_isShared_2890_ == 0)
{
v___x_2892_ = v___x_2889_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v_a_2887_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
return v___x_2892_;
}
}
}
}
}
else
{
lean_object* v___x_2899_; lean_object* v___x_2901_; 
lean_dec(v_a_2857_);
lean_dec(v_name_2707_);
lean_del_object(v___x_2703_);
lean_dec(v_levelParams_2701_);
lean_dec(v_name_2700_);
v___x_2899_ = lean_box(0);
if (v_isShared_2860_ == 0)
{
lean_ctor_set(v___x_2859_, 0, v___x_2899_);
v___x_2901_ = v___x_2859_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v___x_2899_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
return v___x_2901_;
}
}
}
}
else
{
lean_object* v_a_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2911_; 
lean_dec(v_name_2707_);
lean_del_object(v___x_2703_);
lean_dec(v_levelParams_2701_);
lean_dec(v_name_2700_);
v_a_2904_ = lean_ctor_get(v___x_2856_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2856_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2906_ = v___x_2856_;
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_a_2904_);
lean_dec(v___x_2856_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
if (v_isShared_2907_ == 0)
{
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_a_2904_);
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
else
{
lean_del_object(v___x_2703_);
goto v___jp_2819_;
}
}
else
{
lean_del_object(v___x_2703_);
goto v___jp_2819_;
}
v___jp_2760_:
{
lean_object* v___x_2764_; double v___x_2765_; double v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2764_ = lean_io_get_num_heartbeats();
v___x_2765_ = lean_float_of_nat(v___y_2762_);
v___x_2766_ = lean_float_of_nat(v___x_2764_);
v___x_2767_ = lean_box_float(v___x_2765_);
v___x_2768_ = lean_box_float(v___x_2766_);
v___x_2769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2767_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
v___x_2770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2770_, 0, v_a_2763_);
lean_ctor_set(v___x_2770_, 1, v___x_2769_);
v___x_2771_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_2756_, v_hasTrace_2706_, v___x_2757_, v_options_2699_, v___x_2759_, v___y_2761_, v___f_2755_, v___x_2770_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
return v___x_2771_;
}
v___jp_2772_:
{
lean_object* v___x_2776_; 
v___x_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2776_, 0, v_a_2775_);
v___y_2761_ = v___y_2773_;
v___y_2762_ = v___y_2774_;
v_a_2763_ = v___x_2776_;
goto v___jp_2760_;
}
v___jp_2777_:
{
lean_object* v___x_2781_; 
v___x_2781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2781_, 0, v_a_2780_);
v___y_2761_ = v___y_2778_;
v___y_2762_ = v___y_2779_;
v_a_2763_ = v___x_2781_;
goto v___jp_2760_;
}
v___jp_2782_:
{
if (lean_obj_tag(v___y_2785_) == 0)
{
lean_object* v_a_2786_; 
v_a_2786_ = lean_ctor_get(v___y_2785_, 0);
lean_inc(v_a_2786_);
lean_dec_ref_known(v___y_2785_, 1);
v___y_2778_ = v___y_2783_;
v___y_2779_ = v___y_2784_;
v_a_2780_ = v_a_2786_;
goto v___jp_2777_;
}
else
{
lean_object* v_a_2787_; 
v_a_2787_ = lean_ctor_get(v___y_2785_, 0);
lean_inc(v_a_2787_);
lean_dec_ref_known(v___y_2785_, 1);
v___y_2773_ = v___y_2783_;
v___y_2774_ = v___y_2784_;
v_a_2775_ = v_a_2787_;
goto v___jp_2772_;
}
}
v___jp_2788_:
{
lean_object* v___x_2792_; double v___x_2793_; double v___x_2794_; double v___x_2795_; double v___x_2796_; double v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v___x_2792_ = lean_io_mono_nanos_now();
v___x_2793_ = lean_float_of_nat(v___y_2789_);
v___x_2794_ = lean_float_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0);
v___x_2795_ = lean_float_div(v___x_2793_, v___x_2794_);
v___x_2796_ = lean_float_of_nat(v___x_2792_);
v___x_2797_ = lean_float_div(v___x_2796_, v___x_2794_);
v___x_2798_ = lean_box_float(v___x_2795_);
v___x_2799_ = lean_box_float(v___x_2797_);
v___x_2800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2800_, 0, v___x_2798_);
lean_ctor_set(v___x_2800_, 1, v___x_2799_);
v___x_2801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2801_, 0, v_a_2791_);
lean_ctor_set(v___x_2801_, 1, v___x_2800_);
v___x_2802_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_2756_, v_hasTrace_2706_, v___x_2757_, v_options_2699_, v___x_2759_, v___y_2790_, v___f_2755_, v___x_2801_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
return v___x_2802_;
}
v___jp_2803_:
{
lean_object* v___x_2807_; 
v___x_2807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2807_, 0, v_a_2806_);
v___y_2789_ = v___y_2804_;
v___y_2790_ = v___y_2805_;
v_a_2791_ = v___x_2807_;
goto v___jp_2788_;
}
v___jp_2808_:
{
lean_object* v___x_2812_; 
v___x_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2812_, 0, v_a_2811_);
v___y_2789_ = v___y_2809_;
v___y_2790_ = v___y_2810_;
v_a_2791_ = v___x_2812_;
goto v___jp_2788_;
}
v___jp_2813_:
{
if (lean_obj_tag(v___y_2816_) == 0)
{
lean_object* v_a_2817_; 
v_a_2817_ = lean_ctor_get(v___y_2816_, 0);
lean_inc(v_a_2817_);
lean_dec_ref_known(v___y_2816_, 1);
v___y_2804_ = v___y_2814_;
v___y_2805_ = v___y_2815_;
v_a_2806_ = v_a_2817_;
goto v___jp_2803_;
}
else
{
lean_object* v_a_2818_; 
v_a_2818_ = lean_ctor_get(v___y_2816_, 0);
lean_inc(v_a_2818_);
lean_dec_ref_known(v___y_2816_, 1);
v___y_2809_ = v___y_2814_;
v___y_2810_ = v___y_2815_;
v_a_2811_ = v_a_2818_;
goto v___jp_2808_;
}
}
v___jp_2819_:
{
lean_object* v___x_2820_; lean_object* v_a_2821_; lean_object* v___x_2822_; uint8_t v___x_2823_; 
v___x_2820_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_2695_);
v_a_2821_ = lean_ctor_get(v___x_2820_, 0);
lean_inc(v_a_2821_);
lean_dec_ref(v___x_2820_);
v___x_2822_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2823_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_2699_, v___x_2822_);
if (v___x_2823_ == 0)
{
lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2824_ = lean_io_mono_nanos_now();
v___x_2825_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2691_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v_a_2826_; 
v_a_2826_ = lean_ctor_get(v___x_2825_, 0);
lean_inc(v_a_2826_);
lean_dec_ref_known(v___x_2825_, 1);
if (lean_obj_tag(v_a_2826_) == 1)
{
if (v___x_2759_ == 0)
{
lean_object* v_val_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
v_val_2827_ = lean_ctor_get(v_a_2826_, 0);
lean_inc(v_val_2827_);
lean_dec_ref_known(v_a_2826_, 1);
v___x_2828_ = lean_box(0);
v___x_2829_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(v_name_2700_, v_val_2827_, v_name_2707_, v_levelParams_2701_, v___x_2823_, v___x_2828_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
v___y_2814_ = v___x_2824_;
v___y_2815_ = v_a_2821_;
v___y_2816_ = v___x_2829_;
goto v___jp_2813_;
}
else
{
lean_object* v_val_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
v_val_2830_ = lean_ctor_get(v_a_2826_, 0);
lean_inc_n(v_val_2830_, 2);
lean_dec_ref_known(v_a_2826_, 1);
v___x_2831_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_2832_ = l_Lean_MessageData_ofExpr(v_val_2830_);
v___x_2833_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2831_);
lean_ctor_set(v___x_2833_, 1, v___x_2832_);
v___x_2834_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2756_, v___x_2833_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
if (lean_obj_tag(v___x_2834_) == 0)
{
lean_object* v_a_2835_; lean_object* v___x_2836_; 
v_a_2835_ = lean_ctor_get(v___x_2834_, 0);
lean_inc(v_a_2835_);
lean_dec_ref_known(v___x_2834_, 1);
v___x_2836_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(v_name_2700_, v_val_2830_, v_name_2707_, v_levelParams_2701_, v___x_2823_, v_a_2835_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
v___y_2814_ = v___x_2824_;
v___y_2815_ = v_a_2821_;
v___y_2816_ = v___x_2836_;
goto v___jp_2813_;
}
else
{
lean_dec(v_val_2830_);
lean_dec(v_name_2707_);
lean_dec(v_levelParams_2701_);
lean_dec(v_name_2700_);
v___y_2814_ = v___x_2824_;
v___y_2815_ = v_a_2821_;
v___y_2816_ = v___x_2834_;
goto v___jp_2813_;
}
}
}
else
{
lean_object* v___x_2837_; 
lean_dec(v_a_2826_);
lean_dec(v_name_2707_);
lean_dec(v_levelParams_2701_);
lean_dec(v_name_2700_);
v___x_2837_ = lean_box(0);
v___y_2804_ = v___x_2824_;
v___y_2805_ = v_a_2821_;
v_a_2806_ = v___x_2837_;
goto v___jp_2803_;
}
}
else
{
lean_object* v_a_2838_; 
lean_dec(v_name_2707_);
lean_dec(v_levelParams_2701_);
lean_dec(v_name_2700_);
v_a_2838_ = lean_ctor_get(v___x_2825_, 0);
lean_inc(v_a_2838_);
lean_dec_ref_known(v___x_2825_, 1);
v___y_2809_ = v___x_2824_;
v___y_2810_ = v_a_2821_;
v_a_2811_ = v_a_2838_;
goto v___jp_2808_;
}
}
else
{
lean_object* v___x_2839_; lean_object* v___x_2840_; 
v___x_2839_ = lean_io_get_num_heartbeats();
v___x_2840_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2691_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
if (lean_obj_tag(v___x_2840_) == 0)
{
lean_object* v_a_2841_; 
v_a_2841_ = lean_ctor_get(v___x_2840_, 0);
lean_inc(v_a_2841_);
lean_dec_ref_known(v___x_2840_, 1);
if (lean_obj_tag(v_a_2841_) == 1)
{
if (v___x_2759_ == 0)
{
lean_object* v_val_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
v_val_2842_ = lean_ctor_get(v_a_2841_, 0);
lean_inc(v_val_2842_);
lean_dec_ref_known(v_a_2841_, 1);
v___x_2843_ = lean_box(0);
v___x_2844_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(v_name_2700_, v_val_2842_, v_name_2707_, v_levelParams_2701_, v___x_2843_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
v___y_2783_ = v_a_2821_;
v___y_2784_ = v___x_2839_;
v___y_2785_ = v___x_2844_;
goto v___jp_2782_;
}
else
{
lean_object* v_val_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v_val_2845_ = lean_ctor_get(v_a_2841_, 0);
lean_inc_n(v_val_2845_, 2);
lean_dec_ref_known(v_a_2841_, 1);
v___x_2846_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_2847_ = l_Lean_MessageData_ofExpr(v_val_2845_);
v___x_2848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2846_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
v___x_2849_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2756_, v___x_2848_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2851_; 
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_a_2850_);
lean_dec_ref_known(v___x_2849_, 1);
v___x_2851_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(v_name_2700_, v_val_2845_, v_name_2707_, v_levelParams_2701_, v_a_2850_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
v___y_2783_ = v_a_2821_;
v___y_2784_ = v___x_2839_;
v___y_2785_ = v___x_2851_;
goto v___jp_2782_;
}
else
{
lean_dec(v_val_2845_);
lean_dec(v_name_2707_);
lean_dec(v_levelParams_2701_);
lean_dec(v_name_2700_);
v___y_2783_ = v_a_2821_;
v___y_2784_ = v___x_2839_;
v___y_2785_ = v___x_2849_;
goto v___jp_2782_;
}
}
}
else
{
lean_object* v___x_2852_; 
lean_dec(v_a_2841_);
lean_dec(v_name_2707_);
lean_dec(v_levelParams_2701_);
lean_dec(v_name_2700_);
v___x_2852_ = lean_box(0);
v___y_2778_ = v_a_2821_;
v___y_2779_ = v___x_2839_;
v_a_2780_ = v___x_2852_;
goto v___jp_2777_;
}
}
else
{
lean_object* v_a_2853_; 
lean_dec(v_name_2707_);
lean_dec(v_levelParams_2701_);
lean_dec(v_name_2700_);
v_a_2853_ = lean_ctor_get(v___x_2840_, 0);
lean_inc(v_a_2853_);
lean_dec_ref_known(v___x_2840_, 1);
v___y_2773_ = v_a_2821_;
v___y_2774_ = v___x_2839_;
v_a_2775_ = v_a_2853_;
goto v___jp_2772_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___boxed(lean_object* v_ctorVal_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(v_ctorVal_2914_, v_a_2915_, v_a_2916_, v_a_2917_, v_a_2918_);
lean_dec(v_a_2918_);
lean_dec_ref(v_a_2917_);
lean_dec(v_a_2916_);
lean_dec_ref(v_a_2915_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4(lean_object* v_00_u03b1_2921_, lean_object* v_x_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_){
_start:
{
lean_object* v___x_2928_; 
v___x_2928_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(v_x_2922_);
return v___x_2928_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2929_, lean_object* v_x_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_){
_start:
{
lean_object* v_res_2936_; 
v_res_2936_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4(v_00_u03b1_2929_, v_x_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor(lean_object* v_ctorName_2940_){
_start:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2941_ = ((lean_object*)(l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1));
v___x_2942_ = l_Lean_Name_append(v_ctorName_2940_, v___x_2941_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(lean_object* v_ctorVal_2943_, lean_object* v_a_2944_, lean_object* v_a_2945_, lean_object* v_a_2946_, lean_object* v_a_2947_){
_start:
{
uint8_t v___x_2949_; lean_object* v___x_2950_; 
v___x_2949_ = 1;
v___x_2950_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(v_ctorVal_2943_, v___x_2949_, v_a_2944_, v_a_2945_, v_a_2946_, v_a_2947_);
return v___x_2950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f___boxed(lean_object* v_ctorVal_2951_, lean_object* v_a_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_){
_start:
{
lean_object* v_res_2957_; 
v_res_2957_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_2951_, v_a_2952_, v_a_2953_, v_a_2954_, v_a_2955_);
lean_dec(v_a_2955_);
lean_dec_ref(v_a_2954_);
lean_dec(v_a_2953_);
lean_dec_ref(v_a_2952_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(lean_object* v_e_2958_, lean_object* v_t_2959_, lean_object* v_acc_2960_, lean_object* v_a_2961_){
_start:
{
lean_object* v___x_2966_; 
v___x_2966_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_t_2959_, v_a_2961_);
if (lean_obj_tag(v___x_2966_) == 0)
{
lean_object* v_a_2967_; lean_object* v___x_2968_; uint8_t v___x_2969_; 
v_a_2967_ = lean_ctor_get(v___x_2966_, 0);
lean_inc(v_a_2967_);
lean_dec_ref_known(v___x_2966_, 1);
v___x_2968_ = l_Lean_Expr_cleanupAnnotations(v_a_2967_);
v___x_2969_ = l_Lean_Expr_isApp(v___x_2968_);
if (v___x_2969_ == 0)
{
lean_dec_ref(v___x_2968_);
goto v___jp_2963_;
}
else
{
lean_object* v_arg_2970_; lean_object* v___x_2971_; uint8_t v___x_2972_; 
v_arg_2970_ = lean_ctor_get(v___x_2968_, 1);
lean_inc_ref(v_arg_2970_);
v___x_2971_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2968_);
v___x_2972_ = l_Lean_Expr_isApp(v___x_2971_);
if (v___x_2972_ == 0)
{
lean_dec_ref(v___x_2971_);
lean_dec_ref(v_arg_2970_);
goto v___jp_2963_;
}
else
{
lean_object* v_arg_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; uint8_t v___x_2976_; 
v_arg_2973_ = lean_ctor_get(v___x_2971_, 1);
lean_inc_ref(v_arg_2973_);
v___x_2974_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2971_);
v___x_2975_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1));
v___x_2976_ = l_Lean_Expr_isConstOf(v___x_2974_, v___x_2975_);
lean_dec_ref(v___x_2974_);
if (v___x_2976_ == 0)
{
lean_dec_ref(v_arg_2973_);
lean_dec_ref(v_arg_2970_);
goto v___jp_2963_;
}
else
{
lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2977_ = lean_unsigned_to_nat(0u);
v___x_2978_ = l_Lean_mkProj(v___x_2975_, v___x_2977_, v_e_2958_);
lean_inc_ref(v___x_2978_);
v___x_2979_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v___x_2978_, v_arg_2973_, v_acc_2960_, v_a_2961_);
if (lean_obj_tag(v___x_2979_) == 0)
{
lean_object* v_a_2980_; 
v_a_2980_ = lean_ctor_get(v___x_2979_, 0);
lean_inc(v_a_2980_);
lean_dec_ref_known(v___x_2979_, 1);
v_e_2958_ = v___x_2978_;
v_t_2959_ = v_arg_2970_;
v_acc_2960_ = v_a_2980_;
goto _start;
}
else
{
lean_dec_ref(v___x_2978_);
lean_dec_ref(v_arg_2970_);
return v___x_2979_;
}
}
}
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2989_; 
lean_dec_ref(v_acc_2960_);
lean_dec_ref(v_e_2958_);
v_a_2982_ = lean_ctor_get(v___x_2966_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2966_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2984_ = v___x_2966_;
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2966_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
}
v___jp_2963_:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2964_ = lean_array_push(v_acc_2960_, v_e_2958_);
v___x_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
return v___x_2965_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg___boxed(lean_object* v_e_2990_, lean_object* v_t_2991_, lean_object* v_acc_2992_, lean_object* v_a_2993_, lean_object* v_a_2994_){
_start:
{
lean_object* v_res_2995_; 
v_res_2995_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v_e_2990_, v_t_2991_, v_acc_2992_, v_a_2993_);
lean_dec(v_a_2993_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go(lean_object* v_e_2996_, lean_object* v_t_2997_, lean_object* v_acc_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_){
_start:
{
lean_object* v___x_3004_; 
v___x_3004_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v_e_2996_, v_t_2997_, v_acc_2998_, v_a_3000_);
return v___x_3004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___boxed(lean_object* v_e_3005_, lean_object* v_t_3006_, lean_object* v_acc_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_){
_start:
{
lean_object* v_res_3013_; 
v_res_3013_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go(v_e_3005_, v_t_3006_, v_acc_3007_, v_a_3008_, v_a_3009_, v_a_3010_, v_a_3011_);
lean_dec(v_a_3011_);
lean_dec_ref(v_a_3010_);
lean_dec(v_a_3009_);
lean_dec_ref(v_a_3008_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections(lean_object* v_e_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_, lean_object* v_a_3018_){
_start:
{
lean_object* v___x_3020_; 
lean_inc(v_a_3018_);
lean_inc_ref(v_a_3017_);
lean_inc(v_a_3016_);
lean_inc_ref(v_a_3015_);
lean_inc_ref(v_e_3014_);
v___x_3020_ = lean_infer_type(v_e_3014_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3021_);
lean_dec_ref_known(v___x_3020_, 1);
v___x_3022_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_3023_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v_e_3014_, v_a_3021_, v___x_3022_, v_a_3016_);
return v___x_3023_;
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3031_; 
lean_dec_ref(v_e_3014_);
v_a_3024_ = lean_ctor_get(v___x_3020_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3026_ = v___x_3020_;
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v___x_3020_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3029_; 
if (v_isShared_3027_ == 0)
{
v___x_3029_ = v___x_3026_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_a_3024_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections___boxed(lean_object* v_e_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_){
_start:
{
lean_object* v_res_3038_; 
v_res_3038_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections(v_e_3032_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_);
lean_dec(v_a_3036_);
lean_dec_ref(v_a_3035_);
lean_dec(v_a_3034_);
lean_dec_ref(v_a_3033_);
return v_res_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(lean_object* v_x_3039_, lean_object* v_x_3040_, lean_object* v_x_3041_, lean_object* v_x_3042_){
_start:
{
lean_object* v_ks_3043_; lean_object* v_vs_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3068_; 
v_ks_3043_ = lean_ctor_get(v_x_3039_, 0);
v_vs_3044_ = lean_ctor_get(v_x_3039_, 1);
v_isSharedCheck_3068_ = !lean_is_exclusive(v_x_3039_);
if (v_isSharedCheck_3068_ == 0)
{
v___x_3046_ = v_x_3039_;
v_isShared_3047_ = v_isSharedCheck_3068_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_vs_3044_);
lean_inc(v_ks_3043_);
lean_dec(v_x_3039_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3068_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v___x_3048_; uint8_t v___x_3049_; 
v___x_3048_ = lean_array_get_size(v_ks_3043_);
v___x_3049_ = lean_nat_dec_lt(v_x_3040_, v___x_3048_);
if (v___x_3049_ == 0)
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3053_; 
lean_dec(v_x_3040_);
v___x_3050_ = lean_array_push(v_ks_3043_, v_x_3041_);
v___x_3051_ = lean_array_push(v_vs_3044_, v_x_3042_);
if (v_isShared_3047_ == 0)
{
lean_ctor_set(v___x_3046_, 1, v___x_3051_);
lean_ctor_set(v___x_3046_, 0, v___x_3050_);
v___x_3053_ = v___x_3046_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v___x_3050_);
lean_ctor_set(v_reuseFailAlloc_3054_, 1, v___x_3051_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
return v___x_3053_;
}
}
else
{
lean_object* v_k_x27_3055_; uint8_t v___x_3056_; 
v_k_x27_3055_ = lean_array_fget_borrowed(v_ks_3043_, v_x_3040_);
v___x_3056_ = l_Lean_instBEqMVarId_beq(v_x_3041_, v_k_x27_3055_);
if (v___x_3056_ == 0)
{
lean_object* v___x_3058_; 
if (v_isShared_3047_ == 0)
{
v___x_3058_ = v___x_3046_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v_ks_3043_);
lean_ctor_set(v_reuseFailAlloc_3062_, 1, v_vs_3044_);
v___x_3058_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3059_ = lean_unsigned_to_nat(1u);
v___x_3060_ = lean_nat_add(v_x_3040_, v___x_3059_);
lean_dec(v_x_3040_);
v_x_3039_ = v___x_3058_;
v_x_3040_ = v___x_3060_;
goto _start;
}
}
else
{
lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3066_; 
v___x_3063_ = lean_array_fset(v_ks_3043_, v_x_3040_, v_x_3041_);
v___x_3064_ = lean_array_fset(v_vs_3044_, v_x_3040_, v_x_3042_);
lean_dec(v_x_3040_);
if (v_isShared_3047_ == 0)
{
lean_ctor_set(v___x_3046_, 1, v___x_3064_);
lean_ctor_set(v___x_3046_, 0, v___x_3063_);
v___x_3066_ = v___x_3046_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v___x_3063_);
lean_ctor_set(v_reuseFailAlloc_3067_, 1, v___x_3064_);
v___x_3066_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
return v___x_3066_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_n_3069_, lean_object* v_k_3070_, lean_object* v_v_3071_){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3072_ = lean_unsigned_to_nat(0u);
v___x_3073_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_n_3069_, v___x_3072_, v_k_3070_, v_v_3071_);
return v___x_3073_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3074_ = lean_box(0);
v___x_3075_ = l_unsafeCast___redArg(v___x_3074_);
return v___x_3075_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3076_; 
v___x_3076_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(lean_object* v_x_3077_, size_t v_x_3078_, size_t v_x_3079_, lean_object* v_x_3080_, lean_object* v_x_3081_){
_start:
{
if (lean_obj_tag(v_x_3077_) == 0)
{
lean_object* v_es_3082_; size_t v___x_3083_; size_t v___x_3084_; lean_object* v_j_3085_; lean_object* v___x_3086_; uint8_t v___x_3087_; 
v_es_3082_ = lean_ctor_get(v_x_3077_, 0);
v___x_3083_ = ((size_t)31ULL);
v___x_3084_ = lean_usize_land(v_x_3078_, v___x_3083_);
v_j_3085_ = lean_usize_to_nat(v___x_3084_);
v___x_3086_ = lean_array_get_size(v_es_3082_);
v___x_3087_ = lean_nat_dec_lt(v_j_3085_, v___x_3086_);
if (v___x_3087_ == 0)
{
lean_dec(v_j_3085_);
lean_dec(v_x_3081_);
lean_dec(v_x_3080_);
return v_x_3077_;
}
else
{
lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3126_; 
lean_inc_ref(v_es_3082_);
v_isSharedCheck_3126_ = !lean_is_exclusive(v_x_3077_);
if (v_isSharedCheck_3126_ == 0)
{
lean_object* v_unused_3127_; 
v_unused_3127_ = lean_ctor_get(v_x_3077_, 0);
lean_dec(v_unused_3127_);
v___x_3089_ = v_x_3077_;
v_isShared_3090_ = v_isSharedCheck_3126_;
goto v_resetjp_3088_;
}
else
{
lean_dec(v_x_3077_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3126_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v_v_3091_; lean_object* v___x_3092_; lean_object* v_xs_x27_3093_; lean_object* v___y_3095_; 
v_v_3091_ = lean_array_fget(v_es_3082_, v_j_3085_);
v___x_3092_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0);
v_xs_x27_3093_ = lean_array_fset(v_es_3082_, v_j_3085_, v___x_3092_);
switch(lean_obj_tag(v_v_3091_))
{
case 0:
{
lean_object* v_key_3100_; lean_object* v_val_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3111_; 
v_key_3100_ = lean_ctor_get(v_v_3091_, 0);
v_val_3101_ = lean_ctor_get(v_v_3091_, 1);
v_isSharedCheck_3111_ = !lean_is_exclusive(v_v_3091_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3103_ = v_v_3091_;
v_isShared_3104_ = v_isSharedCheck_3111_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_val_3101_);
lean_inc(v_key_3100_);
lean_dec(v_v_3091_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3111_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
uint8_t v___x_3105_; 
v___x_3105_ = l_Lean_instBEqMVarId_beq(v_x_3080_, v_key_3100_);
if (v___x_3105_ == 0)
{
lean_object* v___x_3106_; lean_object* v___x_3107_; 
lean_del_object(v___x_3103_);
v___x_3106_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3100_, v_val_3101_, v_x_3080_, v_x_3081_);
v___x_3107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
v___y_3095_ = v___x_3107_;
goto v___jp_3094_;
}
else
{
lean_object* v___x_3109_; 
lean_dec(v_val_3101_);
lean_dec(v_key_3100_);
if (v_isShared_3104_ == 0)
{
lean_ctor_set(v___x_3103_, 1, v_x_3081_);
lean_ctor_set(v___x_3103_, 0, v_x_3080_);
v___x_3109_ = v___x_3103_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_x_3080_);
lean_ctor_set(v_reuseFailAlloc_3110_, 1, v_x_3081_);
v___x_3109_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
v___y_3095_ = v___x_3109_;
goto v___jp_3094_;
}
}
}
}
case 1:
{
lean_object* v_node_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3124_; 
v_node_3112_ = lean_ctor_get(v_v_3091_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v_v_3091_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3114_ = v_v_3091_;
v_isShared_3115_ = v_isSharedCheck_3124_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_node_3112_);
lean_dec(v_v_3091_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3124_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
size_t v___x_3116_; size_t v___x_3117_; size_t v___x_3118_; size_t v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3122_; 
v___x_3116_ = ((size_t)5ULL);
v___x_3117_ = lean_usize_shift_right(v_x_3078_, v___x_3116_);
v___x_3118_ = ((size_t)1ULL);
v___x_3119_ = lean_usize_add(v_x_3079_, v___x_3118_);
v___x_3120_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_node_3112_, v___x_3117_, v___x_3119_, v_x_3080_, v_x_3081_);
if (v_isShared_3115_ == 0)
{
lean_ctor_set(v___x_3114_, 0, v___x_3120_);
v___x_3122_ = v___x_3114_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v___x_3120_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
v___y_3095_ = v___x_3122_;
goto v___jp_3094_;
}
}
}
default: 
{
lean_object* v___x_3125_; 
v___x_3125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3125_, 0, v_x_3080_);
lean_ctor_set(v___x_3125_, 1, v_x_3081_);
v___y_3095_ = v___x_3125_;
goto v___jp_3094_;
}
}
v___jp_3094_:
{
lean_object* v___x_3096_; lean_object* v___x_3098_; 
v___x_3096_ = lean_array_fset(v_xs_x27_3093_, v_j_3085_, v___y_3095_);
lean_dec(v_j_3085_);
if (v_isShared_3090_ == 0)
{
lean_ctor_set(v___x_3089_, 0, v___x_3096_);
v___x_3098_ = v___x_3089_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v___x_3096_);
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
}
else
{
lean_object* v_ks_3128_; lean_object* v_vs_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3147_; 
v_ks_3128_ = lean_ctor_get(v_x_3077_, 0);
v_vs_3129_ = lean_ctor_get(v_x_3077_, 1);
v_isSharedCheck_3147_ = !lean_is_exclusive(v_x_3077_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3131_ = v_x_3077_;
v_isShared_3132_ = v_isSharedCheck_3147_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_vs_3129_);
lean_inc(v_ks_3128_);
lean_dec(v_x_3077_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3147_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_ks_3128_);
lean_ctor_set(v_reuseFailAlloc_3146_, 1, v_vs_3129_);
v___x_3134_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
lean_object* v_newNode_3135_; size_t v___x_3136_; uint8_t v___x_3137_; 
v_newNode_3135_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(v___x_3134_, v_x_3080_, v_x_3081_);
v___x_3136_ = ((size_t)7ULL);
v___x_3137_ = lean_usize_dec_le(v___x_3136_, v_x_3079_);
if (v___x_3137_ == 0)
{
lean_object* v___x_3138_; lean_object* v___x_3139_; uint8_t v___x_3140_; 
v___x_3138_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3135_);
v___x_3139_ = lean_unsigned_to_nat(4u);
v___x_3140_ = lean_nat_dec_lt(v___x_3138_, v___x_3139_);
lean_dec(v___x_3138_);
if (v___x_3140_ == 0)
{
lean_object* v_ks_3141_; lean_object* v_vs_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
v_ks_3141_ = lean_ctor_get(v_newNode_3135_, 0);
lean_inc_ref(v_ks_3141_);
v_vs_3142_ = lean_ctor_get(v_newNode_3135_, 1);
lean_inc_ref(v_vs_3142_);
lean_dec_ref(v_newNode_3135_);
v___x_3143_ = lean_unsigned_to_nat(0u);
v___x_3144_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_3145_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(v_x_3079_, v_ks_3141_, v_vs_3142_, v___x_3143_, v___x_3144_);
lean_dec_ref(v_vs_3142_);
lean_dec_ref(v_ks_3141_);
return v___x_3145_;
}
else
{
return v_newNode_3135_;
}
}
else
{
return v_newNode_3135_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(size_t v_depth_3148_, lean_object* v_keys_3149_, lean_object* v_vals_3150_, lean_object* v_i_3151_, lean_object* v_entries_3152_){
_start:
{
lean_object* v___x_3153_; uint8_t v___x_3154_; 
v___x_3153_ = lean_array_get_size(v_keys_3149_);
v___x_3154_ = lean_nat_dec_lt(v_i_3151_, v___x_3153_);
if (v___x_3154_ == 0)
{
lean_dec(v_i_3151_);
return v_entries_3152_;
}
else
{
lean_object* v_k_3155_; lean_object* v_v_3156_; uint64_t v___x_3157_; size_t v_h_3158_; size_t v___x_3159_; lean_object* v___x_3160_; size_t v___x_3161_; size_t v___x_3162_; size_t v___x_3163_; size_t v_h_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; 
v_k_3155_ = lean_array_fget_borrowed(v_keys_3149_, v_i_3151_);
v_v_3156_ = lean_array_fget_borrowed(v_vals_3150_, v_i_3151_);
v___x_3157_ = l_Lean_instHashableMVarId_hash(v_k_3155_);
v_h_3158_ = lean_uint64_to_usize(v___x_3157_);
v___x_3159_ = ((size_t)5ULL);
v___x_3160_ = lean_unsigned_to_nat(1u);
v___x_3161_ = ((size_t)1ULL);
v___x_3162_ = lean_usize_sub(v_depth_3148_, v___x_3161_);
v___x_3163_ = lean_usize_mul(v___x_3159_, v___x_3162_);
v_h_3164_ = lean_usize_shift_right(v_h_3158_, v___x_3163_);
v___x_3165_ = lean_nat_add(v_i_3151_, v___x_3160_);
lean_dec(v_i_3151_);
lean_inc(v_v_3156_);
lean_inc(v_k_3155_);
v___x_3166_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_entries_3152_, v_h_3164_, v_depth_3148_, v_k_3155_, v_v_3156_);
v_i_3151_ = v___x_3165_;
v_entries_3152_ = v___x_3166_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_depth_3168_, lean_object* v_keys_3169_, lean_object* v_vals_3170_, lean_object* v_i_3171_, lean_object* v_entries_3172_){
_start:
{
size_t v_depth_boxed_3173_; lean_object* v_res_3174_; 
v_depth_boxed_3173_ = lean_unbox_usize(v_depth_3168_);
lean_dec(v_depth_3168_);
v_res_3174_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_boxed_3173_, v_keys_3169_, v_vals_3170_, v_i_3171_, v_entries_3172_);
lean_dec_ref(v_vals_3170_);
lean_dec_ref(v_keys_3169_);
return v_res_3174_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_3175_, lean_object* v_x_3176_, lean_object* v_x_3177_, lean_object* v_x_3178_, lean_object* v_x_3179_){
_start:
{
size_t v_x_5001__boxed_3180_; size_t v_x_5002__boxed_3181_; lean_object* v_res_3182_; 
v_x_5001__boxed_3180_ = lean_unbox_usize(v_x_3176_);
lean_dec(v_x_3176_);
v_x_5002__boxed_3181_ = lean_unbox_usize(v_x_3177_);
lean_dec(v_x_3177_);
v_res_3182_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_x_3175_, v_x_5001__boxed_3180_, v_x_5002__boxed_3181_, v_x_3178_, v_x_3179_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(lean_object* v_x_3183_, lean_object* v_x_3184_, lean_object* v_x_3185_){
_start:
{
uint64_t v___x_3186_; size_t v___x_3187_; size_t v___x_3188_; lean_object* v___x_3189_; 
v___x_3186_ = l_Lean_instHashableMVarId_hash(v_x_3184_);
v___x_3187_ = lean_uint64_to_usize(v___x_3186_);
v___x_3188_ = ((size_t)1ULL);
v___x_3189_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_x_3183_, v___x_3187_, v___x_3188_, v_x_3184_, v_x_3185_);
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(lean_object* v_mvarId_3190_, lean_object* v_val_3191_, lean_object* v___y_3192_){
_start:
{
lean_object* v___x_3194_; lean_object* v_mctx_3195_; lean_object* v_cache_3196_; lean_object* v_zetaDeltaFVarIds_3197_; lean_object* v_postponed_3198_; lean_object* v_diag_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3228_; 
v___x_3194_ = lean_st_ref_take(v___y_3192_);
v_mctx_3195_ = lean_ctor_get(v___x_3194_, 0);
v_cache_3196_ = lean_ctor_get(v___x_3194_, 1);
v_zetaDeltaFVarIds_3197_ = lean_ctor_get(v___x_3194_, 2);
v_postponed_3198_ = lean_ctor_get(v___x_3194_, 3);
v_diag_3199_ = lean_ctor_get(v___x_3194_, 4);
v_isSharedCheck_3228_ = !lean_is_exclusive(v___x_3194_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3201_ = v___x_3194_;
v_isShared_3202_ = v_isSharedCheck_3228_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_diag_3199_);
lean_inc(v_postponed_3198_);
lean_inc(v_zetaDeltaFVarIds_3197_);
lean_inc(v_cache_3196_);
lean_inc(v_mctx_3195_);
lean_dec(v___x_3194_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3228_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v_depth_3203_; lean_object* v_levelAssignDepth_3204_; lean_object* v_lmvarCounter_3205_; lean_object* v_mvarCounter_3206_; lean_object* v_lDecls_3207_; lean_object* v_decls_3208_; lean_object* v_userNames_3209_; lean_object* v_lAssignment_3210_; lean_object* v_eAssignment_3211_; lean_object* v_dAssignment_3212_; lean_object* v_instanceTypedMVars_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3227_; 
v_depth_3203_ = lean_ctor_get(v_mctx_3195_, 0);
v_levelAssignDepth_3204_ = lean_ctor_get(v_mctx_3195_, 1);
v_lmvarCounter_3205_ = lean_ctor_get(v_mctx_3195_, 2);
v_mvarCounter_3206_ = lean_ctor_get(v_mctx_3195_, 3);
v_lDecls_3207_ = lean_ctor_get(v_mctx_3195_, 4);
v_decls_3208_ = lean_ctor_get(v_mctx_3195_, 5);
v_userNames_3209_ = lean_ctor_get(v_mctx_3195_, 6);
v_lAssignment_3210_ = lean_ctor_get(v_mctx_3195_, 7);
v_eAssignment_3211_ = lean_ctor_get(v_mctx_3195_, 8);
v_dAssignment_3212_ = lean_ctor_get(v_mctx_3195_, 9);
v_instanceTypedMVars_3213_ = lean_ctor_get(v_mctx_3195_, 10);
v_isSharedCheck_3227_ = !lean_is_exclusive(v_mctx_3195_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3215_ = v_mctx_3195_;
v_isShared_3216_ = v_isSharedCheck_3227_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_instanceTypedMVars_3213_);
lean_inc(v_dAssignment_3212_);
lean_inc(v_eAssignment_3211_);
lean_inc(v_lAssignment_3210_);
lean_inc(v_userNames_3209_);
lean_inc(v_decls_3208_);
lean_inc(v_lDecls_3207_);
lean_inc(v_mvarCounter_3206_);
lean_inc(v_lmvarCounter_3205_);
lean_inc(v_levelAssignDepth_3204_);
lean_inc(v_depth_3203_);
lean_dec(v_mctx_3195_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3227_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3220_; 
v___x_3217_ = lean_box(0);
v___x_3218_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(v_eAssignment_3211_, v_mvarId_3190_, v_val_3191_);
if (v_isShared_3216_ == 0)
{
lean_ctor_set(v___x_3215_, 8, v___x_3218_);
v___x_3220_ = v___x_3215_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_depth_3203_);
lean_ctor_set(v_reuseFailAlloc_3226_, 1, v_levelAssignDepth_3204_);
lean_ctor_set(v_reuseFailAlloc_3226_, 2, v_lmvarCounter_3205_);
lean_ctor_set(v_reuseFailAlloc_3226_, 3, v_mvarCounter_3206_);
lean_ctor_set(v_reuseFailAlloc_3226_, 4, v_lDecls_3207_);
lean_ctor_set(v_reuseFailAlloc_3226_, 5, v_decls_3208_);
lean_ctor_set(v_reuseFailAlloc_3226_, 6, v_userNames_3209_);
lean_ctor_set(v_reuseFailAlloc_3226_, 7, v_lAssignment_3210_);
lean_ctor_set(v_reuseFailAlloc_3226_, 8, v___x_3218_);
lean_ctor_set(v_reuseFailAlloc_3226_, 9, v_dAssignment_3212_);
lean_ctor_set(v_reuseFailAlloc_3226_, 10, v_instanceTypedMVars_3213_);
v___x_3220_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
lean_object* v___x_3222_; 
if (v_isShared_3202_ == 0)
{
lean_ctor_set(v___x_3201_, 0, v___x_3220_);
v___x_3222_ = v___x_3201_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v___x_3220_);
lean_ctor_set(v_reuseFailAlloc_3225_, 1, v_cache_3196_);
lean_ctor_set(v_reuseFailAlloc_3225_, 2, v_zetaDeltaFVarIds_3197_);
lean_ctor_set(v_reuseFailAlloc_3225_, 3, v_postponed_3198_);
lean_ctor_set(v_reuseFailAlloc_3225_, 4, v_diag_3199_);
v___x_3222_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; 
v___x_3223_ = lean_st_ref_put(v___y_3192_, v___x_3222_);
v___x_3224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3224_, 0, v___x_3217_);
return v___x_3224_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg___boxed(lean_object* v_mvarId_3229_, lean_object* v_val_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_){
_start:
{
lean_object* v_res_3233_; 
v_res_3233_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(v_mvarId_3229_, v_val_3230_, v___y_3231_);
lean_dec(v___y_3231_);
return v_res_3233_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3235_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__0));
v___x_3236_ = l_Lean_stringToMessageData(v___x_3235_);
return v___x_3236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1(lean_object* v___f_3237_, lean_object* v_a_3238_, lean_object* v_x_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_){
_start:
{
lean_object* v___x_3245_; lean_object* v___x_3246_; 
v___x_3245_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1);
v___x_3246_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_3245_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v_a_3247_; lean_object* v___x_3248_; 
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
lean_inc(v_a_3247_);
lean_dec_ref_known(v___x_3246_, 1);
lean_inc(v___y_3243_);
lean_inc_ref(v___y_3242_);
lean_inc(v___y_3241_);
lean_inc_ref(v___y_3240_);
v___x_3248_ = lean_apply_7(v___f_3237_, v_a_3247_, v_a_3238_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_, lean_box(0));
return v___x_3248_;
}
else
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3256_; 
lean_dec(v_a_3238_);
lean_dec_ref(v___f_3237_);
v_a_3249_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3251_ = v___x_3246_;
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3246_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3254_; 
if (v_isShared_3252_ == 0)
{
v___x_3254_ = v___x_3251_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_a_3249_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___boxed(lean_object* v___f_3257_, lean_object* v_a_3258_, lean_object* v_x_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_){
_start:
{
lean_object* v_res_3265_; 
v_res_3265_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1(v___f_3257_, v_a_3258_, v_x_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_);
lean_dec(v___y_3263_);
lean_dec_ref(v___y_3262_);
lean_dec(v___y_3261_);
lean_dec_ref(v___y_3260_);
lean_dec(v_x_3259_);
return v_res_3265_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(lean_object* v___f_3266_, lean_object* v_a_3267_, lean_object* v_x_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_){
_start:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
v___x_3274_ = lean_box(0);
lean_inc(v___y_3272_);
lean_inc_ref(v___y_3271_);
lean_inc(v___y_3270_);
lean_inc_ref(v___y_3269_);
v___x_3275_ = lean_apply_7(v___f_3266_, v___x_3274_, v_a_3267_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_, lean_box(0));
return v___x_3275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2___boxed(lean_object* v___f_3276_, lean_object* v_a_3277_, lean_object* v_x_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_){
_start:
{
lean_object* v_res_3284_; 
v_res_3284_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(v___f_3276_, v_a_3277_, v_x_3278_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_);
lean_dec(v___y_3282_);
lean_dec_ref(v___y_3281_);
lean_dec(v___y_3280_);
lean_dec_ref(v___y_3279_);
return v_res_3284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0(uint8_t v___x_3285_, lean_object* v_____r_3286_, lean_object* v_mvarId_u2082_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_){
_start:
{
lean_object* v___x_3293_; 
v___x_3293_ = l_Lean_Meta_introSubstEq(v_mvarId_u2082_3287_, v___x_3285_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v_a_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3303_; 
v_a_3294_ = lean_ctor_get(v___x_3293_, 0);
v_isSharedCheck_3303_ = !lean_is_exclusive(v___x_3293_);
if (v_isSharedCheck_3303_ == 0)
{
v___x_3296_ = v___x_3293_;
v_isShared_3297_ = v_isSharedCheck_3303_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_a_3294_);
lean_dec(v___x_3293_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3303_;
goto v_resetjp_3295_;
}
v_resetjp_3295_:
{
lean_object* v_snd_3298_; lean_object* v___x_3299_; lean_object* v___x_3301_; 
v_snd_3298_ = lean_ctor_get(v_a_3294_, 1);
lean_inc(v_snd_3298_);
lean_dec(v_a_3294_);
v___x_3299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3299_, 0, v_snd_3298_);
if (v_isShared_3297_ == 0)
{
lean_ctor_set(v___x_3296_, 0, v___x_3299_);
v___x_3301_ = v___x_3296_;
goto v_reusejp_3300_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v___x_3299_);
v___x_3301_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3300_;
}
v_reusejp_3300_:
{
return v___x_3301_;
}
}
}
else
{
lean_object* v_a_3304_; lean_object* v___x_3306_; uint8_t v_isShared_3307_; uint8_t v_isSharedCheck_3311_; 
v_a_3304_ = lean_ctor_get(v___x_3293_, 0);
v_isSharedCheck_3311_ = !lean_is_exclusive(v___x_3293_);
if (v_isSharedCheck_3311_ == 0)
{
v___x_3306_ = v___x_3293_;
v_isShared_3307_ = v_isSharedCheck_3311_;
goto v_resetjp_3305_;
}
else
{
lean_inc(v_a_3304_);
lean_dec(v___x_3293_);
v___x_3306_ = lean_box(0);
v_isShared_3307_ = v_isSharedCheck_3311_;
goto v_resetjp_3305_;
}
v_resetjp_3305_:
{
lean_object* v___x_3309_; 
if (v_isShared_3307_ == 0)
{
v___x_3309_ = v___x_3306_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v_a_3304_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0___boxed(lean_object* v___x_3312_, lean_object* v_____r_3313_, lean_object* v_mvarId_u2082_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_){
_start:
{
uint8_t v___x_5291__boxed_3320_; lean_object* v_res_3321_; 
v___x_5291__boxed_3320_ = lean_unbox(v___x_3312_);
v_res_3321_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0(v___x_5291__boxed_3320_, v_____r_3313_, v_mvarId_u2082_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_);
lean_dec(v___y_3318_);
lean_dec_ref(v___y_3317_);
lean_dec(v___y_3316_);
lean_dec_ref(v___y_3315_);
return v_res_3321_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3330_ = lean_box(0);
v___x_3331_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3));
v___x_3332_ = l_Lean_mkConst(v___x_3331_, v___x_3330_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg(lean_object* v_a_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_){
_start:
{
lean_object* v___y_3340_; uint8_t v___x_3360_; lean_object* v___f_3361_; uint8_t v___x_3362_; lean_object* v___x_3363_; 
v___x_3360_ = 0;
v___f_3361_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__0));
v___x_3362_ = 1;
lean_inc(v_a_3333_);
v___x_3363_ = l_Lean_MVarId_getType(v_a_3333_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_object* v_a_3364_; lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3421_; 
v_a_3364_ = lean_ctor_get(v___x_3363_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3363_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3366_ = v___x_3363_;
v_isShared_3367_ = v_isSharedCheck_3421_;
goto v_resetjp_3365_;
}
else
{
lean_inc(v_a_3364_);
lean_dec(v___x_3363_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3421_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
if (lean_obj_tag(v_a_3364_) == 7)
{
lean_object* v_binderType_3368_; lean_object* v_body_3369_; uint8_t v___x_3370_; 
v_binderType_3368_ = lean_ctor_get(v_a_3364_, 1);
lean_inc_ref(v_binderType_3368_);
v_body_3369_ = lean_ctor_get(v_a_3364_, 2);
lean_inc_ref(v_body_3369_);
lean_dec_ref_known(v_a_3364_, 3);
v___x_3370_ = l_Lean_Expr_hasLooseBVars(v_body_3369_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; 
lean_del_object(v___x_3366_);
v___x_3371_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_3368_, v___y_3335_);
if (lean_obj_tag(v___x_3371_) == 0)
{
lean_object* v_a_3372_; lean_object* v___x_3373_; uint8_t v___x_3374_; 
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc(v_a_3372_);
lean_dec_ref_known(v___x_3371_, 1);
v___x_3373_ = l_Lean_Expr_cleanupAnnotations(v_a_3372_);
v___x_3374_ = l_Lean_Expr_isApp(v___x_3373_);
if (v___x_3374_ == 0)
{
lean_object* v___x_3375_; lean_object* v___x_3376_; 
lean_dec_ref(v___x_3373_);
lean_dec_ref(v_body_3369_);
v___x_3375_ = lean_box(0);
v___x_3376_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(v___f_3361_, v_a_3333_, v___x_3375_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
v___y_3340_ = v___x_3376_;
goto v___jp_3339_;
}
else
{
lean_object* v_arg_3377_; lean_object* v___x_3378_; uint8_t v___x_3379_; 
v_arg_3377_ = lean_ctor_get(v___x_3373_, 1);
lean_inc_ref(v_arg_3377_);
v___x_3378_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3373_);
v___x_3379_ = l_Lean_Expr_isApp(v___x_3378_);
if (v___x_3379_ == 0)
{
lean_object* v___x_3380_; lean_object* v___x_3381_; 
lean_dec_ref(v___x_3378_);
lean_dec_ref(v_arg_3377_);
lean_dec_ref(v_body_3369_);
v___x_3380_ = lean_box(0);
v___x_3381_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(v___f_3361_, v_a_3333_, v___x_3380_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
v___y_3340_ = v___x_3381_;
goto v___jp_3339_;
}
else
{
lean_object* v_arg_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; uint8_t v___x_3385_; 
v_arg_3382_ = lean_ctor_get(v___x_3378_, 1);
lean_inc_ref(v_arg_3382_);
v___x_3383_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3378_);
v___x_3384_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1));
v___x_3385_ = l_Lean_Expr_isConstOf(v___x_3383_, v___x_3384_);
lean_dec_ref(v___x_3383_);
if (v___x_3385_ == 0)
{
lean_object* v___x_3386_; lean_object* v___x_3387_; 
lean_dec_ref(v_arg_3382_);
lean_dec_ref(v_arg_3377_);
lean_dec_ref(v_body_3369_);
v___x_3386_ = lean_box(0);
v___x_3387_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(v___f_3361_, v_a_3333_, v___x_3386_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
v___y_3340_ = v___x_3387_;
goto v___jp_3339_;
}
else
{
lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3388_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4);
v___x_3389_ = l_Lean_mkApp3(v___x_3388_, v_arg_3382_, v_arg_3377_, v_body_3369_);
v___x_3390_ = lean_unsigned_to_nat(1u);
lean_inc(v_a_3333_);
v___x_3391_ = l_Lean_MVarId_applyN(v_a_3333_, v___x_3389_, v___x_3390_, v___x_3362_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
if (lean_obj_tag(v___x_3391_) == 0)
{
lean_object* v_a_3392_; 
v_a_3392_ = lean_ctor_get(v___x_3391_, 0);
lean_inc(v_a_3392_);
lean_dec_ref_known(v___x_3391_, 1);
if (lean_obj_tag(v_a_3392_) == 1)
{
lean_object* v_tail_3393_; 
v_tail_3393_ = lean_ctor_get(v_a_3392_, 1);
if (lean_obj_tag(v_tail_3393_) == 0)
{
lean_object* v_head_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
lean_dec(v_a_3333_);
v_head_3394_ = lean_ctor_get(v_a_3392_, 0);
lean_inc(v_head_3394_);
lean_dec_ref_known(v_a_3392_, 2);
v___x_3395_ = lean_box(0);
v___x_3396_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0(v___x_3360_, v___x_3395_, v_head_3394_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
v___y_3340_ = v___x_3396_;
goto v___jp_3339_;
}
else
{
lean_object* v___x_3397_; 
v___x_3397_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1(v___f_3361_, v_a_3333_, v_a_3392_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
lean_dec_ref_known(v_a_3392_, 2);
v___y_3340_ = v___x_3397_;
goto v___jp_3339_;
}
}
else
{
lean_object* v___x_3398_; 
v___x_3398_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1(v___f_3361_, v_a_3333_, v_a_3392_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
lean_dec(v_a_3392_);
v___y_3340_ = v___x_3398_;
goto v___jp_3339_;
}
}
else
{
lean_object* v_a_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3406_; 
lean_dec(v_a_3333_);
v_a_3399_ = lean_ctor_get(v___x_3391_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v___x_3391_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3401_ = v___x_3391_;
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_a_3399_);
lean_dec(v___x_3391_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
lean_object* v___x_3404_; 
if (v_isShared_3402_ == 0)
{
v___x_3404_ = v___x_3401_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_a_3399_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3414_; 
lean_dec_ref(v_body_3369_);
lean_dec(v_a_3333_);
v_a_3407_ = lean_ctor_get(v___x_3371_, 0);
v_isSharedCheck_3414_ = !lean_is_exclusive(v___x_3371_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3409_ = v___x_3371_;
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_a_3407_);
lean_dec(v___x_3371_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3412_; 
if (v_isShared_3410_ == 0)
{
v___x_3412_ = v___x_3409_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v_a_3407_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
}
}
else
{
lean_object* v___x_3416_; 
lean_dec_ref(v_body_3369_);
lean_dec_ref(v_binderType_3368_);
if (v_isShared_3367_ == 0)
{
lean_ctor_set(v___x_3366_, 0, v_a_3333_);
v___x_3416_ = v___x_3366_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3333_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
else
{
lean_object* v___x_3419_; 
lean_dec(v_a_3364_);
if (v_isShared_3367_ == 0)
{
lean_ctor_set(v___x_3366_, 0, v_a_3333_);
v___x_3419_ = v___x_3366_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_a_3333_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
}
}
else
{
lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3429_; 
lean_dec(v_a_3333_);
v_a_3422_ = lean_ctor_get(v___x_3363_, 0);
v_isSharedCheck_3429_ = !lean_is_exclusive(v___x_3363_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3424_ = v___x_3363_;
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v___x_3363_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3427_; 
if (v_isShared_3425_ == 0)
{
v___x_3427_ = v___x_3424_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v_a_3422_);
v___x_3427_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
return v___x_3427_;
}
}
}
v___jp_3339_:
{
if (lean_obj_tag(v___y_3340_) == 0)
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3351_; 
v_a_3341_ = lean_ctor_get(v___y_3340_, 0);
v_isSharedCheck_3351_ = !lean_is_exclusive(v___y_3340_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3343_ = v___y_3340_;
v_isShared_3344_ = v_isSharedCheck_3351_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___y_3340_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3351_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
if (lean_obj_tag(v_a_3341_) == 0)
{
lean_object* v_a_3345_; lean_object* v___x_3347_; 
v_a_3345_ = lean_ctor_get(v_a_3341_, 0);
lean_inc(v_a_3345_);
lean_dec_ref_known(v_a_3341_, 1);
if (v_isShared_3344_ == 0)
{
lean_ctor_set(v___x_3343_, 0, v_a_3345_);
v___x_3347_ = v___x_3343_;
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
else
{
lean_object* v_a_3349_; 
lean_del_object(v___x_3343_);
v_a_3349_ = lean_ctor_get(v_a_3341_, 0);
lean_inc(v_a_3349_);
lean_dec_ref_known(v_a_3341_, 1);
v_a_3333_ = v_a_3349_;
goto _start;
}
}
}
else
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3359_; 
v_a_3352_ = lean_ctor_get(v___y_3340_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___y_3340_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3354_ = v___y_3340_;
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___y_3340_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3357_; 
if (v_isShared_3355_ == 0)
{
v___x_3357_ = v___x_3354_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v_a_3352_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___boxed(lean_object* v_a_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_){
_start:
{
lean_object* v_res_3436_; 
v_res_3436_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg(v_a_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
lean_dec(v___y_3432_);
lean_dec_ref(v___y_3431_);
return v_res_3436_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3438_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0));
v___x_3439_ = l_Lean_stringToMessageData(v___x_3438_);
return v___x_3439_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3445_ = lean_box(0);
v___x_3446_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4));
v___x_3447_ = l_Lean_mkConst(v___x_3446_, v___x_3445_);
return v___x_3447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0(lean_object* v_ctorVal_3452_, lean_object* v_xs_3453_, lean_object* v_type_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_){
_start:
{
lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3469_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0);
v___x_3470_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_type_3454_, v___x_3469_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3470_) == 0)
{
lean_object* v_a_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; uint8_t v___x_3475_; uint8_t v___x_3476_; lean_object* v___y_3478_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v_a_3471_ = lean_ctor_get(v___x_3470_, 0);
lean_inc(v_a_3471_);
lean_dec_ref_known(v___x_3470_, 1);
v___x_3472_ = l_Lean_Expr_mvarId_x21(v_a_3471_);
v___x_3473_ = lean_box(0);
v___x_3474_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5);
v___x_3475_ = 1;
v___x_3476_ = 0;
v___x_3489_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6));
v___x_3490_ = lean_box(0);
v___x_3491_ = l_Lean_MVarId_apply(v___x_3472_, v___x_3474_, v___x_3489_, v___x_3490_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v_a_3492_; 
v_a_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3491_, 1);
if (lean_obj_tag(v_a_3492_) == 1)
{
lean_object* v_tail_3493_; 
v_tail_3493_ = lean_ctor_get(v_a_3492_, 1);
lean_inc(v_tail_3493_);
if (lean_obj_tag(v_tail_3493_) == 1)
{
lean_object* v_tail_3494_; 
v_tail_3494_ = lean_ctor_get(v_tail_3493_, 1);
if (lean_obj_tag(v_tail_3494_) == 0)
{
lean_object* v_toConstantVal_3495_; lean_object* v_head_3496_; lean_object* v_head_3497_; lean_object* v_name_3498_; lean_object* v_levelParams_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; 
v_toConstantVal_3495_ = lean_ctor_get(v_ctorVal_3452_, 0);
lean_inc_ref(v_toConstantVal_3495_);
lean_dec_ref(v_ctorVal_3452_);
v_head_3496_ = lean_ctor_get(v_a_3492_, 0);
lean_inc(v_head_3496_);
lean_dec_ref_known(v_a_3492_, 2);
v_head_3497_ = lean_ctor_get(v_tail_3493_, 0);
lean_inc(v_head_3497_);
lean_dec_ref_known(v_tail_3493_, 2);
v_name_3498_ = lean_ctor_get(v_toConstantVal_3495_, 0);
lean_inc_n(v_name_3498_, 2);
v_levelParams_3499_ = lean_ctor_get(v_toConstantVal_3495_, 1);
lean_inc(v_levelParams_3499_);
lean_dec_ref(v_toConstantVal_3495_);
v___x_3500_ = l_Lean_Meta_mkInjectiveTheoremNameFor(v_name_3498_);
v___x_3501_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(v_levelParams_3499_, v___x_3473_);
v___x_3502_ = l_Lean_mkConst(v___x_3500_, v___x_3501_);
v___x_3503_ = l_Lean_mkAppN(v___x_3502_, v_xs_3453_);
v___x_3504_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(v_head_3496_, v___x_3503_, v___y_3456_);
lean_dec_ref(v___x_3504_);
v___x_3505_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg(v_head_3497_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3505_) == 0)
{
lean_object* v_a_3506_; lean_object* v___x_3507_; 
v_a_3506_ = lean_ctor_get(v___x_3505_, 0);
lean_inc(v_a_3506_);
lean_dec_ref_known(v___x_3505_, 1);
v___x_3507_ = l_Lean_MVarId_refl(v_a_3506_, v___x_3475_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_dec(v_name_3498_);
v___y_3478_ = v___x_3507_;
goto v___jp_3477_;
}
else
{
lean_object* v_a_3508_; uint8_t v___y_3510_; uint8_t v___x_3513_; 
v_a_3508_ = lean_ctor_get(v___x_3507_, 0);
lean_inc(v_a_3508_);
v___x_3513_ = l_Lean_Exception_isInterrupt(v_a_3508_);
if (v___x_3513_ == 0)
{
uint8_t v___x_3514_; 
v___x_3514_ = l_Lean_Exception_isRuntime(v_a_3508_);
v___y_3510_ = v___x_3514_;
goto v___jp_3509_;
}
else
{
lean_dec(v_a_3508_);
v___y_3510_ = v___x_3513_;
goto v___jp_3509_;
}
v___jp_3509_:
{
if (v___y_3510_ == 0)
{
lean_object* v___x_3511_; lean_object* v___x_3512_; 
lean_dec_ref_known(v___x_3507_, 1);
v___x_3511_ = l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(v_name_3498_);
v___x_3512_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_3511_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
v___y_3478_ = v___x_3512_;
goto v___jp_3477_;
}
else
{
lean_dec(v_name_3498_);
v___y_3478_ = v___x_3507_;
goto v___jp_3477_;
}
}
}
}
else
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3522_; 
lean_dec(v_name_3498_);
lean_dec(v_a_3471_);
lean_dec_ref(v_xs_3453_);
v_a_3515_ = lean_ctor_get(v___x_3505_, 0);
v_isSharedCheck_3522_ = !lean_is_exclusive(v___x_3505_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3517_ = v___x_3505_;
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3505_);
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
else
{
lean_dec_ref_known(v_tail_3493_, 2);
lean_dec_ref_known(v_a_3492_, 2);
lean_dec(v_a_3471_);
lean_dec_ref(v_xs_3453_);
goto v___jp_3460_;
}
}
else
{
lean_dec_ref_known(v_a_3492_, 2);
lean_dec(v_tail_3493_);
lean_dec(v_a_3471_);
lean_dec_ref(v_xs_3453_);
goto v___jp_3460_;
}
}
else
{
lean_dec(v_a_3492_);
lean_dec(v_a_3471_);
lean_dec_ref(v_xs_3453_);
goto v___jp_3460_;
}
}
else
{
lean_object* v_a_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3530_; 
lean_dec(v_a_3471_);
lean_dec_ref(v_xs_3453_);
lean_dec_ref(v_ctorVal_3452_);
v_a_3523_ = lean_ctor_get(v___x_3491_, 0);
v_isSharedCheck_3530_ = !lean_is_exclusive(v___x_3491_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_3525_ = v___x_3491_;
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_a_3523_);
lean_dec(v___x_3491_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v___x_3528_; 
if (v_isShared_3526_ == 0)
{
v___x_3528_ = v___x_3525_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_a_3523_);
v___x_3528_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
return v___x_3528_;
}
}
}
v___jp_3477_:
{
if (lean_obj_tag(v___y_3478_) == 0)
{
uint8_t v___x_3479_; lean_object* v___x_3480_; 
lean_dec_ref_known(v___y_3478_, 1);
v___x_3479_ = 1;
v___x_3480_ = l_Lean_Meta_mkLambdaFVars(v_xs_3453_, v_a_3471_, v___x_3476_, v___x_3475_, v___x_3476_, v___x_3475_, v___x_3479_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
return v___x_3480_;
}
else
{
lean_object* v_a_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3488_; 
lean_dec(v_a_3471_);
lean_dec_ref(v_xs_3453_);
v_a_3481_ = lean_ctor_get(v___y_3478_, 0);
v_isSharedCheck_3488_ = !lean_is_exclusive(v___y_3478_);
if (v_isSharedCheck_3488_ == 0)
{
v___x_3483_ = v___y_3478_;
v_isShared_3484_ = v_isSharedCheck_3488_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_a_3481_);
lean_dec(v___y_3478_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3488_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3486_; 
if (v_isShared_3484_ == 0)
{
v___x_3486_ = v___x_3483_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_a_3481_);
v___x_3486_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
return v___x_3486_;
}
}
}
}
}
else
{
lean_dec_ref(v_xs_3453_);
lean_dec_ref(v_ctorVal_3452_);
return v___x_3470_;
}
v___jp_3460_:
{
lean_object* v_toConstantVal_3461_; lean_object* v_name_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; 
v_toConstantVal_3461_ = lean_ctor_get(v_ctorVal_3452_, 0);
lean_inc_ref(v_toConstantVal_3461_);
lean_dec_ref(v_ctorVal_3452_);
v_name_3462_ = lean_ctor_get(v_toConstantVal_3461_, 0);
lean_inc(v_name_3462_);
lean_dec_ref(v_toConstantVal_3461_);
v___x_3463_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1);
v___x_3464_ = l_Lean_MessageData_ofName(v_name_3462_);
v___x_3465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3465_, 0, v___x_3463_);
lean_ctor_set(v___x_3465_, 1, v___x_3464_);
v___x_3466_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_3467_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3467_, 0, v___x_3465_);
lean_ctor_set(v___x_3467_, 1, v___x_3466_);
v___x_3468_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_3467_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
return v___x_3468_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___boxed(lean_object* v_ctorVal_3531_, lean_object* v_xs_3532_, lean_object* v_type_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_){
_start:
{
lean_object* v_res_3539_; 
v_res_3539_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0(v_ctorVal_3531_, v_xs_3532_, v_type_3533_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
lean_dec(v___y_3537_);
lean_dec_ref(v___y_3536_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3534_);
return v_res_3539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(lean_object* v_ctorVal_3540_, lean_object* v_targetType_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_){
_start:
{
lean_object* v___f_3547_; uint8_t v___x_3548_; lean_object* v___x_3549_; 
v___f_3547_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3547_, 0, v_ctorVal_3540_);
v___x_3548_ = 0;
v___x_3549_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_targetType_3541_, v___f_3547_, v___x_3548_, v___x_3548_, v_a_3542_, v_a_3543_, v_a_3544_, v_a_3545_);
return v___x_3549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___boxed(lean_object* v_ctorVal_3550_, lean_object* v_targetType_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_, lean_object* v_a_3555_, lean_object* v_a_3556_){
_start:
{
lean_object* v_res_3557_; 
v_res_3557_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3550_, v_targetType_3551_, v_a_3552_, v_a_3553_, v_a_3554_, v_a_3555_);
lean_dec(v_a_3555_);
lean_dec_ref(v_a_3554_);
lean_dec(v_a_3553_);
lean_dec_ref(v_a_3552_);
return v_res_3557_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0(lean_object* v_mvarId_3558_, lean_object* v_val_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_){
_start:
{
lean_object* v___x_3565_; 
v___x_3565_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(v_mvarId_3558_, v_val_3559_, v___y_3561_);
return v___x_3565_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___boxed(lean_object* v_mvarId_3566_, lean_object* v_val_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_){
_start:
{
lean_object* v_res_3573_; 
v_res_3573_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0(v_mvarId_3566_, v_val_3567_, v___y_3568_, v___y_3569_, v___y_3570_, v___y_3571_);
lean_dec(v___y_3571_);
lean_dec_ref(v___y_3570_);
lean_dec(v___y_3569_);
lean_dec_ref(v___y_3568_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1(lean_object* v_inst_3574_, lean_object* v_a_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_){
_start:
{
lean_object* v___x_3581_; 
v___x_3581_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg(v_a_3575_, v___y_3576_, v___y_3577_, v___y_3578_, v___y_3579_);
return v___x_3581_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___boxed(lean_object* v_inst_3582_, lean_object* v_a_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_){
_start:
{
lean_object* v_res_3589_; 
v_res_3589_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1(v_inst_3582_, v_a_3583_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_);
lean_dec(v___y_3587_);
lean_dec_ref(v___y_3586_);
lean_dec(v___y_3585_);
lean_dec_ref(v___y_3584_);
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0(lean_object* v_00_u03b2_3590_, lean_object* v_x_3591_, lean_object* v_x_3592_, lean_object* v_x_3593_){
_start:
{
lean_object* v___x_3594_; 
v___x_3594_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(v_x_3591_, v_x_3592_, v_x_3593_);
return v___x_3594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3595_, lean_object* v_x_3596_, size_t v_x_3597_, size_t v_x_3598_, lean_object* v_x_3599_, lean_object* v_x_3600_){
_start:
{
lean_object* v___x_3601_; 
v___x_3601_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_x_3596_, v_x_3597_, v_x_3598_, v_x_3599_, v_x_3600_);
return v___x_3601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3602_, lean_object* v_x_3603_, lean_object* v_x_3604_, lean_object* v_x_3605_, lean_object* v_x_3606_, lean_object* v_x_3607_){
_start:
{
size_t v_x_5846__boxed_3608_; size_t v_x_5847__boxed_3609_; lean_object* v_res_3610_; 
v_x_5846__boxed_3608_ = lean_unbox_usize(v_x_3604_);
lean_dec(v_x_3604_);
v_x_5847__boxed_3609_ = lean_unbox_usize(v_x_3605_);
lean_dec(v_x_3605_);
v_res_3610_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1(v_00_u03b2_3602_, v_x_3603_, v_x_5846__boxed_3608_, v_x_5847__boxed_3609_, v_x_3606_, v_x_3607_);
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_3611_, lean_object* v_n_3612_, lean_object* v_k_3613_, lean_object* v_v_3614_){
_start:
{
lean_object* v___x_3615_; 
v___x_3615_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(v_n_3612_, v_k_3613_, v_v_3614_);
return v___x_3615_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_3616_, size_t v_depth_3617_, lean_object* v_keys_3618_, lean_object* v_vals_3619_, lean_object* v_heq_3620_, lean_object* v_i_3621_, lean_object* v_entries_3622_){
_start:
{
lean_object* v___x_3623_; 
v___x_3623_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_3617_, v_keys_3618_, v_vals_3619_, v_i_3621_, v_entries_3622_);
return v___x_3623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_3624_, lean_object* v_depth_3625_, lean_object* v_keys_3626_, lean_object* v_vals_3627_, lean_object* v_heq_3628_, lean_object* v_i_3629_, lean_object* v_entries_3630_){
_start:
{
size_t v_depth_boxed_3631_; lean_object* v_res_3632_; 
v_depth_boxed_3631_ = lean_unbox_usize(v_depth_3625_);
lean_dec(v_depth_3625_);
v_res_3632_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_3624_, v_depth_boxed_3631_, v_keys_3626_, v_vals_3627_, v_heq_3628_, v_i_3629_, v_entries_3630_);
lean_dec_ref(v_vals_3627_);
lean_dec_ref(v_keys_3626_);
return v_res_3632_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_3633_, lean_object* v_x_3634_, lean_object* v_x_3635_, lean_object* v_x_3636_, lean_object* v_x_3637_){
_start:
{
lean_object* v___x_3638_; 
v___x_3638_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_x_3634_, v_x_3635_, v_x_3636_, v_x_3637_);
return v___x_3638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(lean_object* v_ctorVal_3639_, lean_object* v_val_3640_, lean_object* v_name_3641_, lean_object* v_levelParams_3642_, uint8_t v___x_3643_, uint8_t v_hasTrace_3644_, lean_object* v_____r_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_){
_start:
{
lean_object* v___x_3651_; 
lean_inc_ref(v_val_3640_);
v___x_3651_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3639_, v_val_3640_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
if (lean_obj_tag(v___x_3651_) == 0)
{
lean_object* v_a_3652_; lean_object* v___x_3653_; lean_object* v_a_3654_; lean_object* v___x_3655_; lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3672_; 
v_a_3652_ = lean_ctor_get(v___x_3651_, 0);
lean_inc(v_a_3652_);
lean_dec_ref_known(v___x_3651_, 1);
v___x_3653_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3640_, v___y_3647_);
v_a_3654_ = lean_ctor_get(v___x_3653_, 0);
lean_inc(v_a_3654_);
lean_dec_ref(v___x_3653_);
v___x_3655_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3652_, v___y_3647_);
v_a_3656_ = lean_ctor_get(v___x_3655_, 0);
v_isSharedCheck_3672_ = !lean_is_exclusive(v___x_3655_);
if (v_isSharedCheck_3672_ == 0)
{
v___x_3658_ = v___x_3655_;
v_isShared_3659_ = v_isSharedCheck_3672_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v___x_3655_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3672_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3665_; 
lean_inc_n(v_name_3641_, 2);
v___x_3660_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3660_, 0, v_name_3641_);
lean_ctor_set(v___x_3660_, 1, v_levelParams_3642_);
lean_ctor_set(v___x_3660_, 2, v_a_3654_);
v___x_3661_ = lean_box(0);
v___x_3662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3662_, 0, v_name_3641_);
lean_ctor_set(v___x_3662_, 1, v___x_3661_);
v___x_3663_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3660_);
lean_ctor_set(v___x_3663_, 1, v_a_3656_);
lean_ctor_set(v___x_3663_, 2, v___x_3662_);
if (v_isShared_3659_ == 0)
{
lean_ctor_set_tag(v___x_3658_, 2);
lean_ctor_set(v___x_3658_, 0, v___x_3663_);
v___x_3665_ = v___x_3658_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v___x_3663_);
v___x_3665_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
lean_object* v___x_3666_; 
v___x_3666_ = l_Lean_addDecl(v___x_3665_, v___x_3643_, v___y_3648_, v___y_3649_);
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_object* v___x_3667_; uint8_t v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; 
lean_dec_ref_known(v___x_3666_, 1);
v___x_3667_ = l_Lean_Meta_simpExtension;
v___x_3668_ = 0;
v___x_3669_ = lean_unsigned_to_nat(1000u);
v___x_3670_ = l_Lean_Meta_addSimpTheorem(v___x_3667_, v_name_3641_, v_hasTrace_3644_, v___x_3643_, v___x_3668_, v___x_3669_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
return v___x_3670_;
}
else
{
lean_dec(v_name_3641_);
return v___x_3666_;
}
}
}
}
else
{
lean_object* v_a_3673_; lean_object* v___x_3675_; uint8_t v_isShared_3676_; uint8_t v_isSharedCheck_3680_; 
lean_dec(v_levelParams_3642_);
lean_dec(v_name_3641_);
lean_dec_ref(v_val_3640_);
v_a_3673_ = lean_ctor_get(v___x_3651_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v___x_3651_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3675_ = v___x_3651_;
v_isShared_3676_ = v_isSharedCheck_3680_;
goto v_resetjp_3674_;
}
else
{
lean_inc(v_a_3673_);
lean_dec(v___x_3651_);
v___x_3675_ = lean_box(0);
v_isShared_3676_ = v_isSharedCheck_3680_;
goto v_resetjp_3674_;
}
v_resetjp_3674_:
{
lean_object* v___x_3678_; 
if (v_isShared_3676_ == 0)
{
v___x_3678_ = v___x_3675_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v_a_3673_);
v___x_3678_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
return v___x_3678_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1___boxed(lean_object* v_ctorVal_3681_, lean_object* v_val_3682_, lean_object* v_name_3683_, lean_object* v_levelParams_3684_, lean_object* v___x_3685_, lean_object* v_hasTrace_3686_, lean_object* v_____r_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_){
_start:
{
uint8_t v___x_8698__boxed_3693_; uint8_t v_hasTrace_boxed_3694_; lean_object* v_res_3695_; 
v___x_8698__boxed_3693_ = lean_unbox(v___x_3685_);
v_hasTrace_boxed_3694_ = lean_unbox(v_hasTrace_3686_);
v_res_3695_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(v_ctorVal_3681_, v_val_3682_, v_name_3683_, v_levelParams_3684_, v___x_8698__boxed_3693_, v_hasTrace_boxed_3694_, v_____r_3687_, v___y_3688_, v___y_3689_, v___y_3690_, v___y_3691_);
lean_dec(v___y_3691_);
lean_dec_ref(v___y_3690_);
lean_dec(v___y_3689_);
lean_dec_ref(v___y_3688_);
return v_res_3695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(lean_object* v_ctorVal_3696_, lean_object* v_val_3697_, lean_object* v_name_3698_, lean_object* v_levelParams_3699_, uint8_t v___x_3700_, lean_object* v_____r_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_){
_start:
{
lean_object* v___x_3707_; 
lean_inc_ref(v_val_3697_);
v___x_3707_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3696_, v_val_3697_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
if (lean_obj_tag(v___x_3707_) == 0)
{
lean_object* v_a_3708_; lean_object* v___x_3709_; lean_object* v_a_3710_; lean_object* v___x_3711_; lean_object* v_a_3712_; lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3729_; 
v_a_3708_ = lean_ctor_get(v___x_3707_, 0);
lean_inc(v_a_3708_);
lean_dec_ref_known(v___x_3707_, 1);
v___x_3709_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3697_, v___y_3703_);
v_a_3710_ = lean_ctor_get(v___x_3709_, 0);
lean_inc(v_a_3710_);
lean_dec_ref(v___x_3709_);
v___x_3711_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3708_, v___y_3703_);
v_a_3712_ = lean_ctor_get(v___x_3711_, 0);
v_isSharedCheck_3729_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3714_ = v___x_3711_;
v_isShared_3715_ = v_isSharedCheck_3729_;
goto v_resetjp_3713_;
}
else
{
lean_inc(v_a_3712_);
lean_dec(v___x_3711_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3729_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3721_; 
lean_inc_n(v_name_3698_, 2);
v___x_3716_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3716_, 0, v_name_3698_);
lean_ctor_set(v___x_3716_, 1, v_levelParams_3699_);
lean_ctor_set(v___x_3716_, 2, v_a_3710_);
v___x_3717_ = lean_box(0);
v___x_3718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3718_, 0, v_name_3698_);
lean_ctor_set(v___x_3718_, 1, v___x_3717_);
v___x_3719_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3716_);
lean_ctor_set(v___x_3719_, 1, v_a_3712_);
lean_ctor_set(v___x_3719_, 2, v___x_3718_);
if (v_isShared_3715_ == 0)
{
lean_ctor_set_tag(v___x_3714_, 2);
lean_ctor_set(v___x_3714_, 0, v___x_3719_);
v___x_3721_ = v___x_3714_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v___x_3719_);
v___x_3721_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
uint8_t v___x_3722_; lean_object* v___x_3723_; 
v___x_3722_ = 0;
v___x_3723_ = l_Lean_addDecl(v___x_3721_, v___x_3722_, v___y_3704_, v___y_3705_);
if (lean_obj_tag(v___x_3723_) == 0)
{
lean_object* v___x_3724_; uint8_t v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; 
lean_dec_ref_known(v___x_3723_, 1);
v___x_3724_ = l_Lean_Meta_simpExtension;
v___x_3725_ = 0;
v___x_3726_ = lean_unsigned_to_nat(1000u);
v___x_3727_ = l_Lean_Meta_addSimpTheorem(v___x_3724_, v_name_3698_, v___x_3700_, v___x_3722_, v___x_3725_, v___x_3726_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
return v___x_3727_;
}
else
{
lean_dec(v_name_3698_);
return v___x_3723_;
}
}
}
}
else
{
lean_object* v_a_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3737_; 
lean_dec(v_levelParams_3699_);
lean_dec(v_name_3698_);
lean_dec_ref(v_val_3697_);
v_a_3730_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3737_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3732_ = v___x_3707_;
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_a_3730_);
lean_dec(v___x_3707_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3735_; 
if (v_isShared_3733_ == 0)
{
v___x_3735_ = v___x_3732_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_a_3730_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0___boxed(lean_object* v_ctorVal_3738_, lean_object* v_val_3739_, lean_object* v_name_3740_, lean_object* v_levelParams_3741_, lean_object* v___x_3742_, lean_object* v_____r_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_){
_start:
{
uint8_t v___x_8786__boxed_3749_; lean_object* v_res_3750_; 
v___x_8786__boxed_3749_ = lean_unbox(v___x_3742_);
v_res_3750_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(v_ctorVal_3738_, v_val_3739_, v_name_3740_, v_levelParams_3741_, v___x_8786__boxed_3749_, v_____r_3743_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_);
lean_dec(v___y_3747_);
lean_dec_ref(v___y_3746_);
lean_dec(v___y_3745_);
lean_dec_ref(v___y_3744_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(lean_object* v_ctorVal_3751_, lean_object* v_a_3752_, lean_object* v_a_3753_, lean_object* v_a_3754_, lean_object* v_a_3755_){
_start:
{
lean_object* v_toConstantVal_3757_; lean_object* v_toCold_3758_; lean_object* v_options_3759_; lean_object* v_name_3760_; lean_object* v_levelParams_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3981_; 
v_toConstantVal_3757_ = lean_ctor_get(v_ctorVal_3751_, 0);
lean_inc_ref(v_toConstantVal_3757_);
v_toCold_3758_ = lean_ctor_get(v_a_3754_, 0);
v_options_3759_ = lean_ctor_get(v_toCold_3758_, 2);
v_name_3760_ = lean_ctor_get(v_toConstantVal_3757_, 0);
v_levelParams_3761_ = lean_ctor_get(v_toConstantVal_3757_, 1);
v_isSharedCheck_3981_ = !lean_is_exclusive(v_toConstantVal_3757_);
if (v_isSharedCheck_3981_ == 0)
{
lean_object* v_unused_3982_; 
v_unused_3982_ = lean_ctor_get(v_toConstantVal_3757_, 2);
lean_dec(v_unused_3982_);
v___x_3763_ = v_toConstantVal_3757_;
v_isShared_3764_ = v_isSharedCheck_3981_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_levelParams_3761_);
lean_inc(v_name_3760_);
lean_dec(v_toConstantVal_3757_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3981_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v_inheritedTraceOptions_3765_; uint8_t v_hasTrace_3766_; lean_object* v_name_3767_; 
v_inheritedTraceOptions_3765_ = lean_ctor_get(v_toCold_3758_, 11);
v_hasTrace_3766_ = lean_ctor_get_uint8(v_options_3759_, sizeof(void*)*1);
v_name_3767_ = l_Lean_Meta_mkInjectiveEqTheoremNameFor(v_name_3760_);
if (v_hasTrace_3766_ == 0)
{
lean_object* v___x_3768_; 
lean_inc_ref(v_ctorVal_3751_);
v___x_3768_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3751_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v_a_3769_; lean_object* v___x_3771_; uint8_t v_isShared_3772_; uint8_t v_isSharedCheck_3811_; 
v_a_3769_ = lean_ctor_get(v___x_3768_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3771_ = v___x_3768_;
v_isShared_3772_ = v_isSharedCheck_3811_;
goto v_resetjp_3770_;
}
else
{
lean_inc(v_a_3769_);
lean_dec(v___x_3768_);
v___x_3771_ = lean_box(0);
v_isShared_3772_ = v_isSharedCheck_3811_;
goto v_resetjp_3770_;
}
v_resetjp_3770_:
{
if (lean_obj_tag(v_a_3769_) == 1)
{
lean_object* v_val_3773_; lean_object* v___x_3774_; 
lean_del_object(v___x_3771_);
v_val_3773_ = lean_ctor_get(v_a_3769_, 0);
lean_inc_n(v_val_3773_, 2);
lean_dec_ref_known(v_a_3769_, 1);
v___x_3774_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3751_, v_val_3773_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
if (lean_obj_tag(v___x_3774_) == 0)
{
lean_object* v_a_3775_; lean_object* v___x_3776_; lean_object* v_a_3777_; lean_object* v___x_3778_; lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3798_; 
v_a_3775_ = lean_ctor_get(v___x_3774_, 0);
lean_inc(v_a_3775_);
lean_dec_ref_known(v___x_3774_, 1);
v___x_3776_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3773_, v_a_3753_);
v_a_3777_ = lean_ctor_get(v___x_3776_, 0);
lean_inc(v_a_3777_);
lean_dec_ref(v___x_3776_);
v___x_3778_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3775_, v_a_3753_);
v_a_3779_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3798_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3798_ == 0)
{
v___x_3781_ = v___x_3778_;
v_isShared_3782_ = v_isSharedCheck_3798_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v___x_3778_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3798_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3784_; 
lean_inc(v_name_3767_);
if (v_isShared_3764_ == 0)
{
lean_ctor_set(v___x_3763_, 2, v_a_3777_);
lean_ctor_set(v___x_3763_, 0, v_name_3767_);
v___x_3784_ = v___x_3763_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v_name_3767_);
lean_ctor_set(v_reuseFailAlloc_3797_, 1, v_levelParams_3761_);
lean_ctor_set(v_reuseFailAlloc_3797_, 2, v_a_3777_);
v___x_3784_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3789_; 
v___x_3785_ = lean_box(0);
lean_inc(v_name_3767_);
v___x_3786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3786_, 0, v_name_3767_);
lean_ctor_set(v___x_3786_, 1, v___x_3785_);
v___x_3787_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3787_, 0, v___x_3784_);
lean_ctor_set(v___x_3787_, 1, v_a_3779_);
lean_ctor_set(v___x_3787_, 2, v___x_3786_);
if (v_isShared_3782_ == 0)
{
lean_ctor_set_tag(v___x_3781_, 2);
lean_ctor_set(v___x_3781_, 0, v___x_3787_);
v___x_3789_ = v___x_3781_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v___x_3787_);
v___x_3789_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
lean_object* v___x_3790_; 
v___x_3790_ = l_Lean_addDecl(v___x_3789_, v_hasTrace_3766_, v_a_3754_, v_a_3755_);
if (lean_obj_tag(v___x_3790_) == 0)
{
lean_object* v___x_3791_; uint8_t v___x_3792_; uint8_t v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; 
lean_dec_ref_known(v___x_3790_, 1);
v___x_3791_ = l_Lean_Meta_simpExtension;
v___x_3792_ = 1;
v___x_3793_ = 0;
v___x_3794_ = lean_unsigned_to_nat(1000u);
v___x_3795_ = l_Lean_Meta_addSimpTheorem(v___x_3791_, v_name_3767_, v___x_3792_, v_hasTrace_3766_, v___x_3793_, v___x_3794_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
return v___x_3795_;
}
else
{
lean_dec(v_name_3767_);
return v___x_3790_;
}
}
}
}
}
else
{
lean_object* v_a_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3806_; 
lean_dec(v_val_3773_);
lean_dec(v_name_3767_);
lean_del_object(v___x_3763_);
lean_dec(v_levelParams_3761_);
v_a_3799_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3806_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3806_ == 0)
{
v___x_3801_ = v___x_3774_;
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_a_3799_);
lean_dec(v___x_3774_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3804_; 
if (v_isShared_3802_ == 0)
{
v___x_3804_ = v___x_3801_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v_a_3799_);
v___x_3804_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
return v___x_3804_;
}
}
}
}
else
{
lean_object* v___x_3807_; lean_object* v___x_3809_; 
lean_dec(v_a_3769_);
lean_dec(v_name_3767_);
lean_del_object(v___x_3763_);
lean_dec(v_levelParams_3761_);
lean_dec_ref(v_ctorVal_3751_);
v___x_3807_ = lean_box(0);
if (v_isShared_3772_ == 0)
{
lean_ctor_set(v___x_3771_, 0, v___x_3807_);
v___x_3809_ = v___x_3771_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v___x_3807_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
}
else
{
lean_object* v_a_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3819_; 
lean_dec(v_name_3767_);
lean_del_object(v___x_3763_);
lean_dec(v_levelParams_3761_);
lean_dec_ref(v_ctorVal_3751_);
v_a_3812_ = lean_ctor_get(v___x_3768_, 0);
v_isSharedCheck_3819_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3819_ == 0)
{
v___x_3814_ = v___x_3768_;
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_a_3812_);
lean_dec(v___x_3768_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3817_; 
if (v_isShared_3815_ == 0)
{
v___x_3817_ = v___x_3814_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v_a_3812_);
v___x_3817_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
return v___x_3817_;
}
}
}
}
else
{
lean_object* v___f_3820_; lean_object* v_cls_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; uint8_t v___x_3824_; lean_object* v___y_3826_; lean_object* v___y_3827_; lean_object* v_a_3828_; lean_object* v___y_3838_; lean_object* v___y_3839_; lean_object* v_a_3840_; lean_object* v___y_3843_; lean_object* v___y_3844_; lean_object* v_a_3845_; lean_object* v___y_3848_; lean_object* v___y_3849_; lean_object* v___y_3850_; lean_object* v___y_3854_; lean_object* v___y_3855_; lean_object* v_a_3856_; lean_object* v___y_3869_; lean_object* v___y_3870_; lean_object* v_a_3871_; lean_object* v___y_3874_; lean_object* v___y_3875_; lean_object* v_a_3876_; lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; 
lean_inc(v_name_3767_);
v___f_3820_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3820_, 0, v_name_3767_);
v_cls_3821_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_3822_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_3823_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_3824_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3765_, v_options_3759_, v___x_3823_);
if (v___x_3824_ == 0)
{
lean_object* v___x_3919_; uint8_t v___x_3920_; 
v___x_3919_ = l_Lean_trace_profiler;
v___x_3920_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_3759_, v___x_3919_);
if (v___x_3920_ == 0)
{
lean_object* v___x_3921_; 
lean_dec_ref(v___f_3820_);
lean_inc_ref(v_ctorVal_3751_);
v___x_3921_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3751_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v_a_3922_; lean_object* v___x_3924_; uint8_t v_isShared_3925_; uint8_t v_isSharedCheck_3972_; 
v_a_3922_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3924_ = v___x_3921_;
v_isShared_3925_ = v_isSharedCheck_3972_;
goto v_resetjp_3923_;
}
else
{
lean_inc(v_a_3922_);
lean_dec(v___x_3921_);
v___x_3924_ = lean_box(0);
v_isShared_3925_ = v_isSharedCheck_3972_;
goto v_resetjp_3923_;
}
v_resetjp_3923_:
{
if (lean_obj_tag(v_a_3922_) == 1)
{
lean_object* v_val_3926_; lean_object* v___y_3928_; lean_object* v___y_3929_; lean_object* v___y_3930_; lean_object* v___y_3931_; 
lean_del_object(v___x_3924_);
v_val_3926_ = lean_ctor_get(v_a_3922_, 0);
lean_inc(v_val_3926_);
lean_dec_ref_known(v_a_3922_, 1);
if (v___x_3824_ == 0)
{
v___y_3928_ = v_a_3752_;
v___y_3929_ = v_a_3753_;
v___y_3930_ = v_a_3754_;
v___y_3931_ = v_a_3755_;
goto v___jp_3927_;
}
else
{
lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
v___x_3964_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
lean_inc(v_val_3926_);
v___x_3965_ = l_Lean_MessageData_ofExpr(v_val_3926_);
v___x_3966_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3964_);
lean_ctor_set(v___x_3966_, 1, v___x_3965_);
v___x_3967_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_3821_, v___x_3966_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
if (lean_obj_tag(v___x_3967_) == 0)
{
lean_dec_ref_known(v___x_3967_, 1);
v___y_3928_ = v_a_3752_;
v___y_3929_ = v_a_3753_;
v___y_3930_ = v_a_3754_;
v___y_3931_ = v_a_3755_;
goto v___jp_3927_;
}
else
{
lean_dec(v_val_3926_);
lean_dec(v_name_3767_);
lean_del_object(v___x_3763_);
lean_dec(v_levelParams_3761_);
lean_dec_ref(v_ctorVal_3751_);
return v___x_3967_;
}
}
v___jp_3927_:
{
lean_object* v___x_3932_; 
lean_inc(v_val_3926_);
v___x_3932_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3751_, v_val_3926_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_);
if (lean_obj_tag(v___x_3932_) == 0)
{
lean_object* v_a_3933_; lean_object* v___x_3934_; lean_object* v_a_3935_; lean_object* v___x_3936_; lean_object* v_a_3937_; lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3955_; 
v_a_3933_ = lean_ctor_get(v___x_3932_, 0);
lean_inc(v_a_3933_);
lean_dec_ref_known(v___x_3932_, 1);
v___x_3934_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3926_, v___y_3929_);
v_a_3935_ = lean_ctor_get(v___x_3934_, 0);
lean_inc(v_a_3935_);
lean_dec_ref(v___x_3934_);
v___x_3936_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3933_, v___y_3929_);
v_a_3937_ = lean_ctor_get(v___x_3936_, 0);
v_isSharedCheck_3955_ = !lean_is_exclusive(v___x_3936_);
if (v_isSharedCheck_3955_ == 0)
{
v___x_3939_ = v___x_3936_;
v_isShared_3940_ = v_isSharedCheck_3955_;
goto v_resetjp_3938_;
}
else
{
lean_inc(v_a_3937_);
lean_dec(v___x_3936_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3955_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
lean_object* v___x_3942_; 
lean_inc(v_name_3767_);
if (v_isShared_3764_ == 0)
{
lean_ctor_set(v___x_3763_, 2, v_a_3935_);
lean_ctor_set(v___x_3763_, 0, v_name_3767_);
v___x_3942_ = v___x_3763_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v_name_3767_);
lean_ctor_set(v_reuseFailAlloc_3954_, 1, v_levelParams_3761_);
lean_ctor_set(v_reuseFailAlloc_3954_, 2, v_a_3935_);
v___x_3942_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3947_; 
v___x_3943_ = lean_box(0);
lean_inc(v_name_3767_);
v___x_3944_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3944_, 0, v_name_3767_);
lean_ctor_set(v___x_3944_, 1, v___x_3943_);
v___x_3945_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3942_);
lean_ctor_set(v___x_3945_, 1, v_a_3937_);
lean_ctor_set(v___x_3945_, 2, v___x_3944_);
if (v_isShared_3940_ == 0)
{
lean_ctor_set_tag(v___x_3939_, 2);
lean_ctor_set(v___x_3939_, 0, v___x_3945_);
v___x_3947_ = v___x_3939_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v___x_3945_);
v___x_3947_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
lean_object* v___x_3948_; 
v___x_3948_ = l_Lean_addDecl(v___x_3947_, v___x_3920_, v___y_3930_, v___y_3931_);
if (lean_obj_tag(v___x_3948_) == 0)
{
lean_object* v___x_3949_; uint8_t v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
lean_dec_ref_known(v___x_3948_, 1);
v___x_3949_ = l_Lean_Meta_simpExtension;
v___x_3950_ = 0;
v___x_3951_ = lean_unsigned_to_nat(1000u);
v___x_3952_ = l_Lean_Meta_addSimpTheorem(v___x_3949_, v_name_3767_, v_hasTrace_3766_, v___x_3920_, v___x_3950_, v___x_3951_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_);
return v___x_3952_;
}
else
{
lean_dec(v_name_3767_);
return v___x_3948_;
}
}
}
}
}
else
{
lean_object* v_a_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3963_; 
lean_dec(v_val_3926_);
lean_dec(v_name_3767_);
lean_del_object(v___x_3763_);
lean_dec(v_levelParams_3761_);
v_a_3956_ = lean_ctor_get(v___x_3932_, 0);
v_isSharedCheck_3963_ = !lean_is_exclusive(v___x_3932_);
if (v_isSharedCheck_3963_ == 0)
{
v___x_3958_ = v___x_3932_;
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_a_3956_);
lean_dec(v___x_3932_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v___x_3961_; 
if (v_isShared_3959_ == 0)
{
v___x_3961_ = v___x_3958_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v_a_3956_);
v___x_3961_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
return v___x_3961_;
}
}
}
}
}
else
{
lean_object* v___x_3968_; lean_object* v___x_3970_; 
lean_dec(v_a_3922_);
lean_dec(v_name_3767_);
lean_del_object(v___x_3763_);
lean_dec(v_levelParams_3761_);
lean_dec_ref(v_ctorVal_3751_);
v___x_3968_ = lean_box(0);
if (v_isShared_3925_ == 0)
{
lean_ctor_set(v___x_3924_, 0, v___x_3968_);
v___x_3970_ = v___x_3924_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v___x_3968_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
else
{
lean_object* v_a_3973_; lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_3980_; 
lean_dec(v_name_3767_);
lean_del_object(v___x_3763_);
lean_dec(v_levelParams_3761_);
lean_dec_ref(v_ctorVal_3751_);
v_a_3973_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_3980_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_3980_ == 0)
{
v___x_3975_ = v___x_3921_;
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
else
{
lean_inc(v_a_3973_);
lean_dec(v___x_3921_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v___x_3978_; 
if (v_isShared_3976_ == 0)
{
v___x_3978_ = v___x_3975_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v_a_3973_);
v___x_3978_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
return v___x_3978_;
}
}
}
}
else
{
lean_del_object(v___x_3763_);
goto v___jp_3884_;
}
}
else
{
lean_del_object(v___x_3763_);
goto v___jp_3884_;
}
v___jp_3825_:
{
lean_object* v___x_3829_; double v___x_3830_; double v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; 
v___x_3829_ = lean_io_get_num_heartbeats();
v___x_3830_ = lean_float_of_nat(v___y_3827_);
v___x_3831_ = lean_float_of_nat(v___x_3829_);
v___x_3832_ = lean_box_float(v___x_3830_);
v___x_3833_ = lean_box_float(v___x_3831_);
v___x_3834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3834_, 0, v___x_3832_);
lean_ctor_set(v___x_3834_, 1, v___x_3833_);
v___x_3835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3835_, 0, v_a_3828_);
lean_ctor_set(v___x_3835_, 1, v___x_3834_);
v___x_3836_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_3821_, v_hasTrace_3766_, v___x_3822_, v_options_3759_, v___x_3824_, v___y_3826_, v___f_3820_, v___x_3835_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
return v___x_3836_;
}
v___jp_3837_:
{
lean_object* v___x_3841_; 
v___x_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3841_, 0, v_a_3840_);
v___y_3826_ = v___y_3839_;
v___y_3827_ = v___y_3838_;
v_a_3828_ = v___x_3841_;
goto v___jp_3825_;
}
v___jp_3842_:
{
lean_object* v___x_3846_; 
v___x_3846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3846_, 0, v_a_3845_);
v___y_3826_ = v___y_3844_;
v___y_3827_ = v___y_3843_;
v_a_3828_ = v___x_3846_;
goto v___jp_3825_;
}
v___jp_3847_:
{
if (lean_obj_tag(v___y_3850_) == 0)
{
lean_object* v_a_3851_; 
v_a_3851_ = lean_ctor_get(v___y_3850_, 0);
lean_inc(v_a_3851_);
lean_dec_ref_known(v___y_3850_, 1);
v___y_3843_ = v___y_3849_;
v___y_3844_ = v___y_3848_;
v_a_3845_ = v_a_3851_;
goto v___jp_3842_;
}
else
{
lean_object* v_a_3852_; 
v_a_3852_ = lean_ctor_get(v___y_3850_, 0);
lean_inc(v_a_3852_);
lean_dec_ref_known(v___y_3850_, 1);
v___y_3838_ = v___y_3849_;
v___y_3839_ = v___y_3848_;
v_a_3840_ = v_a_3852_;
goto v___jp_3837_;
}
}
v___jp_3853_:
{
lean_object* v___x_3857_; double v___x_3858_; double v___x_3859_; double v___x_3860_; double v___x_3861_; double v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; 
v___x_3857_ = lean_io_mono_nanos_now();
v___x_3858_ = lean_float_of_nat(v___y_3855_);
v___x_3859_ = lean_float_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0);
v___x_3860_ = lean_float_div(v___x_3858_, v___x_3859_);
v___x_3861_ = lean_float_of_nat(v___x_3857_);
v___x_3862_ = lean_float_div(v___x_3861_, v___x_3859_);
v___x_3863_ = lean_box_float(v___x_3860_);
v___x_3864_ = lean_box_float(v___x_3862_);
v___x_3865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3865_, 0, v___x_3863_);
lean_ctor_set(v___x_3865_, 1, v___x_3864_);
v___x_3866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3866_, 0, v_a_3856_);
lean_ctor_set(v___x_3866_, 1, v___x_3865_);
v___x_3867_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_3821_, v_hasTrace_3766_, v___x_3822_, v_options_3759_, v___x_3824_, v___y_3854_, v___f_3820_, v___x_3866_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
return v___x_3867_;
}
v___jp_3868_:
{
lean_object* v___x_3872_; 
v___x_3872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3872_, 0, v_a_3871_);
v___y_3854_ = v___y_3870_;
v___y_3855_ = v___y_3869_;
v_a_3856_ = v___x_3872_;
goto v___jp_3853_;
}
v___jp_3873_:
{
lean_object* v___x_3877_; 
v___x_3877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3877_, 0, v_a_3876_);
v___y_3854_ = v___y_3875_;
v___y_3855_ = v___y_3874_;
v_a_3856_ = v___x_3877_;
goto v___jp_3853_;
}
v___jp_3878_:
{
if (lean_obj_tag(v___y_3881_) == 0)
{
lean_object* v_a_3882_; 
v_a_3882_ = lean_ctor_get(v___y_3881_, 0);
lean_inc(v_a_3882_);
lean_dec_ref_known(v___y_3881_, 1);
v___y_3869_ = v___y_3880_;
v___y_3870_ = v___y_3879_;
v_a_3871_ = v_a_3882_;
goto v___jp_3868_;
}
else
{
lean_object* v_a_3883_; 
v_a_3883_ = lean_ctor_get(v___y_3881_, 0);
lean_inc(v_a_3883_);
lean_dec_ref_known(v___y_3881_, 1);
v___y_3874_ = v___y_3880_;
v___y_3875_ = v___y_3879_;
v_a_3876_ = v_a_3883_;
goto v___jp_3873_;
}
}
v___jp_3884_:
{
lean_object* v___x_3885_; lean_object* v_a_3886_; lean_object* v___x_3887_; uint8_t v___x_3888_; 
v___x_3885_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_3755_);
v_a_3886_ = lean_ctor_get(v___x_3885_, 0);
lean_inc(v_a_3886_);
lean_dec_ref(v___x_3885_);
v___x_3887_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3888_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_3759_, v___x_3887_);
if (v___x_3888_ == 0)
{
lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3889_ = lean_io_mono_nanos_now();
lean_inc_ref(v_ctorVal_3751_);
v___x_3890_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3751_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
if (lean_obj_tag(v___x_3890_) == 0)
{
lean_object* v_a_3891_; 
v_a_3891_ = lean_ctor_get(v___x_3890_, 0);
lean_inc(v_a_3891_);
lean_dec_ref_known(v___x_3890_, 1);
if (lean_obj_tag(v_a_3891_) == 1)
{
if (v___x_3824_ == 0)
{
lean_object* v_val_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v_val_3892_ = lean_ctor_get(v_a_3891_, 0);
lean_inc(v_val_3892_);
lean_dec_ref_known(v_a_3891_, 1);
v___x_3893_ = lean_box(0);
v___x_3894_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(v_ctorVal_3751_, v_val_3892_, v_name_3767_, v_levelParams_3761_, v___x_3888_, v_hasTrace_3766_, v___x_3893_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
v___y_3879_ = v_a_3886_;
v___y_3880_ = v___x_3889_;
v___y_3881_ = v___x_3894_;
goto v___jp_3878_;
}
else
{
lean_object* v_val_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
v_val_3895_ = lean_ctor_get(v_a_3891_, 0);
lean_inc_n(v_val_3895_, 2);
lean_dec_ref_known(v_a_3891_, 1);
v___x_3896_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_3897_ = l_Lean_MessageData_ofExpr(v_val_3895_);
v___x_3898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3896_);
lean_ctor_set(v___x_3898_, 1, v___x_3897_);
v___x_3899_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_3821_, v___x_3898_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
if (lean_obj_tag(v___x_3899_) == 0)
{
lean_object* v_a_3900_; lean_object* v___x_3901_; 
v_a_3900_ = lean_ctor_get(v___x_3899_, 0);
lean_inc(v_a_3900_);
lean_dec_ref_known(v___x_3899_, 1);
v___x_3901_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(v_ctorVal_3751_, v_val_3895_, v_name_3767_, v_levelParams_3761_, v___x_3888_, v_hasTrace_3766_, v_a_3900_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
v___y_3879_ = v_a_3886_;
v___y_3880_ = v___x_3889_;
v___y_3881_ = v___x_3901_;
goto v___jp_3878_;
}
else
{
lean_dec(v_val_3895_);
lean_dec(v_name_3767_);
lean_dec(v_levelParams_3761_);
lean_dec_ref(v_ctorVal_3751_);
v___y_3879_ = v_a_3886_;
v___y_3880_ = v___x_3889_;
v___y_3881_ = v___x_3899_;
goto v___jp_3878_;
}
}
}
else
{
lean_object* v___x_3902_; 
lean_dec(v_a_3891_);
lean_dec(v_name_3767_);
lean_dec(v_levelParams_3761_);
lean_dec_ref(v_ctorVal_3751_);
v___x_3902_ = lean_box(0);
v___y_3869_ = v___x_3889_;
v___y_3870_ = v_a_3886_;
v_a_3871_ = v___x_3902_;
goto v___jp_3868_;
}
}
else
{
lean_object* v_a_3903_; 
lean_dec(v_name_3767_);
lean_dec(v_levelParams_3761_);
lean_dec_ref(v_ctorVal_3751_);
v_a_3903_ = lean_ctor_get(v___x_3890_, 0);
lean_inc(v_a_3903_);
lean_dec_ref_known(v___x_3890_, 1);
v___y_3874_ = v___x_3889_;
v___y_3875_ = v_a_3886_;
v_a_3876_ = v_a_3903_;
goto v___jp_3873_;
}
}
else
{
lean_object* v___x_3904_; lean_object* v___x_3905_; 
v___x_3904_ = lean_io_get_num_heartbeats();
lean_inc_ref(v_ctorVal_3751_);
v___x_3905_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3751_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
if (lean_obj_tag(v___x_3905_) == 0)
{
lean_object* v_a_3906_; 
v_a_3906_ = lean_ctor_get(v___x_3905_, 0);
lean_inc(v_a_3906_);
lean_dec_ref_known(v___x_3905_, 1);
if (lean_obj_tag(v_a_3906_) == 1)
{
if (v___x_3824_ == 0)
{
lean_object* v_val_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; 
v_val_3907_ = lean_ctor_get(v_a_3906_, 0);
lean_inc(v_val_3907_);
lean_dec_ref_known(v_a_3906_, 1);
v___x_3908_ = lean_box(0);
v___x_3909_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(v_ctorVal_3751_, v_val_3907_, v_name_3767_, v_levelParams_3761_, v___x_3888_, v___x_3908_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
v___y_3848_ = v_a_3886_;
v___y_3849_ = v___x_3904_;
v___y_3850_ = v___x_3909_;
goto v___jp_3847_;
}
else
{
lean_object* v_val_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; 
v_val_3910_ = lean_ctor_get(v_a_3906_, 0);
lean_inc_n(v_val_3910_, 2);
lean_dec_ref_known(v_a_3906_, 1);
v___x_3911_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_3912_ = l_Lean_MessageData_ofExpr(v_val_3910_);
v___x_3913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3913_, 0, v___x_3911_);
lean_ctor_set(v___x_3913_, 1, v___x_3912_);
v___x_3914_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_3821_, v___x_3913_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
if (lean_obj_tag(v___x_3914_) == 0)
{
lean_object* v_a_3915_; lean_object* v___x_3916_; 
v_a_3915_ = lean_ctor_get(v___x_3914_, 0);
lean_inc(v_a_3915_);
lean_dec_ref_known(v___x_3914_, 1);
v___x_3916_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(v_ctorVal_3751_, v_val_3910_, v_name_3767_, v_levelParams_3761_, v___x_3888_, v_a_3915_, v_a_3752_, v_a_3753_, v_a_3754_, v_a_3755_);
v___y_3848_ = v_a_3886_;
v___y_3849_ = v___x_3904_;
v___y_3850_ = v___x_3916_;
goto v___jp_3847_;
}
else
{
lean_dec(v_val_3910_);
lean_dec(v_name_3767_);
lean_dec(v_levelParams_3761_);
lean_dec_ref(v_ctorVal_3751_);
v___y_3848_ = v_a_3886_;
v___y_3849_ = v___x_3904_;
v___y_3850_ = v___x_3914_;
goto v___jp_3847_;
}
}
}
else
{
lean_object* v___x_3917_; 
lean_dec(v_a_3906_);
lean_dec(v_name_3767_);
lean_dec(v_levelParams_3761_);
lean_dec_ref(v_ctorVal_3751_);
v___x_3917_ = lean_box(0);
v___y_3843_ = v___x_3904_;
v___y_3844_ = v_a_3886_;
v_a_3845_ = v___x_3917_;
goto v___jp_3842_;
}
}
else
{
lean_object* v_a_3918_; 
lean_dec(v_name_3767_);
lean_dec(v_levelParams_3761_);
lean_dec_ref(v_ctorVal_3751_);
v_a_3918_ = lean_ctor_get(v___x_3905_, 0);
lean_inc(v_a_3918_);
lean_dec_ref_known(v___x_3905_, 1);
v___y_3838_ = v___x_3904_;
v___y_3839_ = v_a_3886_;
v_a_3840_ = v_a_3918_;
goto v___jp_3837_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___boxed(lean_object* v_ctorVal_3983_, lean_object* v_a_3984_, lean_object* v_a_3985_, lean_object* v_a_3986_, lean_object* v_a_3987_, lean_object* v_a_3988_){
_start:
{
lean_object* v_res_3989_; 
v_res_3989_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(v_ctorVal_3983_, v_a_3984_, v_a_3985_, v_a_3986_, v_a_3987_);
lean_dec(v_a_3987_);
lean_dec_ref(v_a_3986_);
lean_dec(v_a_3985_);
lean_dec_ref(v_a_3984_);
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(lean_object* v_name_3990_, lean_object* v_decl_3991_, lean_object* v_ref_3992_){
_start:
{
lean_object* v_defValue_3994_; lean_object* v_descr_3995_; lean_object* v_deprecation_x3f_3996_; lean_object* v___x_3997_; uint8_t v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; 
v_defValue_3994_ = lean_ctor_get(v_decl_3991_, 0);
v_descr_3995_ = lean_ctor_get(v_decl_3991_, 1);
v_deprecation_x3f_3996_ = lean_ctor_get(v_decl_3991_, 2);
v___x_3997_ = lean_alloc_ctor(1, 0, 1);
v___x_3998_ = lean_unbox(v_defValue_3994_);
lean_ctor_set_uint8(v___x_3997_, 0, v___x_3998_);
lean_inc(v_deprecation_x3f_3996_);
lean_inc_ref(v_descr_3995_);
lean_inc_n(v_name_3990_, 2);
v___x_3999_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3999_, 0, v_name_3990_);
lean_ctor_set(v___x_3999_, 1, v_ref_3992_);
lean_ctor_set(v___x_3999_, 2, v___x_3997_);
lean_ctor_set(v___x_3999_, 3, v_descr_3995_);
lean_ctor_set(v___x_3999_, 4, v_deprecation_x3f_3996_);
v___x_4000_ = lean_register_option(v_name_3990_, v___x_3999_);
if (lean_obj_tag(v___x_4000_) == 0)
{
lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4008_; 
v_isSharedCheck_4008_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4008_ == 0)
{
lean_object* v_unused_4009_; 
v_unused_4009_ = lean_ctor_get(v___x_4000_, 0);
lean_dec(v_unused_4009_);
v___x_4002_ = v___x_4000_;
v_isShared_4003_ = v_isSharedCheck_4008_;
goto v_resetjp_4001_;
}
else
{
lean_dec(v___x_4000_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4008_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
lean_object* v___x_4004_; lean_object* v___x_4006_; 
lean_inc(v_defValue_3994_);
v___x_4004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4004_, 0, v_name_3990_);
lean_ctor_set(v___x_4004_, 1, v_defValue_3994_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v___x_4004_);
v___x_4006_ = v___x_4002_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4007_; 
v_reuseFailAlloc_4007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4007_, 0, v___x_4004_);
v___x_4006_ = v_reuseFailAlloc_4007_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
return v___x_4006_;
}
}
}
else
{
lean_object* v_a_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4017_; 
lean_dec(v_name_3990_);
v_a_4010_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4012_ = v___x_4000_;
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_a_4010_);
lean_dec(v___x_4000_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4015_; 
if (v_isShared_4013_ == 0)
{
v___x_4015_ = v___x_4012_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4010_);
v___x_4015_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
return v___x_4015_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_4018_, lean_object* v_decl_4019_, lean_object* v_ref_4020_, lean_object* v_a_4021_){
_start:
{
lean_object* v_res_4022_; 
v_res_4022_ = l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(v_name_4018_, v_decl_4019_, v_ref_4020_);
lean_dec_ref(v_decl_4019_);
return v_res_4022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; 
v___x_4037_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_));
v___x_4038_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_));
v___x_4039_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_));
v___x_4040_ = l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(v___x_4037_, v___x_4038_, v___x_4039_);
return v___x_4040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4____boxed(lean_object* v_a_4041_){
_start:
{
lean_object* v_res_4042_; 
v_res_4042_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_();
return v_res_4042_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(lean_object* v___y_4043_, uint8_t v_isExporting_4044_, lean_object* v___x_4045_, lean_object* v___y_4046_, lean_object* v___x_4047_, lean_object* v_a_x3f_4048_){
_start:
{
lean_object* v___x_4050_; lean_object* v_env_4051_; lean_object* v_nextMacroScope_4052_; lean_object* v_ngen_4053_; lean_object* v_auxDeclNGen_4054_; lean_object* v_traceState_4055_; lean_object* v_messages_4056_; lean_object* v_infoState_4057_; lean_object* v_snapshotTasks_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4083_; 
v___x_4050_ = lean_st_ref_take(v___y_4043_);
v_env_4051_ = lean_ctor_get(v___x_4050_, 0);
v_nextMacroScope_4052_ = lean_ctor_get(v___x_4050_, 1);
v_ngen_4053_ = lean_ctor_get(v___x_4050_, 2);
v_auxDeclNGen_4054_ = lean_ctor_get(v___x_4050_, 3);
v_traceState_4055_ = lean_ctor_get(v___x_4050_, 4);
v_messages_4056_ = lean_ctor_get(v___x_4050_, 6);
v_infoState_4057_ = lean_ctor_get(v___x_4050_, 7);
v_snapshotTasks_4058_ = lean_ctor_get(v___x_4050_, 8);
v_isSharedCheck_4083_ = !lean_is_exclusive(v___x_4050_);
if (v_isSharedCheck_4083_ == 0)
{
lean_object* v_unused_4084_; 
v_unused_4084_ = lean_ctor_get(v___x_4050_, 5);
lean_dec(v_unused_4084_);
v___x_4060_ = v___x_4050_;
v_isShared_4061_ = v_isSharedCheck_4083_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_snapshotTasks_4058_);
lean_inc(v_infoState_4057_);
lean_inc(v_messages_4056_);
lean_inc(v_traceState_4055_);
lean_inc(v_auxDeclNGen_4054_);
lean_inc(v_ngen_4053_);
lean_inc(v_nextMacroScope_4052_);
lean_inc(v_env_4051_);
lean_dec(v___x_4050_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4083_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
lean_object* v___x_4062_; lean_object* v___x_4064_; 
v___x_4062_ = l_Lean_Environment_setExporting(v_env_4051_, v_isExporting_4044_);
if (v_isShared_4061_ == 0)
{
lean_ctor_set(v___x_4060_, 5, v___x_4045_);
lean_ctor_set(v___x_4060_, 0, v___x_4062_);
v___x_4064_ = v___x_4060_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v___x_4062_);
lean_ctor_set(v_reuseFailAlloc_4082_, 1, v_nextMacroScope_4052_);
lean_ctor_set(v_reuseFailAlloc_4082_, 2, v_ngen_4053_);
lean_ctor_set(v_reuseFailAlloc_4082_, 3, v_auxDeclNGen_4054_);
lean_ctor_set(v_reuseFailAlloc_4082_, 4, v_traceState_4055_);
lean_ctor_set(v_reuseFailAlloc_4082_, 5, v___x_4045_);
lean_ctor_set(v_reuseFailAlloc_4082_, 6, v_messages_4056_);
lean_ctor_set(v_reuseFailAlloc_4082_, 7, v_infoState_4057_);
lean_ctor_set(v_reuseFailAlloc_4082_, 8, v_snapshotTasks_4058_);
v___x_4064_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v_mctx_4067_; lean_object* v_zetaDeltaFVarIds_4068_; lean_object* v_postponed_4069_; lean_object* v_diag_4070_; lean_object* v___x_4072_; uint8_t v_isShared_4073_; uint8_t v_isSharedCheck_4080_; 
v___x_4065_ = lean_st_ref_put(v___y_4043_, v___x_4064_);
v___x_4066_ = lean_st_ref_take(v___y_4046_);
v_mctx_4067_ = lean_ctor_get(v___x_4066_, 0);
v_zetaDeltaFVarIds_4068_ = lean_ctor_get(v___x_4066_, 2);
v_postponed_4069_ = lean_ctor_get(v___x_4066_, 3);
v_diag_4070_ = lean_ctor_get(v___x_4066_, 4);
v_isSharedCheck_4080_ = !lean_is_exclusive(v___x_4066_);
if (v_isSharedCheck_4080_ == 0)
{
lean_object* v_unused_4081_; 
v_unused_4081_ = lean_ctor_get(v___x_4066_, 1);
lean_dec(v_unused_4081_);
v___x_4072_ = v___x_4066_;
v_isShared_4073_ = v_isSharedCheck_4080_;
goto v_resetjp_4071_;
}
else
{
lean_inc(v_diag_4070_);
lean_inc(v_postponed_4069_);
lean_inc(v_zetaDeltaFVarIds_4068_);
lean_inc(v_mctx_4067_);
lean_dec(v___x_4066_);
v___x_4072_ = lean_box(0);
v_isShared_4073_ = v_isSharedCheck_4080_;
goto v_resetjp_4071_;
}
v_resetjp_4071_:
{
lean_object* v___x_4074_; lean_object* v___x_4076_; 
v___x_4074_ = lean_box(0);
if (v_isShared_4073_ == 0)
{
lean_ctor_set(v___x_4072_, 1, v___x_4047_);
v___x_4076_ = v___x_4072_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4079_; 
v_reuseFailAlloc_4079_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4079_, 0, v_mctx_4067_);
lean_ctor_set(v_reuseFailAlloc_4079_, 1, v___x_4047_);
lean_ctor_set(v_reuseFailAlloc_4079_, 2, v_zetaDeltaFVarIds_4068_);
lean_ctor_set(v_reuseFailAlloc_4079_, 3, v_postponed_4069_);
lean_ctor_set(v_reuseFailAlloc_4079_, 4, v_diag_4070_);
v___x_4076_ = v_reuseFailAlloc_4079_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
lean_object* v___x_4077_; lean_object* v___x_4078_; 
v___x_4077_ = lean_st_ref_put(v___y_4046_, v___x_4076_);
v___x_4078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4078_, 0, v___x_4074_);
return v___x_4078_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0___boxed(lean_object* v___y_4085_, lean_object* v_isExporting_4086_, lean_object* v___x_4087_, lean_object* v___y_4088_, lean_object* v___x_4089_, lean_object* v_a_x3f_4090_, lean_object* v___y_4091_){
_start:
{
uint8_t v_isExporting_boxed_4092_; lean_object* v_res_4093_; 
v_isExporting_boxed_4092_ = lean_unbox(v_isExporting_4086_);
v_res_4093_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(v___y_4085_, v_isExporting_boxed_4092_, v___x_4087_, v___y_4088_, v___x_4089_, v_a_x3f_4090_);
lean_dec(v_a_x3f_4090_);
lean_dec(v___y_4088_);
lean_dec(v___y_4085_);
return v_res_4093_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_4094_; 
v___x_4094_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4094_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4095_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0);
v___x_4096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4096_, 0, v___x_4095_);
return v___x_4096_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_4097_; lean_object* v___x_4098_; 
v___x_4097_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1);
v___x_4098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4098_, 0, v___x_4097_);
lean_ctor_set(v___x_4098_, 1, v___x_4097_);
return v___x_4098_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; 
v___x_4099_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1);
v___x_4100_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4099_);
lean_ctor_set(v___x_4100_, 1, v___x_4099_);
lean_ctor_set(v___x_4100_, 2, v___x_4099_);
lean_ctor_set(v___x_4100_, 3, v___x_4099_);
lean_ctor_set(v___x_4100_, 4, v___x_4099_);
lean_ctor_set(v___x_4100_, 5, v___x_4099_);
return v___x_4100_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(lean_object* v_x_4101_, uint8_t v_isExporting_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_){
_start:
{
lean_object* v___x_4108_; lean_object* v_env_4109_; lean_object* v___x_4110_; uint8_t v_isModule_4111_; 
v___x_4108_ = lean_st_ref_get(v___y_4106_);
v_env_4109_ = lean_ctor_get(v___x_4108_, 0);
lean_inc_ref(v_env_4109_);
lean_dec(v___x_4108_);
v___x_4110_ = l_Lean_Environment_header(v_env_4109_);
v_isModule_4111_ = lean_ctor_get_uint8(v___x_4110_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4110_);
if (v_isModule_4111_ == 0)
{
lean_object* v___x_4112_; 
lean_dec_ref(v_env_4109_);
lean_inc(v___y_4106_);
lean_inc_ref(v___y_4105_);
lean_inc(v___y_4104_);
lean_inc_ref(v___y_4103_);
v___x_4112_ = lean_apply_5(v_x_4101_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, lean_box(0));
return v___x_4112_;
}
else
{
uint8_t v_isExporting_4113_; 
v_isExporting_4113_ = lean_ctor_get_uint8(v_env_4109_, sizeof(void*)*8);
lean_dec_ref(v_env_4109_);
if (v_isExporting_4102_ == 0)
{
if (v_isExporting_4113_ == 0)
{
lean_object* v___x_4179_; 
lean_inc(v___y_4106_);
lean_inc_ref(v___y_4105_);
lean_inc(v___y_4104_);
lean_inc_ref(v___y_4103_);
v___x_4179_ = lean_apply_5(v_x_4101_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, lean_box(0));
return v___x_4179_;
}
else
{
goto v___jp_4114_;
}
}
else
{
if (v_isExporting_4113_ == 0)
{
goto v___jp_4114_;
}
else
{
lean_object* v___x_4180_; 
lean_inc(v___y_4106_);
lean_inc_ref(v___y_4105_);
lean_inc(v___y_4104_);
lean_inc_ref(v___y_4103_);
v___x_4180_ = lean_apply_5(v_x_4101_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, lean_box(0));
return v___x_4180_;
}
}
v___jp_4114_:
{
lean_object* v___x_4115_; lean_object* v_env_4116_; lean_object* v_nextMacroScope_4117_; lean_object* v_ngen_4118_; lean_object* v_auxDeclNGen_4119_; lean_object* v_traceState_4120_; lean_object* v_messages_4121_; lean_object* v_infoState_4122_; lean_object* v_snapshotTasks_4123_; lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4177_; 
v___x_4115_ = lean_st_ref_take(v___y_4106_);
v_env_4116_ = lean_ctor_get(v___x_4115_, 0);
v_nextMacroScope_4117_ = lean_ctor_get(v___x_4115_, 1);
v_ngen_4118_ = lean_ctor_get(v___x_4115_, 2);
v_auxDeclNGen_4119_ = lean_ctor_get(v___x_4115_, 3);
v_traceState_4120_ = lean_ctor_get(v___x_4115_, 4);
v_messages_4121_ = lean_ctor_get(v___x_4115_, 6);
v_infoState_4122_ = lean_ctor_get(v___x_4115_, 7);
v_snapshotTasks_4123_ = lean_ctor_get(v___x_4115_, 8);
v_isSharedCheck_4177_ = !lean_is_exclusive(v___x_4115_);
if (v_isSharedCheck_4177_ == 0)
{
lean_object* v_unused_4178_; 
v_unused_4178_ = lean_ctor_get(v___x_4115_, 5);
lean_dec(v_unused_4178_);
v___x_4125_ = v___x_4115_;
v_isShared_4126_ = v_isSharedCheck_4177_;
goto v_resetjp_4124_;
}
else
{
lean_inc(v_snapshotTasks_4123_);
lean_inc(v_infoState_4122_);
lean_inc(v_messages_4121_);
lean_inc(v_traceState_4120_);
lean_inc(v_auxDeclNGen_4119_);
lean_inc(v_ngen_4118_);
lean_inc(v_nextMacroScope_4117_);
lean_inc(v_env_4116_);
lean_dec(v___x_4115_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4177_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4130_; 
v___x_4127_ = l_Lean_Environment_setExporting(v_env_4116_, v_isExporting_4102_);
v___x_4128_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2);
if (v_isShared_4126_ == 0)
{
lean_ctor_set(v___x_4125_, 5, v___x_4128_);
lean_ctor_set(v___x_4125_, 0, v___x_4127_);
v___x_4130_ = v___x_4125_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v___x_4127_);
lean_ctor_set(v_reuseFailAlloc_4176_, 1, v_nextMacroScope_4117_);
lean_ctor_set(v_reuseFailAlloc_4176_, 2, v_ngen_4118_);
lean_ctor_set(v_reuseFailAlloc_4176_, 3, v_auxDeclNGen_4119_);
lean_ctor_set(v_reuseFailAlloc_4176_, 4, v_traceState_4120_);
lean_ctor_set(v_reuseFailAlloc_4176_, 5, v___x_4128_);
lean_ctor_set(v_reuseFailAlloc_4176_, 6, v_messages_4121_);
lean_ctor_set(v_reuseFailAlloc_4176_, 7, v_infoState_4122_);
lean_ctor_set(v_reuseFailAlloc_4176_, 8, v_snapshotTasks_4123_);
v___x_4130_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v_mctx_4133_; lean_object* v_zetaDeltaFVarIds_4134_; lean_object* v_postponed_4135_; lean_object* v_diag_4136_; lean_object* v___x_4138_; uint8_t v_isShared_4139_; uint8_t v_isSharedCheck_4174_; 
v___x_4131_ = lean_st_ref_put(v___y_4106_, v___x_4130_);
v___x_4132_ = lean_st_ref_take(v___y_4104_);
v_mctx_4133_ = lean_ctor_get(v___x_4132_, 0);
v_zetaDeltaFVarIds_4134_ = lean_ctor_get(v___x_4132_, 2);
v_postponed_4135_ = lean_ctor_get(v___x_4132_, 3);
v_diag_4136_ = lean_ctor_get(v___x_4132_, 4);
v_isSharedCheck_4174_ = !lean_is_exclusive(v___x_4132_);
if (v_isSharedCheck_4174_ == 0)
{
lean_object* v_unused_4175_; 
v_unused_4175_ = lean_ctor_get(v___x_4132_, 1);
lean_dec(v_unused_4175_);
v___x_4138_ = v___x_4132_;
v_isShared_4139_ = v_isSharedCheck_4174_;
goto v_resetjp_4137_;
}
else
{
lean_inc(v_diag_4136_);
lean_inc(v_postponed_4135_);
lean_inc(v_zetaDeltaFVarIds_4134_);
lean_inc(v_mctx_4133_);
lean_dec(v___x_4132_);
v___x_4138_ = lean_box(0);
v_isShared_4139_ = v_isSharedCheck_4174_;
goto v_resetjp_4137_;
}
v_resetjp_4137_:
{
lean_object* v___x_4140_; lean_object* v___x_4142_; 
v___x_4140_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3);
if (v_isShared_4139_ == 0)
{
lean_ctor_set(v___x_4138_, 1, v___x_4140_);
v___x_4142_ = v___x_4138_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4173_, 0, v_mctx_4133_);
lean_ctor_set(v_reuseFailAlloc_4173_, 1, v___x_4140_);
lean_ctor_set(v_reuseFailAlloc_4173_, 2, v_zetaDeltaFVarIds_4134_);
lean_ctor_set(v_reuseFailAlloc_4173_, 3, v_postponed_4135_);
lean_ctor_set(v_reuseFailAlloc_4173_, 4, v_diag_4136_);
v___x_4142_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
lean_object* v___x_4143_; lean_object* v_r_4144_; 
v___x_4143_ = lean_st_ref_put(v___y_4104_, v___x_4142_);
lean_inc(v___y_4106_);
lean_inc_ref(v___y_4105_);
lean_inc(v___y_4104_);
lean_inc_ref(v___y_4103_);
v_r_4144_ = lean_apply_5(v_x_4101_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, lean_box(0));
if (lean_obj_tag(v_r_4144_) == 0)
{
lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4161_; 
v_a_4145_ = lean_ctor_get(v_r_4144_, 0);
v_isSharedCheck_4161_ = !lean_is_exclusive(v_r_4144_);
if (v_isSharedCheck_4161_ == 0)
{
v___x_4147_ = v_r_4144_;
v_isShared_4148_ = v_isSharedCheck_4161_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v_r_4144_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4161_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4150_; 
lean_inc(v_a_4145_);
if (v_isShared_4148_ == 0)
{
lean_ctor_set_tag(v___x_4147_, 1);
v___x_4150_ = v___x_4147_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4160_; 
v_reuseFailAlloc_4160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4160_, 0, v_a_4145_);
v___x_4150_ = v_reuseFailAlloc_4160_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
lean_object* v___x_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4158_; 
v___x_4151_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(v___y_4106_, v_isExporting_4113_, v___x_4128_, v___y_4104_, v___x_4140_, v___x_4150_);
lean_dec_ref(v___x_4150_);
v_isSharedCheck_4158_ = !lean_is_exclusive(v___x_4151_);
if (v_isSharedCheck_4158_ == 0)
{
lean_object* v_unused_4159_; 
v_unused_4159_ = lean_ctor_get(v___x_4151_, 0);
lean_dec(v_unused_4159_);
v___x_4153_ = v___x_4151_;
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
else
{
lean_dec(v___x_4151_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4156_; 
if (v_isShared_4154_ == 0)
{
lean_ctor_set(v___x_4153_, 0, v_a_4145_);
v___x_4156_ = v___x_4153_;
goto v_reusejp_4155_;
}
else
{
lean_object* v_reuseFailAlloc_4157_; 
v_reuseFailAlloc_4157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4157_, 0, v_a_4145_);
v___x_4156_ = v_reuseFailAlloc_4157_;
goto v_reusejp_4155_;
}
v_reusejp_4155_:
{
return v___x_4156_;
}
}
}
}
}
else
{
lean_object* v_a_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4171_; 
v_a_4162_ = lean_ctor_get(v_r_4144_, 0);
lean_inc(v_a_4162_);
lean_dec_ref_known(v_r_4144_, 1);
v___x_4163_ = lean_box(0);
v___x_4164_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(v___y_4106_, v_isExporting_4113_, v___x_4128_, v___y_4104_, v___x_4140_, v___x_4163_);
v_isSharedCheck_4171_ = !lean_is_exclusive(v___x_4164_);
if (v_isSharedCheck_4171_ == 0)
{
lean_object* v_unused_4172_; 
v_unused_4172_ = lean_ctor_get(v___x_4164_, 0);
lean_dec(v_unused_4172_);
v___x_4166_ = v___x_4164_;
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
else
{
lean_dec(v___x_4164_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
lean_object* v___x_4169_; 
if (v_isShared_4167_ == 0)
{
lean_ctor_set_tag(v___x_4166_, 1);
lean_ctor_set(v___x_4166_, 0, v_a_4162_);
v___x_4169_ = v___x_4166_;
goto v_reusejp_4168_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v_a_4162_);
v___x_4169_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4168_;
}
v_reusejp_4168_:
{
return v___x_4169_;
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
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___boxed(lean_object* v_x_4181_, lean_object* v_isExporting_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_){
_start:
{
uint8_t v_isExporting_boxed_4188_; lean_object* v_res_4189_; 
v_isExporting_boxed_4188_ = lean_unbox(v_isExporting_4182_);
v_res_4189_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(v_x_4181_, v_isExporting_boxed_4188_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
lean_dec(v___y_4186_);
lean_dec_ref(v___y_4185_);
lean_dec(v___y_4184_);
lean_dec_ref(v___y_4183_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2(lean_object* v_00_u03b1_4190_, lean_object* v_x_4191_, uint8_t v_isExporting_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_){
_start:
{
lean_object* v___x_4198_; 
v___x_4198_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(v_x_4191_, v_isExporting_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_);
return v___x_4198_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___boxed(lean_object* v_00_u03b1_4199_, lean_object* v_x_4200_, lean_object* v_isExporting_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_){
_start:
{
uint8_t v_isExporting_boxed_4207_; lean_object* v_res_4208_; 
v_isExporting_boxed_4207_ = lean_unbox(v_isExporting_4201_);
v_res_4208_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2(v_00_u03b1_4199_, v_x_4200_, v_isExporting_boxed_4207_, v___y_4202_, v___y_4203_, v___y_4204_, v___y_4205_);
lean_dec(v___y_4205_);
lean_dec_ref(v___y_4204_);
lean_dec(v___y_4203_);
lean_dec_ref(v___y_4202_);
return v_res_4208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(lean_object* v_lctx_4209_, lean_object* v_localInsts_4210_, lean_object* v_x_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_){
_start:
{
lean_object* v___x_4217_; 
v___x_4217_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_4209_, v_localInsts_4210_, v_x_4211_, v___y_4212_, v___y_4213_, v___y_4214_, v___y_4215_);
if (lean_obj_tag(v___x_4217_) == 0)
{
lean_object* v_a_4218_; lean_object* v___x_4220_; uint8_t v_isShared_4221_; uint8_t v_isSharedCheck_4225_; 
v_a_4218_ = lean_ctor_get(v___x_4217_, 0);
v_isSharedCheck_4225_ = !lean_is_exclusive(v___x_4217_);
if (v_isSharedCheck_4225_ == 0)
{
v___x_4220_ = v___x_4217_;
v_isShared_4221_ = v_isSharedCheck_4225_;
goto v_resetjp_4219_;
}
else
{
lean_inc(v_a_4218_);
lean_dec(v___x_4217_);
v___x_4220_ = lean_box(0);
v_isShared_4221_ = v_isSharedCheck_4225_;
goto v_resetjp_4219_;
}
v_resetjp_4219_:
{
lean_object* v___x_4223_; 
if (v_isShared_4221_ == 0)
{
v___x_4223_ = v___x_4220_;
goto v_reusejp_4222_;
}
else
{
lean_object* v_reuseFailAlloc_4224_; 
v_reuseFailAlloc_4224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4224_, 0, v_a_4218_);
v___x_4223_ = v_reuseFailAlloc_4224_;
goto v_reusejp_4222_;
}
v_reusejp_4222_:
{
return v___x_4223_;
}
}
}
else
{
lean_object* v_a_4226_; lean_object* v___x_4228_; uint8_t v_isShared_4229_; uint8_t v_isSharedCheck_4233_; 
v_a_4226_ = lean_ctor_get(v___x_4217_, 0);
v_isSharedCheck_4233_ = !lean_is_exclusive(v___x_4217_);
if (v_isSharedCheck_4233_ == 0)
{
v___x_4228_ = v___x_4217_;
v_isShared_4229_ = v_isSharedCheck_4233_;
goto v_resetjp_4227_;
}
else
{
lean_inc(v_a_4226_);
lean_dec(v___x_4217_);
v___x_4228_ = lean_box(0);
v_isShared_4229_ = v_isSharedCheck_4233_;
goto v_resetjp_4227_;
}
v_resetjp_4227_:
{
lean_object* v___x_4231_; 
if (v_isShared_4229_ == 0)
{
v___x_4231_ = v___x_4228_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v_a_4226_);
v___x_4231_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
return v___x_4231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg___boxed(lean_object* v_lctx_4234_, lean_object* v_localInsts_4235_, lean_object* v_x_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_){
_start:
{
lean_object* v_res_4242_; 
v_res_4242_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v_lctx_4234_, v_localInsts_4235_, v_x_4236_, v___y_4237_, v___y_4238_, v___y_4239_, v___y_4240_);
lean_dec(v___y_4240_);
lean_dec_ref(v___y_4239_);
lean_dec(v___y_4238_);
lean_dec_ref(v___y_4237_);
return v_res_4242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4(lean_object* v_00_u03b1_4243_, lean_object* v_lctx_4244_, lean_object* v_localInsts_4245_, lean_object* v_x_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_){
_start:
{
lean_object* v___x_4252_; 
v___x_4252_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v_lctx_4244_, v_localInsts_4245_, v_x_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_);
return v___x_4252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___boxed(lean_object* v_00_u03b1_4253_, lean_object* v_lctx_4254_, lean_object* v_localInsts_4255_, lean_object* v_x_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_){
_start:
{
lean_object* v_res_4262_; 
v_res_4262_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4(v_00_u03b1_4253_, v_lctx_4254_, v_localInsts_4255_, v_x_4256_, v___y_4257_, v___y_4258_, v___y_4259_, v___y_4260_);
lean_dec(v___y_4260_);
lean_dec_ref(v___y_4259_);
lean_dec(v___y_4258_);
lean_dec_ref(v___y_4257_);
return v_res_4262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0(lean_object* v_declName_4263_, lean_object* v_x_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_){
_start:
{
lean_object* v___x_4270_; lean_object* v___x_4271_; 
v___x_4270_ = l_Lean_MessageData_ofName(v_declName_4263_);
v___x_4271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4271_, 0, v___x_4270_);
return v___x_4271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0___boxed(lean_object* v_declName_4272_, lean_object* v_x_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_){
_start:
{
lean_object* v_res_4279_; 
v_res_4279_ = l_Lean_Meta_mkInjectiveTheorems___lam__0(v_declName_4272_, v_x_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_);
lean_dec(v___y_4277_);
lean_dec_ref(v___y_4276_);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec_ref(v_x_4273_);
return v_res_4279_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_4280_; 
v___x_4280_ = l_instMonadEIO___redArg();
return v___x_4280_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(lean_object* v_msg_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_){
_start:
{
lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v_toApplicative_4293_; lean_object* v___x_4295_; uint8_t v_isShared_4296_; uint8_t v_isSharedCheck_4354_; 
v___x_4291_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0);
v___x_4292_ = l_StateRefT_x27_instMonad___redArg(v___x_4291_);
v_toApplicative_4293_ = lean_ctor_get(v___x_4292_, 0);
v_isSharedCheck_4354_ = !lean_is_exclusive(v___x_4292_);
if (v_isSharedCheck_4354_ == 0)
{
lean_object* v_unused_4355_; 
v_unused_4355_ = lean_ctor_get(v___x_4292_, 1);
lean_dec(v_unused_4355_);
v___x_4295_ = v___x_4292_;
v_isShared_4296_ = v_isSharedCheck_4354_;
goto v_resetjp_4294_;
}
else
{
lean_inc(v_toApplicative_4293_);
lean_dec(v___x_4292_);
v___x_4295_ = lean_box(0);
v_isShared_4296_ = v_isSharedCheck_4354_;
goto v_resetjp_4294_;
}
v_resetjp_4294_:
{
lean_object* v_toFunctor_4297_; lean_object* v_toSeq_4298_; lean_object* v_toSeqLeft_4299_; lean_object* v_toSeqRight_4300_; lean_object* v___x_4302_; uint8_t v_isShared_4303_; uint8_t v_isSharedCheck_4352_; 
v_toFunctor_4297_ = lean_ctor_get(v_toApplicative_4293_, 0);
v_toSeq_4298_ = lean_ctor_get(v_toApplicative_4293_, 2);
v_toSeqLeft_4299_ = lean_ctor_get(v_toApplicative_4293_, 3);
v_toSeqRight_4300_ = lean_ctor_get(v_toApplicative_4293_, 4);
v_isSharedCheck_4352_ = !lean_is_exclusive(v_toApplicative_4293_);
if (v_isSharedCheck_4352_ == 0)
{
lean_object* v_unused_4353_; 
v_unused_4353_ = lean_ctor_get(v_toApplicative_4293_, 1);
lean_dec(v_unused_4353_);
v___x_4302_ = v_toApplicative_4293_;
v_isShared_4303_ = v_isSharedCheck_4352_;
goto v_resetjp_4301_;
}
else
{
lean_inc(v_toSeqRight_4300_);
lean_inc(v_toSeqLeft_4299_);
lean_inc(v_toSeq_4298_);
lean_inc(v_toFunctor_4297_);
lean_dec(v_toApplicative_4293_);
v___x_4302_ = lean_box(0);
v_isShared_4303_ = v_isSharedCheck_4352_;
goto v_resetjp_4301_;
}
v_resetjp_4301_:
{
lean_object* v___f_4304_; lean_object* v___f_4305_; lean_object* v___f_4306_; lean_object* v___f_4307_; lean_object* v___x_4308_; lean_object* v___f_4309_; lean_object* v___f_4310_; lean_object* v___f_4311_; lean_object* v___x_4313_; 
v___f_4304_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1));
v___f_4305_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2));
lean_inc_ref(v_toFunctor_4297_);
v___f_4306_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4306_, 0, v_toFunctor_4297_);
v___f_4307_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4307_, 0, v_toFunctor_4297_);
v___x_4308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4308_, 0, v___f_4306_);
lean_ctor_set(v___x_4308_, 1, v___f_4307_);
v___f_4309_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4309_, 0, v_toSeqRight_4300_);
v___f_4310_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4310_, 0, v_toSeqLeft_4299_);
v___f_4311_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4311_, 0, v_toSeq_4298_);
if (v_isShared_4303_ == 0)
{
lean_ctor_set(v___x_4302_, 4, v___f_4309_);
lean_ctor_set(v___x_4302_, 3, v___f_4310_);
lean_ctor_set(v___x_4302_, 2, v___f_4311_);
lean_ctor_set(v___x_4302_, 1, v___f_4304_);
lean_ctor_set(v___x_4302_, 0, v___x_4308_);
v___x_4313_ = v___x_4302_;
goto v_reusejp_4312_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v___x_4308_);
lean_ctor_set(v_reuseFailAlloc_4351_, 1, v___f_4304_);
lean_ctor_set(v_reuseFailAlloc_4351_, 2, v___f_4311_);
lean_ctor_set(v_reuseFailAlloc_4351_, 3, v___f_4310_);
lean_ctor_set(v_reuseFailAlloc_4351_, 4, v___f_4309_);
v___x_4313_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4312_;
}
v_reusejp_4312_:
{
lean_object* v___x_4315_; 
if (v_isShared_4296_ == 0)
{
lean_ctor_set(v___x_4295_, 1, v___f_4305_);
lean_ctor_set(v___x_4295_, 0, v___x_4313_);
v___x_4315_ = v___x_4295_;
goto v_reusejp_4314_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v___x_4313_);
lean_ctor_set(v_reuseFailAlloc_4350_, 1, v___f_4305_);
v___x_4315_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4314_;
}
v_reusejp_4314_:
{
lean_object* v___x_4316_; lean_object* v_toApplicative_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4348_; 
v___x_4316_ = l_StateRefT_x27_instMonad___redArg(v___x_4315_);
v_toApplicative_4317_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4348_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4348_ == 0)
{
lean_object* v_unused_4349_; 
v_unused_4349_ = lean_ctor_get(v___x_4316_, 1);
lean_dec(v_unused_4349_);
v___x_4319_ = v___x_4316_;
v_isShared_4320_ = v_isSharedCheck_4348_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_toApplicative_4317_);
lean_dec(v___x_4316_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4348_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v_toFunctor_4321_; lean_object* v_toSeq_4322_; lean_object* v_toSeqLeft_4323_; lean_object* v_toSeqRight_4324_; lean_object* v___x_4326_; uint8_t v_isShared_4327_; uint8_t v_isSharedCheck_4346_; 
v_toFunctor_4321_ = lean_ctor_get(v_toApplicative_4317_, 0);
v_toSeq_4322_ = lean_ctor_get(v_toApplicative_4317_, 2);
v_toSeqLeft_4323_ = lean_ctor_get(v_toApplicative_4317_, 3);
v_toSeqRight_4324_ = lean_ctor_get(v_toApplicative_4317_, 4);
v_isSharedCheck_4346_ = !lean_is_exclusive(v_toApplicative_4317_);
if (v_isSharedCheck_4346_ == 0)
{
lean_object* v_unused_4347_; 
v_unused_4347_ = lean_ctor_get(v_toApplicative_4317_, 1);
lean_dec(v_unused_4347_);
v___x_4326_ = v_toApplicative_4317_;
v_isShared_4327_ = v_isSharedCheck_4346_;
goto v_resetjp_4325_;
}
else
{
lean_inc(v_toSeqRight_4324_);
lean_inc(v_toSeqLeft_4323_);
lean_inc(v_toSeq_4322_);
lean_inc(v_toFunctor_4321_);
lean_dec(v_toApplicative_4317_);
v___x_4326_ = lean_box(0);
v_isShared_4327_ = v_isSharedCheck_4346_;
goto v_resetjp_4325_;
}
v_resetjp_4325_:
{
lean_object* v___f_4328_; lean_object* v___f_4329_; lean_object* v___f_4330_; lean_object* v___f_4331_; lean_object* v___x_4332_; lean_object* v___f_4333_; lean_object* v___f_4334_; lean_object* v___f_4335_; lean_object* v___x_4337_; 
v___f_4328_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3));
v___f_4329_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4));
lean_inc_ref(v_toFunctor_4321_);
v___f_4330_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4330_, 0, v_toFunctor_4321_);
v___f_4331_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4331_, 0, v_toFunctor_4321_);
v___x_4332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4332_, 0, v___f_4330_);
lean_ctor_set(v___x_4332_, 1, v___f_4331_);
v___f_4333_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4333_, 0, v_toSeqRight_4324_);
v___f_4334_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4334_, 0, v_toSeqLeft_4323_);
v___f_4335_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4335_, 0, v_toSeq_4322_);
if (v_isShared_4327_ == 0)
{
lean_ctor_set(v___x_4326_, 4, v___f_4333_);
lean_ctor_set(v___x_4326_, 3, v___f_4334_);
lean_ctor_set(v___x_4326_, 2, v___f_4335_);
lean_ctor_set(v___x_4326_, 1, v___f_4328_);
lean_ctor_set(v___x_4326_, 0, v___x_4332_);
v___x_4337_ = v___x_4326_;
goto v_reusejp_4336_;
}
else
{
lean_object* v_reuseFailAlloc_4345_; 
v_reuseFailAlloc_4345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4345_, 0, v___x_4332_);
lean_ctor_set(v_reuseFailAlloc_4345_, 1, v___f_4328_);
lean_ctor_set(v_reuseFailAlloc_4345_, 2, v___f_4335_);
lean_ctor_set(v_reuseFailAlloc_4345_, 3, v___f_4334_);
lean_ctor_set(v_reuseFailAlloc_4345_, 4, v___f_4333_);
v___x_4337_ = v_reuseFailAlloc_4345_;
goto v_reusejp_4336_;
}
v_reusejp_4336_:
{
lean_object* v___x_4339_; 
if (v_isShared_4320_ == 0)
{
lean_ctor_set(v___x_4319_, 1, v___f_4329_);
lean_ctor_set(v___x_4319_, 0, v___x_4337_);
v___x_4339_ = v___x_4319_;
goto v_reusejp_4338_;
}
else
{
lean_object* v_reuseFailAlloc_4344_; 
v_reuseFailAlloc_4344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4344_, 0, v___x_4337_);
lean_ctor_set(v_reuseFailAlloc_4344_, 1, v___f_4329_);
v___x_4339_ = v_reuseFailAlloc_4344_;
goto v_reusejp_4338_;
}
v_reusejp_4338_:
{
lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_15665__overap_4342_; lean_object* v___x_4343_; 
v___x_4340_ = lean_box(0);
v___x_4341_ = l_instInhabitedOfMonad___redArg(v___x_4339_, v___x_4340_);
v___x_15665__overap_4342_ = lean_panic_fn_borrowed(v___x_4341_, v_msg_4285_);
lean_dec(v___x_4341_);
lean_inc(v___y_4289_);
lean_inc_ref(v___y_4288_);
lean_inc(v___y_4287_);
lean_inc_ref(v___y_4286_);
v___x_4343_ = lean_apply_5(v___x_15665__overap_4342_, v___y_4286_, v___y_4287_, v___y_4288_, v___y_4289_, lean_box(0));
return v___x_4343_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___boxed(lean_object* v_msg_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_){
_start:
{
lean_object* v_res_4362_; 
v_res_4362_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(v_msg_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_);
lean_dec(v___y_4360_);
lean_dec_ref(v___y_4359_);
lean_dec(v___y_4358_);
lean_dec_ref(v___y_4357_);
return v_res_4362_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1(void){
_start:
{
lean_object* v___x_4364_; lean_object* v___x_4365_; 
v___x_4364_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0));
v___x_4365_ = l_Lean_stringToMessageData(v___x_4364_);
return v___x_4365_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4(void){
_start:
{
lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; 
v___x_4368_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2));
v___x_4369_ = lean_unsigned_to_nat(11u);
v___x_4370_ = lean_unsigned_to_nat(122u);
v___x_4371_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3));
v___x_4372_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2));
v___x_4373_ = l_mkPanicMessageWithDecl(v___x_4372_, v___x_4371_, v___x_4370_, v___x_4369_, v___x_4368_);
return v___x_4373_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(lean_object* v_constName_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_){
_start:
{
lean_object* v___x_4388_; lean_object* v_env_4389_; uint8_t v___x_4390_; lean_object* v___x_4391_; 
v___x_4388_ = lean_st_ref_get(v___y_4378_);
v_env_4389_ = lean_ctor_get(v___x_4388_, 0);
lean_inc_ref(v_env_4389_);
lean_dec(v___x_4388_);
v___x_4390_ = 0;
lean_inc(v_constName_4374_);
v___x_4391_ = l_Lean_Environment_findAsync_x3f(v_env_4389_, v_constName_4374_, v___x_4390_);
if (lean_obj_tag(v___x_4391_) == 1)
{
lean_object* v_val_4392_; uint8_t v_kind_4393_; 
v_val_4392_ = lean_ctor_get(v___x_4391_, 0);
lean_inc(v_val_4392_);
lean_dec_ref_known(v___x_4391_, 1);
v_kind_4393_ = lean_ctor_get_uint8(v_val_4392_, sizeof(void*)*3);
if (v_kind_4393_ == 6)
{
lean_object* v___x_4394_; 
v___x_4394_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_4392_);
if (lean_obj_tag(v___x_4394_) == 6)
{
lean_object* v_val_4395_; lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4402_; 
lean_dec(v_constName_4374_);
v_val_4395_ = lean_ctor_get(v___x_4394_, 0);
v_isSharedCheck_4402_ = !lean_is_exclusive(v___x_4394_);
if (v_isSharedCheck_4402_ == 0)
{
v___x_4397_ = v___x_4394_;
v_isShared_4398_ = v_isSharedCheck_4402_;
goto v_resetjp_4396_;
}
else
{
lean_inc(v_val_4395_);
lean_dec(v___x_4394_);
v___x_4397_ = lean_box(0);
v_isShared_4398_ = v_isSharedCheck_4402_;
goto v_resetjp_4396_;
}
v_resetjp_4396_:
{
lean_object* v___x_4400_; 
if (v_isShared_4398_ == 0)
{
lean_ctor_set_tag(v___x_4397_, 0);
v___x_4400_ = v___x_4397_;
goto v_reusejp_4399_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v_val_4395_);
v___x_4400_ = v_reuseFailAlloc_4401_;
goto v_reusejp_4399_;
}
v_reusejp_4399_:
{
return v___x_4400_;
}
}
}
else
{
lean_object* v___x_4403_; lean_object* v___x_4404_; 
lean_dec_ref(v___x_4394_);
v___x_4403_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4);
v___x_4404_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(v___x_4403_, v___y_4375_, v___y_4376_, v___y_4377_, v___y_4378_);
if (lean_obj_tag(v___x_4404_) == 0)
{
lean_object* v_a_4405_; lean_object* v___x_4407_; uint8_t v_isShared_4408_; uint8_t v_isSharedCheck_4413_; 
v_a_4405_ = lean_ctor_get(v___x_4404_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4404_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4407_ = v___x_4404_;
v_isShared_4408_ = v_isSharedCheck_4413_;
goto v_resetjp_4406_;
}
else
{
lean_inc(v_a_4405_);
lean_dec(v___x_4404_);
v___x_4407_ = lean_box(0);
v_isShared_4408_ = v_isSharedCheck_4413_;
goto v_resetjp_4406_;
}
v_resetjp_4406_:
{
if (lean_obj_tag(v_a_4405_) == 0)
{
lean_del_object(v___x_4407_);
goto v___jp_4380_;
}
else
{
lean_object* v_val_4409_; lean_object* v___x_4411_; 
lean_dec(v_constName_4374_);
v_val_4409_ = lean_ctor_get(v_a_4405_, 0);
lean_inc(v_val_4409_);
lean_dec_ref_known(v_a_4405_, 1);
if (v_isShared_4408_ == 0)
{
lean_ctor_set(v___x_4407_, 0, v_val_4409_);
v___x_4411_ = v___x_4407_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_val_4409_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
return v___x_4411_;
}
}
}
}
else
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4421_; 
lean_dec(v_constName_4374_);
v_a_4414_ = lean_ctor_get(v___x_4404_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4404_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4416_ = v___x_4404_;
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v___x_4404_);
v___x_4416_ = lean_box(0);
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
v_resetjp_4415_:
{
lean_object* v___x_4419_; 
if (v_isShared_4417_ == 0)
{
v___x_4419_ = v___x_4416_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v_a_4414_);
v___x_4419_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
return v___x_4419_;
}
}
}
}
}
else
{
lean_dec(v_val_4392_);
goto v___jp_4380_;
}
}
else
{
lean_dec(v___x_4391_);
goto v___jp_4380_;
}
v___jp_4380_:
{
lean_object* v___x_4381_; uint8_t v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; 
v___x_4381_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_4382_ = 0;
v___x_4383_ = l_Lean_MessageData_ofConstName(v_constName_4374_, v___x_4382_);
v___x_4384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4384_, 0, v___x_4381_);
lean_ctor_set(v___x_4384_, 1, v___x_4383_);
v___x_4385_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1);
v___x_4386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4386_, 0, v___x_4384_);
lean_ctor_set(v___x_4386_, 1, v___x_4385_);
v___x_4387_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_4386_, v___y_4375_, v___y_4376_, v___y_4377_, v___y_4378_);
return v___x_4387_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___boxed(lean_object* v_constName_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_){
_start:
{
lean_object* v_res_4428_; 
v_res_4428_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(v_constName_4422_, v___y_4423_, v___y_4424_, v___y_4425_, v___y_4426_);
lean_dec(v___y_4426_);
lean_dec_ref(v___y_4425_);
lean_dec(v___y_4424_);
lean_dec_ref(v___y_4423_);
return v_res_4428_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0(lean_object* v_head_4429_, lean_object* v___x_4430_, lean_object* v___x_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_){
_start:
{
lean_object* v___x_4437_; 
v___x_4437_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(v_head_4429_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
if (lean_obj_tag(v___x_4437_) == 0)
{
lean_object* v_a_4438_; lean_object* v___x_4440_; uint8_t v_isShared_4441_; uint8_t v_isSharedCheck_4449_; 
v_a_4438_ = lean_ctor_get(v___x_4437_, 0);
v_isSharedCheck_4449_ = !lean_is_exclusive(v___x_4437_);
if (v_isSharedCheck_4449_ == 0)
{
v___x_4440_ = v___x_4437_;
v_isShared_4441_ = v_isSharedCheck_4449_;
goto v_resetjp_4439_;
}
else
{
lean_inc(v_a_4438_);
lean_dec(v___x_4437_);
v___x_4440_ = lean_box(0);
v_isShared_4441_ = v_isSharedCheck_4449_;
goto v_resetjp_4439_;
}
v_resetjp_4439_:
{
lean_object* v_numFields_4442_; uint8_t v___x_4443_; 
v_numFields_4442_ = lean_ctor_get(v_a_4438_, 4);
v___x_4443_ = lean_nat_dec_lt(v___x_4430_, v_numFields_4442_);
if (v___x_4443_ == 0)
{
lean_object* v___x_4445_; 
lean_dec(v_a_4438_);
if (v_isShared_4441_ == 0)
{
lean_ctor_set(v___x_4440_, 0, v___x_4431_);
v___x_4445_ = v___x_4440_;
goto v_reusejp_4444_;
}
else
{
lean_object* v_reuseFailAlloc_4446_; 
v_reuseFailAlloc_4446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4446_, 0, v___x_4431_);
v___x_4445_ = v_reuseFailAlloc_4446_;
goto v_reusejp_4444_;
}
v_reusejp_4444_:
{
return v___x_4445_;
}
}
else
{
lean_object* v___x_4447_; 
lean_del_object(v___x_4440_);
lean_inc(v_a_4438_);
v___x_4447_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(v_a_4438_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
if (lean_obj_tag(v___x_4447_) == 0)
{
lean_object* v___x_4448_; 
lean_dec_ref_known(v___x_4447_, 1);
v___x_4448_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(v_a_4438_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
return v___x_4448_;
}
else
{
lean_dec(v_a_4438_);
return v___x_4447_;
}
}
}
}
else
{
lean_object* v_a_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4457_; 
v_a_4450_ = lean_ctor_get(v___x_4437_, 0);
v_isSharedCheck_4457_ = !lean_is_exclusive(v___x_4437_);
if (v_isSharedCheck_4457_ == 0)
{
v___x_4452_ = v___x_4437_;
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_a_4450_);
lean_dec(v___x_4437_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
lean_object* v___x_4455_; 
if (v_isShared_4453_ == 0)
{
v___x_4455_ = v___x_4452_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4456_; 
v_reuseFailAlloc_4456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4456_, 0, v_a_4450_);
v___x_4455_ = v_reuseFailAlloc_4456_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
return v___x_4455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0___boxed(lean_object* v_head_4458_, lean_object* v___x_4459_, lean_object* v___x_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_){
_start:
{
lean_object* v_res_4466_; 
v_res_4466_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0(v_head_4458_, v___x_4459_, v___x_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_);
lean_dec(v___y_4464_);
lean_dec_ref(v___y_4463_);
lean_dec(v___y_4462_);
lean_dec_ref(v___y_4461_);
lean_dec(v___x_4459_);
return v_res_4466_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(uint8_t v___y_4467_, uint8_t v___x_4468_, lean_object* v_as_x27_4469_, lean_object* v_b_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_){
_start:
{
if (lean_obj_tag(v_as_x27_4469_) == 0)
{
lean_object* v___x_4476_; 
v___x_4476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4476_, 0, v_b_4470_);
return v___x_4476_;
}
else
{
lean_object* v_head_4477_; lean_object* v_tail_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___f_4481_; uint8_t v___y_4483_; uint8_t v___x_4486_; 
v_head_4477_ = lean_ctor_get(v_as_x27_4469_, 0);
v_tail_4478_ = lean_ctor_get(v_as_x27_4469_, 1);
v___x_4479_ = lean_unsigned_to_nat(0u);
v___x_4480_ = lean_box(0);
lean_inc(v_head_4477_);
v___f_4481_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4481_, 0, v_head_4477_);
lean_closure_set(v___f_4481_, 1, v___x_4479_);
lean_closure_set(v___f_4481_, 2, v___x_4480_);
v___x_4486_ = l_Lean_isPrivateName(v_head_4477_);
if (v___x_4486_ == 0)
{
v___y_4483_ = v___y_4467_;
goto v___jp_4482_;
}
else
{
v___y_4483_ = v___x_4468_;
goto v___jp_4482_;
}
v___jp_4482_:
{
lean_object* v___x_4484_; 
v___x_4484_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(v___f_4481_, v___y_4483_, v___y_4471_, v___y_4472_, v___y_4473_, v___y_4474_);
if (lean_obj_tag(v___x_4484_) == 0)
{
lean_dec_ref_known(v___x_4484_, 1);
v_as_x27_4469_ = v_tail_4478_;
v_b_4470_ = v___x_4480_;
goto _start;
}
else
{
return v___x_4484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___boxed(lean_object* v___y_4487_, lean_object* v___x_4488_, lean_object* v_as_x27_4489_, lean_object* v_b_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_){
_start:
{
uint8_t v___y_16778__boxed_4496_; uint8_t v___x_16779__boxed_4497_; lean_object* v_res_4498_; 
v___y_16778__boxed_4496_ = lean_unbox(v___y_4487_);
v___x_16779__boxed_4497_ = lean_unbox(v___x_4488_);
v_res_4498_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v___y_16778__boxed_4496_, v___x_16779__boxed_4497_, v_as_x27_4489_, v_b_4490_, v___y_4491_, v___y_4492_, v___y_4493_, v___y_4494_);
lean_dec(v___y_4494_);
lean_dec_ref(v___y_4493_);
lean_dec(v___y_4492_);
lean_dec_ref(v___y_4491_);
lean_dec(v_as_x27_4489_);
return v_res_4498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1(uint8_t v___y_4499_, uint8_t v_isUnsafe_4500_, lean_object* v_ctors_4501_, lean_object* v___x_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_){
_start:
{
lean_object* v___x_4508_; 
v___x_4508_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v___y_4499_, v_isUnsafe_4500_, v_ctors_4501_, v___x_4502_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
if (lean_obj_tag(v___x_4508_) == 0)
{
lean_object* v___x_4510_; uint8_t v_isShared_4511_; uint8_t v_isSharedCheck_4515_; 
v_isSharedCheck_4515_ = !lean_is_exclusive(v___x_4508_);
if (v_isSharedCheck_4515_ == 0)
{
lean_object* v_unused_4516_; 
v_unused_4516_ = lean_ctor_get(v___x_4508_, 0);
lean_dec(v_unused_4516_);
v___x_4510_ = v___x_4508_;
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
else
{
lean_dec(v___x_4508_);
v___x_4510_ = lean_box(0);
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
v_resetjp_4509_:
{
lean_object* v___x_4513_; 
if (v_isShared_4511_ == 0)
{
lean_ctor_set(v___x_4510_, 0, v___x_4502_);
v___x_4513_ = v___x_4510_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4514_; 
v_reuseFailAlloc_4514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4514_, 0, v___x_4502_);
v___x_4513_ = v_reuseFailAlloc_4514_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
return v___x_4513_;
}
}
}
else
{
return v___x_4508_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed(lean_object* v___y_4517_, lean_object* v_isUnsafe_4518_, lean_object* v_ctors_4519_, lean_object* v___x_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_){
_start:
{
uint8_t v___y_16823__boxed_4526_; uint8_t v_isUnsafe_boxed_4527_; lean_object* v_res_4528_; 
v___y_16823__boxed_4526_ = lean_unbox(v___y_4517_);
v_isUnsafe_boxed_4527_ = lean_unbox(v_isUnsafe_4518_);
v_res_4528_ = l_Lean_Meta_mkInjectiveTheorems___lam__1(v___y_16823__boxed_4526_, v_isUnsafe_boxed_4527_, v_ctors_4519_, v___x_4520_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_);
lean_dec(v___y_4524_);
lean_dec_ref(v___y_4523_);
lean_dec(v___y_4522_);
lean_dec_ref(v___y_4521_);
lean_dec(v_ctors_4519_);
return v_res_4528_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4530_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0));
v___x_4531_ = l_Lean_stringToMessageData(v___x_4530_);
return v___x_4531_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(lean_object* v_constName_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_){
_start:
{
lean_object* v___x_4538_; lean_object* v_env_4539_; lean_object* v___x_4540_; 
v___x_4538_ = lean_st_ref_get(v___y_4536_);
v_env_4539_ = lean_ctor_get(v___x_4538_, 0);
lean_inc_ref(v_env_4539_);
lean_dec(v___x_4538_);
lean_inc(v_constName_4532_);
v___x_4540_ = l_Lean_isInductiveCore_x3f(v_env_4539_, v_constName_4532_);
if (lean_obj_tag(v___x_4540_) == 0)
{
lean_object* v___x_4541_; uint8_t v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; 
v___x_4541_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_4542_ = 0;
v___x_4543_ = l_Lean_MessageData_ofConstName(v_constName_4532_, v___x_4542_);
v___x_4544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4544_, 0, v___x_4541_);
lean_ctor_set(v___x_4544_, 1, v___x_4543_);
v___x_4545_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1);
v___x_4546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4546_, 0, v___x_4544_);
lean_ctor_set(v___x_4546_, 1, v___x_4545_);
v___x_4547_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_4546_, v___y_4533_, v___y_4534_, v___y_4535_, v___y_4536_);
return v___x_4547_;
}
else
{
lean_object* v_val_4548_; lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4555_; 
lean_dec(v_constName_4532_);
v_val_4548_ = lean_ctor_get(v___x_4540_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v___x_4540_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4550_ = v___x_4540_;
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
else
{
lean_inc(v_val_4548_);
lean_dec(v___x_4540_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v___x_4553_; 
if (v_isShared_4551_ == 0)
{
lean_ctor_set_tag(v___x_4550_, 0);
v___x_4553_ = v___x_4550_;
goto v_reusejp_4552_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v_val_4548_);
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
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___boxed(lean_object* v_constName_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_){
_start:
{
lean_object* v_res_4562_; 
v_res_4562_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_constName_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_);
lean_dec(v___y_4560_);
lean_dec_ref(v___y_4559_);
lean_dec(v___y_4558_);
lean_dec_ref(v___y_4557_);
return v_res_4562_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__0(void){
_start:
{
lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4563_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0);
v___x_4564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4564_, 0, v___x_4563_);
return v___x_4564_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__1(void){
_start:
{
lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; 
v___x_4565_ = lean_unsigned_to_nat(32u);
v___x_4566_ = lean_mk_empty_array_with_capacity(v___x_4565_);
v___x_4567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4567_, 0, v___x_4566_);
return v___x_4567_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__2(void){
_start:
{
size_t v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; 
v___x_4568_ = ((size_t)5ULL);
v___x_4569_ = lean_unsigned_to_nat(0u);
v___x_4570_ = lean_unsigned_to_nat(32u);
v___x_4571_ = lean_mk_empty_array_with_capacity(v___x_4570_);
v___x_4572_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__1, &l_Lean_Meta_mkInjectiveTheorems___closed__1_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__1);
v___x_4573_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4573_, 0, v___x_4572_);
lean_ctor_set(v___x_4573_, 1, v___x_4571_);
lean_ctor_set(v___x_4573_, 2, v___x_4569_);
lean_ctor_set(v___x_4573_, 3, v___x_4569_);
lean_ctor_set_usize(v___x_4573_, 4, v___x_4568_);
return v___x_4573_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__3(void){
_start:
{
lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; 
v___x_4574_ = lean_box(1);
v___x_4575_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__2, &l_Lean_Meta_mkInjectiveTheorems___closed__2_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__2);
v___x_4576_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__0, &l_Lean_Meta_mkInjectiveTheorems___closed__0_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__0);
v___x_4577_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4577_, 0, v___x_4576_);
lean_ctor_set(v___x_4577_, 1, v___x_4575_);
lean_ctor_set(v___x_4577_, 2, v___x_4574_);
return v___x_4577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems(lean_object* v_declName_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_){
_start:
{
lean_object* v___f_4586_; lean_object* v___x_4587_; lean_object* v_toCold_4588_; lean_object* v_env_4589_; lean_object* v_options_4590_; lean_object* v_inheritedTraceOptions_4591_; lean_object* v___x_4592_; 
lean_inc_n(v_declName_4580_, 2);
v___f_4586_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4586_, 0, v_declName_4580_);
v___x_4587_ = lean_st_ref_get(v_a_4584_);
v_toCold_4588_ = lean_ctor_get(v_a_4583_, 0);
v_env_4589_ = lean_ctor_get(v___x_4587_, 0);
lean_inc_ref(v_env_4589_);
lean_dec(v___x_4587_);
v_options_4590_ = lean_ctor_get(v_toCold_4588_, 2);
v_inheritedTraceOptions_4591_ = lean_ctor_get(v_toCold_4588_, 11);
v___x_4592_ = l_Lean_Meta_isInductivePredicate(v_declName_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
if (lean_obj_tag(v___x_4592_) == 0)
{
lean_object* v_a_4593_; lean_object* v___x_4595_; uint8_t v_isShared_4596_; uint8_t v_isSharedCheck_4777_; 
v_a_4593_ = lean_ctor_get(v___x_4592_, 0);
v_isSharedCheck_4777_ = !lean_is_exclusive(v___x_4592_);
if (v_isSharedCheck_4777_ == 0)
{
v___x_4595_ = v___x_4592_;
v_isShared_4596_ = v_isSharedCheck_4777_;
goto v_resetjp_4594_;
}
else
{
lean_inc(v_a_4593_);
lean_dec(v___x_4592_);
v___x_4595_ = lean_box(0);
v_isShared_4596_ = v_isSharedCheck_4777_;
goto v_resetjp_4594_;
}
v_resetjp_4594_:
{
lean_object* v___x_4602_; uint8_t v___x_4603_; lean_object* v___y_4605_; uint8_t v___y_4606_; lean_object* v___y_4607_; lean_object* v___y_4608_; lean_object* v___y_4609_; lean_object* v_a_4610_; lean_object* v___y_4620_; lean_object* v___y_4621_; uint8_t v___y_4622_; lean_object* v___y_4623_; lean_object* v___y_4624_; lean_object* v_a_4625_; lean_object* v___y_4628_; lean_object* v___y_4629_; uint8_t v___y_4630_; lean_object* v___y_4631_; lean_object* v___y_4632_; lean_object* v_a_4633_; lean_object* v___y_4636_; lean_object* v___y_4637_; uint8_t v___y_4638_; lean_object* v___y_4639_; lean_object* v___y_4640_; lean_object* v_a_4641_; lean_object* v___y_4654_; lean_object* v___y_4655_; lean_object* v___y_4656_; uint8_t v___y_4657_; lean_object* v___y_4658_; lean_object* v_a_4659_; lean_object* v___y_4662_; lean_object* v___y_4663_; lean_object* v___y_4664_; uint8_t v___y_4665_; lean_object* v___y_4666_; lean_object* v_a_4667_; uint8_t v___y_4670_; lean_object* v___y_4671_; lean_object* v___y_4672_; uint8_t v___y_4673_; uint8_t v___y_4711_; uint8_t v___x_4774_; 
v___x_4602_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4));
v___x_4603_ = 1;
v___x_4774_ = l_Lean_Environment_contains(v_env_4589_, v___x_4602_, v___x_4603_);
if (v___x_4774_ == 0)
{
v___y_4711_ = v___x_4774_;
goto v___jp_4710_;
}
else
{
lean_object* v___x_4775_; uint8_t v___x_4776_; 
v___x_4775_ = l_Lean_Meta_genInjectivity;
v___x_4776_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_4590_, v___x_4775_);
v___y_4711_ = v___x_4776_;
goto v___jp_4710_;
}
v___jp_4597_:
{
lean_object* v___x_4598_; lean_object* v___x_4600_; 
v___x_4598_ = lean_box(0);
if (v_isShared_4596_ == 0)
{
lean_ctor_set(v___x_4595_, 0, v___x_4598_);
v___x_4600_ = v___x_4595_;
goto v_reusejp_4599_;
}
else
{
lean_object* v_reuseFailAlloc_4601_; 
v_reuseFailAlloc_4601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4601_, 0, v___x_4598_);
v___x_4600_ = v_reuseFailAlloc_4601_;
goto v_reusejp_4599_;
}
v_reusejp_4599_:
{
return v___x_4600_;
}
}
v___jp_4604_:
{
lean_object* v___x_4611_; double v___x_4612_; double v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; 
v___x_4611_ = lean_io_get_num_heartbeats();
v___x_4612_ = lean_float_of_nat(v___y_4609_);
v___x_4613_ = lean_float_of_nat(v___x_4611_);
v___x_4614_ = lean_box_float(v___x_4612_);
v___x_4615_ = lean_box_float(v___x_4613_);
v___x_4616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4616_, 0, v___x_4614_);
lean_ctor_set(v___x_4616_, 1, v___x_4615_);
v___x_4617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4617_, 0, v_a_4610_);
lean_ctor_set(v___x_4617_, 1, v___x_4616_);
lean_inc_ref(v___y_4607_);
lean_inc(v___y_4605_);
v___x_4618_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v___y_4605_, v___x_4603_, v___y_4607_, v_options_4590_, v___y_4606_, v___y_4608_, v___f_4586_, v___x_4617_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
return v___x_4618_;
}
v___jp_4619_:
{
lean_object* v___x_4626_; 
v___x_4626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4626_, 0, v_a_4625_);
v___y_4605_ = v___y_4620_;
v___y_4606_ = v___y_4622_;
v___y_4607_ = v___y_4621_;
v___y_4608_ = v___y_4624_;
v___y_4609_ = v___y_4623_;
v_a_4610_ = v___x_4626_;
goto v___jp_4604_;
}
v___jp_4627_:
{
lean_object* v___x_4634_; 
v___x_4634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4634_, 0, v_a_4633_);
v___y_4605_ = v___y_4628_;
v___y_4606_ = v___y_4630_;
v___y_4607_ = v___y_4629_;
v___y_4608_ = v___y_4632_;
v___y_4609_ = v___y_4631_;
v_a_4610_ = v___x_4634_;
goto v___jp_4604_;
}
v___jp_4635_:
{
lean_object* v___x_4642_; double v___x_4643_; double v___x_4644_; double v___x_4645_; double v___x_4646_; double v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; 
v___x_4642_ = lean_io_mono_nanos_now();
v___x_4643_ = lean_float_of_nat(v___y_4637_);
v___x_4644_ = lean_float_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0);
v___x_4645_ = lean_float_div(v___x_4643_, v___x_4644_);
v___x_4646_ = lean_float_of_nat(v___x_4642_);
v___x_4647_ = lean_float_div(v___x_4646_, v___x_4644_);
v___x_4648_ = lean_box_float(v___x_4645_);
v___x_4649_ = lean_box_float(v___x_4647_);
v___x_4650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4650_, 0, v___x_4648_);
lean_ctor_set(v___x_4650_, 1, v___x_4649_);
v___x_4651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4651_, 0, v_a_4641_);
lean_ctor_set(v___x_4651_, 1, v___x_4650_);
lean_inc_ref(v___y_4639_);
lean_inc(v___y_4636_);
v___x_4652_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v___y_4636_, v___x_4603_, v___y_4639_, v_options_4590_, v___y_4638_, v___y_4640_, v___f_4586_, v___x_4651_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
return v___x_4652_;
}
v___jp_4653_:
{
lean_object* v___x_4660_; 
v___x_4660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4660_, 0, v_a_4659_);
v___y_4636_ = v___y_4654_;
v___y_4637_ = v___y_4655_;
v___y_4638_ = v___y_4657_;
v___y_4639_ = v___y_4656_;
v___y_4640_ = v___y_4658_;
v_a_4641_ = v___x_4660_;
goto v___jp_4635_;
}
v___jp_4661_:
{
lean_object* v___x_4668_; 
v___x_4668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4668_, 0, v_a_4667_);
v___y_4636_ = v___y_4662_;
v___y_4637_ = v___y_4663_;
v___y_4638_ = v___y_4665_;
v___y_4639_ = v___y_4664_;
v___y_4640_ = v___y_4666_;
v_a_4641_ = v___x_4668_;
goto v___jp_4635_;
}
v___jp_4669_:
{
lean_object* v___x_4674_; lean_object* v_a_4675_; lean_object* v___x_4676_; uint8_t v___x_4677_; 
v___x_4674_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_4584_);
v_a_4675_ = lean_ctor_get(v___x_4674_, 0);
lean_inc(v_a_4675_);
lean_dec_ref(v___x_4674_);
v___x_4676_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4677_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_4590_, v___x_4676_);
if (v___x_4677_ == 0)
{
lean_object* v___x_4678_; lean_object* v___x_4679_; 
v___x_4678_ = lean_io_mono_nanos_now();
v___x_4679_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
if (lean_obj_tag(v___x_4679_) == 0)
{
lean_object* v_a_4680_; uint8_t v_isUnsafe_4681_; 
v_a_4680_ = lean_ctor_get(v___x_4679_, 0);
lean_inc(v_a_4680_);
lean_dec_ref_known(v___x_4679_, 1);
v_isUnsafe_4681_ = lean_ctor_get_uint8(v_a_4680_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4681_ == 0)
{
lean_object* v_ctors_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___f_4688_; lean_object* v___x_4689_; 
v_ctors_4682_ = lean_ctor_get(v_a_4680_, 4);
lean_inc(v_ctors_4682_);
lean_dec(v_a_4680_);
v___x_4683_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_4684_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__4));
v___x_4685_ = lean_box(0);
v___x_4686_ = lean_box(v___y_4670_);
v___x_4687_ = lean_box(v_isUnsafe_4681_);
v___f_4688_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4688_, 0, v___x_4686_);
lean_closure_set(v___f_4688_, 1, v___x_4687_);
lean_closure_set(v___f_4688_, 2, v_ctors_4682_);
lean_closure_set(v___f_4688_, 3, v___x_4685_);
v___x_4689_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4683_, v___x_4684_, v___f_4688_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
if (lean_obj_tag(v___x_4689_) == 0)
{
lean_object* v_a_4690_; 
v_a_4690_ = lean_ctor_get(v___x_4689_, 0);
lean_inc(v_a_4690_);
lean_dec_ref_known(v___x_4689_, 1);
v___y_4654_ = v___y_4671_;
v___y_4655_ = v___x_4678_;
v___y_4656_ = v___y_4672_;
v___y_4657_ = v___y_4673_;
v___y_4658_ = v_a_4675_;
v_a_4659_ = v_a_4690_;
goto v___jp_4653_;
}
else
{
lean_object* v_a_4691_; 
v_a_4691_ = lean_ctor_get(v___x_4689_, 0);
lean_inc(v_a_4691_);
lean_dec_ref_known(v___x_4689_, 1);
v___y_4662_ = v___y_4671_;
v___y_4663_ = v___x_4678_;
v___y_4664_ = v___y_4672_;
v___y_4665_ = v___y_4673_;
v___y_4666_ = v_a_4675_;
v_a_4667_ = v_a_4691_;
goto v___jp_4661_;
}
}
else
{
lean_object* v___x_4692_; 
lean_dec(v_a_4680_);
v___x_4692_ = lean_box(0);
v___y_4654_ = v___y_4671_;
v___y_4655_ = v___x_4678_;
v___y_4656_ = v___y_4672_;
v___y_4657_ = v___y_4673_;
v___y_4658_ = v_a_4675_;
v_a_4659_ = v___x_4692_;
goto v___jp_4653_;
}
}
else
{
lean_object* v_a_4693_; 
v_a_4693_ = lean_ctor_get(v___x_4679_, 0);
lean_inc(v_a_4693_);
lean_dec_ref_known(v___x_4679_, 1);
v___y_4662_ = v___y_4671_;
v___y_4663_ = v___x_4678_;
v___y_4664_ = v___y_4672_;
v___y_4665_ = v___y_4673_;
v___y_4666_ = v_a_4675_;
v_a_4667_ = v_a_4693_;
goto v___jp_4661_;
}
}
else
{
lean_object* v___x_4694_; lean_object* v___x_4695_; 
v___x_4694_ = lean_io_get_num_heartbeats();
v___x_4695_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
if (lean_obj_tag(v___x_4695_) == 0)
{
lean_object* v_a_4696_; uint8_t v_isUnsafe_4697_; 
v_a_4696_ = lean_ctor_get(v___x_4695_, 0);
lean_inc(v_a_4696_);
lean_dec_ref_known(v___x_4695_, 1);
v_isUnsafe_4697_ = lean_ctor_get_uint8(v_a_4696_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4697_ == 0)
{
lean_object* v_ctors_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___f_4704_; lean_object* v___x_4705_; 
v_ctors_4698_ = lean_ctor_get(v_a_4696_, 4);
lean_inc(v_ctors_4698_);
lean_dec(v_a_4696_);
v___x_4699_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_4700_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__4));
v___x_4701_ = lean_box(0);
v___x_4702_ = lean_box(v___y_4670_);
v___x_4703_ = lean_box(v_isUnsafe_4697_);
v___f_4704_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4704_, 0, v___x_4702_);
lean_closure_set(v___f_4704_, 1, v___x_4703_);
lean_closure_set(v___f_4704_, 2, v_ctors_4698_);
lean_closure_set(v___f_4704_, 3, v___x_4701_);
v___x_4705_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4699_, v___x_4700_, v___f_4704_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
if (lean_obj_tag(v___x_4705_) == 0)
{
lean_object* v_a_4706_; 
v_a_4706_ = lean_ctor_get(v___x_4705_, 0);
lean_inc(v_a_4706_);
lean_dec_ref_known(v___x_4705_, 1);
v___y_4620_ = v___y_4671_;
v___y_4621_ = v___y_4672_;
v___y_4622_ = v___y_4673_;
v___y_4623_ = v___x_4694_;
v___y_4624_ = v_a_4675_;
v_a_4625_ = v_a_4706_;
goto v___jp_4619_;
}
else
{
lean_object* v_a_4707_; 
v_a_4707_ = lean_ctor_get(v___x_4705_, 0);
lean_inc(v_a_4707_);
lean_dec_ref_known(v___x_4705_, 1);
v___y_4628_ = v___y_4671_;
v___y_4629_ = v___y_4672_;
v___y_4630_ = v___y_4673_;
v___y_4631_ = v___x_4694_;
v___y_4632_ = v_a_4675_;
v_a_4633_ = v_a_4707_;
goto v___jp_4627_;
}
}
else
{
lean_object* v___x_4708_; 
lean_dec(v_a_4696_);
v___x_4708_ = lean_box(0);
v___y_4620_ = v___y_4671_;
v___y_4621_ = v___y_4672_;
v___y_4622_ = v___y_4673_;
v___y_4623_ = v___x_4694_;
v___y_4624_ = v_a_4675_;
v_a_4625_ = v___x_4708_;
goto v___jp_4619_;
}
}
else
{
lean_object* v_a_4709_; 
v_a_4709_ = lean_ctor_get(v___x_4695_, 0);
lean_inc(v_a_4709_);
lean_dec_ref_known(v___x_4695_, 1);
v___y_4628_ = v___y_4671_;
v___y_4629_ = v___y_4672_;
v___y_4630_ = v___y_4673_;
v___y_4631_ = v___x_4694_;
v___y_4632_ = v_a_4675_;
v_a_4633_ = v_a_4709_;
goto v___jp_4627_;
}
}
}
v___jp_4710_:
{
if (v___y_4711_ == 0)
{
lean_dec(v_a_4593_);
lean_dec_ref(v___f_4586_);
lean_dec(v_declName_4580_);
goto v___jp_4597_;
}
else
{
uint8_t v___x_4712_; 
v___x_4712_ = lean_unbox(v_a_4593_);
lean_dec(v_a_4593_);
if (v___x_4712_ == 0)
{
uint8_t v_hasTrace_4713_; 
lean_del_object(v___x_4595_);
v_hasTrace_4713_ = lean_ctor_get_uint8(v_options_4590_, sizeof(void*)*1);
if (v_hasTrace_4713_ == 0)
{
lean_object* v___x_4714_; 
lean_dec_ref(v___f_4586_);
v___x_4714_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
if (lean_obj_tag(v___x_4714_) == 0)
{
lean_object* v_a_4715_; lean_object* v___x_4717_; uint8_t v_isShared_4718_; uint8_t v_isSharedCheck_4732_; 
v_a_4715_ = lean_ctor_get(v___x_4714_, 0);
v_isSharedCheck_4732_ = !lean_is_exclusive(v___x_4714_);
if (v_isSharedCheck_4732_ == 0)
{
v___x_4717_ = v___x_4714_;
v_isShared_4718_ = v_isSharedCheck_4732_;
goto v_resetjp_4716_;
}
else
{
lean_inc(v_a_4715_);
lean_dec(v___x_4714_);
v___x_4717_ = lean_box(0);
v_isShared_4718_ = v_isSharedCheck_4732_;
goto v_resetjp_4716_;
}
v_resetjp_4716_:
{
uint8_t v_isUnsafe_4719_; 
v_isUnsafe_4719_ = lean_ctor_get_uint8(v_a_4715_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4719_ == 0)
{
lean_object* v_ctors_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___f_4726_; lean_object* v___x_4727_; 
lean_del_object(v___x_4717_);
v_ctors_4720_ = lean_ctor_get(v_a_4715_, 4);
lean_inc(v_ctors_4720_);
lean_dec(v_a_4715_);
v___x_4721_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_4722_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__4));
v___x_4723_ = lean_box(0);
v___x_4724_ = lean_box(v___y_4711_);
v___x_4725_ = lean_box(v_isUnsafe_4719_);
v___f_4726_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4726_, 0, v___x_4724_);
lean_closure_set(v___f_4726_, 1, v___x_4725_);
lean_closure_set(v___f_4726_, 2, v_ctors_4720_);
lean_closure_set(v___f_4726_, 3, v___x_4723_);
v___x_4727_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4721_, v___x_4722_, v___f_4726_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
return v___x_4727_;
}
else
{
lean_object* v___x_4728_; lean_object* v___x_4730_; 
lean_dec(v_a_4715_);
v___x_4728_ = lean_box(0);
if (v_isShared_4718_ == 0)
{
lean_ctor_set(v___x_4717_, 0, v___x_4728_);
v___x_4730_ = v___x_4717_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v___x_4728_);
v___x_4730_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
return v___x_4730_;
}
}
}
}
else
{
lean_object* v_a_4733_; lean_object* v___x_4735_; uint8_t v_isShared_4736_; uint8_t v_isSharedCheck_4740_; 
v_a_4733_ = lean_ctor_get(v___x_4714_, 0);
v_isSharedCheck_4740_ = !lean_is_exclusive(v___x_4714_);
if (v_isSharedCheck_4740_ == 0)
{
v___x_4735_ = v___x_4714_;
v_isShared_4736_ = v_isSharedCheck_4740_;
goto v_resetjp_4734_;
}
else
{
lean_inc(v_a_4733_);
lean_dec(v___x_4714_);
v___x_4735_ = lean_box(0);
v_isShared_4736_ = v_isSharedCheck_4740_;
goto v_resetjp_4734_;
}
v_resetjp_4734_:
{
lean_object* v___x_4738_; 
if (v_isShared_4736_ == 0)
{
v___x_4738_ = v___x_4735_;
goto v_reusejp_4737_;
}
else
{
lean_object* v_reuseFailAlloc_4739_; 
v_reuseFailAlloc_4739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4739_, 0, v_a_4733_);
v___x_4738_ = v_reuseFailAlloc_4739_;
goto v_reusejp_4737_;
}
v_reusejp_4737_:
{
return v___x_4738_;
}
}
}
}
else
{
lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; uint8_t v___x_4744_; 
v___x_4741_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_4742_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_4743_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_4744_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4591_, v_options_4590_, v___x_4743_);
if (v___x_4744_ == 0)
{
lean_object* v___x_4745_; uint8_t v___x_4746_; 
v___x_4745_ = l_Lean_trace_profiler;
v___x_4746_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_4590_, v___x_4745_);
if (v___x_4746_ == 0)
{
lean_object* v___x_4747_; 
lean_dec_ref(v___f_4586_);
v___x_4747_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
if (lean_obj_tag(v___x_4747_) == 0)
{
lean_object* v_a_4748_; lean_object* v___x_4750_; uint8_t v_isShared_4751_; uint8_t v_isSharedCheck_4765_; 
v_a_4748_ = lean_ctor_get(v___x_4747_, 0);
v_isSharedCheck_4765_ = !lean_is_exclusive(v___x_4747_);
if (v_isSharedCheck_4765_ == 0)
{
v___x_4750_ = v___x_4747_;
v_isShared_4751_ = v_isSharedCheck_4765_;
goto v_resetjp_4749_;
}
else
{
lean_inc(v_a_4748_);
lean_dec(v___x_4747_);
v___x_4750_ = lean_box(0);
v_isShared_4751_ = v_isSharedCheck_4765_;
goto v_resetjp_4749_;
}
v_resetjp_4749_:
{
uint8_t v_isUnsafe_4752_; 
v_isUnsafe_4752_ = lean_ctor_get_uint8(v_a_4748_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4752_ == 0)
{
lean_object* v_ctors_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___f_4759_; lean_object* v___x_4760_; 
lean_del_object(v___x_4750_);
v_ctors_4753_ = lean_ctor_get(v_a_4748_, 4);
lean_inc(v_ctors_4753_);
lean_dec(v_a_4748_);
v___x_4754_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_4755_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__4));
v___x_4756_ = lean_box(0);
v___x_4757_ = lean_box(v___y_4711_);
v___x_4758_ = lean_box(v_isUnsafe_4752_);
v___f_4759_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4759_, 0, v___x_4757_);
lean_closure_set(v___f_4759_, 1, v___x_4758_);
lean_closure_set(v___f_4759_, 2, v_ctors_4753_);
lean_closure_set(v___f_4759_, 3, v___x_4756_);
v___x_4760_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4754_, v___x_4755_, v___f_4759_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_);
return v___x_4760_;
}
else
{
lean_object* v___x_4761_; lean_object* v___x_4763_; 
lean_dec(v_a_4748_);
v___x_4761_ = lean_box(0);
if (v_isShared_4751_ == 0)
{
lean_ctor_set(v___x_4750_, 0, v___x_4761_);
v___x_4763_ = v___x_4750_;
goto v_reusejp_4762_;
}
else
{
lean_object* v_reuseFailAlloc_4764_; 
v_reuseFailAlloc_4764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4764_, 0, v___x_4761_);
v___x_4763_ = v_reuseFailAlloc_4764_;
goto v_reusejp_4762_;
}
v_reusejp_4762_:
{
return v___x_4763_;
}
}
}
}
else
{
lean_object* v_a_4766_; lean_object* v___x_4768_; uint8_t v_isShared_4769_; uint8_t v_isSharedCheck_4773_; 
v_a_4766_ = lean_ctor_get(v___x_4747_, 0);
v_isSharedCheck_4773_ = !lean_is_exclusive(v___x_4747_);
if (v_isSharedCheck_4773_ == 0)
{
v___x_4768_ = v___x_4747_;
v_isShared_4769_ = v_isSharedCheck_4773_;
goto v_resetjp_4767_;
}
else
{
lean_inc(v_a_4766_);
lean_dec(v___x_4747_);
v___x_4768_ = lean_box(0);
v_isShared_4769_ = v_isSharedCheck_4773_;
goto v_resetjp_4767_;
}
v_resetjp_4767_:
{
lean_object* v___x_4771_; 
if (v_isShared_4769_ == 0)
{
v___x_4771_ = v___x_4768_;
goto v_reusejp_4770_;
}
else
{
lean_object* v_reuseFailAlloc_4772_; 
v_reuseFailAlloc_4772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4772_, 0, v_a_4766_);
v___x_4771_ = v_reuseFailAlloc_4772_;
goto v_reusejp_4770_;
}
v_reusejp_4770_:
{
return v___x_4771_;
}
}
}
}
else
{
v___y_4670_ = v___y_4711_;
v___y_4671_ = v___x_4741_;
v___y_4672_ = v___x_4742_;
v___y_4673_ = v___x_4744_;
goto v___jp_4669_;
}
}
else
{
v___y_4670_ = v___y_4711_;
v___y_4671_ = v___x_4741_;
v___y_4672_ = v___x_4742_;
v___y_4673_ = v___x_4744_;
goto v___jp_4669_;
}
}
}
else
{
lean_dec_ref(v___f_4586_);
lean_dec(v_declName_4580_);
goto v___jp_4597_;
}
}
}
}
}
else
{
lean_object* v_a_4778_; lean_object* v___x_4780_; uint8_t v_isShared_4781_; uint8_t v_isSharedCheck_4785_; 
lean_dec_ref(v_env_4589_);
lean_dec_ref(v___f_4586_);
lean_dec(v_declName_4580_);
v_a_4778_ = lean_ctor_get(v___x_4592_, 0);
v_isSharedCheck_4785_ = !lean_is_exclusive(v___x_4592_);
if (v_isSharedCheck_4785_ == 0)
{
v___x_4780_ = v___x_4592_;
v_isShared_4781_ = v_isSharedCheck_4785_;
goto v_resetjp_4779_;
}
else
{
lean_inc(v_a_4778_);
lean_dec(v___x_4592_);
v___x_4780_ = lean_box(0);
v_isShared_4781_ = v_isSharedCheck_4785_;
goto v_resetjp_4779_;
}
v_resetjp_4779_:
{
lean_object* v___x_4783_; 
if (v_isShared_4781_ == 0)
{
v___x_4783_ = v___x_4780_;
goto v_reusejp_4782_;
}
else
{
lean_object* v_reuseFailAlloc_4784_; 
v_reuseFailAlloc_4784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4784_, 0, v_a_4778_);
v___x_4783_ = v_reuseFailAlloc_4784_;
goto v_reusejp_4782_;
}
v_reusejp_4782_:
{
return v___x_4783_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___boxed(lean_object* v_declName_4786_, lean_object* v_a_4787_, lean_object* v_a_4788_, lean_object* v_a_4789_, lean_object* v_a_4790_, lean_object* v_a_4791_){
_start:
{
lean_object* v_res_4792_; 
v_res_4792_ = l_Lean_Meta_mkInjectiveTheorems(v_declName_4786_, v_a_4787_, v_a_4788_, v_a_4789_, v_a_4790_);
lean_dec(v_a_4790_);
lean_dec_ref(v_a_4789_);
lean_dec(v_a_4788_);
lean_dec_ref(v_a_4787_);
return v_res_4792_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3(uint8_t v___y_4793_, uint8_t v___x_4794_, lean_object* v_as_4795_, lean_object* v_as_x27_4796_, lean_object* v_b_4797_, lean_object* v_a_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_){
_start:
{
lean_object* v___x_4804_; 
v___x_4804_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v___y_4793_, v___x_4794_, v_as_x27_4796_, v_b_4797_, v___y_4799_, v___y_4800_, v___y_4801_, v___y_4802_);
return v___x_4804_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___boxed(lean_object* v___y_4805_, lean_object* v___x_4806_, lean_object* v_as_4807_, lean_object* v_as_x27_4808_, lean_object* v_b_4809_, lean_object* v_a_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_, lean_object* v___y_4814_, lean_object* v___y_4815_){
_start:
{
uint8_t v___y_17434__boxed_4816_; uint8_t v___x_17435__boxed_4817_; lean_object* v_res_4818_; 
v___y_17434__boxed_4816_ = lean_unbox(v___y_4805_);
v___x_17435__boxed_4817_ = lean_unbox(v___x_4806_);
v_res_4818_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3(v___y_17434__boxed_4816_, v___x_17435__boxed_4817_, v_as_4807_, v_as_x27_4808_, v_b_4809_, v_a_4810_, v___y_4811_, v___y_4812_, v___y_4813_, v___y_4814_);
lean_dec(v___y_4814_);
lean_dec_ref(v___y_4813_);
lean_dec(v___y_4812_);
lean_dec_ref(v___y_4811_);
lean_dec(v_as_x27_4808_);
lean_dec(v_as_4807_);
return v_res_4818_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; 
v___x_4820_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4821_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0);
v___x_4822_ = l_Lean_Name_str___override(v___x_4821_, v___x_4820_);
return v___x_4822_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; 
v___x_4823_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1));
v___x_4824_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4825_ = l_Lean_Name_str___override(v___x_4824_, v___x_4823_);
return v___x_4825_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; 
v___x_4826_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4));
v___x_4827_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4828_ = l_Lean_Name_str___override(v___x_4827_, v___x_4826_);
return v___x_4828_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; 
v___x_4830_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4831_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4832_ = l_Lean_Name_str___override(v___x_4831_, v___x_4830_);
return v___x_4832_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; 
v___x_4833_ = lean_unsigned_to_nat(0u);
v___x_4834_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4835_ = l_Lean_Name_num___override(v___x_4834_, v___x_4833_);
return v___x_4835_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; 
v___x_4836_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1));
v___x_4837_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4838_ = l_Lean_Name_str___override(v___x_4837_, v___x_4836_);
return v___x_4838_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; 
v___x_4839_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4));
v___x_4840_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4841_ = l_Lean_Name_str___override(v___x_4840_, v___x_4839_);
return v___x_4841_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; 
v___x_4843_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4844_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4845_ = l_Lean_Name_str___override(v___x_4844_, v___x_4843_);
return v___x_4845_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; 
v___x_4847_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4848_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4849_ = l_Lean_Name_str___override(v___x_4848_, v___x_4847_);
return v___x_4849_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; 
v___x_4850_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1));
v___x_4851_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4852_ = l_Lean_Name_str___override(v___x_4851_, v___x_4850_);
return v___x_4852_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; 
v___x_4853_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4));
v___x_4854_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4855_ = l_Lean_Name_str___override(v___x_4854_, v___x_4853_);
return v___x_4855_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; 
v___x_4856_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4857_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4858_ = l_Lean_Name_str___override(v___x_4857_, v___x_4856_);
return v___x_4858_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; 
v___x_4859_ = lean_unsigned_to_nat(4172903888u);
v___x_4860_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4861_ = l_Lean_Name_num___override(v___x_4860_, v___x_4859_);
return v___x_4861_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; 
v___x_4863_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4864_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4865_ = l_Lean_Name_str___override(v___x_4864_, v___x_4863_);
return v___x_4865_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4867_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4868_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4869_ = l_Lean_Name_str___override(v___x_4868_, v___x_4867_);
return v___x_4869_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; 
v___x_4870_ = lean_unsigned_to_nat(2u);
v___x_4871_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4872_ = l_Lean_Name_num___override(v___x_4871_, v___x_4870_);
return v___x_4872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4874_; uint8_t v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; 
v___x_4874_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_4875_ = 0;
v___x_4876_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4877_ = l_Lean_registerTraceClass(v___x_4874_, v___x_4875_, v___x_4876_);
return v___x_4877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2____boxed(lean_object* v_a_4878_){
_start:
{
lean_object* v_res_4879_; 
v_res_4879_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_();
return v_res_4879_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(lean_object* v_a_4880_, lean_object* v_b_4881_){
_start:
{
lean_object* v_array_4882_; lean_object* v_start_4883_; lean_object* v_stop_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4897_; 
v_array_4882_ = lean_ctor_get(v_a_4880_, 0);
v_start_4883_ = lean_ctor_get(v_a_4880_, 1);
v_stop_4884_ = lean_ctor_get(v_a_4880_, 2);
v_isSharedCheck_4897_ = !lean_is_exclusive(v_a_4880_);
if (v_isSharedCheck_4897_ == 0)
{
v___x_4886_ = v_a_4880_;
v_isShared_4887_ = v_isSharedCheck_4897_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_stop_4884_);
lean_inc(v_start_4883_);
lean_inc(v_array_4882_);
lean_dec(v_a_4880_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4897_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
uint8_t v___x_4888_; 
v___x_4888_ = lean_nat_dec_lt(v_start_4883_, v_stop_4884_);
if (v___x_4888_ == 0)
{
lean_del_object(v___x_4886_);
lean_dec(v_stop_4884_);
lean_dec(v_start_4883_);
lean_dec_ref(v_array_4882_);
return v_b_4881_;
}
else
{
lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4892_; 
v___x_4889_ = lean_unsigned_to_nat(1u);
v___x_4890_ = lean_nat_add(v_start_4883_, v___x_4889_);
lean_inc_ref(v_array_4882_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 1, v___x_4890_);
v___x_4892_ = v___x_4886_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4896_; 
v_reuseFailAlloc_4896_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4896_, 0, v_array_4882_);
lean_ctor_set(v_reuseFailAlloc_4896_, 1, v___x_4890_);
lean_ctor_set(v_reuseFailAlloc_4896_, 2, v_stop_4884_);
v___x_4892_ = v_reuseFailAlloc_4896_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
lean_object* v___x_4893_; lean_object* v___x_4894_; 
v___x_4893_ = lean_array_fget(v_array_4882_, v_start_4883_);
lean_dec(v_start_4883_);
lean_dec_ref(v_array_4882_);
v___x_4894_ = lean_array_push(v_b_4881_, v___x_4893_);
v_a_4880_ = v___x_4892_;
v_b_4881_ = v___x_4894_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_4898_; lean_object* v___x_4899_; 
v___x_4898_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0);
v___x_4899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4899_, 0, v___x_4898_);
return v___x_4899_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; 
v___x_4900_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_4901_ = lean_unsigned_to_nat(0u);
v___x_4902_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4902_, 0, v___x_4901_);
lean_ctor_set(v___x_4902_, 1, v___x_4901_);
lean_ctor_set(v___x_4902_, 2, v___x_4901_);
lean_ctor_set(v___x_4902_, 3, v___x_4901_);
lean_ctor_set(v___x_4902_, 4, v___x_4900_);
lean_ctor_set(v___x_4902_, 5, v___x_4900_);
lean_ctor_set(v___x_4902_, 6, v___x_4900_);
lean_ctor_set(v___x_4902_, 7, v___x_4900_);
lean_ctor_set(v___x_4902_, 8, v___x_4900_);
lean_ctor_set(v___x_4902_, 9, v___x_4900_);
lean_ctor_set(v___x_4902_, 10, v___x_4900_);
return v___x_4902_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; 
v___x_4903_ = lean_box(1);
v___x_4904_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__2, &l_Lean_Meta_mkInjectiveTheorems___closed__2_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__2);
v___x_4905_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_4906_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4906_, 0, v___x_4905_);
lean_ctor_set(v___x_4906_, 1, v___x_4904_);
lean_ctor_set(v___x_4906_, 2, v___x_4903_);
return v___x_4906_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_4908_; lean_object* v___x_4909_; 
v___x_4908_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3));
v___x_4909_ = l_Lean_stringToMessageData(v___x_4908_);
return v___x_4909_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6(void){
_start:
{
lean_object* v___x_4911_; lean_object* v___x_4912_; 
v___x_4911_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5));
v___x_4912_ = l_Lean_stringToMessageData(v___x_4911_);
return v___x_4912_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8(void){
_start:
{
lean_object* v___x_4914_; lean_object* v___x_4915_; 
v___x_4914_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7));
v___x_4915_ = l_Lean_stringToMessageData(v___x_4914_);
return v___x_4915_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10(void){
_start:
{
lean_object* v___x_4917_; lean_object* v___x_4918_; 
v___x_4917_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9));
v___x_4918_ = l_Lean_stringToMessageData(v___x_4917_);
return v___x_4918_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12(void){
_start:
{
lean_object* v___x_4920_; lean_object* v___x_4921_; 
v___x_4920_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11));
v___x_4921_ = l_Lean_stringToMessageData(v___x_4920_);
return v___x_4921_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14(void){
_start:
{
lean_object* v___x_4923_; lean_object* v___x_4924_; 
v___x_4923_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13));
v___x_4924_ = l_Lean_stringToMessageData(v___x_4923_);
return v___x_4924_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16(void){
_start:
{
lean_object* v___x_4926_; lean_object* v___x_4927_; 
v___x_4926_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15));
v___x_4927_ = l_Lean_stringToMessageData(v___x_4926_);
return v___x_4927_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_msg_4928_, lean_object* v_declHint_4929_, lean_object* v___y_4930_){
_start:
{
lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v_env_4934_; uint8_t v___x_4935_; 
v___x_4932_ = l_Lean_instInhabitedName;
v___x_4933_ = lean_st_ref_get(v___y_4930_);
v_env_4934_ = lean_ctor_get(v___x_4933_, 0);
lean_inc_ref(v_env_4934_);
lean_dec(v___x_4933_);
v___x_4935_ = l_Lean_Name_isAnonymous(v_declHint_4929_);
if (v___x_4935_ == 0)
{
uint8_t v_isExporting_4936_; 
v_isExporting_4936_ = lean_ctor_get_uint8(v_env_4934_, sizeof(void*)*8);
if (v_isExporting_4936_ == 0)
{
lean_object* v___x_4937_; 
lean_dec_ref(v_env_4934_);
lean_dec(v_declHint_4929_);
v___x_4937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4937_, 0, v_msg_4928_);
return v___x_4937_;
}
else
{
lean_object* v___x_4938_; uint8_t v___x_4939_; 
lean_inc_ref(v_env_4934_);
v___x_4938_ = l_Lean_Environment_setExporting(v_env_4934_, v___x_4935_);
lean_inc(v_declHint_4929_);
lean_inc_ref(v___x_4938_);
v___x_4939_ = l_Lean_Environment_contains(v___x_4938_, v_declHint_4929_, v_isExporting_4936_);
if (v___x_4939_ == 0)
{
lean_object* v___x_4940_; 
lean_dec_ref(v___x_4938_);
lean_dec_ref(v_env_4934_);
lean_dec(v_declHint_4929_);
v___x_4940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4940_, 0, v_msg_4928_);
return v___x_4940_;
}
else
{
lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v_c_4946_; lean_object* v___x_4947_; 
v___x_4941_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_4942_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2);
v___x_4943_ = l_Lean_Options_empty;
v___x_4944_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4944_, 0, v___x_4938_);
lean_ctor_set(v___x_4944_, 1, v___x_4941_);
lean_ctor_set(v___x_4944_, 2, v___x_4942_);
lean_ctor_set(v___x_4944_, 3, v___x_4943_);
lean_inc(v_declHint_4929_);
v___x_4945_ = l_Lean_MessageData_ofConstName(v_declHint_4929_, v___x_4935_);
v_c_4946_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_4946_, 0, v___x_4944_);
lean_ctor_set(v_c_4946_, 1, v___x_4945_);
v___x_4947_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4934_, v_declHint_4929_);
if (lean_obj_tag(v___x_4947_) == 0)
{
lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; 
lean_dec_ref(v_env_4934_);
lean_dec(v_declHint_4929_);
v___x_4948_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_4949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4949_, 0, v___x_4948_);
lean_ctor_set(v___x_4949_, 1, v_c_4946_);
v___x_4950_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6);
v___x_4951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4951_, 0, v___x_4949_);
lean_ctor_set(v___x_4951_, 1, v___x_4950_);
v___x_4952_ = l_Lean_MessageData_note(v___x_4951_);
v___x_4953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4953_, 0, v_msg_4928_);
lean_ctor_set(v___x_4953_, 1, v___x_4952_);
v___x_4954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4954_, 0, v___x_4953_);
return v___x_4954_;
}
else
{
lean_object* v_val_4955_; lean_object* v___x_4957_; uint8_t v_isShared_4958_; uint8_t v_isSharedCheck_4989_; 
v_val_4955_ = lean_ctor_get(v___x_4947_, 0);
v_isSharedCheck_4989_ = !lean_is_exclusive(v___x_4947_);
if (v_isSharedCheck_4989_ == 0)
{
v___x_4957_ = v___x_4947_;
v_isShared_4958_ = v_isSharedCheck_4989_;
goto v_resetjp_4956_;
}
else
{
lean_inc(v_val_4955_);
lean_dec(v___x_4947_);
v___x_4957_ = lean_box(0);
v_isShared_4958_ = v_isSharedCheck_4989_;
goto v_resetjp_4956_;
}
v_resetjp_4956_:
{
lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v_mod_4961_; uint8_t v___x_4962_; 
v___x_4959_ = l_Lean_Environment_header(v_env_4934_);
lean_dec_ref(v_env_4934_);
v___x_4960_ = l_Lean_EnvironmentHeader_moduleNames(v___x_4959_);
lean_dec_ref(v___x_4959_);
v_mod_4961_ = lean_array_get(v___x_4932_, v___x_4960_, v_val_4955_);
lean_dec(v_val_4955_);
lean_dec_ref(v___x_4960_);
v___x_4962_ = l_Lean_isPrivateName(v_declHint_4929_);
lean_dec(v_declHint_4929_);
if (v___x_4962_ == 0)
{
lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4974_; 
v___x_4963_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8);
v___x_4964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4964_, 0, v___x_4963_);
lean_ctor_set(v___x_4964_, 1, v_c_4946_);
v___x_4965_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10);
v___x_4966_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4966_, 0, v___x_4964_);
lean_ctor_set(v___x_4966_, 1, v___x_4965_);
v___x_4967_ = l_Lean_MessageData_ofName(v_mod_4961_);
v___x_4968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4968_, 0, v___x_4966_);
lean_ctor_set(v___x_4968_, 1, v___x_4967_);
v___x_4969_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12);
v___x_4970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4970_, 0, v___x_4968_);
lean_ctor_set(v___x_4970_, 1, v___x_4969_);
v___x_4971_ = l_Lean_MessageData_note(v___x_4970_);
v___x_4972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4972_, 0, v_msg_4928_);
lean_ctor_set(v___x_4972_, 1, v___x_4971_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set_tag(v___x_4957_, 0);
lean_ctor_set(v___x_4957_, 0, v___x_4972_);
v___x_4974_ = v___x_4957_;
goto v_reusejp_4973_;
}
else
{
lean_object* v_reuseFailAlloc_4975_; 
v_reuseFailAlloc_4975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4975_, 0, v___x_4972_);
v___x_4974_ = v_reuseFailAlloc_4975_;
goto v_reusejp_4973_;
}
v_reusejp_4973_:
{
return v___x_4974_;
}
}
else
{
lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4987_; 
v___x_4976_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_4977_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4977_, 0, v___x_4976_);
lean_ctor_set(v___x_4977_, 1, v_c_4946_);
v___x_4978_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14);
v___x_4979_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4979_, 0, v___x_4977_);
lean_ctor_set(v___x_4979_, 1, v___x_4978_);
v___x_4980_ = l_Lean_MessageData_ofName(v_mod_4961_);
v___x_4981_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4981_, 0, v___x_4979_);
lean_ctor_set(v___x_4981_, 1, v___x_4980_);
v___x_4982_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16);
v___x_4983_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4983_, 0, v___x_4981_);
lean_ctor_set(v___x_4983_, 1, v___x_4982_);
v___x_4984_ = l_Lean_MessageData_note(v___x_4983_);
v___x_4985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4985_, 0, v_msg_4928_);
lean_ctor_set(v___x_4985_, 1, v___x_4984_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set_tag(v___x_4957_, 0);
lean_ctor_set(v___x_4957_, 0, v___x_4985_);
v___x_4987_ = v___x_4957_;
goto v_reusejp_4986_;
}
else
{
lean_object* v_reuseFailAlloc_4988_; 
v_reuseFailAlloc_4988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4988_, 0, v___x_4985_);
v___x_4987_ = v_reuseFailAlloc_4988_;
goto v_reusejp_4986_;
}
v_reusejp_4986_:
{
return v___x_4987_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4990_; 
lean_dec_ref(v_env_4934_);
lean_dec(v_declHint_4929_);
v___x_4990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4990_, 0, v_msg_4928_);
return v___x_4990_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_msg_4991_, lean_object* v_declHint_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_){
_start:
{
lean_object* v_res_4995_; 
v_res_4995_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_4991_, v_declHint_4992_, v___y_4993_);
lean_dec(v___y_4993_);
return v_res_4995_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_msg_4996_, lean_object* v_declHint_4997_, lean_object* v___y_4998_, lean_object* v___y_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_){
_start:
{
lean_object* v___x_5003_; lean_object* v_a_5004_; lean_object* v___x_5006_; uint8_t v_isShared_5007_; uint8_t v_isSharedCheck_5013_; 
v___x_5003_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_4996_, v_declHint_4997_, v___y_5001_);
v_a_5004_ = lean_ctor_get(v___x_5003_, 0);
v_isSharedCheck_5013_ = !lean_is_exclusive(v___x_5003_);
if (v_isSharedCheck_5013_ == 0)
{
v___x_5006_ = v___x_5003_;
v_isShared_5007_ = v_isSharedCheck_5013_;
goto v_resetjp_5005_;
}
else
{
lean_inc(v_a_5004_);
lean_dec(v___x_5003_);
v___x_5006_ = lean_box(0);
v_isShared_5007_ = v_isSharedCheck_5013_;
goto v_resetjp_5005_;
}
v_resetjp_5005_:
{
lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5011_; 
v___x_5008_ = l_Lean_unknownIdentifierMessageTag;
v___x_5009_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_5009_, 0, v___x_5008_);
lean_ctor_set(v___x_5009_, 1, v_a_5004_);
if (v_isShared_5007_ == 0)
{
lean_ctor_set(v___x_5006_, 0, v___x_5009_);
v___x_5011_ = v___x_5006_;
goto v_reusejp_5010_;
}
else
{
lean_object* v_reuseFailAlloc_5012_; 
v_reuseFailAlloc_5012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5012_, 0, v___x_5009_);
v___x_5011_ = v_reuseFailAlloc_5012_;
goto v_reusejp_5010_;
}
v_reusejp_5010_:
{
return v___x_5011_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object* v_msg_5014_, lean_object* v_declHint_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_, lean_object* v___y_5020_){
_start:
{
lean_object* v_res_5021_; 
v_res_5021_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_5014_, v_declHint_5015_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_);
lean_dec(v___y_5019_);
lean_dec_ref(v___y_5018_);
lean_dec(v___y_5017_);
lean_dec_ref(v___y_5016_);
return v_res_5021_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_5022_, lean_object* v_msg_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_){
_start:
{
lean_object* v_toCold_5029_; lean_object* v_currRecDepth_5030_; lean_object* v_ref_5031_; uint8_t v_diag_5032_; uint8_t v_suppressElabErrors_5033_; lean_object* v_ref_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; 
v_toCold_5029_ = lean_ctor_get(v___y_5026_, 0);
v_currRecDepth_5030_ = lean_ctor_get(v___y_5026_, 1);
v_ref_5031_ = lean_ctor_get(v___y_5026_, 2);
v_diag_5032_ = lean_ctor_get_uint8(v___y_5026_, sizeof(void*)*3);
v_suppressElabErrors_5033_ = lean_ctor_get_uint8(v___y_5026_, sizeof(void*)*3 + 1);
v_ref_5034_ = l_Lean_replaceRef(v_ref_5022_, v_ref_5031_);
lean_inc(v_currRecDepth_5030_);
lean_inc_ref(v_toCold_5029_);
v___x_5035_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5035_, 0, v_toCold_5029_);
lean_ctor_set(v___x_5035_, 1, v_currRecDepth_5030_);
lean_ctor_set(v___x_5035_, 2, v_ref_5034_);
lean_ctor_set_uint8(v___x_5035_, sizeof(void*)*3, v_diag_5032_);
lean_ctor_set_uint8(v___x_5035_, sizeof(void*)*3 + 1, v_suppressElabErrors_5033_);
v___x_5036_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v_msg_5023_, v___y_5024_, v___y_5025_, v___x_5035_, v___y_5027_);
lean_dec_ref_known(v___x_5035_, 3);
return v___x_5036_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_5037_, lean_object* v_msg_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_, lean_object* v___y_5041_, lean_object* v___y_5042_, lean_object* v___y_5043_){
_start:
{
lean_object* v_res_5044_; 
v_res_5044_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_5037_, v_msg_5038_, v___y_5039_, v___y_5040_, v___y_5041_, v___y_5042_);
lean_dec(v___y_5042_);
lean_dec_ref(v___y_5041_);
lean_dec(v___y_5040_);
lean_dec_ref(v___y_5039_);
lean_dec(v_ref_5037_);
return v_res_5044_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_5045_, lean_object* v_msg_5046_, lean_object* v_declHint_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_, lean_object* v___y_5050_, lean_object* v___y_5051_){
_start:
{
lean_object* v___x_5053_; lean_object* v_a_5054_; lean_object* v___x_5055_; 
v___x_5053_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_5046_, v_declHint_5047_, v___y_5048_, v___y_5049_, v___y_5050_, v___y_5051_);
v_a_5054_ = lean_ctor_get(v___x_5053_, 0);
lean_inc(v_a_5054_);
lean_dec_ref(v___x_5053_);
v___x_5055_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_5045_, v_a_5054_, v___y_5048_, v___y_5049_, v___y_5050_, v___y_5051_);
return v___x_5055_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_5056_, lean_object* v_msg_5057_, lean_object* v_declHint_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_, lean_object* v___y_5063_){
_start:
{
lean_object* v_res_5064_; 
v_res_5064_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_5056_, v_msg_5057_, v_declHint_5058_, v___y_5059_, v___y_5060_, v___y_5061_, v___y_5062_);
lean_dec(v___y_5062_);
lean_dec_ref(v___y_5061_);
lean_dec(v___y_5060_);
lean_dec_ref(v___y_5059_);
lean_dec(v_ref_5056_);
return v_res_5064_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_5066_; lean_object* v___x_5067_; 
v___x_5066_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_5067_ = l_Lean_stringToMessageData(v___x_5066_);
return v___x_5067_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_5068_, lean_object* v_constName_5069_, lean_object* v___y_5070_, lean_object* v___y_5071_, lean_object* v___y_5072_, lean_object* v___y_5073_){
_start:
{
lean_object* v___x_5075_; uint8_t v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; 
v___x_5075_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_5076_ = 0;
lean_inc(v_constName_5069_);
v___x_5077_ = l_Lean_MessageData_ofConstName(v_constName_5069_, v___x_5076_);
v___x_5078_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5078_, 0, v___x_5075_);
lean_ctor_set(v___x_5078_, 1, v___x_5077_);
v___x_5079_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_5080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5080_, 0, v___x_5078_);
lean_ctor_set(v___x_5080_, 1, v___x_5079_);
v___x_5081_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_5068_, v___x_5080_, v_constName_5069_, v___y_5070_, v___y_5071_, v___y_5072_, v___y_5073_);
return v___x_5081_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_5082_, lean_object* v_constName_5083_, lean_object* v___y_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_){
_start:
{
lean_object* v_res_5089_; 
v_res_5089_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(v_ref_5082_, v_constName_5083_, v___y_5084_, v___y_5085_, v___y_5086_, v___y_5087_);
lean_dec(v___y_5087_);
lean_dec_ref(v___y_5086_);
lean_dec(v___y_5085_);
lean_dec_ref(v___y_5084_);
lean_dec(v_ref_5082_);
return v_res_5089_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(lean_object* v_constName_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_){
_start:
{
lean_object* v_ref_5096_; lean_object* v___x_5097_; 
v_ref_5096_ = lean_ctor_get(v___y_5093_, 2);
v___x_5097_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(v_ref_5096_, v_constName_5090_, v___y_5091_, v___y_5092_, v___y_5093_, v___y_5094_);
return v___x_5097_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_constName_5098_, lean_object* v___y_5099_, lean_object* v___y_5100_, lean_object* v___y_5101_, lean_object* v___y_5102_, lean_object* v___y_5103_){
_start:
{
lean_object* v_res_5104_; 
v_res_5104_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(v_constName_5098_, v___y_5099_, v___y_5100_, v___y_5101_, v___y_5102_);
lean_dec(v___y_5102_);
lean_dec_ref(v___y_5101_);
lean_dec(v___y_5100_);
lean_dec_ref(v___y_5099_);
return v_res_5104_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(lean_object* v_constName_5105_, lean_object* v___y_5106_, lean_object* v___y_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_){
_start:
{
lean_object* v___x_5111_; lean_object* v_env_5112_; uint8_t v___x_5113_; lean_object* v___x_5114_; 
v___x_5111_ = lean_st_ref_get(v___y_5109_);
v_env_5112_ = lean_ctor_get(v___x_5111_, 0);
lean_inc_ref(v_env_5112_);
lean_dec(v___x_5111_);
v___x_5113_ = 0;
lean_inc(v_constName_5105_);
v___x_5114_ = l_Lean_Environment_find_x3f(v_env_5112_, v_constName_5105_, v___x_5113_);
if (lean_obj_tag(v___x_5114_) == 0)
{
lean_object* v___x_5115_; 
v___x_5115_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(v_constName_5105_, v___y_5106_, v___y_5107_, v___y_5108_, v___y_5109_);
return v___x_5115_;
}
else
{
lean_object* v_val_5116_; lean_object* v___x_5118_; uint8_t v_isShared_5119_; uint8_t v_isSharedCheck_5123_; 
lean_dec(v_constName_5105_);
v_val_5116_ = lean_ctor_get(v___x_5114_, 0);
v_isSharedCheck_5123_ = !lean_is_exclusive(v___x_5114_);
if (v_isSharedCheck_5123_ == 0)
{
v___x_5118_ = v___x_5114_;
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
else
{
lean_inc(v_val_5116_);
lean_dec(v___x_5114_);
v___x_5118_ = lean_box(0);
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
v_resetjp_5117_:
{
lean_object* v___x_5121_; 
if (v_isShared_5119_ == 0)
{
lean_ctor_set_tag(v___x_5118_, 0);
v___x_5121_ = v___x_5118_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v_val_5116_);
v___x_5121_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
return v___x_5121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0___boxed(lean_object* v_constName_5124_, lean_object* v___y_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_){
_start:
{
lean_object* v_res_5130_; 
v_res_5130_ = l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(v_constName_5124_, v___y_5125_, v___y_5126_, v___y_5127_, v___y_5128_);
lean_dec(v___y_5128_);
lean_dec_ref(v___y_5127_);
lean_dec(v___y_5126_);
lean_dec_ref(v___y_5125_);
return v_res_5130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(lean_object* v_x_5133_, lean_object* v_x_5134_, lean_object* v_x_5135_, lean_object* v___y_5136_, lean_object* v___y_5137_, lean_object* v___y_5138_, lean_object* v___y_5139_){
_start:
{
if (lean_obj_tag(v_x_5133_) == 5)
{
lean_object* v_fn_5141_; lean_object* v_arg_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; 
v_fn_5141_ = lean_ctor_get(v_x_5133_, 0);
lean_inc_ref(v_fn_5141_);
v_arg_5142_ = lean_ctor_get(v_x_5133_, 1);
lean_inc_ref(v_arg_5142_);
lean_dec_ref_known(v_x_5133_, 2);
v___x_5143_ = lean_array_set(v_x_5134_, v_x_5135_, v_arg_5142_);
v___x_5144_ = lean_unsigned_to_nat(1u);
v___x_5145_ = lean_nat_sub(v_x_5135_, v___x_5144_);
lean_dec(v_x_5135_);
v_x_5133_ = v_fn_5141_;
v_x_5134_ = v___x_5143_;
v_x_5135_ = v___x_5145_;
goto _start;
}
else
{
lean_dec(v_x_5135_);
if (lean_obj_tag(v_x_5133_) == 4)
{
lean_object* v_declName_5147_; lean_object* v___x_5148_; 
v_declName_5147_ = lean_ctor_get(v_x_5133_, 0);
lean_inc(v_declName_5147_);
lean_dec_ref_known(v_x_5133_, 2);
v___x_5148_ = l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(v_declName_5147_, v___y_5136_, v___y_5137_, v___y_5138_, v___y_5139_);
if (lean_obj_tag(v___x_5148_) == 0)
{
lean_object* v_a_5149_; lean_object* v___x_5151_; uint8_t v_isShared_5152_; uint8_t v_isSharedCheck_5180_; 
v_a_5149_ = lean_ctor_get(v___x_5148_, 0);
v_isSharedCheck_5180_ = !lean_is_exclusive(v___x_5148_);
if (v_isSharedCheck_5180_ == 0)
{
v___x_5151_ = v___x_5148_;
v_isShared_5152_ = v_isSharedCheck_5180_;
goto v_resetjp_5150_;
}
else
{
lean_inc(v_a_5149_);
lean_dec(v___x_5148_);
v___x_5151_ = lean_box(0);
v_isShared_5152_ = v_isSharedCheck_5180_;
goto v_resetjp_5150_;
}
v_resetjp_5150_:
{
lean_object* v_lower_5154_; lean_object* v_upper_5155_; 
if (lean_obj_tag(v_a_5149_) == 5)
{
lean_object* v_val_5163_; lean_object* v___x_5165_; uint8_t v_isShared_5166_; uint8_t v_isSharedCheck_5177_; 
v_val_5163_ = lean_ctor_get(v_a_5149_, 0);
v_isSharedCheck_5177_ = !lean_is_exclusive(v_a_5149_);
if (v_isSharedCheck_5177_ == 0)
{
v___x_5165_ = v_a_5149_;
v_isShared_5166_ = v_isSharedCheck_5177_;
goto v_resetjp_5164_;
}
else
{
lean_inc(v_val_5163_);
lean_dec(v_a_5149_);
v___x_5165_ = lean_box(0);
v_isShared_5166_ = v_isSharedCheck_5177_;
goto v_resetjp_5164_;
}
v_resetjp_5164_:
{
lean_object* v_numParams_5167_; lean_object* v_numIndices_5168_; lean_object* v___x_5169_; uint8_t v___x_5170_; 
v_numParams_5167_ = lean_ctor_get(v_val_5163_, 1);
lean_inc(v_numParams_5167_);
v_numIndices_5168_ = lean_ctor_get(v_val_5163_, 2);
lean_inc(v_numIndices_5168_);
lean_dec_ref(v_val_5163_);
v___x_5169_ = lean_unsigned_to_nat(0u);
v___x_5170_ = lean_nat_dec_eq(v_numIndices_5168_, v___x_5169_);
lean_dec(v_numIndices_5168_);
if (v___x_5170_ == 0)
{
lean_object* v___x_5171_; uint8_t v___x_5172_; 
lean_del_object(v___x_5165_);
v___x_5171_ = lean_array_get_size(v_x_5134_);
v___x_5172_ = lean_nat_dec_le(v_numParams_5167_, v___x_5169_);
if (v___x_5172_ == 0)
{
v_lower_5154_ = v_numParams_5167_;
v_upper_5155_ = v___x_5171_;
goto v___jp_5153_;
}
else
{
lean_dec(v_numParams_5167_);
v_lower_5154_ = v___x_5169_;
v_upper_5155_ = v___x_5171_;
goto v___jp_5153_;
}
}
else
{
lean_object* v___x_5173_; lean_object* v___x_5175_; 
lean_dec(v_numParams_5167_);
lean_del_object(v___x_5151_);
lean_dec_ref(v_x_5134_);
v___x_5173_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0));
if (v_isShared_5166_ == 0)
{
lean_ctor_set_tag(v___x_5165_, 0);
lean_ctor_set(v___x_5165_, 0, v___x_5173_);
v___x_5175_ = v___x_5165_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5176_; 
v_reuseFailAlloc_5176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5176_, 0, v___x_5173_);
v___x_5175_ = v_reuseFailAlloc_5176_;
goto v_reusejp_5174_;
}
v_reusejp_5174_:
{
return v___x_5175_;
}
}
}
}
else
{
lean_object* v___x_5178_; lean_object* v___x_5179_; 
lean_del_object(v___x_5151_);
lean_dec(v_a_5149_);
lean_dec_ref(v_x_5134_);
v___x_5178_ = lean_box(0);
v___x_5179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5179_, 0, v___x_5178_);
return v___x_5179_;
}
v___jp_5153_:
{
lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; lean_object* v___x_5159_; lean_object* v___x_5161_; 
v___x_5156_ = l_Array_toSubarray___redArg(v_x_5134_, v_lower_5154_, v_upper_5155_);
v___x_5157_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_5158_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(v___x_5156_, v___x_5157_);
v___x_5159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5159_, 0, v___x_5158_);
if (v_isShared_5152_ == 0)
{
lean_ctor_set(v___x_5151_, 0, v___x_5159_);
v___x_5161_ = v___x_5151_;
goto v_reusejp_5160_;
}
else
{
lean_object* v_reuseFailAlloc_5162_; 
v_reuseFailAlloc_5162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5162_, 0, v___x_5159_);
v___x_5161_ = v_reuseFailAlloc_5162_;
goto v_reusejp_5160_;
}
v_reusejp_5160_:
{
return v___x_5161_;
}
}
}
}
else
{
lean_object* v_a_5181_; lean_object* v___x_5183_; uint8_t v_isShared_5184_; uint8_t v_isSharedCheck_5188_; 
lean_dec_ref(v_x_5134_);
v_a_5181_ = lean_ctor_get(v___x_5148_, 0);
v_isSharedCheck_5188_ = !lean_is_exclusive(v___x_5148_);
if (v_isSharedCheck_5188_ == 0)
{
v___x_5183_ = v___x_5148_;
v_isShared_5184_ = v_isSharedCheck_5188_;
goto v_resetjp_5182_;
}
else
{
lean_inc(v_a_5181_);
lean_dec(v___x_5148_);
v___x_5183_ = lean_box(0);
v_isShared_5184_ = v_isSharedCheck_5188_;
goto v_resetjp_5182_;
}
v_resetjp_5182_:
{
lean_object* v___x_5186_; 
if (v_isShared_5184_ == 0)
{
v___x_5186_ = v___x_5183_;
goto v_reusejp_5185_;
}
else
{
lean_object* v_reuseFailAlloc_5187_; 
v_reuseFailAlloc_5187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5187_, 0, v_a_5181_);
v___x_5186_ = v_reuseFailAlloc_5187_;
goto v_reusejp_5185_;
}
v_reusejp_5185_:
{
return v___x_5186_;
}
}
}
}
else
{
lean_object* v___x_5189_; lean_object* v___x_5190_; 
lean_dec_ref(v_x_5134_);
lean_dec_ref(v_x_5133_);
v___x_5189_ = lean_box(0);
v___x_5190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5190_, 0, v___x_5189_);
return v___x_5190_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___boxed(lean_object* v_x_5191_, lean_object* v_x_5192_, lean_object* v_x_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_, lean_object* v___y_5197_, lean_object* v___y_5198_){
_start:
{
lean_object* v_res_5199_; 
v_res_5199_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(v_x_5191_, v_x_5192_, v_x_5193_, v___y_5194_, v___y_5195_, v___y_5196_, v___y_5197_);
lean_dec(v___y_5197_);
lean_dec_ref(v___y_5196_);
lean_dec(v___y_5195_);
lean_dec_ref(v___y_5194_);
return v_res_5199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f(lean_object* v_ctorApp_5200_, lean_object* v_a_5201_, lean_object* v_a_5202_, lean_object* v_a_5203_, lean_object* v_a_5204_){
_start:
{
lean_object* v___x_5206_; 
lean_inc(v_a_5204_);
lean_inc_ref(v_a_5203_);
lean_inc(v_a_5202_);
lean_inc_ref(v_a_5201_);
v___x_5206_ = lean_infer_type(v_ctorApp_5200_, v_a_5201_, v_a_5202_, v_a_5203_, v_a_5204_);
if (lean_obj_tag(v___x_5206_) == 0)
{
lean_object* v_a_5207_; lean_object* v___x_5208_; 
v_a_5207_ = lean_ctor_get(v___x_5206_, 0);
lean_inc(v_a_5207_);
lean_dec_ref_known(v___x_5206_, 1);
v___x_5208_ = l_Lean_Meta_whnfD(v_a_5207_, v_a_5201_, v_a_5202_, v_a_5203_, v_a_5204_);
if (lean_obj_tag(v___x_5208_) == 0)
{
lean_object* v_a_5209_; lean_object* v_dummy_5210_; lean_object* v_nargs_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; 
v_a_5209_ = lean_ctor_get(v___x_5208_, 0);
lean_inc(v_a_5209_);
lean_dec_ref_known(v___x_5208_, 1);
v_dummy_5210_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__1);
v_nargs_5211_ = l_Lean_Expr_getAppNumArgs(v_a_5209_);
lean_inc(v_nargs_5211_);
v___x_5212_ = lean_mk_array(v_nargs_5211_, v_dummy_5210_);
v___x_5213_ = lean_unsigned_to_nat(1u);
v___x_5214_ = lean_nat_sub(v_nargs_5211_, v___x_5213_);
lean_dec(v_nargs_5211_);
v___x_5215_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(v_a_5209_, v___x_5212_, v___x_5214_, v_a_5201_, v_a_5202_, v_a_5203_, v_a_5204_);
return v___x_5215_;
}
else
{
lean_object* v_a_5216_; lean_object* v___x_5218_; uint8_t v_isShared_5219_; uint8_t v_isSharedCheck_5223_; 
v_a_5216_ = lean_ctor_get(v___x_5208_, 0);
v_isSharedCheck_5223_ = !lean_is_exclusive(v___x_5208_);
if (v_isSharedCheck_5223_ == 0)
{
v___x_5218_ = v___x_5208_;
v_isShared_5219_ = v_isSharedCheck_5223_;
goto v_resetjp_5217_;
}
else
{
lean_inc(v_a_5216_);
lean_dec(v___x_5208_);
v___x_5218_ = lean_box(0);
v_isShared_5219_ = v_isSharedCheck_5223_;
goto v_resetjp_5217_;
}
v_resetjp_5217_:
{
lean_object* v___x_5221_; 
if (v_isShared_5219_ == 0)
{
v___x_5221_ = v___x_5218_;
goto v_reusejp_5220_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v_a_5216_);
v___x_5221_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5220_;
}
v_reusejp_5220_:
{
return v___x_5221_;
}
}
}
}
else
{
lean_object* v_a_5224_; lean_object* v___x_5226_; uint8_t v_isShared_5227_; uint8_t v_isSharedCheck_5231_; 
v_a_5224_ = lean_ctor_get(v___x_5206_, 0);
v_isSharedCheck_5231_ = !lean_is_exclusive(v___x_5206_);
if (v_isSharedCheck_5231_ == 0)
{
v___x_5226_ = v___x_5206_;
v_isShared_5227_ = v_isSharedCheck_5231_;
goto v_resetjp_5225_;
}
else
{
lean_inc(v_a_5224_);
lean_dec(v___x_5206_);
v___x_5226_ = lean_box(0);
v_isShared_5227_ = v_isSharedCheck_5231_;
goto v_resetjp_5225_;
}
v_resetjp_5225_:
{
lean_object* v___x_5229_; 
if (v_isShared_5227_ == 0)
{
v___x_5229_ = v___x_5226_;
goto v_reusejp_5228_;
}
else
{
lean_object* v_reuseFailAlloc_5230_; 
v_reuseFailAlloc_5230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5230_, 0, v_a_5224_);
v___x_5229_ = v_reuseFailAlloc_5230_;
goto v_reusejp_5228_;
}
v_reusejp_5228_:
{
return v___x_5229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f___boxed(lean_object* v_ctorApp_5232_, lean_object* v_a_5233_, lean_object* v_a_5234_, lean_object* v_a_5235_, lean_object* v_a_5236_, lean_object* v_a_5237_){
_start:
{
lean_object* v_res_5238_; 
v_res_5238_ = l_Lean_Meta_getCtorAppIndices_x3f(v_ctorApp_5232_, v_a_5233_, v_a_5234_, v_a_5235_, v_a_5236_);
lean_dec(v_a_5236_);
lean_dec_ref(v_a_5235_);
lean_dec(v_a_5234_);
lean_dec_ref(v_a_5233_);
return v_res_5238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1(lean_object* v_inst_5239_, lean_object* v_R_5240_, lean_object* v_a_5241_, lean_object* v_b_5242_){
_start:
{
lean_object* v___x_5243_; 
v___x_5243_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(v_a_5241_, v_b_5242_);
return v___x_5243_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0(lean_object* v_00_u03b1_5244_, lean_object* v_constName_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_){
_start:
{
lean_object* v___x_5251_; 
v___x_5251_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(v_constName_5245_, v___y_5246_, v___y_5247_, v___y_5248_, v___y_5249_);
return v___x_5251_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5252_, lean_object* v_constName_5253_, lean_object* v___y_5254_, lean_object* v___y_5255_, lean_object* v___y_5256_, lean_object* v___y_5257_, lean_object* v___y_5258_){
_start:
{
lean_object* v_res_5259_; 
v_res_5259_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0(v_00_u03b1_5252_, v_constName_5253_, v___y_5254_, v___y_5255_, v___y_5256_, v___y_5257_);
lean_dec(v___y_5257_);
lean_dec_ref(v___y_5256_);
lean_dec(v___y_5255_);
lean_dec_ref(v___y_5254_);
return v_res_5259_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5260_, lean_object* v_ref_5261_, lean_object* v_constName_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_){
_start:
{
lean_object* v___x_5268_; 
v___x_5268_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(v_ref_5261_, v_constName_5262_, v___y_5263_, v___y_5264_, v___y_5265_, v___y_5266_);
return v___x_5268_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5269_, lean_object* v_ref_5270_, lean_object* v_constName_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_){
_start:
{
lean_object* v_res_5277_; 
v_res_5277_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1(v_00_u03b1_5269_, v_ref_5270_, v_constName_5271_, v___y_5272_, v___y_5273_, v___y_5274_, v___y_5275_);
lean_dec(v___y_5275_);
lean_dec_ref(v___y_5274_);
lean_dec(v___y_5273_);
lean_dec_ref(v___y_5272_);
lean_dec(v_ref_5270_);
return v_res_5277_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_5278_, lean_object* v_ref_5279_, lean_object* v_msg_5280_, lean_object* v_declHint_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_){
_start:
{
lean_object* v___x_5287_; 
v___x_5287_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_5279_, v_msg_5280_, v_declHint_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_);
return v___x_5287_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_5288_, lean_object* v_ref_5289_, lean_object* v_msg_5290_, lean_object* v_declHint_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_){
_start:
{
lean_object* v_res_5297_; 
v_res_5297_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_5288_, v_ref_5289_, v_msg_5290_, v_declHint_5291_, v___y_5292_, v___y_5293_, v___y_5294_, v___y_5295_);
lean_dec(v___y_5295_);
lean_dec_ref(v___y_5294_);
lean_dec(v___y_5293_);
lean_dec_ref(v___y_5292_);
lean_dec(v_ref_5289_);
return v_res_5297_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object* v_msg_5298_, lean_object* v_declHint_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_){
_start:
{
lean_object* v___x_5305_; 
v___x_5305_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_5298_, v_declHint_5299_, v___y_5303_);
return v___x_5305_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object* v_msg_5306_, lean_object* v_declHint_5307_, lean_object* v___y_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_, lean_object* v___y_5311_, lean_object* v___y_5312_){
_start:
{
lean_object* v_res_5313_; 
v_res_5313_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(v_msg_5306_, v_declHint_5307_, v___y_5308_, v___y_5309_, v___y_5310_, v___y_5311_);
lean_dec(v___y_5311_);
lean_dec_ref(v___y_5310_);
lean_dec(v___y_5309_);
lean_dec_ref(v___y_5308_);
return v_res_5313_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_5314_, lean_object* v_ref_5315_, lean_object* v_msg_5316_, lean_object* v___y_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_){
_start:
{
lean_object* v___x_5322_; 
v___x_5322_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_5315_, v_msg_5316_, v___y_5317_, v___y_5318_, v___y_5319_, v___y_5320_);
return v___x_5322_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_5323_, lean_object* v_ref_5324_, lean_object* v_msg_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_){
_start:
{
lean_object* v_res_5331_; 
v_res_5331_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_5323_, v_ref_5324_, v_msg_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_);
lean_dec(v___y_5329_);
lean_dec_ref(v___y_5328_);
lean_dec(v___y_5327_);
lean_dec_ref(v___y_5326_);
lean_dec(v_ref_5324_);
return v_res_5331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0___boxed(lean_object* v_i_5332_, lean_object* v_body_5333_, lean_object* v_args2_5334_, lean_object* v_ctorVal_5335_, lean_object* v_args1_5336_, lean_object* v_k_5337_, lean_object* v_arg2_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_){
_start:
{
lean_object* v_res_5344_; 
v_res_5344_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0(v_i_5332_, v_body_5333_, v_args2_5334_, v_ctorVal_5335_, v_args1_5336_, v_k_5337_, v_arg2_5338_, v___y_5339_, v___y_5340_, v___y_5341_, v___y_5342_);
lean_dec(v___y_5342_);
lean_dec_ref(v___y_5341_);
lean_dec(v___y_5340_);
lean_dec_ref(v___y_5339_);
lean_dec_ref(v_body_5333_);
lean_dec(v_i_5332_);
return v_res_5344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(lean_object* v_ctorVal_5345_, lean_object* v_args1_5346_, lean_object* v_k_5347_, lean_object* v_i_5348_, lean_object* v_type_5349_, lean_object* v_args2_5350_, lean_object* v_a_5351_, lean_object* v_a_5352_, lean_object* v_a_5353_, lean_object* v_a_5354_){
_start:
{
lean_object* v___x_5356_; uint8_t v___x_5357_; 
v___x_5356_ = lean_array_get_size(v_args1_5346_);
v___x_5357_ = lean_nat_dec_lt(v_i_5348_, v___x_5356_);
if (v___x_5357_ == 0)
{
lean_object* v___x_5358_; 
lean_dec_ref(v_type_5349_);
lean_dec(v_i_5348_);
lean_dec_ref(v_args1_5346_);
lean_dec_ref(v_ctorVal_5345_);
lean_inc(v_a_5354_);
lean_inc_ref(v_a_5353_);
lean_inc(v_a_5352_);
lean_inc_ref(v_a_5351_);
v___x_5358_ = lean_apply_6(v_k_5347_, v_args2_5350_, v_a_5351_, v_a_5352_, v_a_5353_, v_a_5354_, lean_box(0));
return v___x_5358_;
}
else
{
lean_object* v___x_5359_; 
lean_inc(v_a_5354_);
lean_inc_ref(v_a_5353_);
lean_inc(v_a_5352_);
lean_inc_ref(v_a_5351_);
v___x_5359_ = lean_whnf(v_type_5349_, v_a_5351_, v_a_5352_, v_a_5353_, v_a_5354_);
if (lean_obj_tag(v___x_5359_) == 0)
{
lean_object* v_a_5360_; 
v_a_5360_ = lean_ctor_get(v___x_5359_, 0);
lean_inc(v_a_5360_);
lean_dec_ref_known(v___x_5359_, 1);
if (lean_obj_tag(v_a_5360_) == 7)
{
lean_object* v_binderName_5361_; lean_object* v_binderType_5362_; lean_object* v_body_5363_; lean_object* v___f_5364_; uint8_t v___x_5365_; uint8_t v___x_5366_; lean_object* v___x_5367_; 
v_binderName_5361_ = lean_ctor_get(v_a_5360_, 0);
lean_inc(v_binderName_5361_);
v_binderType_5362_ = lean_ctor_get(v_a_5360_, 1);
lean_inc_ref(v_binderType_5362_);
v_body_5363_ = lean_ctor_get(v_a_5360_, 2);
lean_inc_ref(v_body_5363_);
lean_dec_ref_known(v_a_5360_, 3);
v___f_5364_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0___boxed), 12, 6);
lean_closure_set(v___f_5364_, 0, v_i_5348_);
lean_closure_set(v___f_5364_, 1, v_body_5363_);
lean_closure_set(v___f_5364_, 2, v_args2_5350_);
lean_closure_set(v___f_5364_, 3, v_ctorVal_5345_);
lean_closure_set(v___f_5364_, 4, v_args1_5346_);
lean_closure_set(v___f_5364_, 5, v_k_5347_);
v___x_5365_ = 1;
v___x_5366_ = 0;
v___x_5367_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_binderName_5361_, v___x_5365_, v_binderType_5362_, v___f_5364_, v___x_5366_, v_a_5351_, v_a_5352_, v_a_5353_, v_a_5354_);
return v___x_5367_;
}
else
{
lean_object* v_toConstantVal_5368_; lean_object* v_name_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; 
lean_dec(v_a_5360_);
lean_dec_ref(v_args2_5350_);
lean_dec(v_i_5348_);
lean_dec_ref(v_k_5347_);
lean_dec_ref(v_args1_5346_);
v_toConstantVal_5368_ = lean_ctor_get(v_ctorVal_5345_, 0);
lean_inc_ref(v_toConstantVal_5368_);
lean_dec_ref(v_ctorVal_5345_);
v_name_5369_ = lean_ctor_get(v_toConstantVal_5368_, 0);
lean_inc(v_name_5369_);
lean_dec_ref(v_toConstantVal_5368_);
v___x_5370_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1);
v___x_5371_ = l_Lean_MessageData_ofName(v_name_5369_);
v___x_5372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5372_, 0, v___x_5370_);
lean_ctor_set(v___x_5372_, 1, v___x_5371_);
v___x_5373_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_5374_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5374_, 0, v___x_5372_);
lean_ctor_set(v___x_5374_, 1, v___x_5373_);
v___x_5375_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_5374_, v_a_5351_, v_a_5352_, v_a_5353_, v_a_5354_);
return v___x_5375_;
}
}
else
{
lean_object* v_a_5376_; lean_object* v___x_5378_; uint8_t v_isShared_5379_; uint8_t v_isSharedCheck_5383_; 
lean_dec_ref(v_args2_5350_);
lean_dec(v_i_5348_);
lean_dec_ref(v_k_5347_);
lean_dec_ref(v_args1_5346_);
lean_dec_ref(v_ctorVal_5345_);
v_a_5376_ = lean_ctor_get(v___x_5359_, 0);
v_isSharedCheck_5383_ = !lean_is_exclusive(v___x_5359_);
if (v_isSharedCheck_5383_ == 0)
{
v___x_5378_ = v___x_5359_;
v_isShared_5379_ = v_isSharedCheck_5383_;
goto v_resetjp_5377_;
}
else
{
lean_inc(v_a_5376_);
lean_dec(v___x_5359_);
v___x_5378_ = lean_box(0);
v_isShared_5379_ = v_isSharedCheck_5383_;
goto v_resetjp_5377_;
}
v_resetjp_5377_:
{
lean_object* v___x_5381_; 
if (v_isShared_5379_ == 0)
{
v___x_5381_ = v___x_5378_;
goto v_reusejp_5380_;
}
else
{
lean_object* v_reuseFailAlloc_5382_; 
v_reuseFailAlloc_5382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5382_, 0, v_a_5376_);
v___x_5381_ = v_reuseFailAlloc_5382_;
goto v_reusejp_5380_;
}
v_reusejp_5380_:
{
return v___x_5381_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0(lean_object* v_i_5384_, lean_object* v_body_5385_, lean_object* v_args2_5386_, lean_object* v_ctorVal_5387_, lean_object* v_args1_5388_, lean_object* v_k_5389_, lean_object* v_arg2_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_){
_start:
{
lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; 
v___x_5396_ = lean_unsigned_to_nat(1u);
v___x_5397_ = lean_nat_add(v_i_5384_, v___x_5396_);
v___x_5398_ = lean_expr_instantiate1(v_body_5385_, v_arg2_5390_);
v___x_5399_ = lean_array_push(v_args2_5386_, v_arg2_5390_);
v___x_5400_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(v_ctorVal_5387_, v_args1_5388_, v_k_5389_, v___x_5397_, v___x_5398_, v___x_5399_, v___y_5391_, v___y_5392_, v___y_5393_, v___y_5394_);
return v___x_5400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___boxed(lean_object* v_ctorVal_5401_, lean_object* v_args1_5402_, lean_object* v_k_5403_, lean_object* v_i_5404_, lean_object* v_type_5405_, lean_object* v_args2_5406_, lean_object* v_a_5407_, lean_object* v_a_5408_, lean_object* v_a_5409_, lean_object* v_a_5410_, lean_object* v_a_5411_){
_start:
{
lean_object* v_res_5412_; 
v_res_5412_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(v_ctorVal_5401_, v_args1_5402_, v_k_5403_, v_i_5404_, v_type_5405_, v_args2_5406_, v_a_5407_, v_a_5408_, v_a_5409_, v_a_5410_);
lean_dec(v_a_5410_);
lean_dec_ref(v_a_5409_);
lean_dec(v_a_5408_);
lean_dec_ref(v_a_5407_);
return v_res_5412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0(lean_object* v___x_5413_, lean_object* v_numParams_5414_, lean_object* v_name_5415_, lean_object* v_us_5416_, lean_object* v_args1_5417_, lean_object* v___x_5418_, lean_object* v_args2_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_){
_start:
{
lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; 
lean_inc_ref(v_args2_5419_);
v___x_5425_ = l_Array_toSubarray___redArg(v_args2_5419_, v___x_5413_, v_numParams_5414_);
lean_inc(v_us_5416_);
v___x_5426_ = l_Lean_mkConst(v_name_5415_, v_us_5416_);
lean_inc_ref(v___x_5426_);
v___x_5427_ = l_Lean_mkAppN(v___x_5426_, v_args1_5417_);
v___x_5428_ = l_Lean_mkAppN(v___x_5426_, v_args2_5419_);
lean_inc_ref(v___x_5428_);
lean_inc_ref(v___x_5427_);
v___x_5429_ = l_Lean_Meta_mkEqHEq(v___x_5427_, v___x_5428_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_);
if (lean_obj_tag(v___x_5429_) == 0)
{
lean_object* v_a_5430_; uint8_t v___x_5431_; lean_object* v___x_5432_; 
v_a_5430_ = lean_ctor_get(v___x_5429_, 0);
lean_inc(v_a_5430_);
lean_dec_ref_known(v___x_5429_, 1);
v___x_5431_ = 1;
lean_inc_ref(v_args2_5419_);
v___x_5432_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v_args1_5417_, v_args2_5419_, v___x_5431_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_);
if (lean_obj_tag(v___x_5432_) == 0)
{
lean_object* v_a_5433_; lean_object* v___x_5435_; uint8_t v_isShared_5436_; uint8_t v_isSharedCheck_5553_; 
v_a_5433_ = lean_ctor_get(v___x_5432_, 0);
v_isSharedCheck_5553_ = !lean_is_exclusive(v___x_5432_);
if (v_isSharedCheck_5553_ == 0)
{
v___x_5435_ = v___x_5432_;
v_isShared_5436_ = v_isSharedCheck_5553_;
goto v_resetjp_5434_;
}
else
{
lean_inc(v_a_5433_);
lean_dec(v___x_5432_);
v___x_5435_ = lean_box(0);
v_isShared_5436_ = v_isSharedCheck_5553_;
goto v_resetjp_5434_;
}
v_resetjp_5434_:
{
lean_object* v___x_5437_; 
v___x_5437_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(v_a_5433_);
if (lean_obj_tag(v___x_5437_) == 1)
{
lean_object* v_val_5438_; lean_object* v___x_5439_; 
lean_del_object(v___x_5435_);
v_val_5438_ = lean_ctor_get(v___x_5437_, 0);
lean_inc(v_val_5438_);
lean_dec_ref_known(v___x_5437_, 1);
v___x_5439_ = l_Lean_mkArrow(v_a_5430_, v_val_5438_, v___y_5422_, v___y_5423_);
if (lean_obj_tag(v___x_5439_) == 0)
{
lean_object* v_a_5440_; lean_object* v___x_5441_; 
v_a_5440_ = lean_ctor_get(v___x_5439_, 0);
lean_inc(v_a_5440_);
lean_dec_ref_known(v___x_5439_, 1);
v___x_5441_ = l_Lean_Meta_getCtorAppIndices_x3f(v___x_5427_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_);
if (lean_obj_tag(v___x_5441_) == 0)
{
lean_object* v_a_5442_; lean_object* v___x_5444_; uint8_t v_isShared_5445_; uint8_t v_isSharedCheck_5532_; 
v_a_5442_ = lean_ctor_get(v___x_5441_, 0);
v_isSharedCheck_5532_ = !lean_is_exclusive(v___x_5441_);
if (v_isSharedCheck_5532_ == 0)
{
v___x_5444_ = v___x_5441_;
v_isShared_5445_ = v_isSharedCheck_5532_;
goto v_resetjp_5443_;
}
else
{
lean_inc(v_a_5442_);
lean_dec(v___x_5441_);
v___x_5444_ = lean_box(0);
v_isShared_5445_ = v_isSharedCheck_5532_;
goto v_resetjp_5443_;
}
v_resetjp_5443_:
{
if (lean_obj_tag(v_a_5442_) == 1)
{
lean_object* v_val_5446_; lean_object* v___x_5447_; 
lean_del_object(v___x_5444_);
v_val_5446_ = lean_ctor_get(v_a_5442_, 0);
lean_inc(v_val_5446_);
lean_dec_ref_known(v_a_5442_, 1);
v___x_5447_ = l_Lean_Meta_getCtorAppIndices_x3f(v___x_5428_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_);
if (lean_obj_tag(v___x_5447_) == 0)
{
lean_object* v_a_5448_; lean_object* v___x_5450_; uint8_t v_isShared_5451_; uint8_t v_isSharedCheck_5519_; 
v_a_5448_ = lean_ctor_get(v___x_5447_, 0);
v_isSharedCheck_5519_ = !lean_is_exclusive(v___x_5447_);
if (v_isSharedCheck_5519_ == 0)
{
v___x_5450_ = v___x_5447_;
v_isShared_5451_ = v_isSharedCheck_5519_;
goto v_resetjp_5449_;
}
else
{
lean_inc(v_a_5448_);
lean_dec(v___x_5447_);
v___x_5450_ = lean_box(0);
v_isShared_5451_ = v_isSharedCheck_5519_;
goto v_resetjp_5449_;
}
v_resetjp_5449_:
{
if (lean_obj_tag(v_a_5448_) == 1)
{
lean_object* v_val_5452_; lean_object* v___x_5454_; uint8_t v_isShared_5455_; uint8_t v_isSharedCheck_5514_; 
lean_del_object(v___x_5450_);
v_val_5452_ = lean_ctor_get(v_a_5448_, 0);
v_isSharedCheck_5514_ = !lean_is_exclusive(v_a_5448_);
if (v_isSharedCheck_5514_ == 0)
{
v___x_5454_ = v_a_5448_;
v_isShared_5455_ = v_isSharedCheck_5514_;
goto v_resetjp_5453_;
}
else
{
lean_inc(v_val_5452_);
lean_dec(v_a_5448_);
v___x_5454_ = lean_box(0);
v_isShared_5455_ = v_isSharedCheck_5514_;
goto v_resetjp_5453_;
}
v_resetjp_5453_:
{
lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; uint8_t v___x_5460_; lean_object* v___x_5461_; 
v___x_5456_ = l_Subarray_copy___redArg(v___x_5418_);
v___x_5457_ = l_Array_append___redArg(v___x_5456_, v_val_5446_);
v___x_5458_ = l_Subarray_copy___redArg(v___x_5425_);
v___x_5459_ = l_Array_append___redArg(v___x_5458_, v_val_5452_);
lean_dec(v_val_5452_);
v___x_5460_ = 0;
v___x_5461_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v___x_5457_, v___x_5459_, v___x_5460_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_);
lean_dec_ref(v___x_5457_);
if (lean_obj_tag(v___x_5461_) == 0)
{
lean_object* v_a_5462_; lean_object* v___x_5463_; 
v_a_5462_ = lean_ctor_get(v___x_5461_, 0);
lean_inc(v_a_5462_);
lean_dec_ref_known(v___x_5461_, 1);
v___x_5463_ = l_Lean_mkArrowN(v_a_5462_, v_a_5440_, v___y_5422_, v___y_5423_);
lean_dec(v_a_5462_);
if (lean_obj_tag(v___x_5463_) == 0)
{
lean_object* v_a_5464_; uint8_t v___x_5465_; lean_object* v___x_5466_; 
v_a_5464_ = lean_ctor_get(v___x_5463_, 0);
lean_inc(v_a_5464_);
lean_dec_ref_known(v___x_5463_, 1);
v___x_5465_ = 1;
v___x_5466_ = l_Lean_Meta_mkForallFVars(v_args2_5419_, v_a_5464_, v___x_5460_, v___x_5431_, v___x_5431_, v___x_5465_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_);
if (lean_obj_tag(v___x_5466_) == 0)
{
lean_object* v_a_5467_; lean_object* v___x_5468_; 
v_a_5467_ = lean_ctor_get(v___x_5466_, 0);
lean_inc(v_a_5467_);
lean_dec_ref_known(v___x_5466_, 1);
v___x_5468_ = l_Lean_Meta_mkForallFVars(v_args1_5417_, v_a_5467_, v___x_5460_, v___x_5431_, v___x_5431_, v___x_5465_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_);
if (lean_obj_tag(v___x_5468_) == 0)
{
lean_object* v_a_5469_; lean_object* v___x_5471_; uint8_t v_isShared_5472_; uint8_t v_isSharedCheck_5481_; 
v_a_5469_ = lean_ctor_get(v___x_5468_, 0);
v_isSharedCheck_5481_ = !lean_is_exclusive(v___x_5468_);
if (v_isSharedCheck_5481_ == 0)
{
v___x_5471_ = v___x_5468_;
v_isShared_5472_ = v_isSharedCheck_5481_;
goto v_resetjp_5470_;
}
else
{
lean_inc(v_a_5469_);
lean_dec(v___x_5468_);
v___x_5471_ = lean_box(0);
v_isShared_5472_ = v_isSharedCheck_5481_;
goto v_resetjp_5470_;
}
v_resetjp_5470_:
{
lean_object* v___x_5473_; lean_object* v___x_5474_; lean_object* v___x_5476_; 
v___x_5473_ = lean_array_get_size(v_val_5446_);
lean_dec(v_val_5446_);
v___x_5474_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5474_, 0, v_a_5469_);
lean_ctor_set(v___x_5474_, 1, v_us_5416_);
lean_ctor_set(v___x_5474_, 2, v___x_5473_);
if (v_isShared_5455_ == 0)
{
lean_ctor_set(v___x_5454_, 0, v___x_5474_);
v___x_5476_ = v___x_5454_;
goto v_reusejp_5475_;
}
else
{
lean_object* v_reuseFailAlloc_5480_; 
v_reuseFailAlloc_5480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5480_, 0, v___x_5474_);
v___x_5476_ = v_reuseFailAlloc_5480_;
goto v_reusejp_5475_;
}
v_reusejp_5475_:
{
lean_object* v___x_5478_; 
if (v_isShared_5472_ == 0)
{
lean_ctor_set(v___x_5471_, 0, v___x_5476_);
v___x_5478_ = v___x_5471_;
goto v_reusejp_5477_;
}
else
{
lean_object* v_reuseFailAlloc_5479_; 
v_reuseFailAlloc_5479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5479_, 0, v___x_5476_);
v___x_5478_ = v_reuseFailAlloc_5479_;
goto v_reusejp_5477_;
}
v_reusejp_5477_:
{
return v___x_5478_;
}
}
}
}
else
{
lean_object* v_a_5482_; lean_object* v___x_5484_; uint8_t v_isShared_5485_; uint8_t v_isSharedCheck_5489_; 
lean_del_object(v___x_5454_);
lean_dec(v_val_5446_);
lean_dec(v_us_5416_);
v_a_5482_ = lean_ctor_get(v___x_5468_, 0);
v_isSharedCheck_5489_ = !lean_is_exclusive(v___x_5468_);
if (v_isSharedCheck_5489_ == 0)
{
v___x_5484_ = v___x_5468_;
v_isShared_5485_ = v_isSharedCheck_5489_;
goto v_resetjp_5483_;
}
else
{
lean_inc(v_a_5482_);
lean_dec(v___x_5468_);
v___x_5484_ = lean_box(0);
v_isShared_5485_ = v_isSharedCheck_5489_;
goto v_resetjp_5483_;
}
v_resetjp_5483_:
{
lean_object* v___x_5487_; 
if (v_isShared_5485_ == 0)
{
v___x_5487_ = v___x_5484_;
goto v_reusejp_5486_;
}
else
{
lean_object* v_reuseFailAlloc_5488_; 
v_reuseFailAlloc_5488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5488_, 0, v_a_5482_);
v___x_5487_ = v_reuseFailAlloc_5488_;
goto v_reusejp_5486_;
}
v_reusejp_5486_:
{
return v___x_5487_;
}
}
}
}
else
{
lean_object* v_a_5490_; lean_object* v___x_5492_; uint8_t v_isShared_5493_; uint8_t v_isSharedCheck_5497_; 
lean_del_object(v___x_5454_);
lean_dec(v_val_5446_);
lean_dec_ref(v_args1_5417_);
lean_dec(v_us_5416_);
v_a_5490_ = lean_ctor_get(v___x_5466_, 0);
v_isSharedCheck_5497_ = !lean_is_exclusive(v___x_5466_);
if (v_isSharedCheck_5497_ == 0)
{
v___x_5492_ = v___x_5466_;
v_isShared_5493_ = v_isSharedCheck_5497_;
goto v_resetjp_5491_;
}
else
{
lean_inc(v_a_5490_);
lean_dec(v___x_5466_);
v___x_5492_ = lean_box(0);
v_isShared_5493_ = v_isSharedCheck_5497_;
goto v_resetjp_5491_;
}
v_resetjp_5491_:
{
lean_object* v___x_5495_; 
if (v_isShared_5493_ == 0)
{
v___x_5495_ = v___x_5492_;
goto v_reusejp_5494_;
}
else
{
lean_object* v_reuseFailAlloc_5496_; 
v_reuseFailAlloc_5496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5496_, 0, v_a_5490_);
v___x_5495_ = v_reuseFailAlloc_5496_;
goto v_reusejp_5494_;
}
v_reusejp_5494_:
{
return v___x_5495_;
}
}
}
}
else
{
lean_object* v_a_5498_; lean_object* v___x_5500_; uint8_t v_isShared_5501_; uint8_t v_isSharedCheck_5505_; 
lean_del_object(v___x_5454_);
lean_dec(v_val_5446_);
lean_dec_ref(v_args2_5419_);
lean_dec_ref(v_args1_5417_);
lean_dec(v_us_5416_);
v_a_5498_ = lean_ctor_get(v___x_5463_, 0);
v_isSharedCheck_5505_ = !lean_is_exclusive(v___x_5463_);
if (v_isSharedCheck_5505_ == 0)
{
v___x_5500_ = v___x_5463_;
v_isShared_5501_ = v_isSharedCheck_5505_;
goto v_resetjp_5499_;
}
else
{
lean_inc(v_a_5498_);
lean_dec(v___x_5463_);
v___x_5500_ = lean_box(0);
v_isShared_5501_ = v_isSharedCheck_5505_;
goto v_resetjp_5499_;
}
v_resetjp_5499_:
{
lean_object* v___x_5503_; 
if (v_isShared_5501_ == 0)
{
v___x_5503_ = v___x_5500_;
goto v_reusejp_5502_;
}
else
{
lean_object* v_reuseFailAlloc_5504_; 
v_reuseFailAlloc_5504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5504_, 0, v_a_5498_);
v___x_5503_ = v_reuseFailAlloc_5504_;
goto v_reusejp_5502_;
}
v_reusejp_5502_:
{
return v___x_5503_;
}
}
}
}
else
{
lean_object* v_a_5506_; lean_object* v___x_5508_; uint8_t v_isShared_5509_; uint8_t v_isSharedCheck_5513_; 
lean_del_object(v___x_5454_);
lean_dec(v_val_5446_);
lean_dec(v_a_5440_);
lean_dec_ref(v_args2_5419_);
lean_dec_ref(v_args1_5417_);
lean_dec(v_us_5416_);
v_a_5506_ = lean_ctor_get(v___x_5461_, 0);
v_isSharedCheck_5513_ = !lean_is_exclusive(v___x_5461_);
if (v_isSharedCheck_5513_ == 0)
{
v___x_5508_ = v___x_5461_;
v_isShared_5509_ = v_isSharedCheck_5513_;
goto v_resetjp_5507_;
}
else
{
lean_inc(v_a_5506_);
lean_dec(v___x_5461_);
v___x_5508_ = lean_box(0);
v_isShared_5509_ = v_isSharedCheck_5513_;
goto v_resetjp_5507_;
}
v_resetjp_5507_:
{
lean_object* v___x_5511_; 
if (v_isShared_5509_ == 0)
{
v___x_5511_ = v___x_5508_;
goto v_reusejp_5510_;
}
else
{
lean_object* v_reuseFailAlloc_5512_; 
v_reuseFailAlloc_5512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5512_, 0, v_a_5506_);
v___x_5511_ = v_reuseFailAlloc_5512_;
goto v_reusejp_5510_;
}
v_reusejp_5510_:
{
return v___x_5511_;
}
}
}
}
}
else
{
lean_object* v___x_5515_; lean_object* v___x_5517_; 
lean_dec(v_a_5448_);
lean_dec(v_val_5446_);
lean_dec(v_a_5440_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v_args2_5419_);
lean_dec_ref(v___x_5418_);
lean_dec_ref(v_args1_5417_);
lean_dec(v_us_5416_);
v___x_5515_ = lean_box(0);
if (v_isShared_5451_ == 0)
{
lean_ctor_set(v___x_5450_, 0, v___x_5515_);
v___x_5517_ = v___x_5450_;
goto v_reusejp_5516_;
}
else
{
lean_object* v_reuseFailAlloc_5518_; 
v_reuseFailAlloc_5518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5518_, 0, v___x_5515_);
v___x_5517_ = v_reuseFailAlloc_5518_;
goto v_reusejp_5516_;
}
v_reusejp_5516_:
{
return v___x_5517_;
}
}
}
}
else
{
lean_object* v_a_5520_; lean_object* v___x_5522_; uint8_t v_isShared_5523_; uint8_t v_isSharedCheck_5527_; 
lean_dec(v_val_5446_);
lean_dec(v_a_5440_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v_args2_5419_);
lean_dec_ref(v___x_5418_);
lean_dec_ref(v_args1_5417_);
lean_dec(v_us_5416_);
v_a_5520_ = lean_ctor_get(v___x_5447_, 0);
v_isSharedCheck_5527_ = !lean_is_exclusive(v___x_5447_);
if (v_isSharedCheck_5527_ == 0)
{
v___x_5522_ = v___x_5447_;
v_isShared_5523_ = v_isSharedCheck_5527_;
goto v_resetjp_5521_;
}
else
{
lean_inc(v_a_5520_);
lean_dec(v___x_5447_);
v___x_5522_ = lean_box(0);
v_isShared_5523_ = v_isSharedCheck_5527_;
goto v_resetjp_5521_;
}
v_resetjp_5521_:
{
lean_object* v___x_5525_; 
if (v_isShared_5523_ == 0)
{
v___x_5525_ = v___x_5522_;
goto v_reusejp_5524_;
}
else
{
lean_object* v_reuseFailAlloc_5526_; 
v_reuseFailAlloc_5526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5526_, 0, v_a_5520_);
v___x_5525_ = v_reuseFailAlloc_5526_;
goto v_reusejp_5524_;
}
v_reusejp_5524_:
{
return v___x_5525_;
}
}
}
}
else
{
lean_object* v___x_5528_; lean_object* v___x_5530_; 
lean_dec(v_a_5442_);
lean_dec(v_a_5440_);
lean_dec_ref(v___x_5428_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v_args2_5419_);
lean_dec_ref(v___x_5418_);
lean_dec_ref(v_args1_5417_);
lean_dec(v_us_5416_);
v___x_5528_ = lean_box(0);
if (v_isShared_5445_ == 0)
{
lean_ctor_set(v___x_5444_, 0, v___x_5528_);
v___x_5530_ = v___x_5444_;
goto v_reusejp_5529_;
}
else
{
lean_object* v_reuseFailAlloc_5531_; 
v_reuseFailAlloc_5531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5531_, 0, v___x_5528_);
v___x_5530_ = v_reuseFailAlloc_5531_;
goto v_reusejp_5529_;
}
v_reusejp_5529_:
{
return v___x_5530_;
}
}
}
}
else
{
lean_object* v_a_5533_; lean_object* v___x_5535_; uint8_t v_isShared_5536_; uint8_t v_isSharedCheck_5540_; 
lean_dec(v_a_5440_);
lean_dec_ref(v___x_5428_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v_args2_5419_);
lean_dec_ref(v___x_5418_);
lean_dec_ref(v_args1_5417_);
lean_dec(v_us_5416_);
v_a_5533_ = lean_ctor_get(v___x_5441_, 0);
v_isSharedCheck_5540_ = !lean_is_exclusive(v___x_5441_);
if (v_isSharedCheck_5540_ == 0)
{
v___x_5535_ = v___x_5441_;
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
else
{
lean_inc(v_a_5533_);
lean_dec(v___x_5441_);
v___x_5535_ = lean_box(0);
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
v_resetjp_5534_:
{
lean_object* v___x_5538_; 
if (v_isShared_5536_ == 0)
{
v___x_5538_ = v___x_5535_;
goto v_reusejp_5537_;
}
else
{
lean_object* v_reuseFailAlloc_5539_; 
v_reuseFailAlloc_5539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5539_, 0, v_a_5533_);
v___x_5538_ = v_reuseFailAlloc_5539_;
goto v_reusejp_5537_;
}
v_reusejp_5537_:
{
return v___x_5538_;
}
}
}
}
else
{
lean_object* v_a_5541_; lean_object* v___x_5543_; uint8_t v_isShared_5544_; uint8_t v_isSharedCheck_5548_; 
lean_dec_ref(v___x_5428_);
lean_dec_ref(v___x_5427_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v_args2_5419_);
lean_dec_ref(v___x_5418_);
lean_dec_ref(v_args1_5417_);
lean_dec(v_us_5416_);
v_a_5541_ = lean_ctor_get(v___x_5439_, 0);
v_isSharedCheck_5548_ = !lean_is_exclusive(v___x_5439_);
if (v_isSharedCheck_5548_ == 0)
{
v___x_5543_ = v___x_5439_;
v_isShared_5544_ = v_isSharedCheck_5548_;
goto v_resetjp_5542_;
}
else
{
lean_inc(v_a_5541_);
lean_dec(v___x_5439_);
v___x_5543_ = lean_box(0);
v_isShared_5544_ = v_isSharedCheck_5548_;
goto v_resetjp_5542_;
}
v_resetjp_5542_:
{
lean_object* v___x_5546_; 
if (v_isShared_5544_ == 0)
{
v___x_5546_ = v___x_5543_;
goto v_reusejp_5545_;
}
else
{
lean_object* v_reuseFailAlloc_5547_; 
v_reuseFailAlloc_5547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5547_, 0, v_a_5541_);
v___x_5546_ = v_reuseFailAlloc_5547_;
goto v_reusejp_5545_;
}
v_reusejp_5545_:
{
return v___x_5546_;
}
}
}
}
else
{
lean_object* v___x_5549_; lean_object* v___x_5551_; 
lean_dec(v___x_5437_);
lean_dec(v_a_5430_);
lean_dec_ref(v___x_5428_);
lean_dec_ref(v___x_5427_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v_args2_5419_);
lean_dec_ref(v___x_5418_);
lean_dec_ref(v_args1_5417_);
lean_dec(v_us_5416_);
v___x_5549_ = lean_box(0);
if (v_isShared_5436_ == 0)
{
lean_ctor_set(v___x_5435_, 0, v___x_5549_);
v___x_5551_ = v___x_5435_;
goto v_reusejp_5550_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v___x_5549_);
v___x_5551_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5550_;
}
v_reusejp_5550_:
{
return v___x_5551_;
}
}
}
}
else
{
lean_object* v_a_5554_; lean_object* v___x_5556_; uint8_t v_isShared_5557_; uint8_t v_isSharedCheck_5561_; 
lean_dec(v_a_5430_);
lean_dec_ref(v___x_5428_);
lean_dec_ref(v___x_5427_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v_args2_5419_);
lean_dec_ref(v___x_5418_);
lean_dec_ref(v_args1_5417_);
lean_dec(v_us_5416_);
v_a_5554_ = lean_ctor_get(v___x_5432_, 0);
v_isSharedCheck_5561_ = !lean_is_exclusive(v___x_5432_);
if (v_isSharedCheck_5561_ == 0)
{
v___x_5556_ = v___x_5432_;
v_isShared_5557_ = v_isSharedCheck_5561_;
goto v_resetjp_5555_;
}
else
{
lean_inc(v_a_5554_);
lean_dec(v___x_5432_);
v___x_5556_ = lean_box(0);
v_isShared_5557_ = v_isSharedCheck_5561_;
goto v_resetjp_5555_;
}
v_resetjp_5555_:
{
lean_object* v___x_5559_; 
if (v_isShared_5557_ == 0)
{
v___x_5559_ = v___x_5556_;
goto v_reusejp_5558_;
}
else
{
lean_object* v_reuseFailAlloc_5560_; 
v_reuseFailAlloc_5560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5560_, 0, v_a_5554_);
v___x_5559_ = v_reuseFailAlloc_5560_;
goto v_reusejp_5558_;
}
v_reusejp_5558_:
{
return v___x_5559_;
}
}
}
}
else
{
lean_object* v_a_5562_; lean_object* v___x_5564_; uint8_t v_isShared_5565_; uint8_t v_isSharedCheck_5569_; 
lean_dec_ref(v___x_5428_);
lean_dec_ref(v___x_5427_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v_args2_5419_);
lean_dec_ref(v___x_5418_);
lean_dec_ref(v_args1_5417_);
lean_dec(v_us_5416_);
v_a_5562_ = lean_ctor_get(v___x_5429_, 0);
v_isSharedCheck_5569_ = !lean_is_exclusive(v___x_5429_);
if (v_isSharedCheck_5569_ == 0)
{
v___x_5564_ = v___x_5429_;
v_isShared_5565_ = v_isSharedCheck_5569_;
goto v_resetjp_5563_;
}
else
{
lean_inc(v_a_5562_);
lean_dec(v___x_5429_);
v___x_5564_ = lean_box(0);
v_isShared_5565_ = v_isSharedCheck_5569_;
goto v_resetjp_5563_;
}
v_resetjp_5563_:
{
lean_object* v___x_5567_; 
if (v_isShared_5565_ == 0)
{
v___x_5567_ = v___x_5564_;
goto v_reusejp_5566_;
}
else
{
lean_object* v_reuseFailAlloc_5568_; 
v_reuseFailAlloc_5568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5568_, 0, v_a_5562_);
v___x_5567_ = v_reuseFailAlloc_5568_;
goto v_reusejp_5566_;
}
v_reusejp_5566_:
{
return v___x_5567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0___boxed(lean_object* v___x_5570_, lean_object* v_numParams_5571_, lean_object* v_name_5572_, lean_object* v_us_5573_, lean_object* v_args1_5574_, lean_object* v___x_5575_, lean_object* v_args2_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_, lean_object* v___y_5579_, lean_object* v___y_5580_, lean_object* v___y_5581_){
_start:
{
lean_object* v_res_5582_; 
v_res_5582_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0(v___x_5570_, v_numParams_5571_, v_name_5572_, v_us_5573_, v_args1_5574_, v___x_5575_, v_args2_5576_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_);
lean_dec(v___y_5580_);
lean_dec_ref(v___y_5579_);
lean_dec(v___y_5578_);
lean_dec_ref(v___y_5577_);
return v_res_5582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1(lean_object* v_numParams_5583_, lean_object* v_name_5584_, lean_object* v_us_5585_, lean_object* v_ctorVal_5586_, lean_object* v_a_5587_, lean_object* v_args1_5588_, lean_object* v_x_5589_, lean_object* v___y_5590_, lean_object* v___y_5591_, lean_object* v___y_5592_, lean_object* v___y_5593_){
_start:
{
lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___f_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; 
v___x_5595_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_5583_);
lean_inc_ref_n(v_args1_5588_, 3);
v___x_5596_ = l_Array_toSubarray___redArg(v_args1_5588_, v___x_5595_, v_numParams_5583_);
v___f_5597_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0___boxed), 12, 6);
lean_closure_set(v___f_5597_, 0, v___x_5595_);
lean_closure_set(v___f_5597_, 1, v_numParams_5583_);
lean_closure_set(v___f_5597_, 2, v_name_5584_);
lean_closure_set(v___f_5597_, 3, v_us_5585_);
lean_closure_set(v___f_5597_, 4, v_args1_5588_);
lean_closure_set(v___f_5597_, 5, v___x_5596_);
v___x_5598_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_5599_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___boxed), 11, 6);
lean_closure_set(v___x_5599_, 0, v_ctorVal_5586_);
lean_closure_set(v___x_5599_, 1, v_args1_5588_);
lean_closure_set(v___x_5599_, 2, v___f_5597_);
lean_closure_set(v___x_5599_, 3, v___x_5595_);
lean_closure_set(v___x_5599_, 4, v_a_5587_);
lean_closure_set(v___x_5599_, 5, v___x_5598_);
v___x_5600_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v_args1_5588_, v___x_5599_, v___y_5590_, v___y_5591_, v___y_5592_, v___y_5593_);
lean_dec_ref(v_args1_5588_);
return v___x_5600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1___boxed(lean_object* v_numParams_5601_, lean_object* v_name_5602_, lean_object* v_us_5603_, lean_object* v_ctorVal_5604_, lean_object* v_a_5605_, lean_object* v_args1_5606_, lean_object* v_x_5607_, lean_object* v___y_5608_, lean_object* v___y_5609_, lean_object* v___y_5610_, lean_object* v___y_5611_, lean_object* v___y_5612_){
_start:
{
lean_object* v_res_5613_; 
v_res_5613_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1(v_numParams_5601_, v_name_5602_, v_us_5603_, v_ctorVal_5604_, v_a_5605_, v_args1_5606_, v_x_5607_, v___y_5608_, v___y_5609_, v___y_5610_, v___y_5611_);
lean_dec(v___y_5611_);
lean_dec_ref(v___y_5610_);
lean_dec(v___y_5609_);
lean_dec_ref(v___y_5608_);
lean_dec_ref(v_x_5607_);
return v_res_5613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(lean_object* v_ctorVal_5614_, lean_object* v_a_5615_, lean_object* v_a_5616_, lean_object* v_a_5617_, lean_object* v_a_5618_){
_start:
{
lean_object* v_toConstantVal_5620_; lean_object* v_numParams_5621_; lean_object* v_name_5622_; lean_object* v_levelParams_5623_; lean_object* v_type_5624_; lean_object* v___x_5625_; lean_object* v_us_5626_; lean_object* v___x_5627_; 
v_toConstantVal_5620_ = lean_ctor_get(v_ctorVal_5614_, 0);
v_numParams_5621_ = lean_ctor_get(v_ctorVal_5614_, 3);
lean_inc(v_numParams_5621_);
v_name_5622_ = lean_ctor_get(v_toConstantVal_5620_, 0);
lean_inc(v_name_5622_);
v_levelParams_5623_ = lean_ctor_get(v_toConstantVal_5620_, 1);
v_type_5624_ = lean_ctor_get(v_toConstantVal_5620_, 2);
v___x_5625_ = lean_box(0);
lean_inc(v_levelParams_5623_);
v_us_5626_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(v_levelParams_5623_, v___x_5625_);
lean_inc_ref(v_type_5624_);
v___x_5627_ = l_Lean_Meta_elimOptParam(v_type_5624_, v_a_5617_, v_a_5618_);
if (lean_obj_tag(v___x_5627_) == 0)
{
lean_object* v_a_5628_; lean_object* v___f_5629_; uint8_t v___x_5630_; lean_object* v___x_5631_; 
v_a_5628_ = lean_ctor_get(v___x_5627_, 0);
lean_inc_n(v_a_5628_, 2);
lean_dec_ref_known(v___x_5627_, 1);
v___f_5629_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1___boxed), 12, 5);
lean_closure_set(v___f_5629_, 0, v_numParams_5621_);
lean_closure_set(v___f_5629_, 1, v_name_5622_);
lean_closure_set(v___f_5629_, 2, v_us_5626_);
lean_closure_set(v___f_5629_, 3, v_ctorVal_5614_);
lean_closure_set(v___f_5629_, 4, v_a_5628_);
v___x_5630_ = 0;
v___x_5631_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_a_5628_, v___f_5629_, v___x_5630_, v_a_5615_, v_a_5616_, v_a_5617_, v_a_5618_);
return v___x_5631_;
}
else
{
lean_object* v_a_5632_; lean_object* v___x_5634_; uint8_t v_isShared_5635_; uint8_t v_isSharedCheck_5639_; 
lean_dec(v_us_5626_);
lean_dec(v_name_5622_);
lean_dec(v_numParams_5621_);
lean_dec_ref(v_ctorVal_5614_);
v_a_5632_ = lean_ctor_get(v___x_5627_, 0);
v_isSharedCheck_5639_ = !lean_is_exclusive(v___x_5627_);
if (v_isSharedCheck_5639_ == 0)
{
v___x_5634_ = v___x_5627_;
v_isShared_5635_ = v_isSharedCheck_5639_;
goto v_resetjp_5633_;
}
else
{
lean_inc(v_a_5632_);
lean_dec(v___x_5627_);
v___x_5634_ = lean_box(0);
v_isShared_5635_ = v_isSharedCheck_5639_;
goto v_resetjp_5633_;
}
v_resetjp_5633_:
{
lean_object* v___x_5637_; 
if (v_isShared_5635_ == 0)
{
v___x_5637_ = v___x_5634_;
goto v_reusejp_5636_;
}
else
{
lean_object* v_reuseFailAlloc_5638_; 
v_reuseFailAlloc_5638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5638_, 0, v_a_5632_);
v___x_5637_ = v_reuseFailAlloc_5638_;
goto v_reusejp_5636_;
}
v_reusejp_5636_:
{
return v___x_5637_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___boxed(lean_object* v_ctorVal_5640_, lean_object* v_a_5641_, lean_object* v_a_5642_, lean_object* v_a_5643_, lean_object* v_a_5644_, lean_object* v_a_5645_){
_start:
{
lean_object* v_res_5646_; 
v_res_5646_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(v_ctorVal_5640_, v_a_5641_, v_a_5642_, v_a_5643_, v_a_5644_);
lean_dec(v_a_5644_);
lean_dec_ref(v_a_5643_);
lean_dec(v_a_5642_);
lean_dec_ref(v_a_5641_);
return v_res_5646_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1(void){
_start:
{
lean_object* v___x_5648_; lean_object* v___x_5649_; 
v___x_5648_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0));
v___x_5649_ = l_Lean_stringToMessageData(v___x_5648_);
return v___x_5649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(lean_object* v_ctorVal_5650_, lean_object* v_a_5651_, lean_object* v_a_5652_, lean_object* v_a_5653_, lean_object* v_a_5654_){
_start:
{
lean_object* v_toConstantVal_5656_; lean_object* v_name_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; 
v_toConstantVal_5656_ = lean_ctor_get(v_ctorVal_5650_, 0);
lean_inc_ref(v_toConstantVal_5656_);
lean_dec_ref(v_ctorVal_5650_);
v_name_5657_ = lean_ctor_get(v_toConstantVal_5656_, 0);
lean_inc(v_name_5657_);
lean_dec_ref(v_toConstantVal_5656_);
v___x_5658_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1);
v___x_5659_ = l_Lean_MessageData_ofName(v_name_5657_);
v___x_5660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5660_, 0, v___x_5658_);
lean_ctor_set(v___x_5660_, 1, v___x_5659_);
v___x_5661_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_5662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5662_, 0, v___x_5660_);
lean_ctor_set(v___x_5662_, 1, v___x_5661_);
v___x_5663_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_5662_, v_a_5651_, v_a_5652_, v_a_5653_, v_a_5654_);
return v___x_5663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___boxed(lean_object* v_ctorVal_5664_, lean_object* v_a_5665_, lean_object* v_a_5666_, lean_object* v_a_5667_, lean_object* v_a_5668_, lean_object* v_a_5669_){
_start:
{
lean_object* v_res_5670_; 
v_res_5670_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5664_, v_a_5665_, v_a_5666_, v_a_5667_, v_a_5668_);
lean_dec(v_a_5668_);
lean_dec_ref(v_a_5667_);
lean_dec(v_a_5666_);
lean_dec_ref(v_a_5665_);
return v_res_5670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj(lean_object* v_00_u03b1_5671_, lean_object* v_ctorVal_5672_, lean_object* v_a_5673_, lean_object* v_a_5674_, lean_object* v_a_5675_, lean_object* v_a_5676_){
_start:
{
lean_object* v___x_5678_; 
v___x_5678_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5672_, v_a_5673_, v_a_5674_, v_a_5675_, v_a_5676_);
return v___x_5678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___boxed(lean_object* v_00_u03b1_5679_, lean_object* v_ctorVal_5680_, lean_object* v_a_5681_, lean_object* v_a_5682_, lean_object* v_a_5683_, lean_object* v_a_5684_, lean_object* v_a_5685_){
_start:
{
lean_object* v_res_5686_; 
v_res_5686_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj(v_00_u03b1_5679_, v_ctorVal_5680_, v_a_5681_, v_a_5682_, v_a_5683_, v_a_5684_);
lean_dec(v_a_5684_);
lean_dec_ref(v_a_5683_);
lean_dec(v_a_5682_);
lean_dec_ref(v_a_5681_);
return v_res_5686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0(lean_object* v_ctorVal_5692_, size_t v_sz_5693_, size_t v_i_5694_, lean_object* v_bs_5695_, lean_object* v___y_5696_, lean_object* v___y_5697_, lean_object* v___y_5698_, lean_object* v___y_5699_){
_start:
{
uint8_t v___x_5701_; 
v___x_5701_ = lean_usize_dec_lt(v_i_5694_, v_sz_5693_);
if (v___x_5701_ == 0)
{
lean_object* v___x_5702_; lean_object* v___x_5703_; 
lean_dec_ref(v_ctorVal_5692_);
v___x_5702_ = l_unsafeCast___redArg(v_bs_5695_);
lean_dec_ref(v_bs_5695_);
v___x_5703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5703_, 0, v___x_5702_);
return v___x_5703_;
}
else
{
lean_object* v_v_5704_; lean_object* v___x_5705_; lean_object* v_bs_x27_5706_; lean_object* v_a_5708_; lean_object* v___y_5715_; lean_object* v_lhs_5726_; lean_object* v_rhs_5727_; lean_object* v___x_5729_; lean_object* v___x_5730_; 
v_v_5704_ = lean_array_uget(v_bs_5695_, v_i_5694_);
v___x_5705_ = lean_unsigned_to_nat(0u);
v_bs_x27_5706_ = lean_array_uset(v_bs_5695_, v_i_5694_, v___x_5705_);
v___x_5729_ = l_unsafeCast___redArg(v_v_5704_);
lean_dec(v_v_5704_);
lean_inc(v___y_5699_);
lean_inc_ref(v___y_5698_);
lean_inc(v___y_5697_);
lean_inc_ref(v___y_5696_);
v___x_5730_ = lean_infer_type(v___x_5729_, v___y_5696_, v___y_5697_, v___y_5698_, v___y_5699_);
if (lean_obj_tag(v___x_5730_) == 0)
{
lean_object* v_a_5731_; lean_object* v___x_5732_; 
v_a_5731_ = lean_ctor_get(v___x_5730_, 0);
lean_inc(v_a_5731_);
lean_dec_ref_known(v___x_5730_, 1);
v___x_5732_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_5731_, v___y_5697_);
if (lean_obj_tag(v___x_5732_) == 0)
{
lean_object* v_a_5733_; lean_object* v___x_5734_; uint8_t v___x_5735_; 
v_a_5733_ = lean_ctor_get(v___x_5732_, 0);
lean_inc(v_a_5733_);
lean_dec_ref_known(v___x_5732_, 1);
v___x_5734_ = l_Lean_Expr_cleanupAnnotations(v_a_5733_);
v___x_5735_ = l_Lean_Expr_isApp(v___x_5734_);
if (v___x_5735_ == 0)
{
lean_object* v___x_5736_; 
lean_dec_ref(v___x_5734_);
lean_inc_ref(v_ctorVal_5692_);
v___x_5736_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5692_, v___y_5696_, v___y_5697_, v___y_5698_, v___y_5699_);
v___y_5715_ = v___x_5736_;
goto v___jp_5714_;
}
else
{
lean_object* v_arg_5737_; lean_object* v___x_5738_; uint8_t v___x_5739_; 
v_arg_5737_ = lean_ctor_get(v___x_5734_, 1);
lean_inc_ref(v_arg_5737_);
v___x_5738_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5734_);
v___x_5739_ = l_Lean_Expr_isApp(v___x_5738_);
if (v___x_5739_ == 0)
{
lean_object* v___x_5740_; 
lean_dec_ref(v___x_5738_);
lean_dec_ref(v_arg_5737_);
lean_inc_ref(v_ctorVal_5692_);
v___x_5740_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5692_, v___y_5696_, v___y_5697_, v___y_5698_, v___y_5699_);
v___y_5715_ = v___x_5740_;
goto v___jp_5714_;
}
else
{
lean_object* v_arg_5741_; lean_object* v___x_5742_; uint8_t v___x_5743_; 
v_arg_5741_ = lean_ctor_get(v___x_5738_, 1);
lean_inc_ref(v_arg_5741_);
v___x_5742_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5738_);
v___x_5743_ = l_Lean_Expr_isApp(v___x_5742_);
if (v___x_5743_ == 0)
{
lean_object* v___x_5744_; 
lean_dec_ref(v___x_5742_);
lean_dec_ref(v_arg_5741_);
lean_dec_ref(v_arg_5737_);
lean_inc_ref(v_ctorVal_5692_);
v___x_5744_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5692_, v___y_5696_, v___y_5697_, v___y_5698_, v___y_5699_);
v___y_5715_ = v___x_5744_;
goto v___jp_5714_;
}
else
{
lean_object* v_arg_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; uint8_t v___x_5748_; 
v_arg_5745_ = lean_ctor_get(v___x_5742_, 1);
lean_inc_ref(v_arg_5745_);
v___x_5746_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5742_);
v___x_5747_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0));
v___x_5748_ = l_Lean_Expr_isConstOf(v___x_5746_, v___x_5747_);
if (v___x_5748_ == 0)
{
uint8_t v___x_5749_; 
lean_dec_ref(v_arg_5741_);
v___x_5749_ = l_Lean_Expr_isApp(v___x_5746_);
if (v___x_5749_ == 0)
{
lean_object* v___x_5750_; 
lean_dec_ref(v___x_5746_);
lean_dec_ref(v_arg_5745_);
lean_dec_ref(v_arg_5737_);
lean_inc_ref(v_ctorVal_5692_);
v___x_5750_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5692_, v___y_5696_, v___y_5697_, v___y_5698_, v___y_5699_);
v___y_5715_ = v___x_5750_;
goto v___jp_5714_;
}
else
{
lean_object* v___x_5751_; lean_object* v___x_5752_; uint8_t v___x_5753_; 
v___x_5751_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5746_);
v___x_5752_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2));
v___x_5753_ = l_Lean_Expr_isConstOf(v___x_5751_, v___x_5752_);
lean_dec_ref(v___x_5751_);
if (v___x_5753_ == 0)
{
lean_object* v___x_5754_; 
lean_dec_ref(v_arg_5745_);
lean_dec_ref(v_arg_5737_);
lean_inc_ref(v_ctorVal_5692_);
v___x_5754_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5692_, v___y_5696_, v___y_5697_, v___y_5698_, v___y_5699_);
v___y_5715_ = v___x_5754_;
goto v___jp_5714_;
}
else
{
v_lhs_5726_ = v_arg_5745_;
v_rhs_5727_ = v_arg_5737_;
goto v___jp_5725_;
}
}
}
else
{
lean_dec_ref(v___x_5746_);
lean_dec_ref(v_arg_5745_);
v_lhs_5726_ = v_arg_5741_;
v_rhs_5727_ = v_arg_5737_;
goto v___jp_5725_;
}
}
}
}
}
else
{
lean_object* v_a_5755_; lean_object* v___x_5757_; uint8_t v_isShared_5758_; uint8_t v_isSharedCheck_5762_; 
lean_dec_ref(v_bs_x27_5706_);
lean_dec_ref(v_ctorVal_5692_);
v_a_5755_ = lean_ctor_get(v___x_5732_, 0);
v_isSharedCheck_5762_ = !lean_is_exclusive(v___x_5732_);
if (v_isSharedCheck_5762_ == 0)
{
v___x_5757_ = v___x_5732_;
v_isShared_5758_ = v_isSharedCheck_5762_;
goto v_resetjp_5756_;
}
else
{
lean_inc(v_a_5755_);
lean_dec(v___x_5732_);
v___x_5757_ = lean_box(0);
v_isShared_5758_ = v_isSharedCheck_5762_;
goto v_resetjp_5756_;
}
v_resetjp_5756_:
{
lean_object* v___x_5760_; 
if (v_isShared_5758_ == 0)
{
v___x_5760_ = v___x_5757_;
goto v_reusejp_5759_;
}
else
{
lean_object* v_reuseFailAlloc_5761_; 
v_reuseFailAlloc_5761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5761_, 0, v_a_5755_);
v___x_5760_ = v_reuseFailAlloc_5761_;
goto v_reusejp_5759_;
}
v_reusejp_5759_:
{
return v___x_5760_;
}
}
}
}
else
{
lean_object* v_a_5763_; lean_object* v___x_5765_; uint8_t v_isShared_5766_; uint8_t v_isSharedCheck_5770_; 
lean_dec_ref(v_bs_x27_5706_);
lean_dec_ref(v_ctorVal_5692_);
v_a_5763_ = lean_ctor_get(v___x_5730_, 0);
v_isSharedCheck_5770_ = !lean_is_exclusive(v___x_5730_);
if (v_isSharedCheck_5770_ == 0)
{
v___x_5765_ = v___x_5730_;
v_isShared_5766_ = v_isSharedCheck_5770_;
goto v_resetjp_5764_;
}
else
{
lean_inc(v_a_5763_);
lean_dec(v___x_5730_);
v___x_5765_ = lean_box(0);
v_isShared_5766_ = v_isSharedCheck_5770_;
goto v_resetjp_5764_;
}
v_resetjp_5764_:
{
lean_object* v___x_5768_; 
if (v_isShared_5766_ == 0)
{
v___x_5768_ = v___x_5765_;
goto v_reusejp_5767_;
}
else
{
lean_object* v_reuseFailAlloc_5769_; 
v_reuseFailAlloc_5769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5769_, 0, v_a_5763_);
v___x_5768_ = v_reuseFailAlloc_5769_;
goto v_reusejp_5767_;
}
v_reusejp_5767_:
{
return v___x_5768_;
}
}
}
v___jp_5707_:
{
size_t v___x_5709_; size_t v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; 
v___x_5709_ = ((size_t)1ULL);
v___x_5710_ = lean_usize_add(v_i_5694_, v___x_5709_);
v___x_5711_ = l_unsafeCast___redArg(v_a_5708_);
lean_dec_ref(v_a_5708_);
v___x_5712_ = lean_array_uset(v_bs_x27_5706_, v_i_5694_, v___x_5711_);
v_i_5694_ = v___x_5710_;
v_bs_5695_ = v___x_5712_;
goto _start;
}
v___jp_5714_:
{
if (lean_obj_tag(v___y_5715_) == 0)
{
lean_object* v_a_5716_; 
v_a_5716_ = lean_ctor_get(v___y_5715_, 0);
lean_inc(v_a_5716_);
lean_dec_ref_known(v___y_5715_, 1);
v_a_5708_ = v_a_5716_;
goto v___jp_5707_;
}
else
{
lean_object* v_a_5717_; lean_object* v___x_5719_; uint8_t v_isShared_5720_; uint8_t v_isSharedCheck_5724_; 
lean_dec_ref(v_bs_x27_5706_);
lean_dec_ref(v_ctorVal_5692_);
v_a_5717_ = lean_ctor_get(v___y_5715_, 0);
v_isSharedCheck_5724_ = !lean_is_exclusive(v___y_5715_);
if (v_isSharedCheck_5724_ == 0)
{
v___x_5719_ = v___y_5715_;
v_isShared_5720_ = v_isSharedCheck_5724_;
goto v_resetjp_5718_;
}
else
{
lean_inc(v_a_5717_);
lean_dec(v___y_5715_);
v___x_5719_ = lean_box(0);
v_isShared_5720_ = v_isSharedCheck_5724_;
goto v_resetjp_5718_;
}
v_resetjp_5718_:
{
lean_object* v___x_5722_; 
if (v_isShared_5720_ == 0)
{
v___x_5722_ = v___x_5719_;
goto v_reusejp_5721_;
}
else
{
lean_object* v_reuseFailAlloc_5723_; 
v_reuseFailAlloc_5723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5723_, 0, v_a_5717_);
v___x_5722_ = v_reuseFailAlloc_5723_;
goto v_reusejp_5721_;
}
v_reusejp_5721_:
{
return v___x_5722_;
}
}
}
}
v___jp_5725_:
{
lean_object* v___x_5728_; 
v___x_5728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5728_, 0, v_lhs_5726_);
lean_ctor_set(v___x_5728_, 1, v_rhs_5727_);
v_a_5708_ = v___x_5728_;
goto v___jp_5707_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___boxed(lean_object* v_ctorVal_5771_, lean_object* v_sz_5772_, lean_object* v_i_5773_, lean_object* v_bs_5774_, lean_object* v___y_5775_, lean_object* v___y_5776_, lean_object* v___y_5777_, lean_object* v___y_5778_, lean_object* v___y_5779_){
_start:
{
size_t v_sz_boxed_5780_; size_t v_i_boxed_5781_; lean_object* v_res_5782_; 
v_sz_boxed_5780_ = lean_unbox_usize(v_sz_5772_);
lean_dec(v_sz_5772_);
v_i_boxed_5781_ = lean_unbox_usize(v_i_5773_);
lean_dec(v_i_5773_);
v_res_5782_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0(v_ctorVal_5771_, v_sz_boxed_5780_, v_i_boxed_5781_, v_bs_5774_, v___y_5775_, v___y_5776_, v___y_5777_, v___y_5778_);
lean_dec(v___y_5778_);
lean_dec_ref(v___y_5777_);
lean_dec(v___y_5776_);
lean_dec_ref(v___y_5775_);
return v_res_5782_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5784_; lean_object* v___x_5785_; 
v___x_5784_ = lean_unsigned_to_nat(0u);
v___x_5785_ = l_Lean_Level_ofNat(v___x_5784_);
return v___x_5785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0(lean_object* v_ctorVal_5786_, lean_object* v_us_5787_, lean_object* v_numIndices_5788_, lean_object* v_xs_5789_, lean_object* v_type_5790_, lean_object* v___y_5791_, lean_object* v___y_5792_, lean_object* v___y_5793_, lean_object* v___y_5794_){
_start:
{
lean_object* v_toConstantVal_5796_; lean_object* v_induct_5797_; lean_object* v_numParams_5798_; lean_object* v___x_5799_; lean_object* v_noConfusionName_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; lean_object* v_noConfusion_5804_; lean_object* v_noConfusion_5805_; lean_object* v_lower_5807_; lean_object* v_upper_5808_; lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; lean_object* v_n_5923_; uint8_t v___x_5924_; 
v_toConstantVal_5796_ = lean_ctor_get(v_ctorVal_5786_, 0);
v_induct_5797_ = lean_ctor_get(v_ctorVal_5786_, 1);
v_numParams_5798_ = lean_ctor_get(v_ctorVal_5786_, 3);
v___x_5799_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0));
lean_inc(v_induct_5797_);
v_noConfusionName_5800_ = l_Lean_Name_str___override(v_induct_5797_, v___x_5799_);
v___x_5801_ = lean_unsigned_to_nat(0u);
v___x_5802_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1);
v___x_5803_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5803_, 0, v___x_5802_);
lean_ctor_set(v___x_5803_, 1, v_us_5787_);
v_noConfusion_5804_ = l_Lean_mkConst(v_noConfusionName_5800_, v___x_5803_);
v_noConfusion_5805_ = l_Lean_Expr_app___override(v_noConfusion_5804_, v_type_5790_);
v___x_5919_ = lean_array_get_size(v_xs_5789_);
v___x_5920_ = lean_nat_sub(v___x_5919_, v_numParams_5798_);
v___x_5921_ = lean_nat_sub(v___x_5920_, v_numIndices_5788_);
lean_dec(v___x_5920_);
v___x_5922_ = lean_unsigned_to_nat(1u);
v_n_5923_ = lean_nat_sub(v___x_5921_, v___x_5922_);
lean_dec(v___x_5921_);
v___x_5924_ = lean_nat_dec_le(v_n_5923_, v___x_5801_);
if (v___x_5924_ == 0)
{
v_lower_5807_ = v_n_5923_;
v_upper_5808_ = v___x_5919_;
goto v___jp_5806_;
}
else
{
lean_dec(v_n_5923_);
v_lower_5807_ = v___x_5801_;
v_upper_5808_ = v___x_5919_;
goto v___jp_5806_;
}
v___jp_5806_:
{
lean_object* v___x_5809_; lean_object* v___x_5810_; lean_object* v_eqs_5811_; size_t v_sz_5812_; lean_object* v___x_5813_; lean_object* v___x_5814_; lean_object* v___x_5815_; lean_object* v___x_5816_; lean_object* v___x_2436__overap_5817_; lean_object* v___x_5818_; 
lean_inc_ref(v_xs_5789_);
v___x_5809_ = l_Array_toSubarray___redArg(v_xs_5789_, v_lower_5807_, v_upper_5808_);
v___x_5810_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v_eqs_5811_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(v___x_5809_, v___x_5810_);
v_sz_5812_ = lean_array_size(v_eqs_5811_);
v___x_5813_ = l_unsafeCast___redArg(v_eqs_5811_);
v___x_5814_ = lean_box_usize(v_sz_5812_);
v___x_5815_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4___boxed__const__1));
lean_inc_ref(v_ctorVal_5786_);
v___x_5816_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___boxed), 9, 4);
lean_closure_set(v___x_5816_, 0, v_ctorVal_5786_);
lean_closure_set(v___x_5816_, 1, v___x_5814_);
lean_closure_set(v___x_5816_, 2, v___x_5815_);
lean_closure_set(v___x_5816_, 3, v___x_5813_);
v___x_2436__overap_5817_ = l_unsafeCast___redArg(v___x_5816_);
lean_dec_ref(v___x_5816_);
lean_inc(v___y_5794_);
lean_inc_ref(v___y_5793_);
lean_inc(v___y_5792_);
lean_inc_ref(v___y_5791_);
v___x_5818_ = lean_apply_5(v___x_2436__overap_5817_, v___y_5791_, v___y_5792_, v___y_5793_, v___y_5794_, lean_box(0));
if (lean_obj_tag(v___x_5818_) == 0)
{
lean_object* v_a_5819_; lean_object* v___x_5820_; lean_object* v_fst_5821_; lean_object* v_snd_5822_; lean_object* v___x_5823_; lean_object* v___x_5824_; lean_object* v___x_5825_; lean_object* v___x_5826_; 
v_a_5819_ = lean_ctor_get(v___x_5818_, 0);
lean_inc(v_a_5819_);
lean_dec_ref_known(v___x_5818_, 1);
v___x_5820_ = l_Array_unzip___redArg(v_a_5819_);
lean_dec(v_a_5819_);
v_fst_5821_ = lean_ctor_get(v___x_5820_, 0);
lean_inc(v_fst_5821_);
v_snd_5822_ = lean_ctor_get(v___x_5820_, 1);
lean_inc(v_snd_5822_);
lean_dec_ref(v___x_5820_);
v___x_5823_ = l_Lean_mkAppN(v_noConfusion_5805_, v_fst_5821_);
lean_dec(v_fst_5821_);
v___x_5824_ = l_Lean_mkAppN(v___x_5823_, v_snd_5822_);
lean_dec(v_snd_5822_);
v___x_5825_ = l_Lean_mkAppN(v___x_5824_, v_eqs_5811_);
lean_dec_ref(v_eqs_5811_);
lean_inc(v___y_5794_);
lean_inc_ref(v___y_5793_);
lean_inc(v___y_5792_);
lean_inc_ref(v___y_5791_);
lean_inc_ref(v___x_5825_);
v___x_5826_ = lean_infer_type(v___x_5825_, v___y_5791_, v___y_5792_, v___y_5793_, v___y_5794_);
if (lean_obj_tag(v___x_5826_) == 0)
{
lean_object* v_a_5827_; lean_object* v___x_5828_; 
v_a_5827_ = lean_ctor_get(v___x_5826_, 0);
lean_inc(v_a_5827_);
lean_dec_ref_known(v___x_5826_, 1);
lean_inc(v___y_5794_);
lean_inc_ref(v___y_5793_);
lean_inc(v___y_5792_);
lean_inc_ref(v___y_5791_);
v___x_5828_ = lean_whnf(v_a_5827_, v___y_5791_, v___y_5792_, v___y_5793_, v___y_5794_);
if (lean_obj_tag(v___x_5828_) == 0)
{
lean_object* v_a_5829_; 
v_a_5829_ = lean_ctor_get(v___x_5828_, 0);
lean_inc(v_a_5829_);
lean_dec_ref_known(v___x_5828_, 1);
if (lean_obj_tag(v_a_5829_) == 7)
{
lean_object* v_binderType_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; 
lean_inc_ref(v_toConstantVal_5796_);
lean_dec_ref(v_ctorVal_5786_);
v_binderType_5830_ = lean_ctor_get(v_a_5829_, 1);
lean_inc_ref(v_binderType_5830_);
lean_dec_ref_known(v_a_5829_, 3);
v___x_5831_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___closed__0);
v___x_5832_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_binderType_5830_, v___x_5831_, v___y_5791_, v___y_5792_, v___y_5793_, v___y_5794_);
if (lean_obj_tag(v___x_5832_) == 0)
{
lean_object* v_a_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; 
v_a_5833_ = lean_ctor_get(v___x_5832_, 0);
lean_inc_n(v_a_5833_, 2);
lean_dec_ref_known(v___x_5832_, 1);
v___x_5834_ = l_Lean_Expr_app___override(v___x_5825_, v_a_5833_);
v___x_5835_ = l_Lean_Expr_mvarId_x21(v_a_5833_);
lean_dec(v_a_5833_);
v___x_5836_ = l_Lean_MVarId_intros(v___x_5835_, v___y_5791_, v___y_5792_, v___y_5793_, v___y_5794_);
if (lean_obj_tag(v___x_5836_) == 0)
{
lean_object* v_a_5837_; lean_object* v_snd_5838_; lean_object* v_name_5839_; lean_object* v___x_5840_; 
v_a_5837_ = lean_ctor_get(v___x_5836_, 0);
lean_inc(v_a_5837_);
lean_dec_ref_known(v___x_5836_, 1);
v_snd_5838_ = lean_ctor_get(v_a_5837_, 1);
lean_inc(v_snd_5838_);
lean_dec(v_a_5837_);
v_name_5839_ = lean_ctor_get(v_toConstantVal_5796_, 0);
lean_inc(v_name_5839_);
lean_dec_ref(v_toConstantVal_5796_);
v___x_5840_ = l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(v_snd_5838_, v_name_5839_, v___y_5791_, v___y_5792_, v___y_5793_, v___y_5794_);
if (lean_obj_tag(v___x_5840_) == 0)
{
lean_object* v___x_5841_; lean_object* v_a_5842_; lean_object* v___x_5844_; uint8_t v_isShared_5845_; uint8_t v_isSharedCheck_5869_; 
lean_dec_ref_known(v___x_5840_, 1);
v___x_5841_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v___x_5834_, v___y_5792_);
v_a_5842_ = lean_ctor_get(v___x_5841_, 0);
v_isSharedCheck_5869_ = !lean_is_exclusive(v___x_5841_);
if (v_isSharedCheck_5869_ == 0)
{
v___x_5844_ = v___x_5841_;
v_isShared_5845_ = v_isSharedCheck_5869_;
goto v_resetjp_5843_;
}
else
{
lean_inc(v_a_5842_);
lean_dec(v___x_5841_);
v___x_5844_ = lean_box(0);
v_isShared_5845_ = v_isSharedCheck_5869_;
goto v_resetjp_5843_;
}
v_resetjp_5843_:
{
uint8_t v___x_5846_; uint8_t v___x_5847_; uint8_t v___x_5848_; lean_object* v___x_5849_; 
v___x_5846_ = 0;
v___x_5847_ = 1;
v___x_5848_ = 1;
v___x_5849_ = l_Lean_Meta_mkLambdaFVars(v_xs_5789_, v_a_5842_, v___x_5846_, v___x_5847_, v___x_5846_, v___x_5847_, v___x_5848_, v___y_5791_, v___y_5792_, v___y_5793_, v___y_5794_);
if (lean_obj_tag(v___x_5849_) == 0)
{
lean_object* v_a_5850_; lean_object* v___x_5852_; uint8_t v_isShared_5853_; uint8_t v_isSharedCheck_5860_; 
v_a_5850_ = lean_ctor_get(v___x_5849_, 0);
v_isSharedCheck_5860_ = !lean_is_exclusive(v___x_5849_);
if (v_isSharedCheck_5860_ == 0)
{
v___x_5852_ = v___x_5849_;
v_isShared_5853_ = v_isSharedCheck_5860_;
goto v_resetjp_5851_;
}
else
{
lean_inc(v_a_5850_);
lean_dec(v___x_5849_);
v___x_5852_ = lean_box(0);
v_isShared_5853_ = v_isSharedCheck_5860_;
goto v_resetjp_5851_;
}
v_resetjp_5851_:
{
lean_object* v___x_5855_; 
if (v_isShared_5845_ == 0)
{
lean_ctor_set_tag(v___x_5844_, 1);
lean_ctor_set(v___x_5844_, 0, v_a_5850_);
v___x_5855_ = v___x_5844_;
goto v_reusejp_5854_;
}
else
{
lean_object* v_reuseFailAlloc_5859_; 
v_reuseFailAlloc_5859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5859_, 0, v_a_5850_);
v___x_5855_ = v_reuseFailAlloc_5859_;
goto v_reusejp_5854_;
}
v_reusejp_5854_:
{
lean_object* v___x_5857_; 
if (v_isShared_5853_ == 0)
{
lean_ctor_set(v___x_5852_, 0, v___x_5855_);
v___x_5857_ = v___x_5852_;
goto v_reusejp_5856_;
}
else
{
lean_object* v_reuseFailAlloc_5858_; 
v_reuseFailAlloc_5858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5858_, 0, v___x_5855_);
v___x_5857_ = v_reuseFailAlloc_5858_;
goto v_reusejp_5856_;
}
v_reusejp_5856_:
{
return v___x_5857_;
}
}
}
}
else
{
lean_object* v_a_5861_; lean_object* v___x_5863_; uint8_t v_isShared_5864_; uint8_t v_isSharedCheck_5868_; 
lean_del_object(v___x_5844_);
v_a_5861_ = lean_ctor_get(v___x_5849_, 0);
v_isSharedCheck_5868_ = !lean_is_exclusive(v___x_5849_);
if (v_isSharedCheck_5868_ == 0)
{
v___x_5863_ = v___x_5849_;
v_isShared_5864_ = v_isSharedCheck_5868_;
goto v_resetjp_5862_;
}
else
{
lean_inc(v_a_5861_);
lean_dec(v___x_5849_);
v___x_5863_ = lean_box(0);
v_isShared_5864_ = v_isSharedCheck_5868_;
goto v_resetjp_5862_;
}
v_resetjp_5862_:
{
lean_object* v___x_5866_; 
if (v_isShared_5864_ == 0)
{
v___x_5866_ = v___x_5863_;
goto v_reusejp_5865_;
}
else
{
lean_object* v_reuseFailAlloc_5867_; 
v_reuseFailAlloc_5867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5867_, 0, v_a_5861_);
v___x_5866_ = v_reuseFailAlloc_5867_;
goto v_reusejp_5865_;
}
v_reusejp_5865_:
{
return v___x_5866_;
}
}
}
}
}
else
{
lean_object* v_a_5870_; lean_object* v___x_5872_; uint8_t v_isShared_5873_; uint8_t v_isSharedCheck_5877_; 
lean_dec_ref(v___x_5834_);
lean_dec_ref(v_xs_5789_);
v_a_5870_ = lean_ctor_get(v___x_5840_, 0);
v_isSharedCheck_5877_ = !lean_is_exclusive(v___x_5840_);
if (v_isSharedCheck_5877_ == 0)
{
v___x_5872_ = v___x_5840_;
v_isShared_5873_ = v_isSharedCheck_5877_;
goto v_resetjp_5871_;
}
else
{
lean_inc(v_a_5870_);
lean_dec(v___x_5840_);
v___x_5872_ = lean_box(0);
v_isShared_5873_ = v_isSharedCheck_5877_;
goto v_resetjp_5871_;
}
v_resetjp_5871_:
{
lean_object* v___x_5875_; 
if (v_isShared_5873_ == 0)
{
v___x_5875_ = v___x_5872_;
goto v_reusejp_5874_;
}
else
{
lean_object* v_reuseFailAlloc_5876_; 
v_reuseFailAlloc_5876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5876_, 0, v_a_5870_);
v___x_5875_ = v_reuseFailAlloc_5876_;
goto v_reusejp_5874_;
}
v_reusejp_5874_:
{
return v___x_5875_;
}
}
}
}
else
{
lean_object* v_a_5878_; lean_object* v___x_5880_; uint8_t v_isShared_5881_; uint8_t v_isSharedCheck_5885_; 
lean_dec_ref(v___x_5834_);
lean_dec_ref(v_toConstantVal_5796_);
lean_dec_ref(v_xs_5789_);
v_a_5878_ = lean_ctor_get(v___x_5836_, 0);
v_isSharedCheck_5885_ = !lean_is_exclusive(v___x_5836_);
if (v_isSharedCheck_5885_ == 0)
{
v___x_5880_ = v___x_5836_;
v_isShared_5881_ = v_isSharedCheck_5885_;
goto v_resetjp_5879_;
}
else
{
lean_inc(v_a_5878_);
lean_dec(v___x_5836_);
v___x_5880_ = lean_box(0);
v_isShared_5881_ = v_isSharedCheck_5885_;
goto v_resetjp_5879_;
}
v_resetjp_5879_:
{
lean_object* v___x_5883_; 
if (v_isShared_5881_ == 0)
{
v___x_5883_ = v___x_5880_;
goto v_reusejp_5882_;
}
else
{
lean_object* v_reuseFailAlloc_5884_; 
v_reuseFailAlloc_5884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5884_, 0, v_a_5878_);
v___x_5883_ = v_reuseFailAlloc_5884_;
goto v_reusejp_5882_;
}
v_reusejp_5882_:
{
return v___x_5883_;
}
}
}
}
else
{
lean_object* v_a_5886_; lean_object* v___x_5888_; uint8_t v_isShared_5889_; uint8_t v_isSharedCheck_5893_; 
lean_dec_ref(v___x_5825_);
lean_dec_ref(v_toConstantVal_5796_);
lean_dec_ref(v_xs_5789_);
v_a_5886_ = lean_ctor_get(v___x_5832_, 0);
v_isSharedCheck_5893_ = !lean_is_exclusive(v___x_5832_);
if (v_isSharedCheck_5893_ == 0)
{
v___x_5888_ = v___x_5832_;
v_isShared_5889_ = v_isSharedCheck_5893_;
goto v_resetjp_5887_;
}
else
{
lean_inc(v_a_5886_);
lean_dec(v___x_5832_);
v___x_5888_ = lean_box(0);
v_isShared_5889_ = v_isSharedCheck_5893_;
goto v_resetjp_5887_;
}
v_resetjp_5887_:
{
lean_object* v___x_5891_; 
if (v_isShared_5889_ == 0)
{
v___x_5891_ = v___x_5888_;
goto v_reusejp_5890_;
}
else
{
lean_object* v_reuseFailAlloc_5892_; 
v_reuseFailAlloc_5892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5892_, 0, v_a_5886_);
v___x_5891_ = v_reuseFailAlloc_5892_;
goto v_reusejp_5890_;
}
v_reusejp_5890_:
{
return v___x_5891_;
}
}
}
}
else
{
lean_object* v___x_5894_; 
lean_dec(v_a_5829_);
lean_dec_ref(v___x_5825_);
lean_dec_ref(v_xs_5789_);
v___x_5894_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5786_, v___y_5791_, v___y_5792_, v___y_5793_, v___y_5794_);
return v___x_5894_;
}
}
else
{
lean_object* v_a_5895_; lean_object* v___x_5897_; uint8_t v_isShared_5898_; uint8_t v_isSharedCheck_5902_; 
lean_dec_ref(v___x_5825_);
lean_dec_ref(v_xs_5789_);
lean_dec_ref(v_ctorVal_5786_);
v_a_5895_ = lean_ctor_get(v___x_5828_, 0);
v_isSharedCheck_5902_ = !lean_is_exclusive(v___x_5828_);
if (v_isSharedCheck_5902_ == 0)
{
v___x_5897_ = v___x_5828_;
v_isShared_5898_ = v_isSharedCheck_5902_;
goto v_resetjp_5896_;
}
else
{
lean_inc(v_a_5895_);
lean_dec(v___x_5828_);
v___x_5897_ = lean_box(0);
v_isShared_5898_ = v_isSharedCheck_5902_;
goto v_resetjp_5896_;
}
v_resetjp_5896_:
{
lean_object* v___x_5900_; 
if (v_isShared_5898_ == 0)
{
v___x_5900_ = v___x_5897_;
goto v_reusejp_5899_;
}
else
{
lean_object* v_reuseFailAlloc_5901_; 
v_reuseFailAlloc_5901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5901_, 0, v_a_5895_);
v___x_5900_ = v_reuseFailAlloc_5901_;
goto v_reusejp_5899_;
}
v_reusejp_5899_:
{
return v___x_5900_;
}
}
}
}
else
{
lean_object* v_a_5903_; lean_object* v___x_5905_; uint8_t v_isShared_5906_; uint8_t v_isSharedCheck_5910_; 
lean_dec_ref(v___x_5825_);
lean_dec_ref(v_xs_5789_);
lean_dec_ref(v_ctorVal_5786_);
v_a_5903_ = lean_ctor_get(v___x_5826_, 0);
v_isSharedCheck_5910_ = !lean_is_exclusive(v___x_5826_);
if (v_isSharedCheck_5910_ == 0)
{
v___x_5905_ = v___x_5826_;
v_isShared_5906_ = v_isSharedCheck_5910_;
goto v_resetjp_5904_;
}
else
{
lean_inc(v_a_5903_);
lean_dec(v___x_5826_);
v___x_5905_ = lean_box(0);
v_isShared_5906_ = v_isSharedCheck_5910_;
goto v_resetjp_5904_;
}
v_resetjp_5904_:
{
lean_object* v___x_5908_; 
if (v_isShared_5906_ == 0)
{
v___x_5908_ = v___x_5905_;
goto v_reusejp_5907_;
}
else
{
lean_object* v_reuseFailAlloc_5909_; 
v_reuseFailAlloc_5909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5909_, 0, v_a_5903_);
v___x_5908_ = v_reuseFailAlloc_5909_;
goto v_reusejp_5907_;
}
v_reusejp_5907_:
{
return v___x_5908_;
}
}
}
}
else
{
lean_object* v_a_5911_; lean_object* v___x_5913_; uint8_t v_isShared_5914_; uint8_t v_isSharedCheck_5918_; 
lean_dec_ref(v_eqs_5811_);
lean_dec_ref(v_noConfusion_5805_);
lean_dec_ref(v_xs_5789_);
lean_dec_ref(v_ctorVal_5786_);
v_a_5911_ = lean_ctor_get(v___x_5818_, 0);
v_isSharedCheck_5918_ = !lean_is_exclusive(v___x_5818_);
if (v_isSharedCheck_5918_ == 0)
{
v___x_5913_ = v___x_5818_;
v_isShared_5914_ = v_isSharedCheck_5918_;
goto v_resetjp_5912_;
}
else
{
lean_inc(v_a_5911_);
lean_dec(v___x_5818_);
v___x_5913_ = lean_box(0);
v_isShared_5914_ = v_isSharedCheck_5918_;
goto v_resetjp_5912_;
}
v_resetjp_5912_:
{
lean_object* v___x_5916_; 
if (v_isShared_5914_ == 0)
{
v___x_5916_ = v___x_5913_;
goto v_reusejp_5915_;
}
else
{
lean_object* v_reuseFailAlloc_5917_; 
v_reuseFailAlloc_5917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5917_, 0, v_a_5911_);
v___x_5916_ = v_reuseFailAlloc_5917_;
goto v_reusejp_5915_;
}
v_reusejp_5915_:
{
return v___x_5916_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___boxed(lean_object* v_ctorVal_5925_, lean_object* v_us_5926_, lean_object* v_numIndices_5927_, lean_object* v_xs_5928_, lean_object* v_type_5929_, lean_object* v___y_5930_, lean_object* v___y_5931_, lean_object* v___y_5932_, lean_object* v___y_5933_, lean_object* v___y_5934_){
_start:
{
lean_object* v_res_5935_; 
v_res_5935_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0(v_ctorVal_5925_, v_us_5926_, v_numIndices_5927_, v_xs_5928_, v_type_5929_, v___y_5930_, v___y_5931_, v___y_5932_, v___y_5933_);
lean_dec(v___y_5933_);
lean_dec_ref(v___y_5932_);
lean_dec(v___y_5931_);
lean_dec_ref(v___y_5930_);
lean_dec(v_numIndices_5927_);
return v_res_5935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(lean_object* v_ctorVal_5936_, lean_object* v_typeInfo_5937_, lean_object* v_a_5938_, lean_object* v_a_5939_, lean_object* v_a_5940_, lean_object* v_a_5941_){
_start:
{
lean_object* v_thmType_5943_; lean_object* v_us_5944_; lean_object* v_numIndices_5945_; lean_object* v___f_5946_; uint8_t v___x_5947_; lean_object* v___x_5948_; 
v_thmType_5943_ = lean_ctor_get(v_typeInfo_5937_, 0);
lean_inc_ref(v_thmType_5943_);
v_us_5944_ = lean_ctor_get(v_typeInfo_5937_, 1);
lean_inc(v_us_5944_);
v_numIndices_5945_ = lean_ctor_get(v_typeInfo_5937_, 2);
lean_inc(v_numIndices_5945_);
lean_dec_ref(v_typeInfo_5937_);
v___f_5946_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___boxed), 10, 3);
lean_closure_set(v___f_5946_, 0, v_ctorVal_5936_);
lean_closure_set(v___f_5946_, 1, v_us_5944_);
lean_closure_set(v___f_5946_, 2, v_numIndices_5945_);
v___x_5947_ = 0;
v___x_5948_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_thmType_5943_, v___f_5946_, v___x_5947_, v___x_5947_, v_a_5938_, v_a_5939_, v_a_5940_, v_a_5941_);
return v___x_5948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___boxed(lean_object* v_ctorVal_5949_, lean_object* v_typeInfo_5950_, lean_object* v_a_5951_, lean_object* v_a_5952_, lean_object* v_a_5953_, lean_object* v_a_5954_, lean_object* v_a_5955_){
_start:
{
lean_object* v_res_5956_; 
v_res_5956_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(v_ctorVal_5949_, v_typeInfo_5950_, v_a_5951_, v_a_5952_, v_a_5953_, v_a_5954_);
lean_dec(v_a_5954_);
lean_dec_ref(v_a_5953_);
lean_dec(v_a_5952_);
lean_dec_ref(v_a_5951_);
return v_res_5956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHInjectiveTheoremNameFor(lean_object* v_ctorName_5959_){
_start:
{
lean_object* v___x_5960_; lean_object* v___x_5961_; 
v___x_5960_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0));
v___x_5961_ = l_Lean_Name_str___override(v_ctorName_5959_, v___x_5960_);
return v___x_5961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(lean_object* v_thmName_5962_, lean_object* v_ctorVal_5963_, lean_object* v_a_5964_, lean_object* v_a_5965_, lean_object* v_a_5966_, lean_object* v_a_5967_){
_start:
{
lean_object* v___x_5969_; 
lean_inc_ref(v_ctorVal_5963_);
v___x_5969_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(v_ctorVal_5963_, v_a_5964_, v_a_5965_, v_a_5966_, v_a_5967_);
if (lean_obj_tag(v___x_5969_) == 0)
{
lean_object* v_a_5970_; lean_object* v___x_5972_; uint8_t v_isShared_5973_; uint8_t v_isSharedCheck_6031_; 
v_a_5970_ = lean_ctor_get(v___x_5969_, 0);
v_isSharedCheck_6031_ = !lean_is_exclusive(v___x_5969_);
if (v_isSharedCheck_6031_ == 0)
{
v___x_5972_ = v___x_5969_;
v_isShared_5973_ = v_isSharedCheck_6031_;
goto v_resetjp_5971_;
}
else
{
lean_inc(v_a_5970_);
lean_dec(v___x_5969_);
v___x_5972_ = lean_box(0);
v_isShared_5973_ = v_isSharedCheck_6031_;
goto v_resetjp_5971_;
}
v_resetjp_5971_:
{
if (lean_obj_tag(v_a_5970_) == 1)
{
lean_object* v_val_5974_; lean_object* v___x_5975_; 
lean_del_object(v___x_5972_);
v_val_5974_ = lean_ctor_get(v_a_5970_, 0);
lean_inc_n(v_val_5974_, 2);
lean_dec_ref_known(v_a_5970_, 1);
lean_inc_ref(v_ctorVal_5963_);
v___x_5975_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(v_ctorVal_5963_, v_val_5974_, v_a_5964_, v_a_5965_, v_a_5966_, v_a_5967_);
if (lean_obj_tag(v___x_5975_) == 0)
{
lean_object* v_a_5976_; lean_object* v___x_5978_; uint8_t v_isShared_5979_; uint8_t v_isSharedCheck_6018_; 
v_a_5976_ = lean_ctor_get(v___x_5975_, 0);
v_isSharedCheck_6018_ = !lean_is_exclusive(v___x_5975_);
if (v_isSharedCheck_6018_ == 0)
{
v___x_5978_ = v___x_5975_;
v_isShared_5979_ = v_isSharedCheck_6018_;
goto v_resetjp_5977_;
}
else
{
lean_inc(v_a_5976_);
lean_dec(v___x_5975_);
v___x_5978_ = lean_box(0);
v_isShared_5979_ = v_isSharedCheck_6018_;
goto v_resetjp_5977_;
}
v_resetjp_5977_:
{
if (lean_obj_tag(v_a_5976_) == 1)
{
lean_object* v_toConstantVal_5980_; lean_object* v_val_5981_; lean_object* v___x_5983_; uint8_t v_isShared_5984_; uint8_t v_isSharedCheck_6013_; 
v_toConstantVal_5980_ = lean_ctor_get(v_ctorVal_5963_, 0);
lean_inc_ref(v_toConstantVal_5980_);
lean_dec_ref(v_ctorVal_5963_);
v_val_5981_ = lean_ctor_get(v_a_5976_, 0);
v_isSharedCheck_6013_ = !lean_is_exclusive(v_a_5976_);
if (v_isSharedCheck_6013_ == 0)
{
v___x_5983_ = v_a_5976_;
v_isShared_5984_ = v_isSharedCheck_6013_;
goto v_resetjp_5982_;
}
else
{
lean_inc(v_val_5981_);
lean_dec(v_a_5976_);
v___x_5983_ = lean_box(0);
v_isShared_5984_ = v_isSharedCheck_6013_;
goto v_resetjp_5982_;
}
v_resetjp_5982_:
{
lean_object* v_levelParams_5985_; lean_object* v___x_5987_; uint8_t v_isShared_5988_; uint8_t v_isSharedCheck_6010_; 
v_levelParams_5985_ = lean_ctor_get(v_toConstantVal_5980_, 1);
v_isSharedCheck_6010_ = !lean_is_exclusive(v_toConstantVal_5980_);
if (v_isSharedCheck_6010_ == 0)
{
lean_object* v_unused_6011_; lean_object* v_unused_6012_; 
v_unused_6011_ = lean_ctor_get(v_toConstantVal_5980_, 2);
lean_dec(v_unused_6011_);
v_unused_6012_ = lean_ctor_get(v_toConstantVal_5980_, 0);
lean_dec(v_unused_6012_);
v___x_5987_ = v_toConstantVal_5980_;
v_isShared_5988_ = v_isSharedCheck_6010_;
goto v_resetjp_5986_;
}
else
{
lean_inc(v_levelParams_5985_);
lean_dec(v_toConstantVal_5980_);
v___x_5987_ = lean_box(0);
v_isShared_5988_ = v_isSharedCheck_6010_;
goto v_resetjp_5986_;
}
v_resetjp_5986_:
{
lean_object* v_thmType_5989_; lean_object* v___x_5991_; uint8_t v_isShared_5992_; uint8_t v_isSharedCheck_6007_; 
v_thmType_5989_ = lean_ctor_get(v_val_5974_, 0);
v_isSharedCheck_6007_ = !lean_is_exclusive(v_val_5974_);
if (v_isSharedCheck_6007_ == 0)
{
lean_object* v_unused_6008_; lean_object* v_unused_6009_; 
v_unused_6008_ = lean_ctor_get(v_val_5974_, 2);
lean_dec(v_unused_6008_);
v_unused_6009_ = lean_ctor_get(v_val_5974_, 1);
lean_dec(v_unused_6009_);
v___x_5991_ = v_val_5974_;
v_isShared_5992_ = v_isSharedCheck_6007_;
goto v_resetjp_5990_;
}
else
{
lean_inc(v_thmType_5989_);
lean_dec(v_val_5974_);
v___x_5991_ = lean_box(0);
v_isShared_5992_ = v_isSharedCheck_6007_;
goto v_resetjp_5990_;
}
v_resetjp_5990_:
{
lean_object* v___x_5994_; 
lean_inc(v_thmName_5962_);
if (v_isShared_5988_ == 0)
{
lean_ctor_set(v___x_5987_, 2, v_thmType_5989_);
lean_ctor_set(v___x_5987_, 0, v_thmName_5962_);
v___x_5994_ = v___x_5987_;
goto v_reusejp_5993_;
}
else
{
lean_object* v_reuseFailAlloc_6006_; 
v_reuseFailAlloc_6006_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6006_, 0, v_thmName_5962_);
lean_ctor_set(v_reuseFailAlloc_6006_, 1, v_levelParams_5985_);
lean_ctor_set(v_reuseFailAlloc_6006_, 2, v_thmType_5989_);
v___x_5994_ = v_reuseFailAlloc_6006_;
goto v_reusejp_5993_;
}
v_reusejp_5993_:
{
lean_object* v___x_5995_; lean_object* v___x_5996_; lean_object* v___x_5998_; 
v___x_5995_ = lean_box(0);
v___x_5996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5996_, 0, v_thmName_5962_);
lean_ctor_set(v___x_5996_, 1, v___x_5995_);
if (v_isShared_5992_ == 0)
{
lean_ctor_set(v___x_5991_, 2, v___x_5996_);
lean_ctor_set(v___x_5991_, 1, v_val_5981_);
lean_ctor_set(v___x_5991_, 0, v___x_5994_);
v___x_5998_ = v___x_5991_;
goto v_reusejp_5997_;
}
else
{
lean_object* v_reuseFailAlloc_6005_; 
v_reuseFailAlloc_6005_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6005_, 0, v___x_5994_);
lean_ctor_set(v_reuseFailAlloc_6005_, 1, v_val_5981_);
lean_ctor_set(v_reuseFailAlloc_6005_, 2, v___x_5996_);
v___x_5998_ = v_reuseFailAlloc_6005_;
goto v_reusejp_5997_;
}
v_reusejp_5997_:
{
lean_object* v___x_6000_; 
if (v_isShared_5984_ == 0)
{
lean_ctor_set(v___x_5983_, 0, v___x_5998_);
v___x_6000_ = v___x_5983_;
goto v_reusejp_5999_;
}
else
{
lean_object* v_reuseFailAlloc_6004_; 
v_reuseFailAlloc_6004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6004_, 0, v___x_5998_);
v___x_6000_ = v_reuseFailAlloc_6004_;
goto v_reusejp_5999_;
}
v_reusejp_5999_:
{
lean_object* v___x_6002_; 
if (v_isShared_5979_ == 0)
{
lean_ctor_set(v___x_5978_, 0, v___x_6000_);
v___x_6002_ = v___x_5978_;
goto v_reusejp_6001_;
}
else
{
lean_object* v_reuseFailAlloc_6003_; 
v_reuseFailAlloc_6003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6003_, 0, v___x_6000_);
v___x_6002_ = v_reuseFailAlloc_6003_;
goto v_reusejp_6001_;
}
v_reusejp_6001_:
{
return v___x_6002_;
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
lean_object* v___x_6014_; lean_object* v___x_6016_; 
lean_dec(v_a_5976_);
lean_dec(v_val_5974_);
lean_dec_ref(v_ctorVal_5963_);
lean_dec(v_thmName_5962_);
v___x_6014_ = lean_box(0);
if (v_isShared_5979_ == 0)
{
lean_ctor_set(v___x_5978_, 0, v___x_6014_);
v___x_6016_ = v___x_5978_;
goto v_reusejp_6015_;
}
else
{
lean_object* v_reuseFailAlloc_6017_; 
v_reuseFailAlloc_6017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6017_, 0, v___x_6014_);
v___x_6016_ = v_reuseFailAlloc_6017_;
goto v_reusejp_6015_;
}
v_reusejp_6015_:
{
return v___x_6016_;
}
}
}
}
else
{
lean_object* v_a_6019_; lean_object* v___x_6021_; uint8_t v_isShared_6022_; uint8_t v_isSharedCheck_6026_; 
lean_dec(v_val_5974_);
lean_dec_ref(v_ctorVal_5963_);
lean_dec(v_thmName_5962_);
v_a_6019_ = lean_ctor_get(v___x_5975_, 0);
v_isSharedCheck_6026_ = !lean_is_exclusive(v___x_5975_);
if (v_isSharedCheck_6026_ == 0)
{
v___x_6021_ = v___x_5975_;
v_isShared_6022_ = v_isSharedCheck_6026_;
goto v_resetjp_6020_;
}
else
{
lean_inc(v_a_6019_);
lean_dec(v___x_5975_);
v___x_6021_ = lean_box(0);
v_isShared_6022_ = v_isSharedCheck_6026_;
goto v_resetjp_6020_;
}
v_resetjp_6020_:
{
lean_object* v___x_6024_; 
if (v_isShared_6022_ == 0)
{
v___x_6024_ = v___x_6021_;
goto v_reusejp_6023_;
}
else
{
lean_object* v_reuseFailAlloc_6025_; 
v_reuseFailAlloc_6025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6025_, 0, v_a_6019_);
v___x_6024_ = v_reuseFailAlloc_6025_;
goto v_reusejp_6023_;
}
v_reusejp_6023_:
{
return v___x_6024_;
}
}
}
}
else
{
lean_object* v___x_6027_; lean_object* v___x_6029_; 
lean_dec(v_a_5970_);
lean_dec_ref(v_ctorVal_5963_);
lean_dec(v_thmName_5962_);
v___x_6027_ = lean_box(0);
if (v_isShared_5973_ == 0)
{
lean_ctor_set(v___x_5972_, 0, v___x_6027_);
v___x_6029_ = v___x_5972_;
goto v_reusejp_6028_;
}
else
{
lean_object* v_reuseFailAlloc_6030_; 
v_reuseFailAlloc_6030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6030_, 0, v___x_6027_);
v___x_6029_ = v_reuseFailAlloc_6030_;
goto v_reusejp_6028_;
}
v_reusejp_6028_:
{
return v___x_6029_;
}
}
}
}
else
{
lean_object* v_a_6032_; lean_object* v___x_6034_; uint8_t v_isShared_6035_; uint8_t v_isSharedCheck_6039_; 
lean_dec_ref(v_ctorVal_5963_);
lean_dec(v_thmName_5962_);
v_a_6032_ = lean_ctor_get(v___x_5969_, 0);
v_isSharedCheck_6039_ = !lean_is_exclusive(v___x_5969_);
if (v_isSharedCheck_6039_ == 0)
{
v___x_6034_ = v___x_5969_;
v_isShared_6035_ = v_isSharedCheck_6039_;
goto v_resetjp_6033_;
}
else
{
lean_inc(v_a_6032_);
lean_dec(v___x_5969_);
v___x_6034_ = lean_box(0);
v_isShared_6035_ = v_isSharedCheck_6039_;
goto v_resetjp_6033_;
}
v_resetjp_6033_:
{
lean_object* v___x_6037_; 
if (v_isShared_6035_ == 0)
{
v___x_6037_ = v___x_6034_;
goto v_reusejp_6036_;
}
else
{
lean_object* v_reuseFailAlloc_6038_; 
v_reuseFailAlloc_6038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6038_, 0, v_a_6032_);
v___x_6037_ = v_reuseFailAlloc_6038_;
goto v_reusejp_6036_;
}
v_reusejp_6036_:
{
return v___x_6037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f___boxed(lean_object* v_thmName_6040_, lean_object* v_ctorVal_6041_, lean_object* v_a_6042_, lean_object* v_a_6043_, lean_object* v_a_6044_, lean_object* v_a_6045_, lean_object* v_a_6046_){
_start:
{
lean_object* v_res_6047_; 
v_res_6047_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(v_thmName_6040_, v_ctorVal_6041_, v_a_6042_, v_a_6043_, v_a_6044_, v_a_6045_);
lean_dec(v_a_6045_);
lean_dec_ref(v_a_6044_);
lean_dec(v_a_6043_);
lean_dec_ref(v_a_6042_);
return v_res_6047_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(lean_object* v_env_6048_, lean_object* v_n_6049_){
_start:
{
if (lean_obj_tag(v_n_6049_) == 1)
{
lean_object* v_pre_6050_; lean_object* v_str_6051_; lean_object* v___x_6052_; uint8_t v___x_6053_; 
v_pre_6050_ = lean_ctor_get(v_n_6049_, 0);
lean_inc(v_pre_6050_);
v_str_6051_ = lean_ctor_get(v_n_6049_, 1);
lean_inc_ref(v_str_6051_);
lean_dec_ref_known(v_n_6049_, 2);
v___x_6052_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0));
v___x_6053_ = lean_string_dec_eq(v_str_6051_, v___x_6052_);
lean_dec_ref(v_str_6051_);
if (v___x_6053_ == 0)
{
lean_dec(v_pre_6050_);
lean_dec_ref(v_env_6048_);
return v___x_6053_;
}
else
{
uint8_t v___x_6054_; lean_object* v___x_6055_; 
v___x_6054_ = 0;
v___x_6055_ = l_Lean_Environment_find_x3f(v_env_6048_, v_pre_6050_, v___x_6054_);
if (lean_obj_tag(v___x_6055_) == 1)
{
lean_object* v_val_6056_; 
v_val_6056_ = lean_ctor_get(v___x_6055_, 0);
lean_inc(v_val_6056_);
lean_dec_ref_known(v___x_6055_, 1);
if (lean_obj_tag(v_val_6056_) == 6)
{
lean_dec_ref_known(v_val_6056_, 1);
return v___x_6053_;
}
else
{
lean_dec(v_val_6056_);
return v___x_6054_;
}
}
else
{
lean_dec(v___x_6055_);
return v___x_6054_;
}
}
}
else
{
uint8_t v___x_6057_; 
lean_dec(v_n_6049_);
lean_dec_ref(v_env_6048_);
v___x_6057_ = 0;
return v___x_6057_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object* v_env_6058_, lean_object* v_n_6059_){
_start:
{
uint8_t v_res_6060_; lean_object* v_r_6061_; 
v_res_6060_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(v_env_6058_, v_n_6059_);
v_r_6061_ = lean_box(v_res_6060_);
return v_r_6061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_6064_; lean_object* v___x_6065_; 
v___f_6064_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_));
v___x_6065_ = l_Lean_registerReservedNamePredicate(v___f_6064_);
return v___x_6065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object* v_a_6066_){
_start:
{
lean_object* v_res_6067_; 
v_res_6067_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_();
return v_res_6067_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(lean_object* v_thm_6068_, lean_object* v___y_6069_){
_start:
{
lean_object* v___x_6071_; lean_object* v_env_6072_; lean_object* v_toConstantVal_6073_; lean_object* v_value_6074_; lean_object* v_all_6075_; uint8_t v___y_6077_; lean_object* v_type_6085_; uint8_t v___x_6086_; 
v___x_6071_ = lean_st_ref_get(v___y_6069_);
v_env_6072_ = lean_ctor_get(v___x_6071_, 0);
lean_inc_ref_n(v_env_6072_, 2);
lean_dec(v___x_6071_);
v_toConstantVal_6073_ = lean_ctor_get(v_thm_6068_, 0);
v_value_6074_ = lean_ctor_get(v_thm_6068_, 1);
v_all_6075_ = lean_ctor_get(v_thm_6068_, 2);
v_type_6085_ = lean_ctor_get(v_toConstantVal_6073_, 2);
v___x_6086_ = l_Lean_Environment_hasUnsafe(v_env_6072_, v_type_6085_);
if (v___x_6086_ == 0)
{
uint8_t v___x_6087_; 
v___x_6087_ = l_Lean_Environment_hasUnsafe(v_env_6072_, v_value_6074_);
v___y_6077_ = v___x_6087_;
goto v___jp_6076_;
}
else
{
lean_dec_ref(v_env_6072_);
v___y_6077_ = v___x_6086_;
goto v___jp_6076_;
}
v___jp_6076_:
{
if (v___y_6077_ == 0)
{
lean_object* v___x_6078_; lean_object* v___x_6079_; 
v___x_6078_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_6078_, 0, v_thm_6068_);
v___x_6079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6079_, 0, v___x_6078_);
return v___x_6079_;
}
else
{
lean_object* v___x_6080_; uint8_t v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; 
lean_inc(v_all_6075_);
lean_inc_ref(v_value_6074_);
lean_inc_ref(v_toConstantVal_6073_);
lean_dec_ref(v_thm_6068_);
v___x_6080_ = lean_box(0);
v___x_6081_ = 0;
v___x_6082_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_6082_, 0, v_toConstantVal_6073_);
lean_ctor_set(v___x_6082_, 1, v_value_6074_);
lean_ctor_set(v___x_6082_, 2, v___x_6080_);
lean_ctor_set(v___x_6082_, 3, v_all_6075_);
lean_ctor_set_uint8(v___x_6082_, sizeof(void*)*4, v___x_6081_);
v___x_6083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6083_, 0, v___x_6082_);
v___x_6084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6084_, 0, v___x_6083_);
return v___x_6084_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_thm_6088_, lean_object* v___y_6089_, lean_object* v___y_6090_){
_start:
{
lean_object* v_res_6091_; 
v_res_6091_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(v_thm_6088_, v___y_6089_);
lean_dec(v___y_6089_);
return v_res_6091_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0(lean_object* v_thm_6092_, lean_object* v___y_6093_, lean_object* v___y_6094_, lean_object* v___y_6095_, lean_object* v___y_6096_){
_start:
{
lean_object* v___x_6098_; 
v___x_6098_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(v_thm_6092_, v___y_6096_);
return v___x_6098_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___boxed(lean_object* v_thm_6099_, lean_object* v___y_6100_, lean_object* v___y_6101_, lean_object* v___y_6102_, lean_object* v___y_6103_, lean_object* v___y_6104_){
_start:
{
lean_object* v_res_6105_; 
v_res_6105_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0(v_thm_6099_, v___y_6100_, v___y_6101_, v___y_6102_, v___y_6103_);
lean_dec(v___y_6103_);
lean_dec_ref(v___y_6102_);
lean_dec(v___y_6101_);
lean_dec_ref(v___y_6100_);
return v_res_6105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object* v_val_6106_, uint8_t v___x_6107_, lean_object* v___y_6108_, lean_object* v___y_6109_, lean_object* v___y_6110_, lean_object* v___y_6111_){
_start:
{
lean_object* v___x_6113_; lean_object* v_a_6114_; lean_object* v___x_6115_; 
v___x_6113_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(v_val_6106_, v___y_6111_);
v_a_6114_ = lean_ctor_get(v___x_6113_, 0);
lean_inc(v_a_6114_);
lean_dec_ref(v___x_6113_);
v___x_6115_ = l_Lean_addDecl(v_a_6114_, v___x_6107_, v___y_6110_, v___y_6111_);
return v___x_6115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object* v_val_6116_, lean_object* v___x_6117_, lean_object* v___y_6118_, lean_object* v___y_6119_, lean_object* v___y_6120_, lean_object* v___y_6121_, lean_object* v___y_6122_){
_start:
{
uint8_t v___x_2141__boxed_6123_; lean_object* v_res_6124_; 
v___x_2141__boxed_6123_ = lean_unbox(v___x_6117_);
v_res_6124_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(v_val_6116_, v___x_2141__boxed_6123_, v___y_6118_, v___y_6119_, v___y_6120_, v___y_6121_);
lean_dec(v___y_6121_);
lean_dec_ref(v___y_6120_);
lean_dec(v___y_6119_);
lean_dec_ref(v___y_6118_);
return v_res_6124_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; 
v___x_6127_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__0, &l_Lean_Meta_mkInjectiveTheorems___closed__0_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__0);
v___x_6128_ = lean_unsigned_to_nat(0u);
v___x_6129_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_6129_, 0, v___x_6128_);
lean_ctor_set(v___x_6129_, 1, v___x_6128_);
lean_ctor_set(v___x_6129_, 2, v___x_6128_);
lean_ctor_set(v___x_6129_, 3, v___x_6128_);
lean_ctor_set(v___x_6129_, 4, v___x_6127_);
lean_ctor_set(v___x_6129_, 5, v___x_6127_);
lean_ctor_set(v___x_6129_, 6, v___x_6127_);
lean_ctor_set(v___x_6129_, 7, v___x_6127_);
lean_ctor_set(v___x_6129_, 8, v___x_6127_);
lean_ctor_set(v___x_6129_, 9, v___x_6127_);
lean_ctor_set(v___x_6129_, 10, v___x_6127_);
return v___x_6129_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6130_; lean_object* v___x_6131_; 
v___x_6130_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__0, &l_Lean_Meta_mkInjectiveTheorems___closed__0_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__0);
v___x_6131_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_6131_, 0, v___x_6130_);
lean_ctor_set(v___x_6131_, 1, v___x_6130_);
lean_ctor_set(v___x_6131_, 2, v___x_6130_);
lean_ctor_set(v___x_6131_, 3, v___x_6130_);
lean_ctor_set(v___x_6131_, 4, v___x_6130_);
lean_ctor_set(v___x_6131_, 5, v___x_6130_);
return v___x_6131_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6132_; lean_object* v___x_6133_; 
v___x_6132_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__0, &l_Lean_Meta_mkInjectiveTheorems___closed__0_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__0);
v___x_6133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6133_, 0, v___x_6132_);
lean_ctor_set(v___x_6133_, 1, v___x_6132_);
lean_ctor_set(v___x_6133_, 2, v___x_6132_);
lean_ctor_set(v___x_6133_, 3, v___x_6132_);
lean_ctor_set(v___x_6133_, 4, v___x_6132_);
return v___x_6133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object* v___x_6134_, lean_object* v_name_6135_, lean_object* v___y_6136_, lean_object* v___y_6137_){
_start:
{
if (lean_obj_tag(v_name_6135_) == 1)
{
lean_object* v_pre_6147_; lean_object* v_str_6148_; lean_object* v___x_6149_; uint8_t v___x_6150_; 
v_pre_6147_ = lean_ctor_get(v_name_6135_, 0);
lean_inc(v_pre_6147_);
v_str_6148_ = lean_ctor_get(v_name_6135_, 1);
v___x_6149_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0));
v___x_6150_ = lean_string_dec_eq(v_str_6148_, v___x_6149_);
if (v___x_6150_ == 0)
{
lean_dec(v_pre_6147_);
lean_dec_ref_known(v_name_6135_, 2);
lean_dec(v___x_6134_);
goto v___jp_6143_;
}
else
{
lean_object* v___x_6151_; lean_object* v_env_6152_; uint8_t v___x_6153_; lean_object* v___x_6154_; 
v___x_6151_ = lean_st_ref_get(v___y_6137_);
v_env_6152_ = lean_ctor_get(v___x_6151_, 0);
lean_inc_ref(v_env_6152_);
lean_dec(v___x_6151_);
v___x_6153_ = 0;
lean_inc(v_pre_6147_);
v___x_6154_ = l_Lean_Environment_find_x3f(v_env_6152_, v_pre_6147_, v___x_6153_);
if (lean_obj_tag(v___x_6154_) == 1)
{
lean_object* v_val_6155_; 
v_val_6155_ = lean_ctor_get(v___x_6154_, 0);
lean_inc(v_val_6155_);
lean_dec_ref_known(v___x_6154_, 1);
if (lean_obj_tag(v_val_6155_) == 6)
{
lean_object* v_val_6156_; lean_object* v___x_6158_; uint8_t v_isShared_6159_; uint8_t v_isSharedCheck_6206_; 
v_val_6156_ = lean_ctor_get(v_val_6155_, 0);
v_isSharedCheck_6206_ = !lean_is_exclusive(v_val_6155_);
if (v_isSharedCheck_6206_ == 0)
{
v___x_6158_ = v_val_6155_;
v_isShared_6159_ = v_isSharedCheck_6206_;
goto v_resetjp_6157_;
}
else
{
lean_inc(v_val_6156_);
lean_dec(v_val_6155_);
v___x_6158_ = lean_box(0);
v_isShared_6159_ = v_isSharedCheck_6206_;
goto v_resetjp_6157_;
}
v_resetjp_6157_:
{
uint8_t v___x_6160_; uint8_t v___x_6161_; uint8_t v___x_6162_; lean_object* v___x_6163_; uint64_t v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; lean_object* v___x_6167_; lean_object* v___x_6168_; lean_object* v___x_6169_; lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; uint8_t v_a_6178_; lean_object* v___x_6184_; 
v___x_6160_ = 1;
v___x_6161_ = 0;
v___x_6162_ = 2;
v___x_6163_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_6163_, 0, v___x_6153_);
lean_ctor_set_uint8(v___x_6163_, 1, v___x_6153_);
lean_ctor_set_uint8(v___x_6163_, 2, v___x_6153_);
lean_ctor_set_uint8(v___x_6163_, 3, v___x_6153_);
lean_ctor_set_uint8(v___x_6163_, 4, v___x_6153_);
lean_ctor_set_uint8(v___x_6163_, 5, v___x_6150_);
lean_ctor_set_uint8(v___x_6163_, 6, v___x_6150_);
lean_ctor_set_uint8(v___x_6163_, 7, v___x_6153_);
lean_ctor_set_uint8(v___x_6163_, 8, v___x_6150_);
lean_ctor_set_uint8(v___x_6163_, 9, v___x_6160_);
lean_ctor_set_uint8(v___x_6163_, 10, v___x_6161_);
lean_ctor_set_uint8(v___x_6163_, 11, v___x_6150_);
lean_ctor_set_uint8(v___x_6163_, 12, v___x_6150_);
lean_ctor_set_uint8(v___x_6163_, 13, v___x_6150_);
lean_ctor_set_uint8(v___x_6163_, 14, v___x_6162_);
lean_ctor_set_uint8(v___x_6163_, 15, v___x_6150_);
lean_ctor_set_uint8(v___x_6163_, 16, v___x_6150_);
lean_ctor_set_uint8(v___x_6163_, 17, v___x_6150_);
lean_ctor_set_uint8(v___x_6163_, 18, v___x_6150_);
lean_ctor_set_uint8(v___x_6163_, 19, v___x_6153_);
v___x_6164_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_6163_);
v___x_6165_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_6165_, 0, v___x_6163_);
lean_ctor_set_uint64(v___x_6165_, sizeof(void*)*1, v___x_6164_);
v___x_6166_ = lean_unsigned_to_nat(0u);
v___x_6167_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__2, &l_Lean_Meta_mkInjectiveTheorems___closed__2_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__2);
v___x_6168_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_6169_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_));
v___x_6170_ = lean_box(0);
lean_inc(v___x_6134_);
v___x_6171_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_6171_, 0, v___x_6165_);
lean_ctor_set(v___x_6171_, 1, v___x_6134_);
lean_ctor_set(v___x_6171_, 2, v___x_6168_);
lean_ctor_set(v___x_6171_, 3, v___x_6169_);
lean_ctor_set(v___x_6171_, 4, v___x_6170_);
lean_ctor_set(v___x_6171_, 5, v___x_6166_);
lean_ctor_set(v___x_6171_, 6, v___x_6170_);
lean_ctor_set_uint8(v___x_6171_, sizeof(void*)*7, v___x_6153_);
lean_ctor_set_uint8(v___x_6171_, sizeof(void*)*7 + 1, v___x_6153_);
lean_ctor_set_uint8(v___x_6171_, sizeof(void*)*7 + 2, v___x_6153_);
lean_ctor_set_uint8(v___x_6171_, sizeof(void*)*7 + 3, v___x_6150_);
v___x_6172_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_);
v___x_6173_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_);
v___x_6174_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_);
v___x_6175_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6175_, 0, v___x_6172_);
lean_ctor_set(v___x_6175_, 1, v___x_6173_);
lean_ctor_set(v___x_6175_, 2, v___x_6134_);
lean_ctor_set(v___x_6175_, 3, v___x_6167_);
lean_ctor_set(v___x_6175_, 4, v___x_6174_);
v___x_6176_ = lean_st_mk_ref(v___x_6175_);
lean_inc_ref(v_name_6135_);
v___x_6184_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(v_name_6135_, v_val_6156_, v___x_6171_, v___x_6176_, v___y_6136_, v___y_6137_);
if (lean_obj_tag(v___x_6184_) == 0)
{
lean_object* v_a_6185_; 
v_a_6185_ = lean_ctor_get(v___x_6184_, 0);
lean_inc(v_a_6185_);
lean_dec_ref_known(v___x_6184_, 1);
if (lean_obj_tag(v_a_6185_) == 1)
{
lean_object* v_val_6186_; lean_object* v___x_6187_; lean_object* v___f_6188_; lean_object* v___x_6189_; 
v_val_6186_ = lean_ctor_get(v_a_6185_, 0);
lean_inc(v_val_6186_);
lean_dec_ref_known(v_a_6185_, 1);
v___x_6187_ = lean_box(v___x_6153_);
v___f_6188_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed), 7, 2);
lean_closure_set(v___f_6188_, 0, v_val_6186_);
lean_closure_set(v___f_6188_, 1, v___x_6187_);
v___x_6189_ = l_Lean_Meta_realizeConst(v_pre_6147_, v_name_6135_, v___f_6188_, v___x_6171_, v___x_6176_, v___y_6136_, v___y_6137_);
lean_dec_ref_known(v___x_6171_, 7);
if (lean_obj_tag(v___x_6189_) == 0)
{
lean_dec_ref_known(v___x_6189_, 1);
v_a_6178_ = v___x_6150_;
goto v___jp_6177_;
}
else
{
lean_object* v_a_6190_; lean_object* v___x_6192_; uint8_t v_isShared_6193_; uint8_t v_isSharedCheck_6197_; 
lean_dec(v___x_6176_);
lean_del_object(v___x_6158_);
v_a_6190_ = lean_ctor_get(v___x_6189_, 0);
v_isSharedCheck_6197_ = !lean_is_exclusive(v___x_6189_);
if (v_isSharedCheck_6197_ == 0)
{
v___x_6192_ = v___x_6189_;
v_isShared_6193_ = v_isSharedCheck_6197_;
goto v_resetjp_6191_;
}
else
{
lean_inc(v_a_6190_);
lean_dec(v___x_6189_);
v___x_6192_ = lean_box(0);
v_isShared_6193_ = v_isSharedCheck_6197_;
goto v_resetjp_6191_;
}
v_resetjp_6191_:
{
lean_object* v___x_6195_; 
if (v_isShared_6193_ == 0)
{
v___x_6195_ = v___x_6192_;
goto v_reusejp_6194_;
}
else
{
lean_object* v_reuseFailAlloc_6196_; 
v_reuseFailAlloc_6196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6196_, 0, v_a_6190_);
v___x_6195_ = v_reuseFailAlloc_6196_;
goto v_reusejp_6194_;
}
v_reusejp_6194_:
{
return v___x_6195_;
}
}
}
}
else
{
lean_dec(v_a_6185_);
lean_dec_ref_known(v___x_6171_, 7);
lean_dec_ref_known(v_name_6135_, 2);
lean_dec(v_pre_6147_);
v_a_6178_ = v___x_6153_;
goto v___jp_6177_;
}
}
else
{
lean_object* v_a_6198_; lean_object* v___x_6200_; uint8_t v_isShared_6201_; uint8_t v_isSharedCheck_6205_; 
lean_dec(v___x_6176_);
lean_dec_ref_known(v___x_6171_, 7);
lean_del_object(v___x_6158_);
lean_dec_ref_known(v_name_6135_, 2);
lean_dec(v_pre_6147_);
v_a_6198_ = lean_ctor_get(v___x_6184_, 0);
v_isSharedCheck_6205_ = !lean_is_exclusive(v___x_6184_);
if (v_isSharedCheck_6205_ == 0)
{
v___x_6200_ = v___x_6184_;
v_isShared_6201_ = v_isSharedCheck_6205_;
goto v_resetjp_6199_;
}
else
{
lean_inc(v_a_6198_);
lean_dec(v___x_6184_);
v___x_6200_ = lean_box(0);
v_isShared_6201_ = v_isSharedCheck_6205_;
goto v_resetjp_6199_;
}
v_resetjp_6199_:
{
lean_object* v___x_6203_; 
if (v_isShared_6201_ == 0)
{
v___x_6203_ = v___x_6200_;
goto v_reusejp_6202_;
}
else
{
lean_object* v_reuseFailAlloc_6204_; 
v_reuseFailAlloc_6204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6204_, 0, v_a_6198_);
v___x_6203_ = v_reuseFailAlloc_6204_;
goto v_reusejp_6202_;
}
v_reusejp_6202_:
{
return v___x_6203_;
}
}
}
v___jp_6177_:
{
lean_object* v___x_6179_; lean_object* v___x_6180_; lean_object* v___x_6182_; 
v___x_6179_ = lean_st_ref_get(v___x_6176_);
lean_dec(v___x_6176_);
lean_dec(v___x_6179_);
v___x_6180_ = lean_box(v_a_6178_);
if (v_isShared_6159_ == 0)
{
lean_ctor_set_tag(v___x_6158_, 0);
lean_ctor_set(v___x_6158_, 0, v___x_6180_);
v___x_6182_ = v___x_6158_;
goto v_reusejp_6181_;
}
else
{
lean_object* v_reuseFailAlloc_6183_; 
v_reuseFailAlloc_6183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6183_, 0, v___x_6180_);
v___x_6182_ = v_reuseFailAlloc_6183_;
goto v_reusejp_6181_;
}
v_reusejp_6181_:
{
return v___x_6182_;
}
}
}
}
else
{
lean_dec(v_val_6155_);
lean_dec_ref_known(v_name_6135_, 2);
lean_dec(v_pre_6147_);
lean_dec(v___x_6134_);
goto v___jp_6139_;
}
}
else
{
lean_dec(v___x_6154_);
lean_dec(v_pre_6147_);
lean_dec_ref_known(v_name_6135_, 2);
lean_dec(v___x_6134_);
goto v___jp_6139_;
}
}
}
else
{
lean_dec(v_name_6135_);
lean_dec(v___x_6134_);
goto v___jp_6143_;
}
v___jp_6139_:
{
uint8_t v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; 
v___x_6140_ = 0;
v___x_6141_ = lean_box(v___x_6140_);
v___x_6142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6142_, 0, v___x_6141_);
return v___x_6142_;
}
v___jp_6143_:
{
uint8_t v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; 
v___x_6144_ = 0;
v___x_6145_ = lean_box(v___x_6144_);
v___x_6146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6146_, 0, v___x_6145_);
return v___x_6146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object* v___x_6207_, lean_object* v_name_6208_, lean_object* v___y_6209_, lean_object* v___y_6210_, lean_object* v___y_6211_){
_start:
{
lean_object* v_res_6212_; 
v_res_6212_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(v___x_6207_, v_name_6208_, v___y_6209_, v___y_6210_);
lean_dec(v___y_6210_);
lean_dec_ref(v___y_6209_);
return v_res_6212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_6216_; lean_object* v___x_6217_; 
v___f_6216_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_));
v___x_6217_ = l_Lean_registerReservedNameAction(v___f_6216_);
return v___x_6217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object* v_a_6218_){
_start:
{
lean_object* v_res_6219_; 
v_res_6219_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_();
return v_res_6219_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Injection(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Injective(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_genInjectivity = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_genInjectivity);
lean_dec_ref(res);
res = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Injective(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Injection(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Injective(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Injective(builtin);
}
#ifdef __cplusplus
}
#endif

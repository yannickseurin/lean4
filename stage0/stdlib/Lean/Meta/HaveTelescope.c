// Lean compiler output
// Module: Lean.Meta.HaveTelescope
// Imports: public import Lean.Meta.Basic public import Lean.Meta.MonadSimp import Lean.Util.CollectFVars import Lean.Util.CollectLooseBVars import Lean.Meta.AppBuilder import Init.While
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
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_collectLooseBVars(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_addDecl(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withExistingLocalDecls___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__1;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__2;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveInfo_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveInfo;
static const lean_array_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0_value;
static const lean_string_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "_have_telescope_info_dummy_"};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(6, 236, 171, 204, 19, 216, 21, 195)}};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo;
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1;
static const lean_array_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0 = (const lean_object*)&l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "have_unused_dep'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "have_unused'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "have_body_congr_dep'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "have_val_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "have_body_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "have_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "have telescope; simplifying body "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(224, 171, 76, 175, 220, 234, 86, 123)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(203, 102, 186, 241, 230, 68, 112, 189)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(231, 39, 204, 185, 148, 242, 27, 8)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "have telescope; unused "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "have telescope; fixed "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "have telescope; non-fixed "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Debug"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 248, 27, 31, 3, 126, 142, 13)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_value),LEAN_SCALAR_PTR_LITERAL(119, 140, 6, 58, 231, 192, 8, 160)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 39, 251, 153, 6, 255, 160, 132)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3_value),LEAN_SCALAR_PTR_LITERAL(66, 96, 215, 110, 82, 218, 253, 207)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed(lean_object**);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(255, 213, 12, 50, 85, 170, 122, 222)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(238, 251, 30, 34, 208, 131, 54, 223)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(33, 35, 129, 148, 230, 9, 239, 46)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.HaveTelescope"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "_private.Lean.Meta.HaveTelescope.0.Lean.Meta.simpHaveTelescopeAux"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "assertion violation: !rb.exprType.hasLooseBVar 0\n        "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "_simp_let_unused_dummy"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value),LEAN_SCALAR_PTR_LITERAL(131, 140, 102, 13, 80, 16, 156, 102)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 40, 198, 234, 16, 168, 79, 243)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.simpHaveTelescope"};
static const lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0_value;
static const lean_string_object l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "assertion violation: !info.haveInfo.isEmpty\n  "};
static const lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__0, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__0_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_box(0);
v___x_8_ = l_unsafeCast___redArg(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__3(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_9_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__2, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__2_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__2);
v___x_10_ = l_Lean_instInhabitedLocalDecl_default;
v___x_11_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_12_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_11_);
lean_ctor_set(v___x_12_, 2, v___x_10_);
lean_ctor_set(v___x_12_, 3, v___x_9_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__3, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__3_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__3);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Meta_instInhabitedHaveInfo_default;
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = lean_box(0);
v___x_21_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2));
v___x_22_ = l_Lean_Expr_const___override(v___x_21_, v___x_20_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2));
v___x_24_ = l_Lean_Level_param___override(v___x_23_);
return v___x_24_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_25_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4);
v___x_26_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3);
v___x_27_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_28_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0));
v___x_29_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___x_27_);
lean_ctor_set(v___x_29_, 2, v___x_27_);
lean_ctor_set(v___x_29_, 3, v___x_26_);
lean_ctor_set(v___x_29_, 4, v___x_26_);
lean_ctor_set(v___x_29_, 5, v___x_25_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Meta_instInhabitedHaveTelescopeInfo_default;
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(lean_object* v_lctx_32_, lean_object* v_x_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_){
_start:
{
lean_object* v_keyedConfig_39_; uint8_t v_trackZetaDelta_40_; lean_object* v_zetaDeltaSet_41_; lean_object* v_localInstances_42_; lean_object* v_defEqCtx_x3f_43_; lean_object* v_synthPendingDepth_44_; lean_object* v_customCanUnfoldPredicate_x3f_45_; uint8_t v_univApprox_46_; uint8_t v_inTypeClassResolution_47_; uint8_t v_cacheInferType_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v_keyedConfig_39_ = lean_ctor_get(v___y_34_, 0);
v_trackZetaDelta_40_ = lean_ctor_get_uint8(v___y_34_, sizeof(void*)*7);
v_zetaDeltaSet_41_ = lean_ctor_get(v___y_34_, 1);
v_localInstances_42_ = lean_ctor_get(v___y_34_, 3);
v_defEqCtx_x3f_43_ = lean_ctor_get(v___y_34_, 4);
v_synthPendingDepth_44_ = lean_ctor_get(v___y_34_, 5);
v_customCanUnfoldPredicate_x3f_45_ = lean_ctor_get(v___y_34_, 6);
v_univApprox_46_ = lean_ctor_get_uint8(v___y_34_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_47_ = lean_ctor_get_uint8(v___y_34_, sizeof(void*)*7 + 2);
v_cacheInferType_48_ = lean_ctor_get_uint8(v___y_34_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_45_);
lean_inc(v_synthPendingDepth_44_);
lean_inc(v_defEqCtx_x3f_43_);
lean_inc_ref(v_localInstances_42_);
lean_inc(v_zetaDeltaSet_41_);
lean_inc_ref(v_keyedConfig_39_);
v___x_49_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_49_, 0, v_keyedConfig_39_);
lean_ctor_set(v___x_49_, 1, v_zetaDeltaSet_41_);
lean_ctor_set(v___x_49_, 2, v_lctx_32_);
lean_ctor_set(v___x_49_, 3, v_localInstances_42_);
lean_ctor_set(v___x_49_, 4, v_defEqCtx_x3f_43_);
lean_ctor_set(v___x_49_, 5, v_synthPendingDepth_44_);
lean_ctor_set(v___x_49_, 6, v_customCanUnfoldPredicate_x3f_45_);
lean_ctor_set_uint8(v___x_49_, sizeof(void*)*7, v_trackZetaDelta_40_);
lean_ctor_set_uint8(v___x_49_, sizeof(void*)*7 + 1, v_univApprox_46_);
lean_ctor_set_uint8(v___x_49_, sizeof(void*)*7 + 2, v_inTypeClassResolution_47_);
lean_ctor_set_uint8(v___x_49_, sizeof(void*)*7 + 3, v_cacheInferType_48_);
lean_inc(v___y_37_);
lean_inc_ref(v___y_36_);
lean_inc(v___y_35_);
v___x_50_ = lean_apply_5(v_x_33_, v___x_49_, v___y_35_, v___y_36_, v___y_37_, lean_box(0));
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg___boxed(lean_object* v_lctx_51_, lean_object* v_x_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_51_, v_x_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(lean_object* v_00_u03b1_59_, lean_object* v_lctx_60_, lean_object* v_x_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_60_, v_x_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___boxed(lean_object* v_00_u03b1_68_, lean_object* v_lctx_69_, lean_object* v_x_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(v_00_u03b1_68_, v_lctx_69_, v_x_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(lean_object* v_x_77_, lean_object* v_x_78_){
_start:
{
if (lean_obj_tag(v_x_78_) == 0)
{
return v_x_77_;
}
else
{
lean_object* v_key_79_; lean_object* v_value_80_; lean_object* v_tail_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_104_; 
v_key_79_ = lean_ctor_get(v_x_78_, 0);
v_value_80_ = lean_ctor_get(v_x_78_, 1);
v_tail_81_ = lean_ctor_get(v_x_78_, 2);
v_isSharedCheck_104_ = !lean_is_exclusive(v_x_78_);
if (v_isSharedCheck_104_ == 0)
{
v___x_83_ = v_x_78_;
v_isShared_84_ = v_isSharedCheck_104_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_tail_81_);
lean_inc(v_value_80_);
lean_inc(v_key_79_);
lean_dec(v_x_78_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_104_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_85_; uint64_t v___x_86_; uint64_t v___x_87_; uint64_t v___x_88_; uint64_t v_fold_89_; uint64_t v___x_90_; uint64_t v___x_91_; uint64_t v___x_92_; size_t v___x_93_; size_t v___x_94_; size_t v___x_95_; size_t v___x_96_; size_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_100_; 
v___x_85_ = lean_array_get_size(v_x_77_);
v___x_86_ = lean_uint64_of_nat(v_key_79_);
v___x_87_ = 32ULL;
v___x_88_ = lean_uint64_shift_right(v___x_86_, v___x_87_);
v_fold_89_ = lean_uint64_xor(v___x_86_, v___x_88_);
v___x_90_ = 16ULL;
v___x_91_ = lean_uint64_shift_right(v_fold_89_, v___x_90_);
v___x_92_ = lean_uint64_xor(v_fold_89_, v___x_91_);
v___x_93_ = lean_uint64_to_usize(v___x_92_);
v___x_94_ = lean_usize_of_nat(v___x_85_);
v___x_95_ = ((size_t)1ULL);
v___x_96_ = lean_usize_sub(v___x_94_, v___x_95_);
v___x_97_ = lean_usize_land(v___x_93_, v___x_96_);
v___x_98_ = lean_array_uget_borrowed(v_x_77_, v___x_97_);
lean_inc(v___x_98_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 2, v___x_98_);
v___x_100_ = v___x_83_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_key_79_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v_value_80_);
lean_ctor_set(v_reuseFailAlloc_103_, 2, v___x_98_);
v___x_100_ = v_reuseFailAlloc_103_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
lean_object* v___x_101_; 
v___x_101_ = lean_array_uset(v_x_77_, v___x_97_, v___x_100_);
v_x_77_ = v___x_101_;
v_x_78_ = v_tail_81_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(lean_object* v_i_105_, lean_object* v_source_106_, lean_object* v_target_107_){
_start:
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = lean_array_get_size(v_source_106_);
v___x_109_ = lean_nat_dec_lt(v_i_105_, v___x_108_);
if (v___x_109_ == 0)
{
lean_dec_ref(v_source_106_);
lean_dec(v_i_105_);
return v_target_107_;
}
else
{
lean_object* v_es_110_; lean_object* v___x_111_; lean_object* v_source_112_; lean_object* v_target_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v_es_110_ = lean_array_fget(v_source_106_, v_i_105_);
v___x_111_ = lean_box(0);
v_source_112_ = lean_array_fset(v_source_106_, v_i_105_, v___x_111_);
v_target_113_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(v_target_107_, v_es_110_);
v___x_114_ = lean_unsigned_to_nat(1u);
v___x_115_ = lean_nat_add(v_i_105_, v___x_114_);
lean_dec(v_i_105_);
v_i_105_ = v___x_115_;
v_source_106_ = v_source_112_;
v_target_107_ = v_target_113_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(lean_object* v_data_117_){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v_nbuckets_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_118_ = lean_array_get_size(v_data_117_);
v___x_119_ = lean_unsigned_to_nat(2u);
v_nbuckets_120_ = lean_nat_mul(v___x_118_, v___x_119_);
v___x_121_ = lean_unsigned_to_nat(0u);
v___x_122_ = lean_box(0);
v___x_123_ = lean_mk_array(v_nbuckets_120_, v___x_122_);
v___x_124_ = lean_array_propagate_mark(v_data_117_, v___x_123_);
v___x_125_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(v___x_121_, v_data_117_, v___x_124_);
return v___x_125_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(lean_object* v_a_126_, lean_object* v_x_127_){
_start:
{
if (lean_obj_tag(v_x_127_) == 0)
{
uint8_t v___x_128_; 
v___x_128_ = 0;
return v___x_128_;
}
else
{
lean_object* v_key_129_; lean_object* v_tail_130_; uint8_t v___x_131_; 
v_key_129_ = lean_ctor_get(v_x_127_, 0);
v_tail_130_ = lean_ctor_get(v_x_127_, 2);
v___x_131_ = lean_nat_dec_eq(v_key_129_, v_a_126_);
if (v___x_131_ == 0)
{
v_x_127_ = v_tail_130_;
goto _start;
}
else
{
return v___x_131_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg___boxed(lean_object* v_a_133_, lean_object* v_x_134_){
_start:
{
uint8_t v_res_135_; lean_object* v_r_136_; 
v_res_135_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_133_, v_x_134_);
lean_dec(v_x_134_);
lean_dec(v_a_133_);
v_r_136_ = lean_box(v_res_135_);
return v_r_136_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(lean_object* v_m_137_, lean_object* v_a_138_, lean_object* v_b_139_){
_start:
{
lean_object* v_size_140_; lean_object* v_buckets_141_; lean_object* v___x_142_; uint64_t v___x_143_; uint64_t v___x_144_; uint64_t v___x_145_; uint64_t v_fold_146_; uint64_t v___x_147_; uint64_t v___x_148_; uint64_t v___x_149_; size_t v___x_150_; size_t v___x_151_; size_t v___x_152_; size_t v___x_153_; size_t v___x_154_; lean_object* v_bkt_155_; uint8_t v___x_156_; 
v_size_140_ = lean_ctor_get(v_m_137_, 0);
v_buckets_141_ = lean_ctor_get(v_m_137_, 1);
v___x_142_ = lean_array_get_size(v_buckets_141_);
v___x_143_ = lean_uint64_of_nat(v_a_138_);
v___x_144_ = 32ULL;
v___x_145_ = lean_uint64_shift_right(v___x_143_, v___x_144_);
v_fold_146_ = lean_uint64_xor(v___x_143_, v___x_145_);
v___x_147_ = 16ULL;
v___x_148_ = lean_uint64_shift_right(v_fold_146_, v___x_147_);
v___x_149_ = lean_uint64_xor(v_fold_146_, v___x_148_);
v___x_150_ = lean_uint64_to_usize(v___x_149_);
v___x_151_ = lean_usize_of_nat(v___x_142_);
v___x_152_ = ((size_t)1ULL);
v___x_153_ = lean_usize_sub(v___x_151_, v___x_152_);
v___x_154_ = lean_usize_land(v___x_150_, v___x_153_);
v_bkt_155_ = lean_array_uget_borrowed(v_buckets_141_, v___x_154_);
v___x_156_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_138_, v_bkt_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_177_; 
lean_inc_ref(v_buckets_141_);
lean_inc(v_size_140_);
v_isSharedCheck_177_ = !lean_is_exclusive(v_m_137_);
if (v_isSharedCheck_177_ == 0)
{
lean_object* v_unused_178_; lean_object* v_unused_179_; 
v_unused_178_ = lean_ctor_get(v_m_137_, 1);
lean_dec(v_unused_178_);
v_unused_179_ = lean_ctor_get(v_m_137_, 0);
lean_dec(v_unused_179_);
v___x_158_ = v_m_137_;
v_isShared_159_ = v_isSharedCheck_177_;
goto v_resetjp_157_;
}
else
{
lean_dec(v_m_137_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_177_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v_size_x27_161_; lean_object* v___x_162_; lean_object* v_buckets_x27_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_160_ = lean_unsigned_to_nat(1u);
v_size_x27_161_ = lean_nat_add(v_size_140_, v___x_160_);
lean_dec(v_size_140_);
lean_inc(v_bkt_155_);
v___x_162_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_162_, 0, v_a_138_);
lean_ctor_set(v___x_162_, 1, v_b_139_);
lean_ctor_set(v___x_162_, 2, v_bkt_155_);
v_buckets_x27_163_ = lean_array_uset(v_buckets_141_, v___x_154_, v___x_162_);
v___x_164_ = lean_unsigned_to_nat(4u);
v___x_165_ = lean_nat_mul(v_size_x27_161_, v___x_164_);
v___x_166_ = lean_unsigned_to_nat(3u);
v___x_167_ = lean_nat_div(v___x_165_, v___x_166_);
lean_dec(v___x_165_);
v___x_168_ = lean_array_get_size(v_buckets_x27_163_);
v___x_169_ = lean_nat_dec_le(v___x_167_, v___x_168_);
lean_dec(v___x_167_);
if (v___x_169_ == 0)
{
lean_object* v_val_170_; lean_object* v___x_172_; 
v_val_170_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(v_buckets_x27_163_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v_val_170_);
lean_ctor_set(v___x_158_, 0, v_size_x27_161_);
v___x_172_ = v___x_158_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_size_x27_161_);
lean_ctor_set(v_reuseFailAlloc_173_, 1, v_val_170_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
else
{
lean_object* v___x_175_; 
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v_buckets_x27_163_);
lean_ctor_set(v___x_158_, 0, v_size_x27_161_);
v___x_175_ = v___x_158_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_size_x27_161_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v_buckets_x27_163_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
else
{
lean_dec(v_b_139_);
lean_dec(v_a_138_);
return v_m_137_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(lean_object* v_numHaves_180_, lean_object* v_x_181_, lean_object* v_x_182_){
_start:
{
if (lean_obj_tag(v_x_182_) == 0)
{
return v_x_181_;
}
else
{
lean_object* v_key_183_; lean_object* v_tail_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v_key_183_ = lean_ctor_get(v_x_182_, 0);
v_tail_184_ = lean_ctor_get(v_x_182_, 2);
v___x_185_ = lean_nat_sub(v_numHaves_180_, v_key_183_);
v___x_186_ = lean_unsigned_to_nat(1u);
v___x_187_ = lean_nat_sub(v___x_185_, v___x_186_);
lean_dec(v___x_185_);
v___x_188_ = lean_box(0);
v___x_189_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_x_181_, v___x_187_, v___x_188_);
v_x_181_ = v___x_189_;
v_x_182_ = v_tail_184_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1___boxed(lean_object* v_numHaves_191_, lean_object* v_x_192_, lean_object* v_x_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(v_numHaves_191_, v_x_192_, v_x_193_);
lean_dec(v_x_193_);
lean_dec(v_numHaves_191_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(lean_object* v_numHaves_195_, lean_object* v_as_196_, size_t v_i_197_, size_t v_stop_198_, lean_object* v_b_199_){
_start:
{
uint8_t v___x_200_; 
v___x_200_ = lean_usize_dec_eq(v_i_197_, v_stop_198_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; lean_object* v___x_202_; size_t v___x_203_; size_t v___x_204_; 
v___x_201_ = lean_array_uget_borrowed(v_as_196_, v_i_197_);
v___x_202_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(v_numHaves_195_, v_b_199_, v___x_201_);
v___x_203_ = ((size_t)1ULL);
v___x_204_ = lean_usize_add(v_i_197_, v___x_203_);
v_i_197_ = v___x_204_;
v_b_199_ = v___x_202_;
goto _start;
}
else
{
return v_b_199_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2___boxed(lean_object* v_numHaves_206_, lean_object* v_as_207_, lean_object* v_i_208_, lean_object* v_stop_209_, lean_object* v_b_210_){
_start:
{
size_t v_i_boxed_211_; size_t v_stop_boxed_212_; lean_object* v_res_213_; 
v_i_boxed_211_ = lean_unbox_usize(v_i_208_);
lean_dec(v_i_208_);
v_stop_boxed_212_ = lean_unbox_usize(v_stop_209_);
lean_dec(v_stop_209_);
v_res_213_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(v_numHaves_206_, v_as_207_, v_i_boxed_211_, v_stop_boxed_212_, v_b_210_);
lean_dec_ref(v_as_207_);
lean_dec(v_numHaves_206_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(lean_object* v_numHaves_214_, lean_object* v_a_215_){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v_buckets_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_216_ = lean_unsigned_to_nat(0u);
v___x_217_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_218_ = l_Lean_Expr_collectLooseBVars(v_a_215_, v___x_216_);
v_buckets_219_ = lean_ctor_get(v___x_218_, 1);
lean_inc_ref(v_buckets_219_);
lean_dec_ref(v___x_218_);
v___x_220_ = lean_array_get_size(v_buckets_219_);
v___x_221_ = lean_nat_dec_lt(v___x_216_, v___x_220_);
if (v___x_221_ == 0)
{
lean_dec_ref(v_buckets_219_);
return v___x_217_;
}
else
{
size_t v___x_222_; size_t v___x_223_; lean_object* v___x_224_; 
v___x_222_ = ((size_t)0ULL);
v___x_223_ = lean_usize_of_nat(v___x_220_);
v___x_224_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(v_numHaves_214_, v_buckets_219_, v___x_222_, v___x_223_, v___x_217_);
lean_dec_ref(v_buckets_219_);
return v___x_224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0___boxed(lean_object* v_numHaves_225_, lean_object* v_a_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_225_, v_a_226_);
lean_dec(v_numHaves_225_);
return v_res_227_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(lean_object* v_k_228_, lean_object* v_t_229_){
_start:
{
if (lean_obj_tag(v_t_229_) == 0)
{
lean_object* v_k_230_; lean_object* v_l_231_; lean_object* v_r_232_; uint8_t v___x_233_; 
v_k_230_ = lean_ctor_get(v_t_229_, 1);
v_l_231_ = lean_ctor_get(v_t_229_, 3);
v_r_232_ = lean_ctor_get(v_t_229_, 4);
v___x_233_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_228_, v_k_230_);
switch(v___x_233_)
{
case 0:
{
v_t_229_ = v_l_231_;
goto _start;
}
case 1:
{
uint8_t v___x_235_; 
v___x_235_ = 1;
return v___x_235_;
}
default: 
{
v_t_229_ = v_r_232_;
goto _start;
}
}
}
else
{
uint8_t v___x_237_; 
v___x_237_ = 0;
return v___x_237_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg___boxed(lean_object* v_k_238_, lean_object* v_t_239_){
_start:
{
uint8_t v_res_240_; lean_object* v_r_241_; 
v_res_240_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v_k_238_, v_t_239_);
lean_dec(v_t_239_);
lean_dec(v_k_238_);
v_r_241_ = lean_box(v_res_240_);
return v_r_241_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(lean_object* v_fvars_242_, lean_object* v___x_243_, lean_object* v_n_244_, lean_object* v_j_245_, lean_object* v_a_246_){
_start:
{
lean_object* v_zero_247_; uint8_t v_isZero_248_; 
v_zero_247_ = lean_unsigned_to_nat(0u);
v_isZero_248_ = lean_nat_dec_eq(v_j_245_, v_zero_247_);
if (v_isZero_248_ == 1)
{
lean_dec(v_j_245_);
return v_a_246_;
}
else
{
lean_object* v_one_249_; lean_object* v_n_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; 
v_one_249_ = lean_unsigned_to_nat(1u);
v_n_250_ = lean_nat_sub(v_j_245_, v_one_249_);
v___x_251_ = lean_nat_sub(v_n_244_, v_j_245_);
lean_dec(v_j_245_);
v___x_252_ = lean_array_fget_borrowed(v_fvars_242_, v___x_251_);
v___x_253_ = l_Lean_Expr_fvarId_x21(v___x_252_);
v___x_254_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v___x_253_, v___x_243_);
lean_dec(v___x_253_);
if (v___x_254_ == 0)
{
lean_dec(v___x_251_);
v_j_245_ = v_n_250_;
goto _start;
}
else
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = lean_box(0);
v___x_257_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_a_246_, v___x_251_, v___x_256_);
v_j_245_ = v_n_250_;
v_a_246_ = v___x_257_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg___boxed(lean_object* v_fvars_259_, lean_object* v___x_260_, lean_object* v_n_261_, lean_object* v_j_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_fvars_259_, v___x_260_, v_n_261_, v_j_262_, v_a_263_);
lean_dec(v_n_261_);
lean_dec(v___x_260_);
lean_dec_ref(v_fvars_259_);
return v_res_264_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_265_ = lean_box(0);
v___x_266_ = lean_unsigned_to_nat(16u);
v___x_267_ = lean_mk_array(v___x_266_, v___x_265_);
return v___x_267_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_268_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0);
v___x_269_ = lean_unsigned_to_nat(0u);
v___x_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
lean_ctor_set(v___x_270_, 1, v___x_268_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(lean_object* v_body_273_, lean_object* v___x_274_, lean_object* v_fvars_275_, lean_object* v_info_276_, lean_object* v_bodyDeps_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v___x_283_; 
lean_inc(v___y_281_);
lean_inc_ref(v___y_280_);
lean_inc(v___y_279_);
lean_inc_ref(v___y_278_);
lean_inc_ref(v_body_273_);
v___x_283_ = lean_infer_type(v_body_273_, v___y_278_, v___y_279_, v___y_280_, v___y_281_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_285_; 
v_a_284_ = lean_ctor_get(v___x_283_, 0);
lean_inc_n(v_a_284_, 2);
lean_dec_ref_known(v___x_283_, 1);
v___x_285_ = l_Lean_Meta_getLevel(v_a_284_, v___y_278_, v___y_279_, v___y_280_, v___y_281_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_313_; 
v_a_286_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_313_ == 0)
{
v___x_288_ = v___x_285_;
v_isShared_289_ = v_isSharedCheck_313_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_285_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_313_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v_fvarSet_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v_haveInfo_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_307_; 
v___x_290_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1);
v___x_291_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2));
v___x_292_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_292_, 0, v___x_290_);
lean_ctor_set(v___x_292_, 1, v___x_274_);
lean_ctor_set(v___x_292_, 2, v___x_291_);
lean_inc(v_a_284_);
v___x_293_ = l_Lean_collectFVars(v___x_292_, v_a_284_);
v_fvarSet_294_ = lean_ctor_get(v___x_293_, 1);
lean_inc(v_fvarSet_294_);
lean_dec_ref(v___x_293_);
v___x_295_ = lean_array_get_size(v_fvars_275_);
v___x_296_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_fvars_275_, v_fvarSet_294_, v___x_295_, v___x_295_, v___x_290_);
lean_dec(v_fvarSet_294_);
v_haveInfo_297_ = lean_ctor_get(v_info_276_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v_info_276_);
if (v_isSharedCheck_307_ == 0)
{
lean_object* v_unused_308_; lean_object* v_unused_309_; lean_object* v_unused_310_; lean_object* v_unused_311_; lean_object* v_unused_312_; 
v_unused_308_ = lean_ctor_get(v_info_276_, 5);
lean_dec(v_unused_308_);
v_unused_309_ = lean_ctor_get(v_info_276_, 4);
lean_dec(v_unused_309_);
v_unused_310_ = lean_ctor_get(v_info_276_, 3);
lean_dec(v_unused_310_);
v_unused_311_ = lean_ctor_get(v_info_276_, 2);
lean_dec(v_unused_311_);
v_unused_312_ = lean_ctor_get(v_info_276_, 1);
lean_dec(v_unused_312_);
v___x_299_ = v_info_276_;
v_isShared_300_ = v_isSharedCheck_307_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_haveInfo_297_);
lean_dec(v_info_276_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_307_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 5, v_a_286_);
lean_ctor_set(v___x_299_, 4, v_a_284_);
lean_ctor_set(v___x_299_, 3, v_body_273_);
lean_ctor_set(v___x_299_, 2, v___x_296_);
lean_ctor_set(v___x_299_, 1, v_bodyDeps_277_);
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_haveInfo_297_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v_bodyDeps_277_);
lean_ctor_set(v_reuseFailAlloc_306_, 2, v___x_296_);
lean_ctor_set(v_reuseFailAlloc_306_, 3, v_body_273_);
lean_ctor_set(v_reuseFailAlloc_306_, 4, v_a_284_);
lean_ctor_set(v_reuseFailAlloc_306_, 5, v_a_286_);
v___x_302_ = v_reuseFailAlloc_306_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
lean_object* v___x_304_; 
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 0, v___x_302_);
v___x_304_ = v___x_288_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
else
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec(v_a_284_);
lean_dec_ref(v_bodyDeps_277_);
lean_dec_ref(v_info_276_);
lean_dec(v___x_274_);
lean_dec_ref(v_body_273_);
v_a_314_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_285_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_285_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
else
{
lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_329_; 
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec_ref(v_bodyDeps_277_);
lean_dec_ref(v_info_276_);
lean_dec(v___x_274_);
lean_dec_ref(v_body_273_);
v_a_322_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_329_ == 0)
{
v___x_324_ = v___x_283_;
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_dec(v___x_283_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_329_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_327_; 
if (v_isShared_325_ == 0)
{
v___x_327_ = v___x_324_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_a_322_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed(lean_object* v_body_330_, lean_object* v___x_331_, lean_object* v_fvars_332_, lean_object* v_info_333_, lean_object* v_bodyDeps_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(v_body_330_, v___x_331_, v_fvars_332_, v_info_333_, v_bodyDeps_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
lean_dec_ref(v_fvars_332_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(lean_object* v___y_341_){
_start:
{
lean_object* v___x_343_; lean_object* v_ngen_344_; lean_object* v_namePrefix_345_; lean_object* v_idx_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_375_; 
v___x_343_ = lean_st_ref_get(v___y_341_);
v_ngen_344_ = lean_ctor_get(v___x_343_, 2);
lean_inc_ref(v_ngen_344_);
lean_dec(v___x_343_);
v_namePrefix_345_ = lean_ctor_get(v_ngen_344_, 0);
v_idx_346_ = lean_ctor_get(v_ngen_344_, 1);
v_isSharedCheck_375_ = !lean_is_exclusive(v_ngen_344_);
if (v_isSharedCheck_375_ == 0)
{
v___x_348_ = v_ngen_344_;
v_isShared_349_ = v_isSharedCheck_375_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_idx_346_);
lean_inc(v_namePrefix_345_);
lean_dec(v_ngen_344_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_375_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v_r_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_354_; 
lean_inc(v_idx_346_);
lean_inc(v_namePrefix_345_);
v_r_350_ = l_Lean_Name_num___override(v_namePrefix_345_, v_idx_346_);
v___x_351_ = lean_unsigned_to_nat(1u);
v___x_352_ = lean_nat_add(v_idx_346_, v___x_351_);
lean_dec(v_idx_346_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 1, v___x_352_);
v___x_354_ = v___x_348_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_namePrefix_345_);
lean_ctor_set(v_reuseFailAlloc_374_, 1, v___x_352_);
v___x_354_ = v_reuseFailAlloc_374_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
lean_object* v___x_355_; lean_object* v_env_356_; lean_object* v_nextMacroScope_357_; lean_object* v_auxDeclNGen_358_; lean_object* v_traceState_359_; lean_object* v_cache_360_; lean_object* v_messages_361_; lean_object* v_infoState_362_; lean_object* v_snapshotTasks_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_372_; 
v___x_355_ = lean_st_ref_take(v___y_341_);
v_env_356_ = lean_ctor_get(v___x_355_, 0);
v_nextMacroScope_357_ = lean_ctor_get(v___x_355_, 1);
v_auxDeclNGen_358_ = lean_ctor_get(v___x_355_, 3);
v_traceState_359_ = lean_ctor_get(v___x_355_, 4);
v_cache_360_ = lean_ctor_get(v___x_355_, 5);
v_messages_361_ = lean_ctor_get(v___x_355_, 6);
v_infoState_362_ = lean_ctor_get(v___x_355_, 7);
v_snapshotTasks_363_ = lean_ctor_get(v___x_355_, 8);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_372_ == 0)
{
lean_object* v_unused_373_; 
v_unused_373_ = lean_ctor_get(v___x_355_, 2);
lean_dec(v_unused_373_);
v___x_365_ = v___x_355_;
v_isShared_366_ = v_isSharedCheck_372_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_snapshotTasks_363_);
lean_inc(v_infoState_362_);
lean_inc(v_messages_361_);
lean_inc(v_cache_360_);
lean_inc(v_traceState_359_);
lean_inc(v_auxDeclNGen_358_);
lean_inc(v_nextMacroScope_357_);
lean_inc(v_env_356_);
lean_dec(v___x_355_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_372_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_368_; 
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 2, v___x_354_);
v___x_368_ = v___x_365_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_env_356_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v_nextMacroScope_357_);
lean_ctor_set(v_reuseFailAlloc_371_, 2, v___x_354_);
lean_ctor_set(v_reuseFailAlloc_371_, 3, v_auxDeclNGen_358_);
lean_ctor_set(v_reuseFailAlloc_371_, 4, v_traceState_359_);
lean_ctor_set(v_reuseFailAlloc_371_, 5, v_cache_360_);
lean_ctor_set(v_reuseFailAlloc_371_, 6, v_messages_361_);
lean_ctor_set(v_reuseFailAlloc_371_, 7, v_infoState_362_);
lean_ctor_set(v_reuseFailAlloc_371_, 8, v_snapshotTasks_363_);
v___x_368_ = v_reuseFailAlloc_371_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_st_ref_put(v___y_341_, v___x_368_);
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v_r_350_);
return v___x_370_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg___boxed(lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(v___y_376_);
lean_dec(v___y_376_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v___x_384_; lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
v___x_384_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(v___y_382_);
v_a_385_ = lean_ctor_get(v___x_384_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_384_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_384_);
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
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 1, 0);
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
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6___boxed(lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(lean_object* v_e_399_, lean_object* v_numHaves_400_, lean_object* v_info_401_, lean_object* v_lctx_402_, lean_object* v_fvars_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v___x_409_; lean_object* v___y_411_; lean_object* v___y_412_; lean_object* v___y_413_; lean_object* v___y_414_; 
v___x_409_ = lean_box(1);
if (lean_obj_tag(v_e_399_) == 8)
{
uint8_t v_nondep_419_; 
v_nondep_419_ = lean_ctor_get_uint8(v_e_399_, sizeof(void*)*4 + 8);
if (v_nondep_419_ == 1)
{
lean_object* v_declName_420_; lean_object* v_type_421_; lean_object* v_value_422_; lean_object* v_body_423_; lean_object* v_typeBackDeps_424_; lean_object* v_valueBackDeps_425_; lean_object* v_t_426_; lean_object* v_v_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v_declName_420_ = lean_ctor_get(v_e_399_, 0);
lean_inc(v_declName_420_);
v_type_421_ = lean_ctor_get(v_e_399_, 1);
lean_inc_ref_n(v_type_421_, 2);
v_value_422_ = lean_ctor_get(v_e_399_, 2);
lean_inc_ref_n(v_value_422_, 2);
v_body_423_ = lean_ctor_get(v_e_399_, 3);
lean_inc_ref(v_body_423_);
lean_dec_ref_known(v_e_399_, 4);
v_typeBackDeps_424_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_400_, v_type_421_);
v_valueBackDeps_425_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_400_, v_value_422_);
v_t_426_ = lean_expr_instantiate_rev(v_type_421_, v_fvars_403_);
lean_dec_ref(v_type_421_);
v_v_427_ = lean_expr_instantiate_rev(v_value_422_, v_fvars_403_);
lean_dec_ref(v_value_422_);
lean_inc_ref(v_t_426_);
v___x_428_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_428_, 0, v_t_426_);
lean_inc_ref(v_lctx_402_);
v___x_429_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_402_, v___x_428_, v_a_404_, v_a_405_, v_a_406_, v_a_407_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; lean_object* v___x_431_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_430_);
lean_dec_ref_known(v___x_429_, 1);
v___x_431_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(v_a_404_, v_a_405_, v_a_406_, v_a_407_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v_haveInfo_433_; lean_object* v_bodyDeps_434_; lean_object* v_bodyTypeDeps_435_; lean_object* v_body_436_; lean_object* v_bodyType_437_; lean_object* v_level_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_456_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_a_432_);
lean_dec_ref_known(v___x_431_, 1);
v_haveInfo_433_ = lean_ctor_get(v_info_401_, 0);
v_bodyDeps_434_ = lean_ctor_get(v_info_401_, 1);
v_bodyTypeDeps_435_ = lean_ctor_get(v_info_401_, 2);
v_body_436_ = lean_ctor_get(v_info_401_, 3);
v_bodyType_437_ = lean_ctor_get(v_info_401_, 4);
v_level_438_ = lean_ctor_get(v_info_401_, 5);
v_isSharedCheck_456_ = !lean_is_exclusive(v_info_401_);
if (v_isSharedCheck_456_ == 0)
{
v___x_440_ = v_info_401_;
v_isShared_441_ = v_isSharedCheck_456_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_level_438_);
lean_inc(v_bodyType_437_);
lean_inc(v_body_436_);
lean_inc(v_bodyTypeDeps_435_);
lean_inc(v_bodyDeps_434_);
lean_inc(v_haveInfo_433_);
lean_dec(v_info_401_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_456_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; uint8_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_442_ = lean_unsigned_to_nat(0u);
v___x_443_ = 0;
lean_inc(v_a_432_);
v___x_444_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v___x_444_, 0, v___x_442_);
lean_ctor_set(v___x_444_, 1, v_a_432_);
lean_ctor_set(v___x_444_, 2, v_declName_420_);
lean_ctor_set(v___x_444_, 3, v_t_426_);
lean_ctor_set(v___x_444_, 4, v_v_427_);
lean_ctor_set_uint8(v___x_444_, sizeof(void*)*5, v_nondep_419_);
lean_ctor_set_uint8(v___x_444_, sizeof(void*)*5 + 1, v___x_443_);
lean_inc_ref(v___x_444_);
v___x_445_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_445_, 0, v_typeBackDeps_424_);
lean_ctor_set(v___x_445_, 1, v_valueBackDeps_425_);
lean_ctor_set(v___x_445_, 2, v___x_444_);
lean_ctor_set(v___x_445_, 3, v_a_430_);
v___x_446_ = lean_array_push(v_haveInfo_433_, v___x_445_);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v___x_446_);
v___x_448_ = v___x_440_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_446_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v_bodyDeps_434_);
lean_ctor_set(v_reuseFailAlloc_455_, 2, v_bodyTypeDeps_435_);
lean_ctor_set(v_reuseFailAlloc_455_, 3, v_body_436_);
lean_ctor_set(v_reuseFailAlloc_455_, 4, v_bodyType_437_);
lean_ctor_set(v_reuseFailAlloc_455_, 5, v_level_438_);
v___x_448_ = v_reuseFailAlloc_455_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_449_ = l_Lean_LocalContext_addDecl(v_lctx_402_, v___x_444_);
v___x_450_ = l_Lean_mkFVar(v_a_432_);
v___x_451_ = lean_array_push(v_fvars_403_, v___x_450_);
v___x_452_ = lean_unsigned_to_nat(1u);
v___x_453_ = lean_nat_add(v_numHaves_400_, v___x_452_);
lean_dec(v_numHaves_400_);
v_e_399_ = v_body_423_;
v_numHaves_400_ = v___x_453_;
v_info_401_ = v___x_448_;
v_lctx_402_ = v___x_449_;
v_fvars_403_ = v___x_451_;
goto _start;
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec(v_a_430_);
lean_dec_ref(v_v_427_);
lean_dec_ref(v_t_426_);
lean_dec_ref(v_valueBackDeps_425_);
lean_dec_ref(v_typeBackDeps_424_);
lean_dec_ref(v_body_423_);
lean_dec(v_declName_420_);
lean_dec_ref(v_fvars_403_);
lean_dec_ref(v_lctx_402_);
lean_dec_ref(v_info_401_);
lean_dec(v_numHaves_400_);
v_a_457_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_431_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_431_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
else
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
lean_dec_ref(v_v_427_);
lean_dec_ref(v_t_426_);
lean_dec_ref(v_valueBackDeps_425_);
lean_dec_ref(v_typeBackDeps_424_);
lean_dec_ref(v_body_423_);
lean_dec(v_declName_420_);
lean_dec_ref(v_fvars_403_);
lean_dec_ref(v_lctx_402_);
lean_dec_ref(v_info_401_);
lean_dec(v_numHaves_400_);
v_a_465_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_472_ == 0)
{
v___x_467_ = v___x_429_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_429_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
else
{
v___y_411_ = v_a_404_;
v___y_412_ = v_a_405_;
v___y_413_ = v_a_406_;
v___y_414_ = v_a_407_;
goto v___jp_410_;
}
}
else
{
v___y_411_ = v_a_404_;
v___y_412_ = v_a_405_;
v___y_413_ = v_a_406_;
v___y_414_ = v_a_407_;
goto v___jp_410_;
}
v___jp_410_:
{
lean_object* v_bodyDeps_415_; lean_object* v_body_416_; lean_object* v___f_417_; lean_object* v___x_418_; 
lean_inc_ref(v_e_399_);
v_bodyDeps_415_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_400_, v_e_399_);
lean_dec(v_numHaves_400_);
v_body_416_ = lean_expr_instantiate_rev(v_e_399_, v_fvars_403_);
lean_dec_ref(v_e_399_);
v___f_417_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed), 10, 5);
lean_closure_set(v___f_417_, 0, v_body_416_);
lean_closure_set(v___f_417_, 1, v___x_409_);
lean_closure_set(v___f_417_, 2, v_fvars_403_);
lean_closure_set(v___f_417_, 3, v_info_401_);
lean_closure_set(v___f_417_, 4, v_bodyDeps_415_);
v___x_418_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_402_, v___f_417_, v___y_411_, v___y_412_, v___y_413_, v___y_414_);
return v___x_418_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___boxed(lean_object* v_e_473_, lean_object* v_numHaves_474_, lean_object* v_info_475_, lean_object* v_lctx_476_, lean_object* v_fvars_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(v_e_473_, v_numHaves_474_, v_info_475_, v_lctx_476_, v_fvars_477_, v_a_478_, v_a_479_, v_a_480_, v_a_481_);
lean_dec(v_a_481_);
lean_dec_ref(v_a_480_);
lean_dec(v_a_479_);
lean_dec_ref(v_a_478_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0(lean_object* v_00_u03b2_484_, lean_object* v_m_485_, lean_object* v_a_486_, lean_object* v_b_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_m_485_, v_a_486_, v_b_487_);
return v___x_488_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(lean_object* v_00_u03b2_489_, lean_object* v_k_490_, lean_object* v_t_491_){
_start:
{
uint8_t v___x_492_; 
v___x_492_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v_k_490_, v_t_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___boxed(lean_object* v_00_u03b2_493_, lean_object* v_k_494_, lean_object* v_t_495_){
_start:
{
uint8_t v_res_496_; lean_object* v_r_497_; 
v_res_496_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(v_00_u03b2_493_, v_k_494_, v_t_495_);
lean_dec(v_t_495_);
lean_dec(v_k_494_);
v_r_497_ = lean_box(v_res_496_);
return v_r_497_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(lean_object* v_fvars_498_, lean_object* v___x_499_, lean_object* v_n_500_, lean_object* v_j_501_, lean_object* v_a_502_, lean_object* v_a_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_fvars_498_, v___x_499_, v_n_500_, v_j_501_, v_a_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___boxed(lean_object* v_fvars_505_, lean_object* v___x_506_, lean_object* v_n_507_, lean_object* v_j_508_, lean_object* v_a_509_, lean_object* v_a_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(v_fvars_505_, v___x_506_, v_n_507_, v_j_508_, v_a_509_, v_a_510_);
lean_dec(v_n_507_);
lean_dec(v___x_506_);
lean_dec_ref(v_fvars_505_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8(lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(v___y_515_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___boxed(lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8(v___y_518_, v___y_519_, v___y_520_, v___y_521_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
return v_res_523_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(lean_object* v_00_u03b2_524_, lean_object* v_a_525_, lean_object* v_x_526_){
_start:
{
uint8_t v___x_527_; 
v___x_527_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_525_, v_x_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___boxed(lean_object* v_00_u03b2_528_, lean_object* v_a_529_, lean_object* v_x_530_){
_start:
{
uint8_t v_res_531_; lean_object* v_r_532_; 
v_res_531_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(v_00_u03b2_528_, v_a_529_, v_x_530_);
lean_dec(v_x_530_);
lean_dec(v_a_529_);
v_r_532_ = lean_box(v_res_531_);
return v_r_532_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1(lean_object* v_00_u03b2_533_, lean_object* v_data_534_){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(v_data_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_536_, lean_object* v_i_537_, lean_object* v_source_538_, lean_object* v_target_539_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(v_i_537_, v_source_538_, v_target_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10(lean_object* v_00_u03b2_541_, lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(v_x_542_, v_x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo(lean_object* v_e_545_, lean_object* v_a_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v_lctx_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v_lctx_551_ = lean_ctor_get(v_a_546_, 2);
v___x_552_ = lean_unsigned_to_nat(0u);
v___x_553_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0));
v___x_554_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5);
lean_inc_ref(v_lctx_551_);
v___x_555_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(v_e_545_, v___x_552_, v___x_554_, v_lctx_551_, v___x_553_, v_a_546_, v_a_547_, v_a_548_, v_a_549_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo___boxed(lean_object* v_e_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lean_Meta_getHaveTelescopeInfo(v_e_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_);
lean_dec(v_a_560_);
lean_dec_ref(v_a_559_);
lean_dec(v_a_558_);
lean_dec_ref(v_a_557_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(lean_object* v_x_563_, lean_object* v_x_564_){
_start:
{
if (lean_obj_tag(v_x_564_) == 0)
{
return v_x_563_;
}
else
{
lean_object* v_key_565_; lean_object* v_tail_566_; uint8_t v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v_key_565_ = lean_ctor_get(v_x_564_, 0);
v_tail_566_ = lean_ctor_get(v_x_564_, 2);
v___x_567_ = 1;
v___x_568_ = lean_box(v___x_567_);
v___x_569_ = lean_array_set(v_x_563_, v_key_565_, v___x_568_);
v_x_563_ = v___x_569_;
v_x_564_ = v_tail_566_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0___boxed(lean_object* v_x_571_, lean_object* v_x_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(v_x_571_, v_x_572_);
lean_dec(v_x_572_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(lean_object* v_as_574_, size_t v_i_575_, size_t v_stop_576_, lean_object* v_b_577_){
_start:
{
uint8_t v___x_578_; 
v___x_578_ = lean_usize_dec_eq(v_i_575_, v_stop_576_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; lean_object* v___x_580_; size_t v___x_581_; size_t v___x_582_; 
v___x_579_ = lean_array_uget_borrowed(v_as_574_, v_i_575_);
v___x_580_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(v_b_577_, v___x_579_);
v___x_581_ = ((size_t)1ULL);
v___x_582_ = lean_usize_add(v_i_575_, v___x_581_);
v_i_575_ = v___x_582_;
v_b_577_ = v___x_580_;
goto _start;
}
else
{
return v_b_577_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1___boxed(lean_object* v_as_584_, lean_object* v_i_585_, lean_object* v_stop_586_, lean_object* v_b_587_){
_start:
{
size_t v_i_boxed_588_; size_t v_stop_boxed_589_; lean_object* v_res_590_; 
v_i_boxed_588_ = lean_unbox_usize(v_i_585_);
lean_dec(v_i_585_);
v_stop_boxed_589_ = lean_unbox_usize(v_stop_586_);
lean_dec(v_stop_586_);
v_res_590_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(v_as_584_, v_i_boxed_588_, v_stop_boxed_589_, v_b_587_);
lean_dec_ref(v_as_584_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(lean_object* v_arr_591_, lean_object* v_s_592_){
_start:
{
lean_object* v_buckets_593_; lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v_buckets_593_ = lean_ctor_get(v_s_592_, 1);
v___x_594_ = lean_unsigned_to_nat(0u);
v___x_595_ = lean_array_get_size(v_buckets_593_);
v___x_596_ = lean_nat_dec_lt(v___x_594_, v___x_595_);
if (v___x_596_ == 0)
{
return v_arr_591_;
}
else
{
size_t v___x_597_; size_t v___x_598_; lean_object* v___x_599_; 
v___x_597_ = ((size_t)0ULL);
v___x_598_ = lean_usize_of_nat(v___x_595_);
v___x_599_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(v_buckets_593_, v___x_597_, v___x_598_, v_arr_591_);
return v___x_599_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps___boxed(lean_object* v_arr_600_, lean_object* v_s_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_arr_600_, v_s_601_);
lean_dec_ref(v_s_601_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(lean_object* v_upperBound_603_, lean_object* v_numHaves_604_, lean_object* v___x_605_, lean_object* v_a_606_, lean_object* v_b_607_){
_start:
{
lean_object* v_a_610_; uint8_t v___x_614_; 
v___x_614_ = lean_nat_dec_lt(v_a_606_, v_upperBound_603_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; 
lean_dec(v_a_606_);
v___x_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_615_, 0, v_b_607_);
return v___x_615_;
}
else
{
uint8_t v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_616_ = 0;
v___x_617_ = lean_nat_sub(v_numHaves_604_, v_a_606_);
v___x_618_ = lean_unsigned_to_nat(1u);
v___x_619_ = lean_nat_sub(v___x_617_, v___x_618_);
lean_dec(v___x_617_);
v___x_620_ = lean_box(v___x_616_);
v___x_621_ = lean_array_get(v___x_620_, v_b_607_, v___x_619_);
lean_dec(v___x_620_);
v___x_622_ = lean_unbox(v___x_621_);
lean_dec(v___x_621_);
if (v___x_622_ == 0)
{
lean_dec(v___x_619_);
v_a_610_ = v_b_607_;
goto v___jp_609_;
}
else
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v_typeBackDeps_625_; lean_object* v_valueBackDeps_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_623_ = l_Lean_Meta_instInhabitedHaveInfo_default;
v___x_624_ = lean_array_get_borrowed(v___x_623_, v___x_605_, v___x_619_);
lean_dec(v___x_619_);
v_typeBackDeps_625_ = lean_ctor_get(v___x_624_, 0);
v_valueBackDeps_626_ = lean_ctor_get(v___x_624_, 1);
v___x_627_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_b_607_, v_typeBackDeps_625_);
v___x_628_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v___x_627_, v_valueBackDeps_626_);
v_a_610_ = v___x_628_;
goto v___jp_609_;
}
}
v___jp_609_:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_unsigned_to_nat(1u);
v___x_612_ = lean_nat_add(v_a_606_, v___x_611_);
lean_dec(v_a_606_);
v_a_606_ = v___x_612_;
v_b_607_ = v_a_610_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg___boxed(lean_object* v_upperBound_629_, lean_object* v_numHaves_630_, lean_object* v___x_631_, lean_object* v_a_632_, lean_object* v_b_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_upperBound_629_, v_numHaves_630_, v___x_631_, v_a_632_, v_b_633_);
lean_dec_ref(v___x_631_);
lean_dec(v_numHaves_630_);
lean_dec(v_upperBound_629_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(lean_object* v_info_636_, lean_object* v_init_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_){
_start:
{
lean_object* v_haveInfo_643_; lean_object* v_numHaves_644_; uint8_t v___x_645_; lean_object* v___x_646_; lean_object* v_used_647_; lean_object* v___x_648_; lean_object* v_used_649_; lean_object* v___x_650_; 
v_haveInfo_643_ = lean_ctor_get(v_info_636_, 0);
v_numHaves_644_ = lean_array_get_size(v_haveInfo_643_);
v___x_645_ = 0;
v___x_646_ = lean_box(v___x_645_);
v_used_647_ = lean_mk_array(v_numHaves_644_, v___x_646_);
v___x_648_ = lean_unsigned_to_nat(0u);
v_used_649_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_used_647_, v_init_637_);
v___x_650_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_numHaves_644_, v_numHaves_644_, v_haveInfo_643_, v___x_648_, v_used_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go___boxed(lean_object* v_info_651_, lean_object* v_init_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_651_, v_init_652_, v_a_653_, v_a_654_, v_a_655_, v_a_656_);
lean_dec(v_a_656_);
lean_dec_ref(v_a_655_);
lean_dec(v_a_654_);
lean_dec_ref(v_a_653_);
lean_dec_ref(v_init_652_);
lean_dec_ref(v_info_651_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(lean_object* v_upperBound_659_, lean_object* v_numHaves_660_, lean_object* v___x_661_, lean_object* v_inst_662_, lean_object* v_R_663_, lean_object* v_a_664_, lean_object* v_b_665_, lean_object* v_c_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_upperBound_659_, v_numHaves_660_, v___x_661_, v_a_664_, v_b_665_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___boxed(lean_object* v_upperBound_673_, lean_object* v_numHaves_674_, lean_object* v___x_675_, lean_object* v_inst_676_, lean_object* v_R_677_, lean_object* v_a_678_, lean_object* v_b_679_, lean_object* v_c_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(v_upperBound_673_, v_numHaves_674_, v___x_675_, v_inst_676_, v_R_677_, v_a_678_, v_b_679_, v_c_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
lean_dec_ref(v___x_675_);
lean_dec(v_numHaves_674_);
lean_dec(v_upperBound_673_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(lean_object* v_info_689_, uint8_t v_keepUnused_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
lean_object* v_bodyDeps_696_; lean_object* v_bodyTypeDeps_697_; lean_object* v___x_698_; 
v_bodyDeps_696_ = lean_ctor_get(v_info_689_, 1);
v_bodyTypeDeps_697_ = lean_ctor_get(v_info_689_, 2);
v___x_698_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_689_, v_bodyTypeDeps_697_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
if (lean_obj_tag(v___x_698_) == 0)
{
if (v_keepUnused_690_ == 0)
{
lean_object* v_a_699_; lean_object* v___x_700_; 
v_a_699_ = lean_ctor_get(v___x_698_, 0);
lean_inc(v_a_699_);
lean_dec_ref_known(v___x_698_, 1);
v___x_700_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_689_, v_bodyDeps_696_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_709_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_709_ == 0)
{
v___x_703_ = v___x_700_;
v_isShared_704_ = v_isSharedCheck_709_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_700_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_709_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_705_, 0, v_a_699_);
lean_ctor_set(v___x_705_, 1, v_a_701_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v___x_705_);
v___x_707_ = v___x_703_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___x_705_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_717_; 
lean_dec(v_a_699_);
v_a_710_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_717_ == 0)
{
v___x_712_ = v___x_700_;
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_700_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_715_; 
if (v_isShared_713_ == 0)
{
v___x_715_ = v___x_712_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_a_710_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_727_; 
v_a_718_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_727_ == 0)
{
v___x_720_ = v___x_698_;
v_isShared_721_ = v_isSharedCheck_727_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_698_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_727_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_725_; 
v___x_722_ = ((lean_object*)(l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0));
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v_a_718_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 0, v___x_723_);
v___x_725_ = v___x_720_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_723_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
else
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
v_a_728_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_698_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_698_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed(lean_object* v_info_736_, lean_object* v_keepUnused_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_){
_start:
{
uint8_t v_keepUnused_boxed_743_; lean_object* v_res_744_; 
v_keepUnused_boxed_743_ = lean_unbox(v_keepUnused_737_);
v_res_744_ = l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(v_info_736_, v_keepUnused_boxed_743_, v_a_738_, v_a_739_, v_a_740_, v_a_741_);
lean_dec(v_a_741_);
lean_dec_ref(v_a_740_);
lean_dec(v_a_739_);
lean_dec_ref(v_a_738_);
lean_dec_ref(v_info_736_);
return v_res_744_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_748_ = lean_box(0);
v___x_749_ = ((lean_object*)(l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1));
v___x_750_ = l_Lean_Expr_const___override(v___x_749_, v___x_748_);
return v___x_750_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3(void){
_start:
{
uint8_t v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_751_ = 0;
v___x_752_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2, &l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2_once, _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2);
v___x_753_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_753_, 0, v___x_752_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
lean_ctor_set(v___x_753_, 2, v___x_752_);
lean_ctor_set(v___x_753_, 3, v___x_752_);
lean_ctor_set(v___x_753_, 4, v___x_752_);
lean_ctor_set_uint8(v___x_753_, sizeof(void*)*5, v___x_751_);
return v___x_753_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpHaveResult_default(void){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3, &l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3_once, _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3);
return v___x_754_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult(void){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Lean_Meta_instInhabitedSimpHaveResult_default;
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(lean_object* v_level_772_, lean_object* v_exprType_773_, lean_object* v_e_774_, uint8_t v___x_775_, lean_object* v_toPure_776_, lean_object* v_xs_777_, lean_object* v_____do__lift_778_){
_start:
{
if (lean_obj_tag(v_____do__lift_778_) == 0)
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v_proof_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_779_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_780_ = lean_box(0);
v___x_781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_781_, 0, v_level_772_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = l_Lean_mkConst(v___x_779_, v___x_781_);
lean_inc_ref_n(v_e_774_, 3);
lean_inc_ref(v_exprType_773_);
v_proof_783_ = l_Lean_mkAppB(v___x_782_, v_exprType_773_, v_e_774_);
v___x_784_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_784_, 0, v_e_774_);
lean_ctor_set(v___x_784_, 1, v_exprType_773_);
lean_ctor_set(v___x_784_, 2, v_e_774_);
lean_ctor_set(v___x_784_, 3, v_e_774_);
lean_ctor_set(v___x_784_, 4, v_proof_783_);
lean_ctor_set_uint8(v___x_784_, sizeof(void*)*5, v___x_775_);
v___x_785_ = lean_apply_2(v_toPure_776_, lean_box(0), v___x_784_);
return v___x_785_;
}
else
{
lean_object* v_e_786_; lean_object* v_h_787_; lean_object* v_expr_788_; lean_object* v_proof_789_; lean_object* v___x_794_; uint8_t v___x_795_; 
lean_dec(v_level_772_);
v_e_786_ = lean_ctor_get(v_____do__lift_778_, 0);
v_h_787_ = lean_ctor_get(v_____do__lift_778_, 1);
v_expr_788_ = lean_expr_abstract(v_e_786_, v_xs_777_);
v_proof_789_ = lean_expr_abstract(v_h_787_, v_xs_777_);
lean_inc_ref(v_proof_789_);
v___x_794_ = l_Lean_Expr_cleanupAnnotations(v_proof_789_);
v___x_795_ = l_Lean_Expr_isApp(v___x_794_);
if (v___x_795_ == 0)
{
lean_dec_ref(v___x_794_);
goto v___jp_790_;
}
else
{
lean_object* v_arg_796_; lean_object* v___x_797_; uint8_t v___x_798_; 
v_arg_796_ = lean_ctor_get(v___x_794_, 1);
lean_inc_ref(v_arg_796_);
v___x_797_ = l_Lean_Expr_appFnCleanup___redArg(v___x_794_);
v___x_798_ = l_Lean_Expr_isApp(v___x_797_);
if (v___x_798_ == 0)
{
lean_dec_ref(v___x_797_);
lean_dec_ref(v_arg_796_);
goto v___jp_790_;
}
else
{
lean_object* v_arg_799_; lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; 
v_arg_799_ = lean_ctor_get(v___x_797_, 1);
lean_inc_ref(v_arg_799_);
v___x_800_ = l_Lean_Expr_appFnCleanup___redArg(v___x_797_);
v___x_801_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4));
v___x_802_ = l_Lean_Expr_isConstOf(v___x_800_, v___x_801_);
lean_dec_ref(v___x_800_);
if (v___x_802_ == 0)
{
lean_dec_ref(v_arg_799_);
lean_dec_ref(v_arg_796_);
goto v___jp_790_;
}
else
{
lean_object* v___x_803_; lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_803_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5));
v___x_804_ = lean_unsigned_to_nat(3u);
v___x_805_ = l_Lean_Expr_isAppOfArity(v_arg_799_, v___x_803_, v___x_804_);
lean_dec_ref(v_arg_799_);
if (v___x_805_ == 0)
{
lean_dec_ref(v_arg_796_);
goto v___jp_790_;
}
else
{
lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_806_ = l_Lean_Expr_cleanupAnnotations(v_arg_796_);
v___x_807_ = l_Lean_Expr_isApp(v___x_806_);
if (v___x_807_ == 0)
{
lean_dec_ref(v___x_806_);
goto v___jp_790_;
}
else
{
lean_object* v_arg_808_; lean_object* v___x_809_; uint8_t v___x_810_; 
v_arg_808_ = lean_ctor_get(v___x_806_, 1);
lean_inc_ref(v_arg_808_);
v___x_809_ = l_Lean_Expr_appFnCleanup___redArg(v___x_806_);
v___x_810_ = l_Lean_Expr_isApp(v___x_809_);
if (v___x_810_ == 0)
{
lean_dec_ref(v___x_809_);
lean_dec_ref(v_arg_808_);
goto v___jp_790_;
}
else
{
lean_object* v_arg_811_; lean_object* v___x_812_; uint8_t v___x_813_; 
v_arg_811_ = lean_ctor_get(v___x_809_, 1);
lean_inc_ref(v_arg_811_);
v___x_812_ = l_Lean_Expr_appFnCleanup___redArg(v___x_809_);
v___x_813_ = l_Lean_Expr_isConstOf(v___x_812_, v___x_801_);
lean_dec_ref(v___x_812_);
if (v___x_813_ == 0)
{
lean_dec_ref(v_arg_811_);
lean_dec_ref(v_arg_808_);
goto v___jp_790_;
}
else
{
lean_object* v___x_814_; uint8_t v___x_815_; 
v___x_814_ = l_Lean_Expr_cleanupAnnotations(v_arg_811_);
v___x_815_ = l_Lean_Expr_isApp(v___x_814_);
if (v___x_815_ == 0)
{
lean_dec_ref(v___x_814_);
lean_dec_ref(v_arg_808_);
goto v___jp_790_;
}
else
{
lean_object* v_arg_816_; lean_object* v___x_817_; uint8_t v___x_818_; 
v_arg_816_ = lean_ctor_get(v___x_814_, 1);
lean_inc_ref(v_arg_816_);
v___x_817_ = l_Lean_Expr_appFnCleanup___redArg(v___x_814_);
v___x_818_ = l_Lean_Expr_isApp(v___x_817_);
if (v___x_818_ == 0)
{
lean_dec_ref(v___x_817_);
lean_dec_ref(v_arg_816_);
lean_dec_ref(v_arg_808_);
goto v___jp_790_;
}
else
{
lean_object* v_arg_819_; uint8_t v___y_821_; lean_object* v___x_824_; uint8_t v___x_825_; 
v_arg_819_ = lean_ctor_get(v___x_817_, 1);
lean_inc_ref(v_arg_819_);
v___x_824_ = l_Lean_Expr_appFnCleanup___redArg(v___x_817_);
v___x_825_ = l_Lean_Expr_isApp(v___x_824_);
if (v___x_825_ == 0)
{
lean_dec_ref(v___x_824_);
lean_dec_ref(v_arg_819_);
lean_dec_ref(v_arg_816_);
lean_dec_ref(v_arg_808_);
goto v___jp_790_;
}
else
{
lean_object* v___x_826_; uint8_t v___x_827_; 
v___x_826_ = l_Lean_Expr_appFnCleanup___redArg(v___x_824_);
v___x_827_ = l_Lean_Expr_isConstOf(v___x_826_, v___x_803_);
lean_dec_ref(v___x_826_);
if (v___x_827_ == 0)
{
lean_dec_ref(v_arg_819_);
lean_dec_ref(v_arg_816_);
lean_dec_ref(v_arg_808_);
goto v___jp_790_;
}
else
{
lean_object* v___x_828_; 
v___x_828_ = l_Lean_Expr_getAppFn(v_arg_808_);
if (lean_obj_tag(v___x_828_) == 4)
{
lean_object* v_declName_829_; 
v_declName_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_declName_829_);
lean_dec_ref_known(v___x_828_, 2);
if (lean_obj_tag(v_declName_829_) == 1)
{
lean_object* v_pre_830_; 
v_pre_830_ = lean_ctor_get(v_declName_829_, 0);
if (lean_obj_tag(v_pre_830_) == 0)
{
lean_object* v_str_831_; lean_object* v___x_832_; uint8_t v___x_833_; 
v_str_831_ = lean_ctor_get(v_declName_829_, 1);
lean_inc_ref(v_str_831_);
lean_dec_ref_known(v_declName_829_, 2);
v___x_832_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6));
v___x_833_ = lean_string_dec_eq(v_str_831_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_834_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7));
v___x_835_ = lean_string_dec_eq(v_str_831_, v___x_834_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_836_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8));
v___x_837_ = lean_string_dec_eq(v_str_831_, v___x_836_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_838_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9));
v___x_839_ = lean_string_dec_eq(v_str_831_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_840_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10));
v___x_841_ = lean_string_dec_eq(v_str_831_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_842_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11));
v___x_843_ = lean_string_dec_eq(v_str_831_, v___x_842_);
lean_dec_ref(v_str_831_);
if (v___x_843_ == 0)
{
lean_dec_ref(v_arg_819_);
lean_dec_ref(v_arg_816_);
lean_dec_ref(v_arg_808_);
goto v___jp_790_;
}
else
{
v___y_821_ = v___x_802_;
goto v___jp_820_;
}
}
else
{
lean_dec_ref(v_str_831_);
v___y_821_ = v___x_802_;
goto v___jp_820_;
}
}
else
{
lean_dec_ref(v_str_831_);
v___y_821_ = v___x_802_;
goto v___jp_820_;
}
}
else
{
lean_dec_ref(v_str_831_);
v___y_821_ = v___x_802_;
goto v___jp_820_;
}
}
else
{
lean_dec_ref(v_str_831_);
v___y_821_ = v___x_802_;
goto v___jp_820_;
}
}
else
{
lean_dec_ref(v_str_831_);
v___y_821_ = v___x_802_;
goto v___jp_820_;
}
}
else
{
lean_dec_ref_known(v_declName_829_, 2);
lean_dec_ref(v_arg_819_);
lean_dec_ref(v_arg_816_);
lean_dec_ref(v_arg_808_);
goto v___jp_790_;
}
}
else
{
lean_dec(v_declName_829_);
lean_dec_ref(v_arg_819_);
lean_dec_ref(v_arg_816_);
lean_dec_ref(v_arg_808_);
goto v___jp_790_;
}
}
else
{
lean_dec_ref(v___x_828_);
lean_dec_ref(v_arg_819_);
lean_dec_ref(v_arg_816_);
lean_dec_ref(v_arg_808_);
goto v___jp_790_;
}
}
}
v___jp_820_:
{
if (v___y_821_ == 0)
{
lean_dec_ref(v_arg_819_);
lean_dec_ref(v_arg_816_);
lean_dec_ref(v_arg_808_);
goto v___jp_790_;
}
else
{
lean_object* v___x_822_; lean_object* v___x_823_; 
lean_dec_ref(v_proof_789_);
lean_dec_ref(v_e_774_);
v___x_822_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_822_, 0, v_arg_816_);
lean_ctor_set(v___x_822_, 1, v_exprType_773_);
lean_ctor_set(v___x_822_, 2, v_arg_819_);
lean_ctor_set(v___x_822_, 3, v_expr_788_);
lean_ctor_set(v___x_822_, 4, v_arg_808_);
lean_ctor_set_uint8(v___x_822_, sizeof(void*)*5, v___x_802_);
v___x_823_ = lean_apply_2(v_toPure_776_, lean_box(0), v___x_822_);
return v___x_823_;
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
v___jp_790_:
{
uint8_t v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_791_ = 1;
lean_inc_ref(v_expr_788_);
v___x_792_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_792_, 0, v_expr_788_);
lean_ctor_set(v___x_792_, 1, v_exprType_773_);
lean_ctor_set(v___x_792_, 2, v_e_774_);
lean_ctor_set(v___x_792_, 3, v_expr_788_);
lean_ctor_set(v___x_792_, 4, v_proof_789_);
lean_ctor_set_uint8(v___x_792_, sizeof(void*)*5, v___x_791_);
v___x_793_ = lean_apply_2(v_toPure_776_, lean_box(0), v___x_792_);
return v___x_793_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed(lean_object* v_level_844_, lean_object* v_exprType_845_, lean_object* v_e_846_, lean_object* v___x_847_, lean_object* v_toPure_848_, lean_object* v_xs_849_, lean_object* v_____do__lift_850_){
_start:
{
uint8_t v___x_7849__boxed_851_; lean_object* v_res_852_; 
v___x_7849__boxed_851_ = lean_unbox(v___x_847_);
v_res_852_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(v_level_844_, v_exprType_845_, v_e_846_, v___x_7849__boxed_851_, v_toPure_848_, v_xs_849_, v_____do__lift_850_);
lean_dec(v_____do__lift_850_);
lean_dec_ref(v_xs_849_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(lean_object* v_inst_853_, lean_object* v_bodyType_854_, lean_object* v_xs_855_, lean_object* v_level_856_, lean_object* v_e_857_, uint8_t v___x_858_, lean_object* v_toPure_859_, lean_object* v_body_860_, lean_object* v_toBind_861_, lean_object* v_____r_862_){
_start:
{
lean_object* v_simp_863_; lean_object* v_exprType_864_; lean_object* v___x_865_; lean_object* v___f_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v_simp_863_ = lean_ctor_get(v_inst_853_, 2);
lean_inc(v_simp_863_);
lean_dec_ref(v_inst_853_);
v_exprType_864_ = lean_expr_abstract(v_bodyType_854_, v_xs_855_);
v___x_865_ = lean_box(v___x_858_);
v___f_866_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_866_, 0, v_level_856_);
lean_closure_set(v___f_866_, 1, v_exprType_864_);
lean_closure_set(v___f_866_, 2, v_e_857_);
lean_closure_set(v___f_866_, 3, v___x_865_);
lean_closure_set(v___f_866_, 4, v_toPure_859_);
lean_closure_set(v___f_866_, 5, v_xs_855_);
v___x_867_ = lean_apply_1(v_simp_863_, v_body_860_);
v___x_868_ = lean_apply_4(v_toBind_861_, lean_box(0), lean_box(0), v___x_867_, v___f_866_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed(lean_object* v_inst_869_, lean_object* v_bodyType_870_, lean_object* v_xs_871_, lean_object* v_level_872_, lean_object* v_e_873_, lean_object* v___x_874_, lean_object* v_toPure_875_, lean_object* v_body_876_, lean_object* v_toBind_877_, lean_object* v_____r_878_){
_start:
{
uint8_t v___x_8002__boxed_879_; lean_object* v_res_880_; 
v___x_8002__boxed_879_ = lean_unbox(v___x_874_);
v_res_880_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(v_inst_869_, v_bodyType_870_, v_xs_871_, v_level_872_, v_e_873_, v___x_8002__boxed_879_, v_toPure_875_, v_body_876_, v_toBind_877_, v_____r_878_);
lean_dec_ref(v_bodyType_870_);
return v_res_880_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2));
v___x_886_ = l_Lean_stringToMessageData(v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(lean_object* v_cls_887_, lean_object* v_body_888_, lean_object* v___x_889_, lean_object* v___x_890_, lean_object* v_toMonadRef_891_, lean_object* v___x_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_toCold_901_; lean_object* v_options_902_; uint8_t v_hasTrace_903_; 
v_toCold_901_ = lean_ctor_get(v___y_895_, 0);
v_options_902_ = lean_ctor_get(v_toCold_901_, 2);
v_hasTrace_903_ = lean_ctor_get_uint8(v_options_902_, sizeof(void*)*1);
if (v_hasTrace_903_ == 0)
{
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
lean_dec_ref(v___x_892_);
lean_dec_ref(v_toMonadRef_891_);
lean_dec_ref(v___x_890_);
lean_dec_ref(v___x_889_);
lean_dec_ref(v_body_888_);
lean_dec(v_cls_887_);
goto v___jp_898_;
}
else
{
lean_object* v_inheritedTraceOptions_904_; lean_object* v___x_905_; lean_object* v___x_906_; uint8_t v___x_907_; 
v_inheritedTraceOptions_904_ = lean_ctor_get(v_toCold_901_, 11);
v___x_905_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_887_);
v___x_906_ = l_Lean_Name_append(v___x_905_, v_cls_887_);
v___x_907_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_904_, v_options_902_, v___x_906_);
lean_dec(v___x_906_);
if (v___x_907_ == 0)
{
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
lean_dec_ref(v___x_892_);
lean_dec_ref(v_toMonadRef_891_);
lean_dec_ref(v___x_890_);
lean_dec_ref(v___x_889_);
lean_dec_ref(v_body_888_);
lean_dec(v_cls_887_);
goto v___jp_898_;
}
else
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_7471__overap_911_; lean_object* v___x_912_; 
v___x_908_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3);
v___x_909_ = l_Lean_MessageData_ofExpr(v_body_888_);
v___x_910_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_908_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_7471__overap_911_ = l_Lean_addTrace___redArg(v___x_889_, v___x_890_, v_toMonadRef_891_, v___x_892_, v_cls_887_, v___x_910_);
v___x_912_ = lean_apply_5(v___x_7471__overap_911_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, lean_box(0));
return v___x_912_;
}
}
v___jp_898_:
{
lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_899_ = lean_box(0);
v___x_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
return v___x_900_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed(lean_object* v_cls_913_, lean_object* v_body_914_, lean_object* v___x_915_, lean_object* v___x_916_, lean_object* v_toMonadRef_917_, lean_object* v___x_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(v_cls_913_, v_body_914_, v___x_915_, v___x_916_, v_toMonadRef_917_, v___x_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(lean_object* v_declName_927_, lean_object* v_type_928_, lean_object* v___y_929_, lean_object* v_value_930_, uint8_t v___y_931_, lean_object* v___x_932_, uint8_t v___y_933_, lean_object* v_toPure_934_, lean_object* v_us_935_, uint8_t v___x_936_, lean_object* v_rb_937_){
_start:
{
lean_object* v_expr_938_; lean_object* v_exprType_939_; lean_object* v_exprInit_940_; lean_object* v_exprResult_941_; lean_object* v_proof_942_; uint8_t v_modified_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_970_; 
v_expr_938_ = lean_ctor_get(v_rb_937_, 0);
v_exprType_939_ = lean_ctor_get(v_rb_937_, 1);
v_exprInit_940_ = lean_ctor_get(v_rb_937_, 2);
v_exprResult_941_ = lean_ctor_get(v_rb_937_, 3);
v_proof_942_ = lean_ctor_get(v_rb_937_, 4);
v_modified_943_ = lean_ctor_get_uint8(v_rb_937_, sizeof(void*)*5);
v_isSharedCheck_970_ = !lean_is_exclusive(v_rb_937_);
if (v_isSharedCheck_970_ == 0)
{
v___x_945_ = v_rb_937_;
v_isShared_946_ = v_isSharedCheck_970_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_proof_942_);
lean_inc(v_exprResult_941_);
lean_inc(v_exprInit_940_);
lean_inc(v_exprType_939_);
lean_inc(v_expr_938_);
lean_dec(v_rb_937_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_970_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
uint8_t v___x_947_; lean_object* v___x_948_; lean_object* v_expr_949_; lean_object* v___x_950_; lean_object* v_exprType_951_; lean_object* v___x_952_; lean_object* v_exprInit_953_; lean_object* v_exprResult_954_; 
v___x_947_ = 0;
lean_inc_ref_n(v_type_928_, 4);
lean_inc_n(v_declName_927_, 4);
v___x_948_ = l_Lean_mkLambda(v_declName_927_, v___x_947_, v_type_928_, v_expr_938_);
lean_inc_ref_n(v___y_929_, 3);
lean_inc_ref(v___x_948_);
v_expr_949_ = l_Lean_Expr_app___override(v___x_948_, v___y_929_);
v___x_950_ = l_Lean_mkLambda(v_declName_927_, v___x_947_, v_type_928_, v_exprType_939_);
lean_inc_ref(v___x_950_);
v_exprType_951_ = l_Lean_Expr_app___override(v___x_950_, v___y_929_);
v___x_952_ = l_Lean_mkLambda(v_declName_927_, v___x_947_, v_type_928_, v_exprInit_940_);
lean_inc_ref(v___x_952_);
v_exprInit_953_ = l_Lean_Expr_app___override(v___x_952_, v_value_930_);
v_exprResult_954_ = l_Lean_Expr_letE___override(v_declName_927_, v_type_928_, v___y_929_, v_exprResult_941_, v___y_931_);
if (v_modified_943_ == 0)
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v_proof_957_; lean_object* v___x_959_; 
lean_dec_ref(v___x_952_);
lean_dec_ref(v___x_950_);
lean_dec_ref(v___x_948_);
lean_dec_ref(v_proof_942_);
lean_dec(v_us_935_);
lean_dec_ref(v___y_929_);
lean_dec_ref(v_type_928_);
lean_dec(v_declName_927_);
v___x_955_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_956_ = l_Lean_mkConst(v___x_955_, v___x_932_);
lean_inc_ref(v_expr_949_);
lean_inc_ref(v_exprType_951_);
v_proof_957_ = l_Lean_mkAppB(v___x_956_, v_exprType_951_, v_expr_949_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 4, v_proof_957_);
lean_ctor_set(v___x_945_, 3, v_exprResult_954_);
lean_ctor_set(v___x_945_, 2, v_exprInit_953_);
lean_ctor_set(v___x_945_, 1, v_exprType_951_);
lean_ctor_set(v___x_945_, 0, v_expr_949_);
v___x_959_ = v___x_945_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_expr_949_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v_exprType_951_);
lean_ctor_set(v_reuseFailAlloc_961_, 2, v_exprInit_953_);
lean_ctor_set(v_reuseFailAlloc_961_, 3, v_exprResult_954_);
lean_ctor_set(v_reuseFailAlloc_961_, 4, v_proof_957_);
v___x_959_ = v_reuseFailAlloc_961_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
lean_object* v___x_960_; 
lean_ctor_set_uint8(v___x_959_, sizeof(void*)*5, v___y_933_);
v___x_960_ = lean_apply_2(v_toPure_934_, lean_box(0), v___x_959_);
return v___x_960_;
}
}
else
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v_proof_965_; lean_object* v___x_967_; 
lean_dec(v___x_932_);
v___x_962_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0));
v___x_963_ = l_Lean_mkConst(v___x_962_, v_us_935_);
lean_inc_ref(v_type_928_);
v___x_964_ = l_Lean_mkLambda(v_declName_927_, v___x_947_, v_type_928_, v_proof_942_);
v_proof_965_ = l_Lean_mkApp6(v___x_963_, v_type_928_, v___x_950_, v___y_929_, v___x_952_, v___x_948_, v___x_964_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 4, v_proof_965_);
lean_ctor_set(v___x_945_, 3, v_exprResult_954_);
lean_ctor_set(v___x_945_, 2, v_exprInit_953_);
lean_ctor_set(v___x_945_, 1, v_exprType_951_);
lean_ctor_set(v___x_945_, 0, v_expr_949_);
v___x_967_ = v___x_945_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_expr_949_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v_exprType_951_);
lean_ctor_set(v_reuseFailAlloc_969_, 2, v_exprInit_953_);
lean_ctor_set(v_reuseFailAlloc_969_, 3, v_exprResult_954_);
lean_ctor_set(v_reuseFailAlloc_969_, 4, v_proof_965_);
v___x_967_ = v_reuseFailAlloc_969_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
lean_object* v___x_968_; 
lean_ctor_set_uint8(v___x_967_, sizeof(void*)*5, v___x_936_);
v___x_968_ = lean_apply_2(v_toPure_934_, lean_box(0), v___x_967_);
return v___x_968_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed(lean_object* v_declName_971_, lean_object* v_type_972_, lean_object* v___y_973_, lean_object* v_value_974_, lean_object* v___y_975_, lean_object* v___x_976_, lean_object* v___y_977_, lean_object* v_toPure_978_, lean_object* v_us_979_, lean_object* v___x_980_, lean_object* v_rb_981_){
_start:
{
uint8_t v___y_8097__boxed_982_; uint8_t v___y_8099__boxed_983_; uint8_t v___x_8100__boxed_984_; lean_object* v_res_985_; 
v___y_8097__boxed_982_ = lean_unbox(v___y_975_);
v___y_8099__boxed_983_ = lean_unbox(v___y_977_);
v___x_8100__boxed_984_ = lean_unbox(v___x_980_);
v_res_985_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(v_declName_971_, v_type_972_, v___y_973_, v_value_974_, v___y_8097__boxed_982_, v___x_976_, v___y_8099__boxed_983_, v_toPure_978_, v_us_979_, v___x_8100__boxed_984_, v_rb_981_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9(lean_object* v___f_986_, lean_object* v_____x_987_){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = lean_apply_1(v___f_986_, v_____x_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(lean_object* v___x_993_, lean_object* v_declName_994_, lean_object* v_type_995_, lean_object* v_value_996_, lean_object* v_us_997_, lean_object* v___x_998_, uint8_t v___x_999_, lean_object* v_toPure_1000_, lean_object* v_rb_1001_){
_start:
{
lean_object* v_expr_1002_; lean_object* v_exprType_1003_; lean_object* v_exprInit_1004_; lean_object* v_exprResult_1005_; lean_object* v_proof_1006_; uint8_t v_modified_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1035_; 
v_expr_1002_ = lean_ctor_get(v_rb_1001_, 0);
v_exprType_1003_ = lean_ctor_get(v_rb_1001_, 1);
v_exprInit_1004_ = lean_ctor_get(v_rb_1001_, 2);
v_exprResult_1005_ = lean_ctor_get(v_rb_1001_, 3);
v_proof_1006_ = lean_ctor_get(v_rb_1001_, 4);
v_modified_1007_ = lean_ctor_get_uint8(v_rb_1001_, sizeof(void*)*5);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_rb_1001_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1009_ = v_rb_1001_;
v_isShared_1010_ = v_isSharedCheck_1035_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_proof_1006_);
lean_inc(v_exprResult_1005_);
lean_inc(v_exprInit_1004_);
lean_inc(v_exprType_1003_);
lean_inc(v_expr_1002_);
lean_dec(v_rb_1001_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1035_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v_expr_1011_; lean_object* v_exprType_1012_; uint8_t v___x_1013_; lean_object* v___x_1014_; lean_object* v_exprInit_1015_; lean_object* v_exprResult_1016_; 
v_expr_1011_ = lean_expr_lower_loose_bvars(v_expr_1002_, v___x_993_, v___x_993_);
lean_dec_ref(v_expr_1002_);
v_exprType_1012_ = lean_expr_lower_loose_bvars(v_exprType_1003_, v___x_993_, v___x_993_);
lean_dec_ref(v_exprType_1003_);
v___x_1013_ = 0;
lean_inc_ref(v_type_995_);
lean_inc(v_declName_994_);
v___x_1014_ = l_Lean_mkLambda(v_declName_994_, v___x_1013_, v_type_995_, v_exprInit_1004_);
lean_inc_ref(v_value_996_);
lean_inc_ref(v___x_1014_);
v_exprInit_1015_ = l_Lean_Expr_app___override(v___x_1014_, v_value_996_);
v_exprResult_1016_ = lean_expr_lower_loose_bvars(v_exprResult_1005_, v___x_993_, v___x_993_);
lean_dec_ref(v_exprResult_1005_);
if (v_modified_1007_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v_proof_1022_; lean_object* v___x_1024_; 
lean_dec_ref(v___x_1014_);
lean_dec_ref(v_proof_1006_);
lean_dec(v_declName_994_);
v___x_1017_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0));
v___x_1018_ = l_Lean_mkConst(v___x_1017_, v_us_997_);
v___x_1019_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_1020_ = l_Lean_mkConst(v___x_1019_, v___x_998_);
lean_inc_ref_n(v_expr_1011_, 3);
lean_inc_ref_n(v_exprType_1012_, 2);
v___x_1021_ = l_Lean_mkAppB(v___x_1020_, v_exprType_1012_, v_expr_1011_);
v_proof_1022_ = l_Lean_mkApp6(v___x_1018_, v_type_995_, v_exprType_1012_, v_value_996_, v_expr_1011_, v_expr_1011_, v___x_1021_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 4, v_proof_1022_);
lean_ctor_set(v___x_1009_, 3, v_exprResult_1016_);
lean_ctor_set(v___x_1009_, 2, v_exprInit_1015_);
lean_ctor_set(v___x_1009_, 1, v_exprType_1012_);
lean_ctor_set(v___x_1009_, 0, v_expr_1011_);
v___x_1024_ = v___x_1009_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_expr_1011_);
lean_ctor_set(v_reuseFailAlloc_1026_, 1, v_exprType_1012_);
lean_ctor_set(v_reuseFailAlloc_1026_, 2, v_exprInit_1015_);
lean_ctor_set(v_reuseFailAlloc_1026_, 3, v_exprResult_1016_);
lean_ctor_set(v_reuseFailAlloc_1026_, 4, v_proof_1022_);
v___x_1024_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1025_; 
lean_ctor_set_uint8(v___x_1024_, sizeof(void*)*5, v___x_999_);
v___x_1025_ = lean_apply_2(v_toPure_1000_, lean_box(0), v___x_1024_);
return v___x_1025_;
}
}
else
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v_proof_1030_; lean_object* v___x_1032_; 
lean_dec(v___x_998_);
v___x_1027_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1));
v___x_1028_ = l_Lean_mkConst(v___x_1027_, v_us_997_);
lean_inc_ref(v_type_995_);
v___x_1029_ = l_Lean_mkLambda(v_declName_994_, v___x_1013_, v_type_995_, v_proof_1006_);
lean_inc_ref(v_expr_1011_);
lean_inc_ref(v_exprType_1012_);
v_proof_1030_ = l_Lean_mkApp6(v___x_1028_, v_type_995_, v_exprType_1012_, v_value_996_, v___x_1014_, v_expr_1011_, v___x_1029_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 4, v_proof_1030_);
lean_ctor_set(v___x_1009_, 3, v_exprResult_1016_);
lean_ctor_set(v___x_1009_, 2, v_exprInit_1015_);
lean_ctor_set(v___x_1009_, 1, v_exprType_1012_);
lean_ctor_set(v___x_1009_, 0, v_expr_1011_);
v___x_1032_ = v___x_1009_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_expr_1011_);
lean_ctor_set(v_reuseFailAlloc_1034_, 1, v_exprType_1012_);
lean_ctor_set(v_reuseFailAlloc_1034_, 2, v_exprInit_1015_);
lean_ctor_set(v_reuseFailAlloc_1034_, 3, v_exprResult_1016_);
lean_ctor_set(v_reuseFailAlloc_1034_, 4, v_proof_1030_);
v___x_1032_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1033_; 
lean_ctor_set_uint8(v___x_1032_, sizeof(void*)*5, v___x_999_);
v___x_1033_ = lean_apply_2(v_toPure_1000_, lean_box(0), v___x_1032_);
return v___x_1033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed(lean_object* v___x_1036_, lean_object* v_declName_1037_, lean_object* v_type_1038_, lean_object* v_value_1039_, lean_object* v_us_1040_, lean_object* v___x_1041_, lean_object* v___x_1042_, lean_object* v_toPure_1043_, lean_object* v_rb_1044_){
_start:
{
uint8_t v___x_8187__boxed_1045_; lean_object* v_res_1046_; 
v___x_8187__boxed_1045_ = lean_unbox(v___x_1042_);
v_res_1046_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(v___x_1036_, v_declName_1037_, v_type_1038_, v_value_1039_, v_us_1040_, v___x_1041_, v___x_8187__boxed_1045_, v_toPure_1043_, v_rb_1044_);
lean_dec(v___x_1036_);
return v_res_1046_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1(void){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0));
v___x_1049_ = l_Lean_stringToMessageData(v___x_1048_);
return v___x_1049_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3(void){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2));
v___x_1052_ = l_Lean_stringToMessageData(v___x_1051_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(lean_object* v_cls_1053_, lean_object* v_declName_1054_, lean_object* v_val_1055_, lean_object* v___x_1056_, lean_object* v___x_1057_, lean_object* v_toMonadRef_1058_, lean_object* v___x_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v_toCold_1068_; lean_object* v_options_1069_; uint8_t v_hasTrace_1070_; 
v_toCold_1068_ = lean_ctor_get(v___y_1062_, 0);
v_options_1069_ = lean_ctor_get(v_toCold_1068_, 2);
v_hasTrace_1070_ = lean_ctor_get_uint8(v_options_1069_, sizeof(void*)*1);
if (v_hasTrace_1070_ == 0)
{
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec_ref(v___x_1059_);
lean_dec_ref(v_toMonadRef_1058_);
lean_dec_ref(v___x_1057_);
lean_dec_ref(v___x_1056_);
lean_dec_ref(v_val_1055_);
lean_dec(v_declName_1054_);
lean_dec(v_cls_1053_);
goto v___jp_1065_;
}
else
{
lean_object* v_inheritedTraceOptions_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v_inheritedTraceOptions_1071_ = lean_ctor_get(v_toCold_1068_, 11);
v___x_1072_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_1053_);
v___x_1073_ = l_Lean_Name_append(v___x_1072_, v_cls_1053_);
v___x_1074_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1071_, v_options_1069_, v___x_1073_);
lean_dec(v___x_1073_);
if (v___x_1074_ == 0)
{
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec_ref(v___x_1059_);
lean_dec_ref(v_toMonadRef_1058_);
lean_dec_ref(v___x_1057_);
lean_dec_ref(v___x_1056_);
lean_dec_ref(v_val_1055_);
lean_dec(v_declName_1054_);
lean_dec(v_cls_1053_);
goto v___jp_1065_;
}
else
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_7815__overap_1082_; lean_object* v___x_1083_; 
v___x_1075_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1);
v___x_1076_ = l_Lean_MessageData_ofName(v_declName_1054_);
v___x_1077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1075_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
v___x_1078_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1079_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1077_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = l_Lean_MessageData_ofExpr(v_val_1055_);
v___x_1081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1079_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_7815__overap_1082_ = l_Lean_addTrace___redArg(v___x_1056_, v___x_1057_, v_toMonadRef_1058_, v___x_1059_, v_cls_1053_, v___x_1081_);
v___x_1083_ = lean_apply_5(v___x_7815__overap_1082_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, lean_box(0));
return v___x_1083_;
}
}
v___jp_1065_:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = lean_box(0);
v___x_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
return v___x_1067_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed(lean_object* v_cls_1084_, lean_object* v_declName_1085_, lean_object* v_val_1086_, lean_object* v___x_1087_, lean_object* v___x_1088_, lean_object* v_toMonadRef_1089_, lean_object* v___x_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(v_cls_1084_, v_declName_1085_, v_val_1086_, v___x_1087_, v___x_1088_, v_toMonadRef_1089_, v___x_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_);
return v_res_1096_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0));
v___x_1099_ = l_Lean_stringToMessageData(v___x_1098_);
return v___x_1099_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2));
v___x_1102_ = l_Lean_stringToMessageData(v___x_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(lean_object* v_cls_1103_, lean_object* v_declName_1104_, lean_object* v_val_1105_, lean_object* v_val_x27_1106_, lean_object* v___x_1107_, lean_object* v___x_1108_, lean_object* v_toMonadRef_1109_, lean_object* v___x_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v_toCold_1119_; lean_object* v_options_1120_; uint8_t v_hasTrace_1121_; 
v_toCold_1119_ = lean_ctor_get(v___y_1113_, 0);
v_options_1120_ = lean_ctor_get(v_toCold_1119_, 2);
v_hasTrace_1121_ = lean_ctor_get_uint8(v_options_1120_, sizeof(void*)*1);
if (v_hasTrace_1121_ == 0)
{
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
lean_dec(v___y_1112_);
lean_dec_ref(v___y_1111_);
lean_dec_ref(v___x_1110_);
lean_dec_ref(v_toMonadRef_1109_);
lean_dec_ref(v___x_1108_);
lean_dec_ref(v___x_1107_);
lean_dec_ref(v_val_x27_1106_);
lean_dec_ref(v_val_1105_);
lean_dec(v_declName_1104_);
lean_dec(v_cls_1103_);
goto v___jp_1116_;
}
else
{
lean_object* v_inheritedTraceOptions_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; uint8_t v___x_1125_; 
v_inheritedTraceOptions_1122_ = lean_ctor_get(v_toCold_1119_, 11);
v___x_1123_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_1103_);
v___x_1124_ = l_Lean_Name_append(v___x_1123_, v_cls_1103_);
v___x_1125_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1122_, v_options_1120_, v___x_1124_);
lean_dec(v___x_1124_);
if (v___x_1125_ == 0)
{
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
lean_dec(v___y_1112_);
lean_dec_ref(v___y_1111_);
lean_dec_ref(v___x_1110_);
lean_dec_ref(v_toMonadRef_1109_);
lean_dec_ref(v___x_1108_);
lean_dec_ref(v___x_1107_);
lean_dec_ref(v_val_x27_1106_);
lean_dec_ref(v_val_1105_);
lean_dec(v_declName_1104_);
lean_dec(v_cls_1103_);
goto v___jp_1116_;
}
else
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_7559__overap_1137_; lean_object* v___x_1138_; 
v___x_1126_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1);
v___x_1127_ = l_Lean_MessageData_ofName(v_declName_1104_);
v___x_1128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1128_);
lean_ctor_set(v___x_1130_, 1, v___x_1129_);
v___x_1131_ = l_Lean_MessageData_ofExpr(v_val_1105_);
v___x_1132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___x_1133_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3);
v___x_1134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1132_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = l_Lean_MessageData_ofExpr(v_val_x27_1106_);
v___x_1136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1134_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
v___x_7559__overap_1137_ = l_Lean_addTrace___redArg(v___x_1107_, v___x_1108_, v_toMonadRef_1109_, v___x_1110_, v_cls_1103_, v___x_1136_);
v___x_1138_ = lean_apply_5(v___x_7559__overap_1137_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_, lean_box(0));
return v___x_1138_;
}
}
v___jp_1116_:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = lean_box(0);
v___x_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
return v___x_1118_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed(lean_object* v_cls_1139_, lean_object* v_declName_1140_, lean_object* v_val_1141_, lean_object* v_val_x27_1142_, lean_object* v___x_1143_, lean_object* v___x_1144_, lean_object* v_toMonadRef_1145_, lean_object* v___x_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(v_cls_1139_, v_declName_1140_, v_val_1141_, v_val_x27_1142_, v___x_1143_, v___x_1144_, v_toMonadRef_1145_, v___x_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(lean_object* v_e_1153_, lean_object* v_xs_1154_, lean_object* v_h_1155_, uint8_t v___x_1156_, lean_object* v_toPure_1157_, lean_object* v_toBind_1158_, lean_object* v___f_1159_, lean_object* v_____r_1160_){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1161_ = lean_expr_abstract(v_e_1153_, v_xs_1154_);
v___x_1162_ = lean_expr_abstract(v_h_1155_, v_xs_1154_);
v___x_1163_ = lean_box(v___x_1156_);
v___x_1164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
lean_ctor_set(v___x_1164_, 1, v___x_1162_);
v___x_1165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1161_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
v___x_1166_ = lean_apply_2(v_toPure_1157_, lean_box(0), v___x_1165_);
v___x_1167_ = lean_apply_4(v_toBind_1158_, lean_box(0), lean_box(0), v___x_1166_, v___f_1159_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed(lean_object* v_e_1168_, lean_object* v_xs_1169_, lean_object* v_h_1170_, lean_object* v___x_1171_, lean_object* v_toPure_1172_, lean_object* v_toBind_1173_, lean_object* v___f_1174_, lean_object* v_____r_1175_){
_start:
{
uint8_t v___x_8419__boxed_1176_; lean_object* v_res_1177_; 
v___x_8419__boxed_1176_ = lean_unbox(v___x_1171_);
v_res_1177_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(v_e_1168_, v_xs_1169_, v_h_1170_, v___x_8419__boxed_1176_, v_toPure_1172_, v_toBind_1173_, v___f_1174_, v_____r_1175_);
lean_dec_ref(v_h_1170_);
lean_dec_ref(v_xs_1169_);
lean_dec_ref(v_e_1168_);
return v_res_1177_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1(void){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0));
v___x_1180_ = l_Lean_stringToMessageData(v___x_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(lean_object* v_cls_1181_, lean_object* v_declName_1182_, lean_object* v_val_1183_, lean_object* v_e_1184_, lean_object* v___x_1185_, lean_object* v___x_1186_, lean_object* v_toMonadRef_1187_, lean_object* v___x_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v_toCold_1197_; lean_object* v_options_1198_; uint8_t v_hasTrace_1199_; 
v_toCold_1197_ = lean_ctor_get(v___y_1191_, 0);
v_options_1198_ = lean_ctor_get(v_toCold_1197_, 2);
v_hasTrace_1199_ = lean_ctor_get_uint8(v_options_1198_, sizeof(void*)*1);
if (v_hasTrace_1199_ == 0)
{
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v_toMonadRef_1187_);
lean_dec_ref(v___x_1186_);
lean_dec_ref(v___x_1185_);
lean_dec_ref(v_e_1184_);
lean_dec_ref(v_val_1183_);
lean_dec(v_declName_1182_);
lean_dec(v_cls_1181_);
goto v___jp_1194_;
}
else
{
lean_object* v_inheritedTraceOptions_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; uint8_t v___x_1203_; 
v_inheritedTraceOptions_1200_ = lean_ctor_get(v_toCold_1197_, 11);
v___x_1201_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_1181_);
v___x_1202_ = l_Lean_Name_append(v___x_1201_, v_cls_1181_);
v___x_1203_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1200_, v_options_1198_, v___x_1202_);
lean_dec(v___x_1202_);
if (v___x_1203_ == 0)
{
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec_ref(v___x_1188_);
lean_dec_ref(v_toMonadRef_1187_);
lean_dec_ref(v___x_1186_);
lean_dec_ref(v___x_1185_);
lean_dec_ref(v_e_1184_);
lean_dec_ref(v_val_1183_);
lean_dec(v_declName_1182_);
lean_dec(v_cls_1181_);
goto v___jp_1194_;
}
else
{
lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_7709__overap_1215_; lean_object* v___x_1216_; 
v___x_1204_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1);
v___x_1205_ = l_Lean_MessageData_ofName(v_declName_1182_);
v___x_1206_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1204_);
lean_ctor_set(v___x_1206_, 1, v___x_1205_);
v___x_1207_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1208_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1206_);
lean_ctor_set(v___x_1208_, 1, v___x_1207_);
v___x_1209_ = l_Lean_MessageData_ofExpr(v_val_1183_);
v___x_1210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1208_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
v___x_1211_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3);
v___x_1212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1210_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
v___x_1213_ = l_Lean_MessageData_ofExpr(v_e_1184_);
v___x_1214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1212_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_7709__overap_1215_ = l_Lean_addTrace___redArg(v___x_1185_, v___x_1186_, v_toMonadRef_1187_, v___x_1188_, v_cls_1181_, v___x_1214_);
v___x_1216_ = lean_apply_5(v___x_7709__overap_1215_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, lean_box(0));
return v___x_1216_;
}
}
v___jp_1194_:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1195_ = lean_box(0);
v___x_1196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
return v___x_1196_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed(lean_object* v_cls_1217_, lean_object* v_declName_1218_, lean_object* v_val_1219_, lean_object* v_e_1220_, lean_object* v___x_1221_, lean_object* v___x_1222_, lean_object* v_toMonadRef_1223_, lean_object* v___x_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(v_cls_1217_, v_declName_1218_, v_val_1219_, v_e_1220_, v___x_1221_, v___x_1222_, v_toMonadRef_1223_, v___x_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(lean_object* v_level_1240_, lean_object* v___x_1241_, lean_object* v_type_1242_, lean_object* v_value_1243_, uint8_t v___x_1244_, lean_object* v_toPure_1245_, lean_object* v_toBind_1246_, lean_object* v___f_1247_, lean_object* v_xs_1248_, uint8_t v___x_1249_, lean_object* v___f_1250_, lean_object* v_declName_1251_, lean_object* v_val_1252_, lean_object* v___x_1253_, lean_object* v___x_1254_, lean_object* v_toMonadRef_1255_, lean_object* v___x_1256_, lean_object* v_inst_1257_, lean_object* v_____do__lift_1258_){
_start:
{
if (lean_obj_tag(v_____do__lift_1258_) == 0)
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
lean_dec(v_inst_1257_);
lean_dec_ref(v___x_1256_);
lean_dec_ref(v_toMonadRef_1255_);
lean_dec_ref(v___x_1254_);
lean_dec_ref(v___x_1253_);
lean_dec_ref(v_val_1252_);
lean_dec(v_declName_1251_);
lean_dec(v___f_1250_);
lean_dec_ref(v_xs_1248_);
v___x_1259_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_1260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1260_, 0, v_level_1240_);
lean_ctor_set(v___x_1260_, 1, v___x_1241_);
v___x_1261_ = l_Lean_mkConst(v___x_1259_, v___x_1260_);
lean_inc_ref(v_value_1243_);
v___x_1262_ = l_Lean_mkAppB(v___x_1261_, v_type_1242_, v_value_1243_);
v___x_1263_ = lean_box(v___x_1244_);
v___x_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1263_);
lean_ctor_set(v___x_1264_, 1, v___x_1262_);
v___x_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1265_, 0, v_value_1243_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = lean_apply_2(v_toPure_1245_, lean_box(0), v___x_1265_);
v___x_1267_ = lean_apply_4(v_toBind_1246_, lean_box(0), lean_box(0), v___x_1266_, v___f_1247_);
return v___x_1267_;
}
else
{
lean_object* v_e_1268_; lean_object* v_h_1269_; lean_object* v___x_1270_; lean_object* v___f_1271_; lean_object* v_cls_1272_; lean_object* v___f_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
lean_dec(v___f_1247_);
lean_dec_ref(v_value_1243_);
lean_dec_ref(v_type_1242_);
lean_dec(v___x_1241_);
lean_dec(v_level_1240_);
v_e_1268_ = lean_ctor_get(v_____do__lift_1258_, 0);
lean_inc_ref_n(v_e_1268_, 2);
v_h_1269_ = lean_ctor_get(v_____do__lift_1258_, 1);
lean_inc_ref(v_h_1269_);
lean_dec_ref_known(v_____do__lift_1258_, 2);
v___x_1270_ = lean_box(v___x_1249_);
lean_inc(v_toBind_1246_);
v___f_1271_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed), 8, 7);
lean_closure_set(v___f_1271_, 0, v_e_1268_);
lean_closure_set(v___f_1271_, 1, v_xs_1248_);
lean_closure_set(v___f_1271_, 2, v_h_1269_);
lean_closure_set(v___f_1271_, 3, v___x_1270_);
lean_closure_set(v___f_1271_, 4, v_toPure_1245_);
lean_closure_set(v___f_1271_, 5, v_toBind_1246_);
lean_closure_set(v___f_1271_, 6, v___f_1250_);
v_cls_1272_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
v___f_1273_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed), 13, 8);
lean_closure_set(v___f_1273_, 0, v_cls_1272_);
lean_closure_set(v___f_1273_, 1, v_declName_1251_);
lean_closure_set(v___f_1273_, 2, v_val_1252_);
lean_closure_set(v___f_1273_, 3, v_e_1268_);
lean_closure_set(v___f_1273_, 4, v___x_1253_);
lean_closure_set(v___f_1273_, 5, v___x_1254_);
lean_closure_set(v___f_1273_, 6, v_toMonadRef_1255_);
lean_closure_set(v___f_1273_, 7, v___x_1256_);
v___x_1274_ = lean_apply_2(v_inst_1257_, lean_box(0), v___f_1273_);
v___x_1275_ = lean_apply_4(v_toBind_1246_, lean_box(0), lean_box(0), v___x_1274_, v___f_1271_);
return v___x_1275_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed(lean_object** _args){
lean_object* v_level_1276_ = _args[0];
lean_object* v___x_1277_ = _args[1];
lean_object* v_type_1278_ = _args[2];
lean_object* v_value_1279_ = _args[3];
lean_object* v___x_1280_ = _args[4];
lean_object* v_toPure_1281_ = _args[5];
lean_object* v_toBind_1282_ = _args[6];
lean_object* v___f_1283_ = _args[7];
lean_object* v_xs_1284_ = _args[8];
lean_object* v___x_1285_ = _args[9];
lean_object* v___f_1286_ = _args[10];
lean_object* v_declName_1287_ = _args[11];
lean_object* v_val_1288_ = _args[12];
lean_object* v___x_1289_ = _args[13];
lean_object* v___x_1290_ = _args[14];
lean_object* v_toMonadRef_1291_ = _args[15];
lean_object* v___x_1292_ = _args[16];
lean_object* v_inst_1293_ = _args[17];
lean_object* v_____do__lift_1294_ = _args[18];
_start:
{
uint8_t v___x_8559__boxed_1295_; uint8_t v___x_8561__boxed_1296_; lean_object* v_res_1297_; 
v___x_8559__boxed_1295_ = lean_unbox(v___x_1280_);
v___x_8561__boxed_1296_ = lean_unbox(v___x_1285_);
v_res_1297_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(v_level_1276_, v___x_1277_, v_type_1278_, v_value_1279_, v___x_8559__boxed_1295_, v_toPure_1281_, v_toBind_1282_, v___f_1283_, v_xs_1284_, v___x_8561__boxed_1296_, v___f_1286_, v_declName_1287_, v_val_1288_, v___x_1289_, v___x_1290_, v_toMonadRef_1291_, v___x_1292_, v_inst_1293_, v_____do__lift_1294_);
return v_res_1297_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6(void){
_start:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1307_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5));
v___x_1308_ = lean_unsigned_to_nat(8u);
v___x_1309_ = lean_unsigned_to_nat(287u);
v___x_1310_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4));
v___x_1311_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_1312_ = l_mkPanicMessageWithDecl(v___x_1311_, v___x_1310_, v___x_1309_, v___x_1308_, v___x_1307_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(lean_object* v_declName_1313_, lean_object* v_type_1314_, lean_object* v_fst_1315_, lean_object* v___x_1316_, lean_object* v_value_1317_, uint8_t v___x_1318_, uint8_t v_fst_1319_, lean_object* v___x_1320_, uint8_t v___x_1321_, lean_object* v_toPure_1322_, lean_object* v_us_1323_, lean_object* v_snd_1324_, lean_object* v___x_1325_, lean_object* v_rb_1326_){
_start:
{
lean_object* v_expr_1327_; lean_object* v_exprType_1328_; lean_object* v_exprInit_1329_; lean_object* v_exprResult_1330_; lean_object* v_proof_1331_; uint8_t v_modified_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1377_; 
v_expr_1327_ = lean_ctor_get(v_rb_1326_, 0);
v_exprType_1328_ = lean_ctor_get(v_rb_1326_, 1);
v_exprInit_1329_ = lean_ctor_get(v_rb_1326_, 2);
v_exprResult_1330_ = lean_ctor_get(v_rb_1326_, 3);
v_proof_1331_ = lean_ctor_get(v_rb_1326_, 4);
v_modified_1332_ = lean_ctor_get_uint8(v_rb_1326_, sizeof(void*)*5);
v_isSharedCheck_1377_ = !lean_is_exclusive(v_rb_1326_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1334_ = v_rb_1326_;
v_isShared_1335_ = v_isSharedCheck_1377_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_proof_1331_);
lean_inc(v_exprResult_1330_);
lean_inc(v_exprInit_1329_);
lean_inc(v_exprType_1328_);
lean_inc(v_expr_1327_);
lean_dec(v_rb_1326_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1377_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1336_; uint8_t v___x_1337_; 
v___x_1336_ = lean_unsigned_to_nat(0u);
v___x_1337_ = lean_expr_has_loose_bvar(v_exprType_1328_, v___x_1336_);
if (v___x_1337_ == 0)
{
uint8_t v___x_1338_; lean_object* v___x_1339_; lean_object* v_expr_1340_; lean_object* v_exprType_1341_; lean_object* v___x_1342_; lean_object* v_exprInit_1343_; lean_object* v_exprResult_1344_; 
v___x_1338_ = 0;
lean_inc_ref_n(v_type_1314_, 3);
lean_inc_n(v_declName_1313_, 3);
v___x_1339_ = l_Lean_mkLambda(v_declName_1313_, v___x_1338_, v_type_1314_, v_expr_1327_);
lean_inc_ref_n(v_fst_1315_, 2);
lean_inc_ref(v___x_1339_);
v_expr_1340_ = l_Lean_Expr_app___override(v___x_1339_, v_fst_1315_);
v_exprType_1341_ = lean_expr_lower_loose_bvars(v_exprType_1328_, v___x_1316_, v___x_1316_);
lean_dec_ref(v_exprType_1328_);
v___x_1342_ = l_Lean_mkLambda(v_declName_1313_, v___x_1338_, v_type_1314_, v_exprInit_1329_);
lean_inc_ref(v_value_1317_);
lean_inc_ref(v___x_1342_);
v_exprInit_1343_ = l_Lean_Expr_app___override(v___x_1342_, v_value_1317_);
v_exprResult_1344_ = l_Lean_Expr_letE___override(v_declName_1313_, v_type_1314_, v_fst_1315_, v_exprResult_1330_, v___x_1318_);
if (v_fst_1319_ == 0)
{
lean_dec_ref(v_snd_1324_);
lean_dec_ref(v_fst_1315_);
if (v_modified_1332_ == 0)
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v_proof_1347_; lean_object* v___x_1349_; 
lean_dec_ref(v___x_1342_);
lean_dec_ref(v___x_1339_);
lean_dec_ref(v_proof_1331_);
lean_dec(v_us_1323_);
lean_dec_ref(v_value_1317_);
lean_dec_ref(v_type_1314_);
lean_dec(v_declName_1313_);
v___x_1345_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_1346_ = l_Lean_mkConst(v___x_1345_, v___x_1320_);
lean_inc_ref(v_expr_1340_);
lean_inc_ref(v_exprType_1341_);
v_proof_1347_ = l_Lean_mkAppB(v___x_1346_, v_exprType_1341_, v_expr_1340_);
if (v_isShared_1335_ == 0)
{
lean_ctor_set(v___x_1334_, 4, v_proof_1347_);
lean_ctor_set(v___x_1334_, 3, v_exprResult_1344_);
lean_ctor_set(v___x_1334_, 2, v_exprInit_1343_);
lean_ctor_set(v___x_1334_, 1, v_exprType_1341_);
lean_ctor_set(v___x_1334_, 0, v_expr_1340_);
v___x_1349_ = v___x_1334_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_expr_1340_);
lean_ctor_set(v_reuseFailAlloc_1351_, 1, v_exprType_1341_);
lean_ctor_set(v_reuseFailAlloc_1351_, 2, v_exprInit_1343_);
lean_ctor_set(v_reuseFailAlloc_1351_, 3, v_exprResult_1344_);
lean_ctor_set(v_reuseFailAlloc_1351_, 4, v_proof_1347_);
v___x_1349_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1350_; 
lean_ctor_set_uint8(v___x_1349_, sizeof(void*)*5, v___x_1321_);
v___x_1350_ = lean_apply_2(v_toPure_1322_, lean_box(0), v___x_1349_);
return v___x_1350_;
}
}
else
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v_proof_1355_; lean_object* v___x_1357_; 
lean_dec(v___x_1320_);
v___x_1352_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0));
v___x_1353_ = l_Lean_mkConst(v___x_1352_, v_us_1323_);
lean_inc_ref(v_type_1314_);
v___x_1354_ = l_Lean_mkLambda(v_declName_1313_, v___x_1338_, v_type_1314_, v_proof_1331_);
lean_inc_ref(v_exprType_1341_);
v_proof_1355_ = l_Lean_mkApp6(v___x_1353_, v_type_1314_, v_exprType_1341_, v_value_1317_, v___x_1342_, v___x_1339_, v___x_1354_);
if (v_isShared_1335_ == 0)
{
lean_ctor_set(v___x_1334_, 4, v_proof_1355_);
lean_ctor_set(v___x_1334_, 3, v_exprResult_1344_);
lean_ctor_set(v___x_1334_, 2, v_exprInit_1343_);
lean_ctor_set(v___x_1334_, 1, v_exprType_1341_);
lean_ctor_set(v___x_1334_, 0, v_expr_1340_);
v___x_1357_ = v___x_1334_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_expr_1340_);
lean_ctor_set(v_reuseFailAlloc_1359_, 1, v_exprType_1341_);
lean_ctor_set(v_reuseFailAlloc_1359_, 2, v_exprInit_1343_);
lean_ctor_set(v_reuseFailAlloc_1359_, 3, v_exprResult_1344_);
lean_ctor_set(v_reuseFailAlloc_1359_, 4, v_proof_1355_);
v___x_1357_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
lean_object* v___x_1358_; 
lean_ctor_set_uint8(v___x_1357_, sizeof(void*)*5, v___x_1318_);
v___x_1358_ = lean_apply_2(v_toPure_1322_, lean_box(0), v___x_1357_);
return v___x_1358_;
}
}
}
else
{
lean_dec(v___x_1320_);
if (v_modified_1332_ == 0)
{
lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v_proof_1362_; lean_object* v___x_1364_; 
lean_dec_ref(v___x_1339_);
lean_dec_ref(v_proof_1331_);
lean_dec(v_declName_1313_);
v___x_1360_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1));
v___x_1361_ = l_Lean_mkConst(v___x_1360_, v_us_1323_);
lean_inc_ref(v_exprType_1341_);
v_proof_1362_ = l_Lean_mkApp6(v___x_1361_, v_type_1314_, v_exprType_1341_, v_value_1317_, v_fst_1315_, v___x_1342_, v_snd_1324_);
if (v_isShared_1335_ == 0)
{
lean_ctor_set(v___x_1334_, 4, v_proof_1362_);
lean_ctor_set(v___x_1334_, 3, v_exprResult_1344_);
lean_ctor_set(v___x_1334_, 2, v_exprInit_1343_);
lean_ctor_set(v___x_1334_, 1, v_exprType_1341_);
lean_ctor_set(v___x_1334_, 0, v_expr_1340_);
v___x_1364_ = v___x_1334_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_expr_1340_);
lean_ctor_set(v_reuseFailAlloc_1366_, 1, v_exprType_1341_);
lean_ctor_set(v_reuseFailAlloc_1366_, 2, v_exprInit_1343_);
lean_ctor_set(v_reuseFailAlloc_1366_, 3, v_exprResult_1344_);
lean_ctor_set(v_reuseFailAlloc_1366_, 4, v_proof_1362_);
v___x_1364_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
lean_object* v___x_1365_; 
lean_ctor_set_uint8(v___x_1364_, sizeof(void*)*5, v___x_1318_);
v___x_1365_ = lean_apply_2(v_toPure_1322_, lean_box(0), v___x_1364_);
return v___x_1365_;
}
}
else
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v_proof_1370_; lean_object* v___x_1372_; 
v___x_1367_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2));
v___x_1368_ = l_Lean_mkConst(v___x_1367_, v_us_1323_);
lean_inc_ref(v_type_1314_);
v___x_1369_ = l_Lean_mkLambda(v_declName_1313_, v___x_1338_, v_type_1314_, v_proof_1331_);
lean_inc_ref(v_exprType_1341_);
v_proof_1370_ = l_Lean_mkApp8(v___x_1368_, v_type_1314_, v_exprType_1341_, v_value_1317_, v_fst_1315_, v___x_1342_, v___x_1339_, v_snd_1324_, v___x_1369_);
if (v_isShared_1335_ == 0)
{
lean_ctor_set(v___x_1334_, 4, v_proof_1370_);
lean_ctor_set(v___x_1334_, 3, v_exprResult_1344_);
lean_ctor_set(v___x_1334_, 2, v_exprInit_1343_);
lean_ctor_set(v___x_1334_, 1, v_exprType_1341_);
lean_ctor_set(v___x_1334_, 0, v_expr_1340_);
v___x_1372_ = v___x_1334_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_expr_1340_);
lean_ctor_set(v_reuseFailAlloc_1374_, 1, v_exprType_1341_);
lean_ctor_set(v_reuseFailAlloc_1374_, 2, v_exprInit_1343_);
lean_ctor_set(v_reuseFailAlloc_1374_, 3, v_exprResult_1344_);
lean_ctor_set(v_reuseFailAlloc_1374_, 4, v_proof_1370_);
v___x_1372_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
lean_object* v___x_1373_; 
lean_ctor_set_uint8(v___x_1372_, sizeof(void*)*5, v___x_1318_);
v___x_1373_ = lean_apply_2(v_toPure_1322_, lean_box(0), v___x_1372_);
return v___x_1373_;
}
}
}
}
else
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
lean_del_object(v___x_1334_);
lean_dec_ref(v_proof_1331_);
lean_dec_ref(v_exprResult_1330_);
lean_dec_ref(v_exprInit_1329_);
lean_dec_ref(v_exprType_1328_);
lean_dec_ref(v_expr_1327_);
lean_dec_ref(v_snd_1324_);
lean_dec(v_us_1323_);
lean_dec(v_toPure_1322_);
lean_dec(v___x_1320_);
lean_dec_ref(v_value_1317_);
lean_dec_ref(v_fst_1315_);
lean_dec_ref(v_type_1314_);
lean_dec(v_declName_1313_);
v___x_1375_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6);
v___x_1376_ = l_panic___redArg(v___x_1325_, v___x_1375_);
return v___x_1376_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed(lean_object* v_declName_1378_, lean_object* v_type_1379_, lean_object* v_fst_1380_, lean_object* v___x_1381_, lean_object* v_value_1382_, lean_object* v___x_1383_, lean_object* v_fst_1384_, lean_object* v___x_1385_, lean_object* v___x_1386_, lean_object* v_toPure_1387_, lean_object* v_us_1388_, lean_object* v_snd_1389_, lean_object* v___x_1390_, lean_object* v_rb_1391_){
_start:
{
uint8_t v___x_8681__boxed_1392_; uint8_t v_fst_8682__boxed_1393_; uint8_t v___x_8684__boxed_1394_; lean_object* v_res_1395_; 
v___x_8681__boxed_1392_ = lean_unbox(v___x_1383_);
v_fst_8682__boxed_1393_ = lean_unbox(v_fst_1384_);
v___x_8684__boxed_1394_ = lean_unbox(v___x_1386_);
v_res_1395_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(v_declName_1378_, v_type_1379_, v_fst_1380_, v___x_1381_, v_value_1382_, v___x_8681__boxed_1392_, v_fst_8682__boxed_1393_, v___x_1385_, v___x_8684__boxed_1394_, v_toPure_1387_, v_us_1388_, v_snd_1389_, v___x_1390_, v_rb_1391_);
lean_dec(v___x_1390_);
lean_dec(v___x_1381_);
return v_res_1395_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0(void){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = l_instMonadEIO___redArg();
return v___x_1399_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1(void){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1400_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0);
v___x_1401_ = l_StateRefT_x27_instMonad___redArg(v___x_1400_);
return v___x_1401_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8(void){
_start:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1407_ = l_Lean_Core_instMonadTraceCoreM;
v___x_1408_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7));
v___x_1409_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_1408_, v___x_1407_);
return v___x_1409_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9(void){
_start:
{
lean_object* v___x_1411_; lean_object* v___f_1412_; lean_object* v___x_1413_; 
v___x_1411_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8);
v___f_1412_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6));
v___x_1413_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_1412_, v___x_1411_);
return v___x_1413_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12(void){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1415_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1416_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7));
v___x_1417_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11));
v___x_1418_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1417_, v___x_1416_, v___x_1415_);
return v___x_1418_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13(void){
_start:
{
lean_object* v___x_1420_; lean_object* v___f_1421_; lean_object* v___f_1422_; lean_object* v___x_1423_; 
v___x_1420_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12);
v___f_1421_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6));
v___f_1422_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10));
v___x_1423_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1422_, v___f_1421_, v___x_1420_);
return v___x_1423_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15(void){
_start:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1425_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14));
v___x_1426_ = lean_unsigned_to_nat(34u);
v___x_1427_ = lean_unsigned_to_nat(217u);
v___x_1428_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4));
v___x_1429_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_1430_ = l_mkPanicMessageWithDecl(v___x_1429_, v___x_1428_, v___x_1427_, v___x_1426_, v___x_1425_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(lean_object* v_declName_1431_, lean_object* v_type_1432_, lean_object* v_value_1433_, uint8_t v___y_1434_, lean_object* v___x_1435_, lean_object* v_toPure_1436_, lean_object* v_us_1437_, uint8_t v___x_1438_, lean_object* v_decl_1439_, lean_object* v_x_1440_, lean_object* v_i_1441_, lean_object* v_xs_1442_, lean_object* v_inst_1443_, lean_object* v_inst_1444_, lean_object* v_inst_1445_, lean_object* v_inst_1446_, lean_object* v_info_1447_, lean_object* v_fixed_1448_, lean_object* v_used_1449_, lean_object* v_body_1450_, lean_object* v_toBind_1451_, lean_object* v_withNewLemmas_1452_, lean_object* v_val_x27_1453_, lean_object* v_val_1454_, uint8_t v___x_1455_, lean_object* v_____r_1456_){
_start:
{
uint8_t v___y_1458_; lean_object* v___y_1459_; uint8_t v___y_1476_; uint8_t v___x_1478_; 
v___x_1478_ = lean_expr_eqv(v_val_1454_, v_val_x27_1453_);
if (v___x_1478_ == 0)
{
v___y_1476_ = v___y_1434_;
goto v___jp_1475_;
}
else
{
v___y_1476_ = v___x_1455_;
goto v___jp_1475_;
}
v___jp_1457_:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___f_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1460_ = lean_box(v___y_1434_);
v___x_1461_ = lean_box(v___y_1458_);
v___x_1462_ = lean_box(v___x_1438_);
v___f_1463_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed), 11, 10);
lean_closure_set(v___f_1463_, 0, v_declName_1431_);
lean_closure_set(v___f_1463_, 1, v_type_1432_);
lean_closure_set(v___f_1463_, 2, v___y_1459_);
lean_closure_set(v___f_1463_, 3, v_value_1433_);
lean_closure_set(v___f_1463_, 4, v___x_1460_);
lean_closure_set(v___f_1463_, 5, v___x_1435_);
lean_closure_set(v___f_1463_, 6, v___x_1461_);
lean_closure_set(v___f_1463_, 7, v_toPure_1436_);
lean_closure_set(v___f_1463_, 8, v_us_1437_);
lean_closure_set(v___f_1463_, 9, v___x_1462_);
v___x_1464_ = lean_box(0);
v___x_1465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1465_, 0, v_decl_1439_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
v___x_1466_ = lean_unsigned_to_nat(1u);
v___x_1467_ = lean_mk_empty_array_with_capacity(v___x_1466_);
lean_inc_ref(v_x_1440_);
v___x_1468_ = lean_array_push(v___x_1467_, v_x_1440_);
v___x_1469_ = lean_nat_add(v_i_1441_, v___x_1466_);
v___x_1470_ = lean_array_push(v_xs_1442_, v_x_1440_);
lean_inc_ref(v_inst_1445_);
lean_inc_ref(v_inst_1443_);
v___x_1471_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1443_, v_inst_1444_, v_inst_1445_, v_inst_1446_, v_info_1447_, v_fixed_1448_, v_used_1449_, v_body_1450_, v___x_1469_, v___x_1470_);
v___x_1472_ = lean_apply_4(v_toBind_1451_, lean_box(0), lean_box(0), v___x_1471_, v___f_1463_);
v___x_1473_ = lean_apply_3(v_withNewLemmas_1452_, lean_box(0), v___x_1468_, v___x_1472_);
v___x_1474_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_1445_, v_inst_1443_, v___x_1465_, v___x_1473_);
return v___x_1474_;
}
v___jp_1475_:
{
if (v___y_1476_ == 0)
{
lean_inc_ref(v_value_1433_);
v___y_1458_ = v___y_1476_;
v___y_1459_ = v_value_1433_;
goto v___jp_1457_;
}
else
{
lean_object* v___x_1477_; 
v___x_1477_ = lean_expr_abstract(v_val_x27_1453_, v_xs_1442_);
v___y_1458_ = v___y_1476_;
v___y_1459_ = v___x_1477_;
goto v___jp_1457_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_declName_1479_ = _args[0];
lean_object* v_type_1480_ = _args[1];
lean_object* v_value_1481_ = _args[2];
lean_object* v___y_1482_ = _args[3];
lean_object* v___x_1483_ = _args[4];
lean_object* v_toPure_1484_ = _args[5];
lean_object* v_us_1485_ = _args[6];
lean_object* v___x_1486_ = _args[7];
lean_object* v_decl_1487_ = _args[8];
lean_object* v_x_1488_ = _args[9];
lean_object* v_i_1489_ = _args[10];
lean_object* v_xs_1490_ = _args[11];
lean_object* v_inst_1491_ = _args[12];
lean_object* v_inst_1492_ = _args[13];
lean_object* v_inst_1493_ = _args[14];
lean_object* v_inst_1494_ = _args[15];
lean_object* v_info_1495_ = _args[16];
lean_object* v_fixed_1496_ = _args[17];
lean_object* v_used_1497_ = _args[18];
lean_object* v_body_1498_ = _args[19];
lean_object* v_toBind_1499_ = _args[20];
lean_object* v_withNewLemmas_1500_ = _args[21];
lean_object* v_val_x27_1501_ = _args[22];
lean_object* v_val_1502_ = _args[23];
lean_object* v___x_1503_ = _args[24];
lean_object* v_____r_1504_ = _args[25];
_start:
{
uint8_t v___y_8942__boxed_1505_; uint8_t v___x_8944__boxed_1506_; uint8_t v___x_8950__boxed_1507_; lean_object* v_res_1508_; 
v___y_8942__boxed_1505_ = lean_unbox(v___y_1482_);
v___x_8944__boxed_1506_ = lean_unbox(v___x_1486_);
v___x_8950__boxed_1507_ = lean_unbox(v___x_1503_);
v_res_1508_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(v_declName_1479_, v_type_1480_, v_value_1481_, v___y_8942__boxed_1505_, v___x_1483_, v_toPure_1484_, v_us_1485_, v___x_8944__boxed_1506_, v_decl_1487_, v_x_1488_, v_i_1489_, v_xs_1490_, v_inst_1491_, v_inst_1492_, v_inst_1493_, v_inst_1494_, v_info_1495_, v_fixed_1496_, v_used_1497_, v_body_1498_, v_toBind_1499_, v_withNewLemmas_1500_, v_val_x27_1501_, v_val_1502_, v___x_8950__boxed_1507_, v_____r_1504_);
lean_dec_ref(v_val_1502_);
lean_dec_ref(v_val_x27_1501_);
lean_dec(v_i_1489_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(lean_object* v_declName_1509_, lean_object* v_type_1510_, lean_object* v_value_1511_, uint8_t v___y_1512_, lean_object* v___x_1513_, lean_object* v_toPure_1514_, lean_object* v_us_1515_, uint8_t v___x_1516_, lean_object* v_decl_1517_, lean_object* v_x_1518_, lean_object* v_i_1519_, lean_object* v_xs_1520_, lean_object* v_inst_1521_, lean_object* v_inst_1522_, lean_object* v_inst_1523_, lean_object* v_inst_1524_, lean_object* v_info_1525_, lean_object* v_fixed_1526_, lean_object* v_used_1527_, lean_object* v_body_1528_, lean_object* v_toBind_1529_, lean_object* v_withNewLemmas_1530_, lean_object* v_val_1531_, uint8_t v___x_1532_, lean_object* v___x_1533_, lean_object* v___x_1534_, lean_object* v_toMonadRef_1535_, lean_object* v___x_1536_, lean_object* v_val_x27_1537_){
_start:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___f_1541_; lean_object* v_cls_1542_; lean_object* v___f_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1538_ = lean_box(v___y_1512_);
v___x_1539_ = lean_box(v___x_1516_);
v___x_1540_ = lean_box(v___x_1532_);
lean_inc_ref(v_val_1531_);
lean_inc_ref(v_val_x27_1537_);
lean_inc(v_toBind_1529_);
lean_inc(v_inst_1522_);
lean_inc(v_declName_1509_);
v___f_1541_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed), 26, 25);
lean_closure_set(v___f_1541_, 0, v_declName_1509_);
lean_closure_set(v___f_1541_, 1, v_type_1510_);
lean_closure_set(v___f_1541_, 2, v_value_1511_);
lean_closure_set(v___f_1541_, 3, v___x_1538_);
lean_closure_set(v___f_1541_, 4, v___x_1513_);
lean_closure_set(v___f_1541_, 5, v_toPure_1514_);
lean_closure_set(v___f_1541_, 6, v_us_1515_);
lean_closure_set(v___f_1541_, 7, v___x_1539_);
lean_closure_set(v___f_1541_, 8, v_decl_1517_);
lean_closure_set(v___f_1541_, 9, v_x_1518_);
lean_closure_set(v___f_1541_, 10, v_i_1519_);
lean_closure_set(v___f_1541_, 11, v_xs_1520_);
lean_closure_set(v___f_1541_, 12, v_inst_1521_);
lean_closure_set(v___f_1541_, 13, v_inst_1522_);
lean_closure_set(v___f_1541_, 14, v_inst_1523_);
lean_closure_set(v___f_1541_, 15, v_inst_1524_);
lean_closure_set(v___f_1541_, 16, v_info_1525_);
lean_closure_set(v___f_1541_, 17, v_fixed_1526_);
lean_closure_set(v___f_1541_, 18, v_used_1527_);
lean_closure_set(v___f_1541_, 19, v_body_1528_);
lean_closure_set(v___f_1541_, 20, v_toBind_1529_);
lean_closure_set(v___f_1541_, 21, v_withNewLemmas_1530_);
lean_closure_set(v___f_1541_, 22, v_val_x27_1537_);
lean_closure_set(v___f_1541_, 23, v_val_1531_);
lean_closure_set(v___f_1541_, 24, v___x_1540_);
v_cls_1542_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
v___f_1543_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed), 13, 8);
lean_closure_set(v___f_1543_, 0, v_cls_1542_);
lean_closure_set(v___f_1543_, 1, v_declName_1509_);
lean_closure_set(v___f_1543_, 2, v_val_1531_);
lean_closure_set(v___f_1543_, 3, v_val_x27_1537_);
lean_closure_set(v___f_1543_, 4, v___x_1533_);
lean_closure_set(v___f_1543_, 5, v___x_1534_);
lean_closure_set(v___f_1543_, 6, v_toMonadRef_1535_);
lean_closure_set(v___f_1543_, 7, v___x_1536_);
v___x_1544_ = lean_apply_2(v_inst_1522_, lean_box(0), v___f_1543_);
v___x_1545_ = lean_apply_4(v_toBind_1529_, lean_box(0), lean_box(0), v___x_1544_, v___f_1541_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_declName_1546_ = _args[0];
lean_object* v_type_1547_ = _args[1];
lean_object* v_value_1548_ = _args[2];
lean_object* v___y_1549_ = _args[3];
lean_object* v___x_1550_ = _args[4];
lean_object* v_toPure_1551_ = _args[5];
lean_object* v_us_1552_ = _args[6];
lean_object* v___x_1553_ = _args[7];
lean_object* v_decl_1554_ = _args[8];
lean_object* v_x_1555_ = _args[9];
lean_object* v_i_1556_ = _args[10];
lean_object* v_xs_1557_ = _args[11];
lean_object* v_inst_1558_ = _args[12];
lean_object* v_inst_1559_ = _args[13];
lean_object* v_inst_1560_ = _args[14];
lean_object* v_inst_1561_ = _args[15];
lean_object* v_info_1562_ = _args[16];
lean_object* v_fixed_1563_ = _args[17];
lean_object* v_used_1564_ = _args[18];
lean_object* v_body_1565_ = _args[19];
lean_object* v_toBind_1566_ = _args[20];
lean_object* v_withNewLemmas_1567_ = _args[21];
lean_object* v_val_1568_ = _args[22];
lean_object* v___x_1569_ = _args[23];
lean_object* v___x_1570_ = _args[24];
lean_object* v___x_1571_ = _args[25];
lean_object* v_toMonadRef_1572_ = _args[26];
lean_object* v___x_1573_ = _args[27];
lean_object* v_val_x27_1574_ = _args[28];
_start:
{
uint8_t v___y_8889__boxed_1575_; uint8_t v___x_8891__boxed_1576_; uint8_t v___x_8897__boxed_1577_; lean_object* v_res_1578_; 
v___y_8889__boxed_1575_ = lean_unbox(v___y_1549_);
v___x_8891__boxed_1576_ = lean_unbox(v___x_1553_);
v___x_8897__boxed_1577_ = lean_unbox(v___x_1569_);
v_res_1578_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(v_declName_1546_, v_type_1547_, v_value_1548_, v___y_8889__boxed_1575_, v___x_1550_, v_toPure_1551_, v_us_1552_, v___x_8891__boxed_1576_, v_decl_1554_, v_x_1555_, v_i_1556_, v_xs_1557_, v_inst_1558_, v_inst_1559_, v_inst_1560_, v_inst_1561_, v_info_1562_, v_fixed_1563_, v_used_1564_, v_body_1565_, v_toBind_1566_, v_withNewLemmas_1567_, v_val_1568_, v___x_8897__boxed_1577_, v___x_1570_, v___x_1571_, v_toMonadRef_1572_, v___x_1573_, v_val_x27_1574_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(lean_object* v_decl_1579_, lean_object* v_declName_1580_, lean_object* v_type_1581_, lean_object* v_value_1582_, uint8_t v___x_1583_, lean_object* v___x_1584_, uint8_t v___x_1585_, lean_object* v_toPure_1586_, lean_object* v_us_1587_, lean_object* v___x_1588_, lean_object* v_x_1589_, lean_object* v_i_1590_, lean_object* v_xs_1591_, lean_object* v_inst_1592_, lean_object* v_inst_1593_, lean_object* v_inst_1594_, lean_object* v_inst_1595_, lean_object* v_info_1596_, lean_object* v_fixed_1597_, lean_object* v_used_1598_, lean_object* v_body_1599_, lean_object* v_toBind_1600_, lean_object* v_withNewLemmas_1601_, lean_object* v_____x_1602_){
_start:
{
lean_object* v_snd_1603_; lean_object* v_fst_1604_; lean_object* v_fst_1605_; lean_object* v_snd_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1626_; 
v_snd_1603_ = lean_ctor_get(v_____x_1602_, 1);
lean_inc(v_snd_1603_);
v_fst_1604_ = lean_ctor_get(v_____x_1602_, 0);
lean_inc(v_fst_1604_);
lean_dec_ref(v_____x_1602_);
v_fst_1605_ = lean_ctor_get(v_snd_1603_, 0);
v_snd_1606_ = lean_ctor_get(v_snd_1603_, 1);
v_isSharedCheck_1626_ = !lean_is_exclusive(v_snd_1603_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1608_ = v_snd_1603_;
v_isShared_1609_ = v_isSharedCheck_1626_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_snd_1606_);
lean_inc(v_fst_1605_);
lean_dec(v_snd_1603_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1626_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1610_; lean_object* v___x_1612_; 
v___x_1610_ = lean_box(0);
if (v_isShared_1609_ == 0)
{
lean_ctor_set_tag(v___x_1608_, 1);
lean_ctor_set(v___x_1608_, 1, v___x_1610_);
lean_ctor_set(v___x_1608_, 0, v_decl_1579_);
v___x_1612_ = v___x_1608_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_decl_1579_);
lean_ctor_set(v_reuseFailAlloc_1625_, 1, v___x_1610_);
v___x_1612_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___f_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1613_ = lean_unsigned_to_nat(1u);
v___x_1614_ = lean_box(v___x_1583_);
v___x_1615_ = lean_box(v___x_1585_);
v___f_1616_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed), 14, 13);
lean_closure_set(v___f_1616_, 0, v_declName_1580_);
lean_closure_set(v___f_1616_, 1, v_type_1581_);
lean_closure_set(v___f_1616_, 2, v_fst_1604_);
lean_closure_set(v___f_1616_, 3, v___x_1613_);
lean_closure_set(v___f_1616_, 4, v_value_1582_);
lean_closure_set(v___f_1616_, 5, v___x_1614_);
lean_closure_set(v___f_1616_, 6, v_fst_1605_);
lean_closure_set(v___f_1616_, 7, v___x_1584_);
lean_closure_set(v___f_1616_, 8, v___x_1615_);
lean_closure_set(v___f_1616_, 9, v_toPure_1586_);
lean_closure_set(v___f_1616_, 10, v_us_1587_);
lean_closure_set(v___f_1616_, 11, v_snd_1606_);
lean_closure_set(v___f_1616_, 12, v___x_1588_);
v___x_1617_ = lean_mk_empty_array_with_capacity(v___x_1613_);
lean_inc_ref(v_x_1589_);
v___x_1618_ = lean_array_push(v___x_1617_, v_x_1589_);
v___x_1619_ = lean_nat_add(v_i_1590_, v___x_1613_);
v___x_1620_ = lean_array_push(v_xs_1591_, v_x_1589_);
lean_inc_ref(v_inst_1594_);
lean_inc_ref(v_inst_1592_);
v___x_1621_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1592_, v_inst_1593_, v_inst_1594_, v_inst_1595_, v_info_1596_, v_fixed_1597_, v_used_1598_, v_body_1599_, v___x_1619_, v___x_1620_);
v___x_1622_ = lean_apply_4(v_toBind_1600_, lean_box(0), lean_box(0), v___x_1621_, v___f_1616_);
v___x_1623_ = lean_apply_3(v_withNewLemmas_1601_, lean_box(0), v___x_1618_, v___x_1622_);
v___x_1624_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_1594_, v_inst_1592_, v___x_1612_, v___x_1623_);
return v___x_1624_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed(lean_object** _args){
lean_object* v_decl_1627_ = _args[0];
lean_object* v_declName_1628_ = _args[1];
lean_object* v_type_1629_ = _args[2];
lean_object* v_value_1630_ = _args[3];
lean_object* v___x_1631_ = _args[4];
lean_object* v___x_1632_ = _args[5];
lean_object* v___x_1633_ = _args[6];
lean_object* v_toPure_1634_ = _args[7];
lean_object* v_us_1635_ = _args[8];
lean_object* v___x_1636_ = _args[9];
lean_object* v_x_1637_ = _args[10];
lean_object* v_i_1638_ = _args[11];
lean_object* v_xs_1639_ = _args[12];
lean_object* v_inst_1640_ = _args[13];
lean_object* v_inst_1641_ = _args[14];
lean_object* v_inst_1642_ = _args[15];
lean_object* v_inst_1643_ = _args[16];
lean_object* v_info_1644_ = _args[17];
lean_object* v_fixed_1645_ = _args[18];
lean_object* v_used_1646_ = _args[19];
lean_object* v_body_1647_ = _args[20];
lean_object* v_toBind_1648_ = _args[21];
lean_object* v_withNewLemmas_1649_ = _args[22];
lean_object* v_____x_1650_ = _args[23];
_start:
{
uint8_t v___x_8913__boxed_1651_; uint8_t v___x_8915__boxed_1652_; lean_object* v_res_1653_; 
v___x_8913__boxed_1651_ = lean_unbox(v___x_1631_);
v___x_8915__boxed_1652_ = lean_unbox(v___x_1633_);
v_res_1653_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(v_decl_1627_, v_declName_1628_, v_type_1629_, v_value_1630_, v___x_8913__boxed_1651_, v___x_1632_, v___x_8915__boxed_1652_, v_toPure_1634_, v_us_1635_, v___x_1636_, v_x_1637_, v_i_1638_, v_xs_1639_, v_inst_1640_, v_inst_1641_, v_inst_1642_, v_inst_1643_, v_info_1644_, v_fixed_1645_, v_used_1646_, v_body_1647_, v_toBind_1648_, v_withNewLemmas_1649_, v_____x_1650_);
lean_dec(v_i_1638_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed(lean_object** _args){
lean_object* v___x_1654_ = _args[0];
lean_object* v_declName_1655_ = _args[1];
lean_object* v_type_1656_ = _args[2];
lean_object* v_value_1657_ = _args[3];
lean_object* v_us_1658_ = _args[4];
lean_object* v___x_1659_ = _args[5];
lean_object* v___x_1660_ = _args[6];
lean_object* v_toPure_1661_ = _args[7];
lean_object* v_i_1662_ = _args[8];
lean_object* v_xs_1663_ = _args[9];
lean_object* v_inst_1664_ = _args[10];
lean_object* v_inst_1665_ = _args[11];
lean_object* v_inst_1666_ = _args[12];
lean_object* v_inst_1667_ = _args[13];
lean_object* v_info_1668_ = _args[14];
lean_object* v_fixed_1669_ = _args[15];
lean_object* v_used_1670_ = _args[16];
lean_object* v_body_1671_ = _args[17];
lean_object* v_toBind_1672_ = _args[18];
lean_object* v_____r_1673_ = _args[19];
_start:
{
uint8_t v___x_8872__boxed_1674_; lean_object* v_res_1675_; 
v___x_8872__boxed_1674_ = lean_unbox(v___x_1660_);
v_res_1675_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(v___x_1654_, v_declName_1655_, v_type_1656_, v_value_1657_, v_us_1658_, v___x_1659_, v___x_8872__boxed_1674_, v_toPure_1661_, v_i_1662_, v_xs_1663_, v_inst_1664_, v_inst_1665_, v_inst_1666_, v_inst_1667_, v_info_1668_, v_fixed_1669_, v_used_1670_, v_body_1671_, v_toBind_1672_, v_____r_1673_);
lean_dec(v_i_1662_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(lean_object* v_inst_1676_, lean_object* v_inst_1677_, lean_object* v_inst_1678_, lean_object* v_inst_1679_, lean_object* v_info_1680_, lean_object* v_fixed_1681_, lean_object* v_used_1682_, lean_object* v_e_1683_, lean_object* v_i_1684_, lean_object* v_xs_1685_){
_start:
{
lean_object* v___x_1686_; lean_object* v_toApplicative_1687_; lean_object* v_toFunctor_1688_; lean_object* v_toSeq_1689_; lean_object* v_toSeqLeft_1690_; lean_object* v_toSeqRight_1691_; lean_object* v___f_1692_; lean_object* v___f_1693_; lean_object* v___f_1694_; lean_object* v___f_1695_; lean_object* v___x_1696_; lean_object* v___f_1697_; lean_object* v___f_1698_; lean_object* v___f_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v_toApplicative_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1804_; 
v___x_1686_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1);
v_toApplicative_1687_ = lean_ctor_get(v___x_1686_, 0);
v_toFunctor_1688_ = lean_ctor_get(v_toApplicative_1687_, 0);
v_toSeq_1689_ = lean_ctor_get(v_toApplicative_1687_, 2);
v_toSeqLeft_1690_ = lean_ctor_get(v_toApplicative_1687_, 3);
v_toSeqRight_1691_ = lean_ctor_get(v_toApplicative_1687_, 4);
v___f_1692_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2));
v___f_1693_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1688_, 2);
v___f_1694_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1694_, 0, v_toFunctor_1688_);
v___f_1695_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1695_, 0, v_toFunctor_1688_);
v___x_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___f_1694_);
lean_ctor_set(v___x_1696_, 1, v___f_1695_);
lean_inc(v_toSeqRight_1691_);
v___f_1697_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1697_, 0, v_toSeqRight_1691_);
lean_inc(v_toSeqLeft_1690_);
v___f_1698_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1698_, 0, v_toSeqLeft_1690_);
lean_inc(v_toSeq_1689_);
v___f_1699_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1699_, 0, v_toSeq_1689_);
v___x_1700_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1696_);
lean_ctor_set(v___x_1700_, 1, v___f_1692_);
lean_ctor_set(v___x_1700_, 2, v___f_1699_);
lean_ctor_set(v___x_1700_, 3, v___f_1698_);
lean_ctor_set(v___x_1700_, 4, v___f_1697_);
v___x_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1700_);
lean_ctor_set(v___x_1701_, 1, v___f_1693_);
v___x_1702_ = l_StateRefT_x27_instMonad___redArg(v___x_1701_);
v_toApplicative_1703_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1804_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1804_ == 0)
{
lean_object* v_unused_1805_; 
v_unused_1805_ = lean_ctor_get(v___x_1702_, 1);
lean_dec(v_unused_1805_);
v___x_1705_ = v___x_1702_;
v_isShared_1706_ = v_isSharedCheck_1804_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_toApplicative_1703_);
lean_dec(v___x_1702_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1804_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v_toFunctor_1707_; lean_object* v_toSeq_1708_; lean_object* v_toSeqLeft_1709_; lean_object* v_toSeqRight_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1802_; 
v_toFunctor_1707_ = lean_ctor_get(v_toApplicative_1703_, 0);
v_toSeq_1708_ = lean_ctor_get(v_toApplicative_1703_, 2);
v_toSeqLeft_1709_ = lean_ctor_get(v_toApplicative_1703_, 3);
v_toSeqRight_1710_ = lean_ctor_get(v_toApplicative_1703_, 4);
v_isSharedCheck_1802_ = !lean_is_exclusive(v_toApplicative_1703_);
if (v_isSharedCheck_1802_ == 0)
{
lean_object* v_unused_1803_; 
v_unused_1803_ = lean_ctor_get(v_toApplicative_1703_, 1);
lean_dec(v_unused_1803_);
v___x_1712_ = v_toApplicative_1703_;
v_isShared_1713_ = v_isSharedCheck_1802_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_toSeqRight_1710_);
lean_inc(v_toSeqLeft_1709_);
lean_inc(v_toSeq_1708_);
lean_inc(v_toFunctor_1707_);
lean_dec(v_toApplicative_1703_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1802_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___f_1714_; lean_object* v___f_1715_; lean_object* v___f_1716_; lean_object* v___f_1717_; lean_object* v___x_1718_; lean_object* v___f_1719_; lean_object* v___f_1720_; lean_object* v___f_1721_; lean_object* v___x_1723_; 
v___f_1714_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4));
v___f_1715_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5));
lean_inc_ref(v_toFunctor_1707_);
v___f_1716_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1716_, 0, v_toFunctor_1707_);
v___f_1717_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1717_, 0, v_toFunctor_1707_);
v___x_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1718_, 0, v___f_1716_);
lean_ctor_set(v___x_1718_, 1, v___f_1717_);
v___f_1719_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1719_, 0, v_toSeqRight_1710_);
v___f_1720_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1720_, 0, v_toSeqLeft_1709_);
v___f_1721_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1721_, 0, v_toSeq_1708_);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 4, v___f_1719_);
lean_ctor_set(v___x_1712_, 3, v___f_1720_);
lean_ctor_set(v___x_1712_, 2, v___f_1721_);
lean_ctor_set(v___x_1712_, 1, v___f_1714_);
lean_ctor_set(v___x_1712_, 0, v___x_1718_);
v___x_1723_ = v___x_1712_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v___x_1718_);
lean_ctor_set(v_reuseFailAlloc_1801_, 1, v___f_1714_);
lean_ctor_set(v_reuseFailAlloc_1801_, 2, v___f_1721_);
lean_ctor_set(v_reuseFailAlloc_1801_, 3, v___f_1720_);
lean_ctor_set(v_reuseFailAlloc_1801_, 4, v___f_1719_);
v___x_1723_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
lean_object* v___x_1725_; 
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 1, v___f_1715_);
lean_ctor_set(v___x_1705_, 0, v___x_1723_);
v___x_1725_ = v___x_1705_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v___x_1723_);
lean_ctor_set(v_reuseFailAlloc_1800_, 1, v___f_1715_);
v___x_1725_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v_toApplicative_1728_; lean_object* v_toMonadRef_1729_; lean_object* v_haveInfo_1730_; lean_object* v_body_1731_; lean_object* v_bodyType_1732_; lean_object* v_level_1733_; lean_object* v_toBind_1734_; lean_object* v_toPure_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; uint8_t v___x_1738_; 
v___x_1726_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9);
v___x_1727_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13);
v_toApplicative_1728_ = lean_ctor_get(v_inst_1676_, 0);
v_toMonadRef_1729_ = lean_ctor_get(v___x_1727_, 0);
v_haveInfo_1730_ = lean_ctor_get(v_info_1680_, 0);
v_body_1731_ = lean_ctor_get(v_info_1680_, 3);
v_bodyType_1732_ = lean_ctor_get(v_info_1680_, 4);
v_level_1733_ = lean_ctor_get(v_info_1680_, 5);
v_toBind_1734_ = lean_ctor_get(v_inst_1676_, 1);
lean_inc(v_toBind_1734_);
v_toPure_1735_ = lean_ctor_get(v_toApplicative_1728_, 1);
lean_inc(v_toPure_1735_);
v___x_1736_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1737_ = lean_array_get_size(v_haveInfo_1730_);
v___x_1738_ = lean_nat_dec_lt(v_i_1684_, v___x_1737_);
if (v___x_1738_ == 0)
{
lean_object* v___x_1739_; lean_object* v___f_1740_; lean_object* v_cls_1741_; lean_object* v___f_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
lean_inc(v_level_1733_);
lean_inc_ref(v_bodyType_1732_);
lean_inc_ref_n(v_body_1731_, 2);
lean_dec(v_i_1684_);
lean_dec_ref(v_used_1682_);
lean_dec_ref(v_fixed_1681_);
lean_dec_ref(v_info_1680_);
lean_dec_ref(v_inst_1678_);
lean_dec_ref(v_inst_1676_);
v___x_1739_ = lean_box(v___x_1738_);
lean_inc(v_toBind_1734_);
v___f_1740_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed), 10, 9);
lean_closure_set(v___f_1740_, 0, v_inst_1679_);
lean_closure_set(v___f_1740_, 1, v_bodyType_1732_);
lean_closure_set(v___f_1740_, 2, v_xs_1685_);
lean_closure_set(v___f_1740_, 3, v_level_1733_);
lean_closure_set(v___f_1740_, 4, v_e_1683_);
lean_closure_set(v___f_1740_, 5, v___x_1739_);
lean_closure_set(v___f_1740_, 6, v_toPure_1735_);
lean_closure_set(v___f_1740_, 7, v_body_1731_);
lean_closure_set(v___f_1740_, 8, v_toBind_1734_);
v_cls_1741_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
lean_inc_ref(v_toMonadRef_1729_);
v___f_1742_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed), 11, 6);
lean_closure_set(v___f_1742_, 0, v_cls_1741_);
lean_closure_set(v___f_1742_, 1, v_body_1731_);
lean_closure_set(v___f_1742_, 2, v___x_1725_);
lean_closure_set(v___f_1742_, 3, v___x_1726_);
lean_closure_set(v___f_1742_, 4, v_toMonadRef_1729_);
lean_closure_set(v___f_1742_, 5, v___x_1736_);
v___x_1743_ = lean_apply_2(v_inst_1677_, lean_box(0), v___f_1742_);
v___x_1744_ = lean_apply_4(v_toBind_1734_, lean_box(0), lean_box(0), v___x_1743_, v___f_1740_);
return v___x_1744_;
}
else
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = l_Lean_Meta_instInhabitedSimpHaveResult_default;
lean_inc_ref(v_inst_1676_);
v___x_1746_ = l_instInhabitedOfMonad___redArg(v_inst_1676_, v___x_1745_);
if (lean_obj_tag(v_e_1683_) == 8)
{
uint8_t v_nondep_1750_; 
v_nondep_1750_ = lean_ctor_get_uint8(v_e_1683_, sizeof(void*)*4 + 8);
if (v_nondep_1750_ == 1)
{
lean_object* v_declName_1751_; lean_object* v_type_1752_; lean_object* v_value_1753_; lean_object* v_body_1754_; lean_object* v_hinfo_1755_; lean_object* v_decl_1756_; lean_object* v_level_1757_; lean_object* v_x_1758_; lean_object* v_val_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v_us_1762_; uint8_t v___y_1764_; uint8_t v___y_1765_; lean_object* v___x_1790_; uint8_t v___x_1791_; 
v_declName_1751_ = lean_ctor_get(v_e_1683_, 0);
lean_inc(v_declName_1751_);
v_type_1752_ = lean_ctor_get(v_e_1683_, 1);
lean_inc_ref(v_type_1752_);
v_value_1753_ = lean_ctor_get(v_e_1683_, 2);
lean_inc_ref(v_value_1753_);
v_body_1754_ = lean_ctor_get(v_e_1683_, 3);
lean_inc_ref(v_body_1754_);
lean_dec_ref_known(v_e_1683_, 4);
v_hinfo_1755_ = lean_array_fget_borrowed(v_haveInfo_1730_, v_i_1684_);
v_decl_1756_ = lean_ctor_get(v_hinfo_1755_, 2);
v_level_1757_ = lean_ctor_get(v_hinfo_1755_, 3);
lean_inc_ref(v_decl_1756_);
v_x_1758_ = l_Lean_LocalDecl_toExpr(v_decl_1756_);
v_val_1759_ = l_Lean_LocalDecl_value(v_decl_1756_, v___x_1738_);
v___x_1760_ = lean_box(0);
lean_inc(v_level_1733_);
v___x_1761_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1761_, 0, v_level_1733_);
lean_ctor_set(v___x_1761_, 1, v___x_1760_);
lean_inc_ref(v___x_1761_);
lean_inc(v_level_1757_);
v_us_1762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_us_1762_, 0, v_level_1757_);
lean_ctor_set(v_us_1762_, 1, v___x_1761_);
v___x_1790_ = lean_array_get_size(v_used_1682_);
v___x_1791_ = lean_nat_dec_lt(v_i_1684_, v___x_1790_);
if (v___x_1791_ == 0)
{
lean_inc_ref(v_decl_1756_);
goto v___jp_1774_;
}
else
{
lean_object* v___x_1792_; uint8_t v___x_1793_; 
v___x_1792_ = lean_array_fget_borrowed(v_used_1682_, v_i_1684_);
v___x_1793_ = lean_unbox(v___x_1792_);
if (v___x_1793_ == 0)
{
lean_object* v___x_1794_; lean_object* v___f_1795_; lean_object* v_cls_1796_; lean_object* v___f_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
lean_dec_ref(v_x_1758_);
lean_dec(v___x_1746_);
v___x_1794_ = lean_box(v___x_1738_);
lean_inc(v_toBind_1734_);
lean_inc(v_inst_1677_);
lean_inc(v_declName_1751_);
v___f_1795_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed), 20, 19);
lean_closure_set(v___f_1795_, 0, v___x_1760_);
lean_closure_set(v___f_1795_, 1, v_declName_1751_);
lean_closure_set(v___f_1795_, 2, v_type_1752_);
lean_closure_set(v___f_1795_, 3, v_value_1753_);
lean_closure_set(v___f_1795_, 4, v_us_1762_);
lean_closure_set(v___f_1795_, 5, v___x_1761_);
lean_closure_set(v___f_1795_, 6, v___x_1794_);
lean_closure_set(v___f_1795_, 7, v_toPure_1735_);
lean_closure_set(v___f_1795_, 8, v_i_1684_);
lean_closure_set(v___f_1795_, 9, v_xs_1685_);
lean_closure_set(v___f_1795_, 10, v_inst_1676_);
lean_closure_set(v___f_1795_, 11, v_inst_1677_);
lean_closure_set(v___f_1795_, 12, v_inst_1678_);
lean_closure_set(v___f_1795_, 13, v_inst_1679_);
lean_closure_set(v___f_1795_, 14, v_info_1680_);
lean_closure_set(v___f_1795_, 15, v_fixed_1681_);
lean_closure_set(v___f_1795_, 16, v_used_1682_);
lean_closure_set(v___f_1795_, 17, v_body_1754_);
lean_closure_set(v___f_1795_, 18, v_toBind_1734_);
v_cls_1796_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
lean_inc_ref(v_toMonadRef_1729_);
v___f_1797_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed), 12, 7);
lean_closure_set(v___f_1797_, 0, v_cls_1796_);
lean_closure_set(v___f_1797_, 1, v_declName_1751_);
lean_closure_set(v___f_1797_, 2, v_val_1759_);
lean_closure_set(v___f_1797_, 3, v___x_1725_);
lean_closure_set(v___f_1797_, 4, v___x_1726_);
lean_closure_set(v___f_1797_, 5, v_toMonadRef_1729_);
lean_closure_set(v___f_1797_, 6, v___x_1736_);
v___x_1798_ = lean_apply_2(v_inst_1677_, lean_box(0), v___f_1797_);
v___x_1799_ = lean_apply_4(v_toBind_1734_, lean_box(0), lean_box(0), v___x_1798_, v___f_1795_);
return v___x_1799_;
}
else
{
lean_inc_ref(v_decl_1756_);
goto v___jp_1774_;
}
}
v___jp_1763_:
{
lean_object* v_withNewLemmas_1766_; lean_object* v_dsimp_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___f_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v_withNewLemmas_1766_ = lean_ctor_get(v_inst_1679_, 0);
lean_inc(v_withNewLemmas_1766_);
v_dsimp_1767_ = lean_ctor_get(v_inst_1679_, 1);
lean_inc(v_dsimp_1767_);
v___x_1768_ = lean_box(v___y_1765_);
v___x_1769_ = lean_box(v___x_1738_);
v___x_1770_ = lean_box(v___y_1764_);
lean_inc_ref(v_toMonadRef_1729_);
lean_inc_ref(v_val_1759_);
lean_inc(v_toBind_1734_);
v___f_1771_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed), 29, 28);
lean_closure_set(v___f_1771_, 0, v_declName_1751_);
lean_closure_set(v___f_1771_, 1, v_type_1752_);
lean_closure_set(v___f_1771_, 2, v_value_1753_);
lean_closure_set(v___f_1771_, 3, v___x_1768_);
lean_closure_set(v___f_1771_, 4, v___x_1761_);
lean_closure_set(v___f_1771_, 5, v_toPure_1735_);
lean_closure_set(v___f_1771_, 6, v_us_1762_);
lean_closure_set(v___f_1771_, 7, v___x_1769_);
lean_closure_set(v___f_1771_, 8, v_decl_1756_);
lean_closure_set(v___f_1771_, 9, v_x_1758_);
lean_closure_set(v___f_1771_, 10, v_i_1684_);
lean_closure_set(v___f_1771_, 11, v_xs_1685_);
lean_closure_set(v___f_1771_, 12, v_inst_1676_);
lean_closure_set(v___f_1771_, 13, v_inst_1677_);
lean_closure_set(v___f_1771_, 14, v_inst_1678_);
lean_closure_set(v___f_1771_, 15, v_inst_1679_);
lean_closure_set(v___f_1771_, 16, v_info_1680_);
lean_closure_set(v___f_1771_, 17, v_fixed_1681_);
lean_closure_set(v___f_1771_, 18, v_used_1682_);
lean_closure_set(v___f_1771_, 19, v_body_1754_);
lean_closure_set(v___f_1771_, 20, v_toBind_1734_);
lean_closure_set(v___f_1771_, 21, v_withNewLemmas_1766_);
lean_closure_set(v___f_1771_, 22, v_val_1759_);
lean_closure_set(v___f_1771_, 23, v___x_1770_);
lean_closure_set(v___f_1771_, 24, v___x_1725_);
lean_closure_set(v___f_1771_, 25, v___x_1726_);
lean_closure_set(v___f_1771_, 26, v_toMonadRef_1729_);
lean_closure_set(v___f_1771_, 27, v___x_1736_);
v___x_1772_ = lean_apply_1(v_dsimp_1767_, v_val_1759_);
v___x_1773_ = lean_apply_4(v_toBind_1734_, lean_box(0), lean_box(0), v___x_1772_, v___f_1771_);
return v___x_1773_;
}
v___jp_1774_:
{
uint8_t v___x_1775_; lean_object* v___x_1776_; uint8_t v___x_1777_; 
v___x_1775_ = 0;
v___x_1776_ = lean_array_get_size(v_fixed_1681_);
v___x_1777_ = lean_nat_dec_lt(v_i_1684_, v___x_1776_);
if (v___x_1777_ == 0)
{
lean_dec(v___x_1746_);
v___y_1764_ = v___x_1775_;
v___y_1765_ = v___x_1738_;
goto v___jp_1763_;
}
else
{
lean_object* v___x_1778_; uint8_t v___x_1779_; 
v___x_1778_ = lean_array_fget_borrowed(v_fixed_1681_, v_i_1684_);
v___x_1779_ = lean_unbox(v___x_1778_);
if (v___x_1779_ == 0)
{
lean_object* v_withNewLemmas_1780_; lean_object* v_simp_1781_; lean_object* v___x_1782_; lean_object* v___f_1783_; lean_object* v___f_1784_; lean_object* v___x_1785_; lean_object* v___f_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
lean_inc_n(v___x_1778_, 2);
lean_inc(v_level_1757_);
v_withNewLemmas_1780_ = lean_ctor_get(v_inst_1679_, 0);
lean_inc(v_withNewLemmas_1780_);
v_simp_1781_ = lean_ctor_get(v_inst_1679_, 2);
lean_inc(v_simp_1781_);
v___x_1782_ = lean_box(v___x_1738_);
lean_inc_n(v_toBind_1734_, 2);
lean_inc(v_inst_1677_);
lean_inc_ref(v_xs_1685_);
lean_inc(v_toPure_1735_);
lean_inc_ref(v_value_1753_);
lean_inc_ref(v_type_1752_);
lean_inc(v_declName_1751_);
v___f_1783_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed), 24, 23);
lean_closure_set(v___f_1783_, 0, v_decl_1756_);
lean_closure_set(v___f_1783_, 1, v_declName_1751_);
lean_closure_set(v___f_1783_, 2, v_type_1752_);
lean_closure_set(v___f_1783_, 3, v_value_1753_);
lean_closure_set(v___f_1783_, 4, v___x_1782_);
lean_closure_set(v___f_1783_, 5, v___x_1761_);
lean_closure_set(v___f_1783_, 6, v___x_1778_);
lean_closure_set(v___f_1783_, 7, v_toPure_1735_);
lean_closure_set(v___f_1783_, 8, v_us_1762_);
lean_closure_set(v___f_1783_, 9, v___x_1746_);
lean_closure_set(v___f_1783_, 10, v_x_1758_);
lean_closure_set(v___f_1783_, 11, v_i_1684_);
lean_closure_set(v___f_1783_, 12, v_xs_1685_);
lean_closure_set(v___f_1783_, 13, v_inst_1676_);
lean_closure_set(v___f_1783_, 14, v_inst_1677_);
lean_closure_set(v___f_1783_, 15, v_inst_1678_);
lean_closure_set(v___f_1783_, 16, v_inst_1679_);
lean_closure_set(v___f_1783_, 17, v_info_1680_);
lean_closure_set(v___f_1783_, 18, v_fixed_1681_);
lean_closure_set(v___f_1783_, 19, v_used_1682_);
lean_closure_set(v___f_1783_, 20, v_body_1754_);
lean_closure_set(v___f_1783_, 21, v_toBind_1734_);
lean_closure_set(v___f_1783_, 22, v_withNewLemmas_1780_);
v___f_1784_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9), 2, 1);
lean_closure_set(v___f_1784_, 0, v___f_1783_);
v___x_1785_ = lean_box(v___x_1738_);
lean_inc_ref(v_toMonadRef_1729_);
lean_inc_ref(v_val_1759_);
lean_inc_ref(v___f_1784_);
v___f_1786_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed), 19, 18);
lean_closure_set(v___f_1786_, 0, v_level_1757_);
lean_closure_set(v___f_1786_, 1, v___x_1760_);
lean_closure_set(v___f_1786_, 2, v_type_1752_);
lean_closure_set(v___f_1786_, 3, v_value_1753_);
lean_closure_set(v___f_1786_, 4, v___x_1778_);
lean_closure_set(v___f_1786_, 5, v_toPure_1735_);
lean_closure_set(v___f_1786_, 6, v_toBind_1734_);
lean_closure_set(v___f_1786_, 7, v___f_1784_);
lean_closure_set(v___f_1786_, 8, v_xs_1685_);
lean_closure_set(v___f_1786_, 9, v___x_1785_);
lean_closure_set(v___f_1786_, 10, v___f_1784_);
lean_closure_set(v___f_1786_, 11, v_declName_1751_);
lean_closure_set(v___f_1786_, 12, v_val_1759_);
lean_closure_set(v___f_1786_, 13, v___x_1725_);
lean_closure_set(v___f_1786_, 14, v___x_1726_);
lean_closure_set(v___f_1786_, 15, v_toMonadRef_1729_);
lean_closure_set(v___f_1786_, 16, v___x_1736_);
lean_closure_set(v___f_1786_, 17, v_inst_1677_);
v___x_1787_ = lean_apply_1(v_simp_1781_, v_val_1759_);
v___x_1788_ = lean_apply_4(v_toBind_1734_, lean_box(0), lean_box(0), v___x_1787_, v___f_1786_);
return v___x_1788_;
}
else
{
uint8_t v___x_1789_; 
lean_dec(v___x_1746_);
v___x_1789_ = lean_unbox(v___x_1778_);
v___y_1764_ = v___x_1775_;
v___y_1765_ = v___x_1789_;
goto v___jp_1763_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_1683_, 4);
lean_dec(v_toPure_1735_);
lean_dec(v_toBind_1734_);
lean_dec_ref(v___x_1725_);
lean_dec_ref(v_xs_1685_);
lean_dec(v_i_1684_);
lean_dec_ref(v_used_1682_);
lean_dec_ref(v_fixed_1681_);
lean_dec_ref(v_info_1680_);
lean_dec_ref(v_inst_1679_);
lean_dec_ref(v_inst_1678_);
lean_dec(v_inst_1677_);
lean_dec_ref(v_inst_1676_);
goto v___jp_1747_;
}
}
else
{
lean_dec(v_toPure_1735_);
lean_dec(v_toBind_1734_);
lean_dec_ref(v___x_1725_);
lean_dec_ref(v_xs_1685_);
lean_dec(v_i_1684_);
lean_dec_ref(v_e_1683_);
lean_dec_ref(v_used_1682_);
lean_dec_ref(v_fixed_1681_);
lean_dec_ref(v_info_1680_);
lean_dec_ref(v_inst_1679_);
lean_dec_ref(v_inst_1678_);
lean_dec(v_inst_1677_);
lean_dec_ref(v_inst_1676_);
goto v___jp_1747_;
}
v___jp_1747_:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15);
v___x_1749_ = l_panic___redArg(v___x_1746_, v___x_1748_);
lean_dec(v___x_1746_);
return v___x_1749_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(lean_object* v___x_1806_, lean_object* v_declName_1807_, lean_object* v_type_1808_, lean_object* v_value_1809_, lean_object* v_us_1810_, lean_object* v___x_1811_, uint8_t v___x_1812_, lean_object* v_toPure_1813_, lean_object* v_i_1814_, lean_object* v_xs_1815_, lean_object* v_inst_1816_, lean_object* v_inst_1817_, lean_object* v_inst_1818_, lean_object* v_inst_1819_, lean_object* v_info_1820_, lean_object* v_fixed_1821_, lean_object* v_used_1822_, lean_object* v_body_1823_, lean_object* v_toBind_1824_, lean_object* v_____r_1825_){
_start:
{
lean_object* v___x_1826_; lean_object* v_x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___f_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1826_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1));
v_x_1827_ = l_Lean_mkConst(v___x_1826_, v___x_1806_);
v___x_1828_ = lean_unsigned_to_nat(1u);
v___x_1829_ = lean_box(v___x_1812_);
v___f_1830_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed), 9, 8);
lean_closure_set(v___f_1830_, 0, v___x_1828_);
lean_closure_set(v___f_1830_, 1, v_declName_1807_);
lean_closure_set(v___f_1830_, 2, v_type_1808_);
lean_closure_set(v___f_1830_, 3, v_value_1809_);
lean_closure_set(v___f_1830_, 4, v_us_1810_);
lean_closure_set(v___f_1830_, 5, v___x_1811_);
lean_closure_set(v___f_1830_, 6, v___x_1829_);
lean_closure_set(v___f_1830_, 7, v_toPure_1813_);
v___x_1831_ = lean_nat_add(v_i_1814_, v___x_1828_);
v___x_1832_ = lean_array_push(v_xs_1815_, v_x_1827_);
v___x_1833_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1816_, v_inst_1817_, v_inst_1818_, v_inst_1819_, v_info_1820_, v_fixed_1821_, v_used_1822_, v_body_1823_, v___x_1831_, v___x_1832_);
v___x_1834_ = lean_apply_4(v_toBind_1824_, lean_box(0), lean_box(0), v___x_1833_, v___f_1830_);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux(lean_object* v_m_1835_, lean_object* v_inst_1836_, lean_object* v_inst_1837_, lean_object* v_inst_1838_, lean_object* v_inst_1839_, lean_object* v_info_1840_, lean_object* v_fixed_1841_, lean_object* v_used_1842_, lean_object* v_e_1843_, lean_object* v_i_1844_, lean_object* v_xs_1845_){
_start:
{
lean_object* v___x_1846_; 
v___x_1846_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1836_, v_inst_1837_, v_inst_1838_, v_inst_1839_, v_info_1840_, v_fixed_1841_, v_used_1842_, v_e_1843_, v_i_1844_, v_xs_1845_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx(uint8_t v_x_1847_){
_start:
{
switch(v_x_1847_)
{
case 0:
{
lean_object* v___x_1848_; 
v___x_1848_ = lean_unsigned_to_nat(0u);
return v___x_1848_;
}
case 1:
{
lean_object* v___x_1849_; 
v___x_1849_ = lean_unsigned_to_nat(1u);
return v___x_1849_;
}
default: 
{
lean_object* v___x_1850_; 
v___x_1850_ = lean_unsigned_to_nat(2u);
return v___x_1850_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx___boxed(lean_object* v_x_1851_){
_start:
{
uint8_t v_x_boxed_1852_; lean_object* v_res_1853_; 
v_x_boxed_1852_ = lean_unbox(v_x_1851_);
v_res_1853_ = l_Lean_Meta_ZetaUnusedMode_ctorIdx(v_x_boxed_1852_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(lean_object* v_k_1854_){
_start:
{
lean_inc(v_k_1854_);
return v_k_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg___boxed(lean_object* v_k_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(v_k_1855_);
lean_dec(v_k_1855_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim(lean_object* v_motive_1857_, lean_object* v_ctorIdx_1858_, uint8_t v_t_1859_, lean_object* v_h_1860_, lean_object* v_k_1861_){
_start:
{
lean_inc(v_k_1861_);
return v_k_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___boxed(lean_object* v_motive_1862_, lean_object* v_ctorIdx_1863_, lean_object* v_t_1864_, lean_object* v_h_1865_, lean_object* v_k_1866_){
_start:
{
uint8_t v_t_boxed_1867_; lean_object* v_res_1868_; 
v_t_boxed_1867_ = lean_unbox(v_t_1864_);
v_res_1868_ = l_Lean_Meta_ZetaUnusedMode_ctorElim(v_motive_1862_, v_ctorIdx_1863_, v_t_boxed_1867_, v_h_1865_, v_k_1866_);
lean_dec(v_k_1866_);
lean_dec(v_ctorIdx_1863_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(lean_object* v_no_1869_){
_start:
{
lean_inc(v_no_1869_);
return v_no_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg___boxed(lean_object* v_no_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(v_no_1870_);
lean_dec(v_no_1870_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim(lean_object* v_motive_1872_, uint8_t v_t_1873_, lean_object* v_h_1874_, lean_object* v_no_1875_){
_start:
{
lean_inc(v_no_1875_);
return v_no_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___boxed(lean_object* v_motive_1876_, lean_object* v_t_1877_, lean_object* v_h_1878_, lean_object* v_no_1879_){
_start:
{
uint8_t v_t_boxed_1880_; lean_object* v_res_1881_; 
v_t_boxed_1880_ = lean_unbox(v_t_1877_);
v_res_1881_ = l_Lean_Meta_ZetaUnusedMode_no_elim(v_motive_1876_, v_t_boxed_1880_, v_h_1878_, v_no_1879_);
lean_dec(v_no_1879_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(lean_object* v_singlePass_1882_){
_start:
{
lean_inc(v_singlePass_1882_);
return v_singlePass_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg___boxed(lean_object* v_singlePass_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(v_singlePass_1883_);
lean_dec(v_singlePass_1883_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim(lean_object* v_motive_1885_, uint8_t v_t_1886_, lean_object* v_h_1887_, lean_object* v_singlePass_1888_){
_start:
{
lean_inc(v_singlePass_1888_);
return v_singlePass_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___boxed(lean_object* v_motive_1889_, lean_object* v_t_1890_, lean_object* v_h_1891_, lean_object* v_singlePass_1892_){
_start:
{
uint8_t v_t_boxed_1893_; lean_object* v_res_1894_; 
v_t_boxed_1893_ = lean_unbox(v_t_1890_);
v_res_1894_ = l_Lean_Meta_ZetaUnusedMode_singlePass_elim(v_motive_1889_, v_t_boxed_1893_, v_h_1891_, v_singlePass_1892_);
lean_dec(v_singlePass_1892_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(lean_object* v_twoPasses_1895_){
_start:
{
lean_inc(v_twoPasses_1895_);
return v_twoPasses_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg___boxed(lean_object* v_twoPasses_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(v_twoPasses_1896_);
lean_dec(v_twoPasses_1896_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(lean_object* v_motive_1898_, uint8_t v_t_1899_, lean_object* v_h_1900_, lean_object* v_twoPasses_1901_){
_start:
{
lean_inc(v_twoPasses_1901_);
return v_twoPasses_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___boxed(lean_object* v_motive_1902_, lean_object* v_t_1903_, lean_object* v_h_1904_, lean_object* v_twoPasses_1905_){
_start:
{
uint8_t v_t_boxed_1906_; lean_object* v_res_1907_; 
v_t_boxed_1906_ = lean_unbox(v_t_1903_);
v_res_1907_ = l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(v_motive_1902_, v_t_boxed_1906_, v_h_1904_, v_twoPasses_1905_);
lean_dec(v_twoPasses_1905_);
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(lean_object* v_k_1908_, lean_object* v_b_1909_, lean_object* v_c_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_){
_start:
{
lean_object* v___x_1916_; 
lean_inc(v___y_1914_);
lean_inc_ref(v___y_1913_);
lean_inc(v___y_1912_);
lean_inc_ref(v___y_1911_);
v___x_1916_ = lean_apply_7(v_k_1908_, v_b_1909_, v_c_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, lean_box(0));
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed(lean_object* v_k_1917_, lean_object* v_b_1918_, lean_object* v_c_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(v_k_1917_, v_b_1918_, v_c_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(lean_object* v_e_1926_, lean_object* v_k_1927_, uint8_t v_cleanupAnnotations_1928_, uint8_t v_preserveNondepLet_1929_, uint8_t v_nondepLetOnly_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v___f_1936_; uint8_t v___x_1937_; uint8_t v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___f_1936_ = lean_alloc_closure((void*)(l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1936_, 0, v_k_1927_);
v___x_1937_ = 0;
v___x_1938_ = 1;
v___x_1939_ = lean_box(0);
v___x_1940_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1926_, v___x_1937_, v___x_1938_, v_preserveNondepLet_1929_, v_nondepLetOnly_1930_, v___x_1939_, v___f_1936_, v_cleanupAnnotations_1928_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1940_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1940_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
if (v_isShared_1944_ == 0)
{
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1941_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
else
{
lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1956_; 
v_a_1949_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1951_ = v___x_1940_;
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1940_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1954_; 
if (v_isShared_1952_ == 0)
{
v___x_1954_ = v___x_1951_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v_a_1949_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
return v___x_1954_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___boxed(lean_object* v_e_1957_, lean_object* v_k_1958_, lean_object* v_cleanupAnnotations_1959_, lean_object* v_preserveNondepLet_1960_, lean_object* v_nondepLetOnly_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1967_; uint8_t v_preserveNondepLet_boxed_1968_; uint8_t v_nondepLetOnly_boxed_1969_; lean_object* v_res_1970_; 
v_cleanupAnnotations_boxed_1967_ = lean_unbox(v_cleanupAnnotations_1959_);
v_preserveNondepLet_boxed_1968_ = lean_unbox(v_preserveNondepLet_1960_);
v_nondepLetOnly_boxed_1969_ = lean_unbox(v_nondepLetOnly_1961_);
v_res_1970_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_1957_, v_k_1958_, v_cleanupAnnotations_boxed_1967_, v_preserveNondepLet_boxed_1968_, v_nondepLetOnly_boxed_1969_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(lean_object* v_00_u03b1_1971_, lean_object* v_e_1972_, lean_object* v_k_1973_, uint8_t v_cleanupAnnotations_1974_, uint8_t v_preserveNondepLet_1975_, uint8_t v_nondepLetOnly_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
lean_object* v___x_1982_; 
v___x_1982_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_1972_, v_k_1973_, v_cleanupAnnotations_1974_, v_preserveNondepLet_1975_, v_nondepLetOnly_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___boxed(lean_object* v_00_u03b1_1983_, lean_object* v_e_1984_, lean_object* v_k_1985_, lean_object* v_cleanupAnnotations_1986_, lean_object* v_preserveNondepLet_1987_, lean_object* v_nondepLetOnly_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1994_; uint8_t v_preserveNondepLet_boxed_1995_; uint8_t v_nondepLetOnly_boxed_1996_; lean_object* v_res_1997_; 
v_cleanupAnnotations_boxed_1994_ = lean_unbox(v_cleanupAnnotations_1986_);
v_preserveNondepLet_boxed_1995_ = lean_unbox(v_preserveNondepLet_1987_);
v_nondepLetOnly_boxed_1996_ = lean_unbox(v_nondepLetOnly_1988_);
v_res_1997_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(v_00_u03b1_1983_, v_e_1984_, v_k_1985_, v_cleanupAnnotations_boxed_1994_, v_preserveNondepLet_boxed_1995_, v_nondepLetOnly_boxed_1996_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(lean_object* v_xs_1998_, lean_object* v_a_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_){
_start:
{
lean_object* v_snd_2004_; lean_object* v_fst_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2060_; 
v_snd_2004_ = lean_ctor_get(v_a_1999_, 1);
v_fst_2005_ = lean_ctor_get(v_a_1999_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v_a_1999_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2007_ = v_a_1999_;
v_isShared_2008_ = v_isSharedCheck_2060_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_snd_2004_);
lean_inc(v_fst_2005_);
lean_dec(v_a_1999_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2060_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v_fst_2009_; lean_object* v_snd_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2059_; 
v_fst_2009_ = lean_ctor_get(v_snd_2004_, 0);
v_snd_2010_ = lean_ctor_get(v_snd_2004_, 1);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_snd_2004_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2012_ = v_snd_2004_;
v_isShared_2013_ = v_isSharedCheck_2059_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_snd_2010_);
lean_inc(v_fst_2009_);
lean_dec(v_snd_2004_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2059_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2014_; uint8_t v___x_2015_; 
v___x_2014_ = lean_unsigned_to_nat(0u);
v___x_2015_ = lean_nat_dec_lt(v___x_2014_, v_snd_2010_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2017_; 
if (v_isShared_2013_ == 0)
{
v___x_2017_ = v___x_2012_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_fst_2009_);
lean_ctor_set(v_reuseFailAlloc_2022_, 1, v_snd_2010_);
v___x_2017_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
lean_object* v___x_2019_; 
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 1, v___x_2017_);
v___x_2019_ = v___x_2007_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_fst_2005_);
lean_ctor_set(v_reuseFailAlloc_2021_, 1, v___x_2017_);
v___x_2019_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
lean_object* v___x_2020_; 
v___x_2020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
return v___x_2020_;
}
}
}
else
{
lean_object* v_fvarSet_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; uint8_t v___x_2029_; 
v_fvarSet_2023_ = lean_ctor_get(v_fst_2005_, 1);
v___x_2024_ = l_Lean_instInhabitedExpr;
v___x_2025_ = lean_unsigned_to_nat(1u);
v___x_2026_ = lean_nat_sub(v_snd_2010_, v___x_2025_);
lean_dec(v_snd_2010_);
v___x_2027_ = lean_array_get_borrowed(v___x_2024_, v_xs_1998_, v___x_2026_);
v___x_2028_ = l_Lean_Expr_fvarId_x21(v___x_2027_);
v___x_2029_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v___x_2028_, v_fvarSet_2023_);
if (v___x_2029_ == 0)
{
lean_object* v___x_2031_; 
lean_dec(v___x_2028_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 1, v___x_2026_);
v___x_2031_ = v___x_2012_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_fst_2009_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v___x_2026_);
v___x_2031_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
lean_object* v___x_2033_; 
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 1, v___x_2031_);
v___x_2033_ = v___x_2007_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_fst_2005_);
lean_ctor_set(v_reuseFailAlloc_2035_, 1, v___x_2031_);
v___x_2033_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
v_a_1999_ = v___x_2033_;
goto _start;
}
}
}
else
{
lean_object* v___x_2037_; 
v___x_2037_ = l_Lean_FVarId_getDecl___redArg(v___x_2028_, v___y_2000_, v___y_2001_, v___y_2002_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2045_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
lean_inc(v_a_2038_);
lean_dec_ref_known(v___x_2037_, 1);
v___x_2039_ = l_Lean_LocalDecl_type(v_a_2038_);
v___x_2040_ = l_Lean_collectFVars(v_fst_2005_, v___x_2039_);
v___x_2041_ = l_Lean_LocalDecl_value(v_a_2038_, v___x_2015_);
lean_dec(v_a_2038_);
v___x_2042_ = l_Lean_collectFVars(v___x_2040_, v___x_2041_);
lean_inc(v___x_2027_);
v___x_2043_ = lean_array_push(v_fst_2009_, v___x_2027_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 1, v___x_2026_);
lean_ctor_set(v___x_2012_, 0, v___x_2043_);
v___x_2045_ = v___x_2012_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2050_, 1, v___x_2026_);
v___x_2045_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
lean_object* v___x_2047_; 
if (v_isShared_2008_ == 0)
{
lean_ctor_set(v___x_2007_, 1, v___x_2045_);
lean_ctor_set(v___x_2007_, 0, v___x_2042_);
v___x_2047_ = v___x_2007_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v___x_2042_);
lean_ctor_set(v_reuseFailAlloc_2049_, 1, v___x_2045_);
v___x_2047_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
v_a_1999_ = v___x_2047_;
goto _start;
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
lean_dec(v___x_2026_);
lean_del_object(v___x_2012_);
lean_dec(v_fst_2009_);
lean_del_object(v___x_2007_);
lean_dec(v_fst_2005_);
v_a_2051_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_2037_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2037_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg___boxed(lean_object* v_xs_2061_, lean_object* v_a_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2061_, v_a_2062_, v___y_2063_, v___y_2064_, v___y_2065_);
lean_dec(v___y_2065_);
lean_dec_ref(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec_ref(v_xs_2061_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0(lean_object* v___x_2068_, lean_object* v_e_2069_, lean_object* v_xs_2070_, lean_object* v_body_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v_s_2080_; lean_object* v_i_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2077_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1);
v___x_2078_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__2));
v___x_2079_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2077_);
lean_ctor_set(v___x_2079_, 1, v___x_2068_);
lean_ctor_set(v___x_2079_, 2, v___x_2078_);
lean_inc_ref(v_body_2071_);
v_s_2080_ = l_Lean_collectFVars(v___x_2079_, v_body_2071_);
v_i_2081_ = lean_array_get_size(v_xs_2070_);
v___x_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2078_);
lean_ctor_set(v___x_2082_, 1, v_i_2081_);
v___x_2083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2083_, 0, v_s_2080_);
lean_ctor_set(v___x_2083_, 1, v___x_2082_);
v___x_2084_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2070_, v___x_2083_, v___y_2072_, v___y_2074_, v___y_2075_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2100_; 
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2087_ = v___x_2084_;
v_isShared_2088_ = v_isSharedCheck_2100_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2084_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2100_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v_snd_2089_; lean_object* v_fst_2090_; lean_object* v___x_2091_; uint8_t v___x_2092_; 
v_snd_2089_ = lean_ctor_get(v_a_2085_, 1);
lean_inc(v_snd_2089_);
lean_dec(v_a_2085_);
v_fst_2090_ = lean_ctor_get(v_snd_2089_, 0);
lean_inc(v_fst_2090_);
lean_dec(v_snd_2089_);
v___x_2091_ = lean_array_get_size(v_fst_2090_);
v___x_2092_ = lean_nat_dec_eq(v___x_2091_, v_i_2081_);
if (v___x_2092_ == 0)
{
uint8_t v___x_2093_; lean_object* v___x_2094_; uint8_t v___x_2095_; lean_object* v___x_2096_; 
lean_del_object(v___x_2087_);
lean_dec_ref(v_e_2069_);
v___x_2093_ = 1;
v___x_2094_ = l_Array_reverse___redArg(v_fst_2090_);
v___x_2095_ = 1;
v___x_2096_ = l_Lean_Meta_mkLetFVars(v___x_2094_, v_body_2071_, v___x_2093_, v___x_2092_, v___x_2095_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
return v___x_2096_;
}
else
{
lean_object* v___x_2098_; 
lean_dec(v_fst_2090_);
lean_dec_ref(v_body_2071_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 0, v_e_2069_);
v___x_2098_ = v___x_2087_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_e_2069_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
else
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
lean_dec_ref(v_body_2071_);
lean_dec_ref(v_e_2069_);
v_a_2101_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2084_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2084_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0___boxed(lean_object* v___x_2109_, lean_object* v_e_2110_, lean_object* v_xs_2111_, lean_object* v_body_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l_Lean_Meta_zetaUnused___lam__0(v___x_2109_, v_e_2110_, v_xs_2111_, v_body_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_);
lean_dec(v___y_2116_);
lean_dec_ref(v___y_2115_);
lean_dec(v___y_2114_);
lean_dec_ref(v___y_2113_);
lean_dec_ref(v_xs_2111_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused(lean_object* v_e_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_){
_start:
{
lean_object* v___x_2125_; lean_object* v___f_2126_; uint8_t v___x_2127_; uint8_t v___x_2128_; lean_object* v___x_2129_; 
v___x_2125_ = lean_box(1);
lean_inc_ref(v_e_2119_);
v___f_2126_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaUnused___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2126_, 0, v___x_2125_);
lean_closure_set(v___f_2126_, 1, v_e_2119_);
v___x_2127_ = 0;
v___x_2128_ = 1;
v___x_2129_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_2119_, v___f_2126_, v___x_2127_, v___x_2128_, v___x_2127_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_);
return v___x_2129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___boxed(lean_object* v_e_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l_Lean_Meta_zetaUnused(v_e_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_);
lean_dec(v_a_2134_);
lean_dec_ref(v_a_2133_);
lean_dec(v_a_2132_);
lean_dec_ref(v_a_2131_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0(lean_object* v_xs_2137_, lean_object* v_inst_2138_, lean_object* v_a_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v___x_2145_; 
v___x_2145_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2137_, v_a_2139_, v___y_2140_, v___y_2142_, v___y_2143_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___boxed(lean_object* v_xs_2146_, lean_object* v_inst_2147_, lean_object* v_a_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0(v_xs_2146_, v_inst_2147_, v_a_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec_ref(v_xs_2146_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(lean_object* v_u_2159_, lean_object* v_source_2160_, lean_object* v_result_2161_, uint8_t v_keepUnused_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_){
_start:
{
uint8_t v_modified_2168_; 
v_modified_2168_ = lean_ctor_get_uint8(v_result_2161_, sizeof(void*)*5);
if (v_modified_2168_ == 0)
{
if (v_keepUnused_2162_ == 0)
{
lean_object* v_exprType_2169_; lean_object* v___x_2170_; 
v_exprType_2169_ = lean_ctor_get(v_result_2161_, 1);
lean_inc_ref(v_exprType_2169_);
lean_dec_ref(v_result_2161_);
lean_inc_ref(v_source_2160_);
v___x_2170_ = l_Lean_Meta_zetaUnused(v_source_2160_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2189_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2173_ = v___x_2170_;
v_isShared_2174_ = v_isSharedCheck_2189_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2170_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2189_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
uint8_t v___x_2175_; 
v___x_2175_ = lean_expr_eqv(v_a_2171_, v_source_2160_);
lean_dec_ref(v_source_2160_);
if (v___x_2175_ == 0)
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2183_; 
v___x_2176_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_2177_ = lean_box(0);
v___x_2178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2178_, 0, v_u_2159_);
lean_ctor_set(v___x_2178_, 1, v___x_2177_);
v___x_2179_ = l_Lean_mkConst(v___x_2176_, v___x_2178_);
lean_inc(v_a_2171_);
v___x_2180_ = l_Lean_mkAppB(v___x_2179_, v_exprType_2169_, v_a_2171_);
v___x_2181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2181_, 0, v_a_2171_);
lean_ctor_set(v___x_2181_, 1, v___x_2180_);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v___x_2181_);
v___x_2183_ = v___x_2173_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v___x_2181_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
else
{
lean_object* v___x_2185_; lean_object* v___x_2187_; 
lean_dec(v_a_2171_);
lean_dec_ref(v_exprType_2169_);
lean_dec(v_u_2159_);
v___x_2185_ = lean_box(0);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v___x_2185_);
v___x_2187_ = v___x_2173_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v___x_2185_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec_ref(v_exprType_2169_);
lean_dec_ref(v_source_2160_);
lean_dec(v_u_2159_);
v_a_2190_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2170_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2170_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
else
{
lean_object* v___x_2198_; lean_object* v___x_2199_; 
lean_dec_ref(v_result_2161_);
lean_dec_ref(v_source_2160_);
lean_dec(v_u_2159_);
v___x_2198_ = lean_box(0);
v___x_2199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2198_);
return v___x_2199_;
}
}
else
{
lean_object* v_expr_2200_; lean_object* v_exprType_2201_; lean_object* v_exprInit_2202_; lean_object* v_exprResult_2203_; lean_object* v_proof_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v_proof_2212_; 
v_expr_2200_ = lean_ctor_get(v_result_2161_, 0);
lean_inc_ref(v_expr_2200_);
v_exprType_2201_ = lean_ctor_get(v_result_2161_, 1);
lean_inc_ref_n(v_exprType_2201_, 3);
v_exprInit_2202_ = lean_ctor_get(v_result_2161_, 2);
lean_inc_ref(v_exprInit_2202_);
v_exprResult_2203_ = lean_ctor_get(v_result_2161_, 3);
lean_inc_ref_n(v_exprResult_2203_, 2);
v_proof_2204_ = lean_ctor_get(v_result_2161_, 4);
lean_inc_ref(v_proof_2204_);
lean_dec_ref(v_result_2161_);
v___x_2205_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5));
v___x_2206_ = lean_box(0);
v___x_2207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2207_, 0, v_u_2159_);
lean_ctor_set(v___x_2207_, 1, v___x_2206_);
lean_inc_ref(v___x_2207_);
v___x_2208_ = l_Lean_mkConst(v___x_2205_, v___x_2207_);
lean_inc_ref(v___x_2208_);
v___x_2209_ = l_Lean_mkApp3(v___x_2208_, v_exprType_2201_, v_exprInit_2202_, v_expr_2200_);
v___x_2210_ = l_Lean_Meta_mkExpectedPropHint(v_proof_2204_, v___x_2209_);
lean_inc_ref(v_source_2160_);
v___x_2211_ = l_Lean_mkApp3(v___x_2208_, v_exprType_2201_, v_source_2160_, v_exprResult_2203_);
v_proof_2212_ = l_Lean_Meta_mkExpectedPropHint(v___x_2210_, v___x_2211_);
if (v_keepUnused_2162_ == 0)
{
lean_object* v___x_2213_; 
lean_inc_ref(v_exprResult_2203_);
v___x_2213_ = l_Lean_Meta_zetaUnused(v_exprResult_2203_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2233_; 
v_a_2214_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2216_ = v___x_2213_;
v_isShared_2217_ = v_isSharedCheck_2233_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2213_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2233_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
uint8_t v___x_2218_; 
v___x_2218_ = lean_expr_eqv(v_a_2214_, v_exprResult_2203_);
if (v___x_2218_ == 0)
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2227_; 
v___x_2219_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1));
lean_inc_ref(v___x_2207_);
v___x_2220_ = l_Lean_mkConst(v___x_2219_, v___x_2207_);
v___x_2221_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_2222_ = l_Lean_mkConst(v___x_2221_, v___x_2207_);
lean_inc_n(v_a_2214_, 2);
lean_inc_ref(v_exprType_2201_);
v___x_2223_ = l_Lean_mkAppB(v___x_2222_, v_exprType_2201_, v_a_2214_);
v___x_2224_ = l_Lean_mkApp6(v___x_2220_, v_exprType_2201_, v_source_2160_, v_exprResult_2203_, v_a_2214_, v_proof_2212_, v___x_2223_);
v___x_2225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2225_, 0, v_a_2214_);
lean_ctor_set(v___x_2225_, 1, v___x_2224_);
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 0, v___x_2225_);
v___x_2227_ = v___x_2216_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v___x_2225_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
else
{
lean_object* v___x_2229_; lean_object* v___x_2231_; 
lean_dec(v_a_2214_);
lean_dec_ref_known(v___x_2207_, 2);
lean_dec_ref(v_exprType_2201_);
lean_dec_ref(v_source_2160_);
v___x_2229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2229_, 0, v_exprResult_2203_);
lean_ctor_set(v___x_2229_, 1, v_proof_2212_);
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 0, v___x_2229_);
v___x_2231_ = v___x_2216_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v___x_2229_);
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
else
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
lean_dec_ref(v_proof_2212_);
lean_dec_ref_known(v___x_2207_, 2);
lean_dec_ref(v_exprResult_2203_);
lean_dec_ref(v_exprType_2201_);
lean_dec_ref(v_source_2160_);
v_a_2234_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2213_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2213_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
}
else
{
lean_object* v___x_2242_; lean_object* v___x_2243_; 
lean_dec_ref_known(v___x_2207_, 2);
lean_dec_ref(v_exprType_2201_);
lean_dec_ref(v_source_2160_);
v___x_2242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2242_, 0, v_exprResult_2203_);
lean_ctor_set(v___x_2242_, 1, v_proof_2212_);
v___x_2243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2243_, 0, v___x_2242_);
return v___x_2243_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed(lean_object* v_u_2244_, lean_object* v_source_2245_, lean_object* v_result_2246_, lean_object* v_keepUnused_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_){
_start:
{
uint8_t v_keepUnused_boxed_2253_; lean_object* v_res_2254_; 
v_keepUnused_boxed_2253_ = lean_unbox(v_keepUnused_2247_);
v_res_2254_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(v_u_2244_, v_source_2245_, v_result_2246_, v_keepUnused_boxed_2253_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_);
lean_dec(v_a_2251_);
lean_dec_ref(v_a_2250_);
lean_dec(v_a_2249_);
lean_dec_ref(v_a_2248_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0(lean_object* v_level_2255_, lean_object* v_e_2256_, lean_object* v_inst_2257_, uint8_t v_zetaUnusedMode_2258_, uint8_t v___x_2259_, uint8_t v___x_2260_, lean_object* v_r_2261_){
_start:
{
uint8_t v___y_2263_; 
switch(v_zetaUnusedMode_2258_)
{
case 0:
{
v___y_2263_ = v___x_2259_;
goto v___jp_2262_;
}
case 1:
{
v___y_2263_ = v___x_2259_;
goto v___jp_2262_;
}
default: 
{
v___y_2263_ = v___x_2260_;
goto v___jp_2262_;
}
}
v___jp_2262_:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2264_ = lean_box(v___y_2263_);
v___x_2265_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed), 9, 4);
lean_closure_set(v___x_2265_, 0, v_level_2255_);
lean_closure_set(v___x_2265_, 1, v_e_2256_);
lean_closure_set(v___x_2265_, 2, v_r_2261_);
lean_closure_set(v___x_2265_, 3, v___x_2264_);
v___x_2266_ = lean_apply_2(v_inst_2257_, lean_box(0), v___x_2265_);
return v___x_2266_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed(lean_object* v_level_2267_, lean_object* v_e_2268_, lean_object* v_inst_2269_, lean_object* v_zetaUnusedMode_2270_, lean_object* v___x_2271_, lean_object* v___x_2272_, lean_object* v_r_2273_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2274_; uint8_t v___x_289__boxed_2275_; uint8_t v___x_290__boxed_2276_; lean_object* v_res_2277_; 
v_zetaUnusedMode_boxed_2274_ = lean_unbox(v_zetaUnusedMode_2270_);
v___x_289__boxed_2275_ = lean_unbox(v___x_2271_);
v___x_290__boxed_2276_ = lean_unbox(v___x_2272_);
v_res_2277_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__0(v_level_2267_, v_e_2268_, v_inst_2269_, v_zetaUnusedMode_boxed_2274_, v___x_289__boxed_2275_, v___x_290__boxed_2276_, v_r_2273_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1(lean_object* v___x_2278_, lean_object* v_inst_2279_, lean_object* v_inst_2280_, lean_object* v_inst_2281_, lean_object* v_inst_2282_, lean_object* v_info_2283_, lean_object* v_e_2284_, lean_object* v___x_2285_, lean_object* v_toBind_2286_, lean_object* v___f_2287_, lean_object* v_____x_2288_){
_start:
{
lean_object* v_fst_2289_; lean_object* v_snd_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v_fst_2289_ = lean_ctor_get(v_____x_2288_, 0);
lean_inc(v_fst_2289_);
v_snd_2290_ = lean_ctor_get(v_____x_2288_, 1);
lean_inc(v_snd_2290_);
lean_dec_ref(v_____x_2288_);
v___x_2291_ = lean_mk_empty_array_with_capacity(v___x_2278_);
v___x_2292_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_2279_, v_inst_2280_, v_inst_2281_, v_inst_2282_, v_info_2283_, v_fst_2289_, v_snd_2290_, v_e_2284_, v___x_2285_, v___x_2291_);
v___x_2293_ = lean_apply_4(v_toBind_2286_, lean_box(0), lean_box(0), v___x_2292_, v___f_2287_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed(lean_object* v___x_2294_, lean_object* v_inst_2295_, lean_object* v_inst_2296_, lean_object* v_inst_2297_, lean_object* v_inst_2298_, lean_object* v_info_2299_, lean_object* v_e_2300_, lean_object* v___x_2301_, lean_object* v_toBind_2302_, lean_object* v___f_2303_, lean_object* v_____x_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__1(v___x_2294_, v_inst_2295_, v_inst_2296_, v_inst_2297_, v_inst_2298_, v_info_2299_, v_e_2300_, v___x_2301_, v_toBind_2302_, v___f_2303_, v_____x_2304_);
lean_dec(v___x_2294_);
return v_res_2305_;
}
}
static lean_object* _init_l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2308_ = ((lean_object*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1));
v___x_2309_ = lean_unsigned_to_nat(2u);
v___x_2310_ = lean_unsigned_to_nat(456u);
v___x_2311_ = ((lean_object*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0));
v___x_2312_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_2313_ = l_mkPanicMessageWithDecl(v___x_2312_, v___x_2311_, v___x_2310_, v___x_2309_, v___x_2308_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2(lean_object* v_e_2314_, lean_object* v_inst_2315_, uint8_t v_zetaUnusedMode_2316_, lean_object* v_inst_2317_, lean_object* v_inst_2318_, lean_object* v_inst_2319_, lean_object* v_toBind_2320_, lean_object* v___x_2321_, lean_object* v_info_2322_){
_start:
{
lean_object* v_haveInfo_2323_; lean_object* v_level_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; uint8_t v___x_2327_; 
v_haveInfo_2323_ = lean_ctor_get(v_info_2322_, 0);
v_level_2324_ = lean_ctor_get(v_info_2322_, 5);
v___x_2325_ = lean_array_get_size(v_haveInfo_2323_);
v___x_2326_ = lean_unsigned_to_nat(0u);
v___x_2327_ = lean_nat_dec_eq(v___x_2325_, v___x_2326_);
if (v___x_2327_ == 0)
{
uint8_t v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___f_2332_; lean_object* v___f_2333_; uint8_t v___y_2335_; 
v___x_2328_ = 1;
v___x_2329_ = lean_box(v_zetaUnusedMode_2316_);
v___x_2330_ = lean_box(v___x_2328_);
v___x_2331_ = lean_box(v___x_2327_);
lean_inc_n(v_inst_2315_, 2);
lean_inc_ref(v_e_2314_);
lean_inc(v_level_2324_);
v___f_2332_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_2332_, 0, v_level_2324_);
lean_closure_set(v___f_2332_, 1, v_e_2314_);
lean_closure_set(v___f_2332_, 2, v_inst_2315_);
lean_closure_set(v___f_2332_, 3, v___x_2329_);
lean_closure_set(v___f_2332_, 4, v___x_2330_);
lean_closure_set(v___f_2332_, 5, v___x_2331_);
lean_inc(v_toBind_2320_);
lean_inc_ref(v_info_2322_);
v___f_2333_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed), 11, 10);
lean_closure_set(v___f_2333_, 0, v___x_2325_);
lean_closure_set(v___f_2333_, 1, v_inst_2317_);
lean_closure_set(v___f_2333_, 2, v_inst_2315_);
lean_closure_set(v___f_2333_, 3, v_inst_2318_);
lean_closure_set(v___f_2333_, 4, v_inst_2319_);
lean_closure_set(v___f_2333_, 5, v_info_2322_);
lean_closure_set(v___f_2333_, 6, v_e_2314_);
lean_closure_set(v___f_2333_, 7, v___x_2326_);
lean_closure_set(v___f_2333_, 8, v_toBind_2320_);
lean_closure_set(v___f_2333_, 9, v___f_2332_);
switch(v_zetaUnusedMode_2316_)
{
case 0:
{
v___y_2335_ = v___x_2328_;
goto v___jp_2334_;
}
case 2:
{
v___y_2335_ = v___x_2328_;
goto v___jp_2334_;
}
default: 
{
v___y_2335_ = v___x_2327_;
goto v___jp_2334_;
}
}
v___jp_2334_:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; 
v___x_2336_ = lean_box(v___y_2335_);
v___x_2337_ = lean_alloc_closure((void*)(l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed), 7, 2);
lean_closure_set(v___x_2337_, 0, v_info_2322_);
lean_closure_set(v___x_2337_, 1, v___x_2336_);
v___x_2338_ = lean_apply_2(v_inst_2315_, lean_box(0), v___x_2337_);
v___x_2339_ = lean_apply_4(v_toBind_2320_, lean_box(0), lean_box(0), v___x_2338_, v___f_2333_);
return v___x_2339_;
}
}
else
{
lean_object* v___x_2340_; lean_object* v___x_2341_; 
lean_dec_ref(v_info_2322_);
lean_dec(v_toBind_2320_);
lean_dec_ref(v_inst_2319_);
lean_dec_ref(v_inst_2318_);
lean_dec_ref(v_inst_2317_);
lean_dec(v_inst_2315_);
lean_dec_ref(v_e_2314_);
v___x_2340_ = lean_obj_once(&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2, &l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2_once, _init_l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2);
v___x_2341_ = l_panic___redArg(v___x_2321_, v___x_2340_);
return v___x_2341_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed(lean_object* v_e_2342_, lean_object* v_inst_2343_, lean_object* v_zetaUnusedMode_2344_, lean_object* v_inst_2345_, lean_object* v_inst_2346_, lean_object* v_inst_2347_, lean_object* v_toBind_2348_, lean_object* v___x_2349_, lean_object* v_info_2350_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2351_; lean_object* v_res_2352_; 
v_zetaUnusedMode_boxed_2351_ = lean_unbox(v_zetaUnusedMode_2344_);
v_res_2352_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__2(v_e_2342_, v_inst_2343_, v_zetaUnusedMode_boxed_2351_, v_inst_2345_, v_inst_2346_, v_inst_2347_, v_toBind_2348_, v___x_2349_, v_info_2350_);
lean_dec(v___x_2349_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg(lean_object* v_inst_2353_, lean_object* v_inst_2354_, lean_object* v_inst_2355_, lean_object* v_inst_2356_, lean_object* v_e_2357_, uint8_t v_zetaUnusedMode_2358_){
_start:
{
lean_object* v_toBind_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___f_2365_; lean_object* v___x_2366_; 
v_toBind_2359_ = lean_ctor_get(v_inst_2353_, 1);
lean_inc_n(v_toBind_2359_, 2);
v___x_2360_ = lean_box(0);
lean_inc_ref(v_e_2357_);
v___x_2361_ = lean_alloc_closure((void*)(l_Lean_Meta_getHaveTelescopeInfo___boxed), 6, 1);
lean_closure_set(v___x_2361_, 0, v_e_2357_);
lean_inc(v_inst_2354_);
v___x_2362_ = lean_apply_2(v_inst_2354_, lean_box(0), v___x_2361_);
lean_inc_ref(v_inst_2353_);
v___x_2363_ = l_instInhabitedOfMonad___redArg(v_inst_2353_, v___x_2360_);
v___x_2364_ = lean_box(v_zetaUnusedMode_2358_);
v___f_2365_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2365_, 0, v_e_2357_);
lean_closure_set(v___f_2365_, 1, v_inst_2354_);
lean_closure_set(v___f_2365_, 2, v___x_2364_);
lean_closure_set(v___f_2365_, 3, v_inst_2353_);
lean_closure_set(v___f_2365_, 4, v_inst_2355_);
lean_closure_set(v___f_2365_, 5, v_inst_2356_);
lean_closure_set(v___f_2365_, 6, v_toBind_2359_);
lean_closure_set(v___f_2365_, 7, v___x_2363_);
v___x_2366_ = lean_apply_4(v_toBind_2359_, lean_box(0), lean_box(0), v___x_2362_, v___f_2365_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___boxed(lean_object* v_inst_2367_, lean_object* v_inst_2368_, lean_object* v_inst_2369_, lean_object* v_inst_2370_, lean_object* v_e_2371_, lean_object* v_zetaUnusedMode_2372_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2373_; lean_object* v_res_2374_; 
v_zetaUnusedMode_boxed_2373_ = lean_unbox(v_zetaUnusedMode_2372_);
v_res_2374_ = l_Lean_Meta_simpHaveTelescope___redArg(v_inst_2367_, v_inst_2368_, v_inst_2369_, v_inst_2370_, v_e_2371_, v_zetaUnusedMode_boxed_2373_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope(lean_object* v_m_2375_, lean_object* v_inst_2376_, lean_object* v_inst_2377_, lean_object* v_inst_2378_, lean_object* v_inst_2379_, lean_object* v_e_2380_, uint8_t v_zetaUnusedMode_2381_){
_start:
{
lean_object* v___x_2382_; 
v___x_2382_ = l_Lean_Meta_simpHaveTelescope___redArg(v_inst_2376_, v_inst_2377_, v_inst_2378_, v_inst_2379_, v_e_2380_, v_zetaUnusedMode_2381_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___boxed(lean_object* v_m_2383_, lean_object* v_inst_2384_, lean_object* v_inst_2385_, lean_object* v_inst_2386_, lean_object* v_inst_2387_, lean_object* v_e_2388_, lean_object* v_zetaUnusedMode_2389_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2390_; lean_object* v_res_2391_; 
v_zetaUnusedMode_boxed_2390_ = lean_unbox(v_zetaUnusedMode_2389_);
v_res_2391_ = l_Lean_Meta_simpHaveTelescope(v_m_2383_, v_inst_2384_, v_inst_2385_, v_inst_2386_, v_inst_2387_, v_e_2388_, v_zetaUnusedMode_boxed_2390_);
return v_res_2391_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_MonadSimp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectLooseBVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_MonadSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectLooseBVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedHaveInfo_default = _init_l_Lean_Meta_instInhabitedHaveInfo_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveInfo_default);
l_Lean_Meta_instInhabitedHaveInfo = _init_l_Lean_Meta_instInhabitedHaveInfo();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveInfo);
l_Lean_Meta_instInhabitedHaveTelescopeInfo_default = _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default);
l_Lean_Meta_instInhabitedHaveTelescopeInfo = _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveTelescopeInfo);
l_Lean_Meta_instInhabitedSimpHaveResult_default = _init_l_Lean_Meta_instInhabitedSimpHaveResult_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedSimpHaveResult_default);
l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult = _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult();
lean_mark_persistent(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_MonadSimp(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectLooseBVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MonadSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLooseBVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_HaveTelescope(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Sym.Simp.Have
// Imports: public import Lean.Meta.Sym.Simp.Lambda import Lean.Meta.Sym.InstantiateS import Lean.Meta.Sym.ReplaceS import Lean.Meta.Sym.AbstractS import Lean.Meta.Sym.InferType import Lean.Meta.AppBuilder import Lean.Meta.HaveTelescope import Lean.Util.CollectFVars import Init.Omega import Init.While
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_share1___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_EStateM_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Builder_assertShared(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_seqRight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_runShareCommonM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instInhabitedSymM___redArg();
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevRangeS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkLambdaFVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLevel;
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_Level_normalize(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_zetaUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_letNondep_x21(lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3;
static const lean_array_object l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult;
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1_spec__1(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Std.Data.DTreeMap.Internal.Queries"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Std.DTreeMap.Internal.Impl.Const.get!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Key is not present in map"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1;
static const lean_array_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed__const__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Sym_Simp_toBetaApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Sym_Simp_toBetaApp___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_toBetaApp___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_toBetaApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_toBetaApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_consumeForallN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__0, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__1, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_instMonad___redArg___lam__2, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_map, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_pure, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_seqRight, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EStateM_bind, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.Sym.Simp.Have"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "_private.Lean.Meta.Sym.Simp.Have.0.Lean.Meta.Sym.Simp.elimAuxApps"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "assertion violation: numArgs == expectedNumArgs\n            "};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "_private.Lean.Meta.Sym.ReplaceS.0.Lean.Meta.Sym.visit"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.Sym.ReplaceS"};
static const lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.Sym.AlphaShareBuilder"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.Sym.Internal.liftBuilderM"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "_private.Lean.Meta.Sym.Simp.Have.0.Lean.Meta.Sym.Simp.toHave.go"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "_private.Lean.Meta.Sym.Simp.Have.0.Lean.Meta.Sym.Simp.toHave"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "congrFun'"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(219, 239, 156, 219, 118, 185, 235, 192)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "congr"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(56, 82, 209, 127, 228, 246, 91, 162)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "_private.Lean.Meta.Sym.Simp.Have.0.Lean.Meta.Sym.Simp.simpBetaApp.go"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 40, 198, 234, 16, 168, 79, 243)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_Simp_simpLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simpLambda___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_simpLet___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_simpLet___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_box(0);
v___x_8_ = l_unsafeCast___redArg(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__5(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_11_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__4));
v___x_12_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3, &l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3);
v___x_13_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2, &l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__2);
v___x_14_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v___x_12_);
lean_ctor_set(v___x_14_, 2, v___x_13_);
lean_ctor_set(v___x_14_, 3, v___x_13_);
lean_ctor_set(v___x_14_, 4, v___x_11_);
lean_ctor_set(v___x_14_, 5, v___x_13_);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__5, &l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__5_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__5);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default;
return v___x_16_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(lean_object* v_k_17_, lean_object* v_t_18_){
_start:
{
if (lean_obj_tag(v_t_18_) == 0)
{
lean_object* v_k_19_; lean_object* v_l_20_; lean_object* v_r_21_; uint8_t v___x_22_; 
v_k_19_ = lean_ctor_get(v_t_18_, 1);
v_l_20_ = lean_ctor_get(v_t_18_, 3);
v_r_21_ = lean_ctor_get(v_t_18_, 4);
v___x_22_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_17_, v_k_19_);
switch(v___x_22_)
{
case 0:
{
v_t_18_ = v_l_20_;
goto _start;
}
case 1:
{
uint8_t v___x_24_; 
v___x_24_ = 1;
return v___x_24_;
}
default: 
{
v_t_18_ = v_r_21_;
goto _start;
}
}
}
else
{
uint8_t v___x_26_; 
v___x_26_ = 0;
return v___x_26_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg___boxed(lean_object* v_k_27_, lean_object* v_t_28_){
_start:
{
uint8_t v_res_29_; lean_object* v_r_30_; 
v_res_29_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(v_k_27_, v_t_28_);
lean_dec(v_t_28_);
lean_dec(v_k_27_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__3(lean_object* v_fvarIdToPos_31_, lean_object* v_as_32_, size_t v_i_33_, size_t v_stop_34_, lean_object* v_b_35_){
_start:
{
lean_object* v___y_37_; uint8_t v___x_41_; 
v___x_41_ = lean_usize_dec_eq(v_i_33_, v_stop_34_);
if (v___x_41_ == 0)
{
lean_object* v___x_42_; uint8_t v___x_43_; 
v___x_42_ = lean_array_uget_borrowed(v_as_32_, v_i_33_);
v___x_43_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(v___x_42_, v_fvarIdToPos_31_);
if (v___x_43_ == 0)
{
v___y_37_ = v_b_35_;
goto v___jp_36_;
}
else
{
lean_object* v___x_44_; 
lean_inc(v___x_42_);
v___x_44_ = lean_array_push(v_b_35_, v___x_42_);
v___y_37_ = v___x_44_;
goto v___jp_36_;
}
}
else
{
return v_b_35_;
}
v___jp_36_:
{
size_t v___x_38_; size_t v___x_39_; 
v___x_38_ = ((size_t)1ULL);
v___x_39_ = lean_usize_add(v_i_33_, v___x_38_);
v_i_33_ = v___x_39_;
v_b_35_ = v___y_37_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__3___boxed(lean_object* v_fvarIdToPos_45_, lean_object* v_as_46_, lean_object* v_i_47_, lean_object* v_stop_48_, lean_object* v_b_49_){
_start:
{
size_t v_i_boxed_50_; size_t v_stop_boxed_51_; lean_object* v_res_52_; 
v_i_boxed_50_ = lean_unbox_usize(v_i_47_);
lean_dec(v_i_47_);
v_stop_boxed_51_ = lean_unbox_usize(v_stop_48_);
lean_dec(v_stop_48_);
v_res_52_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__3(v_fvarIdToPos_45_, v_as_46_, v_i_boxed_50_, v_stop_boxed_51_, v_b_49_);
lean_dec_ref(v_as_46_);
lean_dec(v_fvarIdToPos_45_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1_spec__1(lean_object* v_msg_53_){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_unsigned_to_nat(0u);
v___x_55_ = lean_panic_fn_borrowed(v___x_54_, v_msg_53_);
return v___x_55_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__3(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_59_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__2));
v___x_60_ = lean_unsigned_to_nat(13u);
v___x_61_ = lean_unsigned_to_nat(227u);
v___x_62_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__1));
v___x_63_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__0));
v___x_64_ = l_mkPanicMessageWithDecl(v___x_63_, v___x_62_, v___x_61_, v___x_60_, v___x_59_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(lean_object* v_t_65_, lean_object* v_k_66_){
_start:
{
if (lean_obj_tag(v_t_65_) == 0)
{
lean_object* v_k_67_; lean_object* v_v_68_; lean_object* v_l_69_; lean_object* v_r_70_; uint8_t v___x_71_; 
v_k_67_ = lean_ctor_get(v_t_65_, 1);
v_v_68_ = lean_ctor_get(v_t_65_, 2);
v_l_69_ = lean_ctor_get(v_t_65_, 3);
v_r_70_ = lean_ctor_get(v_t_65_, 4);
v___x_71_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_66_, v_k_67_);
switch(v___x_71_)
{
case 0:
{
v_t_65_ = v_l_69_;
goto _start;
}
case 1:
{
lean_inc(v_v_68_);
return v_v_68_;
}
default: 
{
v_t_65_ = v_r_70_;
goto _start;
}
}
}
else
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__3, &l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___closed__3);
v___x_75_ = l_panic___at___00Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1_spec__1(v___x_74_);
return v___x_75_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1___boxed(lean_object* v_t_76_, lean_object* v_k_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(v_t_76_, v_k_77_);
lean_dec(v_k_77_);
lean_dec(v_t_76_);
return v_res_78_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg___lam__0(lean_object* v_fvarIdToPos_79_, lean_object* v_fvarId_u2081_80_, lean_object* v_fvarId_u2082_81_){
_start:
{
lean_object* v_pos_u2081_82_; lean_object* v_pos_u2082_83_; uint8_t v___x_84_; 
v_pos_u2081_82_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(v_fvarIdToPos_79_, v_fvarId_u2081_80_);
v_pos_u2082_83_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(v_fvarIdToPos_79_, v_fvarId_u2082_81_);
v___x_84_ = lean_nat_dec_lt(v_pos_u2081_82_, v_pos_u2082_83_);
lean_dec(v_pos_u2082_83_);
lean_dec(v_pos_u2081_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg___lam__0___boxed(lean_object* v_fvarIdToPos_85_, lean_object* v_fvarId_u2081_86_, lean_object* v_fvarId_u2082_87_){
_start:
{
uint8_t v_res_88_; lean_object* v_r_89_; 
v_res_88_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg___lam__0(v_fvarIdToPos_85_, v_fvarId_u2081_86_, v_fvarId_u2082_87_);
lean_dec(v_fvarId_u2082_87_);
lean_dec(v_fvarId_u2081_86_);
lean_dec(v_fvarIdToPos_85_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3___redArg(lean_object* v_fvarIdToPos_90_, lean_object* v_hi_91_, lean_object* v_pivot_92_, lean_object* v_as_93_, lean_object* v_i_94_, lean_object* v_k_95_){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = lean_nat_dec_lt(v_k_95_, v_hi_91_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v___x_98_; 
lean_dec(v_k_95_);
v___x_97_ = lean_array_fswap(v_as_93_, v_i_94_, v_hi_91_);
v___x_98_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_98_, 0, v_i_94_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
return v___x_98_;
}
else
{
lean_object* v___x_99_; lean_object* v_pos_u2081_100_; lean_object* v_pos_u2082_101_; uint8_t v___x_102_; 
v___x_99_ = lean_array_fget_borrowed(v_as_93_, v_k_95_);
v_pos_u2081_100_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(v_fvarIdToPos_90_, v___x_99_);
v_pos_u2082_101_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(v_fvarIdToPos_90_, v_pivot_92_);
v___x_102_ = lean_nat_dec_lt(v_pos_u2081_100_, v_pos_u2082_101_);
lean_dec(v_pos_u2082_101_);
lean_dec(v_pos_u2081_100_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = lean_unsigned_to_nat(1u);
v___x_104_ = lean_nat_add(v_k_95_, v___x_103_);
lean_dec(v_k_95_);
v_k_95_ = v___x_104_;
goto _start;
}
else
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_106_ = lean_array_fswap(v_as_93_, v_i_94_, v_k_95_);
v___x_107_ = lean_unsigned_to_nat(1u);
v___x_108_ = lean_nat_add(v_i_94_, v___x_107_);
lean_dec(v_i_94_);
v___x_109_ = lean_nat_add(v_k_95_, v___x_107_);
lean_dec(v_k_95_);
v_as_93_ = v___x_106_;
v_i_94_ = v___x_108_;
v_k_95_ = v___x_109_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3___redArg___boxed(lean_object* v_fvarIdToPos_111_, lean_object* v_hi_112_, lean_object* v_pivot_113_, lean_object* v_as_114_, lean_object* v_i_115_, lean_object* v_k_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3___redArg(v_fvarIdToPos_111_, v_hi_112_, v_pivot_113_, v_as_114_, v_i_115_, v_k_116_);
lean_dec(v_pivot_113_);
lean_dec(v_hi_112_);
lean_dec(v_fvarIdToPos_111_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg(lean_object* v_fvarIdToPos_118_, lean_object* v_n_119_, lean_object* v_as_120_, lean_object* v_lo_121_, lean_object* v_hi_122_){
_start:
{
lean_object* v___y_124_; uint8_t v___x_134_; 
v___x_134_ = lean_nat_dec_lt(v_lo_121_, v_hi_122_);
if (v___x_134_ == 0)
{
lean_dec(v_lo_121_);
return v_as_120_;
}
else
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v_mid_137_; lean_object* v___y_139_; lean_object* v___y_145_; lean_object* v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_135_ = lean_nat_add(v_lo_121_, v_hi_122_);
v___x_136_ = lean_unsigned_to_nat(1u);
v_mid_137_ = lean_nat_shiftr(v___x_135_, v___x_136_);
lean_dec(v___x_135_);
v___x_150_ = lean_array_fget_borrowed(v_as_120_, v_mid_137_);
v___x_151_ = lean_array_fget_borrowed(v_as_120_, v_lo_121_);
v___x_152_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg___lam__0(v_fvarIdToPos_118_, v___x_150_, v___x_151_);
if (v___x_152_ == 0)
{
v___y_145_ = v_as_120_;
goto v___jp_144_;
}
else
{
lean_object* v___x_153_; 
v___x_153_ = lean_array_fswap(v_as_120_, v_lo_121_, v_mid_137_);
v___y_145_ = v___x_153_;
goto v___jp_144_;
}
v___jp_138_:
{
lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_140_ = lean_array_fget_borrowed(v___y_139_, v_mid_137_);
v___x_141_ = lean_array_fget_borrowed(v___y_139_, v_hi_122_);
v___x_142_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg___lam__0(v_fvarIdToPos_118_, v___x_140_, v___x_141_);
if (v___x_142_ == 0)
{
lean_dec(v_mid_137_);
v___y_124_ = v___y_139_;
goto v___jp_123_;
}
else
{
lean_object* v___x_143_; 
v___x_143_ = lean_array_fswap(v___y_139_, v_mid_137_, v_hi_122_);
lean_dec(v_mid_137_);
v___y_124_ = v___x_143_;
goto v___jp_123_;
}
}
v___jp_144_:
{
lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_146_ = lean_array_fget_borrowed(v___y_145_, v_hi_122_);
v___x_147_ = lean_array_fget_borrowed(v___y_145_, v_lo_121_);
v___x_148_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg___lam__0(v_fvarIdToPos_118_, v___x_146_, v___x_147_);
if (v___x_148_ == 0)
{
v___y_139_ = v___y_145_;
goto v___jp_138_;
}
else
{
lean_object* v___x_149_; 
v___x_149_ = lean_array_fswap(v___y_145_, v_lo_121_, v_hi_122_);
v___y_139_ = v___x_149_;
goto v___jp_138_;
}
}
}
v___jp_123_:
{
lean_object* v_pivot_125_; lean_object* v___x_126_; lean_object* v_fst_127_; lean_object* v_snd_128_; uint8_t v___x_129_; 
v_pivot_125_ = lean_array_fget(v___y_124_, v_hi_122_);
lean_inc_n(v_lo_121_, 2);
v___x_126_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3___redArg(v_fvarIdToPos_118_, v_hi_122_, v_pivot_125_, v___y_124_, v_lo_121_, v_lo_121_);
lean_dec(v_pivot_125_);
v_fst_127_ = lean_ctor_get(v___x_126_, 0);
lean_inc(v_fst_127_);
v_snd_128_ = lean_ctor_get(v___x_126_, 1);
lean_inc(v_snd_128_);
lean_dec_ref(v___x_126_);
v___x_129_ = lean_nat_dec_le(v_hi_122_, v_fst_127_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_130_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg(v_fvarIdToPos_118_, v_n_119_, v_snd_128_, v_lo_121_, v_fst_127_);
v___x_131_ = lean_unsigned_to_nat(1u);
v___x_132_ = lean_nat_add(v_fst_127_, v___x_131_);
lean_dec(v_fst_127_);
v_as_120_ = v___x_130_;
v_lo_121_ = v___x_132_;
goto _start;
}
else
{
lean_dec(v_fst_127_);
lean_dec(v_lo_121_);
return v_snd_128_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg___boxed(lean_object* v_fvarIdToPos_154_, lean_object* v_n_155_, lean_object* v_as_156_, lean_object* v_lo_157_, lean_object* v_hi_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg(v_fvarIdToPos_154_, v_n_155_, v_as_156_, v_lo_157_, v_hi_158_);
lean_dec(v_hi_158_);
lean_dec(v_n_155_);
lean_dec(v_fvarIdToPos_154_);
return v_res_159_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = lean_box(0);
v___x_161_ = lean_unsigned_to_nat(16u);
v___x_162_ = lean_mk_array(v___x_161_, v___x_160_);
return v___x_162_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__0);
v___x_164_ = lean_unsigned_to_nat(0u);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v___x_163_);
return v___x_165_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_168_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__2));
v___x_169_ = lean_box(1);
v___x_170_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__1);
v___x_171_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v___x_169_);
lean_ctor_set(v___x_171_, 2, v___x_168_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt(lean_object* v_e_172_, lean_object* v_fvarIdToPos_173_){
_start:
{
lean_object* v___y_175_; lean_object* v___y_176_; lean_object* v___y_177_; lean_object* v___y_178_; lean_object* v___x_182_; lean_object* v___y_184_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v_s_192_; lean_object* v_fvarIds_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_182_ = lean_unsigned_to_nat(0u);
v___x_190_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__2));
v___x_191_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___closed__3);
v_s_192_ = l_Lean_collectFVars(v___x_191_, v_e_172_);
v_fvarIds_193_ = lean_ctor_get(v_s_192_, 2);
lean_inc_ref(v_fvarIds_193_);
lean_dec_ref(v_s_192_);
v___x_194_ = lean_array_get_size(v_fvarIds_193_);
v___x_195_ = lean_nat_dec_lt(v___x_182_, v___x_194_);
if (v___x_195_ == 0)
{
lean_dec_ref(v_fvarIds_193_);
v___y_184_ = v___x_190_;
goto v___jp_183_;
}
else
{
uint8_t v___x_196_; 
v___x_196_ = lean_nat_dec_le(v___x_194_, v___x_194_);
if (v___x_196_ == 0)
{
if (v___x_195_ == 0)
{
lean_dec_ref(v_fvarIds_193_);
v___y_184_ = v___x_190_;
goto v___jp_183_;
}
else
{
size_t v___x_197_; size_t v___x_198_; lean_object* v___x_199_; 
v___x_197_ = ((size_t)0ULL);
v___x_198_ = lean_usize_of_nat(v___x_194_);
v___x_199_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__3(v_fvarIdToPos_173_, v_fvarIds_193_, v___x_197_, v___x_198_, v___x_190_);
lean_dec_ref(v_fvarIds_193_);
v___y_184_ = v___x_199_;
goto v___jp_183_;
}
}
else
{
size_t v___x_200_; size_t v___x_201_; lean_object* v___x_202_; 
v___x_200_ = ((size_t)0ULL);
v___x_201_ = lean_usize_of_nat(v___x_194_);
v___x_202_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__3(v_fvarIdToPos_173_, v_fvarIds_193_, v___x_200_, v___x_201_, v___x_190_);
lean_dec_ref(v_fvarIds_193_);
v___y_184_ = v___x_202_;
goto v___jp_183_;
}
}
v___jp_174_:
{
uint8_t v___x_179_; 
v___x_179_ = lean_nat_dec_le(v___y_178_, v___y_175_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; 
lean_dec(v___y_175_);
lean_inc(v___y_178_);
v___x_180_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg(v_fvarIdToPos_173_, v___y_176_, v___y_177_, v___y_178_, v___y_178_);
lean_dec(v___y_178_);
lean_dec(v___y_176_);
return v___x_180_;
}
else
{
lean_object* v___x_181_; 
v___x_181_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg(v_fvarIdToPos_173_, v___y_176_, v___y_177_, v___y_178_, v___y_175_);
lean_dec(v___y_175_);
lean_dec(v___y_176_);
return v___x_181_;
}
}
v___jp_183_:
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = lean_array_get_size(v___y_184_);
v___x_186_ = lean_nat_dec_eq(v___x_185_, v___x_182_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_187_ = lean_unsigned_to_nat(1u);
v___x_188_ = lean_nat_sub(v___x_185_, v___x_187_);
v___x_189_ = lean_nat_dec_le(v___x_182_, v___x_188_);
if (v___x_189_ == 0)
{
lean_inc(v___x_188_);
v___y_175_ = v___x_188_;
v___y_176_ = v___x_185_;
v___y_177_ = v___y_184_;
v___y_178_ = v___x_188_;
goto v___jp_174_;
}
else
{
v___y_175_ = v___x_188_;
v___y_176_ = v___x_185_;
v___y_177_ = v___y_184_;
v___y_178_ = v___x_182_;
goto v___jp_174_;
}
}
else
{
return v___y_184_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt___boxed(lean_object* v_e_203_, lean_object* v_fvarIdToPos_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt(v_e_203_, v_fvarIdToPos_204_);
lean_dec(v_fvarIdToPos_204_);
return v_res_205_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0(lean_object* v_00_u03b2_206_, lean_object* v_k_207_, lean_object* v_t_208_){
_start:
{
uint8_t v___x_209_; 
v___x_209_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___redArg(v_k_207_, v_t_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0___boxed(lean_object* v_00_u03b2_210_, lean_object* v_k_211_, lean_object* v_t_212_){
_start:
{
uint8_t v_res_213_; lean_object* v_r_214_; 
v_res_213_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__0(v_00_u03b2_210_, v_k_211_, v_t_212_);
lean_dec(v_t_212_);
lean_dec(v_k_211_);
v_r_214_ = lean_box(v_res_213_);
return v_r_214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2(lean_object* v_fvarIdToPos_215_, lean_object* v_n_216_, lean_object* v_as_217_, lean_object* v_lo_218_, lean_object* v_hi_219_, lean_object* v_w_220_, lean_object* v_hlo_221_, lean_object* v_hhi_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___redArg(v_fvarIdToPos_215_, v_n_216_, v_as_217_, v_lo_218_, v_hi_219_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2___boxed(lean_object* v_fvarIdToPos_224_, lean_object* v_n_225_, lean_object* v_as_226_, lean_object* v_lo_227_, lean_object* v_hi_228_, lean_object* v_w_229_, lean_object* v_hlo_230_, lean_object* v_hhi_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2(v_fvarIdToPos_224_, v_n_225_, v_as_226_, v_lo_227_, v_hi_228_, v_w_229_, v_hlo_230_, v_hhi_231_);
lean_dec(v_hi_228_);
lean_dec(v_n_225_);
lean_dec(v_fvarIdToPos_224_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3(lean_object* v_fvarIdToPos_233_, lean_object* v_n_234_, lean_object* v_lo_235_, lean_object* v_hi_236_, lean_object* v_hhi_237_, lean_object* v_pivot_238_, lean_object* v_as_239_, lean_object* v_i_240_, lean_object* v_k_241_, lean_object* v_ilo_242_, lean_object* v_ik_243_, lean_object* v_w_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3___redArg(v_fvarIdToPos_233_, v_hi_236_, v_pivot_238_, v_as_239_, v_i_240_, v_k_241_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3___boxed(lean_object* v_fvarIdToPos_246_, lean_object* v_n_247_, lean_object* v_lo_248_, lean_object* v_hi_249_, lean_object* v_hhi_250_, lean_object* v_pivot_251_, lean_object* v_as_252_, lean_object* v_i_253_, lean_object* v_k_254_, lean_object* v_ilo_255_, lean_object* v_ik_256_, lean_object* v_w_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__2_spec__3(v_fvarIdToPos_246_, v_n_247_, v_lo_248_, v_hi_249_, v_hhi_250_, v_pivot_251_, v_as_252_, v_i_253_, v_k_254_, v_ilo_255_, v_ik_256_, v_w_257_);
lean_dec(v_pivot_251_);
lean_dec(v_hi_249_);
lean_dec(v_lo_248_);
lean_dec(v_n_247_);
lean_dec(v_fvarIdToPos_246_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0(lean_object* v_x_259_, uint8_t v_bi_260_, lean_object* v_t_261_, lean_object* v_b_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v___y_271_; lean_object* v___x_274_; uint8_t v_debug_275_; 
v___x_274_ = lean_st_ref_get(v___y_264_);
v_debug_275_ = lean_ctor_get_uint8(v___x_274_, sizeof(void*)*11);
lean_dec(v___x_274_);
if (v_debug_275_ == 0)
{
v___y_271_ = v___y_264_;
goto v___jp_270_;
}
else
{
lean_object* v___x_276_; 
v___x_276_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_t_261_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v___x_277_; 
lean_dec_ref_known(v___x_276_, 1);
v___x_277_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_b_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_dec_ref_known(v___x_277_, 1);
v___y_271_ = v___y_264_;
goto v___jp_270_;
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_dec_ref(v_b_262_);
lean_dec_ref(v_t_261_);
lean_dec(v_x_259_);
v_a_278_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_277_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_277_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_278_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
else
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
lean_dec_ref(v_b_262_);
lean_dec_ref(v_t_261_);
lean_dec(v_x_259_);
v_a_286_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_276_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_276_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_286_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
v___jp_270_:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = l_Lean_Expr_forallE___override(v_x_259_, v_t_261_, v_b_262_, v_bi_260_);
v___x_273_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_272_, v___y_271_);
return v___x_273_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0___boxed(lean_object* v_x_294_, lean_object* v_bi_295_, lean_object* v_t_296_, lean_object* v_b_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
uint8_t v_bi_boxed_305_; lean_object* v_res_306_; 
v_bi_boxed_305_ = lean_unbox(v_bi_295_);
v_res_306_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0(v_x_294_, v_bi_boxed_305_, v_t_296_, v_b_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec(v___y_299_);
lean_dec_ref(v___y_298_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg(lean_object* v_00_u03b1s_310_, lean_object* v_i_311_, lean_object* v_00_u03b2_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
lean_object* v_zero_320_; uint8_t v_isZero_321_; 
v_zero_320_ = lean_unsigned_to_nat(0u);
v_isZero_321_ = lean_nat_dec_eq(v_i_311_, v_zero_320_);
if (v_isZero_321_ == 1)
{
lean_object* v___x_322_; 
lean_dec(v_i_311_);
v___x_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_322_, 0, v_00_u03b2_312_);
return v___x_322_;
}
else
{
lean_object* v_one_323_; lean_object* v_n_324_; lean_object* v___x_325_; uint8_t v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_one_323_ = lean_unsigned_to_nat(1u);
v_n_324_ = lean_nat_sub(v_i_311_, v_one_323_);
lean_dec(v_i_311_);
v___x_325_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___closed__1));
v___x_326_ = 0;
v___x_327_ = lean_array_fget_borrowed(v_00_u03b1s_310_, v_n_324_);
lean_inc(v___x_327_);
v___x_328_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go_spec__0(v___x_325_, v___x_326_, v___x_327_, v_00_u03b2_312_, v_a_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_329_; 
v_a_329_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_a_329_);
lean_dec_ref_known(v___x_328_, 1);
v_i_311_ = v_n_324_;
v_00_u03b2_312_ = v_a_329_;
goto _start;
}
else
{
lean_dec(v_n_324_);
return v___x_328_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg___boxed(lean_object* v_00_u03b1s_331_, lean_object* v_i_332_, lean_object* v_00_u03b2_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg(v_00_u03b1s_331_, v_i_332_, v_00_u03b2_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_, v_a_338_, v_a_339_);
lean_dec(v_a_339_);
lean_dec_ref(v_a_338_);
lean_dec(v_a_337_);
lean_dec_ref(v_a_336_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec_ref(v_00_u03b1s_331_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go(lean_object* v_00_u03b1s_342_, lean_object* v_i_343_, lean_object* v_00_u03b2_344_, lean_object* v_h_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg(v_00_u03b1s_342_, v_i_343_, v_00_u03b2_344_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___boxed(lean_object* v_00_u03b1s_354_, lean_object* v_i_355_, lean_object* v_00_u03b2_356_, lean_object* v_h_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go(v_00_u03b1s_354_, v_i_355_, v_00_u03b2_356_, v_h_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_, v_a_362_, v_a_363_);
lean_dec(v_a_363_);
lean_dec_ref(v_a_362_);
lean_dec(v_a_361_);
lean_dec_ref(v_a_360_);
lean_dec(v_a_359_);
lean_dec_ref(v_a_358_);
lean_dec_ref(v_00_u03b1s_354_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows(lean_object* v_00_u03b1s_366_, lean_object* v_00_u03b2_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_array_get_size(v_00_u03b1s_366_);
v___x_376_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows_go___redArg(v_00_u03b1s_366_, v___x_375_, v_00_u03b2_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_, v_a_372_, v_a_373_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows___boxed(lean_object* v_00_u03b1s_377_, lean_object* v_00_u03b2_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows(v_00_u03b1s_377_, v_00_u03b2_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_);
lean_dec(v_a_384_);
lean_dec_ref(v_a_383_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
lean_dec_ref(v_00_u03b1s_377_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3(lean_object* v_fvarIdToPos_387_, lean_object* v_subst_388_, size_t v_sz_389_, size_t v_i_390_, lean_object* v_bs_391_){
_start:
{
uint8_t v___x_392_; 
v___x_392_ = lean_usize_dec_lt(v_i_390_, v_sz_389_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; 
v___x_393_ = l_unsafeCast___redArg(v_bs_391_);
lean_dec_ref(v_bs_391_);
return v___x_393_;
}
else
{
lean_object* v___x_394_; lean_object* v_v_395_; lean_object* v___x_396_; lean_object* v_bs_x27_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; size_t v___x_401_; size_t v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_394_ = l_Lean_instInhabitedExpr;
v_v_395_ = lean_array_uget(v_bs_391_, v_i_390_);
v___x_396_ = lean_unsigned_to_nat(0u);
v_bs_x27_397_ = lean_array_uset(v_bs_391_, v_i_390_, v___x_396_);
v___x_398_ = l_unsafeCast___redArg(v_v_395_);
lean_dec(v_v_395_);
v___x_399_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt_spec__1(v_fvarIdToPos_387_, v___x_398_);
lean_dec(v___x_398_);
v___x_400_ = lean_array_get_borrowed(v___x_394_, v_subst_388_, v___x_399_);
lean_dec(v___x_399_);
v___x_401_ = ((size_t)1ULL);
v___x_402_ = lean_usize_add(v_i_390_, v___x_401_);
v___x_403_ = l_unsafeCast___redArg(v___x_400_);
v___x_404_ = lean_array_uset(v_bs_x27_397_, v_i_390_, v___x_403_);
v_i_390_ = v___x_402_;
v_bs_391_ = v___x_404_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3___boxed(lean_object* v_fvarIdToPos_406_, lean_object* v_subst_407_, lean_object* v_sz_408_, lean_object* v_i_409_, lean_object* v_bs_410_){
_start:
{
size_t v_sz_boxed_411_; size_t v_i_boxed_412_; lean_object* v_res_413_; 
v_sz_boxed_411_ = lean_unbox_usize(v_sz_408_);
lean_dec(v_sz_408_);
v_i_boxed_412_ = lean_unbox_usize(v_i_409_);
lean_dec(v_i_409_);
v_res_413_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3(v_fvarIdToPos_406_, v_subst_407_, v_sz_boxed_411_, v_i_boxed_412_, v_bs_410_);
lean_dec_ref(v_subst_407_);
lean_dec(v_fvarIdToPos_406_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2(size_t v_sz_414_, size_t v_i_415_, lean_object* v_bs_416_){
_start:
{
uint8_t v___x_417_; 
v___x_417_ = lean_usize_dec_lt(v_i_415_, v_sz_414_);
if (v___x_417_ == 0)
{
lean_object* v___x_418_; 
v___x_418_ = l_unsafeCast___redArg(v_bs_416_);
lean_dec_ref(v_bs_416_);
return v___x_418_;
}
else
{
lean_object* v_v_419_; lean_object* v___x_420_; lean_object* v_bs_x27_421_; lean_object* v___x_422_; lean_object* v___x_423_; size_t v___x_424_; size_t v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v_v_419_ = lean_array_uget(v_bs_416_, v_i_415_);
v___x_420_ = lean_unsigned_to_nat(0u);
v_bs_x27_421_ = lean_array_uset(v_bs_416_, v_i_415_, v___x_420_);
v___x_422_ = l_unsafeCast___redArg(v_v_419_);
lean_dec(v_v_419_);
v___x_423_ = l_Lean_mkFVar(v___x_422_);
v___x_424_ = ((size_t)1ULL);
v___x_425_ = lean_usize_add(v_i_415_, v___x_424_);
v___x_426_ = l_unsafeCast___redArg(v___x_423_);
lean_dec_ref(v___x_423_);
v___x_427_ = lean_array_uset(v_bs_x27_421_, v_i_415_, v___x_426_);
v_i_415_ = v___x_425_;
v_bs_416_ = v___x_427_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2___boxed(lean_object* v_sz_429_, lean_object* v_i_430_, lean_object* v_bs_431_){
_start:
{
size_t v_sz_boxed_432_; size_t v_i_boxed_433_; lean_object* v_res_434_; 
v_sz_boxed_432_ = lean_unbox_usize(v_sz_429_);
lean_dec(v_sz_429_);
v_i_boxed_433_ = lean_unbox_usize(v_i_430_);
lean_dec(v_i_430_);
v_res_434_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2(v_sz_boxed_432_, v_i_boxed_433_, v_bs_431_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg___lam__0(lean_object* v_k_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v_b_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v___x_444_; 
lean_inc(v___y_442_);
lean_inc_ref(v___y_441_);
lean_inc(v___y_440_);
lean_inc_ref(v___y_439_);
lean_inc(v___y_437_);
lean_inc_ref(v___y_436_);
v___x_444_ = lean_apply_8(v_k_435_, v_b_438_, v___y_436_, v___y_437_, v___y_439_, v___y_440_, v___y_441_, v___y_442_, lean_box(0));
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg___lam__0___boxed(lean_object* v_k_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v_b_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg___lam__0(v_k_445_, v___y_446_, v___y_447_, v_b_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
lean_dec(v___y_447_);
lean_dec_ref(v___y_446_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg(lean_object* v_name_455_, uint8_t v_bi_456_, lean_object* v_type_457_, lean_object* v_k_458_, uint8_t v_kind_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v___f_467_; lean_object* v___x_468_; 
lean_inc(v___y_461_);
lean_inc_ref(v___y_460_);
v___f_467_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_467_, 0, v_k_458_);
lean_closure_set(v___f_467_, 1, v___y_460_);
lean_closure_set(v___f_467_, 2, v___y_461_);
v___x_468_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_455_, v_bi_456_, v_type_457_, v___f_467_, v_kind_459_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
if (lean_obj_tag(v___x_468_) == 0)
{
return v___x_468_;
}
else
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
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
v_reuseFailAlloc_475_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg___boxed(lean_object* v_name_477_, lean_object* v_bi_478_, lean_object* v_type_479_, lean_object* v_k_480_, lean_object* v_kind_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_){
_start:
{
uint8_t v_bi_boxed_489_; uint8_t v_kind_boxed_490_; lean_object* v_res_491_; 
v_bi_boxed_489_ = lean_unbox(v_bi_478_);
v_kind_boxed_490_ = lean_unbox(v_kind_481_);
v_res_491_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg(v_name_477_, v_bi_boxed_489_, v_type_479_, v_k_480_, v_kind_boxed_490_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4___redArg(lean_object* v_name_492_, lean_object* v_type_493_, lean_object* v_k_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
uint8_t v___x_502_; uint8_t v___x_503_; lean_object* v___x_504_; 
v___x_502_ = 0;
v___x_503_ = 0;
v___x_504_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg(v_name_492_, v___x_502_, v_type_493_, v_k_494_, v___x_503_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4___redArg___boxed(lean_object* v_name_505_, lean_object* v_type_506_, lean_object* v_k_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4___redArg(v_name_505_, v_type_506_, v_k_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0___redArg(lean_object* v_t_516_, lean_object* v_k_517_, lean_object* v_fallback_518_){
_start:
{
if (lean_obj_tag(v_t_516_) == 0)
{
lean_object* v_k_519_; lean_object* v_v_520_; lean_object* v_l_521_; lean_object* v_r_522_; uint8_t v___x_523_; 
v_k_519_ = lean_ctor_get(v_t_516_, 1);
v_v_520_ = lean_ctor_get(v_t_516_, 2);
v_l_521_ = lean_ctor_get(v_t_516_, 3);
v_r_522_ = lean_ctor_get(v_t_516_, 4);
v___x_523_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_517_, v_k_519_);
switch(v___x_523_)
{
case 0:
{
v_t_516_ = v_l_521_;
goto _start;
}
case 1:
{
lean_inc(v_v_520_);
return v_v_520_;
}
default: 
{
v_t_516_ = v_r_522_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_518_);
return v_fallback_518_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0___redArg___boxed(lean_object* v_t_526_, lean_object* v_k_527_, lean_object* v_fallback_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0___redArg(v_t_526_, v_k_527_, v_fallback_528_);
lean_dec(v_fallback_528_);
lean_dec(v_k_527_);
lean_dec(v_t_526_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1(lean_object* v_fvarIdToPos_530_, size_t v_sz_531_, size_t v_i_532_, lean_object* v_bs_533_){
_start:
{
uint8_t v___x_534_; 
v___x_534_ = lean_usize_dec_lt(v_i_532_, v_sz_531_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; 
v___x_535_ = l_unsafeCast___redArg(v_bs_533_);
lean_dec_ref(v_bs_533_);
return v___x_535_;
}
else
{
lean_object* v_v_536_; lean_object* v___x_537_; lean_object* v_bs_x27_538_; lean_object* v___x_539_; lean_object* v___x_540_; size_t v___x_541_; size_t v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_v_536_ = lean_array_uget(v_bs_533_, v_i_532_);
v___x_537_ = lean_unsigned_to_nat(0u);
v_bs_x27_538_ = lean_array_uset(v_bs_533_, v_i_532_, v___x_537_);
v___x_539_ = l_unsafeCast___redArg(v_v_536_);
lean_dec(v_v_536_);
v___x_540_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0___redArg(v_fvarIdToPos_530_, v___x_539_, v___x_537_);
lean_dec(v___x_539_);
v___x_541_ = ((size_t)1ULL);
v___x_542_ = lean_usize_add(v_i_532_, v___x_541_);
v___x_543_ = l_unsafeCast___redArg(v___x_540_);
lean_dec(v___x_540_);
v___x_544_ = lean_array_uset(v_bs_x27_538_, v_i_532_, v___x_543_);
v_i_532_ = v___x_542_;
v_bs_533_ = v___x_544_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1___boxed(lean_object* v_fvarIdToPos_546_, lean_object* v_sz_547_, lean_object* v_i_548_, lean_object* v_bs_549_){
_start:
{
size_t v_sz_boxed_550_; size_t v_i_boxed_551_; lean_object* v_res_552_; 
v_sz_boxed_550_ = lean_unbox_usize(v_sz_547_);
lean_dec(v_sz_547_);
v_i_boxed_551_ = lean_unbox_usize(v_i_548_);
lean_dec(v_i_548_);
v_res_552_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1(v_fvarIdToPos_546_, v_sz_boxed_550_, v_i_boxed_551_, v_bs_549_);
lean_dec(v_fvarIdToPos_546_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0___boxed(lean_object** _args){
lean_object* v_fvarIdToPos_562_ = _args[0];
lean_object* v_subst_563_ = _args[1];
lean_object* v_sz_564_ = _args[2];
lean_object* v___x_565_ = _args[3];
lean_object* v___x_566_ = _args[4];
lean_object* v_x_567_ = _args[5];
lean_object* v_xs_568_ = _args[6];
lean_object* v_xs_x27_569_ = _args[7];
lean_object* v_args_570_ = _args[8];
lean_object* v_a_571_ = _args[9];
lean_object* v_types_572_ = _args[10];
lean_object* v_a_573_ = _args[11];
lean_object* v_varDeps_574_ = _args[12];
lean_object* v_varPos_575_ = _args[13];
lean_object* v_haveExpr_576_ = _args[14];
lean_object* v_body_577_ = _args[15];
lean_object* v_x_x27_578_ = _args[16];
lean_object* v___y_579_ = _args[17];
lean_object* v___y_580_ = _args[18];
lean_object* v___y_581_ = _args[19];
lean_object* v___y_582_ = _args[20];
lean_object* v___y_583_ = _args[21];
lean_object* v___y_584_ = _args[22];
lean_object* v___y_585_ = _args[23];
_start:
{
size_t v_sz_boxed_586_; size_t v___x_6618__boxed_587_; lean_object* v_res_588_; 
v_sz_boxed_586_ = lean_unbox_usize(v_sz_564_);
lean_dec(v_sz_564_);
v___x_6618__boxed_587_ = lean_unbox_usize(v___x_565_);
lean_dec(v___x_565_);
v_res_588_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0(v_fvarIdToPos_562_, v_subst_563_, v_sz_boxed_586_, v___x_6618__boxed_587_, v___x_566_, v_x_567_, v_xs_568_, v_xs_x27_569_, v_args_570_, v_a_571_, v_types_572_, v_a_573_, v_varDeps_574_, v_varPos_575_, v_haveExpr_576_, v_body_577_, v_x_x27_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1(lean_object* v_v_589_, lean_object* v_fvarIdToPos_590_, uint8_t v_nondep_591_, lean_object* v_t_592_, lean_object* v_subst_593_, lean_object* v_xs_594_, lean_object* v_xs_x27_595_, lean_object* v_args_596_, lean_object* v_types_597_, lean_object* v_varDeps_598_, lean_object* v_haveExpr_599_, lean_object* v_body_600_, lean_object* v_declName_601_, lean_object* v_x_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
lean_object* v_fvarIds_610_; size_t v_sz_611_; size_t v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v_varPos_615_; lean_object* v___x_616_; lean_object* v_ys_617_; uint8_t v___x_618_; uint8_t v___x_619_; lean_object* v___x_620_; 
lean_inc_ref(v_v_589_);
v_fvarIds_610_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_collectFVarIdsAt(v_v_589_, v_fvarIdToPos_590_);
v_sz_611_ = lean_array_size(v_fvarIds_610_);
v___x_612_ = ((size_t)0ULL);
v___x_613_ = l_unsafeCast___redArg(v_fvarIds_610_);
lean_dec_ref(v_fvarIds_610_);
lean_inc_n(v___x_613_, 2);
v___x_614_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__1(v_fvarIdToPos_590_, v_sz_611_, v___x_612_, v___x_613_);
v_varPos_615_ = l_unsafeCast___redArg(v___x_614_);
lean_dec_ref(v___x_614_);
v___x_616_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__2(v_sz_611_, v___x_612_, v___x_613_);
v_ys_617_ = l_unsafeCast___redArg(v___x_616_);
lean_dec_ref(v___x_616_);
v___x_618_ = 0;
v___x_619_ = 1;
lean_inc(v_ys_617_);
v___x_620_ = l_Lean_Meta_mkLambdaFVars(v_ys_617_, v_v_589_, v___x_618_, v_nondep_591_, v___x_618_, v_nondep_591_, v___x_619_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_622_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_620_, 1);
v___x_622_ = l_Lean_Meta_mkForallFVars(v_ys_617_, v_t_592_, v___x_618_, v_nondep_591_, v_nondep_591_, v___x_619_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_623_; lean_object* v___x_624_; 
v_a_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_a_623_);
lean_dec_ref_known(v___x_622_, 1);
v___x_624_ = l_Lean_Meta_Sym_shareCommonInc(v_a_623_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___f_628_; lean_object* v___x_629_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc_n(v_a_625_, 2);
lean_dec_ref_known(v___x_624_, 1);
v___x_626_ = lean_box_usize(v_sz_611_);
v___x_627_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed__const__1));
v___f_628_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0___boxed), 24, 16);
lean_closure_set(v___f_628_, 0, v_fvarIdToPos_590_);
lean_closure_set(v___f_628_, 1, v_subst_593_);
lean_closure_set(v___f_628_, 2, v___x_626_);
lean_closure_set(v___f_628_, 3, v___x_627_);
lean_closure_set(v___f_628_, 4, v___x_613_);
lean_closure_set(v___f_628_, 5, v_x_602_);
lean_closure_set(v___f_628_, 6, v_xs_594_);
lean_closure_set(v___f_628_, 7, v_xs_x27_595_);
lean_closure_set(v___f_628_, 8, v_args_596_);
lean_closure_set(v___f_628_, 9, v_a_621_);
lean_closure_set(v___f_628_, 10, v_types_597_);
lean_closure_set(v___f_628_, 11, v_a_625_);
lean_closure_set(v___f_628_, 12, v_varDeps_598_);
lean_closure_set(v___f_628_, 13, v_varPos_615_);
lean_closure_set(v___f_628_, 14, v_haveExpr_599_);
lean_closure_set(v___f_628_, 15, v_body_600_);
v___x_629_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4___redArg(v_declName_601_, v_a_625_, v___f_628_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
return v___x_629_;
}
else
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
lean_dec(v_a_621_);
lean_dec(v_varPos_615_);
lean_dec(v___x_613_);
lean_dec_ref(v_x_602_);
lean_dec(v_declName_601_);
lean_dec_ref(v_body_600_);
lean_dec_ref(v_haveExpr_599_);
lean_dec_ref(v_varDeps_598_);
lean_dec_ref(v_types_597_);
lean_dec_ref(v_args_596_);
lean_dec_ref(v_xs_x27_595_);
lean_dec_ref(v_xs_594_);
lean_dec_ref(v_subst_593_);
lean_dec(v_fvarIdToPos_590_);
v_a_630_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_624_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_624_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
else
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_645_; 
lean_dec(v_a_621_);
lean_dec(v_varPos_615_);
lean_dec(v___x_613_);
lean_dec_ref(v_x_602_);
lean_dec(v_declName_601_);
lean_dec_ref(v_body_600_);
lean_dec_ref(v_haveExpr_599_);
lean_dec_ref(v_varDeps_598_);
lean_dec_ref(v_types_597_);
lean_dec_ref(v_args_596_);
lean_dec_ref(v_xs_x27_595_);
lean_dec_ref(v_xs_594_);
lean_dec_ref(v_subst_593_);
lean_dec(v_fvarIdToPos_590_);
v_a_638_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_645_ == 0)
{
v___x_640_ = v___x_622_;
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_622_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_643_; 
if (v_isShared_641_ == 0)
{
v___x_643_ = v___x_640_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_a_638_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
}
else
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec(v_ys_617_);
lean_dec(v_varPos_615_);
lean_dec(v___x_613_);
lean_dec_ref(v_x_602_);
lean_dec(v_declName_601_);
lean_dec_ref(v_body_600_);
lean_dec_ref(v_haveExpr_599_);
lean_dec_ref(v_varDeps_598_);
lean_dec_ref(v_types_597_);
lean_dec_ref(v_args_596_);
lean_dec_ref(v_xs_x27_595_);
lean_dec_ref(v_xs_594_);
lean_dec_ref(v_subst_593_);
lean_dec_ref(v_t_592_);
lean_dec(v_fvarIdToPos_590_);
v_a_646_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_620_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_620_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed(lean_object** _args){
lean_object* v_v_654_ = _args[0];
lean_object* v_fvarIdToPos_655_ = _args[1];
lean_object* v_nondep_656_ = _args[2];
lean_object* v_t_657_ = _args[3];
lean_object* v_subst_658_ = _args[4];
lean_object* v_xs_659_ = _args[5];
lean_object* v_xs_x27_660_ = _args[6];
lean_object* v_args_661_ = _args[7];
lean_object* v_types_662_ = _args[8];
lean_object* v_varDeps_663_ = _args[9];
lean_object* v_haveExpr_664_ = _args[10];
lean_object* v_body_665_ = _args[11];
lean_object* v_declName_666_ = _args[12];
lean_object* v_x_667_ = _args[13];
lean_object* v___y_668_ = _args[14];
lean_object* v___y_669_ = _args[15];
lean_object* v___y_670_ = _args[16];
lean_object* v___y_671_ = _args[17];
lean_object* v___y_672_ = _args[18];
lean_object* v___y_673_ = _args[19];
lean_object* v___y_674_ = _args[20];
_start:
{
uint8_t v_nondep_6647__boxed_675_; lean_object* v_res_676_; 
v_nondep_6647__boxed_675_ = lean_unbox(v_nondep_656_);
v_res_676_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1(v_v_654_, v_fvarIdToPos_655_, v_nondep_6647__boxed_675_, v_t_657_, v_subst_658_, v_xs_659_, v_xs_x27_660_, v_args_661_, v_types_662_, v_varDeps_663_, v_haveExpr_664_, v_body_665_, v_declName_666_, v_x_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go(lean_object* v_haveExpr_677_, lean_object* v_e_678_, lean_object* v_xs_679_, lean_object* v_xs_x27_680_, lean_object* v_args_681_, lean_object* v_subst_682_, lean_object* v_types_683_, lean_object* v_varDeps_684_, lean_object* v_fvarIdToPos_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_){
_start:
{
lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; 
if (lean_obj_tag(v_e_678_) == 8)
{
uint8_t v_nondep_780_; 
v_nondep_780_ = lean_ctor_get_uint8(v_e_678_, sizeof(void*)*4 + 8);
if (v_nondep_780_ == 1)
{
lean_object* v_declName_781_; lean_object* v_type_782_; lean_object* v_value_783_; lean_object* v_body_784_; lean_object* v_t_785_; lean_object* v_v_786_; lean_object* v___x_787_; lean_object* v___f_788_; lean_object* v___x_789_; 
v_declName_781_ = lean_ctor_get(v_e_678_, 0);
lean_inc_n(v_declName_781_, 2);
v_type_782_ = lean_ctor_get(v_e_678_, 1);
lean_inc_ref(v_type_782_);
v_value_783_ = lean_ctor_get(v_e_678_, 2);
lean_inc_ref(v_value_783_);
v_body_784_ = lean_ctor_get(v_e_678_, 3);
lean_inc_ref(v_body_784_);
lean_dec_ref_known(v_e_678_, 4);
v_t_785_ = lean_expr_instantiate_rev(v_type_782_, v_xs_679_);
lean_dec_ref(v_type_782_);
v_v_786_ = lean_expr_instantiate_rev(v_value_783_, v_xs_679_);
lean_dec_ref(v_value_783_);
v___x_787_ = lean_box(v_nondep_780_);
lean_inc_ref(v_t_785_);
v___f_788_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__1___boxed), 21, 13);
lean_closure_set(v___f_788_, 0, v_v_786_);
lean_closure_set(v___f_788_, 1, v_fvarIdToPos_685_);
lean_closure_set(v___f_788_, 2, v___x_787_);
lean_closure_set(v___f_788_, 3, v_t_785_);
lean_closure_set(v___f_788_, 4, v_subst_682_);
lean_closure_set(v___f_788_, 5, v_xs_679_);
lean_closure_set(v___f_788_, 6, v_xs_x27_680_);
lean_closure_set(v___f_788_, 7, v_args_681_);
lean_closure_set(v___f_788_, 8, v_types_683_);
lean_closure_set(v___f_788_, 9, v_varDeps_684_);
lean_closure_set(v___f_788_, 10, v_haveExpr_677_);
lean_closure_set(v___f_788_, 11, v_body_784_);
lean_closure_set(v___f_788_, 12, v_declName_781_);
v___x_789_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4___redArg(v_declName_781_, v_t_785_, v___f_788_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_, v_a_691_);
return v___x_789_;
}
else
{
lean_dec(v_fvarIdToPos_685_);
lean_dec_ref(v_xs_679_);
v___y_694_ = v_a_686_;
v___y_695_ = v_a_687_;
v___y_696_ = v_a_688_;
v___y_697_ = v_a_689_;
v___y_698_ = v_a_690_;
v___y_699_ = v_a_691_;
goto v___jp_693_;
}
}
else
{
lean_dec(v_fvarIdToPos_685_);
lean_dec_ref(v_xs_679_);
v___y_694_ = v_a_686_;
v___y_695_ = v_a_687_;
v___y_696_ = v_a_688_;
v___y_697_ = v_a_689_;
v___y_698_ = v_a_690_;
v___y_699_ = v_a_691_;
goto v___jp_693_;
}
v___jp_693_:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_700_ = lean_unsigned_to_nat(0u);
v___x_701_ = lean_array_get_size(v_subst_682_);
v___x_702_ = l_Lean_Meta_Sym_instantiateRevRangeS(v_e_678_, v___x_700_, v___x_701_, v_subst_682_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v_a_703_; lean_object* v___x_704_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
lean_inc_n(v_a_703_, 2);
lean_dec_ref_known(v___x_702_, 1);
v___x_704_ = l_Lean_Meta_Sym_inferType(v_a_703_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; lean_object* v___x_706_; 
v_a_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc_n(v_a_705_, 2);
lean_dec_ref_known(v___x_704_, 1);
v___x_706_ = l_Lean_Meta_Sym_getLevel___redArg(v_a_705_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v___x_708_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_707_);
lean_dec_ref_known(v___x_706_, 1);
lean_inc(v_a_705_);
v___x_708_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_mkArrows(v_types_683_, v_a_705_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
lean_dec_ref(v_types_683_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v___x_710_; 
v_a_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_709_);
lean_dec_ref_known(v___x_708_, 1);
v___x_710_ = l_Lean_Meta_Sym_mkLambdaFVarsS(v_xs_x27_680_, v_a_703_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_711_);
lean_dec_ref_known(v___x_710_, 1);
v___x_712_ = l_Lean_mkAppN(v_a_711_, v_args_681_);
lean_dec_ref(v_args_681_);
v___x_713_ = l_Lean_Meta_Sym_shareCommonInc(v___x_712_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_a_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_731_; 
v_a_714_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_731_ == 0)
{
v___x_716_ = v___x_713_;
v_isShared_717_ = v_isSharedCheck_731_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_a_714_);
lean_dec(v___x_713_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_731_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_729_; 
v___x_718_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__1));
v___x_719_ = lean_box(0);
lean_inc(v_a_707_);
v___x_720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_720_, 0, v_a_707_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
lean_inc_ref(v___x_720_);
v___x_721_ = l_Lean_mkConst(v___x_718_, v___x_720_);
lean_inc(v_a_714_);
lean_inc_ref(v_haveExpr_677_);
lean_inc_n(v_a_705_, 2);
v___x_722_ = l_Lean_mkApp3(v___x_721_, v_a_705_, v_haveExpr_677_, v_a_714_);
v___x_723_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3));
v___x_724_ = l_Lean_mkConst(v___x_723_, v___x_720_);
v___x_725_ = l_Lean_mkAppB(v___x_724_, v_a_705_, v_haveExpr_677_);
v___x_726_ = l_Lean_Meta_mkExpectedPropHint(v___x_725_, v___x_722_);
v___x_727_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_727_, 0, v_a_705_);
lean_ctor_set(v___x_727_, 1, v_a_707_);
lean_ctor_set(v___x_727_, 2, v_a_714_);
lean_ctor_set(v___x_727_, 3, v___x_726_);
lean_ctor_set(v___x_727_, 4, v_varDeps_684_);
lean_ctor_set(v___x_727_, 5, v_a_709_);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 0, v___x_727_);
v___x_729_ = v___x_716_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v___x_727_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
else
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
lean_dec(v_a_709_);
lean_dec(v_a_707_);
lean_dec(v_a_705_);
lean_dec_ref(v_varDeps_684_);
lean_dec_ref(v_haveExpr_677_);
v_a_732_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v___x_713_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_713_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_a_732_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
lean_dec(v_a_709_);
lean_dec(v_a_707_);
lean_dec(v_a_705_);
lean_dec_ref(v_varDeps_684_);
lean_dec_ref(v_args_681_);
lean_dec_ref(v_haveExpr_677_);
v_a_740_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_710_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_710_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
lean_dec(v_a_707_);
lean_dec(v_a_705_);
lean_dec(v_a_703_);
lean_dec_ref(v_varDeps_684_);
lean_dec_ref(v_args_681_);
lean_dec_ref(v_xs_x27_680_);
lean_dec_ref(v_haveExpr_677_);
v_a_748_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v___x_708_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_708_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_748_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
lean_dec(v_a_705_);
lean_dec(v_a_703_);
lean_dec_ref(v_varDeps_684_);
lean_dec_ref(v_types_683_);
lean_dec_ref(v_args_681_);
lean_dec_ref(v_xs_x27_680_);
lean_dec_ref(v_haveExpr_677_);
v_a_756_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_706_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_706_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
lean_dec(v_a_703_);
lean_dec_ref(v_varDeps_684_);
lean_dec_ref(v_types_683_);
lean_dec_ref(v_args_681_);
lean_dec_ref(v_xs_x27_680_);
lean_dec_ref(v_haveExpr_677_);
v_a_764_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_704_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_704_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
else
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
lean_dec_ref(v_varDeps_684_);
lean_dec_ref(v_types_683_);
lean_dec_ref(v_args_681_);
lean_dec_ref(v_xs_x27_680_);
lean_dec_ref(v_haveExpr_677_);
v_a_772_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_779_ == 0)
{
v___x_774_ = v___x_702_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___x_702_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_a_772_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___lam__0(lean_object* v_fvarIdToPos_790_, lean_object* v_subst_791_, size_t v_sz_792_, size_t v___x_793_, lean_object* v___x_794_, lean_object* v_x_795_, lean_object* v_xs_796_, lean_object* v_xs_x27_797_, lean_object* v_args_798_, lean_object* v_a_799_, lean_object* v_types_800_, lean_object* v_a_801_, lean_object* v_varDeps_802_, lean_object* v_varPos_803_, lean_object* v_haveExpr_804_, lean_object* v_body_805_, lean_object* v_x_x27_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_814_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__3(v_fvarIdToPos_790_, v_subst_791_, v_sz_792_, v___x_793_, v___x_794_);
v___x_815_ = l_unsafeCast___redArg(v___x_814_);
lean_dec_ref(v___x_814_);
lean_inc_ref(v_x_x27_806_);
v___x_816_ = l_Lean_mkAppN(v_x_x27_806_, v___x_815_);
lean_dec(v___x_815_);
v___x_817_ = l_Lean_Meta_Sym_shareCommonInc(v___x_816_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
lean_inc(v_a_818_);
lean_dec_ref_known(v___x_817_, 1);
v___x_819_ = l_Lean_Expr_fvarId_x21(v_x_795_);
v___x_820_ = lean_array_get_size(v_xs_796_);
v___x_821_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v___x_819_, v___x_820_, v_fvarIdToPos_790_);
v___x_822_ = lean_array_push(v_xs_796_, v_x_795_);
v___x_823_ = lean_array_push(v_xs_x27_797_, v_x_x27_806_);
v___x_824_ = lean_array_push(v_args_798_, v_a_799_);
v___x_825_ = lean_array_push(v_subst_791_, v_a_818_);
v___x_826_ = lean_array_push(v_types_800_, v_a_801_);
v___x_827_ = lean_array_push(v_varDeps_802_, v_varPos_803_);
v___x_828_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go(v_haveExpr_804_, v_body_805_, v___x_822_, v___x_823_, v___x_824_, v___x_825_, v___x_826_, v___x_827_, v___x_821_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
return v___x_828_;
}
else
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
lean_dec_ref(v_x_x27_806_);
lean_dec_ref(v_body_805_);
lean_dec_ref(v_haveExpr_804_);
lean_dec(v_varPos_803_);
lean_dec_ref(v_varDeps_802_);
lean_dec_ref(v_a_801_);
lean_dec_ref(v_types_800_);
lean_dec_ref(v_a_799_);
lean_dec_ref(v_args_798_);
lean_dec_ref(v_xs_x27_797_);
lean_dec_ref(v_xs_796_);
lean_dec_ref(v_x_795_);
lean_dec_ref(v_subst_791_);
lean_dec(v_fvarIdToPos_790_);
v_a_829_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_817_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_817_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_829_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___boxed(lean_object* v_haveExpr_837_, lean_object* v_e_838_, lean_object* v_xs_839_, lean_object* v_xs_x27_840_, lean_object* v_args_841_, lean_object* v_subst_842_, lean_object* v_types_843_, lean_object* v_varDeps_844_, lean_object* v_fvarIdToPos_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go(v_haveExpr_837_, v_e_838_, v_xs_839_, v_xs_x27_840_, v_args_841_, v_subst_842_, v_types_843_, v_varDeps_844_, v_fvarIdToPos_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_, v_a_851_);
lean_dec(v_a_851_);
lean_dec_ref(v_a_850_);
lean_dec(v_a_849_);
lean_dec_ref(v_a_848_);
lean_dec(v_a_847_);
lean_dec_ref(v_a_846_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0(lean_object* v_00_u03b4_854_, lean_object* v_t_855_, lean_object* v_k_856_, lean_object* v_fallback_857_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0___redArg(v_t_855_, v_k_856_, v_fallback_857_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0___boxed(lean_object* v_00_u03b4_859_, lean_object* v_t_860_, lean_object* v_k_861_, lean_object* v_fallback_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__0(v_00_u03b4_859_, v_t_860_, v_k_861_, v_fallback_862_);
lean_dec(v_fallback_862_);
lean_dec(v_k_861_);
lean_dec(v_t_860_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4(lean_object* v_00_u03b1_864_, lean_object* v_name_865_, uint8_t v_bi_866_, lean_object* v_type_867_, lean_object* v_k_868_, uint8_t v_kind_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg(v_name_865_, v_bi_866_, v_type_867_, v_k_868_, v_kind_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___boxed(lean_object* v_00_u03b1_878_, lean_object* v_name_879_, lean_object* v_bi_880_, lean_object* v_type_881_, lean_object* v_k_882_, lean_object* v_kind_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_){
_start:
{
uint8_t v_bi_boxed_891_; uint8_t v_kind_boxed_892_; lean_object* v_res_893_; 
v_bi_boxed_891_ = lean_unbox(v_bi_880_);
v_kind_boxed_892_ = lean_unbox(v_kind_883_);
v_res_893_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4(v_00_u03b1_878_, v_name_879_, v_bi_boxed_891_, v_type_881_, v_k_882_, v_kind_boxed_892_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4(lean_object* v_00_u03b1_894_, lean_object* v_name_895_, lean_object* v_type_896_, lean_object* v_k_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4___redArg(v_name_895_, v_type_896_, v_k_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4___boxed(lean_object* v_00_u03b1_906_, lean_object* v_name_907_, lean_object* v_type_908_, lean_object* v_k_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4(v_00_u03b1_906_, v_name_907_, v_type_908_, v_k_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_toBetaApp(lean_object* v_haveExpr_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_928_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_toBetaApp___closed__0));
v___x_929_ = lean_box(1);
lean_inc_ref(v_haveExpr_920_);
v___x_930_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go(v_haveExpr_920_, v_haveExpr_920_, v___x_928_, v___x_928_, v___x_928_, v___x_928_, v___x_928_, v___x_928_, v___x_929_, v_a_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_toBetaApp___boxed(lean_object* v_haveExpr_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_Meta_Sym_Simp_toBetaApp(v_haveExpr_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_);
lean_dec(v_a_937_);
lean_dec_ref(v_a_936_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
lean_dec(v_a_933_);
lean_dec_ref(v_a_932_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_consumeForallN(lean_object* v_type_940_, lean_object* v_n_941_){
_start:
{
lean_object* v_zero_942_; uint8_t v_isZero_943_; 
v_zero_942_ = lean_unsigned_to_nat(0u);
v_isZero_943_ = lean_nat_dec_eq(v_n_941_, v_zero_942_);
if (v_isZero_943_ == 1)
{
lean_dec(v_n_941_);
return v_type_940_;
}
else
{
lean_object* v_one_944_; lean_object* v_n_945_; lean_object* v___x_946_; 
v_one_944_ = lean_unsigned_to_nat(1u);
v_n_945_ = lean_nat_sub(v_n_941_, v_one_944_);
lean_dec(v_n_941_);
v___x_946_ = l_Lean_Expr_bindingBody_x21(v_type_940_);
lean_dec_ref(v_type_940_);
v_type_940_ = v___x_946_;
v_n_941_ = v_n_945_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___redArg(lean_object* v_idx_948_, lean_object* v___y_949_){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = l_Lean_Expr_bvar___override(v_idx_948_);
v___x_951_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_950_, v___y_949_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0(lean_object* v_idx_952_, uint8_t v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___redArg(v_idx_952_, v___y_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___boxed(lean_object* v_idx_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
uint8_t v___y_24940__boxed_961_; lean_object* v_res_962_; 
v___y_24940__boxed_961_ = lean_unbox(v___y_958_);
v_res_962_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0(v_idx_957_, v___y_24940__boxed_961_, v___y_959_, v___y_960_);
lean_dec_ref(v___y_959_);
return v_res_962_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0(void){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = l_Std_HashMap_instInhabited___redArg();
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1(lean_object* v_msg_964_, uint8_t v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v___x_968_; lean_object* v___f_969_; lean_object* v___f_970_; lean_object* v___f_971_; lean_object* v___x_1486__overap_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_968_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___closed__0);
v___f_969_ = lean_alloc_closure((void*)(l_EStateM_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_969_, 0, v___x_968_);
v___f_970_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_970_, 0, v___f_969_);
v___f_971_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_971_, 0, v___f_970_);
v___x_1486__overap_972_ = lean_panic_fn_borrowed(v___f_971_, v_msg_964_);
lean_dec_ref(v___f_971_);
v___x_973_ = lean_box(v___y_965_);
lean_inc_ref(v___y_966_);
v___x_974_ = lean_apply_3(v___x_1486__overap_972_, v___x_973_, v___y_966_, v___y_967_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1___boxed(lean_object* v_msg_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_){
_start:
{
uint8_t v___y_24953__boxed_979_; lean_object* v_res_980_; 
v___y_24953__boxed_979_ = lean_unbox(v___y_976_);
v_res_980_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1(v_msg_975_, v___y_24953__boxed_979_, v___y_977_, v___y_978_);
lean_dec_ref(v___y_977_);
return v_res_980_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0(void){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = l_Lean_Meta_Sym_instInhabitedSymM___redArg();
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(lean_object* v_msg_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
lean_object* v___x_990_; lean_object* v___x_1948__overap_991_; lean_object* v___x_992_; 
v___x_990_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___closed__0);
v___x_1948__overap_991_ = lean_panic_fn_borrowed(v___x_990_, v_msg_982_);
lean_inc(v___y_988_);
lean_inc_ref(v___y_987_);
lean_inc(v___y_986_);
lean_inc_ref(v___y_985_);
lean_inc(v___y_984_);
lean_inc_ref(v___y_983_);
v___x_992_ = lean_apply_7(v___x_1948__overap_991_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, lean_box(0));
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3___boxed(lean_object* v_msg_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(v_msg_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(lean_object* v_x_1002_, lean_object* v_t_1003_, lean_object* v_v_1004_, lean_object* v_b_1005_, uint8_t v_nondep_1006_, lean_object* v___y_1007_, uint8_t v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v___y_1012_; lean_object* v___y_1013_; 
if (v___y_1008_ == 0)
{
v___y_1012_ = v___y_1007_;
v___y_1013_ = v___y_1010_;
goto v___jp_1011_;
}
else
{
lean_object* v___x_1035_; 
v___x_1035_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_1003_, v___y_1008_, v___y_1009_, v___y_1010_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v___x_1037_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 1);
lean_inc(v_a_1036_);
lean_dec_ref_known(v___x_1035_, 2);
v___x_1037_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_v_1004_, v___y_1008_, v___y_1009_, v_a_1036_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___x_1039_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 1);
lean_inc(v_a_1038_);
lean_dec_ref_known(v___x_1037_, 2);
v___x_1039_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_1005_, v___y_1008_, v___y_1009_, v_a_1038_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 1);
lean_inc(v_a_1040_);
lean_dec_ref_known(v___x_1039_, 2);
v___y_1012_ = v___y_1007_;
v___y_1013_ = v_a_1040_;
goto v___jp_1011_;
}
else
{
lean_object* v_a_1041_; lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
lean_dec_ref(v___y_1007_);
lean_dec_ref(v_b_1005_);
lean_dec_ref(v_v_1004_);
lean_dec_ref(v_t_1003_);
lean_dec(v_x_1002_);
v_a_1041_ = lean_ctor_get(v___x_1039_, 0);
v_a_1042_ = lean_ctor_get(v___x_1039_, 1);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1039_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_inc(v_a_1041_);
lean_dec(v___x_1039_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1041_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v_a_1042_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
else
{
lean_object* v_a_1050_; lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
lean_dec_ref(v___y_1007_);
lean_dec_ref(v_b_1005_);
lean_dec_ref(v_v_1004_);
lean_dec_ref(v_t_1003_);
lean_dec(v_x_1002_);
v_a_1050_ = lean_ctor_get(v___x_1037_, 0);
v_a_1051_ = lean_ctor_get(v___x_1037_, 1);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1037_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_inc(v_a_1050_);
lean_dec(v___x_1037_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1050_);
lean_ctor_set(v_reuseFailAlloc_1057_, 1, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
lean_dec_ref(v___y_1007_);
lean_dec_ref(v_b_1005_);
lean_dec_ref(v_v_1004_);
lean_dec_ref(v_t_1003_);
lean_dec(v_x_1002_);
v_a_1059_ = lean_ctor_get(v___x_1035_, 0);
v_a_1060_ = lean_ctor_get(v___x_1035_, 1);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___x_1035_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_inc(v_a_1059_);
lean_dec(v___x_1035_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1059_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v_a_1060_);
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
v___jp_1011_:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1014_ = l_Lean_Expr_letE___override(v_x_1002_, v_t_1003_, v_v_1004_, v_b_1005_, v_nondep_1006_);
v___x_1015_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1014_, v___y_1013_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_object* v_a_1016_; lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1025_; 
v_a_1016_ = lean_ctor_get(v___x_1015_, 0);
v_a_1017_ = lean_ctor_get(v___x_1015_, 1);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1019_ = v___x_1015_;
v_isShared_1020_ = v_isSharedCheck_1025_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_inc(v_a_1016_);
lean_dec(v___x_1015_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1025_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1021_; lean_object* v___x_1023_; 
v___x_1021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1021_, 0, v_a_1016_);
lean_ctor_set(v___x_1021_, 1, v___y_1012_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 0, v___x_1021_);
v___x_1023_ = v___x_1019_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1021_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v_a_1017_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
else
{
lean_object* v_a_1026_; lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec_ref(v___y_1012_);
v_a_1026_ = lean_ctor_get(v___x_1015_, 0);
v_a_1027_ = lean_ctor_get(v___x_1015_, 1);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1015_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_inc(v_a_1026_);
lean_dec(v___x_1015_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1026_);
lean_ctor_set(v_reuseFailAlloc_1033_, 1, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6___boxed(lean_object* v_x_1068_, lean_object* v_t_1069_, lean_object* v_v_1070_, lean_object* v_b_1071_, lean_object* v_nondep_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
uint8_t v_nondep_boxed_1077_; uint8_t v___y_25004__boxed_1078_; lean_object* v_res_1079_; 
v_nondep_boxed_1077_ = lean_unbox(v_nondep_1072_);
v___y_25004__boxed_1078_ = lean_unbox(v___y_1074_);
v_res_1079_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(v_x_1068_, v_t_1069_, v_v_1070_, v_b_1071_, v_nondep_boxed_1077_, v___y_1073_, v___y_25004__boxed_1078_, v___y_1075_, v___y_1076_);
lean_dec_ref(v___y_1075_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4(lean_object* v_x_1080_, uint8_t v_bi_1081_, lean_object* v_t_1082_, lean_object* v_b_1083_, lean_object* v___y_1084_, uint8_t v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
lean_object* v___y_1089_; lean_object* v___y_1090_; 
if (v___y_1085_ == 0)
{
v___y_1089_ = v___y_1084_;
v___y_1090_ = v___y_1087_;
goto v___jp_1088_;
}
else
{
lean_object* v___x_1112_; 
v___x_1112_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_1082_, v___y_1085_, v___y_1086_, v___y_1087_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; lean_object* v___x_1114_; 
v_a_1113_ = lean_ctor_get(v___x_1112_, 1);
lean_inc(v_a_1113_);
lean_dec_ref_known(v___x_1112_, 2);
v___x_1114_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_1083_, v___y_1085_, v___y_1086_, v_a_1113_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 1);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1114_, 2);
v___y_1089_ = v___y_1084_;
v___y_1090_ = v_a_1115_;
goto v___jp_1088_;
}
else
{
lean_object* v_a_1116_; lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
lean_dec_ref(v___y_1084_);
lean_dec_ref(v_b_1083_);
lean_dec_ref(v_t_1082_);
lean_dec(v_x_1080_);
v_a_1116_ = lean_ctor_get(v___x_1114_, 0);
v_a_1117_ = lean_ctor_get(v___x_1114_, 1);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1119_ = v___x_1114_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_inc(v_a_1116_);
lean_dec(v___x_1114_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_a_1116_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v_a_1117_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
else
{
lean_object* v_a_1125_; lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
lean_dec_ref(v___y_1084_);
lean_dec_ref(v_b_1083_);
lean_dec_ref(v_t_1082_);
lean_dec(v_x_1080_);
v_a_1125_ = lean_ctor_get(v___x_1112_, 0);
v_a_1126_ = lean_ctor_get(v___x_1112_, 1);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1112_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_inc(v_a_1125_);
lean_dec(v___x_1112_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1125_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
v___jp_1088_:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = l_Lean_Expr_lam___override(v_x_1080_, v_t_1082_, v_b_1083_, v_bi_1081_);
v___x_1092_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1091_, v___y_1090_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1102_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
v_a_1094_ = lean_ctor_get(v___x_1092_, 1);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1096_ = v___x_1092_;
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_inc(v_a_1093_);
lean_dec(v___x_1092_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1098_; lean_object* v___x_1100_; 
v___x_1098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1098_, 0, v_a_1093_);
lean_ctor_set(v___x_1098_, 1, v___y_1089_);
if (v_isShared_1097_ == 0)
{
lean_ctor_set(v___x_1096_, 0, v___x_1098_);
v___x_1100_ = v___x_1096_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v___x_1098_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_a_1094_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
lean_dec_ref(v___y_1089_);
v_a_1103_ = lean_ctor_get(v___x_1092_, 0);
v_a_1104_ = lean_ctor_get(v___x_1092_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1106_ = v___x_1092_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_inc(v_a_1103_);
lean_dec(v___x_1092_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1103_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4___boxed(lean_object* v_x_1134_, lean_object* v_bi_1135_, lean_object* v_t_1136_, lean_object* v_b_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
uint8_t v_bi_boxed_1142_; uint8_t v___y_25133__boxed_1143_; lean_object* v_res_1144_; 
v_bi_boxed_1142_ = lean_unbox(v_bi_1135_);
v___y_25133__boxed_1143_ = lean_unbox(v___y_1139_);
v_res_1144_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4(v_x_1134_, v_bi_boxed_1142_, v_t_1136_, v_b_1137_, v___y_1138_, v___y_25133__boxed_1143_, v___y_1140_, v___y_1141_);
lean_dec_ref(v___y_1140_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5(lean_object* v_x_1145_, uint8_t v_bi_1146_, lean_object* v_t_1147_, lean_object* v_b_1148_, lean_object* v___y_1149_, uint8_t v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v___y_1154_; lean_object* v___y_1155_; 
if (v___y_1150_ == 0)
{
v___y_1154_ = v___y_1149_;
v___y_1155_ = v___y_1152_;
goto v___jp_1153_;
}
else
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_t_1147_, v___y_1150_, v___y_1151_, v___y_1152_);
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v_a_1178_; lean_object* v___x_1179_; 
v_a_1178_ = lean_ctor_get(v___x_1177_, 1);
lean_inc(v_a_1178_);
lean_dec_ref_known(v___x_1177_, 2);
v___x_1179_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_b_1148_, v___y_1150_, v___y_1151_, v_a_1178_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_a_1180_; 
v_a_1180_ = lean_ctor_get(v___x_1179_, 1);
lean_inc(v_a_1180_);
lean_dec_ref_known(v___x_1179_, 2);
v___y_1154_ = v___y_1149_;
v___y_1155_ = v_a_1180_;
goto v___jp_1153_;
}
else
{
lean_object* v_a_1181_; lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1189_; 
lean_dec_ref(v___y_1149_);
lean_dec_ref(v_b_1148_);
lean_dec_ref(v_t_1147_);
lean_dec(v_x_1145_);
v_a_1181_ = lean_ctor_get(v___x_1179_, 0);
v_a_1182_ = lean_ctor_get(v___x_1179_, 1);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1184_ = v___x_1179_;
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_inc(v_a_1181_);
lean_dec(v___x_1179_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_a_1181_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
else
{
lean_object* v_a_1190_; lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1198_; 
lean_dec_ref(v___y_1149_);
lean_dec_ref(v_b_1148_);
lean_dec_ref(v_t_1147_);
lean_dec(v_x_1145_);
v_a_1190_ = lean_ctor_get(v___x_1177_, 0);
v_a_1191_ = lean_ctor_get(v___x_1177_, 1);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1193_ = v___x_1177_;
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_inc(v_a_1190_);
lean_dec(v___x_1177_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_a_1190_);
lean_ctor_set(v_reuseFailAlloc_1197_, 1, v_a_1191_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
}
v___jp_1153_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = l_Lean_Expr_forallE___override(v_x_1145_, v_t_1147_, v_b_1148_, v_bi_1146_);
v___x_1157_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1156_, v___y_1155_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1167_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
v_a_1159_ = lean_ctor_get(v___x_1157_, 1);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1161_ = v___x_1157_;
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_inc(v_a_1158_);
lean_dec(v___x_1157_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1163_, 0, v_a_1158_);
lean_ctor_set(v___x_1163_, 1, v___y_1154_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 0, v___x_1163_);
v___x_1165_ = v___x_1161_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_a_1159_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
else
{
lean_object* v_a_1168_; lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
lean_dec_ref(v___y_1154_);
v_a_1168_ = lean_ctor_get(v___x_1157_, 0);
v_a_1169_ = lean_ctor_get(v___x_1157_, 1);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1157_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_inc(v_a_1168_);
lean_dec(v___x_1157_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_a_1168_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_a_1169_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5___boxed(lean_object* v_x_1199_, lean_object* v_bi_1200_, lean_object* v_t_1201_, lean_object* v_b_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
uint8_t v_bi_boxed_1207_; uint8_t v___y_25239__boxed_1208_; lean_object* v_res_1209_; 
v_bi_boxed_1207_ = lean_unbox(v_bi_1200_);
v___y_25239__boxed_1208_ = lean_unbox(v___y_1204_);
v_res_1209_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5(v_x_1199_, v_bi_boxed_1207_, v_t_1201_, v_b_1202_, v___y_1203_, v___y_25239__boxed_1208_, v___y_1205_, v___y_1206_);
lean_dec_ref(v___y_1205_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3(lean_object* v_f_1210_, lean_object* v_a_1211_, lean_object* v___y_1212_, uint8_t v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v___y_1217_; lean_object* v___y_1218_; 
if (v___y_1213_ == 0)
{
v___y_1217_ = v___y_1212_;
v___y_1218_ = v___y_1215_;
goto v___jp_1216_;
}
else
{
lean_object* v___x_1240_; 
v___x_1240_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_f_1210_, v___y_1213_, v___y_1214_, v___y_1215_);
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v_a_1241_; lean_object* v___x_1242_; 
v_a_1241_ = lean_ctor_get(v___x_1240_, 1);
lean_inc(v_a_1241_);
lean_dec_ref_known(v___x_1240_, 2);
v___x_1242_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_a_1211_, v___y_1213_, v___y_1214_, v_a_1241_);
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_object* v_a_1243_; 
v_a_1243_ = lean_ctor_get(v___x_1242_, 1);
lean_inc(v_a_1243_);
lean_dec_ref_known(v___x_1242_, 2);
v___y_1217_ = v___y_1212_;
v___y_1218_ = v_a_1243_;
goto v___jp_1216_;
}
else
{
lean_object* v_a_1244_; lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1252_; 
lean_dec_ref(v___y_1212_);
lean_dec_ref(v_a_1211_);
lean_dec_ref(v_f_1210_);
v_a_1244_ = lean_ctor_get(v___x_1242_, 0);
v_a_1245_ = lean_ctor_get(v___x_1242_, 1);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1247_ = v___x_1242_;
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_inc(v_a_1244_);
lean_dec(v___x_1242_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1248_ == 0)
{
v___x_1250_ = v___x_1247_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1244_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v_a_1245_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
}
else
{
lean_object* v_a_1253_; lean_object* v_a_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1261_; 
lean_dec_ref(v___y_1212_);
lean_dec_ref(v_a_1211_);
lean_dec_ref(v_f_1210_);
v_a_1253_ = lean_ctor_get(v___x_1240_, 0);
v_a_1254_ = lean_ctor_get(v___x_1240_, 1);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1240_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1256_ = v___x_1240_;
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_a_1254_);
lean_inc(v_a_1253_);
lean_dec(v___x_1240_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1259_; 
if (v_isShared_1257_ == 0)
{
v___x_1259_ = v___x_1256_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_a_1253_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v_a_1254_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
}
v___jp_1216_:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1219_ = l_Lean_Expr_app___override(v_f_1210_, v_a_1211_);
v___x_1220_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1219_, v___y_1218_);
if (lean_obj_tag(v___x_1220_) == 0)
{
lean_object* v_a_1221_; lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1230_; 
v_a_1221_ = lean_ctor_get(v___x_1220_, 0);
v_a_1222_ = lean_ctor_get(v___x_1220_, 1);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1224_ = v___x_1220_;
v_isShared_1225_ = v_isSharedCheck_1230_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_inc(v_a_1221_);
lean_dec(v___x_1220_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1230_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1226_; lean_object* v___x_1228_; 
v___x_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1226_, 0, v_a_1221_);
lean_ctor_set(v___x_1226_, 1, v___y_1217_);
if (v_isShared_1225_ == 0)
{
lean_ctor_set(v___x_1224_, 0, v___x_1226_);
v___x_1228_ = v___x_1224_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1226_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v_a_1222_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
else
{
lean_object* v_a_1231_; lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
lean_dec_ref(v___y_1217_);
v_a_1231_ = lean_ctor_get(v___x_1220_, 0);
v_a_1232_ = lean_ctor_get(v___x_1220_, 1);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1220_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_inc(v_a_1231_);
lean_dec(v___x_1220_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1231_);
lean_ctor_set(v_reuseFailAlloc_1238_, 1, v_a_1232_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3___boxed(lean_object* v_f_1262_, lean_object* v_a_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
uint8_t v___y_25345__boxed_1268_; lean_object* v_res_1269_; 
v___y_25345__boxed_1268_ = lean_unbox(v___y_1265_);
v_res_1269_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3(v_f_1262_, v_a_1263_, v___y_1264_, v___y_25345__boxed_1268_, v___y_1266_, v___y_1267_);
lean_dec_ref(v___y_1266_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7(lean_object* v_d_1270_, lean_object* v_e_1271_, lean_object* v___y_1272_, uint8_t v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
lean_object* v___y_1277_; lean_object* v___y_1278_; 
if (v___y_1273_ == 0)
{
v___y_1277_ = v___y_1272_;
v___y_1278_ = v___y_1275_;
goto v___jp_1276_;
}
else
{
lean_object* v___x_1300_; 
v___x_1300_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_e_1271_, v___y_1273_, v___y_1274_, v___y_1275_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v_a_1301_; 
v_a_1301_ = lean_ctor_get(v___x_1300_, 1);
lean_inc(v_a_1301_);
lean_dec_ref_known(v___x_1300_, 2);
v___y_1277_ = v___y_1272_;
v___y_1278_ = v_a_1301_;
goto v___jp_1276_;
}
else
{
lean_object* v_a_1302_; lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
lean_dec_ref(v___y_1272_);
lean_dec_ref(v_e_1271_);
lean_dec(v_d_1270_);
v_a_1302_ = lean_ctor_get(v___x_1300_, 0);
v_a_1303_ = lean_ctor_get(v___x_1300_, 1);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___x_1300_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_inc(v_a_1302_);
lean_dec(v___x_1300_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1302_);
lean_ctor_set(v_reuseFailAlloc_1309_, 1, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
}
v___jp_1276_:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1279_ = l_Lean_Expr_mdata___override(v_d_1270_, v_e_1271_);
v___x_1280_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1279_, v___y_1278_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1290_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
v_a_1282_ = lean_ctor_get(v___x_1280_, 1);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1284_ = v___x_1280_;
v_isShared_1285_ = v_isSharedCheck_1290_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_inc(v_a_1281_);
lean_dec(v___x_1280_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1290_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1286_; lean_object* v___x_1288_; 
v___x_1286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1286_, 0, v_a_1281_);
lean_ctor_set(v___x_1286_, 1, v___y_1277_);
if (v_isShared_1285_ == 0)
{
lean_ctor_set(v___x_1284_, 0, v___x_1286_);
v___x_1288_ = v___x_1284_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1286_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v_a_1282_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
else
{
lean_object* v_a_1291_; lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1299_; 
lean_dec_ref(v___y_1277_);
v_a_1291_ = lean_ctor_get(v___x_1280_, 0);
v_a_1292_ = lean_ctor_get(v___x_1280_, 1);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1294_ = v___x_1280_;
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_inc(v_a_1291_);
lean_dec(v___x_1280_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v_a_1291_);
lean_ctor_set(v_reuseFailAlloc_1298_, 1, v_a_1292_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7___boxed(lean_object* v_d_1311_, lean_object* v_e_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
uint8_t v___y_25451__boxed_1317_; lean_object* v_res_1318_; 
v___y_25451__boxed_1317_ = lean_unbox(v___y_1314_);
v_res_1318_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7(v_d_1311_, v_e_1312_, v___y_1313_, v___y_25451__boxed_1317_, v___y_1315_, v___y_1316_);
lean_dec_ref(v___y_1315_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9(lean_object* v_msg_1326_, lean_object* v___y_1327_, uint8_t v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
lean_object* v___f_1331_; lean_object* v___f_1332_; lean_object* v___f_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___f_1343_; lean_object* v___f_1344_; lean_object* v___f_1345_; lean_object* v___f_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_24463__overap_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___f_1331_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__0));
v___f_1332_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__1));
v___f_1333_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__2));
v___x_1334_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__3));
v___x_1335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
lean_ctor_set(v___x_1335_, 1, v___f_1331_);
v___x_1336_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__4));
v___x_1337_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__5));
v___x_1338_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1335_);
lean_ctor_set(v___x_1338_, 1, v___x_1336_);
lean_ctor_set(v___x_1338_, 2, v___f_1332_);
lean_ctor_set(v___x_1338_, 3, v___f_1333_);
lean_ctor_set(v___x_1338_, 4, v___x_1337_);
v___x_1339_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___closed__6));
v___x_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
lean_ctor_set(v___x_1340_, 1, v___x_1339_);
v___x_1341_ = l_ReaderT_instMonad___redArg(v___x_1340_);
v___x_1342_ = l_ReaderT_instMonad___redArg(v___x_1341_);
lean_inc_ref_n(v___x_1342_, 6);
v___f_1343_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1343_, 0, v___x_1342_);
v___f_1344_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1344_, 0, v___x_1342_);
v___f_1345_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1345_, 0, v___x_1342_);
v___f_1346_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_1346_, 0, v___x_1342_);
v___x_1347_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_1347_, 0, lean_box(0));
lean_closure_set(v___x_1347_, 1, lean_box(0));
lean_closure_set(v___x_1347_, 2, v___x_1342_);
v___x_1348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
lean_ctor_set(v___x_1348_, 1, v___f_1343_);
v___x_1349_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_1349_, 0, lean_box(0));
lean_closure_set(v___x_1349_, 1, lean_box(0));
lean_closure_set(v___x_1349_, 2, v___x_1342_);
v___x_1350_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1348_);
lean_ctor_set(v___x_1350_, 1, v___x_1349_);
lean_ctor_set(v___x_1350_, 2, v___f_1344_);
lean_ctor_set(v___x_1350_, 3, v___f_1345_);
lean_ctor_set(v___x_1350_, 4, v___f_1346_);
v___x_1351_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_1351_, 0, lean_box(0));
lean_closure_set(v___x_1351_, 1, lean_box(0));
lean_closure_set(v___x_1351_, 2, v___x_1342_);
v___x_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1350_);
lean_ctor_set(v___x_1352_, 1, v___x_1351_);
v___x_1353_ = l_Lean_instInhabitedExpr;
v___x_1354_ = l_instInhabitedOfMonad___redArg(v___x_1352_, v___x_1353_);
v___x_24463__overap_1355_ = lean_panic_fn_borrowed(v___x_1354_, v_msg_1326_);
lean_dec(v___x_1354_);
v___x_1356_ = lean_box(v___y_1328_);
lean_inc_ref(v___y_1329_);
v___x_1357_ = lean_apply_4(v___x_24463__overap_1355_, v___y_1327_, v___x_1356_, v___y_1329_, v___y_1330_);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9___boxed(lean_object* v_msg_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
uint8_t v___y_25548__boxed_1363_; lean_object* v_res_1364_; 
v___y_25548__boxed_1363_ = lean_unbox(v___y_1360_);
v_res_1364_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9(v_msg_1358_, v___y_1359_, v___y_25548__boxed_1363_, v___y_1361_, v___y_1362_);
lean_dec_ref(v___y_1361_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8(lean_object* v_structName_1365_, lean_object* v_idx_1366_, lean_object* v_struct_1367_, lean_object* v___y_1368_, uint8_t v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v___y_1373_; lean_object* v___y_1374_; 
if (v___y_1369_ == 0)
{
v___y_1373_ = v___y_1368_;
v___y_1374_ = v___y_1371_;
goto v___jp_1372_;
}
else
{
lean_object* v___x_1396_; 
v___x_1396_ = l_Lean_Meta_Sym_Internal_Builder_assertShared(v_struct_1367_, v___y_1369_, v___y_1370_, v___y_1371_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 1);
lean_inc(v_a_1397_);
lean_dec_ref_known(v___x_1396_, 2);
v___y_1373_ = v___y_1368_;
v___y_1374_ = v_a_1397_;
goto v___jp_1372_;
}
else
{
lean_object* v_a_1398_; lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
lean_dec_ref(v___y_1368_);
lean_dec_ref(v_struct_1367_);
lean_dec(v_idx_1366_);
lean_dec(v_structName_1365_);
v_a_1398_ = lean_ctor_get(v___x_1396_, 0);
v_a_1399_ = lean_ctor_get(v___x_1396_, 1);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1396_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_inc(v_a_1398_);
lean_dec(v___x_1396_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1398_);
lean_ctor_set(v_reuseFailAlloc_1405_, 1, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
v___jp_1372_:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = l_Lean_Expr_proj___override(v_structName_1365_, v_idx_1366_, v_struct_1367_);
v___x_1376_ = l_Lean_Meta_Sym_Internal_Builder_share1___redArg(v___x_1375_, v___y_1374_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v_a_1377_; lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1386_; 
v_a_1377_ = lean_ctor_get(v___x_1376_, 0);
v_a_1378_ = lean_ctor_get(v___x_1376_, 1);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1380_ = v___x_1376_;
v_isShared_1381_ = v_isSharedCheck_1386_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_inc(v_a_1377_);
lean_dec(v___x_1376_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1386_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1382_; lean_object* v___x_1384_; 
v___x_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1382_, 0, v_a_1377_);
lean_ctor_set(v___x_1382_, 1, v___y_1373_);
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 0, v___x_1382_);
v___x_1384_ = v___x_1380_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1382_);
lean_ctor_set(v_reuseFailAlloc_1385_, 1, v_a_1378_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
else
{
lean_object* v_a_1387_; lean_object* v_a_1388_; lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1395_; 
lean_dec_ref(v___y_1373_);
v_a_1387_ = lean_ctor_get(v___x_1376_, 0);
v_a_1388_ = lean_ctor_get(v___x_1376_, 1);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1390_ = v___x_1376_;
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
else
{
lean_inc(v_a_1388_);
lean_inc(v_a_1387_);
lean_dec(v___x_1376_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1393_; 
if (v_isShared_1391_ == 0)
{
v___x_1393_ = v___x_1390_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_a_1387_);
lean_ctor_set(v_reuseFailAlloc_1394_, 1, v_a_1388_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8___boxed(lean_object* v_structName_1407_, lean_object* v_idx_1408_, lean_object* v_struct_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
uint8_t v___y_25619__boxed_1414_; lean_object* v_res_1415_; 
v___y_25619__boxed_1414_ = lean_unbox(v___y_1411_);
v_res_1415_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8(v_structName_1407_, v_idx_1408_, v_struct_1409_, v___y_1410_, v___y_25619__boxed_1414_, v___y_1412_, v___y_1413_);
lean_dec_ref(v___y_1412_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg(lean_object* v_a_1416_, lean_object* v_x_1417_){
_start:
{
if (lean_obj_tag(v_x_1417_) == 0)
{
lean_object* v___x_1418_; 
v___x_1418_ = lean_box(0);
return v___x_1418_;
}
else
{
lean_object* v_key_1419_; lean_object* v_value_1420_; lean_object* v_tail_1421_; lean_object* v_fst_1422_; lean_object* v_snd_1423_; lean_object* v_fst_1424_; lean_object* v_snd_1425_; size_t v___x_1426_; size_t v___x_1427_; uint8_t v___x_1428_; 
v_key_1419_ = lean_ctor_get(v_x_1417_, 0);
v_value_1420_ = lean_ctor_get(v_x_1417_, 1);
v_tail_1421_ = lean_ctor_get(v_x_1417_, 2);
v_fst_1422_ = lean_ctor_get(v_key_1419_, 0);
v_snd_1423_ = lean_ctor_get(v_key_1419_, 1);
v_fst_1424_ = lean_ctor_get(v_a_1416_, 0);
v_snd_1425_ = lean_ctor_get(v_a_1416_, 1);
v___x_1426_ = lean_ptr_addr(v_fst_1422_);
v___x_1427_ = lean_ptr_addr(v_fst_1424_);
v___x_1428_ = lean_usize_dec_eq(v___x_1426_, v___x_1427_);
if (v___x_1428_ == 0)
{
v_x_1417_ = v_tail_1421_;
goto _start;
}
else
{
uint8_t v___x_1430_; 
v___x_1430_ = lean_nat_dec_eq(v_snd_1423_, v_snd_1425_);
if (v___x_1430_ == 0)
{
v_x_1417_ = v_tail_1421_;
goto _start;
}
else
{
lean_object* v___x_1432_; 
lean_inc(v_value_1420_);
v___x_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1432_, 0, v_value_1420_);
return v___x_1432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg___boxed(lean_object* v_a_1433_, lean_object* v_x_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg(v_a_1433_, v_x_1434_);
lean_dec(v_x_1434_);
lean_dec_ref(v_a_1433_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg(lean_object* v_m_1436_, lean_object* v_a_1437_){
_start:
{
lean_object* v_buckets_1438_; lean_object* v_fst_1439_; lean_object* v_snd_1440_; lean_object* v___x_1441_; size_t v___x_1442_; size_t v___x_1443_; size_t v___x_1444_; uint64_t v___x_1445_; uint64_t v___x_1446_; uint64_t v___x_1447_; uint64_t v___x_1448_; uint64_t v___x_1449_; uint64_t v_fold_1450_; uint64_t v___x_1451_; uint64_t v___x_1452_; uint64_t v___x_1453_; size_t v___x_1454_; size_t v___x_1455_; size_t v___x_1456_; size_t v___x_1457_; size_t v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v_buckets_1438_ = lean_ctor_get(v_m_1436_, 1);
v_fst_1439_ = lean_ctor_get(v_a_1437_, 0);
v_snd_1440_ = lean_ctor_get(v_a_1437_, 1);
v___x_1441_ = lean_array_get_size(v_buckets_1438_);
v___x_1442_ = lean_ptr_addr(v_fst_1439_);
v___x_1443_ = ((size_t)3ULL);
v___x_1444_ = lean_usize_shift_right(v___x_1442_, v___x_1443_);
v___x_1445_ = lean_usize_to_uint64(v___x_1444_);
v___x_1446_ = lean_uint64_of_nat(v_snd_1440_);
v___x_1447_ = lean_uint64_mix_hash(v___x_1445_, v___x_1446_);
v___x_1448_ = 32ULL;
v___x_1449_ = lean_uint64_shift_right(v___x_1447_, v___x_1448_);
v_fold_1450_ = lean_uint64_xor(v___x_1447_, v___x_1449_);
v___x_1451_ = 16ULL;
v___x_1452_ = lean_uint64_shift_right(v_fold_1450_, v___x_1451_);
v___x_1453_ = lean_uint64_xor(v_fold_1450_, v___x_1452_);
v___x_1454_ = lean_uint64_to_usize(v___x_1453_);
v___x_1455_ = lean_usize_of_nat(v___x_1441_);
v___x_1456_ = ((size_t)1ULL);
v___x_1457_ = lean_usize_sub(v___x_1455_, v___x_1456_);
v___x_1458_ = lean_usize_land(v___x_1454_, v___x_1457_);
v___x_1459_ = lean_array_uget_borrowed(v_buckets_1438_, v___x_1458_);
v___x_1460_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg(v_a_1437_, v___x_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg___boxed(lean_object* v_m_1461_, lean_object* v_a_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg(v_m_1461_, v_a_1462_);
lean_dec_ref(v_a_1462_);
lean_dec_ref(v_m_1461_);
return v_res_1463_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = l_Array_instInhabited___redArg();
return v___x_1464_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1468_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__3));
v___x_1469_ = lean_unsigned_to_nat(12u);
v___x_1470_ = lean_unsigned_to_nat(234u);
v___x_1471_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__2));
v___x_1472_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1));
v___x_1473_ = l_mkPanicMessageWithDecl(v___x_1472_, v___x_1471_, v___x_1470_, v___x_1469_, v___x_1468_);
return v___x_1473_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1477_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2));
v___x_1478_ = lean_unsigned_to_nat(67u);
v___x_1479_ = lean_unsigned_to_nat(35u);
v___x_1480_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__1));
v___x_1481_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__0));
v___x_1482_ = l_mkPanicMessageWithDecl(v___x_1481_, v___x_1480_, v___x_1479_, v___x_1478_, v___x_1477_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2(lean_object* v_n_1483_, lean_object* v_varDeps_1484_, lean_object* v_xs_1485_, lean_object* v_e_1486_, lean_object* v_offset_1487_, lean_object* v_a_1488_, uint8_t v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_){
_start:
{
switch(lean_obj_tag(v_e_1486_))
{
case 5:
{
lean_object* v_fn_1492_; lean_object* v_arg_1493_; lean_object* v___x_1494_; 
v_fn_1492_ = lean_ctor_get(v_e_1486_, 0);
v_arg_1493_ = lean_ctor_get(v_e_1486_, 1);
lean_inc(v_offset_1487_);
lean_inc_ref(v_fn_1492_);
v___x_1494_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1483_, v_varDeps_1484_, v_xs_1485_, v_fn_1492_, v_offset_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; lean_object* v_a_1496_; lean_object* v_fst_1497_; lean_object* v_snd_1498_; lean_object* v___x_1499_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1495_);
v_a_1496_ = lean_ctor_get(v___x_1494_, 1);
lean_inc(v_a_1496_);
lean_dec_ref_known(v___x_1494_, 2);
v_fst_1497_ = lean_ctor_get(v_a_1495_, 0);
lean_inc(v_fst_1497_);
v_snd_1498_ = lean_ctor_get(v_a_1495_, 1);
lean_inc(v_snd_1498_);
lean_dec(v_a_1495_);
lean_inc_ref(v_arg_1493_);
v___x_1499_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1483_, v_varDeps_1484_, v_xs_1485_, v_arg_1493_, v_offset_1487_, v_snd_1498_, v_a_1489_, v_a_1490_, v_a_1496_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1525_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
v_a_1501_ = lean_ctor_get(v___x_1499_, 1);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1503_ = v___x_1499_;
v_isShared_1504_ = v_isSharedCheck_1525_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_inc(v_a_1500_);
lean_dec(v___x_1499_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1525_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v_fst_1505_; lean_object* v_snd_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1524_; 
v_fst_1505_ = lean_ctor_get(v_a_1500_, 0);
v_snd_1506_ = lean_ctor_get(v_a_1500_, 1);
v_isSharedCheck_1524_ = !lean_is_exclusive(v_a_1500_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1508_ = v_a_1500_;
v_isShared_1509_ = v_isSharedCheck_1524_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_snd_1506_);
lean_inc(v_fst_1505_);
lean_dec(v_a_1500_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1524_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
size_t v___x_1510_; size_t v___x_1511_; uint8_t v___x_1512_; 
v___x_1510_ = lean_ptr_addr(v_fn_1492_);
v___x_1511_ = lean_ptr_addr(v_fst_1497_);
v___x_1512_ = lean_usize_dec_eq(v___x_1510_, v___x_1511_);
if (v___x_1512_ == 0)
{
lean_object* v___x_1513_; 
lean_del_object(v___x_1508_);
lean_del_object(v___x_1503_);
lean_dec_ref_known(v_e_1486_, 2);
v___x_1513_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3(v_fst_1497_, v_fst_1505_, v_snd_1506_, v_a_1489_, v_a_1490_, v_a_1501_);
return v___x_1513_;
}
else
{
size_t v___x_1514_; size_t v___x_1515_; uint8_t v___x_1516_; 
v___x_1514_ = lean_ptr_addr(v_arg_1493_);
v___x_1515_ = lean_ptr_addr(v_fst_1505_);
v___x_1516_ = lean_usize_dec_eq(v___x_1514_, v___x_1515_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; 
lean_del_object(v___x_1508_);
lean_del_object(v___x_1503_);
lean_dec_ref_known(v_e_1486_, 2);
v___x_1517_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__3(v_fst_1497_, v_fst_1505_, v_snd_1506_, v_a_1489_, v_a_1490_, v_a_1501_);
return v___x_1517_;
}
else
{
lean_object* v___x_1519_; 
lean_dec(v_fst_1505_);
lean_dec(v_fst_1497_);
if (v_isShared_1509_ == 0)
{
lean_ctor_set(v___x_1508_, 0, v_e_1486_);
v___x_1519_ = v___x_1508_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_e_1486_);
lean_ctor_set(v_reuseFailAlloc_1523_, 1, v_snd_1506_);
v___x_1519_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
lean_object* v___x_1521_; 
if (v_isShared_1504_ == 0)
{
lean_ctor_set(v___x_1503_, 0, v___x_1519_);
v___x_1521_ = v___x_1503_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v___x_1519_);
lean_ctor_set(v_reuseFailAlloc_1522_, 1, v_a_1501_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1497_);
lean_dec_ref_known(v_e_1486_, 2);
return v___x_1499_;
}
}
else
{
lean_dec_ref_known(v_e_1486_, 2);
lean_dec(v_offset_1487_);
return v___x_1494_;
}
}
case 6:
{
lean_object* v_binderName_1526_; lean_object* v_binderType_1527_; lean_object* v_body_1528_; uint8_t v_binderInfo_1529_; lean_object* v___x_1530_; 
v_binderName_1526_ = lean_ctor_get(v_e_1486_, 0);
v_binderType_1527_ = lean_ctor_get(v_e_1486_, 1);
v_body_1528_ = lean_ctor_get(v_e_1486_, 2);
v_binderInfo_1529_ = lean_ctor_get_uint8(v_e_1486_, sizeof(void*)*3 + 8);
lean_inc(v_offset_1487_);
lean_inc_ref(v_binderType_1527_);
v___x_1530_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1483_, v_varDeps_1484_, v_xs_1485_, v_binderType_1527_, v_offset_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v_a_1532_; lean_object* v_fst_1533_; lean_object* v_snd_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; 
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_a_1531_);
v_a_1532_ = lean_ctor_get(v___x_1530_, 1);
lean_inc(v_a_1532_);
lean_dec_ref_known(v___x_1530_, 2);
v_fst_1533_ = lean_ctor_get(v_a_1531_, 0);
lean_inc(v_fst_1533_);
v_snd_1534_ = lean_ctor_get(v_a_1531_, 1);
lean_inc(v_snd_1534_);
lean_dec(v_a_1531_);
v___x_1535_ = lean_unsigned_to_nat(1u);
v___x_1536_ = lean_nat_add(v_offset_1487_, v___x_1535_);
lean_dec(v_offset_1487_);
lean_inc_ref(v_body_1528_);
v___x_1537_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1483_, v_varDeps_1484_, v_xs_1485_, v_body_1528_, v___x_1536_, v_snd_1534_, v_a_1489_, v_a_1490_, v_a_1532_);
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v_a_1538_; lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1563_; 
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
v_a_1539_ = lean_ctor_get(v___x_1537_, 1);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1541_ = v___x_1537_;
v_isShared_1542_ = v_isSharedCheck_1563_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_inc(v_a_1538_);
lean_dec(v___x_1537_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1563_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v_fst_1543_; lean_object* v_snd_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1562_; 
v_fst_1543_ = lean_ctor_get(v_a_1538_, 0);
v_snd_1544_ = lean_ctor_get(v_a_1538_, 1);
v_isSharedCheck_1562_ = !lean_is_exclusive(v_a_1538_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1546_ = v_a_1538_;
v_isShared_1547_ = v_isSharedCheck_1562_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_snd_1544_);
lean_inc(v_fst_1543_);
lean_dec(v_a_1538_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1562_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
size_t v___x_1548_; size_t v___x_1549_; uint8_t v___x_1550_; 
v___x_1548_ = lean_ptr_addr(v_binderType_1527_);
v___x_1549_ = lean_ptr_addr(v_fst_1533_);
v___x_1550_ = lean_usize_dec_eq(v___x_1548_, v___x_1549_);
if (v___x_1550_ == 0)
{
lean_object* v___x_1551_; 
lean_inc(v_binderName_1526_);
lean_del_object(v___x_1546_);
lean_del_object(v___x_1541_);
lean_dec_ref_known(v_e_1486_, 3);
v___x_1551_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4(v_binderName_1526_, v_binderInfo_1529_, v_fst_1533_, v_fst_1543_, v_snd_1544_, v_a_1489_, v_a_1490_, v_a_1539_);
return v___x_1551_;
}
else
{
size_t v___x_1552_; size_t v___x_1553_; uint8_t v___x_1554_; 
v___x_1552_ = lean_ptr_addr(v_body_1528_);
v___x_1553_ = lean_ptr_addr(v_fst_1543_);
v___x_1554_ = lean_usize_dec_eq(v___x_1552_, v___x_1553_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; 
lean_inc(v_binderName_1526_);
lean_del_object(v___x_1546_);
lean_del_object(v___x_1541_);
lean_dec_ref_known(v_e_1486_, 3);
v___x_1555_ = l_Lean_Meta_Sym_Internal_mkLambdaS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__4(v_binderName_1526_, v_binderInfo_1529_, v_fst_1533_, v_fst_1543_, v_snd_1544_, v_a_1489_, v_a_1490_, v_a_1539_);
return v___x_1555_;
}
else
{
lean_object* v___x_1557_; 
lean_dec(v_fst_1543_);
lean_dec(v_fst_1533_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 0, v_e_1486_);
v___x_1557_ = v___x_1546_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_e_1486_);
lean_ctor_set(v_reuseFailAlloc_1561_, 1, v_snd_1544_);
v___x_1557_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1559_; 
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v___x_1557_);
v___x_1559_ = v___x_1541_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1557_);
lean_ctor_set(v_reuseFailAlloc_1560_, 1, v_a_1539_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1533_);
lean_dec_ref_known(v_e_1486_, 3);
return v___x_1537_;
}
}
else
{
lean_dec_ref_known(v_e_1486_, 3);
lean_dec(v_offset_1487_);
return v___x_1530_;
}
}
case 7:
{
lean_object* v_binderName_1564_; lean_object* v_binderType_1565_; lean_object* v_body_1566_; uint8_t v_binderInfo_1567_; lean_object* v___x_1568_; 
v_binderName_1564_ = lean_ctor_get(v_e_1486_, 0);
v_binderType_1565_ = lean_ctor_get(v_e_1486_, 1);
v_body_1566_ = lean_ctor_get(v_e_1486_, 2);
v_binderInfo_1567_ = lean_ctor_get_uint8(v_e_1486_, sizeof(void*)*3 + 8);
lean_inc(v_offset_1487_);
lean_inc_ref(v_binderType_1565_);
v___x_1568_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1483_, v_varDeps_1484_, v_xs_1485_, v_binderType_1565_, v_offset_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v_a_1569_; lean_object* v_a_1570_; lean_object* v_fst_1571_; lean_object* v_snd_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v_a_1569_ = lean_ctor_get(v___x_1568_, 0);
lean_inc(v_a_1569_);
v_a_1570_ = lean_ctor_get(v___x_1568_, 1);
lean_inc(v_a_1570_);
lean_dec_ref_known(v___x_1568_, 2);
v_fst_1571_ = lean_ctor_get(v_a_1569_, 0);
lean_inc(v_fst_1571_);
v_snd_1572_ = lean_ctor_get(v_a_1569_, 1);
lean_inc(v_snd_1572_);
lean_dec(v_a_1569_);
v___x_1573_ = lean_unsigned_to_nat(1u);
v___x_1574_ = lean_nat_add(v_offset_1487_, v___x_1573_);
lean_dec(v_offset_1487_);
lean_inc_ref(v_body_1566_);
v___x_1575_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1483_, v_varDeps_1484_, v_xs_1485_, v_body_1566_, v___x_1574_, v_snd_1572_, v_a_1489_, v_a_1490_, v_a_1570_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_a_1576_; lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1601_; 
v_a_1576_ = lean_ctor_get(v___x_1575_, 0);
v_a_1577_ = lean_ctor_get(v___x_1575_, 1);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1579_ = v___x_1575_;
v_isShared_1580_ = v_isSharedCheck_1601_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_inc(v_a_1576_);
lean_dec(v___x_1575_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1601_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v_fst_1581_; lean_object* v_snd_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1600_; 
v_fst_1581_ = lean_ctor_get(v_a_1576_, 0);
v_snd_1582_ = lean_ctor_get(v_a_1576_, 1);
v_isSharedCheck_1600_ = !lean_is_exclusive(v_a_1576_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1584_ = v_a_1576_;
v_isShared_1585_ = v_isSharedCheck_1600_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_snd_1582_);
lean_inc(v_fst_1581_);
lean_dec(v_a_1576_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1600_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
size_t v___x_1586_; size_t v___x_1587_; uint8_t v___x_1588_; 
v___x_1586_ = lean_ptr_addr(v_binderType_1565_);
v___x_1587_ = lean_ptr_addr(v_fst_1571_);
v___x_1588_ = lean_usize_dec_eq(v___x_1586_, v___x_1587_);
if (v___x_1588_ == 0)
{
lean_object* v___x_1589_; 
lean_inc(v_binderName_1564_);
lean_del_object(v___x_1584_);
lean_del_object(v___x_1579_);
lean_dec_ref_known(v_e_1486_, 3);
v___x_1589_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5(v_binderName_1564_, v_binderInfo_1567_, v_fst_1571_, v_fst_1581_, v_snd_1582_, v_a_1489_, v_a_1490_, v_a_1577_);
return v___x_1589_;
}
else
{
size_t v___x_1590_; size_t v___x_1591_; uint8_t v___x_1592_; 
v___x_1590_ = lean_ptr_addr(v_body_1566_);
v___x_1591_ = lean_ptr_addr(v_fst_1581_);
v___x_1592_ = lean_usize_dec_eq(v___x_1590_, v___x_1591_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; 
lean_inc(v_binderName_1564_);
lean_del_object(v___x_1584_);
lean_del_object(v___x_1579_);
lean_dec_ref_known(v_e_1486_, 3);
v___x_1593_ = l_Lean_Meta_Sym_Internal_mkForallS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__5(v_binderName_1564_, v_binderInfo_1567_, v_fst_1571_, v_fst_1581_, v_snd_1582_, v_a_1489_, v_a_1490_, v_a_1577_);
return v___x_1593_;
}
else
{
lean_object* v___x_1595_; 
lean_dec(v_fst_1581_);
lean_dec(v_fst_1571_);
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 0, v_e_1486_);
v___x_1595_ = v___x_1584_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_e_1486_);
lean_ctor_set(v_reuseFailAlloc_1599_, 1, v_snd_1582_);
v___x_1595_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
lean_object* v___x_1597_; 
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 0, v___x_1595_);
v___x_1597_ = v___x_1579_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v___x_1595_);
lean_ctor_set(v_reuseFailAlloc_1598_, 1, v_a_1577_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fst_1571_);
lean_dec_ref_known(v_e_1486_, 3);
return v___x_1575_;
}
}
else
{
lean_dec_ref_known(v_e_1486_, 3);
lean_dec(v_offset_1487_);
return v___x_1568_;
}
}
case 8:
{
lean_object* v_declName_1602_; lean_object* v_type_1603_; lean_object* v_value_1604_; lean_object* v_body_1605_; uint8_t v_nondep_1606_; lean_object* v___x_1607_; 
v_declName_1602_ = lean_ctor_get(v_e_1486_, 0);
v_type_1603_ = lean_ctor_get(v_e_1486_, 1);
v_value_1604_ = lean_ctor_get(v_e_1486_, 2);
v_body_1605_ = lean_ctor_get(v_e_1486_, 3);
v_nondep_1606_ = lean_ctor_get_uint8(v_e_1486_, sizeof(void*)*4 + 8);
lean_inc(v_offset_1487_);
lean_inc_ref(v_type_1603_);
v___x_1607_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1483_, v_varDeps_1484_, v_xs_1485_, v_type_1603_, v_offset_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v_a_1609_; lean_object* v_fst_1610_; lean_object* v_snd_1611_; lean_object* v___x_1612_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
v_a_1609_ = lean_ctor_get(v___x_1607_, 1);
lean_inc(v_a_1609_);
lean_dec_ref_known(v___x_1607_, 2);
v_fst_1610_ = lean_ctor_get(v_a_1608_, 0);
lean_inc(v_fst_1610_);
v_snd_1611_ = lean_ctor_get(v_a_1608_, 1);
lean_inc(v_snd_1611_);
lean_dec(v_a_1608_);
lean_inc(v_offset_1487_);
lean_inc_ref(v_value_1604_);
v___x_1612_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1483_, v_varDeps_1484_, v_xs_1485_, v_value_1604_, v_offset_1487_, v_snd_1611_, v_a_1489_, v_a_1490_, v_a_1609_);
if (lean_obj_tag(v___x_1612_) == 0)
{
lean_object* v_a_1613_; lean_object* v_a_1614_; lean_object* v_fst_1615_; lean_object* v_snd_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; 
v_a_1613_ = lean_ctor_get(v___x_1612_, 0);
lean_inc(v_a_1613_);
v_a_1614_ = lean_ctor_get(v___x_1612_, 1);
lean_inc(v_a_1614_);
lean_dec_ref_known(v___x_1612_, 2);
v_fst_1615_ = lean_ctor_get(v_a_1613_, 0);
lean_inc(v_fst_1615_);
v_snd_1616_ = lean_ctor_get(v_a_1613_, 1);
lean_inc(v_snd_1616_);
lean_dec(v_a_1613_);
v___x_1617_ = lean_unsigned_to_nat(1u);
v___x_1618_ = lean_nat_add(v_offset_1487_, v___x_1617_);
lean_dec(v_offset_1487_);
lean_inc_ref(v_body_1605_);
v___x_1619_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1483_, v_varDeps_1484_, v_xs_1485_, v_body_1605_, v___x_1618_, v_snd_1616_, v_a_1489_, v_a_1490_, v_a_1614_);
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v_a_1620_; lean_object* v_a_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1649_; 
v_a_1620_ = lean_ctor_get(v___x_1619_, 0);
v_a_1621_ = lean_ctor_get(v___x_1619_, 1);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1623_ = v___x_1619_;
v_isShared_1624_ = v_isSharedCheck_1649_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_a_1621_);
lean_inc(v_a_1620_);
lean_dec(v___x_1619_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1649_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v_fst_1625_; lean_object* v_snd_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1648_; 
v_fst_1625_ = lean_ctor_get(v_a_1620_, 0);
v_snd_1626_ = lean_ctor_get(v_a_1620_, 1);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_a_1620_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1628_ = v_a_1620_;
v_isShared_1629_ = v_isSharedCheck_1648_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_snd_1626_);
lean_inc(v_fst_1625_);
lean_dec(v_a_1620_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1648_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
size_t v___x_1630_; size_t v___x_1631_; uint8_t v___x_1632_; 
v___x_1630_ = lean_ptr_addr(v_type_1603_);
v___x_1631_ = lean_ptr_addr(v_fst_1610_);
v___x_1632_ = lean_usize_dec_eq(v___x_1630_, v___x_1631_);
if (v___x_1632_ == 0)
{
lean_object* v___x_1633_; 
lean_inc(v_declName_1602_);
lean_del_object(v___x_1628_);
lean_del_object(v___x_1623_);
lean_dec_ref_known(v_e_1486_, 4);
v___x_1633_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(v_declName_1602_, v_fst_1610_, v_fst_1615_, v_fst_1625_, v_nondep_1606_, v_snd_1626_, v_a_1489_, v_a_1490_, v_a_1621_);
return v___x_1633_;
}
else
{
size_t v___x_1634_; size_t v___x_1635_; uint8_t v___x_1636_; 
v___x_1634_ = lean_ptr_addr(v_value_1604_);
v___x_1635_ = lean_ptr_addr(v_fst_1615_);
v___x_1636_ = lean_usize_dec_eq(v___x_1634_, v___x_1635_);
if (v___x_1636_ == 0)
{
lean_object* v___x_1637_; 
lean_inc(v_declName_1602_);
lean_del_object(v___x_1628_);
lean_del_object(v___x_1623_);
lean_dec_ref_known(v_e_1486_, 4);
v___x_1637_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(v_declName_1602_, v_fst_1610_, v_fst_1615_, v_fst_1625_, v_nondep_1606_, v_snd_1626_, v_a_1489_, v_a_1490_, v_a_1621_);
return v___x_1637_;
}
else
{
size_t v___x_1638_; size_t v___x_1639_; uint8_t v___x_1640_; 
v___x_1638_ = lean_ptr_addr(v_body_1605_);
v___x_1639_ = lean_ptr_addr(v_fst_1625_);
v___x_1640_ = lean_usize_dec_eq(v___x_1638_, v___x_1639_);
if (v___x_1640_ == 0)
{
lean_object* v___x_1641_; 
lean_inc(v_declName_1602_);
lean_del_object(v___x_1628_);
lean_del_object(v___x_1623_);
lean_dec_ref_known(v_e_1486_, 4);
v___x_1641_ = l_Lean_Meta_Sym_Internal_mkLetS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__6(v_declName_1602_, v_fst_1610_, v_fst_1615_, v_fst_1625_, v_nondep_1606_, v_snd_1626_, v_a_1489_, v_a_1490_, v_a_1621_);
return v___x_1641_;
}
else
{
lean_object* v___x_1643_; 
lean_dec(v_fst_1625_);
lean_dec(v_fst_1615_);
lean_dec(v_fst_1610_);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v_e_1486_);
v___x_1643_ = v___x_1628_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_e_1486_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v_snd_1626_);
v___x_1643_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
lean_object* v___x_1645_; 
if (v_isShared_1624_ == 0)
{
lean_ctor_set(v___x_1623_, 0, v___x_1643_);
v___x_1645_ = v___x_1623_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___x_1643_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v_a_1621_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
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
lean_dec(v_fst_1615_);
lean_dec(v_fst_1610_);
lean_dec_ref_known(v_e_1486_, 4);
return v___x_1619_;
}
}
else
{
lean_dec(v_fst_1610_);
lean_dec_ref_known(v_e_1486_, 4);
lean_dec(v_offset_1487_);
return v___x_1612_;
}
}
else
{
lean_dec_ref_known(v_e_1486_, 4);
lean_dec(v_offset_1487_);
return v___x_1607_;
}
}
case 10:
{
lean_object* v_data_1650_; lean_object* v_expr_1651_; lean_object* v___x_1652_; 
v_data_1650_ = lean_ctor_get(v_e_1486_, 0);
v_expr_1651_ = lean_ctor_get(v_e_1486_, 1);
lean_inc_ref(v_expr_1651_);
v___x_1652_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1483_, v_varDeps_1484_, v_xs_1485_, v_expr_1651_, v_offset_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1674_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
v_a_1654_ = lean_ctor_get(v___x_1652_, 1);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1656_ = v___x_1652_;
v_isShared_1657_ = v_isSharedCheck_1674_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_inc(v_a_1653_);
lean_dec(v___x_1652_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1674_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v_fst_1658_; lean_object* v_snd_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1673_; 
v_fst_1658_ = lean_ctor_get(v_a_1653_, 0);
v_snd_1659_ = lean_ctor_get(v_a_1653_, 1);
v_isSharedCheck_1673_ = !lean_is_exclusive(v_a_1653_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1661_ = v_a_1653_;
v_isShared_1662_ = v_isSharedCheck_1673_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_snd_1659_);
lean_inc(v_fst_1658_);
lean_dec(v_a_1653_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1673_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
size_t v___x_1663_; size_t v___x_1664_; uint8_t v___x_1665_; 
v___x_1663_ = lean_ptr_addr(v_expr_1651_);
v___x_1664_ = lean_ptr_addr(v_fst_1658_);
v___x_1665_ = lean_usize_dec_eq(v___x_1663_, v___x_1664_);
if (v___x_1665_ == 0)
{
lean_object* v___x_1666_; 
lean_inc(v_data_1650_);
lean_del_object(v___x_1661_);
lean_del_object(v___x_1656_);
lean_dec_ref_known(v_e_1486_, 2);
v___x_1666_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__7(v_data_1650_, v_fst_1658_, v_snd_1659_, v_a_1489_, v_a_1490_, v_a_1654_);
return v___x_1666_;
}
else
{
lean_object* v___x_1668_; 
lean_dec(v_fst_1658_);
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 0, v_e_1486_);
v___x_1668_ = v___x_1661_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_e_1486_);
lean_ctor_set(v_reuseFailAlloc_1672_, 1, v_snd_1659_);
v___x_1668_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
lean_object* v___x_1670_; 
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 0, v___x_1668_);
v___x_1670_ = v___x_1656_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1668_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_a_1654_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_1486_, 2);
return v___x_1652_;
}
}
case 11:
{
lean_object* v_typeName_1675_; lean_object* v_idx_1676_; lean_object* v_struct_1677_; lean_object* v___x_1678_; 
v_typeName_1675_ = lean_ctor_get(v_e_1486_, 0);
v_idx_1676_ = lean_ctor_get(v_e_1486_, 1);
v_struct_1677_ = lean_ctor_get(v_e_1486_, 2);
lean_inc_ref(v_struct_1677_);
v___x_1678_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1483_, v_varDeps_1484_, v_xs_1485_, v_struct_1677_, v_offset_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v_a_1679_; lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1700_; 
v_a_1679_ = lean_ctor_get(v___x_1678_, 0);
v_a_1680_ = lean_ctor_get(v___x_1678_, 1);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1678_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1682_ = v___x_1678_;
v_isShared_1683_ = v_isSharedCheck_1700_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_inc(v_a_1679_);
lean_dec(v___x_1678_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1700_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v_fst_1684_; lean_object* v_snd_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1699_; 
v_fst_1684_ = lean_ctor_get(v_a_1679_, 0);
v_snd_1685_ = lean_ctor_get(v_a_1679_, 1);
v_isSharedCheck_1699_ = !lean_is_exclusive(v_a_1679_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1687_ = v_a_1679_;
v_isShared_1688_ = v_isSharedCheck_1699_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_snd_1685_);
lean_inc(v_fst_1684_);
lean_dec(v_a_1679_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1699_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
size_t v___x_1689_; size_t v___x_1690_; uint8_t v___x_1691_; 
v___x_1689_ = lean_ptr_addr(v_struct_1677_);
v___x_1690_ = lean_ptr_addr(v_fst_1684_);
v___x_1691_ = lean_usize_dec_eq(v___x_1689_, v___x_1690_);
if (v___x_1691_ == 0)
{
lean_object* v___x_1692_; 
lean_inc(v_idx_1676_);
lean_inc(v_typeName_1675_);
lean_del_object(v___x_1687_);
lean_del_object(v___x_1682_);
lean_dec_ref_known(v_e_1486_, 3);
v___x_1692_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__8(v_typeName_1675_, v_idx_1676_, v_fst_1684_, v_snd_1685_, v_a_1489_, v_a_1490_, v_a_1680_);
return v___x_1692_;
}
else
{
lean_object* v___x_1694_; 
lean_dec(v_fst_1684_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 0, v_e_1486_);
v___x_1694_ = v___x_1687_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_e_1486_);
lean_ctor_set(v_reuseFailAlloc_1698_, 1, v_snd_1685_);
v___x_1694_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
lean_object* v___x_1696_; 
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 0, v___x_1694_);
v___x_1696_ = v___x_1682_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v___x_1694_);
lean_ctor_set(v_reuseFailAlloc_1697_, 1, v_a_1680_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_1486_, 3);
return v___x_1678_;
}
}
default: 
{
lean_object* v___x_1701_; lean_object* v___x_1702_; 
lean_dec(v_offset_1487_);
lean_dec_ref(v_e_1486_);
v___x_1701_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__3);
v___x_1702_ = l_panic___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__9(v___x_1701_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_);
return v___x_1702_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(lean_object* v_n_1703_, lean_object* v_varDeps_1704_, lean_object* v_xs_1705_, lean_object* v_e_1706_, lean_object* v_offset_1707_, lean_object* v_a_1708_, uint8_t v_a_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_){
_start:
{
lean_object* v_key_1712_; lean_object* v_a_1714_; lean_object* v___x_1727_; 
lean_inc(v_offset_1707_);
lean_inc_ref(v_e_1706_);
v_key_1712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_1712_, 0, v_e_1706_);
lean_ctor_set(v_key_1712_, 1, v_offset_1707_);
v___x_1727_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg(v_a_1708_, v_key_1712_);
if (lean_obj_tag(v___x_1727_) == 1)
{
lean_object* v_val_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
lean_dec_ref_known(v_key_1712_, 2);
lean_dec(v_offset_1707_);
lean_dec_ref(v_e_1706_);
v_val_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_val_1728_);
lean_dec_ref_known(v___x_1727_, 1);
v___x_1729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1729_, 0, v_val_1728_);
lean_ctor_set(v___x_1729_, 1, v_a_1708_);
v___x_1730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1729_);
lean_ctor_set(v___x_1730_, 1, v_a_1711_);
return v___x_1730_;
}
else
{
lean_object* v___x_1731_; uint8_t v___x_1732_; 
lean_dec(v___x_1727_);
v___x_1731_ = l_Lean_Expr_looseBVarRange(v_e_1706_);
v___x_1732_ = lean_nat_dec_le(v___x_1731_, v_offset_1707_);
lean_dec(v___x_1731_);
if (v___x_1732_ == 0)
{
lean_object* v___x_1733_; 
v___x_1733_ = l_Lean_Expr_getAppFn(v_e_1706_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v_deBruijnIndex_1734_; uint8_t v___x_1735_; 
v_deBruijnIndex_1734_ = lean_ctor_get(v___x_1733_, 0);
lean_inc(v_deBruijnIndex_1734_);
lean_dec_ref_known(v___x_1733_, 1);
v___x_1735_ = lean_nat_dec_le(v_offset_1707_, v_deBruijnIndex_1734_);
if (v___x_1735_ == 0)
{
lean_object* v___x_1736_; 
lean_dec(v_deBruijnIndex_1734_);
lean_dec(v_offset_1707_);
v___x_1736_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v_e_1706_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1711_);
return v___x_1736_;
}
else
{
lean_object* v___x_1737_; uint8_t v___x_1738_; 
v___x_1737_ = lean_nat_add(v_offset_1707_, v_n_1703_);
v___x_1738_ = lean_nat_dec_lt(v_deBruijnIndex_1734_, v___x_1737_);
lean_dec(v___x_1737_);
if (v___x_1738_ == 0)
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
lean_dec(v_offset_1707_);
lean_dec_ref(v_e_1706_);
v___x_1739_ = lean_nat_sub(v_deBruijnIndex_1734_, v_n_1703_);
lean_dec(v_deBruijnIndex_1734_);
v___x_1740_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___redArg(v___x_1739_, v_a_1711_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v_a_1742_; lean_object* v___x_1743_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_a_1741_);
v_a_1742_ = lean_ctor_get(v___x_1740_, 1);
lean_inc(v_a_1742_);
lean_dec_ref_known(v___x_1740_, 2);
v___x_1743_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v_a_1741_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1742_);
return v___x_1743_;
}
else
{
lean_object* v_a_1744_; lean_object* v_a_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1752_; 
lean_dec_ref_known(v_key_1712_, 2);
lean_dec_ref(v_a_1708_);
v_a_1744_ = lean_ctor_get(v___x_1740_, 0);
v_a_1745_ = lean_ctor_get(v___x_1740_, 1);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1747_ = v___x_1740_;
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_a_1745_);
lean_inc(v_a_1744_);
lean_dec(v___x_1740_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1750_; 
if (v_isShared_1748_ == 0)
{
v___x_1750_ = v___x_1747_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_a_1744_);
lean_ctor_set(v_reuseFailAlloc_1751_, 1, v_a_1745_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
}
else
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v_i_1757_; lean_object* v___x_1758_; lean_object* v_expectedNumArgs_1759_; lean_object* v_numArgs_1760_; uint8_t v___x_1761_; 
v___x_1753_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0);
v___x_1754_ = lean_nat_sub(v_deBruijnIndex_1734_, v_offset_1707_);
lean_dec(v_deBruijnIndex_1734_);
v___x_1755_ = lean_nat_sub(v_n_1703_, v___x_1754_);
lean_dec(v___x_1754_);
v___x_1756_ = lean_unsigned_to_nat(1u);
v_i_1757_ = lean_nat_sub(v___x_1755_, v___x_1756_);
lean_dec(v___x_1755_);
v___x_1758_ = lean_array_get_borrowed(v___x_1753_, v_varDeps_1704_, v_i_1757_);
v_expectedNumArgs_1759_ = lean_array_get_size(v___x_1758_);
v_numArgs_1760_ = l_Lean_Expr_getAppNumArgs(v_e_1706_);
v___x_1761_ = lean_nat_dec_lt(v_expectedNumArgs_1759_, v_numArgs_1760_);
if (v___x_1761_ == 0)
{
uint8_t v___x_1762_; 
v___x_1762_ = lean_nat_dec_eq(v_numArgs_1760_, v_expectedNumArgs_1759_);
lean_dec(v_numArgs_1760_);
if (v___x_1762_ == 0)
{
lean_object* v___x_1763_; lean_object* v___x_1764_; 
lean_dec(v_i_1757_);
v___x_1763_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4);
v___x_1764_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1(v___x_1763_, v_a_1709_, v_a_1710_, v_a_1711_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
lean_inc(v_a_1765_);
if (lean_obj_tag(v_a_1765_) == 1)
{
lean_object* v_a_1766_; lean_object* v_val_1767_; lean_object* v___x_1768_; 
lean_dec(v_offset_1707_);
lean_dec_ref(v_e_1706_);
v_a_1766_ = lean_ctor_get(v___x_1764_, 1);
lean_inc(v_a_1766_);
lean_dec_ref_known(v___x_1764_, 2);
v_val_1767_ = lean_ctor_get(v_a_1765_, 0);
lean_inc(v_val_1767_);
lean_dec_ref_known(v_a_1765_, 1);
v___x_1768_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v_val_1767_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1766_);
return v___x_1768_;
}
else
{
lean_object* v_a_1769_; 
lean_dec(v_a_1765_);
v_a_1769_ = lean_ctor_get(v___x_1764_, 1);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1764_, 2);
v_a_1714_ = v_a_1769_;
goto v___jp_1713_;
}
}
else
{
lean_object* v_a_1770_; lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_dec_ref_known(v_key_1712_, 2);
lean_dec_ref(v_a_1708_);
lean_dec(v_offset_1707_);
lean_dec_ref(v_e_1706_);
v_a_1770_ = lean_ctor_get(v___x_1764_, 0);
v_a_1771_ = lean_ctor_get(v___x_1764_, 1);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1764_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_inc(v_a_1770_);
lean_dec(v___x_1764_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1770_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
else
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
lean_dec(v_offset_1707_);
lean_dec_ref(v_e_1706_);
v___x_1779_ = lean_array_fget_borrowed(v_xs_1705_, v_i_1757_);
lean_dec(v_i_1757_);
lean_inc(v___x_1779_);
v___x_1780_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v___x_1779_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1711_);
return v___x_1780_;
}
}
else
{
lean_dec(v_numArgs_1760_);
lean_dec(v_i_1757_);
v_a_1714_ = v_a_1711_;
goto v___jp_1713_;
}
}
}
}
else
{
lean_dec_ref(v___x_1733_);
v_a_1714_ = v_a_1711_;
goto v___jp_1713_;
}
}
else
{
lean_object* v___x_1781_; 
lean_dec(v_offset_1707_);
v___x_1781_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v_e_1706_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1711_);
return v___x_1781_;
}
}
v___jp_1713_:
{
switch(lean_obj_tag(v_e_1706_))
{
case 9:
{
lean_object* v___x_1715_; 
lean_dec(v_offset_1707_);
v___x_1715_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v_e_1706_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1714_);
return v___x_1715_;
}
case 2:
{
lean_object* v___x_1716_; 
lean_dec(v_offset_1707_);
v___x_1716_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v_e_1706_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1714_);
return v___x_1716_;
}
case 0:
{
lean_object* v___x_1717_; 
lean_dec(v_offset_1707_);
v___x_1717_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v_e_1706_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1714_);
return v___x_1717_;
}
case 1:
{
lean_object* v___x_1718_; 
lean_dec(v_offset_1707_);
v___x_1718_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v_e_1706_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1714_);
return v___x_1718_;
}
case 4:
{
lean_object* v___x_1719_; 
lean_dec(v_offset_1707_);
v___x_1719_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v_e_1706_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1714_);
return v___x_1719_;
}
case 3:
{
lean_object* v___x_1720_; 
lean_dec(v_offset_1707_);
v___x_1720_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v_e_1706_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1714_);
return v___x_1720_;
}
default: 
{
lean_object* v___x_1721_; 
v___x_1721_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2(v_n_1703_, v_varDeps_1704_, v_xs_1705_, v_e_1706_, v_offset_1707_, v_a_1708_, v_a_1709_, v_a_1710_, v_a_1714_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v_a_1722_; lean_object* v_a_1723_; lean_object* v_fst_1724_; lean_object* v_snd_1725_; lean_object* v___x_1726_; 
v_a_1722_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_a_1722_);
v_a_1723_ = lean_ctor_get(v___x_1721_, 1);
lean_inc(v_a_1723_);
lean_dec_ref_known(v___x_1721_, 2);
v_fst_1724_ = lean_ctor_get(v_a_1722_, 0);
lean_inc(v_fst_1724_);
v_snd_1725_ = lean_ctor_get(v_a_1722_, 1);
lean_inc(v_snd_1725_);
lean_dec(v_a_1722_);
v___x_1726_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_save(v_key_1712_, v_fst_1724_, v_snd_1725_, v_a_1709_, v_a_1710_, v_a_1723_);
return v___x_1726_;
}
else
{
lean_dec_ref_known(v_key_1712_, 2);
return v___x_1721_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___boxed(lean_object* v_n_1782_, lean_object* v_varDeps_1783_, lean_object* v_xs_1784_, lean_object* v_e_1785_, lean_object* v_offset_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_){
_start:
{
uint8_t v_a_boxed_1791_; lean_object* v_res_1792_; 
v_a_boxed_1791_ = lean_unbox(v_a_1788_);
v_res_1792_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2(v_n_1782_, v_varDeps_1783_, v_xs_1784_, v_e_1785_, v_offset_1786_, v_a_1787_, v_a_boxed_1791_, v_a_1789_, v_a_1790_);
lean_dec_ref(v_a_1789_);
lean_dec_ref(v_xs_1784_);
lean_dec_ref(v_varDeps_1783_);
lean_dec(v_n_1782_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___boxed(lean_object* v_n_1793_, lean_object* v_varDeps_1794_, lean_object* v_xs_1795_, lean_object* v_e_1796_, lean_object* v_offset_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_){
_start:
{
uint8_t v_a_boxed_1802_; lean_object* v_res_1803_; 
v_a_boxed_1802_ = lean_unbox(v_a_1799_);
v_res_1803_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2(v_n_1793_, v_varDeps_1794_, v_xs_1795_, v_e_1796_, v_offset_1797_, v_a_1798_, v_a_boxed_1802_, v_a_1800_, v_a_1801_);
lean_dec_ref(v_a_1800_);
lean_dec_ref(v_xs_1795_);
lean_dec_ref(v_varDeps_1794_);
lean_dec(v_n_1793_);
return v_res_1803_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1804_ = lean_box(0);
v___x_1805_ = lean_unsigned_to_nat(16u);
v___x_1806_ = lean_mk_array(v___x_1805_, v___x_1804_);
return v___x_1806_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1807_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__0);
v___x_1808_ = lean_unsigned_to_nat(0u);
v___x_1809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1808_);
lean_ctor_set(v___x_1809_, 1, v___x_1807_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0(lean_object* v_e_1810_, lean_object* v_n_1811_, lean_object* v_varDeps_1812_, lean_object* v_xs_1813_, uint8_t v_debug_1814_, lean_object* v___x_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v___x_1818_; lean_object* v_a_1820_; lean_object* v___x_1848_; uint8_t v___x_1849_; 
v___x_1818_ = lean_unsigned_to_nat(0u);
v___x_1848_ = l_Lean_Expr_looseBVarRange(v_e_1810_);
v___x_1849_ = lean_nat_dec_le(v___x_1848_, v___x_1818_);
lean_dec(v___x_1848_);
if (v___x_1849_ == 0)
{
lean_object* v___x_1850_; 
v___x_1850_ = l_Lean_Expr_getAppFn(v_e_1810_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_deBruijnIndex_1851_; uint8_t v___x_1852_; 
v_deBruijnIndex_1851_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_deBruijnIndex_1851_);
lean_dec_ref_known(v___x_1850_, 1);
v___x_1852_ = lean_nat_dec_le(v___x_1818_, v_deBruijnIndex_1851_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1853_; 
lean_dec(v_deBruijnIndex_1851_);
v___x_1853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1853_, 0, v_e_1810_);
lean_ctor_set(v___x_1853_, 1, v___y_1817_);
return v___x_1853_;
}
else
{
uint8_t v___x_1854_; 
v___x_1854_ = lean_nat_dec_lt(v_deBruijnIndex_1851_, v_n_1811_);
if (v___x_1854_ == 0)
{
lean_object* v___x_1855_; lean_object* v___x_1856_; 
lean_dec_ref(v_e_1810_);
v___x_1855_ = lean_nat_sub(v_deBruijnIndex_1851_, v_n_1811_);
lean_dec(v_deBruijnIndex_1851_);
v___x_1856_ = l_Lean_Meta_Sym_Internal_mkBVarS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__0___redArg(v___x_1855_, v___y_1817_);
return v___x_1856_;
}
else
{
lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v_i_1859_; lean_object* v___x_1860_; lean_object* v_expectedNumArgs_1861_; lean_object* v_numArgs_1862_; uint8_t v___x_1863_; 
v___x_1857_ = lean_nat_sub(v_n_1811_, v_deBruijnIndex_1851_);
lean_dec(v_deBruijnIndex_1851_);
v___x_1858_ = lean_unsigned_to_nat(1u);
v_i_1859_ = lean_nat_sub(v___x_1857_, v___x_1858_);
lean_dec(v___x_1857_);
v___x_1860_ = lean_array_get_borrowed(v___x_1815_, v_varDeps_1812_, v_i_1859_);
v_expectedNumArgs_1861_ = lean_array_get_size(v___x_1860_);
v_numArgs_1862_ = l_Lean_Expr_getAppNumArgs(v_e_1810_);
v___x_1863_ = lean_nat_dec_lt(v_expectedNumArgs_1861_, v_numArgs_1862_);
if (v___x_1863_ == 0)
{
uint8_t v___x_1864_; 
v___x_1864_ = lean_nat_dec_eq(v_numArgs_1862_, v_expectedNumArgs_1861_);
lean_dec(v_numArgs_1862_);
if (v___x_1864_ == 0)
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
lean_dec(v_i_1859_);
v___x_1865_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__4);
v___x_1866_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__1(v___x_1865_, v_debug_1814_, v___y_1816_, v___y_1817_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v_a_1867_; 
v_a_1867_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_a_1867_);
if (lean_obj_tag(v_a_1867_) == 1)
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1876_; 
lean_dec_ref(v_e_1810_);
v_a_1868_ = lean_ctor_get(v___x_1866_, 1);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1876_ == 0)
{
lean_object* v_unused_1877_; 
v_unused_1877_ = lean_ctor_get(v___x_1866_, 0);
lean_dec(v_unused_1877_);
v___x_1870_ = v___x_1866_;
v_isShared_1871_ = v_isSharedCheck_1876_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1866_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1876_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v_val_1872_; lean_object* v___x_1874_; 
v_val_1872_ = lean_ctor_get(v_a_1867_, 0);
lean_inc(v_val_1872_);
lean_dec_ref_known(v_a_1867_, 1);
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 0, v_val_1872_);
v___x_1874_ = v___x_1870_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_val_1872_);
lean_ctor_set(v_reuseFailAlloc_1875_, 1, v_a_1868_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
else
{
lean_object* v_a_1878_; 
lean_dec(v_a_1867_);
v_a_1878_ = lean_ctor_get(v___x_1866_, 1);
lean_inc(v_a_1878_);
lean_dec_ref_known(v___x_1866_, 2);
v_a_1820_ = v_a_1878_;
goto v___jp_1819_;
}
}
else
{
lean_object* v_a_1879_; lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
lean_dec_ref(v_e_1810_);
v_a_1879_ = lean_ctor_get(v___x_1866_, 0);
v_a_1880_ = lean_ctor_get(v___x_1866_, 1);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1866_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_inc(v_a_1879_);
lean_dec(v___x_1866_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_a_1879_);
lean_ctor_set(v_reuseFailAlloc_1886_, 1, v_a_1880_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
}
else
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
lean_dec_ref(v_e_1810_);
v___x_1888_ = lean_array_fget_borrowed(v_xs_1813_, v_i_1859_);
lean_dec(v_i_1859_);
lean_inc(v___x_1888_);
v___x_1889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1888_);
lean_ctor_set(v___x_1889_, 1, v___y_1817_);
return v___x_1889_;
}
}
else
{
lean_dec(v_numArgs_1862_);
lean_dec(v_i_1859_);
v_a_1820_ = v___y_1817_;
goto v___jp_1819_;
}
}
}
}
else
{
lean_dec_ref(v___x_1850_);
v_a_1820_ = v___y_1817_;
goto v___jp_1819_;
}
}
else
{
lean_object* v___x_1890_; 
v___x_1890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1890_, 0, v_e_1810_);
lean_ctor_set(v___x_1890_, 1, v___y_1817_);
return v___x_1890_;
}
v___jp_1819_:
{
switch(lean_obj_tag(v_e_1810_))
{
case 9:
{
lean_object* v___x_1821_; 
v___x_1821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1821_, 0, v_e_1810_);
lean_ctor_set(v___x_1821_, 1, v_a_1820_);
return v___x_1821_;
}
case 2:
{
lean_object* v___x_1822_; 
v___x_1822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1822_, 0, v_e_1810_);
lean_ctor_set(v___x_1822_, 1, v_a_1820_);
return v___x_1822_;
}
case 0:
{
lean_object* v___x_1823_; 
v___x_1823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1823_, 0, v_e_1810_);
lean_ctor_set(v___x_1823_, 1, v_a_1820_);
return v___x_1823_;
}
case 1:
{
lean_object* v___x_1824_; 
v___x_1824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1824_, 0, v_e_1810_);
lean_ctor_set(v___x_1824_, 1, v_a_1820_);
return v___x_1824_;
}
case 4:
{
lean_object* v___x_1825_; 
v___x_1825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1825_, 0, v_e_1810_);
lean_ctor_set(v___x_1825_, 1, v_a_1820_);
return v___x_1825_;
}
case 3:
{
lean_object* v___x_1826_; 
v___x_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1826_, 0, v_e_1810_);
lean_ctor_set(v___x_1826_, 1, v_a_1820_);
return v___x_1826_;
}
default: 
{
lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1827_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___closed__1);
v___x_1828_ = l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2(v_n_1811_, v_varDeps_1812_, v_xs_1813_, v_e_1810_, v___x_1818_, v___x_1827_, v_debug_1814_, v___y_1816_, v_a_1820_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1838_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
v_a_1830_ = lean_ctor_get(v___x_1828_, 1);
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1832_ = v___x_1828_;
v_isShared_1833_ = v_isSharedCheck_1838_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_inc(v_a_1829_);
lean_dec(v___x_1828_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1838_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v_fst_1834_; lean_object* v___x_1836_; 
v_fst_1834_ = lean_ctor_get(v_a_1829_, 0);
lean_inc(v_fst_1834_);
lean_dec(v_a_1829_);
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 0, v_fst_1834_);
v___x_1836_ = v___x_1832_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v_fst_1834_);
lean_ctor_set(v_reuseFailAlloc_1837_, 1, v_a_1830_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
}
else
{
lean_object* v_a_1839_; lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
v_a_1839_ = lean_ctor_get(v___x_1828_, 0);
v_a_1840_ = lean_ctor_get(v___x_1828_, 1);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1842_ = v___x_1828_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_inc(v_a_1839_);
lean_dec(v___x_1828_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1839_);
lean_ctor_set(v_reuseFailAlloc_1846_, 1, v_a_1840_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___boxed(lean_object* v_e_1891_, lean_object* v_n_1892_, lean_object* v_varDeps_1893_, lean_object* v_xs_1894_, lean_object* v_debug_1895_, lean_object* v___x_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
uint8_t v_debug_boxed_1899_; lean_object* v_res_1900_; 
v_debug_boxed_1899_ = lean_unbox(v_debug_1895_);
v_res_1900_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0(v_e_1891_, v_n_1892_, v_varDeps_1893_, v_xs_1894_, v_debug_boxed_1899_, v___x_1896_, v___y_1897_, v___y_1898_);
lean_dec_ref(v___y_1897_);
lean_dec_ref(v___x_1896_);
lean_dec_ref(v_xs_1894_);
lean_dec_ref(v_varDeps_1893_);
lean_dec(v_n_1892_);
return v_res_1900_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2(void){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1903_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2));
v___x_1904_ = lean_unsigned_to_nat(16u);
v___x_1905_ = lean_unsigned_to_nat(62u);
v___x_1906_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__1));
v___x_1907_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__0));
v___x_1908_ = l_mkPanicMessageWithDecl(v___x_1907_, v___x_1906_, v___x_1905_, v___x_1904_, v___x_1903_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps(lean_object* v_e_1909_, lean_object* v_xs_1910_, lean_object* v_varDeps_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_){
_start:
{
lean_object* v___x_1919_; lean_object* v_n_1920_; lean_object* v___x_1921_; uint8_t v_debug_1922_; lean_object* v___x_1923_; lean_object* v___f_1924_; lean_object* v___x_1925_; lean_object* v_env_1926_; uint8_t v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1919_ = lean_obj_once(&l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0, &l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0_once, _init_l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__0);
v_n_1920_ = lean_array_get_size(v_xs_1910_);
v___x_1921_ = lean_st_ref_get(v_a_1913_);
v_debug_1922_ = lean_ctor_get_uint8(v___x_1921_, sizeof(void*)*11);
lean_dec(v___x_1921_);
v___x_1923_ = lean_box(v_debug_1922_);
v___f_1924_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___lam__0___boxed), 8, 6);
lean_closure_set(v___f_1924_, 0, v_e_1909_);
lean_closure_set(v___f_1924_, 1, v_n_1920_);
lean_closure_set(v___f_1924_, 2, v_varDeps_1911_);
lean_closure_set(v___f_1924_, 3, v_xs_1910_);
lean_closure_set(v___f_1924_, 4, v___x_1923_);
lean_closure_set(v___f_1924_, 5, v___x_1919_);
v___x_1925_ = lean_st_ref_get(v_a_1917_);
v_env_1926_ = lean_ctor_get(v___x_1925_, 0);
lean_inc_ref(v_env_1926_);
lean_dec(v___x_1925_);
v___x_1927_ = 0;
v___x_1928_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_1928_, 0, v_env_1926_);
lean_ctor_set_uint8(v___x_1928_, sizeof(void*)*1, v___x_1927_);
lean_ctor_set_uint8(v___x_1928_, sizeof(void*)*1 + 1, v___x_1927_);
v___x_1929_ = l_Lean_Meta_Sym_runShareCommonM___redArg(v___f_1924_, v___x_1928_, v_a_1913_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1940_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1932_ = v___x_1929_;
v_isShared_1933_ = v_isSharedCheck_1940_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1929_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1940_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
if (lean_obj_tag(v_a_1930_) == 0)
{
lean_object* v___x_1934_; lean_object* v___x_1935_; 
lean_dec_ref_known(v_a_1930_, 1);
lean_del_object(v___x_1932_);
v___x_1934_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___closed__2);
v___x_1935_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(v___x_1934_, v_a_1912_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_, v_a_1917_);
return v___x_1935_;
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; 
v_a_1936_ = lean_ctor_get(v_a_1930_, 0);
lean_inc(v_a_1936_);
lean_dec_ref_known(v_a_1930_, 1);
if (v_isShared_1933_ == 0)
{
lean_ctor_set(v___x_1932_, 0, v_a_1936_);
v___x_1938_ = v___x_1932_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_a_1936_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
}
else
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
v_a_1941_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1929_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1929_);
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
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps___boxed(lean_object* v_e_1949_, lean_object* v_xs_1950_, lean_object* v_varDeps_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_){
_start:
{
lean_object* v_res_1959_; 
v_res_1959_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps(v_e_1949_, v_xs_1950_, v_varDeps_1951_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
lean_dec(v_a_1957_);
lean_dec_ref(v_a_1956_);
lean_dec(v_a_1955_);
lean_dec_ref(v_a_1954_);
lean_dec(v_a_1953_);
lean_dec_ref(v_a_1952_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4(lean_object* v_00_u03b2_1960_, lean_object* v_m_1961_, lean_object* v_a_1962_){
_start:
{
lean_object* v___x_1963_; 
v___x_1963_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___redArg(v_m_1961_, v_a_1962_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1964_, lean_object* v_m_1965_, lean_object* v_a_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4(v_00_u03b2_1964_, v_m_1965_, v_a_1966_);
lean_dec_ref(v_a_1966_);
lean_dec_ref(v_m_1965_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12(lean_object* v_00_u03b2_1968_, lean_object* v_a_1969_, lean_object* v_x_1970_){
_start:
{
lean_object* v___x_1971_; 
v___x_1971_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___redArg(v_a_1969_, v_x_1970_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12___boxed(lean_object* v_00_u03b2_1972_, lean_object* v_a_1973_, lean_object* v_x_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2_spec__4_spec__12(v_00_u03b2_1972_, v_a_1973_, v_x_1974_);
lean_dec(v_x_1974_);
lean_dec_ref(v_a_1973_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg(lean_object* v_name_1976_, lean_object* v_type_1977_, lean_object* v_val_1978_, lean_object* v_k_1979_, uint8_t v_nondep_1980_, uint8_t v_kind_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v___f_1989_; lean_object* v___x_1990_; 
lean_inc(v___y_1983_);
lean_inc_ref(v___y_1982_);
v___f_1989_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go_spec__4_spec__4___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1989_, 0, v_k_1979_);
lean_closure_set(v___f_1989_, 1, v___y_1982_);
lean_closure_set(v___f_1989_, 2, v___y_1983_);
v___x_1990_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1976_, v_type_1977_, v_val_1978_, v___f_1989_, v_nondep_1980_, v_kind_1981_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_);
if (lean_obj_tag(v___x_1990_) == 0)
{
return v___x_1990_;
}
else
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1998_; 
v_a_1991_ = lean_ctor_get(v___x_1990_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1990_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1993_ = v___x_1990_;
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1990_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1991_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg___boxed(lean_object* v_name_1999_, lean_object* v_type_2000_, lean_object* v_val_2001_, lean_object* v_k_2002_, lean_object* v_nondep_2003_, lean_object* v_kind_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_){
_start:
{
uint8_t v_nondep_boxed_2012_; uint8_t v_kind_boxed_2013_; lean_object* v_res_2014_; 
v_nondep_boxed_2012_ = lean_unbox(v_nondep_2003_);
v_kind_boxed_2013_ = lean_unbox(v_kind_2004_);
v_res_2014_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg(v_name_1999_, v_type_2000_, v_val_2001_, v_k_2002_, v_nondep_boxed_2012_, v_kind_boxed_2013_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_);
lean_dec(v___y_2010_);
lean_dec_ref(v___y_2009_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1(lean_object* v_00_u03b1_2015_, lean_object* v_name_2016_, lean_object* v_type_2017_, lean_object* v_val_2018_, lean_object* v_k_2019_, uint8_t v_nondep_2020_, uint8_t v_kind_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_){
_start:
{
lean_object* v___x_2029_; 
v___x_2029_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg(v_name_2016_, v_type_2017_, v_val_2018_, v_k_2019_, v_nondep_2020_, v_kind_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___boxed(lean_object* v_00_u03b1_2030_, lean_object* v_name_2031_, lean_object* v_type_2032_, lean_object* v_val_2033_, lean_object* v_k_2034_, lean_object* v_nondep_2035_, lean_object* v_kind_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_){
_start:
{
uint8_t v_nondep_boxed_2044_; uint8_t v_kind_boxed_2045_; lean_object* v_res_2046_; 
v_nondep_boxed_2044_ = lean_unbox(v_nondep_2035_);
v_kind_boxed_2045_ = lean_unbox(v_kind_2036_);
v_res_2046_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1(v_00_u03b1_2030_, v_name_2031_, v_type_2032_, v_val_2033_, v_k_2034_, v_nondep_boxed_2044_, v_kind_boxed_2045_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec(v___y_2038_);
lean_dec_ref(v___y_2037_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0(lean_object* v_xs_2047_, size_t v_sz_2048_, size_t v_i_2049_, lean_object* v_bs_2050_){
_start:
{
uint8_t v___x_2051_; 
v___x_2051_ = lean_usize_dec_lt(v_i_2049_, v_sz_2048_);
if (v___x_2051_ == 0)
{
lean_object* v___x_2052_; 
v___x_2052_ = l_unsafeCast___redArg(v_bs_2050_);
lean_dec_ref(v_bs_2050_);
return v___x_2052_;
}
else
{
lean_object* v___x_2053_; lean_object* v_v_2054_; lean_object* v___x_2055_; lean_object* v_bs_x27_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; size_t v___x_2059_; size_t v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2053_ = l_Lean_instInhabitedExpr;
v_v_2054_ = lean_array_uget(v_bs_2050_, v_i_2049_);
v___x_2055_ = lean_unsigned_to_nat(0u);
v_bs_x27_2056_ = lean_array_uset(v_bs_2050_, v_i_2049_, v___x_2055_);
v___x_2057_ = l_unsafeCast___redArg(v_v_2054_);
lean_dec(v_v_2054_);
v___x_2058_ = lean_array_get_borrowed(v___x_2053_, v_xs_2047_, v___x_2057_);
lean_dec(v___x_2057_);
v___x_2059_ = ((size_t)1ULL);
v___x_2060_ = lean_usize_add(v_i_2049_, v___x_2059_);
v___x_2061_ = l_unsafeCast___redArg(v___x_2058_);
v___x_2062_ = lean_array_uset(v_bs_x27_2056_, v_i_2049_, v___x_2061_);
v_i_2049_ = v___x_2060_;
v_bs_2050_ = v___x_2062_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0___boxed(lean_object* v_xs_2064_, lean_object* v_sz_2065_, lean_object* v_i_2066_, lean_object* v_bs_2067_){
_start:
{
size_t v_sz_boxed_2068_; size_t v_i_boxed_2069_; lean_object* v_res_2070_; 
v_sz_boxed_2068_ = lean_unbox_usize(v_sz_2065_);
lean_dec(v_sz_2065_);
v_i_boxed_2069_ = lean_unbox_usize(v_i_2066_);
lean_dec(v_i_2066_);
v_res_2070_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0(v_xs_2064_, v_sz_boxed_2068_, v_i_boxed_2069_, v_bs_2067_);
lean_dec_ref(v_xs_2064_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0___boxed(lean_object* v_xs_2071_, lean_object* v_i_2072_, lean_object* v_varDeps_2073_, lean_object* v_args_2074_, lean_object* v_body_2075_, lean_object* v_x_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0(v_xs_2071_, v_i_2072_, v_varDeps_2073_, v_args_2074_, v_body_2075_, v_x_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
lean_dec(v___y_2082_);
lean_dec_ref(v___y_2081_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v_i_2072_);
return v_res_2084_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1(void){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2086_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2));
v___x_2087_ = lean_unsigned_to_nat(30u);
v___x_2088_ = lean_unsigned_to_nat(254u);
v___x_2089_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__0));
v___x_2090_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1));
v___x_2091_ = l_mkPanicMessageWithDecl(v___x_2090_, v___x_2089_, v___x_2088_, v___x_2087_, v___x_2086_);
return v___x_2091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(lean_object* v_varDeps_2092_, lean_object* v_args_2093_, lean_object* v_f_2094_, lean_object* v_xs_2095_, lean_object* v_i_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_){
_start:
{
lean_object* v___x_2104_; uint8_t v___x_2105_; 
v___x_2104_ = lean_array_get_size(v_args_2093_);
v___x_2105_ = lean_nat_dec_lt(v_i_2096_, v___x_2104_);
if (v___x_2105_ == 0)
{
lean_object* v___x_2106_; 
lean_dec(v_i_2096_);
lean_dec_ref(v_args_2093_);
lean_inc_ref(v_xs_2095_);
v___x_2106_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps(v_f_2094_, v_xs_2095_, v_varDeps_2092_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_);
if (lean_obj_tag(v___x_2106_) == 0)
{
lean_object* v_a_2107_; uint8_t v___x_2108_; lean_object* v___x_2109_; 
v_a_2107_ = lean_ctor_get(v___x_2106_, 0);
lean_inc(v_a_2107_);
lean_dec_ref_known(v___x_2106_, 1);
v___x_2108_ = 1;
v___x_2109_ = l_Lean_Meta_mkLetFVars(v_xs_2095_, v_a_2107_, v___x_2105_, v___x_2105_, v___x_2108_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_);
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v_a_2110_; lean_object* v___x_2111_; 
v_a_2110_ = lean_ctor_get(v___x_2109_, 0);
lean_inc(v_a_2110_);
lean_dec_ref_known(v___x_2109_, 1);
v___x_2111_ = l_Lean_Meta_Sym_shareCommonInc(v_a_2110_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_);
return v___x_2111_;
}
else
{
return v___x_2109_;
}
}
else
{
lean_dec_ref(v_xs_2095_);
return v___x_2106_;
}
}
else
{
if (lean_obj_tag(v_f_2094_) == 6)
{
lean_object* v_binderName_2112_; lean_object* v_binderType_2113_; lean_object* v_body_2114_; lean_object* v___f_2115_; lean_object* v_varPos_2116_; size_t v_sz_2117_; size_t v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v_ys_2121_; lean_object* v___x_2122_; lean_object* v_type_2123_; lean_object* v___x_2124_; uint8_t v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
v_binderName_2112_ = lean_ctor_get(v_f_2094_, 0);
lean_inc(v_binderName_2112_);
v_binderType_2113_ = lean_ctor_get(v_f_2094_, 1);
lean_inc_ref(v_binderType_2113_);
v_body_2114_ = lean_ctor_get(v_f_2094_, 2);
lean_inc_ref(v_body_2114_);
lean_dec_ref_known(v_f_2094_, 3);
lean_inc_ref(v_args_2093_);
lean_inc_ref(v_varDeps_2092_);
lean_inc(v_i_2096_);
lean_inc_ref(v_xs_2095_);
v___f_2115_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0___boxed), 13, 5);
lean_closure_set(v___f_2115_, 0, v_xs_2095_);
lean_closure_set(v___f_2115_, 1, v_i_2096_);
lean_closure_set(v___f_2115_, 2, v_varDeps_2092_);
lean_closure_set(v___f_2115_, 3, v_args_2093_);
lean_closure_set(v___f_2115_, 4, v_body_2114_);
v_varPos_2116_ = lean_array_fget(v_varDeps_2092_, v_i_2096_);
lean_dec_ref(v_varDeps_2092_);
v_sz_2117_ = lean_array_size(v_varPos_2116_);
v___x_2118_ = ((size_t)0ULL);
v___x_2119_ = l_unsafeCast___redArg(v_varPos_2116_);
v___x_2120_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__0(v_xs_2095_, v_sz_2117_, v___x_2118_, v___x_2119_);
lean_dec_ref(v_xs_2095_);
v_ys_2121_ = l_unsafeCast___redArg(v___x_2120_);
lean_dec_ref(v___x_2120_);
v___x_2122_ = lean_array_get_size(v_varPos_2116_);
lean_dec(v_varPos_2116_);
v_type_2123_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_consumeForallN(v_binderType_2113_, v___x_2122_);
v___x_2124_ = lean_array_fget(v_args_2093_, v_i_2096_);
lean_dec(v_i_2096_);
lean_dec_ref(v_args_2093_);
v___x_2125_ = 0;
v___x_2126_ = l_Lean_Expr_betaRev(v___x_2124_, v_ys_2121_, v___x_2125_, v___x_2125_);
lean_dec(v_ys_2121_);
v___x_2127_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2126_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_);
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v_a_2128_; uint8_t v___x_2129_; lean_object* v___x_2130_; 
v_a_2128_ = lean_ctor_get(v___x_2127_, 0);
lean_inc(v_a_2128_);
lean_dec_ref_known(v___x_2127_, 1);
v___x_2129_ = 0;
v___x_2130_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go_spec__1___redArg(v_binderName_2112_, v_type_2123_, v_a_2128_, v___f_2115_, v___x_2105_, v___x_2129_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_);
return v___x_2130_;
}
else
{
lean_dec_ref(v_type_2123_);
lean_dec_ref(v___f_2115_);
lean_dec(v_binderName_2112_);
return v___x_2127_;
}
}
else
{
lean_object* v___x_2131_; lean_object* v___x_2132_; 
lean_dec(v_i_2096_);
lean_dec_ref(v_xs_2095_);
lean_dec_ref(v_f_2094_);
lean_dec_ref(v_args_2093_);
lean_dec_ref(v_varDeps_2092_);
v___x_2131_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___closed__1);
v___x_2132_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(v___x_2131_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_);
return v___x_2132_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___lam__0(lean_object* v_xs_2133_, lean_object* v_i_2134_, lean_object* v_varDeps_2135_, lean_object* v_args_2136_, lean_object* v_body_2137_, lean_object* v_x_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = l_Lean_Meta_Sym_shareCommonInc(v_x_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_);
if (lean_obj_tag(v___x_2146_) == 0)
{
lean_object* v_a_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v_a_2147_ = lean_ctor_get(v___x_2146_, 0);
lean_inc(v_a_2147_);
lean_dec_ref_known(v___x_2146_, 1);
v___x_2148_ = lean_array_push(v_xs_2133_, v_a_2147_);
v___x_2149_ = lean_unsigned_to_nat(1u);
v___x_2150_ = lean_nat_add(v_i_2134_, v___x_2149_);
v___x_2151_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(v_varDeps_2135_, v_args_2136_, v_body_2137_, v___x_2148_, v___x_2150_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_);
return v___x_2151_;
}
else
{
lean_dec_ref(v_body_2137_);
lean_dec_ref(v_args_2136_);
lean_dec_ref(v_varDeps_2135_);
lean_dec_ref(v_xs_2133_);
return v___x_2146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg___boxed(lean_object* v_varDeps_2152_, lean_object* v_args_2153_, lean_object* v_f_2154_, lean_object* v_xs_2155_, lean_object* v_i_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(v_varDeps_2152_, v_args_2153_, v_f_2154_, v_xs_2155_, v_i_2156_, v_a_2157_, v_a_2158_, v_a_2159_, v_a_2160_, v_a_2161_, v_a_2162_);
lean_dec(v_a_2162_);
lean_dec_ref(v_a_2161_);
lean_dec(v_a_2160_);
lean_dec_ref(v_a_2159_);
lean_dec(v_a_2158_);
lean_dec_ref(v_a_2157_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go(lean_object* v_varDeps_2165_, lean_object* v_args_2166_, lean_object* v___h_2167_, lean_object* v_f_2168_, lean_object* v_xs_2169_, lean_object* v_i_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_){
_start:
{
lean_object* v___x_2178_; 
v___x_2178_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(v_varDeps_2165_, v_args_2166_, v_f_2168_, v_xs_2169_, v_i_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_);
return v___x_2178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___boxed(lean_object* v_varDeps_2179_, lean_object* v_args_2180_, lean_object* v___h_2181_, lean_object* v_f_2182_, lean_object* v_xs_2183_, lean_object* v_i_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_){
_start:
{
lean_object* v_res_2192_; 
v_res_2192_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go(v_varDeps_2179_, v_args_2180_, v___h_2181_, v_f_2182_, v_xs_2183_, v_i_2184_, v_a_2185_, v_a_2186_, v_a_2187_, v_a_2188_, v_a_2189_, v_a_2190_);
lean_dec(v_a_2190_);
lean_dec_ref(v_a_2189_);
lean_dec(v_a_2188_);
lean_dec_ref(v_a_2187_);
lean_dec(v_a_2186_);
lean_dec_ref(v_a_2185_);
return v_res_2192_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2194_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2));
v___x_2195_ = lean_unsigned_to_nat(40u);
v___x_2196_ = lean_unsigned_to_nat(251u);
v___x_2197_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__0));
v___x_2198_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1));
v___x_2199_ = l_mkPanicMessageWithDecl(v___x_2198_, v___x_2197_, v___x_2196_, v___x_2195_, v___x_2194_);
return v___x_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0(lean_object* v_varDeps_2200_, lean_object* v_x_2201_, lean_object* v_x_2202_, lean_object* v_x_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
if (lean_obj_tag(v_x_2201_) == 5)
{
lean_object* v_fn_2211_; lean_object* v_arg_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
v_fn_2211_ = lean_ctor_get(v_x_2201_, 0);
lean_inc_ref(v_fn_2211_);
v_arg_2212_ = lean_ctor_get(v_x_2201_, 1);
lean_inc_ref(v_arg_2212_);
lean_dec_ref_known(v_x_2201_, 2);
v___x_2213_ = lean_array_set(v_x_2202_, v_x_2203_, v_arg_2212_);
v___x_2214_ = lean_unsigned_to_nat(1u);
v___x_2215_ = lean_nat_sub(v_x_2203_, v___x_2214_);
lean_dec(v_x_2203_);
v_x_2201_ = v_fn_2211_;
v_x_2202_ = v___x_2213_;
v_x_2203_ = v___x_2215_;
goto _start;
}
else
{
lean_object* v___x_2217_; lean_object* v___x_2218_; uint8_t v___x_2219_; 
lean_dec(v_x_2203_);
v___x_2217_ = lean_array_get_size(v_x_2202_);
v___x_2218_ = lean_array_get_size(v_varDeps_2200_);
v___x_2219_ = lean_nat_dec_eq(v___x_2217_, v___x_2218_);
if (v___x_2219_ == 0)
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
lean_dec_ref(v_x_2202_);
lean_dec_ref(v_x_2201_);
lean_dec_ref(v_varDeps_2200_);
v___x_2220_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___closed__1);
v___x_2221_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__3(v___x_2220_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_);
return v___x_2221_;
}
else
{
lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2222_ = lean_unsigned_to_nat(0u);
v___x_2223_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_toBetaApp___closed__0));
v___x_2224_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_go___redArg(v_varDeps_2200_, v_x_2202_, v_x_2201_, v___x_2223_, v___x_2222_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_);
return v___x_2224_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0___boxed(lean_object* v_varDeps_2225_, lean_object* v_x_2226_, lean_object* v_x_2227_, lean_object* v_x_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v_res_2236_; 
v_res_2236_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0(v_varDeps_2225_, v_x_2226_, v_x_2227_, v_x_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
return v_res_2236_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0(void){
_start:
{
lean_object* v___x_2237_; lean_object* v_dummy_2238_; 
v___x_2237_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3, &l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default___closed__3);
v_dummy_2238_ = l_Lean_Expr_sort___override(v___x_2237_);
return v_dummy_2238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave(lean_object* v_e_2239_, lean_object* v_varDeps_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v_dummy_2248_; lean_object* v_nargs_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v_dummy_2248_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___closed__0);
v_nargs_2249_ = l_Lean_Expr_getAppNumArgs(v_e_2239_);
lean_inc(v_nargs_2249_);
v___x_2250_ = lean_mk_array(v_nargs_2249_, v_dummy_2248_);
v___x_2251_ = lean_unsigned_to_nat(1u);
v___x_2252_ = lean_nat_sub(v_nargs_2249_, v___x_2251_);
lean_dec(v_nargs_2249_);
v___x_2253_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave_spec__0(v_varDeps_2240_, v_e_2239_, v___x_2250_, v___x_2252_, v_a_2241_, v_a_2242_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave___boxed(lean_object* v_e_2254_, lean_object* v_varDeps_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave(v_e_2254_, v_varDeps_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_, v_a_2261_);
lean_dec(v_a_2261_);
lean_dec_ref(v_a_2260_);
lean_dec(v_a_2259_);
lean_dec_ref(v_a_2258_);
lean_dec(v_a_2257_);
lean_dec_ref(v_a_2256_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg(lean_object* v_argUnivs_2264_, lean_object* v_a_2265_){
_start:
{
lean_object* v_snd_2267_; lean_object* v_fst_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2301_; 
v_snd_2267_ = lean_ctor_get(v_a_2265_, 1);
v_fst_2268_ = lean_ctor_get(v_a_2265_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v_a_2265_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2270_ = v_a_2265_;
v_isShared_2271_ = v_isSharedCheck_2301_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_snd_2267_);
lean_inc(v_fst_2268_);
lean_dec(v_a_2265_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2301_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v_fst_2272_; lean_object* v_snd_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2300_; 
v_fst_2272_ = lean_ctor_get(v_snd_2267_, 0);
v_snd_2273_ = lean_ctor_get(v_snd_2267_, 1);
v_isSharedCheck_2300_ = !lean_is_exclusive(v_snd_2267_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2275_ = v_snd_2267_;
v_isShared_2276_ = v_isSharedCheck_2300_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_snd_2273_);
lean_inc(v_fst_2272_);
lean_dec(v_snd_2267_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2300_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2277_; uint8_t v___x_2278_; 
v___x_2277_ = lean_unsigned_to_nat(0u);
v___x_2278_ = lean_nat_dec_lt(v___x_2277_, v_fst_2272_);
if (v___x_2278_ == 0)
{
lean_object* v___x_2280_; 
if (v_isShared_2276_ == 0)
{
v___x_2280_ = v___x_2275_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_fst_2272_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v_snd_2273_);
v___x_2280_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
lean_object* v___x_2282_; 
if (v_isShared_2271_ == 0)
{
lean_ctor_set(v___x_2270_, 1, v___x_2280_);
v___x_2282_ = v___x_2270_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_fst_2268_);
lean_ctor_set(v_reuseFailAlloc_2284_, 1, v___x_2280_);
v___x_2282_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
lean_object* v___x_2283_; 
v___x_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2282_);
return v___x_2283_;
}
}
}
else
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2294_; 
v___x_2286_ = l_Lean_instInhabitedLevel;
v___x_2287_ = lean_unsigned_to_nat(1u);
v___x_2288_ = lean_nat_sub(v_fst_2272_, v___x_2287_);
lean_dec(v_fst_2272_);
v___x_2289_ = lean_array_get_borrowed(v___x_2286_, v_argUnivs_2264_, v___x_2288_);
lean_inc(v___x_2289_);
v___x_2290_ = l_Lean_mkLevelIMax_x27(v___x_2289_, v_fst_2268_);
v___x_2291_ = l_Lean_Level_normalize(v___x_2290_);
lean_dec(v___x_2290_);
lean_inc(v___x_2291_);
v___x_2292_ = lean_array_push(v_snd_2273_, v___x_2291_);
if (v_isShared_2276_ == 0)
{
lean_ctor_set(v___x_2275_, 1, v___x_2292_);
lean_ctor_set(v___x_2275_, 0, v___x_2288_);
v___x_2294_ = v___x_2275_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v___x_2288_);
lean_ctor_set(v_reuseFailAlloc_2299_, 1, v___x_2292_);
v___x_2294_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
lean_object* v___x_2296_; 
if (v_isShared_2271_ == 0)
{
lean_ctor_set(v___x_2270_, 1, v___x_2294_);
lean_ctor_set(v___x_2270_, 0, v___x_2291_);
v___x_2296_ = v___x_2270_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v___x_2291_);
lean_ctor_set(v_reuseFailAlloc_2298_, 1, v___x_2294_);
v___x_2296_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
v_a_2265_ = v___x_2296_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg___boxed(lean_object* v_argUnivs_2302_, lean_object* v_a_2303_, lean_object* v___y_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg(v_argUnivs_2302_, v_a_2303_);
lean_dec_ref(v_argUnivs_2302_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go(lean_object* v_type_2308_, lean_object* v_argUnivs_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_){
_start:
{
if (lean_obj_tag(v_type_2308_) == 7)
{
lean_object* v_binderType_2317_; lean_object* v_body_2318_; lean_object* v___x_2319_; 
v_binderType_2317_ = lean_ctor_get(v_type_2308_, 1);
lean_inc_ref(v_binderType_2317_);
v_body_2318_ = lean_ctor_get(v_type_2308_, 2);
lean_inc_ref(v_body_2318_);
lean_dec_ref_known(v_type_2308_, 3);
v___x_2319_ = l_Lean_Meta_Sym_getLevel___redArg(v_binderType_2317_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_a_2320_; lean_object* v___x_2321_; 
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_a_2320_);
lean_dec_ref_known(v___x_2319_, 1);
v___x_2321_ = lean_array_push(v_argUnivs_2309_, v_a_2320_);
v_type_2308_ = v_body_2318_;
v_argUnivs_2309_ = v___x_2321_;
goto _start;
}
else
{
lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2330_; 
lean_dec_ref(v_body_2318_);
lean_dec_ref(v_argUnivs_2309_);
v_a_2323_ = lean_ctor_get(v___x_2319_, 0);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2325_ = v___x_2319_;
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_dec(v___x_2319_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2328_; 
if (v_isShared_2326_ == 0)
{
v___x_2328_ = v___x_2325_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_a_2323_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
}
}
else
{
lean_object* v___x_2331_; 
v___x_2331_ = l_Lean_Meta_Sym_getLevel___redArg(v_type_2308_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
if (lean_obj_tag(v___x_2331_) == 0)
{
lean_object* v_a_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v_a_2332_ = lean_ctor_get(v___x_2331_, 0);
lean_inc(v_a_2332_);
lean_dec_ref_known(v___x_2331_, 1);
v___x_2333_ = lean_array_get_size(v_argUnivs_2309_);
v___x_2334_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___closed__0));
v___x_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2333_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
v___x_2336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2336_, 0, v_a_2332_);
lean_ctor_set(v___x_2336_, 1, v___x_2335_);
v___x_2337_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg(v_argUnivs_2309_, v___x_2336_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2356_; 
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2337_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2340_ = v___x_2337_;
v_isShared_2341_ = v_isSharedCheck_2356_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2337_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2356_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v_snd_2342_; lean_object* v_snd_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2354_; 
v_snd_2342_ = lean_ctor_get(v_a_2338_, 1);
lean_inc(v_snd_2342_);
lean_dec(v_a_2338_);
v_snd_2343_ = lean_ctor_get(v_snd_2342_, 1);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_snd_2342_);
if (v_isSharedCheck_2354_ == 0)
{
lean_object* v_unused_2355_; 
v_unused_2355_ = lean_ctor_get(v_snd_2342_, 0);
lean_dec(v_unused_2355_);
v___x_2345_ = v_snd_2342_;
v_isShared_2346_ = v_isSharedCheck_2354_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_snd_2343_);
lean_dec(v_snd_2342_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2354_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2347_; lean_object* v___x_2349_; 
v___x_2347_ = l_Array_reverse___redArg(v_snd_2343_);
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 1, v___x_2347_);
lean_ctor_set(v___x_2345_, 0, v_argUnivs_2309_);
v___x_2349_ = v___x_2345_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_argUnivs_2309_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v___x_2347_);
v___x_2349_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
lean_object* v___x_2351_; 
if (v_isShared_2341_ == 0)
{
lean_ctor_set(v___x_2340_, 0, v___x_2349_);
v___x_2351_ = v___x_2340_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2349_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
}
}
else
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
lean_dec_ref(v_argUnivs_2309_);
v_a_2357_ = lean_ctor_get(v___x_2337_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2337_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2337_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2337_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2357_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
lean_dec_ref(v_argUnivs_2309_);
v_a_2365_ = lean_ctor_get(v___x_2331_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2331_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2331_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2331_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___boxed(lean_object* v_type_2373_, lean_object* v_argUnivs_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go(v_type_2373_, v_argUnivs_2374_, v_a_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_, v_a_2380_);
lean_dec(v_a_2380_);
lean_dec_ref(v_a_2379_);
lean_dec(v_a_2378_);
lean_dec_ref(v_a_2377_);
lean_dec(v_a_2376_);
lean_dec_ref(v_a_2375_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0(lean_object* v_argUnivs_2383_, lean_object* v_inst_2384_, lean_object* v_a_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_){
_start:
{
lean_object* v___x_2393_; 
v___x_2393_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___redArg(v_argUnivs_2383_, v_a_2385_);
return v___x_2393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0___boxed(lean_object* v_argUnivs_2394_, lean_object* v_inst_2395_, lean_object* v_a_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go_spec__0(v_argUnivs_2394_, v_inst_2395_, v_a_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec_ref(v_argUnivs_2394_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs(lean_object* v_fType_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_){
_start:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; 
v___x_2413_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go___closed__0));
v___x_2414_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs_go(v_fType_2405_, v___x_2413_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_, v_a_2410_, v_a_2411_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs___boxed(lean_object* v_fType_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs(v_fType_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_);
lean_dec(v_a_2421_);
lean_dec_ref(v_a_2420_);
lean_dec(v_a_2419_);
lean_dec_ref(v_a_2418_);
lean_dec(v_a_2417_);
lean_dec_ref(v_a_2416_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(lean_object* v_fnUnivs_2424_, lean_object* v_argUnivs_2425_, lean_object* v_declName_2426_, lean_object* v_fType_2427_, lean_object* v_i_2428_){
_start:
{
lean_object* v___x_2430_; lean_object* v_00_u03b1_2431_; lean_object* v_00_u03b2_2432_; lean_object* v_u_2433_; lean_object* v_v_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2430_ = l_Lean_instInhabitedLevel;
v_00_u03b1_2431_ = l_Lean_Expr_bindingDomain_x21(v_fType_2427_);
v_00_u03b2_2432_ = l_Lean_Expr_bindingBody_x21(v_fType_2427_);
v_u_2433_ = lean_array_get_borrowed(v___x_2430_, v_argUnivs_2425_, v_i_2428_);
v_v_2434_ = lean_array_get_borrowed(v___x_2430_, v_fnUnivs_2424_, v_i_2428_);
v___x_2435_ = lean_box(0);
lean_inc(v_v_2434_);
v___x_2436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2436_, 0, v_v_2434_);
lean_ctor_set(v___x_2436_, 1, v___x_2435_);
lean_inc(v_u_2433_);
v___x_2437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2437_, 0, v_u_2433_);
lean_ctor_set(v___x_2437_, 1, v___x_2436_);
v___x_2438_ = l_Lean_mkConst(v_declName_2426_, v___x_2437_);
v___x_2439_ = l_Lean_mkAppB(v___x_2438_, v_00_u03b1_2431_, v_00_u03b2_2432_);
v___x_2440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg___boxed(lean_object* v_fnUnivs_2441_, lean_object* v_argUnivs_2442_, lean_object* v_declName_2443_, lean_object* v_fType_2444_, lean_object* v_i_2445_, lean_object* v_a_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(v_fnUnivs_2441_, v_argUnivs_2442_, v_declName_2443_, v_fType_2444_, v_i_2445_);
lean_dec(v_i_2445_);
lean_dec_ref(v_fType_2444_);
lean_dec_ref(v_argUnivs_2442_);
lean_dec_ref(v_fnUnivs_2441_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix(lean_object* v_fnUnivs_2448_, lean_object* v_argUnivs_2449_, lean_object* v_declName_2450_, lean_object* v_fType_2451_, lean_object* v_i_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(v_fnUnivs_2448_, v_argUnivs_2449_, v_declName_2450_, v_fType_2451_, v_i_2452_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___boxed(lean_object* v_fnUnivs_2461_, lean_object* v_argUnivs_2462_, lean_object* v_declName_2463_, lean_object* v_fType_2464_, lean_object* v_i_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_){
_start:
{
lean_object* v_res_2473_; 
v_res_2473_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix(v_fnUnivs_2461_, v_argUnivs_2462_, v_declName_2463_, v_fType_2464_, v_i_2465_, v_a_2466_, v_a_2467_, v_a_2468_, v_a_2469_, v_a_2470_, v_a_2471_);
lean_dec(v_a_2471_);
lean_dec_ref(v_a_2470_);
lean_dec(v_a_2469_);
lean_dec_ref(v_a_2468_);
lean_dec(v_a_2467_);
lean_dec_ref(v_a_2466_);
lean_dec(v_i_2465_);
lean_dec_ref(v_fType_2464_);
lean_dec_ref(v_argUnivs_2462_);
lean_dec_ref(v_fnUnivs_2461_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(lean_object* v_f_2474_, lean_object* v_a_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_){
_start:
{
lean_object* v___y_2484_; lean_object* v___x_2487_; uint8_t v_debug_2488_; 
v___x_2487_ = lean_st_ref_get(v___y_2477_);
v_debug_2488_ = lean_ctor_get_uint8(v___x_2487_, sizeof(void*)*11);
lean_dec(v___x_2487_);
if (v_debug_2488_ == 0)
{
v___y_2484_ = v___y_2477_;
goto v___jp_2483_;
}
else
{
lean_object* v___x_2489_; 
v___x_2489_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_2474_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
if (lean_obj_tag(v___x_2489_) == 0)
{
lean_object* v___x_2490_; 
lean_dec_ref_known(v___x_2489_, 1);
v___x_2490_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
if (lean_obj_tag(v___x_2490_) == 0)
{
lean_dec_ref_known(v___x_2490_, 1);
v___y_2484_ = v___y_2477_;
goto v___jp_2483_;
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
lean_dec_ref(v_a_2475_);
lean_dec_ref(v_f_2474_);
v_a_2491_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2490_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2490_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
}
else
{
lean_object* v_a_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2506_; 
lean_dec_ref(v_a_2475_);
lean_dec_ref(v_f_2474_);
v_a_2499_ = lean_ctor_get(v___x_2489_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2489_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2501_ = v___x_2489_;
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_a_2499_);
lean_dec(v___x_2489_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v___x_2504_; 
if (v_isShared_2502_ == 0)
{
v___x_2504_ = v___x_2501_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v_a_2499_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
}
}
}
}
v___jp_2483_:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2485_ = l_Lean_Expr_app___override(v_f_2474_, v_a_2475_);
v___x_2486_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_2485_, v___y_2484_);
return v___x_2486_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg___boxed(lean_object* v_f_2507_, lean_object* v_a_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(v_f_2507_, v_a_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
lean_dec(v___y_2510_);
lean_dec_ref(v___y_2509_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0(lean_object* v_f_2517_, lean_object* v_a_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
lean_object* v___x_2529_; 
v___x_2529_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(v_f_2517_, v_a_2518_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_);
return v___x_2529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___boxed(lean_object* v_f_2530_, lean_object* v_a_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0(v_f_2530_, v_a_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_);
lean_dec(v___y_2540_);
lean_dec_ref(v___y_2539_);
lean_dec(v___y_2538_);
lean_dec_ref(v___y_2537_);
lean_dec(v___y_2536_);
lean_dec_ref(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec(v___y_2532_);
return v_res_2542_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = l_Lean_Meta_Sym_Simp_instInhabitedSimpM___redArg();
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1(lean_object* v_msg_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
lean_object* v___x_2555_; lean_object* v___x_15363__overap_2556_; lean_object* v___x_2557_; 
v___x_2555_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___closed__0);
v___x_15363__overap_2556_ = lean_panic_fn_borrowed(v___x_2555_, v_msg_2544_);
lean_inc(v___y_2553_);
lean_inc_ref(v___y_2552_);
lean_inc(v___y_2551_);
lean_inc_ref(v___y_2550_);
lean_inc(v___y_2549_);
lean_inc_ref(v___y_2548_);
lean_inc(v___y_2547_);
lean_inc_ref(v___y_2546_);
lean_inc(v___y_2545_);
v___x_2557_ = lean_apply_10(v___x_15363__overap_2556_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_, lean_box(0));
return v___x_2557_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1___boxed(lean_object* v_msg_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1(v_msg_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_);
lean_dec(v___y_2567_);
lean_dec_ref(v___y_2566_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec_ref(v___y_2560_);
lean_dec(v___y_2559_);
return v_res_2569_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7(void){
_start:
{
lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2580_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2___closed__2));
v___x_2581_ = lean_unsigned_to_nat(11u);
v___x_2582_ = lean_unsigned_to_nat(346u);
v___x_2583_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__6));
v___x_2584_ = ((lean_object*)(l___private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visitChild___at___00__private_Lean_Meta_Sym_ReplaceS_0__Lean_Meta_Sym_visit___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_elimAuxApps_spec__2_spec__2___closed__1));
v___x_2585_ = l_mkPanicMessageWithDecl(v___x_2584_, v___x_2583_, v___x_2582_, v___x_2581_, v___x_2580_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go(lean_object* v_fType_2586_, lean_object* v_fnUnivs_2587_, lean_object* v_argUnivs_2588_, lean_object* v_simpBody_2589_, lean_object* v_e_2590_, lean_object* v_i_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_){
_start:
{
switch(lean_obj_tag(v_e_2590_))
{
case 5:
{
lean_object* v_fn_2602_; lean_object* v_arg_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v_fn_2602_ = lean_ctor_get(v_e_2590_, 0);
lean_inc_ref_n(v_fn_2602_, 2);
v_arg_2603_ = lean_ctor_get(v_e_2590_, 1);
lean_inc_ref(v_arg_2603_);
lean_dec_ref_known(v_e_2590_, 2);
v___x_2604_ = lean_unsigned_to_nat(1u);
v___x_2605_ = lean_nat_sub(v_i_2591_, v___x_2604_);
v___x_2606_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go(v_fType_2586_, v_fnUnivs_2587_, v_argUnivs_2588_, v_simpBody_2589_, v_fn_2602_, v___x_2605_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_);
lean_dec(v___x_2605_);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2727_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2609_ = v___x_2606_;
v_isShared_2610_ = v_isSharedCheck_2727_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2606_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2727_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v_fst_2611_; lean_object* v_snd_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2726_; 
v_fst_2611_ = lean_ctor_get(v_a_2607_, 0);
v_snd_2612_ = lean_ctor_get(v_a_2607_, 1);
v_isSharedCheck_2726_ = !lean_is_exclusive(v_a_2607_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2614_ = v_a_2607_;
v_isShared_2615_ = v_isSharedCheck_2726_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_snd_2612_);
lean_inc(v_fst_2611_);
lean_dec(v_a_2607_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2726_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v_r_2617_; lean_object* v___x_2625_; 
lean_inc(v_a_2600_);
lean_inc_ref(v_a_2599_);
lean_inc(v_a_2598_);
lean_inc_ref(v_a_2597_);
lean_inc(v_a_2596_);
lean_inc_ref(v_a_2595_);
lean_inc(v_a_2594_);
lean_inc_ref(v_a_2593_);
lean_inc(v_a_2592_);
lean_inc_ref(v_arg_2603_);
v___x_2625_ = lean_sym_simp(v_arg_2603_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_);
if (lean_obj_tag(v___x_2625_) == 0)
{
lean_object* v_a_2626_; uint8_t v___y_2628_; 
v_a_2626_ = lean_ctor_get(v___x_2625_, 0);
lean_inc(v_a_2626_);
lean_dec_ref_known(v___x_2625_, 1);
if (lean_obj_tag(v_fst_2611_) == 0)
{
if (lean_obj_tag(v_a_2626_) == 0)
{
uint8_t v_contextDependent_2630_; 
lean_dec_ref(v_arg_2603_);
lean_dec_ref(v_fn_2602_);
v_contextDependent_2630_ = lean_ctor_get_uint8(v_fst_2611_, 1);
lean_dec_ref_known(v_fst_2611_, 0);
if (v_contextDependent_2630_ == 0)
{
uint8_t v_contextDependent_2631_; 
v_contextDependent_2631_ = lean_ctor_get_uint8(v_a_2626_, 1);
lean_dec_ref_known(v_a_2626_, 0);
v___y_2628_ = v_contextDependent_2631_;
goto v___jp_2627_;
}
else
{
lean_dec_ref_known(v_a_2626_, 0);
v___y_2628_ = v_contextDependent_2630_;
goto v___jp_2627_;
}
}
else
{
uint8_t v_contextDependent_2632_; lean_object* v_e_x27_2633_; lean_object* v_proof_2634_; uint8_t v_contextDependent_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2659_; 
v_contextDependent_2632_ = lean_ctor_get_uint8(v_fst_2611_, 1);
lean_dec_ref_known(v_fst_2611_, 0);
v_e_x27_2633_ = lean_ctor_get(v_a_2626_, 0);
v_proof_2634_ = lean_ctor_get(v_a_2626_, 1);
v_contextDependent_2635_ = lean_ctor_get_uint8(v_a_2626_, sizeof(void*)*2 + 1);
v_isSharedCheck_2659_ = !lean_is_exclusive(v_a_2626_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2637_ = v_a_2626_;
v_isShared_2638_ = v_isSharedCheck_2659_;
goto v_resetjp_2636_;
}
else
{
lean_inc(v_proof_2634_);
lean_inc(v_e_x27_2633_);
lean_dec(v_a_2626_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2659_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2639_; 
lean_inc_ref(v_e_x27_2633_);
lean_inc_ref(v_fn_2602_);
v___x_2639_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(v_fn_2602_, v_e_x27_2633_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v_a_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; uint8_t v___y_2647_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_a_2640_);
lean_dec_ref_known(v___x_2639_, 1);
v___x_2641_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__1));
v___x_2642_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(v_fnUnivs_2587_, v_argUnivs_2588_, v___x_2641_, v_snd_2612_, v_i_2591_);
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_a_2643_);
lean_dec_ref(v___x_2642_);
v___x_2644_ = l_Lean_mkApp4(v_a_2643_, v_arg_2603_, v_e_x27_2633_, v_fn_2602_, v_proof_2634_);
v___x_2645_ = 0;
if (v_contextDependent_2632_ == 0)
{
v___y_2647_ = v_contextDependent_2635_;
goto v___jp_2646_;
}
else
{
v___y_2647_ = v_contextDependent_2632_;
goto v___jp_2646_;
}
v___jp_2646_:
{
lean_object* v___x_2649_; 
if (v_isShared_2638_ == 0)
{
lean_ctor_set(v___x_2637_, 1, v___x_2644_);
lean_ctor_set(v___x_2637_, 0, v_a_2640_);
v___x_2649_ = v___x_2637_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_a_2640_);
lean_ctor_set(v_reuseFailAlloc_2650_, 1, v___x_2644_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
lean_ctor_set_uint8(v___x_2649_, sizeof(void*)*2, v___x_2645_);
lean_ctor_set_uint8(v___x_2649_, sizeof(void*)*2 + 1, v___y_2647_);
v_r_2617_ = v___x_2649_;
goto v___jp_2616_;
}
}
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2658_; 
lean_del_object(v___x_2637_);
lean_dec_ref(v_proof_2634_);
lean_dec_ref(v_e_x27_2633_);
lean_del_object(v___x_2614_);
lean_dec(v_snd_2612_);
lean_del_object(v___x_2609_);
lean_dec_ref(v_arg_2603_);
lean_dec_ref(v_fn_2602_);
v_a_2651_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2653_ = v___x_2639_;
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2639_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2656_; 
if (v_isShared_2654_ == 0)
{
v___x_2656_ = v___x_2653_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_a_2651_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
return v___x_2656_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_a_2626_) == 0)
{
lean_object* v_e_x27_2660_; lean_object* v_proof_2661_; uint8_t v_contextDependent_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2687_; 
v_e_x27_2660_ = lean_ctor_get(v_fst_2611_, 0);
v_proof_2661_ = lean_ctor_get(v_fst_2611_, 1);
v_contextDependent_2662_ = lean_ctor_get_uint8(v_fst_2611_, sizeof(void*)*2 + 1);
v_isSharedCheck_2687_ = !lean_is_exclusive(v_fst_2611_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2664_ = v_fst_2611_;
v_isShared_2665_ = v_isSharedCheck_2687_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_proof_2661_);
lean_inc(v_e_x27_2660_);
lean_dec(v_fst_2611_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2687_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
uint8_t v_contextDependent_2666_; lean_object* v___x_2667_; 
v_contextDependent_2666_ = lean_ctor_get_uint8(v_a_2626_, 1);
lean_dec_ref_known(v_a_2626_, 0);
lean_inc_ref(v_arg_2603_);
lean_inc_ref(v_e_x27_2660_);
v___x_2667_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(v_e_x27_2660_, v_arg_2603_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v_a_2671_; lean_object* v___x_2672_; uint8_t v___x_2673_; uint8_t v___y_2675_; 
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_a_2668_);
lean_dec_ref_known(v___x_2667_, 1);
v___x_2669_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__3));
v___x_2670_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(v_fnUnivs_2587_, v_argUnivs_2588_, v___x_2669_, v_snd_2612_, v_i_2591_);
v_a_2671_ = lean_ctor_get(v___x_2670_, 0);
lean_inc(v_a_2671_);
lean_dec_ref(v___x_2670_);
v___x_2672_ = l_Lean_mkApp4(v_a_2671_, v_fn_2602_, v_e_x27_2660_, v_proof_2661_, v_arg_2603_);
v___x_2673_ = 0;
if (v_contextDependent_2662_ == 0)
{
v___y_2675_ = v_contextDependent_2666_;
goto v___jp_2674_;
}
else
{
v___y_2675_ = v_contextDependent_2662_;
goto v___jp_2674_;
}
v___jp_2674_:
{
lean_object* v___x_2677_; 
if (v_isShared_2665_ == 0)
{
lean_ctor_set(v___x_2664_, 1, v___x_2672_);
lean_ctor_set(v___x_2664_, 0, v_a_2668_);
v___x_2677_ = v___x_2664_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2668_);
lean_ctor_set(v_reuseFailAlloc_2678_, 1, v___x_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
lean_ctor_set_uint8(v___x_2677_, sizeof(void*)*2, v___x_2673_);
lean_ctor_set_uint8(v___x_2677_, sizeof(void*)*2 + 1, v___y_2675_);
v_r_2617_ = v___x_2677_;
goto v___jp_2616_;
}
}
}
else
{
lean_object* v_a_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2686_; 
lean_del_object(v___x_2664_);
lean_dec_ref(v_proof_2661_);
lean_dec_ref(v_e_x27_2660_);
lean_del_object(v___x_2614_);
lean_dec(v_snd_2612_);
lean_del_object(v___x_2609_);
lean_dec_ref(v_arg_2603_);
lean_dec_ref(v_fn_2602_);
v_a_2679_ = lean_ctor_get(v___x_2667_, 0);
v_isSharedCheck_2686_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2681_ = v___x_2667_;
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_a_2679_);
lean_dec(v___x_2667_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2684_; 
if (v_isShared_2682_ == 0)
{
v___x_2684_ = v___x_2681_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v_a_2679_);
v___x_2684_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
return v___x_2684_;
}
}
}
}
}
else
{
lean_object* v_e_x27_2688_; lean_object* v_proof_2689_; uint8_t v_contextDependent_2690_; lean_object* v_e_x27_2691_; lean_object* v_proof_2692_; uint8_t v_contextDependent_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2717_; 
v_e_x27_2688_ = lean_ctor_get(v_fst_2611_, 0);
lean_inc_ref(v_e_x27_2688_);
v_proof_2689_ = lean_ctor_get(v_fst_2611_, 1);
lean_inc_ref(v_proof_2689_);
v_contextDependent_2690_ = lean_ctor_get_uint8(v_fst_2611_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_fst_2611_, 2);
v_e_x27_2691_ = lean_ctor_get(v_a_2626_, 0);
v_proof_2692_ = lean_ctor_get(v_a_2626_, 1);
v_contextDependent_2693_ = lean_ctor_get_uint8(v_a_2626_, sizeof(void*)*2 + 1);
v_isSharedCheck_2717_ = !lean_is_exclusive(v_a_2626_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2695_ = v_a_2626_;
v_isShared_2696_ = v_isSharedCheck_2717_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_proof_2692_);
lean_inc(v_e_x27_2691_);
lean_dec(v_a_2626_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2717_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2697_; 
lean_inc_ref(v_e_x27_2691_);
lean_inc_ref(v_e_x27_2688_);
v___x_2697_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__0___redArg(v_e_x27_2688_, v_e_x27_2691_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_);
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v_a_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v_a_2701_; lean_object* v___x_2702_; uint8_t v___x_2703_; uint8_t v___y_2705_; 
v_a_2698_ = lean_ctor_get(v___x_2697_, 0);
lean_inc(v_a_2698_);
lean_dec_ref_known(v___x_2697_, 1);
v___x_2699_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__5));
v___x_2700_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_mkCongrPrefix___redArg(v_fnUnivs_2587_, v_argUnivs_2588_, v___x_2699_, v_snd_2612_, v_i_2591_);
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_a_2701_);
lean_dec_ref(v___x_2700_);
v___x_2702_ = l_Lean_mkApp6(v_a_2701_, v_fn_2602_, v_e_x27_2688_, v_arg_2603_, v_e_x27_2691_, v_proof_2689_, v_proof_2692_);
v___x_2703_ = 0;
if (v_contextDependent_2690_ == 0)
{
v___y_2705_ = v_contextDependent_2693_;
goto v___jp_2704_;
}
else
{
v___y_2705_ = v_contextDependent_2690_;
goto v___jp_2704_;
}
v___jp_2704_:
{
lean_object* v___x_2707_; 
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 1, v___x_2702_);
lean_ctor_set(v___x_2695_, 0, v_a_2698_);
v___x_2707_ = v___x_2695_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_a_2698_);
lean_ctor_set(v_reuseFailAlloc_2708_, 1, v___x_2702_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
lean_ctor_set_uint8(v___x_2707_, sizeof(void*)*2, v___x_2703_);
lean_ctor_set_uint8(v___x_2707_, sizeof(void*)*2 + 1, v___y_2705_);
v_r_2617_ = v___x_2707_;
goto v___jp_2616_;
}
}
}
else
{
lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2716_; 
lean_del_object(v___x_2695_);
lean_dec_ref(v_proof_2692_);
lean_dec_ref(v_e_x27_2691_);
lean_dec_ref(v_proof_2689_);
lean_dec_ref(v_e_x27_2688_);
lean_del_object(v___x_2614_);
lean_dec(v_snd_2612_);
lean_del_object(v___x_2609_);
lean_dec_ref(v_arg_2603_);
lean_dec_ref(v_fn_2602_);
v_a_2709_ = lean_ctor_get(v___x_2697_, 0);
v_isSharedCheck_2716_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2716_ == 0)
{
v___x_2711_ = v___x_2697_;
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2697_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2714_; 
if (v_isShared_2712_ == 0)
{
v___x_2714_ = v___x_2711_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_a_2709_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
return v___x_2714_;
}
}
}
}
}
}
v___jp_2627_:
{
lean_object* v___x_2629_; 
v___x_2629_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v___y_2628_);
v_r_2617_ = v___x_2629_;
goto v___jp_2616_;
}
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
lean_del_object(v___x_2614_);
lean_dec(v_snd_2612_);
lean_dec(v_fst_2611_);
lean_del_object(v___x_2609_);
lean_dec_ref(v_arg_2603_);
lean_dec_ref(v_fn_2602_);
v_a_2718_ = lean_ctor_get(v___x_2625_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2625_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v___x_2625_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___x_2625_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
v___jp_2616_:
{
lean_object* v___x_2618_; lean_object* v___x_2620_; 
v___x_2618_ = l_Lean_Expr_bindingBody_x21(v_snd_2612_);
lean_dec(v_snd_2612_);
if (v_isShared_2615_ == 0)
{
lean_ctor_set(v___x_2614_, 1, v___x_2618_);
lean_ctor_set(v___x_2614_, 0, v_r_2617_);
v___x_2620_ = v___x_2614_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_r_2617_);
lean_ctor_set(v_reuseFailAlloc_2624_, 1, v___x_2618_);
v___x_2620_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
lean_object* v___x_2622_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 0, v___x_2620_);
v___x_2622_ = v___x_2609_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v___x_2620_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_2603_);
lean_dec_ref(v_fn_2602_);
return v___x_2606_;
}
}
case 6:
{
lean_object* v___x_2728_; 
lean_inc(v_a_2600_);
lean_inc_ref(v_a_2599_);
lean_inc(v_a_2598_);
lean_inc_ref(v_a_2597_);
lean_inc(v_a_2596_);
lean_inc_ref(v_a_2595_);
lean_inc(v_a_2594_);
lean_inc_ref(v_a_2593_);
lean_inc(v_a_2592_);
v___x_2728_ = lean_apply_11(v_simpBody_2589_, v_e_2590_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, lean_box(0));
if (lean_obj_tag(v___x_2728_) == 0)
{
lean_object* v_a_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2737_; 
v_a_2729_ = lean_ctor_get(v___x_2728_, 0);
v_isSharedCheck_2737_ = !lean_is_exclusive(v___x_2728_);
if (v_isSharedCheck_2737_ == 0)
{
v___x_2731_ = v___x_2728_;
v_isShared_2732_ = v_isSharedCheck_2737_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_a_2729_);
lean_dec(v___x_2728_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2737_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2733_; lean_object* v___x_2735_; 
v___x_2733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2733_, 0, v_a_2729_);
lean_ctor_set(v___x_2733_, 1, v_fType_2586_);
if (v_isShared_2732_ == 0)
{
lean_ctor_set(v___x_2731_, 0, v___x_2733_);
v___x_2735_ = v___x_2731_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v___x_2733_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
return v___x_2735_;
}
}
}
else
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2745_; 
lean_dec_ref(v_fType_2586_);
v_a_2738_ = lean_ctor_get(v___x_2728_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2728_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2740_ = v___x_2728_;
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2728_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2743_; 
if (v_isShared_2741_ == 0)
{
v___x_2743_ = v___x_2740_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_a_2738_);
v___x_2743_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
return v___x_2743_;
}
}
}
}
default: 
{
lean_object* v___x_2746_; lean_object* v___x_2747_; 
lean_dec_ref(v_e_2590_);
lean_dec_ref(v_simpBody_2589_);
lean_dec_ref(v_fType_2586_);
v___x_2746_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7, &l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7_once, _init_l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___closed__7);
v___x_2747_ = l_panic___at___00__private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go_spec__1(v___x_2746_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_);
return v___x_2747_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go___boxed(lean_object* v_fType_2748_, lean_object* v_fnUnivs_2749_, lean_object* v_argUnivs_2750_, lean_object* v_simpBody_2751_, lean_object* v_e_2752_, lean_object* v_i_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go(v_fType_2748_, v_fnUnivs_2749_, v_argUnivs_2750_, v_simpBody_2751_, v_e_2752_, v_i_2753_, v_a_2754_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_, v_a_2762_);
lean_dec(v_a_2762_);
lean_dec_ref(v_a_2761_);
lean_dec(v_a_2760_);
lean_dec_ref(v_a_2759_);
lean_dec(v_a_2758_);
lean_dec_ref(v_a_2757_);
lean_dec(v_a_2756_);
lean_dec_ref(v_a_2755_);
lean_dec(v_a_2754_);
lean_dec(v_i_2753_);
lean_dec_ref(v_argUnivs_2750_);
lean_dec_ref(v_fnUnivs_2749_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp(lean_object* v_e_2765_, lean_object* v_fType_2766_, lean_object* v_fnUnivs_2767_, lean_object* v_argUnivs_2768_, lean_object* v_simpBody_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_){
_start:
{
lean_object* v_numArgs_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v_numArgs_2780_ = lean_array_get_size(v_argUnivs_2768_);
v___x_2781_ = lean_unsigned_to_nat(1u);
v___x_2782_ = lean_nat_sub(v_numArgs_2780_, v___x_2781_);
v___x_2783_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp_go(v_fType_2766_, v_fnUnivs_2767_, v_argUnivs_2768_, v_simpBody_2769_, v_e_2765_, v___x_2782_, v_a_2770_, v_a_2771_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_, v_a_2778_);
lean_dec(v___x_2782_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v_a_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2792_; 
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2786_ = v___x_2783_;
v_isShared_2787_ = v_isSharedCheck_2792_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_a_2784_);
lean_dec(v___x_2783_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2792_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v_fst_2788_; lean_object* v___x_2790_; 
v_fst_2788_ = lean_ctor_get(v_a_2784_, 0);
lean_inc(v_fst_2788_);
lean_dec(v_a_2784_);
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 0, v_fst_2788_);
v___x_2790_ = v___x_2786_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_fst_2788_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
else
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2800_; 
v_a_2793_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2795_ = v___x_2783_;
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v___x_2783_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2800_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___x_2798_; 
if (v_isShared_2796_ == 0)
{
v___x_2798_ = v___x_2795_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_a_2793_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp___boxed(lean_object* v_e_2801_, lean_object* v_fType_2802_, lean_object* v_fnUnivs_2803_, lean_object* v_argUnivs_2804_, lean_object* v_simpBody_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_, lean_object* v_a_2809_, lean_object* v_a_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_, lean_object* v_a_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp(v_e_2801_, v_fType_2802_, v_fnUnivs_2803_, v_argUnivs_2804_, v_simpBody_2805_, v_a_2806_, v_a_2807_, v_a_2808_, v_a_2809_, v_a_2810_, v_a_2811_, v_a_2812_, v_a_2813_, v_a_2814_);
lean_dec(v_a_2814_);
lean_dec_ref(v_a_2813_);
lean_dec(v_a_2812_);
lean_dec_ref(v_a_2811_);
lean_dec(v_a_2810_);
lean_dec_ref(v_a_2809_);
lean_dec(v_a_2808_);
lean_dec_ref(v_a_2807_);
lean_dec(v_a_2806_);
lean_dec_ref(v_argUnivs_2804_);
lean_dec_ref(v_fnUnivs_2803_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore(lean_object* v_e_2821_, lean_object* v_simpBody_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_, lean_object* v_a_2829_, lean_object* v_a_2830_, lean_object* v_a_2831_){
_start:
{
lean_object* v___x_2833_; 
lean_inc_ref(v_e_2821_);
v___x_2833_ = l_Lean_Meta_Sym_Simp_toBetaApp(v_e_2821_, v_a_2826_, v_a_2827_, v_a_2828_, v_a_2829_, v_a_2830_, v_a_2831_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_object* v_a_2834_; lean_object* v_00_u03b1_2835_; lean_object* v_u_2836_; lean_object* v_e_2837_; lean_object* v_h_2838_; lean_object* v_varDeps_2839_; lean_object* v_fType_2840_; lean_object* v___x_2841_; 
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
lean_inc(v_a_2834_);
lean_dec_ref_known(v___x_2833_, 1);
v_00_u03b1_2835_ = lean_ctor_get(v_a_2834_, 0);
lean_inc_ref(v_00_u03b1_2835_);
v_u_2836_ = lean_ctor_get(v_a_2834_, 1);
lean_inc(v_u_2836_);
v_e_2837_ = lean_ctor_get(v_a_2834_, 2);
lean_inc_ref(v_e_2837_);
v_h_2838_ = lean_ctor_get(v_a_2834_, 3);
lean_inc_ref(v_h_2838_);
v_varDeps_2839_ = lean_ctor_get(v_a_2834_, 4);
lean_inc_ref(v_varDeps_2839_);
v_fType_2840_ = lean_ctor_get(v_a_2834_, 5);
lean_inc_ref_n(v_fType_2840_, 2);
lean_dec(v_a_2834_);
v___x_2841_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_getUnivs(v_fType_2840_, v_a_2826_, v_a_2827_, v_a_2828_, v_a_2829_, v_a_2830_, v_a_2831_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; lean_object* v_argUnivs_2843_; lean_object* v_fnUnivs_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2912_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_a_2842_);
lean_dec_ref_known(v___x_2841_, 1);
v_argUnivs_2843_ = lean_ctor_get(v_a_2842_, 0);
v_fnUnivs_2844_ = lean_ctor_get(v_a_2842_, 1);
v_isSharedCheck_2912_ = !lean_is_exclusive(v_a_2842_);
if (v_isSharedCheck_2912_ == 0)
{
v___x_2846_ = v_a_2842_;
v_isShared_2847_ = v_isSharedCheck_2912_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_fnUnivs_2844_);
lean_inc(v_argUnivs_2843_);
lean_dec(v_a_2842_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2912_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2848_; 
lean_inc_ref(v_e_2837_);
v___x_2848_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpBetaApp(v_e_2837_, v_fType_2840_, v_fnUnivs_2844_, v_argUnivs_2843_, v_simpBody_2822_, v_a_2823_, v_a_2824_, v_a_2825_, v_a_2826_, v_a_2827_, v_a_2828_, v_a_2829_, v_a_2830_, v_a_2831_);
lean_dec_ref(v_argUnivs_2843_);
lean_dec_ref(v_fnUnivs_2844_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2903_; 
v_a_2849_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2851_ = v___x_2848_;
v_isShared_2852_ = v_isSharedCheck_2903_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2848_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2903_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
if (lean_obj_tag(v_a_2849_) == 0)
{
uint8_t v_contextDependent_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2857_; 
lean_del_object(v___x_2846_);
lean_dec_ref(v_varDeps_2839_);
lean_dec_ref(v_h_2838_);
lean_dec_ref(v_e_2837_);
lean_dec_ref(v_e_2821_);
v_contextDependent_2853_ = lean_ctor_get_uint8(v_a_2849_, 1);
lean_dec_ref_known(v_a_2849_, 0);
v___x_2854_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_2853_);
v___x_2855_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2854_);
lean_ctor_set(v___x_2855_, 1, v_00_u03b1_2835_);
lean_ctor_set(v___x_2855_, 2, v_u_2836_);
if (v_isShared_2852_ == 0)
{
lean_ctor_set(v___x_2851_, 0, v___x_2855_);
v___x_2857_ = v___x_2851_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v___x_2855_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
else
{
lean_object* v_e_x27_2859_; lean_object* v_proof_2860_; uint8_t v_contextDependent_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2902_; 
lean_del_object(v___x_2851_);
v_e_x27_2859_ = lean_ctor_get(v_a_2849_, 0);
v_proof_2860_ = lean_ctor_get(v_a_2849_, 1);
v_contextDependent_2861_ = lean_ctor_get_uint8(v_a_2849_, sizeof(void*)*2 + 1);
v_isSharedCheck_2902_ = !lean_is_exclusive(v_a_2849_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2863_ = v_a_2849_;
v_isShared_2864_ = v_isSharedCheck_2902_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_proof_2860_);
lean_inc(v_e_x27_2859_);
lean_dec(v_a_2849_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2902_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2868_; 
v___x_2865_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1));
v___x_2866_ = lean_box(0);
lean_inc(v_u_2836_);
if (v_isShared_2847_ == 0)
{
lean_ctor_set_tag(v___x_2846_, 1);
lean_ctor_set(v___x_2846_, 1, v___x_2866_);
lean_ctor_set(v___x_2846_, 0, v_u_2836_);
v___x_2868_ = v___x_2846_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_u_2836_);
lean_ctor_set(v_reuseFailAlloc_2901_, 1, v___x_2866_);
v___x_2868_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
lean_inc_ref(v___x_2868_);
v___x_2869_ = l_Lean_mkConst(v___x_2865_, v___x_2868_);
lean_inc_ref_n(v_e_x27_2859_, 2);
lean_inc_ref(v_e_2821_);
lean_inc_ref(v_00_u03b1_2835_);
lean_inc_ref(v___x_2869_);
v___x_2870_ = l_Lean_mkApp6(v___x_2869_, v_00_u03b1_2835_, v_e_2821_, v_e_2837_, v_e_x27_2859_, v_h_2838_, v_proof_2860_);
v___x_2871_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toHave(v_e_x27_2859_, v_varDeps_2839_, v_a_2826_, v_a_2827_, v_a_2828_, v_a_2829_, v_a_2830_, v_a_2831_);
if (lean_obj_tag(v___x_2871_) == 0)
{
lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2892_; 
v_a_2872_ = lean_ctor_get(v___x_2871_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2874_ = v___x_2871_;
v_isShared_2875_ = v_isSharedCheck_2892_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v___x_2871_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2892_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; uint8_t v___x_2884_; lean_object* v___x_2886_; 
v___x_2876_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__1));
lean_inc_ref(v___x_2868_);
v___x_2877_ = l_Lean_mkConst(v___x_2876_, v___x_2868_);
lean_inc_n(v_a_2872_, 2);
lean_inc_ref_n(v_e_x27_2859_, 2);
lean_inc_ref_n(v_00_u03b1_2835_, 3);
v___x_2878_ = l_Lean_mkApp3(v___x_2877_, v_00_u03b1_2835_, v_e_x27_2859_, v_a_2872_);
v___x_2879_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3));
v___x_2880_ = l_Lean_mkConst(v___x_2879_, v___x_2868_);
v___x_2881_ = l_Lean_mkAppB(v___x_2880_, v_00_u03b1_2835_, v_e_x27_2859_);
v___x_2882_ = l_Lean_Meta_mkExpectedPropHint(v___x_2881_, v___x_2878_);
v___x_2883_ = l_Lean_mkApp6(v___x_2869_, v_00_u03b1_2835_, v_e_2821_, v_e_x27_2859_, v_a_2872_, v___x_2870_, v___x_2882_);
v___x_2884_ = 0;
if (v_isShared_2864_ == 0)
{
lean_ctor_set(v___x_2863_, 1, v___x_2883_);
lean_ctor_set(v___x_2863_, 0, v_a_2872_);
v___x_2886_ = v___x_2863_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_a_2872_);
lean_ctor_set(v_reuseFailAlloc_2891_, 1, v___x_2883_);
lean_ctor_set_uint8(v_reuseFailAlloc_2891_, sizeof(void*)*2 + 1, v_contextDependent_2861_);
v___x_2886_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2885_;
}
v_reusejp_2885_:
{
lean_object* v___x_2887_; lean_object* v___x_2889_; 
lean_ctor_set_uint8(v___x_2886_, sizeof(void*)*2, v___x_2884_);
v___x_2887_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2886_);
lean_ctor_set(v___x_2887_, 1, v_00_u03b1_2835_);
lean_ctor_set(v___x_2887_, 2, v_u_2836_);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 0, v___x_2887_);
v___x_2889_ = v___x_2874_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v___x_2887_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
return v___x_2889_;
}
}
}
}
else
{
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2900_; 
lean_dec_ref(v___x_2870_);
lean_dec_ref(v___x_2869_);
lean_dec_ref(v___x_2868_);
lean_del_object(v___x_2863_);
lean_dec_ref(v_e_x27_2859_);
lean_dec(v_u_2836_);
lean_dec_ref(v_00_u03b1_2835_);
lean_dec_ref(v_e_2821_);
v_a_2893_ = lean_ctor_get(v___x_2871_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2895_ = v___x_2871_;
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2871_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v___x_2898_; 
if (v_isShared_2896_ == 0)
{
v___x_2898_ = v___x_2895_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_a_2893_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
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
lean_object* v_a_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2911_; 
lean_del_object(v___x_2846_);
lean_dec_ref(v_varDeps_2839_);
lean_dec_ref(v_h_2838_);
lean_dec_ref(v_e_2837_);
lean_dec(v_u_2836_);
lean_dec_ref(v_00_u03b1_2835_);
lean_dec_ref(v_e_2821_);
v_a_2904_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2906_ = v___x_2848_;
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_a_2904_);
lean_dec(v___x_2848_);
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
}
else
{
lean_object* v_a_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2920_; 
lean_dec_ref(v_fType_2840_);
lean_dec_ref(v_varDeps_2839_);
lean_dec_ref(v_h_2838_);
lean_dec_ref(v_e_2837_);
lean_dec(v_u_2836_);
lean_dec_ref(v_00_u03b1_2835_);
lean_dec_ref(v_simpBody_2822_);
lean_dec_ref(v_e_2821_);
v_a_2913_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2915_ = v___x_2841_;
v_isShared_2916_ = v_isSharedCheck_2920_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_a_2913_);
lean_dec(v___x_2841_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2920_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v___x_2918_; 
if (v_isShared_2916_ == 0)
{
v___x_2918_ = v___x_2915_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v_a_2913_);
v___x_2918_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
return v___x_2918_;
}
}
}
}
else
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2928_; 
lean_dec_ref(v_simpBody_2822_);
lean_dec_ref(v_e_2821_);
v_a_2921_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2928_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2923_ = v___x_2833_;
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v___x_2833_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2926_; 
if (v_isShared_2924_ == 0)
{
v___x_2926_ = v___x_2923_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_a_2921_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___boxed(lean_object* v_e_2929_, lean_object* v_simpBody_2930_, lean_object* v_a_2931_, lean_object* v_a_2932_, lean_object* v_a_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_, lean_object* v_a_2938_, lean_object* v_a_2939_, lean_object* v_a_2940_){
_start:
{
lean_object* v_res_2941_; 
v_res_2941_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore(v_e_2929_, v_simpBody_2930_, v_a_2931_, v_a_2932_, v_a_2933_, v_a_2934_, v_a_2935_, v_a_2936_, v_a_2937_, v_a_2938_, v_a_2939_);
lean_dec(v_a_2939_);
lean_dec_ref(v_a_2938_);
lean_dec(v_a_2937_);
lean_dec_ref(v_a_2936_);
lean_dec(v_a_2935_);
lean_dec_ref(v_a_2934_);
lean_dec(v_a_2933_);
lean_dec_ref(v_a_2932_);
lean_dec(v_a_2931_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHave(lean_object* v_e_2942_, lean_object* v_simpBody_2943_, lean_object* v_a_2944_, lean_object* v_a_2945_, lean_object* v_a_2946_, lean_object* v_a_2947_, lean_object* v_a_2948_, lean_object* v_a_2949_, lean_object* v_a_2950_, lean_object* v_a_2951_, lean_object* v_a_2952_){
_start:
{
lean_object* v___x_2954_; 
v___x_2954_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore(v_e_2942_, v_simpBody_2943_, v_a_2944_, v_a_2945_, v_a_2946_, v_a_2947_, v_a_2948_, v_a_2949_, v_a_2950_, v_a_2951_, v_a_2952_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2963_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2957_ = v___x_2954_;
v_isShared_2958_ = v_isSharedCheck_2963_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_a_2955_);
lean_dec(v___x_2954_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2963_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v_result_2959_; lean_object* v___x_2961_; 
v_result_2959_ = lean_ctor_get(v_a_2955_, 0);
lean_inc_ref(v_result_2959_);
lean_dec(v_a_2955_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 0, v_result_2959_);
v___x_2961_ = v___x_2957_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v_result_2959_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
else
{
lean_object* v_a_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2971_; 
v_a_2964_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_2971_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2966_ = v___x_2954_;
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_a_2964_);
lean_dec(v___x_2954_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2969_; 
if (v_isShared_2967_ == 0)
{
v___x_2969_ = v___x_2966_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_a_2964_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHave___boxed(lean_object* v_e_2972_, lean_object* v_simpBody_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_){
_start:
{
lean_object* v_res_2984_; 
v_res_2984_ = l_Lean_Meta_Sym_Simp_simpHave(v_e_2972_, v_simpBody_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_, v_a_2981_, v_a_2982_);
lean_dec(v_a_2982_);
lean_dec_ref(v_a_2981_);
lean_dec(v_a_2980_);
lean_dec_ref(v_a_2979_);
lean_dec(v_a_2978_);
lean_dec_ref(v_a_2977_);
lean_dec(v_a_2976_);
lean_dec_ref(v_a_2975_);
lean_dec(v_a_2974_);
return v_res_2984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused(lean_object* v_e_u2081_2985_, lean_object* v_simpBody_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_, lean_object* v_a_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_){
_start:
{
lean_object* v___x_2997_; 
lean_inc_ref(v_e_u2081_2985_);
v___x_2997_ = l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore(v_e_u2081_2985_, v_simpBody_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_, v_a_2992_, v_a_2993_, v_a_2994_, v_a_2995_);
if (lean_obj_tag(v___x_2997_) == 0)
{
lean_object* v_a_2998_; lean_object* v_result_2999_; 
v_a_2998_ = lean_ctor_get(v___x_2997_, 0);
lean_inc(v_a_2998_);
lean_dec_ref_known(v___x_2997_, 1);
v_result_2999_ = lean_ctor_get(v_a_2998_, 0);
lean_inc_ref(v_result_2999_);
if (lean_obj_tag(v_result_2999_) == 0)
{
lean_object* v_00_u03b1_3000_; lean_object* v_u_3001_; uint8_t v_contextDependent_3002_; lean_object* v___x_3003_; 
v_00_u03b1_3000_ = lean_ctor_get(v_a_2998_, 1);
lean_inc_ref(v_00_u03b1_3000_);
v_u_3001_ = lean_ctor_get(v_a_2998_, 2);
lean_inc(v_u_3001_);
lean_dec(v_a_2998_);
v_contextDependent_3002_ = lean_ctor_get_uint8(v_result_2999_, 1);
lean_dec_ref_known(v_result_2999_, 0);
lean_inc_ref(v_e_u2081_2985_);
v___x_3003_ = l_Lean_Meta_zetaUnused(v_e_u2081_2985_, v_a_2992_, v_a_2993_, v_a_2994_, v_a_2995_);
if (lean_obj_tag(v___x_3003_) == 0)
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3024_; 
v_a_3004_ = lean_ctor_get(v___x_3003_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_3003_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3006_ = v___x_3003_;
v_isShared_3007_ = v_isSharedCheck_3024_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v___x_3003_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3024_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
size_t v___x_3008_; size_t v___x_3009_; uint8_t v___x_3010_; 
v___x_3008_ = lean_ptr_addr(v_e_u2081_2985_);
lean_dec_ref(v_e_u2081_2985_);
v___x_3009_ = lean_ptr_addr(v_a_3004_);
v___x_3010_ = lean_usize_dec_eq(v___x_3008_, v___x_3009_);
if (v___x_3010_ == 0)
{
lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3018_; 
v___x_3011_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3));
v___x_3012_ = lean_box(0);
v___x_3013_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3013_, 0, v_u_3001_);
lean_ctor_set(v___x_3013_, 1, v___x_3012_);
v___x_3014_ = l_Lean_mkConst(v___x_3011_, v___x_3013_);
lean_inc(v_a_3004_);
v___x_3015_ = l_Lean_mkAppB(v___x_3014_, v_00_u03b1_3000_, v_a_3004_);
v___x_3016_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_3016_, 0, v_a_3004_);
lean_ctor_set(v___x_3016_, 1, v___x_3015_);
lean_ctor_set_uint8(v___x_3016_, sizeof(void*)*2, v___x_3010_);
lean_ctor_set_uint8(v___x_3016_, sizeof(void*)*2 + 1, v_contextDependent_3002_);
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 0, v___x_3016_);
v___x_3018_ = v___x_3006_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v___x_3016_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
else
{
lean_object* v___x_3020_; lean_object* v___x_3022_; 
lean_dec(v_a_3004_);
lean_dec(v_u_3001_);
lean_dec_ref(v_00_u03b1_3000_);
v___x_3020_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_3002_);
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 0, v___x_3020_);
v___x_3022_ = v___x_3006_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v___x_3020_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
}
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
lean_dec(v_u_3001_);
lean_dec_ref(v_00_u03b1_3000_);
lean_dec_ref(v_e_u2081_2985_);
v_a_3025_ = lean_ctor_get(v___x_3003_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_3003_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v___x_3003_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_3003_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3025_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
else
{
lean_object* v_00_u03b1_3033_; lean_object* v_u_3034_; lean_object* v_e_x27_3035_; lean_object* v_proof_3036_; uint8_t v_contextDependent_3037_; lean_object* v___x_3038_; 
v_00_u03b1_3033_ = lean_ctor_get(v_a_2998_, 1);
lean_inc_ref(v_00_u03b1_3033_);
v_u_3034_ = lean_ctor_get(v_a_2998_, 2);
lean_inc(v_u_3034_);
lean_dec(v_a_2998_);
v_e_x27_3035_ = lean_ctor_get(v_result_2999_, 0);
v_proof_3036_ = lean_ctor_get(v_result_2999_, 1);
v_contextDependent_3037_ = lean_ctor_get_uint8(v_result_2999_, sizeof(void*)*2 + 1);
lean_inc_ref(v_e_x27_3035_);
v___x_3038_ = l_Lean_Meta_zetaUnused(v_e_x27_3035_, v_a_2992_, v_a_2993_, v_a_2994_, v_a_2995_);
if (lean_obj_tag(v___x_3038_) == 0)
{
lean_object* v_a_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3069_; 
v_a_3039_ = lean_ctor_get(v___x_3038_, 0);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___x_3038_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3041_ = v___x_3038_;
v_isShared_3042_ = v_isSharedCheck_3069_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_a_3039_);
lean_dec(v___x_3038_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3069_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
size_t v___x_3043_; size_t v___x_3044_; uint8_t v___x_3045_; 
v___x_3043_ = lean_ptr_addr(v_e_x27_3035_);
v___x_3044_ = lean_ptr_addr(v_a_3039_);
v___x_3045_ = lean_usize_dec_eq(v___x_3043_, v___x_3044_);
if (v___x_3045_ == 0)
{
lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3063_; 
lean_inc_ref(v_proof_3036_);
lean_inc_ref(v_e_x27_3035_);
v_isSharedCheck_3063_ = !lean_is_exclusive(v_result_2999_);
if (v_isSharedCheck_3063_ == 0)
{
lean_object* v_unused_3064_; lean_object* v_unused_3065_; 
v_unused_3064_ = lean_ctor_get(v_result_2999_, 1);
lean_dec(v_unused_3064_);
v_unused_3065_ = lean_ctor_get(v_result_2999_, 0);
lean_dec(v_unused_3065_);
v___x_3047_ = v_result_2999_;
v_isShared_3048_ = v_isSharedCheck_3063_;
goto v_resetjp_3046_;
}
else
{
lean_dec(v_result_2999_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3063_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3058_; 
v___x_3049_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_simpHaveCore___closed__1));
v___x_3050_ = lean_box(0);
v___x_3051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3051_, 0, v_u_3034_);
lean_ctor_set(v___x_3051_, 1, v___x_3050_);
lean_inc_ref(v___x_3051_);
v___x_3052_ = l_Lean_mkConst(v___x_3049_, v___x_3051_);
v___x_3053_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Have_0__Lean_Meta_Sym_Simp_toBetaApp_go___closed__3));
v___x_3054_ = l_Lean_mkConst(v___x_3053_, v___x_3051_);
lean_inc_n(v_a_3039_, 2);
lean_inc_ref(v_00_u03b1_3033_);
v___x_3055_ = l_Lean_mkAppB(v___x_3054_, v_00_u03b1_3033_, v_a_3039_);
v___x_3056_ = l_Lean_mkApp6(v___x_3052_, v_00_u03b1_3033_, v_e_u2081_2985_, v_e_x27_3035_, v_a_3039_, v_proof_3036_, v___x_3055_);
if (v_isShared_3048_ == 0)
{
lean_ctor_set(v___x_3047_, 1, v___x_3056_);
lean_ctor_set(v___x_3047_, 0, v_a_3039_);
v___x_3058_ = v___x_3047_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v_a_3039_);
lean_ctor_set(v_reuseFailAlloc_3062_, 1, v___x_3056_);
lean_ctor_set_uint8(v_reuseFailAlloc_3062_, sizeof(void*)*2 + 1, v_contextDependent_3037_);
v___x_3058_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
lean_object* v___x_3060_; 
lean_ctor_set_uint8(v___x_3058_, sizeof(void*)*2, v___x_3045_);
if (v_isShared_3042_ == 0)
{
lean_ctor_set(v___x_3041_, 0, v___x_3058_);
v___x_3060_ = v___x_3041_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v___x_3058_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
}
}
else
{
lean_object* v___x_3067_; 
lean_dec(v_a_3039_);
lean_dec(v_u_3034_);
lean_dec_ref(v_00_u03b1_3033_);
lean_dec_ref(v_e_u2081_2985_);
if (v_isShared_3042_ == 0)
{
lean_ctor_set(v___x_3041_, 0, v_result_2999_);
v___x_3067_ = v___x_3041_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_result_2999_);
v___x_3067_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
return v___x_3067_;
}
}
}
}
else
{
lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3077_; 
lean_dec(v_u_3034_);
lean_dec_ref(v_00_u03b1_3033_);
lean_dec_ref_known(v_result_2999_, 2);
lean_dec_ref(v_e_u2081_2985_);
v_a_3070_ = lean_ctor_get(v___x_3038_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_3038_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3072_ = v___x_3038_;
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v___x_3038_);
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
}
else
{
lean_object* v_a_3078_; lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3085_; 
lean_dec_ref(v_e_u2081_2985_);
v_a_3078_ = lean_ctor_get(v___x_2997_, 0);
v_isSharedCheck_3085_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3085_ == 0)
{
v___x_3080_ = v___x_2997_;
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
else
{
lean_inc(v_a_3078_);
lean_dec(v___x_2997_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v___x_3083_; 
if (v_isShared_3081_ == 0)
{
v___x_3083_ = v___x_3080_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v_a_3078_);
v___x_3083_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
return v___x_3083_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused___boxed(lean_object* v_e_u2081_3086_, lean_object* v_simpBody_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_, lean_object* v_a_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_){
_start:
{
lean_object* v_res_3098_; 
v_res_3098_ = l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused(v_e_u2081_3086_, v_simpBody_3087_, v_a_3088_, v_a_3089_, v_a_3090_, v_a_3091_, v_a_3092_, v_a_3093_, v_a_3094_, v_a_3095_, v_a_3096_);
lean_dec(v_a_3096_);
lean_dec_ref(v_a_3095_);
lean_dec(v_a_3094_);
lean_dec_ref(v_a_3093_);
lean_dec(v_a_3092_);
lean_dec_ref(v_a_3091_);
lean_dec(v_a_3090_);
lean_dec_ref(v_a_3089_);
lean_dec(v_a_3088_);
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet_x27(lean_object* v_simpBody_3099_, lean_object* v_e_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_, lean_object* v_a_3109_){
_start:
{
uint8_t v___x_3111_; 
v___x_3111_ = l_Lean_Expr_letNondep_x21(v_e_3100_);
if (v___x_3111_ == 0)
{
lean_object* v___x_3112_; lean_object* v___x_3113_; 
lean_dec_ref(v_e_3100_);
lean_dec_ref(v_simpBody_3099_);
v___x_3112_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_3112_, 0, v___x_3111_);
lean_ctor_set_uint8(v___x_3112_, 1, v___x_3111_);
v___x_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3112_);
return v___x_3113_;
}
else
{
lean_object* v___x_3114_; 
v___x_3114_ = l_Lean_Meta_Sym_Simp_simpHaveAndZetaUnused(v_e_3100_, v_simpBody_3099_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_, v_a_3105_, v_a_3106_, v_a_3107_, v_a_3108_, v_a_3109_);
return v___x_3114_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet_x27___boxed(lean_object* v_simpBody_3115_, lean_object* v_e_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_){
_start:
{
lean_object* v_res_3127_; 
v_res_3127_ = l_Lean_Meta_Sym_Simp_simpLet_x27(v_simpBody_3115_, v_e_3116_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_);
lean_dec(v_a_3125_);
lean_dec_ref(v_a_3124_);
lean_dec(v_a_3123_);
lean_dec_ref(v_a_3122_);
lean_dec(v_a_3121_);
lean_dec_ref(v_a_3120_);
lean_dec(v_a_3119_);
lean_dec_ref(v_a_3118_);
lean_dec(v_a_3117_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet(lean_object* v_e_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_, lean_object* v_a_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_){
_start:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3140_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_simpLet___closed__0));
v___x_3141_ = l_Lean_Meta_Sym_Simp_simpLet_x27(v___x_3140_, v_e_3129_, v_a_3130_, v_a_3131_, v_a_3132_, v_a_3133_, v_a_3134_, v_a_3135_, v_a_3136_, v_a_3137_, v_a_3138_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simpLet___boxed(lean_object* v_e_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_, lean_object* v_a_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_){
_start:
{
lean_object* v_res_3153_; 
v_res_3153_ = l_Lean_Meta_Sym_Simp_simpLet(v_e_3142_, v_a_3143_, v_a_3144_, v_a_3145_, v_a_3146_, v_a_3147_, v_a_3148_, v_a_3149_, v_a_3150_, v_a_3151_);
lean_dec(v_a_3151_);
lean_dec_ref(v_a_3150_);
lean_dec(v_a_3149_);
lean_dec_ref(v_a_3148_);
lean_dec(v_a_3147_);
lean_dec_ref(v_a_3146_);
lean_dec(v_a_3145_);
lean_dec_ref(v_a_3144_);
lean_dec(v_a_3143_);
return v_res_3153_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Lambda(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HaveTelescope(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Have(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_Lambda(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default = _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult_default);
l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult = _init_l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedToBetaAppResult);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_Have(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_Lambda(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ReplaceS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AbstractS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_HaveTelescope(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_Have(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_Lambda(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ReplaceS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AbstractS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_Have(builtin);
}
#ifdef __cplusplus
}
#endif

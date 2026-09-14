// Lean compiler output
// Module: Lean.Meta.Transform
// Imports: public import Lean.Meta.FunInfo import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonadControl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_withAppAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_withIncRecDepth___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ConstantInfo_hasValue(lean_object*, uint8_t);
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkForallFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_mkLetFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_patternWithRef_x3f(lean_object*);
lean_object* l_Lean_instReprExpr_repr(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getValue_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Core_liftIOCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* l_Lean_inaccessible_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedTransformStep_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_instInhabitedTransformStep_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedTransformStep_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedTransformStep_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedTransformStep_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_instInhabitedTransformStep_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedTransformStep_default___closed__1_value;
static lean_once_cell_t l_Lean_instInhabitedTransformStep_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTransformStep_default___closed__2;
static lean_once_cell_t l_Lean_instInhabitedTransformStep_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTransformStep_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTransformStep_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTransformStep;
static const lean_string_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprTransformStep_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.TransformStep.done"};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__0 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__1 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__1_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__2 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__2_value;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__3;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__4;
static const lean_string_object l_Lean_instReprTransformStep_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.TransformStep.visit"};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__5 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__5_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__5_value)}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__6 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__6_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__7 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__7_value;
static const lean_string_object l_Lean_instReprTransformStep_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.TransformStep.continue"};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__8 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__8_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__8_value)}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__9 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__9_value;
static const lean_ctor_object l_Lean_instReprTransformStep_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprTransformStep_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprTransformStep_repr___closed__10 = (const lean_object*)&l_Lean_instReprTransformStep_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprTransformStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprTransformStep_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprTransformStep___closed__0 = (const lean_object*)&l_Lean_instReprTransformStep___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprTransformStep = (const lean_object*)&l_Lean_instReprTransformStep___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_checkSystem___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0_value)} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__1 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__0;
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__1;
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Core_betaReduce___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Core_betaReduce___lam__0___closed__0 = (const lean_object*)&l_Lean_Core_betaReduce___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed__const__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Core_betaReduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_betaReduce___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Core_betaReduce___closed__0 = (const lean_object*)&l_Lean_Core_betaReduce___closed__0_value;
static const lean_closure_object l_Lean_Core_betaReduce___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_betaReduce___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Core_betaReduce___closed__1 = (const lean_object*)&l_Lean_Core_betaReduce___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0_value)} };
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed(lean_object**);
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_zetaReduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_zetaReduce___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_zetaReduce___closed__0 = (const lean_object*)&l_Lean_Meta_zetaReduce___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_eraseInaccessibleAnnotations___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___closed__0 = (const lean_object*)&l_Lean_Meta_eraseInaccessibleAnnotations___closed__0_value;
static const lean_closure_object l_Lean_Meta_eraseInaccessibleAnnotations___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___closed__1 = (const lean_object*)&l_Lean_Meta_eraseInaccessibleAnnotations___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_erasePatternRefAnnotations___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_erasePatternRefAnnotations___closed__0 = (const lean_object*)&l_Lean_Meta_erasePatternRefAnnotations___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
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
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_TransformStep_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 2)
{
lean_object* v_e_x3f_9_; lean_object* v___x_10_; 
v_e_x3f_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_e_x3f_9_);
lean_dec_ref_known(v_t_7_, 1);
v___x_10_ = lean_apply_1(v_k_8_, v_e_x3f_9_);
return v___x_10_;
}
else
{
lean_object* v_e_11_; lean_object* v___x_12_; 
v_e_11_ = lean_ctor_get(v_t_7_, 0);
lean_inc_ref(v_e_11_);
lean_dec_ref(v_t_7_);
v___x_12_ = lean_apply_1(v_k_8_, v_e_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_TransformStep_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_TransformStep_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim___redArg(lean_object* v_t_25_, lean_object* v_done_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_TransformStep_ctorElim___redArg(v_t_25_, v_done_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_done_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_TransformStep_ctorElim___redArg(v_t_29_, v_done_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim___redArg(lean_object* v_t_33_, lean_object* v_visit_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_TransformStep_ctorElim___redArg(v_t_33_, v_visit_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_visit_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_TransformStep_ctorElim___redArg(v_t_37_, v_visit_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim___redArg(lean_object* v_t_41_, lean_object* v_continue_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_TransformStep_ctorElim___redArg(v_t_41_, v_continue_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_continue_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_TransformStep_ctorElim___redArg(v_t_45_, v_continue_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default___closed__2(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_box(0);
v___x_53_ = ((lean_object*)(l_Lean_instInhabitedTransformStep_default___closed__1));
v___x_54_ = l_Lean_Expr_const___override(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default___closed__3(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_Lean_instInhabitedTransformStep_default___closed__2, &l_Lean_instInhabitedTransformStep_default___closed__2_once, _init_l_Lean_instInhabitedTransformStep_default___closed__2);
v___x_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_obj_once(&l_Lean_instInhabitedTransformStep_default___closed__3, &l_Lean_instInhabitedTransformStep_default___closed__3_once, _init_l_Lean_instInhabitedTransformStep_default___closed__3);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_instInhabitedTransformStep_default;
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(lean_object* v_x_65_, lean_object* v_x_66_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
lean_object* v___x_67_; 
v___x_67_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1));
return v___x_67_;
}
else
{
lean_object* v_val_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_val_68_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_val_68_);
lean_dec_ref_known(v_x_65_, 1);
v___x_69_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3));
v___x_70_ = lean_unsigned_to_nat(1024u);
v___x_71_ = l_Lean_instReprExpr_repr(v_val_68_, v___x_70_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_69_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = l_Repr_addAppParen(v___x_72_, v_x_66_);
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___boxed(lean_object* v_x_74_, lean_object* v_x_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(v_x_74_, v_x_75_);
lean_dec(v_x_75_);
return v_res_76_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__3(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(2u);
v___x_84_ = lean_nat_to_int(v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__4(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_nat_to_int(v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr(lean_object* v_x_99_, lean_object* v_prec_100_){
_start:
{
switch(lean_obj_tag(v_x_99_))
{
case 0:
{
lean_object* v_e_101_; lean_object* v___y_103_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_e_101_ = lean_ctor_get(v_x_99_, 0);
lean_inc_ref(v_e_101_);
lean_dec_ref_known(v_x_99_, 1);
v___x_112_ = lean_unsigned_to_nat(1024u);
v___x_113_ = lean_nat_dec_le(v___x_112_, v_prec_100_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_103_ = v___x_114_;
goto v___jp_102_;
}
else
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_103_ = v___x_115_;
goto v___jp_102_;
}
v___jp_102_:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_104_ = ((lean_object*)(l_Lean_instReprTransformStep_repr___closed__2));
v___x_105_ = lean_unsigned_to_nat(1024u);
v___x_106_ = l_Lean_instReprExpr_repr(v_e_101_, v___x_105_);
v___x_107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_104_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
lean_inc(v___y_103_);
v___x_108_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_108_, 0, v___y_103_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = 0;
v___x_110_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*1, v___x_109_);
v___x_111_ = l_Repr_addAppParen(v___x_110_, v_prec_100_);
return v___x_111_;
}
}
case 1:
{
lean_object* v_e_116_; lean_object* v___y_118_; lean_object* v___x_127_; uint8_t v___x_128_; 
v_e_116_ = lean_ctor_get(v_x_99_, 0);
lean_inc_ref(v_e_116_);
lean_dec_ref_known(v_x_99_, 1);
v___x_127_ = lean_unsigned_to_nat(1024u);
v___x_128_ = lean_nat_dec_le(v___x_127_, v_prec_100_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_118_ = v___x_129_;
goto v___jp_117_;
}
else
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_118_ = v___x_130_;
goto v___jp_117_;
}
v___jp_117_:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint8_t v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_119_ = ((lean_object*)(l_Lean_instReprTransformStep_repr___closed__7));
v___x_120_ = lean_unsigned_to_nat(1024u);
v___x_121_ = l_Lean_instReprExpr_repr(v_e_116_, v___x_120_);
v___x_122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
lean_inc(v___y_118_);
v___x_123_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_123_, 0, v___y_118_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = 0;
v___x_125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set_uint8(v___x_125_, sizeof(void*)*1, v___x_124_);
v___x_126_ = l_Repr_addAppParen(v___x_125_, v_prec_100_);
return v___x_126_;
}
}
default: 
{
lean_object* v_e_x3f_131_; lean_object* v___y_133_; lean_object* v___x_142_; uint8_t v___x_143_; 
v_e_x3f_131_ = lean_ctor_get(v_x_99_, 0);
lean_inc(v_e_x3f_131_);
lean_dec_ref_known(v_x_99_, 1);
v___x_142_ = lean_unsigned_to_nat(1024u);
v___x_143_ = lean_nat_dec_le(v___x_142_, v_prec_100_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_133_ = v___x_144_;
goto v___jp_132_;
}
else
{
lean_object* v___x_145_; 
v___x_145_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_133_ = v___x_145_;
goto v___jp_132_;
}
v___jp_132_:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_134_ = ((lean_object*)(l_Lean_instReprTransformStep_repr___closed__10));
v___x_135_ = lean_unsigned_to_nat(1024u);
v___x_136_ = l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(v_e_x3f_131_, v___x_135_);
v___x_137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_134_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
lean_inc(v___y_133_);
v___x_138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_138_, 0, v___y_133_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = 0;
v___x_140_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set_uint8(v___x_140_, sizeof(void*)*1, v___x_139_);
v___x_141_ = l_Repr_addAppParen(v___x_140_, v_prec_100_);
return v___x_141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr___boxed(lean_object* v_x_146_, lean_object* v_prec_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lean_instReprTransformStep_repr(v_x_146_, v_prec_147_);
lean_dec(v_prec_147_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0(lean_object* v_toApplicative_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_toPure_154_; lean_object* v___x_155_; 
v_toPure_154_ = lean_ctor_get(v_toApplicative_151_, 1);
lean_inc(v_toPure_154_);
lean_dec_ref(v_toApplicative_151_);
v___x_155_ = lean_apply_2(v_toPure_154_, lean_box(0), v_a_152_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1(lean_object* v___x_156_, lean_object* v___x_157_, lean_object* v_e_158_, lean_object* v_a_159_, lean_object* v_s_160_){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_161_ = lean_box(0);
v___x_162_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_156_, v___x_157_, v_s_160_, v_e_158_, v_a_159_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_161_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2(lean_object* v_toApplicative_164_, lean_object* v___x_165_, lean_object* v___x_166_, lean_object* v_e_167_, lean_object* v_a_168_, lean_object* v_x_169_, lean_object* v_toBind_170_, lean_object* v_a_171_){
_start:
{
lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
lean_inc_ref(v_a_171_);
v___f_172_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0), 3, 2);
lean_closure_set(v___f_172_, 0, v_toApplicative_164_);
lean_closure_set(v___f_172_, 1, v_a_171_);
v___f_173_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1), 5, 4);
lean_closure_set(v___f_173_, 0, v___x_165_);
lean_closure_set(v___f_173_, 1, v___x_166_);
lean_closure_set(v___f_173_, 2, v_e_167_);
lean_closure_set(v___f_173_, 3, v_a_171_);
lean_inc(v_a_168_);
v___x_174_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_174_, 0, lean_box(0));
lean_closure_set(v___x_174_, 1, lean_box(0));
lean_closure_set(v___x_174_, 2, lean_box(0));
lean_closure_set(v___x_174_, 3, v_a_168_);
lean_closure_set(v___x_174_, 4, v___f_173_);
v___x_175_ = lean_apply_2(v_x_169_, lean_box(0), v___x_174_);
v___x_176_ = lean_apply_4(v_toBind_170_, lean_box(0), lean_box(0), v___x_175_, v___f_172_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed(lean_object* v_toApplicative_177_, lean_object* v___x_178_, lean_object* v___x_179_, lean_object* v_e_180_, lean_object* v_a_181_, lean_object* v_x_182_, lean_object* v_toBind_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2(v_toApplicative_177_, v___x_178_, v___x_179_, v_e_180_, v_a_181_, v_x_182_, v_toBind_183_, v_a_184_);
lean_dec(v_a_181_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(lean_object* v_toApplicative_186_, lean_object* v___x_187_, lean_object* v___x_188_, lean_object* v_e_189_, lean_object* v_a_190_){
_start:
{
lean_object* v_toPure_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v_toPure_191_ = lean_ctor_get(v_toApplicative_186_, 1);
lean_inc(v_toPure_191_);
lean_dec_ref(v_toApplicative_186_);
v___x_192_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_187_, v___x_188_, v_a_190_, v_e_189_);
v___x_193_ = lean_apply_2(v_toPure_191_, lean_box(0), v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed(lean_object* v_toApplicative_194_, lean_object* v___x_195_, lean_object* v___x_196_, lean_object* v_e_197_, lean_object* v_a_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(v_toApplicative_194_, v___x_195_, v___x_196_, v_e_197_, v_a_198_);
lean_dec_ref(v_a_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19(lean_object* v_inst_203_, lean_object* v_x_204_, lean_object* v___x_205_, lean_object* v___x_206_, lean_object* v_inst_207_, lean_object* v___f_208_, lean_object* v___x_209_, lean_object* v___x_210_, lean_object* v_a_211_, lean_object* v_toBind_212_, lean_object* v___f_213_, lean_object* v_toApplicative_214_, lean_object* v_a_215_){
_start:
{
if (lean_obj_tag(v_a_215_) == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_2542__overap_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
lean_dec_ref(v_toApplicative_214_);
v___x_216_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__1));
v___x_217_ = lean_apply_2(v_inst_203_, lean_box(0), v___x_216_);
lean_inc_ref(v___x_206_);
lean_inc_ref(v___x_205_);
v___x_218_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 9);
lean_closure_set(v___x_218_, 0, lean_box(0));
lean_closure_set(v___x_218_, 1, lean_box(0));
lean_closure_set(v___x_218_, 2, lean_box(0));
lean_closure_set(v___x_218_, 3, lean_box(0));
lean_closure_set(v___x_218_, 4, v_x_204_);
lean_closure_set(v___x_218_, 5, v___x_205_);
lean_closure_set(v___x_218_, 6, v___x_206_);
lean_closure_set(v___x_218_, 7, lean_box(0));
lean_closure_set(v___x_218_, 8, v___x_217_);
v___x_219_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___boxed), 13, 12);
lean_closure_set(v___x_219_, 0, lean_box(0));
lean_closure_set(v___x_219_, 1, lean_box(0));
lean_closure_set(v___x_219_, 2, lean_box(0));
lean_closure_set(v___x_219_, 3, lean_box(0));
lean_closure_set(v___x_219_, 4, v_x_204_);
lean_closure_set(v___x_219_, 5, v___x_205_);
lean_closure_set(v___x_219_, 6, v___x_206_);
lean_closure_set(v___x_219_, 7, v_inst_207_);
lean_closure_set(v___x_219_, 8, lean_box(0));
lean_closure_set(v___x_219_, 9, lean_box(0));
lean_closure_set(v___x_219_, 10, v___x_218_);
lean_closure_set(v___x_219_, 11, v___f_208_);
v___x_2542__overap_220_ = l_Lean_Core_withIncRecDepth___redArg(v___x_209_, v___x_210_, v___x_219_);
lean_inc(v_a_211_);
v___x_221_ = lean_apply_1(v___x_2542__overap_220_, v_a_211_);
v___x_222_ = lean_apply_4(v_toBind_212_, lean_box(0), lean_box(0), v___x_221_, v___f_213_);
return v___x_222_;
}
else
{
lean_object* v_val_223_; lean_object* v_toPure_224_; lean_object* v___x_225_; 
lean_dec(v___f_213_);
lean_dec(v_toBind_212_);
lean_dec_ref(v___x_210_);
lean_dec_ref(v___x_209_);
lean_dec(v___f_208_);
lean_dec_ref(v_inst_207_);
lean_dec_ref(v___x_206_);
lean_dec_ref(v___x_205_);
lean_dec(v_inst_203_);
v_val_223_ = lean_ctor_get(v_a_215_, 0);
lean_inc(v_val_223_);
lean_dec_ref_known(v_a_215_, 1);
v_toPure_224_ = lean_ctor_get(v_toApplicative_214_, 1);
lean_inc(v_toPure_224_);
lean_dec_ref(v_toApplicative_214_);
v___x_225_ = lean_apply_2(v_toPure_224_, lean_box(0), v_val_223_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___boxed(lean_object* v_inst_226_, lean_object* v_x_227_, lean_object* v___x_228_, lean_object* v___x_229_, lean_object* v_inst_230_, lean_object* v___f_231_, lean_object* v___x_232_, lean_object* v___x_233_, lean_object* v_a_234_, lean_object* v_toBind_235_, lean_object* v___f_236_, lean_object* v_toApplicative_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19(v_inst_226_, v_x_227_, v___x_228_, v___x_229_, v_inst_230_, v___f_231_, v___x_232_, v___x_233_, v_a_234_, v_toBind_235_, v___f_236_, v_toApplicative_237_, v_a_238_);
lean_dec(v_a_234_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(lean_object* v_a_242_, lean_object* v_inst_243_, lean_object* v_inst_244_, lean_object* v_inst_245_, lean_object* v_pre_246_, lean_object* v_post_247_, lean_object* v_x_248_, lean_object* v_x_249_, lean_object* v___y_250_, lean_object* v_a_251_){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = l_Lean_mkAppN(v_a_242_, v_a_251_);
v___x_253_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_243_, v_inst_244_, v_inst_245_, v_pre_246_, v_post_247_, v_x_248_, v_x_249_, v___x_252_, v___y_250_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed(lean_object* v_a_254_, lean_object* v_inst_255_, lean_object* v_inst_256_, lean_object* v_inst_257_, lean_object* v_pre_258_, lean_object* v_post_259_, lean_object* v_x_260_, lean_object* v_x_261_, lean_object* v___y_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(v_a_254_, v_inst_255_, v_inst_256_, v_inst_257_, v_pre_258_, v_post_259_, v_x_260_, v_x_261_, v___y_262_, v_a_263_);
lean_dec_ref(v_a_263_);
lean_dec(v___y_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed(lean_object* v_inst_265_, lean_object* v_inst_266_, lean_object* v_inst_267_, lean_object* v_pre_268_, lean_object* v_post_269_, lean_object* v_x_270_, lean_object* v_x_271_, lean_object* v_e_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_265_, v_inst_266_, v_inst_267_, v_pre_268_, v_post_269_, v_x_270_, v_x_271_, v_e_272_, v_a_273_);
lean_dec(v_a_273_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(lean_object* v_inst_275_, lean_object* v_inst_276_, lean_object* v_inst_277_, lean_object* v_pre_278_, lean_object* v_post_279_, lean_object* v_x_280_, lean_object* v_x_281_, lean_object* v___y_282_, lean_object* v_args_283_, lean_object* v___x_284_, lean_object* v_toBind_285_, lean_object* v_a_286_){
_start:
{
lean_object* v___f_287_; lean_object* v___x_288_; size_t v_sz_289_; size_t v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_2271__overap_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
lean_inc_n(v___y_282_, 2);
lean_inc(v_x_281_);
lean_inc(v_post_279_);
lean_inc(v_pre_278_);
lean_inc_ref(v_inst_277_);
lean_inc(v_inst_276_);
lean_inc_ref(v_inst_275_);
v___f_287_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_287_, 0, v_a_286_);
lean_closure_set(v___f_287_, 1, v_inst_275_);
lean_closure_set(v___f_287_, 2, v_inst_276_);
lean_closure_set(v___f_287_, 3, v_inst_277_);
lean_closure_set(v___f_287_, 4, v_pre_278_);
lean_closure_set(v___f_287_, 5, v_post_279_);
lean_closure_set(v___f_287_, 6, v_x_280_);
lean_closure_set(v___f_287_, 7, v_x_281_);
lean_closure_set(v___f_287_, 8, v___y_282_);
v___x_288_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed), 9, 7);
lean_closure_set(v___x_288_, 0, v_inst_275_);
lean_closure_set(v___x_288_, 1, v_inst_276_);
lean_closure_set(v___x_288_, 2, v_inst_277_);
lean_closure_set(v___x_288_, 3, v_pre_278_);
lean_closure_set(v___x_288_, 4, v_post_279_);
lean_closure_set(v___x_288_, 5, v_x_280_);
lean_closure_set(v___x_288_, 6, v_x_281_);
v_sz_289_ = lean_array_size(v_args_283_);
v___x_290_ = ((size_t)0ULL);
v___x_291_ = l_unsafeCast___redArg(v_args_283_);
v___x_292_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_284_, v___x_288_, v_sz_289_, v___x_290_, v___x_291_);
v___x_2271__overap_293_ = l_unsafeCast___redArg(v___x_292_);
lean_dec(v___x_292_);
v___x_294_ = lean_apply_1(v___x_2271__overap_293_, v___y_282_);
v___x_295_ = lean_apply_4(v_toBind_285_, lean_box(0), lean_box(0), v___x_294_, v___f_287_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed(lean_object* v_inst_296_, lean_object* v_inst_297_, lean_object* v_inst_298_, lean_object* v_pre_299_, lean_object* v_post_300_, lean_object* v_x_301_, lean_object* v_x_302_, lean_object* v___y_303_, lean_object* v_args_304_, lean_object* v___x_305_, lean_object* v_toBind_306_, lean_object* v_a_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(v_inst_296_, v_inst_297_, v_inst_298_, v_pre_299_, v_post_300_, v_x_301_, v_x_302_, v___y_303_, v_args_304_, v___x_305_, v_toBind_306_, v_a_307_);
lean_dec_ref(v_args_304_);
lean_dec(v___y_303_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(lean_object* v_inst_309_, lean_object* v_inst_310_, lean_object* v_inst_311_, lean_object* v_pre_312_, lean_object* v_post_313_, lean_object* v_x_314_, lean_object* v_x_315_, lean_object* v___x_316_, lean_object* v_toBind_317_, lean_object* v_f_318_, lean_object* v_args_319_, lean_object* v___y_320_){
_start:
{
lean_object* v___f_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
lean_inc(v_toBind_317_);
lean_inc(v___y_320_);
lean_inc(v_x_315_);
lean_inc(v_post_313_);
lean_inc(v_pre_312_);
lean_inc_ref(v_inst_311_);
lean_inc(v_inst_310_);
lean_inc_ref(v_inst_309_);
v___f_321_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed), 12, 11);
lean_closure_set(v___f_321_, 0, v_inst_309_);
lean_closure_set(v___f_321_, 1, v_inst_310_);
lean_closure_set(v___f_321_, 2, v_inst_311_);
lean_closure_set(v___f_321_, 3, v_pre_312_);
lean_closure_set(v___f_321_, 4, v_post_313_);
lean_closure_set(v___f_321_, 5, v_x_314_);
lean_closure_set(v___f_321_, 6, v_x_315_);
lean_closure_set(v___f_321_, 7, v___y_320_);
lean_closure_set(v___f_321_, 8, v_args_319_);
lean_closure_set(v___f_321_, 9, v___x_316_);
lean_closure_set(v___f_321_, 10, v_toBind_317_);
v___x_322_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_309_, v_inst_310_, v_inst_311_, v_pre_312_, v_post_313_, v_x_314_, v_x_315_, v_f_318_, v___y_320_);
v___x_323_ = lean_apply_4(v_toBind_317_, lean_box(0), lean_box(0), v___x_322_, v___f_321_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed(lean_object* v_inst_324_, lean_object* v_inst_325_, lean_object* v_inst_326_, lean_object* v_pre_327_, lean_object* v_post_328_, lean_object* v_x_329_, lean_object* v_x_330_, lean_object* v___x_331_, lean_object* v_toBind_332_, lean_object* v_f_333_, lean_object* v_args_334_, lean_object* v___y_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(v_inst_324_, v_inst_325_, v_inst_326_, v_pre_327_, v_post_328_, v_x_329_, v_x_330_, v___x_331_, v_toBind_332_, v_f_333_, v_args_334_, v___y_335_);
lean_dec(v___y_335_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed(lean_object* v_inst_337_, lean_object* v_inst_338_, lean_object* v_inst_339_, lean_object* v_pre_340_, lean_object* v_post_341_, lean_object* v_x_342_, lean_object* v_x_343_, lean_object* v___y_344_, lean_object* v_a_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(v_inst_337_, v_inst_338_, v_inst_339_, v_pre_340_, v_post_341_, v_x_342_, v_x_343_, v___y_344_, v_a_345_);
lean_dec(v___y_344_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(lean_object* v_binderType_347_, lean_object* v_a_348_, lean_object* v_binderName_349_, uint8_t v_binderInfo_350_, lean_object* v_inst_351_, lean_object* v_inst_352_, lean_object* v_inst_353_, lean_object* v_pre_354_, lean_object* v_post_355_, lean_object* v_x_356_, lean_object* v_x_357_, lean_object* v___y_358_, lean_object* v_body_359_, lean_object* v___y_360_, lean_object* v_a_361_){
_start:
{
size_t v___x_362_; size_t v___x_363_; uint8_t v___x_364_; 
v___x_362_ = lean_ptr_addr(v_binderType_347_);
v___x_363_ = lean_ptr_addr(v_a_348_);
v___x_364_ = lean_usize_dec_eq(v___x_362_, v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec_ref(v___y_360_);
v___x_365_ = l_Lean_Expr_forallE___override(v_binderName_349_, v_a_348_, v_a_361_, v_binderInfo_350_);
v___x_366_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_351_, v_inst_352_, v_inst_353_, v_pre_354_, v_post_355_, v_x_356_, v_x_357_, v___x_365_, v___y_358_);
return v___x_366_;
}
else
{
size_t v___x_367_; size_t v___x_368_; uint8_t v___x_369_; 
v___x_367_ = lean_ptr_addr(v_body_359_);
v___x_368_ = lean_ptr_addr(v_a_361_);
v___x_369_ = lean_usize_dec_eq(v___x_367_, v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; 
lean_dec_ref(v___y_360_);
v___x_370_ = l_Lean_Expr_forallE___override(v_binderName_349_, v_a_348_, v_a_361_, v_binderInfo_350_);
v___x_371_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_351_, v_inst_352_, v_inst_353_, v_pre_354_, v_post_355_, v_x_356_, v_x_357_, v___x_370_, v___y_358_);
return v___x_371_;
}
else
{
uint8_t v___x_372_; 
v___x_372_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_350_, v_binderInfo_350_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; lean_object* v___x_374_; 
lean_dec_ref(v___y_360_);
v___x_373_ = l_Lean_Expr_forallE___override(v_binderName_349_, v_a_348_, v_a_361_, v_binderInfo_350_);
v___x_374_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_351_, v_inst_352_, v_inst_353_, v_pre_354_, v_post_355_, v_x_356_, v_x_357_, v___x_373_, v___y_358_);
return v___x_374_;
}
else
{
lean_object* v___x_375_; 
lean_dec_ref(v_a_361_);
lean_dec(v_binderName_349_);
lean_dec_ref(v_a_348_);
v___x_375_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_351_, v_inst_352_, v_inst_353_, v_pre_354_, v_post_355_, v_x_356_, v_x_357_, v___y_360_, v___y_358_);
return v___x_375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed(lean_object* v_binderType_376_, lean_object* v_a_377_, lean_object* v_binderName_378_, lean_object* v_binderInfo_379_, lean_object* v_inst_380_, lean_object* v_inst_381_, lean_object* v_inst_382_, lean_object* v_pre_383_, lean_object* v_post_384_, lean_object* v_x_385_, lean_object* v_x_386_, lean_object* v___y_387_, lean_object* v_body_388_, lean_object* v___y_389_, lean_object* v_a_390_){
_start:
{
uint8_t v_binderInfo_2870__boxed_391_; lean_object* v_res_392_; 
v_binderInfo_2870__boxed_391_ = lean_unbox(v_binderInfo_379_);
v_res_392_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(v_binderType_376_, v_a_377_, v_binderName_378_, v_binderInfo_2870__boxed_391_, v_inst_380_, v_inst_381_, v_inst_382_, v_pre_383_, v_post_384_, v_x_385_, v_x_386_, v___y_387_, v_body_388_, v___y_389_, v_a_390_);
lean_dec_ref(v_body_388_);
lean_dec(v___y_387_);
lean_dec_ref(v_binderType_376_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(lean_object* v_binderType_393_, lean_object* v_binderName_394_, uint8_t v_binderInfo_395_, lean_object* v_inst_396_, lean_object* v_inst_397_, lean_object* v_inst_398_, lean_object* v_pre_399_, lean_object* v_post_400_, lean_object* v_x_401_, lean_object* v_x_402_, lean_object* v___y_403_, lean_object* v_body_404_, lean_object* v___y_405_, lean_object* v_toBind_406_, lean_object* v_a_407_){
_start:
{
lean_object* v___x_408_; lean_object* v___f_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_408_ = lean_box(v_binderInfo_395_);
lean_inc_ref(v_body_404_);
lean_inc(v___y_403_);
lean_inc(v_x_402_);
lean_inc(v_post_400_);
lean_inc(v_pre_399_);
lean_inc_ref(v_inst_398_);
lean_inc(v_inst_397_);
lean_inc_ref(v_inst_396_);
v___f_409_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed), 15, 14);
lean_closure_set(v___f_409_, 0, v_binderType_393_);
lean_closure_set(v___f_409_, 1, v_a_407_);
lean_closure_set(v___f_409_, 2, v_binderName_394_);
lean_closure_set(v___f_409_, 3, v___x_408_);
lean_closure_set(v___f_409_, 4, v_inst_396_);
lean_closure_set(v___f_409_, 5, v_inst_397_);
lean_closure_set(v___f_409_, 6, v_inst_398_);
lean_closure_set(v___f_409_, 7, v_pre_399_);
lean_closure_set(v___f_409_, 8, v_post_400_);
lean_closure_set(v___f_409_, 9, v_x_401_);
lean_closure_set(v___f_409_, 10, v_x_402_);
lean_closure_set(v___f_409_, 11, v___y_403_);
lean_closure_set(v___f_409_, 12, v_body_404_);
lean_closure_set(v___f_409_, 13, v___y_405_);
v___x_410_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_396_, v_inst_397_, v_inst_398_, v_pre_399_, v_post_400_, v_x_401_, v_x_402_, v_body_404_, v___y_403_);
v___x_411_ = lean_apply_4(v_toBind_406_, lean_box(0), lean_box(0), v___x_410_, v___f_409_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed(lean_object* v_binderType_412_, lean_object* v_binderName_413_, lean_object* v_binderInfo_414_, lean_object* v_inst_415_, lean_object* v_inst_416_, lean_object* v_inst_417_, lean_object* v_pre_418_, lean_object* v_post_419_, lean_object* v_x_420_, lean_object* v_x_421_, lean_object* v___y_422_, lean_object* v_body_423_, lean_object* v___y_424_, lean_object* v_toBind_425_, lean_object* v_a_426_){
_start:
{
uint8_t v_binderInfo_2729__boxed_427_; lean_object* v_res_428_; 
v_binderInfo_2729__boxed_427_ = lean_unbox(v_binderInfo_414_);
v_res_428_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(v_binderType_412_, v_binderName_413_, v_binderInfo_2729__boxed_427_, v_inst_415_, v_inst_416_, v_inst_417_, v_pre_418_, v_post_419_, v_x_420_, v_x_421_, v___y_422_, v_body_423_, v___y_424_, v_toBind_425_, v_a_426_);
lean_dec(v___y_422_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(lean_object* v_binderType_429_, lean_object* v_a_430_, lean_object* v_binderName_431_, uint8_t v_binderInfo_432_, lean_object* v_inst_433_, lean_object* v_inst_434_, lean_object* v_inst_435_, lean_object* v_pre_436_, lean_object* v_post_437_, lean_object* v_x_438_, lean_object* v_x_439_, lean_object* v___y_440_, lean_object* v_body_441_, lean_object* v___y_442_, lean_object* v_a_443_){
_start:
{
size_t v___x_444_; size_t v___x_445_; uint8_t v___x_446_; 
v___x_444_ = lean_ptr_addr(v_binderType_429_);
v___x_445_ = lean_ptr_addr(v_a_430_);
v___x_446_ = lean_usize_dec_eq(v___x_444_, v___x_445_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec_ref(v___y_442_);
v___x_447_ = l_Lean_Expr_lam___override(v_binderName_431_, v_a_430_, v_a_443_, v_binderInfo_432_);
v___x_448_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_433_, v_inst_434_, v_inst_435_, v_pre_436_, v_post_437_, v_x_438_, v_x_439_, v___x_447_, v___y_440_);
return v___x_448_;
}
else
{
size_t v___x_449_; size_t v___x_450_; uint8_t v___x_451_; 
v___x_449_ = lean_ptr_addr(v_body_441_);
v___x_450_ = lean_ptr_addr(v_a_443_);
v___x_451_ = lean_usize_dec_eq(v___x_449_, v___x_450_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; lean_object* v___x_453_; 
lean_dec_ref(v___y_442_);
v___x_452_ = l_Lean_Expr_lam___override(v_binderName_431_, v_a_430_, v_a_443_, v_binderInfo_432_);
v___x_453_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_433_, v_inst_434_, v_inst_435_, v_pre_436_, v_post_437_, v_x_438_, v_x_439_, v___x_452_, v___y_440_);
return v___x_453_;
}
else
{
uint8_t v___x_454_; 
v___x_454_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_432_, v_binderInfo_432_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v___x_456_; 
lean_dec_ref(v___y_442_);
v___x_455_ = l_Lean_Expr_lam___override(v_binderName_431_, v_a_430_, v_a_443_, v_binderInfo_432_);
v___x_456_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_433_, v_inst_434_, v_inst_435_, v_pre_436_, v_post_437_, v_x_438_, v_x_439_, v___x_455_, v___y_440_);
return v___x_456_;
}
else
{
lean_object* v___x_457_; 
lean_dec_ref(v_a_443_);
lean_dec(v_binderName_431_);
lean_dec_ref(v_a_430_);
v___x_457_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_433_, v_inst_434_, v_inst_435_, v_pre_436_, v_post_437_, v_x_438_, v_x_439_, v___y_442_, v___y_440_);
return v___x_457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed(lean_object* v_binderType_458_, lean_object* v_a_459_, lean_object* v_binderName_460_, lean_object* v_binderInfo_461_, lean_object* v_inst_462_, lean_object* v_inst_463_, lean_object* v_inst_464_, lean_object* v_pre_465_, lean_object* v_post_466_, lean_object* v_x_467_, lean_object* v_x_468_, lean_object* v___y_469_, lean_object* v_body_470_, lean_object* v___y_471_, lean_object* v_a_472_){
_start:
{
uint8_t v_binderInfo_2845__boxed_473_; lean_object* v_res_474_; 
v_binderInfo_2845__boxed_473_ = lean_unbox(v_binderInfo_461_);
v_res_474_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(v_binderType_458_, v_a_459_, v_binderName_460_, v_binderInfo_2845__boxed_473_, v_inst_462_, v_inst_463_, v_inst_464_, v_pre_465_, v_post_466_, v_x_467_, v_x_468_, v___y_469_, v_body_470_, v___y_471_, v_a_472_);
lean_dec_ref(v_body_470_);
lean_dec(v___y_469_);
lean_dec_ref(v_binderType_458_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(lean_object* v_binderType_475_, lean_object* v_binderName_476_, uint8_t v_binderInfo_477_, lean_object* v_inst_478_, lean_object* v_inst_479_, lean_object* v_inst_480_, lean_object* v_pre_481_, lean_object* v_post_482_, lean_object* v_x_483_, lean_object* v_x_484_, lean_object* v___y_485_, lean_object* v_body_486_, lean_object* v___y_487_, lean_object* v_toBind_488_, lean_object* v_a_489_){
_start:
{
lean_object* v___x_490_; lean_object* v___f_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_490_ = lean_box(v_binderInfo_477_);
lean_inc_ref(v_body_486_);
lean_inc(v___y_485_);
lean_inc(v_x_484_);
lean_inc(v_post_482_);
lean_inc(v_pre_481_);
lean_inc_ref(v_inst_480_);
lean_inc(v_inst_479_);
lean_inc_ref(v_inst_478_);
v___f_491_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed), 15, 14);
lean_closure_set(v___f_491_, 0, v_binderType_475_);
lean_closure_set(v___f_491_, 1, v_a_489_);
lean_closure_set(v___f_491_, 2, v_binderName_476_);
lean_closure_set(v___f_491_, 3, v___x_490_);
lean_closure_set(v___f_491_, 4, v_inst_478_);
lean_closure_set(v___f_491_, 5, v_inst_479_);
lean_closure_set(v___f_491_, 6, v_inst_480_);
lean_closure_set(v___f_491_, 7, v_pre_481_);
lean_closure_set(v___f_491_, 8, v_post_482_);
lean_closure_set(v___f_491_, 9, v_x_483_);
lean_closure_set(v___f_491_, 10, v_x_484_);
lean_closure_set(v___f_491_, 11, v___y_485_);
lean_closure_set(v___f_491_, 12, v_body_486_);
lean_closure_set(v___f_491_, 13, v___y_487_);
v___x_492_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_478_, v_inst_479_, v_inst_480_, v_pre_481_, v_post_482_, v_x_483_, v_x_484_, v_body_486_, v___y_485_);
v___x_493_ = lean_apply_4(v_toBind_488_, lean_box(0), lean_box(0), v___x_492_, v___f_491_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed(lean_object* v_binderType_494_, lean_object* v_binderName_495_, lean_object* v_binderInfo_496_, lean_object* v_inst_497_, lean_object* v_inst_498_, lean_object* v_inst_499_, lean_object* v_pre_500_, lean_object* v_post_501_, lean_object* v_x_502_, lean_object* v_x_503_, lean_object* v___y_504_, lean_object* v_body_505_, lean_object* v___y_506_, lean_object* v_toBind_507_, lean_object* v_a_508_){
_start:
{
uint8_t v_binderInfo_2675__boxed_509_; lean_object* v_res_510_; 
v_binderInfo_2675__boxed_509_ = lean_unbox(v_binderInfo_496_);
v_res_510_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(v_binderType_494_, v_binderName_495_, v_binderInfo_2675__boxed_509_, v_inst_497_, v_inst_498_, v_inst_499_, v_pre_500_, v_post_501_, v_x_502_, v_x_503_, v___y_504_, v_body_505_, v___y_506_, v_toBind_507_, v_a_508_);
lean_dec(v___y_504_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(lean_object* v_type_511_, lean_object* v_a_512_, lean_object* v_declName_513_, lean_object* v_a_514_, uint8_t v_nondep_515_, lean_object* v_inst_516_, lean_object* v_inst_517_, lean_object* v_inst_518_, lean_object* v_pre_519_, lean_object* v_post_520_, lean_object* v_x_521_, lean_object* v_x_522_, lean_object* v___y_523_, lean_object* v_value_524_, lean_object* v_body_525_, lean_object* v___y_526_, lean_object* v_a_527_){
_start:
{
size_t v___x_528_; size_t v___x_529_; uint8_t v___x_530_; 
v___x_528_ = lean_ptr_addr(v_type_511_);
v___x_529_ = lean_ptr_addr(v_a_512_);
v___x_530_ = lean_usize_dec_eq(v___x_528_, v___x_529_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; lean_object* v___x_532_; 
lean_dec_ref(v___y_526_);
v___x_531_ = l_Lean_Expr_letE___override(v_declName_513_, v_a_512_, v_a_514_, v_a_527_, v_nondep_515_);
v___x_532_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_516_, v_inst_517_, v_inst_518_, v_pre_519_, v_post_520_, v_x_521_, v_x_522_, v___x_531_, v___y_523_);
return v___x_532_;
}
else
{
size_t v___x_533_; size_t v___x_534_; uint8_t v___x_535_; 
v___x_533_ = lean_ptr_addr(v_value_524_);
v___x_534_ = lean_ptr_addr(v_a_514_);
v___x_535_ = lean_usize_dec_eq(v___x_533_, v___x_534_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; lean_object* v___x_537_; 
lean_dec_ref(v___y_526_);
v___x_536_ = l_Lean_Expr_letE___override(v_declName_513_, v_a_512_, v_a_514_, v_a_527_, v_nondep_515_);
v___x_537_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_516_, v_inst_517_, v_inst_518_, v_pre_519_, v_post_520_, v_x_521_, v_x_522_, v___x_536_, v___y_523_);
return v___x_537_;
}
else
{
size_t v___x_538_; size_t v___x_539_; uint8_t v___x_540_; 
v___x_538_ = lean_ptr_addr(v_body_525_);
v___x_539_ = lean_ptr_addr(v_a_527_);
v___x_540_ = lean_usize_dec_eq(v___x_538_, v___x_539_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; 
lean_dec_ref(v___y_526_);
v___x_541_ = l_Lean_Expr_letE___override(v_declName_513_, v_a_512_, v_a_514_, v_a_527_, v_nondep_515_);
v___x_542_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_516_, v_inst_517_, v_inst_518_, v_pre_519_, v_post_520_, v_x_521_, v_x_522_, v___x_541_, v___y_523_);
return v___x_542_;
}
else
{
lean_object* v___x_543_; 
lean_dec_ref(v_a_527_);
lean_dec_ref(v_a_514_);
lean_dec(v_declName_513_);
lean_dec_ref(v_a_512_);
v___x_543_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_516_, v_inst_517_, v_inst_518_, v_pre_519_, v_post_520_, v_x_521_, v_x_522_, v___y_526_, v___y_523_);
return v___x_543_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed(lean_object** _args){
lean_object* v_type_544_ = _args[0];
lean_object* v_a_545_ = _args[1];
lean_object* v_declName_546_ = _args[2];
lean_object* v_a_547_ = _args[3];
lean_object* v_nondep_548_ = _args[4];
lean_object* v_inst_549_ = _args[5];
lean_object* v_inst_550_ = _args[6];
lean_object* v_inst_551_ = _args[7];
lean_object* v_pre_552_ = _args[8];
lean_object* v_post_553_ = _args[9];
lean_object* v_x_554_ = _args[10];
lean_object* v_x_555_ = _args[11];
lean_object* v___y_556_ = _args[12];
lean_object* v_value_557_ = _args[13];
lean_object* v_body_558_ = _args[14];
lean_object* v___y_559_ = _args[15];
lean_object* v_a_560_ = _args[16];
_start:
{
uint8_t v_nondep_2895__boxed_561_; lean_object* v_res_562_; 
v_nondep_2895__boxed_561_ = lean_unbox(v_nondep_548_);
v_res_562_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(v_type_544_, v_a_545_, v_declName_546_, v_a_547_, v_nondep_2895__boxed_561_, v_inst_549_, v_inst_550_, v_inst_551_, v_pre_552_, v_post_553_, v_x_554_, v_x_555_, v___y_556_, v_value_557_, v_body_558_, v___y_559_, v_a_560_);
lean_dec_ref(v_body_558_);
lean_dec_ref(v_value_557_);
lean_dec(v___y_556_);
lean_dec_ref(v_type_544_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(lean_object* v_type_563_, lean_object* v_a_564_, lean_object* v_declName_565_, uint8_t v_nondep_566_, lean_object* v_inst_567_, lean_object* v_inst_568_, lean_object* v_inst_569_, lean_object* v_pre_570_, lean_object* v_post_571_, lean_object* v_x_572_, lean_object* v_x_573_, lean_object* v___y_574_, lean_object* v_value_575_, lean_object* v_body_576_, lean_object* v___y_577_, lean_object* v_toBind_578_, lean_object* v_a_579_){
_start:
{
lean_object* v___x_580_; lean_object* v___f_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_580_ = lean_box(v_nondep_566_);
lean_inc_ref(v_body_576_);
lean_inc(v___y_574_);
lean_inc(v_x_573_);
lean_inc(v_post_571_);
lean_inc(v_pre_570_);
lean_inc_ref(v_inst_569_);
lean_inc(v_inst_568_);
lean_inc_ref(v_inst_567_);
v___f_581_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed), 17, 16);
lean_closure_set(v___f_581_, 0, v_type_563_);
lean_closure_set(v___f_581_, 1, v_a_564_);
lean_closure_set(v___f_581_, 2, v_declName_565_);
lean_closure_set(v___f_581_, 3, v_a_579_);
lean_closure_set(v___f_581_, 4, v___x_580_);
lean_closure_set(v___f_581_, 5, v_inst_567_);
lean_closure_set(v___f_581_, 6, v_inst_568_);
lean_closure_set(v___f_581_, 7, v_inst_569_);
lean_closure_set(v___f_581_, 8, v_pre_570_);
lean_closure_set(v___f_581_, 9, v_post_571_);
lean_closure_set(v___f_581_, 10, v_x_572_);
lean_closure_set(v___f_581_, 11, v_x_573_);
lean_closure_set(v___f_581_, 12, v___y_574_);
lean_closure_set(v___f_581_, 13, v_value_575_);
lean_closure_set(v___f_581_, 14, v_body_576_);
lean_closure_set(v___f_581_, 15, v___y_577_);
v___x_582_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_567_, v_inst_568_, v_inst_569_, v_pre_570_, v_post_571_, v_x_572_, v_x_573_, v_body_576_, v___y_574_);
v___x_583_ = lean_apply_4(v_toBind_578_, lean_box(0), lean_box(0), v___x_582_, v___f_581_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_type_584_ = _args[0];
lean_object* v_a_585_ = _args[1];
lean_object* v_declName_586_ = _args[2];
lean_object* v_nondep_587_ = _args[3];
lean_object* v_inst_588_ = _args[4];
lean_object* v_inst_589_ = _args[5];
lean_object* v_inst_590_ = _args[6];
lean_object* v_pre_591_ = _args[7];
lean_object* v_post_592_ = _args[8];
lean_object* v_x_593_ = _args[9];
lean_object* v_x_594_ = _args[10];
lean_object* v___y_595_ = _args[11];
lean_object* v_value_596_ = _args[12];
lean_object* v_body_597_ = _args[13];
lean_object* v___y_598_ = _args[14];
lean_object* v_toBind_599_ = _args[15];
lean_object* v_a_600_ = _args[16];
_start:
{
uint8_t v_nondep_2689__boxed_601_; lean_object* v_res_602_; 
v_nondep_2689__boxed_601_ = lean_unbox(v_nondep_587_);
v_res_602_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(v_type_584_, v_a_585_, v_declName_586_, v_nondep_2689__boxed_601_, v_inst_588_, v_inst_589_, v_inst_590_, v_pre_591_, v_post_592_, v_x_593_, v_x_594_, v___y_595_, v_value_596_, v_body_597_, v___y_598_, v_toBind_599_, v_a_600_);
lean_dec(v___y_595_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(lean_object* v_type_603_, lean_object* v_declName_604_, uint8_t v_nondep_605_, lean_object* v_inst_606_, lean_object* v_inst_607_, lean_object* v_inst_608_, lean_object* v_pre_609_, lean_object* v_post_610_, lean_object* v_x_611_, lean_object* v_x_612_, lean_object* v___y_613_, lean_object* v_value_614_, lean_object* v_body_615_, lean_object* v___y_616_, lean_object* v_toBind_617_, lean_object* v_a_618_){
_start:
{
lean_object* v___x_619_; lean_object* v___f_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_619_ = lean_box(v_nondep_605_);
lean_inc(v_toBind_617_);
lean_inc_ref(v_value_614_);
lean_inc(v___y_613_);
lean_inc(v_x_612_);
lean_inc(v_post_610_);
lean_inc(v_pre_609_);
lean_inc_ref(v_inst_608_);
lean_inc(v_inst_607_);
lean_inc_ref(v_inst_606_);
v___f_620_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed), 17, 16);
lean_closure_set(v___f_620_, 0, v_type_603_);
lean_closure_set(v___f_620_, 1, v_a_618_);
lean_closure_set(v___f_620_, 2, v_declName_604_);
lean_closure_set(v___f_620_, 3, v___x_619_);
lean_closure_set(v___f_620_, 4, v_inst_606_);
lean_closure_set(v___f_620_, 5, v_inst_607_);
lean_closure_set(v___f_620_, 6, v_inst_608_);
lean_closure_set(v___f_620_, 7, v_pre_609_);
lean_closure_set(v___f_620_, 8, v_post_610_);
lean_closure_set(v___f_620_, 9, v_x_611_);
lean_closure_set(v___f_620_, 10, v_x_612_);
lean_closure_set(v___f_620_, 11, v___y_613_);
lean_closure_set(v___f_620_, 12, v_value_614_);
lean_closure_set(v___f_620_, 13, v_body_615_);
lean_closure_set(v___f_620_, 14, v___y_616_);
lean_closure_set(v___f_620_, 15, v_toBind_617_);
v___x_621_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_606_, v_inst_607_, v_inst_608_, v_pre_609_, v_post_610_, v_x_611_, v_x_612_, v_value_614_, v___y_613_);
v___x_622_ = lean_apply_4(v_toBind_617_, lean_box(0), lean_box(0), v___x_621_, v___f_620_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed(lean_object* v_type_623_, lean_object* v_declName_624_, lean_object* v_nondep_625_, lean_object* v_inst_626_, lean_object* v_inst_627_, lean_object* v_inst_628_, lean_object* v_pre_629_, lean_object* v_post_630_, lean_object* v_x_631_, lean_object* v_x_632_, lean_object* v___y_633_, lean_object* v_value_634_, lean_object* v_body_635_, lean_object* v___y_636_, lean_object* v_toBind_637_, lean_object* v_a_638_){
_start:
{
uint8_t v_nondep_2704__boxed_639_; lean_object* v_res_640_; 
v_nondep_2704__boxed_639_ = lean_unbox(v_nondep_625_);
v_res_640_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(v_type_623_, v_declName_624_, v_nondep_2704__boxed_639_, v_inst_626_, v_inst_627_, v_inst_628_, v_pre_629_, v_post_630_, v_x_631_, v_x_632_, v___y_633_, v_value_634_, v_body_635_, v___y_636_, v_toBind_637_, v_a_638_);
lean_dec(v___y_633_);
return v_res_640_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0(void){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_box(0);
v___x_642_ = l_unsafeCast___redArg(v___x_641_);
return v___x_642_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1(void){
_start:
{
lean_object* v___x_643_; lean_object* v_dummy_644_; 
v___x_643_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_dummy_644_ = l_Lean_Expr_sort___override(v___x_643_);
return v_dummy_644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(lean_object* v_expr_645_, lean_object* v_data_646_, lean_object* v_inst_647_, lean_object* v_inst_648_, lean_object* v_inst_649_, lean_object* v_pre_650_, lean_object* v_post_651_, lean_object* v_x_652_, lean_object* v_x_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v_a_656_){
_start:
{
size_t v___x_657_; size_t v___x_658_; uint8_t v___x_659_; 
v___x_657_ = lean_ptr_addr(v_expr_645_);
v___x_658_ = lean_ptr_addr(v_a_656_);
v___x_659_ = lean_usize_dec_eq(v___x_657_, v___x_658_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; lean_object* v___x_661_; 
lean_dec_ref(v___y_655_);
v___x_660_ = l_Lean_Expr_mdata___override(v_data_646_, v_a_656_);
v___x_661_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_647_, v_inst_648_, v_inst_649_, v_pre_650_, v_post_651_, v_x_652_, v_x_653_, v___x_660_, v___y_654_);
return v___x_661_;
}
else
{
lean_object* v___x_662_; 
lean_dec_ref(v_a_656_);
lean_dec(v_data_646_);
v___x_662_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_647_, v_inst_648_, v_inst_649_, v_pre_650_, v_post_651_, v_x_652_, v_x_653_, v___y_655_, v___y_654_);
return v___x_662_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed(lean_object* v_expr_663_, lean_object* v_data_664_, lean_object* v_inst_665_, lean_object* v_inst_666_, lean_object* v_inst_667_, lean_object* v_pre_668_, lean_object* v_post_669_, lean_object* v_x_670_, lean_object* v_x_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v_a_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(v_expr_663_, v_data_664_, v_inst_665_, v_inst_666_, v_inst_667_, v_pre_668_, v_post_669_, v_x_670_, v_x_671_, v___y_672_, v___y_673_, v_a_674_);
lean_dec(v___y_672_);
lean_dec_ref(v_expr_663_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(lean_object* v_struct_676_, lean_object* v_typeName_677_, lean_object* v_idx_678_, lean_object* v_inst_679_, lean_object* v_inst_680_, lean_object* v_inst_681_, lean_object* v_pre_682_, lean_object* v_post_683_, lean_object* v_x_684_, lean_object* v_x_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v_a_688_){
_start:
{
size_t v___x_689_; size_t v___x_690_; uint8_t v___x_691_; 
v___x_689_ = lean_ptr_addr(v_struct_676_);
v___x_690_ = lean_ptr_addr(v_a_688_);
v___x_691_ = lean_usize_dec_eq(v___x_689_, v___x_690_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; lean_object* v___x_693_; 
lean_dec_ref(v___y_687_);
v___x_692_ = l_Lean_Expr_proj___override(v_typeName_677_, v_idx_678_, v_a_688_);
v___x_693_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_679_, v_inst_680_, v_inst_681_, v_pre_682_, v_post_683_, v_x_684_, v_x_685_, v___x_692_, v___y_686_);
return v___x_693_;
}
else
{
lean_object* v___x_694_; 
lean_dec_ref(v_a_688_);
lean_dec(v_idx_678_);
lean_dec(v_typeName_677_);
v___x_694_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_679_, v_inst_680_, v_inst_681_, v_pre_682_, v_post_683_, v_x_684_, v_x_685_, v___y_687_, v___y_686_);
return v___x_694_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed(lean_object* v_struct_695_, lean_object* v_typeName_696_, lean_object* v_idx_697_, lean_object* v_inst_698_, lean_object* v_inst_699_, lean_object* v_inst_700_, lean_object* v_pre_701_, lean_object* v_post_702_, lean_object* v_x_703_, lean_object* v_x_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v_a_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(v_struct_695_, v_typeName_696_, v_idx_697_, v_inst_698_, v_inst_699_, v_inst_700_, v_pre_701_, v_post_702_, v_x_703_, v_x_704_, v___y_705_, v___y_706_, v_a_707_);
lean_dec(v___y_705_);
lean_dec_ref(v_struct_695_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(lean_object* v_toApplicative_709_, lean_object* v_inst_710_, lean_object* v_inst_711_, lean_object* v_inst_712_, lean_object* v_pre_713_, lean_object* v_post_714_, lean_object* v_x_715_, lean_object* v_x_716_, lean_object* v___y_717_, lean_object* v_toBind_718_, lean_object* v___f_719_, lean_object* v___f_720_, lean_object* v_e_721_, lean_object* v_a_722_){
_start:
{
lean_object* v___y_724_; 
switch(lean_obj_tag(v_a_722_))
{
case 0:
{
lean_object* v_e_769_; lean_object* v_toPure_770_; lean_object* v___x_771_; 
lean_dec_ref(v_e_721_);
lean_dec(v___f_720_);
lean_dec(v___f_719_);
lean_dec(v_toBind_718_);
lean_dec(v_x_716_);
lean_dec(v_post_714_);
lean_dec(v_pre_713_);
lean_dec_ref(v_inst_712_);
lean_dec(v_inst_711_);
lean_dec_ref(v_inst_710_);
v_e_769_ = lean_ctor_get(v_a_722_, 0);
lean_inc_ref(v_e_769_);
lean_dec_ref_known(v_a_722_, 1);
v_toPure_770_ = lean_ctor_get(v_toApplicative_709_, 1);
lean_inc(v_toPure_770_);
lean_dec_ref(v_toApplicative_709_);
v___x_771_ = lean_apply_2(v_toPure_770_, lean_box(0), v_e_769_);
return v___x_771_;
}
case 1:
{
lean_object* v_e_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
lean_dec_ref(v_e_721_);
lean_dec(v___f_720_);
lean_dec_ref(v_toApplicative_709_);
v_e_772_ = lean_ctor_get(v_a_722_, 0);
lean_inc_ref(v_e_772_);
lean_dec_ref_known(v_a_722_, 1);
v___x_773_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_710_, v_inst_711_, v_inst_712_, v_pre_713_, v_post_714_, v_x_715_, v_x_716_, v_e_772_, v___y_717_);
v___x_774_ = lean_apply_4(v_toBind_718_, lean_box(0), lean_box(0), v___x_773_, v___f_719_);
return v___x_774_;
}
default: 
{
lean_object* v_e_x3f_775_; 
lean_dec(v___f_719_);
lean_dec_ref(v_toApplicative_709_);
v_e_x3f_775_ = lean_ctor_get(v_a_722_, 0);
lean_inc(v_e_x3f_775_);
lean_dec_ref_known(v_a_722_, 1);
if (lean_obj_tag(v_e_x3f_775_) == 0)
{
v___y_724_ = v_e_721_;
goto v___jp_723_;
}
else
{
lean_object* v_val_776_; 
lean_dec_ref(v_e_721_);
v_val_776_ = lean_ctor_get(v_e_x3f_775_, 0);
lean_inc(v_val_776_);
lean_dec_ref_known(v_e_x3f_775_, 1);
v___y_724_ = v_val_776_;
goto v___jp_723_;
}
}
}
v___jp_723_:
{
switch(lean_obj_tag(v___y_724_))
{
case 7:
{
lean_object* v_binderName_725_; lean_object* v_binderType_726_; lean_object* v_body_727_; uint8_t v_binderInfo_728_; lean_object* v___x_729_; lean_object* v___f_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
lean_dec(v___f_720_);
v_binderName_725_ = lean_ctor_get(v___y_724_, 0);
lean_inc(v_binderName_725_);
v_binderType_726_ = lean_ctor_get(v___y_724_, 1);
lean_inc_ref_n(v_binderType_726_, 2);
v_body_727_ = lean_ctor_get(v___y_724_, 2);
lean_inc_ref(v_body_727_);
v_binderInfo_728_ = lean_ctor_get_uint8(v___y_724_, sizeof(void*)*3 + 8);
v___x_729_ = lean_box(v_binderInfo_728_);
lean_inc(v_toBind_718_);
lean_inc(v___y_717_);
lean_inc(v_x_716_);
lean_inc(v_post_714_);
lean_inc(v_pre_713_);
lean_inc_ref(v_inst_712_);
lean_inc(v_inst_711_);
lean_inc_ref(v_inst_710_);
v___f_730_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed), 15, 14);
lean_closure_set(v___f_730_, 0, v_binderType_726_);
lean_closure_set(v___f_730_, 1, v_binderName_725_);
lean_closure_set(v___f_730_, 2, v___x_729_);
lean_closure_set(v___f_730_, 3, v_inst_710_);
lean_closure_set(v___f_730_, 4, v_inst_711_);
lean_closure_set(v___f_730_, 5, v_inst_712_);
lean_closure_set(v___f_730_, 6, v_pre_713_);
lean_closure_set(v___f_730_, 7, v_post_714_);
lean_closure_set(v___f_730_, 8, v_x_715_);
lean_closure_set(v___f_730_, 9, v_x_716_);
lean_closure_set(v___f_730_, 10, v___y_717_);
lean_closure_set(v___f_730_, 11, v_body_727_);
lean_closure_set(v___f_730_, 12, v___y_724_);
lean_closure_set(v___f_730_, 13, v_toBind_718_);
v___x_731_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_710_, v_inst_711_, v_inst_712_, v_pre_713_, v_post_714_, v_x_715_, v_x_716_, v_binderType_726_, v___y_717_);
v___x_732_ = lean_apply_4(v_toBind_718_, lean_box(0), lean_box(0), v___x_731_, v___f_730_);
return v___x_732_;
}
case 6:
{
lean_object* v_binderName_733_; lean_object* v_binderType_734_; lean_object* v_body_735_; uint8_t v_binderInfo_736_; lean_object* v___x_737_; lean_object* v___f_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
lean_dec(v___f_720_);
v_binderName_733_ = lean_ctor_get(v___y_724_, 0);
lean_inc(v_binderName_733_);
v_binderType_734_ = lean_ctor_get(v___y_724_, 1);
lean_inc_ref_n(v_binderType_734_, 2);
v_body_735_ = lean_ctor_get(v___y_724_, 2);
lean_inc_ref(v_body_735_);
v_binderInfo_736_ = lean_ctor_get_uint8(v___y_724_, sizeof(void*)*3 + 8);
v___x_737_ = lean_box(v_binderInfo_736_);
lean_inc(v_toBind_718_);
lean_inc(v___y_717_);
lean_inc(v_x_716_);
lean_inc(v_post_714_);
lean_inc(v_pre_713_);
lean_inc_ref(v_inst_712_);
lean_inc(v_inst_711_);
lean_inc_ref(v_inst_710_);
v___f_738_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed), 15, 14);
lean_closure_set(v___f_738_, 0, v_binderType_734_);
lean_closure_set(v___f_738_, 1, v_binderName_733_);
lean_closure_set(v___f_738_, 2, v___x_737_);
lean_closure_set(v___f_738_, 3, v_inst_710_);
lean_closure_set(v___f_738_, 4, v_inst_711_);
lean_closure_set(v___f_738_, 5, v_inst_712_);
lean_closure_set(v___f_738_, 6, v_pre_713_);
lean_closure_set(v___f_738_, 7, v_post_714_);
lean_closure_set(v___f_738_, 8, v_x_715_);
lean_closure_set(v___f_738_, 9, v_x_716_);
lean_closure_set(v___f_738_, 10, v___y_717_);
lean_closure_set(v___f_738_, 11, v_body_735_);
lean_closure_set(v___f_738_, 12, v___y_724_);
lean_closure_set(v___f_738_, 13, v_toBind_718_);
v___x_739_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_710_, v_inst_711_, v_inst_712_, v_pre_713_, v_post_714_, v_x_715_, v_x_716_, v_binderType_734_, v___y_717_);
v___x_740_ = lean_apply_4(v_toBind_718_, lean_box(0), lean_box(0), v___x_739_, v___f_738_);
return v___x_740_;
}
case 8:
{
lean_object* v_declName_741_; lean_object* v_type_742_; lean_object* v_value_743_; lean_object* v_body_744_; uint8_t v_nondep_745_; lean_object* v___x_746_; lean_object* v___f_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
lean_dec(v___f_720_);
v_declName_741_ = lean_ctor_get(v___y_724_, 0);
lean_inc(v_declName_741_);
v_type_742_ = lean_ctor_get(v___y_724_, 1);
lean_inc_ref_n(v_type_742_, 2);
v_value_743_ = lean_ctor_get(v___y_724_, 2);
lean_inc_ref(v_value_743_);
v_body_744_ = lean_ctor_get(v___y_724_, 3);
lean_inc_ref(v_body_744_);
v_nondep_745_ = lean_ctor_get_uint8(v___y_724_, sizeof(void*)*4 + 8);
v___x_746_ = lean_box(v_nondep_745_);
lean_inc(v_toBind_718_);
lean_inc(v___y_717_);
lean_inc(v_x_716_);
lean_inc(v_post_714_);
lean_inc(v_pre_713_);
lean_inc_ref(v_inst_712_);
lean_inc(v_inst_711_);
lean_inc_ref(v_inst_710_);
v___f_747_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed), 16, 15);
lean_closure_set(v___f_747_, 0, v_type_742_);
lean_closure_set(v___f_747_, 1, v_declName_741_);
lean_closure_set(v___f_747_, 2, v___x_746_);
lean_closure_set(v___f_747_, 3, v_inst_710_);
lean_closure_set(v___f_747_, 4, v_inst_711_);
lean_closure_set(v___f_747_, 5, v_inst_712_);
lean_closure_set(v___f_747_, 6, v_pre_713_);
lean_closure_set(v___f_747_, 7, v_post_714_);
lean_closure_set(v___f_747_, 8, v_x_715_);
lean_closure_set(v___f_747_, 9, v_x_716_);
lean_closure_set(v___f_747_, 10, v___y_717_);
lean_closure_set(v___f_747_, 11, v_value_743_);
lean_closure_set(v___f_747_, 12, v_body_744_);
lean_closure_set(v___f_747_, 13, v___y_724_);
lean_closure_set(v___f_747_, 14, v_toBind_718_);
v___x_748_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_710_, v_inst_711_, v_inst_712_, v_pre_713_, v_post_714_, v_x_715_, v_x_716_, v_type_742_, v___y_717_);
v___x_749_ = lean_apply_4(v_toBind_718_, lean_box(0), lean_box(0), v___x_748_, v___f_747_);
return v___x_749_;
}
case 5:
{
lean_object* v_dummy_750_; lean_object* v_nargs_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_2502__overap_755_; lean_object* v___x_756_; 
lean_dec(v_toBind_718_);
lean_dec(v_x_716_);
lean_dec(v_post_714_);
lean_dec(v_pre_713_);
lean_dec_ref(v_inst_712_);
lean_dec(v_inst_711_);
lean_dec_ref(v_inst_710_);
v_dummy_750_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1);
v_nargs_751_ = l_Lean_Expr_getAppNumArgs(v___y_724_);
lean_inc(v_nargs_751_);
v___x_752_ = lean_mk_array(v_nargs_751_, v_dummy_750_);
v___x_753_ = lean_unsigned_to_nat(1u);
v___x_754_ = lean_nat_sub(v_nargs_751_, v___x_753_);
lean_dec(v_nargs_751_);
v___x_2502__overap_755_ = l_Lean_Expr_withAppAux___redArg(v___f_720_, v___y_724_, v___x_752_, v___x_754_);
lean_inc(v___y_717_);
v___x_756_ = lean_apply_1(v___x_2502__overap_755_, v___y_717_);
return v___x_756_;
}
case 10:
{
lean_object* v_data_757_; lean_object* v_expr_758_; lean_object* v___f_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
lean_dec(v___f_720_);
v_data_757_ = lean_ctor_get(v___y_724_, 0);
lean_inc(v_data_757_);
v_expr_758_ = lean_ctor_get(v___y_724_, 1);
lean_inc_ref_n(v_expr_758_, 2);
lean_inc(v___y_717_);
lean_inc(v_x_716_);
lean_inc(v_post_714_);
lean_inc(v_pre_713_);
lean_inc_ref(v_inst_712_);
lean_inc(v_inst_711_);
lean_inc_ref(v_inst_710_);
v___f_759_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed), 12, 11);
lean_closure_set(v___f_759_, 0, v_expr_758_);
lean_closure_set(v___f_759_, 1, v_data_757_);
lean_closure_set(v___f_759_, 2, v_inst_710_);
lean_closure_set(v___f_759_, 3, v_inst_711_);
lean_closure_set(v___f_759_, 4, v_inst_712_);
lean_closure_set(v___f_759_, 5, v_pre_713_);
lean_closure_set(v___f_759_, 6, v_post_714_);
lean_closure_set(v___f_759_, 7, v_x_715_);
lean_closure_set(v___f_759_, 8, v_x_716_);
lean_closure_set(v___f_759_, 9, v___y_717_);
lean_closure_set(v___f_759_, 10, v___y_724_);
v___x_760_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_710_, v_inst_711_, v_inst_712_, v_pre_713_, v_post_714_, v_x_715_, v_x_716_, v_expr_758_, v___y_717_);
v___x_761_ = lean_apply_4(v_toBind_718_, lean_box(0), lean_box(0), v___x_760_, v___f_759_);
return v___x_761_;
}
case 11:
{
lean_object* v_typeName_762_; lean_object* v_idx_763_; lean_object* v_struct_764_; lean_object* v___f_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
lean_dec(v___f_720_);
v_typeName_762_ = lean_ctor_get(v___y_724_, 0);
lean_inc(v_typeName_762_);
v_idx_763_ = lean_ctor_get(v___y_724_, 1);
lean_inc(v_idx_763_);
v_struct_764_ = lean_ctor_get(v___y_724_, 2);
lean_inc_ref_n(v_struct_764_, 2);
lean_inc(v___y_717_);
lean_inc(v_x_716_);
lean_inc(v_post_714_);
lean_inc(v_pre_713_);
lean_inc_ref(v_inst_712_);
lean_inc(v_inst_711_);
lean_inc_ref(v_inst_710_);
v___f_765_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed), 13, 12);
lean_closure_set(v___f_765_, 0, v_struct_764_);
lean_closure_set(v___f_765_, 1, v_typeName_762_);
lean_closure_set(v___f_765_, 2, v_idx_763_);
lean_closure_set(v___f_765_, 3, v_inst_710_);
lean_closure_set(v___f_765_, 4, v_inst_711_);
lean_closure_set(v___f_765_, 5, v_inst_712_);
lean_closure_set(v___f_765_, 6, v_pre_713_);
lean_closure_set(v___f_765_, 7, v_post_714_);
lean_closure_set(v___f_765_, 8, v_x_715_);
lean_closure_set(v___f_765_, 9, v_x_716_);
lean_closure_set(v___f_765_, 10, v___y_717_);
lean_closure_set(v___f_765_, 11, v___y_724_);
v___x_766_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_710_, v_inst_711_, v_inst_712_, v_pre_713_, v_post_714_, v_x_715_, v_x_716_, v_struct_764_, v___y_717_);
v___x_767_ = lean_apply_4(v_toBind_718_, lean_box(0), lean_box(0), v___x_766_, v___f_765_);
return v___x_767_;
}
default: 
{
lean_object* v___x_768_; 
lean_dec(v___f_720_);
lean_dec(v_toBind_718_);
v___x_768_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_710_, v_inst_711_, v_inst_712_, v_pre_713_, v_post_714_, v_x_715_, v_x_716_, v___y_724_, v___y_717_);
return v___x_768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___boxed(lean_object* v_toApplicative_777_, lean_object* v_inst_778_, lean_object* v_inst_779_, lean_object* v_inst_780_, lean_object* v_pre_781_, lean_object* v_post_782_, lean_object* v_x_783_, lean_object* v_x_784_, lean_object* v___y_785_, lean_object* v_toBind_786_, lean_object* v___f_787_, lean_object* v___f_788_, lean_object* v_e_789_, lean_object* v_a_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(v_toApplicative_777_, v_inst_778_, v_inst_779_, v_inst_780_, v_pre_781_, v_post_782_, v_x_783_, v_x_784_, v___y_785_, v_toBind_786_, v___f_787_, v___f_788_, v_e_789_, v_a_790_);
lean_dec(v___y_785_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(lean_object* v_inst_792_, lean_object* v_inst_793_, lean_object* v_inst_794_, lean_object* v_pre_795_, lean_object* v_post_796_, lean_object* v_x_797_, lean_object* v_x_798_, lean_object* v_toApplicative_799_, lean_object* v_toBind_800_, lean_object* v___f_801_, lean_object* v_e_802_, lean_object* v_____r_803_, lean_object* v___y_804_){
_start:
{
lean_object* v___f_805_; lean_object* v___f_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
lean_inc_n(v___y_804_, 2);
lean_inc(v_x_798_);
lean_inc(v_post_796_);
lean_inc_n(v_pre_795_, 2);
lean_inc_ref(v_inst_794_);
lean_inc(v_inst_793_);
lean_inc_ref(v_inst_792_);
v___f_805_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed), 9, 8);
lean_closure_set(v___f_805_, 0, v_inst_792_);
lean_closure_set(v___f_805_, 1, v_inst_793_);
lean_closure_set(v___f_805_, 2, v_inst_794_);
lean_closure_set(v___f_805_, 3, v_pre_795_);
lean_closure_set(v___f_805_, 4, v_post_796_);
lean_closure_set(v___f_805_, 5, v_x_797_);
lean_closure_set(v___f_805_, 6, v_x_798_);
lean_closure_set(v___f_805_, 7, v___y_804_);
lean_inc_ref(v_e_802_);
lean_inc(v_toBind_800_);
v___f_806_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___boxed), 14, 13);
lean_closure_set(v___f_806_, 0, v_toApplicative_799_);
lean_closure_set(v___f_806_, 1, v_inst_792_);
lean_closure_set(v___f_806_, 2, v_inst_793_);
lean_closure_set(v___f_806_, 3, v_inst_794_);
lean_closure_set(v___f_806_, 4, v_pre_795_);
lean_closure_set(v___f_806_, 5, v_post_796_);
lean_closure_set(v___f_806_, 6, v_x_797_);
lean_closure_set(v___f_806_, 7, v_x_798_);
lean_closure_set(v___f_806_, 8, v___y_804_);
lean_closure_set(v___f_806_, 9, v_toBind_800_);
lean_closure_set(v___f_806_, 10, v___f_805_);
lean_closure_set(v___f_806_, 11, v___f_801_);
lean_closure_set(v___f_806_, 12, v_e_802_);
v___x_807_ = lean_apply_1(v_pre_795_, v_e_802_);
v___x_808_ = lean_apply_4(v_toBind_800_, lean_box(0), lean_box(0), v___x_807_, v___f_806_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18___boxed(lean_object* v_inst_809_, lean_object* v_inst_810_, lean_object* v_inst_811_, lean_object* v_pre_812_, lean_object* v_post_813_, lean_object* v_x_814_, lean_object* v_x_815_, lean_object* v_toApplicative_816_, lean_object* v_toBind_817_, lean_object* v___f_818_, lean_object* v_e_819_, lean_object* v_____r_820_, lean_object* v___y_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(v_inst_809_, v_inst_810_, v_inst_811_, v_pre_812_, v_post_813_, v_x_814_, v_x_815_, v_toApplicative_816_, v_toBind_817_, v___f_818_, v_e_819_, v_____r_820_, v___y_821_);
lean_dec(v___y_821_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(lean_object* v_inst_823_, lean_object* v_inst_824_, lean_object* v_inst_825_, lean_object* v_pre_826_, lean_object* v_post_827_, lean_object* v_x_828_, lean_object* v_x_829_, lean_object* v_e_830_, lean_object* v_a_831_){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___f_836_; lean_object* v___f_837_; lean_object* v___x_838_; lean_object* v_toApplicative_839_; lean_object* v_toBind_840_; lean_object* v___f_841_; lean_object* v___f_842_; lean_object* v___f_843_; lean_object* v___f_844_; lean_object* v___f_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_832_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_833_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref_n(v_inst_823_, 3);
v___x_834_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_828_, v___x_832_, v___x_833_, v_inst_823_);
v___x_835_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_828_, v___x_832_, v___x_833_);
lean_inc_ref_n(v_inst_825_, 3);
lean_inc_ref(v___x_835_);
v___f_836_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_836_, 0, v___x_835_);
lean_closure_set(v___f_836_, 1, v_inst_825_);
v___f_837_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_837_, 0, v___x_835_);
lean_closure_set(v___f_837_, 1, v_inst_825_);
v___x_838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_838_, 0, v___f_836_);
lean_ctor_set(v___x_838_, 1, v___f_837_);
v_toApplicative_839_ = lean_ctor_get(v_inst_823_, 0);
lean_inc_ref_n(v_toApplicative_839_, 4);
v_toBind_840_ = lean_ctor_get(v_inst_823_, 1);
lean_inc_n(v_toBind_840_, 6);
lean_inc_n(v_x_829_, 3);
lean_inc_n(v_a_831_, 3);
lean_inc_ref_n(v_e_830_, 2);
v___f_841_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_841_, 0, v_toApplicative_839_);
lean_closure_set(v___f_841_, 1, v___x_832_);
lean_closure_set(v___f_841_, 2, v___x_833_);
lean_closure_set(v___f_841_, 3, v_e_830_);
lean_closure_set(v___f_841_, 4, v_a_831_);
lean_closure_set(v___f_841_, 5, v_x_829_);
lean_closure_set(v___f_841_, 6, v_toBind_840_);
v___f_842_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_842_, 0, v_toApplicative_839_);
lean_closure_set(v___f_842_, 1, v___x_832_);
lean_closure_set(v___f_842_, 2, v___x_833_);
lean_closure_set(v___f_842_, 3, v_e_830_);
lean_inc_ref(v___x_834_);
lean_inc(v_post_827_);
lean_inc(v_pre_826_);
lean_inc_n(v_inst_824_, 2);
v___f_843_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed), 12, 9);
lean_closure_set(v___f_843_, 0, v_inst_823_);
lean_closure_set(v___f_843_, 1, v_inst_824_);
lean_closure_set(v___f_843_, 2, v_inst_825_);
lean_closure_set(v___f_843_, 3, v_pre_826_);
lean_closure_set(v___f_843_, 4, v_post_827_);
lean_closure_set(v___f_843_, 5, v_x_828_);
lean_closure_set(v___f_843_, 6, v_x_829_);
lean_closure_set(v___f_843_, 7, v___x_834_);
lean_closure_set(v___f_843_, 8, v_toBind_840_);
v___f_844_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18___boxed), 13, 11);
lean_closure_set(v___f_844_, 0, v_inst_823_);
lean_closure_set(v___f_844_, 1, v_inst_824_);
lean_closure_set(v___f_844_, 2, v_inst_825_);
lean_closure_set(v___f_844_, 3, v_pre_826_);
lean_closure_set(v___f_844_, 4, v_post_827_);
lean_closure_set(v___f_844_, 5, v_x_828_);
lean_closure_set(v___f_844_, 6, v_x_829_);
lean_closure_set(v___f_844_, 7, v_toApplicative_839_);
lean_closure_set(v___f_844_, 8, v_toBind_840_);
lean_closure_set(v___f_844_, 9, v___f_843_);
lean_closure_set(v___f_844_, 10, v_e_830_);
v___f_845_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___boxed), 13, 12);
lean_closure_set(v___f_845_, 0, v_inst_824_);
lean_closure_set(v___f_845_, 1, v_x_828_);
lean_closure_set(v___f_845_, 2, v___x_832_);
lean_closure_set(v___f_845_, 3, v___x_833_);
lean_closure_set(v___f_845_, 4, v_inst_823_);
lean_closure_set(v___f_845_, 5, v___f_844_);
lean_closure_set(v___f_845_, 6, v___x_834_);
lean_closure_set(v___f_845_, 7, v___x_838_);
lean_closure_set(v___f_845_, 8, v_a_831_);
lean_closure_set(v___f_845_, 9, v_toBind_840_);
lean_closure_set(v___f_845_, 10, v___f_841_);
lean_closure_set(v___f_845_, 11, v_toApplicative_839_);
v___x_846_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_846_, 0, lean_box(0));
lean_closure_set(v___x_846_, 1, lean_box(0));
lean_closure_set(v___x_846_, 2, v_a_831_);
v___x_847_ = lean_apply_2(v_x_829_, lean_box(0), v___x_846_);
v___x_848_ = lean_apply_4(v_toBind_840_, lean_box(0), lean_box(0), v___x_847_, v___f_842_);
v___x_849_ = lean_apply_4(v_toBind_840_, lean_box(0), lean_box(0), v___x_848_, v___f_845_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(lean_object* v_toApplicative_850_, lean_object* v_inst_851_, lean_object* v_inst_852_, lean_object* v_inst_853_, lean_object* v_pre_854_, lean_object* v_post_855_, lean_object* v_x_856_, lean_object* v_x_857_, lean_object* v_a_858_, lean_object* v_e_859_, lean_object* v_a_860_){
_start:
{
lean_object* v___y_862_; 
switch(lean_obj_tag(v_a_860_))
{
case 0:
{
lean_object* v_e_865_; lean_object* v_toPure_866_; lean_object* v___x_867_; 
lean_dec_ref(v_e_859_);
lean_dec(v_x_857_);
lean_dec(v_post_855_);
lean_dec(v_pre_854_);
lean_dec_ref(v_inst_853_);
lean_dec(v_inst_852_);
lean_dec_ref(v_inst_851_);
v_e_865_ = lean_ctor_get(v_a_860_, 0);
lean_inc_ref(v_e_865_);
lean_dec_ref_known(v_a_860_, 1);
v_toPure_866_ = lean_ctor_get(v_toApplicative_850_, 1);
lean_inc(v_toPure_866_);
lean_dec_ref(v_toApplicative_850_);
v___x_867_ = lean_apply_2(v_toPure_866_, lean_box(0), v_e_865_);
return v___x_867_;
}
case 1:
{
lean_object* v_e_868_; lean_object* v___x_869_; 
lean_dec_ref(v_e_859_);
lean_dec_ref(v_toApplicative_850_);
v_e_868_ = lean_ctor_get(v_a_860_, 0);
lean_inc_ref(v_e_868_);
lean_dec_ref_known(v_a_860_, 1);
v___x_869_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_851_, v_inst_852_, v_inst_853_, v_pre_854_, v_post_855_, v_x_856_, v_x_857_, v_e_868_, v_a_858_);
return v___x_869_;
}
default: 
{
lean_object* v_e_x3f_870_; 
lean_dec(v_x_857_);
lean_dec(v_post_855_);
lean_dec(v_pre_854_);
lean_dec_ref(v_inst_853_);
lean_dec(v_inst_852_);
lean_dec_ref(v_inst_851_);
v_e_x3f_870_ = lean_ctor_get(v_a_860_, 0);
lean_inc(v_e_x3f_870_);
lean_dec_ref_known(v_a_860_, 1);
if (lean_obj_tag(v_e_x3f_870_) == 0)
{
v___y_862_ = v_e_859_;
goto v___jp_861_;
}
else
{
lean_object* v_val_871_; 
lean_dec_ref(v_e_859_);
v_val_871_ = lean_ctor_get(v_e_x3f_870_, 0);
lean_inc(v_val_871_);
lean_dec_ref_known(v_e_x3f_870_, 1);
v___y_862_ = v_val_871_;
goto v___jp_861_;
}
}
}
v___jp_861_:
{
lean_object* v_toPure_863_; lean_object* v___x_864_; 
v_toPure_863_ = lean_ctor_get(v_toApplicative_850_, 1);
lean_inc(v_toPure_863_);
lean_dec_ref(v_toApplicative_850_);
v___x_864_ = lean_apply_2(v_toPure_863_, lean_box(0), v___y_862_);
return v___x_864_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed(lean_object* v_toApplicative_872_, lean_object* v_inst_873_, lean_object* v_inst_874_, lean_object* v_inst_875_, lean_object* v_pre_876_, lean_object* v_post_877_, lean_object* v_x_878_, lean_object* v_x_879_, lean_object* v_a_880_, lean_object* v_e_881_, lean_object* v_a_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(v_toApplicative_872_, v_inst_873_, v_inst_874_, v_inst_875_, v_pre_876_, v_post_877_, v_x_878_, v_x_879_, v_a_880_, v_e_881_, v_a_882_);
lean_dec(v_a_880_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(lean_object* v_inst_884_, lean_object* v_inst_885_, lean_object* v_inst_886_, lean_object* v_pre_887_, lean_object* v_post_888_, lean_object* v_x_889_, lean_object* v_x_890_, lean_object* v_e_891_, lean_object* v_a_892_){
_start:
{
lean_object* v_toApplicative_893_; lean_object* v_toBind_894_; lean_object* v___f_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_toApplicative_893_ = lean_ctor_get(v_inst_884_, 0);
lean_inc_ref(v_toApplicative_893_);
v_toBind_894_ = lean_ctor_get(v_inst_884_, 1);
lean_inc(v_toBind_894_);
lean_inc_ref(v_e_891_);
lean_inc(v_a_892_);
lean_inc(v_post_888_);
v___f_895_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed), 11, 10);
lean_closure_set(v___f_895_, 0, v_toApplicative_893_);
lean_closure_set(v___f_895_, 1, v_inst_884_);
lean_closure_set(v___f_895_, 2, v_inst_885_);
lean_closure_set(v___f_895_, 3, v_inst_886_);
lean_closure_set(v___f_895_, 4, v_pre_887_);
lean_closure_set(v___f_895_, 5, v_post_888_);
lean_closure_set(v___f_895_, 6, v_x_889_);
lean_closure_set(v___f_895_, 7, v_x_890_);
lean_closure_set(v___f_895_, 8, v_a_892_);
lean_closure_set(v___f_895_, 9, v_e_891_);
v___x_896_ = lean_apply_1(v_post_888_, v_e_891_);
v___x_897_ = lean_apply_4(v_toBind_894_, lean_box(0), lean_box(0), v___x_896_, v___f_895_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(lean_object* v_inst_898_, lean_object* v_inst_899_, lean_object* v_inst_900_, lean_object* v_pre_901_, lean_object* v_post_902_, lean_object* v_x_903_, lean_object* v_x_904_, lean_object* v___y_905_, lean_object* v_a_906_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_898_, v_inst_899_, v_inst_900_, v_pre_901_, v_post_902_, v_x_903_, v_x_904_, v_a_906_, v___y_905_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___boxed(lean_object* v_inst_908_, lean_object* v_inst_909_, lean_object* v_inst_910_, lean_object* v_pre_911_, lean_object* v_post_912_, lean_object* v_x_913_, lean_object* v_x_914_, lean_object* v_e_915_, lean_object* v_a_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_908_, v_inst_909_, v_inst_910_, v_pre_911_, v_post_912_, v_x_913_, v_x_914_, v_e_915_, v_a_916_);
lean_dec(v_a_916_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(lean_object* v_m_918_, lean_object* v_inst_919_, lean_object* v_inst_920_, lean_object* v_inst_921_, lean_object* v_pre_922_, lean_object* v_post_923_, lean_object* v_x_924_, lean_object* v_x_925_, lean_object* v_e_926_, lean_object* v_a_927_){
_start:
{
lean_object* v___x_928_; 
v___x_928_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_919_, v_inst_920_, v_inst_921_, v_pre_922_, v_post_923_, v_x_924_, v_x_925_, v_e_926_, v_a_927_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___boxed(lean_object* v_m_929_, lean_object* v_inst_930_, lean_object* v_inst_931_, lean_object* v_inst_932_, lean_object* v_pre_933_, lean_object* v_post_934_, lean_object* v_x_935_, lean_object* v_x_936_, lean_object* v_e_937_, lean_object* v_a_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(v_m_929_, v_inst_930_, v_inst_931_, v_inst_932_, v_pre_933_, v_post_934_, v_x_935_, v_x_936_, v_e_937_, v_a_938_);
lean_dec(v_a_938_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(lean_object* v_m_940_, lean_object* v_inst_941_, lean_object* v_inst_942_, lean_object* v_inst_943_, lean_object* v_pre_944_, lean_object* v_post_945_, lean_object* v_x_946_, lean_object* v_x_947_, lean_object* v_e_948_, lean_object* v_a_949_){
_start:
{
lean_object* v___x_950_; 
v___x_950_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_941_, v_inst_942_, v_inst_943_, v_pre_944_, v_post_945_, v_x_946_, v_x_947_, v_e_948_, v_a_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___boxed(lean_object* v_m_951_, lean_object* v_inst_952_, lean_object* v_inst_953_, lean_object* v_inst_954_, lean_object* v_pre_955_, lean_object* v_post_956_, lean_object* v_x_957_, lean_object* v_x_958_, lean_object* v_e_959_, lean_object* v_a_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(v_m_951_, v_inst_952_, v_inst_953_, v_inst_954_, v_pre_955_, v_post_956_, v_x_957_, v_x_958_, v_e_959_, v_a_960_);
lean_dec(v_a_960_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0(lean_object* v_x_962_){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_964_ = lean_apply_1(v_x_962_, lean_box(0));
v___x_965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_965_, 0, v___x_964_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0___boxed(lean_object* v_x_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lean_Core_transform___redArg___lam__0(v_x_966_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__1(lean_object* v_inst_969_, lean_object* v_00_u03b1_970_, lean_object* v_x_971_){
_start:
{
lean_object* v___f_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___f_972_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_972_, 0, v_x_971_);
v___x_973_ = lean_alloc_closure((void*)(l_Lean_Core_liftIOCore___boxed), 5, 2);
lean_closure_set(v___x_973_, 0, lean_box(0));
lean_closure_set(v___x_973_, 1, v___f_972_);
v___x_974_ = lean_apply_2(v_inst_969_, lean_box(0), v___x_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__2(lean_object* v_toPure_975_, lean_object* v_____x_976_){
_start:
{
lean_object* v_fst_977_; lean_object* v___x_978_; 
v_fst_977_ = lean_ctor_get(v_____x_976_, 0);
lean_inc(v_fst_977_);
lean_dec_ref(v_____x_976_);
v___x_978_ = lean_apply_2(v_toPure_975_, lean_box(0), v_fst_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__3(lean_object* v_a_979_, lean_object* v_toPure_980_, lean_object* v_s_981_){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_982_, 0, v_a_979_);
lean_ctor_set(v___x_982_, 1, v_s_981_);
v___x_983_ = lean_apply_2(v_toPure_980_, lean_box(0), v___x_982_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__4(lean_object* v_toPure_984_, lean_object* v_ref_985_, lean_object* v_x_986_, lean_object* v_toBind_987_, lean_object* v_a_988_){
_start:
{
lean_object* v___f_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___f_989_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__3), 3, 2);
lean_closure_set(v___f_989_, 0, v_a_988_);
lean_closure_set(v___f_989_, 1, v_toPure_984_);
v___x_990_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_990_, 0, lean_box(0));
lean_closure_set(v___x_990_, 1, lean_box(0));
lean_closure_set(v___x_990_, 2, v_ref_985_);
v___x_991_ = lean_apply_2(v_x_986_, lean_box(0), v___x_990_);
v___x_992_ = lean_apply_4(v_toBind_987_, lean_box(0), lean_box(0), v___x_991_, v___f_989_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__5(lean_object* v_toPure_993_, lean_object* v_x_994_, lean_object* v_toBind_995_, lean_object* v_inst_996_, lean_object* v_inst_997_, lean_object* v_inst_998_, lean_object* v_pre_999_, lean_object* v_post_1000_, lean_object* v_x_1001_, lean_object* v_input_1002_, lean_object* v_ref_1003_){
_start:
{
lean_object* v___f_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
lean_inc(v_toBind_995_);
lean_inc(v_x_994_);
lean_inc(v_ref_1003_);
v___f_1004_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1004_, 0, v_toPure_993_);
lean_closure_set(v___f_1004_, 1, v_ref_1003_);
lean_closure_set(v___f_1004_, 2, v_x_994_);
lean_closure_set(v___f_1004_, 3, v_toBind_995_);
v___x_1005_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_996_, v_inst_997_, v_inst_998_, v_pre_999_, v_post_1000_, v_x_1001_, v_x_994_, v_input_1002_, v_ref_1003_);
lean_dec(v_ref_1003_);
v___x_1006_ = lean_apply_4(v_toBind_995_, lean_box(0), lean_box(0), v___x_1005_, v___f_1004_);
return v___x_1006_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__0(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1007_ = lean_box(0);
v___x_1008_ = lean_unsigned_to_nat(16u);
v___x_1009_ = lean_mk_array(v___x_1008_, v___x_1007_);
return v___x_1009_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__1(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1010_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__0, &l_Lean_Core_transform___redArg___closed__0_once, _init_l_Lean_Core_transform___redArg___closed__0);
v___x_1011_ = lean_unsigned_to_nat(0u);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
lean_ctor_set(v___x_1012_, 1, v___x_1010_);
return v___x_1012_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__2(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__1, &l_Lean_Core_transform___redArg___closed__1_once, _init_l_Lean_Core_transform___redArg___closed__1);
v___x_1014_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1014_, 0, lean_box(0));
lean_closure_set(v___x_1014_, 1, lean_box(0));
lean_closure_set(v___x_1014_, 2, v___x_1013_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg(lean_object* v_inst_1015_, lean_object* v_inst_1016_, lean_object* v_inst_1017_, lean_object* v_input_1018_, lean_object* v_pre_1019_, lean_object* v_post_1020_){
_start:
{
lean_object* v_x_1021_; lean_object* v_toApplicative_1022_; lean_object* v_toBind_1023_; lean_object* v_toPure_1024_; lean_object* v_x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___f_1028_; lean_object* v___f_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v_x_1021_ = lean_box(0);
v_toApplicative_1022_ = lean_ctor_get(v_inst_1015_, 0);
v_toBind_1023_ = lean_ctor_get(v_inst_1015_, 1);
lean_inc_n(v_toBind_1023_, 3);
v_toPure_1024_ = lean_ctor_get(v_toApplicative_1022_, 1);
lean_inc_n(v_toPure_1024_, 2);
lean_inc_n(v_inst_1016_, 2);
v_x_1025_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__1), 3, 1);
lean_closure_set(v_x_1025_, 0, v_inst_1016_);
v___x_1026_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_1027_ = l_Lean_Core_transform___redArg___lam__1(v_inst_1016_, lean_box(0), v___x_1026_);
v___f_1028_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1028_, 0, v_toPure_1024_);
v___f_1029_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__5), 11, 10);
lean_closure_set(v___f_1029_, 0, v_toPure_1024_);
lean_closure_set(v___f_1029_, 1, v_x_1025_);
lean_closure_set(v___f_1029_, 2, v_toBind_1023_);
lean_closure_set(v___f_1029_, 3, v_inst_1015_);
lean_closure_set(v___f_1029_, 4, v_inst_1016_);
lean_closure_set(v___f_1029_, 5, v_inst_1017_);
lean_closure_set(v___f_1029_, 6, v_pre_1019_);
lean_closure_set(v___f_1029_, 7, v_post_1020_);
lean_closure_set(v___f_1029_, 8, v_x_1021_);
lean_closure_set(v___f_1029_, 9, v_input_1018_);
v___x_1030_ = lean_apply_4(v_toBind_1023_, lean_box(0), lean_box(0), v___x_1027_, v___f_1029_);
v___x_1031_ = lean_apply_4(v_toBind_1023_, lean_box(0), lean_box(0), v___x_1030_, v___f_1028_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform(lean_object* v_m_1032_, lean_object* v_inst_1033_, lean_object* v_inst_1034_, lean_object* v_inst_1035_, lean_object* v_input_1036_, lean_object* v_pre_1037_, lean_object* v_post_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_Core_transform___redArg(v_inst_1033_, v_inst_1034_, v_inst_1035_, v_input_1036_, v_pre_1037_, v_post_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0(lean_object* v_e_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
uint8_t v___x_1046_; uint8_t v___x_1047_; 
v___x_1046_ = 0;
v___x_1047_ = l_Lean_Expr_isHeadBetaTarget(v_e_1042_, v___x_1046_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
lean_dec_ref(v_e_1042_);
v___x_1048_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
return v___x_1049_;
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1050_ = l_Lean_Expr_headBeta(v_e_1042_);
v___x_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
v___x_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
return v___x_1052_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0___boxed(lean_object* v_e_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Lean_Core_betaReduce___lam__0(v_e_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1(lean_object* v_e_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1062_, 0, v_e_1058_);
v___x_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1___boxed(lean_object* v_e_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lean_Core_betaReduce___lam__1(v_e_1064_, v___y_1065_, v___y_1066_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
return v_res_1068_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1069_ = lean_box(0);
v___x_1070_ = l_Lean_interruptExceptionId;
v___x_1071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
lean_ctor_set(v___x_1071_, 1, v___x_1069_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg(){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1073_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0);
v___x_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object* v___y_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
return v_res_1076_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = l_Lean_maxRecDepthErrorMessage;
v___x_1083_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1082_);
return v___x_1083_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1084_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_1085_ = l_Lean_MessageData_ofFormat(v___x_1084_);
return v___x_1085_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1086_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_1087_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2));
v___x_1088_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
lean_ctor_set(v___x_1088_, 1, v___x_1086_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_1089_){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1091_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1092_, 0, v_ref_1089_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_1094_, lean_object* v___y_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1094_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(lean_object* v_x_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v___y_1103_; uint8_t v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1115_; uint8_t v___y_1116_; lean_object* v___y_1117_; lean_object* v_toCold_1122_; lean_object* v_currRecDepth_1123_; lean_object* v_ref_1124_; uint8_t v_diag_1125_; uint8_t v_suppressElabErrors_1126_; lean_object* v_maxRecDepth_1127_; lean_object* v_cancelTk_x3f_1128_; 
v_toCold_1122_ = lean_ctor_get(v___y_1099_, 0);
v_currRecDepth_1123_ = lean_ctor_get(v___y_1099_, 1);
v_ref_1124_ = lean_ctor_get(v___y_1099_, 2);
v_diag_1125_ = lean_ctor_get_uint8(v___y_1099_, sizeof(void*)*3);
v_suppressElabErrors_1126_ = lean_ctor_get_uint8(v___y_1099_, sizeof(void*)*3 + 1);
v_maxRecDepth_1127_ = lean_ctor_get(v_toCold_1122_, 3);
v_cancelTk_x3f_1128_ = lean_ctor_get(v_toCold_1122_, 10);
if (lean_obj_tag(v_cancelTk_x3f_1128_) == 1)
{
lean_object* v_val_1134_; uint8_t v___x_1135_; 
v_val_1134_ = lean_ctor_get(v_cancelTk_x3f_1128_, 0);
v___x_1135_ = l_IO_CancelToken_isSet(v_val_1134_);
if (v___x_1135_ == 0)
{
goto v___jp_1129_;
}
else
{
lean_object* v___x_1136_; lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1144_; 
lean_dec_ref(v_x_1097_);
v___x_1136_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
v_a_1137_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1139_ = v___x_1136_;
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1136_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1137_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
}
else
{
goto v___jp_1129_;
}
v___jp_1102_:
{
if (lean_obj_tag(v___y_1103_) == 0)
{
return v___y_1103_;
}
else
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
v_a_1104_ = lean_ctor_get(v___y_1103_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___y_1103_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1106_ = v___y_1103_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___y_1103_);
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
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1104_);
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
v___jp_1112_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1118_ = lean_unsigned_to_nat(1u);
v___x_1119_ = lean_nat_add(v___y_1117_, v___x_1118_);
lean_inc_ref(v___y_1115_);
v___x_1120_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1120_, 0, v___y_1115_);
lean_ctor_set(v___x_1120_, 1, v___x_1119_);
lean_ctor_set(v___x_1120_, 2, v___y_1114_);
lean_ctor_set_uint8(v___x_1120_, sizeof(void*)*3, v___y_1113_);
lean_ctor_set_uint8(v___x_1120_, sizeof(void*)*3 + 1, v___y_1116_);
lean_inc(v___y_1100_);
lean_inc(v___y_1098_);
v___x_1121_ = lean_apply_4(v_x_1097_, v___y_1098_, v___x_1120_, v___y_1100_, lean_box(0));
v___y_1103_ = v___x_1121_;
goto v___jp_1102_;
}
v___jp_1129_:
{
lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1130_ = lean_unsigned_to_nat(0u);
v___x_1131_ = lean_nat_dec_eq(v_maxRecDepth_1127_, v___x_1130_);
if (v___x_1131_ == 0)
{
uint8_t v___x_1132_; 
v___x_1132_ = lean_nat_dec_eq(v_currRecDepth_1123_, v_maxRecDepth_1127_);
if (v___x_1132_ == 0)
{
lean_inc(v_ref_1124_);
v___y_1113_ = v_diag_1125_;
v___y_1114_ = v_ref_1124_;
v___y_1115_ = v_toCold_1122_;
v___y_1116_ = v_suppressElabErrors_1126_;
v___y_1117_ = v_currRecDepth_1123_;
goto v___jp_1112_;
}
else
{
lean_object* v___x_1133_; 
lean_dec_ref(v_x_1097_);
lean_inc(v_ref_1124_);
v___x_1133_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1124_);
v___y_1103_ = v___x_1133_;
goto v___jp_1102_;
}
}
else
{
lean_inc(v_ref_1124_);
v___y_1113_ = v_diag_1125_;
v___y_1114_ = v_ref_1124_;
v___y_1115_ = v_toCold_1122_;
v___y_1116_ = v_suppressElabErrors_1126_;
v___y_1117_ = v_currRecDepth_1123_;
goto v___jp_1112_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v_x_1145_, v___y_1146_, v___y_1147_, v___y_1148_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
lean_dec(v___y_1146_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_1151_, lean_object* v_x_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = lean_apply_1(v_x_1152_, lean_box(0));
v___x_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1156_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1158_, lean_object* v_x_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(v_00_u03b1_1158_, v_x_1159_, v___y_1160_, v___y_1161_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
return v_res_1163_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_a_1164_, lean_object* v_x_1165_){
_start:
{
if (lean_obj_tag(v_x_1165_) == 0)
{
uint8_t v___x_1166_; 
v___x_1166_ = 0;
return v___x_1166_;
}
else
{
lean_object* v_key_1167_; lean_object* v_tail_1168_; uint8_t v___x_1169_; 
v_key_1167_ = lean_ctor_get(v_x_1165_, 0);
v_tail_1168_ = lean_ctor_get(v_x_1165_, 2);
v___x_1169_ = l_Lean_ExprStructEq_beq(v_key_1167_, v_a_1164_);
if (v___x_1169_ == 0)
{
v_x_1165_ = v_tail_1168_;
goto _start;
}
else
{
return v___x_1169_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object* v_a_1171_, lean_object* v_x_1172_){
_start:
{
uint8_t v_res_1173_; lean_object* v_r_1174_; 
v_res_1173_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1171_, v_x_1172_);
lean_dec(v_x_1172_);
lean_dec_ref(v_a_1171_);
v_r_1174_ = lean_box(v_res_1173_);
return v_r_1174_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object* v_x_1175_, lean_object* v_x_1176_){
_start:
{
if (lean_obj_tag(v_x_1176_) == 0)
{
return v_x_1175_;
}
else
{
lean_object* v_key_1177_; lean_object* v_value_1178_; lean_object* v_tail_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1202_; 
v_key_1177_ = lean_ctor_get(v_x_1176_, 0);
v_value_1178_ = lean_ctor_get(v_x_1176_, 1);
v_tail_1179_ = lean_ctor_get(v_x_1176_, 2);
v_isSharedCheck_1202_ = !lean_is_exclusive(v_x_1176_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1181_ = v_x_1176_;
v_isShared_1182_ = v_isSharedCheck_1202_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_tail_1179_);
lean_inc(v_value_1178_);
lean_inc(v_key_1177_);
lean_dec(v_x_1176_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1202_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; uint64_t v___x_1184_; uint64_t v___x_1185_; uint64_t v___x_1186_; uint64_t v_fold_1187_; uint64_t v___x_1188_; uint64_t v___x_1189_; uint64_t v___x_1190_; size_t v___x_1191_; size_t v___x_1192_; size_t v___x_1193_; size_t v___x_1194_; size_t v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1183_ = lean_array_get_size(v_x_1175_);
v___x_1184_ = l_Lean_ExprStructEq_hash(v_key_1177_);
v___x_1185_ = 32ULL;
v___x_1186_ = lean_uint64_shift_right(v___x_1184_, v___x_1185_);
v_fold_1187_ = lean_uint64_xor(v___x_1184_, v___x_1186_);
v___x_1188_ = 16ULL;
v___x_1189_ = lean_uint64_shift_right(v_fold_1187_, v___x_1188_);
v___x_1190_ = lean_uint64_xor(v_fold_1187_, v___x_1189_);
v___x_1191_ = lean_uint64_to_usize(v___x_1190_);
v___x_1192_ = lean_usize_of_nat(v___x_1183_);
v___x_1193_ = ((size_t)1ULL);
v___x_1194_ = lean_usize_sub(v___x_1192_, v___x_1193_);
v___x_1195_ = lean_usize_land(v___x_1191_, v___x_1194_);
v___x_1196_ = lean_array_uget_borrowed(v_x_1175_, v___x_1195_);
lean_inc(v___x_1196_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 2, v___x_1196_);
v___x_1198_ = v___x_1181_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_key_1177_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v_value_1178_);
lean_ctor_set(v_reuseFailAlloc_1201_, 2, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; 
v___x_1199_ = lean_array_uset(v_x_1175_, v___x_1195_, v___x_1198_);
v_x_1175_ = v___x_1199_;
v_x_1176_ = v_tail_1179_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object* v_i_1203_, lean_object* v_source_1204_, lean_object* v_target_1205_){
_start:
{
lean_object* v___x_1206_; uint8_t v___x_1207_; 
v___x_1206_ = lean_array_get_size(v_source_1204_);
v___x_1207_ = lean_nat_dec_lt(v_i_1203_, v___x_1206_);
if (v___x_1207_ == 0)
{
lean_dec_ref(v_source_1204_);
lean_dec(v_i_1203_);
return v_target_1205_;
}
else
{
lean_object* v_es_1208_; lean_object* v___x_1209_; lean_object* v_source_1210_; lean_object* v_target_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v_es_1208_ = lean_array_fget(v_source_1204_, v_i_1203_);
v___x_1209_ = lean_box(0);
v_source_1210_ = lean_array_fset(v_source_1204_, v_i_1203_, v___x_1209_);
v_target_1211_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_target_1205_, v_es_1208_);
v___x_1212_ = lean_unsigned_to_nat(1u);
v___x_1213_ = lean_nat_add(v_i_1203_, v___x_1212_);
lean_dec(v_i_1203_);
v_i_1203_ = v___x_1213_;
v_source_1204_ = v_source_1210_;
v_target_1205_ = v_target_1211_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_data_1215_){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v_nbuckets_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1216_ = lean_array_get_size(v_data_1215_);
v___x_1217_ = lean_unsigned_to_nat(2u);
v_nbuckets_1218_ = lean_nat_mul(v___x_1216_, v___x_1217_);
v___x_1219_ = lean_unsigned_to_nat(0u);
v___x_1220_ = lean_box(0);
v___x_1221_ = lean_mk_array(v_nbuckets_1218_, v___x_1220_);
v___x_1222_ = lean_array_propagate_mark(v_data_1215_, v___x_1221_);
v___x_1223_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v___x_1219_, v_data_1215_, v___x_1222_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(lean_object* v_a_1224_, lean_object* v_b_1225_, lean_object* v_x_1226_){
_start:
{
if (lean_obj_tag(v_x_1226_) == 0)
{
lean_dec(v_b_1225_);
lean_dec_ref(v_a_1224_);
return v_x_1226_;
}
else
{
lean_object* v_key_1227_; lean_object* v_value_1228_; lean_object* v_tail_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1241_; 
v_key_1227_ = lean_ctor_get(v_x_1226_, 0);
v_value_1228_ = lean_ctor_get(v_x_1226_, 1);
v_tail_1229_ = lean_ctor_get(v_x_1226_, 2);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_x_1226_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1231_ = v_x_1226_;
v_isShared_1232_ = v_isSharedCheck_1241_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_tail_1229_);
lean_inc(v_value_1228_);
lean_inc(v_key_1227_);
lean_dec(v_x_1226_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1241_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
uint8_t v___x_1233_; 
v___x_1233_ = l_Lean_ExprStructEq_beq(v_key_1227_, v_a_1224_);
if (v___x_1233_ == 0)
{
lean_object* v___x_1234_; lean_object* v___x_1236_; 
v___x_1234_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1224_, v_b_1225_, v_tail_1229_);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 2, v___x_1234_);
v___x_1236_ = v___x_1231_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_key_1227_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_value_1228_);
lean_ctor_set(v_reuseFailAlloc_1237_, 2, v___x_1234_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
else
{
lean_object* v___x_1239_; 
lean_dec(v_value_1228_);
lean_dec(v_key_1227_);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 1, v_b_1225_);
lean_ctor_set(v___x_1231_, 0, v_a_1224_);
v___x_1239_ = v___x_1231_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1224_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v_b_1225_);
lean_ctor_set(v_reuseFailAlloc_1240_, 2, v_tail_1229_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(lean_object* v_m_1242_, lean_object* v_a_1243_, lean_object* v_b_1244_){
_start:
{
lean_object* v_size_1245_; lean_object* v_buckets_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1289_; 
v_size_1245_ = lean_ctor_get(v_m_1242_, 0);
v_buckets_1246_ = lean_ctor_get(v_m_1242_, 1);
v_isSharedCheck_1289_ = !lean_is_exclusive(v_m_1242_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1248_ = v_m_1242_;
v_isShared_1249_ = v_isSharedCheck_1289_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_buckets_1246_);
lean_inc(v_size_1245_);
lean_dec(v_m_1242_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1289_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1250_; uint64_t v___x_1251_; uint64_t v___x_1252_; uint64_t v___x_1253_; uint64_t v_fold_1254_; uint64_t v___x_1255_; uint64_t v___x_1256_; uint64_t v___x_1257_; size_t v___x_1258_; size_t v___x_1259_; size_t v___x_1260_; size_t v___x_1261_; size_t v___x_1262_; lean_object* v_bkt_1263_; uint8_t v___x_1264_; 
v___x_1250_ = lean_array_get_size(v_buckets_1246_);
v___x_1251_ = l_Lean_ExprStructEq_hash(v_a_1243_);
v___x_1252_ = 32ULL;
v___x_1253_ = lean_uint64_shift_right(v___x_1251_, v___x_1252_);
v_fold_1254_ = lean_uint64_xor(v___x_1251_, v___x_1253_);
v___x_1255_ = 16ULL;
v___x_1256_ = lean_uint64_shift_right(v_fold_1254_, v___x_1255_);
v___x_1257_ = lean_uint64_xor(v_fold_1254_, v___x_1256_);
v___x_1258_ = lean_uint64_to_usize(v___x_1257_);
v___x_1259_ = lean_usize_of_nat(v___x_1250_);
v___x_1260_ = ((size_t)1ULL);
v___x_1261_ = lean_usize_sub(v___x_1259_, v___x_1260_);
v___x_1262_ = lean_usize_land(v___x_1258_, v___x_1261_);
v_bkt_1263_ = lean_array_uget_borrowed(v_buckets_1246_, v___x_1262_);
v___x_1264_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1243_, v_bkt_1263_);
if (v___x_1264_ == 0)
{
lean_object* v___x_1265_; lean_object* v_size_x27_1266_; lean_object* v___x_1267_; lean_object* v_buckets_x27_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; uint8_t v___x_1274_; 
v___x_1265_ = lean_unsigned_to_nat(1u);
v_size_x27_1266_ = lean_nat_add(v_size_1245_, v___x_1265_);
lean_dec(v_size_1245_);
lean_inc(v_bkt_1263_);
v___x_1267_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1267_, 0, v_a_1243_);
lean_ctor_set(v___x_1267_, 1, v_b_1244_);
lean_ctor_set(v___x_1267_, 2, v_bkt_1263_);
v_buckets_x27_1268_ = lean_array_uset(v_buckets_1246_, v___x_1262_, v___x_1267_);
v___x_1269_ = lean_unsigned_to_nat(4u);
v___x_1270_ = lean_nat_mul(v_size_x27_1266_, v___x_1269_);
v___x_1271_ = lean_unsigned_to_nat(3u);
v___x_1272_ = lean_nat_div(v___x_1270_, v___x_1271_);
lean_dec(v___x_1270_);
v___x_1273_ = lean_array_get_size(v_buckets_x27_1268_);
v___x_1274_ = lean_nat_dec_le(v___x_1272_, v___x_1273_);
lean_dec(v___x_1272_);
if (v___x_1274_ == 0)
{
lean_object* v_val_1275_; lean_object* v___x_1277_; 
v_val_1275_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_buckets_x27_1268_);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 1, v_val_1275_);
lean_ctor_set(v___x_1248_, 0, v_size_x27_1266_);
v___x_1277_ = v___x_1248_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_size_x27_1266_);
lean_ctor_set(v_reuseFailAlloc_1278_, 1, v_val_1275_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
else
{
lean_object* v___x_1280_; 
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 1, v_buckets_x27_1268_);
lean_ctor_set(v___x_1248_, 0, v_size_x27_1266_);
v___x_1280_ = v___x_1248_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_size_x27_1266_);
lean_ctor_set(v_reuseFailAlloc_1281_, 1, v_buckets_x27_1268_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
else
{
lean_object* v___x_1282_; lean_object* v_buckets_x27_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1287_; 
lean_inc(v_bkt_1263_);
v___x_1282_ = lean_box(0);
v_buckets_x27_1283_ = lean_array_uset(v_buckets_1246_, v___x_1262_, v___x_1282_);
v___x_1284_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1243_, v_b_1244_, v_bkt_1263_);
v___x_1285_ = lean_array_uset(v_buckets_x27_1283_, v___x_1262_, v___x_1284_);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 1, v___x_1285_);
v___x_1287_ = v___x_1248_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_size_1245_);
lean_ctor_set(v_reuseFailAlloc_1288_, 1, v___x_1285_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(lean_object* v_a_1290_, lean_object* v_e_1291_, lean_object* v_a_1292_){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1294_ = lean_st_ref_take(v_a_1290_);
v___x_1295_ = lean_box(0);
v___x_1296_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(v___x_1294_, v_e_1291_, v_a_1292_);
v___x_1297_ = lean_st_ref_put(v_a_1290_, v___x_1296_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed(lean_object* v_a_1298_, lean_object* v_e_1299_, lean_object* v_a_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v_res_1302_; 
v_res_1302_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(v_a_1298_, v_e_1299_, v_a_1300_);
lean_dec(v_a_1298_);
return v_res_1302_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_1303_, lean_object* v_x_1304_){
_start:
{
if (lean_obj_tag(v_x_1304_) == 0)
{
lean_object* v___x_1305_; 
v___x_1305_ = lean_box(0);
return v___x_1305_;
}
else
{
lean_object* v_key_1306_; lean_object* v_value_1307_; lean_object* v_tail_1308_; uint8_t v___x_1309_; 
v_key_1306_ = lean_ctor_get(v_x_1304_, 0);
v_value_1307_ = lean_ctor_get(v_x_1304_, 1);
v_tail_1308_ = lean_ctor_get(v_x_1304_, 2);
v___x_1309_ = l_Lean_ExprStructEq_beq(v_key_1306_, v_a_1303_);
if (v___x_1309_ == 0)
{
v_x_1304_ = v_tail_1308_;
goto _start;
}
else
{
lean_object* v___x_1311_; 
lean_inc(v_value_1307_);
v___x_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1311_, 0, v_value_1307_);
return v___x_1311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_1312_, lean_object* v_x_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1312_, v_x_1313_);
lean_dec(v_x_1313_);
lean_dec_ref(v_a_1312_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(lean_object* v_m_1315_, lean_object* v_a_1316_){
_start:
{
lean_object* v_buckets_1317_; lean_object* v___x_1318_; uint64_t v___x_1319_; uint64_t v___x_1320_; uint64_t v___x_1321_; uint64_t v_fold_1322_; uint64_t v___x_1323_; uint64_t v___x_1324_; uint64_t v___x_1325_; size_t v___x_1326_; size_t v___x_1327_; size_t v___x_1328_; size_t v___x_1329_; size_t v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v_buckets_1317_ = lean_ctor_get(v_m_1315_, 1);
v___x_1318_ = lean_array_get_size(v_buckets_1317_);
v___x_1319_ = l_Lean_ExprStructEq_hash(v_a_1316_);
v___x_1320_ = 32ULL;
v___x_1321_ = lean_uint64_shift_right(v___x_1319_, v___x_1320_);
v_fold_1322_ = lean_uint64_xor(v___x_1319_, v___x_1321_);
v___x_1323_ = 16ULL;
v___x_1324_ = lean_uint64_shift_right(v_fold_1322_, v___x_1323_);
v___x_1325_ = lean_uint64_xor(v_fold_1322_, v___x_1324_);
v___x_1326_ = lean_uint64_to_usize(v___x_1325_);
v___x_1327_ = lean_usize_of_nat(v___x_1318_);
v___x_1328_ = ((size_t)1ULL);
v___x_1329_ = lean_usize_sub(v___x_1327_, v___x_1328_);
v___x_1330_ = lean_usize_land(v___x_1326_, v___x_1329_);
v___x_1331_ = lean_array_uget_borrowed(v_buckets_1317_, v___x_1330_);
v___x_1332_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1316_, v___x_1331_);
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_m_1333_, v_a_1334_);
lean_dec_ref(v_a_1334_);
lean_dec_ref(v_m_1333_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(lean_object* v_pre_1338_, lean_object* v_post_1339_, size_t v_sz_1340_, size_t v_i_1341_, lean_object* v_bs_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
uint8_t v___x_1347_; 
v___x_1347_ = lean_usize_dec_lt(v_i_1341_, v_sz_1340_);
if (v___x_1347_ == 0)
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
lean_dec_ref(v_post_1339_);
lean_dec_ref(v_pre_1338_);
v___x_1348_ = l_unsafeCast___redArg(v_bs_1342_);
lean_dec_ref(v_bs_1342_);
v___x_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
return v___x_1349_;
}
else
{
lean_object* v_v_1350_; lean_object* v___x_1351_; lean_object* v_bs_x27_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v_v_1350_ = lean_array_uget(v_bs_1342_, v_i_1341_);
v___x_1351_ = lean_unsigned_to_nat(0u);
v_bs_x27_1352_ = lean_array_uset(v_bs_1342_, v_i_1341_, v___x_1351_);
v___x_1353_ = l_unsafeCast___redArg(v_v_1350_);
lean_dec(v_v_1350_);
lean_inc_ref(v_post_1339_);
lean_inc_ref(v_pre_1338_);
v___x_1354_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1338_, v_post_1339_, v___x_1353_, v___y_1343_, v___y_1344_, v___y_1345_);
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v_a_1355_; size_t v___x_1356_; size_t v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
lean_inc(v_a_1355_);
lean_dec_ref_known(v___x_1354_, 1);
v___x_1356_ = ((size_t)1ULL);
v___x_1357_ = lean_usize_add(v_i_1341_, v___x_1356_);
v___x_1358_ = l_unsafeCast___redArg(v_a_1355_);
lean_dec(v_a_1355_);
v___x_1359_ = lean_array_uset(v_bs_x27_1352_, v_i_1341_, v___x_1358_);
v_i_1341_ = v___x_1357_;
v_bs_1342_ = v___x_1359_;
goto _start;
}
else
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
lean_dec_ref(v_bs_x27_1352_);
lean_dec_ref(v_post_1339_);
lean_dec_ref(v_pre_1338_);
v_a_1361_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1354_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1354_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1361_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_1369_, lean_object* v_post_1370_, lean_object* v_sz_1371_, lean_object* v_i_1372_, lean_object* v_bs_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
size_t v_sz_boxed_1378_; size_t v_i_boxed_1379_; lean_object* v_res_1380_; 
v_sz_boxed_1378_ = lean_unbox_usize(v_sz_1371_);
lean_dec(v_sz_1371_);
v_i_boxed_1379_ = lean_unbox_usize(v_i_1372_);
lean_dec(v_i_1372_);
v_res_1380_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(v_pre_1369_, v_post_1370_, v_sz_boxed_1378_, v_i_boxed_1379_, v_bs_1373_, v___y_1374_, v___y_1375_, v___y_1376_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(lean_object* v_pre_1381_, lean_object* v_post_1382_, lean_object* v_x_1383_, lean_object* v_x_1384_, lean_object* v_x_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
if (lean_obj_tag(v_x_1383_) == 5)
{
lean_object* v_fn_1390_; lean_object* v_arg_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v_fn_1390_ = lean_ctor_get(v_x_1383_, 0);
lean_inc_ref(v_fn_1390_);
v_arg_1391_ = lean_ctor_get(v_x_1383_, 1);
lean_inc_ref(v_arg_1391_);
lean_dec_ref_known(v_x_1383_, 2);
v___x_1392_ = lean_array_set(v_x_1384_, v_x_1385_, v_arg_1391_);
v___x_1393_ = lean_unsigned_to_nat(1u);
v___x_1394_ = lean_nat_sub(v_x_1385_, v___x_1393_);
lean_dec(v_x_1385_);
v_x_1383_ = v_fn_1390_;
v_x_1384_ = v___x_1392_;
v_x_1385_ = v___x_1394_;
goto _start;
}
else
{
lean_object* v___x_1396_; 
lean_dec(v_x_1385_);
lean_inc_ref(v_post_1382_);
lean_inc_ref(v_pre_1381_);
v___x_1396_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1381_, v_post_1382_, v_x_1383_, v___y_1386_, v___y_1387_, v___y_1388_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; size_t v_sz_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_5462__overap_1403_; lean_object* v___x_1404_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_a_1397_);
lean_dec_ref_known(v___x_1396_, 1);
v_sz_1398_ = lean_array_size(v_x_1384_);
v___x_1399_ = l_unsafeCast___redArg(v_x_1384_);
lean_dec_ref(v_x_1384_);
v___x_1400_ = lean_box_usize(v_sz_1398_);
v___x_1401_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed__const__1));
lean_inc_ref(v_post_1382_);
lean_inc_ref(v_pre_1381_);
v___x_1402_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1___boxed), 9, 5);
lean_closure_set(v___x_1402_, 0, v_pre_1381_);
lean_closure_set(v___x_1402_, 1, v_post_1382_);
lean_closure_set(v___x_1402_, 2, v___x_1400_);
lean_closure_set(v___x_1402_, 3, v___x_1401_);
lean_closure_set(v___x_1402_, 4, v___x_1399_);
v___x_5462__overap_1403_ = l_unsafeCast___redArg(v___x_1402_);
lean_dec_ref(v___x_1402_);
lean_inc(v___y_1388_);
lean_inc_ref(v___y_1387_);
lean_inc(v___y_1386_);
v___x_1404_ = lean_apply_4(v___x_5462__overap_1403_, v___y_1386_, v___y_1387_, v___y_1388_, lean_box(0));
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_a_1405_);
lean_dec_ref_known(v___x_1404_, 1);
v___x_1406_ = l_Lean_mkAppN(v_a_1397_, v_a_1405_);
lean_dec(v_a_1405_);
v___x_1407_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1381_, v_post_1382_, v___x_1406_, v___y_1386_, v___y_1387_, v___y_1388_);
return v___x_1407_;
}
else
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1415_; 
lean_dec(v_a_1397_);
lean_dec_ref(v_post_1382_);
lean_dec_ref(v_pre_1381_);
v_a_1408_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1410_ = v___x_1404_;
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1404_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v___x_1413_; 
if (v_isShared_1411_ == 0)
{
v___x_1413_ = v___x_1410_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_a_1408_);
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
else
{
lean_dec_ref(v_x_1384_);
lean_dec_ref(v_post_1382_);
lean_dec_ref(v_pre_1381_);
return v___x_1396_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(lean_object* v___x_1416_, lean_object* v_pre_1417_, lean_object* v_e_1418_, lean_object* v_post_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v___x_1424_; 
v___x_1424_ = l_Lean_Core_checkSystem(v___x_1416_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v___x_1425_; 
lean_dec_ref_known(v___x_1424_, 1);
lean_inc_ref(v_pre_1417_);
lean_inc(v___y_1422_);
lean_inc_ref(v___y_1421_);
lean_inc_ref(v_e_1418_);
v___x_1425_ = lean_apply_4(v_pre_1417_, v_e_1418_, v___y_1421_, v___y_1422_, lean_box(0));
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1541_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1428_ = v___x_1425_;
v_isShared_1429_ = v_isSharedCheck_1541_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1425_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1541_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___y_1431_; 
switch(lean_obj_tag(v_a_1426_))
{
case 0:
{
lean_object* v_e_1531_; lean_object* v___x_1533_; 
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_e_1418_);
lean_dec_ref(v_pre_1417_);
v_e_1531_ = lean_ctor_get(v_a_1426_, 0);
lean_inc_ref(v_e_1531_);
lean_dec_ref_known(v_a_1426_, 1);
if (v_isShared_1429_ == 0)
{
lean_ctor_set(v___x_1428_, 0, v_e_1531_);
v___x_1533_ = v___x_1428_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_e_1531_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
case 1:
{
lean_object* v_e_1535_; lean_object* v___x_1536_; 
lean_del_object(v___x_1428_);
lean_dec_ref(v_e_1418_);
v_e_1535_ = lean_ctor_get(v_a_1426_, 0);
lean_inc_ref(v_e_1535_);
lean_dec_ref_known(v_a_1426_, 1);
lean_inc_ref(v_post_1419_);
lean_inc_ref(v_pre_1417_);
v___x_1536_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1417_, v_post_1419_, v_e_1535_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v_a_1537_; lean_object* v___x_1538_; 
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1537_);
lean_dec_ref_known(v___x_1536_, 1);
v___x_1538_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v_a_1537_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1538_;
}
else
{
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_pre_1417_);
return v___x_1536_;
}
}
default: 
{
lean_object* v_e_x3f_1539_; 
lean_del_object(v___x_1428_);
v_e_x3f_1539_ = lean_ctor_get(v_a_1426_, 0);
lean_inc(v_e_x3f_1539_);
lean_dec_ref_known(v_a_1426_, 1);
if (lean_obj_tag(v_e_x3f_1539_) == 0)
{
v___y_1431_ = v_e_1418_;
goto v___jp_1430_;
}
else
{
lean_object* v_val_1540_; 
lean_dec_ref(v_e_1418_);
v_val_1540_ = lean_ctor_get(v_e_x3f_1539_, 0);
lean_inc(v_val_1540_);
lean_dec_ref_known(v_e_x3f_1539_, 1);
v___y_1431_ = v_val_1540_;
goto v___jp_1430_;
}
}
}
v___jp_1430_:
{
switch(lean_obj_tag(v___y_1431_))
{
case 7:
{
lean_object* v_binderName_1432_; lean_object* v_binderType_1433_; lean_object* v_body_1434_; uint8_t v_binderInfo_1435_; lean_object* v___x_1436_; 
v_binderName_1432_ = lean_ctor_get(v___y_1431_, 0);
v_binderType_1433_ = lean_ctor_get(v___y_1431_, 1);
v_body_1434_ = lean_ctor_get(v___y_1431_, 2);
v_binderInfo_1435_ = lean_ctor_get_uint8(v___y_1431_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1433_);
lean_inc_ref(v_post_1419_);
lean_inc_ref(v_pre_1417_);
v___x_1436_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1417_, v_post_1419_, v_binderType_1433_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_object* v_a_1437_; lean_object* v___x_1438_; 
v_a_1437_ = lean_ctor_get(v___x_1436_, 0);
lean_inc(v_a_1437_);
lean_dec_ref_known(v___x_1436_, 1);
lean_inc_ref(v_body_1434_);
lean_inc_ref(v_post_1419_);
lean_inc_ref(v_pre_1417_);
v___x_1438_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1417_, v_post_1419_, v_body_1434_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_a_1439_; size_t v___x_1440_; size_t v___x_1441_; uint8_t v___x_1442_; 
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
lean_inc(v_a_1439_);
lean_dec_ref_known(v___x_1438_, 1);
v___x_1440_ = lean_ptr_addr(v_binderType_1433_);
v___x_1441_ = lean_ptr_addr(v_a_1437_);
v___x_1442_ = lean_usize_dec_eq(v___x_1440_, v___x_1441_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
lean_inc(v_binderName_1432_);
lean_dec_ref_known(v___y_1431_, 3);
v___x_1443_ = l_Lean_Expr_forallE___override(v_binderName_1432_, v_a_1437_, v_a_1439_, v_binderInfo_1435_);
v___x_1444_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___x_1443_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1444_;
}
else
{
size_t v___x_1445_; size_t v___x_1446_; uint8_t v___x_1447_; 
v___x_1445_ = lean_ptr_addr(v_body_1434_);
v___x_1446_ = lean_ptr_addr(v_a_1439_);
v___x_1447_ = lean_usize_dec_eq(v___x_1445_, v___x_1446_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
lean_inc(v_binderName_1432_);
lean_dec_ref_known(v___y_1431_, 3);
v___x_1448_ = l_Lean_Expr_forallE___override(v_binderName_1432_, v_a_1437_, v_a_1439_, v_binderInfo_1435_);
v___x_1449_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___x_1448_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1449_;
}
else
{
uint8_t v___x_1450_; 
v___x_1450_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1435_, v_binderInfo_1435_);
if (v___x_1450_ == 0)
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
lean_inc(v_binderName_1432_);
lean_dec_ref_known(v___y_1431_, 3);
v___x_1451_ = l_Lean_Expr_forallE___override(v_binderName_1432_, v_a_1437_, v_a_1439_, v_binderInfo_1435_);
v___x_1452_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___x_1451_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1452_;
}
else
{
lean_object* v___x_1453_; 
lean_dec(v_a_1439_);
lean_dec(v_a_1437_);
v___x_1453_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___y_1431_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1453_;
}
}
}
}
else
{
lean_dec(v_a_1437_);
lean_dec_ref_known(v___y_1431_, 3);
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_pre_1417_);
return v___x_1438_;
}
}
else
{
lean_dec_ref_known(v___y_1431_, 3);
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_pre_1417_);
return v___x_1436_;
}
}
case 6:
{
lean_object* v_binderName_1454_; lean_object* v_binderType_1455_; lean_object* v_body_1456_; uint8_t v_binderInfo_1457_; lean_object* v___x_1458_; 
v_binderName_1454_ = lean_ctor_get(v___y_1431_, 0);
v_binderType_1455_ = lean_ctor_get(v___y_1431_, 1);
v_body_1456_ = lean_ctor_get(v___y_1431_, 2);
v_binderInfo_1457_ = lean_ctor_get_uint8(v___y_1431_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1455_);
lean_inc_ref(v_post_1419_);
lean_inc_ref(v_pre_1417_);
v___x_1458_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1417_, v_post_1419_, v_binderType_1455_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_a_1459_; lean_object* v___x_1460_; 
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
lean_inc(v_a_1459_);
lean_dec_ref_known(v___x_1458_, 1);
lean_inc_ref(v_body_1456_);
lean_inc_ref(v_post_1419_);
lean_inc_ref(v_pre_1417_);
v___x_1460_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1417_, v_post_1419_, v_body_1456_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; size_t v___x_1462_; size_t v___x_1463_; uint8_t v___x_1464_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1461_);
lean_dec_ref_known(v___x_1460_, 1);
v___x_1462_ = lean_ptr_addr(v_binderType_1455_);
v___x_1463_ = lean_ptr_addr(v_a_1459_);
v___x_1464_ = lean_usize_dec_eq(v___x_1462_, v___x_1463_);
if (v___x_1464_ == 0)
{
lean_object* v___x_1465_; lean_object* v___x_1466_; 
lean_inc(v_binderName_1454_);
lean_dec_ref_known(v___y_1431_, 3);
v___x_1465_ = l_Lean_Expr_lam___override(v_binderName_1454_, v_a_1459_, v_a_1461_, v_binderInfo_1457_);
v___x_1466_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___x_1465_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1466_;
}
else
{
size_t v___x_1467_; size_t v___x_1468_; uint8_t v___x_1469_; 
v___x_1467_ = lean_ptr_addr(v_body_1456_);
v___x_1468_ = lean_ptr_addr(v_a_1461_);
v___x_1469_ = lean_usize_dec_eq(v___x_1467_, v___x_1468_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
lean_inc(v_binderName_1454_);
lean_dec_ref_known(v___y_1431_, 3);
v___x_1470_ = l_Lean_Expr_lam___override(v_binderName_1454_, v_a_1459_, v_a_1461_, v_binderInfo_1457_);
v___x_1471_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___x_1470_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1471_;
}
else
{
uint8_t v___x_1472_; 
v___x_1472_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1457_, v_binderInfo_1457_);
if (v___x_1472_ == 0)
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
lean_inc(v_binderName_1454_);
lean_dec_ref_known(v___y_1431_, 3);
v___x_1473_ = l_Lean_Expr_lam___override(v_binderName_1454_, v_a_1459_, v_a_1461_, v_binderInfo_1457_);
v___x_1474_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___x_1473_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1474_;
}
else
{
lean_object* v___x_1475_; 
lean_dec(v_a_1461_);
lean_dec(v_a_1459_);
v___x_1475_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___y_1431_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1475_;
}
}
}
}
else
{
lean_dec(v_a_1459_);
lean_dec_ref_known(v___y_1431_, 3);
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_pre_1417_);
return v___x_1460_;
}
}
else
{
lean_dec_ref_known(v___y_1431_, 3);
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_pre_1417_);
return v___x_1458_;
}
}
case 8:
{
lean_object* v_declName_1476_; lean_object* v_type_1477_; lean_object* v_value_1478_; lean_object* v_body_1479_; uint8_t v_nondep_1480_; lean_object* v___x_1481_; 
v_declName_1476_ = lean_ctor_get(v___y_1431_, 0);
v_type_1477_ = lean_ctor_get(v___y_1431_, 1);
v_value_1478_ = lean_ctor_get(v___y_1431_, 2);
v_body_1479_ = lean_ctor_get(v___y_1431_, 3);
v_nondep_1480_ = lean_ctor_get_uint8(v___y_1431_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1477_);
lean_inc_ref(v_post_1419_);
lean_inc_ref(v_pre_1417_);
v___x_1481_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1417_, v_post_1419_, v_type_1477_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; lean_object* v___x_1483_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1482_);
lean_dec_ref_known(v___x_1481_, 1);
lean_inc_ref(v_value_1478_);
lean_inc_ref(v_post_1419_);
lean_inc_ref(v_pre_1417_);
v___x_1483_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1417_, v_post_1419_, v_value_1478_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1483_) == 0)
{
lean_object* v_a_1484_; lean_object* v___x_1485_; 
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
lean_inc(v_a_1484_);
lean_dec_ref_known(v___x_1483_, 1);
lean_inc_ref(v_body_1479_);
lean_inc_ref(v_post_1419_);
lean_inc_ref(v_pre_1417_);
v___x_1485_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1417_, v_post_1419_, v_body_1479_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v_a_1486_; size_t v___x_1487_; size_t v___x_1488_; uint8_t v___x_1489_; 
v_a_1486_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_a_1486_);
lean_dec_ref_known(v___x_1485_, 1);
v___x_1487_ = lean_ptr_addr(v_type_1477_);
v___x_1488_ = lean_ptr_addr(v_a_1482_);
v___x_1489_ = lean_usize_dec_eq(v___x_1487_, v___x_1488_);
if (v___x_1489_ == 0)
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
lean_inc(v_declName_1476_);
lean_dec_ref_known(v___y_1431_, 4);
v___x_1490_ = l_Lean_Expr_letE___override(v_declName_1476_, v_a_1482_, v_a_1484_, v_a_1486_, v_nondep_1480_);
v___x_1491_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___x_1490_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1491_;
}
else
{
size_t v___x_1492_; size_t v___x_1493_; uint8_t v___x_1494_; 
v___x_1492_ = lean_ptr_addr(v_value_1478_);
v___x_1493_ = lean_ptr_addr(v_a_1484_);
v___x_1494_ = lean_usize_dec_eq(v___x_1492_, v___x_1493_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
lean_inc(v_declName_1476_);
lean_dec_ref_known(v___y_1431_, 4);
v___x_1495_ = l_Lean_Expr_letE___override(v_declName_1476_, v_a_1482_, v_a_1484_, v_a_1486_, v_nondep_1480_);
v___x_1496_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___x_1495_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1496_;
}
else
{
size_t v___x_1497_; size_t v___x_1498_; uint8_t v___x_1499_; 
v___x_1497_ = lean_ptr_addr(v_body_1479_);
v___x_1498_ = lean_ptr_addr(v_a_1486_);
v___x_1499_ = lean_usize_dec_eq(v___x_1497_, v___x_1498_);
if (v___x_1499_ == 0)
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
lean_inc(v_declName_1476_);
lean_dec_ref_known(v___y_1431_, 4);
v___x_1500_ = l_Lean_Expr_letE___override(v_declName_1476_, v_a_1482_, v_a_1484_, v_a_1486_, v_nondep_1480_);
v___x_1501_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___x_1500_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1501_;
}
else
{
lean_object* v___x_1502_; 
lean_dec(v_a_1486_);
lean_dec(v_a_1484_);
lean_dec(v_a_1482_);
v___x_1502_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___y_1431_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1502_;
}
}
}
}
else
{
lean_dec(v_a_1484_);
lean_dec(v_a_1482_);
lean_dec_ref_known(v___y_1431_, 4);
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_pre_1417_);
return v___x_1485_;
}
}
else
{
lean_dec(v_a_1482_);
lean_dec_ref_known(v___y_1431_, 4);
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_pre_1417_);
return v___x_1483_;
}
}
else
{
lean_dec_ref_known(v___y_1431_, 4);
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_pre_1417_);
return v___x_1481_;
}
}
case 5:
{
lean_object* v_dummy_1503_; lean_object* v_nargs_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v_dummy_1503_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1);
v_nargs_1504_ = l_Lean_Expr_getAppNumArgs(v___y_1431_);
lean_inc(v_nargs_1504_);
v___x_1505_ = lean_mk_array(v_nargs_1504_, v_dummy_1503_);
v___x_1506_ = lean_unsigned_to_nat(1u);
v___x_1507_ = lean_nat_sub(v_nargs_1504_, v___x_1506_);
lean_dec(v_nargs_1504_);
v___x_1508_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(v_pre_1417_, v_post_1419_, v___y_1431_, v___x_1505_, v___x_1507_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1508_;
}
case 10:
{
lean_object* v_data_1509_; lean_object* v_expr_1510_; lean_object* v___x_1511_; 
v_data_1509_ = lean_ctor_get(v___y_1431_, 0);
v_expr_1510_ = lean_ctor_get(v___y_1431_, 1);
lean_inc_ref(v_expr_1510_);
lean_inc_ref(v_post_1419_);
lean_inc_ref(v_pre_1417_);
v___x_1511_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1417_, v_post_1419_, v_expr_1510_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_object* v_a_1512_; size_t v___x_1513_; size_t v___x_1514_; uint8_t v___x_1515_; 
v_a_1512_ = lean_ctor_get(v___x_1511_, 0);
lean_inc(v_a_1512_);
lean_dec_ref_known(v___x_1511_, 1);
v___x_1513_ = lean_ptr_addr(v_expr_1510_);
v___x_1514_ = lean_ptr_addr(v_a_1512_);
v___x_1515_ = lean_usize_dec_eq(v___x_1513_, v___x_1514_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
lean_inc(v_data_1509_);
lean_dec_ref_known(v___y_1431_, 2);
v___x_1516_ = l_Lean_Expr_mdata___override(v_data_1509_, v_a_1512_);
v___x_1517_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___x_1516_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1517_;
}
else
{
lean_object* v___x_1518_; 
lean_dec(v_a_1512_);
v___x_1518_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___y_1431_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1518_;
}
}
else
{
lean_dec_ref_known(v___y_1431_, 2);
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_pre_1417_);
return v___x_1511_;
}
}
case 11:
{
lean_object* v_typeName_1519_; lean_object* v_idx_1520_; lean_object* v_struct_1521_; lean_object* v___x_1522_; 
v_typeName_1519_ = lean_ctor_get(v___y_1431_, 0);
v_idx_1520_ = lean_ctor_get(v___y_1431_, 1);
v_struct_1521_ = lean_ctor_get(v___y_1431_, 2);
lean_inc_ref(v_struct_1521_);
lean_inc_ref(v_post_1419_);
lean_inc_ref(v_pre_1417_);
v___x_1522_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1417_, v_post_1419_, v_struct_1521_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; size_t v___x_1524_; size_t v___x_1525_; uint8_t v___x_1526_; 
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_a_1523_);
lean_dec_ref_known(v___x_1522_, 1);
v___x_1524_ = lean_ptr_addr(v_struct_1521_);
v___x_1525_ = lean_ptr_addr(v_a_1523_);
v___x_1526_ = lean_usize_dec_eq(v___x_1524_, v___x_1525_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
lean_inc(v_idx_1520_);
lean_inc(v_typeName_1519_);
lean_dec_ref_known(v___y_1431_, 3);
v___x_1527_ = l_Lean_Expr_proj___override(v_typeName_1519_, v_idx_1520_, v_a_1523_);
v___x_1528_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___x_1527_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1528_;
}
else
{
lean_object* v___x_1529_; 
lean_dec(v_a_1523_);
v___x_1529_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___y_1431_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1529_;
}
}
else
{
lean_dec_ref_known(v___y_1431_, 3);
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_pre_1417_);
return v___x_1522_;
}
}
default: 
{
lean_object* v___x_1530_; 
v___x_1530_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1417_, v_post_1419_, v___y_1431_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1530_;
}
}
}
}
}
else
{
lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1549_; 
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_e_1418_);
lean_dec_ref(v_pre_1417_);
v_a_1542_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1549_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1544_ = v___x_1425_;
v_isShared_1545_ = v_isSharedCheck_1549_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_dec(v___x_1425_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1549_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v___x_1547_; 
if (v_isShared_1545_ == 0)
{
v___x_1547_ = v___x_1544_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_a_1542_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
}
}
else
{
lean_object* v_a_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1557_; 
lean_dec_ref(v_post_1419_);
lean_dec_ref(v_e_1418_);
lean_dec_ref(v_pre_1417_);
v_a_1550_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1552_ = v___x_1424_;
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_a_1550_);
lean_dec(v___x_1424_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
lean_object* v___x_1555_; 
if (v_isShared_1553_ == 0)
{
v___x_1555_ = v___x_1552_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_a_1550_);
v___x_1555_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
return v___x_1555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed(lean_object* v___x_1558_, lean_object* v_pre_1559_, lean_object* v_e_1560_, lean_object* v_post_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(v___x_1558_, v_pre_1559_, v_e_1560_, v_post_1561_, v___y_1562_, v___y_1563_, v___y_1564_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
lean_dec(v___y_1562_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(lean_object* v_pre_1567_, lean_object* v_post_1568_, lean_object* v_e_1569_, lean_object* v_a_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
lean_inc(v_a_1570_);
v___x_1574_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1574_, 0, lean_box(0));
lean_closure_set(v___x_1574_, 1, lean_box(0));
lean_closure_set(v___x_1574_, 2, v_a_1570_);
v___x_1575_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_box(0), v___x_1574_, v___y_1571_, v___y_1572_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1607_; 
v_a_1576_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1578_ = v___x_1575_;
v_isShared_1579_ = v_isSharedCheck_1607_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1575_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1607_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1580_; 
v___x_1580_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_a_1576_, v_e_1569_);
lean_dec(v_a_1576_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v___x_1581_; lean_object* v___f_1582_; lean_object* v___x_1583_; 
lean_del_object(v___x_1578_);
v___x_1581_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0));
lean_inc_ref(v_e_1569_);
v___f_1582_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed), 8, 4);
lean_closure_set(v___f_1582_, 0, v___x_1581_);
lean_closure_set(v___f_1582_, 1, v_pre_1567_);
lean_closure_set(v___f_1582_, 2, v_e_1569_);
lean_closure_set(v___f_1582_, 3, v_post_1568_);
v___x_1583_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v___f_1582_, v_a_1570_, v___y_1571_, v___y_1572_);
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; lean_object* v___f_1585_; lean_object* v___x_1586_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc_n(v_a_1584_, 2);
lean_dec_ref_known(v___x_1583_, 1);
lean_inc(v_a_1570_);
v___f_1585_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1585_, 0, v_a_1570_);
lean_closure_set(v___f_1585_, 1, v_e_1569_);
lean_closure_set(v___f_1585_, 2, v_a_1584_);
v___x_1586_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_box(0), v___f_1585_, v___y_1571_, v___y_1572_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1593_ == 0)
{
lean_object* v_unused_1594_; 
v_unused_1594_ = lean_ctor_get(v___x_1586_, 0);
lean_dec(v_unused_1594_);
v___x_1588_ = v___x_1586_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_dec(v___x_1586_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
lean_ctor_set(v___x_1588_, 0, v_a_1584_);
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_a_1584_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
else
{
lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1602_; 
lean_dec(v_a_1584_);
v_a_1595_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1597_ = v___x_1586_;
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_dec(v___x_1586_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1600_; 
if (v_isShared_1598_ == 0)
{
v___x_1600_ = v___x_1597_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_a_1595_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
else
{
lean_dec_ref(v_e_1569_);
return v___x_1583_;
}
}
else
{
lean_object* v_val_1603_; lean_object* v___x_1605_; 
lean_dec_ref(v_e_1569_);
lean_dec_ref(v_post_1568_);
lean_dec_ref(v_pre_1567_);
v_val_1603_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_val_1603_);
lean_dec_ref_known(v___x_1580_, 1);
if (v_isShared_1579_ == 0)
{
lean_ctor_set(v___x_1578_, 0, v_val_1603_);
v___x_1605_ = v___x_1578_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_val_1603_);
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
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
lean_dec_ref(v_e_1569_);
lean_dec_ref(v_post_1568_);
lean_dec_ref(v_pre_1567_);
v_a_1608_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1575_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1575_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(lean_object* v_pre_1616_, lean_object* v_post_1617_, lean_object* v_e_1618_, lean_object* v_a_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v___x_1623_; 
lean_inc_ref(v_post_1617_);
lean_inc(v___y_1621_);
lean_inc_ref(v___y_1620_);
lean_inc_ref(v_e_1618_);
v___x_1623_ = lean_apply_4(v_post_1617_, v_e_1618_, v___y_1620_, v___y_1621_, lean_box(0));
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1642_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1642_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1626_ = v___x_1623_;
v_isShared_1627_ = v_isSharedCheck_1642_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1623_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1642_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
switch(lean_obj_tag(v_a_1624_))
{
case 0:
{
lean_object* v_e_1628_; lean_object* v___x_1630_; 
lean_dec_ref(v_e_1618_);
lean_dec_ref(v_post_1617_);
lean_dec_ref(v_pre_1616_);
v_e_1628_ = lean_ctor_get(v_a_1624_, 0);
lean_inc_ref(v_e_1628_);
lean_dec_ref_known(v_a_1624_, 1);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v_e_1628_);
v___x_1630_ = v___x_1626_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_e_1628_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
case 1:
{
lean_object* v_e_1632_; lean_object* v___x_1633_; 
lean_del_object(v___x_1626_);
lean_dec_ref(v_e_1618_);
v_e_1632_ = lean_ctor_get(v_a_1624_, 0);
lean_inc_ref(v_e_1632_);
lean_dec_ref_known(v_a_1624_, 1);
v___x_1633_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1616_, v_post_1617_, v_e_1632_, v_a_1619_, v___y_1620_, v___y_1621_);
return v___x_1633_;
}
default: 
{
lean_object* v_e_x3f_1634_; 
lean_dec_ref(v_post_1617_);
lean_dec_ref(v_pre_1616_);
v_e_x3f_1634_ = lean_ctor_get(v_a_1624_, 0);
lean_inc(v_e_x3f_1634_);
lean_dec_ref_known(v_a_1624_, 1);
if (lean_obj_tag(v_e_x3f_1634_) == 0)
{
lean_object* v___x_1636_; 
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v_e_1618_);
v___x_1636_ = v___x_1626_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v_e_1618_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
else
{
lean_object* v_val_1638_; lean_object* v___x_1640_; 
lean_dec_ref(v_e_1618_);
v_val_1638_ = lean_ctor_get(v_e_x3f_1634_, 0);
lean_inc(v_val_1638_);
lean_dec_ref_known(v_e_x3f_1634_, 1);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v_val_1638_);
v___x_1640_ = v___x_1626_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_val_1638_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
}
}
else
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1650_; 
lean_dec_ref(v_e_1618_);
lean_dec_ref(v_post_1617_);
lean_dec_ref(v_pre_1616_);
v_a_1643_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1645_ = v___x_1623_;
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1623_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1648_; 
if (v_isShared_1646_ == 0)
{
v___x_1648_ = v___x_1645_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1643_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_1651_, lean_object* v_post_1652_, lean_object* v_e_1653_, lean_object* v_a_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
lean_object* v_res_1658_; 
v_res_1658_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1651_, v_post_1652_, v_e_1653_, v_a_1654_, v___y_1655_, v___y_1656_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v_a_1654_);
return v_res_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_1659_, lean_object* v_post_1660_, lean_object* v_x_1661_, lean_object* v_x_1662_, lean_object* v_x_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(v_pre_1659_, v_post_1660_, v_x_1661_, v_x_1662_, v_x_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
lean_dec(v___y_1666_);
lean_dec_ref(v___y_1665_);
lean_dec(v___y_1664_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___boxed(lean_object* v_pre_1669_, lean_object* v_post_1670_, lean_object* v_e_1671_, lean_object* v_a_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_){
_start:
{
lean_object* v_res_1676_; 
v_res_1676_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1669_, v_post_1670_, v_e_1671_, v_a_1672_, v___y_1673_, v___y_1674_);
lean_dec(v___y_1674_);
lean_dec_ref(v___y_1673_);
lean_dec(v_a_1672_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_object* v_00_u03b1_1677_, lean_object* v_x_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_){
_start:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1682_ = lean_apply_1(v_x_1678_, lean_box(0));
v___x_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1682_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1684_, lean_object* v_x_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(v_00_u03b1_1684_, v_x_1685_, v___y_1686_, v___y_1687_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(lean_object* v_input_1690_, lean_object* v_pre_1691_, lean_object* v_post_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v_a_1698_; lean_object* v___x_1699_; 
v___x_1696_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_1697_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_box(0), v___x_1696_, v___y_1693_, v___y_1694_);
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
lean_inc(v_a_1698_);
lean_dec_ref(v___x_1697_);
v___x_1699_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1691_, v_post_1692_, v_input_1690_, v_a_1698_, v___y_1693_, v___y_1694_);
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1700_);
lean_dec_ref_known(v___x_1699_, 1);
v___x_1701_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1701_, 0, lean_box(0));
lean_closure_set(v___x_1701_, 1, lean_box(0));
lean_closure_set(v___x_1701_, 2, v_a_1698_);
v___x_1702_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_box(0), v___x_1701_, v___y_1693_, v___y_1694_);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1709_ == 0)
{
lean_object* v_unused_1710_; 
v_unused_1710_ = lean_ctor_get(v___x_1702_, 0);
lean_dec(v_unused_1710_);
v___x_1704_ = v___x_1702_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_dec(v___x_1702_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 0, v_a_1700_);
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1700_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
else
{
lean_dec(v_a_1698_);
return v___x_1699_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___boxed(lean_object* v_input_1711_, lean_object* v_pre_1712_, lean_object* v_post_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_input_1711_, v_pre_1712_, v_post_1713_, v___y_1714_, v___y_1715_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce(lean_object* v_e_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_){
_start:
{
lean_object* v___f_1724_; lean_object* v___f_1725_; lean_object* v___x_1726_; 
v___f_1724_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__0));
v___f_1725_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___x_1726_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_1720_, v___f_1724_, v___f_1725_, v_a_1721_, v_a_1722_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___boxed(lean_object* v_e_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Lean_Core_betaReduce(v_e_1727_, v_a_1728_, v_a_1729_);
lean_dec(v_a_1729_);
lean_dec_ref(v_a_1728_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1732_, lean_object* v_m_1733_, lean_object* v_a_1734_){
_start:
{
lean_object* v___x_1735_; 
v___x_1735_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_m_1733_, v_a_1734_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1736_, lean_object* v_m_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(v_00_u03b2_1736_, v_m_1737_, v_a_1738_);
lean_dec_ref(v_a_1738_);
lean_dec_ref(v_m_1737_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_1740_, lean_object* v_ref_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1741_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1746_, lean_object* v_ref_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_1746_, v_ref_1747_, v___y_1748_, v___y_1749_);
lean_dec(v___y_1749_);
lean_dec_ref(v___y_1748_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8(lean_object* v_00_u03b1_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8(v_00_u03b1_1757_, v___y_1758_, v___y_1759_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_1762_, lean_object* v_x_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v___x_1768_; 
v___x_1768_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v_x_1763_, v___y_1764_, v___y_1765_, v___y_1766_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_1769_, lean_object* v_x_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(v_00_u03b1_1769_, v_x_1770_, v___y_1771_, v___y_1772_, v___y_1773_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_1776_, lean_object* v_m_1777_, lean_object* v_a_1778_, lean_object* v_b_1779_){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(v_m_1777_, v_a_1778_, v_b_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_1781_, lean_object* v_a_1782_, lean_object* v_x_1783_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1782_, v_x_1783_);
return v___x_1784_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1785_, lean_object* v_a_1786_, lean_object* v_x_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_1785_, v_a_1786_, v_x_1787_);
lean_dec(v_x_1787_);
lean_dec_ref(v_a_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_1789_, lean_object* v_a_1790_, lean_object* v_x_1791_){
_start:
{
uint8_t v___x_1792_; 
v___x_1792_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1790_, v_x_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___boxed(lean_object* v_00_u03b2_1793_, lean_object* v_a_1794_, lean_object* v_x_1795_){
_start:
{
uint8_t v_res_1796_; lean_object* v_r_1797_; 
v_res_1796_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(v_00_u03b2_1793_, v_a_1794_, v_x_1795_);
lean_dec(v_x_1795_);
lean_dec_ref(v_a_1794_);
v_r_1797_ = lean_box(v_res_1796_);
return v_r_1797_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_1798_, lean_object* v_data_1799_){
_start:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_data_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12(lean_object* v_00_u03b2_1801_, lean_object* v_a_1802_, lean_object* v_b_1803_, lean_object* v_x_1804_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1802_, v_b_1803_, v_x_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object* v_00_u03b2_1806_, lean_object* v_i_1807_, lean_object* v_source_1808_, lean_object* v_target_1809_){
_start:
{
lean_object* v___x_1810_; 
v___x_1810_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v_i_1807_, v_source_1808_, v_target_1809_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_1811_, lean_object* v_x_1812_, lean_object* v_x_1813_){
_start:
{
lean_object* v___x_1814_; 
v___x_1814_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_x_1812_, v_x_1813_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0(lean_object* v_toApplicative_1815_, lean_object* v_a_1816_){
_start:
{
lean_object* v_toPure_1817_; lean_object* v___x_1818_; 
v_toPure_1817_ = lean_ctor_get(v_toApplicative_1815_, 1);
lean_inc(v_toPure_1817_);
lean_dec_ref(v_toApplicative_1815_);
v___x_1818_ = lean_apply_2(v_toPure_1817_, lean_box(0), v_a_1816_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13(lean_object* v___x_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_){
_start:
{
lean_object* v___x_1825_; 
v___x_1825_ = l_Lean_Core_checkSystem(v___x_1819_, v___y_1822_, v___y_1823_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___boxed(lean_object* v___x_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13(v___x_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14(lean_object* v_inst_1835_, lean_object* v_x_1836_, lean_object* v___x_1837_, lean_object* v___x_1838_, lean_object* v_inst_1839_, lean_object* v___f_1840_, lean_object* v___x_1841_, lean_object* v___x_1842_, lean_object* v_a_1843_, lean_object* v_toBind_1844_, lean_object* v___f_1845_, lean_object* v_toApplicative_1846_, lean_object* v_a_1847_){
_start:
{
if (lean_obj_tag(v_a_1847_) == 0)
{
lean_object* v___f_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_3440__overap_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
lean_dec_ref(v_toApplicative_1846_);
v___f_1848_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___closed__0));
v___x_1849_ = lean_apply_2(v_inst_1835_, lean_box(0), v___f_1848_);
lean_inc_ref(v___x_1838_);
lean_inc_ref(v___x_1837_);
v___x_1850_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 9);
lean_closure_set(v___x_1850_, 0, lean_box(0));
lean_closure_set(v___x_1850_, 1, lean_box(0));
lean_closure_set(v___x_1850_, 2, lean_box(0));
lean_closure_set(v___x_1850_, 3, lean_box(0));
lean_closure_set(v___x_1850_, 4, v_x_1836_);
lean_closure_set(v___x_1850_, 5, v___x_1837_);
lean_closure_set(v___x_1850_, 6, v___x_1838_);
lean_closure_set(v___x_1850_, 7, lean_box(0));
lean_closure_set(v___x_1850_, 8, v___x_1849_);
v___x_1851_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___boxed), 13, 12);
lean_closure_set(v___x_1851_, 0, lean_box(0));
lean_closure_set(v___x_1851_, 1, lean_box(0));
lean_closure_set(v___x_1851_, 2, lean_box(0));
lean_closure_set(v___x_1851_, 3, lean_box(0));
lean_closure_set(v___x_1851_, 4, v_x_1836_);
lean_closure_set(v___x_1851_, 5, v___x_1837_);
lean_closure_set(v___x_1851_, 6, v___x_1838_);
lean_closure_set(v___x_1851_, 7, v_inst_1839_);
lean_closure_set(v___x_1851_, 8, lean_box(0));
lean_closure_set(v___x_1851_, 9, lean_box(0));
lean_closure_set(v___x_1851_, 10, v___x_1850_);
lean_closure_set(v___x_1851_, 11, v___f_1840_);
v___x_3440__overap_1852_ = l_Lean_Meta_withIncRecDepth___redArg(v___x_1841_, v___x_1842_, v___x_1851_);
lean_inc(v_a_1843_);
v___x_1853_ = lean_apply_1(v___x_3440__overap_1852_, v_a_1843_);
v___x_1854_ = lean_apply_4(v_toBind_1844_, lean_box(0), lean_box(0), v___x_1853_, v___f_1845_);
return v___x_1854_;
}
else
{
lean_object* v_val_1855_; lean_object* v_toPure_1856_; lean_object* v___x_1857_; 
lean_dec(v___f_1845_);
lean_dec(v_toBind_1844_);
lean_dec_ref(v___x_1842_);
lean_dec_ref(v___x_1841_);
lean_dec(v___f_1840_);
lean_dec_ref(v_inst_1839_);
lean_dec_ref(v___x_1838_);
lean_dec_ref(v___x_1837_);
lean_dec(v_inst_1835_);
v_val_1855_ = lean_ctor_get(v_a_1847_, 0);
lean_inc(v_val_1855_);
lean_dec_ref_known(v_a_1847_, 1);
v_toPure_1856_ = lean_ctor_get(v_toApplicative_1846_, 1);
lean_inc(v_toPure_1856_);
lean_dec_ref(v_toApplicative_1846_);
v___x_1857_ = lean_apply_2(v_toPure_1856_, lean_box(0), v_val_1855_);
return v___x_1857_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___boxed(lean_object* v_inst_1858_, lean_object* v_x_1859_, lean_object* v___x_1860_, lean_object* v___x_1861_, lean_object* v_inst_1862_, lean_object* v___f_1863_, lean_object* v___x_1864_, lean_object* v___x_1865_, lean_object* v_a_1866_, lean_object* v_toBind_1867_, lean_object* v___f_1868_, lean_object* v_toApplicative_1869_, lean_object* v_a_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14(v_inst_1858_, v_x_1859_, v___x_1860_, v___x_1861_, v_inst_1862_, v___f_1863_, v___x_1864_, v___x_1865_, v_a_1866_, v_toBind_1867_, v___f_1868_, v_toApplicative_1869_, v_a_1870_);
lean_dec(v_a_1866_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(lean_object* v___x_1872_, lean_object* v___x_1873_, lean_object* v_declName_1874_, lean_object* v_a_1875_, lean_object* v___f_1876_, uint8_t v_nondep_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_){
_start:
{
uint8_t v___x_1880_; lean_object* v___x_3459__overap_1881_; lean_object* v___x_1882_; 
v___x_1880_ = 0;
v___x_3459__overap_1881_ = l_Lean_Meta_withLetDecl___redArg(v___x_1872_, v___x_1873_, v_declName_1874_, v_a_1875_, v_a_1879_, v___f_1876_, v_nondep_1877_, v___x_1880_);
lean_inc(v_a_1878_);
v___x_1882_ = lean_apply_1(v___x_3459__overap_1881_, v_a_1878_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed(lean_object* v___x_1883_, lean_object* v___x_1884_, lean_object* v_declName_1885_, lean_object* v_a_1886_, lean_object* v___f_1887_, lean_object* v_nondep_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_){
_start:
{
uint8_t v_nondep_3638__boxed_1891_; lean_object* v_res_1892_; 
v_nondep_3638__boxed_1891_ = lean_unbox(v_nondep_1888_);
v_res_1892_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(v___x_1883_, v___x_1884_, v_declName_1885_, v_a_1886_, v___f_1887_, v_nondep_3638__boxed_1891_, v_a_1889_, v_a_1890_);
lean_dec(v_a_1889_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(lean_object* v_fvars_1893_, uint8_t v_usedLetOnly_1894_, lean_object* v_inst_1895_, lean_object* v_toBind_1896_, lean_object* v___f_1897_, lean_object* v_a_1898_){
_start:
{
uint8_t v___x_1899_; uint8_t v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1899_ = 0;
v___x_1900_ = 1;
v___x_1901_ = lean_box(v_usedLetOnly_1894_);
v___x_1902_ = lean_box(v___x_1899_);
v___x_1903_ = lean_box(v___x_1900_);
v___x_1904_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLetFVars___boxed), 10, 5);
lean_closure_set(v___x_1904_, 0, v_fvars_1893_);
lean_closure_set(v___x_1904_, 1, v_a_1898_);
lean_closure_set(v___x_1904_, 2, v___x_1901_);
lean_closure_set(v___x_1904_, 3, v___x_1902_);
lean_closure_set(v___x_1904_, 4, v___x_1903_);
v___x_1905_ = lean_apply_2(v_inst_1895_, lean_box(0), v___x_1904_);
v___x_1906_ = lean_apply_4(v_toBind_1896_, lean_box(0), lean_box(0), v___x_1905_, v___f_1897_);
return v___x_1906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed(lean_object* v_fvars_1907_, lean_object* v_usedLetOnly_1908_, lean_object* v_inst_1909_, lean_object* v_toBind_1910_, lean_object* v___f_1911_, lean_object* v_a_1912_){
_start:
{
uint8_t v_usedLetOnly_boxed_1913_; lean_object* v_res_1914_; 
v_usedLetOnly_boxed_1913_ = lean_unbox(v_usedLetOnly_1908_);
v_res_1914_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(v_fvars_1907_, v_usedLetOnly_boxed_1913_, v_inst_1909_, v_toBind_1910_, v___f_1911_, v_a_1912_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(lean_object* v_fvars_1915_, uint8_t v_usedLetOnly_1916_, lean_object* v_inst_1917_, lean_object* v_toBind_1918_, lean_object* v___f_1919_, lean_object* v_a_1920_){
_start:
{
uint8_t v___x_1921_; uint8_t v___x_1922_; uint8_t v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1921_ = 0;
v___x_1922_ = 1;
v___x_1923_ = 1;
v___x_1924_ = lean_box(v___x_1921_);
v___x_1925_ = lean_box(v_usedLetOnly_1916_);
v___x_1926_ = lean_box(v___x_1921_);
v___x_1927_ = lean_box(v___x_1922_);
v___x_1928_ = lean_box(v___x_1923_);
v___x_1929_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1929_, 0, v_fvars_1915_);
lean_closure_set(v___x_1929_, 1, v_a_1920_);
lean_closure_set(v___x_1929_, 2, v___x_1924_);
lean_closure_set(v___x_1929_, 3, v___x_1925_);
lean_closure_set(v___x_1929_, 4, v___x_1926_);
lean_closure_set(v___x_1929_, 5, v___x_1927_);
lean_closure_set(v___x_1929_, 6, v___x_1928_);
v___x_1930_ = lean_apply_2(v_inst_1917_, lean_box(0), v___x_1929_);
v___x_1931_ = lean_apply_4(v_toBind_1918_, lean_box(0), lean_box(0), v___x_1930_, v___f_1919_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed(lean_object* v_fvars_1932_, lean_object* v_usedLetOnly_1933_, lean_object* v_inst_1934_, lean_object* v_toBind_1935_, lean_object* v___f_1936_, lean_object* v_a_1937_){
_start:
{
uint8_t v_usedLetOnly_boxed_1938_; lean_object* v_res_1939_; 
v_usedLetOnly_boxed_1938_ = lean_unbox(v_usedLetOnly_1933_);
v_res_1939_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(v_fvars_1932_, v_usedLetOnly_boxed_1938_, v_inst_1934_, v_toBind_1935_, v___f_1936_, v_a_1937_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(lean_object* v___x_1940_, lean_object* v___x_1941_, lean_object* v_binderName_1942_, uint8_t v_binderInfo_1943_, lean_object* v___f_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_){
_start:
{
uint8_t v___x_1947_; lean_object* v___x_3517__overap_1948_; lean_object* v___x_1949_; 
v___x_1947_ = 0;
v___x_3517__overap_1948_ = l_Lean_Meta_withLocalDecl___redArg(v___x_1940_, v___x_1941_, v_binderName_1942_, v_binderInfo_1943_, v_a_1946_, v___f_1944_, v___x_1947_);
lean_inc(v_a_1945_);
v___x_1949_ = lean_apply_1(v___x_3517__overap_1948_, v_a_1945_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed(lean_object* v___x_1950_, lean_object* v___x_1951_, lean_object* v_binderName_1952_, lean_object* v_binderInfo_1953_, lean_object* v___f_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_){
_start:
{
uint8_t v_binderInfo_3706__boxed_1957_; lean_object* v_res_1958_; 
v_binderInfo_3706__boxed_1957_ = lean_unbox(v_binderInfo_1953_);
v_res_1958_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(v___x_1950_, v___x_1951_, v_binderName_1952_, v_binderInfo_3706__boxed_1957_, v___f_1954_, v_a_1955_, v_a_1956_);
lean_dec(v_a_1955_);
return v_res_1958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(lean_object* v_fvars_1959_, uint8_t v_usedLetOnly_1960_, lean_object* v_inst_1961_, lean_object* v_toBind_1962_, lean_object* v___f_1963_, lean_object* v_a_1964_){
_start:
{
uint8_t v___x_1965_; uint8_t v___x_1966_; uint8_t v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1965_ = 0;
v___x_1966_ = 1;
v___x_1967_ = 1;
v___x_1968_ = lean_box(v___x_1965_);
v___x_1969_ = lean_box(v_usedLetOnly_1960_);
v___x_1970_ = lean_box(v___x_1966_);
v___x_1971_ = lean_box(v___x_1967_);
v___x_1972_ = lean_alloc_closure((void*)(l_Lean_Meta_mkForallFVars___boxed), 11, 6);
lean_closure_set(v___x_1972_, 0, v_fvars_1959_);
lean_closure_set(v___x_1972_, 1, v_a_1964_);
lean_closure_set(v___x_1972_, 2, v___x_1968_);
lean_closure_set(v___x_1972_, 3, v___x_1969_);
lean_closure_set(v___x_1972_, 4, v___x_1970_);
lean_closure_set(v___x_1972_, 5, v___x_1971_);
v___x_1973_ = lean_apply_2(v_inst_1961_, lean_box(0), v___x_1972_);
v___x_1974_ = lean_apply_4(v_toBind_1962_, lean_box(0), lean_box(0), v___x_1973_, v___f_1963_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed(lean_object* v_fvars_1975_, lean_object* v_usedLetOnly_1976_, lean_object* v_inst_1977_, lean_object* v_toBind_1978_, lean_object* v___f_1979_, lean_object* v_a_1980_){
_start:
{
uint8_t v_usedLetOnly_boxed_1981_; lean_object* v_res_1982_; 
v_usedLetOnly_boxed_1981_ = lean_unbox(v_usedLetOnly_1976_);
v_res_1982_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(v_fvars_1975_, v_usedLetOnly_boxed_1981_, v_inst_1977_, v_toBind_1978_, v___f_1979_, v_a_1980_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(lean_object* v___f_1983_, lean_object* v___y_1984_, lean_object* v_a_1985_){
_start:
{
lean_object* v___x_1986_; 
lean_inc(v___y_1984_);
v___x_1986_ = lean_apply_2(v___f_1983_, v_a_1985_, v___y_1984_);
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed(lean_object* v___f_1987_, lean_object* v___y_1988_, lean_object* v_a_1989_){
_start:
{
lean_object* v_res_1990_; 
v_res_1990_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(v___f_1987_, v___y_1988_, v_a_1989_);
lean_dec(v___y_1988_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(lean_object* v_toApplicative_1991_, lean_object* v_acc_1992_, lean_object* v_next_1993_, lean_object* v_a_1994_){
_start:
{
lean_object* v_toPure_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; 
v_toPure_1995_ = lean_ctor_get(v_toApplicative_1991_, 1);
lean_inc(v_toPure_1995_);
lean_dec_ref(v_toApplicative_1991_);
v___x_1996_ = lean_array_fset(v_acc_1992_, v_next_1993_, v_a_1994_);
v___x_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1997_, 0, v___x_1996_);
v___x_1998_ = lean_apply_2(v_toPure_1995_, lean_box(0), v___x_1997_);
return v___x_1998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed(lean_object* v_toApplicative_1999_, lean_object* v_acc_2000_, lean_object* v_next_2001_, lean_object* v_a_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(v_toApplicative_1999_, v_acc_2000_, v_next_2001_, v_a_2002_);
lean_dec(v_next_2001_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(lean_object* v_toApplicative_2004_, lean_object* v_next_2005_, lean_object* v_G_2006_, lean_object* v___y_2007_, lean_object* v_a_2008_){
_start:
{
if (lean_obj_tag(v_a_2008_) == 0)
{
lean_object* v_a_2009_; lean_object* v_toPure_2010_; lean_object* v___x_2011_; 
lean_dec(v_G_2006_);
v_a_2009_ = lean_ctor_get(v_a_2008_, 0);
lean_inc(v_a_2009_);
lean_dec_ref_known(v_a_2008_, 1);
v_toPure_2010_ = lean_ctor_get(v_toApplicative_2004_, 1);
lean_inc(v_toPure_2010_);
lean_dec_ref(v_toApplicative_2004_);
v___x_2011_ = lean_apply_2(v_toPure_2010_, lean_box(0), v_a_2009_);
return v___x_2011_;
}
else
{
lean_object* v_a_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
lean_dec_ref(v_toApplicative_2004_);
v_a_2012_ = lean_ctor_get(v_a_2008_, 0);
lean_inc(v_a_2012_);
lean_dec_ref_known(v_a_2008_, 1);
v___x_2013_ = lean_unsigned_to_nat(1u);
v___x_2014_ = lean_nat_add(v_next_2005_, v___x_2013_);
lean_inc(v___y_2007_);
v___x_2015_ = lean_apply_5(v_G_2006_, v___x_2014_, v_a_2012_, lean_box(0), lean_box(0), v___y_2007_);
return v___x_2015_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed(lean_object* v_toApplicative_2016_, lean_object* v_next_2017_, lean_object* v_G_2018_, lean_object* v___y_2019_, lean_object* v_a_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(v_toApplicative_2016_, v_next_2017_, v_G_2018_, v___y_2019_, v_a_2020_);
lean_dec(v___y_2019_);
lean_dec(v_next_2017_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(lean_object* v_f_2022_, lean_object* v_inst_2023_, lean_object* v_inst_2024_, lean_object* v_inst_2025_, lean_object* v_pre_2026_, lean_object* v_post_2027_, uint8_t v_usedLetOnly_2028_, uint8_t v_skipConstInApp_2029_, uint8_t v_skipInstances_2030_, lean_object* v_x_2031_, lean_object* v_x_2032_, lean_object* v___y_2033_, lean_object* v_a_2034_){
_start:
{
lean_object* v___x_2035_; lean_object* v___x_2036_; 
v___x_2035_ = l_Lean_mkAppN(v_f_2022_, v_a_2034_);
v___x_2036_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2023_, v_inst_2024_, v_inst_2025_, v_pre_2026_, v_post_2027_, v_usedLetOnly_2028_, v_skipConstInApp_2029_, v_skipInstances_2030_, v_x_2031_, v_x_2032_, v___x_2035_, v___y_2033_);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed(lean_object* v_f_2037_, lean_object* v_inst_2038_, lean_object* v_inst_2039_, lean_object* v_inst_2040_, lean_object* v_pre_2041_, lean_object* v_post_2042_, lean_object* v_usedLetOnly_2043_, lean_object* v_skipConstInApp_2044_, lean_object* v_skipInstances_2045_, lean_object* v_x_2046_, lean_object* v_x_2047_, lean_object* v___y_2048_, lean_object* v_a_2049_){
_start:
{
uint8_t v_usedLetOnly_boxed_2050_; uint8_t v_skipConstInApp_boxed_2051_; uint8_t v_skipInstances_boxed_2052_; lean_object* v_res_2053_; 
v_usedLetOnly_boxed_2050_ = lean_unbox(v_usedLetOnly_2043_);
v_skipConstInApp_boxed_2051_ = lean_unbox(v_skipConstInApp_2044_);
v_skipInstances_boxed_2052_ = lean_unbox(v_skipInstances_2045_);
v_res_2053_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(v_f_2037_, v_inst_2038_, v_inst_2039_, v_inst_2040_, v_pre_2041_, v_post_2042_, v_usedLetOnly_boxed_2050_, v_skipConstInApp_boxed_2051_, v_skipInstances_boxed_2052_, v_x_2046_, v_x_2047_, v___y_2048_, v_a_2049_);
lean_dec_ref(v_a_2049_);
lean_dec(v___y_2048_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed(lean_object* v_inst_2054_, lean_object* v_inst_2055_, lean_object* v_inst_2056_, lean_object* v_pre_2057_, lean_object* v_post_2058_, lean_object* v_usedLetOnly_2059_, lean_object* v_skipConstInApp_2060_, lean_object* v_skipInstances_2061_, lean_object* v_x_2062_, lean_object* v_x_2063_, lean_object* v_e_2064_, lean_object* v_a_2065_){
_start:
{
uint8_t v_usedLetOnly_boxed_2066_; uint8_t v_skipConstInApp_boxed_2067_; uint8_t v_skipInstances_boxed_2068_; lean_object* v_res_2069_; 
v_usedLetOnly_boxed_2066_ = lean_unbox(v_usedLetOnly_2059_);
v_skipConstInApp_boxed_2067_ = lean_unbox(v_skipConstInApp_2060_);
v_skipInstances_boxed_2068_ = lean_unbox(v_skipInstances_2061_);
v_res_2069_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2054_, v_inst_2055_, v_inst_2056_, v_pre_2057_, v_post_2058_, v_usedLetOnly_boxed_2066_, v_skipConstInApp_boxed_2067_, v_skipInstances_boxed_2068_, v_x_2062_, v_x_2063_, v_e_2064_, v_a_2065_);
lean_dec(v_a_2065_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(lean_object* v___x_2070_, lean_object* v_toApplicative_2071_, lean_object* v_toBind_2072_, lean_object* v___f_2073_, lean_object* v_paramInfo_2074_, lean_object* v_inst_2075_, lean_object* v_inst_2076_, lean_object* v_inst_2077_, lean_object* v_pre_2078_, lean_object* v_post_2079_, uint8_t v_usedLetOnly_2080_, uint8_t v_skipConstInApp_2081_, uint8_t v_skipInstances_2082_, lean_object* v_x_2083_, lean_object* v_x_2084_, lean_object* v_next_2085_, lean_object* v_acc_2086_, lean_object* v_h_2087_, lean_object* v_G_2088_, lean_object* v___y_2089_){
_start:
{
uint8_t v___x_2090_; 
v___x_2090_ = lean_nat_dec_lt(v_next_2085_, v___x_2070_);
if (v___x_2090_ == 0)
{
lean_object* v_toPure_2091_; lean_object* v___x_2092_; 
lean_dec(v_G_2088_);
lean_dec(v_next_2085_);
lean_dec(v_x_2084_);
lean_dec(v_post_2079_);
lean_dec(v_pre_2078_);
lean_dec_ref(v_inst_2077_);
lean_dec(v_inst_2076_);
lean_dec_ref(v_inst_2075_);
lean_dec(v___f_2073_);
lean_dec(v_toBind_2072_);
v_toPure_2091_ = lean_ctor_get(v_toApplicative_2071_, 1);
lean_inc(v_toPure_2091_);
lean_dec_ref(v_toApplicative_2071_);
v___x_2092_ = lean_apply_2(v_toPure_2091_, lean_box(0), v_acc_2086_);
return v___x_2092_;
}
else
{
lean_object* v___f_2093_; lean_object* v___y_2095_; lean_object* v___x_2098_; lean_object* v___x_2099_; uint8_t v___x_2100_; 
lean_inc(v___y_2089_);
lean_inc(v_next_2085_);
lean_inc_ref(v_toApplicative_2071_);
v___f_2093_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_2093_, 0, v_toApplicative_2071_);
lean_closure_set(v___f_2093_, 1, v_next_2085_);
lean_closure_set(v___f_2093_, 2, v_G_2088_);
lean_closure_set(v___f_2093_, 3, v___y_2089_);
v___x_2098_ = lean_array_fget_borrowed(v_acc_2086_, v_next_2085_);
v___x_2099_ = lean_array_get_size(v_paramInfo_2074_);
v___x_2100_ = lean_nat_dec_lt(v_next_2085_, v___x_2099_);
if (v___x_2100_ == 0)
{
lean_object* v___f_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
lean_inc(v___x_2098_);
v___f_2101_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2101_, 0, v_toApplicative_2071_);
lean_closure_set(v___f_2101_, 1, v_acc_2086_);
lean_closure_set(v___f_2101_, 2, v_next_2085_);
v___x_2102_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2075_, v_inst_2076_, v_inst_2077_, v_pre_2078_, v_post_2079_, v_usedLetOnly_2080_, v_skipConstInApp_2081_, v_skipInstances_2082_, v_x_2083_, v_x_2084_, v___x_2098_, v___y_2089_);
lean_inc(v_toBind_2072_);
v___x_2103_ = lean_apply_4(v_toBind_2072_, lean_box(0), lean_box(0), v___x_2102_, v___f_2101_);
v___y_2095_ = v___x_2103_;
goto v___jp_2094_;
}
else
{
lean_object* v___x_2104_; uint8_t v_isInstance_2105_; 
v___x_2104_ = lean_array_fget_borrowed(v_paramInfo_2074_, v_next_2085_);
v_isInstance_2105_ = lean_ctor_get_uint8(v___x_2104_, sizeof(void*)*1 + 4);
if (v_isInstance_2105_ == 0)
{
lean_object* v___f_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; 
lean_inc(v___x_2098_);
v___f_2106_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2106_, 0, v_toApplicative_2071_);
lean_closure_set(v___f_2106_, 1, v_acc_2086_);
lean_closure_set(v___f_2106_, 2, v_next_2085_);
v___x_2107_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2075_, v_inst_2076_, v_inst_2077_, v_pre_2078_, v_post_2079_, v_usedLetOnly_2080_, v_skipConstInApp_2081_, v_skipInstances_2082_, v_x_2083_, v_x_2084_, v___x_2098_, v___y_2089_);
lean_inc(v_toBind_2072_);
v___x_2108_ = lean_apply_4(v_toBind_2072_, lean_box(0), lean_box(0), v___x_2107_, v___f_2106_);
v___y_2095_ = v___x_2108_;
goto v___jp_2094_;
}
else
{
lean_object* v_toPure_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
lean_dec(v_next_2085_);
lean_dec(v_x_2084_);
lean_dec(v_post_2079_);
lean_dec(v_pre_2078_);
lean_dec_ref(v_inst_2077_);
lean_dec(v_inst_2076_);
lean_dec_ref(v_inst_2075_);
v_toPure_2109_ = lean_ctor_get(v_toApplicative_2071_, 1);
lean_inc(v_toPure_2109_);
lean_dec_ref(v_toApplicative_2071_);
v___x_2110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2110_, 0, v_acc_2086_);
v___x_2111_ = lean_apply_2(v_toPure_2109_, lean_box(0), v___x_2110_);
v___y_2095_ = v___x_2111_;
goto v___jp_2094_;
}
}
v___jp_2094_:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
lean_inc(v_toBind_2072_);
v___x_2096_ = lean_apply_4(v_toBind_2072_, lean_box(0), lean_box(0), v___y_2095_, v___f_2073_);
v___x_2097_ = lean_apply_4(v_toBind_2072_, lean_box(0), lean_box(0), v___x_2096_, v___f_2093_);
return v___x_2097_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed(lean_object** _args){
lean_object* v___x_2112_ = _args[0];
lean_object* v_toApplicative_2113_ = _args[1];
lean_object* v_toBind_2114_ = _args[2];
lean_object* v___f_2115_ = _args[3];
lean_object* v_paramInfo_2116_ = _args[4];
lean_object* v_inst_2117_ = _args[5];
lean_object* v_inst_2118_ = _args[6];
lean_object* v_inst_2119_ = _args[7];
lean_object* v_pre_2120_ = _args[8];
lean_object* v_post_2121_ = _args[9];
lean_object* v_usedLetOnly_2122_ = _args[10];
lean_object* v_skipConstInApp_2123_ = _args[11];
lean_object* v_skipInstances_2124_ = _args[12];
lean_object* v_x_2125_ = _args[13];
lean_object* v_x_2126_ = _args[14];
lean_object* v_next_2127_ = _args[15];
lean_object* v_acc_2128_ = _args[16];
lean_object* v_h_2129_ = _args[17];
lean_object* v_G_2130_ = _args[18];
lean_object* v___y_2131_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_2132_; uint8_t v_skipConstInApp_boxed_2133_; uint8_t v_skipInstances_boxed_2134_; lean_object* v_res_2135_; 
v_usedLetOnly_boxed_2132_ = lean_unbox(v_usedLetOnly_2122_);
v_skipConstInApp_boxed_2133_ = lean_unbox(v_skipConstInApp_2123_);
v_skipInstances_boxed_2134_ = lean_unbox(v_skipInstances_2124_);
v_res_2135_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(v___x_2112_, v_toApplicative_2113_, v_toBind_2114_, v___f_2115_, v_paramInfo_2116_, v_inst_2117_, v_inst_2118_, v_inst_2119_, v_pre_2120_, v_post_2121_, v_usedLetOnly_boxed_2132_, v_skipConstInApp_boxed_2133_, v_skipInstances_boxed_2134_, v_x_2125_, v_x_2126_, v_next_2127_, v_acc_2128_, v_h_2129_, v_G_2130_, v___y_2131_);
lean_dec(v___y_2131_);
lean_dec_ref(v_paramInfo_2116_);
lean_dec(v___x_2112_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(lean_object* v___x_2136_, lean_object* v_toApplicative_2137_, lean_object* v_toBind_2138_, lean_object* v___f_2139_, lean_object* v_inst_2140_, lean_object* v_inst_2141_, lean_object* v_inst_2142_, lean_object* v_pre_2143_, lean_object* v_post_2144_, uint8_t v_usedLetOnly_2145_, uint8_t v_skipConstInApp_2146_, uint8_t v_skipInstances_2147_, lean_object* v_x_2148_, lean_object* v_x_2149_, lean_object* v_args_2150_, lean_object* v___y_2151_, lean_object* v___f_2152_, lean_object* v_a_2153_){
_start:
{
lean_object* v_paramInfo_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___f_2159_; lean_object* v___x_3274__overap_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; 
v_paramInfo_2154_ = lean_ctor_get(v_a_2153_, 0);
lean_inc_ref(v_paramInfo_2154_);
lean_dec_ref(v_a_2153_);
v___x_2155_ = lean_unsigned_to_nat(0u);
v___x_2156_ = lean_box(v_usedLetOnly_2145_);
v___x_2157_ = lean_box(v_skipConstInApp_2146_);
v___x_2158_ = lean_box(v_skipInstances_2147_);
lean_inc(v_toBind_2138_);
v___f_2159_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed), 20, 15);
lean_closure_set(v___f_2159_, 0, v___x_2136_);
lean_closure_set(v___f_2159_, 1, v_toApplicative_2137_);
lean_closure_set(v___f_2159_, 2, v_toBind_2138_);
lean_closure_set(v___f_2159_, 3, v___f_2139_);
lean_closure_set(v___f_2159_, 4, v_paramInfo_2154_);
lean_closure_set(v___f_2159_, 5, v_inst_2140_);
lean_closure_set(v___f_2159_, 6, v_inst_2141_);
lean_closure_set(v___f_2159_, 7, v_inst_2142_);
lean_closure_set(v___f_2159_, 8, v_pre_2143_);
lean_closure_set(v___f_2159_, 9, v_post_2144_);
lean_closure_set(v___f_2159_, 10, v___x_2156_);
lean_closure_set(v___f_2159_, 11, v___x_2157_);
lean_closure_set(v___f_2159_, 12, v___x_2158_);
lean_closure_set(v___f_2159_, 13, v_x_2148_);
lean_closure_set(v___f_2159_, 14, v_x_2149_);
v___x_3274__overap_2160_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2159_, v___x_2155_, v_args_2150_, lean_box(0));
lean_inc(v___y_2151_);
v___x_2161_ = lean_apply_1(v___x_3274__overap_2160_, v___y_2151_);
v___x_2162_ = lean_apply_4(v_toBind_2138_, lean_box(0), lean_box(0), v___x_2161_, v___f_2152_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_2163_ = _args[0];
lean_object* v_toApplicative_2164_ = _args[1];
lean_object* v_toBind_2165_ = _args[2];
lean_object* v___f_2166_ = _args[3];
lean_object* v_inst_2167_ = _args[4];
lean_object* v_inst_2168_ = _args[5];
lean_object* v_inst_2169_ = _args[6];
lean_object* v_pre_2170_ = _args[7];
lean_object* v_post_2171_ = _args[8];
lean_object* v_usedLetOnly_2172_ = _args[9];
lean_object* v_skipConstInApp_2173_ = _args[10];
lean_object* v_skipInstances_2174_ = _args[11];
lean_object* v_x_2175_ = _args[12];
lean_object* v_x_2176_ = _args[13];
lean_object* v_args_2177_ = _args[14];
lean_object* v___y_2178_ = _args[15];
lean_object* v___f_2179_ = _args[16];
lean_object* v_a_2180_ = _args[17];
_start:
{
uint8_t v_usedLetOnly_boxed_2181_; uint8_t v_skipConstInApp_boxed_2182_; uint8_t v_skipInstances_boxed_2183_; lean_object* v_res_2184_; 
v_usedLetOnly_boxed_2181_ = lean_unbox(v_usedLetOnly_2172_);
v_skipConstInApp_boxed_2182_ = lean_unbox(v_skipConstInApp_2173_);
v_skipInstances_boxed_2183_ = lean_unbox(v_skipInstances_2174_);
v_res_2184_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(v___x_2163_, v_toApplicative_2164_, v_toBind_2165_, v___f_2166_, v_inst_2167_, v_inst_2168_, v_inst_2169_, v_pre_2170_, v_post_2171_, v_usedLetOnly_boxed_2181_, v_skipConstInApp_boxed_2182_, v_skipInstances_boxed_2183_, v_x_2175_, v_x_2176_, v_args_2177_, v___y_2178_, v___f_2179_, v_a_2180_);
lean_dec(v___y_2178_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(uint8_t v_skipInstances_2185_, lean_object* v_inst_2186_, lean_object* v_inst_2187_, lean_object* v_inst_2188_, lean_object* v_pre_2189_, lean_object* v_post_2190_, uint8_t v_usedLetOnly_2191_, uint8_t v_skipConstInApp_2192_, lean_object* v_x_2193_, lean_object* v_x_2194_, lean_object* v_args_2195_, lean_object* v___x_2196_, lean_object* v_toBind_2197_, lean_object* v_toApplicative_2198_, lean_object* v___f_2199_, lean_object* v_f_2200_, lean_object* v___y_2201_){
_start:
{
if (v_skipInstances_2185_ == 0)
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___f_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; size_t v_sz_2210_; size_t v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_3289__overap_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
lean_dec(v___f_2199_);
lean_dec_ref(v_toApplicative_2198_);
v___x_2202_ = lean_box(v_usedLetOnly_2191_);
v___x_2203_ = lean_box(v_skipConstInApp_2192_);
v___x_2204_ = lean_box(v_skipInstances_2185_);
lean_inc_n(v___y_2201_, 2);
lean_inc(v_x_2194_);
lean_inc(v_post_2190_);
lean_inc(v_pre_2189_);
lean_inc_ref(v_inst_2188_);
lean_inc(v_inst_2187_);
lean_inc_ref(v_inst_2186_);
v___f_2205_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed), 13, 12);
lean_closure_set(v___f_2205_, 0, v_f_2200_);
lean_closure_set(v___f_2205_, 1, v_inst_2186_);
lean_closure_set(v___f_2205_, 2, v_inst_2187_);
lean_closure_set(v___f_2205_, 3, v_inst_2188_);
lean_closure_set(v___f_2205_, 4, v_pre_2189_);
lean_closure_set(v___f_2205_, 5, v_post_2190_);
lean_closure_set(v___f_2205_, 6, v___x_2202_);
lean_closure_set(v___f_2205_, 7, v___x_2203_);
lean_closure_set(v___f_2205_, 8, v___x_2204_);
lean_closure_set(v___f_2205_, 9, v_x_2193_);
lean_closure_set(v___f_2205_, 10, v_x_2194_);
lean_closure_set(v___f_2205_, 11, v___y_2201_);
v___x_2206_ = lean_box(v_usedLetOnly_2191_);
v___x_2207_ = lean_box(v_skipConstInApp_2192_);
v___x_2208_ = lean_box(v_skipInstances_2185_);
v___x_2209_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed), 12, 10);
lean_closure_set(v___x_2209_, 0, v_inst_2186_);
lean_closure_set(v___x_2209_, 1, v_inst_2187_);
lean_closure_set(v___x_2209_, 2, v_inst_2188_);
lean_closure_set(v___x_2209_, 3, v_pre_2189_);
lean_closure_set(v___x_2209_, 4, v_post_2190_);
lean_closure_set(v___x_2209_, 5, v___x_2206_);
lean_closure_set(v___x_2209_, 6, v___x_2207_);
lean_closure_set(v___x_2209_, 7, v___x_2208_);
lean_closure_set(v___x_2209_, 8, v_x_2193_);
lean_closure_set(v___x_2209_, 9, v_x_2194_);
v_sz_2210_ = lean_array_size(v_args_2195_);
v___x_2211_ = ((size_t)0ULL);
v___x_2212_ = l_unsafeCast___redArg(v_args_2195_);
lean_dec_ref(v_args_2195_);
v___x_2213_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2196_, v___x_2209_, v_sz_2210_, v___x_2211_, v___x_2212_);
v___x_3289__overap_2214_ = l_unsafeCast___redArg(v___x_2213_);
lean_dec(v___x_2213_);
v___x_2215_ = lean_apply_1(v___x_3289__overap_2214_, v___y_2201_);
v___x_2216_ = lean_apply_4(v_toBind_2197_, lean_box(0), lean_box(0), v___x_2215_, v___f_2205_);
return v___x_2216_;
}
else
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___f_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___f_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
lean_dec_ref(v___x_2196_);
v___x_2217_ = lean_box(v_usedLetOnly_2191_);
v___x_2218_ = lean_box(v_skipConstInApp_2192_);
v___x_2219_ = lean_box(v_skipInstances_2185_);
lean_inc_n(v___y_2201_, 2);
lean_inc(v_x_2194_);
lean_inc(v_post_2190_);
lean_inc(v_pre_2189_);
lean_inc_ref(v_inst_2188_);
lean_inc_n(v_inst_2187_, 2);
lean_inc_ref(v_inst_2186_);
lean_inc_ref(v_f_2200_);
v___f_2220_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed), 13, 12);
lean_closure_set(v___f_2220_, 0, v_f_2200_);
lean_closure_set(v___f_2220_, 1, v_inst_2186_);
lean_closure_set(v___f_2220_, 2, v_inst_2187_);
lean_closure_set(v___f_2220_, 3, v_inst_2188_);
lean_closure_set(v___f_2220_, 4, v_pre_2189_);
lean_closure_set(v___f_2220_, 5, v_post_2190_);
lean_closure_set(v___f_2220_, 6, v___x_2217_);
lean_closure_set(v___f_2220_, 7, v___x_2218_);
lean_closure_set(v___f_2220_, 8, v___x_2219_);
lean_closure_set(v___f_2220_, 9, v_x_2193_);
lean_closure_set(v___f_2220_, 10, v_x_2194_);
lean_closure_set(v___f_2220_, 11, v___y_2201_);
v___x_2221_ = lean_array_get_size(v_args_2195_);
v___x_2222_ = lean_box(v_usedLetOnly_2191_);
v___x_2223_ = lean_box(v_skipConstInApp_2192_);
v___x_2224_ = lean_box(v_skipInstances_2185_);
lean_inc(v_toBind_2197_);
v___f_2225_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed), 18, 17);
lean_closure_set(v___f_2225_, 0, v___x_2221_);
lean_closure_set(v___f_2225_, 1, v_toApplicative_2198_);
lean_closure_set(v___f_2225_, 2, v_toBind_2197_);
lean_closure_set(v___f_2225_, 3, v___f_2199_);
lean_closure_set(v___f_2225_, 4, v_inst_2186_);
lean_closure_set(v___f_2225_, 5, v_inst_2187_);
lean_closure_set(v___f_2225_, 6, v_inst_2188_);
lean_closure_set(v___f_2225_, 7, v_pre_2189_);
lean_closure_set(v___f_2225_, 8, v_post_2190_);
lean_closure_set(v___f_2225_, 9, v___x_2222_);
lean_closure_set(v___f_2225_, 10, v___x_2223_);
lean_closure_set(v___f_2225_, 11, v___x_2224_);
lean_closure_set(v___f_2225_, 12, v_x_2193_);
lean_closure_set(v___f_2225_, 13, v_x_2194_);
lean_closure_set(v___f_2225_, 14, v_args_2195_);
lean_closure_set(v___f_2225_, 15, v___y_2201_);
lean_closure_set(v___f_2225_, 16, v___f_2220_);
v___x_2226_ = lean_alloc_closure((void*)(l_Lean_Meta_getFunInfoNArgs___boxed), 7, 2);
lean_closure_set(v___x_2226_, 0, v_f_2200_);
lean_closure_set(v___x_2226_, 1, v___x_2221_);
v___x_2227_ = lean_apply_2(v_inst_2187_, lean_box(0), v___x_2226_);
v___x_2228_ = lean_apply_4(v_toBind_2197_, lean_box(0), lean_box(0), v___x_2227_, v___f_2225_);
return v___x_2228_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_skipInstances_2229_ = _args[0];
lean_object* v_inst_2230_ = _args[1];
lean_object* v_inst_2231_ = _args[2];
lean_object* v_inst_2232_ = _args[3];
lean_object* v_pre_2233_ = _args[4];
lean_object* v_post_2234_ = _args[5];
lean_object* v_usedLetOnly_2235_ = _args[6];
lean_object* v_skipConstInApp_2236_ = _args[7];
lean_object* v_x_2237_ = _args[8];
lean_object* v_x_2238_ = _args[9];
lean_object* v_args_2239_ = _args[10];
lean_object* v___x_2240_ = _args[11];
lean_object* v_toBind_2241_ = _args[12];
lean_object* v_toApplicative_2242_ = _args[13];
lean_object* v___f_2243_ = _args[14];
lean_object* v_f_2244_ = _args[15];
lean_object* v___y_2245_ = _args[16];
_start:
{
uint8_t v_skipInstances_boxed_2246_; uint8_t v_usedLetOnly_boxed_2247_; uint8_t v_skipConstInApp_boxed_2248_; lean_object* v_res_2249_; 
v_skipInstances_boxed_2246_ = lean_unbox(v_skipInstances_2229_);
v_usedLetOnly_boxed_2247_ = lean_unbox(v_usedLetOnly_2235_);
v_skipConstInApp_boxed_2248_ = lean_unbox(v_skipConstInApp_2236_);
v_res_2249_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(v_skipInstances_boxed_2246_, v_inst_2230_, v_inst_2231_, v_inst_2232_, v_pre_2233_, v_post_2234_, v_usedLetOnly_boxed_2247_, v_skipConstInApp_boxed_2248_, v_x_2237_, v_x_2238_, v_args_2239_, v___x_2240_, v_toBind_2241_, v_toApplicative_2242_, v___f_2243_, v_f_2244_, v___y_2245_);
lean_dec(v___y_2245_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(uint8_t v_skipInstances_2250_, lean_object* v_inst_2251_, lean_object* v_inst_2252_, lean_object* v_inst_2253_, lean_object* v_pre_2254_, lean_object* v_post_2255_, uint8_t v_usedLetOnly_2256_, uint8_t v_skipConstInApp_2257_, lean_object* v_x_2258_, lean_object* v_x_2259_, lean_object* v___x_2260_, lean_object* v_toBind_2261_, lean_object* v_toApplicative_2262_, lean_object* v___f_2263_, lean_object* v_f_2264_, lean_object* v_args_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___f_2270_; lean_object* v___f_2271_; 
v___x_2267_ = lean_box(v_skipInstances_2250_);
v___x_2268_ = lean_box(v_usedLetOnly_2256_);
v___x_2269_ = lean_box(v_skipConstInApp_2257_);
lean_inc_ref(v_toApplicative_2262_);
lean_inc(v_toBind_2261_);
lean_inc(v_x_2259_);
lean_inc(v_post_2255_);
lean_inc(v_pre_2254_);
lean_inc_ref(v_inst_2253_);
lean_inc(v_inst_2252_);
lean_inc_ref(v_inst_2251_);
v___f_2270_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed), 17, 15);
lean_closure_set(v___f_2270_, 0, v___x_2267_);
lean_closure_set(v___f_2270_, 1, v_inst_2251_);
lean_closure_set(v___f_2270_, 2, v_inst_2252_);
lean_closure_set(v___f_2270_, 3, v_inst_2253_);
lean_closure_set(v___f_2270_, 4, v_pre_2254_);
lean_closure_set(v___f_2270_, 5, v_post_2255_);
lean_closure_set(v___f_2270_, 6, v___x_2268_);
lean_closure_set(v___f_2270_, 7, v___x_2269_);
lean_closure_set(v___f_2270_, 8, v_x_2258_);
lean_closure_set(v___f_2270_, 9, v_x_2259_);
lean_closure_set(v___f_2270_, 10, v_args_2265_);
lean_closure_set(v___f_2270_, 11, v___x_2260_);
lean_closure_set(v___f_2270_, 12, v_toBind_2261_);
lean_closure_set(v___f_2270_, 13, v_toApplicative_2262_);
lean_closure_set(v___f_2270_, 14, v___f_2263_);
lean_inc(v___y_2266_);
v___f_2271_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed), 3, 2);
lean_closure_set(v___f_2271_, 0, v___f_2270_);
lean_closure_set(v___f_2271_, 1, v___y_2266_);
if (v_skipConstInApp_2257_ == 0)
{
lean_dec_ref(v_toApplicative_2262_);
goto v___jp_2272_;
}
else
{
uint8_t v___x_2275_; 
v___x_2275_ = l_Lean_Expr_isConst(v_f_2264_);
if (v___x_2275_ == 0)
{
lean_dec_ref(v_toApplicative_2262_);
goto v___jp_2272_;
}
else
{
lean_object* v_toPure_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
lean_dec(v_x_2259_);
lean_dec(v_post_2255_);
lean_dec(v_pre_2254_);
lean_dec_ref(v_inst_2253_);
lean_dec(v_inst_2252_);
lean_dec_ref(v_inst_2251_);
v_toPure_2276_ = lean_ctor_get(v_toApplicative_2262_, 1);
lean_inc(v_toPure_2276_);
lean_dec_ref(v_toApplicative_2262_);
v___x_2277_ = lean_apply_2(v_toPure_2276_, lean_box(0), v_f_2264_);
v___x_2278_ = lean_apply_4(v_toBind_2261_, lean_box(0), lean_box(0), v___x_2277_, v___f_2271_);
return v___x_2278_;
}
}
v___jp_2272_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2273_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2251_, v_inst_2252_, v_inst_2253_, v_pre_2254_, v_post_2255_, v_usedLetOnly_2256_, v_skipConstInApp_2257_, v_skipInstances_2250_, v_x_2258_, v_x_2259_, v_f_2264_, v___y_2266_);
v___x_2274_ = lean_apply_4(v_toBind_2261_, lean_box(0), lean_box(0), v___x_2273_, v___f_2271_);
return v___x_2274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed(lean_object** _args){
lean_object* v_skipInstances_2279_ = _args[0];
lean_object* v_inst_2280_ = _args[1];
lean_object* v_inst_2281_ = _args[2];
lean_object* v_inst_2282_ = _args[3];
lean_object* v_pre_2283_ = _args[4];
lean_object* v_post_2284_ = _args[5];
lean_object* v_usedLetOnly_2285_ = _args[6];
lean_object* v_skipConstInApp_2286_ = _args[7];
lean_object* v_x_2287_ = _args[8];
lean_object* v_x_2288_ = _args[9];
lean_object* v___x_2289_ = _args[10];
lean_object* v_toBind_2290_ = _args[11];
lean_object* v_toApplicative_2291_ = _args[12];
lean_object* v___f_2292_ = _args[13];
lean_object* v_f_2293_ = _args[14];
lean_object* v_args_2294_ = _args[15];
lean_object* v___y_2295_ = _args[16];
_start:
{
uint8_t v_skipInstances_boxed_2296_; uint8_t v_usedLetOnly_boxed_2297_; uint8_t v_skipConstInApp_boxed_2298_; lean_object* v_res_2299_; 
v_skipInstances_boxed_2296_ = lean_unbox(v_skipInstances_2279_);
v_usedLetOnly_boxed_2297_ = lean_unbox(v_usedLetOnly_2285_);
v_skipConstInApp_boxed_2298_ = lean_unbox(v_skipConstInApp_2286_);
v_res_2299_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(v_skipInstances_boxed_2296_, v_inst_2280_, v_inst_2281_, v_inst_2282_, v_pre_2283_, v_post_2284_, v_usedLetOnly_boxed_2297_, v_skipConstInApp_boxed_2298_, v_x_2287_, v_x_2288_, v___x_2289_, v_toBind_2290_, v_toApplicative_2291_, v___f_2292_, v_f_2293_, v_args_2294_, v___y_2295_);
lean_dec(v___y_2295_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(lean_object* v_fvars_2302_, lean_object* v_inst_2303_, lean_object* v_inst_2304_, lean_object* v_inst_2305_, lean_object* v_pre_2306_, lean_object* v_post_2307_, uint8_t v_usedLetOnly_2308_, uint8_t v_skipConstInApp_2309_, uint8_t v_skipInstances_2310_, lean_object* v_x_2311_, lean_object* v_x_2312_, lean_object* v_body_2313_, lean_object* v_x_2314_, lean_object* v___y_2315_){
_start:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2316_ = lean_array_push(v_fvars_2302_, v_x_2314_);
v___x_2317_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2303_, v_inst_2304_, v_inst_2305_, v_pre_2306_, v_post_2307_, v_usedLetOnly_2308_, v_skipConstInApp_2309_, v_skipInstances_2310_, v_x_2311_, v_x_2312_, v___x_2316_, v_body_2313_, v___y_2315_);
return v___x_2317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed(lean_object* v_fvars_2318_, lean_object* v_inst_2319_, lean_object* v_inst_2320_, lean_object* v_inst_2321_, lean_object* v_pre_2322_, lean_object* v_post_2323_, lean_object* v_usedLetOnly_2324_, lean_object* v_skipConstInApp_2325_, lean_object* v_skipInstances_2326_, lean_object* v_x_2327_, lean_object* v_x_2328_, lean_object* v_body_2329_, lean_object* v_x_2330_, lean_object* v___y_2331_){
_start:
{
uint8_t v_usedLetOnly_boxed_2332_; uint8_t v_skipConstInApp_boxed_2333_; uint8_t v_skipInstances_boxed_2334_; lean_object* v_res_2335_; 
v_usedLetOnly_boxed_2332_ = lean_unbox(v_usedLetOnly_2324_);
v_skipConstInApp_boxed_2333_ = lean_unbox(v_skipConstInApp_2325_);
v_skipInstances_boxed_2334_ = lean_unbox(v_skipInstances_2326_);
v_res_2335_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(v_fvars_2318_, v_inst_2319_, v_inst_2320_, v_inst_2321_, v_pre_2322_, v_post_2323_, v_usedLetOnly_boxed_2332_, v_skipConstInApp_boxed_2333_, v_skipInstances_boxed_2334_, v_x_2327_, v_x_2328_, v_body_2329_, v_x_2330_, v___y_2331_);
lean_dec(v___y_2331_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed(lean_object* v_inst_2336_, lean_object* v_inst_2337_, lean_object* v_inst_2338_, lean_object* v_pre_2339_, lean_object* v_post_2340_, lean_object* v_usedLetOnly_2341_, lean_object* v_skipConstInApp_2342_, lean_object* v_skipInstances_2343_, lean_object* v_x_2344_, lean_object* v_x_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_){
_start:
{
uint8_t v_usedLetOnly_boxed_2348_; uint8_t v_skipConstInApp_boxed_2349_; uint8_t v_skipInstances_boxed_2350_; lean_object* v_res_2351_; 
v_usedLetOnly_boxed_2348_ = lean_unbox(v_usedLetOnly_2341_);
v_skipConstInApp_boxed_2349_ = lean_unbox(v_skipConstInApp_2342_);
v_skipInstances_boxed_2350_ = lean_unbox(v_skipInstances_2343_);
v_res_2351_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(v_inst_2336_, v_inst_2337_, v_inst_2338_, v_pre_2339_, v_post_2340_, v_usedLetOnly_boxed_2348_, v_skipConstInApp_boxed_2349_, v_skipInstances_boxed_2350_, v_x_2344_, v_x_2345_, v_a_2346_, v_a_2347_);
lean_dec(v_a_2346_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(lean_object* v_inst_2352_, lean_object* v_inst_2353_, lean_object* v_inst_2354_, lean_object* v_pre_2355_, lean_object* v_post_2356_, uint8_t v_usedLetOnly_2357_, uint8_t v_skipConstInApp_2358_, uint8_t v_skipInstances_2359_, lean_object* v_x_2360_, lean_object* v_x_2361_, lean_object* v_fvars_2362_, lean_object* v_e_2363_, lean_object* v_a_2364_){
_start:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___f_2369_; lean_object* v___f_2370_; lean_object* v___x_2371_; 
v___x_2365_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2366_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref(v_inst_2352_);
v___x_2367_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2360_, v___x_2365_, v___x_2366_, v_inst_2352_);
v___x_2368_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2360_, v___x_2365_, v___x_2366_);
lean_inc_ref_n(v_inst_2354_, 2);
lean_inc_ref(v___x_2368_);
v___f_2369_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2369_, 0, v___x_2368_);
lean_closure_set(v___f_2369_, 1, v_inst_2354_);
v___f_2370_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2370_, 0, v___x_2368_);
lean_closure_set(v___f_2370_, 1, v_inst_2354_);
v___x_2371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2371_, 0, v___f_2369_);
lean_ctor_set(v___x_2371_, 1, v___f_2370_);
if (lean_obj_tag(v_e_2363_) == 7)
{
lean_object* v_binderName_2372_; lean_object* v_binderType_2373_; lean_object* v_body_2374_; uint8_t v_binderInfo_2375_; lean_object* v_toBind_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___f_2380_; lean_object* v___x_2381_; lean_object* v___f_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v_binderName_2372_ = lean_ctor_get(v_e_2363_, 0);
lean_inc(v_binderName_2372_);
v_binderType_2373_ = lean_ctor_get(v_e_2363_, 1);
lean_inc_ref(v_binderType_2373_);
v_body_2374_ = lean_ctor_get(v_e_2363_, 2);
lean_inc_ref(v_body_2374_);
v_binderInfo_2375_ = lean_ctor_get_uint8(v_e_2363_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2363_, 3);
v_toBind_2376_ = lean_ctor_get(v_inst_2352_, 1);
lean_inc(v_toBind_2376_);
v___x_2377_ = lean_box(v_usedLetOnly_2357_);
v___x_2378_ = lean_box(v_skipConstInApp_2358_);
v___x_2379_ = lean_box(v_skipInstances_2359_);
lean_inc(v_x_2361_);
lean_inc(v_post_2356_);
lean_inc(v_pre_2355_);
lean_inc_ref(v_inst_2354_);
lean_inc(v_inst_2353_);
lean_inc_ref(v_inst_2352_);
lean_inc_ref(v_fvars_2362_);
v___f_2380_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2380_, 0, v_fvars_2362_);
lean_closure_set(v___f_2380_, 1, v_inst_2352_);
lean_closure_set(v___f_2380_, 2, v_inst_2353_);
lean_closure_set(v___f_2380_, 3, v_inst_2354_);
lean_closure_set(v___f_2380_, 4, v_pre_2355_);
lean_closure_set(v___f_2380_, 5, v_post_2356_);
lean_closure_set(v___f_2380_, 6, v___x_2377_);
lean_closure_set(v___f_2380_, 7, v___x_2378_);
lean_closure_set(v___f_2380_, 8, v___x_2379_);
lean_closure_set(v___f_2380_, 9, v_x_2360_);
lean_closure_set(v___f_2380_, 10, v_x_2361_);
lean_closure_set(v___f_2380_, 11, v_body_2374_);
v___x_2381_ = lean_box(v_binderInfo_2375_);
lean_inc(v_a_2364_);
v___f_2382_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2382_, 0, v___x_2371_);
lean_closure_set(v___f_2382_, 1, v___x_2367_);
lean_closure_set(v___f_2382_, 2, v_binderName_2372_);
lean_closure_set(v___f_2382_, 3, v___x_2381_);
lean_closure_set(v___f_2382_, 4, v___f_2380_);
lean_closure_set(v___f_2382_, 5, v_a_2364_);
v___x_2383_ = lean_expr_instantiate_rev(v_binderType_2373_, v_fvars_2362_);
lean_dec_ref(v_fvars_2362_);
lean_dec_ref(v_binderType_2373_);
v___x_2384_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2352_, v_inst_2353_, v_inst_2354_, v_pre_2355_, v_post_2356_, v_usedLetOnly_2357_, v_skipConstInApp_2358_, v_skipInstances_2359_, v_x_2360_, v_x_2361_, v___x_2383_, v_a_2364_);
v___x_2385_ = lean_apply_4(v_toBind_2376_, lean_box(0), lean_box(0), v___x_2384_, v___f_2382_);
return v___x_2385_;
}
else
{
lean_object* v_toBind_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___f_2390_; lean_object* v___x_2391_; lean_object* v___f_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
lean_dec_ref_known(v___x_2371_, 2);
lean_dec_ref(v___x_2367_);
v_toBind_2386_ = lean_ctor_get(v_inst_2352_, 1);
lean_inc_n(v_toBind_2386_, 2);
v___x_2387_ = lean_box(v_usedLetOnly_2357_);
v___x_2388_ = lean_box(v_skipConstInApp_2358_);
v___x_2389_ = lean_box(v_skipInstances_2359_);
lean_inc(v_a_2364_);
lean_inc(v_x_2361_);
lean_inc(v_post_2356_);
lean_inc(v_pre_2355_);
lean_inc_ref(v_inst_2354_);
lean_inc_n(v_inst_2353_, 2);
lean_inc_ref(v_inst_2352_);
v___f_2390_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2390_, 0, v_inst_2352_);
lean_closure_set(v___f_2390_, 1, v_inst_2353_);
lean_closure_set(v___f_2390_, 2, v_inst_2354_);
lean_closure_set(v___f_2390_, 3, v_pre_2355_);
lean_closure_set(v___f_2390_, 4, v_post_2356_);
lean_closure_set(v___f_2390_, 5, v___x_2387_);
lean_closure_set(v___f_2390_, 6, v___x_2388_);
lean_closure_set(v___f_2390_, 7, v___x_2389_);
lean_closure_set(v___f_2390_, 8, v_x_2360_);
lean_closure_set(v___f_2390_, 9, v_x_2361_);
lean_closure_set(v___f_2390_, 10, v_a_2364_);
v___x_2391_ = lean_box(v_usedLetOnly_2357_);
lean_inc_ref(v_fvars_2362_);
v___f_2392_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_2392_, 0, v_fvars_2362_);
lean_closure_set(v___f_2392_, 1, v___x_2391_);
lean_closure_set(v___f_2392_, 2, v_inst_2353_);
lean_closure_set(v___f_2392_, 3, v_toBind_2386_);
lean_closure_set(v___f_2392_, 4, v___f_2390_);
v___x_2393_ = lean_expr_instantiate_rev(v_e_2363_, v_fvars_2362_);
lean_dec_ref(v_fvars_2362_);
lean_dec_ref(v_e_2363_);
v___x_2394_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2352_, v_inst_2353_, v_inst_2354_, v_pre_2355_, v_post_2356_, v_usedLetOnly_2357_, v_skipConstInApp_2358_, v_skipInstances_2359_, v_x_2360_, v_x_2361_, v___x_2393_, v_a_2364_);
v___x_2395_ = lean_apply_4(v_toBind_2386_, lean_box(0), lean_box(0), v___x_2394_, v___f_2392_);
return v___x_2395_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(lean_object* v_fvars_2396_, lean_object* v_inst_2397_, lean_object* v_inst_2398_, lean_object* v_inst_2399_, lean_object* v_pre_2400_, lean_object* v_post_2401_, uint8_t v_usedLetOnly_2402_, uint8_t v_skipConstInApp_2403_, uint8_t v_skipInstances_2404_, lean_object* v_x_2405_, lean_object* v_x_2406_, lean_object* v_body_2407_, lean_object* v_x_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v___x_2410_; lean_object* v___x_2411_; 
v___x_2410_ = lean_array_push(v_fvars_2396_, v_x_2408_);
v___x_2411_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2397_, v_inst_2398_, v_inst_2399_, v_pre_2400_, v_post_2401_, v_usedLetOnly_2402_, v_skipConstInApp_2403_, v_skipInstances_2404_, v_x_2405_, v_x_2406_, v___x_2410_, v_body_2407_, v___y_2409_);
return v___x_2411_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed(lean_object* v_fvars_2412_, lean_object* v_inst_2413_, lean_object* v_inst_2414_, lean_object* v_inst_2415_, lean_object* v_pre_2416_, lean_object* v_post_2417_, lean_object* v_usedLetOnly_2418_, lean_object* v_skipConstInApp_2419_, lean_object* v_skipInstances_2420_, lean_object* v_x_2421_, lean_object* v_x_2422_, lean_object* v_body_2423_, lean_object* v_x_2424_, lean_object* v___y_2425_){
_start:
{
uint8_t v_usedLetOnly_boxed_2426_; uint8_t v_skipConstInApp_boxed_2427_; uint8_t v_skipInstances_boxed_2428_; lean_object* v_res_2429_; 
v_usedLetOnly_boxed_2426_ = lean_unbox(v_usedLetOnly_2418_);
v_skipConstInApp_boxed_2427_ = lean_unbox(v_skipConstInApp_2419_);
v_skipInstances_boxed_2428_ = lean_unbox(v_skipInstances_2420_);
v_res_2429_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(v_fvars_2412_, v_inst_2413_, v_inst_2414_, v_inst_2415_, v_pre_2416_, v_post_2417_, v_usedLetOnly_boxed_2426_, v_skipConstInApp_boxed_2427_, v_skipInstances_boxed_2428_, v_x_2421_, v_x_2422_, v_body_2423_, v_x_2424_, v___y_2425_);
lean_dec(v___y_2425_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(lean_object* v_inst_2430_, lean_object* v_inst_2431_, lean_object* v_inst_2432_, lean_object* v_pre_2433_, lean_object* v_post_2434_, uint8_t v_usedLetOnly_2435_, uint8_t v_skipConstInApp_2436_, uint8_t v_skipInstances_2437_, lean_object* v_x_2438_, lean_object* v_x_2439_, lean_object* v_fvars_2440_, lean_object* v_e_2441_, lean_object* v_a_2442_){
_start:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___f_2447_; lean_object* v___f_2448_; lean_object* v___x_2449_; 
v___x_2443_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2444_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref(v_inst_2430_);
v___x_2445_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2438_, v___x_2443_, v___x_2444_, v_inst_2430_);
v___x_2446_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2438_, v___x_2443_, v___x_2444_);
lean_inc_ref_n(v_inst_2432_, 2);
lean_inc_ref(v___x_2446_);
v___f_2447_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2447_, 0, v___x_2446_);
lean_closure_set(v___f_2447_, 1, v_inst_2432_);
v___f_2448_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2448_, 0, v___x_2446_);
lean_closure_set(v___f_2448_, 1, v_inst_2432_);
v___x_2449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2449_, 0, v___f_2447_);
lean_ctor_set(v___x_2449_, 1, v___f_2448_);
if (lean_obj_tag(v_e_2441_) == 6)
{
lean_object* v_binderName_2450_; lean_object* v_binderType_2451_; lean_object* v_body_2452_; uint8_t v_binderInfo_2453_; lean_object* v_toBind_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___f_2458_; lean_object* v___x_2459_; lean_object* v___f_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v_binderName_2450_ = lean_ctor_get(v_e_2441_, 0);
lean_inc(v_binderName_2450_);
v_binderType_2451_ = lean_ctor_get(v_e_2441_, 1);
lean_inc_ref(v_binderType_2451_);
v_body_2452_ = lean_ctor_get(v_e_2441_, 2);
lean_inc_ref(v_body_2452_);
v_binderInfo_2453_ = lean_ctor_get_uint8(v_e_2441_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2441_, 3);
v_toBind_2454_ = lean_ctor_get(v_inst_2430_, 1);
lean_inc(v_toBind_2454_);
v___x_2455_ = lean_box(v_usedLetOnly_2435_);
v___x_2456_ = lean_box(v_skipConstInApp_2436_);
v___x_2457_ = lean_box(v_skipInstances_2437_);
lean_inc(v_x_2439_);
lean_inc(v_post_2434_);
lean_inc(v_pre_2433_);
lean_inc_ref(v_inst_2432_);
lean_inc(v_inst_2431_);
lean_inc_ref(v_inst_2430_);
lean_inc_ref(v_fvars_2440_);
v___f_2458_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2458_, 0, v_fvars_2440_);
lean_closure_set(v___f_2458_, 1, v_inst_2430_);
lean_closure_set(v___f_2458_, 2, v_inst_2431_);
lean_closure_set(v___f_2458_, 3, v_inst_2432_);
lean_closure_set(v___f_2458_, 4, v_pre_2433_);
lean_closure_set(v___f_2458_, 5, v_post_2434_);
lean_closure_set(v___f_2458_, 6, v___x_2455_);
lean_closure_set(v___f_2458_, 7, v___x_2456_);
lean_closure_set(v___f_2458_, 8, v___x_2457_);
lean_closure_set(v___f_2458_, 9, v_x_2438_);
lean_closure_set(v___f_2458_, 10, v_x_2439_);
lean_closure_set(v___f_2458_, 11, v_body_2452_);
v___x_2459_ = lean_box(v_binderInfo_2453_);
lean_inc(v_a_2442_);
v___f_2460_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2460_, 0, v___x_2449_);
lean_closure_set(v___f_2460_, 1, v___x_2445_);
lean_closure_set(v___f_2460_, 2, v_binderName_2450_);
lean_closure_set(v___f_2460_, 3, v___x_2459_);
lean_closure_set(v___f_2460_, 4, v___f_2458_);
lean_closure_set(v___f_2460_, 5, v_a_2442_);
v___x_2461_ = lean_expr_instantiate_rev(v_binderType_2451_, v_fvars_2440_);
lean_dec_ref(v_fvars_2440_);
lean_dec_ref(v_binderType_2451_);
v___x_2462_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2430_, v_inst_2431_, v_inst_2432_, v_pre_2433_, v_post_2434_, v_usedLetOnly_2435_, v_skipConstInApp_2436_, v_skipInstances_2437_, v_x_2438_, v_x_2439_, v___x_2461_, v_a_2442_);
v___x_2463_ = lean_apply_4(v_toBind_2454_, lean_box(0), lean_box(0), v___x_2462_, v___f_2460_);
return v___x_2463_;
}
else
{
lean_object* v_toBind_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___f_2468_; lean_object* v___x_2469_; lean_object* v___f_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
lean_dec_ref_known(v___x_2449_, 2);
lean_dec_ref(v___x_2445_);
v_toBind_2464_ = lean_ctor_get(v_inst_2430_, 1);
lean_inc_n(v_toBind_2464_, 2);
v___x_2465_ = lean_box(v_usedLetOnly_2435_);
v___x_2466_ = lean_box(v_skipConstInApp_2436_);
v___x_2467_ = lean_box(v_skipInstances_2437_);
lean_inc(v_a_2442_);
lean_inc(v_x_2439_);
lean_inc(v_post_2434_);
lean_inc(v_pre_2433_);
lean_inc_ref(v_inst_2432_);
lean_inc_n(v_inst_2431_, 2);
lean_inc_ref(v_inst_2430_);
v___f_2468_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2468_, 0, v_inst_2430_);
lean_closure_set(v___f_2468_, 1, v_inst_2431_);
lean_closure_set(v___f_2468_, 2, v_inst_2432_);
lean_closure_set(v___f_2468_, 3, v_pre_2433_);
lean_closure_set(v___f_2468_, 4, v_post_2434_);
lean_closure_set(v___f_2468_, 5, v___x_2465_);
lean_closure_set(v___f_2468_, 6, v___x_2466_);
lean_closure_set(v___f_2468_, 7, v___x_2467_);
lean_closure_set(v___f_2468_, 8, v_x_2438_);
lean_closure_set(v___f_2468_, 9, v_x_2439_);
lean_closure_set(v___f_2468_, 10, v_a_2442_);
v___x_2469_ = lean_box(v_usedLetOnly_2435_);
lean_inc_ref(v_fvars_2440_);
v___f_2470_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_2470_, 0, v_fvars_2440_);
lean_closure_set(v___f_2470_, 1, v___x_2469_);
lean_closure_set(v___f_2470_, 2, v_inst_2431_);
lean_closure_set(v___f_2470_, 3, v_toBind_2464_);
lean_closure_set(v___f_2470_, 4, v___f_2468_);
v___x_2471_ = lean_expr_instantiate_rev(v_e_2441_, v_fvars_2440_);
lean_dec_ref(v_fvars_2440_);
lean_dec_ref(v_e_2441_);
v___x_2472_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2430_, v_inst_2431_, v_inst_2432_, v_pre_2433_, v_post_2434_, v_usedLetOnly_2435_, v_skipConstInApp_2436_, v_skipInstances_2437_, v_x_2438_, v_x_2439_, v___x_2471_, v_a_2442_);
v___x_2473_ = lean_apply_4(v_toBind_2464_, lean_box(0), lean_box(0), v___x_2472_, v___f_2470_);
return v___x_2473_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(lean_object* v_fvars_2474_, lean_object* v_inst_2475_, lean_object* v_inst_2476_, lean_object* v_inst_2477_, lean_object* v_pre_2478_, lean_object* v_post_2479_, uint8_t v_usedLetOnly_2480_, uint8_t v_skipConstInApp_2481_, uint8_t v_skipInstances_2482_, lean_object* v_x_2483_, lean_object* v_x_2484_, lean_object* v_body_2485_, lean_object* v_x_2486_, lean_object* v___y_2487_){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2488_ = lean_array_push(v_fvars_2474_, v_x_2486_);
v___x_2489_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2475_, v_inst_2476_, v_inst_2477_, v_pre_2478_, v_post_2479_, v_usedLetOnly_2480_, v_skipConstInApp_2481_, v_skipInstances_2482_, v_x_2483_, v_x_2484_, v___x_2488_, v_body_2485_, v___y_2487_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed(lean_object* v_fvars_2490_, lean_object* v_inst_2491_, lean_object* v_inst_2492_, lean_object* v_inst_2493_, lean_object* v_pre_2494_, lean_object* v_post_2495_, lean_object* v_usedLetOnly_2496_, lean_object* v_skipConstInApp_2497_, lean_object* v_skipInstances_2498_, lean_object* v_x_2499_, lean_object* v_x_2500_, lean_object* v_body_2501_, lean_object* v_x_2502_, lean_object* v___y_2503_){
_start:
{
uint8_t v_usedLetOnly_boxed_2504_; uint8_t v_skipConstInApp_boxed_2505_; uint8_t v_skipInstances_boxed_2506_; lean_object* v_res_2507_; 
v_usedLetOnly_boxed_2504_ = lean_unbox(v_usedLetOnly_2496_);
v_skipConstInApp_boxed_2505_ = lean_unbox(v_skipConstInApp_2497_);
v_skipInstances_boxed_2506_ = lean_unbox(v_skipInstances_2498_);
v_res_2507_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(v_fvars_2490_, v_inst_2491_, v_inst_2492_, v_inst_2493_, v_pre_2494_, v_post_2495_, v_usedLetOnly_boxed_2504_, v_skipConstInApp_boxed_2505_, v_skipInstances_boxed_2506_, v_x_2499_, v_x_2500_, v_body_2501_, v_x_2502_, v___y_2503_);
lean_dec(v___y_2503_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(lean_object* v___x_2508_, lean_object* v___x_2509_, lean_object* v_declName_2510_, lean_object* v___f_2511_, uint8_t v_nondep_2512_, lean_object* v_a_2513_, lean_object* v_value_2514_, lean_object* v_fvars_2515_, lean_object* v_inst_2516_, lean_object* v_inst_2517_, lean_object* v_inst_2518_, lean_object* v_pre_2519_, lean_object* v_post_2520_, uint8_t v_usedLetOnly_2521_, uint8_t v_skipConstInApp_2522_, uint8_t v_skipInstances_2523_, lean_object* v_x_2524_, lean_object* v_x_2525_, lean_object* v_toBind_2526_, lean_object* v_a_2527_){
_start:
{
lean_object* v___x_2528_; lean_object* v___f_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2528_ = lean_box(v_nondep_2512_);
lean_inc(v_a_2513_);
v___f_2529_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_2529_, 0, v___x_2508_);
lean_closure_set(v___f_2529_, 1, v___x_2509_);
lean_closure_set(v___f_2529_, 2, v_declName_2510_);
lean_closure_set(v___f_2529_, 3, v_a_2527_);
lean_closure_set(v___f_2529_, 4, v___f_2511_);
lean_closure_set(v___f_2529_, 5, v___x_2528_);
lean_closure_set(v___f_2529_, 6, v_a_2513_);
v___x_2530_ = lean_expr_instantiate_rev(v_value_2514_, v_fvars_2515_);
v___x_2531_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2516_, v_inst_2517_, v_inst_2518_, v_pre_2519_, v_post_2520_, v_usedLetOnly_2521_, v_skipConstInApp_2522_, v_skipInstances_2523_, v_x_2524_, v_x_2525_, v___x_2530_, v_a_2513_);
v___x_2532_ = lean_apply_4(v_toBind_2526_, lean_box(0), lean_box(0), v___x_2531_, v___f_2529_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___x_2533_ = _args[0];
lean_object* v___x_2534_ = _args[1];
lean_object* v_declName_2535_ = _args[2];
lean_object* v___f_2536_ = _args[3];
lean_object* v_nondep_2537_ = _args[4];
lean_object* v_a_2538_ = _args[5];
lean_object* v_value_2539_ = _args[6];
lean_object* v_fvars_2540_ = _args[7];
lean_object* v_inst_2541_ = _args[8];
lean_object* v_inst_2542_ = _args[9];
lean_object* v_inst_2543_ = _args[10];
lean_object* v_pre_2544_ = _args[11];
lean_object* v_post_2545_ = _args[12];
lean_object* v_usedLetOnly_2546_ = _args[13];
lean_object* v_skipConstInApp_2547_ = _args[14];
lean_object* v_skipInstances_2548_ = _args[15];
lean_object* v_x_2549_ = _args[16];
lean_object* v_x_2550_ = _args[17];
lean_object* v_toBind_2551_ = _args[18];
lean_object* v_a_2552_ = _args[19];
_start:
{
uint8_t v_nondep_3850__boxed_2553_; uint8_t v_usedLetOnly_boxed_2554_; uint8_t v_skipConstInApp_boxed_2555_; uint8_t v_skipInstances_boxed_2556_; lean_object* v_res_2557_; 
v_nondep_3850__boxed_2553_ = lean_unbox(v_nondep_2537_);
v_usedLetOnly_boxed_2554_ = lean_unbox(v_usedLetOnly_2546_);
v_skipConstInApp_boxed_2555_ = lean_unbox(v_skipConstInApp_2547_);
v_skipInstances_boxed_2556_ = lean_unbox(v_skipInstances_2548_);
v_res_2557_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(v___x_2533_, v___x_2534_, v_declName_2535_, v___f_2536_, v_nondep_3850__boxed_2553_, v_a_2538_, v_value_2539_, v_fvars_2540_, v_inst_2541_, v_inst_2542_, v_inst_2543_, v_pre_2544_, v_post_2545_, v_usedLetOnly_boxed_2554_, v_skipConstInApp_boxed_2555_, v_skipInstances_boxed_2556_, v_x_2549_, v_x_2550_, v_toBind_2551_, v_a_2552_);
lean_dec_ref(v_fvars_2540_);
lean_dec_ref(v_value_2539_);
lean_dec(v_a_2538_);
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(lean_object* v_inst_2558_, lean_object* v_inst_2559_, lean_object* v_inst_2560_, lean_object* v_pre_2561_, lean_object* v_post_2562_, uint8_t v_usedLetOnly_2563_, uint8_t v_skipConstInApp_2564_, uint8_t v_skipInstances_2565_, lean_object* v_x_2566_, lean_object* v_x_2567_, lean_object* v_fvars_2568_, lean_object* v_e_2569_, lean_object* v_a_2570_){
_start:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___f_2575_; lean_object* v___f_2576_; lean_object* v___x_2577_; 
v___x_2571_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2572_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref(v_inst_2558_);
v___x_2573_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2566_, v___x_2571_, v___x_2572_, v_inst_2558_);
v___x_2574_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2566_, v___x_2571_, v___x_2572_);
lean_inc_ref_n(v_inst_2560_, 2);
lean_inc_ref(v___x_2574_);
v___f_2575_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2575_, 0, v___x_2574_);
lean_closure_set(v___f_2575_, 1, v_inst_2560_);
v___f_2576_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2576_, 0, v___x_2574_);
lean_closure_set(v___f_2576_, 1, v_inst_2560_);
v___x_2577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___f_2575_);
lean_ctor_set(v___x_2577_, 1, v___f_2576_);
if (lean_obj_tag(v_e_2569_) == 8)
{
lean_object* v_declName_2578_; lean_object* v_type_2579_; lean_object* v_value_2580_; lean_object* v_body_2581_; uint8_t v_nondep_2582_; lean_object* v_toBind_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___f_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___f_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v_declName_2578_ = lean_ctor_get(v_e_2569_, 0);
lean_inc(v_declName_2578_);
v_type_2579_ = lean_ctor_get(v_e_2569_, 1);
lean_inc_ref(v_type_2579_);
v_value_2580_ = lean_ctor_get(v_e_2569_, 2);
lean_inc_ref(v_value_2580_);
v_body_2581_ = lean_ctor_get(v_e_2569_, 3);
lean_inc_ref(v_body_2581_);
v_nondep_2582_ = lean_ctor_get_uint8(v_e_2569_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2569_, 4);
v_toBind_2583_ = lean_ctor_get(v_inst_2558_, 1);
lean_inc_n(v_toBind_2583_, 2);
v___x_2584_ = lean_box(v_usedLetOnly_2563_);
v___x_2585_ = lean_box(v_skipConstInApp_2564_);
v___x_2586_ = lean_box(v_skipInstances_2565_);
lean_inc_n(v_x_2567_, 2);
lean_inc_n(v_post_2562_, 2);
lean_inc_n(v_pre_2561_, 2);
lean_inc_ref_n(v_inst_2560_, 2);
lean_inc_n(v_inst_2559_, 2);
lean_inc_ref_n(v_inst_2558_, 2);
lean_inc_ref_n(v_fvars_2568_, 2);
v___f_2587_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2587_, 0, v_fvars_2568_);
lean_closure_set(v___f_2587_, 1, v_inst_2558_);
lean_closure_set(v___f_2587_, 2, v_inst_2559_);
lean_closure_set(v___f_2587_, 3, v_inst_2560_);
lean_closure_set(v___f_2587_, 4, v_pre_2561_);
lean_closure_set(v___f_2587_, 5, v_post_2562_);
lean_closure_set(v___f_2587_, 6, v___x_2584_);
lean_closure_set(v___f_2587_, 7, v___x_2585_);
lean_closure_set(v___f_2587_, 8, v___x_2586_);
lean_closure_set(v___f_2587_, 9, v_x_2566_);
lean_closure_set(v___f_2587_, 10, v_x_2567_);
lean_closure_set(v___f_2587_, 11, v_body_2581_);
v___x_2588_ = lean_box(v_nondep_2582_);
v___x_2589_ = lean_box(v_usedLetOnly_2563_);
v___x_2590_ = lean_box(v_skipConstInApp_2564_);
v___x_2591_ = lean_box(v_skipInstances_2565_);
lean_inc(v_a_2570_);
v___f_2592_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed), 20, 19);
lean_closure_set(v___f_2592_, 0, v___x_2577_);
lean_closure_set(v___f_2592_, 1, v___x_2573_);
lean_closure_set(v___f_2592_, 2, v_declName_2578_);
lean_closure_set(v___f_2592_, 3, v___f_2587_);
lean_closure_set(v___f_2592_, 4, v___x_2588_);
lean_closure_set(v___f_2592_, 5, v_a_2570_);
lean_closure_set(v___f_2592_, 6, v_value_2580_);
lean_closure_set(v___f_2592_, 7, v_fvars_2568_);
lean_closure_set(v___f_2592_, 8, v_inst_2558_);
lean_closure_set(v___f_2592_, 9, v_inst_2559_);
lean_closure_set(v___f_2592_, 10, v_inst_2560_);
lean_closure_set(v___f_2592_, 11, v_pre_2561_);
lean_closure_set(v___f_2592_, 12, v_post_2562_);
lean_closure_set(v___f_2592_, 13, v___x_2589_);
lean_closure_set(v___f_2592_, 14, v___x_2590_);
lean_closure_set(v___f_2592_, 15, v___x_2591_);
lean_closure_set(v___f_2592_, 16, v_x_2566_);
lean_closure_set(v___f_2592_, 17, v_x_2567_);
lean_closure_set(v___f_2592_, 18, v_toBind_2583_);
v___x_2593_ = lean_expr_instantiate_rev(v_type_2579_, v_fvars_2568_);
lean_dec_ref(v_fvars_2568_);
lean_dec_ref(v_type_2579_);
v___x_2594_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2558_, v_inst_2559_, v_inst_2560_, v_pre_2561_, v_post_2562_, v_usedLetOnly_2563_, v_skipConstInApp_2564_, v_skipInstances_2565_, v_x_2566_, v_x_2567_, v___x_2593_, v_a_2570_);
v___x_2595_ = lean_apply_4(v_toBind_2583_, lean_box(0), lean_box(0), v___x_2594_, v___f_2592_);
return v___x_2595_;
}
else
{
lean_object* v_toBind_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___f_2600_; lean_object* v___x_2601_; lean_object* v___f_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
lean_dec_ref_known(v___x_2577_, 2);
lean_dec_ref(v___x_2573_);
v_toBind_2596_ = lean_ctor_get(v_inst_2558_, 1);
lean_inc_n(v_toBind_2596_, 2);
v___x_2597_ = lean_box(v_usedLetOnly_2563_);
v___x_2598_ = lean_box(v_skipConstInApp_2564_);
v___x_2599_ = lean_box(v_skipInstances_2565_);
lean_inc(v_a_2570_);
lean_inc(v_x_2567_);
lean_inc(v_post_2562_);
lean_inc(v_pre_2561_);
lean_inc_ref(v_inst_2560_);
lean_inc_n(v_inst_2559_, 2);
lean_inc_ref(v_inst_2558_);
v___f_2600_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2600_, 0, v_inst_2558_);
lean_closure_set(v___f_2600_, 1, v_inst_2559_);
lean_closure_set(v___f_2600_, 2, v_inst_2560_);
lean_closure_set(v___f_2600_, 3, v_pre_2561_);
lean_closure_set(v___f_2600_, 4, v_post_2562_);
lean_closure_set(v___f_2600_, 5, v___x_2597_);
lean_closure_set(v___f_2600_, 6, v___x_2598_);
lean_closure_set(v___f_2600_, 7, v___x_2599_);
lean_closure_set(v___f_2600_, 8, v_x_2566_);
lean_closure_set(v___f_2600_, 9, v_x_2567_);
lean_closure_set(v___f_2600_, 10, v_a_2570_);
v___x_2601_ = lean_box(v_usedLetOnly_2563_);
lean_inc_ref(v_fvars_2568_);
v___f_2602_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_2602_, 0, v_fvars_2568_);
lean_closure_set(v___f_2602_, 1, v___x_2601_);
lean_closure_set(v___f_2602_, 2, v_inst_2559_);
lean_closure_set(v___f_2602_, 3, v_toBind_2596_);
lean_closure_set(v___f_2602_, 4, v___f_2600_);
v___x_2603_ = lean_expr_instantiate_rev(v_e_2569_, v_fvars_2568_);
lean_dec_ref(v_fvars_2568_);
lean_dec_ref(v_e_2569_);
v___x_2604_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2558_, v_inst_2559_, v_inst_2560_, v_pre_2561_, v_post_2562_, v_usedLetOnly_2563_, v_skipConstInApp_2564_, v_skipInstances_2565_, v_x_2566_, v_x_2567_, v___x_2603_, v_a_2570_);
v___x_2605_ = lean_apply_4(v_toBind_2596_, lean_box(0), lean_box(0), v___x_2604_, v___f_2602_);
return v___x_2605_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(lean_object* v_expr_2606_, lean_object* v_data_2607_, lean_object* v_inst_2608_, lean_object* v_inst_2609_, lean_object* v_inst_2610_, lean_object* v_pre_2611_, lean_object* v_post_2612_, uint8_t v_usedLetOnly_2613_, uint8_t v_skipConstInApp_2614_, uint8_t v_skipInstances_2615_, lean_object* v_x_2616_, lean_object* v_x_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v_a_2620_){
_start:
{
size_t v___x_2621_; size_t v___x_2622_; uint8_t v___x_2623_; 
v___x_2621_ = lean_ptr_addr(v_expr_2606_);
v___x_2622_ = lean_ptr_addr(v_a_2620_);
v___x_2623_ = lean_usize_dec_eq(v___x_2621_, v___x_2622_);
if (v___x_2623_ == 0)
{
lean_object* v___x_2624_; lean_object* v___x_2625_; 
lean_dec_ref(v___y_2619_);
v___x_2624_ = l_Lean_Expr_mdata___override(v_data_2607_, v_a_2620_);
v___x_2625_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2608_, v_inst_2609_, v_inst_2610_, v_pre_2611_, v_post_2612_, v_usedLetOnly_2613_, v_skipConstInApp_2614_, v_skipInstances_2615_, v_x_2616_, v_x_2617_, v___x_2624_, v___y_2618_);
return v___x_2625_;
}
else
{
lean_object* v___x_2626_; 
lean_dec_ref(v_a_2620_);
lean_dec(v_data_2607_);
v___x_2626_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2608_, v_inst_2609_, v_inst_2610_, v_pre_2611_, v_post_2612_, v_usedLetOnly_2613_, v_skipConstInApp_2614_, v_skipInstances_2615_, v_x_2616_, v_x_2617_, v___y_2619_, v___y_2618_);
return v___x_2626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed(lean_object* v_expr_2627_, lean_object* v_data_2628_, lean_object* v_inst_2629_, lean_object* v_inst_2630_, lean_object* v_inst_2631_, lean_object* v_pre_2632_, lean_object* v_post_2633_, lean_object* v_usedLetOnly_2634_, lean_object* v_skipConstInApp_2635_, lean_object* v_skipInstances_2636_, lean_object* v_x_2637_, lean_object* v_x_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v_a_2641_){
_start:
{
uint8_t v_usedLetOnly_boxed_2642_; uint8_t v_skipConstInApp_boxed_2643_; uint8_t v_skipInstances_boxed_2644_; lean_object* v_res_2645_; 
v_usedLetOnly_boxed_2642_ = lean_unbox(v_usedLetOnly_2634_);
v_skipConstInApp_boxed_2643_ = lean_unbox(v_skipConstInApp_2635_);
v_skipInstances_boxed_2644_ = lean_unbox(v_skipInstances_2636_);
v_res_2645_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(v_expr_2627_, v_data_2628_, v_inst_2629_, v_inst_2630_, v_inst_2631_, v_pre_2632_, v_post_2633_, v_usedLetOnly_boxed_2642_, v_skipConstInApp_boxed_2643_, v_skipInstances_boxed_2644_, v_x_2637_, v_x_2638_, v___y_2639_, v___y_2640_, v_a_2641_);
lean_dec(v___y_2639_);
lean_dec_ref(v_expr_2627_);
return v_res_2645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(lean_object* v_struct_2646_, lean_object* v_typeName_2647_, lean_object* v_idx_2648_, lean_object* v_inst_2649_, lean_object* v_inst_2650_, lean_object* v_inst_2651_, lean_object* v_pre_2652_, lean_object* v_post_2653_, uint8_t v_usedLetOnly_2654_, uint8_t v_skipConstInApp_2655_, uint8_t v_skipInstances_2656_, lean_object* v_x_2657_, lean_object* v_x_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v_a_2661_){
_start:
{
size_t v___x_2662_; size_t v___x_2663_; uint8_t v___x_2664_; 
v___x_2662_ = lean_ptr_addr(v_struct_2646_);
v___x_2663_ = lean_ptr_addr(v_a_2661_);
v___x_2664_ = lean_usize_dec_eq(v___x_2662_, v___x_2663_);
if (v___x_2664_ == 0)
{
lean_object* v___x_2665_; lean_object* v___x_2666_; 
lean_dec_ref(v___y_2660_);
v___x_2665_ = l_Lean_Expr_proj___override(v_typeName_2647_, v_idx_2648_, v_a_2661_);
v___x_2666_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2649_, v_inst_2650_, v_inst_2651_, v_pre_2652_, v_post_2653_, v_usedLetOnly_2654_, v_skipConstInApp_2655_, v_skipInstances_2656_, v_x_2657_, v_x_2658_, v___x_2665_, v___y_2659_);
return v___x_2666_;
}
else
{
lean_object* v___x_2667_; 
lean_dec_ref(v_a_2661_);
lean_dec(v_idx_2648_);
lean_dec(v_typeName_2647_);
v___x_2667_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2649_, v_inst_2650_, v_inst_2651_, v_pre_2652_, v_post_2653_, v_usedLetOnly_2654_, v_skipConstInApp_2655_, v_skipInstances_2656_, v_x_2657_, v_x_2658_, v___y_2660_, v___y_2659_);
return v___x_2667_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed(lean_object* v_struct_2668_, lean_object* v_typeName_2669_, lean_object* v_idx_2670_, lean_object* v_inst_2671_, lean_object* v_inst_2672_, lean_object* v_inst_2673_, lean_object* v_pre_2674_, lean_object* v_post_2675_, lean_object* v_usedLetOnly_2676_, lean_object* v_skipConstInApp_2677_, lean_object* v_skipInstances_2678_, lean_object* v_x_2679_, lean_object* v_x_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v_a_2683_){
_start:
{
uint8_t v_usedLetOnly_boxed_2684_; uint8_t v_skipConstInApp_boxed_2685_; uint8_t v_skipInstances_boxed_2686_; lean_object* v_res_2687_; 
v_usedLetOnly_boxed_2684_ = lean_unbox(v_usedLetOnly_2676_);
v_skipConstInApp_boxed_2685_ = lean_unbox(v_skipConstInApp_2677_);
v_skipInstances_boxed_2686_ = lean_unbox(v_skipInstances_2678_);
v_res_2687_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(v_struct_2668_, v_typeName_2669_, v_idx_2670_, v_inst_2671_, v_inst_2672_, v_inst_2673_, v_pre_2674_, v_post_2675_, v_usedLetOnly_boxed_2684_, v_skipConstInApp_boxed_2685_, v_skipInstances_boxed_2686_, v_x_2679_, v_x_2680_, v___y_2681_, v___y_2682_, v_a_2683_);
lean_dec(v___y_2681_);
lean_dec_ref(v_struct_2668_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(lean_object* v_toApplicative_2688_, lean_object* v_inst_2689_, lean_object* v_inst_2690_, lean_object* v_inst_2691_, lean_object* v_pre_2692_, lean_object* v_post_2693_, uint8_t v_usedLetOnly_2694_, uint8_t v_skipConstInApp_2695_, uint8_t v_skipInstances_2696_, lean_object* v_x_2697_, lean_object* v_x_2698_, lean_object* v___y_2699_, lean_object* v___f_2700_, lean_object* v_toBind_2701_, lean_object* v_e_2702_, lean_object* v_a_2703_){
_start:
{
lean_object* v___y_2705_; 
switch(lean_obj_tag(v_a_2703_))
{
case 0:
{
lean_object* v_e_2737_; lean_object* v_toPure_2738_; lean_object* v___x_2739_; 
lean_dec_ref(v_e_2702_);
lean_dec(v_toBind_2701_);
lean_dec(v___f_2700_);
lean_dec(v_x_2698_);
lean_dec(v_post_2693_);
lean_dec(v_pre_2692_);
lean_dec_ref(v_inst_2691_);
lean_dec(v_inst_2690_);
lean_dec_ref(v_inst_2689_);
v_e_2737_ = lean_ctor_get(v_a_2703_, 0);
lean_inc_ref(v_e_2737_);
lean_dec_ref_known(v_a_2703_, 1);
v_toPure_2738_ = lean_ctor_get(v_toApplicative_2688_, 1);
lean_inc(v_toPure_2738_);
lean_dec_ref(v_toApplicative_2688_);
v___x_2739_ = lean_apply_2(v_toPure_2738_, lean_box(0), v_e_2737_);
return v___x_2739_;
}
case 1:
{
lean_object* v_e_2740_; lean_object* v___x_2741_; 
lean_dec_ref(v_e_2702_);
lean_dec(v_toBind_2701_);
lean_dec(v___f_2700_);
lean_dec_ref(v_toApplicative_2688_);
v_e_2740_ = lean_ctor_get(v_a_2703_, 0);
lean_inc_ref(v_e_2740_);
lean_dec_ref_known(v_a_2703_, 1);
v___x_2741_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2689_, v_inst_2690_, v_inst_2691_, v_pre_2692_, v_post_2693_, v_usedLetOnly_2694_, v_skipConstInApp_2695_, v_skipInstances_2696_, v_x_2697_, v_x_2698_, v_e_2740_, v___y_2699_);
return v___x_2741_;
}
default: 
{
lean_object* v_e_x3f_2742_; 
lean_dec_ref(v_toApplicative_2688_);
v_e_x3f_2742_ = lean_ctor_get(v_a_2703_, 0);
lean_inc(v_e_x3f_2742_);
lean_dec_ref_known(v_a_2703_, 1);
if (lean_obj_tag(v_e_x3f_2742_) == 0)
{
v___y_2705_ = v_e_2702_;
goto v___jp_2704_;
}
else
{
lean_object* v_val_2743_; 
lean_dec_ref(v_e_2702_);
v_val_2743_ = lean_ctor_get(v_e_x3f_2742_, 0);
lean_inc(v_val_2743_);
lean_dec_ref_known(v_e_x3f_2742_, 1);
v___y_2705_ = v_val_2743_;
goto v___jp_2704_;
}
}
}
v___jp_2704_:
{
switch(lean_obj_tag(v___y_2705_))
{
case 7:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; 
lean_dec(v_toBind_2701_);
lean_dec(v___f_2700_);
v___x_2706_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_2707_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2689_, v_inst_2690_, v_inst_2691_, v_pre_2692_, v_post_2693_, v_usedLetOnly_2694_, v_skipConstInApp_2695_, v_skipInstances_2696_, v_x_2697_, v_x_2698_, v___x_2706_, v___y_2705_, v___y_2699_);
return v___x_2707_;
}
case 6:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; 
lean_dec(v_toBind_2701_);
lean_dec(v___f_2700_);
v___x_2708_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_2709_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2689_, v_inst_2690_, v_inst_2691_, v_pre_2692_, v_post_2693_, v_usedLetOnly_2694_, v_skipConstInApp_2695_, v_skipInstances_2696_, v_x_2697_, v_x_2698_, v___x_2708_, v___y_2705_, v___y_2699_);
return v___x_2709_;
}
case 8:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; 
lean_dec(v_toBind_2701_);
lean_dec(v___f_2700_);
v___x_2710_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_2711_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2689_, v_inst_2690_, v_inst_2691_, v_pre_2692_, v_post_2693_, v_usedLetOnly_2694_, v_skipConstInApp_2695_, v_skipInstances_2696_, v_x_2697_, v_x_2698_, v___x_2710_, v___y_2705_, v___y_2699_);
return v___x_2711_;
}
case 5:
{
lean_object* v_dummy_2712_; lean_object* v_nargs_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_3394__overap_2717_; lean_object* v___x_2718_; 
lean_dec(v_toBind_2701_);
lean_dec(v_x_2698_);
lean_dec(v_post_2693_);
lean_dec(v_pre_2692_);
lean_dec_ref(v_inst_2691_);
lean_dec(v_inst_2690_);
lean_dec_ref(v_inst_2689_);
v_dummy_2712_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1);
v_nargs_2713_ = l_Lean_Expr_getAppNumArgs(v___y_2705_);
lean_inc(v_nargs_2713_);
v___x_2714_ = lean_mk_array(v_nargs_2713_, v_dummy_2712_);
v___x_2715_ = lean_unsigned_to_nat(1u);
v___x_2716_ = lean_nat_sub(v_nargs_2713_, v___x_2715_);
lean_dec(v_nargs_2713_);
v___x_3394__overap_2717_ = l_Lean_Expr_withAppAux___redArg(v___f_2700_, v___y_2705_, v___x_2714_, v___x_2716_);
lean_inc(v___y_2699_);
v___x_2718_ = lean_apply_1(v___x_3394__overap_2717_, v___y_2699_);
return v___x_2718_;
}
case 10:
{
lean_object* v_data_2719_; lean_object* v_expr_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___f_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
lean_dec(v___f_2700_);
v_data_2719_ = lean_ctor_get(v___y_2705_, 0);
lean_inc(v_data_2719_);
v_expr_2720_ = lean_ctor_get(v___y_2705_, 1);
lean_inc_ref_n(v_expr_2720_, 2);
v___x_2721_ = lean_box(v_usedLetOnly_2694_);
v___x_2722_ = lean_box(v_skipConstInApp_2695_);
v___x_2723_ = lean_box(v_skipInstances_2696_);
lean_inc(v___y_2699_);
lean_inc(v_x_2698_);
lean_inc(v_post_2693_);
lean_inc(v_pre_2692_);
lean_inc_ref(v_inst_2691_);
lean_inc(v_inst_2690_);
lean_inc_ref(v_inst_2689_);
v___f_2724_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed), 15, 14);
lean_closure_set(v___f_2724_, 0, v_expr_2720_);
lean_closure_set(v___f_2724_, 1, v_data_2719_);
lean_closure_set(v___f_2724_, 2, v_inst_2689_);
lean_closure_set(v___f_2724_, 3, v_inst_2690_);
lean_closure_set(v___f_2724_, 4, v_inst_2691_);
lean_closure_set(v___f_2724_, 5, v_pre_2692_);
lean_closure_set(v___f_2724_, 6, v_post_2693_);
lean_closure_set(v___f_2724_, 7, v___x_2721_);
lean_closure_set(v___f_2724_, 8, v___x_2722_);
lean_closure_set(v___f_2724_, 9, v___x_2723_);
lean_closure_set(v___f_2724_, 10, v_x_2697_);
lean_closure_set(v___f_2724_, 11, v_x_2698_);
lean_closure_set(v___f_2724_, 12, v___y_2699_);
lean_closure_set(v___f_2724_, 13, v___y_2705_);
v___x_2725_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2689_, v_inst_2690_, v_inst_2691_, v_pre_2692_, v_post_2693_, v_usedLetOnly_2694_, v_skipConstInApp_2695_, v_skipInstances_2696_, v_x_2697_, v_x_2698_, v_expr_2720_, v___y_2699_);
v___x_2726_ = lean_apply_4(v_toBind_2701_, lean_box(0), lean_box(0), v___x_2725_, v___f_2724_);
return v___x_2726_;
}
case 11:
{
lean_object* v_typeName_2727_; lean_object* v_idx_2728_; lean_object* v_struct_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___f_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
lean_dec(v___f_2700_);
v_typeName_2727_ = lean_ctor_get(v___y_2705_, 0);
lean_inc(v_typeName_2727_);
v_idx_2728_ = lean_ctor_get(v___y_2705_, 1);
lean_inc(v_idx_2728_);
v_struct_2729_ = lean_ctor_get(v___y_2705_, 2);
lean_inc_ref_n(v_struct_2729_, 2);
v___x_2730_ = lean_box(v_usedLetOnly_2694_);
v___x_2731_ = lean_box(v_skipConstInApp_2695_);
v___x_2732_ = lean_box(v_skipInstances_2696_);
lean_inc(v___y_2699_);
lean_inc(v_x_2698_);
lean_inc(v_post_2693_);
lean_inc(v_pre_2692_);
lean_inc_ref(v_inst_2691_);
lean_inc(v_inst_2690_);
lean_inc_ref(v_inst_2689_);
v___f_2733_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed), 16, 15);
lean_closure_set(v___f_2733_, 0, v_struct_2729_);
lean_closure_set(v___f_2733_, 1, v_typeName_2727_);
lean_closure_set(v___f_2733_, 2, v_idx_2728_);
lean_closure_set(v___f_2733_, 3, v_inst_2689_);
lean_closure_set(v___f_2733_, 4, v_inst_2690_);
lean_closure_set(v___f_2733_, 5, v_inst_2691_);
lean_closure_set(v___f_2733_, 6, v_pre_2692_);
lean_closure_set(v___f_2733_, 7, v_post_2693_);
lean_closure_set(v___f_2733_, 8, v___x_2730_);
lean_closure_set(v___f_2733_, 9, v___x_2731_);
lean_closure_set(v___f_2733_, 10, v___x_2732_);
lean_closure_set(v___f_2733_, 11, v_x_2697_);
lean_closure_set(v___f_2733_, 12, v_x_2698_);
lean_closure_set(v___f_2733_, 13, v___y_2699_);
lean_closure_set(v___f_2733_, 14, v___y_2705_);
v___x_2734_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2689_, v_inst_2690_, v_inst_2691_, v_pre_2692_, v_post_2693_, v_usedLetOnly_2694_, v_skipConstInApp_2695_, v_skipInstances_2696_, v_x_2697_, v_x_2698_, v_struct_2729_, v___y_2699_);
v___x_2735_ = lean_apply_4(v_toBind_2701_, lean_box(0), lean_box(0), v___x_2734_, v___f_2733_);
return v___x_2735_;
}
default: 
{
lean_object* v___x_2736_; 
lean_dec(v_toBind_2701_);
lean_dec(v___f_2700_);
v___x_2736_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2689_, v_inst_2690_, v_inst_2691_, v_pre_2692_, v_post_2693_, v_usedLetOnly_2694_, v_skipConstInApp_2695_, v_skipInstances_2696_, v_x_2697_, v_x_2698_, v___y_2705_, v___y_2699_);
return v___x_2736_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed(lean_object* v_toApplicative_2744_, lean_object* v_inst_2745_, lean_object* v_inst_2746_, lean_object* v_inst_2747_, lean_object* v_pre_2748_, lean_object* v_post_2749_, lean_object* v_usedLetOnly_2750_, lean_object* v_skipConstInApp_2751_, lean_object* v_skipInstances_2752_, lean_object* v_x_2753_, lean_object* v_x_2754_, lean_object* v___y_2755_, lean_object* v___f_2756_, lean_object* v_toBind_2757_, lean_object* v_e_2758_, lean_object* v_a_2759_){
_start:
{
uint8_t v_usedLetOnly_boxed_2760_; uint8_t v_skipConstInApp_boxed_2761_; uint8_t v_skipInstances_boxed_2762_; lean_object* v_res_2763_; 
v_usedLetOnly_boxed_2760_ = lean_unbox(v_usedLetOnly_2750_);
v_skipConstInApp_boxed_2761_ = lean_unbox(v_skipConstInApp_2751_);
v_skipInstances_boxed_2762_ = lean_unbox(v_skipInstances_2752_);
v_res_2763_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(v_toApplicative_2744_, v_inst_2745_, v_inst_2746_, v_inst_2747_, v_pre_2748_, v_post_2749_, v_usedLetOnly_boxed_2760_, v_skipConstInApp_boxed_2761_, v_skipInstances_boxed_2762_, v_x_2753_, v_x_2754_, v___y_2755_, v___f_2756_, v_toBind_2757_, v_e_2758_, v_a_2759_);
lean_dec(v___y_2755_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(lean_object* v_toApplicative_2764_, lean_object* v_inst_2765_, lean_object* v_inst_2766_, lean_object* v_inst_2767_, lean_object* v_pre_2768_, lean_object* v_post_2769_, uint8_t v_usedLetOnly_2770_, uint8_t v_skipConstInApp_2771_, uint8_t v_skipInstances_2772_, lean_object* v_x_2773_, lean_object* v_x_2774_, lean_object* v___f_2775_, lean_object* v_toBind_2776_, lean_object* v_e_2777_, lean_object* v_____r_2778_, lean_object* v___y_2779_){
_start:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___f_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___x_2780_ = lean_box(v_usedLetOnly_2770_);
v___x_2781_ = lean_box(v_skipConstInApp_2771_);
v___x_2782_ = lean_box(v_skipInstances_2772_);
lean_inc_ref(v_e_2777_);
lean_inc(v_toBind_2776_);
lean_inc(v___y_2779_);
lean_inc(v_pre_2768_);
v___f_2783_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed), 16, 15);
lean_closure_set(v___f_2783_, 0, v_toApplicative_2764_);
lean_closure_set(v___f_2783_, 1, v_inst_2765_);
lean_closure_set(v___f_2783_, 2, v_inst_2766_);
lean_closure_set(v___f_2783_, 3, v_inst_2767_);
lean_closure_set(v___f_2783_, 4, v_pre_2768_);
lean_closure_set(v___f_2783_, 5, v_post_2769_);
lean_closure_set(v___f_2783_, 6, v___x_2780_);
lean_closure_set(v___f_2783_, 7, v___x_2781_);
lean_closure_set(v___f_2783_, 8, v___x_2782_);
lean_closure_set(v___f_2783_, 9, v_x_2773_);
lean_closure_set(v___f_2783_, 10, v_x_2774_);
lean_closure_set(v___f_2783_, 11, v___y_2779_);
lean_closure_set(v___f_2783_, 12, v___f_2775_);
lean_closure_set(v___f_2783_, 13, v_toBind_2776_);
lean_closure_set(v___f_2783_, 14, v_e_2777_);
v___x_2784_ = lean_apply_1(v_pre_2768_, v_e_2777_);
v___x_2785_ = lean_apply_4(v_toBind_2776_, lean_box(0), lean_box(0), v___x_2784_, v___f_2783_);
return v___x_2785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed(lean_object* v_toApplicative_2786_, lean_object* v_inst_2787_, lean_object* v_inst_2788_, lean_object* v_inst_2789_, lean_object* v_pre_2790_, lean_object* v_post_2791_, lean_object* v_usedLetOnly_2792_, lean_object* v_skipConstInApp_2793_, lean_object* v_skipInstances_2794_, lean_object* v_x_2795_, lean_object* v_x_2796_, lean_object* v___f_2797_, lean_object* v_toBind_2798_, lean_object* v_e_2799_, lean_object* v_____r_2800_, lean_object* v___y_2801_){
_start:
{
uint8_t v_usedLetOnly_boxed_2802_; uint8_t v_skipConstInApp_boxed_2803_; uint8_t v_skipInstances_boxed_2804_; lean_object* v_res_2805_; 
v_usedLetOnly_boxed_2802_ = lean_unbox(v_usedLetOnly_2792_);
v_skipConstInApp_boxed_2803_ = lean_unbox(v_skipConstInApp_2793_);
v_skipInstances_boxed_2804_ = lean_unbox(v_skipInstances_2794_);
v_res_2805_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(v_toApplicative_2786_, v_inst_2787_, v_inst_2788_, v_inst_2789_, v_pre_2790_, v_post_2791_, v_usedLetOnly_boxed_2802_, v_skipConstInApp_boxed_2803_, v_skipInstances_boxed_2804_, v_x_2795_, v_x_2796_, v___f_2797_, v_toBind_2798_, v_e_2799_, v_____r_2800_, v___y_2801_);
lean_dec(v___y_2801_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(lean_object* v_inst_2806_, lean_object* v_inst_2807_, lean_object* v_inst_2808_, lean_object* v_pre_2809_, lean_object* v_post_2810_, uint8_t v_usedLetOnly_2811_, uint8_t v_skipConstInApp_2812_, uint8_t v_skipInstances_2813_, lean_object* v_x_2814_, lean_object* v_x_2815_, lean_object* v_e_2816_, lean_object* v_a_2817_){
_start:
{
lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___f_2822_; lean_object* v___f_2823_; lean_object* v___x_2824_; lean_object* v_toApplicative_2825_; lean_object* v_toBind_2826_; lean_object* v___f_2827_; lean_object* v___f_2828_; lean_object* v___f_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___f_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___f_2837_; lean_object* v___f_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; 
v___x_2818_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0));
v___x_2819_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1));
lean_inc_ref_n(v_inst_2806_, 3);
v___x_2820_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2814_, v___x_2818_, v___x_2819_, v_inst_2806_);
v___x_2821_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2814_, v___x_2818_, v___x_2819_);
lean_inc_ref_n(v_inst_2808_, 3);
lean_inc_ref(v___x_2821_);
v___f_2822_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2822_, 0, v___x_2821_);
lean_closure_set(v___f_2822_, 1, v_inst_2808_);
v___f_2823_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2823_, 0, v___x_2821_);
lean_closure_set(v___f_2823_, 1, v_inst_2808_);
v___x_2824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2824_, 0, v___f_2822_);
lean_ctor_set(v___x_2824_, 1, v___f_2823_);
v_toApplicative_2825_ = lean_ctor_get(v_inst_2806_, 0);
lean_inc_ref_n(v_toApplicative_2825_, 6);
v_toBind_2826_ = lean_ctor_get(v_inst_2806_, 1);
lean_inc_n(v_toBind_2826_, 6);
v___f_2827_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2827_, 0, v_toApplicative_2825_);
lean_inc_n(v_x_2815_, 3);
lean_inc_n(v_a_2817_, 3);
lean_inc_ref_n(v_e_2816_, 2);
v___f_2828_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_2828_, 0, v_toApplicative_2825_);
lean_closure_set(v___f_2828_, 1, v___x_2818_);
lean_closure_set(v___f_2828_, 2, v___x_2819_);
lean_closure_set(v___f_2828_, 3, v_e_2816_);
lean_closure_set(v___f_2828_, 4, v_a_2817_);
lean_closure_set(v___f_2828_, 5, v_x_2815_);
lean_closure_set(v___f_2828_, 6, v_toBind_2826_);
v___f_2829_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_2829_, 0, v_toApplicative_2825_);
lean_closure_set(v___f_2829_, 1, v___x_2818_);
lean_closure_set(v___f_2829_, 2, v___x_2819_);
lean_closure_set(v___f_2829_, 3, v_e_2816_);
v___x_2830_ = lean_box(v_skipInstances_2813_);
v___x_2831_ = lean_box(v_usedLetOnly_2811_);
v___x_2832_ = lean_box(v_skipConstInApp_2812_);
lean_inc_ref(v___x_2820_);
lean_inc(v_post_2810_);
lean_inc(v_pre_2809_);
lean_inc_n(v_inst_2807_, 2);
v___f_2833_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed), 17, 14);
lean_closure_set(v___f_2833_, 0, v___x_2830_);
lean_closure_set(v___f_2833_, 1, v_inst_2806_);
lean_closure_set(v___f_2833_, 2, v_inst_2807_);
lean_closure_set(v___f_2833_, 3, v_inst_2808_);
lean_closure_set(v___f_2833_, 4, v_pre_2809_);
lean_closure_set(v___f_2833_, 5, v_post_2810_);
lean_closure_set(v___f_2833_, 6, v___x_2831_);
lean_closure_set(v___f_2833_, 7, v___x_2832_);
lean_closure_set(v___f_2833_, 8, v_x_2814_);
lean_closure_set(v___f_2833_, 9, v_x_2815_);
lean_closure_set(v___f_2833_, 10, v___x_2820_);
lean_closure_set(v___f_2833_, 11, v_toBind_2826_);
lean_closure_set(v___f_2833_, 12, v_toApplicative_2825_);
lean_closure_set(v___f_2833_, 13, v___f_2827_);
v___x_2834_ = lean_box(v_usedLetOnly_2811_);
v___x_2835_ = lean_box(v_skipConstInApp_2812_);
v___x_2836_ = lean_box(v_skipInstances_2813_);
v___f_2837_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed), 16, 14);
lean_closure_set(v___f_2837_, 0, v_toApplicative_2825_);
lean_closure_set(v___f_2837_, 1, v_inst_2806_);
lean_closure_set(v___f_2837_, 2, v_inst_2807_);
lean_closure_set(v___f_2837_, 3, v_inst_2808_);
lean_closure_set(v___f_2837_, 4, v_pre_2809_);
lean_closure_set(v___f_2837_, 5, v_post_2810_);
lean_closure_set(v___f_2837_, 6, v___x_2834_);
lean_closure_set(v___f_2837_, 7, v___x_2835_);
lean_closure_set(v___f_2837_, 8, v___x_2836_);
lean_closure_set(v___f_2837_, 9, v_x_2814_);
lean_closure_set(v___f_2837_, 10, v_x_2815_);
lean_closure_set(v___f_2837_, 11, v___f_2833_);
lean_closure_set(v___f_2837_, 12, v_toBind_2826_);
lean_closure_set(v___f_2837_, 13, v_e_2816_);
v___f_2838_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___boxed), 13, 12);
lean_closure_set(v___f_2838_, 0, v_inst_2807_);
lean_closure_set(v___f_2838_, 1, v_x_2814_);
lean_closure_set(v___f_2838_, 2, v___x_2818_);
lean_closure_set(v___f_2838_, 3, v___x_2819_);
lean_closure_set(v___f_2838_, 4, v_inst_2806_);
lean_closure_set(v___f_2838_, 5, v___f_2837_);
lean_closure_set(v___f_2838_, 6, v___x_2824_);
lean_closure_set(v___f_2838_, 7, v___x_2820_);
lean_closure_set(v___f_2838_, 8, v_a_2817_);
lean_closure_set(v___f_2838_, 9, v_toBind_2826_);
lean_closure_set(v___f_2838_, 10, v___f_2828_);
lean_closure_set(v___f_2838_, 11, v_toApplicative_2825_);
v___x_2839_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2839_, 0, lean_box(0));
lean_closure_set(v___x_2839_, 1, lean_box(0));
lean_closure_set(v___x_2839_, 2, v_a_2817_);
v___x_2840_ = lean_apply_2(v_x_2815_, lean_box(0), v___x_2839_);
v___x_2841_ = lean_apply_4(v_toBind_2826_, lean_box(0), lean_box(0), v___x_2840_, v___f_2829_);
v___x_2842_ = lean_apply_4(v_toBind_2826_, lean_box(0), lean_box(0), v___x_2841_, v___f_2838_);
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(lean_object* v_toApplicative_2843_, lean_object* v_inst_2844_, lean_object* v_inst_2845_, lean_object* v_inst_2846_, lean_object* v_pre_2847_, lean_object* v_post_2848_, uint8_t v_usedLetOnly_2849_, uint8_t v_skipConstInApp_2850_, uint8_t v_skipInstances_2851_, lean_object* v_x_2852_, lean_object* v_x_2853_, lean_object* v_a_2854_, lean_object* v_e_2855_, lean_object* v_a_2856_){
_start:
{
lean_object* v___y_2858_; 
switch(lean_obj_tag(v_a_2856_))
{
case 0:
{
lean_object* v_e_2861_; lean_object* v_toPure_2862_; lean_object* v___x_2863_; 
lean_dec_ref(v_e_2855_);
lean_dec(v_x_2853_);
lean_dec(v_post_2848_);
lean_dec(v_pre_2847_);
lean_dec_ref(v_inst_2846_);
lean_dec(v_inst_2845_);
lean_dec_ref(v_inst_2844_);
v_e_2861_ = lean_ctor_get(v_a_2856_, 0);
lean_inc_ref(v_e_2861_);
lean_dec_ref_known(v_a_2856_, 1);
v_toPure_2862_ = lean_ctor_get(v_toApplicative_2843_, 1);
lean_inc(v_toPure_2862_);
lean_dec_ref(v_toApplicative_2843_);
v___x_2863_ = lean_apply_2(v_toPure_2862_, lean_box(0), v_e_2861_);
return v___x_2863_;
}
case 1:
{
lean_object* v_e_2864_; lean_object* v___x_2865_; 
lean_dec_ref(v_e_2855_);
lean_dec_ref(v_toApplicative_2843_);
v_e_2864_ = lean_ctor_get(v_a_2856_, 0);
lean_inc_ref(v_e_2864_);
lean_dec_ref_known(v_a_2856_, 1);
v___x_2865_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2844_, v_inst_2845_, v_inst_2846_, v_pre_2847_, v_post_2848_, v_usedLetOnly_2849_, v_skipConstInApp_2850_, v_skipInstances_2851_, v_x_2852_, v_x_2853_, v_e_2864_, v_a_2854_);
return v___x_2865_;
}
default: 
{
lean_object* v_e_x3f_2866_; 
lean_dec(v_x_2853_);
lean_dec(v_post_2848_);
lean_dec(v_pre_2847_);
lean_dec_ref(v_inst_2846_);
lean_dec(v_inst_2845_);
lean_dec_ref(v_inst_2844_);
v_e_x3f_2866_ = lean_ctor_get(v_a_2856_, 0);
lean_inc(v_e_x3f_2866_);
lean_dec_ref_known(v_a_2856_, 1);
if (lean_obj_tag(v_e_x3f_2866_) == 0)
{
v___y_2858_ = v_e_2855_;
goto v___jp_2857_;
}
else
{
lean_object* v_val_2867_; 
lean_dec_ref(v_e_2855_);
v_val_2867_ = lean_ctor_get(v_e_x3f_2866_, 0);
lean_inc(v_val_2867_);
lean_dec_ref_known(v_e_x3f_2866_, 1);
v___y_2858_ = v_val_2867_;
goto v___jp_2857_;
}
}
}
v___jp_2857_:
{
lean_object* v_toPure_2859_; lean_object* v___x_2860_; 
v_toPure_2859_ = lean_ctor_get(v_toApplicative_2843_, 1);
lean_inc(v_toPure_2859_);
lean_dec_ref(v_toApplicative_2843_);
v___x_2860_ = lean_apply_2(v_toPure_2859_, lean_box(0), v___y_2858_);
return v___x_2860_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed(lean_object* v_toApplicative_2868_, lean_object* v_inst_2869_, lean_object* v_inst_2870_, lean_object* v_inst_2871_, lean_object* v_pre_2872_, lean_object* v_post_2873_, lean_object* v_usedLetOnly_2874_, lean_object* v_skipConstInApp_2875_, lean_object* v_skipInstances_2876_, lean_object* v_x_2877_, lean_object* v_x_2878_, lean_object* v_a_2879_, lean_object* v_e_2880_, lean_object* v_a_2881_){
_start:
{
uint8_t v_usedLetOnly_boxed_2882_; uint8_t v_skipConstInApp_boxed_2883_; uint8_t v_skipInstances_boxed_2884_; lean_object* v_res_2885_; 
v_usedLetOnly_boxed_2882_ = lean_unbox(v_usedLetOnly_2874_);
v_skipConstInApp_boxed_2883_ = lean_unbox(v_skipConstInApp_2875_);
v_skipInstances_boxed_2884_ = lean_unbox(v_skipInstances_2876_);
v_res_2885_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(v_toApplicative_2868_, v_inst_2869_, v_inst_2870_, v_inst_2871_, v_pre_2872_, v_post_2873_, v_usedLetOnly_boxed_2882_, v_skipConstInApp_boxed_2883_, v_skipInstances_boxed_2884_, v_x_2877_, v_x_2878_, v_a_2879_, v_e_2880_, v_a_2881_);
lean_dec(v_a_2879_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(lean_object* v_inst_2886_, lean_object* v_inst_2887_, lean_object* v_inst_2888_, lean_object* v_pre_2889_, lean_object* v_post_2890_, uint8_t v_usedLetOnly_2891_, uint8_t v_skipConstInApp_2892_, uint8_t v_skipInstances_2893_, lean_object* v_x_2894_, lean_object* v_x_2895_, lean_object* v_e_2896_, lean_object* v_a_2897_){
_start:
{
lean_object* v_toApplicative_2898_; lean_object* v_toBind_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___f_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v_toApplicative_2898_ = lean_ctor_get(v_inst_2886_, 0);
lean_inc_ref(v_toApplicative_2898_);
v_toBind_2899_ = lean_ctor_get(v_inst_2886_, 1);
lean_inc(v_toBind_2899_);
v___x_2900_ = lean_box(v_usedLetOnly_2891_);
v___x_2901_ = lean_box(v_skipConstInApp_2892_);
v___x_2902_ = lean_box(v_skipInstances_2893_);
lean_inc_ref(v_e_2896_);
lean_inc(v_a_2897_);
lean_inc(v_post_2890_);
v___f_2903_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed), 14, 13);
lean_closure_set(v___f_2903_, 0, v_toApplicative_2898_);
lean_closure_set(v___f_2903_, 1, v_inst_2886_);
lean_closure_set(v___f_2903_, 2, v_inst_2887_);
lean_closure_set(v___f_2903_, 3, v_inst_2888_);
lean_closure_set(v___f_2903_, 4, v_pre_2889_);
lean_closure_set(v___f_2903_, 5, v_post_2890_);
lean_closure_set(v___f_2903_, 6, v___x_2900_);
lean_closure_set(v___f_2903_, 7, v___x_2901_);
lean_closure_set(v___f_2903_, 8, v___x_2902_);
lean_closure_set(v___f_2903_, 9, v_x_2894_);
lean_closure_set(v___f_2903_, 10, v_x_2895_);
lean_closure_set(v___f_2903_, 11, v_a_2897_);
lean_closure_set(v___f_2903_, 12, v_e_2896_);
v___x_2904_ = lean_apply_1(v_post_2890_, v_e_2896_);
v___x_2905_ = lean_apply_4(v_toBind_2899_, lean_box(0), lean_box(0), v___x_2904_, v___f_2903_);
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(lean_object* v_inst_2906_, lean_object* v_inst_2907_, lean_object* v_inst_2908_, lean_object* v_pre_2909_, lean_object* v_post_2910_, uint8_t v_usedLetOnly_2911_, uint8_t v_skipConstInApp_2912_, uint8_t v_skipInstances_2913_, lean_object* v_x_2914_, lean_object* v_x_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_){
_start:
{
lean_object* v___x_2918_; 
v___x_2918_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2906_, v_inst_2907_, v_inst_2908_, v_pre_2909_, v_post_2910_, v_usedLetOnly_2911_, v_skipConstInApp_2912_, v_skipInstances_2913_, v_x_2914_, v_x_2915_, v_a_2917_, v_a_2916_);
return v___x_2918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___boxed(lean_object* v_inst_2919_, lean_object* v_inst_2920_, lean_object* v_inst_2921_, lean_object* v_pre_2922_, lean_object* v_post_2923_, lean_object* v_usedLetOnly_2924_, lean_object* v_skipConstInApp_2925_, lean_object* v_skipInstances_2926_, lean_object* v_x_2927_, lean_object* v_x_2928_, lean_object* v_e_2929_, lean_object* v_a_2930_){
_start:
{
uint8_t v_usedLetOnly_boxed_2931_; uint8_t v_skipConstInApp_boxed_2932_; uint8_t v_skipInstances_boxed_2933_; lean_object* v_res_2934_; 
v_usedLetOnly_boxed_2931_ = lean_unbox(v_usedLetOnly_2924_);
v_skipConstInApp_boxed_2932_ = lean_unbox(v_skipConstInApp_2925_);
v_skipInstances_boxed_2933_ = lean_unbox(v_skipInstances_2926_);
v_res_2934_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2919_, v_inst_2920_, v_inst_2921_, v_pre_2922_, v_post_2923_, v_usedLetOnly_boxed_2931_, v_skipConstInApp_boxed_2932_, v_skipInstances_boxed_2933_, v_x_2927_, v_x_2928_, v_e_2929_, v_a_2930_);
lean_dec(v_a_2930_);
return v_res_2934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___boxed(lean_object* v_inst_2935_, lean_object* v_inst_2936_, lean_object* v_inst_2937_, lean_object* v_pre_2938_, lean_object* v_post_2939_, lean_object* v_usedLetOnly_2940_, lean_object* v_skipConstInApp_2941_, lean_object* v_skipInstances_2942_, lean_object* v_x_2943_, lean_object* v_x_2944_, lean_object* v_fvars_2945_, lean_object* v_e_2946_, lean_object* v_a_2947_){
_start:
{
uint8_t v_usedLetOnly_boxed_2948_; uint8_t v_skipConstInApp_boxed_2949_; uint8_t v_skipInstances_boxed_2950_; lean_object* v_res_2951_; 
v_usedLetOnly_boxed_2948_ = lean_unbox(v_usedLetOnly_2940_);
v_skipConstInApp_boxed_2949_ = lean_unbox(v_skipConstInApp_2941_);
v_skipInstances_boxed_2950_ = lean_unbox(v_skipInstances_2942_);
v_res_2951_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2935_, v_inst_2936_, v_inst_2937_, v_pre_2938_, v_post_2939_, v_usedLetOnly_boxed_2948_, v_skipConstInApp_boxed_2949_, v_skipInstances_boxed_2950_, v_x_2943_, v_x_2944_, v_fvars_2945_, v_e_2946_, v_a_2947_);
lean_dec(v_a_2947_);
return v_res_2951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___boxed(lean_object* v_inst_2952_, lean_object* v_inst_2953_, lean_object* v_inst_2954_, lean_object* v_pre_2955_, lean_object* v_post_2956_, lean_object* v_usedLetOnly_2957_, lean_object* v_skipConstInApp_2958_, lean_object* v_skipInstances_2959_, lean_object* v_x_2960_, lean_object* v_x_2961_, lean_object* v_fvars_2962_, lean_object* v_e_2963_, lean_object* v_a_2964_){
_start:
{
uint8_t v_usedLetOnly_boxed_2965_; uint8_t v_skipConstInApp_boxed_2966_; uint8_t v_skipInstances_boxed_2967_; lean_object* v_res_2968_; 
v_usedLetOnly_boxed_2965_ = lean_unbox(v_usedLetOnly_2957_);
v_skipConstInApp_boxed_2966_ = lean_unbox(v_skipConstInApp_2958_);
v_skipInstances_boxed_2967_ = lean_unbox(v_skipInstances_2959_);
v_res_2968_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2952_, v_inst_2953_, v_inst_2954_, v_pre_2955_, v_post_2956_, v_usedLetOnly_boxed_2965_, v_skipConstInApp_boxed_2966_, v_skipInstances_boxed_2967_, v_x_2960_, v_x_2961_, v_fvars_2962_, v_e_2963_, v_a_2964_);
lean_dec(v_a_2964_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___boxed(lean_object* v_inst_2969_, lean_object* v_inst_2970_, lean_object* v_inst_2971_, lean_object* v_pre_2972_, lean_object* v_post_2973_, lean_object* v_usedLetOnly_2974_, lean_object* v_skipConstInApp_2975_, lean_object* v_skipInstances_2976_, lean_object* v_x_2977_, lean_object* v_x_2978_, lean_object* v_fvars_2979_, lean_object* v_e_2980_, lean_object* v_a_2981_){
_start:
{
uint8_t v_usedLetOnly_boxed_2982_; uint8_t v_skipConstInApp_boxed_2983_; uint8_t v_skipInstances_boxed_2984_; lean_object* v_res_2985_; 
v_usedLetOnly_boxed_2982_ = lean_unbox(v_usedLetOnly_2974_);
v_skipConstInApp_boxed_2983_ = lean_unbox(v_skipConstInApp_2975_);
v_skipInstances_boxed_2984_ = lean_unbox(v_skipInstances_2976_);
v_res_2985_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2969_, v_inst_2970_, v_inst_2971_, v_pre_2972_, v_post_2973_, v_usedLetOnly_boxed_2982_, v_skipConstInApp_boxed_2983_, v_skipInstances_boxed_2984_, v_x_2977_, v_x_2978_, v_fvars_2979_, v_e_2980_, v_a_2981_);
lean_dec(v_a_2981_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(lean_object* v_m_2986_, lean_object* v_inst_2987_, lean_object* v_inst_2988_, lean_object* v_inst_2989_, lean_object* v_pre_2990_, lean_object* v_post_2991_, uint8_t v_usedLetOnly_2992_, uint8_t v_skipConstInApp_2993_, uint8_t v_skipInstances_2994_, lean_object* v_x_2995_, lean_object* v_x_2996_, lean_object* v_e_2997_, lean_object* v_a_2998_){
_start:
{
lean_object* v___x_2999_; 
v___x_2999_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2987_, v_inst_2988_, v_inst_2989_, v_pre_2990_, v_post_2991_, v_usedLetOnly_2992_, v_skipConstInApp_2993_, v_skipInstances_2994_, v_x_2995_, v_x_2996_, v_e_2997_, v_a_2998_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___boxed(lean_object* v_m_3000_, lean_object* v_inst_3001_, lean_object* v_inst_3002_, lean_object* v_inst_3003_, lean_object* v_pre_3004_, lean_object* v_post_3005_, lean_object* v_usedLetOnly_3006_, lean_object* v_skipConstInApp_3007_, lean_object* v_skipInstances_3008_, lean_object* v_x_3009_, lean_object* v_x_3010_, lean_object* v_e_3011_, lean_object* v_a_3012_){
_start:
{
uint8_t v_usedLetOnly_boxed_3013_; uint8_t v_skipConstInApp_boxed_3014_; uint8_t v_skipInstances_boxed_3015_; lean_object* v_res_3016_; 
v_usedLetOnly_boxed_3013_ = lean_unbox(v_usedLetOnly_3006_);
v_skipConstInApp_boxed_3014_ = lean_unbox(v_skipConstInApp_3007_);
v_skipInstances_boxed_3015_ = lean_unbox(v_skipInstances_3008_);
v_res_3016_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(v_m_3000_, v_inst_3001_, v_inst_3002_, v_inst_3003_, v_pre_3004_, v_post_3005_, v_usedLetOnly_boxed_3013_, v_skipConstInApp_boxed_3014_, v_skipInstances_boxed_3015_, v_x_3009_, v_x_3010_, v_e_3011_, v_a_3012_);
lean_dec(v_a_3012_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(lean_object* v_m_3017_, lean_object* v_inst_3018_, lean_object* v_inst_3019_, lean_object* v_inst_3020_, lean_object* v_pre_3021_, lean_object* v_post_3022_, uint8_t v_usedLetOnly_3023_, uint8_t v_skipConstInApp_3024_, uint8_t v_skipInstances_3025_, lean_object* v_x_3026_, lean_object* v_x_3027_, lean_object* v_fvars_3028_, lean_object* v_e_3029_, lean_object* v_a_3030_){
_start:
{
lean_object* v___x_3031_; 
v___x_3031_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_3018_, v_inst_3019_, v_inst_3020_, v_pre_3021_, v_post_3022_, v_usedLetOnly_3023_, v_skipConstInApp_3024_, v_skipInstances_3025_, v_x_3026_, v_x_3027_, v_fvars_3028_, v_e_3029_, v_a_3030_);
return v___x_3031_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___boxed(lean_object* v_m_3032_, lean_object* v_inst_3033_, lean_object* v_inst_3034_, lean_object* v_inst_3035_, lean_object* v_pre_3036_, lean_object* v_post_3037_, lean_object* v_usedLetOnly_3038_, lean_object* v_skipConstInApp_3039_, lean_object* v_skipInstances_3040_, lean_object* v_x_3041_, lean_object* v_x_3042_, lean_object* v_fvars_3043_, lean_object* v_e_3044_, lean_object* v_a_3045_){
_start:
{
uint8_t v_usedLetOnly_boxed_3046_; uint8_t v_skipConstInApp_boxed_3047_; uint8_t v_skipInstances_boxed_3048_; lean_object* v_res_3049_; 
v_usedLetOnly_boxed_3046_ = lean_unbox(v_usedLetOnly_3038_);
v_skipConstInApp_boxed_3047_ = lean_unbox(v_skipConstInApp_3039_);
v_skipInstances_boxed_3048_ = lean_unbox(v_skipInstances_3040_);
v_res_3049_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(v_m_3032_, v_inst_3033_, v_inst_3034_, v_inst_3035_, v_pre_3036_, v_post_3037_, v_usedLetOnly_boxed_3046_, v_skipConstInApp_boxed_3047_, v_skipInstances_boxed_3048_, v_x_3041_, v_x_3042_, v_fvars_3043_, v_e_3044_, v_a_3045_);
lean_dec(v_a_3045_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(lean_object* v_m_3050_, lean_object* v_inst_3051_, lean_object* v_inst_3052_, lean_object* v_inst_3053_, lean_object* v_pre_3054_, lean_object* v_post_3055_, uint8_t v_usedLetOnly_3056_, uint8_t v_skipConstInApp_3057_, uint8_t v_skipInstances_3058_, lean_object* v_x_3059_, lean_object* v_x_3060_, lean_object* v_e_3061_, lean_object* v_a_3062_){
_start:
{
lean_object* v___x_3063_; 
v___x_3063_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_3051_, v_inst_3052_, v_inst_3053_, v_pre_3054_, v_post_3055_, v_usedLetOnly_3056_, v_skipConstInApp_3057_, v_skipInstances_3058_, v_x_3059_, v_x_3060_, v_e_3061_, v_a_3062_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___boxed(lean_object* v_m_3064_, lean_object* v_inst_3065_, lean_object* v_inst_3066_, lean_object* v_inst_3067_, lean_object* v_pre_3068_, lean_object* v_post_3069_, lean_object* v_usedLetOnly_3070_, lean_object* v_skipConstInApp_3071_, lean_object* v_skipInstances_3072_, lean_object* v_x_3073_, lean_object* v_x_3074_, lean_object* v_e_3075_, lean_object* v_a_3076_){
_start:
{
uint8_t v_usedLetOnly_boxed_3077_; uint8_t v_skipConstInApp_boxed_3078_; uint8_t v_skipInstances_boxed_3079_; lean_object* v_res_3080_; 
v_usedLetOnly_boxed_3077_ = lean_unbox(v_usedLetOnly_3070_);
v_skipConstInApp_boxed_3078_ = lean_unbox(v_skipConstInApp_3071_);
v_skipInstances_boxed_3079_ = lean_unbox(v_skipInstances_3072_);
v_res_3080_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(v_m_3064_, v_inst_3065_, v_inst_3066_, v_inst_3067_, v_pre_3068_, v_post_3069_, v_usedLetOnly_boxed_3077_, v_skipConstInApp_boxed_3078_, v_skipInstances_boxed_3079_, v_x_3073_, v_x_3074_, v_e_3075_, v_a_3076_);
lean_dec(v_a_3076_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(lean_object* v_m_3081_, lean_object* v_inst_3082_, lean_object* v_inst_3083_, lean_object* v_inst_3084_, lean_object* v_pre_3085_, lean_object* v_post_3086_, uint8_t v_usedLetOnly_3087_, uint8_t v_skipConstInApp_3088_, uint8_t v_skipInstances_3089_, lean_object* v_x_3090_, lean_object* v_x_3091_, lean_object* v_fvars_3092_, lean_object* v_e_3093_, lean_object* v_a_3094_){
_start:
{
lean_object* v___x_3095_; 
v___x_3095_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_3082_, v_inst_3083_, v_inst_3084_, v_pre_3085_, v_post_3086_, v_usedLetOnly_3087_, v_skipConstInApp_3088_, v_skipInstances_3089_, v_x_3090_, v_x_3091_, v_fvars_3092_, v_e_3093_, v_a_3094_);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___boxed(lean_object* v_m_3096_, lean_object* v_inst_3097_, lean_object* v_inst_3098_, lean_object* v_inst_3099_, lean_object* v_pre_3100_, lean_object* v_post_3101_, lean_object* v_usedLetOnly_3102_, lean_object* v_skipConstInApp_3103_, lean_object* v_skipInstances_3104_, lean_object* v_x_3105_, lean_object* v_x_3106_, lean_object* v_fvars_3107_, lean_object* v_e_3108_, lean_object* v_a_3109_){
_start:
{
uint8_t v_usedLetOnly_boxed_3110_; uint8_t v_skipConstInApp_boxed_3111_; uint8_t v_skipInstances_boxed_3112_; lean_object* v_res_3113_; 
v_usedLetOnly_boxed_3110_ = lean_unbox(v_usedLetOnly_3102_);
v_skipConstInApp_boxed_3111_ = lean_unbox(v_skipConstInApp_3103_);
v_skipInstances_boxed_3112_ = lean_unbox(v_skipInstances_3104_);
v_res_3113_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(v_m_3096_, v_inst_3097_, v_inst_3098_, v_inst_3099_, v_pre_3100_, v_post_3101_, v_usedLetOnly_boxed_3110_, v_skipConstInApp_boxed_3111_, v_skipInstances_boxed_3112_, v_x_3105_, v_x_3106_, v_fvars_3107_, v_e_3108_, v_a_3109_);
lean_dec(v_a_3109_);
return v_res_3113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(lean_object* v_m_3114_, lean_object* v_inst_3115_, lean_object* v_inst_3116_, lean_object* v_inst_3117_, lean_object* v_pre_3118_, lean_object* v_post_3119_, uint8_t v_usedLetOnly_3120_, uint8_t v_skipConstInApp_3121_, uint8_t v_skipInstances_3122_, lean_object* v_x_3123_, lean_object* v_x_3124_, lean_object* v_fvars_3125_, lean_object* v_e_3126_, lean_object* v_a_3127_){
_start:
{
lean_object* v___x_3128_; 
v___x_3128_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_3115_, v_inst_3116_, v_inst_3117_, v_pre_3118_, v_post_3119_, v_usedLetOnly_3120_, v_skipConstInApp_3121_, v_skipInstances_3122_, v_x_3123_, v_x_3124_, v_fvars_3125_, v_e_3126_, v_a_3127_);
return v___x_3128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___boxed(lean_object* v_m_3129_, lean_object* v_inst_3130_, lean_object* v_inst_3131_, lean_object* v_inst_3132_, lean_object* v_pre_3133_, lean_object* v_post_3134_, lean_object* v_usedLetOnly_3135_, lean_object* v_skipConstInApp_3136_, lean_object* v_skipInstances_3137_, lean_object* v_x_3138_, lean_object* v_x_3139_, lean_object* v_fvars_3140_, lean_object* v_e_3141_, lean_object* v_a_3142_){
_start:
{
uint8_t v_usedLetOnly_boxed_3143_; uint8_t v_skipConstInApp_boxed_3144_; uint8_t v_skipInstances_boxed_3145_; lean_object* v_res_3146_; 
v_usedLetOnly_boxed_3143_ = lean_unbox(v_usedLetOnly_3135_);
v_skipConstInApp_boxed_3144_ = lean_unbox(v_skipConstInApp_3136_);
v_skipInstances_boxed_3145_ = lean_unbox(v_skipInstances_3137_);
v_res_3146_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(v_m_3129_, v_inst_3130_, v_inst_3131_, v_inst_3132_, v_pre_3133_, v_post_3134_, v_usedLetOnly_boxed_3143_, v_skipConstInApp_boxed_3144_, v_skipInstances_boxed_3145_, v_x_3138_, v_x_3139_, v_fvars_3140_, v_e_3141_, v_a_3142_);
lean_dec(v_a_3142_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0(lean_object* v_x_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v___x_3153_; lean_object* v___x_3154_; 
v___x_3153_ = lean_apply_1(v_x_3147_, lean_box(0));
v___x_3154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3154_, 0, v___x_3153_);
return v___x_3154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0___boxed(lean_object* v_x_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l_Lean_Meta_transformWithCache___redArg___lam__0(v_x_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__1(lean_object* v_inst_3162_, lean_object* v_00_u03b1_3163_, lean_object* v_x_3164_){
_start:
{
lean_object* v___f_3165_; lean_object* v___x_3166_; 
v___f_3165_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3165_, 0, v_x_3164_);
v___x_3166_ = lean_apply_2(v_inst_3162_, lean_box(0), v___f_3165_);
return v___x_3166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4(lean_object* v_toPure_3167_, lean_object* v_x_3168_, lean_object* v_toBind_3169_, lean_object* v_inst_3170_, lean_object* v_inst_3171_, lean_object* v_inst_3172_, lean_object* v_pre_3173_, lean_object* v_post_3174_, uint8_t v_usedLetOnly_3175_, uint8_t v_skipConstInApp_3176_, uint8_t v_skipInstances_3177_, lean_object* v_x_3178_, lean_object* v_input_3179_, lean_object* v_ref_3180_){
_start:
{
lean_object* v___f_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
lean_inc(v_toBind_3169_);
lean_inc(v_x_3168_);
lean_inc(v_ref_3180_);
v___f_3181_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3181_, 0, v_toPure_3167_);
lean_closure_set(v___f_3181_, 1, v_ref_3180_);
lean_closure_set(v___f_3181_, 2, v_x_3168_);
lean_closure_set(v___f_3181_, 3, v_toBind_3169_);
v___x_3182_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_3170_, v_inst_3171_, v_inst_3172_, v_pre_3173_, v_post_3174_, v_usedLetOnly_3175_, v_skipConstInApp_3176_, v_skipInstances_3177_, v_x_3178_, v_x_3168_, v_input_3179_, v_ref_3180_);
lean_dec(v_ref_3180_);
v___x_3183_ = lean_apply_4(v_toBind_3169_, lean_box(0), lean_box(0), v___x_3182_, v___f_3181_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4___boxed(lean_object* v_toPure_3184_, lean_object* v_x_3185_, lean_object* v_toBind_3186_, lean_object* v_inst_3187_, lean_object* v_inst_3188_, lean_object* v_inst_3189_, lean_object* v_pre_3190_, lean_object* v_post_3191_, lean_object* v_usedLetOnly_3192_, lean_object* v_skipConstInApp_3193_, lean_object* v_skipInstances_3194_, lean_object* v_x_3195_, lean_object* v_input_3196_, lean_object* v_ref_3197_){
_start:
{
uint8_t v_usedLetOnly_boxed_3198_; uint8_t v_skipConstInApp_boxed_3199_; uint8_t v_skipInstances_boxed_3200_; lean_object* v_res_3201_; 
v_usedLetOnly_boxed_3198_ = lean_unbox(v_usedLetOnly_3192_);
v_skipConstInApp_boxed_3199_ = lean_unbox(v_skipConstInApp_3193_);
v_skipInstances_boxed_3200_ = lean_unbox(v_skipInstances_3194_);
v_res_3201_ = l_Lean_Meta_transformWithCache___redArg___lam__4(v_toPure_3184_, v_x_3185_, v_toBind_3186_, v_inst_3187_, v_inst_3188_, v_inst_3189_, v_pre_3190_, v_post_3191_, v_usedLetOnly_boxed_3198_, v_skipConstInApp_boxed_3199_, v_skipInstances_boxed_3200_, v_x_3195_, v_input_3196_, v_ref_3197_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg(lean_object* v_inst_3202_, lean_object* v_inst_3203_, lean_object* v_inst_3204_, lean_object* v_input_3205_, lean_object* v_cache_3206_, lean_object* v_pre_3207_, lean_object* v_post_3208_, uint8_t v_usedLetOnly_3209_, uint8_t v_skipConstInApp_3210_, uint8_t v_skipInstances_3211_){
_start:
{
lean_object* v_x_3212_; lean_object* v_toApplicative_3213_; lean_object* v_toBind_3214_; lean_object* v_toPure_3215_; lean_object* v_x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___f_3222_; lean_object* v___x_3223_; 
v_x_3212_ = lean_box(0);
v_toApplicative_3213_ = lean_ctor_get(v_inst_3202_, 0);
v_toBind_3214_ = lean_ctor_get(v_inst_3202_, 1);
lean_inc_n(v_toBind_3214_, 2);
v_toPure_3215_ = lean_ctor_get(v_toApplicative_3213_, 1);
lean_inc(v_toPure_3215_);
lean_inc_n(v_inst_3203_, 2);
v_x_3216_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3216_, 0, v_inst_3203_);
v___x_3217_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3217_, 0, lean_box(0));
lean_closure_set(v___x_3217_, 1, lean_box(0));
lean_closure_set(v___x_3217_, 2, v_cache_3206_);
v___x_3218_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3203_, lean_box(0), v___x_3217_);
v___x_3219_ = lean_box(v_usedLetOnly_3209_);
v___x_3220_ = lean_box(v_skipConstInApp_3210_);
v___x_3221_ = lean_box(v_skipInstances_3211_);
v___f_3222_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_3222_, 0, v_toPure_3215_);
lean_closure_set(v___f_3222_, 1, v_x_3216_);
lean_closure_set(v___f_3222_, 2, v_toBind_3214_);
lean_closure_set(v___f_3222_, 3, v_inst_3202_);
lean_closure_set(v___f_3222_, 4, v_inst_3203_);
lean_closure_set(v___f_3222_, 5, v_inst_3204_);
lean_closure_set(v___f_3222_, 6, v_pre_3207_);
lean_closure_set(v___f_3222_, 7, v_post_3208_);
lean_closure_set(v___f_3222_, 8, v___x_3219_);
lean_closure_set(v___f_3222_, 9, v___x_3220_);
lean_closure_set(v___f_3222_, 10, v___x_3221_);
lean_closure_set(v___f_3222_, 11, v_x_3212_);
lean_closure_set(v___f_3222_, 12, v_input_3205_);
v___x_3223_ = lean_apply_4(v_toBind_3214_, lean_box(0), lean_box(0), v___x_3218_, v___f_3222_);
return v___x_3223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___boxed(lean_object* v_inst_3224_, lean_object* v_inst_3225_, lean_object* v_inst_3226_, lean_object* v_input_3227_, lean_object* v_cache_3228_, lean_object* v_pre_3229_, lean_object* v_post_3230_, lean_object* v_usedLetOnly_3231_, lean_object* v_skipConstInApp_3232_, lean_object* v_skipInstances_3233_){
_start:
{
uint8_t v_usedLetOnly_boxed_3234_; uint8_t v_skipConstInApp_boxed_3235_; uint8_t v_skipInstances_boxed_3236_; lean_object* v_res_3237_; 
v_usedLetOnly_boxed_3234_ = lean_unbox(v_usedLetOnly_3231_);
v_skipConstInApp_boxed_3235_ = lean_unbox(v_skipConstInApp_3232_);
v_skipInstances_boxed_3236_ = lean_unbox(v_skipInstances_3233_);
v_res_3237_ = l_Lean_Meta_transformWithCache___redArg(v_inst_3224_, v_inst_3225_, v_inst_3226_, v_input_3227_, v_cache_3228_, v_pre_3229_, v_post_3230_, v_usedLetOnly_boxed_3234_, v_skipConstInApp_boxed_3235_, v_skipInstances_boxed_3236_);
return v_res_3237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache(lean_object* v_m_3238_, lean_object* v_inst_3239_, lean_object* v_inst_3240_, lean_object* v_inst_3241_, lean_object* v_input_3242_, lean_object* v_cache_3243_, lean_object* v_pre_3244_, lean_object* v_post_3245_, uint8_t v_usedLetOnly_3246_, uint8_t v_skipConstInApp_3247_, uint8_t v_skipInstances_3248_){
_start:
{
lean_object* v_x_3249_; lean_object* v_toApplicative_3250_; lean_object* v_toBind_3251_; lean_object* v_toPure_3252_; lean_object* v_x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___f_3259_; lean_object* v___x_3260_; 
v_x_3249_ = lean_box(0);
v_toApplicative_3250_ = lean_ctor_get(v_inst_3239_, 0);
v_toBind_3251_ = lean_ctor_get(v_inst_3239_, 1);
lean_inc_n(v_toBind_3251_, 2);
v_toPure_3252_ = lean_ctor_get(v_toApplicative_3250_, 1);
lean_inc(v_toPure_3252_);
lean_inc_n(v_inst_3240_, 2);
v_x_3253_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3253_, 0, v_inst_3240_);
v___x_3254_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3254_, 0, lean_box(0));
lean_closure_set(v___x_3254_, 1, lean_box(0));
lean_closure_set(v___x_3254_, 2, v_cache_3243_);
v___x_3255_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3240_, lean_box(0), v___x_3254_);
v___x_3256_ = lean_box(v_usedLetOnly_3246_);
v___x_3257_ = lean_box(v_skipConstInApp_3247_);
v___x_3258_ = lean_box(v_skipInstances_3248_);
v___f_3259_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_3259_, 0, v_toPure_3252_);
lean_closure_set(v___f_3259_, 1, v_x_3253_);
lean_closure_set(v___f_3259_, 2, v_toBind_3251_);
lean_closure_set(v___f_3259_, 3, v_inst_3239_);
lean_closure_set(v___f_3259_, 4, v_inst_3240_);
lean_closure_set(v___f_3259_, 5, v_inst_3241_);
lean_closure_set(v___f_3259_, 6, v_pre_3244_);
lean_closure_set(v___f_3259_, 7, v_post_3245_);
lean_closure_set(v___f_3259_, 8, v___x_3256_);
lean_closure_set(v___f_3259_, 9, v___x_3257_);
lean_closure_set(v___f_3259_, 10, v___x_3258_);
lean_closure_set(v___f_3259_, 11, v_x_3249_);
lean_closure_set(v___f_3259_, 12, v_input_3242_);
v___x_3260_ = lean_apply_4(v_toBind_3251_, lean_box(0), lean_box(0), v___x_3255_, v___f_3259_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___boxed(lean_object* v_m_3261_, lean_object* v_inst_3262_, lean_object* v_inst_3263_, lean_object* v_inst_3264_, lean_object* v_input_3265_, lean_object* v_cache_3266_, lean_object* v_pre_3267_, lean_object* v_post_3268_, lean_object* v_usedLetOnly_3269_, lean_object* v_skipConstInApp_3270_, lean_object* v_skipInstances_3271_){
_start:
{
uint8_t v_usedLetOnly_boxed_3272_; uint8_t v_skipConstInApp_boxed_3273_; uint8_t v_skipInstances_boxed_3274_; lean_object* v_res_3275_; 
v_usedLetOnly_boxed_3272_ = lean_unbox(v_usedLetOnly_3269_);
v_skipConstInApp_boxed_3273_ = lean_unbox(v_skipConstInApp_3270_);
v_skipInstances_boxed_3274_ = lean_unbox(v_skipInstances_3271_);
v_res_3275_ = l_Lean_Meta_transformWithCache(v_m_3261_, v_inst_3262_, v_inst_3263_, v_inst_3264_, v_input_3265_, v_cache_3266_, v_pre_3267_, v_post_3268_, v_usedLetOnly_boxed_3272_, v_skipConstInApp_boxed_3273_, v_skipInstances_boxed_3274_);
return v_res_3275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5(lean_object* v_toPure_3276_, lean_object* v_x_3277_, lean_object* v_toBind_3278_, lean_object* v_inst_3279_, lean_object* v_inst_3280_, lean_object* v_inst_3281_, lean_object* v_pre_3282_, lean_object* v_post_3283_, uint8_t v_usedLetOnly_3284_, uint8_t v_skipConstInApp_3285_, uint8_t v___x_3286_, lean_object* v_x_3287_, lean_object* v_input_3288_, lean_object* v_ref_3289_){
_start:
{
lean_object* v___f_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
lean_inc(v_toBind_3278_);
lean_inc(v_x_3277_);
lean_inc(v_ref_3289_);
v___f_3290_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3290_, 0, v_toPure_3276_);
lean_closure_set(v___f_3290_, 1, v_ref_3289_);
lean_closure_set(v___f_3290_, 2, v_x_3277_);
lean_closure_set(v___f_3290_, 3, v_toBind_3278_);
v___x_3291_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_3279_, v_inst_3280_, v_inst_3281_, v_pre_3282_, v_post_3283_, v_usedLetOnly_3284_, v_skipConstInApp_3285_, v___x_3286_, v_x_3287_, v_x_3277_, v_input_3288_, v_ref_3289_);
lean_dec(v_ref_3289_);
v___x_3292_ = lean_apply_4(v_toBind_3278_, lean_box(0), lean_box(0), v___x_3291_, v___f_3290_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5___boxed(lean_object* v_toPure_3293_, lean_object* v_x_3294_, lean_object* v_toBind_3295_, lean_object* v_inst_3296_, lean_object* v_inst_3297_, lean_object* v_inst_3298_, lean_object* v_pre_3299_, lean_object* v_post_3300_, lean_object* v_usedLetOnly_3301_, lean_object* v_skipConstInApp_3302_, lean_object* v___x_3303_, lean_object* v_x_3304_, lean_object* v_input_3305_, lean_object* v_ref_3306_){
_start:
{
uint8_t v_usedLetOnly_boxed_3307_; uint8_t v_skipConstInApp_boxed_3308_; uint8_t v___x_115__boxed_3309_; lean_object* v_res_3310_; 
v_usedLetOnly_boxed_3307_ = lean_unbox(v_usedLetOnly_3301_);
v_skipConstInApp_boxed_3308_ = lean_unbox(v_skipConstInApp_3302_);
v___x_115__boxed_3309_ = lean_unbox(v___x_3303_);
v_res_3310_ = l_Lean_Meta_transform___redArg___lam__5(v_toPure_3293_, v_x_3294_, v_toBind_3295_, v_inst_3296_, v_inst_3297_, v_inst_3298_, v_pre_3299_, v_post_3300_, v_usedLetOnly_boxed_3307_, v_skipConstInApp_boxed_3308_, v___x_115__boxed_3309_, v_x_3304_, v_input_3305_, v_ref_3306_);
return v_res_3310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg(lean_object* v_inst_3311_, lean_object* v_inst_3312_, lean_object* v_inst_3313_, lean_object* v_input_3314_, lean_object* v_pre_3315_, lean_object* v_post_3316_, uint8_t v_usedLetOnly_3317_, uint8_t v_skipConstInApp_3318_){
_start:
{
lean_object* v_toApplicative_3319_; lean_object* v_toBind_3320_; lean_object* v_x_3321_; lean_object* v_toPure_3322_; lean_object* v_x_3323_; uint8_t v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___f_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___f_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; 
v_toApplicative_3319_ = lean_ctor_get(v_inst_3311_, 0);
v_toBind_3320_ = lean_ctor_get(v_inst_3311_, 1);
lean_inc_n(v_toBind_3320_, 3);
v_x_3321_ = lean_box(0);
v_toPure_3322_ = lean_ctor_get(v_toApplicative_3319_, 1);
lean_inc_n(v_toPure_3322_, 2);
lean_inc_n(v_inst_3312_, 2);
v_x_3323_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3323_, 0, v_inst_3312_);
v___x_3324_ = 0;
v___x_3325_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_3326_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3312_, lean_box(0), v___x_3325_);
v___f_3327_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3327_, 0, v_toPure_3322_);
v___x_3328_ = lean_box(v_usedLetOnly_3317_);
v___x_3329_ = lean_box(v_skipConstInApp_3318_);
v___x_3330_ = lean_box(v___x_3324_);
v___f_3331_ = lean_alloc_closure((void*)(l_Lean_Meta_transform___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_3331_, 0, v_toPure_3322_);
lean_closure_set(v___f_3331_, 1, v_x_3323_);
lean_closure_set(v___f_3331_, 2, v_toBind_3320_);
lean_closure_set(v___f_3331_, 3, v_inst_3311_);
lean_closure_set(v___f_3331_, 4, v_inst_3312_);
lean_closure_set(v___f_3331_, 5, v_inst_3313_);
lean_closure_set(v___f_3331_, 6, v_pre_3315_);
lean_closure_set(v___f_3331_, 7, v_post_3316_);
lean_closure_set(v___f_3331_, 8, v___x_3328_);
lean_closure_set(v___f_3331_, 9, v___x_3329_);
lean_closure_set(v___f_3331_, 10, v___x_3330_);
lean_closure_set(v___f_3331_, 11, v_x_3321_);
lean_closure_set(v___f_3331_, 12, v_input_3314_);
v___x_3332_ = lean_apply_4(v_toBind_3320_, lean_box(0), lean_box(0), v___x_3326_, v___f_3331_);
v___x_3333_ = lean_apply_4(v_toBind_3320_, lean_box(0), lean_box(0), v___x_3332_, v___f_3327_);
return v___x_3333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___boxed(lean_object* v_inst_3334_, lean_object* v_inst_3335_, lean_object* v_inst_3336_, lean_object* v_input_3337_, lean_object* v_pre_3338_, lean_object* v_post_3339_, lean_object* v_usedLetOnly_3340_, lean_object* v_skipConstInApp_3341_){
_start:
{
uint8_t v_usedLetOnly_boxed_3342_; uint8_t v_skipConstInApp_boxed_3343_; lean_object* v_res_3344_; 
v_usedLetOnly_boxed_3342_ = lean_unbox(v_usedLetOnly_3340_);
v_skipConstInApp_boxed_3343_ = lean_unbox(v_skipConstInApp_3341_);
v_res_3344_ = l_Lean_Meta_transform___redArg(v_inst_3334_, v_inst_3335_, v_inst_3336_, v_input_3337_, v_pre_3338_, v_post_3339_, v_usedLetOnly_boxed_3342_, v_skipConstInApp_boxed_3343_);
return v_res_3344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform(lean_object* v_m_3345_, lean_object* v_inst_3346_, lean_object* v_inst_3347_, lean_object* v_inst_3348_, lean_object* v_input_3349_, lean_object* v_pre_3350_, lean_object* v_post_3351_, uint8_t v_usedLetOnly_3352_, uint8_t v_skipConstInApp_3353_){
_start:
{
lean_object* v___x_3354_; 
v___x_3354_ = l_Lean_Meta_transform___redArg(v_inst_3346_, v_inst_3347_, v_inst_3348_, v_input_3349_, v_pre_3350_, v_post_3351_, v_usedLetOnly_3352_, v_skipConstInApp_3353_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___boxed(lean_object* v_m_3355_, lean_object* v_inst_3356_, lean_object* v_inst_3357_, lean_object* v_inst_3358_, lean_object* v_input_3359_, lean_object* v_pre_3360_, lean_object* v_post_3361_, lean_object* v_usedLetOnly_3362_, lean_object* v_skipConstInApp_3363_){
_start:
{
uint8_t v_usedLetOnly_boxed_3364_; uint8_t v_skipConstInApp_boxed_3365_; lean_object* v_res_3366_; 
v_usedLetOnly_boxed_3364_ = lean_unbox(v_usedLetOnly_3362_);
v_skipConstInApp_boxed_3365_ = lean_unbox(v_skipConstInApp_3363_);
v_res_3366_ = l_Lean_Meta_transform(v_m_3355_, v_inst_3356_, v_inst_3357_, v_inst_3358_, v_input_3359_, v_pre_3360_, v_post_3361_, v_usedLetOnly_boxed_3364_, v_skipConstInApp_boxed_3365_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(lean_object* v_e_3367_, lean_object* v___y_3368_){
_start:
{
uint8_t v___x_3370_; 
v___x_3370_ = l_Lean_Expr_hasMVar(v_e_3367_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; 
v___x_3371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3371_, 0, v_e_3367_);
return v___x_3371_;
}
else
{
lean_object* v___x_3372_; lean_object* v_mctx_3373_; lean_object* v___x_3374_; lean_object* v_fst_3375_; lean_object* v_snd_3376_; lean_object* v___x_3377_; lean_object* v_cache_3378_; lean_object* v_zetaDeltaFVarIds_3379_; lean_object* v_postponed_3380_; lean_object* v_diag_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3390_; 
v___x_3372_ = lean_st_ref_get(v___y_3368_);
v_mctx_3373_ = lean_ctor_get(v___x_3372_, 0);
lean_inc_ref(v_mctx_3373_);
lean_dec(v___x_3372_);
v___x_3374_ = l_Lean_instantiateMVarsCore(v_mctx_3373_, v_e_3367_);
v_fst_3375_ = lean_ctor_get(v___x_3374_, 0);
lean_inc(v_fst_3375_);
v_snd_3376_ = lean_ctor_get(v___x_3374_, 1);
lean_inc(v_snd_3376_);
lean_dec_ref(v___x_3374_);
v___x_3377_ = lean_st_ref_take(v___y_3368_);
v_cache_3378_ = lean_ctor_get(v___x_3377_, 1);
v_zetaDeltaFVarIds_3379_ = lean_ctor_get(v___x_3377_, 2);
v_postponed_3380_ = lean_ctor_get(v___x_3377_, 3);
v_diag_3381_ = lean_ctor_get(v___x_3377_, 4);
v_isSharedCheck_3390_ = !lean_is_exclusive(v___x_3377_);
if (v_isSharedCheck_3390_ == 0)
{
lean_object* v_unused_3391_; 
v_unused_3391_ = lean_ctor_get(v___x_3377_, 0);
lean_dec(v_unused_3391_);
v___x_3383_ = v___x_3377_;
v_isShared_3384_ = v_isSharedCheck_3390_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_diag_3381_);
lean_inc(v_postponed_3380_);
lean_inc(v_zetaDeltaFVarIds_3379_);
lean_inc(v_cache_3378_);
lean_dec(v___x_3377_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3390_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
lean_ctor_set(v___x_3383_, 0, v_snd_3376_);
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v_snd_3376_);
lean_ctor_set(v_reuseFailAlloc_3389_, 1, v_cache_3378_);
lean_ctor_set(v_reuseFailAlloc_3389_, 2, v_zetaDeltaFVarIds_3379_);
lean_ctor_set(v_reuseFailAlloc_3389_, 3, v_postponed_3380_);
lean_ctor_set(v_reuseFailAlloc_3389_, 4, v_diag_3381_);
v___x_3386_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3387_ = lean_st_ref_put(v___y_3368_, v___x_3386_);
v___x_3388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3388_, 0, v_fst_3375_);
return v___x_3388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg___boxed(lean_object* v_e_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v_res_3395_; 
v_res_3395_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_e_3392_, v___y_3393_);
lean_dec(v___y_3393_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(lean_object* v_e_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_){
_start:
{
lean_object* v___x_3402_; 
v___x_3402_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_e_3396_, v___y_3398_);
return v___x_3402_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___boxed(lean_object* v_e_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_){
_start:
{
lean_object* v_res_3409_; 
v_res_3409_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(v_e_3403_, v___y_3404_, v___y_3405_, v___y_3406_, v___y_3407_);
lean_dec(v___y_3407_);
lean_dec_ref(v___y_3406_);
lean_dec(v___y_3405_);
lean_dec_ref(v___y_3404_);
return v_res_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0(uint8_t v_zetaHave_3410_, lean_object* v___x_3411_, uint8_t v_zetaDelta_3412_, lean_object* v_fvarId_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_){
_start:
{
lean_object* v___x_3419_; 
v___x_3419_ = l_Lean_FVarId_findDecl_x3f___redArg(v_fvarId_3413_, v___y_3414_);
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3448_; 
v_a_3420_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3422_ = v___x_3419_;
v_isShared_3423_ = v_isSharedCheck_3448_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3419_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3448_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
if (lean_obj_tag(v_a_3420_) == 1)
{
lean_object* v_val_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3443_; 
v_val_3424_ = lean_ctor_get(v_a_3420_, 0);
v_isSharedCheck_3443_ = !lean_is_exclusive(v_a_3420_);
if (v_isSharedCheck_3443_ == 0)
{
v___x_3426_ = v_a_3420_;
v_isShared_3427_ = v_isSharedCheck_3443_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_val_3424_);
lean_dec(v_a_3420_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3443_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
uint8_t v___y_3429_; 
if (v_zetaDelta_3412_ == 0)
{
lean_object* v___x_3437_; uint8_t v___x_3438_; 
v___x_3437_ = l_Lean_LocalDecl_index(v_val_3424_);
v___x_3438_ = lean_nat_dec_lt(v___x_3437_, v___x_3411_);
lean_dec(v___x_3437_);
if (v___x_3438_ == 0)
{
lean_del_object(v___x_3426_);
goto v___jp_3434_;
}
else
{
lean_object* v___x_3439_; lean_object* v___x_3441_; 
lean_dec(v_val_3424_);
lean_del_object(v___x_3422_);
v___x_3439_ = lean_box(0);
if (v_isShared_3427_ == 0)
{
lean_ctor_set_tag(v___x_3426_, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3439_);
v___x_3441_ = v___x_3426_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v___x_3439_);
v___x_3441_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
return v___x_3441_;
}
}
}
else
{
lean_del_object(v___x_3426_);
goto v___jp_3434_;
}
v___jp_3428_:
{
lean_object* v___x_3430_; lean_object* v___x_3432_; 
v___x_3430_ = l_Lean_LocalDecl_value_x3f(v_val_3424_, v___y_3429_);
lean_dec(v_val_3424_);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 0, v___x_3430_);
v___x_3432_ = v___x_3422_;
goto v_reusejp_3431_;
}
else
{
lean_object* v_reuseFailAlloc_3433_; 
v_reuseFailAlloc_3433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3433_, 0, v___x_3430_);
v___x_3432_ = v_reuseFailAlloc_3433_;
goto v_reusejp_3431_;
}
v_reusejp_3431_:
{
return v___x_3432_;
}
}
v___jp_3434_:
{
if (v_zetaHave_3410_ == 0)
{
v___y_3429_ = v_zetaHave_3410_;
goto v___jp_3428_;
}
else
{
lean_object* v___x_3435_; uint8_t v___x_3436_; 
v___x_3435_ = l_Lean_LocalDecl_index(v_val_3424_);
v___x_3436_ = lean_nat_dec_le(v___x_3411_, v___x_3435_);
lean_dec(v___x_3435_);
v___y_3429_ = v___x_3436_;
goto v___jp_3428_;
}
}
}
}
else
{
lean_object* v___x_3444_; lean_object* v___x_3446_; 
lean_dec(v_a_3420_);
v___x_3444_ = lean_box(0);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 0, v___x_3444_);
v___x_3446_ = v___x_3422_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v___x_3444_);
v___x_3446_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
return v___x_3446_;
}
}
}
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
v_a_3449_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3419_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3419_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0___boxed(lean_object* v_zetaHave_3457_, lean_object* v___x_3458_, lean_object* v_zetaDelta_3459_, lean_object* v_fvarId_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_){
_start:
{
uint8_t v_zetaHave_boxed_3466_; uint8_t v_zetaDelta_boxed_3467_; lean_object* v_res_3468_; 
v_zetaHave_boxed_3466_ = lean_unbox(v_zetaHave_3457_);
v_zetaDelta_boxed_3467_ = lean_unbox(v_zetaDelta_3459_);
v_res_3468_ = l_Lean_Meta_zetaReduce___lam__0(v_zetaHave_boxed_3466_, v___x_3458_, v_zetaDelta_boxed_3467_, v_fvarId_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_);
lean_dec(v___y_3464_);
lean_dec_ref(v___y_3463_);
lean_dec(v___y_3462_);
lean_dec_ref(v___y_3461_);
lean_dec(v___x_3458_);
return v_res_3468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1(lean_object* v_e_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_){
_start:
{
lean_object* v___x_3475_; lean_object* v___x_3476_; 
v___x_3475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3475_, 0, v_e_3469_);
v___x_3476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3475_);
return v___x_3476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1___boxed(lean_object* v_e_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_){
_start:
{
lean_object* v_res_3483_; 
v_res_3483_ = l_Lean_Meta_zetaReduce___lam__1(v_e_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_);
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
return v_res_3483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2(lean_object* v___f_3484_, lean_object* v_e_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_){
_start:
{
if (lean_obj_tag(v_e_3485_) == 1)
{
lean_object* v_fvarId_3491_; lean_object* v___x_3492_; 
v_fvarId_3491_ = lean_ctor_get(v_e_3485_, 0);
lean_inc(v___y_3489_);
lean_inc_ref(v___y_3488_);
lean_inc(v___y_3487_);
lean_inc_ref(v___y_3486_);
lean_inc(v_fvarId_3491_);
v___x_3492_ = lean_apply_6(v___f_3484_, v_fvarId_3491_, v___y_3486_, v___y_3487_, v___y_3488_, v___y_3489_, lean_box(0));
if (lean_obj_tag(v___x_3492_) == 0)
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3518_; 
v_a_3493_ = lean_ctor_get(v___x_3492_, 0);
v_isSharedCheck_3518_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3518_ == 0)
{
v___x_3495_ = v___x_3492_;
v_isShared_3496_ = v_isSharedCheck_3518_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3492_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3518_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
if (lean_obj_tag(v_a_3493_) == 1)
{
lean_object* v_val_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3513_; 
lean_del_object(v___x_3495_);
lean_dec_ref_known(v_e_3485_, 1);
v_val_3497_ = lean_ctor_get(v_a_3493_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v_a_3493_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3499_ = v_a_3493_;
v_isShared_3500_ = v_isSharedCheck_3513_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_val_3497_);
lean_dec(v_a_3493_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3513_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3501_; lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3512_; 
v___x_3501_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_3497_, v___y_3487_);
v_a_3502_ = lean_ctor_get(v___x_3501_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3501_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3504_ = v___x_3501_;
v_isShared_3505_ = v_isSharedCheck_3512_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3501_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3512_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3507_; 
if (v_isShared_3500_ == 0)
{
lean_ctor_set(v___x_3499_, 0, v_a_3502_);
v___x_3507_ = v___x_3499_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_a_3502_);
v___x_3507_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
lean_object* v___x_3509_; 
if (v_isShared_3505_ == 0)
{
lean_ctor_set(v___x_3504_, 0, v___x_3507_);
v___x_3509_ = v___x_3504_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v___x_3507_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
}
}
else
{
lean_object* v___x_3514_; lean_object* v___x_3516_; 
lean_dec(v_a_3493_);
v___x_3514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3514_, 0, v_e_3485_);
if (v_isShared_3496_ == 0)
{
lean_ctor_set(v___x_3495_, 0, v___x_3514_);
v___x_3516_ = v___x_3495_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v___x_3514_);
v___x_3516_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
return v___x_3516_;
}
}
}
}
else
{
lean_object* v_a_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3526_; 
lean_dec_ref_known(v_e_3485_, 1);
v_a_3519_ = lean_ctor_get(v___x_3492_, 0);
v_isSharedCheck_3526_ = !lean_is_exclusive(v___x_3492_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3521_ = v___x_3492_;
v_isShared_3522_ = v_isSharedCheck_3526_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_a_3519_);
lean_dec(v___x_3492_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3526_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
lean_object* v___x_3524_; 
if (v_isShared_3522_ == 0)
{
v___x_3524_ = v___x_3521_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_a_3519_);
v___x_3524_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
return v___x_3524_;
}
}
}
}
else
{
lean_object* v___x_3527_; lean_object* v___x_3528_; 
lean_dec_ref(v_e_3485_);
lean_dec_ref(v___f_3484_);
v___x_3527_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_3528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3527_);
return v___x_3528_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2___boxed(lean_object* v___f_3529_, lean_object* v_e_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_){
_start:
{
lean_object* v_res_3536_; 
v_res_3536_ = l_Lean_Meta_zetaReduce___lam__2(v___f_3529_, v_e_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_);
lean_dec(v___y_3534_);
lean_dec_ref(v___y_3533_);
lean_dec(v___y_3532_);
lean_dec_ref(v___y_3531_);
return v_res_3536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4(lean_object* v___f_3537_, lean_object* v_e_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_){
_start:
{
lean_object* v___x_3544_; 
v___x_3544_ = l_Lean_Expr_getAppFn(v_e_3538_);
if (lean_obj_tag(v___x_3544_) == 1)
{
lean_object* v_fvarId_3545_; lean_object* v___x_3546_; 
v_fvarId_3545_ = lean_ctor_get(v___x_3544_, 0);
lean_inc(v_fvarId_3545_);
lean_dec_ref_known(v___x_3544_, 1);
lean_inc(v___y_3542_);
lean_inc_ref(v___y_3541_);
lean_inc(v___y_3540_);
lean_inc_ref(v___y_3539_);
v___x_3546_ = lean_apply_6(v___f_3537_, v_fvarId_3545_, v___y_3539_, v___y_3540_, v___y_3541_, v___y_3542_, lean_box(0));
if (lean_obj_tag(v___x_3546_) == 0)
{
lean_object* v_a_3547_; lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3579_; 
v_a_3547_ = lean_ctor_get(v___x_3546_, 0);
v_isSharedCheck_3579_ = !lean_is_exclusive(v___x_3546_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3549_ = v___x_3546_;
v_isShared_3550_ = v_isSharedCheck_3579_;
goto v_resetjp_3548_;
}
else
{
lean_inc(v_a_3547_);
lean_dec(v___x_3546_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3579_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
if (lean_obj_tag(v_a_3547_) == 1)
{
lean_object* v_val_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3574_; 
lean_del_object(v___x_3549_);
v_val_3551_ = lean_ctor_get(v_a_3547_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v_a_3547_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3553_ = v_a_3547_;
v_isShared_3554_ = v_isSharedCheck_3574_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_val_3551_);
lean_dec(v_a_3547_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3574_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3555_; lean_object* v_a_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3573_; 
v___x_3555_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_3551_, v___y_3540_);
v_a_3556_ = lean_ctor_get(v___x_3555_, 0);
v_isSharedCheck_3573_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3558_ = v___x_3555_;
v_isShared_3559_ = v_isSharedCheck_3573_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_a_3556_);
lean_dec(v___x_3555_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3573_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v_dummy_3560_; lean_object* v_nargs_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3568_; 
v_dummy_3560_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1);
v_nargs_3561_ = l_Lean_Expr_getAppNumArgs(v_e_3538_);
lean_inc(v_nargs_3561_);
v___x_3562_ = lean_mk_array(v_nargs_3561_, v_dummy_3560_);
v___x_3563_ = lean_unsigned_to_nat(1u);
v___x_3564_ = lean_nat_sub(v_nargs_3561_, v___x_3563_);
lean_dec(v_nargs_3561_);
v___x_3565_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3538_, v___x_3562_, v___x_3564_);
v___x_3566_ = l_Lean_Expr_beta(v_a_3556_, v___x_3565_);
if (v_isShared_3554_ == 0)
{
lean_ctor_set(v___x_3553_, 0, v___x_3566_);
v___x_3568_ = v___x_3553_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v___x_3566_);
v___x_3568_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
lean_object* v___x_3570_; 
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 0, v___x_3568_);
v___x_3570_ = v___x_3558_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v___x_3568_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
}
}
}
else
{
lean_object* v___x_3575_; lean_object* v___x_3577_; 
lean_dec(v_a_3547_);
lean_dec_ref(v_e_3538_);
v___x_3575_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
if (v_isShared_3550_ == 0)
{
lean_ctor_set(v___x_3549_, 0, v___x_3575_);
v___x_3577_ = v___x_3549_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v___x_3575_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
return v___x_3577_;
}
}
}
}
else
{
lean_object* v_a_3580_; lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3587_; 
lean_dec_ref(v_e_3538_);
v_a_3580_ = lean_ctor_get(v___x_3546_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3546_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3582_ = v___x_3546_;
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_a_3580_);
lean_dec(v___x_3546_);
v___x_3582_ = lean_box(0);
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
v_resetjp_3581_:
{
lean_object* v___x_3585_; 
if (v_isShared_3583_ == 0)
{
v___x_3585_ = v___x_3582_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_a_3580_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
}
else
{
lean_object* v___x_3588_; lean_object* v___x_3589_; 
lean_dec_ref(v___x_3544_);
lean_dec_ref(v_e_3538_);
lean_dec_ref(v___f_3537_);
v___x_3588_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3588_);
return v___x_3589_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4___boxed(lean_object* v___f_3590_, lean_object* v_e_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_){
_start:
{
lean_object* v_res_3597_; 
v_res_3597_ = l_Lean_Meta_zetaReduce___lam__4(v___f_3590_, v_e_3591_, v___y_3592_, v___y_3593_, v___y_3594_, v___y_3595_);
lean_dec(v___y_3595_);
lean_dec_ref(v___y_3594_);
lean_dec(v___y_3593_);
lean_dec_ref(v___y_3592_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_object* v_00_u03b1_3598_, lean_object* v_x_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_){
_start:
{
lean_object* v___x_3605_; lean_object* v___x_3606_; 
v___x_3605_ = lean_apply_1(v_x_3599_, lean_box(0));
v___x_3606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3606_, 0, v___x_3605_);
return v___x_3606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0___boxed(lean_object* v_00_u03b1_3607_, lean_object* v_x_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_){
_start:
{
lean_object* v_res_3614_; 
v_res_3614_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(v_00_u03b1_3607_, v_x_3608_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_);
lean_dec(v___y_3612_);
lean_dec_ref(v___y_3611_);
lean_dec(v___y_3610_);
lean_dec_ref(v___y_3609_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object* v___x_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_){
_start:
{
lean_object* v___x_3621_; 
v___x_3621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3615_);
return v___x_3621_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object* v___x_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_){
_start:
{
lean_object* v_res_3628_; 
v_res_3628_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2(v___x_3622_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_);
lean_dec(v___y_3626_);
lean_dec_ref(v___y_3625_);
lean_dec(v___y_3624_);
lean_dec_ref(v___y_3623_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(lean_object* v_k_3629_, lean_object* v___y_3630_, lean_object* v_b_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
lean_object* v___x_3637_; 
lean_inc(v___y_3635_);
lean_inc_ref(v___y_3634_);
lean_inc(v___y_3633_);
lean_inc_ref(v___y_3632_);
lean_inc(v___y_3630_);
v___x_3637_ = lean_apply_7(v_k_3629_, v_b_3631_, v___y_3630_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_, lean_box(0));
return v___x_3637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed(lean_object* v_k_3638_, lean_object* v___y_3639_, lean_object* v_b_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_){
_start:
{
lean_object* v_res_3646_; 
v_res_3646_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(v_k_3638_, v___y_3639_, v_b_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_);
lean_dec(v___y_3644_);
lean_dec_ref(v___y_3643_);
lean_dec(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec(v___y_3639_);
return v_res_3646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object* v_name_3647_, uint8_t v_bi_3648_, lean_object* v_type_3649_, lean_object* v_k_3650_, uint8_t v_kind_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_){
_start:
{
lean_object* v___f_3658_; lean_object* v___x_3659_; 
lean_inc(v___y_3652_);
v___f_3658_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3658_, 0, v_k_3650_);
lean_closure_set(v___f_3658_, 1, v___y_3652_);
v___x_3659_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3647_, v_bi_3648_, v_type_3649_, v___f_3658_, v_kind_3651_, v___y_3653_, v___y_3654_, v___y_3655_, v___y_3656_);
if (lean_obj_tag(v___x_3659_) == 0)
{
return v___x_3659_;
}
else
{
lean_object* v_a_3660_; lean_object* v___x_3662_; uint8_t v_isShared_3663_; uint8_t v_isSharedCheck_3667_; 
v_a_3660_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3667_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3662_ = v___x_3659_;
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
else
{
lean_inc(v_a_3660_);
lean_dec(v___x_3659_);
v___x_3662_ = lean_box(0);
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
v_resetjp_3661_:
{
lean_object* v___x_3665_; 
if (v_isShared_3663_ == 0)
{
v___x_3665_ = v___x_3662_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v_a_3660_);
v___x_3665_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
return v___x_3665_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v_name_3668_, lean_object* v_bi_3669_, lean_object* v_type_3670_, lean_object* v_k_3671_, lean_object* v_kind_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_){
_start:
{
uint8_t v_bi_boxed_3679_; uint8_t v_kind_boxed_3680_; lean_object* v_res_3681_; 
v_bi_boxed_3679_ = lean_unbox(v_bi_3669_);
v_kind_boxed_3680_ = lean_unbox(v_kind_3672_);
v_res_3681_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_name_3668_, v_bi_boxed_3679_, v_type_3670_, v_k_3671_, v_kind_boxed_3680_, v___y_3673_, v___y_3674_, v___y_3675_, v___y_3676_, v___y_3677_);
lean_dec(v___y_3677_);
lean_dec_ref(v___y_3676_);
lean_dec(v___y_3675_);
lean_dec_ref(v___y_3674_);
lean_dec(v___y_3673_);
return v_res_3681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(lean_object* v_name_3682_, lean_object* v_type_3683_, lean_object* v_val_3684_, lean_object* v_k_3685_, uint8_t v_nondep_3686_, uint8_t v_kind_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_){
_start:
{
lean_object* v___f_3694_; lean_object* v___x_3695_; 
lean_inc(v___y_3688_);
v___f_3694_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3694_, 0, v_k_3685_);
lean_closure_set(v___f_3694_, 1, v___y_3688_);
v___x_3695_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_3682_, v_type_3683_, v_val_3684_, v___f_3694_, v_nondep_3686_, v_kind_3687_, v___y_3689_, v___y_3690_, v___y_3691_, v___y_3692_);
if (lean_obj_tag(v___x_3695_) == 0)
{
return v___x_3695_;
}
else
{
lean_object* v_a_3696_; lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3703_; 
v_a_3696_ = lean_ctor_get(v___x_3695_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3695_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3698_ = v___x_3695_;
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
else
{
lean_inc(v_a_3696_);
lean_dec(v___x_3695_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
lean_object* v___x_3701_; 
if (v_isShared_3699_ == 0)
{
v___x_3701_ = v___x_3698_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_a_3696_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg___boxed(lean_object* v_name_3704_, lean_object* v_type_3705_, lean_object* v_val_3706_, lean_object* v_k_3707_, lean_object* v_nondep_3708_, lean_object* v_kind_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
uint8_t v_nondep_boxed_3716_; uint8_t v_kind_boxed_3717_; lean_object* v_res_3718_; 
v_nondep_boxed_3716_ = lean_unbox(v_nondep_3708_);
v_kind_boxed_3717_ = lean_unbox(v_kind_3709_);
v_res_3718_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_name_3704_, v_type_3705_, v_val_3706_, v_k_3707_, v_nondep_boxed_3716_, v_kind_boxed_3717_, v___y_3710_, v___y_3711_, v___y_3712_, v___y_3713_, v___y_3714_);
lean_dec(v___y_3714_);
lean_dec_ref(v___y_3713_);
lean_dec(v___y_3712_);
lean_dec_ref(v___y_3711_);
lean_dec(v___y_3710_);
return v_res_3718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_3719_, lean_object* v_x_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_){
_start:
{
lean_object* v___x_3726_; lean_object* v___x_3727_; 
v___x_3726_ = lean_apply_1(v_x_3720_, lean_box(0));
v___x_3727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3727_, 0, v___x_3726_);
return v___x_3727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_3728_, lean_object* v_x_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_){
_start:
{
lean_object* v_res_3735_; 
v_res_3735_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(v_00_u03b1_3728_, v_x_3729_, v___y_3730_, v___y_3731_, v___y_3732_, v___y_3733_);
lean_dec(v___y_3733_);
lean_dec_ref(v___y_3732_);
lean_dec(v___y_3731_);
lean_dec_ref(v___y_3730_);
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(lean_object* v_ref_3736_){
_start:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3738_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_3739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3739_, 0, v_ref_3736_);
lean_ctor_set(v___x_3739_, 1, v___x_3738_);
v___x_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3739_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg___boxed(lean_object* v_ref_3741_, lean_object* v___y_3742_){
_start:
{
lean_object* v_res_3743_; 
v_res_3743_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_3741_);
return v_res_3743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(lean_object* v_x_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_){
_start:
{
lean_object* v___y_3752_; lean_object* v_toCold_3761_; lean_object* v_currRecDepth_3762_; lean_object* v_ref_3763_; uint8_t v_diag_3764_; uint8_t v_suppressElabErrors_3765_; lean_object* v_maxRecDepth_3771_; lean_object* v___x_3772_; uint8_t v___x_3773_; 
v_toCold_3761_ = lean_ctor_get(v___y_3748_, 0);
v_currRecDepth_3762_ = lean_ctor_get(v___y_3748_, 1);
v_ref_3763_ = lean_ctor_get(v___y_3748_, 2);
v_diag_3764_ = lean_ctor_get_uint8(v___y_3748_, sizeof(void*)*3);
v_suppressElabErrors_3765_ = lean_ctor_get_uint8(v___y_3748_, sizeof(void*)*3 + 1);
v_maxRecDepth_3771_ = lean_ctor_get(v_toCold_3761_, 3);
v___x_3772_ = lean_unsigned_to_nat(0u);
v___x_3773_ = lean_nat_dec_eq(v_maxRecDepth_3771_, v___x_3772_);
if (v___x_3773_ == 0)
{
uint8_t v___x_3774_; 
v___x_3774_ = lean_nat_dec_eq(v_currRecDepth_3762_, v_maxRecDepth_3771_);
if (v___x_3774_ == 0)
{
goto v___jp_3766_;
}
else
{
lean_object* v___x_3775_; 
lean_dec_ref(v_x_3744_);
lean_inc(v_ref_3763_);
v___x_3775_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_3763_);
v___y_3752_ = v___x_3775_;
goto v___jp_3751_;
}
}
else
{
goto v___jp_3766_;
}
v___jp_3751_:
{
if (lean_obj_tag(v___y_3752_) == 0)
{
return v___y_3752_;
}
else
{
lean_object* v_a_3753_; lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3760_; 
v_a_3753_ = lean_ctor_get(v___y_3752_, 0);
v_isSharedCheck_3760_ = !lean_is_exclusive(v___y_3752_);
if (v_isSharedCheck_3760_ == 0)
{
v___x_3755_ = v___y_3752_;
v_isShared_3756_ = v_isSharedCheck_3760_;
goto v_resetjp_3754_;
}
else
{
lean_inc(v_a_3753_);
lean_dec(v___y_3752_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3760_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
lean_object* v___x_3758_; 
if (v_isShared_3756_ == 0)
{
v___x_3758_ = v___x_3755_;
goto v_reusejp_3757_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v_a_3753_);
v___x_3758_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3757_;
}
v_reusejp_3757_:
{
return v___x_3758_;
}
}
}
}
v___jp_3766_:
{
lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v___x_3767_ = lean_unsigned_to_nat(1u);
v___x_3768_ = lean_nat_add(v_currRecDepth_3762_, v___x_3767_);
lean_inc(v_ref_3763_);
lean_inc_ref(v_toCold_3761_);
v___x_3769_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3769_, 0, v_toCold_3761_);
lean_ctor_set(v___x_3769_, 1, v___x_3768_);
lean_ctor_set(v___x_3769_, 2, v_ref_3763_);
lean_ctor_set_uint8(v___x_3769_, sizeof(void*)*3, v_diag_3764_);
lean_ctor_set_uint8(v___x_3769_, sizeof(void*)*3 + 1, v_suppressElabErrors_3765_);
lean_inc(v___y_3749_);
lean_inc(v___y_3747_);
lean_inc_ref(v___y_3746_);
lean_inc(v___y_3745_);
v___x_3770_ = lean_apply_6(v_x_3744_, v___y_3745_, v___y_3746_, v___y_3747_, v___x_3769_, v___y_3749_, lean_box(0));
v___y_3752_ = v___x_3770_;
goto v___jp_3751_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg___boxed(lean_object* v_x_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_){
_start:
{
lean_object* v_res_3783_; 
v_res_3783_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v_x_3776_, v___y_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_);
lean_dec(v___y_3781_);
lean_dec_ref(v___y_3780_);
lean_dec(v___y_3779_);
lean_dec_ref(v___y_3778_);
lean_dec(v___y_3777_);
return v_res_3783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed(lean_object* v_fvars_3784_, lean_object* v_pre_3785_, lean_object* v_post_3786_, lean_object* v_usedLetOnly_3787_, lean_object* v_skipConstInApp_3788_, lean_object* v_skipInstances_3789_, lean_object* v_body_3790_, lean_object* v_x_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_){
_start:
{
uint8_t v_usedLetOnly_boxed_3798_; uint8_t v_skipConstInApp_boxed_3799_; uint8_t v_skipInstances_boxed_3800_; lean_object* v_res_3801_; 
v_usedLetOnly_boxed_3798_ = lean_unbox(v_usedLetOnly_3787_);
v_skipConstInApp_boxed_3799_ = lean_unbox(v_skipConstInApp_3788_);
v_skipInstances_boxed_3800_ = lean_unbox(v_skipInstances_3789_);
v_res_3801_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(v_fvars_3784_, v_pre_3785_, v_post_3786_, v_usedLetOnly_boxed_3798_, v_skipConstInApp_boxed_3799_, v_skipInstances_boxed_3800_, v_body_3790_, v_x_3791_, v___y_3792_, v___y_3793_, v___y_3794_, v___y_3795_, v___y_3796_);
lean_dec(v___y_3796_);
lean_dec_ref(v___y_3795_);
lean_dec(v___y_3794_);
lean_dec_ref(v___y_3793_);
lean_dec(v___y_3792_);
return v_res_3801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(lean_object* v_fvars_3802_, lean_object* v_pre_3803_, lean_object* v_post_3804_, uint8_t v_usedLetOnly_3805_, uint8_t v_skipConstInApp_3806_, uint8_t v_skipInstances_3807_, lean_object* v_body_3808_, lean_object* v_x_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_){
_start:
{
lean_object* v___x_3816_; lean_object* v___x_3817_; 
v___x_3816_ = lean_array_push(v_fvars_3802_, v_x_3809_);
v___x_3817_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_3803_, v_post_3804_, v_usedLetOnly_3805_, v_skipConstInApp_3806_, v_skipInstances_3807_, v___x_3816_, v_body_3808_, v___y_3810_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_);
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object* v_fvars_3818_, lean_object* v_pre_3819_, lean_object* v_post_3820_, lean_object* v_usedLetOnly_3821_, lean_object* v_skipConstInApp_3822_, lean_object* v_skipInstances_3823_, lean_object* v_body_3824_, lean_object* v_x_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_){
_start:
{
uint8_t v_usedLetOnly_boxed_3832_; uint8_t v_skipConstInApp_boxed_3833_; uint8_t v_skipInstances_boxed_3834_; lean_object* v_res_3835_; 
v_usedLetOnly_boxed_3832_ = lean_unbox(v_usedLetOnly_3821_);
v_skipConstInApp_boxed_3833_ = lean_unbox(v_skipConstInApp_3822_);
v_skipInstances_boxed_3834_ = lean_unbox(v_skipInstances_3823_);
v_res_3835_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(v_fvars_3818_, v_pre_3819_, v_post_3820_, v_usedLetOnly_boxed_3832_, v_skipConstInApp_boxed_3833_, v_skipInstances_boxed_3834_, v_body_3824_, v_x_3825_, v___y_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
lean_dec(v___y_3828_);
lean_dec_ref(v___y_3827_);
lean_dec(v___y_3826_);
return v_res_3835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(lean_object* v_pre_3836_, lean_object* v_post_3837_, uint8_t v_usedLetOnly_3838_, uint8_t v_skipConstInApp_3839_, uint8_t v_skipInstances_3840_, lean_object* v_e_3841_, lean_object* v_a_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_){
_start:
{
lean_object* v___x_3848_; 
lean_inc_ref(v_post_3837_);
lean_inc(v___y_3846_);
lean_inc_ref(v___y_3845_);
lean_inc(v___y_3844_);
lean_inc_ref(v___y_3843_);
lean_inc_ref(v_e_3841_);
v___x_3848_ = lean_apply_6(v_post_3837_, v_e_3841_, v___y_3843_, v___y_3844_, v___y_3845_, v___y_3846_, lean_box(0));
if (lean_obj_tag(v___x_3848_) == 0)
{
lean_object* v_a_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3867_; 
v_a_3849_ = lean_ctor_get(v___x_3848_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v___x_3848_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3851_ = v___x_3848_;
v_isShared_3852_ = v_isSharedCheck_3867_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_a_3849_);
lean_dec(v___x_3848_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3867_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
switch(lean_obj_tag(v_a_3849_))
{
case 0:
{
lean_object* v_e_3853_; lean_object* v___x_3855_; 
lean_dec_ref(v_e_3841_);
lean_dec_ref(v_post_3837_);
lean_dec_ref(v_pre_3836_);
v_e_3853_ = lean_ctor_get(v_a_3849_, 0);
lean_inc_ref(v_e_3853_);
lean_dec_ref_known(v_a_3849_, 1);
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 0, v_e_3853_);
v___x_3855_ = v___x_3851_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v_e_3853_);
v___x_3855_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
return v___x_3855_;
}
}
case 1:
{
lean_object* v_e_3857_; lean_object* v___x_3858_; 
lean_del_object(v___x_3851_);
lean_dec_ref(v_e_3841_);
v_e_3857_ = lean_ctor_get(v_a_3849_, 0);
lean_inc_ref(v_e_3857_);
lean_dec_ref_known(v_a_3849_, 1);
v___x_3858_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3836_, v_post_3837_, v_usedLetOnly_3838_, v_skipConstInApp_3839_, v_skipInstances_3840_, v_e_3857_, v_a_3842_, v___y_3843_, v___y_3844_, v___y_3845_, v___y_3846_);
return v___x_3858_;
}
default: 
{
lean_object* v_e_x3f_3859_; 
lean_dec_ref(v_post_3837_);
lean_dec_ref(v_pre_3836_);
v_e_x3f_3859_ = lean_ctor_get(v_a_3849_, 0);
lean_inc(v_e_x3f_3859_);
lean_dec_ref_known(v_a_3849_, 1);
if (lean_obj_tag(v_e_x3f_3859_) == 0)
{
lean_object* v___x_3861_; 
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 0, v_e_3841_);
v___x_3861_ = v___x_3851_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_e_3841_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
return v___x_3861_;
}
}
else
{
lean_object* v_val_3863_; lean_object* v___x_3865_; 
lean_dec_ref(v_e_3841_);
v_val_3863_ = lean_ctor_get(v_e_x3f_3859_, 0);
lean_inc(v_val_3863_);
lean_dec_ref_known(v_e_x3f_3859_, 1);
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 0, v_val_3863_);
v___x_3865_ = v___x_3851_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_val_3863_);
v___x_3865_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
return v___x_3865_;
}
}
}
}
}
}
else
{
lean_object* v_a_3868_; lean_object* v___x_3870_; uint8_t v_isShared_3871_; uint8_t v_isSharedCheck_3875_; 
lean_dec_ref(v_e_3841_);
lean_dec_ref(v_post_3837_);
lean_dec_ref(v_pre_3836_);
v_a_3868_ = lean_ctor_get(v___x_3848_, 0);
v_isSharedCheck_3875_ = !lean_is_exclusive(v___x_3848_);
if (v_isSharedCheck_3875_ == 0)
{
v___x_3870_ = v___x_3848_;
v_isShared_3871_ = v_isSharedCheck_3875_;
goto v_resetjp_3869_;
}
else
{
lean_inc(v_a_3868_);
lean_dec(v___x_3848_);
v___x_3870_ = lean_box(0);
v_isShared_3871_ = v_isSharedCheck_3875_;
goto v_resetjp_3869_;
}
v_resetjp_3869_:
{
lean_object* v___x_3873_; 
if (v_isShared_3871_ == 0)
{
v___x_3873_ = v___x_3870_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3874_, 0, v_a_3868_);
v___x_3873_ = v_reuseFailAlloc_3874_;
goto v_reusejp_3872_;
}
v_reusejp_3872_:
{
return v___x_3873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(lean_object* v_pre_3876_, lean_object* v_post_3877_, uint8_t v_usedLetOnly_3878_, uint8_t v_skipConstInApp_3879_, uint8_t v_skipInstances_3880_, lean_object* v_fvars_3881_, lean_object* v_e_3882_, lean_object* v_a_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_){
_start:
{
if (lean_obj_tag(v_e_3882_) == 6)
{
lean_object* v_binderName_3889_; lean_object* v_binderType_3890_; lean_object* v_body_3891_; uint8_t v_binderInfo_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___f_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v_binderName_3889_ = lean_ctor_get(v_e_3882_, 0);
lean_inc(v_binderName_3889_);
v_binderType_3890_ = lean_ctor_get(v_e_3882_, 1);
lean_inc_ref(v_binderType_3890_);
v_body_3891_ = lean_ctor_get(v_e_3882_, 2);
lean_inc_ref(v_body_3891_);
v_binderInfo_3892_ = lean_ctor_get_uint8(v_e_3882_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3882_, 3);
v___x_3893_ = lean_box(v_usedLetOnly_3878_);
v___x_3894_ = lean_box(v_skipConstInApp_3879_);
v___x_3895_ = lean_box(v_skipInstances_3880_);
lean_inc_ref(v_post_3877_);
lean_inc_ref(v_pre_3876_);
lean_inc_ref(v_fvars_3881_);
v___f_3896_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3896_, 0, v_fvars_3881_);
lean_closure_set(v___f_3896_, 1, v_pre_3876_);
lean_closure_set(v___f_3896_, 2, v_post_3877_);
lean_closure_set(v___f_3896_, 3, v___x_3893_);
lean_closure_set(v___f_3896_, 4, v___x_3894_);
lean_closure_set(v___f_3896_, 5, v___x_3895_);
lean_closure_set(v___f_3896_, 6, v_body_3891_);
v___x_3897_ = lean_expr_instantiate_rev(v_binderType_3890_, v_fvars_3881_);
lean_dec_ref(v_fvars_3881_);
lean_dec_ref(v_binderType_3890_);
v___x_3898_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3876_, v_post_3877_, v_usedLetOnly_3878_, v_skipConstInApp_3879_, v_skipInstances_3880_, v___x_3897_, v_a_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_);
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_object* v_a_3899_; uint8_t v___x_3900_; lean_object* v___x_3901_; 
v_a_3899_ = lean_ctor_get(v___x_3898_, 0);
lean_inc(v_a_3899_);
lean_dec_ref_known(v___x_3898_, 1);
v___x_3900_ = 0;
v___x_3901_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_binderName_3889_, v_binderInfo_3892_, v_a_3899_, v___f_3896_, v___x_3900_, v_a_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_);
return v___x_3901_;
}
else
{
lean_dec_ref(v___f_3896_);
lean_dec(v_binderName_3889_);
return v___x_3898_;
}
}
else
{
lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3902_ = lean_expr_instantiate_rev(v_e_3882_, v_fvars_3881_);
lean_dec_ref(v_e_3882_);
lean_inc_ref(v_post_3877_);
lean_inc_ref(v_pre_3876_);
v___x_3903_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3876_, v_post_3877_, v_usedLetOnly_3878_, v_skipConstInApp_3879_, v_skipInstances_3880_, v___x_3902_, v_a_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_);
if (lean_obj_tag(v___x_3903_) == 0)
{
lean_object* v_a_3904_; uint8_t v___x_3905_; uint8_t v___x_3906_; uint8_t v___x_3907_; lean_object* v___x_3908_; 
v_a_3904_ = lean_ctor_get(v___x_3903_, 0);
lean_inc(v_a_3904_);
lean_dec_ref_known(v___x_3903_, 1);
v___x_3905_ = 0;
v___x_3906_ = 1;
v___x_3907_ = 1;
v___x_3908_ = l_Lean_Meta_mkLambdaFVars(v_fvars_3881_, v_a_3904_, v___x_3905_, v_usedLetOnly_3878_, v___x_3905_, v___x_3906_, v___x_3907_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_);
if (lean_obj_tag(v___x_3908_) == 0)
{
lean_object* v_a_3909_; lean_object* v___x_3910_; 
v_a_3909_ = lean_ctor_get(v___x_3908_, 0);
lean_inc(v_a_3909_);
lean_dec_ref_known(v___x_3908_, 1);
v___x_3910_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3876_, v_post_3877_, v_usedLetOnly_3878_, v_skipConstInApp_3879_, v_skipInstances_3880_, v_a_3909_, v_a_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_);
return v___x_3910_;
}
else
{
lean_dec_ref(v_post_3877_);
lean_dec_ref(v_pre_3876_);
return v___x_3908_;
}
}
else
{
lean_dec_ref(v_fvars_3881_);
lean_dec_ref(v_post_3877_);
lean_dec_ref(v_pre_3876_);
return v___x_3903_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(lean_object* v_fvars_3911_, lean_object* v_pre_3912_, lean_object* v_post_3913_, uint8_t v_usedLetOnly_3914_, uint8_t v_skipConstInApp_3915_, uint8_t v_skipInstances_3916_, lean_object* v_body_3917_, lean_object* v_x_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_){
_start:
{
lean_object* v___x_3925_; lean_object* v___x_3926_; 
v___x_3925_ = lean_array_push(v_fvars_3911_, v_x_3918_);
v___x_3926_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_3912_, v_post_3913_, v_usedLetOnly_3914_, v_skipConstInApp_3915_, v_skipInstances_3916_, v___x_3925_, v_body_3917_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_, v___y_3923_);
return v___x_3926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object* v_fvars_3927_, lean_object* v_pre_3928_, lean_object* v_post_3929_, lean_object* v_usedLetOnly_3930_, lean_object* v_skipConstInApp_3931_, lean_object* v_skipInstances_3932_, lean_object* v_body_3933_, lean_object* v_x_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_){
_start:
{
uint8_t v_usedLetOnly_boxed_3941_; uint8_t v_skipConstInApp_boxed_3942_; uint8_t v_skipInstances_boxed_3943_; lean_object* v_res_3944_; 
v_usedLetOnly_boxed_3941_ = lean_unbox(v_usedLetOnly_3930_);
v_skipConstInApp_boxed_3942_ = lean_unbox(v_skipConstInApp_3931_);
v_skipInstances_boxed_3943_ = lean_unbox(v_skipInstances_3932_);
v_res_3944_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(v_fvars_3927_, v_pre_3928_, v_post_3929_, v_usedLetOnly_boxed_3941_, v_skipConstInApp_boxed_3942_, v_skipInstances_boxed_3943_, v_body_3933_, v_x_3934_, v___y_3935_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_);
lean_dec(v___y_3939_);
lean_dec_ref(v___y_3938_);
lean_dec(v___y_3937_);
lean_dec_ref(v___y_3936_);
lean_dec(v___y_3935_);
return v_res_3944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(lean_object* v_pre_3945_, lean_object* v_post_3946_, uint8_t v_usedLetOnly_3947_, uint8_t v_skipConstInApp_3948_, uint8_t v_skipInstances_3949_, lean_object* v_fvars_3950_, lean_object* v_e_3951_, lean_object* v_a_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_){
_start:
{
if (lean_obj_tag(v_e_3951_) == 8)
{
lean_object* v_declName_3958_; lean_object* v_type_3959_; lean_object* v_value_3960_; lean_object* v_body_3961_; uint8_t v_nondep_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___f_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; 
v_declName_3958_ = lean_ctor_get(v_e_3951_, 0);
lean_inc(v_declName_3958_);
v_type_3959_ = lean_ctor_get(v_e_3951_, 1);
lean_inc_ref(v_type_3959_);
v_value_3960_ = lean_ctor_get(v_e_3951_, 2);
lean_inc_ref(v_value_3960_);
v_body_3961_ = lean_ctor_get(v_e_3951_, 3);
lean_inc_ref(v_body_3961_);
v_nondep_3962_ = lean_ctor_get_uint8(v_e_3951_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_3951_, 4);
v___x_3963_ = lean_box(v_usedLetOnly_3947_);
v___x_3964_ = lean_box(v_skipConstInApp_3948_);
v___x_3965_ = lean_box(v_skipInstances_3949_);
lean_inc_ref_n(v_post_3946_, 2);
lean_inc_ref_n(v_pre_3945_, 2);
lean_inc_ref(v_fvars_3950_);
v___f_3966_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3966_, 0, v_fvars_3950_);
lean_closure_set(v___f_3966_, 1, v_pre_3945_);
lean_closure_set(v___f_3966_, 2, v_post_3946_);
lean_closure_set(v___f_3966_, 3, v___x_3963_);
lean_closure_set(v___f_3966_, 4, v___x_3964_);
lean_closure_set(v___f_3966_, 5, v___x_3965_);
lean_closure_set(v___f_3966_, 6, v_body_3961_);
v___x_3967_ = lean_expr_instantiate_rev(v_type_3959_, v_fvars_3950_);
lean_dec_ref(v_type_3959_);
v___x_3968_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3945_, v_post_3946_, v_usedLetOnly_3947_, v_skipConstInApp_3948_, v_skipInstances_3949_, v___x_3967_, v_a_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_);
if (lean_obj_tag(v___x_3968_) == 0)
{
lean_object* v_a_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v_a_3969_ = lean_ctor_get(v___x_3968_, 0);
lean_inc(v_a_3969_);
lean_dec_ref_known(v___x_3968_, 1);
v___x_3970_ = lean_expr_instantiate_rev(v_value_3960_, v_fvars_3950_);
lean_dec_ref(v_fvars_3950_);
lean_dec_ref(v_value_3960_);
v___x_3971_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3945_, v_post_3946_, v_usedLetOnly_3947_, v_skipConstInApp_3948_, v_skipInstances_3949_, v___x_3970_, v_a_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_);
if (lean_obj_tag(v___x_3971_) == 0)
{
lean_object* v_a_3972_; uint8_t v___x_3973_; lean_object* v___x_3974_; 
v_a_3972_ = lean_ctor_get(v___x_3971_, 0);
lean_inc(v_a_3972_);
lean_dec_ref_known(v___x_3971_, 1);
v___x_3973_ = 0;
v___x_3974_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_declName_3958_, v_a_3969_, v_a_3972_, v___f_3966_, v_nondep_3962_, v___x_3973_, v_a_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_);
return v___x_3974_;
}
else
{
lean_dec(v_a_3969_);
lean_dec_ref(v___f_3966_);
lean_dec(v_declName_3958_);
return v___x_3971_;
}
}
else
{
lean_dec_ref(v___f_3966_);
lean_dec_ref(v_value_3960_);
lean_dec(v_declName_3958_);
lean_dec_ref(v_fvars_3950_);
lean_dec_ref(v_post_3946_);
lean_dec_ref(v_pre_3945_);
return v___x_3968_;
}
}
else
{
lean_object* v___x_3975_; lean_object* v___x_3976_; 
v___x_3975_ = lean_expr_instantiate_rev(v_e_3951_, v_fvars_3950_);
lean_dec_ref(v_e_3951_);
lean_inc_ref(v_post_3946_);
lean_inc_ref(v_pre_3945_);
v___x_3976_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3945_, v_post_3946_, v_usedLetOnly_3947_, v_skipConstInApp_3948_, v_skipInstances_3949_, v___x_3975_, v_a_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_);
if (lean_obj_tag(v___x_3976_) == 0)
{
lean_object* v_a_3977_; uint8_t v___x_3978_; uint8_t v___x_3979_; lean_object* v___x_3980_; 
v_a_3977_ = lean_ctor_get(v___x_3976_, 0);
lean_inc(v_a_3977_);
lean_dec_ref_known(v___x_3976_, 1);
v___x_3978_ = 0;
v___x_3979_ = 1;
v___x_3980_ = l_Lean_Meta_mkLetFVars(v_fvars_3950_, v_a_3977_, v_usedLetOnly_3947_, v___x_3978_, v___x_3979_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_);
if (lean_obj_tag(v___x_3980_) == 0)
{
lean_object* v_a_3981_; lean_object* v___x_3982_; 
v_a_3981_ = lean_ctor_get(v___x_3980_, 0);
lean_inc(v_a_3981_);
lean_dec_ref_known(v___x_3980_, 1);
v___x_3982_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3945_, v_post_3946_, v_usedLetOnly_3947_, v_skipConstInApp_3948_, v_skipInstances_3949_, v_a_3981_, v_a_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_);
return v___x_3982_;
}
else
{
lean_dec_ref(v_post_3946_);
lean_dec_ref(v_pre_3945_);
return v___x_3980_;
}
}
else
{
lean_dec_ref(v_fvars_3950_);
lean_dec_ref(v_post_3946_);
lean_dec_ref(v_pre_3945_);
return v___x_3976_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(lean_object* v_pre_3983_, lean_object* v_post_3984_, uint8_t v_usedLetOnly_3985_, uint8_t v_skipConstInApp_3986_, uint8_t v_skipInstances_3987_, size_t v_sz_3988_, size_t v_i_3989_, lean_object* v_bs_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
uint8_t v___x_3997_; 
v___x_3997_ = lean_usize_dec_lt(v_i_3989_, v_sz_3988_);
if (v___x_3997_ == 0)
{
lean_object* v___x_3998_; lean_object* v___x_3999_; 
lean_dec_ref(v_post_3984_);
lean_dec_ref(v_pre_3983_);
v___x_3998_ = l_unsafeCast___redArg(v_bs_3990_);
lean_dec_ref(v_bs_3990_);
v___x_3999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3999_, 0, v___x_3998_);
return v___x_3999_;
}
else
{
lean_object* v_v_4000_; lean_object* v___x_4001_; lean_object* v_bs_x27_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; 
v_v_4000_ = lean_array_uget(v_bs_3990_, v_i_3989_);
v___x_4001_ = lean_unsigned_to_nat(0u);
v_bs_x27_4002_ = lean_array_uset(v_bs_3990_, v_i_3989_, v___x_4001_);
v___x_4003_ = l_unsafeCast___redArg(v_v_4000_);
lean_dec(v_v_4000_);
lean_inc_ref(v_post_3984_);
lean_inc_ref(v_pre_3983_);
v___x_4004_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3983_, v_post_3984_, v_usedLetOnly_3985_, v_skipConstInApp_3986_, v_skipInstances_3987_, v___x_4003_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
if (lean_obj_tag(v___x_4004_) == 0)
{
lean_object* v_a_4005_; size_t v___x_4006_; size_t v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
v_a_4005_ = lean_ctor_get(v___x_4004_, 0);
lean_inc(v_a_4005_);
lean_dec_ref_known(v___x_4004_, 1);
v___x_4006_ = ((size_t)1ULL);
v___x_4007_ = lean_usize_add(v_i_3989_, v___x_4006_);
v___x_4008_ = l_unsafeCast___redArg(v_a_4005_);
lean_dec(v_a_4005_);
v___x_4009_ = lean_array_uset(v_bs_x27_4002_, v_i_3989_, v___x_4008_);
v_i_3989_ = v___x_4007_;
v_bs_3990_ = v___x_4009_;
goto _start;
}
else
{
lean_object* v_a_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4018_; 
lean_dec_ref(v_bs_x27_4002_);
lean_dec_ref(v_post_3984_);
lean_dec_ref(v_pre_3983_);
v_a_4011_ = lean_ctor_get(v___x_4004_, 0);
v_isSharedCheck_4018_ = !lean_is_exclusive(v___x_4004_);
if (v_isSharedCheck_4018_ == 0)
{
v___x_4013_ = v___x_4004_;
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_a_4011_);
lean_dec(v___x_4004_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v___x_4016_; 
if (v_isShared_4014_ == 0)
{
v___x_4016_ = v___x_4013_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v_a_4011_);
v___x_4016_ = v_reuseFailAlloc_4017_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
return v___x_4016_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_4019_, lean_object* v_post_4020_, lean_object* v_usedLetOnly_4021_, lean_object* v_skipConstInApp_4022_, lean_object* v_skipInstances_4023_, lean_object* v_sz_4024_, lean_object* v_i_4025_, lean_object* v_bs_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_){
_start:
{
uint8_t v_usedLetOnly_boxed_4033_; uint8_t v_skipConstInApp_boxed_4034_; uint8_t v_skipInstances_boxed_4035_; size_t v_sz_boxed_4036_; size_t v_i_boxed_4037_; lean_object* v_res_4038_; 
v_usedLetOnly_boxed_4033_ = lean_unbox(v_usedLetOnly_4021_);
v_skipConstInApp_boxed_4034_ = lean_unbox(v_skipConstInApp_4022_);
v_skipInstances_boxed_4035_ = lean_unbox(v_skipInstances_4023_);
v_sz_boxed_4036_ = lean_unbox_usize(v_sz_4024_);
lean_dec(v_sz_4024_);
v_i_boxed_4037_ = lean_unbox_usize(v_i_4025_);
lean_dec(v_i_4025_);
v_res_4038_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(v_pre_4019_, v_post_4020_, v_usedLetOnly_boxed_4033_, v_skipConstInApp_boxed_4034_, v_skipInstances_boxed_4035_, v_sz_boxed_4036_, v_i_boxed_4037_, v_bs_4026_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_);
lean_dec(v___y_4031_);
lean_dec_ref(v___y_4030_);
lean_dec(v___y_4029_);
lean_dec_ref(v___y_4028_);
lean_dec(v___y_4027_);
return v_res_4038_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object* v_pre_4039_, lean_object* v_post_4040_, uint8_t v_usedLetOnly_4041_, uint8_t v_skipConstInApp_4042_, uint8_t v_skipInstances_4043_, lean_object* v___x_4044_, lean_object* v___y_4045_, lean_object* v_b_4046_, lean_object* v_a_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_){
_start:
{
lean_object* v___x_4053_; 
v___x_4053_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4039_, v_post_4040_, v_usedLetOnly_4041_, v_skipConstInApp_4042_, v_skipInstances_4043_, v___x_4044_, v___y_4045_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_);
if (lean_obj_tag(v___x_4053_) == 0)
{
lean_object* v_a_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4063_; 
v_a_4054_ = lean_ctor_get(v___x_4053_, 0);
v_isSharedCheck_4063_ = !lean_is_exclusive(v___x_4053_);
if (v_isSharedCheck_4063_ == 0)
{
v___x_4056_ = v___x_4053_;
v_isShared_4057_ = v_isSharedCheck_4063_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_a_4054_);
lean_dec(v___x_4053_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4063_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4061_; 
v___x_4058_ = lean_array_fset(v_b_4046_, v_a_4047_, v_a_4054_);
v___x_4059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4059_, 0, v___x_4058_);
if (v_isShared_4057_ == 0)
{
lean_ctor_set(v___x_4056_, 0, v___x_4059_);
v___x_4061_ = v___x_4056_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v___x_4059_);
v___x_4061_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
return v___x_4061_;
}
}
}
else
{
lean_object* v_a_4064_; lean_object* v___x_4066_; uint8_t v_isShared_4067_; uint8_t v_isSharedCheck_4071_; 
lean_dec_ref(v_b_4046_);
v_a_4064_ = lean_ctor_get(v___x_4053_, 0);
v_isSharedCheck_4071_ = !lean_is_exclusive(v___x_4053_);
if (v_isSharedCheck_4071_ == 0)
{
v___x_4066_ = v___x_4053_;
v_isShared_4067_ = v_isSharedCheck_4071_;
goto v_resetjp_4065_;
}
else
{
lean_inc(v_a_4064_);
lean_dec(v___x_4053_);
v___x_4066_ = lean_box(0);
v_isShared_4067_ = v_isSharedCheck_4071_;
goto v_resetjp_4065_;
}
v_resetjp_4065_:
{
lean_object* v___x_4069_; 
if (v_isShared_4067_ == 0)
{
v___x_4069_ = v___x_4066_;
goto v_reusejp_4068_;
}
else
{
lean_object* v_reuseFailAlloc_4070_; 
v_reuseFailAlloc_4070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4070_, 0, v_a_4064_);
v___x_4069_ = v_reuseFailAlloc_4070_;
goto v_reusejp_4068_;
}
v_reusejp_4068_:
{
return v___x_4069_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v_pre_4072_, lean_object* v_post_4073_, lean_object* v_usedLetOnly_4074_, lean_object* v_skipConstInApp_4075_, lean_object* v_skipInstances_4076_, lean_object* v___x_4077_, lean_object* v___y_4078_, lean_object* v_b_4079_, lean_object* v_a_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_){
_start:
{
uint8_t v_usedLetOnly_boxed_4086_; uint8_t v_skipConstInApp_boxed_4087_; uint8_t v_skipInstances_boxed_4088_; lean_object* v_res_4089_; 
v_usedLetOnly_boxed_4086_ = lean_unbox(v_usedLetOnly_4074_);
v_skipConstInApp_boxed_4087_ = lean_unbox(v_skipConstInApp_4075_);
v_skipInstances_boxed_4088_ = lean_unbox(v_skipInstances_4076_);
v_res_4089_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0(v_pre_4072_, v_post_4073_, v_usedLetOnly_boxed_4086_, v_skipConstInApp_boxed_4087_, v_skipInstances_boxed_4088_, v___x_4077_, v___y_4078_, v_b_4079_, v_a_4080_, v___y_4081_, v___y_4082_, v___y_4083_, v___y_4084_);
lean_dec(v___y_4084_);
lean_dec_ref(v___y_4083_);
lean_dec(v___y_4082_);
lean_dec_ref(v___y_4081_);
lean_dec(v_a_4080_);
lean_dec(v___y_4078_);
return v_res_4089_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(lean_object* v_upperBound_4090_, lean_object* v___x_4091_, lean_object* v_pre_4092_, lean_object* v_post_4093_, uint8_t v_usedLetOnly_4094_, uint8_t v_skipConstInApp_4095_, uint8_t v_skipInstances_4096_, lean_object* v_a_4097_, lean_object* v_b_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_){
_start:
{
lean_object* v___y_4106_; uint8_t v___x_4129_; 
v___x_4129_ = lean_nat_dec_lt(v_a_4097_, v_upperBound_4090_);
if (v___x_4129_ == 0)
{
lean_object* v___x_4130_; 
lean_dec(v_a_4097_);
lean_dec_ref(v_post_4093_);
lean_dec_ref(v_pre_4092_);
v___x_4130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4130_, 0, v_b_4098_);
return v___x_4130_;
}
else
{
lean_object* v___x_4131_; lean_object* v___x_4132_; uint8_t v___x_4133_; 
v___x_4131_ = lean_array_fget_borrowed(v_b_4098_, v_a_4097_);
v___x_4132_ = lean_array_get_size(v___x_4091_);
v___x_4133_ = lean_nat_dec_lt(v_a_4097_, v___x_4132_);
if (v___x_4133_ == 0)
{
lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___f_4137_; 
lean_inc(v___x_4131_);
v___x_4134_ = lean_box(v_usedLetOnly_4094_);
v___x_4135_ = lean_box(v_skipConstInApp_4095_);
v___x_4136_ = lean_box(v_skipInstances_4096_);
lean_inc(v_a_4097_);
lean_inc(v___y_4099_);
lean_inc_ref(v_post_4093_);
lean_inc_ref(v_pre_4092_);
v___f_4137_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_4137_, 0, v_pre_4092_);
lean_closure_set(v___f_4137_, 1, v_post_4093_);
lean_closure_set(v___f_4137_, 2, v___x_4134_);
lean_closure_set(v___f_4137_, 3, v___x_4135_);
lean_closure_set(v___f_4137_, 4, v___x_4136_);
lean_closure_set(v___f_4137_, 5, v___x_4131_);
lean_closure_set(v___f_4137_, 6, v___y_4099_);
lean_closure_set(v___f_4137_, 7, v_b_4098_);
lean_closure_set(v___f_4137_, 8, v_a_4097_);
v___y_4106_ = v___f_4137_;
goto v___jp_4105_;
}
else
{
lean_object* v___x_4138_; uint8_t v_isInstance_4139_; 
v___x_4138_ = lean_array_fget_borrowed(v___x_4091_, v_a_4097_);
v_isInstance_4139_ = lean_ctor_get_uint8(v___x_4138_, sizeof(void*)*1 + 4);
if (v_isInstance_4139_ == 0)
{
lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___f_4143_; 
lean_inc(v___x_4131_);
v___x_4140_ = lean_box(v_usedLetOnly_4094_);
v___x_4141_ = lean_box(v_skipConstInApp_4095_);
v___x_4142_ = lean_box(v_skipInstances_4096_);
lean_inc(v_a_4097_);
lean_inc(v___y_4099_);
lean_inc_ref(v_post_4093_);
lean_inc_ref(v_pre_4092_);
v___f_4143_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_4143_, 0, v_pre_4092_);
lean_closure_set(v___f_4143_, 1, v_post_4093_);
lean_closure_set(v___f_4143_, 2, v___x_4140_);
lean_closure_set(v___f_4143_, 3, v___x_4141_);
lean_closure_set(v___f_4143_, 4, v___x_4142_);
lean_closure_set(v___f_4143_, 5, v___x_4131_);
lean_closure_set(v___f_4143_, 6, v___y_4099_);
lean_closure_set(v___f_4143_, 7, v_b_4098_);
lean_closure_set(v___f_4143_, 8, v_a_4097_);
v___y_4106_ = v___f_4143_;
goto v___jp_4105_;
}
else
{
lean_object* v___x_4144_; lean_object* v___f_4145_; 
v___x_4144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4144_, 0, v_b_4098_);
v___f_4145_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_4145_, 0, v___x_4144_);
v___y_4106_ = v___f_4145_;
goto v___jp_4105_;
}
}
}
v___jp_4105_:
{
lean_object* v___x_4107_; 
lean_inc(v___y_4103_);
lean_inc_ref(v___y_4102_);
lean_inc(v___y_4101_);
lean_inc_ref(v___y_4100_);
v___x_4107_ = lean_apply_5(v___y_4106_, v___y_4100_, v___y_4101_, v___y_4102_, v___y_4103_, lean_box(0));
if (lean_obj_tag(v___x_4107_) == 0)
{
lean_object* v_a_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4120_; 
v_a_4108_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4120_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4120_ == 0)
{
v___x_4110_ = v___x_4107_;
v_isShared_4111_ = v_isSharedCheck_4120_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_a_4108_);
lean_dec(v___x_4107_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4120_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
if (lean_obj_tag(v_a_4108_) == 0)
{
lean_object* v_a_4112_; lean_object* v___x_4114_; 
lean_dec(v_a_4097_);
lean_dec_ref(v_post_4093_);
lean_dec_ref(v_pre_4092_);
v_a_4112_ = lean_ctor_get(v_a_4108_, 0);
lean_inc(v_a_4112_);
lean_dec_ref_known(v_a_4108_, 1);
if (v_isShared_4111_ == 0)
{
lean_ctor_set(v___x_4110_, 0, v_a_4112_);
v___x_4114_ = v___x_4110_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v_a_4112_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
return v___x_4114_;
}
}
else
{
lean_object* v_a_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
lean_del_object(v___x_4110_);
v_a_4116_ = lean_ctor_get(v_a_4108_, 0);
lean_inc(v_a_4116_);
lean_dec_ref_known(v_a_4108_, 1);
v___x_4117_ = lean_unsigned_to_nat(1u);
v___x_4118_ = lean_nat_add(v_a_4097_, v___x_4117_);
lean_dec(v_a_4097_);
v_a_4097_ = v___x_4118_;
v_b_4098_ = v_a_4116_;
goto _start;
}
}
}
else
{
lean_object* v_a_4121_; lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4128_; 
lean_dec(v_a_4097_);
lean_dec_ref(v_post_4093_);
lean_dec_ref(v_pre_4092_);
v_a_4121_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4123_ = v___x_4107_;
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
else
{
lean_inc(v_a_4121_);
lean_dec(v___x_4107_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
lean_object* v___x_4126_; 
if (v_isShared_4124_ == 0)
{
v___x_4126_ = v___x_4123_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_a_4121_);
v___x_4126_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
return v___x_4126_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(uint8_t v_skipInstances_4146_, lean_object* v_pre_4147_, lean_object* v_post_4148_, uint8_t v_usedLetOnly_4149_, uint8_t v_skipConstInApp_4150_, lean_object* v_x_4151_, lean_object* v_x_4152_, lean_object* v_x_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_){
_start:
{
lean_object* v_f_4161_; lean_object* v___y_4162_; lean_object* v___y_4163_; lean_object* v___y_4164_; lean_object* v___y_4165_; lean_object* v___y_4166_; 
if (lean_obj_tag(v_x_4151_) == 5)
{
lean_object* v_fn_4216_; lean_object* v_arg_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v_fn_4216_ = lean_ctor_get(v_x_4151_, 0);
lean_inc_ref(v_fn_4216_);
v_arg_4217_ = lean_ctor_get(v_x_4151_, 1);
lean_inc_ref(v_arg_4217_);
lean_dec_ref_known(v_x_4151_, 2);
v___x_4218_ = lean_array_set(v_x_4152_, v_x_4153_, v_arg_4217_);
v___x_4219_ = lean_unsigned_to_nat(1u);
v___x_4220_ = lean_nat_sub(v_x_4153_, v___x_4219_);
lean_dec(v_x_4153_);
v_x_4151_ = v_fn_4216_;
v_x_4152_ = v___x_4218_;
v_x_4153_ = v___x_4220_;
goto _start;
}
else
{
lean_dec(v_x_4153_);
if (v_skipConstInApp_4150_ == 0)
{
goto v___jp_4213_;
}
else
{
uint8_t v___x_4222_; 
v___x_4222_ = l_Lean_Expr_isConst(v_x_4151_);
if (v___x_4222_ == 0)
{
goto v___jp_4213_;
}
else
{
v_f_4161_ = v_x_4151_;
v___y_4162_ = v___y_4154_;
v___y_4163_ = v___y_4155_;
v___y_4164_ = v___y_4156_;
v___y_4165_ = v___y_4157_;
v___y_4166_ = v___y_4158_;
goto v___jp_4160_;
}
}
}
v___jp_4160_:
{
if (v_skipInstances_4146_ == 0)
{
size_t v_sz_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_10040__overap_4175_; lean_object* v___x_4176_; 
v_sz_4167_ = lean_array_size(v_x_4152_);
v___x_4168_ = l_unsafeCast___redArg(v_x_4152_);
lean_dec_ref(v_x_4152_);
v___x_4169_ = lean_box(v_usedLetOnly_4149_);
v___x_4170_ = lean_box(v_skipConstInApp_4150_);
v___x_4171_ = lean_box(v_skipInstances_4146_);
v___x_4172_ = lean_box_usize(v_sz_4167_);
v___x_4173_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed__const__1));
lean_inc_ref(v_post_4148_);
lean_inc_ref(v_pre_4147_);
v___x_4174_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2___boxed), 14, 8);
lean_closure_set(v___x_4174_, 0, v_pre_4147_);
lean_closure_set(v___x_4174_, 1, v_post_4148_);
lean_closure_set(v___x_4174_, 2, v___x_4169_);
lean_closure_set(v___x_4174_, 3, v___x_4170_);
lean_closure_set(v___x_4174_, 4, v___x_4171_);
lean_closure_set(v___x_4174_, 5, v___x_4172_);
lean_closure_set(v___x_4174_, 6, v___x_4173_);
lean_closure_set(v___x_4174_, 7, v___x_4168_);
v___x_10040__overap_4175_ = l_unsafeCast___redArg(v___x_4174_);
lean_dec_ref(v___x_4174_);
lean_inc(v___y_4166_);
lean_inc_ref(v___y_4165_);
lean_inc(v___y_4164_);
lean_inc_ref(v___y_4163_);
lean_inc(v___y_4162_);
v___x_4176_ = lean_apply_6(v___x_10040__overap_4175_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_, lean_box(0));
if (lean_obj_tag(v___x_4176_) == 0)
{
lean_object* v_a_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; 
v_a_4177_ = lean_ctor_get(v___x_4176_, 0);
lean_inc(v_a_4177_);
lean_dec_ref_known(v___x_4176_, 1);
v___x_4178_ = l_Lean_mkAppN(v_f_4161_, v_a_4177_);
lean_dec(v_a_4177_);
v___x_4179_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4147_, v_post_4148_, v_usedLetOnly_4149_, v_skipConstInApp_4150_, v_skipInstances_4146_, v___x_4178_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_);
return v___x_4179_;
}
else
{
lean_object* v_a_4180_; lean_object* v___x_4182_; uint8_t v_isShared_4183_; uint8_t v_isSharedCheck_4187_; 
lean_dec_ref(v_f_4161_);
lean_dec_ref(v_post_4148_);
lean_dec_ref(v_pre_4147_);
v_a_4180_ = lean_ctor_get(v___x_4176_, 0);
v_isSharedCheck_4187_ = !lean_is_exclusive(v___x_4176_);
if (v_isSharedCheck_4187_ == 0)
{
v___x_4182_ = v___x_4176_;
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
else
{
lean_inc(v_a_4180_);
lean_dec(v___x_4176_);
v___x_4182_ = lean_box(0);
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
v_resetjp_4181_:
{
lean_object* v___x_4185_; 
if (v_isShared_4183_ == 0)
{
v___x_4185_ = v___x_4182_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v_a_4180_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
}
}
else
{
lean_object* v___x_4188_; lean_object* v___x_4189_; 
v___x_4188_ = lean_array_get_size(v_x_4152_);
lean_inc_ref(v_f_4161_);
v___x_4189_ = l_Lean_Meta_getFunInfoNArgs(v_f_4161_, v___x_4188_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_);
if (lean_obj_tag(v___x_4189_) == 0)
{
lean_object* v_a_4190_; lean_object* v_paramInfo_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; 
v_a_4190_ = lean_ctor_get(v___x_4189_, 0);
lean_inc(v_a_4190_);
lean_dec_ref_known(v___x_4189_, 1);
v_paramInfo_4191_ = lean_ctor_get(v_a_4190_, 0);
lean_inc_ref(v_paramInfo_4191_);
lean_dec(v_a_4190_);
v___x_4192_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_4148_);
lean_inc_ref(v_pre_4147_);
v___x_4193_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v___x_4188_, v_paramInfo_4191_, v_pre_4147_, v_post_4148_, v_usedLetOnly_4149_, v_skipConstInApp_4150_, v_skipInstances_4146_, v___x_4192_, v_x_4152_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_);
lean_dec_ref(v_paramInfo_4191_);
if (lean_obj_tag(v___x_4193_) == 0)
{
lean_object* v_a_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; 
v_a_4194_ = lean_ctor_get(v___x_4193_, 0);
lean_inc(v_a_4194_);
lean_dec_ref_known(v___x_4193_, 1);
v___x_4195_ = l_Lean_mkAppN(v_f_4161_, v_a_4194_);
lean_dec(v_a_4194_);
v___x_4196_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4147_, v_post_4148_, v_usedLetOnly_4149_, v_skipConstInApp_4150_, v_skipInstances_4146_, v___x_4195_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_);
return v___x_4196_;
}
else
{
lean_object* v_a_4197_; lean_object* v___x_4199_; uint8_t v_isShared_4200_; uint8_t v_isSharedCheck_4204_; 
lean_dec_ref(v_f_4161_);
lean_dec_ref(v_post_4148_);
lean_dec_ref(v_pre_4147_);
v_a_4197_ = lean_ctor_get(v___x_4193_, 0);
v_isSharedCheck_4204_ = !lean_is_exclusive(v___x_4193_);
if (v_isSharedCheck_4204_ == 0)
{
v___x_4199_ = v___x_4193_;
v_isShared_4200_ = v_isSharedCheck_4204_;
goto v_resetjp_4198_;
}
else
{
lean_inc(v_a_4197_);
lean_dec(v___x_4193_);
v___x_4199_ = lean_box(0);
v_isShared_4200_ = v_isSharedCheck_4204_;
goto v_resetjp_4198_;
}
v_resetjp_4198_:
{
lean_object* v___x_4202_; 
if (v_isShared_4200_ == 0)
{
v___x_4202_ = v___x_4199_;
goto v_reusejp_4201_;
}
else
{
lean_object* v_reuseFailAlloc_4203_; 
v_reuseFailAlloc_4203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4203_, 0, v_a_4197_);
v___x_4202_ = v_reuseFailAlloc_4203_;
goto v_reusejp_4201_;
}
v_reusejp_4201_:
{
return v___x_4202_;
}
}
}
}
else
{
lean_object* v_a_4205_; lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4212_; 
lean_dec_ref(v_f_4161_);
lean_dec_ref(v_x_4152_);
lean_dec_ref(v_post_4148_);
lean_dec_ref(v_pre_4147_);
v_a_4205_ = lean_ctor_get(v___x_4189_, 0);
v_isSharedCheck_4212_ = !lean_is_exclusive(v___x_4189_);
if (v_isSharedCheck_4212_ == 0)
{
v___x_4207_ = v___x_4189_;
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
else
{
lean_inc(v_a_4205_);
lean_dec(v___x_4189_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4210_; 
if (v_isShared_4208_ == 0)
{
v___x_4210_ = v___x_4207_;
goto v_reusejp_4209_;
}
else
{
lean_object* v_reuseFailAlloc_4211_; 
v_reuseFailAlloc_4211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4211_, 0, v_a_4205_);
v___x_4210_ = v_reuseFailAlloc_4211_;
goto v_reusejp_4209_;
}
v_reusejp_4209_:
{
return v___x_4210_;
}
}
}
}
}
v___jp_4213_:
{
lean_object* v___x_4214_; 
lean_inc_ref(v_post_4148_);
lean_inc_ref(v_pre_4147_);
v___x_4214_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4147_, v_post_4148_, v_usedLetOnly_4149_, v_skipConstInApp_4150_, v_skipInstances_4146_, v_x_4151_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_);
if (lean_obj_tag(v___x_4214_) == 0)
{
lean_object* v_a_4215_; 
v_a_4215_ = lean_ctor_get(v___x_4214_, 0);
lean_inc(v_a_4215_);
lean_dec_ref_known(v___x_4214_, 1);
v_f_4161_ = v_a_4215_;
v___y_4162_ = v___y_4154_;
v___y_4163_ = v___y_4155_;
v___y_4164_ = v___y_4156_;
v___y_4165_ = v___y_4157_;
v___y_4166_ = v___y_4158_;
goto v___jp_4160_;
}
else
{
lean_dec_ref(v_x_4152_);
lean_dec_ref(v_post_4148_);
lean_dec_ref(v_pre_4147_);
return v___x_4214_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(lean_object* v___x_4223_, lean_object* v_pre_4224_, lean_object* v_e_4225_, lean_object* v_post_4226_, uint8_t v_usedLetOnly_4227_, uint8_t v_skipConstInApp_4228_, uint8_t v_skipInstances_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_){
_start:
{
lean_object* v___x_4236_; 
v___x_4236_ = l_Lean_Core_checkSystem(v___x_4223_, v___y_4233_, v___y_4234_);
if (lean_obj_tag(v___x_4236_) == 0)
{
lean_object* v___x_4237_; 
lean_dec_ref_known(v___x_4236_, 1);
lean_inc_ref(v_pre_4224_);
lean_inc(v___y_4234_);
lean_inc_ref(v___y_4233_);
lean_inc(v___y_4232_);
lean_inc_ref(v___y_4231_);
lean_inc_ref(v_e_4225_);
v___x_4237_ = lean_apply_6(v_pre_4224_, v_e_4225_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_, lean_box(0));
if (lean_obj_tag(v___x_4237_) == 0)
{
lean_object* v_a_4238_; lean_object* v___x_4240_; uint8_t v_isShared_4241_; uint8_t v_isSharedCheck_4286_; 
v_a_4238_ = lean_ctor_get(v___x_4237_, 0);
v_isSharedCheck_4286_ = !lean_is_exclusive(v___x_4237_);
if (v_isSharedCheck_4286_ == 0)
{
v___x_4240_ = v___x_4237_;
v_isShared_4241_ = v_isSharedCheck_4286_;
goto v_resetjp_4239_;
}
else
{
lean_inc(v_a_4238_);
lean_dec(v___x_4237_);
v___x_4240_ = lean_box(0);
v_isShared_4241_ = v_isSharedCheck_4286_;
goto v_resetjp_4239_;
}
v_resetjp_4239_:
{
lean_object* v___y_4243_; 
switch(lean_obj_tag(v_a_4238_))
{
case 0:
{
lean_object* v_e_4278_; lean_object* v___x_4280_; 
lean_dec_ref(v_post_4226_);
lean_dec_ref(v_e_4225_);
lean_dec_ref(v_pre_4224_);
v_e_4278_ = lean_ctor_get(v_a_4238_, 0);
lean_inc_ref(v_e_4278_);
lean_dec_ref_known(v_a_4238_, 1);
if (v_isShared_4241_ == 0)
{
lean_ctor_set(v___x_4240_, 0, v_e_4278_);
v___x_4280_ = v___x_4240_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4281_; 
v_reuseFailAlloc_4281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4281_, 0, v_e_4278_);
v___x_4280_ = v_reuseFailAlloc_4281_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
return v___x_4280_;
}
}
case 1:
{
lean_object* v_e_4282_; lean_object* v___x_4283_; 
lean_del_object(v___x_4240_);
lean_dec_ref(v_e_4225_);
v_e_4282_ = lean_ctor_get(v_a_4238_, 0);
lean_inc_ref(v_e_4282_);
lean_dec_ref_known(v_a_4238_, 1);
v___x_4283_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v_skipInstances_4229_, v_e_4282_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4283_;
}
default: 
{
lean_object* v_e_x3f_4284_; 
lean_del_object(v___x_4240_);
v_e_x3f_4284_ = lean_ctor_get(v_a_4238_, 0);
lean_inc(v_e_x3f_4284_);
lean_dec_ref_known(v_a_4238_, 1);
if (lean_obj_tag(v_e_x3f_4284_) == 0)
{
v___y_4243_ = v_e_4225_;
goto v___jp_4242_;
}
else
{
lean_object* v_val_4285_; 
lean_dec_ref(v_e_4225_);
v_val_4285_ = lean_ctor_get(v_e_x3f_4284_, 0);
lean_inc(v_val_4285_);
lean_dec_ref_known(v_e_x3f_4284_, 1);
v___y_4243_ = v_val_4285_;
goto v___jp_4242_;
}
}
}
v___jp_4242_:
{
switch(lean_obj_tag(v___y_4243_))
{
case 7:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; 
v___x_4244_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_4245_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v_skipInstances_4229_, v___x_4244_, v___y_4243_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4245_;
}
case 6:
{
lean_object* v___x_4246_; lean_object* v___x_4247_; 
v___x_4246_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_4247_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v_skipInstances_4229_, v___x_4246_, v___y_4243_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4247_;
}
case 8:
{
lean_object* v___x_4248_; lean_object* v___x_4249_; 
v___x_4248_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0));
v___x_4249_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v_skipInstances_4229_, v___x_4248_, v___y_4243_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4249_;
}
case 5:
{
lean_object* v_dummy_4250_; lean_object* v_nargs_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; 
v_dummy_4250_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1);
v_nargs_4251_ = l_Lean_Expr_getAppNumArgs(v___y_4243_);
lean_inc(v_nargs_4251_);
v___x_4252_ = lean_mk_array(v_nargs_4251_, v_dummy_4250_);
v___x_4253_ = lean_unsigned_to_nat(1u);
v___x_4254_ = lean_nat_sub(v_nargs_4251_, v___x_4253_);
lean_dec(v_nargs_4251_);
v___x_4255_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(v_skipInstances_4229_, v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v___y_4243_, v___x_4252_, v___x_4254_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4255_;
}
case 10:
{
lean_object* v_data_4256_; lean_object* v_expr_4257_; lean_object* v___x_4258_; 
v_data_4256_ = lean_ctor_get(v___y_4243_, 0);
v_expr_4257_ = lean_ctor_get(v___y_4243_, 1);
lean_inc_ref(v_expr_4257_);
lean_inc_ref(v_post_4226_);
lean_inc_ref(v_pre_4224_);
v___x_4258_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v_skipInstances_4229_, v_expr_4257_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
if (lean_obj_tag(v___x_4258_) == 0)
{
lean_object* v_a_4259_; size_t v___x_4260_; size_t v___x_4261_; uint8_t v___x_4262_; 
v_a_4259_ = lean_ctor_get(v___x_4258_, 0);
lean_inc(v_a_4259_);
lean_dec_ref_known(v___x_4258_, 1);
v___x_4260_ = lean_ptr_addr(v_expr_4257_);
v___x_4261_ = lean_ptr_addr(v_a_4259_);
v___x_4262_ = lean_usize_dec_eq(v___x_4260_, v___x_4261_);
if (v___x_4262_ == 0)
{
lean_object* v___x_4263_; lean_object* v___x_4264_; 
lean_inc(v_data_4256_);
lean_dec_ref_known(v___y_4243_, 2);
v___x_4263_ = l_Lean_Expr_mdata___override(v_data_4256_, v_a_4259_);
v___x_4264_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v_skipInstances_4229_, v___x_4263_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4264_;
}
else
{
lean_object* v___x_4265_; 
lean_dec(v_a_4259_);
v___x_4265_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v_skipInstances_4229_, v___y_4243_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4265_;
}
}
else
{
lean_dec_ref_known(v___y_4243_, 2);
lean_dec_ref(v_post_4226_);
lean_dec_ref(v_pre_4224_);
return v___x_4258_;
}
}
case 11:
{
lean_object* v_typeName_4266_; lean_object* v_idx_4267_; lean_object* v_struct_4268_; lean_object* v___x_4269_; 
v_typeName_4266_ = lean_ctor_get(v___y_4243_, 0);
v_idx_4267_ = lean_ctor_get(v___y_4243_, 1);
v_struct_4268_ = lean_ctor_get(v___y_4243_, 2);
lean_inc_ref(v_struct_4268_);
lean_inc_ref(v_post_4226_);
lean_inc_ref(v_pre_4224_);
v___x_4269_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v_skipInstances_4229_, v_struct_4268_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
if (lean_obj_tag(v___x_4269_) == 0)
{
lean_object* v_a_4270_; size_t v___x_4271_; size_t v___x_4272_; uint8_t v___x_4273_; 
v_a_4270_ = lean_ctor_get(v___x_4269_, 0);
lean_inc(v_a_4270_);
lean_dec_ref_known(v___x_4269_, 1);
v___x_4271_ = lean_ptr_addr(v_struct_4268_);
v___x_4272_ = lean_ptr_addr(v_a_4270_);
v___x_4273_ = lean_usize_dec_eq(v___x_4271_, v___x_4272_);
if (v___x_4273_ == 0)
{
lean_object* v___x_4274_; lean_object* v___x_4275_; 
lean_inc(v_idx_4267_);
lean_inc(v_typeName_4266_);
lean_dec_ref_known(v___y_4243_, 3);
v___x_4274_ = l_Lean_Expr_proj___override(v_typeName_4266_, v_idx_4267_, v_a_4270_);
v___x_4275_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v_skipInstances_4229_, v___x_4274_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4275_;
}
else
{
lean_object* v___x_4276_; 
lean_dec(v_a_4270_);
v___x_4276_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v_skipInstances_4229_, v___y_4243_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4276_;
}
}
else
{
lean_dec_ref_known(v___y_4243_, 3);
lean_dec_ref(v_post_4226_);
lean_dec_ref(v_pre_4224_);
return v___x_4269_;
}
}
default: 
{
lean_object* v___x_4277_; 
v___x_4277_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4224_, v_post_4226_, v_usedLetOnly_4227_, v_skipConstInApp_4228_, v_skipInstances_4229_, v___y_4243_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4277_;
}
}
}
}
}
else
{
lean_object* v_a_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4294_; 
lean_dec_ref(v_post_4226_);
lean_dec_ref(v_e_4225_);
lean_dec_ref(v_pre_4224_);
v_a_4287_ = lean_ctor_get(v___x_4237_, 0);
v_isSharedCheck_4294_ = !lean_is_exclusive(v___x_4237_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4289_ = v___x_4237_;
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_a_4287_);
lean_dec(v___x_4237_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4294_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4292_; 
if (v_isShared_4290_ == 0)
{
v___x_4292_ = v___x_4289_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v_a_4287_);
v___x_4292_ = v_reuseFailAlloc_4293_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
return v___x_4292_;
}
}
}
}
else
{
lean_object* v_a_4295_; lean_object* v___x_4297_; uint8_t v_isShared_4298_; uint8_t v_isSharedCheck_4302_; 
lean_dec_ref(v_post_4226_);
lean_dec_ref(v_e_4225_);
lean_dec_ref(v_pre_4224_);
v_a_4295_ = lean_ctor_get(v___x_4236_, 0);
v_isSharedCheck_4302_ = !lean_is_exclusive(v___x_4236_);
if (v_isSharedCheck_4302_ == 0)
{
v___x_4297_ = v___x_4236_;
v_isShared_4298_ = v_isSharedCheck_4302_;
goto v_resetjp_4296_;
}
else
{
lean_inc(v_a_4295_);
lean_dec(v___x_4236_);
v___x_4297_ = lean_box(0);
v_isShared_4298_ = v_isSharedCheck_4302_;
goto v_resetjp_4296_;
}
v_resetjp_4296_:
{
lean_object* v___x_4300_; 
if (v_isShared_4298_ == 0)
{
v___x_4300_ = v___x_4297_;
goto v_reusejp_4299_;
}
else
{
lean_object* v_reuseFailAlloc_4301_; 
v_reuseFailAlloc_4301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4301_, 0, v_a_4295_);
v___x_4300_ = v_reuseFailAlloc_4301_;
goto v_reusejp_4299_;
}
v_reusejp_4299_:
{
return v___x_4300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed(lean_object* v___x_4303_, lean_object* v_pre_4304_, lean_object* v_e_4305_, lean_object* v_post_4306_, lean_object* v_usedLetOnly_4307_, lean_object* v_skipConstInApp_4308_, lean_object* v_skipInstances_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_){
_start:
{
uint8_t v_usedLetOnly_boxed_4316_; uint8_t v_skipConstInApp_boxed_4317_; uint8_t v_skipInstances_boxed_4318_; lean_object* v_res_4319_; 
v_usedLetOnly_boxed_4316_ = lean_unbox(v_usedLetOnly_4307_);
v_skipConstInApp_boxed_4317_ = lean_unbox(v_skipConstInApp_4308_);
v_skipInstances_boxed_4318_ = lean_unbox(v_skipInstances_4309_);
v_res_4319_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(v___x_4303_, v_pre_4304_, v_e_4305_, v_post_4306_, v_usedLetOnly_boxed_4316_, v_skipConstInApp_boxed_4317_, v_skipInstances_boxed_4318_, v___y_4310_, v___y_4311_, v___y_4312_, v___y_4313_, v___y_4314_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
lean_dec(v___y_4312_);
lean_dec_ref(v___y_4311_);
lean_dec(v___y_4310_);
return v_res_4319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(lean_object* v_pre_4320_, lean_object* v_post_4321_, uint8_t v_usedLetOnly_4322_, uint8_t v_skipConstInApp_4323_, uint8_t v_skipInstances_4324_, lean_object* v_e_4325_, lean_object* v_a_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_){
_start:
{
lean_object* v___x_4332_; lean_object* v___x_4333_; 
lean_inc(v_a_4326_);
v___x_4332_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4332_, 0, lean_box(0));
lean_closure_set(v___x_4332_, 1, lean_box(0));
lean_closure_set(v___x_4332_, 2, v_a_4326_);
v___x_4333_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_box(0), v___x_4332_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_);
if (lean_obj_tag(v___x_4333_) == 0)
{
lean_object* v_a_4334_; lean_object* v___x_4336_; uint8_t v_isShared_4337_; uint8_t v_isSharedCheck_4368_; 
v_a_4334_ = lean_ctor_get(v___x_4333_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4333_);
if (v_isSharedCheck_4368_ == 0)
{
v___x_4336_ = v___x_4333_;
v_isShared_4337_ = v_isSharedCheck_4368_;
goto v_resetjp_4335_;
}
else
{
lean_inc(v_a_4334_);
lean_dec(v___x_4333_);
v___x_4336_ = lean_box(0);
v_isShared_4337_ = v_isSharedCheck_4368_;
goto v_resetjp_4335_;
}
v_resetjp_4335_:
{
lean_object* v___x_4338_; 
v___x_4338_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_a_4334_, v_e_4325_);
lean_dec(v_a_4334_);
if (lean_obj_tag(v___x_4338_) == 0)
{
lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___f_4343_; lean_object* v___x_4344_; 
lean_del_object(v___x_4336_);
v___x_4339_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0));
v___x_4340_ = lean_box(v_usedLetOnly_4322_);
v___x_4341_ = lean_box(v_skipConstInApp_4323_);
v___x_4342_ = lean_box(v_skipInstances_4324_);
lean_inc_ref(v_e_4325_);
v___f_4343_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed), 13, 7);
lean_closure_set(v___f_4343_, 0, v___x_4339_);
lean_closure_set(v___f_4343_, 1, v_pre_4320_);
lean_closure_set(v___f_4343_, 2, v_e_4325_);
lean_closure_set(v___f_4343_, 3, v_post_4321_);
lean_closure_set(v___f_4343_, 4, v___x_4340_);
lean_closure_set(v___f_4343_, 5, v___x_4341_);
lean_closure_set(v___f_4343_, 6, v___x_4342_);
v___x_4344_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v___f_4343_, v_a_4326_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_);
if (lean_obj_tag(v___x_4344_) == 0)
{
lean_object* v_a_4345_; lean_object* v___f_4346_; lean_object* v___x_4347_; 
v_a_4345_ = lean_ctor_get(v___x_4344_, 0);
lean_inc_n(v_a_4345_, 2);
lean_dec_ref_known(v___x_4344_, 1);
lean_inc(v_a_4326_);
v___f_4346_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_4346_, 0, v_a_4326_);
lean_closure_set(v___f_4346_, 1, v_e_4325_);
lean_closure_set(v___f_4346_, 2, v_a_4345_);
v___x_4347_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_box(0), v___f_4346_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_);
if (lean_obj_tag(v___x_4347_) == 0)
{
lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4354_; 
v_isSharedCheck_4354_ = !lean_is_exclusive(v___x_4347_);
if (v_isSharedCheck_4354_ == 0)
{
lean_object* v_unused_4355_; 
v_unused_4355_ = lean_ctor_get(v___x_4347_, 0);
lean_dec(v_unused_4355_);
v___x_4349_ = v___x_4347_;
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
else
{
lean_dec(v___x_4347_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4352_; 
if (v_isShared_4350_ == 0)
{
lean_ctor_set(v___x_4349_, 0, v_a_4345_);
v___x_4352_ = v___x_4349_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4353_; 
v_reuseFailAlloc_4353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4353_, 0, v_a_4345_);
v___x_4352_ = v_reuseFailAlloc_4353_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
return v___x_4352_;
}
}
}
else
{
lean_object* v_a_4356_; lean_object* v___x_4358_; uint8_t v_isShared_4359_; uint8_t v_isSharedCheck_4363_; 
lean_dec(v_a_4345_);
v_a_4356_ = lean_ctor_get(v___x_4347_, 0);
v_isSharedCheck_4363_ = !lean_is_exclusive(v___x_4347_);
if (v_isSharedCheck_4363_ == 0)
{
v___x_4358_ = v___x_4347_;
v_isShared_4359_ = v_isSharedCheck_4363_;
goto v_resetjp_4357_;
}
else
{
lean_inc(v_a_4356_);
lean_dec(v___x_4347_);
v___x_4358_ = lean_box(0);
v_isShared_4359_ = v_isSharedCheck_4363_;
goto v_resetjp_4357_;
}
v_resetjp_4357_:
{
lean_object* v___x_4361_; 
if (v_isShared_4359_ == 0)
{
v___x_4361_ = v___x_4358_;
goto v_reusejp_4360_;
}
else
{
lean_object* v_reuseFailAlloc_4362_; 
v_reuseFailAlloc_4362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4362_, 0, v_a_4356_);
v___x_4361_ = v_reuseFailAlloc_4362_;
goto v_reusejp_4360_;
}
v_reusejp_4360_:
{
return v___x_4361_;
}
}
}
}
else
{
lean_dec_ref(v_e_4325_);
return v___x_4344_;
}
}
else
{
lean_object* v_val_4364_; lean_object* v___x_4366_; 
lean_dec_ref(v_e_4325_);
lean_dec_ref(v_post_4321_);
lean_dec_ref(v_pre_4320_);
v_val_4364_ = lean_ctor_get(v___x_4338_, 0);
lean_inc(v_val_4364_);
lean_dec_ref_known(v___x_4338_, 1);
if (v_isShared_4337_ == 0)
{
lean_ctor_set(v___x_4336_, 0, v_val_4364_);
v___x_4366_ = v___x_4336_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v_val_4364_);
v___x_4366_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
return v___x_4366_;
}
}
}
}
else
{
lean_object* v_a_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4376_; 
lean_dec_ref(v_e_4325_);
lean_dec_ref(v_post_4321_);
lean_dec_ref(v_pre_4320_);
v_a_4369_ = lean_ctor_get(v___x_4333_, 0);
v_isSharedCheck_4376_ = !lean_is_exclusive(v___x_4333_);
if (v_isSharedCheck_4376_ == 0)
{
v___x_4371_ = v___x_4333_;
v_isShared_4372_ = v_isSharedCheck_4376_;
goto v_resetjp_4370_;
}
else
{
lean_inc(v_a_4369_);
lean_dec(v___x_4333_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4376_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4374_; 
if (v_isShared_4372_ == 0)
{
v___x_4374_ = v___x_4371_;
goto v_reusejp_4373_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v_a_4369_);
v___x_4374_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4373_;
}
v_reusejp_4373_:
{
return v___x_4374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(lean_object* v_pre_4377_, lean_object* v_post_4378_, uint8_t v_usedLetOnly_4379_, uint8_t v_skipConstInApp_4380_, uint8_t v_skipInstances_4381_, lean_object* v_fvars_4382_, lean_object* v_e_4383_, lean_object* v_a_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_){
_start:
{
if (lean_obj_tag(v_e_4383_) == 7)
{
lean_object* v_binderName_4390_; lean_object* v_binderType_4391_; lean_object* v_body_4392_; uint8_t v_binderInfo_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___f_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; 
v_binderName_4390_ = lean_ctor_get(v_e_4383_, 0);
lean_inc(v_binderName_4390_);
v_binderType_4391_ = lean_ctor_get(v_e_4383_, 1);
lean_inc_ref(v_binderType_4391_);
v_body_4392_ = lean_ctor_get(v_e_4383_, 2);
lean_inc_ref(v_body_4392_);
v_binderInfo_4393_ = lean_ctor_get_uint8(v_e_4383_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_4383_, 3);
v___x_4394_ = lean_box(v_usedLetOnly_4379_);
v___x_4395_ = lean_box(v_skipConstInApp_4380_);
v___x_4396_ = lean_box(v_skipInstances_4381_);
lean_inc_ref(v_post_4378_);
lean_inc_ref(v_pre_4377_);
lean_inc_ref(v_fvars_4382_);
v___f_4397_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed), 14, 7);
lean_closure_set(v___f_4397_, 0, v_fvars_4382_);
lean_closure_set(v___f_4397_, 1, v_pre_4377_);
lean_closure_set(v___f_4397_, 2, v_post_4378_);
lean_closure_set(v___f_4397_, 3, v___x_4394_);
lean_closure_set(v___f_4397_, 4, v___x_4395_);
lean_closure_set(v___f_4397_, 5, v___x_4396_);
lean_closure_set(v___f_4397_, 6, v_body_4392_);
v___x_4398_ = lean_expr_instantiate_rev(v_binderType_4391_, v_fvars_4382_);
lean_dec_ref(v_fvars_4382_);
lean_dec_ref(v_binderType_4391_);
v___x_4399_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4377_, v_post_4378_, v_usedLetOnly_4379_, v_skipConstInApp_4380_, v_skipInstances_4381_, v___x_4398_, v_a_4384_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_);
if (lean_obj_tag(v___x_4399_) == 0)
{
lean_object* v_a_4400_; uint8_t v___x_4401_; lean_object* v___x_4402_; 
v_a_4400_ = lean_ctor_get(v___x_4399_, 0);
lean_inc(v_a_4400_);
lean_dec_ref_known(v___x_4399_, 1);
v___x_4401_ = 0;
v___x_4402_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_binderName_4390_, v_binderInfo_4393_, v_a_4400_, v___f_4397_, v___x_4401_, v_a_4384_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_);
return v___x_4402_;
}
else
{
lean_dec_ref(v___f_4397_);
lean_dec(v_binderName_4390_);
return v___x_4399_;
}
}
else
{
lean_object* v___x_4403_; lean_object* v___x_4404_; 
v___x_4403_ = lean_expr_instantiate_rev(v_e_4383_, v_fvars_4382_);
lean_dec_ref(v_e_4383_);
lean_inc_ref(v_post_4378_);
lean_inc_ref(v_pre_4377_);
v___x_4404_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4377_, v_post_4378_, v_usedLetOnly_4379_, v_skipConstInApp_4380_, v_skipInstances_4381_, v___x_4403_, v_a_4384_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_);
if (lean_obj_tag(v___x_4404_) == 0)
{
lean_object* v_a_4405_; uint8_t v___x_4406_; uint8_t v___x_4407_; uint8_t v___x_4408_; lean_object* v___x_4409_; 
v_a_4405_ = lean_ctor_get(v___x_4404_, 0);
lean_inc(v_a_4405_);
lean_dec_ref_known(v___x_4404_, 1);
v___x_4406_ = 0;
v___x_4407_ = 1;
v___x_4408_ = 1;
v___x_4409_ = l_Lean_Meta_mkForallFVars(v_fvars_4382_, v_a_4405_, v___x_4406_, v_usedLetOnly_4379_, v___x_4407_, v___x_4408_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_);
if (lean_obj_tag(v___x_4409_) == 0)
{
lean_object* v_a_4410_; lean_object* v___x_4411_; 
v_a_4410_ = lean_ctor_get(v___x_4409_, 0);
lean_inc(v_a_4410_);
lean_dec_ref_known(v___x_4409_, 1);
v___x_4411_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4377_, v_post_4378_, v_usedLetOnly_4379_, v_skipConstInApp_4380_, v_skipInstances_4381_, v_a_4410_, v_a_4384_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_);
return v___x_4411_;
}
else
{
lean_dec_ref(v_post_4378_);
lean_dec_ref(v_pre_4377_);
return v___x_4409_;
}
}
else
{
lean_dec_ref(v_fvars_4382_);
lean_dec_ref(v_post_4378_);
lean_dec_ref(v_pre_4377_);
return v___x_4404_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(lean_object* v_fvars_4412_, lean_object* v_pre_4413_, lean_object* v_post_4414_, uint8_t v_usedLetOnly_4415_, uint8_t v_skipConstInApp_4416_, uint8_t v_skipInstances_4417_, lean_object* v_body_4418_, lean_object* v_x_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_){
_start:
{
lean_object* v___x_4426_; lean_object* v___x_4427_; 
v___x_4426_ = lean_array_push(v_fvars_4412_, v_x_4419_);
v___x_4427_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4413_, v_post_4414_, v_usedLetOnly_4415_, v_skipConstInApp_4416_, v_skipInstances_4417_, v___x_4426_, v_body_4418_, v___y_4420_, v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_);
return v___x_4427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_4428_, lean_object* v_post_4429_, lean_object* v_usedLetOnly_4430_, lean_object* v_skipConstInApp_4431_, lean_object* v_skipInstances_4432_, lean_object* v_e_4433_, lean_object* v_a_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_){
_start:
{
uint8_t v_usedLetOnly_boxed_4440_; uint8_t v_skipConstInApp_boxed_4441_; uint8_t v_skipInstances_boxed_4442_; lean_object* v_res_4443_; 
v_usedLetOnly_boxed_4440_ = lean_unbox(v_usedLetOnly_4430_);
v_skipConstInApp_boxed_4441_ = lean_unbox(v_skipConstInApp_4431_);
v_skipInstances_boxed_4442_ = lean_unbox(v_skipInstances_4432_);
v_res_4443_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4428_, v_post_4429_, v_usedLetOnly_boxed_4440_, v_skipConstInApp_boxed_4441_, v_skipInstances_boxed_4442_, v_e_4433_, v_a_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_);
lean_dec(v___y_4438_);
lean_dec_ref(v___y_4437_);
lean_dec(v___y_4436_);
lean_dec_ref(v___y_4435_);
lean_dec(v_a_4434_);
return v_res_4443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___boxed(lean_object* v_pre_4444_, lean_object* v_post_4445_, lean_object* v_usedLetOnly_4446_, lean_object* v_skipConstInApp_4447_, lean_object* v_skipInstances_4448_, lean_object* v_e_4449_, lean_object* v_a_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_){
_start:
{
uint8_t v_usedLetOnly_boxed_4456_; uint8_t v_skipConstInApp_boxed_4457_; uint8_t v_skipInstances_boxed_4458_; lean_object* v_res_4459_; 
v_usedLetOnly_boxed_4456_ = lean_unbox(v_usedLetOnly_4446_);
v_skipConstInApp_boxed_4457_ = lean_unbox(v_skipConstInApp_4447_);
v_skipInstances_boxed_4458_ = lean_unbox(v_skipInstances_4448_);
v_res_4459_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4444_, v_post_4445_, v_usedLetOnly_boxed_4456_, v_skipConstInApp_boxed_4457_, v_skipInstances_boxed_4458_, v_e_4449_, v_a_4450_, v___y_4451_, v___y_4452_, v___y_4453_, v___y_4454_);
lean_dec(v___y_4454_);
lean_dec_ref(v___y_4453_);
lean_dec(v___y_4452_);
lean_dec_ref(v___y_4451_);
lean_dec(v_a_4450_);
return v_res_4459_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___boxed(lean_object* v_pre_4460_, lean_object* v_post_4461_, lean_object* v_usedLetOnly_4462_, lean_object* v_skipConstInApp_4463_, lean_object* v_skipInstances_4464_, lean_object* v_fvars_4465_, lean_object* v_e_4466_, lean_object* v_a_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_){
_start:
{
uint8_t v_usedLetOnly_boxed_4473_; uint8_t v_skipConstInApp_boxed_4474_; uint8_t v_skipInstances_boxed_4475_; lean_object* v_res_4476_; 
v_usedLetOnly_boxed_4473_ = lean_unbox(v_usedLetOnly_4462_);
v_skipConstInApp_boxed_4474_ = lean_unbox(v_skipConstInApp_4463_);
v_skipInstances_boxed_4475_ = lean_unbox(v_skipInstances_4464_);
v_res_4476_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4460_, v_post_4461_, v_usedLetOnly_boxed_4473_, v_skipConstInApp_boxed_4474_, v_skipInstances_boxed_4475_, v_fvars_4465_, v_e_4466_, v_a_4467_, v___y_4468_, v___y_4469_, v___y_4470_, v___y_4471_);
lean_dec(v___y_4471_);
lean_dec_ref(v___y_4470_);
lean_dec(v___y_4469_);
lean_dec_ref(v___y_4468_);
lean_dec(v_a_4467_);
return v_res_4476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___boxed(lean_object* v_pre_4477_, lean_object* v_post_4478_, lean_object* v_usedLetOnly_4479_, lean_object* v_skipConstInApp_4480_, lean_object* v_skipInstances_4481_, lean_object* v_fvars_4482_, lean_object* v_e_4483_, lean_object* v_a_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_){
_start:
{
uint8_t v_usedLetOnly_boxed_4490_; uint8_t v_skipConstInApp_boxed_4491_; uint8_t v_skipInstances_boxed_4492_; lean_object* v_res_4493_; 
v_usedLetOnly_boxed_4490_ = lean_unbox(v_usedLetOnly_4479_);
v_skipConstInApp_boxed_4491_ = lean_unbox(v_skipConstInApp_4480_);
v_skipInstances_boxed_4492_ = lean_unbox(v_skipInstances_4481_);
v_res_4493_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_4477_, v_post_4478_, v_usedLetOnly_boxed_4490_, v_skipConstInApp_boxed_4491_, v_skipInstances_boxed_4492_, v_fvars_4482_, v_e_4483_, v_a_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_);
lean_dec(v___y_4488_);
lean_dec_ref(v___y_4487_);
lean_dec(v___y_4486_);
lean_dec_ref(v___y_4485_);
lean_dec(v_a_4484_);
return v_res_4493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___boxed(lean_object* v_pre_4494_, lean_object* v_post_4495_, lean_object* v_usedLetOnly_4496_, lean_object* v_skipConstInApp_4497_, lean_object* v_skipInstances_4498_, lean_object* v_fvars_4499_, lean_object* v_e_4500_, lean_object* v_a_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_){
_start:
{
uint8_t v_usedLetOnly_boxed_4507_; uint8_t v_skipConstInApp_boxed_4508_; uint8_t v_skipInstances_boxed_4509_; lean_object* v_res_4510_; 
v_usedLetOnly_boxed_4507_ = lean_unbox(v_usedLetOnly_4496_);
v_skipConstInApp_boxed_4508_ = lean_unbox(v_skipConstInApp_4497_);
v_skipInstances_boxed_4509_ = lean_unbox(v_skipInstances_4498_);
v_res_4510_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_4494_, v_post_4495_, v_usedLetOnly_boxed_4507_, v_skipConstInApp_boxed_4508_, v_skipInstances_boxed_4509_, v_fvars_4499_, v_e_4500_, v_a_4501_, v___y_4502_, v___y_4503_, v___y_4504_, v___y_4505_);
lean_dec(v___y_4505_);
lean_dec_ref(v___y_4504_);
lean_dec(v___y_4503_);
lean_dec_ref(v___y_4502_);
lean_dec(v_a_4501_);
return v_res_4510_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_4511_, lean_object* v___x_4512_, lean_object* v_pre_4513_, lean_object* v_post_4514_, lean_object* v_usedLetOnly_4515_, lean_object* v_skipConstInApp_4516_, lean_object* v_skipInstances_4517_, lean_object* v_a_4518_, lean_object* v_b_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_){
_start:
{
uint8_t v_usedLetOnly_boxed_4526_; uint8_t v_skipConstInApp_boxed_4527_; uint8_t v_skipInstances_boxed_4528_; lean_object* v_res_4529_; 
v_usedLetOnly_boxed_4526_ = lean_unbox(v_usedLetOnly_4515_);
v_skipConstInApp_boxed_4527_ = lean_unbox(v_skipConstInApp_4516_);
v_skipInstances_boxed_4528_ = lean_unbox(v_skipInstances_4517_);
v_res_4529_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_4511_, v___x_4512_, v_pre_4513_, v_post_4514_, v_usedLetOnly_boxed_4526_, v_skipConstInApp_boxed_4527_, v_skipInstances_boxed_4528_, v_a_4518_, v_b_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_);
lean_dec(v___y_4524_);
lean_dec_ref(v___y_4523_);
lean_dec(v___y_4522_);
lean_dec_ref(v___y_4521_);
lean_dec(v___y_4520_);
lean_dec_ref(v___x_4512_);
lean_dec(v_upperBound_4511_);
return v_res_4529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8___boxed(lean_object* v_skipInstances_4530_, lean_object* v_pre_4531_, lean_object* v_post_4532_, lean_object* v_usedLetOnly_4533_, lean_object* v_skipConstInApp_4534_, lean_object* v_x_4535_, lean_object* v_x_4536_, lean_object* v_x_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_){
_start:
{
uint8_t v_skipInstances_boxed_4544_; uint8_t v_usedLetOnly_boxed_4545_; uint8_t v_skipConstInApp_boxed_4546_; lean_object* v_res_4547_; 
v_skipInstances_boxed_4544_ = lean_unbox(v_skipInstances_4530_);
v_usedLetOnly_boxed_4545_ = lean_unbox(v_usedLetOnly_4533_);
v_skipConstInApp_boxed_4546_ = lean_unbox(v_skipConstInApp_4534_);
v_res_4547_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(v_skipInstances_boxed_4544_, v_pre_4531_, v_post_4532_, v_usedLetOnly_boxed_4545_, v_skipConstInApp_boxed_4546_, v_x_4535_, v_x_4536_, v_x_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_);
lean_dec(v___y_4542_);
lean_dec_ref(v___y_4541_);
lean_dec(v___y_4540_);
lean_dec_ref(v___y_4539_);
lean_dec(v___y_4538_);
return v_res_4547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(lean_object* v_input_4548_, lean_object* v_pre_4549_, lean_object* v_post_4550_, uint8_t v_usedLetOnly_4551_, uint8_t v_skipConstInApp_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_){
_start:
{
uint8_t v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v_a_4561_; lean_object* v___x_4562_; 
v___x_4558_ = 0;
v___x_4559_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_4560_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_box(0), v___x_4559_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_);
v_a_4561_ = lean_ctor_get(v___x_4560_, 0);
lean_inc(v_a_4561_);
lean_dec_ref(v___x_4560_);
v___x_4562_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4549_, v_post_4550_, v_usedLetOnly_4551_, v_skipConstInApp_4552_, v___x_4558_, v_input_4548_, v_a_4561_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_);
if (lean_obj_tag(v___x_4562_) == 0)
{
lean_object* v_a_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4567_; uint8_t v_isShared_4568_; uint8_t v_isSharedCheck_4572_; 
v_a_4563_ = lean_ctor_get(v___x_4562_, 0);
lean_inc(v_a_4563_);
lean_dec_ref_known(v___x_4562_, 1);
v___x_4564_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4564_, 0, lean_box(0));
lean_closure_set(v___x_4564_, 1, lean_box(0));
lean_closure_set(v___x_4564_, 2, v_a_4561_);
v___x_4565_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_box(0), v___x_4564_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_);
v_isSharedCheck_4572_ = !lean_is_exclusive(v___x_4565_);
if (v_isSharedCheck_4572_ == 0)
{
lean_object* v_unused_4573_; 
v_unused_4573_ = lean_ctor_get(v___x_4565_, 0);
lean_dec(v_unused_4573_);
v___x_4567_ = v___x_4565_;
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
else
{
lean_dec(v___x_4565_);
v___x_4567_ = lean_box(0);
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
v_resetjp_4566_:
{
lean_object* v___x_4570_; 
if (v_isShared_4568_ == 0)
{
lean_ctor_set(v___x_4567_, 0, v_a_4563_);
v___x_4570_ = v___x_4567_;
goto v_reusejp_4569_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v_a_4563_);
v___x_4570_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4569_;
}
v_reusejp_4569_:
{
return v___x_4570_;
}
}
}
else
{
lean_dec(v_a_4561_);
return v___x_4562_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___boxed(lean_object* v_input_4574_, lean_object* v_pre_4575_, lean_object* v_post_4576_, lean_object* v_usedLetOnly_4577_, lean_object* v_skipConstInApp_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_){
_start:
{
uint8_t v_usedLetOnly_boxed_4584_; uint8_t v_skipConstInApp_boxed_4585_; lean_object* v_res_4586_; 
v_usedLetOnly_boxed_4584_ = lean_unbox(v_usedLetOnly_4577_);
v_skipConstInApp_boxed_4585_ = lean_unbox(v_skipConstInApp_4578_);
v_res_4586_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_input_4574_, v_pre_4575_, v_post_4576_, v_usedLetOnly_boxed_4584_, v_skipConstInApp_boxed_4585_, v___y_4579_, v___y_4580_, v___y_4581_, v___y_4582_);
lean_dec(v___y_4582_);
lean_dec_ref(v___y_4581_);
lean_dec(v___y_4580_);
lean_dec_ref(v___y_4579_);
return v_res_4586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce(lean_object* v_e_4588_, uint8_t v_zetaDelta_4589_, uint8_t v_zetaHave_4590_, uint8_t v_beta_4591_, lean_object* v_a_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_){
_start:
{
lean_object* v_lctx_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___f_4601_; uint8_t v___x_4602_; 
v_lctx_4597_ = lean_ctor_get(v_a_4592_, 2);
lean_inc_ref(v_lctx_4597_);
v___x_4598_ = lean_local_ctx_num_indices(v_lctx_4597_);
v___x_4599_ = lean_box(v_zetaHave_4590_);
v___x_4600_ = lean_box(v_zetaDelta_4589_);
v___f_4601_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__0___boxed), 9, 3);
lean_closure_set(v___f_4601_, 0, v___x_4599_);
lean_closure_set(v___f_4601_, 1, v___x_4598_);
lean_closure_set(v___f_4601_, 2, v___x_4600_);
v___x_4602_ = 1;
if (v_beta_4591_ == 0)
{
lean_object* v___f_4603_; lean_object* v___f_4604_; lean_object* v___x_4605_; 
v___f_4603_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v___f_4604_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__2___boxed), 7, 1);
lean_closure_set(v___f_4604_, 0, v___f_4601_);
v___x_4605_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4588_, v___f_4604_, v___f_4603_, v___x_4602_, v_beta_4591_, v_a_4592_, v_a_4593_, v_a_4594_, v_a_4595_);
return v___x_4605_;
}
else
{
lean_object* v___f_4606_; lean_object* v___f_4607_; uint8_t v___x_4608_; lean_object* v___x_4609_; 
v___f_4606_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v___f_4607_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__4___boxed), 7, 1);
lean_closure_set(v___f_4607_, 0, v___f_4601_);
v___x_4608_ = 0;
v___x_4609_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4588_, v___f_4607_, v___f_4606_, v___x_4602_, v___x_4608_, v_a_4592_, v_a_4593_, v_a_4594_, v_a_4595_);
return v___x_4609_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___boxed(lean_object* v_e_4610_, lean_object* v_zetaDelta_4611_, lean_object* v_zetaHave_4612_, lean_object* v_beta_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_){
_start:
{
uint8_t v_zetaDelta_boxed_4619_; uint8_t v_zetaHave_boxed_4620_; uint8_t v_beta_boxed_4621_; lean_object* v_res_4622_; 
v_zetaDelta_boxed_4619_ = lean_unbox(v_zetaDelta_4611_);
v_zetaHave_boxed_4620_ = lean_unbox(v_zetaHave_4612_);
v_beta_boxed_4621_ = lean_unbox(v_beta_4613_);
v_res_4622_ = l_Lean_Meta_zetaReduce(v_e_4610_, v_zetaDelta_boxed_4619_, v_zetaHave_boxed_4620_, v_beta_boxed_4621_, v_a_4614_, v_a_4615_, v_a_4616_, v_a_4617_);
lean_dec(v_a_4617_);
lean_dec_ref(v_a_4616_);
lean_dec(v_a_4615_);
lean_dec_ref(v_a_4614_);
return v_res_4622_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(lean_object* v_upperBound_4623_, lean_object* v___x_4624_, lean_object* v_pre_4625_, lean_object* v_post_4626_, uint8_t v_usedLetOnly_4627_, uint8_t v_skipConstInApp_4628_, uint8_t v_skipInstances_4629_, lean_object* v___x_4630_, lean_object* v_inst_4631_, lean_object* v_R_4632_, lean_object* v_a_4633_, lean_object* v_b_4634_, lean_object* v_c_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_){
_start:
{
lean_object* v___x_4642_; 
v___x_4642_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_4623_, v___x_4624_, v_pre_4625_, v_post_4626_, v_usedLetOnly_4627_, v_skipConstInApp_4628_, v_skipInstances_4629_, v_a_4633_, v_b_4634_, v___y_4636_, v___y_4637_, v___y_4638_, v___y_4639_, v___y_4640_);
return v___x_4642_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_4643_ = _args[0];
lean_object* v___x_4644_ = _args[1];
lean_object* v_pre_4645_ = _args[2];
lean_object* v_post_4646_ = _args[3];
lean_object* v_usedLetOnly_4647_ = _args[4];
lean_object* v_skipConstInApp_4648_ = _args[5];
lean_object* v_skipInstances_4649_ = _args[6];
lean_object* v___x_4650_ = _args[7];
lean_object* v_inst_4651_ = _args[8];
lean_object* v_R_4652_ = _args[9];
lean_object* v_a_4653_ = _args[10];
lean_object* v_b_4654_ = _args[11];
lean_object* v_c_4655_ = _args[12];
lean_object* v___y_4656_ = _args[13];
lean_object* v___y_4657_ = _args[14];
lean_object* v___y_4658_ = _args[15];
lean_object* v___y_4659_ = _args[16];
lean_object* v___y_4660_ = _args[17];
lean_object* v___y_4661_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_4662_; uint8_t v_skipConstInApp_boxed_4663_; uint8_t v_skipInstances_boxed_4664_; lean_object* v_res_4665_; 
v_usedLetOnly_boxed_4662_ = lean_unbox(v_usedLetOnly_4647_);
v_skipConstInApp_boxed_4663_ = lean_unbox(v_skipConstInApp_4648_);
v_skipInstances_boxed_4664_ = lean_unbox(v_skipInstances_4649_);
v_res_4665_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(v_upperBound_4643_, v___x_4644_, v_pre_4645_, v_post_4646_, v_usedLetOnly_boxed_4662_, v_skipConstInApp_boxed_4663_, v_skipInstances_boxed_4664_, v___x_4650_, v_inst_4651_, v_R_4652_, v_a_4653_, v_b_4654_, v_c_4655_, v___y_4656_, v___y_4657_, v___y_4658_, v___y_4659_, v___y_4660_);
lean_dec(v___y_4660_);
lean_dec_ref(v___y_4659_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec(v___x_4650_);
lean_dec_ref(v___x_4644_);
lean_dec(v_upperBound_4643_);
return v_res_4665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(lean_object* v_00_u03b1_4666_, lean_object* v_name_4667_, uint8_t v_bi_4668_, lean_object* v_type_4669_, lean_object* v_k_4670_, uint8_t v_kind_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_){
_start:
{
lean_object* v___x_4678_; 
v___x_4678_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_name_4667_, v_bi_4668_, v_type_4669_, v_k_4670_, v_kind_4671_, v___y_4672_, v___y_4673_, v___y_4674_, v___y_4675_, v___y_4676_);
return v___x_4678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object* v_00_u03b1_4679_, lean_object* v_name_4680_, lean_object* v_bi_4681_, lean_object* v_type_4682_, lean_object* v_k_4683_, lean_object* v_kind_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_){
_start:
{
uint8_t v_bi_boxed_4691_; uint8_t v_kind_boxed_4692_; lean_object* v_res_4693_; 
v_bi_boxed_4691_ = lean_unbox(v_bi_4681_);
v_kind_boxed_4692_ = lean_unbox(v_kind_4684_);
v_res_4693_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(v_00_u03b1_4679_, v_name_4680_, v_bi_boxed_4691_, v_type_4682_, v_k_4683_, v_kind_boxed_4692_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_, v___y_4689_);
lean_dec(v___y_4689_);
lean_dec_ref(v___y_4688_);
lean_dec(v___y_4687_);
lean_dec_ref(v___y_4686_);
lean_dec(v___y_4685_);
return v_res_4693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(lean_object* v_00_u03b1_4694_, lean_object* v_name_4695_, lean_object* v_type_4696_, lean_object* v_val_4697_, lean_object* v_k_4698_, uint8_t v_nondep_4699_, uint8_t v_kind_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_){
_start:
{
lean_object* v___x_4707_; 
v___x_4707_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_name_4695_, v_type_4696_, v_val_4697_, v_k_4698_, v_nondep_4699_, v_kind_4700_, v___y_4701_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_);
return v___x_4707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___boxed(lean_object* v_00_u03b1_4708_, lean_object* v_name_4709_, lean_object* v_type_4710_, lean_object* v_val_4711_, lean_object* v_k_4712_, lean_object* v_nondep_4713_, lean_object* v_kind_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_){
_start:
{
uint8_t v_nondep_boxed_4721_; uint8_t v_kind_boxed_4722_; lean_object* v_res_4723_; 
v_nondep_boxed_4721_ = lean_unbox(v_nondep_4713_);
v_kind_boxed_4722_ = lean_unbox(v_kind_4714_);
v_res_4723_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(v_00_u03b1_4708_, v_name_4709_, v_type_4710_, v_val_4711_, v_k_4712_, v_nondep_boxed_4721_, v_kind_boxed_4722_, v___y_4715_, v___y_4716_, v___y_4717_, v___y_4718_, v___y_4719_);
lean_dec(v___y_4719_);
lean_dec_ref(v___y_4718_);
lean_dec(v___y_4717_);
lean_dec_ref(v___y_4716_);
lean_dec(v___y_4715_);
return v_res_4723_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(lean_object* v_00_u03b1_4724_, lean_object* v_ref_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_){
_start:
{
lean_object* v___x_4731_; 
v___x_4731_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_4725_);
return v___x_4731_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___boxed(lean_object* v_00_u03b1_4732_, lean_object* v_ref_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_){
_start:
{
lean_object* v_res_4739_; 
v_res_4739_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(v_00_u03b1_4732_, v_ref_4733_, v___y_4734_, v___y_4735_, v___y_4736_, v___y_4737_);
lean_dec(v___y_4737_);
lean_dec_ref(v___y_4736_);
lean_dec(v___y_4735_);
lean_dec_ref(v___y_4734_);
return v_res_4739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(lean_object* v_00_u03b1_4740_, lean_object* v_x_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_, lean_object* v___y_4745_, lean_object* v___y_4746_){
_start:
{
lean_object* v___x_4748_; 
v___x_4748_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v_x_4741_, v___y_4742_, v___y_4743_, v___y_4744_, v___y_4745_, v___y_4746_);
return v___x_4748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___boxed(lean_object* v_00_u03b1_4749_, lean_object* v_x_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_){
_start:
{
lean_object* v_res_4757_; 
v_res_4757_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(v_00_u03b1_4749_, v_x_4750_, v___y_4751_, v___y_4752_, v___y_4753_, v___y_4754_, v___y_4755_);
lean_dec(v___y_4755_);
lean_dec_ref(v___y_4754_);
lean_dec(v___y_4753_);
lean_dec_ref(v___y_4752_);
lean_dec(v___y_4751_);
return v_res_4757_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(lean_object* v_a_4758_, lean_object* v_as_4759_, size_t v_i_4760_, size_t v_stop_4761_){
_start:
{
uint8_t v___x_4762_; 
v___x_4762_ = lean_usize_dec_eq(v_i_4760_, v_stop_4761_);
if (v___x_4762_ == 0)
{
lean_object* v___x_4763_; uint8_t v___x_4764_; 
v___x_4763_ = lean_array_uget_borrowed(v_as_4759_, v_i_4760_);
v___x_4764_ = l_Lean_instBEqFVarId_beq(v_a_4758_, v___x_4763_);
if (v___x_4764_ == 0)
{
size_t v___x_4765_; size_t v___x_4766_; 
v___x_4765_ = ((size_t)1ULL);
v___x_4766_ = lean_usize_add(v_i_4760_, v___x_4765_);
v_i_4760_ = v___x_4766_;
goto _start;
}
else
{
return v___x_4764_;
}
}
else
{
uint8_t v___x_4768_; 
v___x_4768_ = 0;
return v___x_4768_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0___boxed(lean_object* v_a_4769_, lean_object* v_as_4770_, lean_object* v_i_4771_, lean_object* v_stop_4772_){
_start:
{
size_t v_i_boxed_4773_; size_t v_stop_boxed_4774_; uint8_t v_res_4775_; lean_object* v_r_4776_; 
v_i_boxed_4773_ = lean_unbox_usize(v_i_4771_);
lean_dec(v_i_4771_);
v_stop_boxed_4774_ = lean_unbox_usize(v_stop_4772_);
lean_dec(v_stop_4772_);
v_res_4775_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(v_a_4769_, v_as_4770_, v_i_boxed_4773_, v_stop_boxed_4774_);
lean_dec_ref(v_as_4770_);
lean_dec(v_a_4769_);
v_r_4776_ = lean_box(v_res_4775_);
return v_r_4776_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(lean_object* v_as_4777_, lean_object* v_a_4778_){
_start:
{
lean_object* v___x_4779_; lean_object* v___x_4780_; uint8_t v___x_4781_; 
v___x_4779_ = lean_unsigned_to_nat(0u);
v___x_4780_ = lean_array_get_size(v_as_4777_);
v___x_4781_ = lean_nat_dec_lt(v___x_4779_, v___x_4780_);
if (v___x_4781_ == 0)
{
return v___x_4781_;
}
else
{
if (v___x_4781_ == 0)
{
return v___x_4781_;
}
else
{
size_t v___x_4782_; size_t v___x_4783_; uint8_t v___x_4784_; 
v___x_4782_ = ((size_t)0ULL);
v___x_4783_ = lean_usize_of_nat(v___x_4780_);
v___x_4784_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(v_a_4778_, v_as_4777_, v___x_4782_, v___x_4783_);
return v___x_4784_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0___boxed(lean_object* v_as_4785_, lean_object* v_a_4786_){
_start:
{
uint8_t v_res_4787_; lean_object* v_r_4788_; 
v_res_4787_ = l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(v_as_4785_, v_a_4786_);
lean_dec(v_a_4786_);
lean_dec_ref(v_as_4785_);
v_r_4788_ = lean_box(v_res_4787_);
return v_r_4788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1(lean_object* v_fvars_4789_, lean_object* v_e_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_){
_start:
{
lean_object* v___x_4799_; 
v___x_4799_ = l_Lean_Expr_getAppFn(v_e_4790_);
if (lean_obj_tag(v___x_4799_) == 1)
{
lean_object* v_fvarId_4800_; uint8_t v___x_4801_; 
v_fvarId_4800_ = lean_ctor_get(v___x_4799_, 0);
lean_inc(v_fvarId_4800_);
lean_dec_ref_known(v___x_4799_, 1);
v___x_4801_ = l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(v_fvars_4789_, v_fvarId_4800_);
if (v___x_4801_ == 0)
{
lean_dec(v_fvarId_4800_);
lean_dec_ref(v_e_4790_);
goto v___jp_4796_;
}
else
{
uint8_t v___x_4802_; lean_object* v___x_4803_; 
v___x_4802_ = 0;
v___x_4803_ = l_Lean_FVarId_getValue_x3f___redArg(v_fvarId_4800_, v___x_4802_, v___y_4791_, v___y_4793_, v___y_4794_);
if (lean_obj_tag(v___x_4803_) == 0)
{
lean_object* v_a_4804_; 
v_a_4804_ = lean_ctor_get(v___x_4803_, 0);
lean_inc(v_a_4804_);
lean_dec_ref_known(v___x_4803_, 1);
if (lean_obj_tag(v_a_4804_) == 1)
{
lean_object* v_val_4805_; lean_object* v___x_4807_; uint8_t v_isShared_4808_; uint8_t v_isSharedCheck_4828_; 
v_val_4805_ = lean_ctor_get(v_a_4804_, 0);
v_isSharedCheck_4828_ = !lean_is_exclusive(v_a_4804_);
if (v_isSharedCheck_4828_ == 0)
{
v___x_4807_ = v_a_4804_;
v_isShared_4808_ = v_isSharedCheck_4828_;
goto v_resetjp_4806_;
}
else
{
lean_inc(v_val_4805_);
lean_dec(v_a_4804_);
v___x_4807_ = lean_box(0);
v_isShared_4808_ = v_isSharedCheck_4828_;
goto v_resetjp_4806_;
}
v_resetjp_4806_:
{
lean_object* v___x_4809_; lean_object* v_a_4810_; lean_object* v___x_4812_; uint8_t v_isShared_4813_; uint8_t v_isSharedCheck_4827_; 
v___x_4809_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_4805_, v___y_4792_);
v_a_4810_ = lean_ctor_get(v___x_4809_, 0);
v_isSharedCheck_4827_ = !lean_is_exclusive(v___x_4809_);
if (v_isSharedCheck_4827_ == 0)
{
v___x_4812_ = v___x_4809_;
v_isShared_4813_ = v_isSharedCheck_4827_;
goto v_resetjp_4811_;
}
else
{
lean_inc(v_a_4810_);
lean_dec(v___x_4809_);
v___x_4812_ = lean_box(0);
v_isShared_4813_ = v_isSharedCheck_4827_;
goto v_resetjp_4811_;
}
v_resetjp_4811_:
{
lean_object* v_dummy_4814_; lean_object* v_nargs_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4822_; 
v_dummy_4814_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1);
v_nargs_4815_ = l_Lean_Expr_getAppNumArgs(v_e_4790_);
lean_inc(v_nargs_4815_);
v___x_4816_ = lean_mk_array(v_nargs_4815_, v_dummy_4814_);
v___x_4817_ = lean_unsigned_to_nat(1u);
v___x_4818_ = lean_nat_sub(v_nargs_4815_, v___x_4817_);
lean_dec(v_nargs_4815_);
v___x_4819_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_4790_, v___x_4816_, v___x_4818_);
v___x_4820_ = l_Lean_Expr_beta(v_a_4810_, v___x_4819_);
if (v_isShared_4808_ == 0)
{
lean_ctor_set(v___x_4807_, 0, v___x_4820_);
v___x_4822_ = v___x_4807_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4826_; 
v_reuseFailAlloc_4826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4826_, 0, v___x_4820_);
v___x_4822_ = v_reuseFailAlloc_4826_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
lean_object* v___x_4824_; 
if (v_isShared_4813_ == 0)
{
lean_ctor_set(v___x_4812_, 0, v___x_4822_);
v___x_4824_ = v___x_4812_;
goto v_reusejp_4823_;
}
else
{
lean_object* v_reuseFailAlloc_4825_; 
v_reuseFailAlloc_4825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4825_, 0, v___x_4822_);
v___x_4824_ = v_reuseFailAlloc_4825_;
goto v_reusejp_4823_;
}
v_reusejp_4823_:
{
return v___x_4824_;
}
}
}
}
}
else
{
lean_dec(v_a_4804_);
lean_dec_ref(v_e_4790_);
goto v___jp_4796_;
}
}
else
{
lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4836_; 
lean_dec_ref(v_e_4790_);
v_a_4829_ = lean_ctor_get(v___x_4803_, 0);
v_isSharedCheck_4836_ = !lean_is_exclusive(v___x_4803_);
if (v_isSharedCheck_4836_ == 0)
{
v___x_4831_ = v___x_4803_;
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v___x_4803_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4834_; 
if (v_isShared_4832_ == 0)
{
v___x_4834_ = v___x_4831_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4835_; 
v_reuseFailAlloc_4835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4835_, 0, v_a_4829_);
v___x_4834_ = v_reuseFailAlloc_4835_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
return v___x_4834_;
}
}
}
}
}
else
{
lean_object* v___x_4837_; lean_object* v___x_4838_; 
lean_dec_ref(v___x_4799_);
lean_dec_ref(v_e_4790_);
v___x_4837_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4838_, 0, v___x_4837_);
return v___x_4838_;
}
v___jp_4796_:
{
lean_object* v___x_4797_; lean_object* v___x_4798_; 
v___x_4797_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4798_, 0, v___x_4797_);
return v___x_4798_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1___boxed(lean_object* v_fvars_4839_, lean_object* v_e_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_){
_start:
{
lean_object* v_res_4846_; 
v_res_4846_ = l_Lean_Meta_zetaDeltaFVars___lam__1(v_fvars_4839_, v_e_4840_, v___y_4841_, v___y_4842_, v___y_4843_, v___y_4844_);
lean_dec(v___y_4844_);
lean_dec_ref(v___y_4843_);
lean_dec(v___y_4842_);
lean_dec_ref(v___y_4841_);
lean_dec_ref(v_fvars_4839_);
return v_res_4846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars(lean_object* v_e_4847_, lean_object* v_fvars_4848_, lean_object* v_a_4849_, lean_object* v_a_4850_, lean_object* v_a_4851_, lean_object* v_a_4852_){
_start:
{
lean_object* v___f_4854_; lean_object* v_pre_4855_; uint8_t v___x_4856_; lean_object* v___x_4857_; 
v___f_4854_ = ((lean_object*)(l_Lean_Meta_zetaReduce___closed__0));
v_pre_4855_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaDeltaFVars___lam__1___boxed), 7, 1);
lean_closure_set(v_pre_4855_, 0, v_fvars_4848_);
v___x_4856_ = 0;
v___x_4857_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4847_, v_pre_4855_, v___f_4854_, v___x_4856_, v___x_4856_, v_a_4849_, v_a_4850_, v_a_4851_, v_a_4852_);
return v___x_4857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___boxed(lean_object* v_e_4858_, lean_object* v_fvars_4859_, lean_object* v_a_4860_, lean_object* v_a_4861_, lean_object* v_a_4862_, lean_object* v_a_4863_, lean_object* v_a_4864_){
_start:
{
lean_object* v_res_4865_; 
v_res_4865_ = l_Lean_Meta_zetaDeltaFVars(v_e_4858_, v_fvars_4859_, v_a_4860_, v_a_4861_, v_a_4862_, v_a_4863_);
lean_dec(v_a_4863_);
lean_dec_ref(v_a_4862_);
lean_dec(v_a_4861_);
lean_dec_ref(v_a_4860_);
return v_res_4865_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4866_; 
v___x_4866_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4866_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_4867_; lean_object* v___x_4868_; 
v___x_4867_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0);
v___x_4868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4868_, 0, v___x_4867_);
return v___x_4868_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_4869_; lean_object* v___x_4870_; 
v___x_4869_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1);
v___x_4870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4870_, 0, v___x_4869_);
lean_ctor_set(v___x_4870_, 1, v___x_4869_);
return v___x_4870_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(lean_object* v_env_4871_, lean_object* v___y_4872_){
_start:
{
lean_object* v___x_4874_; lean_object* v_nextMacroScope_4875_; lean_object* v_ngen_4876_; lean_object* v_auxDeclNGen_4877_; lean_object* v_traceState_4878_; lean_object* v_messages_4879_; lean_object* v_infoState_4880_; lean_object* v_snapshotTasks_4881_; lean_object* v___x_4883_; uint8_t v_isShared_4884_; uint8_t v_isSharedCheck_4892_; 
v___x_4874_ = lean_st_ref_take(v___y_4872_);
v_nextMacroScope_4875_ = lean_ctor_get(v___x_4874_, 1);
v_ngen_4876_ = lean_ctor_get(v___x_4874_, 2);
v_auxDeclNGen_4877_ = lean_ctor_get(v___x_4874_, 3);
v_traceState_4878_ = lean_ctor_get(v___x_4874_, 4);
v_messages_4879_ = lean_ctor_get(v___x_4874_, 6);
v_infoState_4880_ = lean_ctor_get(v___x_4874_, 7);
v_snapshotTasks_4881_ = lean_ctor_get(v___x_4874_, 8);
v_isSharedCheck_4892_ = !lean_is_exclusive(v___x_4874_);
if (v_isSharedCheck_4892_ == 0)
{
lean_object* v_unused_4893_; lean_object* v_unused_4894_; 
v_unused_4893_ = lean_ctor_get(v___x_4874_, 5);
lean_dec(v_unused_4893_);
v_unused_4894_ = lean_ctor_get(v___x_4874_, 0);
lean_dec(v_unused_4894_);
v___x_4883_ = v___x_4874_;
v_isShared_4884_ = v_isSharedCheck_4892_;
goto v_resetjp_4882_;
}
else
{
lean_inc(v_snapshotTasks_4881_);
lean_inc(v_infoState_4880_);
lean_inc(v_messages_4879_);
lean_inc(v_traceState_4878_);
lean_inc(v_auxDeclNGen_4877_);
lean_inc(v_ngen_4876_);
lean_inc(v_nextMacroScope_4875_);
lean_dec(v___x_4874_);
v___x_4883_ = lean_box(0);
v_isShared_4884_ = v_isSharedCheck_4892_;
goto v_resetjp_4882_;
}
v_resetjp_4882_:
{
lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4888_; 
v___x_4885_ = lean_box(0);
v___x_4886_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2);
if (v_isShared_4884_ == 0)
{
lean_ctor_set(v___x_4883_, 5, v___x_4886_);
lean_ctor_set(v___x_4883_, 0, v_env_4871_);
v___x_4888_ = v___x_4883_;
goto v_reusejp_4887_;
}
else
{
lean_object* v_reuseFailAlloc_4891_; 
v_reuseFailAlloc_4891_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4891_, 0, v_env_4871_);
lean_ctor_set(v_reuseFailAlloc_4891_, 1, v_nextMacroScope_4875_);
lean_ctor_set(v_reuseFailAlloc_4891_, 2, v_ngen_4876_);
lean_ctor_set(v_reuseFailAlloc_4891_, 3, v_auxDeclNGen_4877_);
lean_ctor_set(v_reuseFailAlloc_4891_, 4, v_traceState_4878_);
lean_ctor_set(v_reuseFailAlloc_4891_, 5, v___x_4886_);
lean_ctor_set(v_reuseFailAlloc_4891_, 6, v_messages_4879_);
lean_ctor_set(v_reuseFailAlloc_4891_, 7, v_infoState_4880_);
lean_ctor_set(v_reuseFailAlloc_4891_, 8, v_snapshotTasks_4881_);
v___x_4888_ = v_reuseFailAlloc_4891_;
goto v_reusejp_4887_;
}
v_reusejp_4887_:
{
lean_object* v___x_4889_; lean_object* v___x_4890_; 
v___x_4889_ = lean_st_ref_put(v___y_4872_, v___x_4888_);
v___x_4890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4890_, 0, v___x_4885_);
return v___x_4890_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___boxed(lean_object* v_env_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_){
_start:
{
lean_object* v_res_4898_; 
v_res_4898_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4895_, v___y_4896_);
lean_dec(v___y_4896_);
return v_res_4898_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(lean_object* v_env_4899_, lean_object* v___y_4900_, lean_object* v___y_4901_){
_start:
{
lean_object* v___x_4903_; 
v___x_4903_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4899_, v___y_4901_);
return v___x_4903_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___boxed(lean_object* v_env_4904_, lean_object* v___y_4905_, lean_object* v___y_4906_, lean_object* v___y_4907_){
_start:
{
lean_object* v_res_4908_; 
v_res_4908_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(v_env_4904_, v___y_4905_, v___y_4906_);
lean_dec(v___y_4906_);
lean_dec_ref(v___y_4905_);
return v_res_4908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1(lean_object* v_env_4909_, lean_object* v___x_4910_, uint8_t v___x_4911_, lean_object* v_e_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_){
_start:
{
if (lean_obj_tag(v_e_4912_) == 4)
{
lean_object* v_declName_4916_; lean_object* v_us_4917_; uint8_t v___x_4918_; uint8_t v___x_4919_; 
v_declName_4916_ = lean_ctor_get(v_e_4912_, 0);
v_us_4917_ = lean_ctor_get(v_e_4912_, 1);
v___x_4918_ = 1;
lean_inc(v_declName_4916_);
v___x_4919_ = l_Lean_Environment_contains(v_env_4909_, v_declName_4916_, v___x_4918_);
if (v___x_4919_ == 0)
{
lean_object* v___x_4920_; 
lean_inc(v_declName_4916_);
v___x_4920_ = l_Lean_Environment_find_x3f(v___x_4910_, v_declName_4916_, v___x_4911_);
if (lean_obj_tag(v___x_4920_) == 1)
{
lean_object* v_val_4921_; lean_object* v___x_4923_; uint8_t v_isShared_4924_; uint8_t v_isSharedCheck_4950_; 
v_val_4921_ = lean_ctor_get(v___x_4920_, 0);
v_isSharedCheck_4950_ = !lean_is_exclusive(v___x_4920_);
if (v_isSharedCheck_4950_ == 0)
{
v___x_4923_ = v___x_4920_;
v_isShared_4924_ = v_isSharedCheck_4950_;
goto v_resetjp_4922_;
}
else
{
lean_inc(v_val_4921_);
lean_dec(v___x_4920_);
v___x_4923_ = lean_box(0);
v_isShared_4924_ = v_isSharedCheck_4950_;
goto v_resetjp_4922_;
}
v_resetjp_4922_:
{
uint8_t v___x_4925_; 
v___x_4925_ = l_Lean_ConstantInfo_hasValue(v_val_4921_, v___x_4918_);
if (v___x_4925_ == 0)
{
lean_object* v___x_4927_; 
lean_dec(v_val_4921_);
if (v_isShared_4924_ == 0)
{
lean_ctor_set_tag(v___x_4923_, 0);
lean_ctor_set(v___x_4923_, 0, v_e_4912_);
v___x_4927_ = v___x_4923_;
goto v_reusejp_4926_;
}
else
{
lean_object* v_reuseFailAlloc_4929_; 
v_reuseFailAlloc_4929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4929_, 0, v_e_4912_);
v___x_4927_ = v_reuseFailAlloc_4929_;
goto v_reusejp_4926_;
}
v_reusejp_4926_:
{
lean_object* v___x_4928_; 
v___x_4928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4928_, 0, v___x_4927_);
return v___x_4928_;
}
}
else
{
lean_object* v___x_4930_; 
lean_inc(v_us_4917_);
lean_dec_ref_known(v_e_4912_, 2);
v___x_4930_ = l_Lean_Core_instantiateValueLevelParams(v_val_4921_, v_us_4917_, v___x_4918_, v___y_4913_, v___y_4914_);
lean_dec(v_val_4921_);
if (lean_obj_tag(v___x_4930_) == 0)
{
lean_object* v_a_4931_; lean_object* v___x_4933_; uint8_t v_isShared_4934_; uint8_t v_isSharedCheck_4941_; 
v_a_4931_ = lean_ctor_get(v___x_4930_, 0);
v_isSharedCheck_4941_ = !lean_is_exclusive(v___x_4930_);
if (v_isSharedCheck_4941_ == 0)
{
v___x_4933_ = v___x_4930_;
v_isShared_4934_ = v_isSharedCheck_4941_;
goto v_resetjp_4932_;
}
else
{
lean_inc(v_a_4931_);
lean_dec(v___x_4930_);
v___x_4933_ = lean_box(0);
v_isShared_4934_ = v_isSharedCheck_4941_;
goto v_resetjp_4932_;
}
v_resetjp_4932_:
{
lean_object* v___x_4936_; 
if (v_isShared_4924_ == 0)
{
lean_ctor_set(v___x_4923_, 0, v_a_4931_);
v___x_4936_ = v___x_4923_;
goto v_reusejp_4935_;
}
else
{
lean_object* v_reuseFailAlloc_4940_; 
v_reuseFailAlloc_4940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4940_, 0, v_a_4931_);
v___x_4936_ = v_reuseFailAlloc_4940_;
goto v_reusejp_4935_;
}
v_reusejp_4935_:
{
lean_object* v___x_4938_; 
if (v_isShared_4934_ == 0)
{
lean_ctor_set(v___x_4933_, 0, v___x_4936_);
v___x_4938_ = v___x_4933_;
goto v_reusejp_4937_;
}
else
{
lean_object* v_reuseFailAlloc_4939_; 
v_reuseFailAlloc_4939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4939_, 0, v___x_4936_);
v___x_4938_ = v_reuseFailAlloc_4939_;
goto v_reusejp_4937_;
}
v_reusejp_4937_:
{
return v___x_4938_;
}
}
}
}
else
{
lean_object* v_a_4942_; lean_object* v___x_4944_; uint8_t v_isShared_4945_; uint8_t v_isSharedCheck_4949_; 
lean_del_object(v___x_4923_);
v_a_4942_ = lean_ctor_get(v___x_4930_, 0);
v_isSharedCheck_4949_ = !lean_is_exclusive(v___x_4930_);
if (v_isSharedCheck_4949_ == 0)
{
v___x_4944_ = v___x_4930_;
v_isShared_4945_ = v_isSharedCheck_4949_;
goto v_resetjp_4943_;
}
else
{
lean_inc(v_a_4942_);
lean_dec(v___x_4930_);
v___x_4944_ = lean_box(0);
v_isShared_4945_ = v_isSharedCheck_4949_;
goto v_resetjp_4943_;
}
v_resetjp_4943_:
{
lean_object* v___x_4947_; 
if (v_isShared_4945_ == 0)
{
v___x_4947_ = v___x_4944_;
goto v_reusejp_4946_;
}
else
{
lean_object* v_reuseFailAlloc_4948_; 
v_reuseFailAlloc_4948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4948_, 0, v_a_4942_);
v___x_4947_ = v_reuseFailAlloc_4948_;
goto v_reusejp_4946_;
}
v_reusejp_4946_:
{
return v___x_4947_;
}
}
}
}
}
}
else
{
lean_object* v___x_4951_; lean_object* v___x_4952_; 
lean_dec(v___x_4920_);
v___x_4951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4951_, 0, v_e_4912_);
v___x_4952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4952_, 0, v___x_4951_);
return v___x_4952_;
}
}
else
{
lean_object* v___x_4953_; lean_object* v___x_4954_; 
lean_dec_ref(v___x_4910_);
v___x_4953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4953_, 0, v_e_4912_);
v___x_4954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4954_, 0, v___x_4953_);
return v___x_4954_;
}
}
else
{
lean_object* v___x_4955_; lean_object* v___x_4956_; 
lean_dec_ref(v_e_4912_);
lean_dec_ref(v___x_4910_);
lean_dec_ref(v_env_4909_);
v___x_4955_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_4956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4956_, 0, v___x_4955_);
return v___x_4956_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed(lean_object* v_env_4957_, lean_object* v___x_4958_, lean_object* v___x_4959_, lean_object* v_e_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_){
_start:
{
uint8_t v___x_1993__boxed_4964_; lean_object* v_res_4965_; 
v___x_1993__boxed_4964_ = lean_unbox(v___x_4959_);
v_res_4965_ = l_Lean_Meta_unfoldDeclsFrom___lam__1(v_env_4957_, v___x_4958_, v___x_1993__boxed_4964_, v_e_4960_, v___y_4961_, v___y_4962_);
lean_dec(v___y_4962_);
lean_dec_ref(v___y_4961_);
return v_res_4965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0(lean_object* v_biggerEnv_4966_, lean_object* v_e_4967_, lean_object* v___f_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_){
_start:
{
lean_object* v___x_4972_; lean_object* v_env_4973_; uint8_t v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___f_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; 
v___x_4972_ = lean_st_ref_get(v___y_4970_);
v_env_4973_ = lean_ctor_get(v___x_4972_, 0);
lean_inc_ref(v_env_4973_);
lean_dec(v___x_4972_);
v___x_4974_ = 0;
v___x_4975_ = l_Lean_Environment_setExporting(v_biggerEnv_4966_, v___x_4974_);
v___x_4976_ = lean_box(v___x_4974_);
lean_inc_ref(v___x_4975_);
v___f_4977_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed), 7, 3);
lean_closure_set(v___f_4977_, 0, v_env_4973_);
lean_closure_set(v___f_4977_, 1, v___x_4975_);
lean_closure_set(v___f_4977_, 2, v___x_4976_);
v___x_4978_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v___x_4975_, v___y_4970_);
lean_dec_ref(v___x_4978_);
v___x_4979_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_4967_, v___f_4977_, v___f_4968_, v___y_4969_, v___y_4970_);
return v___x_4979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed(lean_object* v_biggerEnv_4980_, lean_object* v_e_4981_, lean_object* v___f_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_){
_start:
{
lean_object* v_res_4986_; 
v_res_4986_ = l_Lean_Meta_unfoldDeclsFrom___lam__0(v_biggerEnv_4980_, v_e_4981_, v___f_4982_, v___y_4983_, v___y_4984_);
lean_dec(v___y_4984_);
lean_dec_ref(v___y_4983_);
return v_res_4986_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(lean_object* v_env_4987_, lean_object* v_x_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_){
_start:
{
lean_object* v___x_4992_; lean_object* v_env_4993_; lean_object* v_a_4995_; lean_object* v___x_5005_; lean_object* v___x_5006_; 
v___x_4992_ = lean_st_ref_get(v___y_4990_);
v_env_4993_ = lean_ctor_get(v___x_4992_, 0);
lean_inc_ref(v_env_4993_);
lean_dec(v___x_4992_);
v___x_5005_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4987_, v___y_4990_);
lean_dec_ref(v___x_5005_);
lean_inc(v___y_4990_);
lean_inc_ref(v___y_4989_);
v___x_5006_ = lean_apply_3(v_x_4988_, v___y_4989_, v___y_4990_, lean_box(0));
if (lean_obj_tag(v___x_5006_) == 0)
{
lean_object* v_a_5007_; lean_object* v___x_5008_; lean_object* v___x_5010_; uint8_t v_isShared_5011_; uint8_t v_isSharedCheck_5015_; 
v_a_5007_ = lean_ctor_get(v___x_5006_, 0);
lean_inc(v_a_5007_);
lean_dec_ref_known(v___x_5006_, 1);
v___x_5008_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4993_, v___y_4990_);
v_isSharedCheck_5015_ = !lean_is_exclusive(v___x_5008_);
if (v_isSharedCheck_5015_ == 0)
{
lean_object* v_unused_5016_; 
v_unused_5016_ = lean_ctor_get(v___x_5008_, 0);
lean_dec(v_unused_5016_);
v___x_5010_ = v___x_5008_;
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
else
{
lean_dec(v___x_5008_);
v___x_5010_ = lean_box(0);
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
v_resetjp_5009_:
{
lean_object* v___x_5013_; 
if (v_isShared_5011_ == 0)
{
lean_ctor_set(v___x_5010_, 0, v_a_5007_);
v___x_5013_ = v___x_5010_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5014_; 
v_reuseFailAlloc_5014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5014_, 0, v_a_5007_);
v___x_5013_ = v_reuseFailAlloc_5014_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
return v___x_5013_;
}
}
}
else
{
lean_object* v_a_5017_; 
v_a_5017_ = lean_ctor_get(v___x_5006_, 0);
lean_inc(v_a_5017_);
lean_dec_ref_known(v___x_5006_, 1);
v_a_4995_ = v_a_5017_;
goto v___jp_4994_;
}
v___jp_4994_:
{
lean_object* v___x_4996_; lean_object* v___x_4998_; uint8_t v_isShared_4999_; uint8_t v_isSharedCheck_5003_; 
v___x_4996_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4993_, v___y_4990_);
v_isSharedCheck_5003_ = !lean_is_exclusive(v___x_4996_);
if (v_isSharedCheck_5003_ == 0)
{
lean_object* v_unused_5004_; 
v_unused_5004_ = lean_ctor_get(v___x_4996_, 0);
lean_dec(v_unused_5004_);
v___x_4998_ = v___x_4996_;
v_isShared_4999_ = v_isSharedCheck_5003_;
goto v_resetjp_4997_;
}
else
{
lean_dec(v___x_4996_);
v___x_4998_ = lean_box(0);
v_isShared_4999_ = v_isSharedCheck_5003_;
goto v_resetjp_4997_;
}
v_resetjp_4997_:
{
lean_object* v___x_5001_; 
if (v_isShared_4999_ == 0)
{
lean_ctor_set_tag(v___x_4998_, 1);
lean_ctor_set(v___x_4998_, 0, v_a_4995_);
v___x_5001_ = v___x_4998_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5002_; 
v_reuseFailAlloc_5002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5002_, 0, v_a_4995_);
v___x_5001_ = v_reuseFailAlloc_5002_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
return v___x_5001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg___boxed(lean_object* v_env_5018_, lean_object* v_x_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_){
_start:
{
lean_object* v_res_5023_; 
v_res_5023_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v_env_5018_, v_x_5019_, v___y_5020_, v___y_5021_);
lean_dec(v___y_5021_);
lean_dec_ref(v___y_5020_);
return v_res_5023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object* v_biggerEnv_5024_, lean_object* v_e_5025_, lean_object* v_a_5026_, lean_object* v_a_5027_){
_start:
{
lean_object* v___f_5029_; lean_object* v___f_5030_; lean_object* v___x_5031_; lean_object* v_env_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; 
v___f_5029_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___f_5030_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed), 6, 3);
lean_closure_set(v___f_5030_, 0, v_biggerEnv_5024_);
lean_closure_set(v___f_5030_, 1, v_e_5025_);
lean_closure_set(v___f_5030_, 2, v___f_5029_);
v___x_5031_ = lean_st_ref_get(v_a_5027_);
v_env_5032_ = lean_ctor_get(v___x_5031_, 0);
lean_inc_ref(v_env_5032_);
lean_dec(v___x_5031_);
v___x_5033_ = l_Lean_Environment_unlockAsync(v_env_5032_);
v___x_5034_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v___x_5033_, v___f_5030_, v_a_5026_, v_a_5027_);
return v___x_5034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___boxed(lean_object* v_biggerEnv_5035_, lean_object* v_e_5036_, lean_object* v_a_5037_, lean_object* v_a_5038_, lean_object* v_a_5039_){
_start:
{
lean_object* v_res_5040_; 
v_res_5040_ = l_Lean_Meta_unfoldDeclsFrom(v_biggerEnv_5035_, v_e_5036_, v_a_5037_, v_a_5038_);
lean_dec(v_a_5038_);
lean_dec_ref(v_a_5037_);
return v_res_5040_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(lean_object* v_00_u03b1_5041_, lean_object* v_env_5042_, lean_object* v_x_5043_, lean_object* v___y_5044_, lean_object* v___y_5045_){
_start:
{
lean_object* v___x_5047_; 
v___x_5047_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v_env_5042_, v_x_5043_, v___y_5044_, v___y_5045_);
return v___x_5047_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___boxed(lean_object* v_00_u03b1_5048_, lean_object* v_env_5049_, lean_object* v_x_5050_, lean_object* v___y_5051_, lean_object* v___y_5052_, lean_object* v___y_5053_){
_start:
{
lean_object* v_res_5054_; 
v_res_5054_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(v_00_u03b1_5048_, v_env_5049_, v_x_5050_, v___y_5051_, v___y_5052_);
lean_dec(v___y_5052_);
lean_dec_ref(v___y_5051_);
return v_res_5054_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(lean_object* v_af_5055_, lean_object* v_axs_5056_, lean_object* v_numSectionVars_5057_, lean_object* v_as_5058_, size_t v_i_5059_, size_t v_stop_5060_){
_start:
{
uint8_t v___x_5061_; 
v___x_5061_ = lean_usize_dec_eq(v_i_5059_, v_stop_5060_);
if (v___x_5061_ == 0)
{
uint8_t v___x_5062_; uint8_t v___y_5064_; lean_object* v___x_5068_; lean_object* v___x_5069_; uint8_t v___x_5070_; 
v___x_5062_ = 1;
v___x_5068_ = lean_array_uget_borrowed(v_as_5058_, v_i_5059_);
v___x_5069_ = l_Lean_Expr_constName_x21(v_af_5055_);
v___x_5070_ = lean_name_eq(v___x_5069_, v___x_5068_);
lean_dec(v___x_5069_);
if (v___x_5070_ == 0)
{
v___y_5064_ = v___x_5070_;
goto v___jp_5063_;
}
else
{
lean_object* v___x_5071_; uint8_t v___x_5072_; 
v___x_5071_ = lean_array_get_size(v_axs_5056_);
v___x_5072_ = lean_nat_dec_le(v___x_5071_, v_numSectionVars_5057_);
v___y_5064_ = v___x_5072_;
goto v___jp_5063_;
}
v___jp_5063_:
{
if (v___y_5064_ == 0)
{
size_t v___x_5065_; size_t v___x_5066_; 
v___x_5065_ = ((size_t)1ULL);
v___x_5066_ = lean_usize_add(v_i_5059_, v___x_5065_);
v_i_5059_ = v___x_5066_;
goto _start;
}
else
{
return v___x_5062_;
}
}
}
else
{
uint8_t v___x_5073_; 
v___x_5073_ = 0;
return v___x_5073_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0___boxed(lean_object* v_af_5074_, lean_object* v_axs_5075_, lean_object* v_numSectionVars_5076_, lean_object* v_as_5077_, lean_object* v_i_5078_, lean_object* v_stop_5079_){
_start:
{
size_t v_i_boxed_5080_; size_t v_stop_boxed_5081_; uint8_t v_res_5082_; lean_object* v_r_5083_; 
v_i_boxed_5080_ = lean_unbox_usize(v_i_5078_);
lean_dec(v_i_5078_);
v_stop_boxed_5081_ = lean_unbox_usize(v_stop_5079_);
lean_dec(v_stop_5079_);
v_res_5082_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_af_5074_, v_axs_5075_, v_numSectionVars_5076_, v_as_5077_, v_i_boxed_5080_, v_stop_boxed_5081_);
lean_dec_ref(v_as_5077_);
lean_dec(v_numSectionVars_5076_);
lean_dec_ref(v_axs_5075_);
lean_dec_ref(v_af_5074_);
v_r_5083_ = lean_box(v_res_5082_);
return v_r_5083_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(lean_object* v_fnNames_5084_, lean_object* v_numSectionVars_5085_, lean_object* v_x_5086_, lean_object* v_x_5087_, lean_object* v_x_5088_){
_start:
{
if (lean_obj_tag(v_x_5086_) == 5)
{
lean_object* v_fn_5089_; lean_object* v_arg_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; 
v_fn_5089_ = lean_ctor_get(v_x_5086_, 0);
lean_inc_ref(v_fn_5089_);
v_arg_5090_ = lean_ctor_get(v_x_5086_, 1);
lean_inc_ref(v_arg_5090_);
lean_dec_ref_known(v_x_5086_, 2);
v___x_5091_ = lean_array_set(v_x_5087_, v_x_5088_, v_arg_5090_);
v___x_5092_ = lean_unsigned_to_nat(1u);
v___x_5093_ = lean_nat_sub(v_x_5088_, v___x_5092_);
lean_dec(v_x_5088_);
v_x_5086_ = v_fn_5089_;
v_x_5087_ = v___x_5091_;
v_x_5088_ = v___x_5093_;
goto _start;
}
else
{
uint8_t v___x_5095_; 
lean_dec(v_x_5088_);
v___x_5095_ = l_Lean_Expr_isConst(v_x_5086_);
if (v___x_5095_ == 0)
{
lean_dec_ref(v_x_5087_);
lean_dec_ref(v_x_5086_);
return v___x_5095_;
}
else
{
lean_object* v___x_5096_; lean_object* v___x_5097_; uint8_t v___x_5098_; 
v___x_5096_ = lean_unsigned_to_nat(0u);
v___x_5097_ = lean_array_get_size(v_fnNames_5084_);
v___x_5098_ = lean_nat_dec_lt(v___x_5096_, v___x_5097_);
if (v___x_5098_ == 0)
{
lean_dec_ref(v_x_5087_);
lean_dec_ref(v_x_5086_);
return v___x_5098_;
}
else
{
if (v___x_5098_ == 0)
{
lean_dec_ref(v_x_5087_);
lean_dec_ref(v_x_5086_);
return v___x_5098_;
}
else
{
size_t v___x_5099_; size_t v___x_5100_; uint8_t v___x_5101_; 
v___x_5099_ = ((size_t)0ULL);
v___x_5100_ = lean_usize_of_nat(v___x_5097_);
v___x_5101_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_x_5086_, v_x_5087_, v_numSectionVars_5085_, v_fnNames_5084_, v___x_5099_, v___x_5100_);
lean_dec_ref(v_x_5087_);
lean_dec_ref(v_x_5086_);
return v___x_5101_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1___boxed(lean_object* v_fnNames_5102_, lean_object* v_numSectionVars_5103_, lean_object* v_x_5104_, lean_object* v_x_5105_, lean_object* v_x_5106_){
_start:
{
uint8_t v_res_5107_; lean_object* v_r_5108_; 
v_res_5107_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(v_fnNames_5102_, v_numSectionVars_5103_, v_x_5104_, v_x_5105_, v_x_5106_);
lean_dec(v_numSectionVars_5103_);
lean_dec_ref(v_fnNames_5102_);
v_r_5108_ = lean_box(v_res_5107_);
return v_r_5108_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(lean_object* v_numSectionVars_5109_, lean_object* v_fnNames_5110_, lean_object* v_x_5111_, lean_object* v_x_5112_, lean_object* v_x_5113_){
_start:
{
if (lean_obj_tag(v_x_5111_) == 5)
{
lean_object* v_fn_5114_; lean_object* v_arg_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; uint8_t v___x_5119_; 
v_fn_5114_ = lean_ctor_get(v_x_5111_, 0);
lean_inc_ref(v_fn_5114_);
v_arg_5115_ = lean_ctor_get(v_x_5111_, 1);
lean_inc_ref(v_arg_5115_);
lean_dec_ref_known(v_x_5111_, 2);
v___x_5116_ = lean_array_set(v_x_5112_, v_x_5113_, v_arg_5115_);
v___x_5117_ = lean_unsigned_to_nat(1u);
v___x_5118_ = lean_nat_sub(v_x_5113_, v___x_5117_);
v___x_5119_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(v_fnNames_5110_, v_numSectionVars_5109_, v_fn_5114_, v___x_5116_, v___x_5118_);
return v___x_5119_;
}
else
{
uint8_t v___x_5120_; 
v___x_5120_ = l_Lean_Expr_isConst(v_x_5111_);
if (v___x_5120_ == 0)
{
lean_dec_ref(v_x_5112_);
lean_dec_ref(v_x_5111_);
return v___x_5120_;
}
else
{
lean_object* v___x_5121_; lean_object* v___x_5122_; uint8_t v___x_5123_; 
v___x_5121_ = lean_unsigned_to_nat(0u);
v___x_5122_ = lean_array_get_size(v_fnNames_5110_);
v___x_5123_ = lean_nat_dec_lt(v___x_5121_, v___x_5122_);
if (v___x_5123_ == 0)
{
lean_dec_ref(v_x_5112_);
lean_dec_ref(v_x_5111_);
return v___x_5123_;
}
else
{
if (v___x_5123_ == 0)
{
lean_dec_ref(v_x_5112_);
lean_dec_ref(v_x_5111_);
return v___x_5123_;
}
else
{
size_t v___x_5124_; size_t v___x_5125_; uint8_t v___x_5126_; 
v___x_5124_ = ((size_t)0ULL);
v___x_5125_ = lean_usize_of_nat(v___x_5122_);
v___x_5126_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_x_5111_, v_x_5112_, v_numSectionVars_5109_, v_fnNames_5110_, v___x_5124_, v___x_5125_);
lean_dec_ref(v_x_5112_);
lean_dec_ref(v_x_5111_);
return v___x_5126_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1___boxed(lean_object* v_numSectionVars_5127_, lean_object* v_fnNames_5128_, lean_object* v_x_5129_, lean_object* v_x_5130_, lean_object* v_x_5131_){
_start:
{
uint8_t v_res_5132_; lean_object* v_r_5133_; 
v_res_5132_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(v_numSectionVars_5127_, v_fnNames_5128_, v_x_5129_, v_x_5130_, v_x_5131_);
lean_dec(v_x_5131_);
lean_dec_ref(v_fnNames_5128_);
lean_dec(v_numSectionVars_5127_);
v_r_5133_ = lean_box(v_res_5132_);
return v_r_5133_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(lean_object* v_fnNames_5134_, lean_object* v_numSectionVars_5135_, lean_object* v_a_5136_){
_start:
{
lean_object* v_dummy_5137_; lean_object* v_nargs_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; uint8_t v___x_5142_; 
v_dummy_5137_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__1);
v_nargs_5138_ = l_Lean_Expr_getAppNumArgs(v_a_5136_);
lean_inc(v_nargs_5138_);
v___x_5139_ = lean_mk_array(v_nargs_5138_, v_dummy_5137_);
v___x_5140_ = lean_unsigned_to_nat(1u);
v___x_5141_ = lean_nat_sub(v_nargs_5138_, v___x_5140_);
lean_dec(v_nargs_5138_);
v___x_5142_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(v_numSectionVars_5135_, v_fnNames_5134_, v_a_5136_, v___x_5139_, v___x_5141_);
lean_dec(v___x_5141_);
return v___x_5142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg___boxed(lean_object* v_fnNames_5143_, lean_object* v_numSectionVars_5144_, lean_object* v_a_5145_){
_start:
{
uint8_t v_res_5146_; lean_object* v_r_5147_; 
v_res_5146_ = l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(v_fnNames_5143_, v_numSectionVars_5144_, v_a_5145_);
lean_dec(v_numSectionVars_5144_);
lean_dec_ref(v_fnNames_5143_);
v_r_5147_ = lean_box(v_res_5146_);
return v_r_5147_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(lean_object* v_fnNames_5148_, lean_object* v_numSectionVars_5149_, lean_object* v_as_5150_, size_t v_i_5151_, size_t v_stop_5152_){
_start:
{
uint8_t v___x_5153_; 
v___x_5153_ = lean_usize_dec_eq(v_i_5151_, v_stop_5152_);
if (v___x_5153_ == 0)
{
lean_object* v___x_5154_; uint8_t v___x_5155_; 
v___x_5154_ = lean_array_uget_borrowed(v_as_5150_, v_i_5151_);
lean_inc(v___x_5154_);
v___x_5155_ = l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(v_fnNames_5148_, v_numSectionVars_5149_, v___x_5154_);
if (v___x_5155_ == 0)
{
size_t v___x_5156_; size_t v___x_5157_; 
v___x_5156_ = ((size_t)1ULL);
v___x_5157_ = lean_usize_add(v_i_5151_, v___x_5156_);
v_i_5151_ = v___x_5157_;
goto _start;
}
else
{
return v___x_5155_;
}
}
else
{
uint8_t v___x_5159_; 
v___x_5159_ = 0;
return v___x_5159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0___boxed(lean_object* v_fnNames_5160_, lean_object* v_numSectionVars_5161_, lean_object* v_as_5162_, lean_object* v_i_5163_, lean_object* v_stop_5164_){
_start:
{
size_t v_i_boxed_5165_; size_t v_stop_boxed_5166_; uint8_t v_res_5167_; lean_object* v_r_5168_; 
v_i_boxed_5165_ = lean_unbox_usize(v_i_5163_);
lean_dec(v_i_5163_);
v_stop_boxed_5166_ = lean_unbox_usize(v_stop_5164_);
lean_dec(v_stop_5164_);
v_res_5167_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(v_fnNames_5160_, v_numSectionVars_5161_, v_as_5162_, v_i_boxed_5165_, v_stop_boxed_5166_);
lean_dec_ref(v_as_5162_);
lean_dec(v_numSectionVars_5161_);
lean_dec_ref(v_fnNames_5160_);
v_r_5168_ = lean_box(v_res_5167_);
return v_r_5168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(lean_object* v_fnNames_5169_, lean_object* v_numSectionVars_5170_, lean_object* v___x_5171_, lean_object* v_x_5172_, lean_object* v_x_5173_, lean_object* v___y_5174_, lean_object* v___y_5175_){
_start:
{
if (lean_obj_tag(v_x_5172_) == 5)
{
lean_object* v_fn_5180_; lean_object* v_arg_5181_; lean_object* v___x_5182_; 
v_fn_5180_ = lean_ctor_get(v_x_5172_, 0);
lean_inc_ref(v_fn_5180_);
v_arg_5181_ = lean_ctor_get(v_x_5172_, 1);
lean_inc_ref(v_arg_5181_);
lean_dec_ref_known(v_x_5172_, 2);
v___x_5182_ = lean_array_push(v_x_5173_, v_arg_5181_);
v_x_5172_ = v_fn_5180_;
v_x_5173_ = v___x_5182_;
goto _start;
}
else
{
uint8_t v___x_5184_; 
v___x_5184_ = l_Lean_Expr_isConst(v_x_5172_);
if (v___x_5184_ == 0)
{
lean_dec_ref(v_x_5173_);
lean_dec_ref(v_x_5172_);
lean_dec_ref(v___x_5171_);
goto v___jp_5177_;
}
else
{
lean_object* v___x_5185_; lean_object* v___x_5186_; uint8_t v___x_5187_; 
v___x_5185_ = lean_unsigned_to_nat(0u);
v___x_5186_ = lean_array_get_size(v_x_5173_);
v___x_5187_ = lean_nat_dec_lt(v___x_5185_, v___x_5186_);
if (v___x_5187_ == 0)
{
lean_dec_ref(v_x_5173_);
lean_dec_ref(v_x_5172_);
lean_dec_ref(v___x_5171_);
goto v___jp_5177_;
}
else
{
if (v___x_5187_ == 0)
{
lean_dec_ref(v_x_5173_);
lean_dec_ref(v_x_5172_);
lean_dec_ref(v___x_5171_);
goto v___jp_5177_;
}
else
{
size_t v___x_5188_; size_t v___x_5189_; uint8_t v___x_5190_; 
v___x_5188_ = ((size_t)0ULL);
v___x_5189_ = lean_usize_of_nat(v___x_5186_);
v___x_5190_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(v_fnNames_5169_, v_numSectionVars_5170_, v_x_5173_, v___x_5188_, v___x_5189_);
if (v___x_5190_ == 0)
{
lean_dec_ref(v_x_5173_);
lean_dec_ref(v_x_5172_);
lean_dec_ref(v___x_5171_);
goto v___jp_5177_;
}
else
{
lean_object* v___x_5191_; uint8_t v___x_5192_; lean_object* v___x_5193_; 
v___x_5191_ = l_Lean_Expr_constName_x21(v_x_5172_);
v___x_5192_ = 0;
v___x_5193_ = l_Lean_Environment_find_x3f(v___x_5171_, v___x_5191_, v___x_5192_);
if (lean_obj_tag(v___x_5193_) == 1)
{
lean_object* v_val_5194_; 
v_val_5194_ = lean_ctor_get(v___x_5193_, 0);
lean_inc(v_val_5194_);
lean_dec_ref_known(v___x_5193_, 1);
if (lean_obj_tag(v_val_5194_) == 2)
{
lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___x_5198_; uint8_t v_isShared_5199_; uint8_t v_isSharedCheck_5220_; 
v___x_5195_ = l_Lean_Expr_constLevels_x21(v_x_5172_);
lean_dec_ref(v_x_5172_);
v___x_5196_ = l_Lean_Core_instantiateValueLevelParams(v_val_5194_, v___x_5195_, v___x_5187_, v___y_5174_, v___y_5175_);
v_isSharedCheck_5220_ = !lean_is_exclusive(v_val_5194_);
if (v_isSharedCheck_5220_ == 0)
{
lean_object* v_unused_5221_; 
v_unused_5221_ = lean_ctor_get(v_val_5194_, 0);
lean_dec(v_unused_5221_);
v___x_5198_ = v_val_5194_;
v_isShared_5199_ = v_isSharedCheck_5220_;
goto v_resetjp_5197_;
}
else
{
lean_dec(v_val_5194_);
v___x_5198_ = lean_box(0);
v_isShared_5199_ = v_isSharedCheck_5220_;
goto v_resetjp_5197_;
}
v_resetjp_5197_:
{
if (lean_obj_tag(v___x_5196_) == 0)
{
lean_object* v_a_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5211_; 
v_a_5200_ = lean_ctor_get(v___x_5196_, 0);
v_isSharedCheck_5211_ = !lean_is_exclusive(v___x_5196_);
if (v_isSharedCheck_5211_ == 0)
{
v___x_5202_ = v___x_5196_;
v_isShared_5203_ = v_isSharedCheck_5211_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_a_5200_);
lean_dec(v___x_5196_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5211_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
lean_object* v___x_5204_; lean_object* v___x_5206_; 
v___x_5204_ = l_Lean_Expr_betaRev(v_a_5200_, v_x_5173_, v___x_5192_, v___x_5192_);
lean_dec_ref(v_x_5173_);
if (v_isShared_5199_ == 0)
{
lean_ctor_set_tag(v___x_5198_, 1);
lean_ctor_set(v___x_5198_, 0, v___x_5204_);
v___x_5206_ = v___x_5198_;
goto v_reusejp_5205_;
}
else
{
lean_object* v_reuseFailAlloc_5210_; 
v_reuseFailAlloc_5210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5210_, 0, v___x_5204_);
v___x_5206_ = v_reuseFailAlloc_5210_;
goto v_reusejp_5205_;
}
v_reusejp_5205_:
{
lean_object* v___x_5208_; 
if (v_isShared_5203_ == 0)
{
lean_ctor_set(v___x_5202_, 0, v___x_5206_);
v___x_5208_ = v___x_5202_;
goto v_reusejp_5207_;
}
else
{
lean_object* v_reuseFailAlloc_5209_; 
v_reuseFailAlloc_5209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5209_, 0, v___x_5206_);
v___x_5208_ = v_reuseFailAlloc_5209_;
goto v_reusejp_5207_;
}
v_reusejp_5207_:
{
return v___x_5208_;
}
}
}
}
else
{
lean_object* v_a_5212_; lean_object* v___x_5214_; uint8_t v_isShared_5215_; uint8_t v_isSharedCheck_5219_; 
lean_del_object(v___x_5198_);
lean_dec_ref(v_x_5173_);
v_a_5212_ = lean_ctor_get(v___x_5196_, 0);
v_isSharedCheck_5219_ = !lean_is_exclusive(v___x_5196_);
if (v_isSharedCheck_5219_ == 0)
{
v___x_5214_ = v___x_5196_;
v_isShared_5215_ = v_isSharedCheck_5219_;
goto v_resetjp_5213_;
}
else
{
lean_inc(v_a_5212_);
lean_dec(v___x_5196_);
v___x_5214_ = lean_box(0);
v_isShared_5215_ = v_isSharedCheck_5219_;
goto v_resetjp_5213_;
}
v_resetjp_5213_:
{
lean_object* v___x_5217_; 
if (v_isShared_5215_ == 0)
{
v___x_5217_ = v___x_5214_;
goto v_reusejp_5216_;
}
else
{
lean_object* v_reuseFailAlloc_5218_; 
v_reuseFailAlloc_5218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5218_, 0, v_a_5212_);
v___x_5217_ = v_reuseFailAlloc_5218_;
goto v_reusejp_5216_;
}
v_reusejp_5216_:
{
return v___x_5217_;
}
}
}
}
}
else
{
lean_dec(v_val_5194_);
lean_dec_ref(v_x_5173_);
lean_dec_ref(v_x_5172_);
goto v___jp_5177_;
}
}
else
{
lean_dec(v___x_5193_);
lean_dec_ref(v_x_5173_);
lean_dec_ref(v_x_5172_);
goto v___jp_5177_;
}
}
}
}
}
}
v___jp_5177_:
{
lean_object* v___x_5178_; lean_object* v___x_5179_; 
v___x_5178_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_5179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5179_, 0, v___x_5178_);
return v___x_5179_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1___boxed(lean_object* v_fnNames_5222_, lean_object* v_numSectionVars_5223_, lean_object* v___x_5224_, lean_object* v_x_5225_, lean_object* v_x_5226_, lean_object* v___y_5227_, lean_object* v___y_5228_, lean_object* v___y_5229_){
_start:
{
lean_object* v_res_5230_; 
v_res_5230_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(v_fnNames_5222_, v_numSectionVars_5223_, v___x_5224_, v_x_5225_, v_x_5226_, v___y_5227_, v___y_5228_);
lean_dec(v___y_5228_);
lean_dec_ref(v___y_5227_);
lean_dec(v_numSectionVars_5223_);
lean_dec_ref(v_fnNames_5222_);
return v_res_5230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(lean_object* v_fnNames_5231_, lean_object* v_numSectionVars_5232_, lean_object* v_env_5233_, lean_object* v_e_5234_, lean_object* v___y_5235_, lean_object* v___y_5236_){
_start:
{
lean_object* v___x_5238_; lean_object* v___x_5239_; lean_object* v___x_5240_; 
v___x_5238_ = l_Lean_Expr_getAppNumArgs(v_e_5234_);
v___x_5239_ = lean_mk_empty_array_with_capacity(v___x_5238_);
lean_dec(v___x_5238_);
v___x_5240_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(v_fnNames_5231_, v_numSectionVars_5232_, v_env_5233_, v_e_5234_, v___x_5239_, v___y_5235_, v___y_5236_);
return v___x_5240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed(lean_object* v_fnNames_5241_, lean_object* v_numSectionVars_5242_, lean_object* v_env_5243_, lean_object* v_e_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_){
_start:
{
lean_object* v_res_5248_; 
v_res_5248_ = l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(v_fnNames_5241_, v_numSectionVars_5242_, v_env_5243_, v_e_5244_, v___y_5245_, v___y_5246_);
lean_dec(v___y_5246_);
lean_dec_ref(v___y_5245_);
lean_dec(v_numSectionVars_5242_);
lean_dec_ref(v_fnNames_5241_);
return v_res_5248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(lean_object* v_fnNames_5249_, lean_object* v_numSectionVars_5250_, lean_object* v_e_5251_, lean_object* v___f_5252_, lean_object* v___y_5253_, lean_object* v___y_5254_){
_start:
{
lean_object* v___x_5256_; lean_object* v_env_5257_; lean_object* v___f_5258_; lean_object* v___x_5259_; 
v___x_5256_ = lean_st_ref_get(v___y_5254_);
v_env_5257_ = lean_ctor_get(v___x_5256_, 0);
lean_inc_ref(v_env_5257_);
lean_dec(v___x_5256_);
v___f_5258_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed), 7, 3);
lean_closure_set(v___f_5258_, 0, v_fnNames_5249_);
lean_closure_set(v___f_5258_, 1, v_numSectionVars_5250_);
lean_closure_set(v___f_5258_, 2, v_env_5257_);
v___x_5259_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5251_, v___f_5258_, v___f_5252_, v___y_5253_, v___y_5254_);
return v___x_5259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed(lean_object* v_fnNames_5260_, lean_object* v_numSectionVars_5261_, lean_object* v_e_5262_, lean_object* v___f_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_){
_start:
{
lean_object* v_res_5267_; 
v_res_5267_ = l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(v_fnNames_5260_, v_numSectionVars_5261_, v_e_5262_, v___f_5263_, v___y_5264_, v___y_5265_);
lean_dec(v___y_5265_);
lean_dec_ref(v___y_5264_);
return v_res_5267_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(lean_object* v___y_5268_, uint8_t v_isExporting_5269_, lean_object* v___x_5270_, lean_object* v_a_x3f_5271_){
_start:
{
lean_object* v___x_5273_; lean_object* v_env_5274_; lean_object* v_nextMacroScope_5275_; lean_object* v_ngen_5276_; lean_object* v_auxDeclNGen_5277_; lean_object* v_traceState_5278_; lean_object* v_messages_5279_; lean_object* v_infoState_5280_; lean_object* v_snapshotTasks_5281_; lean_object* v___x_5283_; uint8_t v_isShared_5284_; uint8_t v_isSharedCheck_5292_; 
v___x_5273_ = lean_st_ref_take(v___y_5268_);
v_env_5274_ = lean_ctor_get(v___x_5273_, 0);
v_nextMacroScope_5275_ = lean_ctor_get(v___x_5273_, 1);
v_ngen_5276_ = lean_ctor_get(v___x_5273_, 2);
v_auxDeclNGen_5277_ = lean_ctor_get(v___x_5273_, 3);
v_traceState_5278_ = lean_ctor_get(v___x_5273_, 4);
v_messages_5279_ = lean_ctor_get(v___x_5273_, 6);
v_infoState_5280_ = lean_ctor_get(v___x_5273_, 7);
v_snapshotTasks_5281_ = lean_ctor_get(v___x_5273_, 8);
v_isSharedCheck_5292_ = !lean_is_exclusive(v___x_5273_);
if (v_isSharedCheck_5292_ == 0)
{
lean_object* v_unused_5293_; 
v_unused_5293_ = lean_ctor_get(v___x_5273_, 5);
lean_dec(v_unused_5293_);
v___x_5283_ = v___x_5273_;
v_isShared_5284_ = v_isSharedCheck_5292_;
goto v_resetjp_5282_;
}
else
{
lean_inc(v_snapshotTasks_5281_);
lean_inc(v_infoState_5280_);
lean_inc(v_messages_5279_);
lean_inc(v_traceState_5278_);
lean_inc(v_auxDeclNGen_5277_);
lean_inc(v_ngen_5276_);
lean_inc(v_nextMacroScope_5275_);
lean_inc(v_env_5274_);
lean_dec(v___x_5273_);
v___x_5283_ = lean_box(0);
v_isShared_5284_ = v_isSharedCheck_5292_;
goto v_resetjp_5282_;
}
v_resetjp_5282_:
{
lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5288_; 
v___x_5285_ = lean_box(0);
v___x_5286_ = l_Lean_Environment_setExporting(v_env_5274_, v_isExporting_5269_);
if (v_isShared_5284_ == 0)
{
lean_ctor_set(v___x_5283_, 5, v___x_5270_);
lean_ctor_set(v___x_5283_, 0, v___x_5286_);
v___x_5288_ = v___x_5283_;
goto v_reusejp_5287_;
}
else
{
lean_object* v_reuseFailAlloc_5291_; 
v_reuseFailAlloc_5291_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5291_, 0, v___x_5286_);
lean_ctor_set(v_reuseFailAlloc_5291_, 1, v_nextMacroScope_5275_);
lean_ctor_set(v_reuseFailAlloc_5291_, 2, v_ngen_5276_);
lean_ctor_set(v_reuseFailAlloc_5291_, 3, v_auxDeclNGen_5277_);
lean_ctor_set(v_reuseFailAlloc_5291_, 4, v_traceState_5278_);
lean_ctor_set(v_reuseFailAlloc_5291_, 5, v___x_5270_);
lean_ctor_set(v_reuseFailAlloc_5291_, 6, v_messages_5279_);
lean_ctor_set(v_reuseFailAlloc_5291_, 7, v_infoState_5280_);
lean_ctor_set(v_reuseFailAlloc_5291_, 8, v_snapshotTasks_5281_);
v___x_5288_ = v_reuseFailAlloc_5291_;
goto v_reusejp_5287_;
}
v_reusejp_5287_:
{
lean_object* v___x_5289_; lean_object* v___x_5290_; 
v___x_5289_ = lean_st_ref_put(v___y_5268_, v___x_5288_);
v___x_5290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5290_, 0, v___x_5285_);
return v___x_5290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v___y_5294_, lean_object* v_isExporting_5295_, lean_object* v___x_5296_, lean_object* v_a_x3f_5297_, lean_object* v___y_5298_){
_start:
{
uint8_t v_isExporting_boxed_5299_; lean_object* v_res_5300_; 
v_isExporting_boxed_5299_ = lean_unbox(v_isExporting_5295_);
v_res_5300_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5294_, v_isExporting_boxed_5299_, v___x_5296_, v_a_x3f_5297_);
lean_dec(v_a_x3f_5297_);
lean_dec(v___y_5294_);
return v_res_5300_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(lean_object* v_x_5301_, uint8_t v_isExporting_5302_, lean_object* v___y_5303_, lean_object* v___y_5304_){
_start:
{
lean_object* v___x_5306_; lean_object* v_env_5307_; lean_object* v___x_5308_; uint8_t v_isModule_5309_; 
v___x_5306_ = lean_st_ref_get(v___y_5304_);
v_env_5307_ = lean_ctor_get(v___x_5306_, 0);
lean_inc_ref(v_env_5307_);
lean_dec(v___x_5306_);
v___x_5308_ = l_Lean_Environment_header(v_env_5307_);
v_isModule_5309_ = lean_ctor_get_uint8(v___x_5308_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5308_);
if (v_isModule_5309_ == 0)
{
lean_object* v___x_5310_; 
lean_dec_ref(v_env_5307_);
lean_inc(v___y_5304_);
lean_inc_ref(v___y_5303_);
v___x_5310_ = lean_apply_3(v_x_5301_, v___y_5303_, v___y_5304_, lean_box(0));
return v___x_5310_;
}
else
{
uint8_t v_isExporting_5311_; 
v_isExporting_5311_ = lean_ctor_get_uint8(v_env_5307_, sizeof(void*)*8);
lean_dec_ref(v_env_5307_);
if (v_isExporting_5302_ == 0)
{
if (v_isExporting_5311_ == 0)
{
lean_object* v___x_5362_; 
lean_inc(v___y_5304_);
lean_inc_ref(v___y_5303_);
v___x_5362_ = lean_apply_3(v_x_5301_, v___y_5303_, v___y_5304_, lean_box(0));
return v___x_5362_;
}
else
{
goto v___jp_5312_;
}
}
else
{
if (v_isExporting_5311_ == 0)
{
goto v___jp_5312_;
}
else
{
lean_object* v___x_5363_; 
lean_inc(v___y_5304_);
lean_inc_ref(v___y_5303_);
v___x_5363_ = lean_apply_3(v_x_5301_, v___y_5303_, v___y_5304_, lean_box(0));
return v___x_5363_;
}
}
v___jp_5312_:
{
lean_object* v___x_5313_; lean_object* v_env_5314_; lean_object* v_nextMacroScope_5315_; lean_object* v_ngen_5316_; lean_object* v_auxDeclNGen_5317_; lean_object* v_traceState_5318_; lean_object* v_messages_5319_; lean_object* v_infoState_5320_; lean_object* v_snapshotTasks_5321_; lean_object* v___x_5323_; uint8_t v_isShared_5324_; uint8_t v_isSharedCheck_5360_; 
v___x_5313_ = lean_st_ref_take(v___y_5304_);
v_env_5314_ = lean_ctor_get(v___x_5313_, 0);
v_nextMacroScope_5315_ = lean_ctor_get(v___x_5313_, 1);
v_ngen_5316_ = lean_ctor_get(v___x_5313_, 2);
v_auxDeclNGen_5317_ = lean_ctor_get(v___x_5313_, 3);
v_traceState_5318_ = lean_ctor_get(v___x_5313_, 4);
v_messages_5319_ = lean_ctor_get(v___x_5313_, 6);
v_infoState_5320_ = lean_ctor_get(v___x_5313_, 7);
v_snapshotTasks_5321_ = lean_ctor_get(v___x_5313_, 8);
v_isSharedCheck_5360_ = !lean_is_exclusive(v___x_5313_);
if (v_isSharedCheck_5360_ == 0)
{
lean_object* v_unused_5361_; 
v_unused_5361_ = lean_ctor_get(v___x_5313_, 5);
lean_dec(v_unused_5361_);
v___x_5323_ = v___x_5313_;
v_isShared_5324_ = v_isSharedCheck_5360_;
goto v_resetjp_5322_;
}
else
{
lean_inc(v_snapshotTasks_5321_);
lean_inc(v_infoState_5320_);
lean_inc(v_messages_5319_);
lean_inc(v_traceState_5318_);
lean_inc(v_auxDeclNGen_5317_);
lean_inc(v_ngen_5316_);
lean_inc(v_nextMacroScope_5315_);
lean_inc(v_env_5314_);
lean_dec(v___x_5313_);
v___x_5323_ = lean_box(0);
v_isShared_5324_ = v_isSharedCheck_5360_;
goto v_resetjp_5322_;
}
v_resetjp_5322_:
{
lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5328_; 
v___x_5325_ = l_Lean_Environment_setExporting(v_env_5314_, v_isExporting_5302_);
v___x_5326_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2);
if (v_isShared_5324_ == 0)
{
lean_ctor_set(v___x_5323_, 5, v___x_5326_);
lean_ctor_set(v___x_5323_, 0, v___x_5325_);
v___x_5328_ = v___x_5323_;
goto v_reusejp_5327_;
}
else
{
lean_object* v_reuseFailAlloc_5359_; 
v_reuseFailAlloc_5359_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5359_, 0, v___x_5325_);
lean_ctor_set(v_reuseFailAlloc_5359_, 1, v_nextMacroScope_5315_);
lean_ctor_set(v_reuseFailAlloc_5359_, 2, v_ngen_5316_);
lean_ctor_set(v_reuseFailAlloc_5359_, 3, v_auxDeclNGen_5317_);
lean_ctor_set(v_reuseFailAlloc_5359_, 4, v_traceState_5318_);
lean_ctor_set(v_reuseFailAlloc_5359_, 5, v___x_5326_);
lean_ctor_set(v_reuseFailAlloc_5359_, 6, v_messages_5319_);
lean_ctor_set(v_reuseFailAlloc_5359_, 7, v_infoState_5320_);
lean_ctor_set(v_reuseFailAlloc_5359_, 8, v_snapshotTasks_5321_);
v___x_5328_ = v_reuseFailAlloc_5359_;
goto v_reusejp_5327_;
}
v_reusejp_5327_:
{
lean_object* v___x_5329_; lean_object* v_r_5330_; 
v___x_5329_ = lean_st_ref_put(v___y_5304_, v___x_5328_);
lean_inc(v___y_5304_);
lean_inc_ref(v___y_5303_);
v_r_5330_ = lean_apply_3(v_x_5301_, v___y_5303_, v___y_5304_, lean_box(0));
if (lean_obj_tag(v_r_5330_) == 0)
{
lean_object* v_a_5331_; lean_object* v___x_5333_; uint8_t v_isShared_5334_; uint8_t v_isSharedCheck_5347_; 
v_a_5331_ = lean_ctor_get(v_r_5330_, 0);
v_isSharedCheck_5347_ = !lean_is_exclusive(v_r_5330_);
if (v_isSharedCheck_5347_ == 0)
{
v___x_5333_ = v_r_5330_;
v_isShared_5334_ = v_isSharedCheck_5347_;
goto v_resetjp_5332_;
}
else
{
lean_inc(v_a_5331_);
lean_dec(v_r_5330_);
v___x_5333_ = lean_box(0);
v_isShared_5334_ = v_isSharedCheck_5347_;
goto v_resetjp_5332_;
}
v_resetjp_5332_:
{
lean_object* v___x_5336_; 
lean_inc(v_a_5331_);
if (v_isShared_5334_ == 0)
{
lean_ctor_set_tag(v___x_5333_, 1);
v___x_5336_ = v___x_5333_;
goto v_reusejp_5335_;
}
else
{
lean_object* v_reuseFailAlloc_5346_; 
v_reuseFailAlloc_5346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5346_, 0, v_a_5331_);
v___x_5336_ = v_reuseFailAlloc_5346_;
goto v_reusejp_5335_;
}
v_reusejp_5335_:
{
lean_object* v___x_5337_; lean_object* v___x_5339_; uint8_t v_isShared_5340_; uint8_t v_isSharedCheck_5344_; 
v___x_5337_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5304_, v_isExporting_5311_, v___x_5326_, v___x_5336_);
lean_dec_ref(v___x_5336_);
v_isSharedCheck_5344_ = !lean_is_exclusive(v___x_5337_);
if (v_isSharedCheck_5344_ == 0)
{
lean_object* v_unused_5345_; 
v_unused_5345_ = lean_ctor_get(v___x_5337_, 0);
lean_dec(v_unused_5345_);
v___x_5339_ = v___x_5337_;
v_isShared_5340_ = v_isSharedCheck_5344_;
goto v_resetjp_5338_;
}
else
{
lean_dec(v___x_5337_);
v___x_5339_ = lean_box(0);
v_isShared_5340_ = v_isSharedCheck_5344_;
goto v_resetjp_5338_;
}
v_resetjp_5338_:
{
lean_object* v___x_5342_; 
if (v_isShared_5340_ == 0)
{
lean_ctor_set(v___x_5339_, 0, v_a_5331_);
v___x_5342_ = v___x_5339_;
goto v_reusejp_5341_;
}
else
{
lean_object* v_reuseFailAlloc_5343_; 
v_reuseFailAlloc_5343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5343_, 0, v_a_5331_);
v___x_5342_ = v_reuseFailAlloc_5343_;
goto v_reusejp_5341_;
}
v_reusejp_5341_:
{
return v___x_5342_;
}
}
}
}
}
else
{
lean_object* v_a_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5352_; uint8_t v_isShared_5353_; uint8_t v_isSharedCheck_5357_; 
v_a_5348_ = lean_ctor_get(v_r_5330_, 0);
lean_inc(v_a_5348_);
lean_dec_ref_known(v_r_5330_, 1);
v___x_5349_ = lean_box(0);
v___x_5350_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5304_, v_isExporting_5311_, v___x_5326_, v___x_5349_);
v_isSharedCheck_5357_ = !lean_is_exclusive(v___x_5350_);
if (v_isSharedCheck_5357_ == 0)
{
lean_object* v_unused_5358_; 
v_unused_5358_ = lean_ctor_get(v___x_5350_, 0);
lean_dec(v_unused_5358_);
v___x_5352_ = v___x_5350_;
v_isShared_5353_ = v_isSharedCheck_5357_;
goto v_resetjp_5351_;
}
else
{
lean_dec(v___x_5350_);
v___x_5352_ = lean_box(0);
v_isShared_5353_ = v_isSharedCheck_5357_;
goto v_resetjp_5351_;
}
v_resetjp_5351_:
{
lean_object* v___x_5355_; 
if (v_isShared_5353_ == 0)
{
lean_ctor_set_tag(v___x_5352_, 1);
lean_ctor_set(v___x_5352_, 0, v_a_5348_);
v___x_5355_ = v___x_5352_;
goto v_reusejp_5354_;
}
else
{
lean_object* v_reuseFailAlloc_5356_; 
v_reuseFailAlloc_5356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5356_, 0, v_a_5348_);
v___x_5355_ = v_reuseFailAlloc_5356_;
goto v_reusejp_5354_;
}
v_reusejp_5354_:
{
return v___x_5355_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___boxed(lean_object* v_x_5364_, lean_object* v_isExporting_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_){
_start:
{
uint8_t v_isExporting_boxed_5369_; lean_object* v_res_5370_; 
v_isExporting_boxed_5369_ = lean_unbox(v_isExporting_5365_);
v_res_5370_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5364_, v_isExporting_boxed_5369_, v___y_5366_, v___y_5367_);
lean_dec(v___y_5367_);
lean_dec_ref(v___y_5366_);
return v_res_5370_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(lean_object* v_x_5371_, uint8_t v_when_5372_, lean_object* v___y_5373_, lean_object* v___y_5374_){
_start:
{
if (v_when_5372_ == 0)
{
lean_object* v___x_5376_; 
lean_inc(v___y_5374_);
lean_inc_ref(v___y_5373_);
v___x_5376_ = lean_apply_3(v_x_5371_, v___y_5373_, v___y_5374_, lean_box(0));
return v___x_5376_;
}
else
{
uint8_t v___x_5377_; lean_object* v___x_5378_; 
v___x_5377_ = 0;
v___x_5378_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5371_, v___x_5377_, v___y_5373_, v___y_5374_);
return v___x_5378_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg___boxed(lean_object* v_x_5379_, lean_object* v_when_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_){
_start:
{
uint8_t v_when_boxed_5384_; lean_object* v_res_5385_; 
v_when_boxed_5384_ = lean_unbox(v_when_5380_);
v_res_5385_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v_x_5379_, v_when_boxed_5384_, v___y_5381_, v___y_5382_);
lean_dec(v___y_5382_);
lean_dec_ref(v___y_5381_);
return v_res_5385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object* v_fnNames_5386_, lean_object* v_numSectionVars_5387_, lean_object* v_e_5388_, lean_object* v_a_5389_, lean_object* v_a_5390_){
_start:
{
lean_object* v___f_5392_; lean_object* v___f_5393_; uint8_t v___x_5394_; lean_object* v___x_5395_; 
v___f_5392_ = ((lean_object*)(l_Lean_Core_betaReduce___closed__1));
v___f_5393_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed), 7, 4);
lean_closure_set(v___f_5393_, 0, v_fnNames_5386_);
lean_closure_set(v___f_5393_, 1, v_numSectionVars_5387_);
lean_closure_set(v___f_5393_, 2, v_e_5388_);
lean_closure_set(v___f_5393_, 3, v___f_5392_);
v___x_5394_ = 1;
v___x_5395_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v___f_5393_, v___x_5394_, v_a_5389_, v_a_5390_);
return v___x_5395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___boxed(lean_object* v_fnNames_5396_, lean_object* v_numSectionVars_5397_, lean_object* v_e_5398_, lean_object* v_a_5399_, lean_object* v_a_5400_, lean_object* v_a_5401_){
_start:
{
lean_object* v_res_5402_; 
v_res_5402_ = l_Lean_Meta_unfoldIfArgIsAppOf(v_fnNames_5396_, v_numSectionVars_5397_, v_e_5398_, v_a_5399_, v_a_5400_);
lean_dec(v_a_5400_);
lean_dec_ref(v_a_5399_);
return v_res_5402_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(lean_object* v_00_u03b1_5403_, lean_object* v_x_5404_, uint8_t v_isExporting_5405_, lean_object* v___y_5406_, lean_object* v___y_5407_){
_start:
{
lean_object* v___x_5409_; 
v___x_5409_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5404_, v_isExporting_5405_, v___y_5406_, v___y_5407_);
return v___x_5409_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___boxed(lean_object* v_00_u03b1_5410_, lean_object* v_x_5411_, lean_object* v_isExporting_5412_, lean_object* v___y_5413_, lean_object* v___y_5414_, lean_object* v___y_5415_){
_start:
{
uint8_t v_isExporting_boxed_5416_; lean_object* v_res_5417_; 
v_isExporting_boxed_5416_ = lean_unbox(v_isExporting_5412_);
v_res_5417_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(v_00_u03b1_5410_, v_x_5411_, v_isExporting_boxed_5416_, v___y_5413_, v___y_5414_);
lean_dec(v___y_5414_);
lean_dec_ref(v___y_5413_);
return v_res_5417_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(lean_object* v_00_u03b1_5418_, lean_object* v_x_5419_, uint8_t v_when_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_){
_start:
{
lean_object* v___x_5424_; 
v___x_5424_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v_x_5419_, v_when_5420_, v___y_5421_, v___y_5422_);
return v___x_5424_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___boxed(lean_object* v_00_u03b1_5425_, lean_object* v_x_5426_, lean_object* v_when_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_){
_start:
{
uint8_t v_when_boxed_5431_; lean_object* v_res_5432_; 
v_when_boxed_5431_ = lean_unbox(v_when_5427_);
v_res_5432_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(v_00_u03b1_5425_, v_x_5426_, v_when_boxed_5431_, v___y_5428_, v___y_5429_);
lean_dec(v___y_5429_);
lean_dec_ref(v___y_5428_);
return v_res_5432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(lean_object* v_x_5433_, lean_object* v___y_5434_, lean_object* v___y_5435_){
_start:
{
lean_object* v___x_5437_; lean_object* v___x_5438_; 
v___x_5437_ = ((lean_object*)(l_Lean_Core_betaReduce___lam__0___closed__0));
v___x_5438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5438_, 0, v___x_5437_);
return v___x_5438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed(lean_object* v_x_5439_, lean_object* v___y_5440_, lean_object* v___y_5441_, lean_object* v___y_5442_){
_start:
{
lean_object* v_res_5443_; 
v_res_5443_ = l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(v_x_5439_, v___y_5440_, v___y_5441_);
lean_dec(v___y_5441_);
lean_dec_ref(v___y_5440_);
lean_dec_ref(v_x_5439_);
return v_res_5443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(lean_object* v_e_5444_, lean_object* v___y_5445_, lean_object* v___y_5446_){
_start:
{
lean_object* v___y_5449_; lean_object* v___x_5452_; 
v___x_5452_ = l_Lean_inaccessible_x3f(v_e_5444_);
if (lean_obj_tag(v___x_5452_) == 1)
{
lean_object* v_val_5453_; 
lean_dec_ref(v_e_5444_);
v_val_5453_ = lean_ctor_get(v___x_5452_, 0);
lean_inc(v_val_5453_);
lean_dec_ref_known(v___x_5452_, 1);
v___y_5449_ = v_val_5453_;
goto v___jp_5448_;
}
else
{
lean_dec(v___x_5452_);
v___y_5449_ = v_e_5444_;
goto v___jp_5448_;
}
v___jp_5448_:
{
lean_object* v___x_5450_; lean_object* v___x_5451_; 
v___x_5450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5450_, 0, v___y_5449_);
v___x_5451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5451_, 0, v___x_5450_);
return v___x_5451_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed(lean_object* v_e_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_, lean_object* v___y_5457_){
_start:
{
lean_object* v_res_5458_; 
v_res_5458_ = l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(v_e_5454_, v___y_5455_, v___y_5456_);
lean_dec(v___y_5456_);
lean_dec_ref(v___y_5455_);
return v_res_5458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations(lean_object* v_e_5461_, lean_object* v_a_5462_, lean_object* v_a_5463_){
_start:
{
lean_object* v___f_5465_; lean_object* v___f_5466_; lean_object* v___x_5467_; 
v___f_5465_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__0));
v___f_5466_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__1));
v___x_5467_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5461_, v___f_5465_, v___f_5466_, v_a_5462_, v_a_5463_);
return v___x_5467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___boxed(lean_object* v_e_5468_, lean_object* v_a_5469_, lean_object* v_a_5470_, lean_object* v_a_5471_){
_start:
{
lean_object* v_res_5472_; 
v_res_5472_ = l_Lean_Meta_eraseInaccessibleAnnotations(v_e_5468_, v_a_5469_, v_a_5470_);
lean_dec(v_a_5470_);
lean_dec_ref(v_a_5469_);
return v_res_5472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1(lean_object* v_e_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_){
_start:
{
lean_object* v___y_5478_; lean_object* v___x_5481_; 
v___x_5481_ = l_Lean_patternWithRef_x3f(v_e_5473_);
if (lean_obj_tag(v___x_5481_) == 1)
{
lean_object* v_val_5482_; lean_object* v_snd_5483_; 
lean_dec_ref(v_e_5473_);
v_val_5482_ = lean_ctor_get(v___x_5481_, 0);
lean_inc(v_val_5482_);
lean_dec_ref_known(v___x_5481_, 1);
v_snd_5483_ = lean_ctor_get(v_val_5482_, 1);
lean_inc(v_snd_5483_);
lean_dec(v_val_5482_);
v___y_5478_ = v_snd_5483_;
goto v___jp_5477_;
}
else
{
lean_dec(v___x_5481_);
v___y_5478_ = v_e_5473_;
goto v___jp_5477_;
}
v___jp_5477_:
{
lean_object* v___x_5479_; lean_object* v___x_5480_; 
v___x_5479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5479_, 0, v___y_5478_);
v___x_5480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5480_, 0, v___x_5479_);
return v___x_5480_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed(lean_object* v_e_5484_, lean_object* v___y_5485_, lean_object* v___y_5486_, lean_object* v___y_5487_){
_start:
{
lean_object* v_res_5488_; 
v_res_5488_ = l_Lean_Meta_erasePatternRefAnnotations___lam__1(v_e_5484_, v___y_5485_, v___y_5486_);
lean_dec(v___y_5486_);
lean_dec_ref(v___y_5485_);
return v_res_5488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations(lean_object* v_e_5490_, lean_object* v_a_5491_, lean_object* v_a_5492_){
_start:
{
lean_object* v___f_5494_; lean_object* v___f_5495_; lean_object* v___x_5496_; 
v___f_5494_ = ((lean_object*)(l_Lean_Meta_eraseInaccessibleAnnotations___closed__0));
v___f_5495_ = ((lean_object*)(l_Lean_Meta_erasePatternRefAnnotations___closed__0));
v___x_5496_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5490_, v___f_5494_, v___f_5495_, v_a_5491_, v_a_5492_);
return v___x_5496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___boxed(lean_object* v_e_5497_, lean_object* v_a_5498_, lean_object* v_a_5499_, lean_object* v_a_5500_){
_start:
{
lean_object* v_res_5501_; 
v_res_5501_ = l_Lean_Meta_erasePatternRefAnnotations(v_e_5497_, v_a_5498_, v_a_5499_);
lean_dec(v_a_5499_);
lean_dec_ref(v_a_5498_);
return v_res_5501_;
}
}
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedTransformStep_default = _init_l_Lean_instInhabitedTransformStep_default();
lean_mark_persistent(l_Lean_instInhabitedTransformStep_default);
l_Lean_instInhabitedTransformStep = _init_l_Lean_instInhabitedTransformStep();
lean_mark_persistent(l_Lean_instInhabitedTransformStep);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Transform(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Elab.PreDefinition.FixedParams
// Imports: public import Lean.Elab.PreDefinition.Basic import Init.Omega
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
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Array_range(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_indentD(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0;
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParams_Info_setVarying___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParams_Info_setVarying___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "❌"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object*);
static const lean_closure_object l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_FixedParams_Info_format, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_FixedParams_instToFormatInfo___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_FixedParams_instToFormatInfo = (const lean_object*)&l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_getParamRevDeps___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_getParamRevDeps___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_getParamRevDeps___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_getParamRevDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_getParamRevDeps___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_getParamRevDeps___closed__0 = (const lean_object*)&l_Lean_Elab_getParamRevDeps___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0 = (const lean_object*)&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__2;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed__const__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "fixedParams"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(80, 131, 105, 217, 25, 82, 145, 102)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "getFixedParams: notFixed "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ":\nIn "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "\ntoo few arguments for "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " =/= "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " not matched"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.PreDefinition.FixedParams"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.getFixedParamsInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 185, .m_capacity = 185, .m_length = 184, .m_data = "assertion violation: params.size = arities[callerIdx]!\n\n      -- TODO: transform is overkill, a simple visit-all-subexpression that takes applications\n      -- as whole suffices\n      "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_getFixedParamsInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "getFixedParams:"};
static const lean_object* l_Lean_Elab_getFixedParamsInfo___closed__0 = (const lean_object*)&l_Lean_Elab_getFixedParamsInfo___closed__0_value;
static lean_once_cell_t l_Lean_Elab_getFixedParamsInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamsInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value),((lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_value)}};
static const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1 = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedFixedParamPerms = (const lean_object*)&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_value;
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3_value;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object*);
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "numFixed"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "perms"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "revDeps"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13;
static const lean_string_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_value;
static const lean_ctor_object l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instReprFixedParamPerms___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instReprFixedParamPerms_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instReprFixedParamPerms___closed__0 = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instReprFixedParamPerms = (const lean_object*)&l_Lean_Elab_instReprFixedParamPerms___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.getFixedParamPerms"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "assertion violation: firstPerm[firstParamIdx]!.isSome\n            "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Incomplete paramInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: paramInfo[0]! = some paramIdx\n        "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "assertion violation: xs.size = paramInfos.size\n\n    "};
static const lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.forallTelescopeImpl.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "assertion violation: type.isForall\n      "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "assertion violation: xs'.size = 1\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamIdx < xs.size\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "assertion violation: !( __do_lift._@.Lean.Elab.PreDefinition.FixedParams.75993854._hygCtx._hyg.102.0 ).hasLooseBVars\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateForall.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: ys.size = 1\n          "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Elab.FixedParamPerm.instantiateForall"};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "assertion violation: xs.size = perm.numFixed\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateLambda.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "assertion violation: ys.size = 1\n            "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Elab.FixedParamPerm.instantiateLambda"};
static const lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.pickFixed.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamIdx < ys.size\n        "};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.FixedParamPerm.pickFixed"};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "assertion violation: xs.size = perm.size\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2;
static const lean_array_object l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.buildArgs.go"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "FixedParams.buildArgs: too few fixed args"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "FixedParams.buildArgs: too few varying args"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.FixedParamPerm.buildArgs"};
static const lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: fixedArgs.size = perm.numFixed\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Elab.FixedParamPerms.erase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: paramIdx < mapping.size\n      "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: fixedParamPerms.numFixed  = xs.size\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__0 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__0_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__1;
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 134, .m_capacity = 134, .m_length = 133, .m_data = "assertion violation: toErase.size = fixedParamPerms.perms.size\n  -- Calculate a mask on the fixed parameters of variables to erase\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__2 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__2_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__3;
static const lean_string_object l_Lean_Elab_FixedParamPerms_erase___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 41, .m_data = "assertion violation: xs.all (·.isFVar)\n  "};
static const lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__4 = (const lean_object*)&l_Lean_Elab_FixedParamPerms_erase___closed__4_value;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "FixedParams"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object* v_revDeps_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_bs_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = l_unsafeCast___redArg(v_bs_4_);
lean_dec_ref(v_bs_4_);
return v___x_6_;
}
else
{
lean_object* v_v_7_; lean_object* v___x_8_; lean_object* v_bs_x27_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; size_t v___x_17_; size_t v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v_v_7_ = lean_array_uget(v_bs_4_, v_i_3_);
v___x_8_ = lean_unsigned_to_nat(0u);
v_bs_x27_9_ = lean_array_uset(v_bs_4_, v_i_3_, v___x_8_);
v___x_10_ = l_unsafeCast___redArg(v_v_7_);
lean_dec(v_v_7_);
v___x_11_ = lean_array_get_size(v___x_10_);
lean_dec(v___x_10_);
v___x_12_ = lean_array_get_size(v_revDeps_1_);
v___x_13_ = lean_box(0);
v___x_14_ = lean_mk_array(v___x_12_, v___x_13_);
v___x_15_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
v___x_16_ = lean_mk_array(v___x_11_, v___x_15_);
v___x_17_ = ((size_t)1ULL);
v___x_18_ = lean_usize_add(v_i_3_, v___x_17_);
v___x_19_ = l_unsafeCast___redArg(v___x_16_);
lean_dec_ref(v___x_16_);
v___x_20_ = lean_array_uset(v_bs_x27_9_, v_i_3_, v___x_19_);
v_i_3_ = v___x_18_;
v_bs_4_ = v___x_20_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object* v_revDeps_22_, lean_object* v_sz_23_, lean_object* v_i_24_, lean_object* v_bs_25_){
_start:
{
size_t v_sz_boxed_26_; size_t v_i_boxed_27_; lean_object* v_res_28_; 
v_sz_boxed_26_ = lean_unbox_usize(v_sz_23_);
lean_dec(v_sz_23_);
v_i_boxed_27_ = lean_unbox_usize(v_i_24_);
lean_dec(v_i_24_);
v_res_28_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_22_, v_sz_boxed_26_, v_i_boxed_27_, v_bs_25_);
lean_dec_ref(v_revDeps_22_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object* v_revDeps_29_){
_start:
{
size_t v_sz_30_; size_t v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_sz_30_ = lean_array_size(v_revDeps_29_);
v___x_31_ = ((size_t)0ULL);
v___x_32_ = l_unsafeCast___redArg(v_revDeps_29_);
v___x_33_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_29_, v_sz_30_, v___x_31_, v___x_32_);
v___x_34_ = l_unsafeCast___redArg(v___x_33_);
lean_dec_ref(v___x_33_);
v___x_35_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v_revDeps_29_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object* v_i_36_, size_t v_sz_37_, size_t v_i_38_, lean_object* v_bs_39_){
_start:
{
uint8_t v___x_40_; 
v___x_40_ = lean_usize_dec_lt(v_i_38_, v_sz_37_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; 
v___x_41_ = l_unsafeCast___redArg(v_bs_39_);
lean_dec_ref(v_bs_39_);
return v___x_41_;
}
else
{
lean_object* v_v_42_; lean_object* v___x_43_; lean_object* v_bs_x27_44_; lean_object* v___y_46_; lean_object* v___x_52_; 
v_v_42_ = lean_array_uget(v_bs_39_, v_i_38_);
v___x_43_ = lean_unsigned_to_nat(0u);
v_bs_x27_44_ = lean_array_uset(v_bs_39_, v_i_38_, v___x_43_);
v___x_52_ = l_unsafeCast___redArg(v_v_42_);
lean_dec(v_v_42_);
if (lean_obj_tag(v___x_52_) == 0)
{
v___y_46_ = v___x_52_;
goto v___jp_45_;
}
else
{
lean_object* v_val_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_63_; 
v_val_53_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_63_ == 0)
{
v___x_55_ = v___x_52_;
v_isShared_56_ = v_isSharedCheck_63_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_val_53_);
lean_dec(v___x_52_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_63_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_59_; 
v___x_57_ = lean_usize_to_nat(v_i_38_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_57_);
v___x_59_ = v___x_55_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v___x_57_);
v___x_59_ = v_reuseFailAlloc_62_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_array_set(v_val_53_, v_i_36_, v___x_59_);
v___x_61_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
v___y_46_ = v___x_61_;
goto v___jp_45_;
}
}
}
v___jp_45_:
{
size_t v___x_47_; size_t v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_47_ = ((size_t)1ULL);
v___x_48_ = lean_usize_add(v_i_38_, v___x_47_);
v___x_49_ = l_unsafeCast___redArg(v___y_46_);
lean_dec(v___y_46_);
v___x_50_ = lean_array_uset(v_bs_x27_44_, v_i_38_, v___x_49_);
v_i_38_ = v___x_48_;
v_bs_39_ = v___x_50_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object* v_i_64_, lean_object* v_sz_65_, lean_object* v_i_66_, lean_object* v_bs_67_){
_start:
{
size_t v_sz_boxed_68_; size_t v_i_boxed_69_; lean_object* v_res_70_; 
v_sz_boxed_68_ = lean_unbox_usize(v_sz_65_);
lean_dec(v_sz_65_);
v_i_boxed_69_ = lean_unbox_usize(v_i_66_);
lean_dec(v_i_66_);
v_res_70_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_64_, v_sz_boxed_68_, v_i_boxed_69_, v_bs_67_);
lean_dec(v_i_64_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(size_t v_sz_71_, size_t v_i_72_, lean_object* v_bs_73_){
_start:
{
uint8_t v___x_74_; 
v___x_74_ = lean_usize_dec_lt(v_i_72_, v_sz_71_);
if (v___x_74_ == 0)
{
lean_object* v___x_75_; 
v___x_75_ = l_unsafeCast___redArg(v_bs_73_);
lean_dec_ref(v_bs_73_);
return v___x_75_;
}
else
{
lean_object* v_v_76_; lean_object* v___x_77_; lean_object* v_bs_x27_78_; lean_object* v___x_79_; lean_object* v___x_80_; size_t v_sz_81_; size_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; size_t v___x_86_; size_t v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v_v_76_ = lean_array_uget(v_bs_73_, v_i_72_);
v___x_77_ = lean_unsigned_to_nat(0u);
v_bs_x27_78_ = lean_array_uset(v_bs_73_, v_i_72_, v___x_77_);
v___x_79_ = lean_usize_to_nat(v_i_72_);
v___x_80_ = l_unsafeCast___redArg(v_v_76_);
lean_dec(v_v_76_);
v_sz_81_ = lean_array_size(v___x_80_);
v___x_82_ = ((size_t)0ULL);
v___x_83_ = l_unsafeCast___redArg(v___x_80_);
lean_dec(v___x_80_);
v___x_84_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v___x_79_, v_sz_81_, v___x_82_, v___x_83_);
lean_dec(v___x_79_);
v___x_85_ = l_unsafeCast___redArg(v___x_84_);
lean_dec_ref(v___x_84_);
v___x_86_ = ((size_t)1ULL);
v___x_87_ = lean_usize_add(v_i_72_, v___x_86_);
v___x_88_ = l_unsafeCast___redArg(v___x_85_);
lean_dec(v___x_85_);
v___x_89_ = lean_array_uset(v_bs_x27_78_, v_i_72_, v___x_88_);
v_i_72_ = v___x_87_;
v_bs_73_ = v___x_89_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object* v_sz_91_, lean_object* v_i_92_, lean_object* v_bs_93_){
_start:
{
size_t v_sz_boxed_94_; size_t v_i_boxed_95_; lean_object* v_res_96_; 
v_sz_boxed_94_ = lean_unbox_usize(v_sz_91_);
lean_dec(v_sz_91_);
v_i_boxed_95_ = lean_unbox_usize(v_i_92_);
lean_dec(v_i_92_);
v_res_96_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_boxed_94_, v_i_boxed_95_, v_bs_93_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object* v_info_97_){
_start:
{
lean_object* v_graph_98_; lean_object* v_revDeps_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_111_; 
v_graph_98_ = lean_ctor_get(v_info_97_, 0);
v_revDeps_99_ = lean_ctor_get(v_info_97_, 1);
v_isSharedCheck_111_ = !lean_is_exclusive(v_info_97_);
if (v_isSharedCheck_111_ == 0)
{
v___x_101_ = v_info_97_;
v_isShared_102_ = v_isSharedCheck_111_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_revDeps_99_);
lean_inc(v_graph_98_);
lean_dec(v_info_97_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_111_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
size_t v_sz_103_; size_t v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_109_; 
v_sz_103_ = lean_array_size(v_graph_98_);
v___x_104_ = ((size_t)0ULL);
v___x_105_ = l_unsafeCast___redArg(v_graph_98_);
lean_dec_ref(v_graph_98_);
v___x_106_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_103_, v___x_104_, v___x_105_);
v___x_107_ = l_unsafeCast___redArg(v___x_106_);
lean_dec_ref(v___x_106_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v___x_107_);
v___x_109_ = v___x_101_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_107_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v_revDeps_99_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object* v_i_112_, lean_object* v_as_113_, size_t v_sz_114_, size_t v_i_115_, lean_object* v_bs_116_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_112_, v_sz_114_, v_i_115_, v_bs_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object* v_i_118_, lean_object* v_as_119_, lean_object* v_sz_120_, lean_object* v_i_121_, lean_object* v_bs_122_){
_start:
{
size_t v_sz_boxed_123_; size_t v_i_boxed_124_; lean_object* v_res_125_; 
v_sz_boxed_123_ = lean_unbox_usize(v_sz_120_);
lean_dec(v_sz_120_);
v_i_boxed_124_ = lean_unbox_usize(v_i_121_);
lean_dec(v_i_121_);
v_res_125_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(v_i_118_, v_as_119_, v_sz_boxed_123_, v_i_boxed_124_, v_bs_122_);
lean_dec_ref(v_as_119_);
lean_dec(v_i_118_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object* v_as_126_, size_t v_sz_127_, size_t v_i_128_, lean_object* v_bs_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_sz_127_, v_i_128_, v_bs_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object* v_as_131_, lean_object* v_sz_132_, lean_object* v_i_133_, lean_object* v_bs_134_){
_start:
{
size_t v_sz_boxed_135_; size_t v_i_boxed_136_; lean_object* v_res_137_; 
v_sz_boxed_135_ = lean_unbox_usize(v_sz_132_);
lean_dec(v_sz_132_);
v_i_boxed_136_ = lean_unbox_usize(v_i_133_);
lean_dec(v_i_133_);
v_res_137_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(v_as_131_, v_sz_boxed_135_, v_i_boxed_136_, v_bs_134_);
lean_dec_ref(v_as_131_);
return v_res_137_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Array_instInhabited___redArg();
return v___x_138_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object* v_callerIdx_139_, lean_object* v_paramIdx_140_, lean_object* v_info_141_){
_start:
{
lean_object* v_graph_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v_graph_142_ = lean_ctor_get(v_info_141_, 0);
v___x_143_ = lean_box(0);
v___x_144_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_145_ = lean_array_get_borrowed(v___x_144_, v_graph_142_, v_callerIdx_139_);
v___x_146_ = lean_array_get_borrowed(v___x_143_, v___x_145_, v_paramIdx_140_);
if (lean_obj_tag(v___x_146_) == 0)
{
uint8_t v___x_147_; 
v___x_147_ = 0;
return v___x_147_;
}
else
{
uint8_t v___x_148_; 
v___x_148_ = 1;
return v___x_148_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object* v_callerIdx_149_, lean_object* v_paramIdx_150_, lean_object* v_info_151_){
_start:
{
uint8_t v_res_152_; lean_object* v_r_153_; 
v_res_152_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_149_, v_paramIdx_150_, v_info_151_);
lean_dec_ref(v_info_151_);
lean_dec(v_paramIdx_150_);
lean_dec(v_callerIdx_149_);
v_r_153_ = lean_box(v_res_152_);
return v_r_153_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object* v_upperBound_154_, lean_object* v_next_155_, lean_object* v_funIdx_156_, lean_object* v_paramIdx_157_, lean_object* v_a_158_, lean_object* v_b_159_){
_start:
{
lean_object* v_a_161_; uint8_t v___x_165_; 
v___x_165_ = lean_nat_dec_lt(v_a_158_, v_upperBound_154_);
if (v___x_165_ == 0)
{
lean_dec(v_a_158_);
lean_dec(v_paramIdx_157_);
return v_b_159_;
}
else
{
lean_object* v_graph_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_graph_166_ = lean_ctor_get(v_b_159_, 0);
v___x_167_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_168_ = lean_box(0);
v___x_169_ = lean_array_get_borrowed(v___x_167_, v_graph_166_, v_next_155_);
v___x_170_ = lean_array_get(v___x_168_, v___x_169_, v_a_158_);
if (lean_obj_tag(v___x_170_) == 1)
{
lean_object* v_val_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_182_; 
v_val_171_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_182_ == 0)
{
v___x_173_ = v___x_170_;
v_isShared_174_ = v_isSharedCheck_182_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_val_171_);
lean_dec(v___x_170_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_182_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_175_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_176_ = lean_array_get(v___x_168_, v_val_171_, v_funIdx_156_);
lean_dec(v_val_171_);
lean_inc(v_paramIdx_157_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v_paramIdx_157_);
v___x_178_ = v___x_173_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_paramIdx_157_);
v___x_178_ = v_reuseFailAlloc_181_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
uint8_t v___x_179_; 
v___x_179_ = l_Option_instDecidableEq___redArg(v___x_175_, v___x_176_, v___x_178_);
if (v___x_179_ == 0)
{
v_a_161_ = v_b_159_;
goto v___jp_160_;
}
else
{
lean_object* v___x_180_; 
lean_inc(v_a_158_);
v___x_180_ = l_Lean_Elab_FixedParams_Info_setVarying(v_next_155_, v_a_158_, v_b_159_);
v_a_161_ = v___x_180_;
goto v___jp_160_;
}
}
}
}
else
{
lean_dec(v___x_170_);
v_a_161_ = v_b_159_;
goto v___jp_160_;
}
}
v___jp_160_:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_unsigned_to_nat(1u);
v___x_163_ = lean_nat_add(v_a_158_, v___x_162_);
lean_dec(v_a_158_);
v_a_158_ = v___x_163_;
v_b_159_ = v_a_161_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object* v_upperBound_183_, lean_object* v_funIdx_184_, lean_object* v_paramIdx_185_, lean_object* v_a_186_, lean_object* v_b_187_){
_start:
{
uint8_t v___x_188_; 
v___x_188_ = lean_nat_dec_lt(v_a_186_, v_upperBound_183_);
if (v___x_188_ == 0)
{
lean_dec(v_a_186_);
lean_dec(v_paramIdx_185_);
return v_b_187_;
}
else
{
lean_object* v_graph_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v_graph_189_ = lean_ctor_get(v_b_187_, 0);
v___x_190_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_191_ = lean_array_get_borrowed(v___x_190_, v_graph_189_, v_a_186_);
v___x_192_ = lean_array_get_size(v___x_191_);
v___x_193_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_185_);
v___x_194_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v___x_192_, v_a_186_, v_funIdx_184_, v_paramIdx_185_, v___x_193_, v_b_187_);
v___x_195_ = lean_unsigned_to_nat(1u);
v___x_196_ = lean_nat_add(v_a_186_, v___x_195_);
lean_dec(v_a_186_);
v_a_186_ = v___x_196_;
v_b_187_ = v___x_194_;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_FixedParams_Info_setVarying___closed__0(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_box(0);
v___x_199_ = l_unsafeCast___redArg(v___x_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object* v_funIdx_200_, lean_object* v_paramIdx_201_, lean_object* v_info_202_){
_start:
{
uint8_t v___x_203_; 
v___x_203_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_funIdx_200_, v_paramIdx_201_, v_info_202_);
if (v___x_203_ == 0)
{
lean_dec(v_paramIdx_201_);
return v_info_202_;
}
else
{
lean_object* v_graph_204_; lean_object* v_revDeps_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_232_; 
v_graph_204_ = lean_ctor_get(v_info_202_, 0);
v_revDeps_205_ = lean_ctor_get(v_info_202_, 1);
v_isSharedCheck_232_ = !lean_is_exclusive(v_info_202_);
if (v_isSharedCheck_232_ == 0)
{
v___x_207_ = v_info_202_;
v_isShared_208_ = v_isSharedCheck_232_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_revDeps_205_);
lean_inc(v_graph_204_);
lean_dec(v_info_202_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_232_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_209_; lean_object* v___y_211_; lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_209_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_224_ = lean_array_get_size(v_graph_204_);
v___x_225_ = lean_nat_dec_lt(v_funIdx_200_, v___x_224_);
if (v___x_225_ == 0)
{
v___y_211_ = v_graph_204_;
goto v___jp_210_;
}
else
{
lean_object* v_v_226_; lean_object* v___x_227_; lean_object* v_xs_x27_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v_v_226_ = lean_array_fget(v_graph_204_, v_funIdx_200_);
v___x_227_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_setVarying___closed__0, &l_Lean_Elab_FixedParams_Info_setVarying___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_setVarying___closed__0);
v_xs_x27_228_ = lean_array_fset(v_graph_204_, v_funIdx_200_, v___x_227_);
v___x_229_ = lean_box(0);
v___x_230_ = lean_array_set(v_v_226_, v_paramIdx_201_, v___x_229_);
v___x_231_ = lean_array_fset(v_xs_x27_228_, v_funIdx_200_, v___x_230_);
v___y_211_ = v___x_231_;
goto v___jp_210_;
}
v___jp_210_:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v_info_215_; 
v___x_212_ = lean_array_get_size(v___y_211_);
v___x_213_ = lean_unsigned_to_nat(0u);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___y_211_);
v_info_215_ = v___x_207_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___y_211_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v_revDeps_205_);
v_info_215_ = v_reuseFailAlloc_223_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_object* v___x_216_; lean_object* v_revDeps_217_; lean_object* v___x_218_; lean_object* v___x_219_; size_t v_sz_220_; size_t v___x_221_; lean_object* v___x_222_; 
lean_inc(v_paramIdx_201_);
v___x_216_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v___x_212_, v_funIdx_200_, v_paramIdx_201_, v___x_213_, v_info_215_);
v_revDeps_217_ = lean_ctor_get(v___x_216_, 1);
lean_inc_ref(v_revDeps_217_);
v___x_218_ = lean_array_get(v___x_209_, v_revDeps_217_, v_funIdx_200_);
lean_dec_ref(v_revDeps_217_);
v___x_219_ = lean_array_get(v___x_209_, v___x_218_, v_paramIdx_201_);
lean_dec(v_paramIdx_201_);
lean_dec(v___x_218_);
v_sz_220_ = lean_array_size(v___x_219_);
v___x_221_ = ((size_t)0ULL);
v___x_222_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_200_, v___x_219_, v_sz_220_, v___x_221_, v___x_216_);
lean_dec(v___x_219_);
return v___x_222_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object* v_funIdx_233_, lean_object* v_as_234_, size_t v_sz_235_, size_t v_i_236_, lean_object* v_b_237_){
_start:
{
uint8_t v___x_238_; 
v___x_238_ = lean_usize_dec_lt(v_i_236_, v_sz_235_);
if (v___x_238_ == 0)
{
return v_b_237_;
}
else
{
lean_object* v_a_239_; lean_object* v___x_240_; size_t v___x_241_; size_t v___x_242_; 
v_a_239_ = lean_array_uget_borrowed(v_as_234_, v_i_236_);
lean_inc(v_a_239_);
v___x_240_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_233_, v_a_239_, v_b_237_);
v___x_241_ = ((size_t)1ULL);
v___x_242_ = lean_usize_add(v_i_236_, v___x_241_);
v_i_236_ = v___x_242_;
v_b_237_ = v___x_240_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object* v_funIdx_244_, lean_object* v_as_245_, lean_object* v_sz_246_, lean_object* v_i_247_, lean_object* v_b_248_){
_start:
{
size_t v_sz_boxed_249_; size_t v_i_boxed_250_; lean_object* v_res_251_; 
v_sz_boxed_249_ = lean_unbox_usize(v_sz_246_);
lean_dec(v_sz_246_);
v_i_boxed_250_ = lean_unbox_usize(v_i_247_);
lean_dec(v_i_247_);
v_res_251_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_244_, v_as_245_, v_sz_boxed_249_, v_i_boxed_250_, v_b_248_);
lean_dec_ref(v_as_245_);
lean_dec(v_funIdx_244_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object* v_upperBound_252_, lean_object* v_funIdx_253_, lean_object* v_paramIdx_254_, lean_object* v_a_255_, lean_object* v_b_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_252_, v_funIdx_253_, v_paramIdx_254_, v_a_255_, v_b_256_);
lean_dec(v_funIdx_253_);
lean_dec(v_upperBound_252_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object* v_upperBound_258_, lean_object* v_next_259_, lean_object* v_funIdx_260_, lean_object* v_paramIdx_261_, lean_object* v_a_262_, lean_object* v_b_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_258_, v_next_259_, v_funIdx_260_, v_paramIdx_261_, v_a_262_, v_b_263_);
lean_dec(v_funIdx_260_);
lean_dec(v_next_259_);
lean_dec(v_upperBound_258_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object* v_funIdx_265_, lean_object* v_paramIdx_266_, lean_object* v_info_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_265_, v_paramIdx_266_, v_info_267_);
lean_dec(v_funIdx_265_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object* v_upperBound_269_, lean_object* v_next_270_, lean_object* v_funIdx_271_, lean_object* v_paramIdx_272_, lean_object* v_inst_273_, lean_object* v_R_274_, lean_object* v_a_275_, lean_object* v_b_276_, lean_object* v_c_277_){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_269_, v_next_270_, v_funIdx_271_, v_paramIdx_272_, v_a_275_, v_b_276_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object* v_upperBound_279_, lean_object* v_next_280_, lean_object* v_funIdx_281_, lean_object* v_paramIdx_282_, lean_object* v_inst_283_, lean_object* v_R_284_, lean_object* v_a_285_, lean_object* v_b_286_, lean_object* v_c_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(v_upperBound_279_, v_next_280_, v_funIdx_281_, v_paramIdx_282_, v_inst_283_, v_R_284_, v_a_285_, v_b_286_, v_c_287_);
lean_dec(v_funIdx_281_);
lean_dec(v_next_280_);
lean_dec(v_upperBound_279_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object* v_upperBound_289_, lean_object* v_funIdx_290_, lean_object* v_paramIdx_291_, lean_object* v_inst_292_, lean_object* v_R_293_, lean_object* v_a_294_, lean_object* v_b_295_, lean_object* v_c_296_){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_289_, v_funIdx_290_, v_paramIdx_291_, v_a_294_, v_b_295_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object* v_upperBound_298_, lean_object* v_funIdx_299_, lean_object* v_paramIdx_300_, lean_object* v_inst_301_, lean_object* v_R_302_, lean_object* v_a_303_, lean_object* v_b_304_, lean_object* v_c_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(v_upperBound_298_, v_funIdx_299_, v_paramIdx_300_, v_inst_301_, v_R_302_, v_a_303_, v_b_304_, v_c_305_);
lean_dec(v_funIdx_299_);
lean_dec(v_upperBound_298_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object* v_calleeIdx_307_, lean_object* v_argIdx_308_, lean_object* v_callerIdx_309_, lean_object* v_info_310_){
_start:
{
lean_object* v_graph_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v_graph_311_ = lean_ctor_get(v_info_310_, 0);
v___x_312_ = lean_box(0);
v___x_313_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_314_ = lean_array_get_borrowed(v___x_313_, v_graph_311_, v_calleeIdx_307_);
v___x_315_ = lean_array_get_borrowed(v___x_312_, v___x_314_, v_argIdx_308_);
if (lean_obj_tag(v___x_315_) == 0)
{
return v___x_312_;
}
else
{
lean_object* v_val_316_; lean_object* v___x_317_; 
v_val_316_ = lean_ctor_get(v___x_315_, 0);
v___x_317_ = lean_array_get_borrowed(v___x_312_, v_val_316_, v_callerIdx_309_);
lean_inc(v___x_317_);
return v___x_317_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object* v_calleeIdx_318_, lean_object* v_argIdx_319_, lean_object* v_callerIdx_320_, lean_object* v_info_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_318_, v_argIdx_319_, v_callerIdx_320_, v_info_321_);
lean_dec_ref(v_info_321_);
lean_dec(v_callerIdx_320_);
lean_dec(v_argIdx_319_);
lean_dec(v_calleeIdx_318_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object* v_upperBound_323_, lean_object* v_val_324_, lean_object* v_calleeIdx_325_, lean_object* v_argIdx_326_, lean_object* v_a_327_, lean_object* v_b_328_){
_start:
{
lean_object* v_a_330_; uint8_t v___x_334_; 
v___x_334_ = lean_nat_dec_lt(v_a_327_, v_upperBound_323_);
if (v___x_334_ == 0)
{
lean_dec(v_a_327_);
lean_dec(v_argIdx_326_);
return v_b_328_;
}
else
{
lean_object* v___x_335_; 
v___x_335_ = lean_array_fget_borrowed(v_val_324_, v_a_327_);
if (lean_obj_tag(v___x_335_) == 1)
{
lean_object* v_val_336_; lean_object* v___x_337_; 
v_val_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_val_336_);
lean_inc(v_argIdx_326_);
v___x_337_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_325_, v_argIdx_326_, v_a_327_, v_val_336_, v_b_328_);
v_a_330_ = v___x_337_;
goto v___jp_329_;
}
else
{
v_a_330_ = v_b_328_;
goto v___jp_329_;
}
}
v___jp_329_:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_unsigned_to_nat(1u);
v___x_332_ = lean_nat_add(v_a_327_, v___x_331_);
lean_dec(v_a_327_);
v_a_327_ = v___x_332_;
v_b_328_ = v_a_330_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object* v_calleeIdx_338_, lean_object* v_argIdx_339_, lean_object* v_callerIdx_340_, lean_object* v_paramIdx_341_, lean_object* v_info_342_){
_start:
{
lean_object* v_info_344_; lean_object* v_graph_345_; uint8_t v___x_349_; 
v___x_349_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_calleeIdx_338_, v_argIdx_339_, v_info_342_);
if (v___x_349_ == 0)
{
lean_dec(v_paramIdx_341_);
lean_dec(v_argIdx_339_);
return v_info_342_;
}
else
{
uint8_t v___x_350_; 
v___x_350_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_340_, v_paramIdx_341_, v_info_342_);
if (v___x_350_ == 0)
{
lean_object* v___x_351_; 
lean_dec(v_paramIdx_341_);
v___x_351_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_338_, v_argIdx_339_, v_info_342_);
return v___x_351_;
}
else
{
lean_object* v___x_352_; 
v___x_352_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_338_, v_argIdx_339_, v_callerIdx_340_, v_info_342_);
if (lean_obj_tag(v___x_352_) == 1)
{
lean_object* v_val_353_; uint8_t v___x_354_; 
v_val_353_ = lean_ctor_get(v___x_352_, 0);
lean_inc(v_val_353_);
lean_dec_ref_known(v___x_352_, 1);
v___x_354_ = lean_nat_dec_eq(v_paramIdx_341_, v_val_353_);
lean_dec(v_val_353_);
lean_dec(v_paramIdx_341_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; 
v___x_355_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_338_, v_argIdx_339_, v_info_342_);
return v___x_355_;
}
else
{
lean_dec(v_argIdx_339_);
return v_info_342_;
}
}
else
{
lean_object* v_graph_356_; lean_object* v_revDeps_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_400_; 
lean_dec(v___x_352_);
v_graph_356_ = lean_ctor_get(v_info_342_, 0);
v_revDeps_357_ = lean_ctor_get(v_info_342_, 1);
v_isSharedCheck_400_ = !lean_is_exclusive(v_info_342_);
if (v_isSharedCheck_400_ == 0)
{
v___x_359_ = v_info_342_;
v_isShared_360_ = v_isSharedCheck_400_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_revDeps_357_);
lean_inc(v_graph_356_);
lean_dec(v_info_342_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_400_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___y_364_; lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_361_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_362_ = lean_box(0);
v___x_375_ = lean_array_get_size(v_graph_356_);
v___x_376_ = lean_nat_dec_lt(v_calleeIdx_338_, v___x_375_);
if (v___x_376_ == 0)
{
v___y_364_ = v_graph_356_;
goto v___jp_363_;
}
else
{
lean_object* v_v_377_; lean_object* v___x_378_; lean_object* v_xs_x27_379_; lean_object* v___y_381_; lean_object* v___x_383_; uint8_t v___x_384_; 
v_v_377_ = lean_array_fget(v_graph_356_, v_calleeIdx_338_);
v___x_378_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_setVarying___closed__0, &l_Lean_Elab_FixedParams_Info_setVarying___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_setVarying___closed__0);
v_xs_x27_379_ = lean_array_fset(v_graph_356_, v_calleeIdx_338_, v___x_378_);
v___x_383_ = lean_array_get_size(v_v_377_);
v___x_384_ = lean_nat_dec_lt(v_argIdx_339_, v___x_383_);
if (v___x_384_ == 0)
{
v___y_381_ = v_v_377_;
goto v___jp_380_;
}
else
{
lean_object* v_v_385_; lean_object* v_xs_x27_386_; lean_object* v___y_388_; 
v_v_385_ = lean_array_fget(v_v_377_, v_argIdx_339_);
v_xs_x27_386_ = lean_array_fset(v_v_377_, v_argIdx_339_, v___x_378_);
if (lean_obj_tag(v_v_385_) == 0)
{
v___y_388_ = v_v_385_;
goto v___jp_387_;
}
else
{
lean_object* v_val_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_399_; 
v_val_390_ = lean_ctor_get(v_v_385_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v_v_385_);
if (v_isSharedCheck_399_ == 0)
{
v___x_392_ = v_v_385_;
v_isShared_393_ = v_isSharedCheck_399_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_val_390_);
lean_dec(v_v_385_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_399_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
lean_inc(v_paramIdx_341_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v_paramIdx_341_);
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_paramIdx_341_);
v___x_395_ = v_reuseFailAlloc_398_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_array_set(v_val_390_, v_callerIdx_340_, v___x_395_);
v___x_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
v___y_388_ = v___x_397_;
goto v___jp_387_;
}
}
}
v___jp_387_:
{
lean_object* v___x_389_; 
v___x_389_ = lean_array_fset(v_xs_x27_386_, v_argIdx_339_, v___y_388_);
v___y_381_ = v___x_389_;
goto v___jp_380_;
}
}
v___jp_380_:
{
lean_object* v___x_382_; 
v___x_382_ = lean_array_fset(v_xs_x27_379_, v_calleeIdx_338_, v___y_381_);
v___y_364_ = v___x_382_;
goto v___jp_363_;
}
}
v___jp_363_:
{
lean_object* v_info_366_; 
lean_inc_ref(v___y_364_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___y_364_);
v_info_366_ = v___x_359_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___y_364_);
lean_ctor_set(v_reuseFailAlloc_374_, 1, v_revDeps_357_);
v_info_366_ = v_reuseFailAlloc_374_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = lean_array_get_borrowed(v___x_361_, v___y_364_, v_callerIdx_340_);
v___x_368_ = lean_array_get_borrowed(v___x_362_, v___x_367_, v_paramIdx_341_);
if (lean_obj_tag(v___x_368_) == 1)
{
lean_object* v_val_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v_graph_373_; 
lean_inc_ref(v___x_368_);
lean_dec_ref(v___y_364_);
v_val_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_val_369_);
lean_dec_ref_known(v___x_368_, 1);
v___x_370_ = lean_array_get_size(v_val_369_);
v___x_371_ = lean_unsigned_to_nat(0u);
lean_inc(v_argIdx_339_);
v___x_372_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v___x_370_, v_val_369_, v_calleeIdx_338_, v_argIdx_339_, v___x_371_, v_info_366_);
lean_dec(v_val_369_);
v_graph_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc_ref(v_graph_373_);
v_info_344_ = v___x_372_;
v_graph_345_ = v_graph_373_;
goto v___jp_343_;
}
else
{
v_info_344_ = v_info_366_;
v_graph_345_ = v___y_364_;
goto v___jp_343_;
}
}
}
}
}
}
}
v___jp_343_:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = lean_array_get_size(v_graph_345_);
lean_dec_ref(v_graph_345_);
v___x_347_ = lean_unsigned_to_nat(0u);
v___x_348_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v___x_346_, v_calleeIdx_338_, v_argIdx_339_, v_callerIdx_340_, v_paramIdx_341_, v___x_347_, v_info_344_);
lean_dec(v_argIdx_339_);
return v___x_348_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object* v_upperBound_401_, lean_object* v_next_402_, lean_object* v_calleeIdx_403_, lean_object* v_argIdx_404_, lean_object* v_callerIdx_405_, lean_object* v_paramIdx_406_, lean_object* v_a_407_, lean_object* v_b_408_){
_start:
{
lean_object* v_a_410_; uint8_t v___x_414_; 
v___x_414_ = lean_nat_dec_lt(v_a_407_, v_upperBound_401_);
if (v___x_414_ == 0)
{
lean_dec(v_a_407_);
lean_dec(v_paramIdx_406_);
return v_b_408_;
}
else
{
lean_object* v_graph_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v_graph_415_ = lean_ctor_get(v_b_408_, 0);
v___x_416_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_417_ = lean_box(0);
v___x_418_ = lean_array_get_borrowed(v___x_416_, v_graph_415_, v_next_402_);
v___x_419_ = lean_array_get_borrowed(v___x_417_, v___x_418_, v_a_407_);
if (lean_obj_tag(v___x_419_) == 1)
{
lean_object* v_val_420_; lean_object* v___x_421_; 
v_val_420_ = lean_ctor_get(v___x_419_, 0);
v___x_421_ = lean_array_get_borrowed(v___x_417_, v_val_420_, v_calleeIdx_403_);
if (lean_obj_tag(v___x_421_) == 1)
{
lean_object* v_val_422_; uint8_t v___x_423_; 
v_val_422_ = lean_ctor_get(v___x_421_, 0);
v___x_423_ = lean_nat_dec_eq(v_val_422_, v_argIdx_404_);
if (v___x_423_ == 0)
{
v_a_410_ = v_b_408_;
goto v___jp_409_;
}
else
{
lean_object* v___x_424_; 
lean_inc(v_paramIdx_406_);
lean_inc(v_a_407_);
v___x_424_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_next_402_, v_a_407_, v_callerIdx_405_, v_paramIdx_406_, v_b_408_);
v_a_410_ = v___x_424_;
goto v___jp_409_;
}
}
else
{
v_a_410_ = v_b_408_;
goto v___jp_409_;
}
}
else
{
v_a_410_ = v_b_408_;
goto v___jp_409_;
}
}
v___jp_409_:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = lean_unsigned_to_nat(1u);
v___x_412_ = lean_nat_add(v_a_407_, v___x_411_);
lean_dec(v_a_407_);
v_a_407_ = v___x_412_;
v_b_408_ = v_a_410_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object* v_upperBound_425_, lean_object* v_calleeIdx_426_, lean_object* v_argIdx_427_, lean_object* v_callerIdx_428_, lean_object* v_paramIdx_429_, lean_object* v_a_430_, lean_object* v_b_431_){
_start:
{
uint8_t v___x_432_; 
v___x_432_ = lean_nat_dec_lt(v_a_430_, v_upperBound_425_);
if (v___x_432_ == 0)
{
lean_dec(v_a_430_);
lean_dec(v_paramIdx_429_);
return v_b_431_;
}
else
{
lean_object* v_graph_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v_graph_433_ = lean_ctor_get(v_b_431_, 0);
v___x_434_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_435_ = lean_array_get_borrowed(v___x_434_, v_graph_433_, v_a_430_);
v___x_436_ = lean_array_get_size(v___x_435_);
v___x_437_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_429_);
v___x_438_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v___x_436_, v_a_430_, v_calleeIdx_426_, v_argIdx_427_, v_callerIdx_428_, v_paramIdx_429_, v___x_437_, v_b_431_);
v___x_439_ = lean_unsigned_to_nat(1u);
v___x_440_ = lean_nat_add(v_a_430_, v___x_439_);
lean_dec(v_a_430_);
v_a_430_ = v___x_440_;
v_b_431_ = v___x_438_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object* v_upperBound_442_, lean_object* v_calleeIdx_443_, lean_object* v_argIdx_444_, lean_object* v_callerIdx_445_, lean_object* v_paramIdx_446_, lean_object* v_a_447_, lean_object* v_b_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_442_, v_calleeIdx_443_, v_argIdx_444_, v_callerIdx_445_, v_paramIdx_446_, v_a_447_, v_b_448_);
lean_dec(v_callerIdx_445_);
lean_dec(v_argIdx_444_);
lean_dec(v_calleeIdx_443_);
lean_dec(v_upperBound_442_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object* v_upperBound_450_, lean_object* v_val_451_, lean_object* v_calleeIdx_452_, lean_object* v_argIdx_453_, lean_object* v_a_454_, lean_object* v_b_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_450_, v_val_451_, v_calleeIdx_452_, v_argIdx_453_, v_a_454_, v_b_455_);
lean_dec(v_calleeIdx_452_);
lean_dec_ref(v_val_451_);
lean_dec(v_upperBound_450_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object* v_upperBound_457_, lean_object* v_next_458_, lean_object* v_calleeIdx_459_, lean_object* v_argIdx_460_, lean_object* v_callerIdx_461_, lean_object* v_paramIdx_462_, lean_object* v_a_463_, lean_object* v_b_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_457_, v_next_458_, v_calleeIdx_459_, v_argIdx_460_, v_callerIdx_461_, v_paramIdx_462_, v_a_463_, v_b_464_);
lean_dec(v_callerIdx_461_);
lean_dec(v_argIdx_460_);
lean_dec(v_calleeIdx_459_);
lean_dec(v_next_458_);
lean_dec(v_upperBound_457_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object* v_calleeIdx_466_, lean_object* v_argIdx_467_, lean_object* v_callerIdx_468_, lean_object* v_paramIdx_469_, lean_object* v_info_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_466_, v_argIdx_467_, v_callerIdx_468_, v_paramIdx_469_, v_info_470_);
lean_dec(v_callerIdx_468_);
lean_dec(v_calleeIdx_466_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object* v_upperBound_472_, lean_object* v_next_473_, lean_object* v_calleeIdx_474_, lean_object* v_argIdx_475_, lean_object* v_callerIdx_476_, lean_object* v_paramIdx_477_, lean_object* v_inst_478_, lean_object* v_R_479_, lean_object* v_a_480_, lean_object* v_b_481_, lean_object* v_c_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_472_, v_next_473_, v_calleeIdx_474_, v_argIdx_475_, v_callerIdx_476_, v_paramIdx_477_, v_a_480_, v_b_481_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object* v_upperBound_484_, lean_object* v_next_485_, lean_object* v_calleeIdx_486_, lean_object* v_argIdx_487_, lean_object* v_callerIdx_488_, lean_object* v_paramIdx_489_, lean_object* v_inst_490_, lean_object* v_R_491_, lean_object* v_a_492_, lean_object* v_b_493_, lean_object* v_c_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(v_upperBound_484_, v_next_485_, v_calleeIdx_486_, v_argIdx_487_, v_callerIdx_488_, v_paramIdx_489_, v_inst_490_, v_R_491_, v_a_492_, v_b_493_, v_c_494_);
lean_dec(v_callerIdx_488_);
lean_dec(v_argIdx_487_);
lean_dec(v_calleeIdx_486_);
lean_dec(v_next_485_);
lean_dec(v_upperBound_484_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object* v_upperBound_496_, lean_object* v_calleeIdx_497_, lean_object* v_argIdx_498_, lean_object* v_callerIdx_499_, lean_object* v_paramIdx_500_, lean_object* v_inst_501_, lean_object* v_R_502_, lean_object* v_a_503_, lean_object* v_b_504_, lean_object* v_c_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_496_, v_calleeIdx_497_, v_argIdx_498_, v_callerIdx_499_, v_paramIdx_500_, v_a_503_, v_b_504_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object* v_upperBound_507_, lean_object* v_calleeIdx_508_, lean_object* v_argIdx_509_, lean_object* v_callerIdx_510_, lean_object* v_paramIdx_511_, lean_object* v_inst_512_, lean_object* v_R_513_, lean_object* v_a_514_, lean_object* v_b_515_, lean_object* v_c_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(v_upperBound_507_, v_calleeIdx_508_, v_argIdx_509_, v_callerIdx_510_, v_paramIdx_511_, v_inst_512_, v_R_513_, v_a_514_, v_b_515_, v_c_516_);
lean_dec(v_callerIdx_510_);
lean_dec(v_argIdx_509_);
lean_dec(v_calleeIdx_508_);
lean_dec(v_upperBound_507_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object* v_upperBound_518_, lean_object* v_val_519_, lean_object* v_calleeIdx_520_, lean_object* v_argIdx_521_, lean_object* v_inst_522_, lean_object* v_R_523_, lean_object* v_a_524_, lean_object* v_b_525_, lean_object* v_c_526_){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_518_, v_val_519_, v_calleeIdx_520_, v_argIdx_521_, v_a_524_, v_b_525_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object* v_upperBound_528_, lean_object* v_val_529_, lean_object* v_calleeIdx_530_, lean_object* v_argIdx_531_, lean_object* v_inst_532_, lean_object* v_R_533_, lean_object* v_a_534_, lean_object* v_b_535_, lean_object* v_c_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(v_upperBound_528_, v_val_529_, v_calleeIdx_530_, v_argIdx_531_, v_inst_532_, v_R_533_, v_a_534_, v_b_535_, v_c_536_);
lean_dec(v_calleeIdx_530_);
lean_dec_ref(v_val_529_);
lean_dec(v_upperBound_528_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object* v_a_538_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = lean_nat_to_int(v_a_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object* v_x_540_, lean_object* v_x_541_, lean_object* v_x_542_){
_start:
{
if (lean_obj_tag(v_x_542_) == 0)
{
lean_dec(v_x_540_);
return v_x_541_;
}
else
{
lean_object* v_head_543_; lean_object* v_tail_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_553_; 
v_head_543_ = lean_ctor_get(v_x_542_, 0);
v_tail_544_ = lean_ctor_get(v_x_542_, 1);
v_isSharedCheck_553_ = !lean_is_exclusive(v_x_542_);
if (v_isSharedCheck_553_ == 0)
{
v___x_546_ = v_x_542_;
v_isShared_547_ = v_isSharedCheck_553_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_tail_544_);
lean_inc(v_head_543_);
lean_dec(v_x_542_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_553_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
lean_inc(v_x_540_);
if (v_isShared_547_ == 0)
{
lean_ctor_set_tag(v___x_546_, 5);
lean_ctor_set(v___x_546_, 1, v_x_540_);
lean_ctor_set(v___x_546_, 0, v_x_541_);
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_x_541_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v_x_540_);
v___x_549_ = v_reuseFailAlloc_552_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
lean_object* v___x_550_; 
v___x_550_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v_head_543_);
v_x_541_ = v___x_550_;
v_x_542_ = v_tail_544_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object* v_x_554_, lean_object* v_x_555_){
_start:
{
if (lean_obj_tag(v_x_554_) == 0)
{
lean_object* v___x_556_; 
lean_dec(v_x_555_);
v___x_556_ = lean_box(0);
return v___x_556_;
}
else
{
lean_object* v_tail_557_; 
v_tail_557_ = lean_ctor_get(v_x_554_, 1);
if (lean_obj_tag(v_tail_557_) == 0)
{
lean_object* v_head_558_; 
lean_dec(v_x_555_);
v_head_558_ = lean_ctor_get(v_x_554_, 0);
lean_inc(v_head_558_);
lean_dec_ref_known(v_x_554_, 2);
return v_head_558_;
}
else
{
lean_object* v_head_559_; lean_object* v___x_560_; 
lean_inc(v_tail_557_);
v_head_559_ = lean_ctor_get(v_x_554_, 0);
lean_inc(v_head_559_);
lean_dec_ref_known(v_x_554_, 2);
v___x_560_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(v_x_555_, v_head_559_, v_tail_557_);
return v___x_560_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object* v_a_567_, lean_object* v_a_568_){
_start:
{
if (lean_obj_tag(v_a_567_) == 0)
{
lean_object* v___x_569_; 
v___x_569_ = l_List_reverse___redArg(v_a_568_);
return v___x_569_;
}
else
{
lean_object* v_head_570_; lean_object* v_tail_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_595_; 
v_head_570_ = lean_ctor_get(v_a_567_, 0);
v_tail_571_ = lean_ctor_get(v_a_567_, 1);
v_isSharedCheck_595_ = !lean_is_exclusive(v_a_567_);
if (v_isSharedCheck_595_ == 0)
{
v___x_573_ = v_a_567_;
v_isShared_574_ = v_isSharedCheck_595_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_tail_571_);
lean_inc(v_head_570_);
lean_dec(v_a_567_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_595_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___y_576_; 
if (lean_obj_tag(v_head_570_) == 0)
{
lean_object* v___x_581_; 
v___x_581_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1));
v___y_576_ = v___x_581_;
goto v___jp_575_;
}
else
{
lean_object* v_val_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_594_; 
v_val_582_ = lean_ctor_get(v_head_570_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v_head_570_);
if (v_isSharedCheck_594_ == 0)
{
v___x_584_ = v_head_570_;
v_isShared_585_ = v_isSharedCheck_594_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_val_582_);
lean_dec(v_head_570_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_594_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_591_; 
v___x_586_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3));
v___x_587_ = lean_unsigned_to_nat(1u);
v___x_588_ = lean_nat_add(v_val_582_, v___x_587_);
lean_dec(v_val_582_);
v___x_589_ = l_Nat_reprFast(v___x_588_);
if (v_isShared_585_ == 0)
{
lean_ctor_set_tag(v___x_584_, 3);
lean_ctor_set(v___x_584_, 0, v___x_589_);
v___x_591_ = v___x_584_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_589_);
v___x_591_ = v_reuseFailAlloc_593_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
lean_object* v___x_592_; 
v___x_592_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_586_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v___y_576_ = v___x_592_;
goto v___jp_575_;
}
}
}
v___jp_575_:
{
lean_object* v___x_578_; 
if (v_isShared_574_ == 0)
{
lean_ctor_set(v___x_573_, 1, v_a_568_);
lean_ctor_set(v___x_573_, 0, v___y_576_);
v___x_578_ = v___x_573_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___y_576_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v_a_568_);
v___x_578_ = v_reuseFailAlloc_580_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
v_a_567_ = v_tail_571_;
v_a_568_ = v___x_578_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4));
v___x_605_ = lean_string_length(v___x_604_);
return v___x_605_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6);
v___x_607_ = lean_nat_to_int(v___x_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object* v_a_612_, lean_object* v_a_613_){
_start:
{
if (lean_obj_tag(v_a_612_) == 0)
{
lean_object* v___x_614_; 
v___x_614_ = l_List_reverse___redArg(v_a_613_);
return v___x_614_;
}
else
{
lean_object* v_head_615_; lean_object* v_tail_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_641_; 
v_head_615_ = lean_ctor_get(v_a_612_, 0);
v_tail_616_ = lean_ctor_get(v_a_612_, 1);
v_isSharedCheck_641_ = !lean_is_exclusive(v_a_612_);
if (v_isSharedCheck_641_ == 0)
{
v___x_618_ = v_a_612_;
v_isShared_619_ = v_isSharedCheck_641_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_tail_616_);
lean_inc(v_head_615_);
lean_dec(v_a_612_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_641_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___y_621_; 
if (lean_obj_tag(v_head_615_) == 0)
{
lean_object* v___x_626_; 
v___x_626_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1));
v___y_621_ = v___x_626_;
goto v___jp_620_;
}
else
{
lean_object* v_val_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; lean_object* v___x_640_; 
v_val_627_ = lean_ctor_get(v_head_615_, 0);
lean_inc(v_val_627_);
lean_dec_ref_known(v_head_615_, 1);
v___x_628_ = lean_array_to_list(v_val_627_);
v___x_629_ = lean_box(0);
v___x_630_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(v___x_628_, v___x_629_);
v___x_631_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3));
v___x_632_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_630_, v___x_631_);
v___x_633_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7);
v___x_634_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8));
v___x_635_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
lean_ctor_set(v___x_635_, 1, v___x_632_);
v___x_636_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_637_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_633_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = 0;
v___x_640_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_640_, 0, v___x_638_);
lean_ctor_set_uint8(v___x_640_, sizeof(void*)*1, v___x_639_);
v___y_621_ = v___x_640_;
goto v___jp_620_;
}
v___jp_620_:
{
lean_object* v___x_623_; 
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 1, v_a_613_);
lean_ctor_set(v___x_618_, 0, v___y_621_);
v___x_623_ = v___x_618_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___y_621_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_a_613_);
v___x_623_ = v_reuseFailAlloc_625_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
v_a_612_ = v_tail_616_;
v_a_613_ = v___x_623_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object* v_a_645_, lean_object* v_a_646_){
_start:
{
if (lean_obj_tag(v_a_645_) == 0)
{
lean_object* v___x_647_; 
v___x_647_ = l_List_reverse___redArg(v_a_646_);
return v___x_647_;
}
else
{
lean_object* v_head_648_; lean_object* v_tail_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_664_; 
v_head_648_ = lean_ctor_get(v_a_645_, 0);
v_tail_649_ = lean_ctor_get(v_a_645_, 1);
v_isSharedCheck_664_ = !lean_is_exclusive(v_a_645_);
if (v_isSharedCheck_664_ == 0)
{
v___x_651_ = v_a_645_;
v_isShared_652_ = v_isSharedCheck_664_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_tail_649_);
lean_inc(v_head_648_);
lean_dec(v_a_645_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_664_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_661_; 
v___x_653_ = lean_array_to_list(v_head_648_);
v___x_654_ = lean_box(0);
v___x_655_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(v___x_653_, v___x_654_);
v___x_656_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3));
v___x_657_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_655_, v___x_656_);
v___x_658_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1));
v___x_659_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
lean_ctor_set(v___x_659_, 1, v___x_657_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 1, v_a_646_);
lean_ctor_set(v___x_651_, 0, v___x_659_);
v___x_661_ = v___x_651_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v___x_659_);
lean_ctor_set(v_reuseFailAlloc_663_, 1, v_a_646_);
v___x_661_ = v_reuseFailAlloc_663_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
v_a_645_ = v_tail_649_;
v_a_646_ = v___x_661_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object* v_info_665_){
_start:
{
lean_object* v_graph_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v_graph_666_ = lean_ctor_get(v_info_665_, 0);
lean_inc_ref(v_graph_666_);
lean_dec_ref(v_info_665_);
v___x_667_ = lean_array_to_list(v_graph_666_);
v___x_668_ = lean_box(0);
v___x_669_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(v___x_667_, v___x_668_);
v___x_670_ = lean_box(1);
v___x_671_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_669_, v___x_670_);
return v___x_671_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object* v_x_674_){
_start:
{
uint8_t v___x_675_; 
v___x_675_ = 0;
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object* v_x_676_){
_start:
{
uint8_t v_res_677_; lean_object* v_r_678_; 
v_res_677_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(v_x_676_);
lean_dec(v_x_676_);
v_r_678_ = lean_box(v_res_677_);
return v_r_678_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object* v_fvarId_679_, lean_object* v_x_680_){
_start:
{
uint8_t v___x_681_; 
v___x_681_ = l_Lean_instBEqFVarId_beq(v_fvarId_679_, v_x_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object* v_fvarId_682_, lean_object* v_x_683_){
_start:
{
uint8_t v_res_684_; lean_object* v_r_685_; 
v_res_684_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(v_fvarId_682_, v_x_683_);
lean_dec(v_x_683_);
lean_dec(v_fvarId_682_);
v_r_685_ = lean_box(v_res_684_);
return v_r_685_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_687_ = lean_box(0);
v___x_688_ = lean_unsigned_to_nat(16u);
v___x_689_ = lean_mk_array(v___x_688_, v___x_687_);
return v___x_689_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_690_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1);
v___x_691_ = lean_unsigned_to_nat(0u);
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
lean_ctor_set(v___x_692_, 1, v___x_690_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object* v_e_693_, lean_object* v_fvarId_694_, lean_object* v___y_695_){
_start:
{
lean_object* v___f_697_; lean_object* v___f_698_; lean_object* v___x_699_; uint8_t v_fst_701_; lean_object* v_mctx_702_; lean_object* v___y_720_; lean_object* v_mctx_725_; lean_object* v___x_726_; lean_object* v___x_727_; uint8_t v___x_728_; 
v___f_697_ = ((lean_object*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0));
v___f_698_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_698_, 0, v_fvarId_694_);
v___x_699_ = lean_st_ref_get(v___y_695_);
v_mctx_725_ = lean_ctor_get(v___x_699_, 0);
lean_inc_ref_n(v_mctx_725_, 2);
lean_dec(v___x_699_);
v___x_726_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
lean_ctor_set(v___x_727_, 1, v_mctx_725_);
v___x_728_ = l_Lean_Expr_hasFVar(v_e_693_);
if (v___x_728_ == 0)
{
uint8_t v___x_729_; 
v___x_729_ = l_Lean_Expr_hasMVar(v_e_693_);
if (v___x_729_ == 0)
{
lean_dec_ref_known(v___x_727_, 2);
lean_dec_ref(v___f_698_);
lean_dec_ref(v_e_693_);
v_fst_701_ = v___x_729_;
v_mctx_702_ = v_mctx_725_;
goto v___jp_700_;
}
else
{
lean_object* v___x_730_; 
lean_dec_ref(v_mctx_725_);
v___x_730_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_698_, v___f_697_, v_e_693_, v___x_727_);
v___y_720_ = v___x_730_;
goto v___jp_719_;
}
}
else
{
lean_object* v___x_731_; 
lean_dec_ref(v_mctx_725_);
v___x_731_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_698_, v___f_697_, v_e_693_, v___x_727_);
v___y_720_ = v___x_731_;
goto v___jp_719_;
}
v___jp_700_:
{
lean_object* v___x_703_; lean_object* v_cache_704_; lean_object* v_zetaDeltaFVarIds_705_; lean_object* v_postponed_706_; lean_object* v_diag_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_717_; 
v___x_703_ = lean_st_ref_take(v___y_695_);
v_cache_704_ = lean_ctor_get(v___x_703_, 1);
v_zetaDeltaFVarIds_705_ = lean_ctor_get(v___x_703_, 2);
v_postponed_706_ = lean_ctor_get(v___x_703_, 3);
v_diag_707_ = lean_ctor_get(v___x_703_, 4);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_717_ == 0)
{
lean_object* v_unused_718_; 
v_unused_718_ = lean_ctor_get(v___x_703_, 0);
lean_dec(v_unused_718_);
v___x_709_ = v___x_703_;
v_isShared_710_ = v_isSharedCheck_717_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_diag_707_);
lean_inc(v_postponed_706_);
lean_inc(v_zetaDeltaFVarIds_705_);
lean_inc(v_cache_704_);
lean_dec(v___x_703_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_717_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v_mctx_702_);
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_mctx_702_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v_cache_704_);
lean_ctor_set(v_reuseFailAlloc_716_, 2, v_zetaDeltaFVarIds_705_);
lean_ctor_set(v_reuseFailAlloc_716_, 3, v_postponed_706_);
lean_ctor_set(v_reuseFailAlloc_716_, 4, v_diag_707_);
v___x_712_ = v_reuseFailAlloc_716_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_713_ = lean_st_ref_put(v___y_695_, v___x_712_);
v___x_714_ = lean_box(v_fst_701_);
v___x_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
return v___x_715_;
}
}
}
v___jp_719_:
{
lean_object* v_snd_721_; lean_object* v_fst_722_; lean_object* v_mctx_723_; uint8_t v___x_724_; 
v_snd_721_ = lean_ctor_get(v___y_720_, 1);
lean_inc(v_snd_721_);
v_fst_722_ = lean_ctor_get(v___y_720_, 0);
lean_inc(v_fst_722_);
lean_dec_ref(v___y_720_);
v_mctx_723_ = lean_ctor_get(v_snd_721_, 1);
lean_inc_ref(v_mctx_723_);
lean_dec(v_snd_721_);
v___x_724_ = lean_unbox(v_fst_722_);
lean_dec(v_fst_722_);
v_fst_701_ = v___x_724_;
v_mctx_702_ = v_mctx_723_;
goto v___jp_700_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object* v_e_732_, lean_object* v_fvarId_733_, lean_object* v___y_734_, lean_object* v___y_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_732_, v_fvarId_733_, v___y_734_);
lean_dec(v___y_734_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object* v_e_737_, lean_object* v_fvarId_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_737_, v_fvarId_738_, v___y_740_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object* v_e_745_, lean_object* v_fvarId_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(v_e_745_, v_fvarId_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object* v_k_753_, lean_object* v_b_754_, lean_object* v_c_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v___x_761_; 
lean_inc(v___y_759_);
lean_inc_ref(v___y_758_);
lean_inc(v___y_757_);
lean_inc_ref(v___y_756_);
v___x_761_ = lean_apply_7(v_k_753_, v_b_754_, v_c_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, lean_box(0));
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object* v_k_762_, lean_object* v_b_763_, lean_object* v_c_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(v_k_762_, v_b_763_, v_c_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object* v_e_771_, lean_object* v_k_772_, uint8_t v_cleanupAnnotations_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
lean_object* v___f_779_; uint8_t v___x_780_; uint8_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___f_779_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_779_, 0, v_k_772_);
v___x_780_ = 1;
v___x_781_ = 0;
v___x_782_ = lean_box(0);
v___x_783_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_771_, v___x_780_, v___x_781_, v___x_780_, v___x_781_, v___x_782_, v___f_779_, v_cleanupAnnotations_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_783_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_783_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
else
{
lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_799_; 
v_a_792_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_799_ == 0)
{
v___x_794_ = v___x_783_;
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_783_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_797_; 
if (v_isShared_795_ == 0)
{
v___x_797_ = v___x_794_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_a_792_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object* v_e_800_, lean_object* v_k_801_, lean_object* v_cleanupAnnotations_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_808_; lean_object* v_res_809_; 
v_cleanupAnnotations_boxed_808_ = lean_unbox(v_cleanupAnnotations_802_);
v_res_809_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_800_, v_k_801_, v_cleanupAnnotations_boxed_808_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object* v_00_u03b1_810_, lean_object* v_e_811_, lean_object* v_k_812_, uint8_t v_cleanupAnnotations_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
lean_object* v___x_819_; 
v___x_819_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_811_, v_k_812_, v_cleanupAnnotations_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object* v_00_u03b1_820_, lean_object* v_e_821_, lean_object* v_k_822_, lean_object* v_cleanupAnnotations_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_829_; lean_object* v_res_830_; 
v_cleanupAnnotations_boxed_829_ = lean_unbox(v_cleanupAnnotations_823_);
v_res_830_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(v_00_u03b1_820_, v_e_821_, v_k_822_, v_cleanupAnnotations_boxed_829_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object* v_upperBound_831_, lean_object* v_xs_832_, lean_object* v_next_833_, lean_object* v_a_834_, lean_object* v_b_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_a_842_; uint8_t v___x_846_; 
v___x_846_ = lean_nat_dec_lt(v_a_834_, v_upperBound_831_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; 
lean_dec(v_a_834_);
v___x_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_847_, 0, v_b_835_);
return v___x_847_;
}
else
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_array_fget_borrowed(v_xs_832_, v_a_834_);
lean_inc(v___y_839_);
lean_inc_ref(v___y_838_);
lean_inc(v___y_837_);
lean_inc_ref(v___y_836_);
lean_inc(v___x_848_);
v___x_849_ = lean_infer_type(v___x_848_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_a_850_);
lean_dec_ref_known(v___x_849_, 1);
v___x_851_ = lean_array_fget_borrowed(v_xs_832_, v_next_833_);
v___x_852_ = l_Lean_Expr_fvarId_x21(v___x_851_);
v___x_853_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_a_850_, v___x_852_, v___y_837_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v_a_854_; uint8_t v___x_855_; 
v_a_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc(v_a_854_);
lean_dec_ref_known(v___x_853_, 1);
v___x_855_ = lean_unbox(v_a_854_);
lean_dec(v_a_854_);
if (v___x_855_ == 0)
{
v_a_842_ = v_b_835_;
goto v___jp_841_;
}
else
{
lean_object* v___x_856_; 
lean_inc(v_a_834_);
v___x_856_ = lean_array_push(v_b_835_, v_a_834_);
v_a_842_ = v___x_856_;
goto v___jp_841_;
}
}
else
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
lean_dec_ref(v_b_835_);
lean_dec(v_a_834_);
v_a_857_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_853_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_853_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_857_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
lean_dec_ref(v_b_835_);
lean_dec(v_a_834_);
v_a_865_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_849_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_849_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
v___jp_841_:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = lean_unsigned_to_nat(1u);
v___x_844_ = lean_nat_add(v_a_834_, v___x_843_);
lean_dec(v_a_834_);
v_a_834_ = v___x_844_;
v_b_835_ = v_a_842_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object* v_upperBound_873_, lean_object* v_xs_874_, lean_object* v_next_875_, lean_object* v_a_876_, lean_object* v_b_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_873_, v_xs_874_, v_next_875_, v_a_876_, v_b_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v_next_875_);
lean_dec_ref(v_xs_874_);
lean_dec(v_upperBound_873_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object* v_upperBound_886_, lean_object* v___x_887_, lean_object* v_xs_888_, lean_object* v_a_889_, lean_object* v_b_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
uint8_t v___x_896_; 
v___x_896_ = lean_nat_dec_lt(v_a_889_, v_upperBound_886_);
if (v___x_896_ == 0)
{
lean_object* v___x_897_; 
lean_dec(v_a_889_);
v___x_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_897_, 0, v_b_890_);
return v___x_897_;
}
else
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_898_ = lean_unsigned_to_nat(1u);
v___x_899_ = lean_nat_add(v_a_889_, v___x_898_);
v___x_900_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0));
lean_inc(v___x_899_);
v___x_901_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v___x_887_, v_xs_888_, v_a_889_, v___x_899_, v___x_900_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
lean_dec(v_a_889_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v___x_903_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
v___x_903_ = lean_array_push(v_b_890_, v_a_902_);
v_a_889_ = v___x_899_;
v_b_890_ = v___x_903_;
goto _start;
}
else
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_912_; 
lean_dec(v___x_899_);
lean_dec_ref(v_b_890_);
v_a_905_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_912_ == 0)
{
v___x_907_ = v___x_901_;
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_901_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_910_; 
if (v_isShared_908_ == 0)
{
v___x_910_ = v___x_907_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_905_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object* v_upperBound_913_, lean_object* v___x_914_, lean_object* v_xs_915_, lean_object* v_a_916_, lean_object* v_b_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_913_, v___x_914_, v_xs_915_, v_a_916_, v_b_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec_ref(v_xs_915_);
lean_dec(v___x_914_);
lean_dec(v_upperBound_913_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object* v_xs_926_, lean_object* v_x_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v_revDeps_935_; lean_object* v___x_936_; 
v___x_933_ = lean_array_get_size(v_xs_926_);
v___x_934_ = lean_unsigned_to_nat(0u);
v_revDeps_935_ = ((lean_object*)(l_Lean_Elab_getParamRevDeps___lam__0___closed__0));
v___x_936_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v___x_933_, v___x_933_, v_xs_926_, v___x_934_, v_revDeps_935_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object* v_xs_937_, lean_object* v_x_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_Elab_getParamRevDeps___lam__0(v_xs_937_, v_x_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec_ref(v_x_938_);
lean_dec_ref(v_xs_937_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object* v_value_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_){
_start:
{
lean_object* v___f_952_; uint8_t v___x_953_; lean_object* v___x_954_; 
v___f_952_ = ((lean_object*)(l_Lean_Elab_getParamRevDeps___closed__0));
v___x_953_ = 1;
v___x_954_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_946_, v___f_952_, v___x_953_, v_a_947_, v_a_948_, v_a_949_, v_a_950_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object* v_value_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lean_Elab_getParamRevDeps(v_value_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object* v_upperBound_962_, lean_object* v_xs_963_, lean_object* v_next_964_, lean_object* v_inst_965_, lean_object* v_R_966_, lean_object* v_a_967_, lean_object* v_b_968_, lean_object* v_c_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_962_, v_xs_963_, v_next_964_, v_a_967_, v_b_968_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object* v_upperBound_976_, lean_object* v_xs_977_, lean_object* v_next_978_, lean_object* v_inst_979_, lean_object* v_R_980_, lean_object* v_a_981_, lean_object* v_b_982_, lean_object* v_c_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(v_upperBound_976_, v_xs_977_, v_next_978_, v_inst_979_, v_R_980_, v_a_981_, v_b_982_, v_c_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v_next_978_);
lean_dec_ref(v_xs_977_);
lean_dec(v_upperBound_976_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object* v_upperBound_990_, lean_object* v___x_991_, lean_object* v_xs_992_, lean_object* v_inst_993_, lean_object* v_R_994_, lean_object* v_a_995_, lean_object* v_b_996_, lean_object* v_c_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_990_, v___x_991_, v_xs_992_, v_a_995_, v_b_996_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object* v_upperBound_1004_, lean_object* v___x_1005_, lean_object* v_xs_1006_, lean_object* v_inst_1007_, lean_object* v_R_1008_, lean_object* v_a_1009_, lean_object* v_b_1010_, lean_object* v_c_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(v_upperBound_1004_, v___x_1005_, v_xs_1006_, v_inst_1007_, v_R_1008_, v_a_1009_, v_b_1010_, v_c_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec_ref(v_xs_1006_);
lean_dec(v___x_1005_);
lean_dec(v_upperBound_1004_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object* v_msg_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v___f_1025_; lean_object* v___x_27187__overap_1026_; lean_object* v___x_1027_; 
v___f_1025_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_27187__overap_1026_ = lean_panic_fn_borrowed(v___f_1025_, v_msg_1019_);
lean_inc(v___y_1023_);
lean_inc_ref(v___y_1022_);
lean_inc(v___y_1021_);
lean_inc_ref(v___y_1020_);
v___x_1027_ = lean_apply_5(v___x_27187__overap_1026_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, lean_box(0));
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object* v_msg_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v_msg_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t v_sz_1035_, size_t v_i_1036_, lean_object* v_bs_1037_){
_start:
{
uint8_t v___x_1038_; 
v___x_1038_ = lean_usize_dec_lt(v_i_1036_, v_sz_1035_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; 
v___x_1039_ = l_unsafeCast___redArg(v_bs_1037_);
lean_dec_ref(v_bs_1037_);
return v___x_1039_;
}
else
{
lean_object* v_v_1040_; lean_object* v___x_1041_; lean_object* v_bs_x27_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; size_t v___x_1045_; size_t v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v_v_1040_ = lean_array_uget(v_bs_1037_, v_i_1036_);
v___x_1041_ = lean_unsigned_to_nat(0u);
v_bs_x27_1042_ = lean_array_uset(v_bs_1037_, v_i_1036_, v___x_1041_);
v___x_1043_ = l_unsafeCast___redArg(v_v_1040_);
lean_dec(v_v_1040_);
v___x_1044_ = lean_array_get_size(v___x_1043_);
lean_dec(v___x_1043_);
v___x_1045_ = ((size_t)1ULL);
v___x_1046_ = lean_usize_add(v_i_1036_, v___x_1045_);
v___x_1047_ = l_unsafeCast___redArg(v___x_1044_);
v___x_1048_ = lean_array_uset(v_bs_x27_1042_, v_i_1036_, v___x_1047_);
v_i_1036_ = v___x_1046_;
v_bs_1037_ = v___x_1048_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object* v_sz_1050_, lean_object* v_i_1051_, lean_object* v_bs_1052_){
_start:
{
size_t v_sz_boxed_1053_; size_t v_i_boxed_1054_; lean_object* v_res_1055_; 
v_sz_boxed_1053_ = lean_unbox_usize(v_sz_1050_);
lean_dec(v_sz_1050_);
v_i_boxed_1054_ = lean_unbox_usize(v_i_1051_);
lean_dec(v_i_1051_);
v_res_1055_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_boxed_1053_, v_i_boxed_1054_, v_bs_1052_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t v_sz_1056_, size_t v_i_1057_, lean_object* v_bs_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
uint8_t v___x_1064_; 
v___x_1064_ = lean_usize_dec_lt(v_i_1057_, v_sz_1056_);
if (v___x_1064_ == 0)
{
lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1065_ = l_unsafeCast___redArg(v_bs_1058_);
lean_dec_ref(v_bs_1058_);
v___x_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
return v___x_1066_;
}
else
{
lean_object* v_v_1067_; lean_object* v___x_1068_; lean_object* v_value_1069_; lean_object* v___x_1070_; lean_object* v_bs_x27_1071_; lean_object* v___x_1072_; 
v_v_1067_ = lean_array_uget_borrowed(v_bs_1058_, v_i_1057_);
v___x_1068_ = l_unsafeCast___redArg(v_v_1067_);
v_value_1069_ = lean_ctor_get(v___x_1068_, 7);
lean_inc_ref(v_value_1069_);
lean_dec(v___x_1068_);
v___x_1070_ = lean_unsigned_to_nat(0u);
v_bs_x27_1071_ = lean_array_uset(v_bs_1058_, v_i_1057_, v___x_1070_);
v___x_1072_ = l_Lean_Elab_getParamRevDeps(v_value_1069_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; size_t v___x_1074_; size_t v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_a_1073_);
lean_dec_ref_known(v___x_1072_, 1);
v___x_1074_ = ((size_t)1ULL);
v___x_1075_ = lean_usize_add(v_i_1057_, v___x_1074_);
v___x_1076_ = l_unsafeCast___redArg(v_a_1073_);
lean_dec(v_a_1073_);
v___x_1077_ = lean_array_uset(v_bs_x27_1071_, v_i_1057_, v___x_1076_);
v_i_1057_ = v___x_1075_;
v_bs_1058_ = v___x_1077_;
goto _start;
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
lean_dec_ref(v_bs_x27_1071_);
v_a_1079_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1072_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1072_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object* v_sz_1087_, lean_object* v_i_1088_, lean_object* v_bs_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
size_t v_sz_boxed_1095_; size_t v_i_boxed_1096_; lean_object* v_res_1097_; 
v_sz_boxed_1095_ = lean_unbox_usize(v_sz_1087_);
lean_dec(v_sz_1087_);
v_i_boxed_1096_ = lean_unbox_usize(v_i_1088_);
lean_dec(v_i_1088_);
v_res_1097_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_boxed_1095_, v_i_boxed_1096_, v_bs_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
lean_dec(v___y_1093_);
lean_dec_ref(v___y_1092_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object* v_msgData_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_){
_start:
{
lean_object* v___x_1104_; lean_object* v_env_1105_; lean_object* v___x_1106_; lean_object* v_toCold_1107_; lean_object* v_mctx_1108_; lean_object* v_lctx_1109_; lean_object* v_options_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1104_ = lean_st_ref_get(v___y_1102_);
v_env_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc_ref(v_env_1105_);
lean_dec(v___x_1104_);
v___x_1106_ = lean_st_ref_get(v___y_1100_);
v_toCold_1107_ = lean_ctor_get(v___y_1101_, 0);
v_mctx_1108_ = lean_ctor_get(v___x_1106_, 0);
lean_inc_ref(v_mctx_1108_);
lean_dec(v___x_1106_);
v_lctx_1109_ = lean_ctor_get(v___y_1099_, 2);
v_options_1110_ = lean_ctor_get(v_toCold_1107_, 2);
lean_inc_ref(v_options_1110_);
lean_inc_ref(v_lctx_1109_);
v___x_1111_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1111_, 0, v_env_1105_);
lean_ctor_set(v___x_1111_, 1, v_mctx_1108_);
lean_ctor_set(v___x_1111_, 2, v_lctx_1109_);
lean_ctor_set(v___x_1111_, 3, v_options_1110_);
v___x_1112_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
lean_ctor_set(v___x_1112_, 1, v_msgData_1098_);
v___x_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object* v_msgData_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msgData_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
return v_res_1120_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1121_; double v___x_1122_; 
v___x_1121_ = lean_unsigned_to_nat(0u);
v___x_1122_ = lean_float_of_nat(v___x_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object* v_cls_1126_, lean_object* v_msg_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v_ref_1133_; lean_object* v___x_1134_; lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1179_; 
v_ref_1133_ = lean_ctor_get(v___y_1130_, 2);
v___x_1134_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msg_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1137_ = v___x_1134_;
v_isShared_1138_ = v_isSharedCheck_1179_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1134_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1179_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1139_; lean_object* v_traceState_1140_; lean_object* v_env_1141_; lean_object* v_nextMacroScope_1142_; lean_object* v_ngen_1143_; lean_object* v_auxDeclNGen_1144_; lean_object* v_cache_1145_; lean_object* v_messages_1146_; lean_object* v_infoState_1147_; lean_object* v_snapshotTasks_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1178_; 
v___x_1139_ = lean_st_ref_take(v___y_1131_);
v_traceState_1140_ = lean_ctor_get(v___x_1139_, 4);
v_env_1141_ = lean_ctor_get(v___x_1139_, 0);
v_nextMacroScope_1142_ = lean_ctor_get(v___x_1139_, 1);
v_ngen_1143_ = lean_ctor_get(v___x_1139_, 2);
v_auxDeclNGen_1144_ = lean_ctor_get(v___x_1139_, 3);
v_cache_1145_ = lean_ctor_get(v___x_1139_, 5);
v_messages_1146_ = lean_ctor_get(v___x_1139_, 6);
v_infoState_1147_ = lean_ctor_get(v___x_1139_, 7);
v_snapshotTasks_1148_ = lean_ctor_get(v___x_1139_, 8);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1150_ = v___x_1139_;
v_isShared_1151_ = v_isSharedCheck_1178_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_snapshotTasks_1148_);
lean_inc(v_infoState_1147_);
lean_inc(v_messages_1146_);
lean_inc(v_cache_1145_);
lean_inc(v_traceState_1140_);
lean_inc(v_auxDeclNGen_1144_);
lean_inc(v_ngen_1143_);
lean_inc(v_nextMacroScope_1142_);
lean_inc(v_env_1141_);
lean_dec(v___x_1139_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1178_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
uint64_t v_tid_1152_; lean_object* v_traces_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1177_; 
v_tid_1152_ = lean_ctor_get_uint64(v_traceState_1140_, sizeof(void*)*1);
v_traces_1153_ = lean_ctor_get(v_traceState_1140_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v_traceState_1140_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1155_ = v_traceState_1140_;
v_isShared_1156_ = v_isSharedCheck_1177_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_traces_1153_);
lean_dec(v_traceState_1140_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1177_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; double v___x_1159_; uint8_t v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1168_; 
v___x_1157_ = lean_box(0);
v___x_1158_ = lean_box(0);
v___x_1159_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0);
v___x_1160_ = 0;
v___x_1161_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1));
v___x_1162_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1162_, 0, v_cls_1126_);
lean_ctor_set(v___x_1162_, 1, v___x_1158_);
lean_ctor_set(v___x_1162_, 2, v___x_1161_);
lean_ctor_set_float(v___x_1162_, sizeof(void*)*3, v___x_1159_);
lean_ctor_set_float(v___x_1162_, sizeof(void*)*3 + 8, v___x_1159_);
lean_ctor_set_uint8(v___x_1162_, sizeof(void*)*3 + 16, v___x_1160_);
v___x_1163_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2));
v___x_1164_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1162_);
lean_ctor_set(v___x_1164_, 1, v_a_1135_);
lean_ctor_set(v___x_1164_, 2, v___x_1163_);
lean_inc(v_ref_1133_);
v___x_1165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1165_, 0, v_ref_1133_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
v___x_1166_ = l_Lean_PersistentArray_push___redArg(v_traces_1153_, v___x_1165_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 0, v___x_1166_);
v___x_1168_ = v___x_1155_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v___x_1166_);
lean_ctor_set_uint64(v_reuseFailAlloc_1176_, sizeof(void*)*1, v_tid_1152_);
v___x_1168_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
lean_object* v___x_1170_; 
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 4, v___x_1168_);
v___x_1170_ = v___x_1150_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_env_1141_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_nextMacroScope_1142_);
lean_ctor_set(v_reuseFailAlloc_1175_, 2, v_ngen_1143_);
lean_ctor_set(v_reuseFailAlloc_1175_, 3, v_auxDeclNGen_1144_);
lean_ctor_set(v_reuseFailAlloc_1175_, 4, v___x_1168_);
lean_ctor_set(v_reuseFailAlloc_1175_, 5, v_cache_1145_);
lean_ctor_set(v_reuseFailAlloc_1175_, 6, v_messages_1146_);
lean_ctor_set(v_reuseFailAlloc_1175_, 7, v_infoState_1147_);
lean_ctor_set(v_reuseFailAlloc_1175_, 8, v_snapshotTasks_1148_);
v___x_1170_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1171_; lean_object* v___x_1173_; 
v___x_1171_ = lean_st_ref_put(v___y_1131_, v___x_1170_);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 0, v___x_1157_);
v___x_1173_ = v___x_1137_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v___x_1157_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object* v_cls_1180_, lean_object* v_msg_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v_cls_1180_, v_msg_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_object* v_00_u03b1_1188_, lean_object* v_x_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1195_ = lean_apply_1(v_x_1189_, lean_box(0));
v___x_1196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0___boxed(lean_object* v_00_u03b1_1197_, lean_object* v_x_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(v_00_u03b1_1197_, v_x_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(lean_object* v_x_1205_, lean_object* v_x_1206_){
_start:
{
if (lean_obj_tag(v_x_1206_) == 0)
{
return v_x_1205_;
}
else
{
lean_object* v_key_1207_; lean_object* v_value_1208_; lean_object* v_tail_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1232_; 
v_key_1207_ = lean_ctor_get(v_x_1206_, 0);
v_value_1208_ = lean_ctor_get(v_x_1206_, 1);
v_tail_1209_ = lean_ctor_get(v_x_1206_, 2);
v_isSharedCheck_1232_ = !lean_is_exclusive(v_x_1206_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1211_ = v_x_1206_;
v_isShared_1212_ = v_isSharedCheck_1232_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_tail_1209_);
lean_inc(v_value_1208_);
lean_inc(v_key_1207_);
lean_dec(v_x_1206_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1232_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1213_; uint64_t v___x_1214_; uint64_t v___x_1215_; uint64_t v___x_1216_; uint64_t v_fold_1217_; uint64_t v___x_1218_; uint64_t v___x_1219_; uint64_t v___x_1220_; size_t v___x_1221_; size_t v___x_1222_; size_t v___x_1223_; size_t v___x_1224_; size_t v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1228_; 
v___x_1213_ = lean_array_get_size(v_x_1205_);
v___x_1214_ = l_Lean_ExprStructEq_hash(v_key_1207_);
v___x_1215_ = 32ULL;
v___x_1216_ = lean_uint64_shift_right(v___x_1214_, v___x_1215_);
v_fold_1217_ = lean_uint64_xor(v___x_1214_, v___x_1216_);
v___x_1218_ = 16ULL;
v___x_1219_ = lean_uint64_shift_right(v_fold_1217_, v___x_1218_);
v___x_1220_ = lean_uint64_xor(v_fold_1217_, v___x_1219_);
v___x_1221_ = lean_uint64_to_usize(v___x_1220_);
v___x_1222_ = lean_usize_of_nat(v___x_1213_);
v___x_1223_ = ((size_t)1ULL);
v___x_1224_ = lean_usize_sub(v___x_1222_, v___x_1223_);
v___x_1225_ = lean_usize_land(v___x_1221_, v___x_1224_);
v___x_1226_ = lean_array_uget_borrowed(v_x_1205_, v___x_1225_);
lean_inc(v___x_1226_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 2, v___x_1226_);
v___x_1228_ = v___x_1211_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_key_1207_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_value_1208_);
lean_ctor_set(v_reuseFailAlloc_1231_, 2, v___x_1226_);
v___x_1228_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
lean_object* v___x_1229_; 
v___x_1229_ = lean_array_uset(v_x_1205_, v___x_1225_, v___x_1228_);
v_x_1205_ = v___x_1229_;
v_x_1206_ = v_tail_1209_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(lean_object* v_i_1233_, lean_object* v_source_1234_, lean_object* v_target_1235_){
_start:
{
lean_object* v___x_1236_; uint8_t v___x_1237_; 
v___x_1236_ = lean_array_get_size(v_source_1234_);
v___x_1237_ = lean_nat_dec_lt(v_i_1233_, v___x_1236_);
if (v___x_1237_ == 0)
{
lean_dec_ref(v_source_1234_);
lean_dec(v_i_1233_);
return v_target_1235_;
}
else
{
lean_object* v_es_1238_; lean_object* v___x_1239_; lean_object* v_source_1240_; lean_object* v_target_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v_es_1238_ = lean_array_fget(v_source_1234_, v_i_1233_);
v___x_1239_ = lean_box(0);
v_source_1240_ = lean_array_fset(v_source_1234_, v_i_1233_, v___x_1239_);
v_target_1241_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_target_1235_, v_es_1238_);
v___x_1242_ = lean_unsigned_to_nat(1u);
v___x_1243_ = lean_nat_add(v_i_1233_, v___x_1242_);
lean_dec(v_i_1233_);
v_i_1233_ = v___x_1243_;
v_source_1234_ = v_source_1240_;
v_target_1235_ = v_target_1241_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(lean_object* v_data_1245_){
_start:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v_nbuckets_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1246_ = lean_array_get_size(v_data_1245_);
v___x_1247_ = lean_unsigned_to_nat(2u);
v_nbuckets_1248_ = lean_nat_mul(v___x_1246_, v___x_1247_);
v___x_1249_ = lean_unsigned_to_nat(0u);
v___x_1250_ = lean_box(0);
v___x_1251_ = lean_mk_array(v_nbuckets_1248_, v___x_1250_);
v___x_1252_ = lean_array_propagate_mark(v_data_1245_, v___x_1251_);
v___x_1253_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v___x_1249_, v_data_1245_, v___x_1252_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(lean_object* v_a_1254_, lean_object* v_b_1255_, lean_object* v_x_1256_){
_start:
{
if (lean_obj_tag(v_x_1256_) == 0)
{
lean_dec(v_b_1255_);
lean_dec_ref(v_a_1254_);
return v_x_1256_;
}
else
{
lean_object* v_key_1257_; lean_object* v_value_1258_; lean_object* v_tail_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1271_; 
v_key_1257_ = lean_ctor_get(v_x_1256_, 0);
v_value_1258_ = lean_ctor_get(v_x_1256_, 1);
v_tail_1259_ = lean_ctor_get(v_x_1256_, 2);
v_isSharedCheck_1271_ = !lean_is_exclusive(v_x_1256_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1261_ = v_x_1256_;
v_isShared_1262_ = v_isSharedCheck_1271_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_tail_1259_);
lean_inc(v_value_1258_);
lean_inc(v_key_1257_);
lean_dec(v_x_1256_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1271_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
uint8_t v___x_1263_; 
v___x_1263_ = l_Lean_ExprStructEq_beq(v_key_1257_, v_a_1254_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; lean_object* v___x_1266_; 
v___x_1264_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1254_, v_b_1255_, v_tail_1259_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 2, v___x_1264_);
v___x_1266_ = v___x_1261_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_key_1257_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v_value_1258_);
lean_ctor_set(v_reuseFailAlloc_1267_, 2, v___x_1264_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
else
{
lean_object* v___x_1269_; 
lean_dec(v_value_1258_);
lean_dec(v_key_1257_);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 1, v_b_1255_);
lean_ctor_set(v___x_1261_, 0, v_a_1254_);
v___x_1269_ = v___x_1261_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1254_);
lean_ctor_set(v_reuseFailAlloc_1270_, 1, v_b_1255_);
lean_ctor_set(v_reuseFailAlloc_1270_, 2, v_tail_1259_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(lean_object* v_a_1272_, lean_object* v_x_1273_){
_start:
{
if (lean_obj_tag(v_x_1273_) == 0)
{
uint8_t v___x_1274_; 
v___x_1274_ = 0;
return v___x_1274_;
}
else
{
lean_object* v_key_1275_; lean_object* v_tail_1276_; uint8_t v___x_1277_; 
v_key_1275_ = lean_ctor_get(v_x_1273_, 0);
v_tail_1276_ = lean_ctor_get(v_x_1273_, 2);
v___x_1277_ = l_Lean_ExprStructEq_beq(v_key_1275_, v_a_1272_);
if (v___x_1277_ == 0)
{
v_x_1273_ = v_tail_1276_;
goto _start;
}
else
{
return v___x_1277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg___boxed(lean_object* v_a_1279_, lean_object* v_x_1280_){
_start:
{
uint8_t v_res_1281_; lean_object* v_r_1282_; 
v_res_1281_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1279_, v_x_1280_);
lean_dec(v_x_1280_);
lean_dec_ref(v_a_1279_);
v_r_1282_ = lean_box(v_res_1281_);
return v_r_1282_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(lean_object* v_m_1283_, lean_object* v_a_1284_, lean_object* v_b_1285_){
_start:
{
lean_object* v_size_1286_; lean_object* v_buckets_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1330_; 
v_size_1286_ = lean_ctor_get(v_m_1283_, 0);
v_buckets_1287_ = lean_ctor_get(v_m_1283_, 1);
v_isSharedCheck_1330_ = !lean_is_exclusive(v_m_1283_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1289_ = v_m_1283_;
v_isShared_1290_ = v_isSharedCheck_1330_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_buckets_1287_);
lean_inc(v_size_1286_);
lean_dec(v_m_1283_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1330_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1291_; uint64_t v___x_1292_; uint64_t v___x_1293_; uint64_t v___x_1294_; uint64_t v_fold_1295_; uint64_t v___x_1296_; uint64_t v___x_1297_; uint64_t v___x_1298_; size_t v___x_1299_; size_t v___x_1300_; size_t v___x_1301_; size_t v___x_1302_; size_t v___x_1303_; lean_object* v_bkt_1304_; uint8_t v___x_1305_; 
v___x_1291_ = lean_array_get_size(v_buckets_1287_);
v___x_1292_ = l_Lean_ExprStructEq_hash(v_a_1284_);
v___x_1293_ = 32ULL;
v___x_1294_ = lean_uint64_shift_right(v___x_1292_, v___x_1293_);
v_fold_1295_ = lean_uint64_xor(v___x_1292_, v___x_1294_);
v___x_1296_ = 16ULL;
v___x_1297_ = lean_uint64_shift_right(v_fold_1295_, v___x_1296_);
v___x_1298_ = lean_uint64_xor(v_fold_1295_, v___x_1297_);
v___x_1299_ = lean_uint64_to_usize(v___x_1298_);
v___x_1300_ = lean_usize_of_nat(v___x_1291_);
v___x_1301_ = ((size_t)1ULL);
v___x_1302_ = lean_usize_sub(v___x_1300_, v___x_1301_);
v___x_1303_ = lean_usize_land(v___x_1299_, v___x_1302_);
v_bkt_1304_ = lean_array_uget_borrowed(v_buckets_1287_, v___x_1303_);
v___x_1305_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1284_, v_bkt_1304_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; lean_object* v_size_x27_1307_; lean_object* v___x_1308_; lean_object* v_buckets_x27_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; uint8_t v___x_1315_; 
v___x_1306_ = lean_unsigned_to_nat(1u);
v_size_x27_1307_ = lean_nat_add(v_size_1286_, v___x_1306_);
lean_dec(v_size_1286_);
lean_inc(v_bkt_1304_);
v___x_1308_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1308_, 0, v_a_1284_);
lean_ctor_set(v___x_1308_, 1, v_b_1285_);
lean_ctor_set(v___x_1308_, 2, v_bkt_1304_);
v_buckets_x27_1309_ = lean_array_uset(v_buckets_1287_, v___x_1303_, v___x_1308_);
v___x_1310_ = lean_unsigned_to_nat(4u);
v___x_1311_ = lean_nat_mul(v_size_x27_1307_, v___x_1310_);
v___x_1312_ = lean_unsigned_to_nat(3u);
v___x_1313_ = lean_nat_div(v___x_1311_, v___x_1312_);
lean_dec(v___x_1311_);
v___x_1314_ = lean_array_get_size(v_buckets_x27_1309_);
v___x_1315_ = lean_nat_dec_le(v___x_1313_, v___x_1314_);
lean_dec(v___x_1313_);
if (v___x_1315_ == 0)
{
lean_object* v_val_1316_; lean_object* v___x_1318_; 
v_val_1316_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_buckets_x27_1309_);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 1, v_val_1316_);
lean_ctor_set(v___x_1289_, 0, v_size_x27_1307_);
v___x_1318_ = v___x_1289_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_size_x27_1307_);
lean_ctor_set(v_reuseFailAlloc_1319_, 1, v_val_1316_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
else
{
lean_object* v___x_1321_; 
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 1, v_buckets_x27_1309_);
lean_ctor_set(v___x_1289_, 0, v_size_x27_1307_);
v___x_1321_ = v___x_1289_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_size_x27_1307_);
lean_ctor_set(v_reuseFailAlloc_1322_, 1, v_buckets_x27_1309_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
else
{
lean_object* v___x_1323_; lean_object* v_buckets_x27_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1328_; 
lean_inc(v_bkt_1304_);
v___x_1323_ = lean_box(0);
v_buckets_x27_1324_ = lean_array_uset(v_buckets_1287_, v___x_1303_, v___x_1323_);
v___x_1325_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1284_, v_b_1285_, v_bkt_1304_);
v___x_1326_ = lean_array_uset(v_buckets_x27_1324_, v___x_1303_, v___x_1325_);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 1, v___x_1326_);
v___x_1328_ = v___x_1289_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_size_1286_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v___x_1326_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(lean_object* v_a_1331_, lean_object* v_e_1332_, lean_object* v_a_1333_){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1335_ = lean_st_ref_take(v_a_1331_);
v___x_1336_ = lean_box(0);
v___x_1337_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v___x_1335_, v_e_1332_, v_a_1333_);
v___x_1338_ = lean_st_ref_put(v_a_1331_, v___x_1337_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed(lean_object* v_a_1339_, lean_object* v_e_1340_, lean_object* v_a_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(v_a_1339_, v_e_1340_, v_a_1341_);
lean_dec(v_a_1339_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(lean_object* v_k_1344_, lean_object* v___y_1345_, lean_object* v_b_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_){
_start:
{
lean_object* v___x_1352_; 
lean_inc(v___y_1350_);
lean_inc_ref(v___y_1349_);
lean_inc(v___y_1348_);
lean_inc_ref(v___y_1347_);
lean_inc(v___y_1345_);
v___x_1352_ = lean_apply_7(v_k_1344_, v_b_1346_, v___y_1345_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, lean_box(0));
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed(lean_object* v_k_1353_, lean_object* v___y_1354_, lean_object* v_b_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v_res_1361_; 
v_res_1361_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(v_k_1353_, v___y_1354_, v_b_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
lean_dec(v___y_1354_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(lean_object* v_name_1362_, uint8_t v_bi_1363_, lean_object* v_type_1364_, lean_object* v_k_1365_, uint8_t v_kind_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v___f_1373_; lean_object* v___x_1374_; 
lean_inc(v___y_1367_);
v___f_1373_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1373_, 0, v_k_1365_);
lean_closure_set(v___f_1373_, 1, v___y_1367_);
v___x_1374_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1362_, v_bi_1363_, v_type_1364_, v___f_1373_, v_kind_1366_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
if (lean_obj_tag(v___x_1374_) == 0)
{
return v___x_1374_;
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
v_a_1375_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1374_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1374_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___boxed(lean_object* v_name_1383_, lean_object* v_bi_1384_, lean_object* v_type_1385_, lean_object* v_k_1386_, lean_object* v_kind_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
uint8_t v_bi_boxed_1394_; uint8_t v_kind_boxed_1395_; lean_object* v_res_1396_; 
v_bi_boxed_1394_ = lean_unbox(v_bi_1384_);
v_kind_boxed_1395_ = lean_unbox(v_kind_1387_);
v_res_1396_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_1383_, v_bi_boxed_1394_, v_type_1385_, v_k_1386_, v_kind_boxed_1395_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
lean_dec(v___y_1390_);
lean_dec_ref(v___y_1389_);
lean_dec(v___y_1388_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(lean_object* v___x_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v___x_1403_; 
v___x_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1397_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed(lean_object* v___x_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(v___x_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
lean_dec(v___y_1406_);
lean_dec_ref(v___y_1405_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object* v_name_1411_, lean_object* v_type_1412_, lean_object* v_val_1413_, lean_object* v_k_1414_, uint8_t v_nondep_1415_, uint8_t v_kind_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v___f_1423_; lean_object* v___x_1424_; 
lean_inc(v___y_1417_);
v___f_1423_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1423_, 0, v_k_1414_);
lean_closure_set(v___f_1423_, 1, v___y_1417_);
v___x_1424_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1411_, v_type_1412_, v_val_1413_, v___f_1423_, v_nondep_1415_, v_kind_1416_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
if (lean_obj_tag(v___x_1424_) == 0)
{
return v___x_1424_;
}
else
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1432_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1432_ == 0)
{
v___x_1427_ = v___x_1424_;
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1424_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1430_; 
if (v_isShared_1428_ == 0)
{
v___x_1430_ = v___x_1427_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_a_1425_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object* v_name_1433_, lean_object* v_type_1434_, lean_object* v_val_1435_, lean_object* v_k_1436_, lean_object* v_nondep_1437_, lean_object* v_kind_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
uint8_t v_nondep_boxed_1445_; uint8_t v_kind_boxed_1446_; lean_object* v_res_1447_; 
v_nondep_boxed_1445_ = lean_unbox(v_nondep_1437_);
v_kind_boxed_1446_ = lean_unbox(v_kind_1438_);
v_res_1447_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_1433_, v_type_1434_, v_val_1435_, v_k_1436_, v_nondep_boxed_1445_, v_kind_boxed_1446_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v___y_1439_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_object* v_00_u03b1_1448_, lean_object* v_x_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1455_ = lean_apply_1(v_x_1449_, lean_box(0));
v___x_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0___boxed(lean_object* v_00_u03b1_1457_, lean_object* v_x_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(v_00_u03b1_1457_, v_x_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
return v_res_1464_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3(void){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1470_ = l_Lean_maxRecDepthErrorMessage;
v___x_1471_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1471_, 0, v___x_1470_);
return v___x_1471_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4(void){
_start:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1472_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3);
v___x_1473_ = l_Lean_MessageData_ofFormat(v___x_1472_);
return v___x_1473_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1474_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4);
v___x_1475_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2));
v___x_1476_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1475_);
lean_ctor_set(v___x_1476_, 1, v___x_1474_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(lean_object* v_ref_1477_){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1479_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5);
v___x_1480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1480_, 0, v_ref_1477_);
lean_ctor_set(v___x_1480_, 1, v___x_1479_);
v___x_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___boxed(lean_object* v_ref_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1482_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(lean_object* v_x_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v___y_1493_; lean_object* v_toCold_1502_; lean_object* v_currRecDepth_1503_; lean_object* v_ref_1504_; uint8_t v_diag_1505_; uint8_t v_suppressElabErrors_1506_; lean_object* v_maxRecDepth_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; 
v_toCold_1502_ = lean_ctor_get(v___y_1489_, 0);
v_currRecDepth_1503_ = lean_ctor_get(v___y_1489_, 1);
v_ref_1504_ = lean_ctor_get(v___y_1489_, 2);
v_diag_1505_ = lean_ctor_get_uint8(v___y_1489_, sizeof(void*)*3);
v_suppressElabErrors_1506_ = lean_ctor_get_uint8(v___y_1489_, sizeof(void*)*3 + 1);
v_maxRecDepth_1512_ = lean_ctor_get(v_toCold_1502_, 3);
v___x_1513_ = lean_unsigned_to_nat(0u);
v___x_1514_ = lean_nat_dec_eq(v_maxRecDepth_1512_, v___x_1513_);
if (v___x_1514_ == 0)
{
uint8_t v___x_1515_; 
v___x_1515_ = lean_nat_dec_eq(v_currRecDepth_1503_, v_maxRecDepth_1512_);
if (v___x_1515_ == 0)
{
goto v___jp_1507_;
}
else
{
lean_object* v___x_1516_; 
lean_dec_ref(v_x_1485_);
lean_inc(v_ref_1504_);
v___x_1516_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1504_);
v___y_1493_ = v___x_1516_;
goto v___jp_1492_;
}
}
else
{
goto v___jp_1507_;
}
v___jp_1492_:
{
if (lean_obj_tag(v___y_1493_) == 0)
{
return v___y_1493_;
}
else
{
lean_object* v_a_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1501_; 
v_a_1494_ = lean_ctor_get(v___y_1493_, 0);
v_isSharedCheck_1501_ = !lean_is_exclusive(v___y_1493_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1496_ = v___y_1493_;
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_a_1494_);
lean_dec(v___y_1493_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1499_; 
if (v_isShared_1497_ == 0)
{
v___x_1499_ = v___x_1496_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v_a_1494_);
v___x_1499_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
return v___x_1499_;
}
}
}
}
v___jp_1507_:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1508_ = lean_unsigned_to_nat(1u);
v___x_1509_ = lean_nat_add(v_currRecDepth_1503_, v___x_1508_);
lean_inc(v_ref_1504_);
lean_inc_ref(v_toCold_1502_);
v___x_1510_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1510_, 0, v_toCold_1502_);
lean_ctor_set(v___x_1510_, 1, v___x_1509_);
lean_ctor_set(v___x_1510_, 2, v_ref_1504_);
lean_ctor_set_uint8(v___x_1510_, sizeof(void*)*3, v_diag_1505_);
lean_ctor_set_uint8(v___x_1510_, sizeof(void*)*3 + 1, v_suppressElabErrors_1506_);
lean_inc(v___y_1490_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v___y_1486_);
v___x_1511_ = lean_apply_6(v_x_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___x_1510_, v___y_1490_, lean_box(0));
v___y_1493_ = v___x_1511_;
goto v___jp_1492_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg___boxed(lean_object* v_x_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(lean_object* v_a_1525_, lean_object* v_x_1526_){
_start:
{
if (lean_obj_tag(v_x_1526_) == 0)
{
lean_object* v___x_1527_; 
v___x_1527_ = lean_box(0);
return v___x_1527_;
}
else
{
lean_object* v_key_1528_; lean_object* v_value_1529_; lean_object* v_tail_1530_; uint8_t v___x_1531_; 
v_key_1528_ = lean_ctor_get(v_x_1526_, 0);
v_value_1529_ = lean_ctor_get(v_x_1526_, 1);
v_tail_1530_ = lean_ctor_get(v_x_1526_, 2);
v___x_1531_ = l_Lean_ExprStructEq_beq(v_key_1528_, v_a_1525_);
if (v___x_1531_ == 0)
{
v_x_1526_ = v_tail_1530_;
goto _start;
}
else
{
lean_object* v___x_1533_; 
lean_inc(v_value_1529_);
v___x_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1533_, 0, v_value_1529_);
return v___x_1533_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg___boxed(lean_object* v_a_1534_, lean_object* v_x_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_1534_, v_x_1535_);
lean_dec(v_x_1535_);
lean_dec_ref(v_a_1534_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object* v_m_1537_, lean_object* v_a_1538_){
_start:
{
lean_object* v_buckets_1539_; lean_object* v___x_1540_; uint64_t v___x_1541_; uint64_t v___x_1542_; uint64_t v___x_1543_; uint64_t v_fold_1544_; uint64_t v___x_1545_; uint64_t v___x_1546_; uint64_t v___x_1547_; size_t v___x_1548_; size_t v___x_1549_; size_t v___x_1550_; size_t v___x_1551_; size_t v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v_buckets_1539_ = lean_ctor_get(v_m_1537_, 1);
v___x_1540_ = lean_array_get_size(v_buckets_1539_);
v___x_1541_ = l_Lean_ExprStructEq_hash(v_a_1538_);
v___x_1542_ = 32ULL;
v___x_1543_ = lean_uint64_shift_right(v___x_1541_, v___x_1542_);
v_fold_1544_ = lean_uint64_xor(v___x_1541_, v___x_1543_);
v___x_1545_ = 16ULL;
v___x_1546_ = lean_uint64_shift_right(v_fold_1544_, v___x_1545_);
v___x_1547_ = lean_uint64_xor(v_fold_1544_, v___x_1546_);
v___x_1548_ = lean_uint64_to_usize(v___x_1547_);
v___x_1549_ = lean_usize_of_nat(v___x_1540_);
v___x_1550_ = ((size_t)1ULL);
v___x_1551_ = lean_usize_sub(v___x_1549_, v___x_1550_);
v___x_1552_ = lean_usize_land(v___x_1548_, v___x_1551_);
v___x_1553_ = lean_array_uget_borrowed(v_buckets_1539_, v___x_1552_);
v___x_1554_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_1538_, v___x_1553_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object* v_m_1555_, lean_object* v_a_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_m_1555_, v_a_1556_);
lean_dec_ref(v_a_1556_);
lean_dec_ref(v_m_1555_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object* v_fvars_1558_, lean_object* v_pre_1559_, lean_object* v_post_1560_, lean_object* v_usedLetOnly_1561_, lean_object* v_skipConstInApp_1562_, lean_object* v_skipInstances_1563_, lean_object* v_body_1564_, lean_object* v_x_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_){
_start:
{
uint8_t v_usedLetOnly_boxed_1572_; uint8_t v_skipConstInApp_boxed_1573_; uint8_t v_skipInstances_boxed_1574_; lean_object* v_res_1575_; 
v_usedLetOnly_boxed_1572_ = lean_unbox(v_usedLetOnly_1561_);
v_skipConstInApp_boxed_1573_ = lean_unbox(v_skipConstInApp_1562_);
v_skipInstances_boxed_1574_ = lean_unbox(v_skipInstances_1563_);
v_res_1575_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(v_fvars_1558_, v_pre_1559_, v_post_1560_, v_usedLetOnly_boxed_1572_, v_skipConstInApp_boxed_1573_, v_skipInstances_boxed_1574_, v_body_1564_, v_x_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec(v___y_1566_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object* v_fvars_1579_, lean_object* v_pre_1580_, lean_object* v_post_1581_, uint8_t v_usedLetOnly_1582_, uint8_t v_skipConstInApp_1583_, uint8_t v_skipInstances_1584_, lean_object* v_body_1585_, lean_object* v_x_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1593_ = lean_array_push(v_fvars_1579_, v_x_1586_);
v___x_1594_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_1580_, v_post_1581_, v_usedLetOnly_1582_, v_skipConstInApp_1583_, v_skipInstances_1584_, v___x_1593_, v_body_1585_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object* v_fvars_1595_, lean_object* v_pre_1596_, lean_object* v_post_1597_, lean_object* v_usedLetOnly_1598_, lean_object* v_skipConstInApp_1599_, lean_object* v_skipInstances_1600_, lean_object* v_body_1601_, lean_object* v_x_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
uint8_t v_usedLetOnly_boxed_1609_; uint8_t v_skipConstInApp_boxed_1610_; uint8_t v_skipInstances_boxed_1611_; lean_object* v_res_1612_; 
v_usedLetOnly_boxed_1609_ = lean_unbox(v_usedLetOnly_1598_);
v_skipConstInApp_boxed_1610_ = lean_unbox(v_skipConstInApp_1599_);
v_skipInstances_boxed_1611_ = lean_unbox(v_skipInstances_1600_);
v_res_1612_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(v_fvars_1595_, v_pre_1596_, v_post_1597_, v_usedLetOnly_boxed_1609_, v_skipConstInApp_boxed_1610_, v_skipInstances_boxed_1611_, v_body_1601_, v_x_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object* v_pre_1613_, lean_object* v_post_1614_, uint8_t v_usedLetOnly_1615_, uint8_t v_skipConstInApp_1616_, uint8_t v_skipInstances_1617_, lean_object* v_e_1618_, lean_object* v_a_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_){
_start:
{
lean_object* v___x_1625_; 
lean_inc_ref(v_post_1614_);
lean_inc(v___y_1623_);
lean_inc_ref(v___y_1622_);
lean_inc(v___y_1621_);
lean_inc_ref(v___y_1620_);
lean_inc_ref(v_e_1618_);
v___x_1625_ = lean_apply_6(v_post_1614_, v_e_1618_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, lean_box(0));
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1644_; 
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1644_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1644_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
switch(lean_obj_tag(v_a_1626_))
{
case 0:
{
lean_object* v_e_1630_; lean_object* v___x_1632_; 
lean_dec_ref(v_e_1618_);
lean_dec_ref(v_post_1614_);
lean_dec_ref(v_pre_1613_);
v_e_1630_ = lean_ctor_get(v_a_1626_, 0);
lean_inc_ref(v_e_1630_);
lean_dec_ref_known(v_a_1626_, 1);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v_e_1630_);
v___x_1632_ = v___x_1628_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_e_1630_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
case 1:
{
lean_object* v_e_1634_; lean_object* v___x_1635_; 
lean_del_object(v___x_1628_);
lean_dec_ref(v_e_1618_);
v_e_1634_ = lean_ctor_get(v_a_1626_, 0);
lean_inc_ref(v_e_1634_);
lean_dec_ref_known(v_a_1626_, 1);
v___x_1635_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1613_, v_post_1614_, v_usedLetOnly_1615_, v_skipConstInApp_1616_, v_skipInstances_1617_, v_e_1634_, v_a_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
return v___x_1635_;
}
default: 
{
lean_object* v_e_x3f_1636_; 
lean_dec_ref(v_post_1614_);
lean_dec_ref(v_pre_1613_);
v_e_x3f_1636_ = lean_ctor_get(v_a_1626_, 0);
lean_inc(v_e_x3f_1636_);
lean_dec_ref_known(v_a_1626_, 1);
if (lean_obj_tag(v_e_x3f_1636_) == 0)
{
lean_object* v___x_1638_; 
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v_e_1618_);
v___x_1638_ = v___x_1628_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_e_1618_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
else
{
lean_object* v_val_1640_; lean_object* v___x_1642_; 
lean_dec_ref(v_e_1618_);
v_val_1640_ = lean_ctor_get(v_e_x3f_1636_, 0);
lean_inc(v_val_1640_);
lean_dec_ref_known(v_e_x3f_1636_, 1);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v_val_1640_);
v___x_1642_ = v___x_1628_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_val_1640_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
}
}
}
else
{
lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1652_; 
lean_dec_ref(v_e_1618_);
lean_dec_ref(v_post_1614_);
lean_dec_ref(v_pre_1613_);
v_a_1645_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1647_ = v___x_1625_;
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_dec(v___x_1625_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1650_; 
if (v_isShared_1648_ == 0)
{
v___x_1650_ = v___x_1647_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_a_1645_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object* v_pre_1653_, lean_object* v_post_1654_, uint8_t v_usedLetOnly_1655_, uint8_t v_skipConstInApp_1656_, uint8_t v_skipInstances_1657_, lean_object* v_fvars_1658_, lean_object* v_e_1659_, lean_object* v_a_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
if (lean_obj_tag(v_e_1659_) == 6)
{
lean_object* v_binderName_1666_; lean_object* v_binderType_1667_; lean_object* v_body_1668_; uint8_t v_binderInfo_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___f_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v_binderName_1666_ = lean_ctor_get(v_e_1659_, 0);
lean_inc(v_binderName_1666_);
v_binderType_1667_ = lean_ctor_get(v_e_1659_, 1);
lean_inc_ref(v_binderType_1667_);
v_body_1668_ = lean_ctor_get(v_e_1659_, 2);
lean_inc_ref(v_body_1668_);
v_binderInfo_1669_ = lean_ctor_get_uint8(v_e_1659_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1659_, 3);
v___x_1670_ = lean_box(v_usedLetOnly_1655_);
v___x_1671_ = lean_box(v_skipConstInApp_1656_);
v___x_1672_ = lean_box(v_skipInstances_1657_);
lean_inc_ref(v_post_1654_);
lean_inc_ref(v_pre_1653_);
lean_inc_ref(v_fvars_1658_);
v___f_1673_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1673_, 0, v_fvars_1658_);
lean_closure_set(v___f_1673_, 1, v_pre_1653_);
lean_closure_set(v___f_1673_, 2, v_post_1654_);
lean_closure_set(v___f_1673_, 3, v___x_1670_);
lean_closure_set(v___f_1673_, 4, v___x_1671_);
lean_closure_set(v___f_1673_, 5, v___x_1672_);
lean_closure_set(v___f_1673_, 6, v_body_1668_);
v___x_1674_ = lean_expr_instantiate_rev(v_binderType_1667_, v_fvars_1658_);
lean_dec_ref(v_fvars_1658_);
lean_dec_ref(v_binderType_1667_);
v___x_1675_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1653_, v_post_1654_, v_usedLetOnly_1655_, v_skipConstInApp_1656_, v_skipInstances_1657_, v___x_1674_, v_a_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
if (lean_obj_tag(v___x_1675_) == 0)
{
lean_object* v_a_1676_; uint8_t v___x_1677_; lean_object* v___x_1678_; 
v_a_1676_ = lean_ctor_get(v___x_1675_, 0);
lean_inc(v_a_1676_);
lean_dec_ref_known(v___x_1675_, 1);
v___x_1677_ = 0;
v___x_1678_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_1666_, v_binderInfo_1669_, v_a_1676_, v___f_1673_, v___x_1677_, v_a_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
return v___x_1678_;
}
else
{
lean_dec_ref(v___f_1673_);
lean_dec(v_binderName_1666_);
return v___x_1675_;
}
}
else
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1679_ = lean_expr_instantiate_rev(v_e_1659_, v_fvars_1658_);
lean_dec_ref(v_e_1659_);
lean_inc_ref(v_post_1654_);
lean_inc_ref(v_pre_1653_);
v___x_1680_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1653_, v_post_1654_, v_usedLetOnly_1655_, v_skipConstInApp_1656_, v_skipInstances_1657_, v___x_1679_, v_a_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v_a_1681_; uint8_t v___x_1682_; uint8_t v___x_1683_; uint8_t v___x_1684_; lean_object* v___x_1685_; 
v_a_1681_ = lean_ctor_get(v___x_1680_, 0);
lean_inc(v_a_1681_);
lean_dec_ref_known(v___x_1680_, 1);
v___x_1682_ = 0;
v___x_1683_ = 1;
v___x_1684_ = 1;
v___x_1685_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1658_, v_a_1681_, v___x_1682_, v_usedLetOnly_1655_, v___x_1682_, v___x_1683_, v___x_1684_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v_a_1686_; lean_object* v___x_1687_; 
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
lean_inc(v_a_1686_);
lean_dec_ref_known(v___x_1685_, 1);
v___x_1687_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1653_, v_post_1654_, v_usedLetOnly_1655_, v_skipConstInApp_1656_, v_skipInstances_1657_, v_a_1686_, v_a_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
return v___x_1687_;
}
else
{
lean_dec_ref(v_post_1654_);
lean_dec_ref(v_pre_1653_);
return v___x_1685_;
}
}
else
{
lean_dec_ref(v_fvars_1658_);
lean_dec_ref(v_post_1654_);
lean_dec_ref(v_pre_1653_);
return v___x_1680_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object* v_fvars_1688_, lean_object* v_pre_1689_, lean_object* v_post_1690_, uint8_t v_usedLetOnly_1691_, uint8_t v_skipConstInApp_1692_, uint8_t v_skipInstances_1693_, lean_object* v_body_1694_, lean_object* v_x_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1702_ = lean_array_push(v_fvars_1688_, v_x_1695_);
v___x_1703_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_1689_, v_post_1690_, v_usedLetOnly_1691_, v_skipConstInApp_1692_, v_skipInstances_1693_, v___x_1702_, v_body_1694_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object* v_fvars_1704_, lean_object* v_pre_1705_, lean_object* v_post_1706_, lean_object* v_usedLetOnly_1707_, lean_object* v_skipConstInApp_1708_, lean_object* v_skipInstances_1709_, lean_object* v_body_1710_, lean_object* v_x_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
uint8_t v_usedLetOnly_boxed_1718_; uint8_t v_skipConstInApp_boxed_1719_; uint8_t v_skipInstances_boxed_1720_; lean_object* v_res_1721_; 
v_usedLetOnly_boxed_1718_ = lean_unbox(v_usedLetOnly_1707_);
v_skipConstInApp_boxed_1719_ = lean_unbox(v_skipConstInApp_1708_);
v_skipInstances_boxed_1720_ = lean_unbox(v_skipInstances_1709_);
v_res_1721_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(v_fvars_1704_, v_pre_1705_, v_post_1706_, v_usedLetOnly_boxed_1718_, v_skipConstInApp_boxed_1719_, v_skipInstances_boxed_1720_, v_body_1710_, v_x_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec(v___y_1712_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object* v_pre_1722_, lean_object* v_post_1723_, uint8_t v_usedLetOnly_1724_, uint8_t v_skipConstInApp_1725_, uint8_t v_skipInstances_1726_, lean_object* v_fvars_1727_, lean_object* v_e_1728_, lean_object* v_a_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
if (lean_obj_tag(v_e_1728_) == 8)
{
lean_object* v_declName_1735_; lean_object* v_type_1736_; lean_object* v_value_1737_; lean_object* v_body_1738_; uint8_t v_nondep_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___f_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v_declName_1735_ = lean_ctor_get(v_e_1728_, 0);
lean_inc(v_declName_1735_);
v_type_1736_ = lean_ctor_get(v_e_1728_, 1);
lean_inc_ref(v_type_1736_);
v_value_1737_ = lean_ctor_get(v_e_1728_, 2);
lean_inc_ref(v_value_1737_);
v_body_1738_ = lean_ctor_get(v_e_1728_, 3);
lean_inc_ref(v_body_1738_);
v_nondep_1739_ = lean_ctor_get_uint8(v_e_1728_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1728_, 4);
v___x_1740_ = lean_box(v_usedLetOnly_1724_);
v___x_1741_ = lean_box(v_skipConstInApp_1725_);
v___x_1742_ = lean_box(v_skipInstances_1726_);
lean_inc_ref_n(v_post_1723_, 2);
lean_inc_ref_n(v_pre_1722_, 2);
lean_inc_ref(v_fvars_1727_);
v___f_1743_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1743_, 0, v_fvars_1727_);
lean_closure_set(v___f_1743_, 1, v_pre_1722_);
lean_closure_set(v___f_1743_, 2, v_post_1723_);
lean_closure_set(v___f_1743_, 3, v___x_1740_);
lean_closure_set(v___f_1743_, 4, v___x_1741_);
lean_closure_set(v___f_1743_, 5, v___x_1742_);
lean_closure_set(v___f_1743_, 6, v_body_1738_);
v___x_1744_ = lean_expr_instantiate_rev(v_type_1736_, v_fvars_1727_);
lean_dec_ref(v_type_1736_);
v___x_1745_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1722_, v_post_1723_, v_usedLetOnly_1724_, v_skipConstInApp_1725_, v_skipInstances_1726_, v___x_1744_, v_a_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1745_, 1);
v___x_1747_ = lean_expr_instantiate_rev(v_value_1737_, v_fvars_1727_);
lean_dec_ref(v_fvars_1727_);
lean_dec_ref(v_value_1737_);
v___x_1748_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1722_, v_post_1723_, v_usedLetOnly_1724_, v_skipConstInApp_1725_, v_skipInstances_1726_, v___x_1747_, v_a_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; uint8_t v___x_1750_; lean_object* v___x_1751_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
v___x_1750_ = 0;
v___x_1751_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_declName_1735_, v_a_1746_, v_a_1749_, v___f_1743_, v_nondep_1739_, v___x_1750_, v_a_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
return v___x_1751_;
}
else
{
lean_dec(v_a_1746_);
lean_dec_ref(v___f_1743_);
lean_dec(v_declName_1735_);
return v___x_1748_;
}
}
else
{
lean_dec_ref(v___f_1743_);
lean_dec_ref(v_value_1737_);
lean_dec(v_declName_1735_);
lean_dec_ref(v_fvars_1727_);
lean_dec_ref(v_post_1723_);
lean_dec_ref(v_pre_1722_);
return v___x_1745_;
}
}
else
{
lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = lean_expr_instantiate_rev(v_e_1728_, v_fvars_1727_);
lean_dec_ref(v_e_1728_);
lean_inc_ref(v_post_1723_);
lean_inc_ref(v_pre_1722_);
v___x_1753_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1722_, v_post_1723_, v_usedLetOnly_1724_, v_skipConstInApp_1725_, v_skipInstances_1726_, v___x_1752_, v_a_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; uint8_t v___x_1755_; uint8_t v___x_1756_; lean_object* v___x_1757_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___x_1753_, 1);
v___x_1755_ = 0;
v___x_1756_ = 1;
v___x_1757_ = l_Lean_Meta_mkLetFVars(v_fvars_1727_, v_a_1754_, v_usedLetOnly_1724_, v___x_1755_, v___x_1756_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_object* v_a_1758_; lean_object* v___x_1759_; 
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
lean_inc(v_a_1758_);
lean_dec_ref_known(v___x_1757_, 1);
v___x_1759_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1722_, v_post_1723_, v_usedLetOnly_1724_, v_skipConstInApp_1725_, v_skipInstances_1726_, v_a_1758_, v_a_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
return v___x_1759_;
}
else
{
lean_dec_ref(v_post_1723_);
lean_dec_ref(v_pre_1722_);
return v___x_1757_;
}
}
else
{
lean_dec_ref(v_fvars_1727_);
lean_dec_ref(v_post_1723_);
lean_dec_ref(v_pre_1722_);
return v___x_1753_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1760_ = lean_box(0);
v___x_1761_ = l_unsafeCast___redArg(v___x_1760_);
return v___x_1761_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1762_; lean_object* v_dummy_1763_; 
v___x_1762_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__1);
v_dummy_1763_ = l_Lean_Expr_sort___override(v___x_1762_);
return v_dummy_1763_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object* v_pre_1766_, lean_object* v_post_1767_, uint8_t v_usedLetOnly_1768_, uint8_t v_skipConstInApp_1769_, uint8_t v_skipInstances_1770_, size_t v_sz_1771_, size_t v_i_1772_, lean_object* v_bs_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_){
_start:
{
uint8_t v___x_1780_; 
v___x_1780_ = lean_usize_dec_lt(v_i_1772_, v_sz_1771_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; lean_object* v___x_1782_; 
lean_dec_ref(v_post_1767_);
lean_dec_ref(v_pre_1766_);
v___x_1781_ = l_unsafeCast___redArg(v_bs_1773_);
lean_dec_ref(v_bs_1773_);
v___x_1782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1781_);
return v___x_1782_;
}
else
{
lean_object* v_v_1783_; lean_object* v___x_1784_; lean_object* v_bs_x27_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v_v_1783_ = lean_array_uget(v_bs_1773_, v_i_1772_);
v___x_1784_ = lean_unsigned_to_nat(0u);
v_bs_x27_1785_ = lean_array_uset(v_bs_1773_, v_i_1772_, v___x_1784_);
v___x_1786_ = l_unsafeCast___redArg(v_v_1783_);
lean_dec(v_v_1783_);
lean_inc_ref(v_post_1767_);
lean_inc_ref(v_pre_1766_);
v___x_1787_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1766_, v_post_1767_, v_usedLetOnly_1768_, v_skipConstInApp_1769_, v_skipInstances_1770_, v___x_1786_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v_a_1788_; size_t v___x_1789_; size_t v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v_a_1788_ = lean_ctor_get(v___x_1787_, 0);
lean_inc(v_a_1788_);
lean_dec_ref_known(v___x_1787_, 1);
v___x_1789_ = ((size_t)1ULL);
v___x_1790_ = lean_usize_add(v_i_1772_, v___x_1789_);
v___x_1791_ = l_unsafeCast___redArg(v_a_1788_);
lean_dec(v_a_1788_);
v___x_1792_ = lean_array_uset(v_bs_x27_1785_, v_i_1772_, v___x_1791_);
v_i_1772_ = v___x_1790_;
v_bs_1773_ = v___x_1792_;
goto _start;
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
lean_dec_ref(v_bs_x27_1785_);
lean_dec_ref(v_post_1767_);
lean_dec_ref(v_pre_1766_);
v_a_1794_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1787_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1787_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1799_; 
if (v_isShared_1797_ == 0)
{
v___x_1799_ = v___x_1796_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1794_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object* v_pre_1802_, lean_object* v_post_1803_, lean_object* v_usedLetOnly_1804_, lean_object* v_skipConstInApp_1805_, lean_object* v_skipInstances_1806_, lean_object* v_sz_1807_, lean_object* v_i_1808_, lean_object* v_bs_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_){
_start:
{
uint8_t v_usedLetOnly_boxed_1816_; uint8_t v_skipConstInApp_boxed_1817_; uint8_t v_skipInstances_boxed_1818_; size_t v_sz_boxed_1819_; size_t v_i_boxed_1820_; lean_object* v_res_1821_; 
v_usedLetOnly_boxed_1816_ = lean_unbox(v_usedLetOnly_1804_);
v_skipConstInApp_boxed_1817_ = lean_unbox(v_skipConstInApp_1805_);
v_skipInstances_boxed_1818_ = lean_unbox(v_skipInstances_1806_);
v_sz_boxed_1819_ = lean_unbox_usize(v_sz_1807_);
lean_dec(v_sz_1807_);
v_i_boxed_1820_ = lean_unbox_usize(v_i_1808_);
lean_dec(v_i_1808_);
v_res_1821_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(v_pre_1802_, v_post_1803_, v_usedLetOnly_boxed_1816_, v_skipConstInApp_boxed_1817_, v_skipInstances_boxed_1818_, v_sz_boxed_1819_, v_i_boxed_1820_, v_bs_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
lean_dec(v___y_1812_);
lean_dec_ref(v___y_1811_);
lean_dec(v___y_1810_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(lean_object* v_pre_1822_, lean_object* v_post_1823_, uint8_t v_usedLetOnly_1824_, uint8_t v_skipConstInApp_1825_, uint8_t v_skipInstances_1826_, lean_object* v___x_1827_, lean_object* v___y_1828_, lean_object* v_b_1829_, lean_object* v_a_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
lean_object* v___x_1836_; 
v___x_1836_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1822_, v_post_1823_, v_usedLetOnly_1824_, v_skipConstInApp_1825_, v_skipInstances_1826_, v___x_1827_, v___y_1828_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1846_; 
v_a_1837_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1846_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1839_ = v___x_1836_;
v_isShared_1840_ = v_isSharedCheck_1846_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___x_1836_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1846_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1844_; 
v___x_1841_ = lean_array_fset(v_b_1829_, v_a_1830_, v_a_1837_);
v___x_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1841_);
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 0, v___x_1842_);
v___x_1844_ = v___x_1839_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v___x_1842_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
}
else
{
lean_object* v_a_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1854_; 
lean_dec_ref(v_b_1829_);
v_a_1847_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1849_ = v___x_1836_;
v_isShared_1850_ = v_isSharedCheck_1854_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_a_1847_);
lean_dec(v___x_1836_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1854_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1852_; 
if (v_isShared_1850_ == 0)
{
v___x_1852_ = v___x_1849_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_a_1847_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
return v___x_1852_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed(lean_object* v_pre_1855_, lean_object* v_post_1856_, lean_object* v_usedLetOnly_1857_, lean_object* v_skipConstInApp_1858_, lean_object* v_skipInstances_1859_, lean_object* v___x_1860_, lean_object* v___y_1861_, lean_object* v_b_1862_, lean_object* v_a_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_){
_start:
{
uint8_t v_usedLetOnly_boxed_1869_; uint8_t v_skipConstInApp_boxed_1870_; uint8_t v_skipInstances_boxed_1871_; lean_object* v_res_1872_; 
v_usedLetOnly_boxed_1869_ = lean_unbox(v_usedLetOnly_1857_);
v_skipConstInApp_boxed_1870_ = lean_unbox(v_skipConstInApp_1858_);
v_skipInstances_boxed_1871_ = lean_unbox(v_skipInstances_1859_);
v_res_1872_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(v_pre_1855_, v_post_1856_, v_usedLetOnly_boxed_1869_, v_skipConstInApp_boxed_1870_, v_skipInstances_boxed_1871_, v___x_1860_, v___y_1861_, v_b_1862_, v_a_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
lean_dec(v___y_1867_);
lean_dec_ref(v___y_1866_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
lean_dec(v_a_1863_);
lean_dec(v___y_1861_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(lean_object* v_upperBound_1873_, lean_object* v___x_1874_, lean_object* v_pre_1875_, lean_object* v_post_1876_, uint8_t v_usedLetOnly_1877_, uint8_t v_skipConstInApp_1878_, uint8_t v_skipInstances_1879_, lean_object* v_a_1880_, lean_object* v_b_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v___y_1889_; uint8_t v___x_1912_; 
v___x_1912_ = lean_nat_dec_lt(v_a_1880_, v_upperBound_1873_);
if (v___x_1912_ == 0)
{
lean_object* v___x_1913_; 
lean_dec(v_a_1880_);
lean_dec_ref(v_post_1876_);
lean_dec_ref(v_pre_1875_);
v___x_1913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1913_, 0, v_b_1881_);
return v___x_1913_;
}
else
{
lean_object* v___x_1914_; lean_object* v___x_1915_; uint8_t v___x_1916_; 
v___x_1914_ = lean_array_fget_borrowed(v_b_1881_, v_a_1880_);
v___x_1915_ = lean_array_get_size(v___x_1874_);
v___x_1916_ = lean_nat_dec_lt(v_a_1880_, v___x_1915_);
if (v___x_1916_ == 0)
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___f_1920_; 
lean_inc(v___x_1914_);
v___x_1917_ = lean_box(v_usedLetOnly_1877_);
v___x_1918_ = lean_box(v_skipConstInApp_1878_);
v___x_1919_ = lean_box(v_skipInstances_1879_);
lean_inc(v_a_1880_);
lean_inc(v___y_1882_);
lean_inc_ref(v_post_1876_);
lean_inc_ref(v_pre_1875_);
v___f_1920_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1920_, 0, v_pre_1875_);
lean_closure_set(v___f_1920_, 1, v_post_1876_);
lean_closure_set(v___f_1920_, 2, v___x_1917_);
lean_closure_set(v___f_1920_, 3, v___x_1918_);
lean_closure_set(v___f_1920_, 4, v___x_1919_);
lean_closure_set(v___f_1920_, 5, v___x_1914_);
lean_closure_set(v___f_1920_, 6, v___y_1882_);
lean_closure_set(v___f_1920_, 7, v_b_1881_);
lean_closure_set(v___f_1920_, 8, v_a_1880_);
v___y_1889_ = v___f_1920_;
goto v___jp_1888_;
}
else
{
lean_object* v___x_1921_; uint8_t v_isInstance_1922_; 
v___x_1921_ = lean_array_fget_borrowed(v___x_1874_, v_a_1880_);
v_isInstance_1922_ = lean_ctor_get_uint8(v___x_1921_, sizeof(void*)*1 + 4);
if (v_isInstance_1922_ == 0)
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___f_1926_; 
lean_inc(v___x_1914_);
v___x_1923_ = lean_box(v_usedLetOnly_1877_);
v___x_1924_ = lean_box(v_skipConstInApp_1878_);
v___x_1925_ = lean_box(v_skipInstances_1879_);
lean_inc(v_a_1880_);
lean_inc(v___y_1882_);
lean_inc_ref(v_post_1876_);
lean_inc_ref(v_pre_1875_);
v___f_1926_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1926_, 0, v_pre_1875_);
lean_closure_set(v___f_1926_, 1, v_post_1876_);
lean_closure_set(v___f_1926_, 2, v___x_1923_);
lean_closure_set(v___f_1926_, 3, v___x_1924_);
lean_closure_set(v___f_1926_, 4, v___x_1925_);
lean_closure_set(v___f_1926_, 5, v___x_1914_);
lean_closure_set(v___f_1926_, 6, v___y_1882_);
lean_closure_set(v___f_1926_, 7, v_b_1881_);
lean_closure_set(v___f_1926_, 8, v_a_1880_);
v___y_1889_ = v___f_1926_;
goto v___jp_1888_;
}
else
{
lean_object* v___x_1927_; lean_object* v___f_1928_; 
v___x_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1927_, 0, v_b_1881_);
v___f_1928_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_1928_, 0, v___x_1927_);
v___y_1889_ = v___f_1928_;
goto v___jp_1888_;
}
}
}
v___jp_1888_:
{
lean_object* v___x_1890_; 
lean_inc(v___y_1886_);
lean_inc_ref(v___y_1885_);
lean_inc(v___y_1884_);
lean_inc_ref(v___y_1883_);
v___x_1890_ = lean_apply_5(v___y_1889_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, lean_box(0));
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1903_; 
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1893_ = v___x_1890_;
v_isShared_1894_ = v_isSharedCheck_1903_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1890_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1903_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
if (lean_obj_tag(v_a_1891_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1897_; 
lean_dec(v_a_1880_);
lean_dec_ref(v_post_1876_);
lean_dec_ref(v_pre_1875_);
v_a_1895_ = lean_ctor_get(v_a_1891_, 0);
lean_inc(v_a_1895_);
lean_dec_ref_known(v_a_1891_, 1);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 0, v_a_1895_);
v___x_1897_ = v___x_1893_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v_a_1895_);
v___x_1897_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
return v___x_1897_;
}
}
else
{
lean_object* v_a_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
lean_del_object(v___x_1893_);
v_a_1899_ = lean_ctor_get(v_a_1891_, 0);
lean_inc(v_a_1899_);
lean_dec_ref_known(v_a_1891_, 1);
v___x_1900_ = lean_unsigned_to_nat(1u);
v___x_1901_ = lean_nat_add(v_a_1880_, v___x_1900_);
lean_dec(v_a_1880_);
v_a_1880_ = v___x_1901_;
v_b_1881_ = v_a_1899_;
goto _start;
}
}
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
lean_dec(v_a_1880_);
lean_dec_ref(v_post_1876_);
lean_dec_ref(v_pre_1875_);
v_a_1904_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1890_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1890_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1907_ == 0)
{
v___x_1909_ = v___x_1906_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_a_1904_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t v_skipInstances_1929_, lean_object* v_pre_1930_, lean_object* v_post_1931_, uint8_t v_usedLetOnly_1932_, uint8_t v_skipConstInApp_1933_, lean_object* v_x_1934_, lean_object* v_x_1935_, lean_object* v_x_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v_f_1944_; lean_object* v___y_1945_; lean_object* v___y_1946_; lean_object* v___y_1947_; lean_object* v___y_1948_; lean_object* v___y_1949_; 
if (lean_obj_tag(v_x_1934_) == 5)
{
lean_object* v_fn_1999_; lean_object* v_arg_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
v_fn_1999_ = lean_ctor_get(v_x_1934_, 0);
lean_inc_ref(v_fn_1999_);
v_arg_2000_ = lean_ctor_get(v_x_1934_, 1);
lean_inc_ref(v_arg_2000_);
lean_dec_ref_known(v_x_1934_, 2);
v___x_2001_ = lean_array_set(v_x_1935_, v_x_1936_, v_arg_2000_);
v___x_2002_ = lean_unsigned_to_nat(1u);
v___x_2003_ = lean_nat_sub(v_x_1936_, v___x_2002_);
lean_dec(v_x_1936_);
v_x_1934_ = v_fn_1999_;
v_x_1935_ = v___x_2001_;
v_x_1936_ = v___x_2003_;
goto _start;
}
else
{
lean_dec(v_x_1936_);
if (v_skipConstInApp_1933_ == 0)
{
goto v___jp_1996_;
}
else
{
uint8_t v___x_2005_; 
v___x_2005_ = l_Lean_Expr_isConst(v_x_1934_);
if (v___x_2005_ == 0)
{
goto v___jp_1996_;
}
else
{
v_f_1944_ = v_x_1934_;
v___y_1945_ = v___y_1937_;
v___y_1946_ = v___y_1938_;
v___y_1947_ = v___y_1939_;
v___y_1948_ = v___y_1940_;
v___y_1949_ = v___y_1941_;
goto v___jp_1943_;
}
}
}
v___jp_1943_:
{
if (v_skipInstances_1929_ == 0)
{
size_t v_sz_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_36610__overap_1958_; lean_object* v___x_1959_; 
v_sz_1950_ = lean_array_size(v_x_1935_);
v___x_1951_ = l_unsafeCast___redArg(v_x_1935_);
lean_dec_ref(v_x_1935_);
v___x_1952_ = lean_box(v_usedLetOnly_1932_);
v___x_1953_ = lean_box(v_skipConstInApp_1933_);
v___x_1954_ = lean_box(v_skipInstances_1929_);
v___x_1955_ = lean_box_usize(v_sz_1950_);
v___x_1956_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed__const__1));
lean_inc_ref(v_post_1931_);
lean_inc_ref(v_pre_1930_);
v___x_1957_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed), 14, 8);
lean_closure_set(v___x_1957_, 0, v_pre_1930_);
lean_closure_set(v___x_1957_, 1, v_post_1931_);
lean_closure_set(v___x_1957_, 2, v___x_1952_);
lean_closure_set(v___x_1957_, 3, v___x_1953_);
lean_closure_set(v___x_1957_, 4, v___x_1954_);
lean_closure_set(v___x_1957_, 5, v___x_1955_);
lean_closure_set(v___x_1957_, 6, v___x_1956_);
lean_closure_set(v___x_1957_, 7, v___x_1951_);
v___x_36610__overap_1958_ = l_unsafeCast___redArg(v___x_1957_);
lean_dec_ref(v___x_1957_);
lean_inc(v___y_1949_);
lean_inc_ref(v___y_1948_);
lean_inc(v___y_1947_);
lean_inc_ref(v___y_1946_);
lean_inc(v___y_1945_);
v___x_1959_ = lean_apply_6(v___x_36610__overap_1958_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_, lean_box(0));
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v_a_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_a_1960_);
lean_dec_ref_known(v___x_1959_, 1);
v___x_1961_ = l_Lean_mkAppN(v_f_1944_, v_a_1960_);
lean_dec(v_a_1960_);
v___x_1962_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1930_, v_post_1931_, v_usedLetOnly_1932_, v_skipConstInApp_1933_, v_skipInstances_1929_, v___x_1961_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
return v___x_1962_;
}
else
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1970_; 
lean_dec_ref(v_f_1944_);
lean_dec_ref(v_post_1931_);
lean_dec_ref(v_pre_1930_);
v_a_1963_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1965_ = v___x_1959_;
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1959_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1966_ == 0)
{
v___x_1968_ = v___x_1965_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_a_1963_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
}
else
{
lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1971_ = lean_array_get_size(v_x_1935_);
lean_inc_ref(v_f_1944_);
v___x_1972_ = l_Lean_Meta_getFunInfoNArgs(v_f_1944_, v___x_1971_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
if (lean_obj_tag(v___x_1972_) == 0)
{
lean_object* v_a_1973_; lean_object* v_paramInfo_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
lean_inc(v_a_1973_);
lean_dec_ref_known(v___x_1972_, 1);
v_paramInfo_1974_ = lean_ctor_get(v_a_1973_, 0);
lean_inc_ref(v_paramInfo_1974_);
lean_dec(v_a_1973_);
v___x_1975_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1931_);
lean_inc_ref(v_pre_1930_);
v___x_1976_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v___x_1971_, v_paramInfo_1974_, v_pre_1930_, v_post_1931_, v_usedLetOnly_1932_, v_skipConstInApp_1933_, v_skipInstances_1929_, v___x_1975_, v_x_1935_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
lean_dec_ref(v_paramInfo_1974_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_object* v_a_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_1977_);
lean_dec_ref_known(v___x_1976_, 1);
v___x_1978_ = l_Lean_mkAppN(v_f_1944_, v_a_1977_);
lean_dec(v_a_1977_);
v___x_1979_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_1930_, v_post_1931_, v_usedLetOnly_1932_, v_skipConstInApp_1933_, v_skipInstances_1929_, v___x_1978_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_);
return v___x_1979_;
}
else
{
lean_object* v_a_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_1987_; 
lean_dec_ref(v_f_1944_);
lean_dec_ref(v_post_1931_);
lean_dec_ref(v_pre_1930_);
v_a_1980_ = lean_ctor_get(v___x_1976_, 0);
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1976_);
if (v_isSharedCheck_1987_ == 0)
{
v___x_1982_ = v___x_1976_;
v_isShared_1983_ = v_isSharedCheck_1987_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_a_1980_);
lean_dec(v___x_1976_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_1987_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v___x_1985_; 
if (v_isShared_1983_ == 0)
{
v___x_1985_ = v___x_1982_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1986_; 
v_reuseFailAlloc_1986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1986_, 0, v_a_1980_);
v___x_1985_ = v_reuseFailAlloc_1986_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
return v___x_1985_;
}
}
}
}
else
{
lean_object* v_a_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_1995_; 
lean_dec_ref(v_f_1944_);
lean_dec_ref(v_x_1935_);
lean_dec_ref(v_post_1931_);
lean_dec_ref(v_pre_1930_);
v_a_1988_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_1995_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1990_ = v___x_1972_;
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_a_1988_);
lean_dec(v___x_1972_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v___x_1993_; 
if (v_isShared_1991_ == 0)
{
v___x_1993_ = v___x_1990_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_a_1988_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
}
}
}
v___jp_1996_:
{
lean_object* v___x_1997_; 
lean_inc_ref(v_post_1931_);
lean_inc_ref(v_pre_1930_);
v___x_1997_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_1930_, v_post_1931_, v_usedLetOnly_1932_, v_skipConstInApp_1933_, v_skipInstances_1929_, v_x_1934_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_1998_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_1998_);
lean_dec_ref_known(v___x_1997_, 1);
v_f_1944_ = v_a_1998_;
v___y_1945_ = v___y_1937_;
v___y_1946_ = v___y_1938_;
v___y_1947_ = v___y_1939_;
v___y_1948_ = v___y_1940_;
v___y_1949_ = v___y_1941_;
goto v___jp_1943_;
}
else
{
lean_dec_ref(v_x_1935_);
lean_dec_ref(v_post_1931_);
lean_dec_ref(v_pre_1930_);
return v___x_1997_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object* v___x_2006_, lean_object* v_pre_2007_, lean_object* v_e_2008_, lean_object* v_post_2009_, uint8_t v_usedLetOnly_2010_, uint8_t v_skipConstInApp_2011_, uint8_t v_skipInstances_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_){
_start:
{
lean_object* v___x_2019_; 
v___x_2019_ = l_Lean_Core_checkSystem(v___x_2006_, v___y_2016_, v___y_2017_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v___x_2020_; 
lean_dec_ref_known(v___x_2019_, 1);
lean_inc_ref(v_pre_2007_);
lean_inc(v___y_2017_);
lean_inc_ref(v___y_2016_);
lean_inc(v___y_2015_);
lean_inc_ref(v___y_2014_);
lean_inc_ref(v_e_2008_);
v___x_2020_ = lean_apply_6(v_pre_2007_, v_e_2008_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_, lean_box(0));
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2069_; 
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2023_ = v___x_2020_;
v_isShared_2024_ = v_isSharedCheck_2069_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2020_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2069_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___y_2026_; 
switch(lean_obj_tag(v_a_2021_))
{
case 0:
{
lean_object* v_e_2061_; lean_object* v___x_2063_; 
lean_dec_ref(v_post_2009_);
lean_dec_ref(v_e_2008_);
lean_dec_ref(v_pre_2007_);
v_e_2061_ = lean_ctor_get(v_a_2021_, 0);
lean_inc_ref(v_e_2061_);
lean_dec_ref_known(v_a_2021_, 1);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 0, v_e_2061_);
v___x_2063_ = v___x_2023_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_e_2061_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
case 1:
{
lean_object* v_e_2065_; lean_object* v___x_2066_; 
lean_del_object(v___x_2023_);
lean_dec_ref(v_e_2008_);
v_e_2065_ = lean_ctor_get(v_a_2021_, 0);
lean_inc_ref(v_e_2065_);
lean_dec_ref_known(v_a_2021_, 1);
v___x_2066_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v_skipInstances_2012_, v_e_2065_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2066_;
}
default: 
{
lean_object* v_e_x3f_2067_; 
lean_del_object(v___x_2023_);
v_e_x3f_2067_ = lean_ctor_get(v_a_2021_, 0);
lean_inc(v_e_x3f_2067_);
lean_dec_ref_known(v_a_2021_, 1);
if (lean_obj_tag(v_e_x3f_2067_) == 0)
{
v___y_2026_ = v_e_2008_;
goto v___jp_2025_;
}
else
{
lean_object* v_val_2068_; 
lean_dec_ref(v_e_2008_);
v_val_2068_ = lean_ctor_get(v_e_x3f_2067_, 0);
lean_inc(v_val_2068_);
lean_dec_ref_known(v_e_x3f_2067_, 1);
v___y_2026_ = v_val_2068_;
goto v___jp_2025_;
}
}
}
v___jp_2025_:
{
switch(lean_obj_tag(v___y_2026_))
{
case 7:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_2028_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v_skipInstances_2012_, v___x_2027_, v___y_2026_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2028_;
}
case 6:
{
lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2029_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_2030_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v_skipInstances_2012_, v___x_2029_, v___y_2026_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2030_;
}
case 8:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2031_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0));
v___x_2032_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v_skipInstances_2012_, v___x_2031_, v___y_2026_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2032_;
}
case 5:
{
lean_object* v_dummy_2033_; lean_object* v_nargs_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
v_dummy_2033_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__2, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__2_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__2);
v_nargs_2034_ = l_Lean_Expr_getAppNumArgs(v___y_2026_);
lean_inc(v_nargs_2034_);
v___x_2035_ = lean_mk_array(v_nargs_2034_, v_dummy_2033_);
v___x_2036_ = lean_unsigned_to_nat(1u);
v___x_2037_ = lean_nat_sub(v_nargs_2034_, v___x_2036_);
lean_dec(v_nargs_2034_);
v___x_2038_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_2012_, v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v___y_2026_, v___x_2035_, v___x_2037_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2038_;
}
case 10:
{
lean_object* v_data_2039_; lean_object* v_expr_2040_; lean_object* v___x_2041_; 
v_data_2039_ = lean_ctor_get(v___y_2026_, 0);
v_expr_2040_ = lean_ctor_get(v___y_2026_, 1);
lean_inc_ref(v_expr_2040_);
lean_inc_ref(v_post_2009_);
lean_inc_ref(v_pre_2007_);
v___x_2041_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v_skipInstances_2012_, v_expr_2040_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; size_t v___x_2043_; size_t v___x_2044_; uint8_t v___x_2045_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v___x_2043_ = lean_ptr_addr(v_expr_2040_);
v___x_2044_ = lean_ptr_addr(v_a_2042_);
v___x_2045_ = lean_usize_dec_eq(v___x_2043_, v___x_2044_);
if (v___x_2045_ == 0)
{
lean_object* v___x_2046_; lean_object* v___x_2047_; 
lean_inc(v_data_2039_);
lean_dec_ref_known(v___y_2026_, 2);
v___x_2046_ = l_Lean_Expr_mdata___override(v_data_2039_, v_a_2042_);
v___x_2047_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v_skipInstances_2012_, v___x_2046_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2047_;
}
else
{
lean_object* v___x_2048_; 
lean_dec(v_a_2042_);
v___x_2048_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v_skipInstances_2012_, v___y_2026_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2048_;
}
}
else
{
lean_dec_ref_known(v___y_2026_, 2);
lean_dec_ref(v_post_2009_);
lean_dec_ref(v_pre_2007_);
return v___x_2041_;
}
}
case 11:
{
lean_object* v_typeName_2049_; lean_object* v_idx_2050_; lean_object* v_struct_2051_; lean_object* v___x_2052_; 
v_typeName_2049_ = lean_ctor_get(v___y_2026_, 0);
v_idx_2050_ = lean_ctor_get(v___y_2026_, 1);
v_struct_2051_ = lean_ctor_get(v___y_2026_, 2);
lean_inc_ref(v_struct_2051_);
lean_inc_ref(v_post_2009_);
lean_inc_ref(v_pre_2007_);
v___x_2052_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v_skipInstances_2012_, v_struct_2051_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
if (lean_obj_tag(v___x_2052_) == 0)
{
lean_object* v_a_2053_; size_t v___x_2054_; size_t v___x_2055_; uint8_t v___x_2056_; 
v_a_2053_ = lean_ctor_get(v___x_2052_, 0);
lean_inc(v_a_2053_);
lean_dec_ref_known(v___x_2052_, 1);
v___x_2054_ = lean_ptr_addr(v_struct_2051_);
v___x_2055_ = lean_ptr_addr(v_a_2053_);
v___x_2056_ = lean_usize_dec_eq(v___x_2054_, v___x_2055_);
if (v___x_2056_ == 0)
{
lean_object* v___x_2057_; lean_object* v___x_2058_; 
lean_inc(v_idx_2050_);
lean_inc(v_typeName_2049_);
lean_dec_ref_known(v___y_2026_, 3);
v___x_2057_ = l_Lean_Expr_proj___override(v_typeName_2049_, v_idx_2050_, v_a_2053_);
v___x_2058_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v_skipInstances_2012_, v___x_2057_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2058_;
}
else
{
lean_object* v___x_2059_; 
lean_dec(v_a_2053_);
v___x_2059_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v_skipInstances_2012_, v___y_2026_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2059_;
}
}
else
{
lean_dec_ref_known(v___y_2026_, 3);
lean_dec_ref(v_post_2009_);
lean_dec_ref(v_pre_2007_);
return v___x_2052_;
}
}
default: 
{
lean_object* v___x_2060_; 
v___x_2060_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2007_, v_post_2009_, v_usedLetOnly_2010_, v_skipConstInApp_2011_, v_skipInstances_2012_, v___y_2026_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2060_;
}
}
}
}
}
else
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
lean_dec_ref(v_post_2009_);
lean_dec_ref(v_e_2008_);
lean_dec_ref(v_pre_2007_);
v_a_2070_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_2020_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_2020_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
else
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
lean_dec_ref(v_post_2009_);
lean_dec_ref(v_e_2008_);
lean_dec_ref(v_pre_2007_);
v_a_2078_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2080_ = v___x_2019_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_2019_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_a_2078_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object* v___x_2086_, lean_object* v_pre_2087_, lean_object* v_e_2088_, lean_object* v_post_2089_, lean_object* v_usedLetOnly_2090_, lean_object* v_skipConstInApp_2091_, lean_object* v_skipInstances_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_){
_start:
{
uint8_t v_usedLetOnly_boxed_2099_; uint8_t v_skipConstInApp_boxed_2100_; uint8_t v_skipInstances_boxed_2101_; lean_object* v_res_2102_; 
v_usedLetOnly_boxed_2099_ = lean_unbox(v_usedLetOnly_2090_);
v_skipConstInApp_boxed_2100_ = lean_unbox(v_skipConstInApp_2091_);
v_skipInstances_boxed_2101_ = lean_unbox(v_skipInstances_2092_);
v_res_2102_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(v___x_2086_, v_pre_2087_, v_e_2088_, v_post_2089_, v_usedLetOnly_boxed_2099_, v_skipConstInApp_boxed_2100_, v_skipInstances_boxed_2101_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_);
lean_dec(v___y_2097_);
lean_dec_ref(v___y_2096_);
lean_dec(v___y_2095_);
lean_dec_ref(v___y_2094_);
lean_dec(v___y_2093_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object* v_pre_2103_, lean_object* v_post_2104_, uint8_t v_usedLetOnly_2105_, uint8_t v_skipConstInApp_2106_, uint8_t v_skipInstances_2107_, lean_object* v_e_2108_, lean_object* v_a_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; 
lean_inc(v_a_2109_);
v___x_2115_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2115_, 0, lean_box(0));
lean_closure_set(v___x_2115_, 1, lean_box(0));
lean_closure_set(v___x_2115_, 2, v_a_2109_);
v___x_2116_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___x_2115_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2151_; 
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2151_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2151_ == 0)
{
v___x_2119_ = v___x_2116_;
v_isShared_2120_ = v_isSharedCheck_2151_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_a_2117_);
lean_dec(v___x_2116_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2151_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2121_; 
v___x_2121_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_a_2117_, v_e_2108_);
lean_dec(v_a_2117_);
if (lean_obj_tag(v___x_2121_) == 0)
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___f_2126_; lean_object* v___x_2127_; 
lean_del_object(v___x_2119_);
v___x_2122_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0));
v___x_2123_ = lean_box(v_usedLetOnly_2105_);
v___x_2124_ = lean_box(v_skipConstInApp_2106_);
v___x_2125_ = lean_box(v_skipInstances_2107_);
lean_inc_ref(v_e_2108_);
v___f_2126_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed), 13, 7);
lean_closure_set(v___f_2126_, 0, v___x_2122_);
lean_closure_set(v___f_2126_, 1, v_pre_2103_);
lean_closure_set(v___f_2126_, 2, v_e_2108_);
lean_closure_set(v___f_2126_, 3, v_post_2104_);
lean_closure_set(v___f_2126_, 4, v___x_2123_);
lean_closure_set(v___f_2126_, 5, v___x_2124_);
lean_closure_set(v___f_2126_, 6, v___x_2125_);
v___x_2127_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v___f_2126_, v_a_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v_a_2128_; lean_object* v___f_2129_; lean_object* v___x_2130_; 
v_a_2128_ = lean_ctor_get(v___x_2127_, 0);
lean_inc_n(v_a_2128_, 2);
lean_dec_ref_known(v___x_2127_, 1);
lean_inc(v_a_2109_);
v___f_2129_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2129_, 0, v_a_2109_);
lean_closure_set(v___f_2129_, 1, v_e_2108_);
lean_closure_set(v___f_2129_, 2, v_a_2128_);
v___x_2130_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___f_2129_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2137_; 
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2137_ == 0)
{
lean_object* v_unused_2138_; 
v_unused_2138_ = lean_ctor_get(v___x_2130_, 0);
lean_dec(v_unused_2138_);
v___x_2132_ = v___x_2130_;
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
else
{
lean_dec(v___x_2130_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2135_; 
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 0, v_a_2128_);
v___x_2135_ = v___x_2132_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_a_2128_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
else
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2146_; 
lean_dec(v_a_2128_);
v_a_2139_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2141_ = v___x_2130_;
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2130_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
if (v_isShared_2142_ == 0)
{
v___x_2144_ = v___x_2141_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_a_2139_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
return v___x_2144_;
}
}
}
}
else
{
lean_dec_ref(v_e_2108_);
return v___x_2127_;
}
}
else
{
lean_object* v_val_2147_; lean_object* v___x_2149_; 
lean_dec_ref(v_e_2108_);
lean_dec_ref(v_post_2104_);
lean_dec_ref(v_pre_2103_);
v_val_2147_ = lean_ctor_get(v___x_2121_, 0);
lean_inc(v_val_2147_);
lean_dec_ref_known(v___x_2121_, 1);
if (v_isShared_2120_ == 0)
{
lean_ctor_set(v___x_2119_, 0, v_val_2147_);
v___x_2149_ = v___x_2119_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_val_2147_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
return v___x_2149_;
}
}
}
}
else
{
lean_object* v_a_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2159_; 
lean_dec_ref(v_e_2108_);
lean_dec_ref(v_post_2104_);
lean_dec_ref(v_pre_2103_);
v_a_2152_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2154_ = v___x_2116_;
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_a_2152_);
lean_dec(v___x_2116_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2157_; 
if (v_isShared_2155_ == 0)
{
v___x_2157_ = v___x_2154_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_a_2152_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object* v_pre_2160_, lean_object* v_post_2161_, uint8_t v_usedLetOnly_2162_, uint8_t v_skipConstInApp_2163_, uint8_t v_skipInstances_2164_, lean_object* v_fvars_2165_, lean_object* v_e_2166_, lean_object* v_a_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
if (lean_obj_tag(v_e_2166_) == 7)
{
lean_object* v_binderName_2173_; lean_object* v_binderType_2174_; lean_object* v_body_2175_; uint8_t v_binderInfo_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___f_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v_binderName_2173_ = lean_ctor_get(v_e_2166_, 0);
lean_inc(v_binderName_2173_);
v_binderType_2174_ = lean_ctor_get(v_e_2166_, 1);
lean_inc_ref(v_binderType_2174_);
v_body_2175_ = lean_ctor_get(v_e_2166_, 2);
lean_inc_ref(v_body_2175_);
v_binderInfo_2176_ = lean_ctor_get_uint8(v_e_2166_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2166_, 3);
v___x_2177_ = lean_box(v_usedLetOnly_2162_);
v___x_2178_ = lean_box(v_skipConstInApp_2163_);
v___x_2179_ = lean_box(v_skipInstances_2164_);
lean_inc_ref(v_post_2161_);
lean_inc_ref(v_pre_2160_);
lean_inc_ref(v_fvars_2165_);
v___f_2180_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2180_, 0, v_fvars_2165_);
lean_closure_set(v___f_2180_, 1, v_pre_2160_);
lean_closure_set(v___f_2180_, 2, v_post_2161_);
lean_closure_set(v___f_2180_, 3, v___x_2177_);
lean_closure_set(v___f_2180_, 4, v___x_2178_);
lean_closure_set(v___f_2180_, 5, v___x_2179_);
lean_closure_set(v___f_2180_, 6, v_body_2175_);
v___x_2181_ = lean_expr_instantiate_rev(v_binderType_2174_, v_fvars_2165_);
lean_dec_ref(v_fvars_2165_);
lean_dec_ref(v_binderType_2174_);
v___x_2182_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2160_, v_post_2161_, v_usedLetOnly_2162_, v_skipConstInApp_2163_, v_skipInstances_2164_, v___x_2181_, v_a_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
if (lean_obj_tag(v___x_2182_) == 0)
{
lean_object* v_a_2183_; uint8_t v___x_2184_; lean_object* v___x_2185_; 
v_a_2183_ = lean_ctor_get(v___x_2182_, 0);
lean_inc(v_a_2183_);
lean_dec_ref_known(v___x_2182_, 1);
v___x_2184_ = 0;
v___x_2185_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_2173_, v_binderInfo_2176_, v_a_2183_, v___f_2180_, v___x_2184_, v_a_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
return v___x_2185_;
}
else
{
lean_dec_ref(v___f_2180_);
lean_dec(v_binderName_2173_);
return v___x_2182_;
}
}
else
{
lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2186_ = lean_expr_instantiate_rev(v_e_2166_, v_fvars_2165_);
lean_dec_ref(v_e_2166_);
lean_inc_ref(v_post_2161_);
lean_inc_ref(v_pre_2160_);
v___x_2187_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2160_, v_post_2161_, v_usedLetOnly_2162_, v_skipConstInApp_2163_, v_skipInstances_2164_, v___x_2186_, v_a_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
if (lean_obj_tag(v___x_2187_) == 0)
{
lean_object* v_a_2188_; uint8_t v___x_2189_; uint8_t v___x_2190_; uint8_t v___x_2191_; lean_object* v___x_2192_; 
v_a_2188_ = lean_ctor_get(v___x_2187_, 0);
lean_inc(v_a_2188_);
lean_dec_ref_known(v___x_2187_, 1);
v___x_2189_ = 0;
v___x_2190_ = 1;
v___x_2191_ = 1;
v___x_2192_ = l_Lean_Meta_mkForallFVars(v_fvars_2165_, v_a_2188_, v___x_2189_, v_usedLetOnly_2162_, v___x_2190_, v___x_2191_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v_a_2193_; lean_object* v___x_2194_; 
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_a_2193_);
lean_dec_ref_known(v___x_2192_, 1);
v___x_2194_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2160_, v_post_2161_, v_usedLetOnly_2162_, v_skipConstInApp_2163_, v_skipInstances_2164_, v_a_2193_, v_a_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
return v___x_2194_;
}
else
{
lean_dec_ref(v_post_2161_);
lean_dec_ref(v_pre_2160_);
return v___x_2192_;
}
}
else
{
lean_dec_ref(v_fvars_2165_);
lean_dec_ref(v_post_2161_);
lean_dec_ref(v_pre_2160_);
return v___x_2187_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object* v_fvars_2195_, lean_object* v_pre_2196_, lean_object* v_post_2197_, uint8_t v_usedLetOnly_2198_, uint8_t v_skipConstInApp_2199_, uint8_t v_skipInstances_2200_, lean_object* v_body_2201_, lean_object* v_x_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_){
_start:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2209_ = lean_array_push(v_fvars_2195_, v_x_2202_);
v___x_2210_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2196_, v_post_2197_, v_usedLetOnly_2198_, v_skipConstInApp_2199_, v_skipInstances_2200_, v___x_2209_, v_body_2201_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_);
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object* v_pre_2211_, lean_object* v_post_2212_, lean_object* v_usedLetOnly_2213_, lean_object* v_skipConstInApp_2214_, lean_object* v_skipInstances_2215_, lean_object* v_e_2216_, lean_object* v_a_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
uint8_t v_usedLetOnly_boxed_2223_; uint8_t v_skipConstInApp_boxed_2224_; uint8_t v_skipInstances_boxed_2225_; lean_object* v_res_2226_; 
v_usedLetOnly_boxed_2223_ = lean_unbox(v_usedLetOnly_2213_);
v_skipConstInApp_boxed_2224_ = lean_unbox(v_skipConstInApp_2214_);
v_skipInstances_boxed_2225_ = lean_unbox(v_skipInstances_2215_);
v_res_2226_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2211_, v_post_2212_, v_usedLetOnly_boxed_2223_, v_skipConstInApp_boxed_2224_, v_skipInstances_boxed_2225_, v_e_2216_, v_a_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
lean_dec(v_a_2217_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object* v_pre_2227_, lean_object* v_post_2228_, lean_object* v_usedLetOnly_2229_, lean_object* v_skipConstInApp_2230_, lean_object* v_skipInstances_2231_, lean_object* v_e_2232_, lean_object* v_a_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_){
_start:
{
uint8_t v_usedLetOnly_boxed_2239_; uint8_t v_skipConstInApp_boxed_2240_; uint8_t v_skipInstances_boxed_2241_; lean_object* v_res_2242_; 
v_usedLetOnly_boxed_2239_ = lean_unbox(v_usedLetOnly_2229_);
v_skipConstInApp_boxed_2240_ = lean_unbox(v_skipConstInApp_2230_);
v_skipInstances_boxed_2241_ = lean_unbox(v_skipInstances_2231_);
v_res_2242_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2227_, v_post_2228_, v_usedLetOnly_boxed_2239_, v_skipConstInApp_boxed_2240_, v_skipInstances_boxed_2241_, v_e_2232_, v_a_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_);
lean_dec(v___y_2237_);
lean_dec_ref(v___y_2236_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
lean_dec(v_a_2233_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object* v_pre_2243_, lean_object* v_post_2244_, lean_object* v_usedLetOnly_2245_, lean_object* v_skipConstInApp_2246_, lean_object* v_skipInstances_2247_, lean_object* v_fvars_2248_, lean_object* v_e_2249_, lean_object* v_a_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
uint8_t v_usedLetOnly_boxed_2256_; uint8_t v_skipConstInApp_boxed_2257_; uint8_t v_skipInstances_boxed_2258_; lean_object* v_res_2259_; 
v_usedLetOnly_boxed_2256_ = lean_unbox(v_usedLetOnly_2245_);
v_skipConstInApp_boxed_2257_ = lean_unbox(v_skipConstInApp_2246_);
v_skipInstances_boxed_2258_ = lean_unbox(v_skipInstances_2247_);
v_res_2259_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2243_, v_post_2244_, v_usedLetOnly_boxed_2256_, v_skipConstInApp_boxed_2257_, v_skipInstances_boxed_2258_, v_fvars_2248_, v_e_2249_, v_a_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v_a_2250_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object* v_pre_2260_, lean_object* v_post_2261_, lean_object* v_usedLetOnly_2262_, lean_object* v_skipConstInApp_2263_, lean_object* v_skipInstances_2264_, lean_object* v_fvars_2265_, lean_object* v_e_2266_, lean_object* v_a_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_){
_start:
{
uint8_t v_usedLetOnly_boxed_2273_; uint8_t v_skipConstInApp_boxed_2274_; uint8_t v_skipInstances_boxed_2275_; lean_object* v_res_2276_; 
v_usedLetOnly_boxed_2273_ = lean_unbox(v_usedLetOnly_2262_);
v_skipConstInApp_boxed_2274_ = lean_unbox(v_skipConstInApp_2263_);
v_skipInstances_boxed_2275_ = lean_unbox(v_skipInstances_2264_);
v_res_2276_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_2260_, v_post_2261_, v_usedLetOnly_boxed_2273_, v_skipConstInApp_boxed_2274_, v_skipInstances_boxed_2275_, v_fvars_2265_, v_e_2266_, v_a_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_);
lean_dec(v___y_2271_);
lean_dec_ref(v___y_2270_);
lean_dec(v___y_2269_);
lean_dec_ref(v___y_2268_);
lean_dec(v_a_2267_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object* v_pre_2277_, lean_object* v_post_2278_, lean_object* v_usedLetOnly_2279_, lean_object* v_skipConstInApp_2280_, lean_object* v_skipInstances_2281_, lean_object* v_fvars_2282_, lean_object* v_e_2283_, lean_object* v_a_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_){
_start:
{
uint8_t v_usedLetOnly_boxed_2290_; uint8_t v_skipConstInApp_boxed_2291_; uint8_t v_skipInstances_boxed_2292_; lean_object* v_res_2293_; 
v_usedLetOnly_boxed_2290_ = lean_unbox(v_usedLetOnly_2279_);
v_skipConstInApp_boxed_2291_ = lean_unbox(v_skipConstInApp_2280_);
v_skipInstances_boxed_2292_ = lean_unbox(v_skipInstances_2281_);
v_res_2293_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_2277_, v_post_2278_, v_usedLetOnly_boxed_2290_, v_skipConstInApp_boxed_2291_, v_skipInstances_boxed_2292_, v_fvars_2282_, v_e_2283_, v_a_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_);
lean_dec(v___y_2288_);
lean_dec_ref(v___y_2287_);
lean_dec(v___y_2286_);
lean_dec_ref(v___y_2285_);
lean_dec(v_a_2284_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___boxed(lean_object* v_upperBound_2294_, lean_object* v___x_2295_, lean_object* v_pre_2296_, lean_object* v_post_2297_, lean_object* v_usedLetOnly_2298_, lean_object* v_skipConstInApp_2299_, lean_object* v_skipInstances_2300_, lean_object* v_a_2301_, lean_object* v_b_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_){
_start:
{
uint8_t v_usedLetOnly_boxed_2309_; uint8_t v_skipConstInApp_boxed_2310_; uint8_t v_skipInstances_boxed_2311_; lean_object* v_res_2312_; 
v_usedLetOnly_boxed_2309_ = lean_unbox(v_usedLetOnly_2298_);
v_skipConstInApp_boxed_2310_ = lean_unbox(v_skipConstInApp_2299_);
v_skipInstances_boxed_2311_ = lean_unbox(v_skipInstances_2300_);
v_res_2312_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v_upperBound_2294_, v___x_2295_, v_pre_2296_, v_post_2297_, v_usedLetOnly_boxed_2309_, v_skipConstInApp_boxed_2310_, v_skipInstances_boxed_2311_, v_a_2301_, v_b_2302_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_);
lean_dec(v___y_2307_);
lean_dec_ref(v___y_2306_);
lean_dec(v___y_2305_);
lean_dec_ref(v___y_2304_);
lean_dec(v___y_2303_);
lean_dec_ref(v___x_2295_);
lean_dec(v_upperBound_2294_);
return v_res_2312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object* v_skipInstances_2313_, lean_object* v_pre_2314_, lean_object* v_post_2315_, lean_object* v_usedLetOnly_2316_, lean_object* v_skipConstInApp_2317_, lean_object* v_x_2318_, lean_object* v_x_2319_, lean_object* v_x_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_){
_start:
{
uint8_t v_skipInstances_boxed_2327_; uint8_t v_usedLetOnly_boxed_2328_; uint8_t v_skipConstInApp_boxed_2329_; lean_object* v_res_2330_; 
v_skipInstances_boxed_2327_ = lean_unbox(v_skipInstances_2313_);
v_usedLetOnly_boxed_2328_ = lean_unbox(v_usedLetOnly_2316_);
v_skipConstInApp_boxed_2329_ = lean_unbox(v_skipConstInApp_2317_);
v_res_2330_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_boxed_2327_, v_pre_2314_, v_post_2315_, v_usedLetOnly_boxed_2328_, v_skipConstInApp_boxed_2329_, v_x_2318_, v_x_2319_, v_x_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
lean_dec(v___y_2325_);
lean_dec_ref(v___y_2324_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
return v_res_2330_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0(void){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2331_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_2332_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2332_, 0, lean_box(0));
lean_closure_set(v___x_2332_, 1, lean_box(0));
lean_closure_set(v___x_2332_, 2, v___x_2331_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object* v_input_2333_, lean_object* v_pre_2334_, lean_object* v_post_2335_, uint8_t v_usedLetOnly_2336_, uint8_t v_skipConstInApp_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_){
_start:
{
uint8_t v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v_a_2346_; lean_object* v___x_2347_; 
v___x_2343_ = 0;
v___x_2344_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0, &l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0);
v___x_2345_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2344_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_a_2346_);
lean_dec_ref(v___x_2345_);
v___x_2347_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2334_, v_post_2335_, v_usedLetOnly_2336_, v_skipConstInApp_2337_, v___x_2343_, v_input_2333_, v_a_2346_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v_a_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
v_a_2348_ = lean_ctor_get(v___x_2347_, 0);
lean_inc(v_a_2348_);
lean_dec_ref_known(v___x_2347_, 1);
v___x_2349_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2349_, 0, lean_box(0));
lean_closure_set(v___x_2349_, 1, lean_box(0));
lean_closure_set(v___x_2349_, 2, v_a_2346_);
v___x_2350_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2349_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2357_ == 0)
{
lean_object* v_unused_2358_; 
v_unused_2358_ = lean_ctor_get(v___x_2350_, 0);
lean_dec(v_unused_2358_);
v___x_2352_ = v___x_2350_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_dec(v___x_2350_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
lean_ctor_set(v___x_2352_, 0, v_a_2348_);
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2348_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
else
{
lean_dec(v_a_2346_);
return v___x_2347_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object* v_input_2359_, lean_object* v_pre_2360_, lean_object* v_post_2361_, lean_object* v_usedLetOnly_2362_, lean_object* v_skipConstInApp_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
uint8_t v_usedLetOnly_boxed_2369_; uint8_t v_skipConstInApp_boxed_2370_; lean_object* v_res_2371_; 
v_usedLetOnly_boxed_2369_ = lean_unbox(v_usedLetOnly_2362_);
v_skipConstInApp_boxed_2370_ = lean_unbox(v_skipConstInApp_2363_);
v_res_2371_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_input_2359_, v_pre_2360_, v_post_2361_, v_usedLetOnly_boxed_2369_, v_skipConstInApp_boxed_2370_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object* v___x_2372_, lean_object* v_as_2373_, lean_object* v_j_2374_){
_start:
{
lean_object* v___x_2375_; uint8_t v___x_2376_; 
v___x_2375_ = lean_array_get_size(v_as_2373_);
v___x_2376_ = lean_nat_dec_lt(v_j_2374_, v___x_2375_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2377_; 
lean_dec(v_j_2374_);
v___x_2377_ = lean_box(0);
return v___x_2377_;
}
else
{
lean_object* v___x_2378_; lean_object* v_declName_2379_; uint8_t v___x_2380_; 
v___x_2378_ = lean_array_fget_borrowed(v_as_2373_, v_j_2374_);
v_declName_2379_ = lean_ctor_get(v___x_2378_, 3);
v___x_2380_ = lean_name_eq(v_declName_2379_, v___x_2372_);
if (v___x_2380_ == 0)
{
lean_object* v___x_2381_; lean_object* v___x_2382_; 
v___x_2381_ = lean_unsigned_to_nat(1u);
v___x_2382_ = lean_nat_add(v_j_2374_, v___x_2381_);
lean_dec(v_j_2374_);
v_j_2374_ = v___x_2382_;
goto _start;
}
else
{
lean_object* v___x_2384_; 
v___x_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2384_, 0, v_j_2374_);
return v___x_2384_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object* v___x_2385_, lean_object* v_as_2386_, lean_object* v_j_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_2385_, v_as_2386_, v_j_2387_);
lean_dec_ref(v_as_2386_);
lean_dec(v___x_2385_);
return v_res_2388_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(lean_object* v_val_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2395_ = lean_st_ref_get(v_val_2389_);
v___x_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0___boxed(lean_object* v_val_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_){
_start:
{
lean_object* v_res_2403_; 
v_res_2403_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
lean_dec(v_val_2397_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(lean_object* v_val_2404_, lean_object* v_val_2405_, lean_object* v_a_2406_, lean_object* v___x_2407_, lean_object* v_____r_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2414_ = lean_st_ref_take(v_val_2404_);
v___x_2415_ = l_Lean_Elab_FixedParams_Info_setVarying(v_val_2405_, v_a_2406_, v___x_2414_);
v___x_2416_ = lean_st_ref_put(v_val_2404_, v___x_2415_);
v___x_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2417_, 0, v___x_2407_);
v___x_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2417_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1___boxed(lean_object* v_val_2419_, lean_object* v_val_2420_, lean_object* v_a_2421_, lean_object* v___x_2422_, lean_object* v_____r_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2419_, v_val_2420_, v_a_2421_, v___x_2422_, v_____r_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
lean_dec(v_val_2420_);
lean_dec(v_val_2419_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object* v_val_2430_, lean_object* v_val_2431_, lean_object* v_next_2432_, lean_object* v_next_2433_, lean_object* v___x_2434_, lean_object* v___x_2435_, lean_object* v_upperBound_2436_, lean_object* v_params_2437_, lean_object* v___x_2438_, lean_object* v_a_2439_, uint8_t v_b_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
uint8_t v_a_2447_; uint8_t v___x_2451_; 
v___x_2451_ = lean_nat_dec_lt(v_a_2439_, v_upperBound_2436_);
if (v___x_2451_ == 0)
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
lean_dec(v_a_2439_);
lean_dec_ref(v___x_2438_);
lean_dec(v_next_2432_);
v___x_2452_ = lean_box(v_b_2440_);
v___x_2453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2452_);
return v___x_2453_;
}
else
{
uint8_t v___x_2454_; lean_object* v___y_2456_; lean_object* v___x_2470_; uint8_t v___x_2471_; 
v___x_2454_ = lean_nat_dec_eq(v___x_2434_, v___x_2435_);
v___x_2470_ = lean_st_ref_get(v_val_2430_);
v___x_2471_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_next_2433_, v_a_2439_, v___x_2470_);
lean_dec(v___x_2470_);
if (v___x_2471_ == 0)
{
v_a_2447_ = v_b_2440_;
goto v___jp_2446_;
}
else
{
lean_object* v___x_2472_; uint8_t v_foApprox_2473_; uint8_t v_ctxApprox_2474_; uint8_t v_quasiPatternApprox_2475_; uint8_t v_constApprox_2476_; uint8_t v_isDefEqStuckEx_2477_; uint8_t v_unificationHints_2478_; uint8_t v_assignSyntheticOpaque_2479_; uint8_t v_offsetCnstrs_2480_; uint8_t v_transparency_2481_; uint8_t v_etaStruct_2482_; uint8_t v_univApprox_2483_; uint8_t v_iota_2484_; uint8_t v_beta_2485_; uint8_t v_proj_2486_; uint8_t v_zeta_2487_; uint8_t v_zetaDelta_2488_; uint8_t v_zetaUnused_2489_; uint8_t v_zetaHave_2490_; uint8_t v_canUnfoldPredicateConfig_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2521_; 
v___x_2472_ = l_Lean_Meta_Context_config(v___y_2441_);
v_foApprox_2473_ = lean_ctor_get_uint8(v___x_2472_, 0);
v_ctxApprox_2474_ = lean_ctor_get_uint8(v___x_2472_, 1);
v_quasiPatternApprox_2475_ = lean_ctor_get_uint8(v___x_2472_, 2);
v_constApprox_2476_ = lean_ctor_get_uint8(v___x_2472_, 3);
v_isDefEqStuckEx_2477_ = lean_ctor_get_uint8(v___x_2472_, 4);
v_unificationHints_2478_ = lean_ctor_get_uint8(v___x_2472_, 5);
v_assignSyntheticOpaque_2479_ = lean_ctor_get_uint8(v___x_2472_, 7);
v_offsetCnstrs_2480_ = lean_ctor_get_uint8(v___x_2472_, 8);
v_transparency_2481_ = lean_ctor_get_uint8(v___x_2472_, 9);
v_etaStruct_2482_ = lean_ctor_get_uint8(v___x_2472_, 10);
v_univApprox_2483_ = lean_ctor_get_uint8(v___x_2472_, 11);
v_iota_2484_ = lean_ctor_get_uint8(v___x_2472_, 12);
v_beta_2485_ = lean_ctor_get_uint8(v___x_2472_, 13);
v_proj_2486_ = lean_ctor_get_uint8(v___x_2472_, 14);
v_zeta_2487_ = lean_ctor_get_uint8(v___x_2472_, 15);
v_zetaDelta_2488_ = lean_ctor_get_uint8(v___x_2472_, 16);
v_zetaUnused_2489_ = lean_ctor_get_uint8(v___x_2472_, 17);
v_zetaHave_2490_ = lean_ctor_get_uint8(v___x_2472_, 18);
v_canUnfoldPredicateConfig_2491_ = lean_ctor_get_uint8(v___x_2472_, 19);
v_isSharedCheck_2521_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2493_ = v___x_2472_;
v_isShared_2494_ = v_isSharedCheck_2521_;
goto v_resetjp_2492_;
}
else
{
lean_dec(v___x_2472_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2521_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
uint8_t v_trackZetaDelta_2495_; lean_object* v_zetaDeltaSet_2496_; lean_object* v_lctx_2497_; lean_object* v_localInstances_2498_; lean_object* v_defEqCtx_x3f_2499_; lean_object* v_synthPendingDepth_2500_; lean_object* v_customCanUnfoldPredicate_x3f_2501_; uint8_t v_univApprox_2502_; uint8_t v_inTypeClassResolution_2503_; uint8_t v_cacheInferType_2504_; uint8_t v___x_2505_; lean_object* v___x_2507_; 
v_trackZetaDelta_2495_ = lean_ctor_get_uint8(v___y_2441_, sizeof(void*)*7);
v_zetaDeltaSet_2496_ = lean_ctor_get(v___y_2441_, 1);
v_lctx_2497_ = lean_ctor_get(v___y_2441_, 2);
v_localInstances_2498_ = lean_ctor_get(v___y_2441_, 3);
v_defEqCtx_x3f_2499_ = lean_ctor_get(v___y_2441_, 4);
v_synthPendingDepth_2500_ = lean_ctor_get(v___y_2441_, 5);
v_customCanUnfoldPredicate_x3f_2501_ = lean_ctor_get(v___y_2441_, 6);
v_univApprox_2502_ = lean_ctor_get_uint8(v___y_2441_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2503_ = lean_ctor_get_uint8(v___y_2441_, sizeof(void*)*7 + 2);
v_cacheInferType_2504_ = lean_ctor_get_uint8(v___y_2441_, sizeof(void*)*7 + 3);
v___x_2505_ = 0;
if (v_isShared_2494_ == 0)
{
v___x_2507_ = v___x_2493_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 0, v_foApprox_2473_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 1, v_ctxApprox_2474_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 2, v_quasiPatternApprox_2475_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 3, v_constApprox_2476_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 4, v_isDefEqStuckEx_2477_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 5, v_unificationHints_2478_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 7, v_assignSyntheticOpaque_2479_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 8, v_offsetCnstrs_2480_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 9, v_transparency_2481_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 10, v_etaStruct_2482_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 11, v_univApprox_2483_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 12, v_iota_2484_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 13, v_beta_2485_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 14, v_proj_2486_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 15, v_zeta_2487_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 16, v_zetaDelta_2488_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 17, v_zetaUnused_2489_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 18, v_zetaHave_2490_);
lean_ctor_set_uint8(v_reuseFailAlloc_2520_, 19, v_canUnfoldPredicateConfig_2491_);
v___x_2507_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
uint64_t v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; uint8_t v_transparency_2512_; lean_object* v___x_2513_; uint8_t v___x_2514_; uint8_t v___x_2515_; 
lean_ctor_set_uint8(v___x_2507_, 6, v___x_2505_);
v___x_2508_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2507_);
v___x_2509_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2509_, 0, v___x_2507_);
lean_ctor_set_uint64(v___x_2509_, sizeof(void*)*1, v___x_2508_);
lean_inc(v_customCanUnfoldPredicate_x3f_2501_);
lean_inc(v_synthPendingDepth_2500_);
lean_inc(v_defEqCtx_x3f_2499_);
lean_inc_ref(v_localInstances_2498_);
lean_inc_ref(v_lctx_2497_);
lean_inc(v_zetaDeltaSet_2496_);
lean_inc_ref(v___x_2509_);
v___x_2510_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2510_, 0, v___x_2509_);
lean_ctor_set(v___x_2510_, 1, v_zetaDeltaSet_2496_);
lean_ctor_set(v___x_2510_, 2, v_lctx_2497_);
lean_ctor_set(v___x_2510_, 3, v_localInstances_2498_);
lean_ctor_set(v___x_2510_, 4, v_defEqCtx_x3f_2499_);
lean_ctor_set(v___x_2510_, 5, v_synthPendingDepth_2500_);
lean_ctor_set(v___x_2510_, 6, v_customCanUnfoldPredicate_x3f_2501_);
lean_ctor_set_uint8(v___x_2510_, sizeof(void*)*7, v_trackZetaDelta_2495_);
lean_ctor_set_uint8(v___x_2510_, sizeof(void*)*7 + 1, v_univApprox_2502_);
lean_ctor_set_uint8(v___x_2510_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2503_);
lean_ctor_set_uint8(v___x_2510_, sizeof(void*)*7 + 3, v_cacheInferType_2504_);
v___x_2511_ = l_Lean_Meta_Context_config(v___x_2510_);
v_transparency_2512_ = lean_ctor_get_uint8(v___x_2511_, 9);
lean_dec_ref(v___x_2511_);
v___x_2513_ = lean_array_fget_borrowed(v_params_2437_, v_a_2439_);
v___x_2514_ = 2;
v___x_2515_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2512_, v___x_2514_);
if (v___x_2515_ == 0)
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
lean_dec_ref_known(v___x_2510_, 7);
v___x_2516_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2514_, v___x_2509_);
lean_inc(v_customCanUnfoldPredicate_x3f_2501_);
lean_inc(v_synthPendingDepth_2500_);
lean_inc(v_defEqCtx_x3f_2499_);
lean_inc_ref(v_localInstances_2498_);
lean_inc_ref(v_lctx_2497_);
lean_inc(v_zetaDeltaSet_2496_);
v___x_2517_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2517_, 0, v___x_2516_);
lean_ctor_set(v___x_2517_, 1, v_zetaDeltaSet_2496_);
lean_ctor_set(v___x_2517_, 2, v_lctx_2497_);
lean_ctor_set(v___x_2517_, 3, v_localInstances_2498_);
lean_ctor_set(v___x_2517_, 4, v_defEqCtx_x3f_2499_);
lean_ctor_set(v___x_2517_, 5, v_synthPendingDepth_2500_);
lean_ctor_set(v___x_2517_, 6, v_customCanUnfoldPredicate_x3f_2501_);
lean_ctor_set_uint8(v___x_2517_, sizeof(void*)*7, v_trackZetaDelta_2495_);
lean_ctor_set_uint8(v___x_2517_, sizeof(void*)*7 + 1, v_univApprox_2502_);
lean_ctor_set_uint8(v___x_2517_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2503_);
lean_ctor_set_uint8(v___x_2517_, sizeof(void*)*7 + 3, v_cacheInferType_2504_);
lean_inc_ref(v___x_2438_);
lean_inc(v___x_2513_);
v___x_2518_ = l_Lean_Meta_isExprDefEq(v___x_2513_, v___x_2438_, v___x_2517_, v___y_2442_, v___y_2443_, v___y_2444_);
lean_dec_ref_known(v___x_2517_, 7);
v___y_2456_ = v___x_2518_;
goto v___jp_2455_;
}
else
{
lean_object* v___x_2519_; 
lean_dec_ref_known(v___x_2509_, 1);
lean_inc_ref(v___x_2438_);
lean_inc(v___x_2513_);
v___x_2519_ = l_Lean_Meta_isExprDefEq(v___x_2513_, v___x_2438_, v___x_2510_, v___y_2442_, v___y_2443_, v___y_2444_);
lean_dec_ref_known(v___x_2510_, 7);
v___y_2456_ = v___x_2519_;
goto v___jp_2455_;
}
}
}
}
v___jp_2455_:
{
if (lean_obj_tag(v___y_2456_) == 0)
{
lean_object* v_a_2457_; uint8_t v___x_2458_; 
v_a_2457_ = lean_ctor_get(v___y_2456_, 0);
lean_inc(v_a_2457_);
lean_dec_ref_known(v___y_2456_, 1);
v___x_2458_ = lean_unbox(v_a_2457_);
lean_dec(v_a_2457_);
if (v___x_2458_ == 0)
{
v_a_2447_ = v_b_2440_;
goto v___jp_2446_;
}
else
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2459_ = lean_st_ref_take(v_val_2430_);
lean_inc(v_a_2439_);
lean_inc(v_next_2432_);
v___x_2460_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_val_2431_, v_next_2432_, v_next_2433_, v_a_2439_, v___x_2459_);
v___x_2461_ = lean_st_ref_put(v_val_2430_, v___x_2460_);
v_a_2447_ = v___x_2454_;
goto v___jp_2446_;
}
}
else
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2469_; 
lean_dec(v_a_2439_);
lean_dec_ref(v___x_2438_);
lean_dec(v_next_2432_);
v_a_2462_ = lean_ctor_get(v___y_2456_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___y_2456_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2464_ = v___y_2456_;
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___y_2456_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2467_; 
if (v_isShared_2465_ == 0)
{
v___x_2467_ = v___x_2464_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_a_2462_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
}
}
v___jp_2446_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = lean_unsigned_to_nat(1u);
v___x_2449_ = lean_nat_add(v_a_2439_, v___x_2448_);
lean_dec(v_a_2439_);
v_a_2439_ = v___x_2449_;
v_b_2440_ = v_a_2447_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object* v_val_2522_, lean_object* v_val_2523_, lean_object* v_next_2524_, lean_object* v_next_2525_, lean_object* v___x_2526_, lean_object* v___x_2527_, lean_object* v_upperBound_2528_, lean_object* v_params_2529_, lean_object* v___x_2530_, lean_object* v_a_2531_, lean_object* v_b_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
uint8_t v_b_boxed_2538_; lean_object* v_res_2539_; 
v_b_boxed_2538_ = lean_unbox(v_b_2532_);
v_res_2539_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2522_, v_val_2523_, v_next_2524_, v_next_2525_, v___x_2526_, v___x_2527_, v_upperBound_2528_, v_params_2529_, v___x_2530_, v_a_2531_, v_b_boxed_2538_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
lean_dec(v___y_2536_);
lean_dec_ref(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec_ref(v_params_2529_);
lean_dec(v_upperBound_2528_);
lean_dec(v___x_2527_);
lean_dec(v___x_2526_);
lean_dec(v_next_2525_);
lean_dec(v_val_2523_);
lean_dec(v_val_2522_);
return v_res_2539_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6(void){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2550_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2551_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5));
v___x_2552_ = l_Lean_Name_append(v___x_2551_, v___x_2550_);
return v___x_2552_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8(void){
_start:
{
lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2554_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7));
v___x_2555_ = l_Lean_stringToMessageData(v___x_2554_);
return v___x_2555_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2));
v___x_2557_ = l_Lean_stringToMessageData(v___x_2556_);
return v___x_2557_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2559_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10));
v___x_2560_ = l_Lean_stringToMessageData(v___x_2559_);
return v___x_2560_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12));
v___x_2563_ = l_Lean_stringToMessageData(v___x_2562_);
return v___x_2563_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15(void){
_start:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2565_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14));
v___x_2566_ = l_Lean_stringToMessageData(v___x_2565_);
return v___x_2566_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17(void){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2568_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16));
v___x_2569_ = l_Lean_stringToMessageData(v___x_2568_);
return v___x_2569_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19(void){
_start:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2571_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18));
v___x_2572_ = l_Lean_stringToMessageData(v___x_2571_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(lean_object* v_val_2573_, lean_object* v_val_2574_, lean_object* v_upperBound_2575_, lean_object* v_args_2576_, lean_object* v_e_2577_, lean_object* v_next_2578_, lean_object* v_params_2579_, lean_object* v___x_2580_, lean_object* v___x_2581_, lean_object* v_a_2582_, lean_object* v_b_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
lean_object* v_a_2590_; lean_object* v___y_2595_; uint8_t v___x_2614_; 
v___x_2614_ = lean_nat_dec_lt(v_a_2582_, v_upperBound_2575_);
if (v___x_2614_ == 0)
{
lean_object* v___x_2615_; 
lean_dec(v_a_2582_);
lean_dec_ref(v_e_2577_);
lean_dec(v_val_2574_);
v___x_2615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2615_, 0, v_b_2583_);
return v___x_2615_;
}
else
{
lean_object* v___x_2616_; lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2616_ = lean_box(0);
v___x_2623_ = l_Lean_instInhabitedExpr;
v___x_2624_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2573_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v_a_2625_; uint8_t v___x_2626_; 
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
lean_inc(v_a_2625_);
lean_dec_ref_known(v___x_2624_, 1);
v___x_2626_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_val_2574_, v_a_2582_, v_a_2625_);
lean_dec(v_a_2625_);
if (v___x_2626_ == 0)
{
v_a_2590_ = v___x_2616_;
goto v___jp_2589_;
}
else
{
lean_object* v___x_2627_; uint8_t v___x_2628_; 
v___x_2627_ = lean_array_get_size(v_args_2576_);
v___x_2628_ = lean_nat_dec_lt(v_a_2582_, v___x_2627_);
if (v___x_2628_ == 0)
{
lean_object* v_toCold_2629_; lean_object* v_options_2630_; uint8_t v_hasTrace_2631_; 
v_toCold_2629_ = lean_ctor_get(v___y_2586_, 0);
v_options_2630_ = lean_ctor_get(v_toCold_2629_, 2);
v_hasTrace_2631_ = lean_ctor_get_uint8(v_options_2630_, sizeof(void*)*1);
if (v_hasTrace_2631_ == 0)
{
goto v___jp_2619_;
}
else
{
lean_object* v_inheritedTraceOptions_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; uint8_t v___x_2635_; 
v_inheritedTraceOptions_2632_ = lean_ctor_get(v_toCold_2629_, 11);
v___x_2633_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2634_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2635_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2632_, v_options_2630_, v___x_2634_);
if (v___x_2635_ == 0)
{
goto v___jp_2619_;
}
else
{
lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; 
v___x_2636_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2574_);
v___x_2637_ = l_Nat_reprFast(v_val_2574_);
v___x_2638_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2637_);
v___x_2639_ = l_Lean_MessageData_ofFormat(v___x_2638_);
v___x_2640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2636_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
v___x_2641_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2642_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2640_);
lean_ctor_set(v___x_2642_, 1, v___x_2641_);
lean_inc(v_a_2582_);
v___x_2643_ = l_Nat_reprFast(v_a_2582_);
v___x_2644_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2643_);
v___x_2645_ = l_Lean_MessageData_ofFormat(v___x_2644_);
lean_inc_ref(v___x_2645_);
v___x_2646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2642_);
lean_ctor_set(v___x_2646_, 1, v___x_2645_);
v___x_2647_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2648_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2646_);
lean_ctor_set(v___x_2648_, 1, v___x_2647_);
lean_inc_ref(v_e_2577_);
v___x_2649_ = l_Lean_MessageData_ofExpr(v_e_2577_);
v___x_2650_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2648_);
lean_ctor_set(v___x_2650_, 1, v___x_2649_);
v___x_2651_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13);
v___x_2652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2650_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2652_);
lean_ctor_set(v___x_2653_, 1, v___x_2645_);
v___x_2654_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2633_, v___x_2653_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v___x_2656_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2654_, 1);
lean_inc(v_a_2582_);
v___x_2656_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2573_, v_val_2574_, v_a_2582_, v___x_2616_, v_a_2655_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
v___y_2595_ = v___x_2656_;
goto v___jp_2594_;
}
else
{
lean_dec(v_a_2582_);
lean_dec_ref(v_e_2577_);
lean_dec(v_val_2574_);
return v___x_2654_;
}
}
}
}
else
{
lean_object* v___x_2657_; lean_object* v___x_2658_; 
v___x_2657_ = lean_array_fget_borrowed(v_args_2576_, v_a_2582_);
v___x_2658_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_2573_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; lean_object* v___x_2660_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v___x_2660_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_val_2574_, v_a_2582_, v_next_2578_, v_a_2659_);
lean_dec(v_a_2659_);
if (lean_obj_tag(v___x_2660_) == 1)
{
lean_object* v_val_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2762_; 
v_val_2661_ = lean_ctor_get(v___x_2660_, 0);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___x_2660_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2663_ = v___x_2660_;
v_isShared_2664_ = v_isSharedCheck_2762_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_val_2661_);
lean_dec(v___x_2660_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2762_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2665_; uint8_t v_foApprox_2666_; uint8_t v_ctxApprox_2667_; uint8_t v_quasiPatternApprox_2668_; uint8_t v_constApprox_2669_; uint8_t v_isDefEqStuckEx_2670_; uint8_t v_unificationHints_2671_; uint8_t v_assignSyntheticOpaque_2672_; uint8_t v_offsetCnstrs_2673_; uint8_t v_transparency_2674_; uint8_t v_etaStruct_2675_; uint8_t v_univApprox_2676_; uint8_t v_iota_2677_; uint8_t v_beta_2678_; uint8_t v_proj_2679_; uint8_t v_zeta_2680_; uint8_t v_zetaDelta_2681_; uint8_t v_zetaUnused_2682_; uint8_t v_zetaHave_2683_; uint8_t v_canUnfoldPredicateConfig_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2761_; 
v___x_2665_ = l_Lean_Meta_Context_config(v___y_2584_);
v_foApprox_2666_ = lean_ctor_get_uint8(v___x_2665_, 0);
v_ctxApprox_2667_ = lean_ctor_get_uint8(v___x_2665_, 1);
v_quasiPatternApprox_2668_ = lean_ctor_get_uint8(v___x_2665_, 2);
v_constApprox_2669_ = lean_ctor_get_uint8(v___x_2665_, 3);
v_isDefEqStuckEx_2670_ = lean_ctor_get_uint8(v___x_2665_, 4);
v_unificationHints_2671_ = lean_ctor_get_uint8(v___x_2665_, 5);
v_assignSyntheticOpaque_2672_ = lean_ctor_get_uint8(v___x_2665_, 7);
v_offsetCnstrs_2673_ = lean_ctor_get_uint8(v___x_2665_, 8);
v_transparency_2674_ = lean_ctor_get_uint8(v___x_2665_, 9);
v_etaStruct_2675_ = lean_ctor_get_uint8(v___x_2665_, 10);
v_univApprox_2676_ = lean_ctor_get_uint8(v___x_2665_, 11);
v_iota_2677_ = lean_ctor_get_uint8(v___x_2665_, 12);
v_beta_2678_ = lean_ctor_get_uint8(v___x_2665_, 13);
v_proj_2679_ = lean_ctor_get_uint8(v___x_2665_, 14);
v_zeta_2680_ = lean_ctor_get_uint8(v___x_2665_, 15);
v_zetaDelta_2681_ = lean_ctor_get_uint8(v___x_2665_, 16);
v_zetaUnused_2682_ = lean_ctor_get_uint8(v___x_2665_, 17);
v_zetaHave_2683_ = lean_ctor_get_uint8(v___x_2665_, 18);
v_canUnfoldPredicateConfig_2684_ = lean_ctor_get_uint8(v___x_2665_, 19);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2686_ = v___x_2665_;
v_isShared_2687_ = v_isSharedCheck_2761_;
goto v_resetjp_2685_;
}
else
{
lean_dec(v___x_2665_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2761_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
uint8_t v_trackZetaDelta_2688_; lean_object* v_zetaDeltaSet_2689_; lean_object* v_lctx_2690_; lean_object* v_localInstances_2691_; lean_object* v_defEqCtx_x3f_2692_; lean_object* v_synthPendingDepth_2693_; lean_object* v_customCanUnfoldPredicate_x3f_2694_; uint8_t v_univApprox_2695_; uint8_t v_inTypeClassResolution_2696_; uint8_t v_cacheInferType_2697_; uint8_t v___x_2698_; lean_object* v___x_2700_; 
v_trackZetaDelta_2688_ = lean_ctor_get_uint8(v___y_2584_, sizeof(void*)*7);
v_zetaDeltaSet_2689_ = lean_ctor_get(v___y_2584_, 1);
v_lctx_2690_ = lean_ctor_get(v___y_2584_, 2);
v_localInstances_2691_ = lean_ctor_get(v___y_2584_, 3);
v_defEqCtx_x3f_2692_ = lean_ctor_get(v___y_2584_, 4);
v_synthPendingDepth_2693_ = lean_ctor_get(v___y_2584_, 5);
v_customCanUnfoldPredicate_x3f_2694_ = lean_ctor_get(v___y_2584_, 6);
v_univApprox_2695_ = lean_ctor_get_uint8(v___y_2584_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2696_ = lean_ctor_get_uint8(v___y_2584_, sizeof(void*)*7 + 2);
v_cacheInferType_2697_ = lean_ctor_get_uint8(v___y_2584_, sizeof(void*)*7 + 3);
v___x_2698_ = 0;
if (v_isShared_2687_ == 0)
{
v___x_2700_ = v___x_2686_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 0, v_foApprox_2666_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 1, v_ctxApprox_2667_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 2, v_quasiPatternApprox_2668_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 3, v_constApprox_2669_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 4, v_isDefEqStuckEx_2670_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 5, v_unificationHints_2671_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 7, v_assignSyntheticOpaque_2672_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 8, v_offsetCnstrs_2673_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 9, v_transparency_2674_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 10, v_etaStruct_2675_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 11, v_univApprox_2676_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 12, v_iota_2677_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 13, v_beta_2678_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 14, v_proj_2679_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 15, v_zeta_2680_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 16, v_zetaDelta_2681_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 17, v_zetaUnused_2682_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 18, v_zetaHave_2683_);
lean_ctor_set_uint8(v_reuseFailAlloc_2760_, 19, v_canUnfoldPredicateConfig_2684_);
v___x_2700_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
uint64_t v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; uint8_t v_transparency_2705_; lean_object* v___x_2706_; lean_object* v___y_2708_; uint8_t v___x_2754_; uint8_t v___x_2755_; 
lean_ctor_set_uint8(v___x_2700_, 6, v___x_2698_);
v___x_2701_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2700_);
v___x_2702_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2702_, 0, v___x_2700_);
lean_ctor_set_uint64(v___x_2702_, sizeof(void*)*1, v___x_2701_);
lean_inc(v_customCanUnfoldPredicate_x3f_2694_);
lean_inc(v_synthPendingDepth_2693_);
lean_inc(v_defEqCtx_x3f_2692_);
lean_inc_ref(v_localInstances_2691_);
lean_inc_ref(v_lctx_2690_);
lean_inc(v_zetaDeltaSet_2689_);
lean_inc_ref(v___x_2702_);
v___x_2703_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2703_, 0, v___x_2702_);
lean_ctor_set(v___x_2703_, 1, v_zetaDeltaSet_2689_);
lean_ctor_set(v___x_2703_, 2, v_lctx_2690_);
lean_ctor_set(v___x_2703_, 3, v_localInstances_2691_);
lean_ctor_set(v___x_2703_, 4, v_defEqCtx_x3f_2692_);
lean_ctor_set(v___x_2703_, 5, v_synthPendingDepth_2693_);
lean_ctor_set(v___x_2703_, 6, v_customCanUnfoldPredicate_x3f_2694_);
lean_ctor_set_uint8(v___x_2703_, sizeof(void*)*7, v_trackZetaDelta_2688_);
lean_ctor_set_uint8(v___x_2703_, sizeof(void*)*7 + 1, v_univApprox_2695_);
lean_ctor_set_uint8(v___x_2703_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2696_);
lean_ctor_set_uint8(v___x_2703_, sizeof(void*)*7 + 3, v_cacheInferType_2697_);
v___x_2704_ = l_Lean_Meta_Context_config(v___x_2703_);
v_transparency_2705_ = lean_ctor_get_uint8(v___x_2704_, 9);
lean_dec_ref(v___x_2704_);
v___x_2706_ = lean_array_get_borrowed(v___x_2623_, v_params_2579_, v_val_2661_);
lean_dec(v_val_2661_);
v___x_2754_ = 2;
v___x_2755_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2705_, v___x_2754_);
if (v___x_2755_ == 0)
{
lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
lean_dec_ref_known(v___x_2703_, 7);
v___x_2756_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2754_, v___x_2702_);
lean_inc(v_customCanUnfoldPredicate_x3f_2694_);
lean_inc(v_synthPendingDepth_2693_);
lean_inc(v_defEqCtx_x3f_2692_);
lean_inc_ref(v_localInstances_2691_);
lean_inc_ref(v_lctx_2690_);
lean_inc(v_zetaDeltaSet_2689_);
v___x_2757_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2757_, 0, v___x_2756_);
lean_ctor_set(v___x_2757_, 1, v_zetaDeltaSet_2689_);
lean_ctor_set(v___x_2757_, 2, v_lctx_2690_);
lean_ctor_set(v___x_2757_, 3, v_localInstances_2691_);
lean_ctor_set(v___x_2757_, 4, v_defEqCtx_x3f_2692_);
lean_ctor_set(v___x_2757_, 5, v_synthPendingDepth_2693_);
lean_ctor_set(v___x_2757_, 6, v_customCanUnfoldPredicate_x3f_2694_);
lean_ctor_set_uint8(v___x_2757_, sizeof(void*)*7, v_trackZetaDelta_2688_);
lean_ctor_set_uint8(v___x_2757_, sizeof(void*)*7 + 1, v_univApprox_2695_);
lean_ctor_set_uint8(v___x_2757_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2696_);
lean_ctor_set_uint8(v___x_2757_, sizeof(void*)*7 + 3, v_cacheInferType_2697_);
lean_inc(v___x_2657_);
lean_inc(v___x_2706_);
v___x_2758_ = l_Lean_Meta_isExprDefEq(v___x_2706_, v___x_2657_, v___x_2757_, v___y_2585_, v___y_2586_, v___y_2587_);
lean_dec_ref_known(v___x_2757_, 7);
v___y_2708_ = v___x_2758_;
goto v___jp_2707_;
}
else
{
lean_object* v___x_2759_; 
lean_dec_ref_known(v___x_2702_, 1);
lean_inc(v___x_2657_);
lean_inc(v___x_2706_);
v___x_2759_ = l_Lean_Meta_isExprDefEq(v___x_2706_, v___x_2657_, v___x_2703_, v___y_2585_, v___y_2586_, v___y_2587_);
lean_dec_ref_known(v___x_2703_, 7);
v___y_2708_ = v___x_2759_;
goto v___jp_2707_;
}
v___jp_2707_:
{
if (lean_obj_tag(v___y_2708_) == 0)
{
lean_object* v_a_2709_; uint8_t v___x_2710_; 
v_a_2709_ = lean_ctor_get(v___y_2708_, 0);
lean_inc(v_a_2709_);
lean_dec_ref_known(v___y_2708_, 1);
v___x_2710_ = lean_unbox(v_a_2709_);
lean_dec(v_a_2709_);
if (v___x_2710_ == 0)
{
lean_object* v_toCold_2711_; lean_object* v_options_2712_; uint8_t v_hasTrace_2713_; 
v_toCold_2711_ = lean_ctor_get(v___y_2586_, 0);
v_options_2712_ = lean_ctor_get(v_toCold_2711_, 2);
v_hasTrace_2713_ = lean_ctor_get_uint8(v_options_2712_, sizeof(void*)*1);
if (v_hasTrace_2713_ == 0)
{
lean_del_object(v___x_2663_);
goto v___jp_2621_;
}
else
{
lean_object* v_inheritedTraceOptions_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; uint8_t v___x_2717_; 
v_inheritedTraceOptions_2714_ = lean_ctor_get(v_toCold_2711_, 11);
v___x_2715_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2716_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2717_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2714_, v_options_2712_, v___x_2716_);
if (v___x_2717_ == 0)
{
lean_del_object(v___x_2663_);
goto v___jp_2621_;
}
else
{
lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2721_; 
v___x_2718_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2574_);
v___x_2719_ = l_Nat_reprFast(v_val_2574_);
if (v_isShared_2664_ == 0)
{
lean_ctor_set_tag(v___x_2663_, 3);
lean_ctor_set(v___x_2663_, 0, v___x_2719_);
v___x_2721_ = v___x_2663_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v___x_2719_);
v___x_2721_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2722_ = l_Lean_MessageData_ofFormat(v___x_2721_);
v___x_2723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2718_);
lean_ctor_set(v___x_2723_, 1, v___x_2722_);
v___x_2724_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2723_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
lean_inc(v_a_2582_);
v___x_2726_ = l_Nat_reprFast(v_a_2582_);
v___x_2727_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2726_);
v___x_2728_ = l_Lean_MessageData_ofFormat(v___x_2727_);
v___x_2729_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2725_);
lean_ctor_set(v___x_2729_, 1, v___x_2728_);
v___x_2730_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2729_);
lean_ctor_set(v___x_2731_, 1, v___x_2730_);
lean_inc_ref(v_e_2577_);
v___x_2732_ = l_Lean_MessageData_ofExpr(v_e_2577_);
v___x_2733_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2733_, 0, v___x_2731_);
lean_ctor_set(v___x_2733_, 1, v___x_2732_);
v___x_2734_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_2735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2735_, 0, v___x_2733_);
lean_ctor_set(v___x_2735_, 1, v___x_2734_);
lean_inc(v___x_2706_);
v___x_2736_ = l_Lean_MessageData_ofExpr(v___x_2706_);
v___x_2737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2735_);
lean_ctor_set(v___x_2737_, 1, v___x_2736_);
v___x_2738_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17);
v___x_2739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2739_, 0, v___x_2737_);
lean_ctor_set(v___x_2739_, 1, v___x_2738_);
lean_inc(v___x_2657_);
v___x_2740_ = l_Lean_MessageData_ofExpr(v___x_2657_);
v___x_2741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2739_);
lean_ctor_set(v___x_2741_, 1, v___x_2740_);
v___x_2742_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2715_, v___x_2741_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
if (lean_obj_tag(v___x_2742_) == 0)
{
lean_object* v_a_2743_; lean_object* v___x_2744_; 
v_a_2743_ = lean_ctor_get(v___x_2742_, 0);
lean_inc(v_a_2743_);
lean_dec_ref_known(v___x_2742_, 1);
lean_inc(v_a_2582_);
v___x_2744_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2573_, v_val_2574_, v_a_2582_, v___x_2616_, v_a_2743_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
v___y_2595_ = v___x_2744_;
goto v___jp_2594_;
}
else
{
lean_dec(v_a_2582_);
lean_dec_ref(v_e_2577_);
lean_dec(v_val_2574_);
return v___x_2742_;
}
}
}
}
}
else
{
lean_del_object(v___x_2663_);
v_a_2590_ = v___x_2616_;
goto v___jp_2589_;
}
}
else
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2753_; 
lean_del_object(v___x_2663_);
lean_dec(v_a_2582_);
lean_dec_ref(v_e_2577_);
lean_dec(v_val_2574_);
v_a_2746_ = lean_ctor_get(v___y_2708_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___y_2708_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2748_ = v___y_2708_;
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___y_2708_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_a_2746_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
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
lean_object* v___x_2763_; uint8_t v___x_2764_; lean_object* v___x_2765_; 
lean_dec(v___x_2660_);
v___x_2763_ = lean_unsigned_to_nat(0u);
v___x_2764_ = 0;
lean_inc(v___x_2657_);
lean_inc(v_a_2582_);
v___x_2765_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_2573_, v_val_2574_, v_a_2582_, v_next_2578_, v___x_2580_, v___x_2581_, v___x_2580_, v_params_2579_, v___x_2657_, v___x_2763_, v___x_2764_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; uint8_t v___x_2767_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v___x_2765_, 1);
v___x_2767_ = lean_unbox(v_a_2766_);
lean_dec(v_a_2766_);
if (v___x_2767_ == 0)
{
lean_object* v_toCold_2768_; lean_object* v_options_2769_; uint8_t v_hasTrace_2770_; 
v_toCold_2768_ = lean_ctor_get(v___y_2586_, 0);
v_options_2769_ = lean_ctor_get(v_toCold_2768_, 2);
v_hasTrace_2770_ = lean_ctor_get_uint8(v_options_2769_, sizeof(void*)*1);
if (v_hasTrace_2770_ == 0)
{
goto v___jp_2617_;
}
else
{
lean_object* v_inheritedTraceOptions_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; uint8_t v___x_2774_; 
v_inheritedTraceOptions_2771_ = lean_ctor_get(v_toCold_2768_, 11);
v___x_2772_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_2773_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_2774_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2771_, v_options_2769_, v___x_2773_);
if (v___x_2774_ == 0)
{
goto v___jp_2617_;
}
else
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2775_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_2574_);
v___x_2776_ = l_Nat_reprFast(v_val_2574_);
v___x_2777_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2776_);
v___x_2778_ = l_Lean_MessageData_ofFormat(v___x_2777_);
v___x_2779_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2775_);
lean_ctor_set(v___x_2779_, 1, v___x_2778_);
v___x_2780_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_2781_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2779_);
lean_ctor_set(v___x_2781_, 1, v___x_2780_);
lean_inc(v_a_2582_);
v___x_2782_ = l_Nat_reprFast(v_a_2582_);
v___x_2783_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2782_);
v___x_2784_ = l_Lean_MessageData_ofFormat(v___x_2783_);
v___x_2785_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2781_);
lean_ctor_set(v___x_2785_, 1, v___x_2784_);
v___x_2786_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_2787_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2785_);
lean_ctor_set(v___x_2787_, 1, v___x_2786_);
lean_inc_ref(v_e_2577_);
v___x_2788_ = l_Lean_MessageData_ofExpr(v_e_2577_);
v___x_2789_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2789_, 0, v___x_2787_);
lean_ctor_set(v___x_2789_, 1, v___x_2788_);
v___x_2790_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_2791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2789_);
lean_ctor_set(v___x_2791_, 1, v___x_2790_);
lean_inc(v___x_2657_);
v___x_2792_ = l_Lean_MessageData_ofExpr(v___x_2657_);
v___x_2793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2791_);
lean_ctor_set(v___x_2793_, 1, v___x_2792_);
v___x_2794_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19);
v___x_2795_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2793_);
lean_ctor_set(v___x_2795_, 1, v___x_2794_);
v___x_2796_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_2772_, v___x_2795_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
if (lean_obj_tag(v___x_2796_) == 0)
{
lean_object* v_a_2797_; lean_object* v___x_2798_; 
v_a_2797_ = lean_ctor_get(v___x_2796_, 0);
lean_inc(v_a_2797_);
lean_dec_ref_known(v___x_2796_, 1);
lean_inc(v_a_2582_);
v___x_2798_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2573_, v_val_2574_, v_a_2582_, v___x_2616_, v_a_2797_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
v___y_2595_ = v___x_2798_;
goto v___jp_2594_;
}
else
{
lean_dec(v_a_2582_);
lean_dec_ref(v_e_2577_);
lean_dec(v_val_2574_);
return v___x_2796_;
}
}
}
}
else
{
v_a_2590_ = v___x_2616_;
goto v___jp_2589_;
}
}
else
{
lean_object* v_a_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2806_; 
lean_dec(v_a_2582_);
lean_dec_ref(v_e_2577_);
lean_dec(v_val_2574_);
v_a_2799_ = lean_ctor_get(v___x_2765_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2801_ = v___x_2765_;
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_a_2799_);
lean_dec(v___x_2765_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2804_; 
if (v_isShared_2802_ == 0)
{
v___x_2804_ = v___x_2801_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v_a_2799_);
v___x_2804_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
return v___x_2804_;
}
}
}
}
}
else
{
lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
lean_dec(v_a_2582_);
lean_dec_ref(v_e_2577_);
lean_dec(v_val_2574_);
v_a_2807_ = lean_ctor_get(v___x_2658_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2658_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2809_ = v___x_2658_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_dec(v___x_2658_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2807_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
}
}
else
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2822_; 
lean_dec(v_a_2582_);
lean_dec_ref(v_e_2577_);
lean_dec(v_val_2574_);
v_a_2815_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2817_ = v___x_2624_;
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2624_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2820_; 
if (v_isShared_2818_ == 0)
{
v___x_2820_ = v___x_2817_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v_a_2815_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
v___jp_2617_:
{
lean_object* v___x_2618_; 
lean_inc(v_a_2582_);
v___x_2618_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2573_, v_val_2574_, v_a_2582_, v___x_2616_, v___x_2616_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
v___y_2595_ = v___x_2618_;
goto v___jp_2594_;
}
v___jp_2619_:
{
lean_object* v___x_2620_; 
lean_inc(v_a_2582_);
v___x_2620_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2573_, v_val_2574_, v_a_2582_, v___x_2616_, v___x_2616_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
v___y_2595_ = v___x_2620_;
goto v___jp_2594_;
}
v___jp_2621_:
{
lean_object* v___x_2622_; 
lean_inc(v_a_2582_);
v___x_2622_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_2573_, v_val_2574_, v_a_2582_, v___x_2616_, v___x_2616_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
v___y_2595_ = v___x_2622_;
goto v___jp_2594_;
}
}
v___jp_2589_:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2591_ = lean_unsigned_to_nat(1u);
v___x_2592_ = lean_nat_add(v_a_2582_, v___x_2591_);
lean_dec(v_a_2582_);
v_a_2582_ = v___x_2592_;
v_b_2583_ = v_a_2590_;
goto _start;
}
v___jp_2594_:
{
if (lean_obj_tag(v___y_2595_) == 0)
{
lean_object* v_a_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2605_; 
v_a_2596_ = lean_ctor_get(v___y_2595_, 0);
v_isSharedCheck_2605_ = !lean_is_exclusive(v___y_2595_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2598_ = v___y_2595_;
v_isShared_2599_ = v_isSharedCheck_2605_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_a_2596_);
lean_dec(v___y_2595_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2605_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
if (lean_obj_tag(v_a_2596_) == 0)
{
lean_object* v_a_2600_; lean_object* v___x_2602_; 
lean_dec(v_a_2582_);
lean_dec_ref(v_e_2577_);
lean_dec(v_val_2574_);
v_a_2600_ = lean_ctor_get(v_a_2596_, 0);
lean_inc(v_a_2600_);
lean_dec_ref_known(v_a_2596_, 1);
if (v_isShared_2599_ == 0)
{
lean_ctor_set(v___x_2598_, 0, v_a_2600_);
v___x_2602_ = v___x_2598_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_a_2600_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
else
{
lean_object* v_a_2604_; 
lean_del_object(v___x_2598_);
v_a_2604_ = lean_ctor_get(v_a_2596_, 0);
lean_inc(v_a_2604_);
lean_dec_ref_known(v_a_2596_, 1);
v_a_2590_ = v_a_2604_;
goto v___jp_2589_;
}
}
}
else
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2613_; 
lean_dec(v_a_2582_);
lean_dec_ref(v_e_2577_);
lean_dec(v_val_2574_);
v_a_2606_ = lean_ctor_get(v___y_2595_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___y_2595_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2608_ = v___y_2595_;
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___y_2595_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2611_; 
if (v_isShared_2609_ == 0)
{
v___x_2611_ = v___x_2608_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2606_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___boxed(lean_object* v_val_2823_, lean_object* v_val_2824_, lean_object* v_upperBound_2825_, lean_object* v_args_2826_, lean_object* v_e_2827_, lean_object* v_next_2828_, lean_object* v_params_2829_, lean_object* v___x_2830_, lean_object* v___x_2831_, lean_object* v_a_2832_, lean_object* v_b_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_){
_start:
{
lean_object* v_res_2839_; 
v_res_2839_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_2823_, v_val_2824_, v_upperBound_2825_, v_args_2826_, v_e_2827_, v_next_2828_, v_params_2829_, v___x_2830_, v___x_2831_, v_a_2832_, v_b_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___x_2831_);
lean_dec(v___x_2830_);
lean_dec_ref(v_params_2829_);
lean_dec(v_next_2828_);
lean_dec_ref(v_args_2826_);
lean_dec(v_upperBound_2825_);
lean_dec(v_val_2823_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object* v_preDefs_2842_, lean_object* v___x_2843_, lean_object* v_val_2844_, lean_object* v_e_2845_, lean_object* v_next_2846_, lean_object* v_params_2847_, lean_object* v___x_2848_, lean_object* v___x_2849_, lean_object* v_x_2850_, lean_object* v_x_2851_, lean_object* v_x_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
if (lean_obj_tag(v_x_2850_) == 5)
{
lean_object* v_fn_2858_; lean_object* v_arg_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; 
v_fn_2858_ = lean_ctor_get(v_x_2850_, 0);
lean_inc_ref(v_fn_2858_);
v_arg_2859_ = lean_ctor_get(v_x_2850_, 1);
lean_inc_ref(v_arg_2859_);
lean_dec_ref_known(v_x_2850_, 2);
v___x_2860_ = lean_array_set(v_x_2851_, v_x_2852_, v_arg_2859_);
v___x_2861_ = lean_unsigned_to_nat(1u);
v___x_2862_ = lean_nat_sub(v_x_2852_, v___x_2861_);
lean_dec(v_x_2852_);
v_x_2850_ = v_fn_2858_;
v_x_2851_ = v___x_2860_;
v_x_2852_ = v___x_2862_;
goto _start;
}
else
{
uint8_t v___x_2864_; 
lean_dec(v_x_2852_);
v___x_2864_ = l_Lean_Expr_isConst(v_x_2850_);
if (v___x_2864_ == 0)
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
lean_dec_ref(v_x_2851_);
lean_dec_ref(v_x_2850_);
lean_dec_ref(v_e_2845_);
v___x_2865_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_2866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2865_);
return v___x_2866_;
}
else
{
lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2867_ = l_Lean_Expr_constName_x21(v_x_2850_);
lean_dec_ref(v_x_2850_);
v___x_2868_ = lean_unsigned_to_nat(0u);
v___x_2869_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_2867_, v_preDefs_2842_, v___x_2868_);
lean_dec(v___x_2867_);
if (lean_obj_tag(v___x_2869_) == 1)
{
lean_object* v_val_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
v_val_2870_ = lean_ctor_get(v___x_2869_, 0);
lean_inc(v_val_2870_);
lean_dec_ref_known(v___x_2869_, 1);
v___x_2871_ = lean_box(0);
v___x_2872_ = lean_array_get_borrowed(v___x_2868_, v___x_2843_, v_val_2870_);
v___x_2873_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_2844_, v_val_2870_, v___x_2872_, v_x_2851_, v_e_2845_, v_next_2846_, v_params_2847_, v___x_2848_, v___x_2849_, v___x_2868_, v___x_2871_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
lean_dec_ref(v_x_2851_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2881_; 
v_isSharedCheck_2881_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2881_ == 0)
{
lean_object* v_unused_2882_; 
v_unused_2882_ = lean_ctor_get(v___x_2873_, 0);
lean_dec(v_unused_2882_);
v___x_2875_ = v___x_2873_;
v_isShared_2876_ = v_isSharedCheck_2881_;
goto v_resetjp_2874_;
}
else
{
lean_dec(v___x_2873_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2881_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2877_; lean_object* v___x_2879_; 
v___x_2877_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
if (v_isShared_2876_ == 0)
{
lean_ctor_set(v___x_2875_, 0, v___x_2877_);
v___x_2879_ = v___x_2875_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v___x_2877_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
}
else
{
lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2890_; 
v_a_2883_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2885_ = v___x_2873_;
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_dec(v___x_2873_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2888_; 
if (v_isShared_2886_ == 0)
{
v___x_2888_ = v___x_2885_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_a_2883_);
v___x_2888_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
return v___x_2888_;
}
}
}
}
else
{
lean_object* v___x_2891_; lean_object* v___x_2892_; 
lean_dec(v___x_2869_);
lean_dec_ref(v_x_2851_);
lean_dec_ref(v_e_2845_);
v___x_2891_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0));
v___x_2892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2891_);
return v___x_2892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object* v_preDefs_2893_, lean_object* v___x_2894_, lean_object* v_val_2895_, lean_object* v_e_2896_, lean_object* v_next_2897_, lean_object* v_params_2898_, lean_object* v___x_2899_, lean_object* v___x_2900_, lean_object* v_x_2901_, lean_object* v_x_2902_, lean_object* v_x_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_){
_start:
{
lean_object* v_res_2909_; 
v_res_2909_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_2893_, v___x_2894_, v_val_2895_, v_e_2896_, v_next_2897_, v_params_2898_, v___x_2899_, v___x_2900_, v_x_2901_, v_x_2902_, v_x_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec(v___x_2900_);
lean_dec(v___x_2899_);
lean_dec_ref(v_params_2898_);
lean_dec(v_next_2897_);
lean_dec(v_val_2895_);
lean_dec_ref(v___x_2894_);
lean_dec_ref(v_preDefs_2893_);
return v_res_2909_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(lean_object* v_preDefs_2910_, lean_object* v___x_2911_, lean_object* v_val_2912_, lean_object* v_a_2913_, lean_object* v_params_2914_, lean_object* v___x_2915_, lean_object* v___x_2916_, lean_object* v_e_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_){
_start:
{
lean_object* v_dummy_2923_; lean_object* v_nargs_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v_dummy_2923_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__2, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__2_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__2);
v_nargs_2924_ = l_Lean_Expr_getAppNumArgs(v_e_2917_);
lean_inc(v_nargs_2924_);
v___x_2925_ = lean_mk_array(v_nargs_2924_, v_dummy_2923_);
v___x_2926_ = lean_unsigned_to_nat(1u);
v___x_2927_ = lean_nat_sub(v_nargs_2924_, v___x_2926_);
lean_dec(v_nargs_2924_);
lean_inc_ref(v_e_2917_);
v___x_2928_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_2910_, v___x_2911_, v_val_2912_, v_e_2917_, v_a_2913_, v_params_2914_, v___x_2915_, v___x_2916_, v_e_2917_, v___x_2925_, v___x_2927_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_);
return v___x_2928_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed(lean_object* v_preDefs_2929_, lean_object* v___x_2930_, lean_object* v_val_2931_, lean_object* v_a_2932_, lean_object* v_params_2933_, lean_object* v___x_2934_, lean_object* v___x_2935_, lean_object* v_e_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_){
_start:
{
lean_object* v_res_2942_; 
v_res_2942_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(v_preDefs_2929_, v___x_2930_, v_val_2931_, v_a_2932_, v_params_2933_, v___x_2934_, v___x_2935_, v_e_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
lean_dec(v___y_2940_);
lean_dec_ref(v___y_2939_);
lean_dec(v___y_2938_);
lean_dec_ref(v___y_2937_);
lean_dec(v___x_2935_);
lean_dec(v___x_2934_);
lean_dec_ref(v_params_2933_);
lean_dec(v_a_2932_);
lean_dec(v_val_2931_);
lean_dec_ref(v___x_2930_);
lean_dec_ref(v_preDefs_2929_);
return v_res_2942_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2946_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2));
v___x_2947_ = lean_unsigned_to_nat(6u);
v___x_2948_ = lean_unsigned_to_nat(201u);
v___x_2949_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1));
v___x_2950_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_2951_ = l_mkPanicMessageWithDecl(v___x_2950_, v___x_2949_, v___x_2948_, v___x_2947_, v___x_2946_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(lean_object* v___x_2952_, lean_object* v___x_2953_, lean_object* v_a_2954_, lean_object* v_preDefs_2955_, lean_object* v_val_2956_, lean_object* v___f_2957_, lean_object* v___x_2958_, lean_object* v_params_2959_, lean_object* v_body_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_){
_start:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; uint8_t v___x_2968_; 
v___x_2966_ = lean_array_get_size(v_params_2959_);
v___x_2967_ = lean_array_get(v___x_2952_, v___x_2953_, v_a_2954_);
v___x_2968_ = lean_nat_dec_eq(v___x_2966_, v___x_2967_);
if (v___x_2968_ == 0)
{
lean_object* v___x_2969_; lean_object* v___x_2970_; 
lean_dec(v___x_2967_);
lean_dec_ref(v_body_2960_);
lean_dec_ref(v_params_2959_);
lean_dec_ref(v___f_2957_);
lean_dec(v_val_2956_);
lean_dec_ref(v_preDefs_2955_);
lean_dec(v_a_2954_);
lean_dec_ref(v___x_2953_);
v___x_2969_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3);
v___x_2970_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_2969_, v___y_2961_, v___y_2962_, v___y_2963_, v___y_2964_);
return v___x_2970_;
}
else
{
lean_object* v___f_2971_; uint8_t v___x_2972_; lean_object* v___x_2973_; 
v___f_2971_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed), 13, 7);
lean_closure_set(v___f_2971_, 0, v_preDefs_2955_);
lean_closure_set(v___f_2971_, 1, v___x_2953_);
lean_closure_set(v___f_2971_, 2, v_val_2956_);
lean_closure_set(v___f_2971_, 3, v_a_2954_);
lean_closure_set(v___f_2971_, 4, v_params_2959_);
lean_closure_set(v___f_2971_, 5, v___x_2966_);
lean_closure_set(v___f_2971_, 6, v___x_2967_);
v___x_2972_ = 0;
v___x_2973_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_body_2960_, v___f_2971_, v___f_2957_, v___x_2972_, v___x_2968_, v___y_2961_, v___y_2962_, v___y_2963_, v___y_2964_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2980_; 
v_isSharedCheck_2980_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_2980_ == 0)
{
lean_object* v_unused_2981_; 
v_unused_2981_ = lean_ctor_get(v___x_2973_, 0);
lean_dec(v_unused_2981_);
v___x_2975_ = v___x_2973_;
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
else
{
lean_dec(v___x_2973_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2978_; 
if (v_isShared_2976_ == 0)
{
lean_ctor_set(v___x_2975_, 0, v___x_2958_);
v___x_2978_ = v___x_2975_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v___x_2958_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2989_; 
v_a_2982_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2984_ = v___x_2973_;
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2973_);
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
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed(lean_object* v___x_2990_, lean_object* v___x_2991_, lean_object* v_a_2992_, lean_object* v_preDefs_2993_, lean_object* v_val_2994_, lean_object* v___f_2995_, lean_object* v___x_2996_, lean_object* v_params_2997_, lean_object* v_body_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_){
_start:
{
lean_object* v_res_3004_; 
v_res_3004_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(v___x_2990_, v___x_2991_, v_a_2992_, v_preDefs_2993_, v_val_2994_, v___f_2995_, v___x_2996_, v_params_2997_, v_body_2998_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
lean_dec(v___y_3000_);
lean_dec_ref(v___y_2999_);
lean_dec(v___x_2990_);
return v_res_3004_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(lean_object* v_e_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_){
_start:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3011_, 0, v_e_3005_);
v___x_3012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3011_);
return v___x_3012_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed(lean_object* v_e_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_){
_start:
{
lean_object* v_res_3019_; 
v_res_3019_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(v_e_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
lean_dec(v___y_3015_);
lean_dec_ref(v___y_3014_);
return v_res_3019_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(lean_object* v___x_3021_, lean_object* v_preDefs_3022_, lean_object* v_val_3023_, lean_object* v_upperBound_3024_, lean_object* v_a_3025_, lean_object* v_b_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_){
_start:
{
uint8_t v___x_3032_; 
v___x_3032_ = lean_nat_dec_lt(v_a_3025_, v_upperBound_3024_);
if (v___x_3032_ == 0)
{
lean_object* v___x_3033_; 
lean_dec(v_a_3025_);
lean_dec(v_val_3023_);
lean_dec_ref(v_preDefs_3022_);
lean_dec_ref(v___x_3021_);
v___x_3033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3033_, 0, v_b_3026_);
return v___x_3033_;
}
else
{
lean_object* v___x_3034_; lean_object* v_value_3035_; lean_object* v___f_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___f_3039_; uint8_t v___x_3040_; lean_object* v___x_3041_; 
v___x_3034_ = lean_array_fget_borrowed(v_preDefs_3022_, v_a_3025_);
v_value_3035_ = lean_ctor_get(v___x_3034_, 7);
v___f_3036_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0));
v___x_3037_ = lean_unsigned_to_nat(0u);
v___x_3038_ = lean_box(0);
lean_inc(v_val_3023_);
lean_inc_ref(v_preDefs_3022_);
lean_inc(v_a_3025_);
lean_inc_ref(v___x_3021_);
v___f_3039_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed), 14, 7);
lean_closure_set(v___f_3039_, 0, v___x_3037_);
lean_closure_set(v___f_3039_, 1, v___x_3021_);
lean_closure_set(v___f_3039_, 2, v_a_3025_);
lean_closure_set(v___f_3039_, 3, v_preDefs_3022_);
lean_closure_set(v___f_3039_, 4, v_val_3023_);
lean_closure_set(v___f_3039_, 5, v___f_3036_);
lean_closure_set(v___f_3039_, 6, v___x_3038_);
v___x_3040_ = 0;
lean_inc_ref(v_value_3035_);
v___x_3041_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_3035_, v___f_3039_, v___x_3040_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_);
if (lean_obj_tag(v___x_3041_) == 0)
{
lean_object* v___x_3042_; lean_object* v___x_3043_; 
lean_dec_ref_known(v___x_3041_, 1);
v___x_3042_ = lean_unsigned_to_nat(1u);
v___x_3043_ = lean_nat_add(v_a_3025_, v___x_3042_);
lean_dec(v_a_3025_);
v_a_3025_ = v___x_3043_;
v_b_3026_ = v___x_3038_;
goto _start;
}
else
{
lean_dec(v_a_3025_);
lean_dec(v_val_3023_);
lean_dec_ref(v_preDefs_3022_);
lean_dec_ref(v___x_3021_);
return v___x_3041_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___boxed(lean_object* v___x_3045_, lean_object* v_preDefs_3046_, lean_object* v_val_3047_, lean_object* v_upperBound_3048_, lean_object* v_a_3049_, lean_object* v_b_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_3045_, v_preDefs_3046_, v_val_3047_, v_upperBound_3048_, v_a_3049_, v_b_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_);
lean_dec(v___y_3054_);
lean_dec_ref(v___y_3053_);
lean_dec(v___y_3052_);
lean_dec_ref(v___y_3051_);
lean_dec(v_upperBound_3048_);
return v_res_3056_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamsInfo___closed__1(void){
_start:
{
lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3058_ = ((lean_object*)(l_Lean_Elab_getFixedParamsInfo___closed__0));
v___x_3059_ = l_Lean_stringToMessageData(v___x_3058_);
return v___x_3059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object* v_preDefs_3060_, lean_object* v_a_3061_, lean_object* v_a_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_){
_start:
{
size_t v_sz_3066_; size_t v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_36496__overap_3072_; lean_object* v___x_3073_; 
v_sz_3066_ = lean_array_size(v_preDefs_3060_);
v___x_3067_ = ((size_t)0ULL);
v___x_3068_ = l_unsafeCast___redArg(v_preDefs_3060_);
v___x_3069_ = lean_box_usize(v_sz_3066_);
v___x_3070_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed__const__1));
v___x_3071_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed), 8, 3);
lean_closure_set(v___x_3071_, 0, v___x_3069_);
lean_closure_set(v___x_3071_, 1, v___x_3070_);
lean_closure_set(v___x_3071_, 2, v___x_3068_);
v___x_36496__overap_3072_ = l_unsafeCast___redArg(v___x_3071_);
lean_dec_ref(v___x_3071_);
lean_inc(v_a_3064_);
lean_inc_ref(v_a_3063_);
lean_inc(v_a_3062_);
lean_inc_ref(v_a_3061_);
v___x_3073_ = lean_apply_5(v___x_36496__overap_3072_, v_a_3061_, v_a_3062_, v_a_3063_, v_a_3064_, lean_box(0));
if (lean_obj_tag(v___x_3073_) == 0)
{
lean_object* v_a_3074_; size_t v_sz_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v_a_3074_ = lean_ctor_get(v___x_3073_, 0);
lean_inc(v_a_3074_);
lean_dec_ref_known(v___x_3073_, 1);
v_sz_3075_ = lean_array_size(v_a_3074_);
v___x_3076_ = l_unsafeCast___redArg(v_a_3074_);
v___x_3077_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_3075_, v___x_3067_, v___x_3076_);
v___x_3078_ = l_unsafeCast___redArg(v___x_3077_);
lean_dec_ref(v___x_3077_);
v___x_3079_ = l_Lean_Elab_FixedParams_Info_init(v_a_3074_);
v___x_3080_ = lean_st_mk_ref(v___x_3079_);
v___x_3081_ = lean_st_ref_take(v___x_3080_);
v___x_3082_ = l_Lean_Elab_FixedParams_Info_addSelfCalls(v___x_3081_);
v___x_3083_ = lean_st_ref_put(v___x_3080_, v___x_3082_);
v___x_3084_ = lean_array_get_size(v_preDefs_3060_);
v___x_3085_ = lean_unsigned_to_nat(0u);
v___x_3086_ = lean_box(0);
lean_inc(v___x_3080_);
v___x_3087_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_3078_, v_preDefs_3060_, v___x_3080_, v___x_3084_, v___x_3085_, v___x_3086_, v_a_3061_, v_a_3062_, v_a_3063_, v_a_3064_);
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3127_; 
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3127_ == 0)
{
lean_object* v_unused_3128_; 
v_unused_3128_ = lean_ctor_get(v___x_3087_, 0);
lean_dec(v_unused_3128_);
v___x_3089_ = v___x_3087_;
v_isShared_3090_ = v_isSharedCheck_3127_;
goto v_resetjp_3088_;
}
else
{
lean_dec(v___x_3087_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3127_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3091_; lean_object* v_toCold_3092_; lean_object* v_options_3093_; uint8_t v_hasTrace_3094_; 
v___x_3091_ = lean_st_ref_get(v___x_3080_);
lean_dec(v___x_3080_);
v_toCold_3092_ = lean_ctor_get(v_a_3063_, 0);
v_options_3093_ = lean_ctor_get(v_toCold_3092_, 2);
v_hasTrace_3094_ = lean_ctor_get_uint8(v_options_3093_, sizeof(void*)*1);
if (v_hasTrace_3094_ == 0)
{
lean_object* v___x_3096_; 
if (v_isShared_3090_ == 0)
{
lean_ctor_set(v___x_3089_, 0, v___x_3091_);
v___x_3096_ = v___x_3089_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v___x_3091_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; uint8_t v___x_3101_; 
v_inheritedTraceOptions_3098_ = lean_ctor_get(v_toCold_3092_, 11);
v___x_3099_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_3100_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_3101_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3098_, v_options_3093_, v___x_3100_);
if (v___x_3101_ == 0)
{
lean_object* v___x_3103_; 
if (v_isShared_3090_ == 0)
{
lean_ctor_set(v___x_3089_, 0, v___x_3091_);
v___x_3103_ = v___x_3089_;
goto v_reusejp_3102_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v___x_3091_);
v___x_3103_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3102_;
}
v_reusejp_3102_:
{
return v___x_3103_;
}
}
else
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
lean_del_object(v___x_3089_);
v___x_3105_ = lean_obj_once(&l_Lean_Elab_getFixedParamsInfo___closed__1, &l_Lean_Elab_getFixedParamsInfo___closed__1_once, _init_l_Lean_Elab_getFixedParamsInfo___closed__1);
lean_inc(v___x_3091_);
v___x_3106_ = l_Lean_Elab_FixedParams_Info_format(v___x_3091_);
v___x_3107_ = l_Std_Format_indentD(v___x_3106_);
v___x_3108_ = l_Lean_MessageData_ofFormat(v___x_3107_);
v___x_3109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3105_);
lean_ctor_set(v___x_3109_, 1, v___x_3108_);
v___x_3110_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_3099_, v___x_3109_, v_a_3061_, v_a_3062_, v_a_3063_, v_a_3064_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3117_; 
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3117_ == 0)
{
lean_object* v_unused_3118_; 
v_unused_3118_ = lean_ctor_get(v___x_3110_, 0);
lean_dec(v_unused_3118_);
v___x_3112_ = v___x_3110_;
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
else
{
lean_dec(v___x_3110_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3115_; 
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 0, v___x_3091_);
v___x_3115_ = v___x_3112_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v___x_3091_);
v___x_3115_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
return v___x_3115_;
}
}
}
else
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3126_; 
lean_dec(v___x_3091_);
v_a_3119_ = lean_ctor_get(v___x_3110_, 0);
v_isSharedCheck_3126_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3126_ == 0)
{
v___x_3121_ = v___x_3110_;
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v___x_3110_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3124_; 
if (v_isShared_3122_ == 0)
{
v___x_3124_ = v___x_3121_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v_a_3119_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
return v___x_3124_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
lean_dec(v___x_3080_);
v_a_3129_ = lean_ctor_get(v___x_3087_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3087_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3087_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
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
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
lean_dec_ref(v_preDefs_3060_);
v_a_3137_ = lean_ctor_get(v___x_3073_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3073_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3073_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object* v_preDefs_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_, lean_object* v_a_3150_){
_start:
{
lean_object* v_res_3151_; 
v_res_3151_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_3145_, v_a_3146_, v_a_3147_, v_a_3148_, v_a_3149_);
lean_dec(v_a_3149_);
lean_dec_ref(v_a_3148_);
lean_dec(v_a_3147_);
lean_dec_ref(v_a_3146_);
return v_res_3151_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object* v_val_3152_, lean_object* v_val_3153_, lean_object* v_next_3154_, lean_object* v_next_3155_, lean_object* v___x_3156_, lean_object* v___x_3157_, lean_object* v_upperBound_3158_, lean_object* v_params_3159_, lean_object* v___x_3160_, lean_object* v_inst_3161_, lean_object* v_R_3162_, lean_object* v_a_3163_, uint8_t v_b_3164_, lean_object* v_c_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_){
_start:
{
lean_object* v___x_3171_; 
v___x_3171_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_val_3152_, v_val_3153_, v_next_3154_, v_next_3155_, v___x_3156_, v___x_3157_, v_upperBound_3158_, v_params_3159_, v___x_3160_, v_a_3163_, v_b_3164_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_);
return v___x_3171_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object** _args){
lean_object* v_val_3172_ = _args[0];
lean_object* v_val_3173_ = _args[1];
lean_object* v_next_3174_ = _args[2];
lean_object* v_next_3175_ = _args[3];
lean_object* v___x_3176_ = _args[4];
lean_object* v___x_3177_ = _args[5];
lean_object* v_upperBound_3178_ = _args[6];
lean_object* v_params_3179_ = _args[7];
lean_object* v___x_3180_ = _args[8];
lean_object* v_inst_3181_ = _args[9];
lean_object* v_R_3182_ = _args[10];
lean_object* v_a_3183_ = _args[11];
lean_object* v_b_3184_ = _args[12];
lean_object* v_c_3185_ = _args[13];
lean_object* v___y_3186_ = _args[14];
lean_object* v___y_3187_ = _args[15];
lean_object* v___y_3188_ = _args[16];
lean_object* v___y_3189_ = _args[17];
lean_object* v___y_3190_ = _args[18];
_start:
{
uint8_t v_b_boxed_3191_; lean_object* v_res_3192_; 
v_b_boxed_3191_ = lean_unbox(v_b_3184_);
v_res_3192_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(v_val_3172_, v_val_3173_, v_next_3174_, v_next_3175_, v___x_3176_, v___x_3177_, v_upperBound_3178_, v_params_3179_, v___x_3180_, v_inst_3181_, v_R_3182_, v_a_3183_, v_b_boxed_3191_, v_c_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
lean_dec(v___y_3189_);
lean_dec_ref(v___y_3188_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec_ref(v_params_3179_);
lean_dec(v_upperBound_3178_);
lean_dec(v___x_3177_);
lean_dec(v___x_3176_);
lean_dec(v_next_3175_);
lean_dec(v_val_3173_);
lean_dec(v_val_3172_);
return v_res_3192_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object* v_val_3193_, lean_object* v_val_3194_, lean_object* v_upperBound_3195_, lean_object* v_args_3196_, lean_object* v_e_3197_, lean_object* v_next_3198_, lean_object* v_params_3199_, lean_object* v___x_3200_, lean_object* v___x_3201_, lean_object* v_inst_3202_, lean_object* v_R_3203_, lean_object* v_a_3204_, lean_object* v_b_3205_, lean_object* v_c_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_){
_start:
{
lean_object* v___x_3212_; 
v___x_3212_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_3193_, v_val_3194_, v_upperBound_3195_, v_args_3196_, v_e_3197_, v_next_3198_, v_params_3199_, v___x_3200_, v___x_3201_, v_a_3204_, v_b_3205_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_);
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object** _args){
lean_object* v_val_3213_ = _args[0];
lean_object* v_val_3214_ = _args[1];
lean_object* v_upperBound_3215_ = _args[2];
lean_object* v_args_3216_ = _args[3];
lean_object* v_e_3217_ = _args[4];
lean_object* v_next_3218_ = _args[5];
lean_object* v_params_3219_ = _args[6];
lean_object* v___x_3220_ = _args[7];
lean_object* v___x_3221_ = _args[8];
lean_object* v_inst_3222_ = _args[9];
lean_object* v_R_3223_ = _args[10];
lean_object* v_a_3224_ = _args[11];
lean_object* v_b_3225_ = _args[12];
lean_object* v_c_3226_ = _args[13];
lean_object* v___y_3227_ = _args[14];
lean_object* v___y_3228_ = _args[15];
lean_object* v___y_3229_ = _args[16];
lean_object* v___y_3230_ = _args[17];
lean_object* v___y_3231_ = _args[18];
_start:
{
lean_object* v_res_3232_; 
v_res_3232_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(v_val_3213_, v_val_3214_, v_upperBound_3215_, v_args_3216_, v_e_3217_, v_next_3218_, v_params_3219_, v___x_3220_, v___x_3221_, v_inst_3222_, v_R_3223_, v_a_3224_, v_b_3225_, v_c_3226_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_);
lean_dec(v___y_3230_);
lean_dec_ref(v___y_3229_);
lean_dec(v___y_3228_);
lean_dec_ref(v___y_3227_);
lean_dec(v___x_3221_);
lean_dec(v___x_3220_);
lean_dec_ref(v_params_3219_);
lean_dec(v_next_3218_);
lean_dec_ref(v_args_3216_);
lean_dec(v_upperBound_3215_);
lean_dec(v_val_3213_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(lean_object* v___x_3233_, lean_object* v_preDefs_3234_, lean_object* v_val_3235_, lean_object* v_upperBound_3236_, lean_object* v_inst_3237_, lean_object* v_R_3238_, lean_object* v_a_3239_, lean_object* v_b_3240_, lean_object* v_c_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_){
_start:
{
lean_object* v___x_3247_; 
v___x_3247_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v___x_3233_, v_preDefs_3234_, v_val_3235_, v_upperBound_3236_, v_a_3239_, v_b_3240_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_);
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___boxed(lean_object* v___x_3248_, lean_object* v_preDefs_3249_, lean_object* v_val_3250_, lean_object* v_upperBound_3251_, lean_object* v_inst_3252_, lean_object* v_R_3253_, lean_object* v_a_3254_, lean_object* v_b_3255_, lean_object* v_c_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
lean_object* v_res_3262_; 
v_res_3262_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(v___x_3248_, v_preDefs_3249_, v_val_3250_, v_upperBound_3251_, v_inst_3252_, v_R_3253_, v_a_3254_, v_b_3255_, v_c_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_);
lean_dec(v___y_3260_);
lean_dec_ref(v___y_3259_);
lean_dec(v___y_3258_);
lean_dec_ref(v___y_3257_);
lean_dec(v_upperBound_3251_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object* v_upperBound_3263_, lean_object* v___x_3264_, lean_object* v_pre_3265_, lean_object* v_post_3266_, uint8_t v_usedLetOnly_3267_, uint8_t v_skipConstInApp_3268_, uint8_t v_skipInstances_3269_, lean_object* v___x_3270_, lean_object* v_inst_3271_, lean_object* v_R_3272_, lean_object* v_a_3273_, lean_object* v_b_3274_, lean_object* v_c_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_){
_start:
{
lean_object* v___x_3282_; 
v___x_3282_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v_upperBound_3263_, v___x_3264_, v_pre_3265_, v_post_3266_, v_usedLetOnly_3267_, v_skipConstInApp_3268_, v_skipInstances_3269_, v_a_3273_, v_b_3274_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_);
return v___x_3282_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object** _args){
lean_object* v_upperBound_3283_ = _args[0];
lean_object* v___x_3284_ = _args[1];
lean_object* v_pre_3285_ = _args[2];
lean_object* v_post_3286_ = _args[3];
lean_object* v_usedLetOnly_3287_ = _args[4];
lean_object* v_skipConstInApp_3288_ = _args[5];
lean_object* v_skipInstances_3289_ = _args[6];
lean_object* v___x_3290_ = _args[7];
lean_object* v_inst_3291_ = _args[8];
lean_object* v_R_3292_ = _args[9];
lean_object* v_a_3293_ = _args[10];
lean_object* v_b_3294_ = _args[11];
lean_object* v_c_3295_ = _args[12];
lean_object* v___y_3296_ = _args[13];
lean_object* v___y_3297_ = _args[14];
lean_object* v___y_3298_ = _args[15];
lean_object* v___y_3299_ = _args[16];
lean_object* v___y_3300_ = _args[17];
lean_object* v___y_3301_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_3302_; uint8_t v_skipConstInApp_boxed_3303_; uint8_t v_skipInstances_boxed_3304_; lean_object* v_res_3305_; 
v_usedLetOnly_boxed_3302_ = lean_unbox(v_usedLetOnly_3287_);
v_skipConstInApp_boxed_3303_ = lean_unbox(v_skipConstInApp_3288_);
v_skipInstances_boxed_3304_ = lean_unbox(v_skipInstances_3289_);
v_res_3305_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_upperBound_3283_, v___x_3284_, v_pre_3285_, v_post_3286_, v_usedLetOnly_boxed_3302_, v_skipConstInApp_boxed_3303_, v_skipInstances_boxed_3304_, v___x_3290_, v_inst_3291_, v_R_3292_, v_a_3293_, v_b_3294_, v_c_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_);
lean_dec(v___y_3300_);
lean_dec_ref(v___y_3299_);
lean_dec(v___y_3298_);
lean_dec_ref(v___y_3297_);
lean_dec(v___y_3296_);
lean_dec(v___x_3290_);
lean_dec_ref(v___x_3284_);
lean_dec(v_upperBound_3283_);
return v_res_3305_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object* v_00_u03b2_3306_, lean_object* v_m_3307_, lean_object* v_a_3308_){
_start:
{
lean_object* v___x_3309_; 
v___x_3309_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_m_3307_, v_a_3308_);
return v___x_3309_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object* v_00_u03b2_3310_, lean_object* v_m_3311_, lean_object* v_a_3312_){
_start:
{
lean_object* v_res_3313_; 
v_res_3313_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(v_00_u03b2_3310_, v_m_3311_, v_a_3312_);
lean_dec_ref(v_a_3312_);
lean_dec_ref(v_m_3311_);
return v_res_3313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object* v_00_u03b1_3314_, lean_object* v_name_3315_, uint8_t v_bi_3316_, lean_object* v_type_3317_, lean_object* v_k_3318_, uint8_t v_kind_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_){
_start:
{
lean_object* v___x_3326_; 
v___x_3326_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_3315_, v_bi_3316_, v_type_3317_, v_k_3318_, v_kind_3319_, v___y_3320_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_);
return v___x_3326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object* v_00_u03b1_3327_, lean_object* v_name_3328_, lean_object* v_bi_3329_, lean_object* v_type_3330_, lean_object* v_k_3331_, lean_object* v_kind_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_){
_start:
{
uint8_t v_bi_boxed_3339_; uint8_t v_kind_boxed_3340_; lean_object* v_res_3341_; 
v_bi_boxed_3339_ = lean_unbox(v_bi_3329_);
v_kind_boxed_3340_ = lean_unbox(v_kind_3332_);
v_res_3341_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(v_00_u03b1_3327_, v_name_3328_, v_bi_boxed_3339_, v_type_3330_, v_k_3331_, v_kind_boxed_3340_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_);
lean_dec(v___y_3337_);
lean_dec_ref(v___y_3336_);
lean_dec(v___y_3335_);
lean_dec_ref(v___y_3334_);
lean_dec(v___y_3333_);
return v_res_3341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object* v_00_u03b1_3342_, lean_object* v_name_3343_, lean_object* v_type_3344_, lean_object* v_val_3345_, lean_object* v_k_3346_, uint8_t v_nondep_3347_, uint8_t v_kind_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_){
_start:
{
lean_object* v___x_3355_; 
v___x_3355_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_3343_, v_type_3344_, v_val_3345_, v_k_3346_, v_nondep_3347_, v_kind_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
return v___x_3355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object* v_00_u03b1_3356_, lean_object* v_name_3357_, lean_object* v_type_3358_, lean_object* v_val_3359_, lean_object* v_k_3360_, lean_object* v_nondep_3361_, lean_object* v_kind_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
uint8_t v_nondep_boxed_3369_; uint8_t v_kind_boxed_3370_; lean_object* v_res_3371_; 
v_nondep_boxed_3369_ = lean_unbox(v_nondep_3361_);
v_kind_boxed_3370_ = lean_unbox(v_kind_3362_);
v_res_3371_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(v_00_u03b1_3356_, v_name_3357_, v_type_3358_, v_val_3359_, v_k_3360_, v_nondep_boxed_3369_, v_kind_boxed_3370_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
return v_res_3371_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object* v_00_u03b1_3372_, lean_object* v_ref_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_){
_start:
{
lean_object* v___x_3379_; 
v___x_3379_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_3373_);
return v___x_3379_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object* v_00_u03b1_3380_, lean_object* v_ref_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_){
_start:
{
lean_object* v_res_3387_; 
v_res_3387_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(v_00_u03b1_3380_, v_ref_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_);
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object* v_00_u03b1_3388_, lean_object* v_x_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v___x_3396_; 
v___x_3396_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
return v___x_3396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object* v_00_u03b1_3397_, lean_object* v_x_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_){
_start:
{
lean_object* v_res_3405_; 
v_res_3405_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(v_00_u03b1_3397_, v_x_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_);
lean_dec(v___y_3403_);
lean_dec_ref(v___y_3402_);
lean_dec(v___y_3401_);
lean_dec_ref(v___y_3400_);
lean_dec(v___y_3399_);
return v_res_3405_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object* v_00_u03b2_3406_, lean_object* v_m_3407_, lean_object* v_a_3408_, lean_object* v_b_3409_){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v_m_3407_, v_a_3408_, v_b_3409_);
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(lean_object* v_00_u03b2_3411_, lean_object* v_a_3412_, lean_object* v_x_3413_){
_start:
{
lean_object* v___x_3414_; 
v___x_3414_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_3412_, v_x_3413_);
return v___x_3414_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___boxed(lean_object* v_00_u03b2_3415_, lean_object* v_a_3416_, lean_object* v_x_3417_){
_start:
{
lean_object* v_res_3418_; 
v_res_3418_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(v_00_u03b2_3415_, v_a_3416_, v_x_3417_);
lean_dec(v_x_3417_);
lean_dec_ref(v_a_3416_);
return v_res_3418_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(lean_object* v_00_u03b2_3419_, lean_object* v_a_3420_, lean_object* v_x_3421_){
_start:
{
uint8_t v___x_3422_; 
v___x_3422_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_3420_, v_x_3421_);
return v___x_3422_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___boxed(lean_object* v_00_u03b2_3423_, lean_object* v_a_3424_, lean_object* v_x_3425_){
_start:
{
uint8_t v_res_3426_; lean_object* v_r_3427_; 
v_res_3426_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(v_00_u03b2_3423_, v_a_3424_, v_x_3425_);
lean_dec(v_x_3425_);
lean_dec_ref(v_a_3424_);
v_r_3427_ = lean_box(v_res_3426_);
return v_r_3427_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26(lean_object* v_00_u03b2_3428_, lean_object* v_data_3429_){
_start:
{
lean_object* v___x_3430_; 
v___x_3430_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_data_3429_);
return v___x_3430_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27(lean_object* v_00_u03b2_3431_, lean_object* v_a_3432_, lean_object* v_b_3433_, lean_object* v_x_3434_){
_start:
{
lean_object* v___x_3435_; 
v___x_3435_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_3432_, v_b_3433_, v_x_3434_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27(lean_object* v_00_u03b2_3436_, lean_object* v_i_3437_, lean_object* v_source_3438_, lean_object* v_target_3439_){
_start:
{
lean_object* v___x_3440_; 
v___x_3440_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v_i_3437_, v_source_3438_, v_target_3439_);
return v___x_3440_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28(lean_object* v_00_u03b2_3441_, lean_object* v_x_3442_, lean_object* v_x_3443_){
_start:
{
lean_object* v___x_3444_; 
v___x_3444_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_x_3442_, v_x_3443_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object* v_x_3458_, lean_object* v_x_3459_){
_start:
{
if (lean_obj_tag(v_x_3458_) == 0)
{
lean_object* v___x_3460_; 
v___x_3460_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1));
return v___x_3460_;
}
else
{
lean_object* v_val_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3472_; 
v_val_3461_ = lean_ctor_get(v_x_3458_, 0);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_x_3458_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3463_ = v_x_3458_;
v_isShared_3464_ = v_isSharedCheck_3472_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_val_3461_);
lean_dec(v_x_3458_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3472_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3468_; 
v___x_3465_ = ((lean_object*)(l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3));
v___x_3466_ = l_Nat_reprFast(v_val_3461_);
if (v_isShared_3464_ == 0)
{
lean_ctor_set_tag(v___x_3463_, 3);
lean_ctor_set(v___x_3463_, 0, v___x_3466_);
v___x_3468_ = v___x_3463_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v___x_3466_);
v___x_3468_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3469_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3469_, 0, v___x_3465_);
lean_ctor_set(v___x_3469_, 1, v___x_3468_);
v___x_3470_ = l_Repr_addAppParen(v___x_3469_, v_x_3459_);
return v___x_3470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object* v_x_3473_, lean_object* v_x_3474_){
_start:
{
lean_object* v_res_3475_; 
v_res_3475_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_x_3473_, v_x_3474_);
lean_dec(v_x_3474_);
return v_res_3475_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_x_3476_, lean_object* v_x_3477_, lean_object* v_x_3478_){
_start:
{
if (lean_obj_tag(v_x_3478_) == 0)
{
lean_dec(v_x_3476_);
return v_x_3477_;
}
else
{
lean_object* v_head_3479_; lean_object* v_tail_3480_; lean_object* v___x_3482_; uint8_t v_isShared_3483_; uint8_t v_isSharedCheck_3491_; 
v_head_3479_ = lean_ctor_get(v_x_3478_, 0);
v_tail_3480_ = lean_ctor_get(v_x_3478_, 1);
v_isSharedCheck_3491_ = !lean_is_exclusive(v_x_3478_);
if (v_isSharedCheck_3491_ == 0)
{
v___x_3482_ = v_x_3478_;
v_isShared_3483_ = v_isSharedCheck_3491_;
goto v_resetjp_3481_;
}
else
{
lean_inc(v_tail_3480_);
lean_inc(v_head_3479_);
lean_dec(v_x_3478_);
v___x_3482_ = lean_box(0);
v_isShared_3483_ = v_isSharedCheck_3491_;
goto v_resetjp_3481_;
}
v_resetjp_3481_:
{
lean_object* v___x_3485_; 
lean_inc(v_x_3476_);
if (v_isShared_3483_ == 0)
{
lean_ctor_set_tag(v___x_3482_, 5);
lean_ctor_set(v___x_3482_, 1, v_x_3476_);
lean_ctor_set(v___x_3482_, 0, v_x_3477_);
v___x_3485_ = v___x_3482_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v_x_3477_);
lean_ctor_set(v_reuseFailAlloc_3490_, 1, v_x_3476_);
v___x_3485_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3486_ = lean_unsigned_to_nat(0u);
v___x_3487_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3479_, v___x_3486_);
v___x_3488_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3488_, 0, v___x_3485_);
lean_ctor_set(v___x_3488_, 1, v___x_3487_);
v_x_3477_ = v___x_3488_;
v_x_3478_ = v_tail_3480_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_3492_, lean_object* v_x_3493_, lean_object* v_x_3494_){
_start:
{
if (lean_obj_tag(v_x_3494_) == 0)
{
lean_dec(v_x_3492_);
return v_x_3493_;
}
else
{
lean_object* v_head_3495_; lean_object* v_tail_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3507_; 
v_head_3495_ = lean_ctor_get(v_x_3494_, 0);
v_tail_3496_ = lean_ctor_get(v_x_3494_, 1);
v_isSharedCheck_3507_ = !lean_is_exclusive(v_x_3494_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3498_ = v_x_3494_;
v_isShared_3499_ = v_isSharedCheck_3507_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_tail_3496_);
lean_inc(v_head_3495_);
lean_dec(v_x_3494_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3507_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v___x_3501_; 
lean_inc(v_x_3492_);
if (v_isShared_3499_ == 0)
{
lean_ctor_set_tag(v___x_3498_, 5);
lean_ctor_set(v___x_3498_, 1, v_x_3492_);
lean_ctor_set(v___x_3498_, 0, v_x_3493_);
v___x_3501_ = v___x_3498_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v_x_3493_);
lean_ctor_set(v_reuseFailAlloc_3506_, 1, v_x_3492_);
v___x_3501_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; 
v___x_3502_ = lean_unsigned_to_nat(0u);
v___x_3503_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3495_, v___x_3502_);
v___x_3504_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3501_);
lean_ctor_set(v___x_3504_, 1, v___x_3503_);
v___x_3505_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_x_3492_, v___x_3504_, v_tail_3496_);
return v___x_3505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object* v___y_3508_){
_start:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3509_ = lean_unsigned_to_nat(0u);
v___x_3510_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v___y_3508_, v___x_3509_);
return v___x_3510_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object* v_x_3511_, lean_object* v_x_3512_){
_start:
{
if (lean_obj_tag(v_x_3511_) == 0)
{
lean_object* v___x_3513_; 
lean_dec(v_x_3512_);
v___x_3513_ = lean_box(0);
return v___x_3513_;
}
else
{
lean_object* v_tail_3514_; 
v_tail_3514_ = lean_ctor_get(v_x_3511_, 1);
if (lean_obj_tag(v_tail_3514_) == 0)
{
lean_object* v_head_3515_; lean_object* v___x_3516_; 
lean_dec(v_x_3512_);
v_head_3515_ = lean_ctor_get(v_x_3511_, 0);
lean_inc(v_head_3515_);
lean_dec_ref_known(v_x_3511_, 2);
v___x_3516_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3515_);
return v___x_3516_;
}
else
{
lean_object* v_head_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
lean_inc(v_tail_3514_);
v_head_3517_ = lean_ctor_get(v_x_3511_, 0);
lean_inc(v_head_3517_);
lean_dec_ref_known(v_x_3511_, 2);
v___x_3518_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3517_);
v___x_3519_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(v_x_3512_, v___x_3518_, v_tail_3514_);
return v___x_3519_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___x_3527_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__0));
v___x_3528_ = lean_string_length(v___x_3527_);
return v___x_3528_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_3529_; lean_object* v___x_3530_; 
v___x_3529_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__4);
v___x_3530_ = lean_nat_to_int(v___x_3529_);
return v___x_3530_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object* v_xs_3536_){
_start:
{
lean_object* v___x_3537_; lean_object* v___x_3538_; uint8_t v___x_3539_; 
v___x_3537_ = lean_array_get_size(v_xs_3536_);
v___x_3538_ = lean_unsigned_to_nat(0u);
v___x_3539_ = lean_nat_dec_eq(v___x_3537_, v___x_3538_);
if (v___x_3539_ == 0)
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3540_ = lean_array_to_list(v_xs_3536_);
v___x_3541_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3542_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(v___x_3540_, v___x_3541_);
v___x_3543_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3544_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3545_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3544_);
lean_ctor_set(v___x_3545_, 1, v___x_3542_);
v___x_3546_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3547_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3545_);
lean_ctor_set(v___x_3547_, 1, v___x_3546_);
v___x_3548_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3543_);
lean_ctor_set(v___x_3548_, 1, v___x_3547_);
v___x_3549_ = l_Std_Format_fill(v___x_3548_);
return v___x_3549_;
}
else
{
lean_object* v___x_3550_; 
lean_dec_ref(v_xs_3536_);
v___x_3550_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3550_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object* v_x_3551_, lean_object* v_x_3552_, lean_object* v_x_3553_){
_start:
{
if (lean_obj_tag(v_x_3553_) == 0)
{
lean_dec(v_x_3551_);
return v_x_3552_;
}
else
{
lean_object* v_head_3554_; lean_object* v_tail_3555_; lean_object* v___x_3557_; uint8_t v_isShared_3558_; uint8_t v_isSharedCheck_3565_; 
v_head_3554_ = lean_ctor_get(v_x_3553_, 0);
v_tail_3555_ = lean_ctor_get(v_x_3553_, 1);
v_isSharedCheck_3565_ = !lean_is_exclusive(v_x_3553_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3557_ = v_x_3553_;
v_isShared_3558_ = v_isSharedCheck_3565_;
goto v_resetjp_3556_;
}
else
{
lean_inc(v_tail_3555_);
lean_inc(v_head_3554_);
lean_dec(v_x_3553_);
v___x_3557_ = lean_box(0);
v_isShared_3558_ = v_isSharedCheck_3565_;
goto v_resetjp_3556_;
}
v_resetjp_3556_:
{
lean_object* v___x_3560_; 
lean_inc(v_x_3551_);
if (v_isShared_3558_ == 0)
{
lean_ctor_set_tag(v___x_3557_, 5);
lean_ctor_set(v___x_3557_, 1, v_x_3551_);
lean_ctor_set(v___x_3557_, 0, v_x_3552_);
v___x_3560_ = v___x_3557_;
goto v_reusejp_3559_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_x_3552_);
lean_ctor_set(v_reuseFailAlloc_3564_, 1, v_x_3551_);
v___x_3560_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3559_;
}
v_reusejp_3559_:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; 
v___x_3561_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3554_);
v___x_3562_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3560_);
lean_ctor_set(v___x_3562_, 1, v___x_3561_);
v_x_3552_ = v___x_3562_;
v_x_3553_ = v_tail_3555_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object* v_x_3566_, lean_object* v_x_3567_){
_start:
{
if (lean_obj_tag(v_x_3566_) == 0)
{
lean_object* v___x_3568_; 
lean_dec(v_x_3567_);
v___x_3568_ = lean_box(0);
return v___x_3568_;
}
else
{
lean_object* v_tail_3569_; 
v_tail_3569_ = lean_ctor_get(v_x_3566_, 1);
if (lean_obj_tag(v_tail_3569_) == 0)
{
lean_object* v_head_3570_; lean_object* v___x_3571_; 
lean_dec(v_x_3567_);
v_head_3570_ = lean_ctor_get(v_x_3566_, 0);
lean_inc(v_head_3570_);
lean_dec_ref_known(v_x_3566_, 2);
v___x_3571_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3570_);
return v___x_3571_;
}
else
{
lean_object* v_head_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; 
lean_inc(v_tail_3569_);
v_head_3572_ = lean_ctor_get(v_x_3566_, 0);
lean_inc(v_head_3572_);
lean_dec_ref_known(v_x_3566_, 2);
v___x_3573_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3572_);
v___x_3574_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(v_x_3567_, v___x_3573_, v_tail_3569_);
return v___x_3574_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object* v_xs_3575_){
_start:
{
lean_object* v___x_3576_; lean_object* v___x_3577_; uint8_t v___x_3578_; 
v___x_3576_ = lean_array_get_size(v_xs_3575_);
v___x_3577_ = lean_unsigned_to_nat(0u);
v___x_3578_ = lean_nat_dec_eq(v___x_3576_, v___x_3577_);
if (v___x_3578_ == 0)
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3579_ = lean_array_to_list(v_xs_3575_);
v___x_3580_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3581_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(v___x_3579_, v___x_3580_);
v___x_3582_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3583_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3584_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3584_, 0, v___x_3583_);
lean_ctor_set(v___x_3584_, 1, v___x_3581_);
v___x_3585_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3586_, 0, v___x_3584_);
lean_ctor_set(v___x_3586_, 1, v___x_3585_);
v___x_3587_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3582_);
lean_ctor_set(v___x_3587_, 1, v___x_3586_);
v___x_3588_ = l_Std_Format_fill(v___x_3587_);
return v___x_3588_;
}
else
{
lean_object* v___x_3589_; 
lean_dec_ref(v_xs_3575_);
v___x_3589_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3589_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object* v_x_3590_, lean_object* v_x_3591_, lean_object* v_x_3592_){
_start:
{
if (lean_obj_tag(v_x_3592_) == 0)
{
lean_dec(v_x_3590_);
return v_x_3591_;
}
else
{
lean_object* v_head_3593_; lean_object* v_tail_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3605_; 
v_head_3593_ = lean_ctor_get(v_x_3592_, 0);
v_tail_3594_ = lean_ctor_get(v_x_3592_, 1);
v_isSharedCheck_3605_ = !lean_is_exclusive(v_x_3592_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3596_ = v_x_3592_;
v_isShared_3597_ = v_isSharedCheck_3605_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_tail_3594_);
lean_inc(v_head_3593_);
lean_dec(v_x_3592_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3605_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___x_3599_; 
lean_inc(v_x_3590_);
if (v_isShared_3597_ == 0)
{
lean_ctor_set_tag(v___x_3596_, 5);
lean_ctor_set(v___x_3596_, 1, v_x_3590_);
lean_ctor_set(v___x_3596_, 0, v_x_3591_);
v___x_3599_ = v___x_3596_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_x_3591_);
lean_ctor_set(v_reuseFailAlloc_3604_, 1, v_x_3590_);
v___x_3599_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; 
v___x_3600_ = l_Nat_reprFast(v_head_3593_);
v___x_3601_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3600_);
v___x_3602_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3602_, 0, v___x_3599_);
lean_ctor_set(v___x_3602_, 1, v___x_3601_);
v_x_3591_ = v___x_3602_;
v_x_3592_ = v_tail_3594_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object* v_x_3606_, lean_object* v_x_3607_, lean_object* v_x_3608_){
_start:
{
if (lean_obj_tag(v_x_3608_) == 0)
{
lean_dec(v_x_3606_);
return v_x_3607_;
}
else
{
lean_object* v_head_3609_; lean_object* v_tail_3610_; lean_object* v___x_3612_; uint8_t v_isShared_3613_; uint8_t v_isSharedCheck_3621_; 
v_head_3609_ = lean_ctor_get(v_x_3608_, 0);
v_tail_3610_ = lean_ctor_get(v_x_3608_, 1);
v_isSharedCheck_3621_ = !lean_is_exclusive(v_x_3608_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3612_ = v_x_3608_;
v_isShared_3613_ = v_isSharedCheck_3621_;
goto v_resetjp_3611_;
}
else
{
lean_inc(v_tail_3610_);
lean_inc(v_head_3609_);
lean_dec(v_x_3608_);
v___x_3612_ = lean_box(0);
v_isShared_3613_ = v_isSharedCheck_3621_;
goto v_resetjp_3611_;
}
v_resetjp_3611_:
{
lean_object* v___x_3615_; 
lean_inc(v_x_3606_);
if (v_isShared_3613_ == 0)
{
lean_ctor_set_tag(v___x_3612_, 5);
lean_ctor_set(v___x_3612_, 1, v_x_3606_);
lean_ctor_set(v___x_3612_, 0, v_x_3607_);
v___x_3615_ = v___x_3612_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v_x_3607_);
lean_ctor_set(v_reuseFailAlloc_3620_, 1, v_x_3606_);
v___x_3615_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3616_ = l_Nat_reprFast(v_head_3609_);
v___x_3617_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3617_, 0, v___x_3616_);
v___x_3618_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3615_);
lean_ctor_set(v___x_3618_, 1, v___x_3617_);
v___x_3619_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(v_x_3606_, v___x_3618_, v_tail_3610_);
return v___x_3619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object* v___y_3622_){
_start:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; 
v___x_3623_ = l_Nat_reprFast(v___y_3622_);
v___x_3624_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3623_);
return v___x_3624_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object* v_x_3625_, lean_object* v_x_3626_){
_start:
{
if (lean_obj_tag(v_x_3625_) == 0)
{
lean_object* v___x_3627_; 
lean_dec(v_x_3626_);
v___x_3627_ = lean_box(0);
return v___x_3627_;
}
else
{
lean_object* v_tail_3628_; 
v_tail_3628_ = lean_ctor_get(v_x_3625_, 1);
if (lean_obj_tag(v_tail_3628_) == 0)
{
lean_object* v_head_3629_; lean_object* v___x_3630_; 
lean_dec(v_x_3626_);
v_head_3629_ = lean_ctor_get(v_x_3625_, 0);
lean_inc(v_head_3629_);
lean_dec_ref_known(v_x_3625_, 2);
v___x_3630_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3629_);
return v___x_3630_;
}
else
{
lean_object* v_head_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; 
lean_inc(v_tail_3628_);
v_head_3631_ = lean_ctor_get(v_x_3625_, 0);
lean_inc(v_head_3631_);
lean_dec_ref_known(v_x_3625_, 2);
v___x_3632_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3631_);
v___x_3633_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(v_x_3626_, v___x_3632_, v_tail_3628_);
return v___x_3633_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object* v_xs_3634_){
_start:
{
lean_object* v___x_3635_; lean_object* v___x_3636_; uint8_t v___x_3637_; 
v___x_3635_ = lean_array_get_size(v_xs_3634_);
v___x_3636_ = lean_unsigned_to_nat(0u);
v___x_3637_ = lean_nat_dec_eq(v___x_3635_, v___x_3636_);
if (v___x_3637_ == 0)
{
lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; 
v___x_3638_ = lean_array_to_list(v_xs_3634_);
v___x_3639_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3640_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(v___x_3638_, v___x_3639_);
v___x_3641_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3642_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3643_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3643_, 0, v___x_3642_);
lean_ctor_set(v___x_3643_, 1, v___x_3640_);
v___x_3644_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3645_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3645_, 0, v___x_3643_);
lean_ctor_set(v___x_3645_, 1, v___x_3644_);
v___x_3646_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3646_, 0, v___x_3641_);
lean_ctor_set(v___x_3646_, 1, v___x_3645_);
v___x_3647_ = l_Std_Format_fill(v___x_3646_);
return v___x_3647_;
}
else
{
lean_object* v___x_3648_; 
lean_dec_ref(v_xs_3634_);
v___x_3648_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3648_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object* v_x_3649_, lean_object* v_x_3650_, lean_object* v_x_3651_){
_start:
{
if (lean_obj_tag(v_x_3651_) == 0)
{
lean_dec(v_x_3649_);
return v_x_3650_;
}
else
{
lean_object* v_head_3652_; lean_object* v_tail_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3663_; 
v_head_3652_ = lean_ctor_get(v_x_3651_, 0);
v_tail_3653_ = lean_ctor_get(v_x_3651_, 1);
v_isSharedCheck_3663_ = !lean_is_exclusive(v_x_3651_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3655_ = v_x_3651_;
v_isShared_3656_ = v_isSharedCheck_3663_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_tail_3653_);
lean_inc(v_head_3652_);
lean_dec(v_x_3651_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3663_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3658_; 
lean_inc(v_x_3649_);
if (v_isShared_3656_ == 0)
{
lean_ctor_set_tag(v___x_3655_, 5);
lean_ctor_set(v___x_3655_, 1, v_x_3649_);
lean_ctor_set(v___x_3655_, 0, v_x_3650_);
v___x_3658_ = v___x_3655_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v_x_3650_);
lean_ctor_set(v_reuseFailAlloc_3662_, 1, v_x_3649_);
v___x_3658_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
lean_object* v___x_3659_; lean_object* v___x_3660_; 
v___x_3659_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3652_);
v___x_3660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3660_, 0, v___x_3658_);
lean_ctor_set(v___x_3660_, 1, v___x_3659_);
v_x_3650_ = v___x_3660_;
v_x_3651_ = v_tail_3653_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object* v_x_3664_, lean_object* v_x_3665_){
_start:
{
if (lean_obj_tag(v_x_3664_) == 0)
{
lean_object* v___x_3666_; 
lean_dec(v_x_3665_);
v___x_3666_ = lean_box(0);
return v___x_3666_;
}
else
{
lean_object* v_tail_3667_; 
v_tail_3667_ = lean_ctor_get(v_x_3664_, 1);
if (lean_obj_tag(v_tail_3667_) == 0)
{
lean_object* v_head_3668_; lean_object* v___x_3669_; 
lean_dec(v_x_3665_);
v_head_3668_ = lean_ctor_get(v_x_3664_, 0);
lean_inc(v_head_3668_);
lean_dec_ref_known(v_x_3664_, 2);
v___x_3669_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3668_);
return v___x_3669_;
}
else
{
lean_object* v_head_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
lean_inc(v_tail_3667_);
v_head_3670_ = lean_ctor_get(v_x_3664_, 0);
lean_inc(v_head_3670_);
lean_dec_ref_known(v_x_3664_, 2);
v___x_3671_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3670_);
v___x_3672_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(v_x_3665_, v___x_3671_, v_tail_3667_);
return v___x_3672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object* v_xs_3673_){
_start:
{
lean_object* v___x_3674_; lean_object* v___x_3675_; uint8_t v___x_3676_; 
v___x_3674_ = lean_array_get_size(v_xs_3673_);
v___x_3675_ = lean_unsigned_to_nat(0u);
v___x_3676_ = lean_nat_dec_eq(v___x_3674_, v___x_3675_);
if (v___x_3676_ == 0)
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3677_ = lean_array_to_list(v_xs_3673_);
v___x_3678_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3679_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(v___x_3677_, v___x_3678_);
v___x_3680_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3681_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3682_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3682_, 0, v___x_3681_);
lean_ctor_set(v___x_3682_, 1, v___x_3679_);
v___x_3683_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3684_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3684_, 0, v___x_3682_);
lean_ctor_set(v___x_3684_, 1, v___x_3683_);
v___x_3685_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3685_, 0, v___x_3680_);
lean_ctor_set(v___x_3685_, 1, v___x_3684_);
v___x_3686_ = l_Std_Format_fill(v___x_3685_);
return v___x_3686_;
}
else
{
lean_object* v___x_3687_; 
lean_dec_ref(v_xs_3673_);
v___x_3687_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3687_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object* v_x_3688_, lean_object* v_x_3689_, lean_object* v_x_3690_){
_start:
{
if (lean_obj_tag(v_x_3690_) == 0)
{
lean_dec(v_x_3688_);
return v_x_3689_;
}
else
{
lean_object* v_head_3691_; lean_object* v_tail_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3702_; 
v_head_3691_ = lean_ctor_get(v_x_3690_, 0);
v_tail_3692_ = lean_ctor_get(v_x_3690_, 1);
v_isSharedCheck_3702_ = !lean_is_exclusive(v_x_3690_);
if (v_isSharedCheck_3702_ == 0)
{
v___x_3694_ = v_x_3690_;
v_isShared_3695_ = v_isSharedCheck_3702_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_tail_3692_);
lean_inc(v_head_3691_);
lean_dec(v_x_3690_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3702_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v___x_3697_; 
lean_inc(v_x_3688_);
if (v_isShared_3695_ == 0)
{
lean_ctor_set_tag(v___x_3694_, 5);
lean_ctor_set(v___x_3694_, 1, v_x_3688_);
lean_ctor_set(v___x_3694_, 0, v_x_3689_);
v___x_3697_ = v___x_3694_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v_x_3689_);
lean_ctor_set(v_reuseFailAlloc_3701_, 1, v_x_3688_);
v___x_3697_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
lean_object* v___x_3698_; lean_object* v___x_3699_; 
v___x_3698_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3691_);
v___x_3699_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3697_);
lean_ctor_set(v___x_3699_, 1, v___x_3698_);
v_x_3689_ = v___x_3699_;
v_x_3690_ = v_tail_3692_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object* v_x_3703_, lean_object* v_x_3704_){
_start:
{
if (lean_obj_tag(v_x_3703_) == 0)
{
lean_object* v___x_3705_; 
lean_dec(v_x_3704_);
v___x_3705_ = lean_box(0);
return v___x_3705_;
}
else
{
lean_object* v_tail_3706_; 
v_tail_3706_ = lean_ctor_get(v_x_3703_, 1);
if (lean_obj_tag(v_tail_3706_) == 0)
{
lean_object* v_head_3707_; lean_object* v___x_3708_; 
lean_dec(v_x_3704_);
v_head_3707_ = lean_ctor_get(v_x_3703_, 0);
lean_inc(v_head_3707_);
lean_dec_ref_known(v_x_3703_, 2);
v___x_3708_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3707_);
return v___x_3708_;
}
else
{
lean_object* v_head_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; 
lean_inc(v_tail_3706_);
v_head_3709_ = lean_ctor_get(v_x_3703_, 0);
lean_inc(v_head_3709_);
lean_dec_ref_known(v_x_3703_, 2);
v___x_3710_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3709_);
v___x_3711_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(v_x_3704_, v___x_3710_, v_tail_3706_);
return v___x_3711_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object* v_xs_3712_){
_start:
{
lean_object* v___x_3713_; lean_object* v___x_3714_; uint8_t v___x_3715_; 
v___x_3713_ = lean_array_get_size(v_xs_3712_);
v___x_3714_ = lean_unsigned_to_nat(0u);
v___x_3715_ = lean_nat_dec_eq(v___x_3713_, v___x_3714_);
if (v___x_3715_ == 0)
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3716_ = lean_array_to_list(v_xs_3712_);
v___x_3717_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__3));
v___x_3718_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(v___x_3716_, v___x_3717_);
v___x_3719_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5, &l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__5);
v___x_3720_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__6));
v___x_3721_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3721_, 0, v___x_3720_);
lean_ctor_set(v___x_3721_, 1, v___x_3718_);
v___x_3722_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9));
v___x_3723_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3723_, 0, v___x_3721_);
lean_ctor_set(v___x_3723_, 1, v___x_3722_);
v___x_3724_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3719_);
lean_ctor_set(v___x_3724_, 1, v___x_3723_);
v___x_3725_ = l_Std_Format_fill(v___x_3724_);
return v___x_3725_;
}
else
{
lean_object* v___x_3726_; 
lean_dec_ref(v_xs_3712_);
v___x_3726_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__8));
return v___x_3726_;
}
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_3740_; lean_object* v___x_3741_; 
v___x_3740_ = lean_unsigned_to_nat(12u);
v___x_3741_ = lean_nat_to_int(v___x_3740_);
return v___x_3741_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3745_ = lean_unsigned_to_nat(9u);
v___x_3746_ = lean_nat_to_int(v___x_3745_);
return v___x_3746_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; 
v___x_3750_ = lean_unsigned_to_nat(11u);
v___x_3751_ = lean_nat_to_int(v___x_3750_);
return v___x_3751_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_3753_; lean_object* v___x_3754_; 
v___x_3753_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0));
v___x_3754_ = lean_string_length(v___x_3753_);
return v___x_3754_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_3755_; lean_object* v___x_3756_; 
v___x_3755_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15);
v___x_3756_ = lean_nat_to_int(v___x_3755_);
return v___x_3756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object* v_x_3761_){
_start:
{
lean_object* v_numFixed_3762_; lean_object* v_perms_3763_; lean_object* v_revDeps_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; uint8_t v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v_numFixed_3762_ = lean_ctor_get(v_x_3761_, 0);
lean_inc(v_numFixed_3762_);
v_perms_3763_ = lean_ctor_get(v_x_3761_, 1);
lean_inc_ref(v_perms_3763_);
v_revDeps_3764_ = lean_ctor_get(v_x_3761_, 2);
lean_inc_ref(v_revDeps_3764_);
lean_dec_ref(v_x_3761_);
v___x_3765_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5));
v___x_3766_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6));
v___x_3767_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7);
v___x_3768_ = l_Nat_reprFast(v_numFixed_3762_);
v___x_3769_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3769_, 0, v___x_3768_);
v___x_3770_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3767_);
lean_ctor_set(v___x_3770_, 1, v___x_3769_);
v___x_3771_ = 0;
v___x_3772_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3772_, 0, v___x_3770_);
lean_ctor_set_uint8(v___x_3772_, sizeof(void*)*1, v___x_3771_);
v___x_3773_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3766_);
lean_ctor_set(v___x_3773_, 1, v___x_3772_);
v___x_3774_ = ((lean_object*)(l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0___closed__2));
v___x_3775_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3773_);
lean_ctor_set(v___x_3775_, 1, v___x_3774_);
v___x_3776_ = lean_box(1);
v___x_3777_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3775_);
lean_ctor_set(v___x_3777_, 1, v___x_3776_);
v___x_3778_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9));
v___x_3779_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3779_, 0, v___x_3777_);
lean_ctor_set(v___x_3779_, 1, v___x_3778_);
v___x_3780_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3780_, 0, v___x_3779_);
lean_ctor_set(v___x_3780_, 1, v___x_3765_);
v___x_3781_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10);
v___x_3782_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(v_perms_3763_);
v___x_3783_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3781_);
lean_ctor_set(v___x_3783_, 1, v___x_3782_);
v___x_3784_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3784_, 0, v___x_3783_);
lean_ctor_set_uint8(v___x_3784_, sizeof(void*)*1, v___x_3771_);
v___x_3785_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3785_, 0, v___x_3780_);
lean_ctor_set(v___x_3785_, 1, v___x_3784_);
v___x_3786_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3786_, 0, v___x_3785_);
lean_ctor_set(v___x_3786_, 1, v___x_3774_);
v___x_3787_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3787_, 0, v___x_3786_);
lean_ctor_set(v___x_3787_, 1, v___x_3776_);
v___x_3788_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12));
v___x_3789_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3787_);
lean_ctor_set(v___x_3789_, 1, v___x_3788_);
v___x_3790_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3789_);
lean_ctor_set(v___x_3790_, 1, v___x_3765_);
v___x_3791_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13);
v___x_3792_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(v_revDeps_3764_);
v___x_3793_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3791_);
lean_ctor_set(v___x_3793_, 1, v___x_3792_);
v___x_3794_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3794_, 0, v___x_3793_);
lean_ctor_set_uint8(v___x_3794_, sizeof(void*)*1, v___x_3771_);
v___x_3795_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3790_);
lean_ctor_set(v___x_3795_, 1, v___x_3794_);
v___x_3796_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16);
v___x_3797_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17));
v___x_3798_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3798_, 0, v___x_3797_);
lean_ctor_set(v___x_3798_, 1, v___x_3795_);
v___x_3799_ = ((lean_object*)(l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18));
v___x_3800_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3800_, 0, v___x_3798_);
lean_ctor_set(v___x_3800_, 1, v___x_3799_);
v___x_3801_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3796_);
lean_ctor_set(v___x_3801_, 1, v___x_3800_);
v___x_3802_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3802_, 0, v___x_3801_);
lean_ctor_set_uint8(v___x_3802_, sizeof(void*)*1, v___x_3771_);
return v___x_3802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object* v_x_3803_, lean_object* v_prec_3804_){
_start:
{
lean_object* v___x_3805_; 
v___x_3805_ = l_Lean_Elab_instReprFixedParamPerms_repr___redArg(v_x_3803_);
return v___x_3805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object* v_x_3806_, lean_object* v_prec_3807_){
_start:
{
lean_object* v_res_3808_; 
v_res_3808_ = l_Lean_Elab_instReprFixedParamPerms_repr(v_x_3806_, v_prec_3807_);
lean_dec(v_prec_3807_);
return v_res_3808_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object* v_msg_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_){
_start:
{
lean_object* v___f_3817_; lean_object* v___x_5728__overap_3818_; lean_object* v___x_3819_; 
v___f_3817_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_5728__overap_3818_ = lean_panic_fn_borrowed(v___f_3817_, v_msg_3811_);
lean_inc(v___y_3815_);
lean_inc_ref(v___y_3814_);
lean_inc(v___y_3813_);
lean_inc_ref(v___y_3812_);
v___x_3819_ = lean_apply_5(v___x_5728__overap_3818_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_, lean_box(0));
return v___x_3819_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object* v_msg_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_){
_start:
{
lean_object* v_res_3826_; 
v_res_3826_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v_msg_3820_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_);
lean_dec(v___y_3824_);
lean_dec_ref(v___y_3823_);
lean_dec(v___y_3822_);
lean_dec_ref(v___y_3821_);
return v_res_3826_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object* v_msg_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_){
_start:
{
lean_object* v___f_3833_; lean_object* v___x_5738__overap_3834_; lean_object* v___x_3835_; 
v___f_3833_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_5738__overap_3834_ = lean_panic_fn_borrowed(v___f_3833_, v_msg_3827_);
lean_inc(v___y_3831_);
lean_inc_ref(v___y_3830_);
lean_inc(v___y_3829_);
lean_inc_ref(v___y_3828_);
v___x_3835_ = lean_apply_5(v___x_5738__overap_3834_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, lean_box(0));
return v___x_3835_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object* v_msg_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_){
_start:
{
lean_object* v_res_3842_; 
v_res_3842_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v_msg_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_);
lean_dec(v___y_3840_);
lean_dec_ref(v___y_3839_);
lean_dec(v___y_3838_);
lean_dec_ref(v___y_3837_);
return v_res_3842_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object* v_msg_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_){
_start:
{
lean_object* v___f_3849_; lean_object* v___x_5748__overap_3850_; lean_object* v___x_3851_; 
v___f_3849_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_5748__overap_3850_ = lean_panic_fn_borrowed(v___f_3849_, v_msg_3843_);
lean_inc(v___y_3847_);
lean_inc_ref(v___y_3846_);
lean_inc(v___y_3845_);
lean_inc_ref(v___y_3844_);
v___x_3851_ = lean_apply_5(v___x_5748__overap_3850_, v___y_3844_, v___y_3845_, v___y_3846_, v___y_3847_, lean_box(0));
return v___x_3851_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object* v_msg_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_){
_start:
{
lean_object* v_res_3858_; 
v_res_3858_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v_msg_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_);
lean_dec(v___y_3856_);
lean_dec_ref(v___y_3855_);
lean_dec(v___y_3854_);
lean_dec_ref(v___y_3853_);
return v_res_3858_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2(void){
_start:
{
lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; 
v___x_3861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1));
v___x_3862_ = lean_unsigned_to_nat(12u);
v___x_3863_ = lean_unsigned_to_nat(294u);
v___x_3864_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3865_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3866_ = l_mkPanicMessageWithDecl(v___x_3865_, v___x_3864_, v___x_3863_, v___x_3862_, v___x_3861_);
return v___x_3866_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4(void){
_start:
{
lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
v___x_3868_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3));
v___x_3869_ = lean_unsigned_to_nat(12u);
v___x_3870_ = lean_unsigned_to_nat(297u);
v___x_3871_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3872_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3873_ = l_mkPanicMessageWithDecl(v___x_3872_, v___x_3871_, v___x_3870_, v___x_3869_, v___x_3868_);
return v___x_3873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object* v___x_3874_, lean_object* v_as_3875_, size_t v_sz_3876_, size_t v_i_3877_, lean_object* v_b_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
lean_object* v_a_3885_; uint8_t v___x_3889_; 
v___x_3889_ = lean_usize_dec_lt(v_i_3877_, v_sz_3876_);
if (v___x_3889_ == 0)
{
lean_object* v___x_3890_; 
v___x_3890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3890_, 0, v_b_3878_);
return v___x_3890_;
}
else
{
lean_object* v_a_3891_; 
v_a_3891_ = lean_array_uget_borrowed(v_as_3875_, v_i_3877_);
if (lean_obj_tag(v_a_3891_) == 1)
{
lean_object* v_val_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
v_val_3892_ = lean_ctor_get(v_a_3891_, 0);
v___x_3893_ = lean_box(0);
v___x_3894_ = lean_unsigned_to_nat(0u);
v___x_3895_ = lean_array_get_borrowed(v___x_3893_, v_val_3892_, v___x_3894_);
if (lean_obj_tag(v___x_3895_) == 1)
{
lean_object* v_val_3896_; lean_object* v___x_3897_; 
v_val_3896_ = lean_ctor_get(v___x_3895_, 0);
v___x_3897_ = lean_array_get_borrowed(v___x_3893_, v___x_3874_, v_val_3896_);
if (lean_obj_tag(v___x_3897_) == 0)
{
lean_object* v___x_3898_; lean_object* v___x_3899_; 
lean_dec_ref(v_b_3878_);
v___x_3898_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2);
v___x_3899_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v___x_3898_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3899_) == 0)
{
lean_object* v_a_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3909_; 
v_a_3900_ = lean_ctor_get(v___x_3899_, 0);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___x_3899_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3902_ = v___x_3899_;
v_isShared_3903_ = v_isSharedCheck_3909_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_a_3900_);
lean_dec(v___x_3899_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3909_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
if (lean_obj_tag(v_a_3900_) == 0)
{
lean_object* v_a_3904_; lean_object* v___x_3906_; 
v_a_3904_ = lean_ctor_get(v_a_3900_, 0);
lean_inc(v_a_3904_);
lean_dec_ref_known(v_a_3900_, 1);
if (v_isShared_3903_ == 0)
{
lean_ctor_set(v___x_3902_, 0, v_a_3904_);
v___x_3906_ = v___x_3902_;
goto v_reusejp_3905_;
}
else
{
lean_object* v_reuseFailAlloc_3907_; 
v_reuseFailAlloc_3907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3907_, 0, v_a_3904_);
v___x_3906_ = v_reuseFailAlloc_3907_;
goto v_reusejp_3905_;
}
v_reusejp_3905_:
{
return v___x_3906_;
}
}
else
{
lean_object* v_a_3908_; 
lean_del_object(v___x_3902_);
v_a_3908_ = lean_ctor_get(v_a_3900_, 0);
lean_inc(v_a_3908_);
lean_dec_ref_known(v_a_3900_, 1);
v_a_3885_ = v_a_3908_;
goto v___jp_3884_;
}
}
}
else
{
lean_object* v_a_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3917_; 
v_a_3910_ = lean_ctor_get(v___x_3899_, 0);
v_isSharedCheck_3917_ = !lean_is_exclusive(v___x_3899_);
if (v_isSharedCheck_3917_ == 0)
{
v___x_3912_ = v___x_3899_;
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
else
{
lean_inc(v_a_3910_);
lean_dec(v___x_3899_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
lean_object* v___x_3915_; 
if (v_isShared_3913_ == 0)
{
v___x_3915_ = v___x_3912_;
goto v_reusejp_3914_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v_a_3910_);
v___x_3915_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3914_;
}
v_reusejp_3914_:
{
return v___x_3915_;
}
}
}
}
else
{
lean_object* v___x_3918_; 
lean_inc_ref(v___x_3897_);
v___x_3918_ = lean_array_push(v_b_3878_, v___x_3897_);
v_a_3885_ = v___x_3918_;
goto v___jp_3884_;
}
}
else
{
lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3919_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4);
v___x_3920_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_3919_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3920_) == 0)
{
lean_dec_ref_known(v___x_3920_, 1);
v_a_3885_ = v_b_3878_;
goto v___jp_3884_;
}
else
{
lean_object* v_a_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3928_; 
lean_dec_ref(v_b_3878_);
v_a_3921_ = lean_ctor_get(v___x_3920_, 0);
v_isSharedCheck_3928_ = !lean_is_exclusive(v___x_3920_);
if (v_isSharedCheck_3928_ == 0)
{
v___x_3923_ = v___x_3920_;
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v___x_3920_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3926_; 
if (v_isShared_3924_ == 0)
{
v___x_3926_ = v___x_3923_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v_a_3921_);
v___x_3926_ = v_reuseFailAlloc_3927_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
return v___x_3926_;
}
}
}
}
}
else
{
lean_object* v___x_3929_; lean_object* v___x_3930_; 
v___x_3929_ = lean_box(0);
v___x_3930_ = lean_array_push(v_b_3878_, v___x_3929_);
v_a_3885_ = v___x_3930_;
goto v___jp_3884_;
}
}
v___jp_3884_:
{
size_t v___x_3886_; size_t v___x_3887_; 
v___x_3886_ = ((size_t)1ULL);
v___x_3887_ = lean_usize_add(v_i_3877_, v___x_3886_);
v_i_3877_ = v___x_3887_;
v_b_3878_ = v_a_3885_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object* v___x_3931_, lean_object* v_as_3932_, lean_object* v_sz_3933_, lean_object* v_i_3934_, lean_object* v_b_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_){
_start:
{
size_t v_sz_boxed_3941_; size_t v_i_boxed_3942_; lean_object* v_res_3943_; 
v_sz_boxed_3941_ = lean_unbox_usize(v_sz_3933_);
lean_dec(v_sz_3933_);
v_i_boxed_3942_ = lean_unbox_usize(v_i_3934_);
lean_dec(v_i_3934_);
v_res_3943_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3931_, v_as_3932_, v_sz_boxed_3941_, v_i_boxed_3942_, v_b_3935_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_);
lean_dec(v___y_3939_);
lean_dec_ref(v___y_3938_);
lean_dec(v___y_3937_);
lean_dec_ref(v___y_3936_);
lean_dec_ref(v_as_3932_);
lean_dec_ref(v___x_3931_);
return v_res_3943_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object* v_upperBound_3946_, lean_object* v___x_3947_, lean_object* v___x_3948_, lean_object* v_a_3949_, lean_object* v_b_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_){
_start:
{
uint8_t v___x_3956_; 
v___x_3956_ = lean_nat_dec_lt(v_a_3949_, v_upperBound_3946_);
if (v___x_3956_ == 0)
{
lean_object* v___x_3957_; 
lean_dec(v_a_3949_);
v___x_3957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3957_, 0, v_b_3950_);
return v___x_3957_;
}
else
{
lean_object* v___x_3958_; lean_object* v___x_3959_; size_t v_sz_3960_; size_t v___x_3961_; lean_object* v___x_3962_; 
v___x_3958_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_3959_ = lean_array_fget_borrowed(v___x_3947_, v_a_3949_);
v_sz_3960_ = lean_array_size(v___x_3959_);
v___x_3961_ = ((size_t)0ULL);
v___x_3962_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3948_, v___x_3959_, v_sz_3960_, v___x_3961_, v___x_3958_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_);
if (lean_obj_tag(v___x_3962_) == 0)
{
lean_object* v_a_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
v_a_3963_ = lean_ctor_get(v___x_3962_, 0);
lean_inc(v_a_3963_);
lean_dec_ref_known(v___x_3962_, 1);
v___x_3964_ = lean_array_push(v_b_3950_, v_a_3963_);
v___x_3965_ = lean_unsigned_to_nat(1u);
v___x_3966_ = lean_nat_add(v_a_3949_, v___x_3965_);
lean_dec(v_a_3949_);
v_a_3949_ = v___x_3966_;
v_b_3950_ = v___x_3964_;
goto _start;
}
else
{
lean_object* v_a_3968_; lean_object* v___x_3970_; uint8_t v_isShared_3971_; uint8_t v_isSharedCheck_3975_; 
lean_dec_ref(v_b_3950_);
lean_dec(v_a_3949_);
v_a_3968_ = lean_ctor_get(v___x_3962_, 0);
v_isSharedCheck_3975_ = !lean_is_exclusive(v___x_3962_);
if (v_isSharedCheck_3975_ == 0)
{
v___x_3970_ = v___x_3962_;
v_isShared_3971_ = v_isSharedCheck_3975_;
goto v_resetjp_3969_;
}
else
{
lean_inc(v_a_3968_);
lean_dec(v___x_3962_);
v___x_3970_ = lean_box(0);
v_isShared_3971_ = v_isSharedCheck_3975_;
goto v_resetjp_3969_;
}
v_resetjp_3969_:
{
lean_object* v___x_3973_; 
if (v_isShared_3971_ == 0)
{
v___x_3973_ = v___x_3970_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v_a_3968_);
v___x_3973_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
return v___x_3973_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object* v_upperBound_3976_, lean_object* v___x_3977_, lean_object* v___x_3978_, lean_object* v_a_3979_, lean_object* v_b_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_3976_, v___x_3977_, v___x_3978_, v_a_3979_, v_b_3980_, v___y_3981_, v___y_3982_, v___y_3983_, v___y_3984_);
lean_dec(v___y_3984_);
lean_dec_ref(v___y_3983_);
lean_dec(v___y_3982_);
lean_dec_ref(v___y_3981_);
lean_dec_ref(v___x_3978_);
lean_dec_ref(v___x_3977_);
lean_dec(v_upperBound_3976_);
return v_res_3986_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; 
v___x_3988_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0));
v___x_3989_ = lean_unsigned_to_nat(8u);
v___x_3990_ = lean_unsigned_to_nat(281u);
v___x_3991_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_3992_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_3993_ = l_mkPanicMessageWithDecl(v___x_3992_, v___x_3991_, v___x_3990_, v___x_3989_, v___x_3988_);
return v___x_3993_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object* v_upperBound_3994_, lean_object* v_a_3995_, lean_object* v_b_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_){
_start:
{
lean_object* v_a_4003_; uint8_t v___x_4007_; 
v___x_4007_ = lean_nat_dec_lt(v_a_3995_, v_upperBound_3994_);
if (v___x_4007_ == 0)
{
lean_object* v___x_4008_; 
lean_dec(v_a_3995_);
v___x_4008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4008_, 0, v_b_3996_);
return v___x_4008_;
}
else
{
lean_object* v_snd_4009_; lean_object* v_snd_4010_; lean_object* v_snd_4011_; lean_object* v_fst_4012_; lean_object* v___x_4014_; uint8_t v_isShared_4015_; uint8_t v_isSharedCheck_4136_; 
v_snd_4009_ = lean_ctor_get(v_b_3996_, 1);
lean_inc(v_snd_4009_);
v_snd_4010_ = lean_ctor_get(v_snd_4009_, 1);
lean_inc(v_snd_4010_);
v_snd_4011_ = lean_ctor_get(v_snd_4010_, 1);
lean_inc(v_snd_4011_);
v_fst_4012_ = lean_ctor_get(v_b_3996_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v_b_3996_);
if (v_isSharedCheck_4136_ == 0)
{
lean_object* v_unused_4137_; 
v_unused_4137_ = lean_ctor_get(v_b_3996_, 1);
lean_dec(v_unused_4137_);
v___x_4014_ = v_b_3996_;
v_isShared_4015_ = v_isSharedCheck_4136_;
goto v_resetjp_4013_;
}
else
{
lean_inc(v_fst_4012_);
lean_dec(v_b_3996_);
v___x_4014_ = lean_box(0);
v_isShared_4015_ = v_isSharedCheck_4136_;
goto v_resetjp_4013_;
}
v_resetjp_4013_:
{
lean_object* v_fst_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4134_; 
v_fst_4016_ = lean_ctor_get(v_snd_4009_, 0);
v_isSharedCheck_4134_ = !lean_is_exclusive(v_snd_4009_);
if (v_isSharedCheck_4134_ == 0)
{
lean_object* v_unused_4135_; 
v_unused_4135_ = lean_ctor_get(v_snd_4009_, 1);
lean_dec(v_unused_4135_);
v___x_4018_ = v_snd_4009_;
v_isShared_4019_ = v_isSharedCheck_4134_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_fst_4016_);
lean_dec(v_snd_4009_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4134_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v_fst_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4132_; 
v_fst_4020_ = lean_ctor_get(v_snd_4010_, 0);
v_isSharedCheck_4132_ = !lean_is_exclusive(v_snd_4010_);
if (v_isSharedCheck_4132_ == 0)
{
lean_object* v_unused_4133_; 
v_unused_4133_ = lean_ctor_get(v_snd_4010_, 1);
lean_dec(v_unused_4133_);
v___x_4022_ = v_snd_4010_;
v_isShared_4023_ = v_isSharedCheck_4132_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_fst_4020_);
lean_dec(v_snd_4010_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4132_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
lean_object* v_array_4024_; lean_object* v_start_4025_; lean_object* v_stop_4026_; uint8_t v___x_4027_; 
v_array_4024_ = lean_ctor_get(v_snd_4011_, 0);
v_start_4025_ = lean_ctor_get(v_snd_4011_, 1);
v_stop_4026_ = lean_ctor_get(v_snd_4011_, 2);
v___x_4027_ = lean_nat_dec_lt(v_start_4025_, v_stop_4026_);
if (v___x_4027_ == 0)
{
lean_object* v___x_4029_; 
lean_dec(v_a_3995_);
if (v_isShared_4023_ == 0)
{
v___x_4029_ = v___x_4022_;
goto v_reusejp_4028_;
}
else
{
lean_object* v_reuseFailAlloc_4037_; 
v_reuseFailAlloc_4037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4037_, 0, v_fst_4020_);
lean_ctor_set(v_reuseFailAlloc_4037_, 1, v_snd_4011_);
v___x_4029_ = v_reuseFailAlloc_4037_;
goto v_reusejp_4028_;
}
v_reusejp_4028_:
{
lean_object* v___x_4031_; 
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 1, v___x_4029_);
v___x_4031_ = v___x_4018_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v_fst_4016_);
lean_ctor_set(v_reuseFailAlloc_4036_, 1, v___x_4029_);
v___x_4031_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
lean_object* v___x_4033_; 
if (v_isShared_4015_ == 0)
{
lean_ctor_set(v___x_4014_, 1, v___x_4031_);
v___x_4033_ = v___x_4014_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v_fst_4012_);
lean_ctor_set(v_reuseFailAlloc_4035_, 1, v___x_4031_);
v___x_4033_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
lean_object* v___x_4034_; 
v___x_4034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4034_, 0, v___x_4033_);
return v___x_4034_;
}
}
}
}
else
{
lean_object* v___x_4039_; uint8_t v_isShared_4040_; uint8_t v_isSharedCheck_4128_; 
lean_inc(v_stop_4026_);
lean_inc(v_start_4025_);
lean_inc_ref(v_array_4024_);
v_isSharedCheck_4128_ = !lean_is_exclusive(v_snd_4011_);
if (v_isSharedCheck_4128_ == 0)
{
lean_object* v_unused_4129_; lean_object* v_unused_4130_; lean_object* v_unused_4131_; 
v_unused_4129_ = lean_ctor_get(v_snd_4011_, 2);
lean_dec(v_unused_4129_);
v_unused_4130_ = lean_ctor_get(v_snd_4011_, 1);
lean_dec(v_unused_4130_);
v_unused_4131_ = lean_ctor_get(v_snd_4011_, 0);
lean_dec(v_unused_4131_);
v___x_4039_ = v_snd_4011_;
v_isShared_4040_ = v_isSharedCheck_4128_;
goto v_resetjp_4038_;
}
else
{
lean_dec(v_snd_4011_);
v___x_4039_ = lean_box(0);
v_isShared_4040_ = v_isSharedCheck_4128_;
goto v_resetjp_4038_;
}
v_resetjp_4038_:
{
lean_object* v_array_4041_; lean_object* v_start_4042_; lean_object* v_stop_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4048_; 
v_array_4041_ = lean_ctor_get(v_fst_4020_, 0);
v_start_4042_ = lean_ctor_get(v_fst_4020_, 1);
v_stop_4043_ = lean_ctor_get(v_fst_4020_, 2);
v___x_4044_ = lean_array_fget(v_array_4024_, v_start_4025_);
v___x_4045_ = lean_unsigned_to_nat(1u);
v___x_4046_ = lean_nat_add(v_start_4025_, v___x_4045_);
lean_dec(v_start_4025_);
if (v_isShared_4040_ == 0)
{
lean_ctor_set(v___x_4039_, 1, v___x_4046_);
v___x_4048_ = v___x_4039_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_array_4024_);
lean_ctor_set(v_reuseFailAlloc_4127_, 1, v___x_4046_);
lean_ctor_set(v_reuseFailAlloc_4127_, 2, v_stop_4026_);
v___x_4048_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
uint8_t v___x_4049_; 
v___x_4049_ = lean_nat_dec_lt(v_start_4042_, v_stop_4043_);
if (v___x_4049_ == 0)
{
lean_object* v___x_4051_; 
lean_dec(v___x_4044_);
lean_dec(v_a_3995_);
if (v_isShared_4023_ == 0)
{
lean_ctor_set(v___x_4022_, 1, v___x_4048_);
v___x_4051_ = v___x_4022_;
goto v_reusejp_4050_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v_fst_4020_);
lean_ctor_set(v_reuseFailAlloc_4059_, 1, v___x_4048_);
v___x_4051_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4050_;
}
v_reusejp_4050_:
{
lean_object* v___x_4053_; 
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 1, v___x_4051_);
v___x_4053_ = v___x_4018_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4058_; 
v_reuseFailAlloc_4058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4058_, 0, v_fst_4016_);
lean_ctor_set(v_reuseFailAlloc_4058_, 1, v___x_4051_);
v___x_4053_ = v_reuseFailAlloc_4058_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
lean_object* v___x_4055_; 
if (v_isShared_4015_ == 0)
{
lean_ctor_set(v___x_4014_, 1, v___x_4053_);
v___x_4055_ = v___x_4014_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4057_; 
v_reuseFailAlloc_4057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4057_, 0, v_fst_4012_);
lean_ctor_set(v_reuseFailAlloc_4057_, 1, v___x_4053_);
v___x_4055_ = v_reuseFailAlloc_4057_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
lean_object* v___x_4056_; 
v___x_4056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4056_, 0, v___x_4055_);
return v___x_4056_;
}
}
}
}
else
{
lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4123_; 
lean_inc(v_stop_4043_);
lean_inc(v_start_4042_);
lean_inc_ref(v_array_4041_);
v_isSharedCheck_4123_ = !lean_is_exclusive(v_fst_4020_);
if (v_isSharedCheck_4123_ == 0)
{
lean_object* v_unused_4124_; lean_object* v_unused_4125_; lean_object* v_unused_4126_; 
v_unused_4124_ = lean_ctor_get(v_fst_4020_, 2);
lean_dec(v_unused_4124_);
v_unused_4125_ = lean_ctor_get(v_fst_4020_, 1);
lean_dec(v_unused_4125_);
v_unused_4126_ = lean_ctor_get(v_fst_4020_, 0);
lean_dec(v_unused_4126_);
v___x_4061_ = v_fst_4020_;
v_isShared_4062_ = v_isSharedCheck_4123_;
goto v_resetjp_4060_;
}
else
{
lean_dec(v_fst_4020_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4123_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4063_; lean_object* v___x_4065_; 
v___x_4063_ = lean_nat_add(v_start_4042_, v___x_4045_);
lean_dec(v_start_4042_);
if (v_isShared_4062_ == 0)
{
lean_ctor_set(v___x_4061_, 1, v___x_4063_);
v___x_4065_ = v___x_4061_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v_array_4041_);
lean_ctor_set(v_reuseFailAlloc_4122_, 1, v___x_4063_);
lean_ctor_set(v_reuseFailAlloc_4122_, 2, v_stop_4043_);
v___x_4065_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
if (lean_obj_tag(v___x_4044_) == 1)
{
lean_object* v_val_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4110_; 
v_val_4066_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4110_ == 0)
{
v___x_4068_ = v___x_4044_;
v_isShared_4069_ = v_isSharedCheck_4110_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_val_4066_);
lean_dec(v___x_4044_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4110_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4075_; 
v___x_4070_ = lean_box(0);
v___x_4071_ = lean_unsigned_to_nat(0u);
v___x_4072_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_4073_ = lean_array_get(v___x_4070_, v_val_4066_, v___x_4071_);
lean_dec(v_val_4066_);
lean_inc(v_a_3995_);
if (v_isShared_4069_ == 0)
{
lean_ctor_set(v___x_4068_, 0, v_a_3995_);
v___x_4075_ = v___x_4068_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4109_; 
v_reuseFailAlloc_4109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4109_, 0, v_a_3995_);
v___x_4075_ = v_reuseFailAlloc_4109_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
uint8_t v___x_4076_; 
v___x_4076_ = l_Option_instDecidableEq___redArg(v___x_4072_, v___x_4073_, v___x_4075_);
if (v___x_4076_ == 0)
{
lean_object* v___x_4077_; lean_object* v___x_4078_; 
lean_dec_ref(v___x_4065_);
lean_dec_ref(v___x_4048_);
lean_del_object(v___x_4022_);
lean_del_object(v___x_4018_);
lean_dec(v_fst_4016_);
lean_del_object(v___x_4014_);
lean_dec(v_fst_4012_);
v___x_4077_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1);
v___x_4078_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v___x_4077_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_);
if (lean_obj_tag(v___x_4078_) == 0)
{
lean_object* v_a_4079_; lean_object* v___x_4081_; uint8_t v_isShared_4082_; uint8_t v_isSharedCheck_4088_; 
v_a_4079_ = lean_ctor_get(v___x_4078_, 0);
v_isSharedCheck_4088_ = !lean_is_exclusive(v___x_4078_);
if (v_isSharedCheck_4088_ == 0)
{
v___x_4081_ = v___x_4078_;
v_isShared_4082_ = v_isSharedCheck_4088_;
goto v_resetjp_4080_;
}
else
{
lean_inc(v_a_4079_);
lean_dec(v___x_4078_);
v___x_4081_ = lean_box(0);
v_isShared_4082_ = v_isSharedCheck_4088_;
goto v_resetjp_4080_;
}
v_resetjp_4080_:
{
if (lean_obj_tag(v_a_4079_) == 0)
{
lean_object* v_a_4083_; lean_object* v___x_4085_; 
lean_dec(v_a_3995_);
v_a_4083_ = lean_ctor_get(v_a_4079_, 0);
lean_inc(v_a_4083_);
lean_dec_ref_known(v_a_4079_, 1);
if (v_isShared_4082_ == 0)
{
lean_ctor_set(v___x_4081_, 0, v_a_4083_);
v___x_4085_ = v___x_4081_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v_a_4083_);
v___x_4085_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
return v___x_4085_;
}
}
else
{
lean_object* v_a_4087_; 
lean_del_object(v___x_4081_);
v_a_4087_ = lean_ctor_get(v_a_4079_, 0);
lean_inc(v_a_4087_);
lean_dec_ref_known(v_a_4079_, 1);
v_a_4003_ = v_a_4087_;
goto v___jp_4002_;
}
}
}
else
{
lean_object* v_a_4089_; lean_object* v___x_4091_; uint8_t v_isShared_4092_; uint8_t v_isSharedCheck_4096_; 
lean_dec(v_a_3995_);
v_a_4089_ = lean_ctor_get(v___x_4078_, 0);
v_isSharedCheck_4096_ = !lean_is_exclusive(v___x_4078_);
if (v_isSharedCheck_4096_ == 0)
{
v___x_4091_ = v___x_4078_;
v_isShared_4092_ = v_isSharedCheck_4096_;
goto v_resetjp_4090_;
}
else
{
lean_inc(v_a_4089_);
lean_dec(v___x_4078_);
v___x_4091_ = lean_box(0);
v_isShared_4092_ = v_isSharedCheck_4096_;
goto v_resetjp_4090_;
}
v_resetjp_4090_:
{
lean_object* v___x_4094_; 
if (v_isShared_4092_ == 0)
{
v___x_4094_ = v___x_4091_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v_a_4089_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
return v___x_4094_;
}
}
}
}
else
{
lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4101_; 
lean_inc(v_fst_4016_);
v___x_4097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4097_, 0, v_fst_4016_);
v___x_4098_ = lean_array_push(v_fst_4012_, v___x_4097_);
v___x_4099_ = lean_nat_add(v_fst_4016_, v___x_4045_);
lean_dec(v_fst_4016_);
if (v_isShared_4023_ == 0)
{
lean_ctor_set(v___x_4022_, 1, v___x_4048_);
lean_ctor_set(v___x_4022_, 0, v___x_4065_);
v___x_4101_ = v___x_4022_;
goto v_reusejp_4100_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v___x_4065_);
lean_ctor_set(v_reuseFailAlloc_4108_, 1, v___x_4048_);
v___x_4101_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4100_;
}
v_reusejp_4100_:
{
lean_object* v___x_4103_; 
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 1, v___x_4101_);
lean_ctor_set(v___x_4018_, 0, v___x_4099_);
v___x_4103_ = v___x_4018_;
goto v_reusejp_4102_;
}
else
{
lean_object* v_reuseFailAlloc_4107_; 
v_reuseFailAlloc_4107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4107_, 0, v___x_4099_);
lean_ctor_set(v_reuseFailAlloc_4107_, 1, v___x_4101_);
v___x_4103_ = v_reuseFailAlloc_4107_;
goto v_reusejp_4102_;
}
v_reusejp_4102_:
{
lean_object* v___x_4105_; 
if (v_isShared_4015_ == 0)
{
lean_ctor_set(v___x_4014_, 1, v___x_4103_);
lean_ctor_set(v___x_4014_, 0, v___x_4098_);
v___x_4105_ = v___x_4014_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v___x_4098_);
lean_ctor_set(v_reuseFailAlloc_4106_, 1, v___x_4103_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
v_a_4003_ = v___x_4105_;
goto v___jp_4002_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4114_; 
lean_dec(v___x_4044_);
v___x_4111_ = lean_box(0);
v___x_4112_ = lean_array_push(v_fst_4012_, v___x_4111_);
if (v_isShared_4023_ == 0)
{
lean_ctor_set(v___x_4022_, 1, v___x_4048_);
lean_ctor_set(v___x_4022_, 0, v___x_4065_);
v___x_4114_ = v___x_4022_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4065_);
lean_ctor_set(v_reuseFailAlloc_4121_, 1, v___x_4048_);
v___x_4114_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
lean_object* v___x_4116_; 
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 1, v___x_4114_);
v___x_4116_ = v___x_4018_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v_fst_4016_);
lean_ctor_set(v_reuseFailAlloc_4120_, 1, v___x_4114_);
v___x_4116_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
lean_object* v___x_4118_; 
if (v_isShared_4015_ == 0)
{
lean_ctor_set(v___x_4014_, 1, v___x_4116_);
lean_ctor_set(v___x_4014_, 0, v___x_4112_);
v___x_4118_ = v___x_4014_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4119_, 0, v___x_4112_);
lean_ctor_set(v_reuseFailAlloc_4119_, 1, v___x_4116_);
v___x_4118_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
v_a_4003_ = v___x_4118_;
goto v___jp_4002_;
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
}
}
}
v___jp_4002_:
{
lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___x_4004_ = lean_unsigned_to_nat(1u);
v___x_4005_ = lean_nat_add(v_a_3995_, v___x_4004_);
lean_dec(v_a_3995_);
v_a_3995_ = v___x_4005_;
v_b_3996_ = v_a_4003_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object* v_upperBound_4138_, lean_object* v_a_4139_, lean_object* v_b_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_){
_start:
{
lean_object* v_res_4146_; 
v_res_4146_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4138_, v_a_4139_, v_b_4140_, v___y_4141_, v___y_4142_, v___y_4143_, v___y_4144_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
lean_dec(v___y_4142_);
lean_dec_ref(v___y_4141_);
lean_dec(v_upperBound_4138_);
return v_res_4146_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; 
v___x_4148_ = ((lean_object*)(l_Lean_Elab_getFixedParamPerms___lam__0___closed__0));
v___x_4149_ = lean_unsigned_to_nat(4u);
v___x_4150_ = lean_unsigned_to_nat(275u);
v___x_4151_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0));
v___x_4152_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4153_ = l_mkPanicMessageWithDecl(v___x_4152_, v___x_4151_, v___x_4150_, v___x_4149_, v___x_4148_);
return v___x_4153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object* v_a_4154_, lean_object* v___x_4155_, lean_object* v___x_4156_, lean_object* v_xs_4157_, lean_object* v_x_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_){
_start:
{
lean_object* v_graph_4164_; lean_object* v_revDeps_4165_; lean_object* v___x_4167_; uint8_t v_isShared_4168_; uint8_t v_isSharedCheck_4218_; 
v_graph_4164_ = lean_ctor_get(v_a_4154_, 0);
v_revDeps_4165_ = lean_ctor_get(v_a_4154_, 1);
v_isSharedCheck_4218_ = !lean_is_exclusive(v_a_4154_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4167_ = v_a_4154_;
v_isShared_4168_ = v_isSharedCheck_4218_;
goto v_resetjp_4166_;
}
else
{
lean_inc(v_revDeps_4165_);
lean_inc(v_graph_4164_);
lean_dec(v_a_4154_);
v___x_4167_ = lean_box(0);
v_isShared_4168_ = v_isSharedCheck_4218_;
goto v_resetjp_4166_;
}
v_resetjp_4166_:
{
lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; uint8_t v___x_4172_; 
v___x_4169_ = lean_array_get_borrowed(v___x_4155_, v_graph_4164_, v___x_4156_);
v___x_4170_ = lean_array_get_size(v_xs_4157_);
v___x_4171_ = lean_array_get_size(v___x_4169_);
v___x_4172_ = lean_nat_dec_eq(v___x_4170_, v___x_4171_);
if (v___x_4172_ == 0)
{
lean_object* v___x_4173_; lean_object* v___x_4174_; 
lean_del_object(v___x_4167_);
lean_dec_ref(v_revDeps_4165_);
lean_dec_ref(v_graph_4164_);
lean_dec_ref(v_xs_4157_);
lean_dec(v___x_4156_);
v___x_4173_ = lean_obj_once(&l_Lean_Elab_getFixedParamPerms___lam__0___closed__1, &l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once, _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1);
v___x_4174_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v___x_4173_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_);
return v___x_4174_;
}
else
{
lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4179_; 
v___x_4175_ = lean_mk_empty_array_with_capacity(v___x_4156_);
lean_inc_n(v___x_4156_, 2);
v___x_4176_ = l_Array_toSubarray___redArg(v_xs_4157_, v___x_4156_, v___x_4170_);
lean_inc(v___x_4169_);
v___x_4177_ = l_Array_toSubarray___redArg(v___x_4169_, v___x_4156_, v___x_4171_);
if (v_isShared_4168_ == 0)
{
lean_ctor_set(v___x_4167_, 1, v___x_4177_);
lean_ctor_set(v___x_4167_, 0, v___x_4176_);
v___x_4179_ = v___x_4167_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v___x_4176_);
lean_ctor_set(v_reuseFailAlloc_4217_, 1, v___x_4177_);
v___x_4179_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; 
lean_inc(v___x_4156_);
v___x_4180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4180_, 0, v___x_4156_);
lean_ctor_set(v___x_4180_, 1, v___x_4179_);
v___x_4181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4181_, 0, v___x_4175_);
lean_ctor_set(v___x_4181_, 1, v___x_4180_);
v___x_4182_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v___x_4170_, v___x_4156_, v___x_4181_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_);
if (lean_obj_tag(v___x_4182_) == 0)
{
lean_object* v_a_4183_; lean_object* v_snd_4184_; lean_object* v_fst_4185_; lean_object* v_fst_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; 
v_a_4183_ = lean_ctor_get(v___x_4182_, 0);
lean_inc(v_a_4183_);
lean_dec_ref_known(v___x_4182_, 1);
v_snd_4184_ = lean_ctor_get(v_a_4183_, 1);
lean_inc(v_snd_4184_);
v_fst_4185_ = lean_ctor_get(v_a_4183_, 0);
lean_inc_n(v_fst_4185_, 2);
lean_dec(v_a_4183_);
v_fst_4186_ = lean_ctor_get(v_snd_4184_, 0);
lean_inc(v_fst_4186_);
lean_dec(v_snd_4184_);
v___x_4187_ = lean_unsigned_to_nat(1u);
v___x_4188_ = lean_array_get_size(v_graph_4164_);
v___x_4189_ = lean_mk_empty_array_with_capacity(v___x_4187_);
v___x_4190_ = lean_array_push(v___x_4189_, v_fst_4185_);
v___x_4191_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v___x_4188_, v_graph_4164_, v_fst_4185_, v___x_4187_, v___x_4190_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_);
lean_dec(v_fst_4185_);
lean_dec_ref(v_graph_4164_);
if (lean_obj_tag(v___x_4191_) == 0)
{
lean_object* v_a_4192_; lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4200_; 
v_a_4192_ = lean_ctor_get(v___x_4191_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4191_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4194_ = v___x_4191_;
v_isShared_4195_ = v_isSharedCheck_4200_;
goto v_resetjp_4193_;
}
else
{
lean_inc(v_a_4192_);
lean_dec(v___x_4191_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4200_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
lean_object* v___x_4196_; lean_object* v___x_4198_; 
v___x_4196_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4196_, 0, v_fst_4186_);
lean_ctor_set(v___x_4196_, 1, v_a_4192_);
lean_ctor_set(v___x_4196_, 2, v_revDeps_4165_);
if (v_isShared_4195_ == 0)
{
lean_ctor_set(v___x_4194_, 0, v___x_4196_);
v___x_4198_ = v___x_4194_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v___x_4196_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
return v___x_4198_;
}
}
}
else
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4208_; 
lean_dec(v_fst_4186_);
lean_dec_ref(v_revDeps_4165_);
v_a_4201_ = lean_ctor_get(v___x_4191_, 0);
v_isSharedCheck_4208_ = !lean_is_exclusive(v___x_4191_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4203_ = v___x_4191_;
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v___x_4191_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4206_; 
if (v_isShared_4204_ == 0)
{
v___x_4206_ = v___x_4203_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v_a_4201_);
v___x_4206_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
return v___x_4206_;
}
}
}
}
else
{
lean_object* v_a_4209_; lean_object* v___x_4211_; uint8_t v_isShared_4212_; uint8_t v_isSharedCheck_4216_; 
lean_dec_ref(v_revDeps_4165_);
lean_dec_ref(v_graph_4164_);
v_a_4209_ = lean_ctor_get(v___x_4182_, 0);
v_isSharedCheck_4216_ = !lean_is_exclusive(v___x_4182_);
if (v_isSharedCheck_4216_ == 0)
{
v___x_4211_ = v___x_4182_;
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
else
{
lean_inc(v_a_4209_);
lean_dec(v___x_4182_);
v___x_4211_ = lean_box(0);
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
v_resetjp_4210_:
{
lean_object* v___x_4214_; 
if (v_isShared_4212_ == 0)
{
v___x_4214_ = v___x_4211_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4215_; 
v_reuseFailAlloc_4215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4215_, 0, v_a_4209_);
v___x_4214_ = v_reuseFailAlloc_4215_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
return v___x_4214_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object* v_a_4219_, lean_object* v___x_4220_, lean_object* v___x_4221_, lean_object* v_xs_4222_, lean_object* v_x_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_){
_start:
{
lean_object* v_res_4229_; 
v_res_4229_ = l_Lean_Elab_getFixedParamPerms___lam__0(v_a_4219_, v___x_4220_, v___x_4221_, v_xs_4222_, v_x_4223_, v___y_4224_, v___y_4225_, v___y_4226_, v___y_4227_);
lean_dec(v___y_4227_);
lean_dec_ref(v___y_4226_);
lean_dec(v___y_4225_);
lean_dec_ref(v___y_4224_);
lean_dec_ref(v_x_4223_);
lean_dec_ref(v___x_4220_);
return v_res_4229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object* v_preDefs_4230_, lean_object* v_a_4231_, lean_object* v_a_4232_, lean_object* v_a_4233_, lean_object* v_a_4234_){
_start:
{
lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; 
v___x_4236_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_4237_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
lean_inc_ref(v_preDefs_4230_);
v___x_4238_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_4230_, v_a_4231_, v_a_4232_, v_a_4233_, v_a_4234_);
if (lean_obj_tag(v___x_4238_) == 0)
{
lean_object* v_a_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v_value_4242_; lean_object* v___f_4243_; uint8_t v___x_4244_; lean_object* v___x_4245_; 
v_a_4239_ = lean_ctor_get(v___x_4238_, 0);
lean_inc(v_a_4239_);
lean_dec_ref_known(v___x_4238_, 1);
v___x_4240_ = lean_unsigned_to_nat(0u);
v___x_4241_ = lean_array_get(v___x_4236_, v_preDefs_4230_, v___x_4240_);
lean_dec_ref(v_preDefs_4230_);
v_value_4242_ = lean_ctor_get(v___x_4241_, 7);
lean_inc_ref(v_value_4242_);
lean_dec(v___x_4241_);
v___f_4243_ = lean_alloc_closure((void*)(l_Lean_Elab_getFixedParamPerms___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4243_, 0, v_a_4239_);
lean_closure_set(v___f_4243_, 1, v___x_4237_);
lean_closure_set(v___f_4243_, 2, v___x_4240_);
v___x_4244_ = 0;
v___x_4245_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_4242_, v___f_4243_, v___x_4244_, v_a_4231_, v_a_4232_, v_a_4233_, v_a_4234_);
return v___x_4245_;
}
else
{
lean_object* v_a_4246_; lean_object* v___x_4248_; uint8_t v_isShared_4249_; uint8_t v_isSharedCheck_4253_; 
lean_dec_ref(v_preDefs_4230_);
v_a_4246_ = lean_ctor_get(v___x_4238_, 0);
v_isSharedCheck_4253_ = !lean_is_exclusive(v___x_4238_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_4248_ = v___x_4238_;
v_isShared_4249_ = v_isSharedCheck_4253_;
goto v_resetjp_4247_;
}
else
{
lean_inc(v_a_4246_);
lean_dec(v___x_4238_);
v___x_4248_ = lean_box(0);
v_isShared_4249_ = v_isSharedCheck_4253_;
goto v_resetjp_4247_;
}
v_resetjp_4247_:
{
lean_object* v___x_4251_; 
if (v_isShared_4249_ == 0)
{
v___x_4251_ = v___x_4248_;
goto v_reusejp_4250_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v_a_4246_);
v___x_4251_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4250_;
}
v_reusejp_4250_:
{
return v___x_4251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object* v_preDefs_4254_, lean_object* v_a_4255_, lean_object* v_a_4256_, lean_object* v_a_4257_, lean_object* v_a_4258_, lean_object* v_a_4259_){
_start:
{
lean_object* v_res_4260_; 
v_res_4260_ = l_Lean_Elab_getFixedParamPerms(v_preDefs_4254_, v_a_4255_, v_a_4256_, v_a_4257_, v_a_4258_);
lean_dec(v_a_4258_);
lean_dec_ref(v_a_4257_);
lean_dec(v_a_4256_);
lean_dec_ref(v_a_4255_);
return v_res_4260_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object* v_upperBound_4261_, lean_object* v___x_4262_, lean_object* v___x_4263_, lean_object* v_inst_4264_, lean_object* v_R_4265_, lean_object* v_a_4266_, lean_object* v_b_4267_, lean_object* v_c_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_){
_start:
{
lean_object* v___x_4274_; 
v___x_4274_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_4261_, v___x_4262_, v___x_4263_, v_a_4266_, v_b_4267_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_);
return v___x_4274_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object* v_upperBound_4275_, lean_object* v___x_4276_, lean_object* v___x_4277_, lean_object* v_inst_4278_, lean_object* v_R_4279_, lean_object* v_a_4280_, lean_object* v_b_4281_, lean_object* v_c_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_){
_start:
{
lean_object* v_res_4288_; 
v_res_4288_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(v_upperBound_4275_, v___x_4276_, v___x_4277_, v_inst_4278_, v_R_4279_, v_a_4280_, v_b_4281_, v_c_4282_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_);
lean_dec(v___y_4286_);
lean_dec_ref(v___y_4285_);
lean_dec(v___y_4284_);
lean_dec_ref(v___y_4283_);
lean_dec_ref(v___x_4277_);
lean_dec_ref(v___x_4276_);
lean_dec(v_upperBound_4275_);
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object* v_upperBound_4289_, lean_object* v_inst_4290_, lean_object* v_R_4291_, lean_object* v_a_4292_, lean_object* v_b_4293_, lean_object* v_c_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_){
_start:
{
lean_object* v___x_4300_; 
v___x_4300_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4289_, v_a_4292_, v_b_4293_, v___y_4295_, v___y_4296_, v___y_4297_, v___y_4298_);
return v___x_4300_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object* v_upperBound_4301_, lean_object* v_inst_4302_, lean_object* v_R_4303_, lean_object* v_a_4304_, lean_object* v_b_4305_, lean_object* v_c_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_){
_start:
{
lean_object* v_res_4312_; 
v_res_4312_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(v_upperBound_4301_, v_inst_4302_, v_R_4303_, v_a_4304_, v_b_4305_, v_c_4306_, v___y_4307_, v___y_4308_, v___y_4309_, v___y_4310_);
lean_dec(v___y_4310_);
lean_dec_ref(v___y_4309_);
lean_dec(v___y_4308_);
lean_dec_ref(v___y_4307_);
lean_dec(v_upperBound_4301_);
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object* v_as_4313_, size_t v_i_4314_, size_t v_stop_4315_, lean_object* v_b_4316_){
_start:
{
uint8_t v___x_4317_; 
v___x_4317_ = lean_usize_dec_eq(v_i_4314_, v_stop_4315_);
if (v___x_4317_ == 0)
{
size_t v___x_4318_; size_t v___x_4319_; lean_object* v___x_4320_; 
v___x_4318_ = ((size_t)1ULL);
v___x_4319_ = lean_usize_sub(v_i_4314_, v___x_4318_);
v___x_4320_ = lean_array_uget_borrowed(v_as_4313_, v___x_4319_);
if (lean_obj_tag(v___x_4320_) == 0)
{
v_i_4314_ = v___x_4319_;
goto _start;
}
else
{
lean_object* v___x_4322_; lean_object* v___x_4323_; 
v___x_4322_ = lean_unsigned_to_nat(1u);
v___x_4323_ = lean_nat_add(v_b_4316_, v___x_4322_);
lean_dec(v_b_4316_);
v_i_4314_ = v___x_4319_;
v_b_4316_ = v___x_4323_;
goto _start;
}
}
else
{
return v_b_4316_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object* v_as_4325_, lean_object* v_i_4326_, lean_object* v_stop_4327_, lean_object* v_b_4328_){
_start:
{
size_t v_i_boxed_4329_; size_t v_stop_boxed_4330_; lean_object* v_res_4331_; 
v_i_boxed_4329_ = lean_unbox_usize(v_i_4326_);
lean_dec(v_i_4326_);
v_stop_boxed_4330_ = lean_unbox_usize(v_stop_4327_);
lean_dec(v_stop_4327_);
v_res_4331_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_as_4325_, v_i_boxed_4329_, v_stop_boxed_4330_, v_b_4328_);
lean_dec_ref(v_as_4325_);
return v_res_4331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object* v_perm_4332_){
_start:
{
lean_object* v___x_4333_; lean_object* v___x_4334_; uint8_t v___x_4335_; 
v___x_4333_ = lean_unsigned_to_nat(0u);
v___x_4334_ = lean_array_get_size(v_perm_4332_);
v___x_4335_ = lean_nat_dec_lt(v___x_4333_, v___x_4334_);
if (v___x_4335_ == 0)
{
return v___x_4333_;
}
else
{
size_t v___x_4336_; size_t v___x_4337_; lean_object* v___x_4338_; 
v___x_4336_ = lean_usize_of_nat(v___x_4334_);
v___x_4337_ = ((size_t)0ULL);
v___x_4338_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_perm_4332_, v___x_4336_, v___x_4337_, v___x_4333_);
return v___x_4338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object* v_perm_4339_){
_start:
{
lean_object* v_res_4340_; 
v_res_4340_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4339_);
lean_dec_ref(v_perm_4339_);
return v_res_4340_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object* v_perm_4341_, lean_object* v_i_4342_){
_start:
{
lean_object* v___x_4343_; uint8_t v___x_4344_; 
v___x_4343_ = lean_array_get_size(v_perm_4341_);
v___x_4344_ = lean_nat_dec_lt(v_i_4342_, v___x_4343_);
if (v___x_4344_ == 0)
{
return v___x_4344_;
}
else
{
lean_object* v___x_4345_; 
v___x_4345_ = lean_array_fget_borrowed(v_perm_4341_, v_i_4342_);
if (lean_obj_tag(v___x_4345_) == 0)
{
uint8_t v___x_4346_; 
v___x_4346_ = 0;
return v___x_4346_;
}
else
{
return v___x_4344_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object* v_perm_4347_, lean_object* v_i_4348_){
_start:
{
uint8_t v_res_4349_; lean_object* v_r_4350_; 
v_res_4349_ = l_Lean_Elab_FixedParamPerm_isFixed(v_perm_4347_, v_i_4348_);
lean_dec(v_i_4348_);
lean_dec_ref(v_perm_4347_);
v_r_4350_ = lean_box(v_res_4349_);
return v_r_4350_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object* v_msg_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_, lean_object* v___y_4355_){
_start:
{
lean_object* v___f_4357_; lean_object* v___x_907__overap_4358_; lean_object* v___x_4359_; 
v___f_4357_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_907__overap_4358_ = lean_panic_fn_borrowed(v___f_4357_, v_msg_4351_);
lean_inc(v___y_4355_);
lean_inc_ref(v___y_4354_);
lean_inc(v___y_4353_);
lean_inc_ref(v___y_4352_);
v___x_4359_ = lean_apply_5(v___x_907__overap_4358_, v___y_4352_, v___y_4353_, v___y_4354_, v___y_4355_, lean_box(0));
return v___x_4359_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object* v_msg_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_){
_start:
{
lean_object* v_res_4366_; 
v_res_4366_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4360_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_);
lean_dec(v___y_4364_);
lean_dec_ref(v___y_4363_);
lean_dec(v___y_4362_);
lean_dec_ref(v___y_4361_);
return v_res_4366_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object* v_00_u03b1_4367_, lean_object* v_msg_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_){
_start:
{
lean_object* v___x_4374_; 
v___x_4374_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4368_, v___y_4369_, v___y_4370_, v___y_4371_, v___y_4372_);
return v___x_4374_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object* v_00_u03b1_4375_, lean_object* v_msg_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_){
_start:
{
lean_object* v_res_4382_; 
v_res_4382_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(v_00_u03b1_4375_, v_msg_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
lean_dec(v___y_4380_);
lean_dec_ref(v___y_4379_);
lean_dec(v___y_4378_);
lean_dec_ref(v___y_4377_);
return v_res_4382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object* v_type_4383_, lean_object* v_maxFVars_x3f_4384_, lean_object* v_k_4385_, uint8_t v_cleanupAnnotations_4386_, uint8_t v_whnfType_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_){
_start:
{
lean_object* v___f_4393_; lean_object* v___x_4394_; 
v___f_4393_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4393_, 0, v_k_4385_);
v___x_4394_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4383_, v_maxFVars_x3f_4384_, v___f_4393_, v_cleanupAnnotations_4386_, v_whnfType_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_);
if (lean_obj_tag(v___x_4394_) == 0)
{
lean_object* v_a_4395_; lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4402_; 
v_a_4395_ = lean_ctor_get(v___x_4394_, 0);
v_isSharedCheck_4402_ = !lean_is_exclusive(v___x_4394_);
if (v_isSharedCheck_4402_ == 0)
{
v___x_4397_ = v___x_4394_;
v_isShared_4398_ = v_isSharedCheck_4402_;
goto v_resetjp_4396_;
}
else
{
lean_inc(v_a_4395_);
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
v___x_4400_ = v___x_4397_;
goto v_reusejp_4399_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v_a_4395_);
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
lean_object* v_a_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4410_; 
v_a_4403_ = lean_ctor_get(v___x_4394_, 0);
v_isSharedCheck_4410_ = !lean_is_exclusive(v___x_4394_);
if (v_isSharedCheck_4410_ == 0)
{
v___x_4405_ = v___x_4394_;
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_a_4403_);
lean_dec(v___x_4394_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
lean_object* v___x_4408_; 
if (v_isShared_4406_ == 0)
{
v___x_4408_ = v___x_4405_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v_a_4403_);
v___x_4408_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
return v___x_4408_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object* v_type_4411_, lean_object* v_maxFVars_x3f_4412_, lean_object* v_k_4413_, lean_object* v_cleanupAnnotations_4414_, lean_object* v_whnfType_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4421_; uint8_t v_whnfType_boxed_4422_; lean_object* v_res_4423_; 
v_cleanupAnnotations_boxed_4421_ = lean_unbox(v_cleanupAnnotations_4414_);
v_whnfType_boxed_4422_ = lean_unbox(v_whnfType_4415_);
v_res_4423_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4411_, v_maxFVars_x3f_4412_, v_k_4413_, v_cleanupAnnotations_boxed_4421_, v_whnfType_boxed_4422_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_);
lean_dec(v___y_4419_);
lean_dec_ref(v___y_4418_);
lean_dec(v___y_4417_);
lean_dec_ref(v___y_4416_);
return v_res_4423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object* v_00_u03b1_4424_, lean_object* v_type_4425_, lean_object* v_maxFVars_x3f_4426_, lean_object* v_k_4427_, uint8_t v_cleanupAnnotations_4428_, uint8_t v_whnfType_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_){
_start:
{
lean_object* v___x_4435_; 
v___x_4435_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4425_, v_maxFVars_x3f_4426_, v_k_4427_, v_cleanupAnnotations_4428_, v_whnfType_4429_, v___y_4430_, v___y_4431_, v___y_4432_, v___y_4433_);
return v___x_4435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object* v_00_u03b1_4436_, lean_object* v_type_4437_, lean_object* v_maxFVars_x3f_4438_, lean_object* v_k_4439_, lean_object* v_cleanupAnnotations_4440_, lean_object* v_whnfType_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_, lean_object* v___y_4446_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4447_; uint8_t v_whnfType_boxed_4448_; lean_object* v_res_4449_; 
v_cleanupAnnotations_boxed_4447_ = lean_unbox(v_cleanupAnnotations_4440_);
v_whnfType_boxed_4448_ = lean_unbox(v_whnfType_4441_);
v_res_4449_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(v_00_u03b1_4436_, v_type_4437_, v_maxFVars_x3f_4438_, v_k_4439_, v_cleanupAnnotations_boxed_4447_, v_whnfType_boxed_4448_, v___y_4442_, v___y_4443_, v___y_4444_, v___y_4445_);
lean_dec(v___y_4445_);
lean_dec_ref(v___y_4444_);
lean_dec(v___y_4443_);
lean_dec_ref(v___y_4442_);
return v_res_4449_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; 
v___x_4452_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1));
v___x_4453_ = lean_unsigned_to_nat(6u);
v___x_4454_ = lean_unsigned_to_nat(329u);
v___x_4455_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4456_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4457_ = l_mkPanicMessageWithDecl(v___x_4456_, v___x_4455_, v___x_4454_, v___x_4453_, v___x_4452_);
return v___x_4457_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; 
v___x_4461_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0));
v___x_4462_ = lean_unsigned_to_nat(8u);
v___x_4463_ = lean_unsigned_to_nat(322u);
v___x_4464_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4465_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4466_ = l_mkPanicMessageWithDecl(v___x_4465_, v___x_4464_, v___x_4463_, v___x_4462_, v___x_4461_);
return v___x_4466_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
v___x_4468_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4469_ = lean_unsigned_to_nat(8u);
v___x_4470_ = lean_unsigned_to_nat(325u);
v___x_4471_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4472_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4473_ = l_mkPanicMessageWithDecl(v___x_4472_, v___x_4471_, v___x_4470_, v___x_4469_, v___x_4468_);
return v___x_4473_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; 
v___x_4475_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4));
v___x_4476_ = lean_unsigned_to_nat(8u);
v___x_4477_ = lean_unsigned_to_nat(324u);
v___x_4478_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0));
v___x_4479_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4480_ = l_mkPanicMessageWithDecl(v___x_4479_, v___x_4478_, v___x_4477_, v___x_4476_, v___x_4475_);
return v___x_4480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object* v___x_4481_, lean_object* v___x_4482_, lean_object* v_xs_4483_, lean_object* v_val_4484_, lean_object* v_i_4485_, lean_object* v_perm_4486_, lean_object* v_k_4487_, lean_object* v_xs_x27_4488_, lean_object* v_type_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_){
_start:
{
lean_object* v___x_4495_; uint8_t v___x_4496_; 
v___x_4495_ = lean_array_get_size(v_xs_x27_4488_);
v___x_4496_ = lean_nat_dec_eq(v___x_4495_, v___x_4481_);
if (v___x_4496_ == 0)
{
lean_object* v___x_4497_; lean_object* v___x_4498_; 
lean_dec_ref(v_type_4489_);
lean_dec_ref(v_k_4487_);
lean_dec_ref(v_perm_4486_);
lean_dec_ref(v_xs_4483_);
v___x_4497_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1);
v___x_4498_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4497_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_);
return v___x_4498_;
}
else
{
lean_object* v___x_4499_; lean_object* v_x_4500_; lean_object* v___x_4501_; 
v___x_4499_ = lean_unsigned_to_nat(0u);
v_x_4500_ = lean_array_get_borrowed(v___x_4482_, v_xs_x27_4488_, v___x_4499_);
lean_inc(v___y_4493_);
lean_inc_ref(v___y_4492_);
lean_inc(v___y_4491_);
lean_inc_ref(v___y_4490_);
lean_inc(v_x_4500_);
v___x_4501_ = lean_infer_type(v_x_4500_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_);
if (lean_obj_tag(v___x_4501_) == 0)
{
lean_object* v_a_4502_; uint8_t v___x_4503_; 
v_a_4502_ = lean_ctor_get(v___x_4501_, 0);
lean_inc(v_a_4502_);
lean_dec_ref_known(v___x_4501_, 1);
v___x_4503_ = l_Lean_Expr_hasLooseBVars(v_a_4502_);
lean_dec(v_a_4502_);
if (v___x_4503_ == 0)
{
lean_object* v___x_4504_; uint8_t v___x_4505_; 
v___x_4504_ = lean_array_get_size(v_xs_4483_);
v___x_4505_ = lean_nat_dec_lt(v_val_4484_, v___x_4504_);
if (v___x_4505_ == 0)
{
lean_object* v___x_4506_; lean_object* v___x_4507_; 
lean_dec_ref(v_type_4489_);
lean_dec_ref(v_k_4487_);
lean_dec_ref(v_perm_4486_);
lean_dec_ref(v_xs_4483_);
v___x_4506_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3);
v___x_4507_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4506_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_);
return v___x_4507_;
}
else
{
lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; 
v___x_4508_ = lean_nat_add(v_i_4485_, v___x_4481_);
lean_inc(v_x_4500_);
v___x_4509_ = lean_array_set(v_xs_4483_, v_val_4484_, v_x_4500_);
v___x_4510_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4486_, v_k_4487_, v___x_4508_, v_type_4489_, v___x_4509_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_);
return v___x_4510_;
}
}
else
{
lean_object* v___x_4511_; lean_object* v___x_4512_; 
lean_dec_ref(v_type_4489_);
lean_dec_ref(v_k_4487_);
lean_dec_ref(v_perm_4486_);
lean_dec_ref(v_xs_4483_);
v___x_4511_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5);
v___x_4512_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4511_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_);
return v___x_4512_;
}
}
else
{
lean_object* v_a_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4520_; 
lean_dec_ref(v_type_4489_);
lean_dec_ref(v_k_4487_);
lean_dec_ref(v_perm_4486_);
lean_dec_ref(v_xs_4483_);
v_a_4513_ = lean_ctor_get(v___x_4501_, 0);
v_isSharedCheck_4520_ = !lean_is_exclusive(v___x_4501_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4515_ = v___x_4501_;
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_a_4513_);
lean_dec(v___x_4501_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___x_4518_; 
if (v_isShared_4516_ == 0)
{
v___x_4518_ = v___x_4515_;
goto v_reusejp_4517_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v_a_4513_);
v___x_4518_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4517_;
}
v_reusejp_4517_:
{
return v___x_4518_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object* v___x_4521_, lean_object* v___x_4522_, lean_object* v_xs_4523_, lean_object* v_val_4524_, lean_object* v_i_4525_, lean_object* v_perm_4526_, lean_object* v_k_4527_, lean_object* v_xs_x27_4528_, lean_object* v_type_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_){
_start:
{
lean_object* v_res_4535_; 
v_res_4535_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(v___x_4521_, v___x_4522_, v_xs_4523_, v_val_4524_, v_i_4525_, v_perm_4526_, v_k_4527_, v_xs_x27_4528_, v_type_4529_, v___y_4530_, v___y_4531_, v___y_4532_, v___y_4533_);
lean_dec(v___y_4533_);
lean_dec_ref(v___y_4532_);
lean_dec(v___y_4531_);
lean_dec_ref(v___y_4530_);
lean_dec_ref(v_xs_x27_4528_);
lean_dec(v_i_4525_);
lean_dec(v_val_4524_);
lean_dec_ref(v___x_4522_);
lean_dec(v___x_4521_);
return v_res_4535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object* v_perm_4536_, lean_object* v_k_4537_, lean_object* v_i_4538_, lean_object* v_type_4539_, lean_object* v_xs_4540_, lean_object* v_a_4541_, lean_object* v_a_4542_, lean_object* v_a_4543_, lean_object* v_a_4544_){
_start:
{
lean_object* v___x_4546_; uint8_t v___x_4547_; 
v___x_4546_ = lean_array_get_size(v_perm_4536_);
v___x_4547_ = lean_nat_dec_lt(v_i_4538_, v___x_4546_);
if (v___x_4547_ == 0)
{
lean_object* v___x_4548_; 
lean_dec_ref(v_type_4539_);
lean_dec(v_i_4538_);
lean_dec_ref(v_perm_4536_);
lean_inc(v_a_4544_);
lean_inc_ref(v_a_4543_);
lean_inc(v_a_4542_);
lean_inc_ref(v_a_4541_);
v___x_4548_ = lean_apply_6(v_k_4537_, v_xs_4540_, v_a_4541_, v_a_4542_, v_a_4543_, v_a_4544_, lean_box(0));
return v___x_4548_;
}
else
{
lean_object* v___x_4549_; 
v___x_4549_ = lean_array_fget_borrowed(v_perm_4536_, v_i_4538_);
if (lean_obj_tag(v___x_4549_) == 0)
{
lean_object* v___x_4550_; 
lean_inc(v_a_4544_);
lean_inc_ref(v_a_4543_);
lean_inc(v_a_4542_);
lean_inc_ref(v_a_4541_);
v___x_4550_ = lean_whnf(v_type_4539_, v_a_4541_, v_a_4542_, v_a_4543_, v_a_4544_);
if (lean_obj_tag(v___x_4550_) == 0)
{
lean_object* v_a_4551_; uint8_t v___x_4552_; 
v_a_4551_ = lean_ctor_get(v___x_4550_, 0);
lean_inc(v_a_4551_);
lean_dec_ref_known(v___x_4550_, 1);
v___x_4552_ = l_Lean_Expr_isForall(v_a_4551_);
if (v___x_4552_ == 0)
{
lean_object* v___x_4553_; lean_object* v___x_4554_; 
lean_dec(v_a_4551_);
lean_dec_ref(v_xs_4540_);
lean_dec(v_i_4538_);
lean_dec_ref(v_k_4537_);
lean_dec_ref(v_perm_4536_);
v___x_4553_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2);
v___x_4554_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4553_, v_a_4541_, v_a_4542_, v_a_4543_, v_a_4544_);
return v___x_4554_;
}
else
{
lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; 
v___x_4555_ = lean_unsigned_to_nat(1u);
v___x_4556_ = lean_nat_add(v_i_4538_, v___x_4555_);
lean_dec(v_i_4538_);
v___x_4557_ = l_Lean_Expr_bindingBody_x21(v_a_4551_);
lean_dec(v_a_4551_);
v_i_4538_ = v___x_4556_;
v_type_4539_ = v___x_4557_;
goto _start;
}
}
else
{
lean_object* v_a_4559_; lean_object* v___x_4561_; uint8_t v_isShared_4562_; uint8_t v_isSharedCheck_4566_; 
lean_dec_ref(v_xs_4540_);
lean_dec(v_i_4538_);
lean_dec_ref(v_k_4537_);
lean_dec_ref(v_perm_4536_);
v_a_4559_ = lean_ctor_get(v___x_4550_, 0);
v_isSharedCheck_4566_ = !lean_is_exclusive(v___x_4550_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4561_ = v___x_4550_;
v_isShared_4562_ = v_isSharedCheck_4566_;
goto v_resetjp_4560_;
}
else
{
lean_inc(v_a_4559_);
lean_dec(v___x_4550_);
v___x_4561_ = lean_box(0);
v_isShared_4562_ = v_isSharedCheck_4566_;
goto v_resetjp_4560_;
}
v_resetjp_4560_:
{
lean_object* v___x_4564_; 
if (v_isShared_4562_ == 0)
{
v___x_4564_ = v___x_4561_;
goto v_reusejp_4563_;
}
else
{
lean_object* v_reuseFailAlloc_4565_; 
v_reuseFailAlloc_4565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4565_, 0, v_a_4559_);
v___x_4564_ = v_reuseFailAlloc_4565_;
goto v_reusejp_4563_;
}
v_reusejp_4563_:
{
return v___x_4564_;
}
}
}
}
else
{
lean_object* v_val_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___f_4570_; lean_object* v___x_4571_; uint8_t v___x_4572_; lean_object* v___x_4573_; 
v_val_4567_ = lean_ctor_get(v___x_4549_, 0);
lean_inc(v_val_4567_);
v___x_4568_ = l_Lean_instInhabitedExpr;
v___x_4569_ = lean_unsigned_to_nat(1u);
v___f_4570_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed), 14, 7);
lean_closure_set(v___f_4570_, 0, v___x_4569_);
lean_closure_set(v___f_4570_, 1, v___x_4568_);
lean_closure_set(v___f_4570_, 2, v_xs_4540_);
lean_closure_set(v___f_4570_, 3, v_val_4567_);
lean_closure_set(v___f_4570_, 4, v_i_4538_);
lean_closure_set(v___f_4570_, 5, v_perm_4536_);
lean_closure_set(v___f_4570_, 6, v_k_4537_);
v___x_4571_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4572_ = 0;
v___x_4573_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4539_, v___x_4571_, v___f_4570_, v___x_4547_, v___x_4572_, v_a_4541_, v_a_4542_, v_a_4543_, v_a_4544_);
return v___x_4573_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object* v_perm_4574_, lean_object* v_k_4575_, lean_object* v_i_4576_, lean_object* v_type_4577_, lean_object* v_xs_4578_, lean_object* v_a_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_){
_start:
{
lean_object* v_res_4584_; 
v_res_4584_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4574_, v_k_4575_, v_i_4576_, v_type_4577_, v_xs_4578_, v_a_4579_, v_a_4580_, v_a_4581_, v_a_4582_);
lean_dec(v_a_4582_);
lean_dec_ref(v_a_4581_);
lean_dec(v_a_4580_);
lean_dec_ref(v_a_4579_);
return v_res_4584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object* v_00_u03b1_4585_, lean_object* v_perm_4586_, lean_object* v_k_4587_, lean_object* v_i_4588_, lean_object* v_type_4589_, lean_object* v_xs_4590_, lean_object* v_a_4591_, lean_object* v_a_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_){
_start:
{
lean_object* v___x_4596_; 
v___x_4596_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4586_, v_k_4587_, v_i_4588_, v_type_4589_, v_xs_4590_, v_a_4591_, v_a_4592_, v_a_4593_, v_a_4594_);
return v___x_4596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object* v_00_u03b1_4597_, lean_object* v_perm_4598_, lean_object* v_k_4599_, lean_object* v_i_4600_, lean_object* v_type_4601_, lean_object* v_xs_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_, lean_object* v_a_4606_, lean_object* v_a_4607_){
_start:
{
lean_object* v_res_4608_; 
v_res_4608_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(v_00_u03b1_4597_, v_perm_4598_, v_k_4599_, v_i_4600_, v_type_4601_, v_xs_4602_, v_a_4603_, v_a_4604_, v_a_4605_, v_a_4606_);
lean_dec(v_a_4606_);
lean_dec_ref(v_a_4605_);
lean_dec(v_a_4604_);
lean_dec_ref(v_a_4603_);
return v_res_4608_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0(void){
_start:
{
lean_object* v___x_4609_; lean_object* v___x_4610_; 
v___x_4609_ = lean_unsigned_to_nat(0u);
v___x_4610_ = l_Lean_Level_ofNat(v___x_4609_);
return v___x_4610_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1(void){
_start:
{
lean_object* v___x_4611_; lean_object* v___x_4612_; 
v___x_4611_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0);
v___x_4612_ = l_Lean_mkSort(v___x_4611_);
return v___x_4612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object* v_perm_4613_, lean_object* v_type_4614_, lean_object* v_k_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_, lean_object* v_a_4619_){
_start:
{
lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; 
v___x_4621_ = lean_unsigned_to_nat(0u);
v___x_4622_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4613_);
v___x_4623_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1);
v___x_4624_ = lean_mk_array(v___x_4622_, v___x_4623_);
v___x_4625_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4613_, v_k_4615_, v___x_4621_, v_type_4614_, v___x_4624_, v_a_4616_, v_a_4617_, v_a_4618_, v_a_4619_);
return v___x_4625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object* v_perm_4626_, lean_object* v_type_4627_, lean_object* v_k_4628_, lean_object* v_a_4629_, lean_object* v_a_4630_, lean_object* v_a_4631_, lean_object* v_a_4632_, lean_object* v_a_4633_){
_start:
{
lean_object* v_res_4634_; 
v_res_4634_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4626_, v_type_4627_, v_k_4628_, v_a_4629_, v_a_4630_, v_a_4631_, v_a_4632_);
lean_dec(v_a_4632_);
lean_dec_ref(v_a_4631_);
lean_dec(v_a_4630_);
lean_dec_ref(v_a_4629_);
return v_res_4634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object* v_00_u03b1_4635_, lean_object* v_perm_4636_, lean_object* v_type_4637_, lean_object* v_k_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_, lean_object* v_a_4642_){
_start:
{
lean_object* v___x_4644_; 
v___x_4644_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4636_, v_type_4637_, v_k_4638_, v_a_4639_, v_a_4640_, v_a_4641_, v_a_4642_);
return v___x_4644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object* v_00_u03b1_4645_, lean_object* v_perm_4646_, lean_object* v_type_4647_, lean_object* v_k_4648_, lean_object* v_a_4649_, lean_object* v_a_4650_, lean_object* v_a_4651_, lean_object* v_a_4652_, lean_object* v_a_4653_){
_start:
{
lean_object* v_res_4654_; 
v_res_4654_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(v_00_u03b1_4645_, v_perm_4646_, v_type_4647_, v_k_4648_, v_a_4649_, v_a_4650_, v_a_4651_, v_a_4652_);
lean_dec(v_a_4652_);
lean_dec_ref(v_a_4651_);
lean_dec(v_a_4650_);
lean_dec_ref(v_a_4649_);
return v_res_4654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object* v_k_4655_, lean_object* v_runInBase_4656_, lean_object* v_b_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
lean_object* v___x_4663_; lean_object* v___x_4664_; 
v___x_4663_ = lean_apply_1(v_k_4655_, v_b_4657_);
lean_inc(v___y_4661_);
lean_inc_ref(v___y_4660_);
lean_inc(v___y_4659_);
lean_inc_ref(v___y_4658_);
v___x_4664_ = lean_apply_7(v_runInBase_4656_, lean_box(0), v___x_4663_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, lean_box(0));
return v___x_4664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object* v_k_4665_, lean_object* v_runInBase_4666_, lean_object* v_b_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_){
_start:
{
lean_object* v_res_4673_; 
v_res_4673_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(v_k_4665_, v_runInBase_4666_, v_b_4667_, v___y_4668_, v___y_4669_, v___y_4670_, v___y_4671_);
lean_dec(v___y_4671_);
lean_dec_ref(v___y_4670_);
lean_dec(v___y_4669_);
lean_dec_ref(v___y_4668_);
return v_res_4673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object* v_k_4674_, lean_object* v_perm_4675_, lean_object* v_type_4676_, lean_object* v_runInBase_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_){
_start:
{
lean_object* v___f_4683_; lean_object* v___x_4684_; 
v___f_4683_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4683_, 0, v_k_4674_);
lean_closure_set(v___f_4683_, 1, v_runInBase_4677_);
v___x_4684_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4675_, v_type_4676_, v___f_4683_, v___y_4678_, v___y_4679_, v___y_4680_, v___y_4681_);
return v___x_4684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object* v_k_4685_, lean_object* v_perm_4686_, lean_object* v_type_4687_, lean_object* v_runInBase_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_){
_start:
{
lean_object* v_res_4694_; 
v_res_4694_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(v_k_4685_, v_perm_4686_, v_type_4687_, v_runInBase_4688_, v___y_4689_, v___y_4690_, v___y_4691_, v___y_4692_);
lean_dec(v___y_4692_);
lean_dec_ref(v___y_4691_);
lean_dec(v___y_4690_);
lean_dec_ref(v___y_4689_);
return v_res_4694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object* v_inst_4695_, lean_object* v_inst_4696_, lean_object* v_perm_4697_, lean_object* v_type_4698_, lean_object* v_k_4699_){
_start:
{
lean_object* v_toBind_4700_; lean_object* v_liftWith_4701_; lean_object* v_restoreM_4702_; lean_object* v___f_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; 
v_toBind_4700_ = lean_ctor_get(v_inst_4696_, 1);
lean_inc(v_toBind_4700_);
lean_dec_ref(v_inst_4696_);
v_liftWith_4701_ = lean_ctor_get(v_inst_4695_, 0);
lean_inc(v_liftWith_4701_);
v_restoreM_4702_ = lean_ctor_get(v_inst_4695_, 1);
lean_inc(v_restoreM_4702_);
lean_dec_ref(v_inst_4695_);
v___f_4703_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_4703_, 0, v_k_4699_);
lean_closure_set(v___f_4703_, 1, v_perm_4697_);
lean_closure_set(v___f_4703_, 2, v_type_4698_);
v___x_4704_ = lean_apply_2(v_liftWith_4701_, lean_box(0), v___f_4703_);
v___x_4705_ = lean_apply_1(v_restoreM_4702_, lean_box(0));
v___x_4706_ = lean_apply_4(v_toBind_4700_, lean_box(0), lean_box(0), v___x_4704_, v___x_4705_);
return v___x_4706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object* v_n_4707_, lean_object* v_00_u03b1_4708_, lean_object* v_inst_4709_, lean_object* v_inst_4710_, lean_object* v_perm_4711_, lean_object* v_type_4712_, lean_object* v_k_4713_){
_start:
{
lean_object* v___x_4714_; 
v___x_4714_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(v_inst_4709_, v_inst_4710_, v_perm_4711_, v_type_4712_, v_k_4713_);
return v___x_4714_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object* v_msg_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_){
_start:
{
lean_object* v___f_4721_; lean_object* v___x_598__overap_4722_; lean_object* v___x_4723_; 
v___f_4721_ = ((lean_object*)(l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0));
v___x_598__overap_4722_ = lean_panic_fn_borrowed(v___f_4721_, v_msg_4715_);
lean_inc(v___y_4719_);
lean_inc_ref(v___y_4718_);
lean_inc(v___y_4717_);
lean_inc_ref(v___y_4716_);
v___x_4723_ = lean_apply_5(v___x_598__overap_4722_, v___y_4716_, v___y_4717_, v___y_4718_, v___y_4719_, lean_box(0));
return v___x_4723_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object* v_msg_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_){
_start:
{
lean_object* v_res_4730_; 
v_res_4730_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v_msg_4724_, v___y_4725_, v___y_4726_, v___y_4727_, v___y_4728_);
lean_dec(v___y_4728_);
lean_dec_ref(v___y_4727_);
lean_dec(v___y_4726_);
lean_dec_ref(v___y_4725_);
return v_res_4730_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; 
v___x_4733_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1));
v___x_4734_ = lean_unsigned_to_nat(10u);
v___x_4735_ = lean_unsigned_to_nat(353u);
v___x_4736_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4737_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4738_ = l_mkPanicMessageWithDecl(v___x_4737_, v___x_4736_, v___x_4735_, v___x_4734_, v___x_4733_);
return v___x_4738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object* v___x_4739_, lean_object* v_xs_4740_, lean_object* v_tail_4741_, lean_object* v_ys_4742_, lean_object* v_type_4743_, lean_object* v___y_4744_, lean_object* v___y_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_){
_start:
{
lean_object* v_res_4749_; 
v_res_4749_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(v___x_4739_, v_xs_4740_, v_tail_4741_, v_ys_4742_, v_type_4743_, v___y_4744_, v___y_4745_, v___y_4746_, v___y_4747_);
lean_dec(v___y_4747_);
lean_dec_ref(v___y_4746_);
lean_dec(v___y_4745_);
lean_dec_ref(v___y_4744_);
lean_dec(v___x_4739_);
return v_res_4749_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0(void){
_start:
{
lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; 
v___x_4750_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4751_ = lean_unsigned_to_nat(8u);
v___x_4752_ = lean_unsigned_to_nat(349u);
v___x_4753_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0));
v___x_4754_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4755_ = l_mkPanicMessageWithDecl(v___x_4754_, v___x_4753_, v___x_4752_, v___x_4751_, v___x_4750_);
return v___x_4755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object* v_xs_4756_, lean_object* v_x_4757_, lean_object* v_x_4758_, lean_object* v_a_4759_, lean_object* v_a_4760_, lean_object* v_a_4761_, lean_object* v_a_4762_){
_start:
{
if (lean_obj_tag(v_x_4757_) == 0)
{
lean_object* v___x_4764_; 
lean_dec_ref(v_xs_4756_);
v___x_4764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4764_, 0, v_x_4758_);
return v___x_4764_;
}
else
{
lean_object* v_head_4765_; 
v_head_4765_ = lean_ctor_get(v_x_4757_, 0);
if (lean_obj_tag(v_head_4765_) == 0)
{
lean_object* v_tail_4766_; lean_object* v___x_4767_; lean_object* v___f_4768_; lean_object* v___x_4769_; uint8_t v___x_4770_; lean_object* v___x_4771_; 
v_tail_4766_ = lean_ctor_get(v_x_4757_, 1);
lean_inc(v_tail_4766_);
lean_dec_ref_known(v_x_4757_, 2);
v___x_4767_ = lean_unsigned_to_nat(1u);
v___f_4768_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4768_, 0, v___x_4767_);
lean_closure_set(v___f_4768_, 1, v_xs_4756_);
lean_closure_set(v___f_4768_, 2, v_tail_4766_);
v___x_4769_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3));
v___x_4770_ = 0;
v___x_4771_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_x_4758_, v___x_4769_, v___f_4768_, v___x_4770_, v___x_4770_, v_a_4759_, v_a_4760_, v_a_4761_, v_a_4762_);
return v___x_4771_;
}
else
{
lean_object* v_tail_4772_; lean_object* v_val_4773_; lean_object* v___x_4774_; uint8_t v___x_4775_; 
lean_inc_ref(v_head_4765_);
v_tail_4772_ = lean_ctor_get(v_x_4757_, 1);
lean_inc(v_tail_4772_);
lean_dec_ref_known(v_x_4757_, 2);
v_val_4773_ = lean_ctor_get(v_head_4765_, 0);
lean_inc(v_val_4773_);
lean_dec_ref_known(v_head_4765_, 1);
v___x_4774_ = lean_array_get_size(v_xs_4756_);
v___x_4775_ = lean_nat_dec_lt(v_val_4773_, v___x_4774_);
if (v___x_4775_ == 0)
{
lean_object* v___x_4776_; lean_object* v___x_4777_; 
lean_dec(v_val_4773_);
lean_dec(v_tail_4772_);
lean_dec_ref(v_x_4758_);
lean_dec_ref(v_xs_4756_);
v___x_4776_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0);
v___x_4777_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4776_, v_a_4759_, v_a_4760_, v_a_4761_, v_a_4762_);
return v___x_4777_;
}
else
{
lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; 
v___x_4778_ = l_Lean_instInhabitedExpr;
v___x_4779_ = lean_array_get_borrowed(v___x_4778_, v_xs_4756_, v_val_4773_);
lean_dec(v_val_4773_);
v___x_4780_ = lean_unsigned_to_nat(1u);
v___x_4781_ = lean_mk_empty_array_with_capacity(v___x_4780_);
lean_inc(v___x_4779_);
v___x_4782_ = lean_array_push(v___x_4781_, v___x_4779_);
v___x_4783_ = l_Lean_Meta_instantiateForall(v_x_4758_, v___x_4782_, v_a_4759_, v_a_4760_, v_a_4761_, v_a_4762_);
lean_dec_ref(v___x_4782_);
if (lean_obj_tag(v___x_4783_) == 0)
{
lean_object* v_a_4784_; 
v_a_4784_ = lean_ctor_get(v___x_4783_, 0);
lean_inc(v_a_4784_);
lean_dec_ref_known(v___x_4783_, 1);
v_x_4757_ = v_tail_4772_;
v_x_4758_ = v_a_4784_;
goto _start;
}
else
{
lean_dec(v_tail_4772_);
lean_dec_ref(v_xs_4756_);
return v___x_4783_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object* v___x_4786_, lean_object* v_xs_4787_, lean_object* v_tail_4788_, lean_object* v_ys_4789_, lean_object* v_type_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_){
_start:
{
lean_object* v___x_4796_; uint8_t v___x_4797_; 
v___x_4796_ = lean_array_get_size(v_ys_4789_);
v___x_4797_ = lean_nat_dec_eq(v___x_4796_, v___x_4786_);
if (v___x_4797_ == 0)
{
lean_object* v___x_4798_; lean_object* v___x_4799_; 
lean_dec_ref(v_type_4790_);
lean_dec_ref(v_ys_4789_);
lean_dec(v_tail_4788_);
lean_dec_ref(v_xs_4787_);
v___x_4798_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2);
v___x_4799_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4798_, v___y_4791_, v___y_4792_, v___y_4793_, v___y_4794_);
return v___x_4799_;
}
else
{
lean_object* v___x_4800_; 
v___x_4800_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4787_, v_tail_4788_, v_type_4790_, v___y_4791_, v___y_4792_, v___y_4793_, v___y_4794_);
if (lean_obj_tag(v___x_4800_) == 0)
{
lean_object* v_a_4801_; uint8_t v___x_4802_; uint8_t v___x_4803_; lean_object* v___x_4804_; 
v_a_4801_ = lean_ctor_get(v___x_4800_, 0);
lean_inc(v_a_4801_);
lean_dec_ref_known(v___x_4800_, 1);
v___x_4802_ = 0;
v___x_4803_ = 1;
v___x_4804_ = l_Lean_Meta_mkForallFVars(v_ys_4789_, v_a_4801_, v___x_4802_, v___x_4797_, v___x_4797_, v___x_4803_, v___y_4791_, v___y_4792_, v___y_4793_, v___y_4794_);
return v___x_4804_;
}
else
{
lean_dec_ref(v_ys_4789_);
return v___x_4800_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object* v_xs_4805_, lean_object* v_x_4806_, lean_object* v_x_4807_, lean_object* v_a_4808_, lean_object* v_a_4809_, lean_object* v_a_4810_, lean_object* v_a_4811_, lean_object* v_a_4812_){
_start:
{
lean_object* v_res_4813_; 
v_res_4813_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4805_, v_x_4806_, v_x_4807_, v_a_4808_, v_a_4809_, v_a_4810_, v_a_4811_);
lean_dec(v_a_4811_);
lean_dec_ref(v_a_4810_);
lean_dec(v_a_4809_);
lean_dec_ref(v_a_4808_);
return v_res_4813_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2(void){
_start:
{
lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; 
v___x_4816_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_4817_ = lean_unsigned_to_nat(2u);
v___x_4818_ = lean_unsigned_to_nat(343u);
v___x_4819_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0));
v___x_4820_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4821_ = l_mkPanicMessageWithDecl(v___x_4820_, v___x_4819_, v___x_4818_, v___x_4817_, v___x_4816_);
return v___x_4821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object* v_perm_4822_, lean_object* v_type_u2080_4823_, lean_object* v_xs_4824_, lean_object* v_a_4825_, lean_object* v_a_4826_, lean_object* v_a_4827_, lean_object* v_a_4828_){
_start:
{
lean_object* v___x_4830_; lean_object* v___x_4831_; uint8_t v___x_4832_; 
v___x_4830_ = lean_array_get_size(v_xs_4824_);
v___x_4831_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4822_);
v___x_4832_ = lean_nat_dec_eq(v___x_4830_, v___x_4831_);
lean_dec(v___x_4831_);
if (v___x_4832_ == 0)
{
lean_object* v___x_4833_; lean_object* v___x_4834_; 
lean_dec_ref(v_xs_4824_);
lean_dec_ref(v_type_u2080_4823_);
lean_dec_ref(v_perm_4822_);
v___x_4833_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2, &l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2);
v___x_4834_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4833_, v_a_4825_, v_a_4826_, v_a_4827_, v_a_4828_);
return v___x_4834_;
}
else
{
lean_object* v_mask_4835_; lean_object* v___x_4836_; 
v_mask_4835_ = lean_array_to_list(v_perm_4822_);
v___x_4836_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4824_, v_mask_4835_, v_type_u2080_4823_, v_a_4825_, v_a_4826_, v_a_4827_, v_a_4828_);
return v___x_4836_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object* v_perm_4837_, lean_object* v_type_u2080_4838_, lean_object* v_xs_4839_, lean_object* v_a_4840_, lean_object* v_a_4841_, lean_object* v_a_4842_, lean_object* v_a_4843_, lean_object* v_a_4844_){
_start:
{
lean_object* v_res_4845_; 
v_res_4845_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v_perm_4837_, v_type_u2080_4838_, v_xs_4839_, v_a_4840_, v_a_4841_, v_a_4842_, v_a_4843_);
lean_dec(v_a_4843_);
lean_dec_ref(v_a_4842_);
lean_dec(v_a_4841_);
lean_dec_ref(v_a_4840_);
return v_res_4845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(lean_object* v_e_4846_, lean_object* v_maxFVars_4847_, lean_object* v_k_4848_, uint8_t v_cleanupAnnotations_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_){
_start:
{
lean_object* v___f_4855_; uint8_t v___x_4856_; uint8_t v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; 
v___f_4855_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4855_, 0, v_k_4848_);
v___x_4856_ = 1;
v___x_4857_ = 0;
v___x_4858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4858_, 0, v_maxFVars_4847_);
v___x_4859_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_4846_, v___x_4856_, v___x_4857_, v___x_4856_, v___x_4857_, v___x_4858_, v___f_4855_, v_cleanupAnnotations_4849_, v___y_4850_, v___y_4851_, v___y_4852_, v___y_4853_);
lean_dec_ref_known(v___x_4858_, 1);
if (lean_obj_tag(v___x_4859_) == 0)
{
lean_object* v_a_4860_; lean_object* v___x_4862_; uint8_t v_isShared_4863_; uint8_t v_isSharedCheck_4867_; 
v_a_4860_ = lean_ctor_get(v___x_4859_, 0);
v_isSharedCheck_4867_ = !lean_is_exclusive(v___x_4859_);
if (v_isSharedCheck_4867_ == 0)
{
v___x_4862_ = v___x_4859_;
v_isShared_4863_ = v_isSharedCheck_4867_;
goto v_resetjp_4861_;
}
else
{
lean_inc(v_a_4860_);
lean_dec(v___x_4859_);
v___x_4862_ = lean_box(0);
v_isShared_4863_ = v_isSharedCheck_4867_;
goto v_resetjp_4861_;
}
v_resetjp_4861_:
{
lean_object* v___x_4865_; 
if (v_isShared_4863_ == 0)
{
v___x_4865_ = v___x_4862_;
goto v_reusejp_4864_;
}
else
{
lean_object* v_reuseFailAlloc_4866_; 
v_reuseFailAlloc_4866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4866_, 0, v_a_4860_);
v___x_4865_ = v_reuseFailAlloc_4866_;
goto v_reusejp_4864_;
}
v_reusejp_4864_:
{
return v___x_4865_;
}
}
}
else
{
lean_object* v_a_4868_; lean_object* v___x_4870_; uint8_t v_isShared_4871_; uint8_t v_isSharedCheck_4875_; 
v_a_4868_ = lean_ctor_get(v___x_4859_, 0);
v_isSharedCheck_4875_ = !lean_is_exclusive(v___x_4859_);
if (v_isSharedCheck_4875_ == 0)
{
v___x_4870_ = v___x_4859_;
v_isShared_4871_ = v_isSharedCheck_4875_;
goto v_resetjp_4869_;
}
else
{
lean_inc(v_a_4868_);
lean_dec(v___x_4859_);
v___x_4870_ = lean_box(0);
v_isShared_4871_ = v_isSharedCheck_4875_;
goto v_resetjp_4869_;
}
v_resetjp_4869_:
{
lean_object* v___x_4873_; 
if (v_isShared_4871_ == 0)
{
v___x_4873_ = v___x_4870_;
goto v_reusejp_4872_;
}
else
{
lean_object* v_reuseFailAlloc_4874_; 
v_reuseFailAlloc_4874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4874_, 0, v_a_4868_);
v___x_4873_ = v_reuseFailAlloc_4874_;
goto v_reusejp_4872_;
}
v_reusejp_4872_:
{
return v___x_4873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg___boxed(lean_object* v_e_4876_, lean_object* v_maxFVars_4877_, lean_object* v_k_4878_, lean_object* v_cleanupAnnotations_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_, lean_object* v___y_4883_, lean_object* v___y_4884_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4885_; lean_object* v_res_4886_; 
v_cleanupAnnotations_boxed_4885_ = lean_unbox(v_cleanupAnnotations_4879_);
v_res_4886_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4876_, v_maxFVars_4877_, v_k_4878_, v_cleanupAnnotations_boxed_4885_, v___y_4880_, v___y_4881_, v___y_4882_, v___y_4883_);
lean_dec(v___y_4883_);
lean_dec_ref(v___y_4882_);
lean_dec(v___y_4881_);
lean_dec_ref(v___y_4880_);
return v_res_4886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(lean_object* v_00_u03b1_4887_, lean_object* v_e_4888_, lean_object* v_maxFVars_4889_, lean_object* v_k_4890_, uint8_t v_cleanupAnnotations_4891_, lean_object* v___y_4892_, lean_object* v___y_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_){
_start:
{
lean_object* v___x_4897_; 
v___x_4897_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4888_, v_maxFVars_4889_, v_k_4890_, v_cleanupAnnotations_4891_, v___y_4892_, v___y_4893_, v___y_4894_, v___y_4895_);
return v___x_4897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___boxed(lean_object* v_00_u03b1_4898_, lean_object* v_e_4899_, lean_object* v_maxFVars_4900_, lean_object* v_k_4901_, lean_object* v_cleanupAnnotations_4902_, lean_object* v___y_4903_, lean_object* v___y_4904_, lean_object* v___y_4905_, lean_object* v___y_4906_, lean_object* v___y_4907_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4908_; lean_object* v_res_4909_; 
v_cleanupAnnotations_boxed_4908_ = lean_unbox(v_cleanupAnnotations_4902_);
v_res_4909_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(v_00_u03b1_4898_, v_e_4899_, v_maxFVars_4900_, v_k_4901_, v_cleanupAnnotations_boxed_4908_, v___y_4903_, v___y_4904_, v___y_4905_, v___y_4906_);
lean_dec(v___y_4906_);
lean_dec_ref(v___y_4905_);
lean_dec(v___y_4904_);
lean_dec_ref(v___y_4903_);
return v_res_4909_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object* v_x_4910_){
_start:
{
if (lean_obj_tag(v_x_4910_) == 0)
{
uint8_t v___x_4911_; 
v___x_4911_ = 1;
return v___x_4911_;
}
else
{
lean_object* v_head_4912_; 
v_head_4912_ = lean_ctor_get(v_x_4910_, 0);
if (lean_obj_tag(v_head_4912_) == 0)
{
lean_object* v_tail_4913_; 
v_tail_4913_ = lean_ctor_get(v_x_4910_, 1);
v_x_4910_ = v_tail_4913_;
goto _start;
}
else
{
uint8_t v___x_4915_; 
v___x_4915_ = 0;
return v___x_4915_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object* v_x_4916_){
_start:
{
uint8_t v_res_4917_; lean_object* v_r_4918_; 
v_res_4917_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_x_4916_);
lean_dec(v_x_4916_);
v_r_4918_ = lean_box(v_res_4917_);
return v_r_4918_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; 
v___x_4921_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1));
v___x_4922_ = lean_unsigned_to_nat(12u);
v___x_4923_ = lean_unsigned_to_nat(376u);
v___x_4924_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0));
v___x_4925_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4926_ = l_mkPanicMessageWithDecl(v___x_4925_, v___x_4924_, v___x_4923_, v___x_4922_, v___x_4921_);
return v___x_4926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object* v___x_4927_, lean_object* v_xs_4928_, lean_object* v_tail_4929_, lean_object* v___x_4930_, lean_object* v___x_4931_, lean_object* v_ys_4932_, lean_object* v_value_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_, lean_object* v___y_4937_, lean_object* v___y_4938_){
_start:
{
uint8_t v___x_1213__boxed_4939_; uint8_t v___x_1214__boxed_4940_; lean_object* v_res_4941_; 
v___x_1213__boxed_4939_ = lean_unbox(v___x_4930_);
v___x_1214__boxed_4940_ = lean_unbox(v___x_4931_);
v_res_4941_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(v___x_4927_, v_xs_4928_, v_tail_4929_, v___x_1213__boxed_4939_, v___x_1214__boxed_4940_, v_ys_4932_, v_value_4933_, v___y_4934_, v___y_4935_, v___y_4936_, v___y_4937_);
lean_dec(v___y_4937_);
lean_dec_ref(v___y_4936_);
lean_dec(v___y_4935_);
lean_dec_ref(v___y_4934_);
lean_dec(v___x_4927_);
return v_res_4941_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0(void){
_start:
{
lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; 
v___x_4942_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2));
v___x_4943_ = lean_unsigned_to_nat(8u);
v___x_4944_ = lean_unsigned_to_nat(368u);
v___x_4945_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0));
v___x_4946_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_4947_ = l_mkPanicMessageWithDecl(v___x_4946_, v___x_4945_, v___x_4944_, v___x_4943_, v___x_4942_);
return v___x_4947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object* v_xs_4948_, lean_object* v_x_4949_, lean_object* v_x_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_, lean_object* v_a_4953_, lean_object* v_a_4954_){
_start:
{
if (lean_obj_tag(v_x_4949_) == 0)
{
lean_object* v___x_4956_; 
lean_dec_ref(v_xs_4948_);
v___x_4956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4956_, 0, v_x_4950_);
return v___x_4956_;
}
else
{
lean_object* v_head_4957_; 
v_head_4957_ = lean_ctor_get(v_x_4949_, 0);
if (lean_obj_tag(v_head_4957_) == 0)
{
lean_object* v_tail_4958_; uint8_t v___x_4959_; 
v_tail_4958_ = lean_ctor_get(v_x_4949_, 1);
lean_inc(v_tail_4958_);
lean_dec_ref_known(v_x_4949_, 2);
v___x_4959_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_tail_4958_);
if (v___x_4959_ == 0)
{
uint8_t v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___f_4964_; lean_object* v___x_4965_; 
v___x_4960_ = 1;
v___x_4961_ = lean_unsigned_to_nat(1u);
v___x_4962_ = lean_box(v___x_4959_);
v___x_4963_ = lean_box(v___x_4960_);
v___f_4964_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4964_, 0, v___x_4961_);
lean_closure_set(v___f_4964_, 1, v_xs_4948_);
lean_closure_set(v___f_4964_, 2, v_tail_4958_);
lean_closure_set(v___f_4964_, 3, v___x_4962_);
lean_closure_set(v___f_4964_, 4, v___x_4963_);
v___x_4965_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_x_4950_, v___x_4961_, v___f_4964_, v___x_4959_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_);
return v___x_4965_;
}
else
{
lean_object* v___x_4966_; 
lean_dec(v_tail_4958_);
lean_dec_ref(v_xs_4948_);
v___x_4966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4966_, 0, v_x_4950_);
return v___x_4966_;
}
}
else
{
lean_object* v_tail_4967_; lean_object* v_val_4968_; lean_object* v___x_4969_; uint8_t v___x_4970_; 
lean_inc_ref(v_head_4957_);
v_tail_4967_ = lean_ctor_get(v_x_4949_, 1);
lean_inc(v_tail_4967_);
lean_dec_ref_known(v_x_4949_, 2);
v_val_4968_ = lean_ctor_get(v_head_4957_, 0);
lean_inc(v_val_4968_);
lean_dec_ref_known(v_head_4957_, 1);
v___x_4969_ = lean_array_get_size(v_xs_4948_);
v___x_4970_ = lean_nat_dec_lt(v_val_4968_, v___x_4969_);
if (v___x_4970_ == 0)
{
lean_object* v___x_4971_; lean_object* v___x_4972_; 
lean_dec(v_val_4968_);
lean_dec(v_tail_4967_);
lean_dec_ref(v_x_4950_);
lean_dec_ref(v_xs_4948_);
v___x_4971_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0);
v___x_4972_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4971_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_);
return v___x_4972_;
}
else
{
lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; 
v___x_4973_ = l_Lean_instInhabitedExpr;
v___x_4974_ = lean_array_get_borrowed(v___x_4973_, v_xs_4948_, v_val_4968_);
lean_dec(v_val_4968_);
v___x_4975_ = lean_unsigned_to_nat(1u);
v___x_4976_ = lean_mk_empty_array_with_capacity(v___x_4975_);
lean_inc(v___x_4974_);
v___x_4977_ = lean_array_push(v___x_4976_, v___x_4974_);
v___x_4978_ = l_Lean_Meta_instantiateLambda(v_x_4950_, v___x_4977_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_);
lean_dec_ref(v___x_4977_);
if (lean_obj_tag(v___x_4978_) == 0)
{
lean_object* v_a_4979_; 
v_a_4979_ = lean_ctor_get(v___x_4978_, 0);
lean_inc(v_a_4979_);
lean_dec_ref_known(v___x_4978_, 1);
v_x_4949_ = v_tail_4967_;
v_x_4950_ = v_a_4979_;
goto _start;
}
else
{
lean_dec(v_tail_4967_);
lean_dec_ref(v_xs_4948_);
return v___x_4978_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object* v___x_4981_, lean_object* v_xs_4982_, lean_object* v_tail_4983_, uint8_t v___x_4984_, uint8_t v___x_4985_, lean_object* v_ys_4986_, lean_object* v_value_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_){
_start:
{
lean_object* v___x_4993_; uint8_t v___x_4994_; 
v___x_4993_ = lean_array_get_size(v_ys_4986_);
v___x_4994_ = lean_nat_dec_eq(v___x_4993_, v___x_4981_);
if (v___x_4994_ == 0)
{
lean_object* v___x_4995_; lean_object* v___x_4996_; 
lean_dec_ref(v_value_4987_);
lean_dec_ref(v_ys_4986_);
lean_dec(v_tail_4983_);
lean_dec_ref(v_xs_4982_);
v___x_4995_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2);
v___x_4996_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4995_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_);
return v___x_4996_;
}
else
{
lean_object* v___x_4997_; 
v___x_4997_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4982_, v_tail_4983_, v_value_4987_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_);
if (lean_obj_tag(v___x_4997_) == 0)
{
lean_object* v_a_4998_; uint8_t v___x_4999_; lean_object* v___x_5000_; 
v_a_4998_ = lean_ctor_get(v___x_4997_, 0);
lean_inc(v_a_4998_);
lean_dec_ref_known(v___x_4997_, 1);
v___x_4999_ = 1;
v___x_5000_ = l_Lean_Meta_mkLambdaFVars(v_ys_4986_, v_a_4998_, v___x_4984_, v___x_4985_, v___x_4984_, v___x_4985_, v___x_4999_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_);
return v___x_5000_;
}
else
{
lean_dec_ref(v_ys_4986_);
return v___x_4997_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object* v_xs_5001_, lean_object* v_x_5002_, lean_object* v_x_5003_, lean_object* v_a_5004_, lean_object* v_a_5005_, lean_object* v_a_5006_, lean_object* v_a_5007_, lean_object* v_a_5008_){
_start:
{
lean_object* v_res_5009_; 
v_res_5009_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_5001_, v_x_5002_, v_x_5003_, v_a_5004_, v_a_5005_, v_a_5006_, v_a_5007_);
lean_dec(v_a_5007_);
lean_dec_ref(v_a_5006_);
lean_dec(v_a_5005_);
lean_dec_ref(v_a_5004_);
return v_res_5009_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1(void){
_start:
{
lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; 
v___x_5011_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1));
v___x_5012_ = lean_unsigned_to_nat(2u);
v___x_5013_ = lean_unsigned_to_nat(362u);
v___x_5014_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0));
v___x_5015_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5016_ = l_mkPanicMessageWithDecl(v___x_5015_, v___x_5014_, v___x_5013_, v___x_5012_, v___x_5011_);
return v___x_5016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object* v_perm_5017_, lean_object* v_value_u2080_5018_, lean_object* v_xs_5019_, lean_object* v_a_5020_, lean_object* v_a_5021_, lean_object* v_a_5022_, lean_object* v_a_5023_){
_start:
{
lean_object* v___x_5025_; lean_object* v___x_5026_; uint8_t v___x_5027_; 
v___x_5025_ = lean_array_get_size(v_xs_5019_);
v___x_5026_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5017_);
v___x_5027_ = lean_nat_dec_eq(v___x_5025_, v___x_5026_);
lean_dec(v___x_5026_);
if (v___x_5027_ == 0)
{
lean_object* v___x_5028_; lean_object* v___x_5029_; 
lean_dec_ref(v_xs_5019_);
lean_dec_ref(v_value_u2080_5018_);
lean_dec_ref(v_perm_5017_);
v___x_5028_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1, &l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once, _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1);
v___x_5029_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_5028_, v_a_5020_, v_a_5021_, v_a_5022_, v_a_5023_);
return v___x_5029_;
}
else
{
lean_object* v_mask_5030_; lean_object* v___x_5031_; 
v_mask_5030_ = lean_array_to_list(v_perm_5017_);
v___x_5031_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_5019_, v_mask_5030_, v_value_u2080_5018_, v_a_5020_, v_a_5021_, v_a_5022_, v_a_5023_);
return v___x_5031_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object* v_perm_5032_, lean_object* v_value_u2080_5033_, lean_object* v_xs_5034_, lean_object* v_a_5035_, lean_object* v_a_5036_, lean_object* v_a_5037_, lean_object* v_a_5038_, lean_object* v_a_5039_){
_start:
{
lean_object* v_res_5040_; 
v_res_5040_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v_perm_5032_, v_value_u2080_5033_, v_xs_5034_, v_a_5035_, v_a_5036_, v_a_5037_, v_a_5038_);
lean_dec(v_a_5038_);
lean_dec_ref(v_a_5037_);
lean_dec(v_a_5036_);
lean_dec_ref(v_a_5035_);
return v_res_5040_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object* v_msg_5048_){
_start:
{
lean_object* v___f_5049_; lean_object* v___f_5050_; lean_object* v___f_5051_; lean_object* v___f_5052_; lean_object* v___f_5053_; lean_object* v___f_5054_; lean_object* v___f_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; 
v___f_5049_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5050_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5051_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5052_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5053_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5054_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5055_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5056_, 0, v___f_5049_);
lean_ctor_set(v___x_5056_, 1, v___f_5050_);
v___x_5057_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5057_, 0, v___x_5056_);
lean_ctor_set(v___x_5057_, 1, v___f_5051_);
lean_ctor_set(v___x_5057_, 2, v___f_5052_);
lean_ctor_set(v___x_5057_, 3, v___f_5053_);
lean_ctor_set(v___x_5057_, 4, v___f_5054_);
v___x_5058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5058_, 0, v___x_5057_);
lean_ctor_set(v___x_5058_, 1, v___f_5055_);
v___x_5059_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5060_ = l_instInhabitedOfMonad___redArg(v___x_5058_, v___x_5059_);
v___x_5061_ = lean_panic_fn_borrowed(v___x_5060_, v_msg_5048_);
lean_dec(v___x_5060_);
return v___x_5061_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object* v_00_u03b1_5062_, lean_object* v_msg_5063_){
_start:
{
lean_object* v___x_5064_; 
v___x_5064_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v_msg_5063_);
return v___x_5064_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; 
v___x_5067_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1));
v___x_5068_ = lean_unsigned_to_nat(8u);
v___x_5069_ = lean_unsigned_to_nat(394u);
v___x_5070_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0));
v___x_5071_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5072_ = l_mkPanicMessageWithDecl(v___x_5071_, v___x_5070_, v___x_5069_, v___x_5068_, v___x_5067_);
return v___x_5072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object* v_x_5073_, lean_object* v_x_5074_){
_start:
{
if (lean_obj_tag(v_x_5073_) == 0)
{
return v_x_5074_;
}
else
{
lean_object* v_head_5075_; lean_object* v_fst_5076_; 
v_head_5075_ = lean_ctor_get(v_x_5073_, 0);
v_fst_5076_ = lean_ctor_get(v_head_5075_, 0);
if (lean_obj_tag(v_fst_5076_) == 0)
{
lean_object* v_tail_5077_; 
v_tail_5077_ = lean_ctor_get(v_x_5073_, 1);
lean_inc(v_tail_5077_);
lean_dec_ref_known(v_x_5073_, 2);
v_x_5073_ = v_tail_5077_;
goto _start;
}
else
{
lean_object* v_tail_5079_; lean_object* v_snd_5080_; lean_object* v_val_5081_; lean_object* v___x_5082_; uint8_t v___x_5083_; 
lean_inc_ref(v_fst_5076_);
lean_inc(v_head_5075_);
v_tail_5079_ = lean_ctor_get(v_x_5073_, 1);
lean_inc(v_tail_5079_);
lean_dec_ref_known(v_x_5073_, 2);
v_snd_5080_ = lean_ctor_get(v_head_5075_, 1);
lean_inc(v_snd_5080_);
lean_dec(v_head_5075_);
v_val_5081_ = lean_ctor_get(v_fst_5076_, 0);
lean_inc(v_val_5081_);
lean_dec_ref_known(v_fst_5076_, 1);
v___x_5082_ = lean_array_get_size(v_x_5074_);
v___x_5083_ = lean_nat_dec_lt(v_val_5081_, v___x_5082_);
if (v___x_5083_ == 0)
{
lean_object* v___x_5084_; lean_object* v___x_5085_; 
lean_dec(v_val_5081_);
lean_dec(v_snd_5080_);
lean_dec(v_tail_5079_);
lean_dec_ref(v_x_5074_);
v___x_5084_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2);
v___x_5085_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5084_);
return v___x_5085_;
}
else
{
lean_object* v___x_5086_; 
v___x_5086_ = lean_array_set(v_x_5074_, v_val_5081_, v_snd_5080_);
lean_dec(v_val_5081_);
v_x_5073_ = v_tail_5079_;
v_x_5074_ = v___x_5086_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object* v_00_u03b1_5088_, lean_object* v_x_5089_, lean_object* v_x_5090_){
_start:
{
lean_object* v___x_5091_; 
v___x_5091_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v_x_5089_, v_x_5090_);
return v___x_5091_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2(void){
_start:
{
lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; 
v___x_5094_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1));
v___x_5095_ = lean_unsigned_to_nat(2u);
v___x_5096_ = lean_unsigned_to_nat(384u);
v___x_5097_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0));
v___x_5098_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5099_ = l_mkPanicMessageWithDecl(v___x_5098_, v___x_5097_, v___x_5096_, v___x_5095_, v___x_5094_);
return v___x_5099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object* v_perm_5102_, lean_object* v_xs_5103_){
_start:
{
lean_object* v___x_5104_; lean_object* v___x_5105_; uint8_t v___x_5106_; 
v___x_5104_ = lean_array_get_size(v_xs_5103_);
v___x_5105_ = lean_array_get_size(v_perm_5102_);
v___x_5106_ = lean_nat_dec_eq(v___x_5104_, v___x_5105_);
if (v___x_5106_ == 0)
{
lean_object* v___x_5107_; lean_object* v___x_5108_; 
v___x_5107_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2);
v___x_5108_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5107_);
return v___x_5108_;
}
else
{
lean_object* v___x_5109_; uint8_t v___x_5110_; 
v___x_5109_ = lean_unsigned_to_nat(0u);
v___x_5110_ = lean_nat_dec_eq(v___x_5104_, v___x_5109_);
if (v___x_5110_ == 0)
{
lean_object* v_dummy_5111_; lean_object* v___x_5112_; lean_object* v_ys_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; 
v_dummy_5111_ = lean_array_fget_borrowed(v_xs_5103_, v___x_5109_);
v___x_5112_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5102_);
lean_inc(v_dummy_5111_);
v_ys_5113_ = lean_mk_array(v___x_5112_, v_dummy_5111_);
v___x_5114_ = l_Array_zip___redArg(v_perm_5102_, v_xs_5103_);
v___x_5115_ = lean_array_to_list(v___x_5114_);
v___x_5116_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v___x_5115_, v_ys_5113_);
return v___x_5116_;
}
else
{
lean_object* v___x_5117_; 
v___x_5117_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
return v___x_5117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object* v_perm_5118_, lean_object* v_xs_5119_){
_start:
{
lean_object* v_res_5120_; 
v_res_5120_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5118_, v_xs_5119_);
lean_dec_ref(v_xs_5119_);
lean_dec_ref(v_perm_5118_);
return v_res_5120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object* v_00_u03b1_5121_, lean_object* v_perm_5122_, lean_object* v_xs_5123_){
_start:
{
lean_object* v___x_5124_; 
v___x_5124_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5122_, v_xs_5123_);
return v___x_5124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object* v_00_u03b1_5125_, lean_object* v_perm_5126_, lean_object* v_xs_5127_){
_start:
{
lean_object* v_res_5128_; 
v_res_5128_ = l_Lean_Elab_FixedParamPerm_pickFixed(v_00_u03b1_5125_, v_perm_5126_, v_xs_5127_);
lean_dec_ref(v_xs_5127_);
lean_dec_ref(v_perm_5126_);
return v_res_5128_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object* v_xs_5129_, lean_object* v_upperBound_5130_, lean_object* v_perm_5131_, lean_object* v_a_5132_, lean_object* v_b_5133_){
_start:
{
lean_object* v_a_5135_; uint8_t v___x_5142_; 
v___x_5142_ = lean_nat_dec_lt(v_a_5132_, v_upperBound_5130_);
if (v___x_5142_ == 0)
{
lean_dec(v_a_5132_);
return v_b_5133_;
}
else
{
lean_object* v___x_5143_; uint8_t v___x_5144_; 
v___x_5143_ = lean_array_get_size(v_perm_5131_);
v___x_5144_ = lean_nat_dec_lt(v_a_5132_, v___x_5143_);
if (v___x_5144_ == 0)
{
goto v___jp_5139_;
}
else
{
lean_object* v___x_5145_; 
v___x_5145_ = lean_array_fget_borrowed(v_perm_5131_, v_a_5132_);
if (lean_obj_tag(v___x_5145_) == 0)
{
goto v___jp_5139_;
}
else
{
v_a_5135_ = v_b_5133_;
goto v___jp_5134_;
}
}
}
v___jp_5134_:
{
lean_object* v___x_5136_; lean_object* v___x_5137_; 
v___x_5136_ = lean_unsigned_to_nat(1u);
v___x_5137_ = lean_nat_add(v_a_5132_, v___x_5136_);
lean_dec(v_a_5132_);
v_a_5132_ = v___x_5137_;
v_b_5133_ = v_a_5135_;
goto _start;
}
v___jp_5139_:
{
lean_object* v___x_5140_; lean_object* v___x_5141_; 
v___x_5140_ = lean_array_fget_borrowed(v_xs_5129_, v_a_5132_);
lean_inc(v___x_5140_);
v___x_5141_ = lean_array_push(v_b_5133_, v___x_5140_);
v_a_5135_ = v___x_5141_;
goto v___jp_5134_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object* v_xs_5146_, lean_object* v_upperBound_5147_, lean_object* v_perm_5148_, lean_object* v_a_5149_, lean_object* v_b_5150_){
_start:
{
lean_object* v_res_5151_; 
v_res_5151_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5146_, v_upperBound_5147_, v_perm_5148_, v_a_5149_, v_b_5150_);
lean_dec_ref(v_perm_5148_);
lean_dec(v_upperBound_5147_);
lean_dec_ref(v_xs_5146_);
return v_res_5151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object* v_perm_5152_, lean_object* v_xs_5153_){
_start:
{
lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v_ys_5156_; lean_object* v___x_5157_; 
v___x_5154_ = lean_array_get_size(v_xs_5153_);
v___x_5155_ = lean_unsigned_to_nat(0u);
v_ys_5156_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5157_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5153_, v___x_5154_, v_perm_5152_, v___x_5155_, v_ys_5156_);
return v___x_5157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object* v_perm_5158_, lean_object* v_xs_5159_){
_start:
{
lean_object* v_res_5160_; 
v_res_5160_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5158_, v_xs_5159_);
lean_dec_ref(v_xs_5159_);
lean_dec_ref(v_perm_5158_);
return v_res_5160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object* v_00_u03b1_5161_, lean_object* v_perm_5162_, lean_object* v_xs_5163_){
_start:
{
lean_object* v___x_5164_; 
v___x_5164_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5162_, v_xs_5163_);
return v___x_5164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object* v_00_u03b1_5165_, lean_object* v_perm_5166_, lean_object* v_xs_5167_){
_start:
{
lean_object* v_res_5168_; 
v_res_5168_ = l_Lean_Elab_FixedParamPerm_pickVarying(v_00_u03b1_5165_, v_perm_5166_, v_xs_5167_);
lean_dec_ref(v_xs_5167_);
lean_dec_ref(v_perm_5166_);
return v_res_5168_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object* v_00_u03b1_5169_, lean_object* v_xs_5170_, lean_object* v_upperBound_5171_, lean_object* v_perm_5172_, lean_object* v_inst_5173_, lean_object* v_R_5174_, lean_object* v_a_5175_, lean_object* v_b_5176_, lean_object* v_c_5177_){
_start:
{
lean_object* v___x_5178_; 
v___x_5178_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5170_, v_upperBound_5171_, v_perm_5172_, v_a_5175_, v_b_5176_);
return v___x_5178_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object* v_00_u03b1_5179_, lean_object* v_xs_5180_, lean_object* v_upperBound_5181_, lean_object* v_perm_5182_, lean_object* v_inst_5183_, lean_object* v_R_5184_, lean_object* v_a_5185_, lean_object* v_b_5186_, lean_object* v_c_5187_){
_start:
{
lean_object* v_res_5188_; 
v_res_5188_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(v_00_u03b1_5179_, v_xs_5180_, v_upperBound_5181_, v_perm_5182_, v_inst_5183_, v_R_5184_, v_a_5185_, v_b_5186_, v_c_5187_);
lean_dec_ref(v_perm_5182_);
lean_dec(v_upperBound_5181_);
lean_dec_ref(v_xs_5180_);
return v_res_5188_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(lean_object* v_msg_5189_){
_start:
{
lean_object* v___x_5190_; lean_object* v___x_5191_; 
v___x_5190_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5191_ = lean_panic_fn_borrowed(v___x_5190_, v_msg_5189_);
return v___x_5191_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object* v_00_u03b1_5192_, lean_object* v_msg_5193_){
_start:
{
lean_object* v___x_5194_; 
v___x_5194_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v_msg_5193_);
return v___x_5194_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object* v_j_5195_, lean_object* v___x_5196_, lean_object* v_i_5197_, lean_object* v___x_5198_, lean_object* v_as_5199_, size_t v_i_5200_, size_t v_stop_5201_){
_start:
{
uint8_t v___x_5202_; 
v___x_5202_ = lean_usize_dec_eq(v_i_5200_, v_stop_5201_);
if (v___x_5202_ == 0)
{
uint8_t v___x_5203_; uint8_t v___y_5205_; lean_object* v___x_5209_; 
v___x_5203_ = 1;
v___x_5209_ = lean_array_uget_borrowed(v_as_5199_, v_i_5200_);
if (lean_obj_tag(v___x_5209_) == 0)
{
uint8_t v___x_5210_; 
v___x_5210_ = lean_nat_dec_lt(v_j_5195_, v___x_5196_);
v___y_5205_ = v___x_5210_;
goto v___jp_5204_;
}
else
{
uint8_t v___x_5211_; 
v___x_5211_ = lean_nat_dec_lt(v_i_5197_, v___x_5198_);
v___y_5205_ = v___x_5211_;
goto v___jp_5204_;
}
v___jp_5204_:
{
if (v___y_5205_ == 0)
{
size_t v___x_5206_; size_t v___x_5207_; 
v___x_5206_ = ((size_t)1ULL);
v___x_5207_ = lean_usize_add(v_i_5200_, v___x_5206_);
v_i_5200_ = v___x_5207_;
goto _start;
}
else
{
return v___x_5203_;
}
}
}
else
{
uint8_t v___x_5212_; 
v___x_5212_ = 0;
return v___x_5212_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___boxed(lean_object* v_j_5213_, lean_object* v___x_5214_, lean_object* v_i_5215_, lean_object* v___x_5216_, lean_object* v_as_5217_, lean_object* v_i_5218_, lean_object* v_stop_5219_){
_start:
{
size_t v_i_boxed_5220_; size_t v_stop_boxed_5221_; uint8_t v_res_5222_; lean_object* v_r_5223_; 
v_i_boxed_5220_ = lean_unbox_usize(v_i_5218_);
lean_dec(v_i_5218_);
v_stop_boxed_5221_ = lean_unbox_usize(v_stop_5219_);
lean_dec(v_stop_5219_);
v_res_5222_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(v_j_5213_, v___x_5214_, v_i_5215_, v___x_5216_, v_as_5217_, v_i_boxed_5220_, v_stop_boxed_5221_);
lean_dec_ref(v_as_5217_);
lean_dec(v___x_5216_);
lean_dec(v_i_5215_);
lean_dec(v___x_5214_);
lean_dec(v_j_5213_);
v_r_5223_ = lean_box(v_res_5222_);
return v_r_5223_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; 
v___x_5226_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1));
v___x_5227_ = lean_unsigned_to_nat(10u);
v___x_5228_ = lean_unsigned_to_nat(425u);
v___x_5229_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5230_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5231_ = l_mkPanicMessageWithDecl(v___x_5230_, v___x_5229_, v___x_5228_, v___x_5227_, v___x_5226_);
return v___x_5231_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4(void){
_start:
{
lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5238_; 
v___x_5233_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3));
v___x_5234_ = lean_unsigned_to_nat(12u);
v___x_5235_ = lean_unsigned_to_nat(433u);
v___x_5236_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0));
v___x_5237_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5238_ = l_mkPanicMessageWithDecl(v___x_5237_, v___x_5236_, v___x_5235_, v___x_5234_, v___x_5233_);
return v___x_5238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object* v_perm_5239_, lean_object* v_fixedArgs_5240_, lean_object* v_varyingArgs_5241_, lean_object* v_i_5242_, lean_object* v_j_5243_, lean_object* v_xs_5244_){
_start:
{
lean_object* v_lower_5246_; lean_object* v_upper_5247_; lean_object* v___x_5251_; uint8_t v___x_5252_; 
v___x_5251_ = lean_array_get_size(v_perm_5239_);
v___x_5252_ = lean_nat_dec_lt(v_i_5242_, v___x_5251_);
if (v___x_5252_ == 0)
{
lean_object* v___x_5253_; lean_object* v___x_5254_; uint8_t v___x_5255_; 
lean_dec(v_i_5242_);
lean_dec_ref(v_perm_5239_);
v___x_5253_ = lean_unsigned_to_nat(0u);
v___x_5254_ = lean_array_get_size(v_varyingArgs_5241_);
v___x_5255_ = lean_nat_dec_le(v_j_5243_, v___x_5253_);
if (v___x_5255_ == 0)
{
v_lower_5246_ = v_j_5243_;
v_upper_5247_ = v___x_5254_;
goto v___jp_5245_;
}
else
{
lean_dec(v_j_5243_);
v_lower_5246_ = v___x_5253_;
v_upper_5247_ = v___x_5254_;
goto v___jp_5245_;
}
}
else
{
lean_object* v___x_5256_; 
v___x_5256_ = lean_array_fget_borrowed(v_perm_5239_, v_i_5242_);
if (lean_obj_tag(v___x_5256_) == 1)
{
lean_object* v_val_5257_; lean_object* v___x_5258_; uint8_t v___x_5259_; 
v_val_5257_ = lean_ctor_get(v___x_5256_, 0);
v___x_5258_ = lean_array_get_size(v_fixedArgs_5240_);
v___x_5259_ = lean_nat_dec_lt(v_val_5257_, v___x_5258_);
if (v___x_5259_ == 0)
{
lean_object* v___x_5260_; lean_object* v___x_5261_; 
lean_dec_ref(v_xs_5244_);
lean_dec(v_j_5243_);
lean_dec(v_i_5242_);
lean_dec_ref(v_varyingArgs_5241_);
lean_dec_ref(v_perm_5239_);
v___x_5260_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2);
v___x_5261_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5260_);
return v___x_5261_;
}
else
{
lean_object* v___x_5262_; lean_object* v___x_5263_; lean_object* v___x_5264_; lean_object* v___x_5265_; 
v___x_5262_ = lean_unsigned_to_nat(1u);
v___x_5263_ = lean_nat_add(v_i_5242_, v___x_5262_);
lean_dec(v_i_5242_);
v___x_5264_ = lean_array_fget_borrowed(v_fixedArgs_5240_, v_val_5257_);
lean_inc(v___x_5264_);
v___x_5265_ = lean_array_push(v_xs_5244_, v___x_5264_);
v_i_5242_ = v___x_5263_;
v_xs_5244_ = v___x_5265_;
goto _start;
}
}
else
{
lean_object* v___x_5267_; lean_object* v___y_5269_; lean_object* v___y_5270_; lean_object* v___y_5271_; lean_object* v_lower_5279_; lean_object* v_upper_5280_; uint8_t v___x_5288_; 
v___x_5267_ = lean_array_get_size(v_varyingArgs_5241_);
v___x_5288_ = lean_nat_dec_lt(v_j_5243_, v___x_5267_);
if (v___x_5288_ == 0)
{
lean_object* v___x_5289_; uint8_t v___x_5290_; 
lean_dec_ref(v_varyingArgs_5241_);
v___x_5289_ = lean_unsigned_to_nat(0u);
v___x_5290_ = lean_nat_dec_le(v_i_5242_, v___x_5289_);
if (v___x_5290_ == 0)
{
lean_inc(v_i_5242_);
v_lower_5279_ = v_i_5242_;
v_upper_5280_ = v___x_5251_;
goto v___jp_5278_;
}
else
{
v_lower_5279_ = v___x_5289_;
v_upper_5280_ = v___x_5251_;
goto v___jp_5278_;
}
}
else
{
lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; 
v___x_5291_ = lean_unsigned_to_nat(1u);
v___x_5292_ = lean_nat_add(v_i_5242_, v___x_5291_);
lean_dec(v_i_5242_);
v___x_5293_ = lean_nat_add(v_j_5243_, v___x_5291_);
v___x_5294_ = lean_array_fget_borrowed(v_varyingArgs_5241_, v_j_5243_);
lean_dec(v_j_5243_);
lean_inc(v___x_5294_);
v___x_5295_ = lean_array_push(v_xs_5244_, v___x_5294_);
v_i_5242_ = v___x_5292_;
v_j_5243_ = v___x_5293_;
v_xs_5244_ = v___x_5295_;
goto _start;
}
v___jp_5268_:
{
uint8_t v___x_5272_; 
v___x_5272_ = lean_nat_dec_lt(v___y_5269_, v___y_5271_);
if (v___x_5272_ == 0)
{
lean_dec(v___y_5271_);
lean_dec_ref(v___y_5270_);
lean_dec(v___y_5269_);
lean_dec(v_j_5243_);
lean_dec(v_i_5242_);
return v_xs_5244_;
}
else
{
size_t v___x_5273_; size_t v___x_5274_; uint8_t v___x_5275_; 
v___x_5273_ = lean_usize_of_nat(v___y_5269_);
lean_dec(v___y_5269_);
v___x_5274_ = lean_usize_of_nat(v___y_5271_);
lean_dec(v___y_5271_);
v___x_5275_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(v_j_5243_, v___x_5267_, v_i_5242_, v___x_5251_, v___y_5270_, v___x_5273_, v___x_5274_);
lean_dec_ref(v___y_5270_);
lean_dec(v_i_5242_);
lean_dec(v_j_5243_);
if (v___x_5275_ == 0)
{
return v_xs_5244_;
}
else
{
lean_object* v___x_5276_; lean_object* v___x_5277_; 
lean_dec_ref(v_xs_5244_);
v___x_5276_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4);
v___x_5277_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5276_);
return v___x_5277_;
}
}
}
v___jp_5278_:
{
lean_object* v___x_5281_; lean_object* v_array_5282_; lean_object* v_start_5283_; lean_object* v_stop_5284_; uint8_t v___x_5285_; 
v___x_5281_ = l_Array_toSubarray___redArg(v_perm_5239_, v_lower_5279_, v_upper_5280_);
v_array_5282_ = lean_ctor_get(v___x_5281_, 0);
lean_inc_ref(v_array_5282_);
v_start_5283_ = lean_ctor_get(v___x_5281_, 1);
lean_inc(v_start_5283_);
v_stop_5284_ = lean_ctor_get(v___x_5281_, 2);
lean_inc(v_stop_5284_);
lean_dec_ref(v___x_5281_);
v___x_5285_ = lean_nat_dec_lt(v_start_5283_, v_stop_5284_);
if (v___x_5285_ == 0)
{
lean_dec(v_stop_5284_);
lean_dec(v_start_5283_);
lean_dec_ref(v_array_5282_);
lean_dec(v_j_5243_);
lean_dec(v_i_5242_);
return v_xs_5244_;
}
else
{
lean_object* v___x_5286_; uint8_t v___x_5287_; 
v___x_5286_ = lean_array_get_size(v_array_5282_);
v___x_5287_ = lean_nat_dec_le(v_stop_5284_, v___x_5286_);
if (v___x_5287_ == 0)
{
lean_dec(v_stop_5284_);
v___y_5269_ = v_start_5283_;
v___y_5270_ = v_array_5282_;
v___y_5271_ = v___x_5286_;
goto v___jp_5268_;
}
else
{
v___y_5269_ = v_start_5283_;
v___y_5270_ = v_array_5282_;
v___y_5271_ = v_stop_5284_;
goto v___jp_5268_;
}
}
}
}
}
v___jp_5245_:
{
lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; 
v___x_5248_ = l_Array_toSubarray___redArg(v_varyingArgs_5241_, v_lower_5246_, v_upper_5247_);
v___x_5249_ = l_Subarray_copy___redArg(v___x_5248_);
v___x_5250_ = l_Array_append___redArg(v_xs_5244_, v___x_5249_);
lean_dec_ref(v___x_5249_);
return v___x_5250_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object* v_perm_5297_, lean_object* v_fixedArgs_5298_, lean_object* v_varyingArgs_5299_, lean_object* v_i_5300_, lean_object* v_j_5301_, lean_object* v_xs_5302_){
_start:
{
lean_object* v_res_5303_; 
v_res_5303_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5297_, v_fixedArgs_5298_, v_varyingArgs_5299_, v_i_5300_, v_j_5301_, v_xs_5302_);
lean_dec_ref(v_fixedArgs_5298_);
return v_res_5303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object* v_00_u03b1_5304_, lean_object* v_perm_5305_, lean_object* v_fixedArgs_5306_, lean_object* v_varyingArgs_5307_, lean_object* v_i_5308_, lean_object* v_j_5309_, lean_object* v_xs_5310_){
_start:
{
lean_object* v___x_5311_; 
v___x_5311_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5305_, v_fixedArgs_5306_, v_varyingArgs_5307_, v_i_5308_, v_j_5309_, v_xs_5310_);
return v___x_5311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object* v_00_u03b1_5312_, lean_object* v_perm_5313_, lean_object* v_fixedArgs_5314_, lean_object* v_varyingArgs_5315_, lean_object* v_i_5316_, lean_object* v_j_5317_, lean_object* v_xs_5318_){
_start:
{
lean_object* v_res_5319_; 
v_res_5319_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(v_00_u03b1_5312_, v_perm_5313_, v_fixedArgs_5314_, v_varyingArgs_5315_, v_i_5316_, v_j_5317_, v_xs_5318_);
lean_dec_ref(v_fixedArgs_5314_);
return v_res_5319_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2(void){
_start:
{
lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; 
v___x_5322_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1));
v___x_5323_ = lean_unsigned_to_nat(2u);
v___x_5324_ = lean_unsigned_to_nat(416u);
v___x_5325_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0));
v___x_5326_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5327_ = l_mkPanicMessageWithDecl(v___x_5326_, v___x_5325_, v___x_5324_, v___x_5323_, v___x_5322_);
return v___x_5327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object* v_perm_5328_, lean_object* v_fixedArgs_5329_, lean_object* v_varyingArgs_5330_){
_start:
{
lean_object* v___x_5331_; lean_object* v___x_5332_; uint8_t v___x_5333_; 
v___x_5331_ = lean_array_get_size(v_fixedArgs_5329_);
v___x_5332_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5328_);
v___x_5333_ = lean_nat_dec_eq(v___x_5331_, v___x_5332_);
lean_dec(v___x_5332_);
if (v___x_5333_ == 0)
{
lean_object* v___x_5334_; lean_object* v___x_5335_; 
lean_dec_ref(v_varyingArgs_5330_);
lean_dec_ref(v_perm_5328_);
v___x_5334_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2);
v___x_5335_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___redArg(v___x_5334_);
return v___x_5335_;
}
else
{
lean_object* v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; 
v___x_5336_ = lean_unsigned_to_nat(0u);
v___x_5337_ = ((lean_object*)(l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3));
v___x_5338_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5328_, v_fixedArgs_5329_, v_varyingArgs_5330_, v___x_5336_, v___x_5336_, v___x_5337_);
return v___x_5338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object* v_perm_5339_, lean_object* v_fixedArgs_5340_, lean_object* v_varyingArgs_5341_){
_start:
{
lean_object* v_res_5342_; 
v_res_5342_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5339_, v_fixedArgs_5340_, v_varyingArgs_5341_);
lean_dec_ref(v_fixedArgs_5340_);
return v_res_5342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object* v_00_u03b1_5343_, lean_object* v_perm_5344_, lean_object* v_fixedArgs_5345_, lean_object* v_varyingArgs_5346_){
_start:
{
lean_object* v___x_5347_; 
v___x_5347_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5344_, v_fixedArgs_5345_, v_varyingArgs_5346_);
return v___x_5347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object* v_00_u03b1_5348_, lean_object* v_perm_5349_, lean_object* v_fixedArgs_5350_, lean_object* v_varyingArgs_5351_){
_start:
{
lean_object* v_res_5352_; 
v_res_5352_ = l_Lean_Elab_FixedParamPerm_buildArgs(v_00_u03b1_5348_, v_perm_5349_, v_fixedArgs_5350_, v_varyingArgs_5351_);
lean_dec_ref(v_fixedArgs_5350_);
return v_res_5352_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object* v_x_5353_, lean_object* v_x_5354_){
_start:
{
if (lean_obj_tag(v_x_5353_) == 0)
{
if (lean_obj_tag(v_x_5354_) == 0)
{
uint8_t v___x_5355_; 
v___x_5355_ = 1;
return v___x_5355_;
}
else
{
uint8_t v___x_5356_; 
v___x_5356_ = 0;
return v___x_5356_;
}
}
else
{
if (lean_obj_tag(v_x_5354_) == 0)
{
uint8_t v___x_5357_; 
v___x_5357_ = 0;
return v___x_5357_;
}
else
{
lean_object* v_val_5358_; lean_object* v_val_5359_; uint8_t v___x_5360_; 
v_val_5358_ = lean_ctor_get(v_x_5353_, 0);
v_val_5359_ = lean_ctor_get(v_x_5354_, 0);
v___x_5360_ = lean_nat_dec_eq(v_val_5358_, v_val_5359_);
return v___x_5360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object* v_x_5361_, lean_object* v_x_5362_){
_start:
{
uint8_t v_res_5363_; lean_object* v_r_5364_; 
v_res_5363_ = l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v_x_5361_, v_x_5362_);
lean_dec(v_x_5362_);
lean_dec(v_x_5361_);
v_r_5364_ = lean_box(v_res_5363_);
return v_r_5364_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object* v_xs_5365_, lean_object* v_ys_5366_, lean_object* v_x_5367_){
_start:
{
lean_object* v_zero_5368_; uint8_t v_isZero_5369_; 
v_zero_5368_ = lean_unsigned_to_nat(0u);
v_isZero_5369_ = lean_nat_dec_eq(v_x_5367_, v_zero_5368_);
if (v_isZero_5369_ == 1)
{
lean_dec(v_x_5367_);
return v_isZero_5369_;
}
else
{
lean_object* v_one_5370_; lean_object* v_n_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; uint8_t v___x_5374_; 
v_one_5370_ = lean_unsigned_to_nat(1u);
v_n_5371_ = lean_nat_sub(v_x_5367_, v_one_5370_);
lean_dec(v_x_5367_);
v___x_5372_ = lean_array_fget_borrowed(v_xs_5365_, v_n_5371_);
v___x_5373_ = lean_array_fget_borrowed(v_ys_5366_, v_n_5371_);
v___x_5374_ = l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v___x_5372_, v___x_5373_);
if (v___x_5374_ == 0)
{
lean_dec(v_n_5371_);
return v___x_5374_;
}
else
{
v_x_5367_ = v_n_5371_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object* v_xs_5376_, lean_object* v_ys_5377_, lean_object* v_x_5378_){
_start:
{
uint8_t v_res_5379_; lean_object* v_r_5380_; 
v_res_5379_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5376_, v_ys_5377_, v_x_5378_);
lean_dec_ref(v_ys_5377_);
lean_dec_ref(v_xs_5376_);
v_r_5380_ = lean_box(v_res_5379_);
return v_r_5380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t v_sz_5381_, size_t v_i_5382_, lean_object* v_bs_5383_){
_start:
{
uint8_t v___x_5384_; 
v___x_5384_ = lean_usize_dec_lt(v_i_5382_, v_sz_5381_);
if (v___x_5384_ == 0)
{
lean_object* v___x_5385_; 
v___x_5385_ = l_unsafeCast___redArg(v_bs_5383_);
lean_dec_ref(v_bs_5383_);
return v___x_5385_;
}
else
{
lean_object* v_v_5386_; lean_object* v___x_5387_; lean_object* v_bs_x27_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; size_t v___x_5391_; size_t v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; 
v_v_5386_ = lean_array_uget(v_bs_5383_, v_i_5382_);
v___x_5387_ = lean_unsigned_to_nat(0u);
v_bs_x27_5388_ = lean_array_uset(v_bs_5383_, v_i_5382_, v___x_5387_);
v___x_5389_ = l_unsafeCast___redArg(v_v_5386_);
lean_dec(v_v_5386_);
v___x_5390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5390_, 0, v___x_5389_);
v___x_5391_ = ((size_t)1ULL);
v___x_5392_ = lean_usize_add(v_i_5382_, v___x_5391_);
v___x_5393_ = l_unsafeCast___redArg(v___x_5390_);
lean_dec_ref_known(v___x_5390_, 1);
v___x_5394_ = lean_array_uset(v_bs_x27_5388_, v_i_5382_, v___x_5393_);
v_i_5382_ = v___x_5392_;
v_bs_5383_ = v___x_5394_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object* v_sz_5396_, lean_object* v_i_5397_, lean_object* v_bs_5398_){
_start:
{
size_t v_sz_boxed_5399_; size_t v_i_boxed_5400_; lean_object* v_res_5401_; 
v_sz_boxed_5399_ = lean_unbox_usize(v_sz_5396_);
lean_dec(v_sz_5396_);
v_i_boxed_5400_ = lean_unbox_usize(v_i_5397_);
lean_dec(v_i_5397_);
v_res_5401_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_boxed_5399_, v_i_boxed_5400_, v_bs_5398_);
return v_res_5401_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object* v_fixedParamPerms_5402_, lean_object* v_as_5403_, size_t v_i_5404_, size_t v_stop_5405_){
_start:
{
uint8_t v___x_5406_; 
v___x_5406_ = lean_usize_dec_eq(v_i_5404_, v_stop_5405_);
if (v___x_5406_ == 0)
{
lean_object* v_numFixed_5407_; uint8_t v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; size_t v_sz_5411_; size_t v___x_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; uint8_t v___x_5422_; 
v_numFixed_5407_ = lean_ctor_get(v_fixedParamPerms_5402_, 0);
v___x_5408_ = 1;
v___x_5409_ = lean_array_uget_borrowed(v_as_5403_, v_i_5404_);
lean_inc(v_numFixed_5407_);
v___x_5410_ = l_Array_range(v_numFixed_5407_);
v_sz_5411_ = lean_array_size(v___x_5410_);
v___x_5412_ = ((size_t)0ULL);
v___x_5413_ = l_unsafeCast___redArg(v___x_5410_);
lean_dec_ref(v___x_5410_);
v___x_5414_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_5411_, v___x_5412_, v___x_5413_);
v___x_5415_ = l_unsafeCast___redArg(v___x_5414_);
lean_dec_ref(v___x_5414_);
v___x_5416_ = lean_array_get_size(v___x_5409_);
v___x_5417_ = lean_nat_sub(v___x_5416_, v_numFixed_5407_);
v___x_5418_ = lean_box(0);
v___x_5419_ = lean_mk_array(v___x_5417_, v___x_5418_);
v___x_5420_ = l_Array_append___redArg(v___x_5415_, v___x_5419_);
lean_dec_ref(v___x_5419_);
v___x_5421_ = lean_array_get_size(v___x_5420_);
v___x_5422_ = lean_nat_dec_eq(v___x_5416_, v___x_5421_);
if (v___x_5422_ == 0)
{
lean_dec_ref(v___x_5420_);
lean_dec_ref(v_fixedParamPerms_5402_);
return v___x_5408_;
}
else
{
uint8_t v___x_5423_; 
v___x_5423_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v___x_5409_, v___x_5420_, v___x_5416_);
lean_dec_ref(v___x_5420_);
if (v___x_5423_ == 0)
{
lean_dec_ref(v_fixedParamPerms_5402_);
return v___x_5408_;
}
else
{
size_t v___x_5424_; size_t v___x_5425_; 
v___x_5424_ = ((size_t)1ULL);
v___x_5425_ = lean_usize_add(v_i_5404_, v___x_5424_);
v_i_5404_ = v___x_5425_;
goto _start;
}
}
}
else
{
uint8_t v___x_5427_; 
lean_dec_ref(v_fixedParamPerms_5402_);
v___x_5427_ = 0;
return v___x_5427_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object* v_fixedParamPerms_5428_, lean_object* v_as_5429_, lean_object* v_i_5430_, lean_object* v_stop_5431_){
_start:
{
size_t v_i_boxed_5432_; size_t v_stop_boxed_5433_; uint8_t v_res_5434_; lean_object* v_r_5435_; 
v_i_boxed_5432_ = lean_unbox_usize(v_i_5430_);
lean_dec(v_i_5430_);
v_stop_boxed_5433_ = lean_unbox_usize(v_stop_5431_);
lean_dec(v_stop_5431_);
v_res_5434_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5428_, v_as_5429_, v_i_boxed_5432_, v_stop_boxed_5433_);
lean_dec_ref(v_as_5429_);
v_r_5435_ = lean_box(v_res_5434_);
return v_r_5435_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object* v_fixedParamPerms_5436_){
_start:
{
lean_object* v_perms_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; uint8_t v___x_5440_; 
v_perms_5437_ = lean_ctor_get(v_fixedParamPerms_5436_, 1);
lean_inc_ref(v_perms_5437_);
v___x_5438_ = lean_unsigned_to_nat(0u);
v___x_5439_ = lean_array_get_size(v_perms_5437_);
v___x_5440_ = lean_nat_dec_lt(v___x_5438_, v___x_5439_);
if (v___x_5440_ == 0)
{
uint8_t v___x_5441_; 
lean_dec_ref(v_perms_5437_);
lean_dec_ref(v_fixedParamPerms_5436_);
v___x_5441_ = 1;
return v___x_5441_;
}
else
{
if (v___x_5440_ == 0)
{
lean_dec_ref(v_perms_5437_);
lean_dec_ref(v_fixedParamPerms_5436_);
return v___x_5440_;
}
else
{
size_t v___x_5442_; size_t v___x_5443_; uint8_t v___x_5444_; 
v___x_5442_ = ((size_t)0ULL);
v___x_5443_ = lean_usize_of_nat(v___x_5439_);
v___x_5444_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5436_, v_perms_5437_, v___x_5442_, v___x_5443_);
lean_dec_ref(v_perms_5437_);
if (v___x_5444_ == 0)
{
return v___x_5440_;
}
else
{
uint8_t v___x_5445_; 
v___x_5445_ = 0;
return v___x_5445_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object* v_fixedParamPerms_5446_){
_start:
{
uint8_t v_res_5447_; lean_object* v_r_5448_; 
v_res_5447_ = l_Lean_Elab_FixedParamPerms_fixedArePrefix(v_fixedParamPerms_5446_);
v_r_5448_ = lean_box(v_res_5447_);
return v_r_5448_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object* v_xs_5449_, lean_object* v_ys_5450_, lean_object* v_hsz_5451_, lean_object* v_x_5452_, lean_object* v_x_5453_){
_start:
{
uint8_t v___x_5454_; 
v___x_5454_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5449_, v_ys_5450_, v_x_5452_);
return v___x_5454_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object* v_xs_5455_, lean_object* v_ys_5456_, lean_object* v_hsz_5457_, lean_object* v_x_5458_, lean_object* v_x_5459_){
_start:
{
uint8_t v_res_5460_; lean_object* v_r_5461_; 
v_res_5460_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(v_xs_5455_, v_ys_5456_, v_hsz_5457_, v_x_5458_, v_x_5459_);
lean_dec_ref(v_ys_5456_);
lean_dec_ref(v_xs_5455_);
v_r_5461_ = lean_box(v_res_5460_);
return v_r_5461_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5462_; lean_object* v___x_5463_; 
v___x_5462_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5463_, 0, v___x_5462_);
lean_ctor_set(v___x_5463_, 1, v___x_5462_);
return v___x_5463_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object* v_msg_5464_){
_start:
{
lean_object* v___f_5465_; lean_object* v___f_5466_; lean_object* v___f_5467_; lean_object* v___f_5468_; lean_object* v___f_5469_; lean_object* v___f_5470_; lean_object* v___f_5471_; lean_object* v___x_5472_; lean_object* v___x_5473_; lean_object* v___x_5474_; lean_object* v___x_5475_; lean_object* v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; 
v___f_5465_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5466_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5467_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5468_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5469_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5470_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5471_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5472_, 0, v___f_5465_);
lean_ctor_set(v___x_5472_, 1, v___f_5466_);
v___x_5473_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5473_, 0, v___x_5472_);
lean_ctor_set(v___x_5473_, 1, v___f_5467_);
lean_ctor_set(v___x_5473_, 2, v___f_5468_);
lean_ctor_set(v___x_5473_, 3, v___f_5469_);
lean_ctor_set(v___x_5473_, 4, v___f_5470_);
v___x_5474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5474_, 0, v___x_5473_);
lean_ctor_set(v___x_5474_, 1, v___f_5471_);
v___x_5475_ = ((lean_object*)(l_Lean_Elab_instInhabitedFixedParamPerms_default));
v___x_5476_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0);
v___x_5477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5477_, 0, v___x_5475_);
lean_ctor_set(v___x_5477_, 1, v___x_5476_);
v___x_5478_ = l_instInhabitedOfMonad___redArg(v___x_5474_, v___x_5477_);
v___x_5479_ = lean_panic_fn_borrowed(v___x_5478_, v_msg_5464_);
lean_dec(v___x_5478_);
return v___x_5479_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5480_; lean_object* v___x_5481_; 
v___x_5480_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5481_, 0, v___x_5480_);
return v___x_5481_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object* v_msg_5482_){
_start:
{
lean_object* v___f_5483_; lean_object* v___f_5484_; lean_object* v___f_5485_; lean_object* v___f_5486_; lean_object* v___f_5487_; lean_object* v___f_5488_; lean_object* v___f_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; 
v___f_5483_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0));
v___f_5484_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1));
v___f_5485_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2));
v___f_5486_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3));
v___f_5487_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4));
v___f_5488_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5));
v___f_5489_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6));
v___x_5490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5490_, 0, v___f_5483_);
lean_ctor_set(v___x_5490_, 1, v___f_5484_);
v___x_5491_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5491_, 0, v___x_5490_);
lean_ctor_set(v___x_5491_, 1, v___f_5485_);
lean_ctor_set(v___x_5491_, 2, v___f_5486_);
lean_ctor_set(v___x_5491_, 3, v___f_5487_);
lean_ctor_set(v___x_5491_, 4, v___f_5488_);
v___x_5492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5492_, 0, v___x_5491_);
lean_ctor_set(v___x_5492_, 1, v___f_5489_);
v___x_5493_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0);
v___x_5494_ = l_instInhabitedOfMonad___redArg(v___x_5492_, v___x_5493_);
v___x_5495_ = lean_panic_fn_borrowed(v___x_5494_, v_msg_5482_);
lean_dec(v___x_5494_);
return v___x_5495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object* v___x_5496_, uint8_t v___x_5497_, lean_object* v___x_5498_, lean_object* v___x_5499_, lean_object* v_as_5500_, size_t v_sz_5501_, size_t v_i_5502_, lean_object* v_b_5503_){
_start:
{
lean_object* v_a_5505_; uint8_t v___x_5509_; 
v___x_5509_ = lean_usize_dec_lt(v_i_5502_, v_sz_5501_);
if (v___x_5509_ == 0)
{
return v_b_5503_;
}
else
{
lean_object* v_fst_5510_; lean_object* v_snd_5511_; lean_object* v___x_5513_; uint8_t v_isShared_5514_; uint8_t v_isSharedCheck_5533_; 
v_fst_5510_ = lean_ctor_get(v_b_5503_, 0);
v_snd_5511_ = lean_ctor_get(v_b_5503_, 1);
v_isSharedCheck_5533_ = !lean_is_exclusive(v_b_5503_);
if (v_isSharedCheck_5533_ == 0)
{
v___x_5513_ = v_b_5503_;
v_isShared_5514_ = v_isSharedCheck_5533_;
goto v_resetjp_5512_;
}
else
{
lean_inc(v_snd_5511_);
lean_inc(v_fst_5510_);
lean_dec(v_b_5503_);
v___x_5513_ = lean_box(0);
v_isShared_5514_ = v_isSharedCheck_5533_;
goto v_resetjp_5512_;
}
v_resetjp_5512_:
{
lean_object* v___x_5519_; lean_object* v_a_5520_; lean_object* v___x_5521_; 
v___x_5519_ = lean_box(0);
v_a_5520_ = lean_array_uget_borrowed(v_as_5500_, v_i_5502_);
v___x_5521_ = lean_array_get_borrowed(v___x_5519_, v___x_5496_, v_a_5520_);
if (lean_obj_tag(v___x_5521_) == 1)
{
lean_object* v_val_5522_; uint8_t v___x_5523_; lean_object* v___x_5524_; lean_object* v___x_5525_; uint8_t v___x_5526_; 
v_val_5522_ = lean_ctor_get(v___x_5521_, 0);
v___x_5523_ = 0;
v___x_5524_ = lean_box(v___x_5523_);
v___x_5525_ = lean_array_get(v___x_5524_, v_fst_5510_, v_val_5522_);
lean_dec(v___x_5524_);
v___x_5526_ = lean_unbox(v___x_5525_);
lean_dec(v___x_5525_);
if (v___x_5526_ == 0)
{
if (v___x_5497_ == 0)
{
goto v___jp_5515_;
}
else
{
uint8_t v_changed_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; lean_object* v___x_5530_; lean_object* v___x_5531_; 
lean_del_object(v___x_5513_);
lean_dec(v_snd_5511_);
v_changed_5527_ = lean_nat_dec_eq(v___x_5498_, v___x_5499_);
v___x_5528_ = lean_box(v_changed_5527_);
v___x_5529_ = lean_array_set(v_fst_5510_, v_val_5522_, v___x_5528_);
v___x_5530_ = lean_box(v_changed_5527_);
v___x_5531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5531_, 0, v___x_5529_);
lean_ctor_set(v___x_5531_, 1, v___x_5530_);
v_a_5505_ = v___x_5531_;
goto v___jp_5504_;
}
}
else
{
goto v___jp_5515_;
}
}
else
{
lean_object* v___x_5532_; 
lean_del_object(v___x_5513_);
v___x_5532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5532_, 0, v_fst_5510_);
lean_ctor_set(v___x_5532_, 1, v_snd_5511_);
v_a_5505_ = v___x_5532_;
goto v___jp_5504_;
}
v___jp_5515_:
{
lean_object* v___x_5517_; 
if (v_isShared_5514_ == 0)
{
v___x_5517_ = v___x_5513_;
goto v_reusejp_5516_;
}
else
{
lean_object* v_reuseFailAlloc_5518_; 
v_reuseFailAlloc_5518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5518_, 0, v_fst_5510_);
lean_ctor_set(v_reuseFailAlloc_5518_, 1, v_snd_5511_);
v___x_5517_ = v_reuseFailAlloc_5518_;
goto v_reusejp_5516_;
}
v_reusejp_5516_:
{
v_a_5505_ = v___x_5517_;
goto v___jp_5504_;
}
}
}
}
v___jp_5504_:
{
size_t v___x_5506_; size_t v___x_5507_; 
v___x_5506_ = ((size_t)1ULL);
v___x_5507_ = lean_usize_add(v_i_5502_, v___x_5506_);
v_i_5502_ = v___x_5507_;
v_b_5503_ = v_a_5505_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object* v___x_5534_, lean_object* v___x_5535_, lean_object* v___x_5536_, lean_object* v___x_5537_, lean_object* v_as_5538_, lean_object* v_sz_5539_, lean_object* v_i_5540_, lean_object* v_b_5541_){
_start:
{
uint8_t v___x_7058__boxed_5542_; size_t v_sz_boxed_5543_; size_t v_i_boxed_5544_; lean_object* v_res_5545_; 
v___x_7058__boxed_5542_ = lean_unbox(v___x_5535_);
v_sz_boxed_5543_ = lean_unbox_usize(v_sz_5539_);
lean_dec(v_sz_5539_);
v_i_boxed_5544_ = lean_unbox_usize(v_i_5540_);
lean_dec(v_i_5540_);
v_res_5545_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5534_, v___x_7058__boxed_5542_, v___x_5536_, v___x_5537_, v_as_5538_, v_sz_boxed_5543_, v_i_boxed_5544_, v_b_5541_);
lean_dec_ref(v_as_5538_);
lean_dec(v___x_5537_);
lean_dec(v___x_5536_);
lean_dec_ref(v___x_5534_);
return v_res_5545_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg(lean_object* v_upperBound_5546_, lean_object* v___x_5547_, lean_object* v_fixedParamPerms_5548_, lean_object* v_next_5549_, lean_object* v___x_5550_, lean_object* v___x_5551_, lean_object* v_a_5552_, lean_object* v_b_5553_){
_start:
{
lean_object* v_a_5555_; uint8_t v___x_5559_; 
v___x_5559_ = lean_nat_dec_lt(v_a_5552_, v_upperBound_5546_);
if (v___x_5559_ == 0)
{
lean_dec(v_a_5552_);
return v_b_5553_;
}
else
{
lean_object* v_fst_5560_; lean_object* v_snd_5561_; lean_object* v___x_5563_; uint8_t v_isShared_5564_; uint8_t v_isSharedCheck_5597_; 
v_fst_5560_ = lean_ctor_get(v_b_5553_, 0);
v_snd_5561_ = lean_ctor_get(v_b_5553_, 1);
v_isSharedCheck_5597_ = !lean_is_exclusive(v_b_5553_);
if (v_isSharedCheck_5597_ == 0)
{
v___x_5563_ = v_b_5553_;
v_isShared_5564_ = v_isSharedCheck_5597_;
goto v_resetjp_5562_;
}
else
{
lean_inc(v_snd_5561_);
lean_inc(v_fst_5560_);
lean_dec(v_b_5553_);
v___x_5563_ = lean_box(0);
v_isShared_5564_ = v_isSharedCheck_5597_;
goto v_resetjp_5562_;
}
v_resetjp_5562_:
{
lean_object* v___x_5565_; 
v___x_5565_ = lean_array_fget_borrowed(v___x_5547_, v_a_5552_);
if (lean_obj_tag(v___x_5565_) == 1)
{
lean_object* v_val_5566_; uint8_t v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; uint8_t v___x_5570_; 
v_val_5566_ = lean_ctor_get(v___x_5565_, 0);
v___x_5567_ = 0;
v___x_5568_ = lean_box(v___x_5567_);
v___x_5569_ = lean_array_get(v___x_5568_, v_fst_5560_, v_val_5566_);
lean_dec(v___x_5568_);
v___x_5570_ = lean_unbox(v___x_5569_);
if (v___x_5570_ == 0)
{
lean_object* v___x_5572_; 
lean_dec(v___x_5569_);
if (v_isShared_5564_ == 0)
{
v___x_5572_ = v___x_5563_;
goto v_reusejp_5571_;
}
else
{
lean_object* v_reuseFailAlloc_5573_; 
v_reuseFailAlloc_5573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5573_, 0, v_fst_5560_);
lean_ctor_set(v_reuseFailAlloc_5573_, 1, v_snd_5561_);
v___x_5572_ = v_reuseFailAlloc_5573_;
goto v_reusejp_5571_;
}
v_reusejp_5571_:
{
v_a_5555_ = v___x_5572_;
goto v___jp_5554_;
}
}
else
{
lean_object* v_revDeps_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5579_; 
v_revDeps_5574_ = lean_ctor_get(v_fixedParamPerms_5548_, 2);
v___x_5575_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5576_ = lean_array_get_borrowed(v___x_5575_, v_revDeps_5574_, v_next_5549_);
v___x_5577_ = lean_array_get_borrowed(v___x_5575_, v___x_5576_, v_a_5552_);
if (v_isShared_5564_ == 0)
{
v___x_5579_ = v___x_5563_;
goto v_reusejp_5578_;
}
else
{
lean_object* v_reuseFailAlloc_5593_; 
v_reuseFailAlloc_5593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5593_, 0, v_fst_5560_);
lean_ctor_set(v_reuseFailAlloc_5593_, 1, v_snd_5561_);
v___x_5579_ = v_reuseFailAlloc_5593_;
goto v_reusejp_5578_;
}
v_reusejp_5578_:
{
size_t v_sz_5580_; size_t v___x_5581_; uint8_t v___x_5582_; lean_object* v___x_5583_; lean_object* v_fst_5584_; lean_object* v_snd_5585_; lean_object* v___x_5587_; uint8_t v_isShared_5588_; uint8_t v_isSharedCheck_5592_; 
v_sz_5580_ = lean_array_size(v___x_5577_);
v___x_5581_ = ((size_t)0ULL);
v___x_5582_ = lean_unbox(v___x_5569_);
lean_dec(v___x_5569_);
v___x_5583_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5547_, v___x_5582_, v___x_5550_, v___x_5551_, v___x_5577_, v_sz_5580_, v___x_5581_, v___x_5579_);
v_fst_5584_ = lean_ctor_get(v___x_5583_, 0);
v_snd_5585_ = lean_ctor_get(v___x_5583_, 1);
v_isSharedCheck_5592_ = !lean_is_exclusive(v___x_5583_);
if (v_isSharedCheck_5592_ == 0)
{
v___x_5587_ = v___x_5583_;
v_isShared_5588_ = v_isSharedCheck_5592_;
goto v_resetjp_5586_;
}
else
{
lean_inc(v_snd_5585_);
lean_inc(v_fst_5584_);
lean_dec(v___x_5583_);
v___x_5587_ = lean_box(0);
v_isShared_5588_ = v_isSharedCheck_5592_;
goto v_resetjp_5586_;
}
v_resetjp_5586_:
{
lean_object* v___x_5590_; 
if (v_isShared_5588_ == 0)
{
v___x_5590_ = v___x_5587_;
goto v_reusejp_5589_;
}
else
{
lean_object* v_reuseFailAlloc_5591_; 
v_reuseFailAlloc_5591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5591_, 0, v_fst_5584_);
lean_ctor_set(v_reuseFailAlloc_5591_, 1, v_snd_5585_);
v___x_5590_ = v_reuseFailAlloc_5591_;
goto v_reusejp_5589_;
}
v_reusejp_5589_:
{
v_a_5555_ = v___x_5590_;
goto v___jp_5554_;
}
}
}
}
}
else
{
lean_object* v___x_5595_; 
if (v_isShared_5564_ == 0)
{
v___x_5595_ = v___x_5563_;
goto v_reusejp_5594_;
}
else
{
lean_object* v_reuseFailAlloc_5596_; 
v_reuseFailAlloc_5596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5596_, 0, v_fst_5560_);
lean_ctor_set(v_reuseFailAlloc_5596_, 1, v_snd_5561_);
v___x_5595_ = v_reuseFailAlloc_5596_;
goto v_reusejp_5594_;
}
v_reusejp_5594_:
{
v_a_5555_ = v___x_5595_;
goto v___jp_5554_;
}
}
}
}
v___jp_5554_:
{
lean_object* v___x_5556_; lean_object* v___x_5557_; 
v___x_5556_ = lean_unsigned_to_nat(1u);
v___x_5557_ = lean_nat_add(v_a_5552_, v___x_5556_);
lean_dec(v_a_5552_);
v_a_5552_ = v___x_5557_;
v_b_5553_ = v_a_5555_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg___boxed(lean_object* v_upperBound_5598_, lean_object* v___x_5599_, lean_object* v_fixedParamPerms_5600_, lean_object* v_next_5601_, lean_object* v___x_5602_, lean_object* v___x_5603_, lean_object* v_a_5604_, lean_object* v_b_5605_){
_start:
{
lean_object* v_res_5606_; 
v_res_5606_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg(v_upperBound_5598_, v___x_5599_, v_fixedParamPerms_5600_, v_next_5601_, v___x_5602_, v___x_5603_, v_a_5604_, v_b_5605_);
lean_dec(v___x_5603_);
lean_dec(v___x_5602_);
lean_dec(v_next_5601_);
lean_dec_ref(v_fixedParamPerms_5600_);
lean_dec_ref(v___x_5599_);
lean_dec(v_upperBound_5598_);
return v_res_5606_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object* v_upperBound_5607_, lean_object* v___x_5608_, lean_object* v___x_5609_, lean_object* v___x_5610_, lean_object* v_fixedParamPerms_5611_, lean_object* v_next_5612_, lean_object* v_a_5613_, lean_object* v_b_5614_){
_start:
{
lean_object* v_a_5616_; uint8_t v___x_5620_; 
v___x_5620_ = lean_nat_dec_lt(v_a_5613_, v_upperBound_5607_);
if (v___x_5620_ == 0)
{
return v_b_5614_;
}
else
{
lean_object* v_fst_5621_; lean_object* v_snd_5622_; lean_object* v___x_5624_; uint8_t v_isShared_5625_; uint8_t v_isSharedCheck_5658_; 
v_fst_5621_ = lean_ctor_get(v_b_5614_, 0);
v_snd_5622_ = lean_ctor_get(v_b_5614_, 1);
v_isSharedCheck_5658_ = !lean_is_exclusive(v_b_5614_);
if (v_isSharedCheck_5658_ == 0)
{
v___x_5624_ = v_b_5614_;
v_isShared_5625_ = v_isSharedCheck_5658_;
goto v_resetjp_5623_;
}
else
{
lean_inc(v_snd_5622_);
lean_inc(v_fst_5621_);
lean_dec(v_b_5614_);
v___x_5624_ = lean_box(0);
v_isShared_5625_ = v_isSharedCheck_5658_;
goto v_resetjp_5623_;
}
v_resetjp_5623_:
{
lean_object* v___x_5626_; 
v___x_5626_ = lean_array_fget_borrowed(v___x_5608_, v_a_5613_);
if (lean_obj_tag(v___x_5626_) == 1)
{
lean_object* v_val_5627_; uint8_t v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; uint8_t v___x_5631_; 
v_val_5627_ = lean_ctor_get(v___x_5626_, 0);
v___x_5628_ = 0;
v___x_5629_ = lean_box(v___x_5628_);
v___x_5630_ = lean_array_get(v___x_5629_, v_fst_5621_, v_val_5627_);
lean_dec(v___x_5629_);
v___x_5631_ = lean_unbox(v___x_5630_);
if (v___x_5631_ == 0)
{
lean_object* v___x_5633_; 
lean_dec(v___x_5630_);
if (v_isShared_5625_ == 0)
{
v___x_5633_ = v___x_5624_;
goto v_reusejp_5632_;
}
else
{
lean_object* v_reuseFailAlloc_5634_; 
v_reuseFailAlloc_5634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5634_, 0, v_fst_5621_);
lean_ctor_set(v_reuseFailAlloc_5634_, 1, v_snd_5622_);
v___x_5633_ = v_reuseFailAlloc_5634_;
goto v_reusejp_5632_;
}
v_reusejp_5632_:
{
v_a_5616_ = v___x_5633_;
goto v___jp_5615_;
}
}
else
{
lean_object* v_revDeps_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5640_; 
v_revDeps_5635_ = lean_ctor_get(v_fixedParamPerms_5611_, 2);
v___x_5636_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_5637_ = lean_array_get_borrowed(v___x_5636_, v_revDeps_5635_, v_next_5612_);
v___x_5638_ = lean_array_get_borrowed(v___x_5636_, v___x_5637_, v_a_5613_);
if (v_isShared_5625_ == 0)
{
v___x_5640_ = v___x_5624_;
goto v_reusejp_5639_;
}
else
{
lean_object* v_reuseFailAlloc_5654_; 
v_reuseFailAlloc_5654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5654_, 0, v_fst_5621_);
lean_ctor_set(v_reuseFailAlloc_5654_, 1, v_snd_5622_);
v___x_5640_ = v_reuseFailAlloc_5654_;
goto v_reusejp_5639_;
}
v_reusejp_5639_:
{
size_t v_sz_5641_; size_t v___x_5642_; uint8_t v___x_5643_; lean_object* v___x_5644_; lean_object* v_fst_5645_; lean_object* v_snd_5646_; lean_object* v___x_5648_; uint8_t v_isShared_5649_; uint8_t v_isSharedCheck_5653_; 
v_sz_5641_ = lean_array_size(v___x_5638_);
v___x_5642_ = ((size_t)0ULL);
v___x_5643_ = lean_unbox(v___x_5630_);
lean_dec(v___x_5630_);
v___x_5644_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5608_, v___x_5643_, v___x_5609_, v___x_5610_, v___x_5638_, v_sz_5641_, v___x_5642_, v___x_5640_);
v_fst_5645_ = lean_ctor_get(v___x_5644_, 0);
v_snd_5646_ = lean_ctor_get(v___x_5644_, 1);
v_isSharedCheck_5653_ = !lean_is_exclusive(v___x_5644_);
if (v_isSharedCheck_5653_ == 0)
{
v___x_5648_ = v___x_5644_;
v_isShared_5649_ = v_isSharedCheck_5653_;
goto v_resetjp_5647_;
}
else
{
lean_inc(v_snd_5646_);
lean_inc(v_fst_5645_);
lean_dec(v___x_5644_);
v___x_5648_ = lean_box(0);
v_isShared_5649_ = v_isSharedCheck_5653_;
goto v_resetjp_5647_;
}
v_resetjp_5647_:
{
lean_object* v___x_5651_; 
if (v_isShared_5649_ == 0)
{
v___x_5651_ = v___x_5648_;
goto v_reusejp_5650_;
}
else
{
lean_object* v_reuseFailAlloc_5652_; 
v_reuseFailAlloc_5652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5652_, 0, v_fst_5645_);
lean_ctor_set(v_reuseFailAlloc_5652_, 1, v_snd_5646_);
v___x_5651_ = v_reuseFailAlloc_5652_;
goto v_reusejp_5650_;
}
v_reusejp_5650_:
{
v_a_5616_ = v___x_5651_;
goto v___jp_5615_;
}
}
}
}
}
else
{
lean_object* v___x_5656_; 
if (v_isShared_5625_ == 0)
{
v___x_5656_ = v___x_5624_;
goto v_reusejp_5655_;
}
else
{
lean_object* v_reuseFailAlloc_5657_; 
v_reuseFailAlloc_5657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5657_, 0, v_fst_5621_);
lean_ctor_set(v_reuseFailAlloc_5657_, 1, v_snd_5622_);
v___x_5656_ = v_reuseFailAlloc_5657_;
goto v_reusejp_5655_;
}
v_reusejp_5655_:
{
v_a_5616_ = v___x_5656_;
goto v___jp_5615_;
}
}
}
}
v___jp_5615_:
{
lean_object* v___x_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; 
v___x_5617_ = lean_unsigned_to_nat(1u);
v___x_5618_ = lean_nat_add(v_a_5613_, v___x_5617_);
v___x_5619_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg(v_upperBound_5607_, v___x_5608_, v_fixedParamPerms_5611_, v_next_5612_, v___x_5609_, v___x_5610_, v___x_5618_, v_a_5616_);
return v___x_5619_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object* v_upperBound_5659_, lean_object* v___x_5660_, lean_object* v___x_5661_, lean_object* v___x_5662_, lean_object* v_fixedParamPerms_5663_, lean_object* v_next_5664_, lean_object* v_a_5665_, lean_object* v_b_5666_){
_start:
{
lean_object* v_res_5667_; 
v_res_5667_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_5659_, v___x_5660_, v___x_5661_, v___x_5662_, v_fixedParamPerms_5663_, v_next_5664_, v_a_5665_, v_b_5666_);
lean_dec(v_a_5665_);
lean_dec(v_next_5664_);
lean_dec_ref(v_fixedParamPerms_5663_);
lean_dec(v___x_5662_);
lean_dec(v___x_5661_);
lean_dec_ref(v___x_5660_);
lean_dec(v_upperBound_5659_);
return v_res_5667_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object* v_upperBound_5668_, lean_object* v___x_5669_, lean_object* v___x_5670_, lean_object* v___x_5671_, lean_object* v_fixedParamPerms_5672_, lean_object* v_a_5673_, lean_object* v_b_5674_){
_start:
{
uint8_t v___x_5675_; 
v___x_5675_ = lean_nat_dec_lt(v_a_5673_, v_upperBound_5668_);
if (v___x_5675_ == 0)
{
lean_dec(v_a_5673_);
return v_b_5674_;
}
else
{
lean_object* v_fst_5676_; lean_object* v_snd_5677_; lean_object* v___x_5679_; uint8_t v_isShared_5680_; uint8_t v_isSharedCheck_5700_; 
v_fst_5676_ = lean_ctor_get(v_b_5674_, 0);
v_snd_5677_ = lean_ctor_get(v_b_5674_, 1);
v_isSharedCheck_5700_ = !lean_is_exclusive(v_b_5674_);
if (v_isSharedCheck_5700_ == 0)
{
v___x_5679_ = v_b_5674_;
v_isShared_5680_ = v_isSharedCheck_5700_;
goto v_resetjp_5678_;
}
else
{
lean_inc(v_snd_5677_);
lean_inc(v_fst_5676_);
lean_dec(v_b_5674_);
v___x_5679_ = lean_box(0);
v_isShared_5680_ = v_isSharedCheck_5700_;
goto v_resetjp_5678_;
}
v_resetjp_5678_:
{
lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5685_; 
v___x_5681_ = lean_array_fget_borrowed(v___x_5669_, v_a_5673_);
v___x_5682_ = lean_array_get_size(v___x_5681_);
v___x_5683_ = lean_unsigned_to_nat(0u);
if (v_isShared_5680_ == 0)
{
v___x_5685_ = v___x_5679_;
goto v_reusejp_5684_;
}
else
{
lean_object* v_reuseFailAlloc_5699_; 
v_reuseFailAlloc_5699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5699_, 0, v_fst_5676_);
lean_ctor_set(v_reuseFailAlloc_5699_, 1, v_snd_5677_);
v___x_5685_ = v_reuseFailAlloc_5699_;
goto v_reusejp_5684_;
}
v_reusejp_5684_:
{
lean_object* v___x_5686_; lean_object* v_fst_5687_; lean_object* v_snd_5688_; lean_object* v___x_5690_; uint8_t v_isShared_5691_; uint8_t v_isSharedCheck_5698_; 
v___x_5686_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v___x_5682_, v___x_5681_, v___x_5670_, v___x_5671_, v_fixedParamPerms_5672_, v_a_5673_, v___x_5683_, v___x_5685_);
v_fst_5687_ = lean_ctor_get(v___x_5686_, 0);
v_snd_5688_ = lean_ctor_get(v___x_5686_, 1);
v_isSharedCheck_5698_ = !lean_is_exclusive(v___x_5686_);
if (v_isSharedCheck_5698_ == 0)
{
v___x_5690_ = v___x_5686_;
v_isShared_5691_ = v_isSharedCheck_5698_;
goto v_resetjp_5689_;
}
else
{
lean_inc(v_snd_5688_);
lean_inc(v_fst_5687_);
lean_dec(v___x_5686_);
v___x_5690_ = lean_box(0);
v_isShared_5691_ = v_isSharedCheck_5698_;
goto v_resetjp_5689_;
}
v_resetjp_5689_:
{
lean_object* v___x_5693_; 
if (v_isShared_5691_ == 0)
{
v___x_5693_ = v___x_5690_;
goto v_reusejp_5692_;
}
else
{
lean_object* v_reuseFailAlloc_5697_; 
v_reuseFailAlloc_5697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5697_, 0, v_fst_5687_);
lean_ctor_set(v_reuseFailAlloc_5697_, 1, v_snd_5688_);
v___x_5693_ = v_reuseFailAlloc_5697_;
goto v_reusejp_5692_;
}
v_reusejp_5692_:
{
lean_object* v___x_5694_; lean_object* v___x_5695_; 
v___x_5694_ = lean_unsigned_to_nat(1u);
v___x_5695_ = lean_nat_add(v_a_5673_, v___x_5694_);
lean_dec(v_a_5673_);
v_a_5673_ = v___x_5695_;
v_b_5674_ = v___x_5693_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object* v_upperBound_5701_, lean_object* v___x_5702_, lean_object* v___x_5703_, lean_object* v___x_5704_, lean_object* v_fixedParamPerms_5705_, lean_object* v_a_5706_, lean_object* v_b_5707_){
_start:
{
lean_object* v_res_5708_; 
v_res_5708_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_5701_, v___x_5702_, v___x_5703_, v___x_5704_, v_fixedParamPerms_5705_, v_a_5706_, v_b_5707_);
lean_dec_ref(v_fixedParamPerms_5705_);
lean_dec(v___x_5704_);
lean_dec(v___x_5703_);
lean_dec_ref(v___x_5702_);
lean_dec(v_upperBound_5701_);
return v_res_5708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(lean_object* v___x_5709_, lean_object* v___x_5710_, lean_object* v___x_5711_, lean_object* v_fixedParamPerms_5712_, lean_object* v_a_5713_){
_start:
{
lean_object* v_snd_5714_; uint8_t v___x_5715_; 
v_snd_5714_ = lean_ctor_get(v_a_5713_, 1);
v___x_5715_ = lean_unbox(v_snd_5714_);
if (v___x_5715_ == 0)
{
lean_object* v_fst_5716_; lean_object* v___x_5718_; uint8_t v_isShared_5719_; uint8_t v_isSharedCheck_5723_; 
lean_inc(v_snd_5714_);
v_fst_5716_ = lean_ctor_get(v_a_5713_, 0);
v_isSharedCheck_5723_ = !lean_is_exclusive(v_a_5713_);
if (v_isSharedCheck_5723_ == 0)
{
lean_object* v_unused_5724_; 
v_unused_5724_ = lean_ctor_get(v_a_5713_, 1);
lean_dec(v_unused_5724_);
v___x_5718_ = v_a_5713_;
v_isShared_5719_ = v_isSharedCheck_5723_;
goto v_resetjp_5717_;
}
else
{
lean_inc(v_fst_5716_);
lean_dec(v_a_5713_);
v___x_5718_ = lean_box(0);
v_isShared_5719_ = v_isSharedCheck_5723_;
goto v_resetjp_5717_;
}
v_resetjp_5717_:
{
lean_object* v___x_5721_; 
if (v_isShared_5719_ == 0)
{
v___x_5721_ = v___x_5718_;
goto v_reusejp_5720_;
}
else
{
lean_object* v_reuseFailAlloc_5722_; 
v_reuseFailAlloc_5722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5722_, 0, v_fst_5716_);
lean_ctor_set(v_reuseFailAlloc_5722_, 1, v_snd_5714_);
v___x_5721_ = v_reuseFailAlloc_5722_;
goto v_reusejp_5720_;
}
v_reusejp_5720_:
{
return v___x_5721_;
}
}
}
else
{
lean_object* v_fst_5725_; lean_object* v___x_5727_; uint8_t v_isShared_5728_; uint8_t v_isSharedCheck_5746_; 
v_fst_5725_ = lean_ctor_get(v_a_5713_, 0);
v_isSharedCheck_5746_ = !lean_is_exclusive(v_a_5713_);
if (v_isSharedCheck_5746_ == 0)
{
lean_object* v_unused_5747_; 
v_unused_5747_ = lean_ctor_get(v_a_5713_, 1);
lean_dec(v_unused_5747_);
v___x_5727_ = v_a_5713_;
v_isShared_5728_ = v_isSharedCheck_5746_;
goto v_resetjp_5726_;
}
else
{
lean_inc(v_fst_5725_);
lean_dec(v_a_5713_);
v___x_5727_ = lean_box(0);
v_isShared_5728_ = v_isSharedCheck_5746_;
goto v_resetjp_5726_;
}
v_resetjp_5726_:
{
uint8_t v_changed_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5733_; 
v_changed_5729_ = 0;
v___x_5730_ = lean_unsigned_to_nat(0u);
v___x_5731_ = lean_box(v_changed_5729_);
if (v_isShared_5728_ == 0)
{
lean_ctor_set(v___x_5727_, 1, v___x_5731_);
v___x_5733_ = v___x_5727_;
goto v_reusejp_5732_;
}
else
{
lean_object* v_reuseFailAlloc_5745_; 
v_reuseFailAlloc_5745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5745_, 0, v_fst_5725_);
lean_ctor_set(v_reuseFailAlloc_5745_, 1, v___x_5731_);
v___x_5733_ = v_reuseFailAlloc_5745_;
goto v_reusejp_5732_;
}
v_reusejp_5732_:
{
lean_object* v___x_5734_; lean_object* v_fst_5735_; lean_object* v_snd_5736_; lean_object* v___x_5738_; uint8_t v_isShared_5739_; uint8_t v_isSharedCheck_5744_; 
v___x_5734_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v___x_5709_, v___x_5710_, v___x_5711_, v___x_5709_, v_fixedParamPerms_5712_, v___x_5730_, v___x_5733_);
v_fst_5735_ = lean_ctor_get(v___x_5734_, 0);
v_snd_5736_ = lean_ctor_get(v___x_5734_, 1);
v_isSharedCheck_5744_ = !lean_is_exclusive(v___x_5734_);
if (v_isSharedCheck_5744_ == 0)
{
v___x_5738_ = v___x_5734_;
v_isShared_5739_ = v_isSharedCheck_5744_;
goto v_resetjp_5737_;
}
else
{
lean_inc(v_snd_5736_);
lean_inc(v_fst_5735_);
lean_dec(v___x_5734_);
v___x_5738_ = lean_box(0);
v_isShared_5739_ = v_isSharedCheck_5744_;
goto v_resetjp_5737_;
}
v_resetjp_5737_:
{
lean_object* v___x_5741_; 
if (v_isShared_5739_ == 0)
{
v___x_5741_ = v___x_5738_;
goto v_reusejp_5740_;
}
else
{
lean_object* v_reuseFailAlloc_5743_; 
v_reuseFailAlloc_5743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5743_, 0, v_fst_5735_);
lean_ctor_set(v_reuseFailAlloc_5743_, 1, v_snd_5736_);
v___x_5741_ = v_reuseFailAlloc_5743_;
goto v_reusejp_5740_;
}
v_reusejp_5740_:
{
v_a_5713_ = v___x_5741_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg___boxed(lean_object* v___x_5748_, lean_object* v___x_5749_, lean_object* v___x_5750_, lean_object* v_fixedParamPerms_5751_, lean_object* v_a_5752_){
_start:
{
lean_object* v_res_5753_; 
v_res_5753_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_5748_, v___x_5749_, v___x_5750_, v_fixedParamPerms_5751_, v_a_5752_);
lean_dec_ref(v_fixedParamPerms_5751_);
lean_dec(v___x_5750_);
lean_dec_ref(v___x_5749_);
lean_dec(v___x_5748_);
return v_res_5753_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object* v_upperBound_5754_, lean_object* v_a_5755_, lean_object* v_b_5756_){
_start:
{
lean_object* v_a_5758_; uint8_t v___x_5762_; 
v___x_5762_ = lean_nat_dec_lt(v_a_5755_, v_upperBound_5754_);
if (v___x_5762_ == 0)
{
lean_dec(v_a_5755_);
return v_b_5756_;
}
else
{
lean_object* v_snd_5763_; lean_object* v_snd_5764_; lean_object* v_snd_5765_; lean_object* v_snd_5766_; lean_object* v_fst_5767_; lean_object* v___x_5769_; uint8_t v_isShared_5770_; uint8_t v_isSharedCheck_5879_; 
v_snd_5763_ = lean_ctor_get(v_b_5756_, 1);
lean_inc(v_snd_5763_);
v_snd_5764_ = lean_ctor_get(v_snd_5763_, 1);
lean_inc(v_snd_5764_);
v_snd_5765_ = lean_ctor_get(v_snd_5764_, 1);
lean_inc(v_snd_5765_);
v_snd_5766_ = lean_ctor_get(v_snd_5765_, 1);
lean_inc(v_snd_5766_);
v_fst_5767_ = lean_ctor_get(v_b_5756_, 0);
v_isSharedCheck_5879_ = !lean_is_exclusive(v_b_5756_);
if (v_isSharedCheck_5879_ == 0)
{
lean_object* v_unused_5880_; 
v_unused_5880_ = lean_ctor_get(v_b_5756_, 1);
lean_dec(v_unused_5880_);
v___x_5769_ = v_b_5756_;
v_isShared_5770_ = v_isSharedCheck_5879_;
goto v_resetjp_5768_;
}
else
{
lean_inc(v_fst_5767_);
lean_dec(v_b_5756_);
v___x_5769_ = lean_box(0);
v_isShared_5770_ = v_isSharedCheck_5879_;
goto v_resetjp_5768_;
}
v_resetjp_5768_:
{
lean_object* v_fst_5771_; lean_object* v___x_5773_; uint8_t v_isShared_5774_; uint8_t v_isSharedCheck_5877_; 
v_fst_5771_ = lean_ctor_get(v_snd_5763_, 0);
v_isSharedCheck_5877_ = !lean_is_exclusive(v_snd_5763_);
if (v_isSharedCheck_5877_ == 0)
{
lean_object* v_unused_5878_; 
v_unused_5878_ = lean_ctor_get(v_snd_5763_, 1);
lean_dec(v_unused_5878_);
v___x_5773_ = v_snd_5763_;
v_isShared_5774_ = v_isSharedCheck_5877_;
goto v_resetjp_5772_;
}
else
{
lean_inc(v_fst_5771_);
lean_dec(v_snd_5763_);
v___x_5773_ = lean_box(0);
v_isShared_5774_ = v_isSharedCheck_5877_;
goto v_resetjp_5772_;
}
v_resetjp_5772_:
{
lean_object* v_fst_5775_; lean_object* v___x_5777_; uint8_t v_isShared_5778_; uint8_t v_isSharedCheck_5875_; 
v_fst_5775_ = lean_ctor_get(v_snd_5764_, 0);
v_isSharedCheck_5875_ = !lean_is_exclusive(v_snd_5764_);
if (v_isSharedCheck_5875_ == 0)
{
lean_object* v_unused_5876_; 
v_unused_5876_ = lean_ctor_get(v_snd_5764_, 1);
lean_dec(v_unused_5876_);
v___x_5777_ = v_snd_5764_;
v_isShared_5778_ = v_isSharedCheck_5875_;
goto v_resetjp_5776_;
}
else
{
lean_inc(v_fst_5775_);
lean_dec(v_snd_5764_);
v___x_5777_ = lean_box(0);
v_isShared_5778_ = v_isSharedCheck_5875_;
goto v_resetjp_5776_;
}
v_resetjp_5776_:
{
lean_object* v_fst_5779_; lean_object* v___x_5781_; uint8_t v_isShared_5782_; uint8_t v_isSharedCheck_5873_; 
v_fst_5779_ = lean_ctor_get(v_snd_5765_, 0);
v_isSharedCheck_5873_ = !lean_is_exclusive(v_snd_5765_);
if (v_isSharedCheck_5873_ == 0)
{
lean_object* v_unused_5874_; 
v_unused_5874_ = lean_ctor_get(v_snd_5765_, 1);
lean_dec(v_unused_5874_);
v___x_5781_ = v_snd_5765_;
v_isShared_5782_ = v_isSharedCheck_5873_;
goto v_resetjp_5780_;
}
else
{
lean_inc(v_fst_5779_);
lean_dec(v_snd_5765_);
v___x_5781_ = lean_box(0);
v_isShared_5782_ = v_isSharedCheck_5873_;
goto v_resetjp_5780_;
}
v_resetjp_5780_:
{
lean_object* v_array_5783_; lean_object* v_start_5784_; lean_object* v_stop_5785_; uint8_t v___x_5786_; 
v_array_5783_ = lean_ctor_get(v_snd_5766_, 0);
v_start_5784_ = lean_ctor_get(v_snd_5766_, 1);
v_stop_5785_ = lean_ctor_get(v_snd_5766_, 2);
v___x_5786_ = lean_nat_dec_lt(v_start_5784_, v_stop_5785_);
if (v___x_5786_ == 0)
{
lean_object* v___x_5788_; 
lean_dec(v_a_5755_);
if (v_isShared_5782_ == 0)
{
v___x_5788_ = v___x_5781_;
goto v_reusejp_5787_;
}
else
{
lean_object* v_reuseFailAlloc_5798_; 
v_reuseFailAlloc_5798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5798_, 0, v_fst_5779_);
lean_ctor_set(v_reuseFailAlloc_5798_, 1, v_snd_5766_);
v___x_5788_ = v_reuseFailAlloc_5798_;
goto v_reusejp_5787_;
}
v_reusejp_5787_:
{
lean_object* v___x_5790_; 
if (v_isShared_5778_ == 0)
{
lean_ctor_set(v___x_5777_, 1, v___x_5788_);
v___x_5790_ = v___x_5777_;
goto v_reusejp_5789_;
}
else
{
lean_object* v_reuseFailAlloc_5797_; 
v_reuseFailAlloc_5797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5797_, 0, v_fst_5775_);
lean_ctor_set(v_reuseFailAlloc_5797_, 1, v___x_5788_);
v___x_5790_ = v_reuseFailAlloc_5797_;
goto v_reusejp_5789_;
}
v_reusejp_5789_:
{
lean_object* v___x_5792_; 
if (v_isShared_5774_ == 0)
{
lean_ctor_set(v___x_5773_, 1, v___x_5790_);
v___x_5792_ = v___x_5773_;
goto v_reusejp_5791_;
}
else
{
lean_object* v_reuseFailAlloc_5796_; 
v_reuseFailAlloc_5796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5796_, 0, v_fst_5771_);
lean_ctor_set(v_reuseFailAlloc_5796_, 1, v___x_5790_);
v___x_5792_ = v_reuseFailAlloc_5796_;
goto v_reusejp_5791_;
}
v_reusejp_5791_:
{
lean_object* v___x_5794_; 
if (v_isShared_5770_ == 0)
{
lean_ctor_set(v___x_5769_, 1, v___x_5792_);
v___x_5794_ = v___x_5769_;
goto v_reusejp_5793_;
}
else
{
lean_object* v_reuseFailAlloc_5795_; 
v_reuseFailAlloc_5795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5795_, 0, v_fst_5767_);
lean_ctor_set(v_reuseFailAlloc_5795_, 1, v___x_5792_);
v___x_5794_ = v_reuseFailAlloc_5795_;
goto v_reusejp_5793_;
}
v_reusejp_5793_:
{
return v___x_5794_;
}
}
}
}
}
else
{
lean_object* v___x_5800_; uint8_t v_isShared_5801_; uint8_t v_isSharedCheck_5869_; 
lean_inc(v_stop_5785_);
lean_inc(v_start_5784_);
lean_inc_ref(v_array_5783_);
v_isSharedCheck_5869_ = !lean_is_exclusive(v_snd_5766_);
if (v_isSharedCheck_5869_ == 0)
{
lean_object* v_unused_5870_; lean_object* v_unused_5871_; lean_object* v_unused_5872_; 
v_unused_5870_ = lean_ctor_get(v_snd_5766_, 2);
lean_dec(v_unused_5870_);
v_unused_5871_ = lean_ctor_get(v_snd_5766_, 1);
lean_dec(v_unused_5871_);
v_unused_5872_ = lean_ctor_get(v_snd_5766_, 0);
lean_dec(v_unused_5872_);
v___x_5800_ = v_snd_5766_;
v_isShared_5801_ = v_isSharedCheck_5869_;
goto v_resetjp_5799_;
}
else
{
lean_dec(v_snd_5766_);
v___x_5800_ = lean_box(0);
v_isShared_5801_ = v_isSharedCheck_5869_;
goto v_resetjp_5799_;
}
v_resetjp_5799_:
{
lean_object* v_array_5802_; lean_object* v_start_5803_; lean_object* v_stop_5804_; lean_object* v___x_5805_; lean_object* v___x_5806_; lean_object* v___x_5807_; lean_object* v___x_5809_; 
v_array_5802_ = lean_ctor_get(v_fst_5779_, 0);
v_start_5803_ = lean_ctor_get(v_fst_5779_, 1);
v_stop_5804_ = lean_ctor_get(v_fst_5779_, 2);
v___x_5805_ = lean_array_fget(v_array_5783_, v_start_5784_);
v___x_5806_ = lean_unsigned_to_nat(1u);
v___x_5807_ = lean_nat_add(v_start_5784_, v___x_5806_);
lean_dec(v_start_5784_);
if (v_isShared_5801_ == 0)
{
lean_ctor_set(v___x_5800_, 1, v___x_5807_);
v___x_5809_ = v___x_5800_;
goto v_reusejp_5808_;
}
else
{
lean_object* v_reuseFailAlloc_5868_; 
v_reuseFailAlloc_5868_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5868_, 0, v_array_5783_);
lean_ctor_set(v_reuseFailAlloc_5868_, 1, v___x_5807_);
lean_ctor_set(v_reuseFailAlloc_5868_, 2, v_stop_5785_);
v___x_5809_ = v_reuseFailAlloc_5868_;
goto v_reusejp_5808_;
}
v_reusejp_5808_:
{
uint8_t v___x_5810_; 
v___x_5810_ = lean_nat_dec_lt(v_start_5803_, v_stop_5804_);
if (v___x_5810_ == 0)
{
lean_object* v___x_5812_; 
lean_dec(v___x_5805_);
lean_dec(v_a_5755_);
if (v_isShared_5782_ == 0)
{
lean_ctor_set(v___x_5781_, 1, v___x_5809_);
v___x_5812_ = v___x_5781_;
goto v_reusejp_5811_;
}
else
{
lean_object* v_reuseFailAlloc_5822_; 
v_reuseFailAlloc_5822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5822_, 0, v_fst_5779_);
lean_ctor_set(v_reuseFailAlloc_5822_, 1, v___x_5809_);
v___x_5812_ = v_reuseFailAlloc_5822_;
goto v_reusejp_5811_;
}
v_reusejp_5811_:
{
lean_object* v___x_5814_; 
if (v_isShared_5778_ == 0)
{
lean_ctor_set(v___x_5777_, 1, v___x_5812_);
v___x_5814_ = v___x_5777_;
goto v_reusejp_5813_;
}
else
{
lean_object* v_reuseFailAlloc_5821_; 
v_reuseFailAlloc_5821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5821_, 0, v_fst_5775_);
lean_ctor_set(v_reuseFailAlloc_5821_, 1, v___x_5812_);
v___x_5814_ = v_reuseFailAlloc_5821_;
goto v_reusejp_5813_;
}
v_reusejp_5813_:
{
lean_object* v___x_5816_; 
if (v_isShared_5774_ == 0)
{
lean_ctor_set(v___x_5773_, 1, v___x_5814_);
v___x_5816_ = v___x_5773_;
goto v_reusejp_5815_;
}
else
{
lean_object* v_reuseFailAlloc_5820_; 
v_reuseFailAlloc_5820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5820_, 0, v_fst_5771_);
lean_ctor_set(v_reuseFailAlloc_5820_, 1, v___x_5814_);
v___x_5816_ = v_reuseFailAlloc_5820_;
goto v_reusejp_5815_;
}
v_reusejp_5815_:
{
lean_object* v___x_5818_; 
if (v_isShared_5770_ == 0)
{
lean_ctor_set(v___x_5769_, 1, v___x_5816_);
v___x_5818_ = v___x_5769_;
goto v_reusejp_5817_;
}
else
{
lean_object* v_reuseFailAlloc_5819_; 
v_reuseFailAlloc_5819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5819_, 0, v_fst_5767_);
lean_ctor_set(v_reuseFailAlloc_5819_, 1, v___x_5816_);
v___x_5818_ = v_reuseFailAlloc_5819_;
goto v_reusejp_5817_;
}
v_reusejp_5817_:
{
return v___x_5818_;
}
}
}
}
}
else
{
lean_object* v___x_5824_; uint8_t v_isShared_5825_; uint8_t v_isSharedCheck_5864_; 
lean_inc(v_stop_5804_);
lean_inc(v_start_5803_);
lean_inc_ref(v_array_5802_);
v_isSharedCheck_5864_ = !lean_is_exclusive(v_fst_5779_);
if (v_isSharedCheck_5864_ == 0)
{
lean_object* v_unused_5865_; lean_object* v_unused_5866_; lean_object* v_unused_5867_; 
v_unused_5865_ = lean_ctor_get(v_fst_5779_, 2);
lean_dec(v_unused_5865_);
v_unused_5866_ = lean_ctor_get(v_fst_5779_, 1);
lean_dec(v_unused_5866_);
v_unused_5867_ = lean_ctor_get(v_fst_5779_, 0);
lean_dec(v_unused_5867_);
v___x_5824_ = v_fst_5779_;
v_isShared_5825_ = v_isSharedCheck_5864_;
goto v_resetjp_5823_;
}
else
{
lean_dec(v_fst_5779_);
v___x_5824_ = lean_box(0);
v_isShared_5825_ = v_isSharedCheck_5864_;
goto v_resetjp_5823_;
}
v_resetjp_5823_:
{
lean_object* v___x_5826_; lean_object* v___x_5827_; lean_object* v___x_5829_; 
v___x_5826_ = lean_array_fget(v_array_5802_, v_start_5803_);
v___x_5827_ = lean_nat_add(v_start_5803_, v___x_5806_);
lean_dec(v_start_5803_);
if (v_isShared_5825_ == 0)
{
lean_ctor_set(v___x_5824_, 1, v___x_5827_);
v___x_5829_ = v___x_5824_;
goto v_reusejp_5828_;
}
else
{
lean_object* v_reuseFailAlloc_5863_; 
v_reuseFailAlloc_5863_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5863_, 0, v_array_5802_);
lean_ctor_set(v_reuseFailAlloc_5863_, 1, v___x_5827_);
lean_ctor_set(v_reuseFailAlloc_5863_, 2, v_stop_5804_);
v___x_5829_ = v_reuseFailAlloc_5863_;
goto v_reusejp_5828_;
}
v_reusejp_5828_:
{
uint8_t v___x_5830_; 
v___x_5830_ = lean_unbox(v___x_5826_);
lean_dec(v___x_5826_);
if (v___x_5830_ == 0)
{
lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5836_; 
v___x_5831_ = lean_array_get_size(v_fst_5775_);
v___x_5832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5832_, 0, v___x_5831_);
v___x_5833_ = lean_array_push(v_fst_5767_, v___x_5832_);
v___x_5834_ = lean_array_push(v_fst_5775_, v___x_5805_);
if (v_isShared_5782_ == 0)
{
lean_ctor_set(v___x_5781_, 1, v___x_5809_);
lean_ctor_set(v___x_5781_, 0, v___x_5829_);
v___x_5836_ = v___x_5781_;
goto v_reusejp_5835_;
}
else
{
lean_object* v_reuseFailAlloc_5846_; 
v_reuseFailAlloc_5846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5846_, 0, v___x_5829_);
lean_ctor_set(v_reuseFailAlloc_5846_, 1, v___x_5809_);
v___x_5836_ = v_reuseFailAlloc_5846_;
goto v_reusejp_5835_;
}
v_reusejp_5835_:
{
lean_object* v___x_5838_; 
if (v_isShared_5778_ == 0)
{
lean_ctor_set(v___x_5777_, 1, v___x_5836_);
lean_ctor_set(v___x_5777_, 0, v___x_5834_);
v___x_5838_ = v___x_5777_;
goto v_reusejp_5837_;
}
else
{
lean_object* v_reuseFailAlloc_5845_; 
v_reuseFailAlloc_5845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5845_, 0, v___x_5834_);
lean_ctor_set(v_reuseFailAlloc_5845_, 1, v___x_5836_);
v___x_5838_ = v_reuseFailAlloc_5845_;
goto v_reusejp_5837_;
}
v_reusejp_5837_:
{
lean_object* v___x_5840_; 
if (v_isShared_5774_ == 0)
{
lean_ctor_set(v___x_5773_, 1, v___x_5838_);
v___x_5840_ = v___x_5773_;
goto v_reusejp_5839_;
}
else
{
lean_object* v_reuseFailAlloc_5844_; 
v_reuseFailAlloc_5844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5844_, 0, v_fst_5771_);
lean_ctor_set(v_reuseFailAlloc_5844_, 1, v___x_5838_);
v___x_5840_ = v_reuseFailAlloc_5844_;
goto v_reusejp_5839_;
}
v_reusejp_5839_:
{
lean_object* v___x_5842_; 
if (v_isShared_5770_ == 0)
{
lean_ctor_set(v___x_5769_, 1, v___x_5840_);
lean_ctor_set(v___x_5769_, 0, v___x_5833_);
v___x_5842_ = v___x_5769_;
goto v_reusejp_5841_;
}
else
{
lean_object* v_reuseFailAlloc_5843_; 
v_reuseFailAlloc_5843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5843_, 0, v___x_5833_);
lean_ctor_set(v_reuseFailAlloc_5843_, 1, v___x_5840_);
v___x_5842_ = v_reuseFailAlloc_5843_;
goto v_reusejp_5841_;
}
v_reusejp_5841_:
{
v_a_5758_ = v___x_5842_;
goto v___jp_5757_;
}
}
}
}
}
else
{
lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5852_; 
v___x_5847_ = lean_box(0);
v___x_5848_ = lean_array_push(v_fst_5767_, v___x_5847_);
v___x_5849_ = l_Lean_Expr_fvarId_x21(v___x_5805_);
lean_dec(v___x_5805_);
v___x_5850_ = lean_array_push(v_fst_5771_, v___x_5849_);
if (v_isShared_5782_ == 0)
{
lean_ctor_set(v___x_5781_, 1, v___x_5809_);
lean_ctor_set(v___x_5781_, 0, v___x_5829_);
v___x_5852_ = v___x_5781_;
goto v_reusejp_5851_;
}
else
{
lean_object* v_reuseFailAlloc_5862_; 
v_reuseFailAlloc_5862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5862_, 0, v___x_5829_);
lean_ctor_set(v_reuseFailAlloc_5862_, 1, v___x_5809_);
v___x_5852_ = v_reuseFailAlloc_5862_;
goto v_reusejp_5851_;
}
v_reusejp_5851_:
{
lean_object* v___x_5854_; 
if (v_isShared_5778_ == 0)
{
lean_ctor_set(v___x_5777_, 1, v___x_5852_);
v___x_5854_ = v___x_5777_;
goto v_reusejp_5853_;
}
else
{
lean_object* v_reuseFailAlloc_5861_; 
v_reuseFailAlloc_5861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5861_, 0, v_fst_5775_);
lean_ctor_set(v_reuseFailAlloc_5861_, 1, v___x_5852_);
v___x_5854_ = v_reuseFailAlloc_5861_;
goto v_reusejp_5853_;
}
v_reusejp_5853_:
{
lean_object* v___x_5856_; 
if (v_isShared_5774_ == 0)
{
lean_ctor_set(v___x_5773_, 1, v___x_5854_);
lean_ctor_set(v___x_5773_, 0, v___x_5850_);
v___x_5856_ = v___x_5773_;
goto v_reusejp_5855_;
}
else
{
lean_object* v_reuseFailAlloc_5860_; 
v_reuseFailAlloc_5860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5860_, 0, v___x_5850_);
lean_ctor_set(v_reuseFailAlloc_5860_, 1, v___x_5854_);
v___x_5856_ = v_reuseFailAlloc_5860_;
goto v_reusejp_5855_;
}
v_reusejp_5855_:
{
lean_object* v___x_5858_; 
if (v_isShared_5770_ == 0)
{
lean_ctor_set(v___x_5769_, 1, v___x_5856_);
lean_ctor_set(v___x_5769_, 0, v___x_5848_);
v___x_5858_ = v___x_5769_;
goto v_reusejp_5857_;
}
else
{
lean_object* v_reuseFailAlloc_5859_; 
v_reuseFailAlloc_5859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5859_, 0, v___x_5848_);
lean_ctor_set(v_reuseFailAlloc_5859_, 1, v___x_5856_);
v___x_5858_ = v_reuseFailAlloc_5859_;
goto v_reusejp_5857_;
}
v_reusejp_5857_:
{
v_a_5758_ = v___x_5858_;
goto v___jp_5757_;
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
}
}
}
}
}
v___jp_5757_:
{
lean_object* v___x_5759_; lean_object* v___x_5760_; 
v___x_5759_ = lean_unsigned_to_nat(1u);
v___x_5760_ = lean_nat_add(v_a_5755_, v___x_5759_);
lean_dec(v_a_5755_);
v_a_5755_ = v___x_5760_;
v_b_5756_ = v_a_5758_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object* v_upperBound_5881_, lean_object* v_a_5882_, lean_object* v_b_5883_){
_start:
{
lean_object* v_res_5884_; 
v_res_5884_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_5881_, v_a_5882_, v_b_5883_);
lean_dec(v_upperBound_5881_);
return v_res_5884_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object* v_as_5885_, size_t v_i_5886_, size_t v_stop_5887_){
_start:
{
uint8_t v___x_5888_; 
v___x_5888_ = lean_usize_dec_eq(v_i_5886_, v_stop_5887_);
if (v___x_5888_ == 0)
{
lean_object* v___x_5889_; uint8_t v___x_5890_; 
v___x_5889_ = lean_array_uget_borrowed(v_as_5885_, v_i_5886_);
v___x_5890_ = l_Lean_Expr_isFVar(v___x_5889_);
if (v___x_5890_ == 0)
{
uint8_t v___x_5891_; 
v___x_5891_ = 1;
return v___x_5891_;
}
else
{
size_t v___x_5892_; size_t v___x_5893_; 
v___x_5892_ = ((size_t)1ULL);
v___x_5893_ = lean_usize_add(v_i_5886_, v___x_5892_);
v_i_5886_ = v___x_5893_;
goto _start;
}
}
else
{
uint8_t v___x_5895_; 
v___x_5895_ = 0;
return v___x_5895_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object* v_as_5896_, lean_object* v_i_5897_, lean_object* v_stop_5898_){
_start:
{
size_t v_i_boxed_5899_; size_t v_stop_boxed_5900_; uint8_t v_res_5901_; lean_object* v_r_5902_; 
v_i_boxed_5899_ = lean_unbox_usize(v_i_5897_);
lean_dec(v_i_5897_);
v_stop_boxed_5900_ = lean_unbox_usize(v_stop_5898_);
lean_dec(v_stop_5898_);
v_res_5901_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_as_5896_, v_i_boxed_5899_, v_stop_boxed_5900_);
lean_dec_ref(v_as_5896_);
v_r_5902_ = lean_box(v_res_5901_);
return v_r_5902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object* v___x_5903_, size_t v_sz_5904_, size_t v_i_5905_, lean_object* v_bs_5906_){
_start:
{
uint8_t v___x_5907_; 
v___x_5907_ = lean_usize_dec_lt(v_i_5905_, v_sz_5904_);
if (v___x_5907_ == 0)
{
lean_object* v___x_5908_; 
v___x_5908_ = l_unsafeCast___redArg(v_bs_5906_);
lean_dec_ref(v_bs_5906_);
return v___x_5908_;
}
else
{
lean_object* v_v_5909_; lean_object* v___x_5910_; lean_object* v_bs_x27_5911_; lean_object* v___y_5913_; lean_object* v___x_5919_; 
v_v_5909_ = lean_array_uget(v_bs_5906_, v_i_5905_);
v___x_5910_ = lean_unsigned_to_nat(0u);
v_bs_x27_5911_ = lean_array_uset(v_bs_5906_, v_i_5905_, v___x_5910_);
v___x_5919_ = l_unsafeCast___redArg(v_v_5909_);
lean_dec(v_v_5909_);
if (lean_obj_tag(v___x_5919_) == 0)
{
v___y_5913_ = v___x_5919_;
goto v___jp_5912_;
}
else
{
lean_object* v_val_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; 
v_val_5920_ = lean_ctor_get(v___x_5919_, 0);
lean_inc(v_val_5920_);
lean_dec_ref_known(v___x_5919_, 1);
v___x_5921_ = lean_box(0);
v___x_5922_ = lean_array_get_borrowed(v___x_5921_, v___x_5903_, v_val_5920_);
lean_dec(v_val_5920_);
lean_inc(v___x_5922_);
v___y_5913_ = v___x_5922_;
goto v___jp_5912_;
}
v___jp_5912_:
{
size_t v___x_5914_; size_t v___x_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; 
v___x_5914_ = ((size_t)1ULL);
v___x_5915_ = lean_usize_add(v_i_5905_, v___x_5914_);
v___x_5916_ = l_unsafeCast___redArg(v___y_5913_);
lean_dec(v___y_5913_);
v___x_5917_ = lean_array_uset(v_bs_x27_5911_, v_i_5905_, v___x_5916_);
v_i_5905_ = v___x_5915_;
v_bs_5906_ = v___x_5917_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object* v___x_5923_, lean_object* v_sz_5924_, lean_object* v_i_5925_, lean_object* v_bs_5926_){
_start:
{
size_t v_sz_boxed_5927_; size_t v_i_boxed_5928_; lean_object* v_res_5929_; 
v_sz_boxed_5927_ = lean_unbox_usize(v_sz_5924_);
lean_dec(v_sz_5924_);
v_i_boxed_5928_ = lean_unbox_usize(v_i_5925_);
lean_dec(v_i_5925_);
v_res_5929_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5923_, v_sz_boxed_5927_, v_i_boxed_5928_, v_bs_5926_);
lean_dec_ref(v___x_5923_);
return v_res_5929_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object* v___x_5930_, size_t v_sz_5931_, size_t v_i_5932_, lean_object* v_bs_5933_){
_start:
{
uint8_t v___x_5934_; 
v___x_5934_ = lean_usize_dec_lt(v_i_5932_, v_sz_5931_);
if (v___x_5934_ == 0)
{
lean_object* v___x_5935_; 
v___x_5935_ = l_unsafeCast___redArg(v_bs_5933_);
lean_dec_ref(v_bs_5933_);
return v___x_5935_;
}
else
{
lean_object* v_v_5936_; lean_object* v___x_5937_; lean_object* v_bs_x27_5938_; lean_object* v___x_5939_; size_t v_sz_5940_; size_t v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; size_t v___x_5945_; size_t v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; 
v_v_5936_ = lean_array_uget(v_bs_5933_, v_i_5932_);
v___x_5937_ = lean_unsigned_to_nat(0u);
v_bs_x27_5938_ = lean_array_uset(v_bs_5933_, v_i_5932_, v___x_5937_);
v___x_5939_ = l_unsafeCast___redArg(v_v_5936_);
lean_dec(v_v_5936_);
v_sz_5940_ = lean_array_size(v___x_5939_);
v___x_5941_ = ((size_t)0ULL);
v___x_5942_ = l_unsafeCast___redArg(v___x_5939_);
lean_dec(v___x_5939_);
v___x_5943_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5930_, v_sz_5940_, v___x_5941_, v___x_5942_);
v___x_5944_ = l_unsafeCast___redArg(v___x_5943_);
lean_dec_ref(v___x_5943_);
v___x_5945_ = ((size_t)1ULL);
v___x_5946_ = lean_usize_add(v_i_5932_, v___x_5945_);
v___x_5947_ = l_unsafeCast___redArg(v___x_5944_);
lean_dec(v___x_5944_);
v___x_5948_ = lean_array_uset(v_bs_x27_5938_, v_i_5932_, v___x_5947_);
v_i_5932_ = v___x_5946_;
v_bs_5933_ = v___x_5948_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object* v___x_5950_, lean_object* v_sz_5951_, lean_object* v_i_5952_, lean_object* v_bs_5953_){
_start:
{
size_t v_sz_boxed_5954_; size_t v_i_boxed_5955_; lean_object* v_res_5956_; 
v_sz_boxed_5954_ = lean_unbox_usize(v_sz_5951_);
lean_dec(v_sz_5951_);
v_i_boxed_5955_ = lean_unbox_usize(v_i_5952_);
lean_dec(v_i_5952_);
v_res_5956_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v___x_5950_, v_sz_boxed_5954_, v_i_boxed_5955_, v_bs_5953_);
lean_dec_ref(v___x_5950_);
return v_res_5956_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2(void){
_start:
{
lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; 
v___x_5959_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1));
v___x_5960_ = lean_unsigned_to_nat(6u);
v___x_5961_ = lean_unsigned_to_nat(463u);
v___x_5962_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_5963_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_5964_ = l_mkPanicMessageWithDecl(v___x_5963_, v___x_5962_, v___x_5961_, v___x_5960_, v___x_5959_);
return v___x_5964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object* v___x_5965_, lean_object* v___x_5966_, lean_object* v___x_5967_, lean_object* v_as_5968_, size_t v_sz_5969_, size_t v_i_5970_, lean_object* v_b_5971_){
_start:
{
lean_object* v_a_5973_; uint8_t v___x_5977_; 
v___x_5977_ = lean_usize_dec_lt(v_i_5970_, v_sz_5969_);
if (v___x_5977_ == 0)
{
return v_b_5971_;
}
else
{
lean_object* v_a_5978_; lean_object* v___x_5979_; uint8_t v___x_5980_; 
v_a_5978_ = lean_array_uget_borrowed(v_as_5968_, v_i_5970_);
v___x_5979_ = lean_array_get_size(v___x_5965_);
v___x_5980_ = lean_nat_dec_lt(v_a_5978_, v___x_5979_);
if (v___x_5980_ == 0)
{
lean_object* v___x_5981_; lean_object* v___x_5982_; 
lean_dec_ref(v_b_5971_);
v___x_5981_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2);
v___x_5982_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(v___x_5981_);
if (lean_obj_tag(v___x_5982_) == 0)
{
lean_object* v_a_5983_; 
v_a_5983_ = lean_ctor_get(v___x_5982_, 0);
lean_inc(v_a_5983_);
lean_dec_ref_known(v___x_5982_, 1);
return v_a_5983_;
}
else
{
lean_object* v_a_5984_; 
v_a_5984_ = lean_ctor_get(v___x_5982_, 0);
lean_inc(v_a_5984_);
lean_dec_ref_known(v___x_5982_, 1);
v_a_5973_ = v_a_5984_;
goto v___jp_5972_;
}
}
else
{
lean_object* v___x_5985_; lean_object* v___x_5986_; 
v___x_5985_ = lean_box(0);
v___x_5986_ = lean_array_get_borrowed(v___x_5985_, v___x_5965_, v_a_5978_);
if (lean_obj_tag(v___x_5986_) == 1)
{
lean_object* v_val_5987_; uint8_t v_changed_5988_; lean_object* v___x_5989_; lean_object* v___x_5990_; 
v_val_5987_ = lean_ctor_get(v___x_5986_, 0);
v_changed_5988_ = lean_nat_dec_eq(v___x_5966_, v___x_5967_);
v___x_5989_ = lean_box(v_changed_5988_);
v___x_5990_ = lean_array_set(v_b_5971_, v_val_5987_, v___x_5989_);
v_a_5973_ = v___x_5990_;
goto v___jp_5972_;
}
else
{
v_a_5973_ = v_b_5971_;
goto v___jp_5972_;
}
}
}
v___jp_5972_:
{
size_t v___x_5974_; size_t v___x_5975_; 
v___x_5974_ = ((size_t)1ULL);
v___x_5975_ = lean_usize_add(v_i_5970_, v___x_5974_);
v_i_5970_ = v___x_5975_;
v_b_5971_ = v_a_5973_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object* v___x_5991_, lean_object* v___x_5992_, lean_object* v___x_5993_, lean_object* v_as_5994_, lean_object* v_sz_5995_, lean_object* v_i_5996_, lean_object* v_b_5997_){
_start:
{
size_t v_sz_boxed_5998_; size_t v_i_boxed_5999_; lean_object* v_res_6000_; 
v_sz_boxed_5998_ = lean_unbox_usize(v_sz_5995_);
lean_dec(v_sz_5995_);
v_i_boxed_5999_ = lean_unbox_usize(v_i_5996_);
lean_dec(v_i_5996_);
v_res_6000_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5991_, v___x_5992_, v___x_5993_, v_as_5994_, v_sz_boxed_5998_, v_i_boxed_5999_, v_b_5997_);
lean_dec_ref(v_as_5994_);
lean_dec(v___x_5993_);
lean_dec(v___x_5992_);
lean_dec_ref(v___x_5991_);
return v_res_6000_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object* v_upperBound_6001_, lean_object* v___x_6002_, lean_object* v___x_6003_, lean_object* v_a_6004_, lean_object* v_b_6005_){
_start:
{
uint8_t v___x_6006_; 
v___x_6006_ = lean_nat_dec_lt(v_a_6004_, v_upperBound_6001_);
if (v___x_6006_ == 0)
{
lean_dec(v_a_6004_);
return v_b_6005_;
}
else
{
lean_object* v_snd_6007_; lean_object* v_snd_6008_; lean_object* v_fst_6009_; lean_object* v___x_6011_; uint8_t v_isShared_6012_; uint8_t v_isSharedCheck_6075_; 
v_snd_6007_ = lean_ctor_get(v_b_6005_, 1);
lean_inc(v_snd_6007_);
v_snd_6008_ = lean_ctor_get(v_snd_6007_, 1);
lean_inc(v_snd_6008_);
v_fst_6009_ = lean_ctor_get(v_b_6005_, 0);
v_isSharedCheck_6075_ = !lean_is_exclusive(v_b_6005_);
if (v_isSharedCheck_6075_ == 0)
{
lean_object* v_unused_6076_; 
v_unused_6076_ = lean_ctor_get(v_b_6005_, 1);
lean_dec(v_unused_6076_);
v___x_6011_ = v_b_6005_;
v_isShared_6012_ = v_isSharedCheck_6075_;
goto v_resetjp_6010_;
}
else
{
lean_inc(v_fst_6009_);
lean_dec(v_b_6005_);
v___x_6011_ = lean_box(0);
v_isShared_6012_ = v_isSharedCheck_6075_;
goto v_resetjp_6010_;
}
v_resetjp_6010_:
{
lean_object* v_fst_6013_; lean_object* v___x_6015_; uint8_t v_isShared_6016_; uint8_t v_isSharedCheck_6073_; 
v_fst_6013_ = lean_ctor_get(v_snd_6007_, 0);
v_isSharedCheck_6073_ = !lean_is_exclusive(v_snd_6007_);
if (v_isSharedCheck_6073_ == 0)
{
lean_object* v_unused_6074_; 
v_unused_6074_ = lean_ctor_get(v_snd_6007_, 1);
lean_dec(v_unused_6074_);
v___x_6015_ = v_snd_6007_;
v_isShared_6016_ = v_isSharedCheck_6073_;
goto v_resetjp_6014_;
}
else
{
lean_inc(v_fst_6013_);
lean_dec(v_snd_6007_);
v___x_6015_ = lean_box(0);
v_isShared_6016_ = v_isSharedCheck_6073_;
goto v_resetjp_6014_;
}
v_resetjp_6014_:
{
lean_object* v_array_6017_; lean_object* v_start_6018_; lean_object* v_stop_6019_; uint8_t v___x_6020_; 
v_array_6017_ = lean_ctor_get(v_snd_6008_, 0);
v_start_6018_ = lean_ctor_get(v_snd_6008_, 1);
v_stop_6019_ = lean_ctor_get(v_snd_6008_, 2);
v___x_6020_ = lean_nat_dec_lt(v_start_6018_, v_stop_6019_);
if (v___x_6020_ == 0)
{
lean_object* v___x_6022_; 
lean_dec(v_a_6004_);
if (v_isShared_6016_ == 0)
{
v___x_6022_ = v___x_6015_;
goto v_reusejp_6021_;
}
else
{
lean_object* v_reuseFailAlloc_6026_; 
v_reuseFailAlloc_6026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6026_, 0, v_fst_6013_);
lean_ctor_set(v_reuseFailAlloc_6026_, 1, v_snd_6008_);
v___x_6022_ = v_reuseFailAlloc_6026_;
goto v_reusejp_6021_;
}
v_reusejp_6021_:
{
lean_object* v___x_6024_; 
if (v_isShared_6012_ == 0)
{
lean_ctor_set(v___x_6011_, 1, v___x_6022_);
v___x_6024_ = v___x_6011_;
goto v_reusejp_6023_;
}
else
{
lean_object* v_reuseFailAlloc_6025_; 
v_reuseFailAlloc_6025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6025_, 0, v_fst_6009_);
lean_ctor_set(v_reuseFailAlloc_6025_, 1, v___x_6022_);
v___x_6024_ = v_reuseFailAlloc_6025_;
goto v_reusejp_6023_;
}
v_reusejp_6023_:
{
return v___x_6024_;
}
}
}
else
{
lean_object* v___x_6028_; uint8_t v_isShared_6029_; uint8_t v_isSharedCheck_6069_; 
lean_inc(v_stop_6019_);
lean_inc(v_start_6018_);
lean_inc_ref(v_array_6017_);
v_isSharedCheck_6069_ = !lean_is_exclusive(v_snd_6008_);
if (v_isSharedCheck_6069_ == 0)
{
lean_object* v_unused_6070_; lean_object* v_unused_6071_; lean_object* v_unused_6072_; 
v_unused_6070_ = lean_ctor_get(v_snd_6008_, 2);
lean_dec(v_unused_6070_);
v_unused_6071_ = lean_ctor_get(v_snd_6008_, 1);
lean_dec(v_unused_6071_);
v_unused_6072_ = lean_ctor_get(v_snd_6008_, 0);
lean_dec(v_unused_6072_);
v___x_6028_ = v_snd_6008_;
v_isShared_6029_ = v_isSharedCheck_6069_;
goto v_resetjp_6027_;
}
else
{
lean_dec(v_snd_6008_);
v___x_6028_ = lean_box(0);
v_isShared_6029_ = v_isSharedCheck_6069_;
goto v_resetjp_6027_;
}
v_resetjp_6027_:
{
lean_object* v_array_6030_; lean_object* v_start_6031_; lean_object* v_stop_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; lean_object* v___x_6037_; 
v_array_6030_ = lean_ctor_get(v_fst_6013_, 0);
v_start_6031_ = lean_ctor_get(v_fst_6013_, 1);
v_stop_6032_ = lean_ctor_get(v_fst_6013_, 2);
v___x_6033_ = lean_array_fget(v_array_6017_, v_start_6018_);
v___x_6034_ = lean_unsigned_to_nat(1u);
v___x_6035_ = lean_nat_add(v_start_6018_, v___x_6034_);
lean_dec(v_start_6018_);
if (v_isShared_6029_ == 0)
{
lean_ctor_set(v___x_6028_, 1, v___x_6035_);
v___x_6037_ = v___x_6028_;
goto v_reusejp_6036_;
}
else
{
lean_object* v_reuseFailAlloc_6068_; 
v_reuseFailAlloc_6068_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6068_, 0, v_array_6017_);
lean_ctor_set(v_reuseFailAlloc_6068_, 1, v___x_6035_);
lean_ctor_set(v_reuseFailAlloc_6068_, 2, v_stop_6019_);
v___x_6037_ = v_reuseFailAlloc_6068_;
goto v_reusejp_6036_;
}
v_reusejp_6036_:
{
uint8_t v___x_6038_; 
v___x_6038_ = lean_nat_dec_lt(v_start_6031_, v_stop_6032_);
if (v___x_6038_ == 0)
{
lean_object* v___x_6040_; 
lean_dec(v___x_6033_);
lean_dec(v_a_6004_);
if (v_isShared_6016_ == 0)
{
lean_ctor_set(v___x_6015_, 1, v___x_6037_);
v___x_6040_ = v___x_6015_;
goto v_reusejp_6039_;
}
else
{
lean_object* v_reuseFailAlloc_6044_; 
v_reuseFailAlloc_6044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6044_, 0, v_fst_6013_);
lean_ctor_set(v_reuseFailAlloc_6044_, 1, v___x_6037_);
v___x_6040_ = v_reuseFailAlloc_6044_;
goto v_reusejp_6039_;
}
v_reusejp_6039_:
{
lean_object* v___x_6042_; 
if (v_isShared_6012_ == 0)
{
lean_ctor_set(v___x_6011_, 1, v___x_6040_);
v___x_6042_ = v___x_6011_;
goto v_reusejp_6041_;
}
else
{
lean_object* v_reuseFailAlloc_6043_; 
v_reuseFailAlloc_6043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6043_, 0, v_fst_6009_);
lean_ctor_set(v_reuseFailAlloc_6043_, 1, v___x_6040_);
v___x_6042_ = v_reuseFailAlloc_6043_;
goto v_reusejp_6041_;
}
v_reusejp_6041_:
{
return v___x_6042_;
}
}
}
else
{
lean_object* v___x_6046_; uint8_t v_isShared_6047_; uint8_t v_isSharedCheck_6064_; 
lean_inc(v_stop_6032_);
lean_inc(v_start_6031_);
lean_inc_ref(v_array_6030_);
v_isSharedCheck_6064_ = !lean_is_exclusive(v_fst_6013_);
if (v_isSharedCheck_6064_ == 0)
{
lean_object* v_unused_6065_; lean_object* v_unused_6066_; lean_object* v_unused_6067_; 
v_unused_6065_ = lean_ctor_get(v_fst_6013_, 2);
lean_dec(v_unused_6065_);
v_unused_6066_ = lean_ctor_get(v_fst_6013_, 1);
lean_dec(v_unused_6066_);
v_unused_6067_ = lean_ctor_get(v_fst_6013_, 0);
lean_dec(v_unused_6067_);
v___x_6046_ = v_fst_6013_;
v_isShared_6047_ = v_isSharedCheck_6064_;
goto v_resetjp_6045_;
}
else
{
lean_dec(v_fst_6013_);
v___x_6046_ = lean_box(0);
v_isShared_6047_ = v_isSharedCheck_6064_;
goto v_resetjp_6045_;
}
v_resetjp_6045_:
{
lean_object* v___x_6048_; lean_object* v___x_6049_; lean_object* v___x_6051_; 
v___x_6048_ = lean_array_fget(v_array_6030_, v_start_6031_);
v___x_6049_ = lean_nat_add(v_start_6031_, v___x_6034_);
lean_dec(v_start_6031_);
if (v_isShared_6047_ == 0)
{
lean_ctor_set(v___x_6046_, 1, v___x_6049_);
v___x_6051_ = v___x_6046_;
goto v_reusejp_6050_;
}
else
{
lean_object* v_reuseFailAlloc_6063_; 
v_reuseFailAlloc_6063_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6063_, 0, v_array_6030_);
lean_ctor_set(v_reuseFailAlloc_6063_, 1, v___x_6049_);
lean_ctor_set(v_reuseFailAlloc_6063_, 2, v_stop_6032_);
v___x_6051_ = v_reuseFailAlloc_6063_;
goto v_reusejp_6050_;
}
v_reusejp_6050_:
{
size_t v_sz_6052_; size_t v___x_6053_; lean_object* v___x_6054_; lean_object* v___x_6056_; 
v_sz_6052_ = lean_array_size(v___x_6048_);
v___x_6053_ = ((size_t)0ULL);
v___x_6054_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_6033_, v___x_6002_, v___x_6003_, v___x_6048_, v_sz_6052_, v___x_6053_, v_fst_6009_);
lean_dec(v___x_6048_);
lean_dec(v___x_6033_);
if (v_isShared_6016_ == 0)
{
lean_ctor_set(v___x_6015_, 1, v___x_6037_);
lean_ctor_set(v___x_6015_, 0, v___x_6051_);
v___x_6056_ = v___x_6015_;
goto v_reusejp_6055_;
}
else
{
lean_object* v_reuseFailAlloc_6062_; 
v_reuseFailAlloc_6062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6062_, 0, v___x_6051_);
lean_ctor_set(v_reuseFailAlloc_6062_, 1, v___x_6037_);
v___x_6056_ = v_reuseFailAlloc_6062_;
goto v_reusejp_6055_;
}
v_reusejp_6055_:
{
lean_object* v___x_6058_; 
if (v_isShared_6012_ == 0)
{
lean_ctor_set(v___x_6011_, 1, v___x_6056_);
lean_ctor_set(v___x_6011_, 0, v___x_6054_);
v___x_6058_ = v___x_6011_;
goto v_reusejp_6057_;
}
else
{
lean_object* v_reuseFailAlloc_6061_; 
v_reuseFailAlloc_6061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6061_, 0, v___x_6054_);
lean_ctor_set(v_reuseFailAlloc_6061_, 1, v___x_6056_);
v___x_6058_ = v_reuseFailAlloc_6061_;
goto v_reusejp_6057_;
}
v_reusejp_6057_:
{
lean_object* v___x_6059_; 
v___x_6059_ = lean_nat_add(v_a_6004_, v___x_6034_);
lean_dec(v_a_6004_);
v_a_6004_ = v___x_6059_;
v_b_6005_ = v___x_6058_;
goto _start;
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
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object* v_upperBound_6077_, lean_object* v___x_6078_, lean_object* v___x_6079_, lean_object* v_a_6080_, lean_object* v_b_6081_){
_start:
{
lean_object* v_res_6082_; 
v_res_6082_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_6077_, v___x_6078_, v___x_6079_, v_a_6080_, v_b_6081_);
lean_dec(v___x_6079_);
lean_dec(v___x_6078_);
lean_dec(v_upperBound_6077_);
return v_res_6082_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__1(void){
_start:
{
lean_object* v___x_6084_; lean_object* v___x_6085_; lean_object* v___x_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; 
v___x_6084_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__0));
v___x_6085_ = lean_unsigned_to_nat(2u);
v___x_6086_ = lean_unsigned_to_nat(457u);
v___x_6087_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_6088_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_6089_ = l_mkPanicMessageWithDecl(v___x_6088_, v___x_6087_, v___x_6086_, v___x_6085_, v___x_6084_);
return v___x_6089_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__3(void){
_start:
{
lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; 
v___x_6091_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__2));
v___x_6092_ = lean_unsigned_to_nat(2u);
v___x_6093_ = lean_unsigned_to_nat(458u);
v___x_6094_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_6095_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_6096_ = l_mkPanicMessageWithDecl(v___x_6095_, v___x_6094_, v___x_6093_, v___x_6092_, v___x_6091_);
return v___x_6096_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__5(void){
_start:
{
lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; 
v___x_6098_ = ((lean_object*)(l_Lean_Elab_FixedParamPerms_erase___closed__4));
v___x_6099_ = lean_unsigned_to_nat(2u);
v___x_6100_ = lean_unsigned_to_nat(456u);
v___x_6101_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0));
v___x_6102_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0));
v___x_6103_ = l_mkPanicMessageWithDecl(v___x_6102_, v___x_6101_, v___x_6100_, v___x_6099_, v___x_6098_);
return v___x_6103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object* v_fixedParamPerms_6104_, lean_object* v_xs_6105_, lean_object* v_toErase_6106_){
_start:
{
lean_object* v___x_6107_; lean_object* v___x_6108_; uint8_t v___x_6194_; 
v___x_6107_ = lean_unsigned_to_nat(0u);
v___x_6108_ = lean_array_get_size(v_xs_6105_);
v___x_6194_ = lean_nat_dec_lt(v___x_6107_, v___x_6108_);
if (v___x_6194_ == 0)
{
goto v___jp_6109_;
}
else
{
if (v___x_6194_ == 0)
{
goto v___jp_6109_;
}
else
{
size_t v___x_6195_; size_t v___x_6196_; uint8_t v___x_6197_; 
v___x_6195_ = ((size_t)0ULL);
v___x_6196_ = lean_usize_of_nat(v___x_6108_);
v___x_6197_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_xs_6105_, v___x_6195_, v___x_6196_);
if (v___x_6197_ == 0)
{
goto v___jp_6109_;
}
else
{
lean_object* v___x_6198_; lean_object* v___x_6199_; 
lean_dec_ref(v_toErase_6106_);
lean_dec_ref(v_xs_6105_);
lean_dec_ref(v_fixedParamPerms_6104_);
v___x_6198_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__5, &l_Lean_Elab_FixedParamPerms_erase___closed__5_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__5);
v___x_6199_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6198_);
return v___x_6199_;
}
}
}
v___jp_6109_:
{
lean_object* v_numFixed_6110_; lean_object* v_perms_6111_; lean_object* v_revDeps_6112_; uint8_t v___x_6113_; 
v_numFixed_6110_ = lean_ctor_get(v_fixedParamPerms_6104_, 0);
v_perms_6111_ = lean_ctor_get(v_fixedParamPerms_6104_, 1);
lean_inc_ref(v_perms_6111_);
v_revDeps_6112_ = lean_ctor_get(v_fixedParamPerms_6104_, 2);
lean_inc_ref(v_revDeps_6112_);
v___x_6113_ = lean_nat_dec_eq(v_numFixed_6110_, v___x_6108_);
if (v___x_6113_ == 0)
{
lean_object* v___x_6114_; lean_object* v___x_6115_; 
lean_dec_ref(v_revDeps_6112_);
lean_dec_ref(v_perms_6111_);
lean_dec_ref(v_toErase_6106_);
lean_dec_ref(v_xs_6105_);
lean_dec_ref(v_fixedParamPerms_6104_);
v___x_6114_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__1, &l_Lean_Elab_FixedParamPerms_erase___closed__1_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__1);
v___x_6115_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6114_);
return v___x_6115_;
}
else
{
lean_object* v___x_6116_; lean_object* v___x_6117_; uint8_t v_changed_6118_; 
v___x_6116_ = lean_array_get_size(v_toErase_6106_);
v___x_6117_ = lean_array_get_size(v_perms_6111_);
v_changed_6118_ = lean_nat_dec_eq(v___x_6116_, v___x_6117_);
if (v_changed_6118_ == 0)
{
lean_object* v___x_6119_; lean_object* v___x_6120_; 
lean_dec_ref(v_revDeps_6112_);
lean_dec_ref(v_perms_6111_);
lean_dec_ref(v_toErase_6106_);
lean_dec_ref(v_xs_6105_);
lean_dec_ref(v_fixedParamPerms_6104_);
v___x_6119_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__3, &l_Lean_Elab_FixedParamPerms_erase___closed__3_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__3);
v___x_6120_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6119_);
return v___x_6120_;
}
else
{
uint8_t v_changed_6121_; lean_object* v___x_6122_; lean_object* v_mask_6123_; lean_object* v___x_6124_; lean_object* v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v_fst_6129_; lean_object* v___x_6131_; uint8_t v_isShared_6132_; uint8_t v_isSharedCheck_6192_; 
v_changed_6121_ = 0;
v___x_6122_ = lean_box(v_changed_6121_);
lean_inc(v_numFixed_6110_);
v_mask_6123_ = lean_mk_array(v_numFixed_6110_, v___x_6122_);
v___x_6124_ = l_Array_toSubarray___redArg(v_toErase_6106_, v___x_6107_, v___x_6116_);
lean_inc_ref(v_perms_6111_);
v___x_6125_ = l_Array_toSubarray___redArg(v_perms_6111_, v___x_6107_, v___x_6117_);
v___x_6126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6126_, 0, v___x_6124_);
lean_ctor_set(v___x_6126_, 1, v___x_6125_);
v___x_6127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6127_, 0, v_mask_6123_);
lean_ctor_set(v___x_6127_, 1, v___x_6126_);
v___x_6128_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v___x_6116_, v___x_6116_, v___x_6117_, v___x_6107_, v___x_6127_);
v_fst_6129_ = lean_ctor_get(v___x_6128_, 0);
v_isSharedCheck_6192_ = !lean_is_exclusive(v___x_6128_);
if (v_isSharedCheck_6192_ == 0)
{
lean_object* v_unused_6193_; 
v_unused_6193_ = lean_ctor_get(v___x_6128_, 1);
lean_dec(v_unused_6193_);
v___x_6131_ = v___x_6128_;
v_isShared_6132_ = v_isSharedCheck_6192_;
goto v_resetjp_6130_;
}
else
{
lean_inc(v_fst_6129_);
lean_dec(v___x_6128_);
v___x_6131_ = lean_box(0);
v_isShared_6132_ = v_isSharedCheck_6192_;
goto v_resetjp_6130_;
}
v_resetjp_6130_:
{
lean_object* v___x_6133_; lean_object* v___x_6135_; 
v___x_6133_ = lean_box(v_changed_6118_);
if (v_isShared_6132_ == 0)
{
lean_ctor_set(v___x_6131_, 1, v___x_6133_);
v___x_6135_ = v___x_6131_;
goto v_reusejp_6134_;
}
else
{
lean_object* v_reuseFailAlloc_6191_; 
v_reuseFailAlloc_6191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6191_, 0, v_fst_6129_);
lean_ctor_set(v_reuseFailAlloc_6191_, 1, v___x_6133_);
v___x_6135_ = v_reuseFailAlloc_6191_;
goto v_reusejp_6134_;
}
v_reusejp_6134_:
{
lean_object* v___x_6136_; lean_object* v___x_6138_; uint8_t v_isShared_6139_; uint8_t v_isSharedCheck_6187_; 
v___x_6136_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_6117_, v_perms_6111_, v___x_6116_, v_fixedParamPerms_6104_, v___x_6135_);
v_isSharedCheck_6187_ = !lean_is_exclusive(v_fixedParamPerms_6104_);
if (v_isSharedCheck_6187_ == 0)
{
lean_object* v_unused_6188_; lean_object* v_unused_6189_; lean_object* v_unused_6190_; 
v_unused_6188_ = lean_ctor_get(v_fixedParamPerms_6104_, 2);
lean_dec(v_unused_6188_);
v_unused_6189_ = lean_ctor_get(v_fixedParamPerms_6104_, 1);
lean_dec(v_unused_6189_);
v_unused_6190_ = lean_ctor_get(v_fixedParamPerms_6104_, 0);
lean_dec(v_unused_6190_);
v___x_6138_ = v_fixedParamPerms_6104_;
v_isShared_6139_ = v_isSharedCheck_6187_;
goto v_resetjp_6137_;
}
else
{
lean_dec(v_fixedParamPerms_6104_);
v___x_6138_ = lean_box(0);
v_isShared_6139_ = v_isSharedCheck_6187_;
goto v_resetjp_6137_;
}
v_resetjp_6137_:
{
lean_object* v_fst_6140_; lean_object* v___x_6142_; uint8_t v_isShared_6143_; uint8_t v_isSharedCheck_6185_; 
v_fst_6140_ = lean_ctor_get(v___x_6136_, 0);
v_isSharedCheck_6185_ = !lean_is_exclusive(v___x_6136_);
if (v_isSharedCheck_6185_ == 0)
{
lean_object* v_unused_6186_; 
v_unused_6186_ = lean_ctor_get(v___x_6136_, 1);
lean_dec(v_unused_6186_);
v___x_6142_ = v___x_6136_;
v_isShared_6143_ = v_isSharedCheck_6185_;
goto v_resetjp_6141_;
}
else
{
lean_inc(v_fst_6140_);
lean_dec(v___x_6136_);
v___x_6142_ = lean_box(0);
v_isShared_6143_ = v_isSharedCheck_6185_;
goto v_resetjp_6141_;
}
v_resetjp_6141_:
{
lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6149_; 
v___x_6144_ = lean_array_get_size(v_fst_6140_);
v___x_6145_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0));
v___x_6146_ = l_Array_toSubarray___redArg(v_fst_6140_, v___x_6107_, v___x_6144_);
v___x_6147_ = l_Array_toSubarray___redArg(v_xs_6105_, v___x_6107_, v___x_6108_);
if (v_isShared_6143_ == 0)
{
lean_ctor_set(v___x_6142_, 1, v___x_6147_);
lean_ctor_set(v___x_6142_, 0, v___x_6146_);
v___x_6149_ = v___x_6142_;
goto v_reusejp_6148_;
}
else
{
lean_object* v_reuseFailAlloc_6184_; 
v_reuseFailAlloc_6184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6184_, 0, v___x_6146_);
lean_ctor_set(v_reuseFailAlloc_6184_, 1, v___x_6147_);
v___x_6149_ = v_reuseFailAlloc_6184_;
goto v_reusejp_6148_;
}
v_reusejp_6148_:
{
lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; lean_object* v_snd_6154_; lean_object* v_snd_6155_; lean_object* v_fst_6156_; lean_object* v_fst_6157_; lean_object* v___x_6159_; uint8_t v_isShared_6160_; uint8_t v_isSharedCheck_6182_; 
v___x_6150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6150_, 0, v___x_6145_);
lean_ctor_set(v___x_6150_, 1, v___x_6149_);
v___x_6151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6151_, 0, v___x_6145_);
lean_ctor_set(v___x_6151_, 1, v___x_6150_);
v___x_6152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6152_, 0, v___x_6145_);
lean_ctor_set(v___x_6152_, 1, v___x_6151_);
v___x_6153_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v___x_6144_, v___x_6107_, v___x_6152_);
v_snd_6154_ = lean_ctor_get(v___x_6153_, 1);
lean_inc(v_snd_6154_);
v_snd_6155_ = lean_ctor_get(v_snd_6154_, 1);
lean_inc(v_snd_6155_);
v_fst_6156_ = lean_ctor_get(v___x_6153_, 0);
lean_inc(v_fst_6156_);
lean_dec_ref(v___x_6153_);
v_fst_6157_ = lean_ctor_get(v_snd_6154_, 0);
v_isSharedCheck_6182_ = !lean_is_exclusive(v_snd_6154_);
if (v_isSharedCheck_6182_ == 0)
{
lean_object* v_unused_6183_; 
v_unused_6183_ = lean_ctor_get(v_snd_6154_, 1);
lean_dec(v_unused_6183_);
v___x_6159_ = v_snd_6154_;
v_isShared_6160_ = v_isSharedCheck_6182_;
goto v_resetjp_6158_;
}
else
{
lean_inc(v_fst_6157_);
lean_dec(v_snd_6154_);
v___x_6159_ = lean_box(0);
v_isShared_6160_ = v_isSharedCheck_6182_;
goto v_resetjp_6158_;
}
v_resetjp_6158_:
{
lean_object* v_fst_6161_; lean_object* v___x_6163_; uint8_t v_isShared_6164_; uint8_t v_isSharedCheck_6180_; 
v_fst_6161_ = lean_ctor_get(v_snd_6155_, 0);
v_isSharedCheck_6180_ = !lean_is_exclusive(v_snd_6155_);
if (v_isSharedCheck_6180_ == 0)
{
lean_object* v_unused_6181_; 
v_unused_6181_ = lean_ctor_get(v_snd_6155_, 1);
lean_dec(v_unused_6181_);
v___x_6163_ = v_snd_6155_;
v_isShared_6164_ = v_isSharedCheck_6180_;
goto v_resetjp_6162_;
}
else
{
lean_inc(v_fst_6161_);
lean_dec(v_snd_6155_);
v___x_6163_ = lean_box(0);
v_isShared_6164_ = v_isSharedCheck_6180_;
goto v_resetjp_6162_;
}
v_resetjp_6162_:
{
lean_object* v___x_6165_; size_t v_sz_6166_; size_t v___x_6167_; lean_object* v___x_6168_; lean_object* v___x_6169_; lean_object* v___x_6170_; lean_object* v___x_6172_; 
v___x_6165_ = lean_array_get_size(v_fst_6161_);
v_sz_6166_ = lean_array_size(v_perms_6111_);
v___x_6167_ = ((size_t)0ULL);
v___x_6168_ = l_unsafeCast___redArg(v_perms_6111_);
lean_dec_ref(v_perms_6111_);
v___x_6169_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v_fst_6156_, v_sz_6166_, v___x_6167_, v___x_6168_);
lean_dec(v_fst_6156_);
v___x_6170_ = l_unsafeCast___redArg(v___x_6169_);
lean_dec_ref(v___x_6169_);
if (v_isShared_6139_ == 0)
{
lean_ctor_set(v___x_6138_, 1, v___x_6170_);
lean_ctor_set(v___x_6138_, 0, v___x_6165_);
v___x_6172_ = v___x_6138_;
goto v_reusejp_6171_;
}
else
{
lean_object* v_reuseFailAlloc_6179_; 
v_reuseFailAlloc_6179_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6179_, 0, v___x_6165_);
lean_ctor_set(v_reuseFailAlloc_6179_, 1, v___x_6170_);
lean_ctor_set(v_reuseFailAlloc_6179_, 2, v_revDeps_6112_);
v___x_6172_ = v_reuseFailAlloc_6179_;
goto v_reusejp_6171_;
}
v_reusejp_6171_:
{
lean_object* v___x_6174_; 
if (v_isShared_6164_ == 0)
{
lean_ctor_set(v___x_6163_, 1, v_fst_6157_);
v___x_6174_ = v___x_6163_;
goto v_reusejp_6173_;
}
else
{
lean_object* v_reuseFailAlloc_6178_; 
v_reuseFailAlloc_6178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6178_, 0, v_fst_6161_);
lean_ctor_set(v_reuseFailAlloc_6178_, 1, v_fst_6157_);
v___x_6174_ = v_reuseFailAlloc_6178_;
goto v_reusejp_6173_;
}
v_reusejp_6173_:
{
lean_object* v___x_6176_; 
if (v_isShared_6160_ == 0)
{
lean_ctor_set(v___x_6159_, 1, v___x_6174_);
lean_ctor_set(v___x_6159_, 0, v___x_6172_);
v___x_6176_ = v___x_6159_;
goto v_reusejp_6175_;
}
else
{
lean_object* v_reuseFailAlloc_6177_; 
v_reuseFailAlloc_6177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6177_, 0, v___x_6172_);
lean_ctor_set(v_reuseFailAlloc_6177_, 1, v___x_6174_);
v___x_6176_ = v_reuseFailAlloc_6177_;
goto v_reusejp_6175_;
}
v_reusejp_6175_:
{
return v___x_6176_;
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
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object* v_upperBound_6200_, lean_object* v___x_6201_, lean_object* v___x_6202_, lean_object* v___x_6203_, lean_object* v_fixedParamPerms_6204_, lean_object* v_next_6205_, lean_object* v_inst_6206_, lean_object* v_R_6207_, lean_object* v_a_6208_, lean_object* v_b_6209_, lean_object* v_c_6210_){
_start:
{
lean_object* v___x_6211_; 
v___x_6211_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_6200_, v___x_6201_, v___x_6202_, v___x_6203_, v_fixedParamPerms_6204_, v_next_6205_, v_a_6208_, v_b_6209_);
return v___x_6211_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object* v_upperBound_6212_, lean_object* v___x_6213_, lean_object* v___x_6214_, lean_object* v___x_6215_, lean_object* v_fixedParamPerms_6216_, lean_object* v_next_6217_, lean_object* v_inst_6218_, lean_object* v_R_6219_, lean_object* v_a_6220_, lean_object* v_b_6221_, lean_object* v_c_6222_){
_start:
{
lean_object* v_res_6223_; 
v_res_6223_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(v_upperBound_6212_, v___x_6213_, v___x_6214_, v___x_6215_, v_fixedParamPerms_6216_, v_next_6217_, v_inst_6218_, v_R_6219_, v_a_6220_, v_b_6221_, v_c_6222_);
lean_dec(v_a_6220_);
lean_dec(v_next_6217_);
lean_dec_ref(v_fixedParamPerms_6216_);
lean_dec(v___x_6215_);
lean_dec(v___x_6214_);
lean_dec_ref(v___x_6213_);
lean_dec(v_upperBound_6212_);
return v_res_6223_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object* v_upperBound_6224_, lean_object* v___x_6225_, lean_object* v___x_6226_, lean_object* v___x_6227_, lean_object* v_fixedParamPerms_6228_, lean_object* v_inst_6229_, lean_object* v_R_6230_, lean_object* v_a_6231_, lean_object* v_b_6232_, lean_object* v_c_6233_){
_start:
{
lean_object* v___x_6234_; 
v___x_6234_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_6224_, v___x_6225_, v___x_6226_, v___x_6227_, v_fixedParamPerms_6228_, v_a_6231_, v_b_6232_);
return v___x_6234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object* v_upperBound_6235_, lean_object* v___x_6236_, lean_object* v___x_6237_, lean_object* v___x_6238_, lean_object* v_fixedParamPerms_6239_, lean_object* v_inst_6240_, lean_object* v_R_6241_, lean_object* v_a_6242_, lean_object* v_b_6243_, lean_object* v_c_6244_){
_start:
{
lean_object* v_res_6245_; 
v_res_6245_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(v_upperBound_6235_, v___x_6236_, v___x_6237_, v___x_6238_, v_fixedParamPerms_6239_, v_inst_6240_, v_R_6241_, v_a_6242_, v_b_6243_, v_c_6244_);
lean_dec_ref(v_fixedParamPerms_6239_);
lean_dec(v___x_6238_);
lean_dec(v___x_6237_);
lean_dec_ref(v___x_6236_);
lean_dec(v_upperBound_6235_);
return v_res_6245_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object* v___x_6246_, lean_object* v___x_6247_, lean_object* v___x_6248_, lean_object* v_fixedParamPerms_6249_, lean_object* v_inst_6250_, lean_object* v_a_6251_){
_start:
{
lean_object* v___x_6252_; 
v___x_6252_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___redArg(v___x_6246_, v___x_6247_, v___x_6248_, v_fixedParamPerms_6249_, v_a_6251_);
return v___x_6252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object* v___x_6253_, lean_object* v___x_6254_, lean_object* v___x_6255_, lean_object* v_fixedParamPerms_6256_, lean_object* v_inst_6257_, lean_object* v_a_6258_){
_start:
{
lean_object* v_res_6259_; 
v_res_6259_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_FixedParamPerms_erase_spec__8(v___x_6253_, v___x_6254_, v___x_6255_, v_fixedParamPerms_6256_, v_inst_6257_, v_a_6258_);
lean_dec_ref(v_fixedParamPerms_6256_);
lean_dec(v___x_6255_);
lean_dec_ref(v___x_6254_);
lean_dec(v___x_6253_);
return v_res_6259_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object* v_upperBound_6260_, lean_object* v_inst_6261_, lean_object* v_R_6262_, lean_object* v_a_6263_, lean_object* v_b_6264_, lean_object* v_c_6265_){
_start:
{
lean_object* v___x_6266_; 
v___x_6266_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_6260_, v_a_6263_, v_b_6264_);
return v___x_6266_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object* v_upperBound_6267_, lean_object* v_inst_6268_, lean_object* v_R_6269_, lean_object* v_a_6270_, lean_object* v_b_6271_, lean_object* v_c_6272_){
_start:
{
lean_object* v_res_6273_; 
v_res_6273_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(v_upperBound_6267_, v_inst_6268_, v_R_6269_, v_a_6270_, v_b_6271_, v_c_6272_);
lean_dec(v_upperBound_6267_);
return v_res_6273_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object* v_upperBound_6274_, lean_object* v___x_6275_, lean_object* v___x_6276_, lean_object* v_inst_6277_, lean_object* v_R_6278_, lean_object* v_a_6279_, lean_object* v_b_6280_, lean_object* v_c_6281_){
_start:
{
lean_object* v___x_6282_; 
v___x_6282_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_6274_, v___x_6275_, v___x_6276_, v_a_6279_, v_b_6280_);
return v___x_6282_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object* v_upperBound_6283_, lean_object* v___x_6284_, lean_object* v___x_6285_, lean_object* v_inst_6286_, lean_object* v_R_6287_, lean_object* v_a_6288_, lean_object* v_b_6289_, lean_object* v_c_6290_){
_start:
{
lean_object* v_res_6291_; 
v_res_6291_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(v_upperBound_6283_, v___x_6284_, v___x_6285_, v_inst_6286_, v_R_6287_, v_a_6288_, v_b_6289_, v_c_6290_);
lean_dec(v___x_6285_);
lean_dec(v___x_6284_);
lean_dec(v_upperBound_6283_);
return v_res_6291_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6(lean_object* v_upperBound_6292_, lean_object* v___x_6293_, lean_object* v_fixedParamPerms_6294_, lean_object* v_next_6295_, lean_object* v___x_6296_, lean_object* v___x_6297_, lean_object* v_inst_6298_, lean_object* v_R_6299_, lean_object* v_a_6300_, lean_object* v_b_6301_, lean_object* v_c_6302_){
_start:
{
lean_object* v___x_6303_; 
v___x_6303_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___redArg(v_upperBound_6292_, v___x_6293_, v_fixedParamPerms_6294_, v_next_6295_, v___x_6296_, v___x_6297_, v_a_6300_, v_b_6301_);
return v___x_6303_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6___boxed(lean_object* v_upperBound_6304_, lean_object* v___x_6305_, lean_object* v_fixedParamPerms_6306_, lean_object* v_next_6307_, lean_object* v___x_6308_, lean_object* v___x_6309_, lean_object* v_inst_6310_, lean_object* v_R_6311_, lean_object* v_a_6312_, lean_object* v_b_6313_, lean_object* v_c_6314_){
_start:
{
lean_object* v_res_6315_; 
v_res_6315_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6_spec__6(v_upperBound_6304_, v___x_6305_, v_fixedParamPerms_6306_, v_next_6307_, v___x_6308_, v___x_6309_, v_inst_6310_, v_R_6311_, v_a_6312_, v_b_6313_, v_c_6314_);
lean_dec(v___x_6309_);
lean_dec(v___x_6308_);
lean_dec(v_next_6307_);
lean_dec_ref(v_fixedParamPerms_6306_);
lean_dec_ref(v___x_6305_);
lean_dec(v_upperBound_6304_);
return v_res_6315_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6316_; lean_object* v___x_6317_; 
v___x_6316_ = lean_box(0);
v___x_6317_ = l_unsafeCast___redArg(v___x_6316_);
return v___x_6317_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6319_; lean_object* v___x_6320_; lean_object* v___x_6321_; 
v___x_6319_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6320_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6321_ = l_Lean_Name_str___override(v___x_6320_, v___x_6319_);
return v___x_6321_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6323_; lean_object* v___x_6324_; lean_object* v___x_6325_; 
v___x_6323_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6324_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6325_ = l_Lean_Name_str___override(v___x_6324_, v___x_6323_);
return v___x_6325_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6326_; lean_object* v___x_6327_; lean_object* v___x_6328_; 
v___x_6326_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0));
v___x_6327_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6328_ = l_Lean_Name_str___override(v___x_6327_, v___x_6326_);
return v___x_6328_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; 
v___x_6330_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6331_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6332_ = l_Lean_Name_str___override(v___x_6331_, v___x_6330_);
return v___x_6332_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; 
v___x_6334_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6335_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6336_ = l_Lean_Name_str___override(v___x_6335_, v___x_6334_);
return v___x_6336_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6337_; lean_object* v___x_6338_; lean_object* v___x_6339_; 
v___x_6337_ = lean_unsigned_to_nat(0u);
v___x_6338_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6339_ = l_Lean_Name_num___override(v___x_6338_, v___x_6337_);
return v___x_6339_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6341_; lean_object* v___x_6342_; lean_object* v___x_6343_; 
v___x_6341_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6342_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6343_ = l_Lean_Name_str___override(v___x_6342_, v___x_6341_);
return v___x_6343_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6345_; lean_object* v___x_6346_; lean_object* v___x_6347_; 
v___x_6345_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6346_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6347_ = l_Lean_Name_str___override(v___x_6346_, v___x_6345_);
return v___x_6347_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6350_; 
v___x_6348_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6349_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6350_ = l_Lean_Name_str___override(v___x_6349_, v___x_6348_);
return v___x_6350_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; 
v___x_6351_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0));
v___x_6352_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6353_ = l_Lean_Name_str___override(v___x_6352_, v___x_6351_);
return v___x_6353_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6354_; lean_object* v___x_6355_; lean_object* v___x_6356_; 
v___x_6354_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6355_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6356_ = l_Lean_Name_str___override(v___x_6355_, v___x_6354_);
return v___x_6356_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6357_; lean_object* v___x_6358_; lean_object* v___x_6359_; 
v___x_6357_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6358_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6359_ = l_Lean_Name_str___override(v___x_6358_, v___x_6357_);
return v___x_6359_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6360_; lean_object* v___x_6361_; lean_object* v___x_6362_; 
v___x_6360_ = lean_unsigned_to_nat(791000795u);
v___x_6361_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6362_ = l_Lean_Name_num___override(v___x_6361_, v___x_6360_);
return v___x_6362_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6364_; lean_object* v___x_6365_; lean_object* v___x_6366_; 
v___x_6364_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6365_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6366_ = l_Lean_Name_str___override(v___x_6365_, v___x_6364_);
return v___x_6366_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6368_; lean_object* v___x_6369_; lean_object* v___x_6370_; 
v___x_6368_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_));
v___x_6369_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6370_ = l_Lean_Name_str___override(v___x_6369_, v___x_6368_);
return v___x_6370_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6371_; lean_object* v___x_6372_; lean_object* v___x_6373_; 
v___x_6371_ = lean_unsigned_to_nat(2u);
v___x_6372_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6373_ = l_Lean_Name_num___override(v___x_6372_, v___x_6371_);
return v___x_6373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6375_; uint8_t v___x_6376_; lean_object* v___x_6377_; lean_object* v___x_6378_; 
v___x_6375_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3));
v___x_6376_ = 0;
v___x_6377_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_);
v___x_6378_ = l_Lean_registerTraceClass(v___x_6375_, v___x_6376_, v___x_6377_);
return v___x_6378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2____boxed(lean_object* v_a_6379_){
_start:
{
lean_object* v_res_6380_; 
v_res_6380_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
return v_res_6380_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_791000795____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
}
#ifdef __cplusplus
}
#endif

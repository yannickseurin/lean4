// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.PackMutual
// Imports: public import Lean.Meta.ArgsPacker public import Lean.Elab.PreDefinition.WF.Eqns
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
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_pack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_uncurryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAsAxiom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_curryProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* l_Lean_Meta_ArgsPacker_numFuncs(lean_object*);
uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object*);
uint8_t l_Lean_Meta_ArgsPacker_onlyOneUnary(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_withAppN___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Failed to eta-expand partial application"};
static const lean_object* l_Lean_Elab_WF_withAppN___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_WF_withAppN___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_WF_withAppN___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_withAppN___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_WF_withAppN___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_withAppN___closed__0;
static lean_once_cell_t l_Lean_Elab_WF_withAppN___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_withAppN___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_packCalls_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_packCalls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_WF_packCalls___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_WF_packCalls___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_WF_packCalls___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_packCalls___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Elab.PreDefinition.WF.PackMutual"};
static const lean_object* l_Lean_Elab_WF_packCalls___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_WF_packCalls___lam__2___closed__0_value;
static const lean_string_object l_Lean_Elab_WF_packCalls___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Elab.WF.packCalls"};
static const lean_object* l_Lean_Elab_WF_packCalls___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_WF_packCalls___lam__2___closed__1_value;
static const lean_string_object l_Lean_Elab_WF_packCalls___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "assertion violation: fidx < fixedParamPerms.perms.size\n      "};
static const lean_object* l_Lean_Elab_WF_packCalls___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_WF_packCalls___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Elab_WF_packCalls___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_packCalls___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13___boxed__const__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_WF_packCalls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_WF_packCalls___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_WF_packCalls___closed__0 = (const lean_object*)&l_Lean_Elab_WF_packCalls___closed__0_value;
static lean_once_cell_t l_Lean_Elab_WF_packCalls___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_packCalls___closed__1;
static const lean_string_object l_Lean_Elab_WF_packCalls___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Not a forall: "};
static const lean_object* l_Lean_Elab_WF_packCalls___closed__2 = (const lean_object*)&l_Lean_Elab_WF_packCalls___closed__2_value;
static lean_once_cell_t l_Lean_Elab_WF_packCalls___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_packCalls___closed__3;
static const lean_string_object l_Lean_Elab_WF_packCalls___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Elab_WF_packCalls___closed__4 = (const lean_object*)&l_Lean_Elab_WF_packCalls___closed__4_value;
static lean_once_cell_t l_Lean_Elab_WF_packCalls___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_packCalls___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_mutualName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_unary"};
static const lean_object* l_Lean_Elab_WF_mutualName___closed__0 = (const lean_object*)&l_Lean_Elab_WF_mutualName___closed__0_value;
static const lean_ctor_object l_Lean_Elab_WF_mutualName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mutualName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(110, 103, 179, 87, 16, 42, 175, 175)}};
static const lean_object* l_Lean_Elab_WF_mutualName___closed__1 = (const lean_object*)&l_Lean_Elab_WF_mutualName___closed__1_value;
static const lean_string_object l_Lean_Elab_WF_mutualName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_mutual"};
static const lean_object* l_Lean_Elab_WF_mutualName___closed__2 = (const lean_object*)&l_Lean_Elab_WF_mutualName___closed__2_value;
static const lean_ctor_object l_Lean_Elab_WF_mutualName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_WF_mutualName___closed__2_value),LEAN_SCALAR_PTR_LITERAL(60, 96, 167, 116, 153, 200, 47, 59)}};
static const lean_object* l_Lean_Elab_WF_mutualName___closed__3 = (const lean_object*)&l_Lean_Elab_WF_mutualName___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mutualName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mutualName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_WF_packMutual_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_WF_varyingVarNames___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Elab.WF.varyingVarNames"};
static const lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_WF_varyingVarNames___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "assertion violation: xs.size = arity\n    "};
static const lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2;
static const lean_string_object l_Lean_Elab_WF_varyingVarNames___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "assertion violation: fixedParamPerms.perms[preDefIdx]!.size = arity\n    "};
static const lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__3_value;
static lean_once_cell_t l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4;
static const lean_array_object l_Lean_Elab_WF_varyingVarNames___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_WF_varyingVarNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_WF_varyingVarNames___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_WF_varyingVarNames___closed__0 = (const lean_object*)&l_Lean_Elab_WF_varyingVarNames___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.WF.preDefsFromUnaryNonRec"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "assertion violation: arity = params.size\n        "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wf"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(lean_object* v_type_19_, lean_object* v_maxFVars_x3f_20_, lean_object* v_k_21_, uint8_t v_cleanupAnnotations_22_, uint8_t v_whnfType_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v___f_29_; lean_object* v___x_30_; 
v___f_29_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_29_, 0, v_k_21_);
v___x_30_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_19_, v_maxFVars_x3f_20_, v___f_29_, v_cleanupAnnotations_22_, v_whnfType_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v___x_30_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_a_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_46_; 
v_a_39_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_46_ == 0)
{
v___x_41_ = v___x_30_;
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v___x_30_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_44_; 
if (v_isShared_42_ == 0)
{
v___x_44_ = v___x_41_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_a_39_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___boxed(lean_object* v_type_47_, lean_object* v_maxFVars_x3f_48_, lean_object* v_k_49_, lean_object* v_cleanupAnnotations_50_, lean_object* v_whnfType_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_57_; uint8_t v_whnfType_boxed_58_; lean_object* v_res_59_; 
v_cleanupAnnotations_boxed_57_ = lean_unbox(v_cleanupAnnotations_50_);
v_whnfType_boxed_58_ = lean_unbox(v_whnfType_51_);
v_res_59_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(v_type_47_, v_maxFVars_x3f_48_, v_k_49_, v_cleanupAnnotations_boxed_57_, v_whnfType_boxed_58_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1(lean_object* v_00_u03b1_60_, lean_object* v_type_61_, lean_object* v_maxFVars_x3f_62_, lean_object* v_k_63_, uint8_t v_cleanupAnnotations_64_, uint8_t v_whnfType_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(v_type_61_, v_maxFVars_x3f_62_, v_k_63_, v_cleanupAnnotations_64_, v_whnfType_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___boxed(lean_object* v_00_u03b1_72_, lean_object* v_type_73_, lean_object* v_maxFVars_x3f_74_, lean_object* v_k_75_, lean_object* v_cleanupAnnotations_76_, lean_object* v_whnfType_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_83_; uint8_t v_whnfType_boxed_84_; lean_object* v_res_85_; 
v_cleanupAnnotations_boxed_83_ = lean_unbox(v_cleanupAnnotations_76_);
v_whnfType_boxed_84_ = lean_unbox(v_whnfType_77_);
v_res_85_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1(v_00_u03b1_72_, v_type_73_, v_maxFVars_x3f_74_, v_k_75_, v_cleanupAnnotations_boxed_83_, v_whnfType_boxed_84_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0(lean_object* v_msgData_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v___x_92_; lean_object* v_env_93_; lean_object* v___x_94_; lean_object* v_toCold_95_; lean_object* v_mctx_96_; lean_object* v_lctx_97_; lean_object* v_options_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_92_ = lean_st_ref_get(v___y_90_);
v_env_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc_ref(v_env_93_);
lean_dec(v___x_92_);
v___x_94_ = lean_st_ref_get(v___y_88_);
v_toCold_95_ = lean_ctor_get(v___y_89_, 0);
v_mctx_96_ = lean_ctor_get(v___x_94_, 0);
lean_inc_ref(v_mctx_96_);
lean_dec(v___x_94_);
v_lctx_97_ = lean_ctor_get(v___y_87_, 2);
v_options_98_ = lean_ctor_get(v_toCold_95_, 2);
lean_inc_ref(v_options_98_);
lean_inc_ref(v_lctx_97_);
v___x_99_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_99_, 0, v_env_93_);
lean_ctor_set(v___x_99_, 1, v_mctx_96_);
lean_ctor_set(v___x_99_, 2, v_lctx_97_);
lean_ctor_set(v___x_99_, 3, v_options_98_);
v___x_100_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v_msgData_86_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0___boxed(lean_object* v_msgData_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0(v_msgData_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(lean_object* v_msg_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_ref_115_; lean_object* v___x_116_; lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_125_; 
v_ref_115_ = lean_ctor_get(v___y_112_, 2);
v___x_116_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0(v_msg_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
v_a_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_125_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; lean_object* v___x_123_; 
lean_inc(v_ref_115_);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v_ref_115_);
lean_ctor_set(v___x_121_, 1, v_a_117_);
if (v_isShared_120_ == 0)
{
lean_ctor_set_tag(v___x_119_, 1);
lean_ctor_set(v___x_119_, 0, v___x_121_);
v___x_123_ = v___x_119_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg___boxed(lean_object* v_msg_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(v_msg_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
return v_res_132_;
}
}
static lean_object* _init_l_Lean_Elab_WF_withAppN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = ((lean_object*)(l_Lean_Elab_WF_withAppN___lam__0___closed__0));
v___x_135_ = l_Lean_stringToMessageData(v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___lam__0(lean_object* v_args_136_, lean_object* v_k_137_, uint8_t v___x_138_, lean_object* v_missing_139_, lean_object* v_xs_140_, lean_object* v_x_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_154_ = lean_array_get_size(v_xs_140_);
v___x_155_ = lean_nat_dec_lt(v___x_154_, v_missing_139_);
if (v___x_155_ == 0)
{
goto v___jp_147_;
}
else
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
lean_dec_ref(v_xs_140_);
lean_dec_ref(v_k_137_);
lean_dec_ref(v_args_136_);
v___x_156_ = lean_obj_once(&l_Lean_Elab_WF_withAppN___lam__0___closed__1, &l_Lean_Elab_WF_withAppN___lam__0___closed__1_once, _init_l_Lean_Elab_WF_withAppN___lam__0___closed__1);
v___x_157_ = l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(v___x_156_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
v_a_158_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_165_ == 0)
{
v___x_160_ = v___x_157_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_157_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_158_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
v___jp_147_:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = l_Array_append___redArg(v_args_136_, v_xs_140_);
lean_inc(v___y_145_);
lean_inc_ref(v___y_144_);
lean_inc(v___y_143_);
lean_inc_ref(v___y_142_);
v___x_149_ = lean_apply_6(v_k_137_, v___x_148_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, lean_box(0));
if (lean_obj_tag(v___x_149_) == 0)
{
lean_object* v_a_150_; uint8_t v___x_151_; uint8_t v___x_152_; lean_object* v___x_153_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_a_150_);
lean_dec_ref_known(v___x_149_, 1);
v___x_151_ = 1;
v___x_152_ = 1;
v___x_153_ = l_Lean_Meta_mkLambdaFVars(v_xs_140_, v_a_150_, v___x_138_, v___x_151_, v___x_138_, v___x_151_, v___x_152_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
return v___x_153_;
}
else
{
lean_dec_ref(v_xs_140_);
return v___x_149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___lam__0___boxed(lean_object* v_args_166_, lean_object* v_k_167_, lean_object* v___x_168_, lean_object* v_missing_169_, lean_object* v_xs_170_, lean_object* v_x_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
uint8_t v___x_2232__boxed_177_; lean_object* v_res_178_; 
v___x_2232__boxed_177_ = lean_unbox(v___x_168_);
v_res_178_ = l_Lean_Elab_WF_withAppN___lam__0(v_args_166_, v_k_167_, v___x_2232__boxed_177_, v_missing_169_, v_xs_170_, v_x_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec_ref(v_x_171_);
lean_dec(v_missing_169_);
return v_res_178_;
}
}
static lean_object* _init_l_Lean_Elab_WF_withAppN___closed__0(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_box(0);
v___x_180_ = l_unsafeCast___redArg(v___x_179_);
return v___x_180_;
}
}
static lean_object* _init_l_Lean_Elab_WF_withAppN___closed__1(void){
_start:
{
lean_object* v___x_181_; lean_object* v_dummy_182_; 
v___x_181_ = lean_obj_once(&l_Lean_Elab_WF_withAppN___closed__0, &l_Lean_Elab_WF_withAppN___closed__0_once, _init_l_Lean_Elab_WF_withAppN___closed__0);
v_dummy_182_ = l_Lean_Expr_sort___override(v___x_181_);
return v_dummy_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN(lean_object* v_n_183_, lean_object* v_e_184_, lean_object* v_k_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_dummy_191_; lean_object* v_nargs_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v_args_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v_dummy_191_ = lean_obj_once(&l_Lean_Elab_WF_withAppN___closed__1, &l_Lean_Elab_WF_withAppN___closed__1_once, _init_l_Lean_Elab_WF_withAppN___closed__1);
v_nargs_192_ = l_Lean_Expr_getAppNumArgs(v_e_184_);
lean_inc(v_nargs_192_);
v___x_193_ = lean_mk_array(v_nargs_192_, v_dummy_191_);
v___x_194_ = lean_unsigned_to_nat(1u);
v___x_195_ = lean_nat_sub(v_nargs_192_, v___x_194_);
lean_dec(v_nargs_192_);
lean_inc_ref(v_e_184_);
v_args_196_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_184_, v___x_193_, v___x_195_);
v___x_197_ = lean_array_get_size(v_args_196_);
v___x_198_ = lean_nat_dec_le(v_n_183_, v___x_197_);
if (v___x_198_ == 0)
{
lean_object* v_missing_199_; lean_object* v___x_200_; lean_object* v___f_201_; lean_object* v___x_202_; 
v_missing_199_ = lean_nat_sub(v_n_183_, v___x_197_);
lean_dec(v_n_183_);
v___x_200_ = lean_box(v___x_198_);
lean_inc(v_missing_199_);
v___f_201_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_withAppN___lam__0___boxed), 11, 4);
lean_closure_set(v___f_201_, 0, v_args_196_);
lean_closure_set(v___f_201_, 1, v_k_185_);
lean_closure_set(v___f_201_, 2, v___x_200_);
lean_closure_set(v___f_201_, 3, v_missing_199_);
lean_inc(v_a_189_);
lean_inc_ref(v_a_188_);
lean_inc(v_a_187_);
lean_inc_ref(v_a_186_);
v___x_202_ = lean_infer_type(v_e_184_, v_a_186_, v_a_187_, v_a_188_, v_a_189_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_211_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_211_ == 0)
{
v___x_205_ = v___x_202_;
v_isShared_206_ = v_isSharedCheck_211_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_202_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_211_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_206_ == 0)
{
lean_ctor_set_tag(v___x_205_, 1);
lean_ctor_set(v___x_205_, 0, v_missing_199_);
v___x_208_ = v___x_205_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_missing_199_);
v___x_208_ = v_reuseFailAlloc_210_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(v_a_203_, v___x_208_, v___f_201_, v___x_198_, v___x_198_, v_a_186_, v_a_187_, v_a_188_, v_a_189_);
return v___x_209_;
}
}
}
else
{
lean_dec_ref(v___f_201_);
lean_dec(v_missing_199_);
return v___x_202_;
}
}
else
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
lean_dec_ref(v_e_184_);
v___x_212_ = lean_unsigned_to_nat(0u);
lean_inc(v_n_183_);
lean_inc_ref(v_args_196_);
v___x_213_ = l_Array_toSubarray___redArg(v_args_196_, v___x_212_, v_n_183_);
v___x_214_ = l_Subarray_copy___redArg(v___x_213_);
lean_inc(v_a_189_);
lean_inc_ref(v_a_188_);
lean_inc(v_a_187_);
lean_inc_ref(v_a_186_);
v___x_215_ = lean_apply_6(v_k_185_, v___x_214_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, lean_box(0));
if (lean_obj_tag(v___x_215_) == 0)
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_230_; 
v_a_216_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_230_ == 0)
{
v___x_218_ = v___x_215_;
v_isShared_219_ = v_isSharedCheck_230_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_215_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_230_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v_lower_221_; lean_object* v_upper_222_; uint8_t v___x_229_; 
v___x_229_ = lean_nat_dec_le(v_n_183_, v___x_212_);
if (v___x_229_ == 0)
{
v_lower_221_ = v_n_183_;
v_upper_222_ = v___x_197_;
goto v___jp_220_;
}
else
{
lean_dec(v_n_183_);
v_lower_221_ = v___x_212_;
v_upper_222_ = v___x_197_;
goto v___jp_220_;
}
v___jp_220_:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_227_; 
v___x_223_ = l_Array_toSubarray___redArg(v_args_196_, v_lower_221_, v_upper_222_);
v___x_224_ = l_Subarray_copy___redArg(v___x_223_);
v___x_225_ = l_Lean_mkAppN(v_a_216_, v___x_224_);
lean_dec_ref(v___x_224_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 0, v___x_225_);
v___x_227_ = v___x_218_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_225_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
else
{
lean_dec_ref(v_args_196_);
lean_dec(v_n_183_);
return v___x_215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_withAppN___boxed(lean_object* v_n_231_, lean_object* v_e_232_, lean_object* v_k_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Elab_WF_withAppN(v_n_231_, v_e_232_, v_k_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_a_235_);
lean_dec_ref(v_a_234_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0(lean_object* v_00_u03b1_240_, lean_object* v_msg_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(v_msg_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___boxed(lean_object* v_00_u03b1_248_, lean_object* v_msg_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0(v_00_u03b1_248_, v_msg_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_packCalls_spec__1(lean_object* v_msg_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
lean_object* v___f_263_; lean_object* v___x_1219__overap_264_; lean_object* v___x_265_; 
v___f_263_ = ((lean_object*)(l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0));
v___x_1219__overap_264_ = lean_panic_fn_borrowed(v___f_263_, v_msg_257_);
lean_inc(v___y_261_);
lean_inc_ref(v___y_260_);
lean_inc(v___y_259_);
lean_inc_ref(v___y_258_);
v___x_265_ = lean_apply_5(v___x_1219__overap_264_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, lean_box(0));
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_packCalls_spec__1___boxed(lean_object* v_msg_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_panic___at___00Lean_Elab_WF_packCalls_spec__1(v_msg_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_);
lean_dec(v___y_270_);
lean_dec_ref(v___y_269_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__0(lean_object* v_x_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__0___closed__0));
v___x_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__0___boxed(lean_object* v_x_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lean_Elab_WF_packCalls___lam__0(v_x_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_);
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
lean_dec(v___y_285_);
lean_dec_ref(v___y_284_);
lean_dec_ref(v_x_283_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__1(lean_object* v___x_290_, lean_object* v_argsPacker_291_, lean_object* v___x_292_, lean_object* v_val_293_, lean_object* v_newF_294_, lean_object* v_args_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v___x_290_, v_args_295_);
v___x_302_ = l_Lean_Meta_ArgsPacker_pack(v_argsPacker_291_, v___x_292_, v_val_293_, v___x_301_, v___y_296_, v___y_297_, v___y_298_, v___y_299_);
lean_dec_ref(v___x_301_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_311_; 
v_a_303_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_311_ == 0)
{
v___x_305_ = v___x_302_;
v_isShared_306_ = v_isSharedCheck_311_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_311_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_307_ = l_Lean_Expr_app___override(v_newF_294_, v_a_303_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_307_);
v___x_309_ = v___x_305_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_307_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
else
{
lean_dec_ref(v_newF_294_);
return v___x_302_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__1___boxed(lean_object* v___x_312_, lean_object* v_argsPacker_313_, lean_object* v___x_314_, lean_object* v_val_315_, lean_object* v_newF_316_, lean_object* v_args_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_Elab_WF_packCalls___lam__1(v___x_312_, v_argsPacker_313_, v___x_314_, v_val_315_, v_newF_316_, v_args_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
lean_dec_ref(v_args_317_);
lean_dec_ref(v_argsPacker_313_);
lean_dec_ref(v___x_312_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2(lean_object* v_xs_324_, lean_object* v_v_325_, lean_object* v_i_326_){
_start:
{
lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_327_ = lean_array_get_size(v_xs_324_);
v___x_328_ = lean_nat_dec_lt(v_i_326_, v___x_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; 
lean_dec(v_i_326_);
v___x_329_ = lean_box(0);
return v___x_329_;
}
else
{
lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_330_ = lean_array_fget_borrowed(v_xs_324_, v_i_326_);
v___x_331_ = lean_name_eq(v___x_330_, v_v_325_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_unsigned_to_nat(1u);
v___x_333_ = lean_nat_add(v_i_326_, v___x_332_);
lean_dec(v_i_326_);
v_i_326_ = v___x_333_;
goto _start;
}
else
{
lean_object* v___x_335_; 
v___x_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_335_, 0, v_i_326_);
return v___x_335_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2___boxed(lean_object* v_xs_336_, lean_object* v_v_337_, lean_object* v_i_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2(v_xs_336_, v_v_337_, v_i_338_);
lean_dec(v_v_337_);
lean_dec_ref(v_xs_336_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0(lean_object* v_xs_340_, lean_object* v_v_341_){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_342_ = lean_unsigned_to_nat(0u);
v___x_343_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0_spec__2(v_xs_340_, v_v_341_, v___x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0___boxed(lean_object* v_xs_344_, lean_object* v_v_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0(v_xs_344_, v_v_345_);
lean_dec(v_v_345_);
lean_dec_ref(v_xs_344_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0(lean_object* v_xs_347_, lean_object* v_v_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0_spec__0(v_xs_347_, v_v_348_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v___x_350_; 
v___x_350_ = lean_box(0);
return v___x_350_;
}
else
{
lean_object* v_val_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_358_; 
v_val_351_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_358_ == 0)
{
v___x_353_ = v___x_349_;
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_val_351_);
lean_dec(v___x_349_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_val_351_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0___boxed(lean_object* v_xs_359_, lean_object* v_v_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0(v_xs_359_, v_v_360_);
lean_dec(v_v_360_);
lean_dec_ref(v_xs_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2(lean_object* v_val_362_, lean_object* v___x_363_, size_t v_sz_364_, size_t v_i_365_, lean_object* v_bs_366_){
_start:
{
uint8_t v___x_367_; 
v___x_367_ = lean_usize_dec_lt(v_i_365_, v_sz_364_);
if (v___x_367_ == 0)
{
lean_object* v___x_368_; 
v___x_368_ = l_unsafeCast___redArg(v_bs_366_);
lean_dec_ref(v_bs_366_);
return v___x_368_;
}
else
{
lean_object* v_v_369_; lean_object* v___x_370_; lean_object* v_bs_x27_371_; uint8_t v___y_373_; lean_object* v___x_380_; 
v_v_369_ = lean_array_uget(v_bs_366_, v_i_365_);
v___x_370_ = lean_unsigned_to_nat(0u);
v_bs_x27_371_ = lean_array_uset(v_bs_366_, v_i_365_, v___x_370_);
v___x_380_ = l_unsafeCast___redArg(v_v_369_);
lean_dec(v_v_369_);
if (lean_obj_tag(v___x_380_) == 0)
{
uint8_t v___x_381_; 
v___x_381_ = 0;
v___y_373_ = v___x_381_;
goto v___jp_372_;
}
else
{
uint8_t v___x_382_; 
lean_dec_ref_known(v___x_380_, 1);
v___x_382_ = lean_nat_dec_lt(v_val_362_, v___x_363_);
v___y_373_ = v___x_382_;
goto v___jp_372_;
}
v___jp_372_:
{
size_t v___x_374_; size_t v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_374_ = ((size_t)1ULL);
v___x_375_ = lean_usize_add(v_i_365_, v___x_374_);
v___x_376_ = lean_box(v___y_373_);
v___x_377_ = l_unsafeCast___redArg(v___x_376_);
lean_dec(v___x_376_);
v___x_378_ = lean_array_uset(v_bs_x27_371_, v_i_365_, v___x_377_);
v_i_365_ = v___x_375_;
v_bs_366_ = v___x_378_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2___boxed(lean_object* v_val_383_, lean_object* v___x_384_, lean_object* v_sz_385_, lean_object* v_i_386_, lean_object* v_bs_387_){
_start:
{
size_t v_sz_boxed_388_; size_t v_i_boxed_389_; lean_object* v_res_390_; 
v_sz_boxed_388_ = lean_unbox_usize(v_sz_385_);
lean_dec(v_sz_385_);
v_i_boxed_389_ = lean_unbox_usize(v_i_386_);
lean_dec(v_i_386_);
v_res_390_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2(v_val_383_, v___x_384_, v_sz_boxed_388_, v_i_boxed_389_, v_bs_387_);
lean_dec(v___x_384_);
lean_dec(v_val_383_);
return v_res_390_;
}
}
static lean_object* _init_l_Lean_Elab_WF_packCalls___lam__2___closed__3(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_394_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__2));
v___x_395_ = lean_unsigned_to_nat(6u);
v___x_396_ = lean_unsigned_to_nat(55u);
v___x_397_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__1));
v___x_398_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__0));
v___x_399_ = l_mkPanicMessageWithDecl(v___x_398_, v___x_397_, v___x_396_, v___x_395_, v___x_394_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__2(lean_object* v_funNames_400_, lean_object* v_fixedParamPerms_401_, lean_object* v___x_402_, lean_object* v_argsPacker_403_, lean_object* v___x_404_, lean_object* v_newF_405_, lean_object* v_e_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = l_Lean_Expr_getAppFn(v_e_406_);
v___x_413_ = l_Lean_Expr_isConst(v___x_412_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; lean_object* v___x_415_; 
lean_dec_ref(v___x_412_);
lean_dec_ref(v_newF_405_);
lean_dec_ref(v___x_404_);
lean_dec_ref(v_argsPacker_403_);
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v_e_406_);
v___x_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
return v___x_415_;
}
else
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = l_Lean_Expr_constName_x21(v___x_412_);
lean_dec_ref(v___x_412_);
v___x_417_ = l_Array_idxOf_x3f___at___00Lean_Elab_WF_packCalls_spec__0(v_funNames_400_, v___x_416_);
lean_dec(v___x_416_);
if (lean_obj_tag(v___x_417_) == 1)
{
lean_object* v_val_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_455_; 
v_val_418_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_455_ == 0)
{
v___x_420_ = v___x_417_;
v_isShared_421_ = v_isSharedCheck_455_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_val_418_);
lean_dec(v___x_417_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_455_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v_perms_422_; lean_object* v___x_423_; uint8_t v___x_424_; 
v_perms_422_ = lean_ctor_get(v_fixedParamPerms_401_, 1);
v___x_423_ = lean_array_get_size(v_perms_422_);
v___x_424_ = lean_nat_dec_lt(v_val_418_, v___x_423_);
if (v___x_424_ == 0)
{
lean_object* v___x_425_; lean_object* v___x_426_; 
lean_del_object(v___x_420_);
lean_dec(v_val_418_);
lean_dec_ref(v_e_406_);
lean_dec_ref(v_newF_405_);
lean_dec_ref(v___x_404_);
lean_dec_ref(v_argsPacker_403_);
v___x_425_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___lam__2___closed__3, &l_Lean_Elab_WF_packCalls___lam__2___closed__3_once, _init_l_Lean_Elab_WF_packCalls___lam__2___closed__3);
v___x_426_ = l_panic___at___00Lean_Elab_WF_packCalls_spec__1(v___x_425_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
return v___x_426_;
}
else
{
lean_object* v___x_427_; lean_object* v___f_428_; size_t v_sz_429_; size_t v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_427_ = lean_array_get_borrowed(v___x_402_, v_perms_422_, v_val_418_);
lean_inc(v_val_418_);
lean_inc(v___x_427_);
v___f_428_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_packCalls___lam__1___boxed), 11, 5);
lean_closure_set(v___f_428_, 0, v___x_427_);
lean_closure_set(v___f_428_, 1, v_argsPacker_403_);
lean_closure_set(v___f_428_, 2, v___x_404_);
lean_closure_set(v___f_428_, 3, v_val_418_);
lean_closure_set(v___f_428_, 4, v_newF_405_);
v_sz_429_ = lean_array_size(v___x_427_);
v___x_430_ = ((size_t)0ULL);
v___x_431_ = l_unsafeCast___redArg(v___x_427_);
v___x_432_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packCalls_spec__2(v_val_418_, v___x_423_, v_sz_429_, v___x_430_, v___x_431_);
lean_dec(v_val_418_);
v___x_433_ = l_unsafeCast___redArg(v___x_432_);
lean_dec_ref(v___x_432_);
v___x_434_ = lean_array_get_size(v___x_433_);
lean_dec(v___x_433_);
v___x_435_ = l_Lean_Elab_WF_withAppN(v___x_434_, v_e_406_, v___f_428_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_446_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_446_ == 0)
{
v___x_438_ = v___x_435_;
v_isShared_439_ = v_isSharedCheck_446_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_435_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_446_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_421_ == 0)
{
lean_ctor_set_tag(v___x_420_, 0);
lean_ctor_set(v___x_420_, 0, v_a_436_);
v___x_441_ = v___x_420_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_445_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
lean_object* v___x_443_; 
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_441_);
v___x_443_ = v___x_438_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_441_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_del_object(v___x_420_);
v_a_447_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_435_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_435_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
}
else
{
lean_object* v___x_456_; lean_object* v___x_457_; 
lean_dec(v___x_417_);
lean_dec_ref(v_newF_405_);
lean_dec_ref(v___x_404_);
lean_dec_ref(v_argsPacker_403_);
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v_e_406_);
v___x_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___lam__2___boxed(lean_object* v_funNames_458_, lean_object* v_fixedParamPerms_459_, lean_object* v___x_460_, lean_object* v_argsPacker_461_, lean_object* v___x_462_, lean_object* v_newF_463_, lean_object* v_e_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lean_Elab_WF_packCalls___lam__2(v_funNames_458_, v_fixedParamPerms_459_, v___x_460_, v_argsPacker_461_, v___x_462_, v_newF_463_, v_e_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
lean_dec(v___y_468_);
lean_dec_ref(v___y_467_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec_ref(v___x_460_);
lean_dec_ref(v_fixedParamPerms_459_);
lean_dec_ref(v_funNames_458_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0(lean_object* v_00_u03b1_471_, lean_object* v_x_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_478_ = lean_apply_1(v_x_472_, lean_box(0));
v___x_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0___boxed(lean_object* v_00_u03b1_480_, lean_object* v_x_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0(v_00_u03b1_480_, v_x_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
return v_res_487_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = l_Lean_maxRecDepthErrorMessage;
v___x_494_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__3);
v___x_496_ = l_Lean_MessageData_ofFormat(v___x_495_);
return v___x_496_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_497_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__4);
v___x_498_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__2));
v___x_499_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
lean_ctor_set(v___x_499_, 1, v___x_497_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg(lean_object* v_ref_500_){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_502_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___closed__5);
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v_ref_500_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
v___x_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg___boxed(lean_object* v_ref_505_, lean_object* v___y_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg(v_ref_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg(lean_object* v_x_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
lean_object* v___y_516_; lean_object* v_toCold_525_; lean_object* v_currRecDepth_526_; lean_object* v_ref_527_; uint8_t v_diag_528_; uint8_t v_suppressElabErrors_529_; lean_object* v_maxRecDepth_535_; lean_object* v___x_536_; uint8_t v___x_537_; 
v_toCold_525_ = lean_ctor_get(v___y_512_, 0);
v_currRecDepth_526_ = lean_ctor_get(v___y_512_, 1);
v_ref_527_ = lean_ctor_get(v___y_512_, 2);
v_diag_528_ = lean_ctor_get_uint8(v___y_512_, sizeof(void*)*3);
v_suppressElabErrors_529_ = lean_ctor_get_uint8(v___y_512_, sizeof(void*)*3 + 1);
v_maxRecDepth_535_ = lean_ctor_get(v_toCold_525_, 3);
v___x_536_ = lean_unsigned_to_nat(0u);
v___x_537_ = lean_nat_dec_eq(v_maxRecDepth_535_, v___x_536_);
if (v___x_537_ == 0)
{
uint8_t v___x_538_; 
v___x_538_ = lean_nat_dec_eq(v_currRecDepth_526_, v_maxRecDepth_535_);
if (v___x_538_ == 0)
{
goto v___jp_530_;
}
else
{
lean_object* v___x_539_; 
lean_dec_ref(v_x_508_);
lean_inc(v_ref_527_);
v___x_539_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg(v_ref_527_);
v___y_516_ = v___x_539_;
goto v___jp_515_;
}
}
else
{
goto v___jp_530_;
}
v___jp_515_:
{
if (lean_obj_tag(v___y_516_) == 0)
{
return v___y_516_;
}
else
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
v_a_517_ = lean_ctor_get(v___y_516_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___y_516_);
if (v_isSharedCheck_524_ == 0)
{
v___x_519_ = v___y_516_;
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___y_516_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_522_; 
if (v_isShared_520_ == 0)
{
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_517_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
}
v___jp_530_:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_531_ = lean_unsigned_to_nat(1u);
v___x_532_ = lean_nat_add(v_currRecDepth_526_, v___x_531_);
lean_inc(v_ref_527_);
lean_inc_ref(v_toCold_525_);
v___x_533_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_533_, 0, v_toCold_525_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
lean_ctor_set(v___x_533_, 2, v_ref_527_);
lean_ctor_set_uint8(v___x_533_, sizeof(void*)*3, v_diag_528_);
lean_ctor_set_uint8(v___x_533_, sizeof(void*)*3 + 1, v_suppressElabErrors_529_);
lean_inc(v___y_513_);
lean_inc(v___y_511_);
lean_inc_ref(v___y_510_);
lean_inc(v___y_509_);
v___x_534_ = lean_apply_6(v_x_508_, v___y_509_, v___y_510_, v___y_511_, v___x_533_, v___y_513_, lean_box(0));
v___y_516_ = v___x_534_;
goto v___jp_515_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg___boxed(lean_object* v_x_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg(v_x_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__2(lean_object* v___x_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v___x_548_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__2___boxed(lean_object* v___x_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__2(v___x_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_558_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0(lean_object* v_k_562_, lean_object* v___y_563_, lean_object* v_b_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v___x_570_; 
lean_inc(v___y_568_);
lean_inc_ref(v___y_567_);
lean_inc(v___y_566_);
lean_inc_ref(v___y_565_);
lean_inc(v___y_563_);
v___x_570_ = lean_apply_7(v_k_562_, v_b_564_, v___y_563_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, lean_box(0));
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0___boxed(lean_object* v_k_571_, lean_object* v___y_572_, lean_object* v_b_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0(v_k_571_, v___y_572_, v_b_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_572_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg(lean_object* v_name_580_, lean_object* v_type_581_, lean_object* v_val_582_, lean_object* v_k_583_, uint8_t v_nondep_584_, uint8_t v_kind_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v___f_592_; lean_object* v___x_593_; 
lean_inc(v___y_586_);
v___f_592_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_592_, 0, v_k_583_);
lean_closure_set(v___f_592_, 1, v___y_586_);
v___x_593_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_580_, v_type_581_, v_val_582_, v___f_592_, v_nondep_584_, v_kind_585_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
if (lean_obj_tag(v___x_593_) == 0)
{
return v___x_593_;
}
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_593_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_593_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg___boxed(lean_object* v_name_602_, lean_object* v_type_603_, lean_object* v_val_604_, lean_object* v_k_605_, lean_object* v_nondep_606_, lean_object* v_kind_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
uint8_t v_nondep_boxed_614_; uint8_t v_kind_boxed_615_; lean_object* v_res_616_; 
v_nondep_boxed_614_ = lean_unbox(v_nondep_606_);
v_kind_boxed_615_ = lean_unbox(v_kind_607_);
v_res_616_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg(v_name_602_, v_type_603_, v_val_604_, v_k_605_, v_nondep_boxed_614_, v_kind_boxed_615_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_);
lean_dec(v___y_612_);
lean_dec_ref(v___y_611_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(lean_object* v_name_617_, uint8_t v_bi_618_, lean_object* v_type_619_, lean_object* v_k_620_, uint8_t v_kind_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v___f_628_; lean_object* v___x_629_; 
lean_inc(v___y_622_);
v___f_628_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_628_, 0, v_k_620_);
lean_closure_set(v___f_628_, 1, v___y_622_);
v___x_629_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_617_, v_bi_618_, v_type_619_, v___f_628_, v_kind_621_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
if (lean_obj_tag(v___x_629_) == 0)
{
return v___x_629_;
}
else
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
v_a_630_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_629_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_629_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg___boxed(lean_object* v_name_638_, lean_object* v_bi_639_, lean_object* v_type_640_, lean_object* v_k_641_, lean_object* v_kind_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
uint8_t v_bi_boxed_649_; uint8_t v_kind_boxed_650_; lean_object* v_res_651_; 
v_bi_boxed_649_ = lean_unbox(v_bi_639_);
v_kind_boxed_650_ = lean_unbox(v_kind_642_);
v_res_651_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(v_name_638_, v_bi_boxed_649_, v_type_640_, v_k_641_, v_kind_boxed_650_, v___y_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
lean_dec(v___y_645_);
lean_dec_ref(v___y_644_);
lean_dec(v___y_643_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0(lean_object* v_00_u03b1_652_, lean_object* v_x_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = lean_apply_1(v_x_653_, lean_box(0));
v___x_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0___boxed(lean_object* v_00_u03b1_661_, lean_object* v_x_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0(v_00_u03b1_661_, v_x_662_, v___y_663_, v___y_664_, v___y_665_, v___y_666_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
lean_dec(v___y_664_);
lean_dec_ref(v___y_663_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg(lean_object* v_a_669_, lean_object* v_x_670_){
_start:
{
if (lean_obj_tag(v_x_670_) == 0)
{
lean_object* v___x_671_; 
v___x_671_ = lean_box(0);
return v___x_671_;
}
else
{
lean_object* v_key_672_; lean_object* v_value_673_; lean_object* v_tail_674_; uint8_t v___x_675_; 
v_key_672_ = lean_ctor_get(v_x_670_, 0);
v_value_673_ = lean_ctor_get(v_x_670_, 1);
v_tail_674_ = lean_ctor_get(v_x_670_, 2);
v___x_675_ = l_Lean_ExprStructEq_beq(v_key_672_, v_a_669_);
if (v___x_675_ == 0)
{
v_x_670_ = v_tail_674_;
goto _start;
}
else
{
lean_object* v___x_677_; 
lean_inc(v_value_673_);
v___x_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_677_, 0, v_value_673_);
return v___x_677_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg___boxed(lean_object* v_a_678_, lean_object* v_x_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg(v_a_678_, v_x_679_);
lean_dec(v_x_679_);
lean_dec_ref(v_a_678_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg(lean_object* v_m_681_, lean_object* v_a_682_){
_start:
{
lean_object* v_buckets_683_; lean_object* v___x_684_; uint64_t v___x_685_; uint64_t v___x_686_; uint64_t v___x_687_; uint64_t v_fold_688_; uint64_t v___x_689_; uint64_t v___x_690_; uint64_t v___x_691_; size_t v___x_692_; size_t v___x_693_; size_t v___x_694_; size_t v___x_695_; size_t v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v_buckets_683_ = lean_ctor_get(v_m_681_, 1);
v___x_684_ = lean_array_get_size(v_buckets_683_);
v___x_685_ = l_Lean_ExprStructEq_hash(v_a_682_);
v___x_686_ = 32ULL;
v___x_687_ = lean_uint64_shift_right(v___x_685_, v___x_686_);
v_fold_688_ = lean_uint64_xor(v___x_685_, v___x_687_);
v___x_689_ = 16ULL;
v___x_690_ = lean_uint64_shift_right(v_fold_688_, v___x_689_);
v___x_691_ = lean_uint64_xor(v_fold_688_, v___x_690_);
v___x_692_ = lean_uint64_to_usize(v___x_691_);
v___x_693_ = lean_usize_of_nat(v___x_684_);
v___x_694_ = ((size_t)1ULL);
v___x_695_ = lean_usize_sub(v___x_693_, v___x_694_);
v___x_696_ = lean_usize_land(v___x_692_, v___x_695_);
v___x_697_ = lean_array_uget_borrowed(v_buckets_683_, v___x_696_);
v___x_698_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg(v_a_682_, v___x_697_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg___boxed(lean_object* v_m_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg(v_m_699_, v_a_700_);
lean_dec_ref(v_a_700_);
lean_dec_ref(v_m_699_);
return v_res_701_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg(lean_object* v_a_702_, lean_object* v_x_703_){
_start:
{
if (lean_obj_tag(v_x_703_) == 0)
{
uint8_t v___x_704_; 
v___x_704_ = 0;
return v___x_704_;
}
else
{
lean_object* v_key_705_; lean_object* v_tail_706_; uint8_t v___x_707_; 
v_key_705_ = lean_ctor_get(v_x_703_, 0);
v_tail_706_ = lean_ctor_get(v_x_703_, 2);
v___x_707_ = l_Lean_ExprStructEq_beq(v_key_705_, v_a_702_);
if (v___x_707_ == 0)
{
v_x_703_ = v_tail_706_;
goto _start;
}
else
{
return v___x_707_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg___boxed(lean_object* v_a_709_, lean_object* v_x_710_){
_start:
{
uint8_t v_res_711_; lean_object* v_r_712_; 
v_res_711_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg(v_a_709_, v_x_710_);
lean_dec(v_x_710_);
lean_dec_ref(v_a_709_);
v_r_712_ = lean_box(v_res_711_);
return v_r_712_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23___redArg(lean_object* v_x_713_, lean_object* v_x_714_){
_start:
{
if (lean_obj_tag(v_x_714_) == 0)
{
return v_x_713_;
}
else
{
lean_object* v_key_715_; lean_object* v_value_716_; lean_object* v_tail_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_740_; 
v_key_715_ = lean_ctor_get(v_x_714_, 0);
v_value_716_ = lean_ctor_get(v_x_714_, 1);
v_tail_717_ = lean_ctor_get(v_x_714_, 2);
v_isSharedCheck_740_ = !lean_is_exclusive(v_x_714_);
if (v_isSharedCheck_740_ == 0)
{
v___x_719_ = v_x_714_;
v_isShared_720_ = v_isSharedCheck_740_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_tail_717_);
lean_inc(v_value_716_);
lean_inc(v_key_715_);
lean_dec(v_x_714_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_740_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_721_; uint64_t v___x_722_; uint64_t v___x_723_; uint64_t v___x_724_; uint64_t v_fold_725_; uint64_t v___x_726_; uint64_t v___x_727_; uint64_t v___x_728_; size_t v___x_729_; size_t v___x_730_; size_t v___x_731_; size_t v___x_732_; size_t v___x_733_; lean_object* v___x_734_; lean_object* v___x_736_; 
v___x_721_ = lean_array_get_size(v_x_713_);
v___x_722_ = l_Lean_ExprStructEq_hash(v_key_715_);
v___x_723_ = 32ULL;
v___x_724_ = lean_uint64_shift_right(v___x_722_, v___x_723_);
v_fold_725_ = lean_uint64_xor(v___x_722_, v___x_724_);
v___x_726_ = 16ULL;
v___x_727_ = lean_uint64_shift_right(v_fold_725_, v___x_726_);
v___x_728_ = lean_uint64_xor(v_fold_725_, v___x_727_);
v___x_729_ = lean_uint64_to_usize(v___x_728_);
v___x_730_ = lean_usize_of_nat(v___x_721_);
v___x_731_ = ((size_t)1ULL);
v___x_732_ = lean_usize_sub(v___x_730_, v___x_731_);
v___x_733_ = lean_usize_land(v___x_729_, v___x_732_);
v___x_734_ = lean_array_uget_borrowed(v_x_713_, v___x_733_);
lean_inc(v___x_734_);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 2, v___x_734_);
v___x_736_ = v___x_719_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_key_715_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v_value_716_);
lean_ctor_set(v_reuseFailAlloc_739_, 2, v___x_734_);
v___x_736_ = v_reuseFailAlloc_739_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
lean_object* v___x_737_; 
v___x_737_ = lean_array_uset(v_x_713_, v___x_733_, v___x_736_);
v_x_713_ = v___x_737_;
v_x_714_ = v_tail_717_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22___redArg(lean_object* v_i_741_, lean_object* v_source_742_, lean_object* v_target_743_){
_start:
{
lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_744_ = lean_array_get_size(v_source_742_);
v___x_745_ = lean_nat_dec_lt(v_i_741_, v___x_744_);
if (v___x_745_ == 0)
{
lean_dec_ref(v_source_742_);
lean_dec(v_i_741_);
return v_target_743_;
}
else
{
lean_object* v_es_746_; lean_object* v___x_747_; lean_object* v_source_748_; lean_object* v_target_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v_es_746_ = lean_array_fget(v_source_742_, v_i_741_);
v___x_747_ = lean_box(0);
v_source_748_ = lean_array_fset(v_source_742_, v_i_741_, v___x_747_);
v_target_749_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23___redArg(v_target_743_, v_es_746_);
v___x_750_ = lean_unsigned_to_nat(1u);
v___x_751_ = lean_nat_add(v_i_741_, v___x_750_);
lean_dec(v_i_741_);
v_i_741_ = v___x_751_;
v_source_742_ = v_source_748_;
v_target_743_ = v_target_749_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21___redArg(lean_object* v_data_753_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v_nbuckets_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_754_ = lean_array_get_size(v_data_753_);
v___x_755_ = lean_unsigned_to_nat(2u);
v_nbuckets_756_ = lean_nat_mul(v___x_754_, v___x_755_);
v___x_757_ = lean_unsigned_to_nat(0u);
v___x_758_ = lean_box(0);
v___x_759_ = lean_mk_array(v_nbuckets_756_, v___x_758_);
v___x_760_ = lean_array_propagate_mark(v_data_753_, v___x_759_);
v___x_761_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22___redArg(v___x_757_, v_data_753_, v___x_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22___redArg(lean_object* v_a_762_, lean_object* v_b_763_, lean_object* v_x_764_){
_start:
{
if (lean_obj_tag(v_x_764_) == 0)
{
lean_dec(v_b_763_);
lean_dec_ref(v_a_762_);
return v_x_764_;
}
else
{
lean_object* v_key_765_; lean_object* v_value_766_; lean_object* v_tail_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_779_; 
v_key_765_ = lean_ctor_get(v_x_764_, 0);
v_value_766_ = lean_ctor_get(v_x_764_, 1);
v_tail_767_ = lean_ctor_get(v_x_764_, 2);
v_isSharedCheck_779_ = !lean_is_exclusive(v_x_764_);
if (v_isSharedCheck_779_ == 0)
{
v___x_769_ = v_x_764_;
v_isShared_770_ = v_isSharedCheck_779_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_tail_767_);
lean_inc(v_value_766_);
lean_inc(v_key_765_);
lean_dec(v_x_764_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_779_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
uint8_t v___x_771_; 
v___x_771_ = l_Lean_ExprStructEq_beq(v_key_765_, v_a_762_);
if (v___x_771_ == 0)
{
lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_772_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22___redArg(v_a_762_, v_b_763_, v_tail_767_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 2, v___x_772_);
v___x_774_ = v___x_769_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_key_765_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v_value_766_);
lean_ctor_set(v_reuseFailAlloc_775_, 2, v___x_772_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
else
{
lean_object* v___x_777_; 
lean_dec(v_value_766_);
lean_dec(v_key_765_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v_b_763_);
lean_ctor_set(v___x_769_, 0, v_a_762_);
v___x_777_ = v___x_769_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_a_762_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_b_763_);
lean_ctor_set(v_reuseFailAlloc_778_, 2, v_tail_767_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15___redArg(lean_object* v_m_780_, lean_object* v_a_781_, lean_object* v_b_782_){
_start:
{
lean_object* v_size_783_; lean_object* v_buckets_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_827_; 
v_size_783_ = lean_ctor_get(v_m_780_, 0);
v_buckets_784_ = lean_ctor_get(v_m_780_, 1);
v_isSharedCheck_827_ = !lean_is_exclusive(v_m_780_);
if (v_isSharedCheck_827_ == 0)
{
v___x_786_ = v_m_780_;
v_isShared_787_ = v_isSharedCheck_827_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_buckets_784_);
lean_inc(v_size_783_);
lean_dec(v_m_780_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_827_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; uint64_t v___x_789_; uint64_t v___x_790_; uint64_t v___x_791_; uint64_t v_fold_792_; uint64_t v___x_793_; uint64_t v___x_794_; uint64_t v___x_795_; size_t v___x_796_; size_t v___x_797_; size_t v___x_798_; size_t v___x_799_; size_t v___x_800_; lean_object* v_bkt_801_; uint8_t v___x_802_; 
v___x_788_ = lean_array_get_size(v_buckets_784_);
v___x_789_ = l_Lean_ExprStructEq_hash(v_a_781_);
v___x_790_ = 32ULL;
v___x_791_ = lean_uint64_shift_right(v___x_789_, v___x_790_);
v_fold_792_ = lean_uint64_xor(v___x_789_, v___x_791_);
v___x_793_ = 16ULL;
v___x_794_ = lean_uint64_shift_right(v_fold_792_, v___x_793_);
v___x_795_ = lean_uint64_xor(v_fold_792_, v___x_794_);
v___x_796_ = lean_uint64_to_usize(v___x_795_);
v___x_797_ = lean_usize_of_nat(v___x_788_);
v___x_798_ = ((size_t)1ULL);
v___x_799_ = lean_usize_sub(v___x_797_, v___x_798_);
v___x_800_ = lean_usize_land(v___x_796_, v___x_799_);
v_bkt_801_ = lean_array_uget_borrowed(v_buckets_784_, v___x_800_);
v___x_802_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg(v_a_781_, v_bkt_801_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; lean_object* v_size_x27_804_; lean_object* v___x_805_; lean_object* v_buckets_x27_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v___x_812_; 
v___x_803_ = lean_unsigned_to_nat(1u);
v_size_x27_804_ = lean_nat_add(v_size_783_, v___x_803_);
lean_dec(v_size_783_);
lean_inc(v_bkt_801_);
v___x_805_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_805_, 0, v_a_781_);
lean_ctor_set(v___x_805_, 1, v_b_782_);
lean_ctor_set(v___x_805_, 2, v_bkt_801_);
v_buckets_x27_806_ = lean_array_uset(v_buckets_784_, v___x_800_, v___x_805_);
v___x_807_ = lean_unsigned_to_nat(4u);
v___x_808_ = lean_nat_mul(v_size_x27_804_, v___x_807_);
v___x_809_ = lean_unsigned_to_nat(3u);
v___x_810_ = lean_nat_div(v___x_808_, v___x_809_);
lean_dec(v___x_808_);
v___x_811_ = lean_array_get_size(v_buckets_x27_806_);
v___x_812_ = lean_nat_dec_le(v___x_810_, v___x_811_);
lean_dec(v___x_810_);
if (v___x_812_ == 0)
{
lean_object* v_val_813_; lean_object* v___x_815_; 
v_val_813_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21___redArg(v_buckets_x27_806_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 1, v_val_813_);
lean_ctor_set(v___x_786_, 0, v_size_x27_804_);
v___x_815_ = v___x_786_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_size_x27_804_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_val_813_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
else
{
lean_object* v___x_818_; 
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 1, v_buckets_x27_806_);
lean_ctor_set(v___x_786_, 0, v_size_x27_804_);
v___x_818_ = v___x_786_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_size_x27_804_);
lean_ctor_set(v_reuseFailAlloc_819_, 1, v_buckets_x27_806_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
else
{
lean_object* v___x_820_; lean_object* v_buckets_x27_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_825_; 
lean_inc(v_bkt_801_);
v___x_820_ = lean_box(0);
v_buckets_x27_821_ = lean_array_uset(v_buckets_784_, v___x_800_, v___x_820_);
v___x_822_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22___redArg(v_a_781_, v_b_782_, v_bkt_801_);
v___x_823_ = lean_array_uset(v_buckets_x27_821_, v___x_800_, v___x_822_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 1, v___x_823_);
v___x_825_ = v___x_786_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_size_783_);
lean_ctor_set(v_reuseFailAlloc_826_, 1, v___x_823_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2(lean_object* v_a_828_, lean_object* v_e_829_, lean_object* v_a_830_){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_832_ = lean_st_ref_take(v_a_828_);
v___x_833_ = lean_box(0);
v___x_834_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15___redArg(v___x_832_, v_e_829_, v_a_830_);
v___x_835_ = lean_st_ref_put(v_a_828_, v___x_834_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2___boxed(lean_object* v_a_836_, lean_object* v_e_837_, lean_object* v_a_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2(v_a_836_, v_e_837_, v_a_838_);
lean_dec(v_a_836_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0___boxed(lean_object* v_fvars_841_, lean_object* v_pre_842_, lean_object* v_post_843_, lean_object* v_usedLetOnly_844_, lean_object* v_skipConstInApp_845_, lean_object* v_skipInstances_846_, lean_object* v_body_847_, lean_object* v_x_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
uint8_t v_usedLetOnly_boxed_855_; uint8_t v_skipConstInApp_boxed_856_; uint8_t v_skipInstances_boxed_857_; lean_object* v_res_858_; 
v_usedLetOnly_boxed_855_ = lean_unbox(v_usedLetOnly_844_);
v_skipConstInApp_boxed_856_ = lean_unbox(v_skipConstInApp_845_);
v_skipInstances_boxed_857_ = lean_unbox(v_skipInstances_846_);
v_res_858_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0(v_fvars_841_, v_pre_842_, v_post_843_, v_usedLetOnly_boxed_855_, v_skipConstInApp_boxed_856_, v_skipInstances_boxed_857_, v_body_847_, v_x_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v___y_849_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0(lean_object* v_fvars_862_, lean_object* v_pre_863_, lean_object* v_post_864_, uint8_t v_usedLetOnly_865_, uint8_t v_skipConstInApp_866_, uint8_t v_skipInstances_867_, lean_object* v_body_868_, lean_object* v_x_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_876_ = lean_array_push(v_fvars_862_, v_x_869_);
v___x_877_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11(v_pre_863_, v_post_864_, v_usedLetOnly_865_, v_skipConstInApp_866_, v_skipInstances_867_, v___x_876_, v_body_868_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0___boxed(lean_object* v_fvars_878_, lean_object* v_pre_879_, lean_object* v_post_880_, lean_object* v_usedLetOnly_881_, lean_object* v_skipConstInApp_882_, lean_object* v_skipInstances_883_, lean_object* v_body_884_, lean_object* v_x_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
uint8_t v_usedLetOnly_boxed_892_; uint8_t v_skipConstInApp_boxed_893_; uint8_t v_skipInstances_boxed_894_; lean_object* v_res_895_; 
v_usedLetOnly_boxed_892_ = lean_unbox(v_usedLetOnly_881_);
v_skipConstInApp_boxed_893_ = lean_unbox(v_skipConstInApp_882_);
v_skipInstances_boxed_894_ = lean_unbox(v_skipInstances_883_);
v_res_895_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0(v_fvars_878_, v_pre_879_, v_post_880_, v_usedLetOnly_boxed_892_, v_skipConstInApp_boxed_893_, v_skipInstances_boxed_894_, v_body_884_, v_x_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v___y_886_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(lean_object* v_pre_896_, lean_object* v_post_897_, uint8_t v_usedLetOnly_898_, uint8_t v_skipConstInApp_899_, uint8_t v_skipInstances_900_, lean_object* v_e_901_, lean_object* v_a_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
lean_object* v___x_908_; 
lean_inc_ref(v_post_897_);
lean_inc(v___y_906_);
lean_inc_ref(v___y_905_);
lean_inc(v___y_904_);
lean_inc_ref(v___y_903_);
lean_inc_ref(v_e_901_);
v___x_908_ = lean_apply_6(v_post_897_, v_e_901_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, lean_box(0));
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_927_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_927_ == 0)
{
v___x_911_ = v___x_908_;
v_isShared_912_ = v_isSharedCheck_927_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_908_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_927_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
switch(lean_obj_tag(v_a_909_))
{
case 0:
{
lean_object* v_e_913_; lean_object* v___x_915_; 
lean_dec_ref(v_e_901_);
lean_dec_ref(v_post_897_);
lean_dec_ref(v_pre_896_);
v_e_913_ = lean_ctor_get(v_a_909_, 0);
lean_inc_ref(v_e_913_);
lean_dec_ref_known(v_a_909_, 1);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 0, v_e_913_);
v___x_915_ = v___x_911_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_e_913_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
case 1:
{
lean_object* v_e_917_; lean_object* v___x_918_; 
lean_del_object(v___x_911_);
lean_dec_ref(v_e_901_);
v_e_917_ = lean_ctor_get(v_a_909_, 0);
lean_inc_ref(v_e_917_);
lean_dec_ref_known(v_a_909_, 1);
v___x_918_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_896_, v_post_897_, v_usedLetOnly_898_, v_skipConstInApp_899_, v_skipInstances_900_, v_e_917_, v_a_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
return v___x_918_;
}
default: 
{
lean_object* v_e_x3f_919_; 
lean_dec_ref(v_post_897_);
lean_dec_ref(v_pre_896_);
v_e_x3f_919_ = lean_ctor_get(v_a_909_, 0);
lean_inc(v_e_x3f_919_);
lean_dec_ref_known(v_a_909_, 1);
if (lean_obj_tag(v_e_x3f_919_) == 0)
{
lean_object* v___x_921_; 
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 0, v_e_901_);
v___x_921_ = v___x_911_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_e_901_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
else
{
lean_object* v_val_923_; lean_object* v___x_925_; 
lean_dec_ref(v_e_901_);
v_val_923_ = lean_ctor_get(v_e_x3f_919_, 0);
lean_inc(v_val_923_);
lean_dec_ref_known(v_e_x3f_919_, 1);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 0, v_val_923_);
v___x_925_ = v___x_911_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_val_923_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
}
else
{
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
lean_dec_ref(v_e_901_);
lean_dec_ref(v_post_897_);
lean_dec_ref(v_pre_896_);
v_a_928_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_908_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_908_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11(lean_object* v_pre_936_, lean_object* v_post_937_, uint8_t v_usedLetOnly_938_, uint8_t v_skipConstInApp_939_, uint8_t v_skipInstances_940_, lean_object* v_fvars_941_, lean_object* v_e_942_, lean_object* v_a_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
if (lean_obj_tag(v_e_942_) == 6)
{
lean_object* v_binderName_949_; lean_object* v_binderType_950_; lean_object* v_body_951_; uint8_t v_binderInfo_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___f_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v_binderName_949_ = lean_ctor_get(v_e_942_, 0);
lean_inc(v_binderName_949_);
v_binderType_950_ = lean_ctor_get(v_e_942_, 1);
lean_inc_ref(v_binderType_950_);
v_body_951_ = lean_ctor_get(v_e_942_, 2);
lean_inc_ref(v_body_951_);
v_binderInfo_952_ = lean_ctor_get_uint8(v_e_942_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_942_, 3);
v___x_953_ = lean_box(v_usedLetOnly_938_);
v___x_954_ = lean_box(v_skipConstInApp_939_);
v___x_955_ = lean_box(v_skipInstances_940_);
lean_inc_ref(v_post_937_);
lean_inc_ref(v_pre_936_);
lean_inc_ref(v_fvars_941_);
v___f_956_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___lam__0___boxed), 14, 7);
lean_closure_set(v___f_956_, 0, v_fvars_941_);
lean_closure_set(v___f_956_, 1, v_pre_936_);
lean_closure_set(v___f_956_, 2, v_post_937_);
lean_closure_set(v___f_956_, 3, v___x_953_);
lean_closure_set(v___f_956_, 4, v___x_954_);
lean_closure_set(v___f_956_, 5, v___x_955_);
lean_closure_set(v___f_956_, 6, v_body_951_);
v___x_957_ = lean_expr_instantiate_rev(v_binderType_950_, v_fvars_941_);
lean_dec_ref(v_fvars_941_);
lean_dec_ref(v_binderType_950_);
v___x_958_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_936_, v_post_937_, v_usedLetOnly_938_, v_skipConstInApp_939_, v_skipInstances_940_, v___x_957_, v_a_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_958_) == 0)
{
lean_object* v_a_959_; uint8_t v___x_960_; lean_object* v___x_961_; 
v_a_959_ = lean_ctor_get(v___x_958_, 0);
lean_inc(v_a_959_);
lean_dec_ref_known(v___x_958_, 1);
v___x_960_ = 0;
v___x_961_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(v_binderName_949_, v_binderInfo_952_, v_a_959_, v___f_956_, v___x_960_, v_a_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
return v___x_961_;
}
else
{
lean_dec_ref(v___f_956_);
lean_dec(v_binderName_949_);
return v___x_958_;
}
}
else
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = lean_expr_instantiate_rev(v_e_942_, v_fvars_941_);
lean_dec_ref(v_e_942_);
lean_inc_ref(v_post_937_);
lean_inc_ref(v_pre_936_);
v___x_963_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_936_, v_post_937_, v_usedLetOnly_938_, v_skipConstInApp_939_, v_skipInstances_940_, v___x_962_, v_a_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_a_964_; uint8_t v___x_965_; uint8_t v___x_966_; uint8_t v___x_967_; lean_object* v___x_968_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
lean_inc(v_a_964_);
lean_dec_ref_known(v___x_963_, 1);
v___x_965_ = 0;
v___x_966_ = 1;
v___x_967_ = 1;
v___x_968_ = l_Lean_Meta_mkLambdaFVars(v_fvars_941_, v_a_964_, v___x_965_, v_usedLetOnly_938_, v___x_965_, v___x_966_, v___x_967_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v___x_970_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 1);
v___x_970_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_936_, v_post_937_, v_usedLetOnly_938_, v_skipConstInApp_939_, v_skipInstances_940_, v_a_969_, v_a_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
return v___x_970_;
}
else
{
lean_dec_ref(v_post_937_);
lean_dec_ref(v_pre_936_);
return v___x_968_;
}
}
else
{
lean_dec_ref(v_fvars_941_);
lean_dec_ref(v_post_937_);
lean_dec_ref(v_pre_936_);
return v___x_963_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0(lean_object* v_fvars_971_, lean_object* v_pre_972_, lean_object* v_post_973_, uint8_t v_usedLetOnly_974_, uint8_t v_skipConstInApp_975_, uint8_t v_skipInstances_976_, lean_object* v_body_977_, lean_object* v_x_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = lean_array_push(v_fvars_971_, v_x_978_);
v___x_986_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12(v_pre_972_, v_post_973_, v_usedLetOnly_974_, v_skipConstInApp_975_, v_skipInstances_976_, v___x_985_, v_body_977_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0___boxed(lean_object* v_fvars_987_, lean_object* v_pre_988_, lean_object* v_post_989_, lean_object* v_usedLetOnly_990_, lean_object* v_skipConstInApp_991_, lean_object* v_skipInstances_992_, lean_object* v_body_993_, lean_object* v_x_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
uint8_t v_usedLetOnly_boxed_1001_; uint8_t v_skipConstInApp_boxed_1002_; uint8_t v_skipInstances_boxed_1003_; lean_object* v_res_1004_; 
v_usedLetOnly_boxed_1001_ = lean_unbox(v_usedLetOnly_990_);
v_skipConstInApp_boxed_1002_ = lean_unbox(v_skipConstInApp_991_);
v_skipInstances_boxed_1003_ = lean_unbox(v_skipInstances_992_);
v_res_1004_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0(v_fvars_987_, v_pre_988_, v_post_989_, v_usedLetOnly_boxed_1001_, v_skipConstInApp_boxed_1002_, v_skipInstances_boxed_1003_, v_body_993_, v_x_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec(v___y_995_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12(lean_object* v_pre_1005_, lean_object* v_post_1006_, uint8_t v_usedLetOnly_1007_, uint8_t v_skipConstInApp_1008_, uint8_t v_skipInstances_1009_, lean_object* v_fvars_1010_, lean_object* v_e_1011_, lean_object* v_a_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
if (lean_obj_tag(v_e_1011_) == 8)
{
lean_object* v_declName_1018_; lean_object* v_type_1019_; lean_object* v_value_1020_; lean_object* v_body_1021_; uint8_t v_nondep_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___f_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v_declName_1018_ = lean_ctor_get(v_e_1011_, 0);
lean_inc(v_declName_1018_);
v_type_1019_ = lean_ctor_get(v_e_1011_, 1);
lean_inc_ref(v_type_1019_);
v_value_1020_ = lean_ctor_get(v_e_1011_, 2);
lean_inc_ref(v_value_1020_);
v_body_1021_ = lean_ctor_get(v_e_1011_, 3);
lean_inc_ref(v_body_1021_);
v_nondep_1022_ = lean_ctor_get_uint8(v_e_1011_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1011_, 4);
v___x_1023_ = lean_box(v_usedLetOnly_1007_);
v___x_1024_ = lean_box(v_skipConstInApp_1008_);
v___x_1025_ = lean_box(v_skipInstances_1009_);
lean_inc_ref_n(v_post_1006_, 2);
lean_inc_ref_n(v_pre_1005_, 2);
lean_inc_ref(v_fvars_1010_);
v___f_1026_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1026_, 0, v_fvars_1010_);
lean_closure_set(v___f_1026_, 1, v_pre_1005_);
lean_closure_set(v___f_1026_, 2, v_post_1006_);
lean_closure_set(v___f_1026_, 3, v___x_1023_);
lean_closure_set(v___f_1026_, 4, v___x_1024_);
lean_closure_set(v___f_1026_, 5, v___x_1025_);
lean_closure_set(v___f_1026_, 6, v_body_1021_);
v___x_1027_ = lean_expr_instantiate_rev(v_type_1019_, v_fvars_1010_);
lean_dec_ref(v_type_1019_);
v___x_1028_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1005_, v_post_1006_, v_usedLetOnly_1007_, v_skipConstInApp_1008_, v_skipInstances_1009_, v___x_1027_, v_a_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v_a_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
lean_inc(v_a_1029_);
lean_dec_ref_known(v___x_1028_, 1);
v___x_1030_ = lean_expr_instantiate_rev(v_value_1020_, v_fvars_1010_);
lean_dec_ref(v_fvars_1010_);
lean_dec_ref(v_value_1020_);
v___x_1031_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1005_, v_post_1006_, v_usedLetOnly_1007_, v_skipConstInApp_1008_, v_skipInstances_1009_, v___x_1030_, v_a_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; uint8_t v___x_1033_; lean_object* v___x_1034_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_a_1032_);
lean_dec_ref_known(v___x_1031_, 1);
v___x_1033_ = 0;
v___x_1034_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg(v_declName_1018_, v_a_1029_, v_a_1032_, v___f_1026_, v_nondep_1022_, v___x_1033_, v_a_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
return v___x_1034_;
}
else
{
lean_dec(v_a_1029_);
lean_dec_ref(v___f_1026_);
lean_dec(v_declName_1018_);
return v___x_1031_;
}
}
else
{
lean_dec_ref(v___f_1026_);
lean_dec_ref(v_value_1020_);
lean_dec(v_declName_1018_);
lean_dec_ref(v_fvars_1010_);
lean_dec_ref(v_post_1006_);
lean_dec_ref(v_pre_1005_);
return v___x_1028_;
}
}
else
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = lean_expr_instantiate_rev(v_e_1011_, v_fvars_1010_);
lean_dec_ref(v_e_1011_);
lean_inc_ref(v_post_1006_);
lean_inc_ref(v_pre_1005_);
v___x_1036_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1005_, v_post_1006_, v_usedLetOnly_1007_, v_skipConstInApp_1008_, v_skipInstances_1009_, v___x_1035_, v_a_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; uint8_t v___x_1038_; uint8_t v___x_1039_; lean_object* v___x_1040_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
lean_inc(v_a_1037_);
lean_dec_ref_known(v___x_1036_, 1);
v___x_1038_ = 0;
v___x_1039_ = 1;
v___x_1040_ = l_Lean_Meta_mkLetFVars(v_fvars_1010_, v_a_1037_, v_usedLetOnly_1007_, v___x_1038_, v___x_1039_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1042_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v___x_1040_, 1);
v___x_1042_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1005_, v_post_1006_, v_usedLetOnly_1007_, v_skipConstInApp_1008_, v_skipInstances_1009_, v_a_1041_, v_a_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
return v___x_1042_;
}
else
{
lean_dec_ref(v_post_1006_);
lean_dec_ref(v_pre_1005_);
return v___x_1040_;
}
}
else
{
lean_dec_ref(v_fvars_1010_);
lean_dec_ref(v_post_1006_);
lean_dec_ref(v_pre_1005_);
return v___x_1036_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6(lean_object* v_pre_1045_, lean_object* v_post_1046_, uint8_t v_usedLetOnly_1047_, uint8_t v_skipConstInApp_1048_, uint8_t v_skipInstances_1049_, size_t v_sz_1050_, size_t v_i_1051_, lean_object* v_bs_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
uint8_t v___x_1059_; 
v___x_1059_ = lean_usize_dec_lt(v_i_1051_, v_sz_1050_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
lean_dec_ref(v_post_1046_);
lean_dec_ref(v_pre_1045_);
v___x_1060_ = l_unsafeCast___redArg(v_bs_1052_);
lean_dec_ref(v_bs_1052_);
v___x_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1060_);
return v___x_1061_;
}
else
{
lean_object* v_v_1062_; lean_object* v___x_1063_; lean_object* v_bs_x27_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v_v_1062_ = lean_array_uget(v_bs_1052_, v_i_1051_);
v___x_1063_ = lean_unsigned_to_nat(0u);
v_bs_x27_1064_ = lean_array_uset(v_bs_1052_, v_i_1051_, v___x_1063_);
v___x_1065_ = l_unsafeCast___redArg(v_v_1062_);
lean_dec(v_v_1062_);
lean_inc_ref(v_post_1046_);
lean_inc_ref(v_pre_1045_);
v___x_1066_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1045_, v_post_1046_, v_usedLetOnly_1047_, v_skipConstInApp_1048_, v_skipInstances_1049_, v___x_1065_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
if (lean_obj_tag(v___x_1066_) == 0)
{
lean_object* v_a_1067_; size_t v___x_1068_; size_t v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v_a_1067_ = lean_ctor_get(v___x_1066_, 0);
lean_inc(v_a_1067_);
lean_dec_ref_known(v___x_1066_, 1);
v___x_1068_ = ((size_t)1ULL);
v___x_1069_ = lean_usize_add(v_i_1051_, v___x_1068_);
v___x_1070_ = l_unsafeCast___redArg(v_a_1067_);
lean_dec(v_a_1067_);
v___x_1071_ = lean_array_uset(v_bs_x27_1064_, v_i_1051_, v___x_1070_);
v_i_1051_ = v___x_1069_;
v_bs_1052_ = v___x_1071_;
goto _start;
}
else
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1080_; 
lean_dec_ref(v_bs_x27_1064_);
lean_dec_ref(v_post_1046_);
lean_dec_ref(v_pre_1045_);
v_a_1073_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1075_ = v___x_1066_;
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1066_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1078_; 
if (v_isShared_1076_ == 0)
{
v___x_1078_ = v___x_1075_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1073_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6___boxed(lean_object* v_pre_1081_, lean_object* v_post_1082_, lean_object* v_usedLetOnly_1083_, lean_object* v_skipConstInApp_1084_, lean_object* v_skipInstances_1085_, lean_object* v_sz_1086_, lean_object* v_i_1087_, lean_object* v_bs_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
uint8_t v_usedLetOnly_boxed_1095_; uint8_t v_skipConstInApp_boxed_1096_; uint8_t v_skipInstances_boxed_1097_; size_t v_sz_boxed_1098_; size_t v_i_boxed_1099_; lean_object* v_res_1100_; 
v_usedLetOnly_boxed_1095_ = lean_unbox(v_usedLetOnly_1083_);
v_skipConstInApp_boxed_1096_ = lean_unbox(v_skipConstInApp_1084_);
v_skipInstances_boxed_1097_ = lean_unbox(v_skipInstances_1085_);
v_sz_boxed_1098_ = lean_unbox_usize(v_sz_1086_);
lean_dec(v_sz_1086_);
v_i_boxed_1099_ = lean_unbox_usize(v_i_1087_);
lean_dec(v_i_1087_);
v_res_1100_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6(v_pre_1081_, v_post_1082_, v_usedLetOnly_boxed_1095_, v_skipConstInApp_boxed_1096_, v_skipInstances_boxed_1097_, v_sz_boxed_1098_, v_i_boxed_1099_, v_bs_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
lean_dec(v___y_1093_);
lean_dec_ref(v___y_1092_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__0(lean_object* v_pre_1101_, lean_object* v_post_1102_, uint8_t v_usedLetOnly_1103_, uint8_t v_skipConstInApp_1104_, uint8_t v_skipInstances_1105_, lean_object* v___x_1106_, lean_object* v___y_1107_, lean_object* v_b_1108_, lean_object* v_a_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1101_, v_post_1102_, v_usedLetOnly_1103_, v_skipConstInApp_1104_, v_skipInstances_1105_, v___x_1106_, v___y_1107_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1125_; 
v_a_1116_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1118_ = v___x_1115_;
v_isShared_1119_ = v_isSharedCheck_1125_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1115_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1125_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1120_ = lean_array_fset(v_b_1108_, v_a_1109_, v_a_1116_);
v___x_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 0, v___x_1121_);
v___x_1123_ = v___x_1118_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v___x_1121_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
else
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
lean_dec_ref(v_b_1108_);
v_a_1126_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1115_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1115_);
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
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
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
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__0___boxed(lean_object* v_pre_1134_, lean_object* v_post_1135_, lean_object* v_usedLetOnly_1136_, lean_object* v_skipConstInApp_1137_, lean_object* v_skipInstances_1138_, lean_object* v___x_1139_, lean_object* v___y_1140_, lean_object* v_b_1141_, lean_object* v_a_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_){
_start:
{
uint8_t v_usedLetOnly_boxed_1148_; uint8_t v_skipConstInApp_boxed_1149_; uint8_t v_skipInstances_boxed_1150_; lean_object* v_res_1151_; 
v_usedLetOnly_boxed_1148_ = lean_unbox(v_usedLetOnly_1136_);
v_skipConstInApp_boxed_1149_ = lean_unbox(v_skipConstInApp_1137_);
v_skipInstances_boxed_1150_ = lean_unbox(v_skipInstances_1138_);
v_res_1151_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__0(v_pre_1134_, v_post_1135_, v_usedLetOnly_boxed_1148_, v_skipConstInApp_boxed_1149_, v_skipInstances_boxed_1150_, v___x_1139_, v___y_1140_, v_b_1141_, v_a_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_);
lean_dec(v___y_1146_);
lean_dec_ref(v___y_1145_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
lean_dec(v_a_1142_);
lean_dec(v___y_1140_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg(lean_object* v_upperBound_1152_, lean_object* v___x_1153_, lean_object* v_pre_1154_, lean_object* v_post_1155_, uint8_t v_usedLetOnly_1156_, uint8_t v_skipConstInApp_1157_, uint8_t v_skipInstances_1158_, lean_object* v_a_1159_, lean_object* v_b_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v___y_1168_; uint8_t v___x_1191_; 
v___x_1191_ = lean_nat_dec_lt(v_a_1159_, v_upperBound_1152_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1192_; 
lean_dec(v_a_1159_);
lean_dec_ref(v_post_1155_);
lean_dec_ref(v_pre_1154_);
v___x_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1192_, 0, v_b_1160_);
return v___x_1192_;
}
else
{
lean_object* v___x_1193_; lean_object* v___x_1194_; uint8_t v___x_1195_; 
v___x_1193_ = lean_array_fget_borrowed(v_b_1160_, v_a_1159_);
v___x_1194_ = lean_array_get_size(v___x_1153_);
v___x_1195_ = lean_nat_dec_lt(v_a_1159_, v___x_1194_);
if (v___x_1195_ == 0)
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___f_1199_; 
lean_inc(v___x_1193_);
v___x_1196_ = lean_box(v_usedLetOnly_1156_);
v___x_1197_ = lean_box(v_skipConstInApp_1157_);
v___x_1198_ = lean_box(v_skipInstances_1158_);
lean_inc(v_a_1159_);
lean_inc(v___y_1161_);
lean_inc_ref(v_post_1155_);
lean_inc_ref(v_pre_1154_);
v___f_1199_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1199_, 0, v_pre_1154_);
lean_closure_set(v___f_1199_, 1, v_post_1155_);
lean_closure_set(v___f_1199_, 2, v___x_1196_);
lean_closure_set(v___f_1199_, 3, v___x_1197_);
lean_closure_set(v___f_1199_, 4, v___x_1198_);
lean_closure_set(v___f_1199_, 5, v___x_1193_);
lean_closure_set(v___f_1199_, 6, v___y_1161_);
lean_closure_set(v___f_1199_, 7, v_b_1160_);
lean_closure_set(v___f_1199_, 8, v_a_1159_);
v___y_1168_ = v___f_1199_;
goto v___jp_1167_;
}
else
{
lean_object* v___x_1200_; uint8_t v_isInstance_1201_; 
v___x_1200_ = lean_array_fget_borrowed(v___x_1153_, v_a_1159_);
v_isInstance_1201_ = lean_ctor_get_uint8(v___x_1200_, sizeof(void*)*1 + 4);
if (v_isInstance_1201_ == 0)
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___f_1205_; 
lean_inc(v___x_1193_);
v___x_1202_ = lean_box(v_usedLetOnly_1156_);
v___x_1203_ = lean_box(v_skipConstInApp_1157_);
v___x_1204_ = lean_box(v_skipInstances_1158_);
lean_inc(v_a_1159_);
lean_inc(v___y_1161_);
lean_inc_ref(v_post_1155_);
lean_inc_ref(v_pre_1154_);
v___f_1205_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_1205_, 0, v_pre_1154_);
lean_closure_set(v___f_1205_, 1, v_post_1155_);
lean_closure_set(v___f_1205_, 2, v___x_1202_);
lean_closure_set(v___f_1205_, 3, v___x_1203_);
lean_closure_set(v___f_1205_, 4, v___x_1204_);
lean_closure_set(v___f_1205_, 5, v___x_1193_);
lean_closure_set(v___f_1205_, 6, v___y_1161_);
lean_closure_set(v___f_1205_, 7, v_b_1160_);
lean_closure_set(v___f_1205_, 8, v_a_1159_);
v___y_1168_ = v___f_1205_;
goto v___jp_1167_;
}
else
{
lean_object* v___x_1206_; lean_object* v___f_1207_; 
v___x_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1206_, 0, v_b_1160_);
v___f_1207_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_1207_, 0, v___x_1206_);
v___y_1168_ = v___f_1207_;
goto v___jp_1167_;
}
}
}
v___jp_1167_:
{
lean_object* v___x_1169_; 
lean_inc(v___y_1165_);
lean_inc_ref(v___y_1164_);
lean_inc(v___y_1163_);
lean_inc_ref(v___y_1162_);
v___x_1169_ = lean_apply_5(v___y_1168_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_, lean_box(0));
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v_a_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1182_; 
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1172_ = v___x_1169_;
v_isShared_1173_ = v_isSharedCheck_1182_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_a_1170_);
lean_dec(v___x_1169_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1182_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
if (lean_obj_tag(v_a_1170_) == 0)
{
lean_object* v_a_1174_; lean_object* v___x_1176_; 
lean_dec(v_a_1159_);
lean_dec_ref(v_post_1155_);
lean_dec_ref(v_pre_1154_);
v_a_1174_ = lean_ctor_get(v_a_1170_, 0);
lean_inc(v_a_1174_);
lean_dec_ref_known(v_a_1170_, 1);
if (v_isShared_1173_ == 0)
{
lean_ctor_set(v___x_1172_, 0, v_a_1174_);
v___x_1176_ = v___x_1172_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_a_1174_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
else
{
lean_object* v_a_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
lean_del_object(v___x_1172_);
v_a_1178_ = lean_ctor_get(v_a_1170_, 0);
lean_inc(v_a_1178_);
lean_dec_ref_known(v_a_1170_, 1);
v___x_1179_ = lean_unsigned_to_nat(1u);
v___x_1180_ = lean_nat_add(v_a_1159_, v___x_1179_);
lean_dec(v_a_1159_);
v_a_1159_ = v___x_1180_;
v_b_1160_ = v_a_1178_;
goto _start;
}
}
}
else
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
lean_dec(v_a_1159_);
lean_dec_ref(v_post_1155_);
lean_dec_ref(v_pre_1154_);
v_a_1183_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1169_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1169_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13(uint8_t v_skipInstances_1208_, lean_object* v_pre_1209_, lean_object* v_post_1210_, uint8_t v_usedLetOnly_1211_, uint8_t v_skipConstInApp_1212_, lean_object* v_x_1213_, lean_object* v_x_1214_, lean_object* v_x_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_){
_start:
{
lean_object* v_f_1223_; lean_object* v___y_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; 
if (lean_obj_tag(v_x_1213_) == 5)
{
lean_object* v_fn_1278_; lean_object* v_arg_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v_fn_1278_ = lean_ctor_get(v_x_1213_, 0);
lean_inc_ref(v_fn_1278_);
v_arg_1279_ = lean_ctor_get(v_x_1213_, 1);
lean_inc_ref(v_arg_1279_);
lean_dec_ref_known(v_x_1213_, 2);
v___x_1280_ = lean_array_set(v_x_1214_, v_x_1215_, v_arg_1279_);
v___x_1281_ = lean_unsigned_to_nat(1u);
v___x_1282_ = lean_nat_sub(v_x_1215_, v___x_1281_);
lean_dec(v_x_1215_);
v_x_1213_ = v_fn_1278_;
v_x_1214_ = v___x_1280_;
v_x_1215_ = v___x_1282_;
goto _start;
}
else
{
lean_dec(v_x_1215_);
if (v_skipConstInApp_1212_ == 0)
{
goto v___jp_1275_;
}
else
{
uint8_t v___x_1284_; 
v___x_1284_ = l_Lean_Expr_isConst(v_x_1213_);
if (v___x_1284_ == 0)
{
goto v___jp_1275_;
}
else
{
v_f_1223_ = v_x_1213_;
v___y_1224_ = v___y_1216_;
v___y_1225_ = v___y_1217_;
v___y_1226_ = v___y_1218_;
v___y_1227_ = v___y_1219_;
v___y_1228_ = v___y_1220_;
goto v___jp_1222_;
}
}
}
v___jp_1222_:
{
if (v_skipInstances_1208_ == 0)
{
size_t v_sz_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_9216__overap_1237_; lean_object* v___x_1238_; 
v_sz_1229_ = lean_array_size(v_x_1214_);
v___x_1230_ = l_unsafeCast___redArg(v_x_1214_);
lean_dec_ref(v_x_1214_);
v___x_1231_ = lean_box(v_usedLetOnly_1211_);
v___x_1232_ = lean_box(v_skipConstInApp_1212_);
v___x_1233_ = lean_box(v_skipInstances_1208_);
v___x_1234_ = lean_box_usize(v_sz_1229_);
v___x_1235_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13___boxed__const__1));
lean_inc_ref(v_post_1210_);
lean_inc_ref(v_pre_1209_);
v___x_1236_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__6___boxed), 14, 8);
lean_closure_set(v___x_1236_, 0, v_pre_1209_);
lean_closure_set(v___x_1236_, 1, v_post_1210_);
lean_closure_set(v___x_1236_, 2, v___x_1231_);
lean_closure_set(v___x_1236_, 3, v___x_1232_);
lean_closure_set(v___x_1236_, 4, v___x_1233_);
lean_closure_set(v___x_1236_, 5, v___x_1234_);
lean_closure_set(v___x_1236_, 6, v___x_1235_);
lean_closure_set(v___x_1236_, 7, v___x_1230_);
v___x_9216__overap_1237_ = l_unsafeCast___redArg(v___x_1236_);
lean_dec_ref(v___x_1236_);
lean_inc(v___y_1228_);
lean_inc_ref(v___y_1227_);
lean_inc(v___y_1226_);
lean_inc_ref(v___y_1225_);
lean_inc(v___y_1224_);
v___x_1238_ = lean_apply_6(v___x_9216__overap_1237_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, lean_box(0));
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1239_);
lean_dec_ref_known(v___x_1238_, 1);
v___x_1240_ = l_Lean_mkAppN(v_f_1223_, v_a_1239_);
lean_dec(v_a_1239_);
v___x_1241_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1209_, v_post_1210_, v_usedLetOnly_1211_, v_skipConstInApp_1212_, v_skipInstances_1208_, v___x_1240_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
return v___x_1241_;
}
else
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1249_; 
lean_dec_ref(v_f_1223_);
lean_dec_ref(v_post_1210_);
lean_dec_ref(v_pre_1209_);
v_a_1242_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1244_ = v___x_1238_;
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1238_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1247_; 
if (v_isShared_1245_ == 0)
{
v___x_1247_ = v___x_1244_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_a_1242_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
}
else
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = lean_array_get_size(v_x_1214_);
lean_inc_ref(v_f_1223_);
v___x_1251_ = l_Lean_Meta_getFunInfoNArgs(v_f_1223_, v___x_1250_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1252_; lean_object* v_paramInfo_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_a_1252_);
lean_dec_ref_known(v___x_1251_, 1);
v_paramInfo_1253_ = lean_ctor_get(v_a_1252_, 0);
lean_inc_ref(v_paramInfo_1253_);
lean_dec(v_a_1252_);
v___x_1254_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1210_);
lean_inc_ref(v_pre_1209_);
v___x_1255_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg(v___x_1250_, v_paramInfo_1253_, v_pre_1209_, v_post_1210_, v_usedLetOnly_1211_, v_skipConstInApp_1212_, v_skipInstances_1208_, v___x_1254_, v_x_1214_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
lean_dec_ref(v_paramInfo_1253_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v_a_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_a_1256_);
lean_dec_ref_known(v___x_1255_, 1);
v___x_1257_ = l_Lean_mkAppN(v_f_1223_, v_a_1256_);
lean_dec(v_a_1256_);
v___x_1258_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1209_, v_post_1210_, v_usedLetOnly_1211_, v_skipConstInApp_1212_, v_skipInstances_1208_, v___x_1257_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
return v___x_1258_;
}
else
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1266_; 
lean_dec_ref(v_f_1223_);
lean_dec_ref(v_post_1210_);
lean_dec_ref(v_pre_1209_);
v_a_1259_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1261_ = v___x_1255_;
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1255_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1259_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1274_; 
lean_dec_ref(v_f_1223_);
lean_dec_ref(v_x_1214_);
lean_dec_ref(v_post_1210_);
lean_dec_ref(v_pre_1209_);
v_a_1267_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1269_ = v___x_1251_;
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1251_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1272_; 
if (v_isShared_1270_ == 0)
{
v___x_1272_ = v___x_1269_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_a_1267_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
}
v___jp_1275_:
{
lean_object* v___x_1276_; 
lean_inc_ref(v_post_1210_);
lean_inc_ref(v_pre_1209_);
v___x_1276_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1209_, v_post_1210_, v_usedLetOnly_1211_, v_skipConstInApp_1212_, v_skipInstances_1208_, v_x_1213_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v_a_1277_; 
v_a_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1277_);
lean_dec_ref_known(v___x_1276_, 1);
v_f_1223_ = v_a_1277_;
v___y_1224_ = v___y_1216_;
v___y_1225_ = v___y_1217_;
v___y_1226_ = v___y_1218_;
v___y_1227_ = v___y_1219_;
v___y_1228_ = v___y_1220_;
goto v___jp_1222_;
}
else
{
lean_dec_ref(v_x_1214_);
lean_dec_ref(v_post_1210_);
lean_dec_ref(v_pre_1209_);
return v___x_1276_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1(lean_object* v___x_1285_, lean_object* v_pre_1286_, lean_object* v_e_1287_, lean_object* v_post_1288_, uint8_t v_usedLetOnly_1289_, uint8_t v_skipConstInApp_1290_, uint8_t v_skipInstances_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lean_Core_checkSystem(v___x_1285_, v___y_1295_, v___y_1296_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v___x_1299_; 
lean_dec_ref_known(v___x_1298_, 1);
lean_inc_ref(v_pre_1286_);
lean_inc(v___y_1296_);
lean_inc_ref(v___y_1295_);
lean_inc(v___y_1294_);
lean_inc_ref(v___y_1293_);
lean_inc_ref(v_e_1287_);
v___x_1299_ = lean_apply_6(v_pre_1286_, v_e_1287_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, lean_box(0));
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_object* v_a_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1348_; 
v_a_1300_ = lean_ctor_get(v___x_1299_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1302_ = v___x_1299_;
v_isShared_1303_ = v_isSharedCheck_1348_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_a_1300_);
lean_dec(v___x_1299_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1348_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___y_1305_; 
switch(lean_obj_tag(v_a_1300_))
{
case 0:
{
lean_object* v_e_1340_; lean_object* v___x_1342_; 
lean_dec_ref(v_post_1288_);
lean_dec_ref(v_e_1287_);
lean_dec_ref(v_pre_1286_);
v_e_1340_ = lean_ctor_get(v_a_1300_, 0);
lean_inc_ref(v_e_1340_);
lean_dec_ref_known(v_a_1300_, 1);
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 0, v_e_1340_);
v___x_1342_ = v___x_1302_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_e_1340_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
case 1:
{
lean_object* v_e_1344_; lean_object* v___x_1345_; 
lean_del_object(v___x_1302_);
lean_dec_ref(v_e_1287_);
v_e_1344_ = lean_ctor_get(v_a_1300_, 0);
lean_inc_ref(v_e_1344_);
lean_dec_ref_known(v_a_1300_, 1);
v___x_1345_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v_skipInstances_1291_, v_e_1344_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1345_;
}
default: 
{
lean_object* v_e_x3f_1346_; 
lean_del_object(v___x_1302_);
v_e_x3f_1346_ = lean_ctor_get(v_a_1300_, 0);
lean_inc(v_e_x3f_1346_);
lean_dec_ref_known(v_a_1300_, 1);
if (lean_obj_tag(v_e_x3f_1346_) == 0)
{
v___y_1305_ = v_e_1287_;
goto v___jp_1304_;
}
else
{
lean_object* v_val_1347_; 
lean_dec_ref(v_e_1287_);
v_val_1347_ = lean_ctor_get(v_e_x3f_1346_, 0);
lean_inc(v_val_1347_);
lean_dec_ref_known(v_e_x3f_1346_, 1);
v___y_1305_ = v_val_1347_;
goto v___jp_1304_;
}
}
}
v___jp_1304_:
{
switch(lean_obj_tag(v___y_1305_))
{
case 7:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0));
v___x_1307_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10(v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v_skipInstances_1291_, v___x_1306_, v___y_1305_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1307_;
}
case 6:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1308_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0));
v___x_1309_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11(v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v_skipInstances_1291_, v___x_1308_, v___y_1305_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1309_;
}
case 8:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1310_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___closed__0));
v___x_1311_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12(v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v_skipInstances_1291_, v___x_1310_, v___y_1305_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1311_;
}
case 5:
{
lean_object* v_dummy_1312_; lean_object* v_nargs_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v_dummy_1312_ = lean_obj_once(&l_Lean_Elab_WF_withAppN___closed__1, &l_Lean_Elab_WF_withAppN___closed__1_once, _init_l_Lean_Elab_WF_withAppN___closed__1);
v_nargs_1313_ = l_Lean_Expr_getAppNumArgs(v___y_1305_);
lean_inc(v_nargs_1313_);
v___x_1314_ = lean_mk_array(v_nargs_1313_, v_dummy_1312_);
v___x_1315_ = lean_unsigned_to_nat(1u);
v___x_1316_ = lean_nat_sub(v_nargs_1313_, v___x_1315_);
lean_dec(v_nargs_1313_);
v___x_1317_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13(v_skipInstances_1291_, v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v___y_1305_, v___x_1314_, v___x_1316_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1317_;
}
case 10:
{
lean_object* v_data_1318_; lean_object* v_expr_1319_; lean_object* v___x_1320_; 
v_data_1318_ = lean_ctor_get(v___y_1305_, 0);
v_expr_1319_ = lean_ctor_get(v___y_1305_, 1);
lean_inc_ref(v_expr_1319_);
lean_inc_ref(v_post_1288_);
lean_inc_ref(v_pre_1286_);
v___x_1320_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v_skipInstances_1291_, v_expr_1319_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; size_t v___x_1322_; size_t v___x_1323_; uint8_t v___x_1324_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_a_1321_);
lean_dec_ref_known(v___x_1320_, 1);
v___x_1322_ = lean_ptr_addr(v_expr_1319_);
v___x_1323_ = lean_ptr_addr(v_a_1321_);
v___x_1324_ = lean_usize_dec_eq(v___x_1322_, v___x_1323_);
if (v___x_1324_ == 0)
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
lean_inc(v_data_1318_);
lean_dec_ref_known(v___y_1305_, 2);
v___x_1325_ = l_Lean_Expr_mdata___override(v_data_1318_, v_a_1321_);
v___x_1326_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v_skipInstances_1291_, v___x_1325_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1326_;
}
else
{
lean_object* v___x_1327_; 
lean_dec(v_a_1321_);
v___x_1327_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v_skipInstances_1291_, v___y_1305_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1327_;
}
}
else
{
lean_dec_ref_known(v___y_1305_, 2);
lean_dec_ref(v_post_1288_);
lean_dec_ref(v_pre_1286_);
return v___x_1320_;
}
}
case 11:
{
lean_object* v_typeName_1328_; lean_object* v_idx_1329_; lean_object* v_struct_1330_; lean_object* v___x_1331_; 
v_typeName_1328_ = lean_ctor_get(v___y_1305_, 0);
v_idx_1329_ = lean_ctor_get(v___y_1305_, 1);
v_struct_1330_ = lean_ctor_get(v___y_1305_, 2);
lean_inc_ref(v_struct_1330_);
lean_inc_ref(v_post_1288_);
lean_inc_ref(v_pre_1286_);
v___x_1331_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v_skipInstances_1291_, v_struct_1330_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; size_t v___x_1333_; size_t v___x_1334_; uint8_t v___x_1335_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc(v_a_1332_);
lean_dec_ref_known(v___x_1331_, 1);
v___x_1333_ = lean_ptr_addr(v_struct_1330_);
v___x_1334_ = lean_ptr_addr(v_a_1332_);
v___x_1335_ = lean_usize_dec_eq(v___x_1333_, v___x_1334_);
if (v___x_1335_ == 0)
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
lean_inc(v_idx_1329_);
lean_inc(v_typeName_1328_);
lean_dec_ref_known(v___y_1305_, 3);
v___x_1336_ = l_Lean_Expr_proj___override(v_typeName_1328_, v_idx_1329_, v_a_1332_);
v___x_1337_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v_skipInstances_1291_, v___x_1336_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1337_;
}
else
{
lean_object* v___x_1338_; 
lean_dec(v_a_1332_);
v___x_1338_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v_skipInstances_1291_, v___y_1305_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1338_;
}
}
else
{
lean_dec_ref_known(v___y_1305_, 3);
lean_dec_ref(v_post_1288_);
lean_dec_ref(v_pre_1286_);
return v___x_1331_;
}
}
default: 
{
lean_object* v___x_1339_; 
v___x_1339_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1286_, v_post_1288_, v_usedLetOnly_1289_, v_skipConstInApp_1290_, v_skipInstances_1291_, v___y_1305_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
return v___x_1339_;
}
}
}
}
}
else
{
lean_object* v_a_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1356_; 
lean_dec_ref(v_post_1288_);
lean_dec_ref(v_e_1287_);
lean_dec_ref(v_pre_1286_);
v_a_1349_ = lean_ctor_get(v___x_1299_, 0);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1351_ = v___x_1299_;
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_a_1349_);
lean_dec(v___x_1299_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1354_; 
if (v_isShared_1352_ == 0)
{
v___x_1354_ = v___x_1351_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_a_1349_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
}
}
else
{
lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
lean_dec_ref(v_post_1288_);
lean_dec_ref(v_e_1287_);
lean_dec_ref(v_pre_1286_);
v_a_1357_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1359_ = v___x_1298_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_dec(v___x_1298_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_a_1357_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___boxed(lean_object* v___x_1365_, lean_object* v_pre_1366_, lean_object* v_e_1367_, lean_object* v_post_1368_, lean_object* v_usedLetOnly_1369_, lean_object* v_skipConstInApp_1370_, lean_object* v_skipInstances_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
uint8_t v_usedLetOnly_boxed_1378_; uint8_t v_skipConstInApp_boxed_1379_; uint8_t v_skipInstances_boxed_1380_; lean_object* v_res_1381_; 
v_usedLetOnly_boxed_1378_ = lean_unbox(v_usedLetOnly_1369_);
v_skipConstInApp_boxed_1379_ = lean_unbox(v_skipConstInApp_1370_);
v_skipInstances_boxed_1380_ = lean_unbox(v_skipInstances_1371_);
v_res_1381_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1(v___x_1365_, v_pre_1366_, v_e_1367_, v_post_1368_, v_usedLetOnly_boxed_1378_, v_skipConstInApp_boxed_1379_, v_skipInstances_boxed_1380_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec(v___y_1372_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(lean_object* v_pre_1382_, lean_object* v_post_1383_, uint8_t v_usedLetOnly_1384_, uint8_t v_skipConstInApp_1385_, uint8_t v_skipInstances_1386_, lean_object* v_e_1387_, lean_object* v_a_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
lean_inc(v_a_1388_);
v___x_1394_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1394_, 0, lean_box(0));
lean_closure_set(v___x_1394_, 1, lean_box(0));
lean_closure_set(v___x_1394_, 2, v_a_1388_);
v___x_1395_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0(lean_box(0), v___x_1394_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1430_; 
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1398_ = v___x_1395_;
v_isShared_1399_ = v_isSharedCheck_1430_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v___x_1395_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1430_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1400_; 
v___x_1400_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg(v_a_1396_, v_e_1387_);
lean_dec(v_a_1396_);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___f_1405_; lean_object* v___x_1406_; 
lean_del_object(v___x_1398_);
v___x_1401_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___closed__0));
v___x_1402_ = lean_box(v_usedLetOnly_1384_);
v___x_1403_ = lean_box(v_skipConstInApp_1385_);
v___x_1404_ = lean_box(v_skipInstances_1386_);
lean_inc_ref(v_e_1387_);
v___f_1405_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__1___boxed), 13, 7);
lean_closure_set(v___f_1405_, 0, v___x_1401_);
lean_closure_set(v___f_1405_, 1, v_pre_1382_);
lean_closure_set(v___f_1405_, 2, v_e_1387_);
lean_closure_set(v___f_1405_, 3, v_post_1383_);
lean_closure_set(v___f_1405_, 4, v___x_1402_);
lean_closure_set(v___f_1405_, 5, v___x_1403_);
lean_closure_set(v___f_1405_, 6, v___x_1404_);
v___x_1406_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg(v___f_1405_, v_a_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v_a_1407_; lean_object* v___f_1408_; lean_object* v___x_1409_; 
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
lean_inc_n(v_a_1407_, 2);
lean_dec_ref_known(v___x_1406_, 1);
lean_inc(v_a_1388_);
v___f_1408_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1408_, 0, v_a_1388_);
lean_closure_set(v___f_1408_, 1, v_e_1387_);
lean_closure_set(v___f_1408_, 2, v_a_1407_);
v___x_1409_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___lam__0(lean_box(0), v___f_1408_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1416_ == 0)
{
lean_object* v_unused_1417_; 
v_unused_1417_ = lean_ctor_get(v___x_1409_, 0);
lean_dec(v_unused_1417_);
v___x_1411_ = v___x_1409_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_dec(v___x_1409_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 0, v_a_1407_);
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_a_1407_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
else
{
lean_object* v_a_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1425_; 
lean_dec(v_a_1407_);
v_a_1418_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1425_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1420_ = v___x_1409_;
v_isShared_1421_ = v_isSharedCheck_1425_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_a_1418_);
lean_dec(v___x_1409_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1425_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v___x_1423_; 
if (v_isShared_1421_ == 0)
{
v___x_1423_ = v___x_1420_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v_a_1418_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
}
else
{
lean_dec_ref(v_e_1387_);
return v___x_1406_;
}
}
else
{
lean_object* v_val_1426_; lean_object* v___x_1428_; 
lean_dec_ref(v_e_1387_);
lean_dec_ref(v_post_1383_);
lean_dec_ref(v_pre_1382_);
v_val_1426_ = lean_ctor_get(v___x_1400_, 0);
lean_inc(v_val_1426_);
lean_dec_ref_known(v___x_1400_, 1);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 0, v_val_1426_);
v___x_1428_ = v___x_1398_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_val_1426_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
else
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1438_; 
lean_dec_ref(v_e_1387_);
lean_dec_ref(v_post_1383_);
lean_dec_ref(v_pre_1382_);
v_a_1431_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1433_ = v___x_1395_;
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1395_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1434_ == 0)
{
v___x_1436_ = v___x_1433_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_a_1431_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10(lean_object* v_pre_1439_, lean_object* v_post_1440_, uint8_t v_usedLetOnly_1441_, uint8_t v_skipConstInApp_1442_, uint8_t v_skipInstances_1443_, lean_object* v_fvars_1444_, lean_object* v_e_1445_, lean_object* v_a_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
if (lean_obj_tag(v_e_1445_) == 7)
{
lean_object* v_binderName_1452_; lean_object* v_binderType_1453_; lean_object* v_body_1454_; uint8_t v_binderInfo_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___f_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v_binderName_1452_ = lean_ctor_get(v_e_1445_, 0);
lean_inc(v_binderName_1452_);
v_binderType_1453_ = lean_ctor_get(v_e_1445_, 1);
lean_inc_ref(v_binderType_1453_);
v_body_1454_ = lean_ctor_get(v_e_1445_, 2);
lean_inc_ref(v_body_1454_);
v_binderInfo_1455_ = lean_ctor_get_uint8(v_e_1445_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1445_, 3);
v___x_1456_ = lean_box(v_usedLetOnly_1441_);
v___x_1457_ = lean_box(v_skipConstInApp_1442_);
v___x_1458_ = lean_box(v_skipInstances_1443_);
lean_inc_ref(v_post_1440_);
lean_inc_ref(v_pre_1439_);
lean_inc_ref(v_fvars_1444_);
v___f_1459_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0___boxed), 14, 7);
lean_closure_set(v___f_1459_, 0, v_fvars_1444_);
lean_closure_set(v___f_1459_, 1, v_pre_1439_);
lean_closure_set(v___f_1459_, 2, v_post_1440_);
lean_closure_set(v___f_1459_, 3, v___x_1456_);
lean_closure_set(v___f_1459_, 4, v___x_1457_);
lean_closure_set(v___f_1459_, 5, v___x_1458_);
lean_closure_set(v___f_1459_, 6, v_body_1454_);
v___x_1460_ = lean_expr_instantiate_rev(v_binderType_1453_, v_fvars_1444_);
lean_dec_ref(v_fvars_1444_);
lean_dec_ref(v_binderType_1453_);
v___x_1461_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1439_, v_post_1440_, v_usedLetOnly_1441_, v_skipConstInApp_1442_, v_skipInstances_1443_, v___x_1460_, v_a_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v_a_1462_; uint8_t v___x_1463_; lean_object* v___x_1464_; 
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
lean_inc(v_a_1462_);
lean_dec_ref_known(v___x_1461_, 1);
v___x_1463_ = 0;
v___x_1464_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(v_binderName_1452_, v_binderInfo_1455_, v_a_1462_, v___f_1459_, v___x_1463_, v_a_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
return v___x_1464_;
}
else
{
lean_dec_ref(v___f_1459_);
lean_dec(v_binderName_1452_);
return v___x_1461_;
}
}
else
{
lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1465_ = lean_expr_instantiate_rev(v_e_1445_, v_fvars_1444_);
lean_dec_ref(v_e_1445_);
lean_inc_ref(v_post_1440_);
lean_inc_ref(v_pre_1439_);
v___x_1466_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1439_, v_post_1440_, v_usedLetOnly_1441_, v_skipConstInApp_1442_, v_skipInstances_1443_, v___x_1465_, v_a_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; uint8_t v___x_1468_; uint8_t v___x_1469_; uint8_t v___x_1470_; lean_object* v___x_1471_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1466_, 1);
v___x_1468_ = 0;
v___x_1469_ = 1;
v___x_1470_ = 1;
v___x_1471_ = l_Lean_Meta_mkForallFVars(v_fvars_1444_, v_a_1467_, v___x_1468_, v_usedLetOnly_1441_, v___x_1469_, v___x_1470_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1473_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
lean_inc(v_a_1472_);
lean_dec_ref_known(v___x_1471_, 1);
v___x_1473_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1439_, v_post_1440_, v_usedLetOnly_1441_, v_skipConstInApp_1442_, v_skipInstances_1443_, v_a_1472_, v_a_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
return v___x_1473_;
}
else
{
lean_dec_ref(v_post_1440_);
lean_dec_ref(v_pre_1439_);
return v___x_1471_;
}
}
else
{
lean_dec_ref(v_fvars_1444_);
lean_dec_ref(v_post_1440_);
lean_dec_ref(v_pre_1439_);
return v___x_1466_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___lam__0(lean_object* v_fvars_1474_, lean_object* v_pre_1475_, lean_object* v_post_1476_, uint8_t v_usedLetOnly_1477_, uint8_t v_skipConstInApp_1478_, uint8_t v_skipInstances_1479_, lean_object* v_body_1480_, lean_object* v_x_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1488_ = lean_array_push(v_fvars_1474_, v_x_1481_);
v___x_1489_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10(v_pre_1475_, v_post_1476_, v_usedLetOnly_1477_, v_skipConstInApp_1478_, v_skipInstances_1479_, v___x_1488_, v_body_1480_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7___boxed(lean_object* v_pre_1490_, lean_object* v_post_1491_, lean_object* v_usedLetOnly_1492_, lean_object* v_skipConstInApp_1493_, lean_object* v_skipInstances_1494_, lean_object* v_e_1495_, lean_object* v_a_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
uint8_t v_usedLetOnly_boxed_1502_; uint8_t v_skipConstInApp_boxed_1503_; uint8_t v_skipInstances_boxed_1504_; lean_object* v_res_1505_; 
v_usedLetOnly_boxed_1502_ = lean_unbox(v_usedLetOnly_1492_);
v_skipConstInApp_boxed_1503_ = lean_unbox(v_skipConstInApp_1493_);
v_skipInstances_boxed_1504_ = lean_unbox(v_skipInstances_1494_);
v_res_1505_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__7(v_pre_1490_, v_post_1491_, v_usedLetOnly_boxed_1502_, v_skipConstInApp_boxed_1503_, v_skipInstances_boxed_1504_, v_e_1495_, v_a_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v_a_1496_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4___boxed(lean_object* v_pre_1506_, lean_object* v_post_1507_, lean_object* v_usedLetOnly_1508_, lean_object* v_skipConstInApp_1509_, lean_object* v_skipInstances_1510_, lean_object* v_e_1511_, lean_object* v_a_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_){
_start:
{
uint8_t v_usedLetOnly_boxed_1518_; uint8_t v_skipConstInApp_boxed_1519_; uint8_t v_skipInstances_boxed_1520_; lean_object* v_res_1521_; 
v_usedLetOnly_boxed_1518_ = lean_unbox(v_usedLetOnly_1508_);
v_skipConstInApp_boxed_1519_ = lean_unbox(v_skipConstInApp_1509_);
v_skipInstances_boxed_1520_ = lean_unbox(v_skipInstances_1510_);
v_res_1521_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1506_, v_post_1507_, v_usedLetOnly_boxed_1518_, v_skipConstInApp_boxed_1519_, v_skipInstances_boxed_1520_, v_e_1511_, v_a_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_);
lean_dec(v___y_1516_);
lean_dec_ref(v___y_1515_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v_a_1512_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10___boxed(lean_object* v_pre_1522_, lean_object* v_post_1523_, lean_object* v_usedLetOnly_1524_, lean_object* v_skipConstInApp_1525_, lean_object* v_skipInstances_1526_, lean_object* v_fvars_1527_, lean_object* v_e_1528_, lean_object* v_a_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
uint8_t v_usedLetOnly_boxed_1535_; uint8_t v_skipConstInApp_boxed_1536_; uint8_t v_skipInstances_boxed_1537_; lean_object* v_res_1538_; 
v_usedLetOnly_boxed_1535_ = lean_unbox(v_usedLetOnly_1524_);
v_skipConstInApp_boxed_1536_ = lean_unbox(v_skipConstInApp_1525_);
v_skipInstances_boxed_1537_ = lean_unbox(v_skipInstances_1526_);
v_res_1538_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10(v_pre_1522_, v_post_1523_, v_usedLetOnly_boxed_1535_, v_skipConstInApp_boxed_1536_, v_skipInstances_boxed_1537_, v_fvars_1527_, v_e_1528_, v_a_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v_a_1529_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11___boxed(lean_object* v_pre_1539_, lean_object* v_post_1540_, lean_object* v_usedLetOnly_1541_, lean_object* v_skipConstInApp_1542_, lean_object* v_skipInstances_1543_, lean_object* v_fvars_1544_, lean_object* v_e_1545_, lean_object* v_a_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
uint8_t v_usedLetOnly_boxed_1552_; uint8_t v_skipConstInApp_boxed_1553_; uint8_t v_skipInstances_boxed_1554_; lean_object* v_res_1555_; 
v_usedLetOnly_boxed_1552_ = lean_unbox(v_usedLetOnly_1541_);
v_skipConstInApp_boxed_1553_ = lean_unbox(v_skipConstInApp_1542_);
v_skipInstances_boxed_1554_ = lean_unbox(v_skipInstances_1543_);
v_res_1555_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__11(v_pre_1539_, v_post_1540_, v_usedLetOnly_boxed_1552_, v_skipConstInApp_boxed_1553_, v_skipInstances_boxed_1554_, v_fvars_1544_, v_e_1545_, v_a_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
lean_dec(v_a_1546_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12___boxed(lean_object* v_pre_1556_, lean_object* v_post_1557_, lean_object* v_usedLetOnly_1558_, lean_object* v_skipConstInApp_1559_, lean_object* v_skipInstances_1560_, lean_object* v_fvars_1561_, lean_object* v_e_1562_, lean_object* v_a_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
uint8_t v_usedLetOnly_boxed_1569_; uint8_t v_skipConstInApp_boxed_1570_; uint8_t v_skipInstances_boxed_1571_; lean_object* v_res_1572_; 
v_usedLetOnly_boxed_1569_ = lean_unbox(v_usedLetOnly_1558_);
v_skipConstInApp_boxed_1570_ = lean_unbox(v_skipConstInApp_1559_);
v_skipInstances_boxed_1571_ = lean_unbox(v_skipInstances_1560_);
v_res_1572_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12(v_pre_1556_, v_post_1557_, v_usedLetOnly_boxed_1569_, v_skipConstInApp_boxed_1570_, v_skipInstances_boxed_1571_, v_fvars_1561_, v_e_1562_, v_a_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v_a_1563_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg___boxed(lean_object* v_upperBound_1573_, lean_object* v___x_1574_, lean_object* v_pre_1575_, lean_object* v_post_1576_, lean_object* v_usedLetOnly_1577_, lean_object* v_skipConstInApp_1578_, lean_object* v_skipInstances_1579_, lean_object* v_a_1580_, lean_object* v_b_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
uint8_t v_usedLetOnly_boxed_1588_; uint8_t v_skipConstInApp_boxed_1589_; uint8_t v_skipInstances_boxed_1590_; lean_object* v_res_1591_; 
v_usedLetOnly_boxed_1588_ = lean_unbox(v_usedLetOnly_1577_);
v_skipConstInApp_boxed_1589_ = lean_unbox(v_skipConstInApp_1578_);
v_skipInstances_boxed_1590_ = lean_unbox(v_skipInstances_1579_);
v_res_1591_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg(v_upperBound_1573_, v___x_1574_, v_pre_1575_, v_post_1576_, v_usedLetOnly_boxed_1588_, v_skipConstInApp_boxed_1589_, v_skipInstances_boxed_1590_, v_a_1580_, v_b_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
lean_dec(v___y_1582_);
lean_dec_ref(v___x_1574_);
lean_dec(v_upperBound_1573_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13___boxed(lean_object* v_skipInstances_1592_, lean_object* v_pre_1593_, lean_object* v_post_1594_, lean_object* v_usedLetOnly_1595_, lean_object* v_skipConstInApp_1596_, lean_object* v_x_1597_, lean_object* v_x_1598_, lean_object* v_x_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
uint8_t v_skipInstances_boxed_1606_; uint8_t v_usedLetOnly_boxed_1607_; uint8_t v_skipConstInApp_boxed_1608_; lean_object* v_res_1609_; 
v_skipInstances_boxed_1606_ = lean_unbox(v_skipInstances_1592_);
v_usedLetOnly_boxed_1607_ = lean_unbox(v_usedLetOnly_1595_);
v_skipConstInApp_boxed_1608_ = lean_unbox(v_skipConstInApp_1596_);
v_res_1609_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13(v_skipInstances_boxed_1606_, v_pre_1593_, v_post_1594_, v_usedLetOnly_boxed_1607_, v_skipConstInApp_boxed_1608_, v_x_1597_, v_x_1598_, v_x_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
lean_dec(v___y_1600_);
return v_res_1609_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1610_ = lean_box(0);
v___x_1611_ = lean_unsigned_to_nat(16u);
v___x_1612_ = lean_mk_array(v___x_1611_, v___x_1610_);
return v___x_1612_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1613_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0, &l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__0);
v___x_1614_ = lean_unsigned_to_nat(0u);
v___x_1615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1614_);
lean_ctor_set(v___x_1615_, 1, v___x_1613_);
return v___x_1615_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2(void){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1616_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1, &l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__1);
v___x_1617_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1617_, 0, lean_box(0));
lean_closure_set(v___x_1617_, 1, lean_box(0));
lean_closure_set(v___x_1617_, 2, v___x_1616_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3(lean_object* v_input_1618_, lean_object* v_pre_1619_, lean_object* v_post_1620_, uint8_t v_usedLetOnly_1621_, uint8_t v_skipConstInApp_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
uint8_t v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v_a_1631_; lean_object* v___x_1632_; 
v___x_1628_ = 0;
v___x_1629_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2, &l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___closed__2);
v___x_1630_ = l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0(lean_box(0), v___x_1629_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_);
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_a_1631_);
lean_dec_ref(v___x_1630_);
v___x_1632_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4(v_pre_1619_, v_post_1620_, v_usedLetOnly_1621_, v_skipConstInApp_1622_, v___x_1628_, v_input_1618_, v_a_1631_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_);
if (lean_obj_tag(v___x_1632_) == 0)
{
lean_object* v_a_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1642_; 
v_a_1633_ = lean_ctor_get(v___x_1632_, 0);
lean_inc(v_a_1633_);
lean_dec_ref_known(v___x_1632_, 1);
v___x_1634_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1634_, 0, lean_box(0));
lean_closure_set(v___x_1634_, 1, lean_box(0));
lean_closure_set(v___x_1634_, 2, v_a_1631_);
v___x_1635_ = l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___lam__0(lean_box(0), v___x_1634_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_);
v_isSharedCheck_1642_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1642_ == 0)
{
lean_object* v_unused_1643_; 
v_unused_1643_ = lean_ctor_get(v___x_1635_, 0);
lean_dec(v_unused_1643_);
v___x_1637_ = v___x_1635_;
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
else
{
lean_dec(v___x_1635_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1642_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1640_; 
if (v_isShared_1638_ == 0)
{
lean_ctor_set(v___x_1637_, 0, v_a_1633_);
v___x_1640_ = v___x_1637_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_a_1633_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
else
{
lean_dec(v_a_1631_);
return v___x_1632_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3___boxed(lean_object* v_input_1644_, lean_object* v_pre_1645_, lean_object* v_post_1646_, lean_object* v_usedLetOnly_1647_, lean_object* v_skipConstInApp_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_){
_start:
{
uint8_t v_usedLetOnly_boxed_1654_; uint8_t v_skipConstInApp_boxed_1655_; lean_object* v_res_1656_; 
v_usedLetOnly_boxed_1654_ = lean_unbox(v_usedLetOnly_1647_);
v_skipConstInApp_boxed_1655_ = lean_unbox(v_skipConstInApp_1648_);
v_res_1656_ = l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3(v_input_1644_, v_pre_1645_, v_post_1646_, v_usedLetOnly_boxed_1654_, v_skipConstInApp_boxed_1655_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
lean_dec(v___y_1652_);
lean_dec_ref(v___y_1651_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
return v_res_1656_;
}
}
static lean_object* _init_l_Lean_Elab_WF_packCalls___closed__1(void){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Array_instInhabited___redArg();
return v___x_1658_;
}
}
static lean_object* _init_l_Lean_Elab_WF_packCalls___closed__3(void){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___closed__2));
v___x_1661_ = l_Lean_stringToMessageData(v___x_1660_);
return v___x_1661_;
}
}
static lean_object* _init_l_Lean_Elab_WF_packCalls___closed__5(void){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1663_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___closed__4));
v___x_1664_ = l_Lean_stringToMessageData(v___x_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls(lean_object* v_fixedParamPerms_1665_, lean_object* v_argsPacker_1666_, lean_object* v_funNames_1667_, lean_object* v_newF_1668_, lean_object* v_e_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v___f_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___f_1675_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___closed__0));
v___x_1676_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
lean_inc(v_a_1673_);
lean_inc_ref(v_a_1672_);
lean_inc(v_a_1671_);
lean_inc_ref(v_a_1670_);
lean_inc_ref(v_newF_1668_);
v___x_1677_ = lean_infer_type(v_newF_1668_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v_a_1678_; lean_object* v___y_1680_; lean_object* v___y_1681_; lean_object* v___y_1682_; lean_object* v___y_1683_; uint8_t v___x_1689_; 
v_a_1678_ = lean_ctor_get(v___x_1677_, 0);
lean_inc(v_a_1678_);
lean_dec_ref_known(v___x_1677_, 1);
v___x_1689_ = l_Lean_Expr_isForall(v_a_1678_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
lean_dec_ref(v_e_1669_);
lean_dec_ref(v_funNames_1667_);
lean_dec_ref(v_argsPacker_1666_);
lean_dec_ref(v_fixedParamPerms_1665_);
v___x_1690_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__3, &l_Lean_Elab_WF_packCalls___closed__3_once, _init_l_Lean_Elab_WF_packCalls___closed__3);
v___x_1691_ = l_Lean_MessageData_ofExpr(v_newF_1668_);
v___x_1692_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1690_);
lean_ctor_set(v___x_1692_, 1, v___x_1691_);
v___x_1693_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__5, &l_Lean_Elab_WF_packCalls___closed__5_once, _init_l_Lean_Elab_WF_packCalls___closed__5);
v___x_1694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1692_);
lean_ctor_set(v___x_1694_, 1, v___x_1693_);
v___x_1695_ = l_Lean_MessageData_ofExpr(v_a_1678_);
v___x_1696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1694_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = l_Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0___redArg(v___x_1696_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v___x_1697_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1697_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1703_; 
if (v_isShared_1701_ == 0)
{
v___x_1703_ = v___x_1700_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1698_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
else
{
v___y_1680_ = v_a_1670_;
v___y_1681_ = v_a_1671_;
v___y_1682_ = v_a_1672_;
v___y_1683_ = v_a_1673_;
goto v___jp_1679_;
}
v___jp_1679_:
{
lean_object* v___x_1684_; lean_object* v___f_1685_; uint8_t v___x_1686_; uint8_t v___x_1687_; lean_object* v___x_1688_; 
v___x_1684_ = l_Lean_Expr_bindingDomain_x21(v_a_1678_);
lean_dec(v_a_1678_);
v___f_1685_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_packCalls___lam__2___boxed), 12, 6);
lean_closure_set(v___f_1685_, 0, v_funNames_1667_);
lean_closure_set(v___f_1685_, 1, v_fixedParamPerms_1665_);
lean_closure_set(v___f_1685_, 2, v___x_1676_);
lean_closure_set(v___f_1685_, 3, v_argsPacker_1666_);
lean_closure_set(v___f_1685_, 4, v___x_1684_);
lean_closure_set(v___f_1685_, 5, v_newF_1668_);
v___x_1686_ = 0;
v___x_1687_ = 1;
v___x_1688_ = l_Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3(v_e_1669_, v___f_1675_, v___f_1685_, v___x_1686_, v___x_1687_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_);
return v___x_1688_;
}
}
else
{
lean_dec_ref(v_e_1669_);
lean_dec_ref(v_newF_1668_);
lean_dec_ref(v_funNames_1667_);
lean_dec_ref(v_argsPacker_1666_);
lean_dec_ref(v_fixedParamPerms_1665_);
return v___x_1677_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packCalls___boxed(lean_object* v_fixedParamPerms_1706_, lean_object* v_argsPacker_1707_, lean_object* v_funNames_1708_, lean_object* v_newF_1709_, lean_object* v_e_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_Lean_Elab_WF_packCalls(v_fixedParamPerms_1706_, v_argsPacker_1707_, v_funNames_1708_, v_newF_1709_, v_e_1710_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_);
lean_dec(v_a_1714_);
lean_dec_ref(v_a_1713_);
lean_dec(v_a_1712_);
lean_dec_ref(v_a_1711_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8(lean_object* v_upperBound_1717_, lean_object* v___x_1718_, lean_object* v_pre_1719_, lean_object* v_post_1720_, uint8_t v_usedLetOnly_1721_, uint8_t v_skipConstInApp_1722_, uint8_t v_skipInstances_1723_, lean_object* v___x_1724_, lean_object* v_inst_1725_, lean_object* v_R_1726_, lean_object* v_a_1727_, lean_object* v_b_1728_, lean_object* v_c_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___redArg(v_upperBound_1717_, v___x_1718_, v_pre_1719_, v_post_1720_, v_usedLetOnly_1721_, v_skipConstInApp_1722_, v_skipInstances_1723_, v_a_1727_, v_b_1728_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8___boxed(lean_object** _args){
lean_object* v_upperBound_1737_ = _args[0];
lean_object* v___x_1738_ = _args[1];
lean_object* v_pre_1739_ = _args[2];
lean_object* v_post_1740_ = _args[3];
lean_object* v_usedLetOnly_1741_ = _args[4];
lean_object* v_skipConstInApp_1742_ = _args[5];
lean_object* v_skipInstances_1743_ = _args[6];
lean_object* v___x_1744_ = _args[7];
lean_object* v_inst_1745_ = _args[8];
lean_object* v_R_1746_ = _args[9];
lean_object* v_a_1747_ = _args[10];
lean_object* v_b_1748_ = _args[11];
lean_object* v_c_1749_ = _args[12];
lean_object* v___y_1750_ = _args[13];
lean_object* v___y_1751_ = _args[14];
lean_object* v___y_1752_ = _args[15];
lean_object* v___y_1753_ = _args[16];
lean_object* v___y_1754_ = _args[17];
lean_object* v___y_1755_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_1756_; uint8_t v_skipConstInApp_boxed_1757_; uint8_t v_skipInstances_boxed_1758_; lean_object* v_res_1759_; 
v_usedLetOnly_boxed_1756_ = lean_unbox(v_usedLetOnly_1741_);
v_skipConstInApp_boxed_1757_ = lean_unbox(v_skipConstInApp_1742_);
v_skipInstances_boxed_1758_ = lean_unbox(v_skipInstances_1743_);
v_res_1759_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__8(v_upperBound_1737_, v___x_1738_, v_pre_1739_, v_post_1740_, v_usedLetOnly_boxed_1756_, v_skipConstInApp_boxed_1757_, v_skipInstances_boxed_1758_, v___x_1744_, v_inst_1745_, v_R_1746_, v_a_1747_, v_b_1748_, v_c_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_);
lean_dec(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec(v___y_1750_);
lean_dec(v___x_1744_);
lean_dec_ref(v___x_1738_);
lean_dec(v_upperBound_1737_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9(lean_object* v_00_u03b2_1760_, lean_object* v_m_1761_, lean_object* v_a_1762_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___redArg(v_m_1761_, v_a_1762_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9___boxed(lean_object* v_00_u03b2_1764_, lean_object* v_m_1765_, lean_object* v_a_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9(v_00_u03b2_1764_, v_m_1765_, v_a_1766_);
lean_dec_ref(v_a_1766_);
lean_dec_ref(v_m_1765_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12(lean_object* v_00_u03b1_1768_, lean_object* v_name_1769_, uint8_t v_bi_1770_, lean_object* v_type_1771_, lean_object* v_k_1772_, uint8_t v_kind_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___redArg(v_name_1769_, v_bi_1770_, v_type_1771_, v_k_1772_, v_kind_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12___boxed(lean_object* v_00_u03b1_1781_, lean_object* v_name_1782_, lean_object* v_bi_1783_, lean_object* v_type_1784_, lean_object* v_k_1785_, lean_object* v_kind_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_){
_start:
{
uint8_t v_bi_boxed_1793_; uint8_t v_kind_boxed_1794_; lean_object* v_res_1795_; 
v_bi_boxed_1793_ = lean_unbox(v_bi_1783_);
v_kind_boxed_1794_ = lean_unbox(v_kind_1786_);
v_res_1795_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__10_spec__12(v_00_u03b1_1781_, v_name_1782_, v_bi_boxed_1793_, v_type_1784_, v_k_1785_, v_kind_boxed_1794_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_);
lean_dec(v___y_1791_);
lean_dec_ref(v___y_1790_);
lean_dec(v___y_1789_);
lean_dec_ref(v___y_1788_);
lean_dec(v___y_1787_);
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15(lean_object* v_00_u03b1_1796_, lean_object* v_name_1797_, lean_object* v_type_1798_, lean_object* v_val_1799_, lean_object* v_k_1800_, uint8_t v_nondep_1801_, uint8_t v_kind_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v___x_1809_; 
v___x_1809_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___redArg(v_name_1797_, v_type_1798_, v_val_1799_, v_k_1800_, v_nondep_1801_, v_kind_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15___boxed(lean_object* v_00_u03b1_1810_, lean_object* v_name_1811_, lean_object* v_type_1812_, lean_object* v_val_1813_, lean_object* v_k_1814_, lean_object* v_nondep_1815_, lean_object* v_kind_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
uint8_t v_nondep_boxed_1823_; uint8_t v_kind_boxed_1824_; lean_object* v_res_1825_; 
v_nondep_boxed_1823_ = lean_unbox(v_nondep_1815_);
v_kind_boxed_1824_ = lean_unbox(v_kind_1816_);
v_res_1825_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__12_spec__15(v_00_u03b1_1810_, v_name_1811_, v_type_1812_, v_val_1813_, v_k_1814_, v_nondep_boxed_1823_, v_kind_boxed_1824_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18(lean_object* v_00_u03b1_1826_, lean_object* v_ref_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
lean_object* v___x_1833_; 
v___x_1833_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___redArg(v_ref_1827_);
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18___boxed(lean_object* v_00_u03b1_1834_, lean_object* v_ref_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14_spec__18(v_00_u03b1_1834_, v_ref_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14(lean_object* v_00_u03b1_1842_, lean_object* v_x_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v___x_1850_; 
v___x_1850_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___redArg(v_x_1843_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14___boxed(lean_object* v_00_u03b1_1851_, lean_object* v_x_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__14(v_00_u03b1_1851_, v_x_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_);
lean_dec(v___y_1857_);
lean_dec_ref(v___y_1856_);
lean_dec(v___y_1855_);
lean_dec_ref(v___y_1854_);
lean_dec(v___y_1853_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15(lean_object* v_00_u03b2_1860_, lean_object* v_m_1861_, lean_object* v_a_1862_, lean_object* v_b_1863_){
_start:
{
lean_object* v___x_1864_; 
v___x_1864_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15___redArg(v_m_1861_, v_a_1862_, v_b_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10(lean_object* v_00_u03b2_1865_, lean_object* v_a_1866_, lean_object* v_x_1867_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___redArg(v_a_1866_, v_x_1867_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10___boxed(lean_object* v_00_u03b2_1869_, lean_object* v_a_1870_, lean_object* v_x_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__9_spec__10(v_00_u03b2_1869_, v_a_1870_, v_x_1871_);
lean_dec(v_x_1871_);
lean_dec_ref(v_a_1870_);
return v_res_1872_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20(lean_object* v_00_u03b2_1873_, lean_object* v_a_1874_, lean_object* v_x_1875_){
_start:
{
uint8_t v___x_1876_; 
v___x_1876_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___redArg(v_a_1874_, v_x_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20___boxed(lean_object* v_00_u03b2_1877_, lean_object* v_a_1878_, lean_object* v_x_1879_){
_start:
{
uint8_t v_res_1880_; lean_object* v_r_1881_; 
v_res_1880_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__20(v_00_u03b2_1877_, v_a_1878_, v_x_1879_);
lean_dec(v_x_1879_);
lean_dec_ref(v_a_1878_);
v_r_1881_ = lean_box(v_res_1880_);
return v_r_1881_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21(lean_object* v_00_u03b2_1882_, lean_object* v_data_1883_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21___redArg(v_data_1883_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22(lean_object* v_00_u03b2_1885_, lean_object* v_a_1886_, lean_object* v_b_1887_, lean_object* v_x_1888_){
_start:
{
lean_object* v___x_1889_; 
v___x_1889_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__22___redArg(v_a_1886_, v_b_1887_, v_x_1888_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22(lean_object* v_00_u03b2_1890_, lean_object* v_i_1891_, lean_object* v_source_1892_, lean_object* v_target_1893_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22___redArg(v_i_1891_, v_source_1892_, v_target_1893_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23(lean_object* v_00_u03b2_1895_, lean_object* v_x_1896_, lean_object* v_x_1897_){
_start:
{
lean_object* v___x_1898_; 
v___x_1898_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__15_spec__21_spec__22_spec__23___redArg(v_x_1896_, v_x_1897_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mutualName(lean_object* v_fixedParamPerms_1905_, lean_object* v_argsPacker_1906_, lean_object* v_preDefs_1907_){
_start:
{
lean_object* v___x_1908_; uint8_t v___y_1910_; uint8_t v___x_1927_; 
v___x_1908_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_1927_ = l_Lean_Elab_FixedParamPerms_fixedArePrefix(v_fixedParamPerms_1905_);
if (v___x_1927_ == 0)
{
v___y_1910_ = v___x_1927_;
goto v___jp_1909_;
}
else
{
uint8_t v___x_1928_; 
v___x_1928_ = l_Lean_Meta_ArgsPacker_onlyOneUnary(v_argsPacker_1906_);
v___y_1910_ = v___x_1928_;
goto v___jp_1909_;
}
v___jp_1909_:
{
if (v___y_1910_ == 0)
{
lean_object* v___x_1911_; lean_object* v___x_1912_; uint8_t v___x_1913_; 
v___x_1911_ = lean_unsigned_to_nat(1u);
v___x_1912_ = l_Lean_Meta_ArgsPacker_numFuncs(v_argsPacker_1906_);
v___x_1913_ = lean_nat_dec_lt(v___x_1911_, v___x_1912_);
lean_dec(v___x_1912_);
if (v___x_1913_ == 0)
{
lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v_declName_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1914_ = lean_unsigned_to_nat(0u);
v___x_1915_ = lean_array_get_borrowed(v___x_1908_, v_preDefs_1907_, v___x_1914_);
v_declName_1916_ = lean_ctor_get(v___x_1915_, 3);
v___x_1917_ = ((lean_object*)(l_Lean_Elab_WF_mutualName___closed__1));
lean_inc(v_declName_1916_);
v___x_1918_ = l_Lean_Name_append(v_declName_1916_, v___x_1917_);
return v___x_1918_;
}
else
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v_declName_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1919_ = lean_unsigned_to_nat(0u);
v___x_1920_ = lean_array_get_borrowed(v___x_1908_, v_preDefs_1907_, v___x_1919_);
v_declName_1921_ = lean_ctor_get(v___x_1920_, 3);
v___x_1922_ = ((lean_object*)(l_Lean_Elab_WF_mutualName___closed__3));
lean_inc(v_declName_1921_);
v___x_1923_ = l_Lean_Name_append(v_declName_1921_, v___x_1922_);
return v___x_1923_;
}
}
else
{
lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v_declName_1926_; 
v___x_1924_ = lean_unsigned_to_nat(0u);
v___x_1925_ = lean_array_get_borrowed(v___x_1908_, v_preDefs_1907_, v___x_1924_);
v_declName_1926_ = lean_ctor_get(v___x_1925_, 3);
lean_inc(v_declName_1926_);
return v_declName_1926_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mutualName___boxed(lean_object* v_fixedParamPerms_1929_, lean_object* v_argsPacker_1930_, lean_object* v_preDefs_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lean_Elab_WF_mutualName(v_fixedParamPerms_1929_, v_argsPacker_1930_, v_preDefs_1931_);
lean_dec_ref(v_preDefs_1931_);
lean_dec_ref(v_argsPacker_1930_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0(lean_object* v_k_1933_, lean_object* v_b_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_){
_start:
{
lean_object* v___x_1940_; 
lean_inc(v___y_1938_);
lean_inc_ref(v___y_1937_);
lean_inc(v___y_1936_);
lean_inc_ref(v___y_1935_);
v___x_1940_ = lean_apply_6(v_k_1933_, v_b_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_, lean_box(0));
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0___boxed(lean_object* v_k_1941_, lean_object* v_b_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0(v_k_1941_, v_b_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg(lean_object* v_perm_1949_, lean_object* v_type_1950_, lean_object* v_k_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v___f_1957_; lean_object* v___x_1958_; 
v___f_1957_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1957_, 0, v_k_1951_);
v___x_1958_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_box(0), v_perm_1949_, v_type_1950_, v___f_1957_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1966_; 
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_1966_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1966_ == 0)
{
v___x_1961_ = v___x_1958_;
v_isShared_1962_ = v_isSharedCheck_1966_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_a_1959_);
lean_dec(v___x_1958_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1966_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1964_; 
if (v_isShared_1962_ == 0)
{
v___x_1964_ = v___x_1961_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v_a_1959_);
v___x_1964_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
return v___x_1964_;
}
}
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
v_a_1967_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1958_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1958_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg___boxed(lean_object* v_perm_1975_, lean_object* v_type_1976_, lean_object* v_k_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg(v_perm_1975_, v_type_1976_, v_k_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4(lean_object* v_00_u03b1_1984_, lean_object* v_perm_1985_, lean_object* v_type_1986_, lean_object* v_k_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_){
_start:
{
lean_object* v___x_1993_; 
v___x_1993_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg(v_perm_1985_, v_type_1986_, v_k_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_);
return v___x_1993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___boxed(lean_object* v_00_u03b1_1994_, lean_object* v_perm_1995_, lean_object* v_type_1996_, lean_object* v_k_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4(v_00_u03b1_1994_, v_perm_1995_, v_type_1996_, v_k_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_);
lean_dec(v___y_2001_);
lean_dec_ref(v___y_2000_);
lean_dec(v___y_1999_);
lean_dec_ref(v___y_1998_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg(lean_object* v___x_2004_, lean_object* v_ys_2005_, size_t v_sz_2006_, size_t v_i_2007_, lean_object* v_bs_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_){
_start:
{
uint8_t v___x_2014_; 
v___x_2014_ = lean_usize_dec_lt(v_i_2007_, v_sz_2006_);
if (v___x_2014_ == 0)
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
lean_dec_ref(v_ys_2005_);
v___x_2015_ = l_unsafeCast___redArg(v_bs_2008_);
lean_dec_ref(v_bs_2008_);
v___x_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2015_);
return v___x_2016_;
}
else
{
lean_object* v_v_2017_; lean_object* v___x_2018_; lean_object* v_type_2019_; lean_object* v___x_2020_; lean_object* v_bs_x27_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v_v_2017_ = lean_array_uget_borrowed(v_bs_2008_, v_i_2007_);
v___x_2018_ = l_unsafeCast___redArg(v_v_2017_);
v_type_2019_ = lean_ctor_get(v___x_2018_, 6);
lean_inc_ref(v_type_2019_);
lean_dec(v___x_2018_);
v___x_2020_ = lean_unsigned_to_nat(0u);
v_bs_x27_2021_ = lean_array_uset(v_bs_2008_, v_i_2007_, v___x_2020_);
v___x_2022_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
v___x_2023_ = lean_usize_to_nat(v_i_2007_);
v___x_2024_ = lean_array_get_borrowed(v___x_2022_, v___x_2004_, v___x_2023_);
lean_dec(v___x_2023_);
lean_inc_ref(v_ys_2005_);
lean_inc(v___x_2024_);
v___x_2025_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v___x_2024_, v_type_2019_, v_ys_2005_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v_a_2026_; size_t v___x_2027_; size_t v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref_known(v___x_2025_, 1);
v___x_2027_ = ((size_t)1ULL);
v___x_2028_ = lean_usize_add(v_i_2007_, v___x_2027_);
v___x_2029_ = l_unsafeCast___redArg(v_a_2026_);
lean_dec(v_a_2026_);
v___x_2030_ = lean_array_uset(v_bs_x27_2021_, v_i_2007_, v___x_2029_);
v_i_2007_ = v___x_2028_;
v_bs_2008_ = v___x_2030_;
goto _start;
}
else
{
lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2039_; 
lean_dec_ref(v_bs_x27_2021_);
lean_dec_ref(v_ys_2005_);
v_a_2032_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2034_ = v___x_2025_;
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v___x_2025_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2037_; 
if (v_isShared_2035_ == 0)
{
v___x_2037_ = v___x_2034_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v_a_2032_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg___boxed(lean_object* v___x_2040_, lean_object* v_ys_2041_, lean_object* v_sz_2042_, lean_object* v_i_2043_, lean_object* v_bs_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
size_t v_sz_boxed_2050_; size_t v_i_boxed_2051_; lean_object* v_res_2052_; 
v_sz_boxed_2050_ = lean_unbox_usize(v_sz_2042_);
lean_dec(v_sz_2042_);
v_i_boxed_2051_ = lean_unbox_usize(v_i_2043_);
lean_dec(v_i_2043_);
v_res_2052_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg(v___x_2040_, v_ys_2041_, v_sz_boxed_2050_, v_i_boxed_2051_, v_bs_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec_ref(v___x_2040_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0(lean_object* v___x_2053_, lean_object* v_ys_2054_, lean_object* v_as_2055_, size_t v_sz_2056_, size_t v_i_2057_, lean_object* v_bs_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_){
_start:
{
lean_object* v___x_2064_; 
v___x_2064_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___redArg(v___x_2053_, v_ys_2054_, v_sz_2056_, v_i_2057_, v_bs_2058_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
return v___x_2064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___boxed(lean_object* v___x_2065_, lean_object* v_ys_2066_, lean_object* v_as_2067_, lean_object* v_sz_2068_, lean_object* v_i_2069_, lean_object* v_bs_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
size_t v_sz_boxed_2076_; size_t v_i_boxed_2077_; lean_object* v_res_2078_; 
v_sz_boxed_2076_ = lean_unbox_usize(v_sz_2068_);
lean_dec(v_sz_2068_);
v_i_boxed_2077_ = lean_unbox_usize(v_i_2069_);
lean_dec(v_i_2069_);
v_res_2078_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0(v___x_2065_, v_ys_2066_, v_as_2067_, v_sz_boxed_2076_, v_i_boxed_2077_, v_bs_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec_ref(v_as_2067_);
lean_dec_ref(v___x_2065_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg(lean_object* v___x_2079_, lean_object* v_ys_2080_, size_t v_sz_2081_, size_t v_i_2082_, lean_object* v_bs_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
uint8_t v___x_2089_; 
v___x_2089_ = lean_usize_dec_lt(v_i_2082_, v_sz_2081_);
if (v___x_2089_ == 0)
{
lean_object* v___x_2090_; lean_object* v___x_2091_; 
lean_dec_ref(v_ys_2080_);
v___x_2090_ = l_unsafeCast___redArg(v_bs_2083_);
lean_dec_ref(v_bs_2083_);
v___x_2091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2090_);
return v___x_2091_;
}
else
{
lean_object* v_v_2092_; lean_object* v___x_2093_; lean_object* v_value_2094_; lean_object* v___x_2095_; lean_object* v_bs_x27_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v_v_2092_ = lean_array_uget_borrowed(v_bs_2083_, v_i_2082_);
v___x_2093_ = l_unsafeCast___redArg(v_v_2092_);
v_value_2094_ = lean_ctor_get(v___x_2093_, 7);
lean_inc_ref(v_value_2094_);
lean_dec(v___x_2093_);
v___x_2095_ = lean_unsigned_to_nat(0u);
v_bs_x27_2096_ = lean_array_uset(v_bs_2083_, v_i_2082_, v___x_2095_);
v___x_2097_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
v___x_2098_ = lean_usize_to_nat(v_i_2082_);
v___x_2099_ = lean_array_get_borrowed(v___x_2097_, v___x_2079_, v___x_2098_);
lean_dec(v___x_2098_);
lean_inc_ref(v_ys_2080_);
lean_inc(v___x_2099_);
v___x_2100_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v___x_2099_, v_value_2094_, v_ys_2080_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; size_t v___x_2102_; size_t v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2101_);
lean_dec_ref_known(v___x_2100_, 1);
v___x_2102_ = ((size_t)1ULL);
v___x_2103_ = lean_usize_add(v_i_2082_, v___x_2102_);
v___x_2104_ = l_unsafeCast___redArg(v_a_2101_);
lean_dec(v_a_2101_);
v___x_2105_ = lean_array_uset(v_bs_x27_2096_, v_i_2082_, v___x_2104_);
v_i_2082_ = v___x_2103_;
v_bs_2083_ = v___x_2105_;
goto _start;
}
else
{
lean_object* v_a_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2114_; 
lean_dec_ref(v_bs_x27_2096_);
lean_dec_ref(v_ys_2080_);
v_a_2107_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2109_ = v___x_2100_;
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_a_2107_);
lean_dec(v___x_2100_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___x_2112_; 
if (v_isShared_2110_ == 0)
{
v___x_2112_ = v___x_2109_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v_a_2107_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg___boxed(lean_object* v___x_2115_, lean_object* v_ys_2116_, lean_object* v_sz_2117_, lean_object* v_i_2118_, lean_object* v_bs_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_){
_start:
{
size_t v_sz_boxed_2125_; size_t v_i_boxed_2126_; lean_object* v_res_2127_; 
v_sz_boxed_2125_ = lean_unbox_usize(v_sz_2117_);
lean_dec(v_sz_2117_);
v_i_boxed_2126_ = lean_unbox_usize(v_i_2118_);
lean_dec(v_i_2118_);
v_res_2127_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg(v___x_2115_, v_ys_2116_, v_sz_boxed_2125_, v_i_boxed_2126_, v_bs_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec_ref(v___x_2115_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1(lean_object* v___x_2128_, lean_object* v_ys_2129_, lean_object* v_as_2130_, size_t v_sz_2131_, size_t v_i_2132_, lean_object* v_bs_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v___x_2139_; 
v___x_2139_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___redArg(v___x_2128_, v_ys_2129_, v_sz_2131_, v_i_2132_, v_bs_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___boxed(lean_object* v___x_2140_, lean_object* v_ys_2141_, lean_object* v_as_2142_, lean_object* v_sz_2143_, lean_object* v_i_2144_, lean_object* v_bs_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
size_t v_sz_boxed_2151_; size_t v_i_boxed_2152_; lean_object* v_res_2153_; 
v_sz_boxed_2151_ = lean_unbox_usize(v_sz_2143_);
lean_dec(v_sz_2143_);
v_i_boxed_2152_ = lean_unbox_usize(v_i_2144_);
lean_dec(v_i_2144_);
v_res_2153_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1(v___x_2140_, v_ys_2141_, v_as_2142_, v_sz_boxed_2151_, v_i_boxed_2152_, v_bs_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
lean_dec(v___y_2149_);
lean_dec_ref(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec_ref(v_as_2142_);
lean_dec_ref(v___x_2140_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_WF_packMutual_spec__2(lean_object* v_a_2154_, lean_object* v_a_2155_){
_start:
{
if (lean_obj_tag(v_a_2154_) == 0)
{
lean_object* v___x_2156_; 
v___x_2156_ = l_List_reverse___redArg(v_a_2155_);
return v___x_2156_;
}
else
{
lean_object* v_head_2157_; lean_object* v_tail_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2167_; 
v_head_2157_ = lean_ctor_get(v_a_2154_, 0);
v_tail_2158_ = lean_ctor_get(v_a_2154_, 1);
v_isSharedCheck_2167_ = !lean_is_exclusive(v_a_2154_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2160_ = v_a_2154_;
v_isShared_2161_ = v_isSharedCheck_2167_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_tail_2158_);
lean_inc(v_head_2157_);
lean_dec(v_a_2154_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2167_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2162_; lean_object* v___x_2164_; 
v___x_2162_ = l_Lean_mkLevelParam(v_head_2157_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 1, v_a_2155_);
lean_ctor_set(v___x_2160_, 0, v___x_2162_);
v___x_2164_ = v___x_2160_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2162_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v_a_2155_);
v___x_2164_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
v_a_2154_ = v_tail_2158_;
v_a_2155_ = v___x_2164_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3(size_t v_sz_2168_, size_t v_i_2169_, lean_object* v_bs_2170_){
_start:
{
uint8_t v___x_2171_; 
v___x_2171_ = lean_usize_dec_lt(v_i_2169_, v_sz_2168_);
if (v___x_2171_ == 0)
{
lean_object* v___x_2172_; 
v___x_2172_ = l_unsafeCast___redArg(v_bs_2170_);
lean_dec_ref(v_bs_2170_);
return v___x_2172_;
}
else
{
lean_object* v_v_2173_; lean_object* v___x_2174_; lean_object* v_declName_2175_; lean_object* v___x_2176_; lean_object* v_bs_x27_2177_; size_t v___x_2178_; size_t v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v_v_2173_ = lean_array_uget_borrowed(v_bs_2170_, v_i_2169_);
v___x_2174_ = l_unsafeCast___redArg(v_v_2173_);
v_declName_2175_ = lean_ctor_get(v___x_2174_, 3);
lean_inc(v_declName_2175_);
lean_dec(v___x_2174_);
v___x_2176_ = lean_unsigned_to_nat(0u);
v_bs_x27_2177_ = lean_array_uset(v_bs_2170_, v_i_2169_, v___x_2176_);
v___x_2178_ = ((size_t)1ULL);
v___x_2179_ = lean_usize_add(v_i_2169_, v___x_2178_);
v___x_2180_ = l_unsafeCast___redArg(v_declName_2175_);
lean_dec(v_declName_2175_);
v___x_2181_ = lean_array_uset(v_bs_x27_2177_, v_i_2169_, v___x_2180_);
v_i_2169_ = v___x_2179_;
v_bs_2170_ = v___x_2181_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3___boxed(lean_object* v_sz_2183_, lean_object* v_i_2184_, lean_object* v_bs_2185_){
_start:
{
size_t v_sz_boxed_2186_; size_t v_i_boxed_2187_; lean_object* v_res_2188_; 
v_sz_boxed_2186_ = lean_unbox_usize(v_sz_2183_);
lean_dec(v_sz_2183_);
v_i_boxed_2187_ = lean_unbox_usize(v_i_2184_);
lean_dec(v_i_2184_);
v_res_2188_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3(v_sz_boxed_2186_, v_i_boxed_2187_, v_bs_2185_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___lam__0(lean_object* v_preDefs_2189_, lean_object* v_perms_2190_, lean_object* v_argsPacker_2191_, uint8_t v___x_2192_, lean_object* v_ref_2193_, uint8_t v_kind_2194_, lean_object* v_levelParams_2195_, lean_object* v_modifiers_2196_, lean_object* v_newFn_2197_, lean_object* v_binders_2198_, lean_object* v_numSectionVars_2199_, lean_object* v_value_2200_, lean_object* v_termination_2201_, lean_object* v_fixedParamPerms_2202_, lean_object* v_ys_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_){
_start:
{
size_t v_sz_2209_; size_t v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2280__overap_2215_; lean_object* v___x_2216_; 
v_sz_2209_ = lean_array_size(v_preDefs_2189_);
v___x_2210_ = ((size_t)0ULL);
v___x_2211_ = l_unsafeCast___redArg(v_preDefs_2189_);
v___x_2212_ = lean_box_usize(v_sz_2209_);
v___x_2213_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13___boxed__const__1));
lean_inc(v___x_2211_);
lean_inc_ref(v_preDefs_2189_);
lean_inc_ref(v_ys_2203_);
lean_inc_ref(v_perms_2190_);
v___x_2214_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__0___boxed), 11, 6);
lean_closure_set(v___x_2214_, 0, v_perms_2190_);
lean_closure_set(v___x_2214_, 1, v_ys_2203_);
lean_closure_set(v___x_2214_, 2, v_preDefs_2189_);
lean_closure_set(v___x_2214_, 3, v___x_2212_);
lean_closure_set(v___x_2214_, 4, v___x_2213_);
lean_closure_set(v___x_2214_, 5, v___x_2211_);
v___x_2280__overap_2215_ = l_unsafeCast___redArg(v___x_2214_);
lean_dec_ref(v___x_2214_);
lean_inc(v___y_2207_);
lean_inc_ref(v___y_2206_);
lean_inc(v___y_2205_);
lean_inc_ref(v___y_2204_);
v___x_2216_ = lean_apply_5(v___x_2280__overap_2215_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, lean_box(0));
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2284__overap_2221_; lean_object* v___x_2222_; 
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
lean_inc(v_a_2217_);
lean_dec_ref_known(v___x_2216_, 1);
v___x_2218_ = lean_box_usize(v_sz_2209_);
v___x_2219_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13___boxed__const__1));
lean_inc(v___x_2211_);
lean_inc_ref(v_ys_2203_);
v___x_2220_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__1___boxed), 11, 6);
lean_closure_set(v___x_2220_, 0, v_perms_2190_);
lean_closure_set(v___x_2220_, 1, v_ys_2203_);
lean_closure_set(v___x_2220_, 2, v_preDefs_2189_);
lean_closure_set(v___x_2220_, 3, v___x_2218_);
lean_closure_set(v___x_2220_, 4, v___x_2219_);
lean_closure_set(v___x_2220_, 5, v___x_2211_);
v___x_2284__overap_2221_ = l_unsafeCast___redArg(v___x_2220_);
lean_dec_ref(v___x_2220_);
lean_inc(v___y_2207_);
lean_inc_ref(v___y_2206_);
lean_inc(v___y_2205_);
lean_inc_ref(v___y_2204_);
v___x_2222_ = lean_apply_5(v___x_2284__overap_2221_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, lean_box(0));
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_object* v_a_2223_; lean_object* v___x_2224_; 
v_a_2223_ = lean_ctor_get(v___x_2222_, 0);
lean_inc(v_a_2223_);
lean_dec_ref_known(v___x_2222_, 1);
v___x_2224_ = l_Lean_Meta_ArgsPacker_uncurryType(v_argsPacker_2191_, v_a_2217_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_);
lean_dec(v_a_2217_);
if (lean_obj_tag(v___x_2224_) == 0)
{
lean_object* v_a_2225_; uint8_t v___x_2226_; uint8_t v___x_2227_; lean_object* v___x_2228_; 
v_a_2225_ = lean_ctor_get(v___x_2224_, 0);
lean_inc(v_a_2225_);
lean_dec_ref_known(v___x_2224_, 1);
v___x_2226_ = 1;
v___x_2227_ = 1;
lean_inc_ref(v_ys_2203_);
v___x_2228_ = l_Lean_Meta_mkForallFVars(v_ys_2203_, v_a_2225_, v___x_2192_, v___x_2226_, v___x_2226_, v___x_2227_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_);
if (lean_obj_tag(v___x_2228_) == 0)
{
lean_object* v_a_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v_a_2229_ = lean_ctor_get(v___x_2228_, 0);
lean_inc_n(v_a_2229_, 2);
lean_dec_ref_known(v___x_2228_, 1);
lean_inc_ref(v_termination_2201_);
lean_inc(v_numSectionVars_2199_);
lean_inc(v_binders_2198_);
lean_inc(v_newFn_2197_);
lean_inc_ref(v_modifiers_2196_);
lean_inc(v_levelParams_2195_);
lean_inc(v_ref_2193_);
v___x_2230_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_2230_, 0, v_ref_2193_);
lean_ctor_set(v___x_2230_, 1, v_levelParams_2195_);
lean_ctor_set(v___x_2230_, 2, v_modifiers_2196_);
lean_ctor_set(v___x_2230_, 3, v_newFn_2197_);
lean_ctor_set(v___x_2230_, 4, v_binders_2198_);
lean_ctor_set(v___x_2230_, 5, v_numSectionVars_2199_);
lean_ctor_set(v___x_2230_, 6, v_a_2229_);
lean_ctor_set(v___x_2230_, 7, v_value_2200_);
lean_ctor_set(v___x_2230_, 8, v_termination_2201_);
lean_ctor_set_uint8(v___x_2230_, sizeof(void*)*9, v_kind_2194_);
v___x_2231_ = l_Lean_Elab_addAsAxiom___redArg(v___x_2230_, v___y_2206_, v___y_2207_);
lean_dec_ref_known(v___x_2230_, 9);
if (lean_obj_tag(v___x_2231_) == 0)
{
lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
lean_dec_ref_known(v___x_2231_, 1);
v___x_2232_ = lean_box(0);
lean_inc(v_levelParams_2195_);
v___x_2233_ = l_List_mapTR_loop___at___00Lean_Elab_WF_packMutual_spec__2(v_levelParams_2195_, v___x_2232_);
lean_inc(v_newFn_2197_);
v___x_2234_ = l_Lean_mkConst(v_newFn_2197_, v___x_2233_);
v___x_2235_ = l_Lean_mkAppN(v___x_2234_, v_ys_2203_);
v___x_2236_ = l_Lean_Meta_ArgsPacker_uncurry(v_argsPacker_2191_, v_a_2223_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_);
lean_dec(v_a_2223_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v_a_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
lean_inc(v_a_2237_);
lean_dec_ref_known(v___x_2236_, 1);
v___x_2238_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_WF_packMutual_spec__3(v_sz_2209_, v___x_2210_, v___x_2211_);
v___x_2239_ = l_unsafeCast___redArg(v___x_2238_);
lean_dec_ref(v___x_2238_);
v___x_2240_ = l_Lean_Elab_WF_packCalls(v_fixedParamPerms_2202_, v_argsPacker_2191_, v___x_2239_, v___x_2235_, v_a_2237_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_object* v_a_2241_; lean_object* v___x_2242_; 
v_a_2241_ = lean_ctor_get(v___x_2240_, 0);
lean_inc(v_a_2241_);
lean_dec_ref_known(v___x_2240_, 1);
v___x_2242_ = l_Lean_Meta_mkLambdaFVars(v_ys_2203_, v_a_2241_, v___x_2192_, v___x_2226_, v___x_2192_, v___x_2226_, v___x_2227_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2251_; 
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2251_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2245_ = v___x_2242_;
v_isShared_2246_ = v_isSharedCheck_2251_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2242_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2251_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2247_; lean_object* v___x_2249_; 
v___x_2247_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_2247_, 0, v_ref_2193_);
lean_ctor_set(v___x_2247_, 1, v_levelParams_2195_);
lean_ctor_set(v___x_2247_, 2, v_modifiers_2196_);
lean_ctor_set(v___x_2247_, 3, v_newFn_2197_);
lean_ctor_set(v___x_2247_, 4, v_binders_2198_);
lean_ctor_set(v___x_2247_, 5, v_numSectionVars_2199_);
lean_ctor_set(v___x_2247_, 6, v_a_2229_);
lean_ctor_set(v___x_2247_, 7, v_a_2243_);
lean_ctor_set(v___x_2247_, 8, v_termination_2201_);
lean_ctor_set_uint8(v___x_2247_, sizeof(void*)*9, v_kind_2194_);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 0, v___x_2247_);
v___x_2249_ = v___x_2245_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v___x_2247_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
return v___x_2249_;
}
}
}
else
{
lean_object* v_a_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2259_; 
lean_dec(v_a_2229_);
lean_dec_ref(v_termination_2201_);
lean_dec(v_numSectionVars_2199_);
lean_dec(v_binders_2198_);
lean_dec(v_newFn_2197_);
lean_dec_ref(v_modifiers_2196_);
lean_dec(v_levelParams_2195_);
lean_dec(v_ref_2193_);
v_a_2252_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2259_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2259_ == 0)
{
v___x_2254_ = v___x_2242_;
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_a_2252_);
lean_dec(v___x_2242_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v___x_2257_; 
if (v_isShared_2255_ == 0)
{
v___x_2257_ = v___x_2254_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v_a_2252_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
return v___x_2257_;
}
}
}
}
else
{
lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2267_; 
lean_dec(v_a_2229_);
lean_dec_ref(v_ys_2203_);
lean_dec_ref(v_termination_2201_);
lean_dec(v_numSectionVars_2199_);
lean_dec(v_binders_2198_);
lean_dec(v_newFn_2197_);
lean_dec_ref(v_modifiers_2196_);
lean_dec(v_levelParams_2195_);
lean_dec(v_ref_2193_);
v_a_2260_ = lean_ctor_get(v___x_2240_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2240_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2262_ = v___x_2240_;
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_dec(v___x_2240_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2265_; 
if (v_isShared_2263_ == 0)
{
v___x_2265_ = v___x_2262_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v_a_2260_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
}
}
}
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_dec_ref(v___x_2235_);
lean_dec(v_a_2229_);
lean_dec(v___x_2211_);
lean_dec_ref(v_ys_2203_);
lean_dec_ref(v_fixedParamPerms_2202_);
lean_dec_ref(v_termination_2201_);
lean_dec(v_numSectionVars_2199_);
lean_dec(v_binders_2198_);
lean_dec(v_newFn_2197_);
lean_dec_ref(v_modifiers_2196_);
lean_dec(v_levelParams_2195_);
lean_dec(v_ref_2193_);
lean_dec_ref(v_argsPacker_2191_);
v_a_2268_ = lean_ctor_get(v___x_2236_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2236_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2236_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2268_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
}
else
{
lean_object* v_a_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2283_; 
lean_dec(v_a_2229_);
lean_dec(v_a_2223_);
lean_dec(v___x_2211_);
lean_dec_ref(v_ys_2203_);
lean_dec_ref(v_fixedParamPerms_2202_);
lean_dec_ref(v_termination_2201_);
lean_dec(v_numSectionVars_2199_);
lean_dec(v_binders_2198_);
lean_dec(v_newFn_2197_);
lean_dec_ref(v_modifiers_2196_);
lean_dec(v_levelParams_2195_);
lean_dec(v_ref_2193_);
lean_dec_ref(v_argsPacker_2191_);
v_a_2276_ = lean_ctor_get(v___x_2231_, 0);
v_isSharedCheck_2283_ = !lean_is_exclusive(v___x_2231_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2278_ = v___x_2231_;
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_a_2276_);
lean_dec(v___x_2231_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2281_; 
if (v_isShared_2279_ == 0)
{
v___x_2281_ = v___x_2278_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_a_2276_);
v___x_2281_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
return v___x_2281_;
}
}
}
}
else
{
lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2291_; 
lean_dec(v_a_2223_);
lean_dec(v___x_2211_);
lean_dec_ref(v_ys_2203_);
lean_dec_ref(v_fixedParamPerms_2202_);
lean_dec_ref(v_termination_2201_);
lean_dec_ref(v_value_2200_);
lean_dec(v_numSectionVars_2199_);
lean_dec(v_binders_2198_);
lean_dec(v_newFn_2197_);
lean_dec_ref(v_modifiers_2196_);
lean_dec(v_levelParams_2195_);
lean_dec(v_ref_2193_);
lean_dec_ref(v_argsPacker_2191_);
v_a_2284_ = lean_ctor_get(v___x_2228_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2286_ = v___x_2228_;
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v___x_2228_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2289_; 
if (v_isShared_2287_ == 0)
{
v___x_2289_ = v___x_2286_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v_a_2284_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
}
else
{
lean_object* v_a_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2299_; 
lean_dec(v_a_2223_);
lean_dec(v___x_2211_);
lean_dec_ref(v_ys_2203_);
lean_dec_ref(v_fixedParamPerms_2202_);
lean_dec_ref(v_termination_2201_);
lean_dec_ref(v_value_2200_);
lean_dec(v_numSectionVars_2199_);
lean_dec(v_binders_2198_);
lean_dec(v_newFn_2197_);
lean_dec_ref(v_modifiers_2196_);
lean_dec(v_levelParams_2195_);
lean_dec(v_ref_2193_);
lean_dec_ref(v_argsPacker_2191_);
v_a_2292_ = lean_ctor_get(v___x_2224_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v___x_2224_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2294_ = v___x_2224_;
v_isShared_2295_ = v_isSharedCheck_2299_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_a_2292_);
lean_dec(v___x_2224_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2299_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2297_; 
if (v_isShared_2295_ == 0)
{
v___x_2297_ = v___x_2294_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_a_2292_);
v___x_2297_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
return v___x_2297_;
}
}
}
}
else
{
lean_object* v_a_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2307_; 
lean_dec(v_a_2217_);
lean_dec(v___x_2211_);
lean_dec_ref(v_ys_2203_);
lean_dec_ref(v_fixedParamPerms_2202_);
lean_dec_ref(v_termination_2201_);
lean_dec_ref(v_value_2200_);
lean_dec(v_numSectionVars_2199_);
lean_dec(v_binders_2198_);
lean_dec(v_newFn_2197_);
lean_dec_ref(v_modifiers_2196_);
lean_dec(v_levelParams_2195_);
lean_dec(v_ref_2193_);
lean_dec_ref(v_argsPacker_2191_);
v_a_2300_ = lean_ctor_get(v___x_2222_, 0);
v_isSharedCheck_2307_ = !lean_is_exclusive(v___x_2222_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2302_ = v___x_2222_;
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_a_2300_);
lean_dec(v___x_2222_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2305_; 
if (v_isShared_2303_ == 0)
{
v___x_2305_ = v___x_2302_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v_a_2300_);
v___x_2305_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
return v___x_2305_;
}
}
}
}
else
{
lean_object* v_a_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2315_; 
lean_dec(v___x_2211_);
lean_dec_ref(v_ys_2203_);
lean_dec_ref(v_fixedParamPerms_2202_);
lean_dec_ref(v_termination_2201_);
lean_dec_ref(v_value_2200_);
lean_dec(v_numSectionVars_2199_);
lean_dec(v_binders_2198_);
lean_dec(v_newFn_2197_);
lean_dec_ref(v_modifiers_2196_);
lean_dec(v_levelParams_2195_);
lean_dec(v_ref_2193_);
lean_dec_ref(v_argsPacker_2191_);
lean_dec_ref(v_perms_2190_);
lean_dec_ref(v_preDefs_2189_);
v_a_2308_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2310_ = v___x_2216_;
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_a_2308_);
lean_dec(v___x_2216_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2313_; 
if (v_isShared_2311_ == 0)
{
v___x_2313_ = v___x_2310_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_a_2308_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___lam__0___boxed(lean_object** _args){
lean_object* v_preDefs_2316_ = _args[0];
lean_object* v_perms_2317_ = _args[1];
lean_object* v_argsPacker_2318_ = _args[2];
lean_object* v___x_2319_ = _args[3];
lean_object* v_ref_2320_ = _args[4];
lean_object* v_kind_2321_ = _args[5];
lean_object* v_levelParams_2322_ = _args[6];
lean_object* v_modifiers_2323_ = _args[7];
lean_object* v_newFn_2324_ = _args[8];
lean_object* v_binders_2325_ = _args[9];
lean_object* v_numSectionVars_2326_ = _args[10];
lean_object* v_value_2327_ = _args[11];
lean_object* v_termination_2328_ = _args[12];
lean_object* v_fixedParamPerms_2329_ = _args[13];
lean_object* v_ys_2330_ = _args[14];
lean_object* v___y_2331_ = _args[15];
lean_object* v___y_2332_ = _args[16];
lean_object* v___y_2333_ = _args[17];
lean_object* v___y_2334_ = _args[18];
lean_object* v___y_2335_ = _args[19];
_start:
{
uint8_t v___x_2641__boxed_2336_; uint8_t v_kind_boxed_2337_; lean_object* v_res_2338_; 
v___x_2641__boxed_2336_ = lean_unbox(v___x_2319_);
v_kind_boxed_2337_ = lean_unbox(v_kind_2321_);
v_res_2338_ = l_Lean_Elab_WF_packMutual___lam__0(v_preDefs_2316_, v_perms_2317_, v_argsPacker_2318_, v___x_2641__boxed_2336_, v_ref_2320_, v_kind_boxed_2337_, v_levelParams_2322_, v_modifiers_2323_, v_newFn_2324_, v_binders_2325_, v_numSectionVars_2326_, v_value_2327_, v_termination_2328_, v_fixedParamPerms_2329_, v_ys_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
lean_dec(v___y_2332_);
lean_dec_ref(v___y_2331_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual(lean_object* v_fixedParamPerms_2339_, lean_object* v_argsPacker_2340_, lean_object* v_preDefs_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_){
_start:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v_ref_2350_; uint8_t v_kind_2351_; lean_object* v_levelParams_2352_; lean_object* v_modifiers_2353_; lean_object* v_declName_2354_; lean_object* v_binders_2355_; lean_object* v_numSectionVars_2356_; lean_object* v_type_2357_; lean_object* v_value_2358_; lean_object* v_termination_2359_; lean_object* v_newFn_2360_; uint8_t v___x_2361_; 
v___x_2347_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_2348_ = lean_unsigned_to_nat(0u);
v___x_2349_ = lean_array_get_borrowed(v___x_2347_, v_preDefs_2341_, v___x_2348_);
v_ref_2350_ = lean_ctor_get(v___x_2349_, 0);
v_kind_2351_ = lean_ctor_get_uint8(v___x_2349_, sizeof(void*)*9);
v_levelParams_2352_ = lean_ctor_get(v___x_2349_, 1);
v_modifiers_2353_ = lean_ctor_get(v___x_2349_, 2);
v_declName_2354_ = lean_ctor_get(v___x_2349_, 3);
v_binders_2355_ = lean_ctor_get(v___x_2349_, 4);
v_numSectionVars_2356_ = lean_ctor_get(v___x_2349_, 5);
v_type_2357_ = lean_ctor_get(v___x_2349_, 6);
v_value_2358_ = lean_ctor_get(v___x_2349_, 7);
v_termination_2359_ = lean_ctor_get(v___x_2349_, 8);
lean_inc_ref(v_fixedParamPerms_2339_);
v_newFn_2360_ = l_Lean_Elab_WF_mutualName(v_fixedParamPerms_2339_, v_argsPacker_2340_, v_preDefs_2341_);
v___x_2361_ = lean_name_eq(v_newFn_2360_, v_declName_2354_);
if (v___x_2361_ == 0)
{
lean_object* v_perms_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___f_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
lean_inc_ref(v_termination_2359_);
lean_inc_ref(v_value_2358_);
lean_inc_ref(v_type_2357_);
lean_inc(v_numSectionVars_2356_);
lean_inc(v_binders_2355_);
lean_inc_ref(v_modifiers_2353_);
lean_inc(v_levelParams_2352_);
lean_inc(v_ref_2350_);
v_perms_2362_ = lean_ctor_get(v_fixedParamPerms_2339_, 1);
lean_inc_ref_n(v_perms_2362_, 2);
v___x_2363_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
v___x_2364_ = lean_box(v___x_2361_);
v___x_2365_ = lean_box(v_kind_2351_);
v___f_2366_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_packMutual___lam__0___boxed), 20, 14);
lean_closure_set(v___f_2366_, 0, v_preDefs_2341_);
lean_closure_set(v___f_2366_, 1, v_perms_2362_);
lean_closure_set(v___f_2366_, 2, v_argsPacker_2340_);
lean_closure_set(v___f_2366_, 3, v___x_2364_);
lean_closure_set(v___f_2366_, 4, v_ref_2350_);
lean_closure_set(v___f_2366_, 5, v___x_2365_);
lean_closure_set(v___f_2366_, 6, v_levelParams_2352_);
lean_closure_set(v___f_2366_, 7, v_modifiers_2353_);
lean_closure_set(v___f_2366_, 8, v_newFn_2360_);
lean_closure_set(v___f_2366_, 9, v_binders_2355_);
lean_closure_set(v___f_2366_, 10, v_numSectionVars_2356_);
lean_closure_set(v___f_2366_, 11, v_value_2358_);
lean_closure_set(v___f_2366_, 12, v_termination_2359_);
lean_closure_set(v___f_2366_, 13, v_fixedParamPerms_2339_);
v___x_2367_ = lean_array_get(v___x_2363_, v_perms_2362_, v___x_2348_);
lean_dec_ref(v_perms_2362_);
v___x_2368_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_WF_packMutual_spec__4___redArg(v___x_2367_, v_type_2357_, v___f_2366_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_);
return v___x_2368_;
}
else
{
lean_object* v___x_2369_; 
lean_inc(v___x_2349_);
lean_dec(v_newFn_2360_);
lean_dec_ref(v_preDefs_2341_);
lean_dec_ref(v_argsPacker_2340_);
lean_dec_ref(v_fixedParamPerms_2339_);
v___x_2369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2369_, 0, v___x_2349_);
return v___x_2369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_packMutual___boxed(lean_object* v_fixedParamPerms_2370_, lean_object* v_argsPacker_2371_, lean_object* v_preDefs_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_){
_start:
{
lean_object* v_res_2378_; 
v_res_2378_ = l_Lean_Elab_WF_packMutual(v_fixedParamPerms_2370_, v_argsPacker_2371_, v_preDefs_2372_, v_a_2373_, v_a_2374_, v_a_2375_, v_a_2376_);
lean_dec(v_a_2376_);
lean_dec_ref(v_a_2375_);
lean_dec(v_a_2374_);
lean_dec_ref(v_a_2373_);
return v_res_2378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg(lean_object* v_e_2379_, lean_object* v_k_2380_, uint8_t v_cleanupAnnotations_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_){
_start:
{
lean_object* v___f_2387_; uint8_t v___x_2388_; uint8_t v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___f_2387_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2387_, 0, v_k_2380_);
v___x_2388_ = 1;
v___x_2389_ = 0;
v___x_2390_ = lean_box(0);
v___x_2391_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2379_, v___x_2388_, v___x_2389_, v___x_2388_, v___x_2389_, v___x_2390_, v___f_2387_, v_cleanupAnnotations_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_);
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2399_; 
v_a_2392_ = lean_ctor_get(v___x_2391_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2391_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2394_ = v___x_2391_;
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v___x_2391_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2397_; 
if (v_isShared_2395_ == 0)
{
v___x_2397_ = v___x_2394_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v_a_2392_);
v___x_2397_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
return v___x_2397_;
}
}
}
else
{
lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
v_a_2400_ = lean_ctor_get(v___x_2391_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2391_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2402_ = v___x_2391_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2391_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2400_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg___boxed(lean_object* v_e_2408_, lean_object* v_k_2409_, lean_object* v_cleanupAnnotations_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2416_; lean_object* v_res_2417_; 
v_cleanupAnnotations_boxed_2416_ = lean_unbox(v_cleanupAnnotations_2410_);
v_res_2417_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg(v_e_2408_, v_k_2409_, v_cleanupAnnotations_boxed_2416_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_);
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0(lean_object* v_00_u03b1_2418_, lean_object* v_e_2419_, lean_object* v_k_2420_, uint8_t v_cleanupAnnotations_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
lean_object* v___x_2427_; 
v___x_2427_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg(v_e_2419_, v_k_2420_, v_cleanupAnnotations_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
return v___x_2427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___boxed(lean_object* v_00_u03b1_2428_, lean_object* v_e_2429_, lean_object* v_k_2430_, lean_object* v_cleanupAnnotations_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2437_; lean_object* v_res_2438_; 
v_cleanupAnnotations_boxed_2437_ = lean_unbox(v_cleanupAnnotations_2431_);
v_res_2438_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0(v_00_u03b1_2428_, v_e_2429_, v_k_2430_, v_cleanupAnnotations_boxed_2437_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1(lean_object* v_msg_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v___f_2445_; lean_object* v___x_1649__overap_2446_; lean_object* v___x_2447_; 
v___f_2445_ = ((lean_object*)(l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0));
v___x_1649__overap_2446_ = lean_panic_fn_borrowed(v___f_2445_, v_msg_2439_);
lean_inc(v___y_2443_);
lean_inc_ref(v___y_2442_);
lean_inc(v___y_2441_);
lean_inc_ref(v___y_2440_);
v___x_2447_ = lean_apply_5(v___x_1649__overap_2446_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, lean_box(0));
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1___boxed(lean_object* v_msg_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_){
_start:
{
lean_object* v_res_2454_; 
v_res_2454_ = l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1(v_msg_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
lean_dec(v___y_2450_);
lean_dec_ref(v___y_2449_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__0(lean_object* v_xs_2455_, lean_object* v_x_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_){
_start:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2462_ = lean_array_get_size(v_xs_2455_);
v___x_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__0___boxed(lean_object* v_xs_2464_, lean_object* v_x_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
lean_object* v_res_2471_; 
v_res_2471_ = l_Lean_Elab_WF_varyingVarNames___lam__0(v_xs_2464_, v_x_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
lean_dec(v___y_2467_);
lean_dec_ref(v___y_2466_);
lean_dec_ref(v_x_2465_);
lean_dec_ref(v_xs_2464_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg(lean_object* v_as_2472_, size_t v_sz_2473_, size_t v_i_2474_, lean_object* v_b_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_){
_start:
{
lean_object* v_a_2481_; uint8_t v___x_2485_; 
v___x_2485_ = lean_usize_dec_lt(v_i_2474_, v_sz_2473_);
if (v___x_2485_ == 0)
{
lean_object* v___x_2486_; 
v___x_2486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2486_, 0, v_b_2475_);
return v___x_2486_;
}
else
{
lean_object* v_snd_2487_; lean_object* v_fst_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2532_; 
v_snd_2487_ = lean_ctor_get(v_b_2475_, 1);
v_fst_2488_ = lean_ctor_get(v_b_2475_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v_b_2475_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2490_ = v_b_2475_;
v_isShared_2491_ = v_isSharedCheck_2532_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_snd_2487_);
lean_inc(v_fst_2488_);
lean_dec(v_b_2475_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2532_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v_array_2492_; lean_object* v_start_2493_; lean_object* v_stop_2494_; uint8_t v___x_2495_; 
v_array_2492_ = lean_ctor_get(v_snd_2487_, 0);
v_start_2493_ = lean_ctor_get(v_snd_2487_, 1);
v_stop_2494_ = lean_ctor_get(v_snd_2487_, 2);
v___x_2495_ = lean_nat_dec_lt(v_start_2493_, v_stop_2494_);
if (v___x_2495_ == 0)
{
lean_object* v___x_2497_; 
if (v_isShared_2491_ == 0)
{
v___x_2497_ = v___x_2490_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v_fst_2488_);
lean_ctor_set(v_reuseFailAlloc_2499_, 1, v_snd_2487_);
v___x_2497_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
lean_object* v___x_2498_; 
v___x_2498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2497_);
return v___x_2498_;
}
}
else
{
lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2528_; 
lean_inc(v_stop_2494_);
lean_inc(v_start_2493_);
lean_inc_ref(v_array_2492_);
v_isSharedCheck_2528_ = !lean_is_exclusive(v_snd_2487_);
if (v_isSharedCheck_2528_ == 0)
{
lean_object* v_unused_2529_; lean_object* v_unused_2530_; lean_object* v_unused_2531_; 
v_unused_2529_ = lean_ctor_get(v_snd_2487_, 2);
lean_dec(v_unused_2529_);
v_unused_2530_ = lean_ctor_get(v_snd_2487_, 1);
lean_dec(v_unused_2530_);
v_unused_2531_ = lean_ctor_get(v_snd_2487_, 0);
lean_dec(v_unused_2531_);
v___x_2501_ = v_snd_2487_;
v_isShared_2502_ = v_isSharedCheck_2528_;
goto v_resetjp_2500_;
}
else
{
lean_dec(v_snd_2487_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2528_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2507_; 
v___x_2503_ = lean_array_fget(v_array_2492_, v_start_2493_);
v___x_2504_ = lean_unsigned_to_nat(1u);
v___x_2505_ = lean_nat_add(v_start_2493_, v___x_2504_);
lean_dec(v_start_2493_);
if (v_isShared_2502_ == 0)
{
lean_ctor_set(v___x_2501_, 1, v___x_2505_);
v___x_2507_ = v___x_2501_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v_array_2492_);
lean_ctor_set(v_reuseFailAlloc_2527_, 1, v___x_2505_);
lean_ctor_set(v_reuseFailAlloc_2527_, 2, v_stop_2494_);
v___x_2507_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v_a_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v_a_2508_ = lean_array_uget_borrowed(v_as_2472_, v_i_2474_);
v___x_2509_ = l_Lean_Expr_fvarId_x21(v_a_2508_);
v___x_2510_ = l_Lean_FVarId_getUserName___redArg(v___x_2509_, v___y_2476_, v___y_2477_, v___y_2478_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; lean_object* v___x_2512_; lean_object* v___x_2514_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_a_2511_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2512_ = lean_array_push(v_fst_2488_, v_a_2511_);
if (v_isShared_2491_ == 0)
{
lean_ctor_set(v___x_2490_, 1, v___x_2507_);
lean_ctor_set(v___x_2490_, 0, v___x_2512_);
v___x_2514_ = v___x_2490_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v___x_2512_);
lean_ctor_set(v_reuseFailAlloc_2515_, 1, v___x_2507_);
v___x_2514_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
v_a_2481_ = v___x_2514_;
goto v___jp_2480_;
}
}
else
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2523_; 
lean_dec_ref(v___x_2507_);
lean_del_object(v___x_2490_);
lean_dec(v_fst_2488_);
v_a_2516_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2518_ = v___x_2510_;
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v___x_2510_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2521_; 
if (v_isShared_2519_ == 0)
{
v___x_2521_ = v___x_2518_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_a_2516_);
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
else
{
lean_object* v___x_2525_; 
lean_dec_ref_known(v___x_2503_, 1);
if (v_isShared_2491_ == 0)
{
lean_ctor_set(v___x_2490_, 1, v___x_2507_);
v___x_2525_ = v___x_2490_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_fst_2488_);
lean_ctor_set(v_reuseFailAlloc_2526_, 1, v___x_2507_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
v_a_2481_ = v___x_2525_;
goto v___jp_2480_;
}
}
}
}
}
}
}
v___jp_2480_:
{
size_t v___x_2482_; size_t v___x_2483_; 
v___x_2482_ = ((size_t)1ULL);
v___x_2483_ = lean_usize_add(v_i_2474_, v___x_2482_);
v_i_2474_ = v___x_2483_;
v_b_2475_ = v_a_2481_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg___boxed(lean_object* v_as_2533_, lean_object* v_sz_2534_, lean_object* v_i_2535_, lean_object* v_b_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_){
_start:
{
size_t v_sz_boxed_2541_; size_t v_i_boxed_2542_; lean_object* v_res_2543_; 
v_sz_boxed_2541_ = lean_unbox_usize(v_sz_2534_);
lean_dec(v_sz_2534_);
v_i_boxed_2542_ = lean_unbox_usize(v_i_2535_);
lean_dec(v_i_2535_);
v_res_2543_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg(v_as_2533_, v_sz_boxed_2541_, v_i_boxed_2542_, v_b_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
lean_dec(v___y_2539_);
lean_dec_ref(v___y_2538_);
lean_dec_ref(v___y_2537_);
lean_dec_ref(v_as_2533_);
return v_res_2543_;
}
}
static lean_object* _init_l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2546_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___lam__1___closed__1));
v___x_2547_ = lean_unsigned_to_nat(4u);
v___x_2548_ = lean_unsigned_to_nat(119u);
v___x_2549_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___lam__1___closed__0));
v___x_2550_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__0));
v___x_2551_ = l_mkPanicMessageWithDecl(v___x_2550_, v___x_2549_, v___x_2548_, v___x_2547_, v___x_2546_);
return v___x_2551_;
}
}
static lean_object* _init_l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2553_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___lam__1___closed__3));
v___x_2554_ = lean_unsigned_to_nat(4u);
v___x_2555_ = lean_unsigned_to_nat(120u);
v___x_2556_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___lam__1___closed__0));
v___x_2557_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__0));
v___x_2558_ = l_mkPanicMessageWithDecl(v___x_2557_, v___x_2556_, v___x_2555_, v___x_2554_, v___x_2553_);
return v___x_2558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1(lean_object* v_a_2561_, lean_object* v_fixedParamPerms_2562_, lean_object* v___x_2563_, lean_object* v_preDefIdx_2564_, lean_object* v_xs_2565_, lean_object* v_x_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_){
_start:
{
lean_object* v___x_2572_; uint8_t v___x_2573_; 
v___x_2572_ = lean_array_get_size(v_xs_2565_);
v___x_2573_ = lean_nat_dec_eq(v___x_2572_, v_a_2561_);
if (v___x_2573_ == 0)
{
lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2574_ = lean_obj_once(&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2, &l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2_once, _init_l_Lean_Elab_WF_varyingVarNames___lam__1___closed__2);
v___x_2575_ = l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1(v___x_2574_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
return v___x_2575_;
}
else
{
lean_object* v_perms_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; uint8_t v___x_2579_; 
v_perms_2576_ = lean_ctor_get(v_fixedParamPerms_2562_, 1);
v___x_2577_ = lean_array_get_borrowed(v___x_2563_, v_perms_2576_, v_preDefIdx_2564_);
v___x_2578_ = lean_array_get_size(v___x_2577_);
v___x_2579_ = lean_nat_dec_eq(v___x_2578_, v_a_2561_);
if (v___x_2579_ == 0)
{
lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2580_ = lean_obj_once(&l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4, &l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4_once, _init_l_Lean_Elab_WF_varyingVarNames___lam__1___closed__4);
v___x_2581_ = l_panic___at___00Lean_Elab_WF_varyingVarNames_spec__1(v___x_2580_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
return v___x_2581_;
}
else
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; size_t v_sz_2586_; size_t v___x_2587_; lean_object* v___x_2588_; 
v___x_2582_ = lean_unsigned_to_nat(0u);
v___x_2583_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___lam__1___closed__5));
lean_inc(v___x_2577_);
v___x_2584_ = l_Array_toSubarray___redArg(v___x_2577_, v___x_2582_, v___x_2578_);
v___x_2585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2583_);
lean_ctor_set(v___x_2585_, 1, v___x_2584_);
v_sz_2586_ = lean_array_size(v_xs_2565_);
v___x_2587_ = ((size_t)0ULL);
v___x_2588_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg(v_xs_2565_, v_sz_2586_, v___x_2587_, v___x_2585_, v___y_2567_, v___y_2569_, v___y_2570_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2597_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2597_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2597_ == 0)
{
v___x_2591_ = v___x_2588_;
v_isShared_2592_ = v_isSharedCheck_2597_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_a_2589_);
lean_dec(v___x_2588_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2597_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v_fst_2593_; lean_object* v___x_2595_; 
v_fst_2593_ = lean_ctor_get(v_a_2589_, 0);
lean_inc(v_fst_2593_);
lean_dec(v_a_2589_);
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 0, v_fst_2593_);
v___x_2595_ = v___x_2591_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_fst_2593_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
return v___x_2595_;
}
}
}
else
{
lean_object* v_a_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2605_; 
v_a_2598_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2605_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2600_ = v___x_2588_;
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_a_2598_);
lean_dec(v___x_2588_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v___x_2603_; 
if (v_isShared_2601_ == 0)
{
v___x_2603_ = v___x_2600_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_a_2598_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___lam__1___boxed(lean_object* v_a_2606_, lean_object* v_fixedParamPerms_2607_, lean_object* v___x_2608_, lean_object* v_preDefIdx_2609_, lean_object* v_xs_2610_, lean_object* v_x_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l_Lean_Elab_WF_varyingVarNames___lam__1(v_a_2606_, v_fixedParamPerms_2607_, v___x_2608_, v_preDefIdx_2609_, v_xs_2610_, v_x_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_);
lean_dec(v___y_2615_);
lean_dec_ref(v___y_2614_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec_ref(v_x_2611_);
lean_dec_ref(v_xs_2610_);
lean_dec(v_preDefIdx_2609_);
lean_dec_ref(v___x_2608_);
lean_dec_ref(v_fixedParamPerms_2607_);
lean_dec(v_a_2606_);
return v_res_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames(lean_object* v_fixedParamPerms_2619_, lean_object* v_preDefIdx_2620_, lean_object* v_preDef_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_){
_start:
{
lean_object* v_type_2627_; lean_object* v_value_2628_; lean_object* v___f_2629_; lean_object* v___x_2630_; uint8_t v___x_2631_; lean_object* v___x_2632_; 
v_type_2627_ = lean_ctor_get(v_preDef_2621_, 6);
lean_inc_ref(v_type_2627_);
v_value_2628_ = lean_ctor_get(v_preDef_2621_, 7);
lean_inc_ref(v_value_2628_);
lean_dec_ref(v_preDef_2621_);
v___f_2629_ = ((lean_object*)(l_Lean_Elab_WF_varyingVarNames___closed__0));
v___x_2630_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
v___x_2631_ = 0;
v___x_2632_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_WF_varyingVarNames_spec__0___redArg(v_value_2628_, v___f_2629_, v___x_2631_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_);
if (lean_obj_tag(v___x_2632_) == 0)
{
lean_object* v_a_2633_; lean_object* v___f_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v_a_2633_ = lean_ctor_get(v___x_2632_, 0);
lean_inc_n(v_a_2633_, 2);
lean_dec_ref_known(v___x_2632_, 1);
v___f_2634_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_varyingVarNames___lam__1___boxed), 11, 4);
lean_closure_set(v___f_2634_, 0, v_a_2633_);
lean_closure_set(v___f_2634_, 1, v_fixedParamPerms_2619_);
lean_closure_set(v___f_2634_, 2, v___x_2630_);
lean_closure_set(v___f_2634_, 3, v_preDefIdx_2620_);
v___x_2635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2635_, 0, v_a_2633_);
v___x_2636_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(v_type_2627_, v___x_2635_, v___f_2634_, v___x_2631_, v___x_2631_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_);
return v___x_2636_;
}
else
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2644_; 
lean_dec_ref(v_type_2627_);
lean_dec(v_preDefIdx_2620_);
lean_dec_ref(v_fixedParamPerms_2619_);
v_a_2637_ = lean_ctor_get(v___x_2632_, 0);
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2632_);
if (v_isSharedCheck_2644_ == 0)
{
v___x_2639_ = v___x_2632_;
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2632_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2642_; 
if (v_isShared_2640_ == 0)
{
v___x_2642_ = v___x_2639_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v_a_2637_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
return v___x_2642_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_varyingVarNames___boxed(lean_object* v_fixedParamPerms_2645_, lean_object* v_preDefIdx_2646_, lean_object* v_preDef_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_, lean_object* v_a_2652_){
_start:
{
lean_object* v_res_2653_; 
v_res_2653_ = l_Lean_Elab_WF_varyingVarNames(v_fixedParamPerms_2645_, v_preDefIdx_2646_, v_preDef_2647_, v_a_2648_, v_a_2649_, v_a_2650_, v_a_2651_);
lean_dec(v_a_2651_);
lean_dec_ref(v_a_2650_);
lean_dec(v_a_2649_);
lean_dec_ref(v_a_2648_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2(lean_object* v_as_2654_, size_t v_sz_2655_, size_t v_i_2656_, lean_object* v_b_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_){
_start:
{
lean_object* v___x_2663_; 
v___x_2663_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___redArg(v_as_2654_, v_sz_2655_, v_i_2656_, v_b_2657_, v___y_2658_, v___y_2660_, v___y_2661_);
return v___x_2663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2___boxed(lean_object* v_as_2664_, lean_object* v_sz_2665_, lean_object* v_i_2666_, lean_object* v_b_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_){
_start:
{
size_t v_sz_boxed_2673_; size_t v_i_boxed_2674_; lean_object* v_res_2675_; 
v_sz_boxed_2673_ = lean_unbox_usize(v_sz_2665_);
lean_dec(v_sz_2665_);
v_i_boxed_2674_ = lean_unbox_usize(v_i_2666_);
lean_dec(v_i_2666_);
v_res_2675_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_varyingVarNames_spec__2(v_as_2664_, v_sz_boxed_2673_, v_i_boxed_2674_, v_b_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
lean_dec(v___y_2671_);
lean_dec_ref(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec_ref(v_as_2664_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0(lean_object* v_msg_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_){
_start:
{
lean_object* v___f_2682_; lean_object* v___x_1582__overap_2683_; lean_object* v___x_2684_; 
v___f_2682_ = ((lean_object*)(l_panic___at___00Lean_Elab_WF_packCalls_spec__1___closed__0));
v___x_1582__overap_2683_ = lean_panic_fn_borrowed(v___f_2682_, v_msg_2676_);
lean_inc(v___y_2680_);
lean_inc_ref(v___y_2679_);
lean_inc(v___y_2678_);
lean_inc_ref(v___y_2677_);
v___x_2684_ = lean_apply_5(v___x_1582__overap_2683_, v___y_2677_, v___y_2678_, v___y_2679_, v___y_2680_, lean_box(0));
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0___boxed(lean_object* v_msg_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_){
_start:
{
lean_object* v_res_2691_; 
v_res_2691_ = l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0(v_msg_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
return v_res_2691_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2692_; double v___x_2693_; 
v___x_2692_ = lean_unsigned_to_nat(0u);
v___x_2693_ = lean_float_of_nat(v___x_2692_);
return v___x_2693_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1(lean_object* v_cls_2697_, lean_object* v_msg_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
lean_object* v_ref_2704_; lean_object* v___x_2705_; lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2750_; 
v_ref_2704_ = lean_ctor_get(v___y_2701_, 2);
v___x_2705_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_WF_withAppN_spec__0_spec__0(v_msg_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
v_a_2706_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2708_ = v___x_2705_;
v_isShared_2709_ = v_isSharedCheck_2750_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v___x_2705_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2750_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2710_; lean_object* v_traceState_2711_; lean_object* v_env_2712_; lean_object* v_nextMacroScope_2713_; lean_object* v_ngen_2714_; lean_object* v_auxDeclNGen_2715_; lean_object* v_cache_2716_; lean_object* v_messages_2717_; lean_object* v_infoState_2718_; lean_object* v_snapshotTasks_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2749_; 
v___x_2710_ = lean_st_ref_take(v___y_2702_);
v_traceState_2711_ = lean_ctor_get(v___x_2710_, 4);
v_env_2712_ = lean_ctor_get(v___x_2710_, 0);
v_nextMacroScope_2713_ = lean_ctor_get(v___x_2710_, 1);
v_ngen_2714_ = lean_ctor_get(v___x_2710_, 2);
v_auxDeclNGen_2715_ = lean_ctor_get(v___x_2710_, 3);
v_cache_2716_ = lean_ctor_get(v___x_2710_, 5);
v_messages_2717_ = lean_ctor_get(v___x_2710_, 6);
v_infoState_2718_ = lean_ctor_get(v___x_2710_, 7);
v_snapshotTasks_2719_ = lean_ctor_get(v___x_2710_, 8);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2721_ = v___x_2710_;
v_isShared_2722_ = v_isSharedCheck_2749_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_snapshotTasks_2719_);
lean_inc(v_infoState_2718_);
lean_inc(v_messages_2717_);
lean_inc(v_cache_2716_);
lean_inc(v_traceState_2711_);
lean_inc(v_auxDeclNGen_2715_);
lean_inc(v_ngen_2714_);
lean_inc(v_nextMacroScope_2713_);
lean_inc(v_env_2712_);
lean_dec(v___x_2710_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2749_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
uint64_t v_tid_2723_; lean_object* v_traces_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2748_; 
v_tid_2723_ = lean_ctor_get_uint64(v_traceState_2711_, sizeof(void*)*1);
v_traces_2724_ = lean_ctor_get(v_traceState_2711_, 0);
v_isSharedCheck_2748_ = !lean_is_exclusive(v_traceState_2711_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2726_ = v_traceState_2711_;
v_isShared_2727_ = v_isSharedCheck_2748_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_traces_2724_);
lean_dec(v_traceState_2711_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2748_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; double v___x_2730_; uint8_t v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2739_; 
v___x_2728_ = lean_box(0);
v___x_2729_ = lean_box(0);
v___x_2730_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__0);
v___x_2731_ = 0;
v___x_2732_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__1));
v___x_2733_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2733_, 0, v_cls_2697_);
lean_ctor_set(v___x_2733_, 1, v___x_2729_);
lean_ctor_set(v___x_2733_, 2, v___x_2732_);
lean_ctor_set_float(v___x_2733_, sizeof(void*)*3, v___x_2730_);
lean_ctor_set_float(v___x_2733_, sizeof(void*)*3 + 8, v___x_2730_);
lean_ctor_set_uint8(v___x_2733_, sizeof(void*)*3 + 16, v___x_2731_);
v___x_2734_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___closed__2));
v___x_2735_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2735_, 0, v___x_2733_);
lean_ctor_set(v___x_2735_, 1, v_a_2706_);
lean_ctor_set(v___x_2735_, 2, v___x_2734_);
lean_inc(v_ref_2704_);
v___x_2736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2736_, 0, v_ref_2704_);
lean_ctor_set(v___x_2736_, 1, v___x_2735_);
v___x_2737_ = l_Lean_PersistentArray_push___redArg(v_traces_2724_, v___x_2736_);
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 0, v___x_2737_);
v___x_2739_ = v___x_2726_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v___x_2737_);
lean_ctor_set_uint64(v_reuseFailAlloc_2747_, sizeof(void*)*1, v_tid_2723_);
v___x_2739_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
lean_object* v___x_2741_; 
if (v_isShared_2722_ == 0)
{
lean_ctor_set(v___x_2721_, 4, v___x_2739_);
v___x_2741_ = v___x_2721_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_env_2712_);
lean_ctor_set(v_reuseFailAlloc_2746_, 1, v_nextMacroScope_2713_);
lean_ctor_set(v_reuseFailAlloc_2746_, 2, v_ngen_2714_);
lean_ctor_set(v_reuseFailAlloc_2746_, 3, v_auxDeclNGen_2715_);
lean_ctor_set(v_reuseFailAlloc_2746_, 4, v___x_2739_);
lean_ctor_set(v_reuseFailAlloc_2746_, 5, v_cache_2716_);
lean_ctor_set(v_reuseFailAlloc_2746_, 6, v_messages_2717_);
lean_ctor_set(v_reuseFailAlloc_2746_, 7, v_infoState_2718_);
lean_ctor_set(v_reuseFailAlloc_2746_, 8, v_snapshotTasks_2719_);
v___x_2741_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
lean_object* v___x_2742_; lean_object* v___x_2744_; 
v___x_2742_ = lean_st_ref_put(v___y_2702_, v___x_2741_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v___x_2728_);
v___x_2744_ = v___x_2708_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v___x_2728_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1___boxed(lean_object* v_cls_2751_, lean_object* v_msg_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1(v_cls_2751_, v_msg_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
return v_res_2758_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
v___x_2761_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__1));
v___x_2762_ = lean_unsigned_to_nat(8u);
v___x_2763_ = lean_unsigned_to_nat(135u);
v___x_2764_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__0));
v___x_2765_ = ((lean_object*)(l_Lean_Elab_WF_packCalls___lam__2___closed__0));
v___x_2766_ = l_mkPanicMessageWithDecl(v___x_2765_, v___x_2764_, v___x_2763_, v___x_2762_, v___x_2761_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0(lean_object* v___x_2767_, lean_object* v_unaryPreDefNonRec_2768_, lean_object* v___x_2769_, lean_object* v_us_2770_, lean_object* v_argsPacker_2771_, lean_object* v___x_2772_, lean_object* v_params_2773_, lean_object* v_x_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_){
_start:
{
lean_object* v___x_2780_; uint8_t v___x_2781_; 
v___x_2780_ = lean_array_get_size(v_params_2773_);
v___x_2781_ = lean_nat_dec_eq(v___x_2767_, v___x_2780_);
if (v___x_2781_ == 0)
{
lean_object* v___x_2782_; lean_object* v___x_2783_; 
lean_dec_ref(v_params_2773_);
lean_dec(v___x_2772_);
lean_dec(v_us_2770_);
lean_dec_ref(v_unaryPreDefNonRec_2768_);
v___x_2782_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___closed__2);
v___x_2783_ = l_panic___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__0(v___x_2782_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_);
return v___x_2783_;
}
else
{
lean_object* v_declName_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v_declName_2784_ = lean_ctor_get(v_unaryPreDefNonRec_2768_, 3);
lean_inc(v_declName_2784_);
lean_dec_ref(v_unaryPreDefNonRec_2768_);
v___x_2785_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v___x_2769_, v_params_2773_);
v___x_2786_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v___x_2769_, v_params_2773_);
v___x_2787_ = l_Lean_mkConst(v_declName_2784_, v_us_2770_);
v___x_2788_ = l_Lean_mkAppN(v___x_2787_, v___x_2785_);
lean_dec_ref(v___x_2785_);
v___x_2789_ = l_Lean_Meta_ArgsPacker_curryProj(v_argsPacker_2771_, v___x_2788_, v___x_2772_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_);
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_object* v_a_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; uint8_t v___x_2793_; lean_object* v___x_2794_; 
v_a_2790_ = lean_ctor_get(v___x_2789_, 0);
lean_inc(v_a_2790_);
lean_dec_ref_known(v___x_2789_, 1);
v___x_2791_ = l_Lean_Expr_beta(v_a_2790_, v___x_2786_);
v___x_2792_ = 0;
v___x_2793_ = 1;
v___x_2794_ = l_Lean_Meta_mkLambdaFVars(v_params_2773_, v___x_2791_, v___x_2792_, v___x_2781_, v___x_2792_, v___x_2781_, v___x_2793_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_);
return v___x_2794_;
}
else
{
lean_dec_ref(v___x_2786_);
lean_dec_ref(v_params_2773_);
return v___x_2789_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___boxed(lean_object* v___x_2795_, lean_object* v_unaryPreDefNonRec_2796_, lean_object* v___x_2797_, lean_object* v_us_2798_, lean_object* v_argsPacker_2799_, lean_object* v___x_2800_, lean_object* v_params_2801_, lean_object* v_x_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0(v___x_2795_, v_unaryPreDefNonRec_2796_, v___x_2797_, v_us_2798_, v_argsPacker_2799_, v___x_2800_, v_params_2801_, v_x_2802_, v___y_2803_, v___y_2804_, v___y_2805_, v___y_2806_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
lean_dec(v___y_2804_);
lean_dec_ref(v___y_2803_);
lean_dec_ref(v_x_2802_);
lean_dec_ref(v_argsPacker_2799_);
lean_dec_ref(v___x_2797_);
lean_dec(v___x_2795_);
return v_res_2808_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6(void){
_start:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
v___x_2819_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3));
v___x_2820_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__5));
v___x_2821_ = l_Lean_Name_append(v___x_2820_, v___x_2819_);
return v___x_2821_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8(void){
_start:
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2823_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__7));
v___x_2824_ = l_Lean_stringToMessageData(v___x_2823_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg(lean_object* v_fixedParamPerms_2825_, lean_object* v_unaryPreDefNonRec_2826_, lean_object* v_us_2827_, lean_object* v_argsPacker_2828_, size_t v_sz_2829_, size_t v_i_2830_, lean_object* v_bs_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_){
_start:
{
uint8_t v___x_2837_; 
v___x_2837_ = lean_usize_dec_lt(v_i_2830_, v_sz_2829_);
if (v___x_2837_ == 0)
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
lean_dec_ref(v_argsPacker_2828_);
lean_dec(v_us_2827_);
lean_dec_ref(v_unaryPreDefNonRec_2826_);
v___x_2838_ = l_unsafeCast___redArg(v_bs_2831_);
lean_dec_ref(v_bs_2831_);
v___x_2839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2838_);
return v___x_2839_;
}
else
{
lean_object* v_v_2840_; lean_object* v_perms_2841_; lean_object* v___x_2842_; lean_object* v_ref_2843_; uint8_t v_kind_2844_; lean_object* v_levelParams_2845_; lean_object* v_modifiers_2846_; lean_object* v_declName_2847_; lean_object* v_binders_2848_; lean_object* v_numSectionVars_2849_; lean_object* v_type_2850_; lean_object* v_termination_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2904_; 
v_v_2840_ = lean_array_uget_borrowed(v_bs_2831_, v_i_2830_);
v_perms_2841_ = lean_ctor_get(v_fixedParamPerms_2825_, 1);
v___x_2842_ = l_unsafeCast___redArg(v_v_2840_);
v_ref_2843_ = lean_ctor_get(v___x_2842_, 0);
v_kind_2844_ = lean_ctor_get_uint8(v___x_2842_, sizeof(void*)*9);
v_levelParams_2845_ = lean_ctor_get(v___x_2842_, 1);
v_modifiers_2846_ = lean_ctor_get(v___x_2842_, 2);
v_declName_2847_ = lean_ctor_get(v___x_2842_, 3);
v_binders_2848_ = lean_ctor_get(v___x_2842_, 4);
v_numSectionVars_2849_ = lean_ctor_get(v___x_2842_, 5);
v_type_2850_ = lean_ctor_get(v___x_2842_, 6);
v_termination_2851_ = lean_ctor_get(v___x_2842_, 8);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2904_ == 0)
{
lean_object* v_unused_2905_; 
v_unused_2905_ = lean_ctor_get(v___x_2842_, 7);
lean_dec(v_unused_2905_);
v___x_2853_ = v___x_2842_;
v_isShared_2854_ = v_isSharedCheck_2904_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_termination_2851_);
lean_inc(v_type_2850_);
lean_inc(v_numSectionVars_2849_);
lean_inc(v_binders_2848_);
lean_inc(v_declName_2847_);
lean_inc(v_modifiers_2846_);
lean_inc(v_levelParams_2845_);
lean_inc(v_ref_2843_);
lean_dec(v___x_2842_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2904_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2855_; lean_object* v_bs_x27_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___f_2861_; lean_object* v___x_2862_; uint8_t v___x_2863_; lean_object* v___x_2864_; 
v___x_2855_ = lean_unsigned_to_nat(0u);
v_bs_x27_2856_ = lean_array_uset(v_bs_2831_, v_i_2830_, v___x_2855_);
v___x_2857_ = lean_obj_once(&l_Lean_Elab_WF_packCalls___closed__1, &l_Lean_Elab_WF_packCalls___closed__1_once, _init_l_Lean_Elab_WF_packCalls___closed__1);
v___x_2858_ = lean_usize_to_nat(v_i_2830_);
v___x_2859_ = lean_array_get_borrowed(v___x_2857_, v_perms_2841_, v___x_2858_);
v___x_2860_ = lean_array_get_size(v___x_2859_);
lean_inc_ref(v_argsPacker_2828_);
lean_inc(v_us_2827_);
lean_inc(v___x_2859_);
lean_inc_ref(v_unaryPreDefNonRec_2826_);
v___f_2861_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___lam__0___boxed), 13, 6);
lean_closure_set(v___f_2861_, 0, v___x_2860_);
lean_closure_set(v___f_2861_, 1, v_unaryPreDefNonRec_2826_);
lean_closure_set(v___f_2861_, 2, v___x_2859_);
lean_closure_set(v___f_2861_, 3, v_us_2827_);
lean_closure_set(v___f_2861_, 4, v_argsPacker_2828_);
lean_closure_set(v___f_2861_, 5, v___x_2858_);
v___x_2862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2860_);
v___x_2863_ = 0;
lean_inc_ref(v_type_2850_);
v___x_2864_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_withAppN_spec__1___redArg(v_type_2850_, v___x_2862_, v___f_2861_, v___x_2863_, v___x_2863_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_);
if (lean_obj_tag(v___x_2864_) == 0)
{
lean_object* v_a_2865_; lean_object* v_toCold_2875_; lean_object* v_options_2876_; uint8_t v_hasTrace_2877_; 
v_a_2865_ = lean_ctor_get(v___x_2864_, 0);
lean_inc(v_a_2865_);
lean_dec_ref_known(v___x_2864_, 1);
v_toCold_2875_ = lean_ctor_get(v___y_2834_, 0);
v_options_2876_ = lean_ctor_get(v_toCold_2875_, 2);
v_hasTrace_2877_ = lean_ctor_get_uint8(v_options_2876_, sizeof(void*)*1);
if (v_hasTrace_2877_ == 0)
{
goto v___jp_2866_;
}
else
{
lean_object* v_inheritedTraceOptions_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; uint8_t v___x_2881_; 
v_inheritedTraceOptions_2878_ = lean_ctor_get(v_toCold_2875_, 11);
v___x_2879_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__3));
v___x_2880_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__6);
v___x_2881_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2878_, v_options_2876_, v___x_2880_);
if (v___x_2881_ == 0)
{
goto v___jp_2866_;
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
lean_inc(v_declName_2847_);
v___x_2882_ = l_Lean_MessageData_ofName(v_declName_2847_);
v___x_2883_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___closed__8);
v___x_2884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2882_);
lean_ctor_set(v___x_2884_, 1, v___x_2883_);
lean_inc(v_a_2865_);
v___x_2885_ = l_Lean_MessageData_ofExpr(v_a_2865_);
v___x_2886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2884_);
lean_ctor_set(v___x_2886_, 1, v___x_2885_);
v___x_2887_ = l_Lean_addTrace___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__1(v___x_2879_, v___x_2886_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_);
if (lean_obj_tag(v___x_2887_) == 0)
{
lean_dec_ref_known(v___x_2887_, 1);
goto v___jp_2866_;
}
else
{
lean_object* v_a_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2895_; 
lean_dec(v_a_2865_);
lean_dec_ref(v_bs_x27_2856_);
lean_del_object(v___x_2853_);
lean_dec_ref(v_termination_2851_);
lean_dec_ref(v_type_2850_);
lean_dec(v_numSectionVars_2849_);
lean_dec(v_binders_2848_);
lean_dec(v_declName_2847_);
lean_dec_ref(v_modifiers_2846_);
lean_dec(v_levelParams_2845_);
lean_dec(v_ref_2843_);
lean_dec_ref(v_argsPacker_2828_);
lean_dec(v_us_2827_);
lean_dec_ref(v_unaryPreDefNonRec_2826_);
v_a_2888_ = lean_ctor_get(v___x_2887_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2887_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2890_ = v___x_2887_;
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
else
{
lean_inc(v_a_2888_);
lean_dec(v___x_2887_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v___x_2893_; 
if (v_isShared_2891_ == 0)
{
v___x_2893_ = v___x_2890_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_a_2888_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
}
}
}
v___jp_2866_:
{
lean_object* v___x_2868_; 
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 7, v_a_2865_);
v___x_2868_ = v___x_2853_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_ref_2843_);
lean_ctor_set(v_reuseFailAlloc_2874_, 1, v_levelParams_2845_);
lean_ctor_set(v_reuseFailAlloc_2874_, 2, v_modifiers_2846_);
lean_ctor_set(v_reuseFailAlloc_2874_, 3, v_declName_2847_);
lean_ctor_set(v_reuseFailAlloc_2874_, 4, v_binders_2848_);
lean_ctor_set(v_reuseFailAlloc_2874_, 5, v_numSectionVars_2849_);
lean_ctor_set(v_reuseFailAlloc_2874_, 6, v_type_2850_);
lean_ctor_set(v_reuseFailAlloc_2874_, 7, v_a_2865_);
lean_ctor_set(v_reuseFailAlloc_2874_, 8, v_termination_2851_);
lean_ctor_set_uint8(v_reuseFailAlloc_2874_, sizeof(void*)*9, v_kind_2844_);
v___x_2868_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
size_t v___x_2869_; size_t v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
v___x_2869_ = ((size_t)1ULL);
v___x_2870_ = lean_usize_add(v_i_2830_, v___x_2869_);
v___x_2871_ = l_unsafeCast___redArg(v___x_2868_);
lean_dec_ref(v___x_2868_);
v___x_2872_ = lean_array_uset(v_bs_x27_2856_, v_i_2830_, v___x_2871_);
v_i_2830_ = v___x_2870_;
v_bs_2831_ = v___x_2872_;
goto _start;
}
}
}
else
{
lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2903_; 
lean_dec_ref(v_bs_x27_2856_);
lean_del_object(v___x_2853_);
lean_dec_ref(v_termination_2851_);
lean_dec_ref(v_type_2850_);
lean_dec(v_numSectionVars_2849_);
lean_dec(v_binders_2848_);
lean_dec(v_declName_2847_);
lean_dec_ref(v_modifiers_2846_);
lean_dec(v_levelParams_2845_);
lean_dec(v_ref_2843_);
lean_dec_ref(v_argsPacker_2828_);
lean_dec(v_us_2827_);
lean_dec_ref(v_unaryPreDefNonRec_2826_);
v_a_2896_ = lean_ctor_get(v___x_2864_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2864_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2898_ = v___x_2864_;
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_dec(v___x_2864_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2901_; 
if (v_isShared_2899_ == 0)
{
v___x_2901_ = v___x_2898_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_a_2896_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg___boxed(lean_object* v_fixedParamPerms_2906_, lean_object* v_unaryPreDefNonRec_2907_, lean_object* v_us_2908_, lean_object* v_argsPacker_2909_, lean_object* v_sz_2910_, lean_object* v_i_2911_, lean_object* v_bs_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_){
_start:
{
size_t v_sz_boxed_2918_; size_t v_i_boxed_2919_; lean_object* v_res_2920_; 
v_sz_boxed_2918_ = lean_unbox_usize(v_sz_2910_);
lean_dec(v_sz_2910_);
v_i_boxed_2919_ = lean_unbox_usize(v_i_2911_);
lean_dec(v_i_2911_);
v_res_2920_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg(v_fixedParamPerms_2906_, v_unaryPreDefNonRec_2907_, v_us_2908_, v_argsPacker_2909_, v_sz_boxed_2918_, v_i_boxed_2919_, v_bs_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
lean_dec_ref(v_fixedParamPerms_2906_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2(lean_object* v_fixedParamPerms_2921_, lean_object* v_unaryPreDefNonRec_2922_, lean_object* v_us_2923_, lean_object* v_argsPacker_2924_, lean_object* v_as_2925_, size_t v_sz_2926_, size_t v_i_2927_, lean_object* v_bs_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_){
_start:
{
lean_object* v___x_2934_; 
v___x_2934_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___redArg(v_fixedParamPerms_2921_, v_unaryPreDefNonRec_2922_, v_us_2923_, v_argsPacker_2924_, v_sz_2926_, v_i_2927_, v_bs_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
return v___x_2934_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___boxed(lean_object* v_fixedParamPerms_2935_, lean_object* v_unaryPreDefNonRec_2936_, lean_object* v_us_2937_, lean_object* v_argsPacker_2938_, lean_object* v_as_2939_, lean_object* v_sz_2940_, lean_object* v_i_2941_, lean_object* v_bs_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_){
_start:
{
size_t v_sz_boxed_2948_; size_t v_i_boxed_2949_; lean_object* v_res_2950_; 
v_sz_boxed_2948_ = lean_unbox_usize(v_sz_2940_);
lean_dec(v_sz_2940_);
v_i_boxed_2949_ = lean_unbox_usize(v_i_2941_);
lean_dec(v_i_2941_);
v_res_2950_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2(v_fixedParamPerms_2935_, v_unaryPreDefNonRec_2936_, v_us_2937_, v_argsPacker_2938_, v_as_2939_, v_sz_boxed_2948_, v_i_boxed_2949_, v_bs_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_);
lean_dec(v___y_2946_);
lean_dec_ref(v___y_2945_);
lean_dec(v___y_2944_);
lean_dec_ref(v___y_2943_);
lean_dec_ref(v_as_2939_);
lean_dec_ref(v_fixedParamPerms_2935_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0(lean_object* v_unaryPreDefNonRec_2951_, lean_object* v_preDefs_2952_, lean_object* v_fixedParamPerms_2953_, lean_object* v_us_2954_, lean_object* v_argsPacker_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_){
_start:
{
lean_object* v___x_2961_; 
v___x_2961_ = l_Lean_Elab_addAsAxiom___redArg(v_unaryPreDefNonRec_2951_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_2961_) == 0)
{
size_t v_sz_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_4011__overap_2967_; lean_object* v___x_2968_; 
lean_dec_ref_known(v___x_2961_, 1);
v_sz_2962_ = lean_array_size(v_preDefs_2952_);
v___x_2963_ = l_unsafeCast___redArg(v_preDefs_2952_);
v___x_2964_ = lean_box_usize(v_sz_2962_);
v___x_2965_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_WF_packCalls_spec__3_spec__4_spec__13___boxed__const__1));
v___x_2966_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__2___boxed), 13, 8);
lean_closure_set(v___x_2966_, 0, v_fixedParamPerms_2953_);
lean_closure_set(v___x_2966_, 1, v_unaryPreDefNonRec_2951_);
lean_closure_set(v___x_2966_, 2, v_us_2954_);
lean_closure_set(v___x_2966_, 3, v_argsPacker_2955_);
lean_closure_set(v___x_2966_, 4, v_preDefs_2952_);
lean_closure_set(v___x_2966_, 5, v___x_2964_);
lean_closure_set(v___x_2966_, 6, v___x_2965_);
lean_closure_set(v___x_2966_, 7, v___x_2963_);
v___x_4011__overap_2967_ = l_unsafeCast___redArg(v___x_2966_);
lean_dec_ref(v___x_2966_);
v___x_2968_ = lean_apply_5(v___x_4011__overap_2967_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_, lean_box(0));
return v___x_2968_;
}
else
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2976_; 
lean_dec(v___y_2959_);
lean_dec_ref(v___y_2958_);
lean_dec(v___y_2957_);
lean_dec_ref(v___y_2956_);
lean_dec_ref(v_argsPacker_2955_);
lean_dec(v_us_2954_);
lean_dec_ref(v_fixedParamPerms_2953_);
lean_dec_ref(v_preDefs_2952_);
lean_dec_ref(v_unaryPreDefNonRec_2951_);
v_a_2969_ = lean_ctor_get(v___x_2961_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2961_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2971_ = v___x_2961_;
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v___x_2961_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
if (v_isShared_2972_ == 0)
{
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v_a_2969_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
return v___x_2974_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0___boxed(lean_object* v_unaryPreDefNonRec_2977_, lean_object* v_preDefs_2978_, lean_object* v_fixedParamPerms_2979_, lean_object* v_us_2980_, lean_object* v_argsPacker_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_){
_start:
{
lean_object* v_res_2987_; 
v_res_2987_ = l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0(v_unaryPreDefNonRec_2977_, v_preDefs_2978_, v_fixedParamPerms_2979_, v_us_2980_, v_argsPacker_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
return v_res_2987_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_2988_; 
v___x_2988_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2988_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; 
v___x_2989_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__0);
v___x_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2989_);
return v___x_2990_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___x_2991_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1);
v___x_2992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2991_);
lean_ctor_set(v___x_2992_, 1, v___x_2991_);
return v___x_2992_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; 
v___x_2993_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__1);
v___x_2994_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2994_, 0, v___x_2993_);
lean_ctor_set(v___x_2994_, 1, v___x_2993_);
lean_ctor_set(v___x_2994_, 2, v___x_2993_);
lean_ctor_set(v___x_2994_, 3, v___x_2993_);
lean_ctor_set(v___x_2994_, 4, v___x_2993_);
lean_ctor_set(v___x_2994_, 5, v___x_2993_);
return v___x_2994_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(lean_object* v_env_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v___x_2999_; lean_object* v_nextMacroScope_3000_; lean_object* v_ngen_3001_; lean_object* v_auxDeclNGen_3002_; lean_object* v_traceState_3003_; lean_object* v_messages_3004_; lean_object* v_infoState_3005_; lean_object* v_snapshotTasks_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3032_; 
v___x_2999_ = lean_st_ref_take(v___y_2997_);
v_nextMacroScope_3000_ = lean_ctor_get(v___x_2999_, 1);
v_ngen_3001_ = lean_ctor_get(v___x_2999_, 2);
v_auxDeclNGen_3002_ = lean_ctor_get(v___x_2999_, 3);
v_traceState_3003_ = lean_ctor_get(v___x_2999_, 4);
v_messages_3004_ = lean_ctor_get(v___x_2999_, 6);
v_infoState_3005_ = lean_ctor_get(v___x_2999_, 7);
v_snapshotTasks_3006_ = lean_ctor_get(v___x_2999_, 8);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3032_ == 0)
{
lean_object* v_unused_3033_; lean_object* v_unused_3034_; 
v_unused_3033_ = lean_ctor_get(v___x_2999_, 5);
lean_dec(v_unused_3033_);
v_unused_3034_ = lean_ctor_get(v___x_2999_, 0);
lean_dec(v_unused_3034_);
v___x_3008_ = v___x_2999_;
v_isShared_3009_ = v_isSharedCheck_3032_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_snapshotTasks_3006_);
lean_inc(v_infoState_3005_);
lean_inc(v_messages_3004_);
lean_inc(v_traceState_3003_);
lean_inc(v_auxDeclNGen_3002_);
lean_inc(v_ngen_3001_);
lean_inc(v_nextMacroScope_3000_);
lean_dec(v___x_2999_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3032_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3010_; lean_object* v___x_3012_; 
v___x_3010_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__2);
if (v_isShared_3009_ == 0)
{
lean_ctor_set(v___x_3008_, 5, v___x_3010_);
lean_ctor_set(v___x_3008_, 0, v_env_2995_);
v___x_3012_ = v___x_3008_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_env_2995_);
lean_ctor_set(v_reuseFailAlloc_3031_, 1, v_nextMacroScope_3000_);
lean_ctor_set(v_reuseFailAlloc_3031_, 2, v_ngen_3001_);
lean_ctor_set(v_reuseFailAlloc_3031_, 3, v_auxDeclNGen_3002_);
lean_ctor_set(v_reuseFailAlloc_3031_, 4, v_traceState_3003_);
lean_ctor_set(v_reuseFailAlloc_3031_, 5, v___x_3010_);
lean_ctor_set(v_reuseFailAlloc_3031_, 6, v_messages_3004_);
lean_ctor_set(v_reuseFailAlloc_3031_, 7, v_infoState_3005_);
lean_ctor_set(v_reuseFailAlloc_3031_, 8, v_snapshotTasks_3006_);
v___x_3012_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v_mctx_3015_; lean_object* v_zetaDeltaFVarIds_3016_; lean_object* v_postponed_3017_; lean_object* v_diag_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3029_; 
v___x_3013_ = lean_st_ref_put(v___y_2997_, v___x_3012_);
v___x_3014_ = lean_st_ref_take(v___y_2996_);
v_mctx_3015_ = lean_ctor_get(v___x_3014_, 0);
v_zetaDeltaFVarIds_3016_ = lean_ctor_get(v___x_3014_, 2);
v_postponed_3017_ = lean_ctor_get(v___x_3014_, 3);
v_diag_3018_ = lean_ctor_get(v___x_3014_, 4);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_3014_);
if (v_isSharedCheck_3029_ == 0)
{
lean_object* v_unused_3030_; 
v_unused_3030_ = lean_ctor_get(v___x_3014_, 1);
lean_dec(v_unused_3030_);
v___x_3020_ = v___x_3014_;
v_isShared_3021_ = v_isSharedCheck_3029_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_diag_3018_);
lean_inc(v_postponed_3017_);
lean_inc(v_zetaDeltaFVarIds_3016_);
lean_inc(v_mctx_3015_);
lean_dec(v___x_3014_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3029_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3025_; 
v___x_3022_ = lean_box(0);
v___x_3023_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___closed__3);
if (v_isShared_3021_ == 0)
{
lean_ctor_set(v___x_3020_, 1, v___x_3023_);
v___x_3025_ = v___x_3020_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_mctx_3015_);
lean_ctor_set(v_reuseFailAlloc_3028_, 1, v___x_3023_);
lean_ctor_set(v_reuseFailAlloc_3028_, 2, v_zetaDeltaFVarIds_3016_);
lean_ctor_set(v_reuseFailAlloc_3028_, 3, v_postponed_3017_);
lean_ctor_set(v_reuseFailAlloc_3028_, 4, v_diag_3018_);
v___x_3025_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3026_ = lean_st_ref_put(v___y_2996_, v___x_3025_);
v___x_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3022_);
return v___x_3027_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg___boxed(lean_object* v_env_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_){
_start:
{
lean_object* v_res_3039_; 
v_res_3039_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(v_env_3035_, v___y_3036_, v___y_3037_);
lean_dec(v___y_3037_);
lean_dec(v___y_3036_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg(lean_object* v_env_3040_, lean_object* v_x_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_){
_start:
{
lean_object* v___x_3047_; lean_object* v_env_3048_; lean_object* v_a_3050_; lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3047_ = lean_st_ref_get(v___y_3045_);
v_env_3048_ = lean_ctor_get(v___x_3047_, 0);
lean_inc_ref(v_env_3048_);
lean_dec(v___x_3047_);
v___x_3060_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(v_env_3040_, v___y_3043_, v___y_3045_);
lean_dec_ref(v___x_3060_);
lean_inc(v___y_3045_);
lean_inc_ref(v___y_3044_);
lean_inc(v___y_3043_);
lean_inc_ref(v___y_3042_);
v___x_3061_ = lean_apply_5(v_x_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, lean_box(0));
if (lean_obj_tag(v___x_3061_) == 0)
{
lean_object* v_a_3062_; lean_object* v___x_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3070_; 
v_a_3062_ = lean_ctor_get(v___x_3061_, 0);
lean_inc(v_a_3062_);
lean_dec_ref_known(v___x_3061_, 1);
v___x_3063_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(v_env_3048_, v___y_3043_, v___y_3045_);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3070_ == 0)
{
lean_object* v_unused_3071_; 
v_unused_3071_ = lean_ctor_get(v___x_3063_, 0);
lean_dec(v_unused_3071_);
v___x_3065_ = v___x_3063_;
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
else
{
lean_dec(v___x_3063_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
lean_object* v___x_3068_; 
if (v_isShared_3066_ == 0)
{
lean_ctor_set(v___x_3065_, 0, v_a_3062_);
v___x_3068_ = v___x_3065_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v_a_3062_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
}
else
{
lean_object* v_a_3072_; 
v_a_3072_ = lean_ctor_get(v___x_3061_, 0);
lean_inc(v_a_3072_);
lean_dec_ref_known(v___x_3061_, 1);
v_a_3050_ = v_a_3072_;
goto v___jp_3049_;
}
v___jp_3049_:
{
lean_object* v___x_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3058_; 
v___x_3051_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(v_env_3048_, v___y_3043_, v___y_3045_);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3058_ == 0)
{
lean_object* v_unused_3059_; 
v_unused_3059_ = lean_ctor_get(v___x_3051_, 0);
lean_dec(v_unused_3059_);
v___x_3053_ = v___x_3051_;
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
else
{
lean_dec(v___x_3051_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3056_; 
if (v_isShared_3054_ == 0)
{
lean_ctor_set_tag(v___x_3053_, 1);
lean_ctor_set(v___x_3053_, 0, v_a_3050_);
v___x_3056_ = v___x_3053_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v_a_3050_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg___boxed(lean_object* v_env_3073_, lean_object* v_x_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg(v_env_3073_, v_x_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec(lean_object* v_fixedParamPerms_3081_, lean_object* v_argsPacker_3082_, lean_object* v_preDefs_3083_, lean_object* v_unaryPreDefNonRec_3084_, lean_object* v_a_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_){
_start:
{
lean_object* v_levelParams_3090_; lean_object* v___x_3091_; lean_object* v_us_3092_; lean_object* v___f_3093_; lean_object* v___x_3094_; lean_object* v_env_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v_levelParams_3090_ = lean_ctor_get(v_unaryPreDefNonRec_3084_, 1);
v___x_3091_ = lean_box(0);
lean_inc(v_levelParams_3090_);
v_us_3092_ = l_List_mapTR_loop___at___00Lean_Elab_WF_packMutual_spec__2(v_levelParams_3090_, v___x_3091_);
v___f_3093_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_preDefsFromUnaryNonRec___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3093_, 0, v_unaryPreDefNonRec_3084_);
lean_closure_set(v___f_3093_, 1, v_preDefs_3083_);
lean_closure_set(v___f_3093_, 2, v_fixedParamPerms_3081_);
lean_closure_set(v___f_3093_, 3, v_us_3092_);
lean_closure_set(v___f_3093_, 4, v_argsPacker_3082_);
v___x_3094_ = lean_st_ref_get(v_a_3088_);
v_env_3095_ = lean_ctor_get(v___x_3094_, 0);
lean_inc_ref(v_env_3095_);
lean_dec(v___x_3094_);
v___x_3096_ = l_Lean_Environment_unlockAsync(v_env_3095_);
v___x_3097_ = l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg(v___x_3096_, v___f_3093_, v_a_3085_, v_a_3086_, v_a_3087_, v_a_3088_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec___boxed(lean_object* v_fixedParamPerms_3098_, lean_object* v_argsPacker_3099_, lean_object* v_preDefs_3100_, lean_object* v_unaryPreDefNonRec_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_){
_start:
{
lean_object* v_res_3107_; 
v_res_3107_ = l_Lean_Elab_WF_preDefsFromUnaryNonRec(v_fixedParamPerms_3098_, v_argsPacker_3099_, v_preDefs_3100_, v_unaryPreDefNonRec_3101_, v_a_3102_, v_a_3103_, v_a_3104_, v_a_3105_);
lean_dec(v_a_3105_);
lean_dec_ref(v_a_3104_);
lean_dec(v_a_3103_);
lean_dec_ref(v_a_3102_);
return v_res_3107_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3(lean_object* v_env_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_){
_start:
{
lean_object* v___x_3114_; 
v___x_3114_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___redArg(v_env_3108_, v___y_3110_, v___y_3112_);
return v___x_3114_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3___boxed(lean_object* v_env_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_){
_start:
{
lean_object* v_res_3121_; 
v_res_3121_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3_spec__3(v_env_3115_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_);
lean_dec(v___y_3119_);
lean_dec_ref(v___y_3118_);
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
return v_res_3121_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3(lean_object* v_00_u03b1_3122_, lean_object* v_env_3123_, lean_object* v_x_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_){
_start:
{
lean_object* v___x_3130_; 
v___x_3130_ = l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___redArg(v_env_3123_, v_x_3124_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
return v___x_3130_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3___boxed(lean_object* v_00_u03b1_3131_, lean_object* v_env_3132_, lean_object* v_x_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l_Lean_withEnv___at___00Lean_Elab_WF_preDefsFromUnaryNonRec_spec__3(v_00_u03b1_3131_, v_env_3132_, v_x_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_);
lean_dec(v___y_3137_);
lean_dec_ref(v___y_3136_);
lean_dec(v___y_3135_);
lean_dec_ref(v___y_3134_);
return v_res_3139_;
}
}
lean_object* runtime_initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Eqns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Eqns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Coe
// Imports: public import Lean.Meta.AppBuilder import Lean.ExtraModUses import Lean.Meta.WHNF
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
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArgD(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMonad_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_hint_x27(lean_object*);
uint8_t l_Lean_Expr_isSort(lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "coe_decl"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 217, 140, 88, 250, 134, 204, 64)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "auxiliary definition used to implement coercion (unfolded during elaboration)"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "coeDeclAttr"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(110, 20, 115, 115, 128, 118, 26, 153)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coeDeclAttr;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 308, .m_capacity = 308, .m_length = 307, .m_data = "Tags declarations to be unfolded during coercion elaboration.\n\nThis is mostly used to hide coercion implementation details and show the coerced result instead of\nan application of auxiliary definitions (e.g. `CoeT.coe`, `Coe.coe`). This attribute only works on\nreducible functions and instance projections.\n"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1)),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__1_value),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1)),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__4_value),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_isCoeDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isCoeDecl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__23 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__23_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__0_value;
static const lean_string_object l_Lean_Meta_expandCoe___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Coe"};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_expandCoe___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "coe"};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(215, 70, 184, 182, 52, 50, 221, 222)}};
static const lean_ctor_object l_Lean_Meta_expandCoe___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 161, 101, 251, 53, 131, 233)}};
static const lean_object* l_Lean_Meta_expandCoe___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed__const__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_expandCoe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_expandCoe___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_expandCoe___closed__0 = (const lean_object*)&l_Lean_Meta_expandCoe___closed__0_value;
static const lean_closure_object l_Lean_Meta_expandCoe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_expandCoe___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_expandCoe___closed__1 = (const lean_object*)&l_Lean_Meta_expandCoe___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "autoLift"};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(168, 70, 99, 132, 14, 255, 243, 87)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "Insert monadic lifts (i.e., `liftM` and coercions) when needed."};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(197, 184, 93, 140, 214, 99, 153, 189)}};
static const lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_autoLift;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "CoeT"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 0, 82, 253, 29, 221, 45, 84)}};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 0, 82, 253, 29, 221, 45, 84)}};
static const lean_ctor_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 80, 89, 153, 124, 3, 255, 77)}};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Could not coerce"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "\ncoerced expression has wrong type:"};
static const lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7_value;
static lean_once_cell_t l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "CoeFun"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 121, 249, 91, 203, 193, 161, 225)}};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 121, 249, 91, 203, 193, 161, 225)}};
static const lean_ctor_object l_Lean_Meta_coerceToFunction_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(69, 94, 101, 78, 118, 25, 69, 111)}};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Failed to coerce"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "\nto a function: After applying `CoeFun.coe`, result is still not a function"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceToFunction_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "This is often due to incorrect `CoeFun` instances; the synthesized instance was"};
static const lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceToFunction_x3f___closed__7_value;
static lean_once_cell_t l_Lean_Meta_coerceToFunction_x3f___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToFunction_x3f___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CoeSort"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 41, 56, 145, 201, 10, 66, 222)}};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 41, 56, 145, 201, 10, 66, 222)}};
static const lean_ctor_object l_Lean_Meta_coerceToSort_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_expandCoe___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(249, 65, 70, 162, 243, 253, 64, 246)}};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__2_value;
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "\nto a type: After applying `CoeSort.coe`, result is still not a type"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__3_value;
static lean_once_cell_t l_Lean_Meta_coerceToSort_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToSort_x3f___closed__4;
static const lean_string_object l_Lean_Meta_coerceToSort_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "This is often due to incorrect `CoeSort` instances; the synthesized instance was"};
static const lean_object* l_Lean_Meta_coerceToSort_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceToSort_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceToSort_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceToSort_x3f___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MonadLiftT"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(236, 247, 249, 204, 219, 215, 23, 105)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__1_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "liftM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(102, 61, 106, 101, 51, 7, 16, 91)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__3 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__3_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__4 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__4_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__5 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Meta_coerceMonadLift_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__6;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__7 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "liftCoeM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__8 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__8_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(71, 59, 146, 186, 152, 132, 76, 197)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__8_value),LEAN_SCALAR_PTR_LITERAL(59, 34, 101, 209, 97, 81, 138, 47)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__9 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__9_value;
static const lean_string_object l_Lean_Meta_coerceMonadLift_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "coeM"};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__10 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__10_value;
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(71, 59, 146, 186, 152, 132, 76, 197)}};
static const lean_ctor_object l_Lean_Meta_coerceMonadLift_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__10_value),LEAN_SCALAR_PTR_LITERAL(21, 111, 129, 2, 187, 243, 141, 114)}};
static const lean_object* l_Lean_Meta_coerceMonadLift_x3f___closed__11 = (const lean_object*)&l_Lean_Meta_coerceMonadLift_x3f___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_box(0);
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object* v_x_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(v_x_7_, v___y_8_, v___y_9_);
lean_dec(v___y_9_);
lean_dec_ref(v___y_8_);
lean_dec(v_x_7_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; uint8_t v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___f_25_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_26_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_27_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_28_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_29_ = 0;
v___x_30_ = lean_box(2);
v___x_31_ = l_Lean_registerTagAttribute(v___x_26_, v___x_27_, v___f_25_, v___x_28_, v___x_29_, v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2____boxed(lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1(){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_37_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___closed__0));
v___x_38_ = l_Lean_addBuiltinDocString(v___x_36_, v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1___boxed(lean_object* v_a_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3(){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_));
v___x_68_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___closed__6));
v___x_69_ = l_Lean_addBuiltinDeclarationRanges(v___x_67_, v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3___boxed(lean_object* v_a_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
return v_res_71_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isCoeDecl(lean_object* v_env_72_, lean_object* v_declName_73_){
_start:
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = l_Lean_Meta_coeDeclAttr;
v___x_75_ = l_Lean_TagAttribute_hasTag(v___x_74_, v_env_72_, v_declName_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isCoeDecl___boxed(lean_object* v_env_76_, lean_object* v_declName_77_){
_start:
{
uint8_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = l_Lean_Meta_isCoeDecl(v_env_76_, v_declName_77_);
v_r_79_ = lean_box(v_res_78_);
return v_r_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(lean_object* v_declName_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; lean_object* v_env_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_83_ = lean_st_ref_get(v___y_81_);
v_env_84_ = lean_ctor_get(v___x_83_, 0);
lean_inc_ref(v_env_84_);
lean_dec(v___x_83_);
v___x_85_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_84_, v_declName_80_);
v___x_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg___boxed(lean_object* v_declName_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_declName_87_, v___y_88_);
lean_dec(v___y_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(lean_object* v_declName_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_declName_91_, v___y_95_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___boxed(lean_object* v_declName_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0(v_declName_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
return v_res_104_;
}
}
static lean_object* _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = lean_box(0);
v___x_106_ = l_unsafeCast___redArg(v___x_105_);
return v___x_106_;
}
}
static lean_object* _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__0);
v___x_108_ = l_Lean_Expr_sort___override(v___x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(lean_object* v_e_109_, lean_object* v_nm_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v___x_116_; 
lean_inc(v_nm_110_);
v___x_116_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget_spec__0___redArg(v_nm_110_, v_a_114_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_139_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_139_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_139_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_139_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
if (lean_obj_tag(v_a_117_) == 1)
{
lean_object* v_val_121_; lean_object* v_numParams_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; 
v_val_121_ = lean_ctor_get(v_a_117_, 0);
lean_inc(v_val_121_);
lean_dec_ref_known(v_a_117_, 1);
v_numParams_122_ = lean_ctor_get(v_val_121_, 1);
lean_inc(v_numParams_122_);
lean_dec(v_val_121_);
v___x_123_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1);
v___x_124_ = l_Lean_Expr_getAppNumArgs(v_e_109_);
v___x_125_ = lean_nat_sub(v___x_124_, v_numParams_122_);
lean_dec(v_numParams_122_);
lean_dec(v___x_124_);
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = lean_nat_sub(v___x_125_, v___x_126_);
lean_dec(v___x_125_);
v___x_128_ = l_Lean_Expr_getRevArgD(v_e_109_, v___x_127_, v___x_123_);
lean_dec_ref(v_e_109_);
v___x_129_ = l_Lean_Expr_getAppFn(v___x_128_);
v___x_130_ = l_Lean_Expr_isConst(v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_132_; 
lean_dec_ref(v___x_129_);
lean_dec_ref(v___x_128_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v_nm_110_);
v___x_132_ = v___x_119_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_nm_110_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
else
{
lean_object* v___x_134_; 
lean_del_object(v___x_119_);
lean_dec(v_nm_110_);
v___x_134_ = l_Lean_Expr_constName_x21(v___x_129_);
lean_dec_ref(v___x_129_);
v_e_109_ = v___x_128_;
v_nm_110_ = v___x_134_;
goto _start;
}
}
else
{
lean_object* v___x_137_; 
lean_dec(v_a_117_);
lean_dec_ref(v_e_109_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v_nm_110_);
v___x_137_ = v___x_119_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_nm_110_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec(v_nm_110_);
lean_dec_ref(v_e_109_);
v_a_140_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_116_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_116_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___boxed(lean_object* v_e_148_, lean_object* v_nm_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(v_e_148_, v_nm_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0(lean_object* v_e_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v_e_156_);
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
lean_ctor_set(v___x_164_, 1, v___y_157_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__0___boxed(lean_object* v_e_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lean_Meta_expandCoe___lam__0(v_e_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(lean_object* v_msgData_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; lean_object* v_env_181_; lean_object* v___x_182_; lean_object* v_toCold_183_; lean_object* v_mctx_184_; lean_object* v_lctx_185_; lean_object* v_options_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_180_ = lean_st_ref_get(v___y_178_);
v_env_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc_ref(v_env_181_);
lean_dec(v___x_180_);
v___x_182_ = lean_st_ref_get(v___y_176_);
v_toCold_183_ = lean_ctor_get(v___y_177_, 0);
v_mctx_184_ = lean_ctor_get(v___x_182_, 0);
lean_inc_ref(v_mctx_184_);
lean_dec(v___x_182_);
v_lctx_185_ = lean_ctor_get(v___y_175_, 2);
v_options_186_ = lean_ctor_get(v_toCold_183_, 2);
lean_inc_ref(v_options_186_);
lean_inc_ref(v_lctx_185_);
v___x_187_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_187_, 0, v_env_181_);
lean_ctor_set(v___x_187_, 1, v_mctx_184_);
lean_ctor_set(v___x_187_, 2, v_lctx_185_);
lean_ctor_set(v___x_187_, 3, v_options_186_);
v___x_188_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
lean_ctor_set(v___x_188_, 1, v_msgData_174_);
v___x_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_msgData_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(v_msgData_190_, v___y_191_, v___y_192_, v___y_193_, v___y_194_);
lean_dec(v___y_194_);
lean_dec_ref(v___y_193_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
return v_res_196_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_197_; double v___x_198_; 
v___x_197_ = lean_unsigned_to_nat(0u);
v___x_198_ = lean_float_of_nat(v___x_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(lean_object* v_cls_202_, lean_object* v_msg_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_ref_210_; lean_object* v___x_211_; lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_257_; 
v_ref_210_ = lean_ctor_get(v___y_207_, 2);
v___x_211_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(v_msg_203_, v___y_205_, v___y_206_, v___y_207_, v___y_208_);
v_a_212_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_257_ == 0)
{
v___x_214_ = v___x_211_;
v_isShared_215_ = v_isSharedCheck_257_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v___x_211_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_257_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_216_; lean_object* v_traceState_217_; lean_object* v_env_218_; lean_object* v_nextMacroScope_219_; lean_object* v_ngen_220_; lean_object* v_auxDeclNGen_221_; lean_object* v_cache_222_; lean_object* v_messages_223_; lean_object* v_infoState_224_; lean_object* v_snapshotTasks_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_256_; 
v___x_216_ = lean_st_ref_take(v___y_208_);
v_traceState_217_ = lean_ctor_get(v___x_216_, 4);
v_env_218_ = lean_ctor_get(v___x_216_, 0);
v_nextMacroScope_219_ = lean_ctor_get(v___x_216_, 1);
v_ngen_220_ = lean_ctor_get(v___x_216_, 2);
v_auxDeclNGen_221_ = lean_ctor_get(v___x_216_, 3);
v_cache_222_ = lean_ctor_get(v___x_216_, 5);
v_messages_223_ = lean_ctor_get(v___x_216_, 6);
v_infoState_224_ = lean_ctor_get(v___x_216_, 7);
v_snapshotTasks_225_ = lean_ctor_get(v___x_216_, 8);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_256_ == 0)
{
v___x_227_ = v___x_216_;
v_isShared_228_ = v_isSharedCheck_256_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_snapshotTasks_225_);
lean_inc(v_infoState_224_);
lean_inc(v_messages_223_);
lean_inc(v_cache_222_);
lean_inc(v_traceState_217_);
lean_inc(v_auxDeclNGen_221_);
lean_inc(v_ngen_220_);
lean_inc(v_nextMacroScope_219_);
lean_inc(v_env_218_);
lean_dec(v___x_216_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_256_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
uint64_t v_tid_229_; lean_object* v_traces_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_255_; 
v_tid_229_ = lean_ctor_get_uint64(v_traceState_217_, sizeof(void*)*1);
v_traces_230_ = lean_ctor_get(v_traceState_217_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v_traceState_217_);
if (v_isSharedCheck_255_ == 0)
{
v___x_232_ = v_traceState_217_;
v_isShared_233_ = v_isSharedCheck_255_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_traces_230_);
lean_dec(v_traceState_217_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_255_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_234_; lean_object* v___x_235_; double v___x_236_; uint8_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_245_; 
v___x_234_ = lean_box(0);
v___x_235_ = lean_box(0);
v___x_236_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__0);
v___x_237_ = 0;
v___x_238_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1));
v___x_239_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_239_, 0, v_cls_202_);
lean_ctor_set(v___x_239_, 1, v___x_235_);
lean_ctor_set(v___x_239_, 2, v___x_238_);
lean_ctor_set_float(v___x_239_, sizeof(void*)*3, v___x_236_);
lean_ctor_set_float(v___x_239_, sizeof(void*)*3 + 8, v___x_236_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*3 + 16, v___x_237_);
v___x_240_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__2));
v___x_241_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v_a_212_);
lean_ctor_set(v___x_241_, 2, v___x_240_);
lean_inc(v_ref_210_);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v_ref_210_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
v___x_243_ = l_Lean_PersistentArray_push___redArg(v_traces_230_, v___x_242_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 0, v___x_243_);
v___x_245_ = v___x_232_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_243_);
lean_ctor_set_uint64(v_reuseFailAlloc_254_, sizeof(void*)*1, v_tid_229_);
v___x_245_ = v_reuseFailAlloc_254_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v___x_247_; 
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 4, v___x_245_);
v___x_247_ = v___x_227_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_env_218_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v_nextMacroScope_219_);
lean_ctor_set(v_reuseFailAlloc_253_, 2, v_ngen_220_);
lean_ctor_set(v_reuseFailAlloc_253_, 3, v_auxDeclNGen_221_);
lean_ctor_set(v_reuseFailAlloc_253_, 4, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_253_, 5, v_cache_222_);
lean_ctor_set(v_reuseFailAlloc_253_, 6, v_messages_223_);
lean_ctor_set(v_reuseFailAlloc_253_, 7, v_infoState_224_);
lean_ctor_set(v_reuseFailAlloc_253_, 8, v_snapshotTasks_225_);
v___x_247_ = v_reuseFailAlloc_253_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_251_; 
v___x_248_ = lean_st_ref_put(v___y_208_, v___x_247_);
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_234_);
lean_ctor_set(v___x_249_, 1, v___y_204_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v___x_249_);
v___x_251_ = v___x_214_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v___x_249_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___boxed(lean_object* v_cls_258_, lean_object* v_msg_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(v_cls_258_, v_msg_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
return v_res_266_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object* v_keys_267_, lean_object* v_i_268_, lean_object* v_k_269_){
_start:
{
lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_270_ = lean_array_get_size(v_keys_267_);
v___x_271_ = lean_nat_dec_lt(v_i_268_, v___x_270_);
if (v___x_271_ == 0)
{
lean_dec(v_i_268_);
return v___x_271_;
}
else
{
lean_object* v_k_x27_272_; uint8_t v___x_273_; 
v_k_x27_272_ = lean_array_fget_borrowed(v_keys_267_, v_i_268_);
v___x_273_ = l_Lean_instBEqExtraModUse_beq(v_k_269_, v_k_x27_272_);
if (v___x_273_ == 0)
{
lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_274_ = lean_unsigned_to_nat(1u);
v___x_275_ = lean_nat_add(v_i_268_, v___x_274_);
lean_dec(v_i_268_);
v_i_268_ = v___x_275_;
goto _start;
}
else
{
lean_dec(v_i_268_);
return v___x_271_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg___boxed(lean_object* v_keys_277_, lean_object* v_i_278_, lean_object* v_k_279_){
_start:
{
uint8_t v_res_280_; lean_object* v_r_281_; 
v_res_280_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_keys_277_, v_i_278_, v_k_279_);
lean_dec_ref(v_k_279_);
lean_dec_ref(v_keys_277_);
v_r_281_ = lean_box(v_res_280_);
return v_r_281_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_282_, size_t v_x_283_, lean_object* v_x_284_){
_start:
{
if (lean_obj_tag(v_x_282_) == 0)
{
lean_object* v_es_285_; lean_object* v___x_286_; size_t v___x_287_; size_t v___x_288_; lean_object* v_j_289_; lean_object* v___x_290_; 
v_es_285_ = lean_ctor_get(v_x_282_, 0);
v___x_286_ = lean_box(2);
v___x_287_ = ((size_t)31ULL);
v___x_288_ = lean_usize_land(v_x_283_, v___x_287_);
v_j_289_ = lean_usize_to_nat(v___x_288_);
v___x_290_ = lean_array_get_borrowed(v___x_286_, v_es_285_, v_j_289_);
lean_dec(v_j_289_);
switch(lean_obj_tag(v___x_290_))
{
case 0:
{
lean_object* v_key_291_; uint8_t v___x_292_; 
v_key_291_ = lean_ctor_get(v___x_290_, 0);
v___x_292_ = l_Lean_instBEqExtraModUse_beq(v_x_284_, v_key_291_);
return v___x_292_;
}
case 1:
{
lean_object* v_node_293_; size_t v___x_294_; size_t v___x_295_; 
v_node_293_ = lean_ctor_get(v___x_290_, 0);
v___x_294_ = ((size_t)5ULL);
v___x_295_ = lean_usize_shift_right(v_x_283_, v___x_294_);
v_x_282_ = v_node_293_;
v_x_283_ = v___x_295_;
goto _start;
}
default: 
{
uint8_t v___x_297_; 
v___x_297_ = 0;
return v___x_297_;
}
}
}
else
{
lean_object* v_ks_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v_ks_298_ = lean_ctor_get(v_x_282_, 0);
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_ks_298_, v___x_299_, v_x_284_);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_301_, lean_object* v_x_302_, lean_object* v_x_303_){
_start:
{
size_t v_x_36116__boxed_304_; uint8_t v_res_305_; lean_object* v_r_306_; 
v_x_36116__boxed_304_ = lean_unbox_usize(v_x_302_);
lean_dec(v_x_302_);
v_res_305_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_301_, v_x_36116__boxed_304_, v_x_303_);
lean_dec_ref(v_x_303_);
lean_dec_ref(v_x_301_);
v_r_306_ = lean_box(v_res_305_);
return v_r_306_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(lean_object* v_x_307_, lean_object* v_x_308_){
_start:
{
uint64_t v___x_309_; size_t v___x_310_; uint8_t v___x_311_; 
v___x_309_ = l_Lean_instHashableExtraModUse_hash(v_x_308_);
v___x_310_ = lean_uint64_to_usize(v___x_309_);
v___x_311_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_307_, v___x_310_, v_x_308_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_312_, lean_object* v_x_313_){
_start:
{
uint8_t v_res_314_; lean_object* v_r_315_; 
v_res_314_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v_x_312_, v_x_313_);
lean_dec_ref(v_x_313_);
lean_dec_ref(v_x_312_);
v_r_315_ = lean_box(v_res_314_);
return v_r_315_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_316_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_box(0);
v___x_318_ = l_unsafeCast___redArg(v___x_317_);
return v___x_318_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_319_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__2);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3);
v___x_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
return v___x_323_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__3);
v___x_325_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
lean_ctor_set(v___x_325_, 2, v___x_324_);
lean_ctor_set(v___x_325_, 3, v___x_324_);
lean_ctor_set(v___x_325_, 4, v___x_324_);
lean_ctor_set(v___x_325_, 5, v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__8));
v___x_331_ = l_Lean_stringToMessageData(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__10));
v___x_334_ = l_Lean_stringToMessageData(v___x_333_);
return v___x_334_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2___closed__1));
v___x_336_ = l_Lean_stringToMessageData(v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15(void){
_start:
{
lean_object* v_cls_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v_cls_340_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7));
v___x_341_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__14));
v___x_342_ = l_Lean_Name_append(v___x_341_, v_cls_340_);
return v___x_342_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__16));
v___x_345_ = l_Lean_stringToMessageData(v___x_344_);
return v___x_345_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__18));
v___x_348_ = l_Lean_stringToMessageData(v___x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(lean_object* v_mod_353_, uint8_t v_isMeta_354_, lean_object* v_hint_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v_env_364_; uint8_t v_isExporting_365_; lean_object* v_entry_366_; lean_object* v___x_367_; lean_object* v_env_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___y_373_; lean_object* v___y_374_; lean_object* v___y_375_; lean_object* v___x_416_; uint8_t v___x_417_; 
v___x_362_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__0);
v___x_363_ = lean_st_ref_get(v___y_360_);
v_env_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc_ref(v_env_364_);
lean_dec(v___x_363_);
v_isExporting_365_ = lean_ctor_get_uint8(v_env_364_, sizeof(void*)*8);
lean_dec_ref(v_env_364_);
lean_inc(v_mod_353_);
v_entry_366_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_366_, 0, v_mod_353_);
lean_ctor_set_uint8(v_entry_366_, sizeof(void*)*1, v_isExporting_365_);
lean_ctor_set_uint8(v_entry_366_, sizeof(void*)*1 + 1, v_isMeta_354_);
v___x_367_ = lean_st_ref_get(v___y_360_);
v_env_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc_ref(v_env_368_);
lean_dec(v___x_367_);
v___x_369_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_370_ = lean_box(1);
v___x_371_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1);
v___x_416_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_362_, v___x_369_, v_env_368_, v___x_370_, v___x_371_);
v___x_417_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v___x_416_, v_entry_366_);
lean_dec(v___x_416_);
if (v___x_417_ == 0)
{
lean_object* v_toCold_418_; lean_object* v_options_419_; uint8_t v_hasTrace_420_; 
v_toCold_418_ = lean_ctor_get(v___y_359_, 0);
v_options_419_ = lean_ctor_get(v_toCold_418_, 2);
v_hasTrace_420_ = lean_ctor_get_uint8(v_options_419_, sizeof(void*)*1);
if (v_hasTrace_420_ == 0)
{
lean_dec(v_hint_355_);
lean_dec(v_mod_353_);
v___y_373_ = v___y_356_;
v___y_374_ = v___y_358_;
v___y_375_ = v___y_360_;
goto v___jp_372_;
}
else
{
lean_object* v_inheritedTraceOptions_421_; lean_object* v_cls_422_; lean_object* v___y_424_; lean_object* v___y_425_; lean_object* v___y_431_; lean_object* v___y_432_; lean_object* v___x_444_; uint8_t v___x_445_; 
v_inheritedTraceOptions_421_ = lean_ctor_get(v_toCold_418_, 11);
v_cls_422_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__7));
v___x_444_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__15);
v___x_445_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_421_, v_options_419_, v___x_444_);
if (v___x_445_ == 0)
{
lean_dec(v_hint_355_);
lean_dec(v_mod_353_);
v___y_373_ = v___y_356_;
v___y_374_ = v___y_358_;
v___y_375_ = v___y_360_;
goto v___jp_372_;
}
else
{
lean_object* v___x_446_; lean_object* v___y_448_; 
v___x_446_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__17);
if (v_isExporting_365_ == 0)
{
lean_object* v___x_455_; 
v___x_455_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__22));
v___y_448_ = v___x_455_;
goto v___jp_447_;
}
else
{
lean_object* v___x_456_; 
v___x_456_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__23));
v___y_448_ = v___x_456_;
goto v___jp_447_;
}
v___jp_447_:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
lean_inc_ref(v___y_448_);
v___x_449_ = l_Lean_stringToMessageData(v___y_448_);
v___x_450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_446_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v___x_451_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__19);
v___x_452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_450_);
lean_ctor_set(v___x_452_, 1, v___x_451_);
if (v_isMeta_354_ == 0)
{
lean_object* v___x_453_; 
v___x_453_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__20));
v___y_431_ = v___x_452_;
v___y_432_ = v___x_453_;
goto v___jp_430_;
}
else
{
lean_object* v___x_454_; 
v___x_454_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__21));
v___y_431_ = v___x_452_;
v___y_432_ = v___x_454_;
goto v___jp_430_;
}
}
}
v___jp_423_:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_426_, 0, v___y_424_);
lean_ctor_set(v___x_426_, 1, v___y_425_);
v___x_427_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2(v_cls_422_, v___x_426_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v_snd_429_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
lean_inc(v_a_428_);
lean_dec_ref_known(v___x_427_, 1);
v_snd_429_ = lean_ctor_get(v_a_428_, 1);
lean_inc(v_snd_429_);
lean_dec(v_a_428_);
v___y_373_ = v_snd_429_;
v___y_374_ = v___y_358_;
v___y_375_ = v___y_360_;
goto v___jp_372_;
}
else
{
lean_dec_ref_known(v_entry_366_, 1);
return v___x_427_;
}
}
v___jp_430_:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; uint8_t v___x_439_; 
lean_inc_ref(v___y_432_);
v___x_433_ = l_Lean_stringToMessageData(v___y_432_);
v___x_434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_434_, 0, v___y_431_);
lean_ctor_set(v___x_434_, 1, v___x_433_);
v___x_435_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__9);
v___x_436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_436_, 0, v___x_434_);
lean_ctor_set(v___x_436_, 1, v___x_435_);
v___x_437_ = l_Lean_MessageData_ofName(v_mod_353_);
v___x_438_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_438_, 0, v___x_436_);
lean_ctor_set(v___x_438_, 1, v___x_437_);
v___x_439_ = l_Lean_Name_isAnonymous(v_hint_355_);
if (v___x_439_ == 0)
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_440_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__11);
v___x_441_ = l_Lean_MessageData_ofName(v_hint_355_);
v___x_442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_440_);
lean_ctor_set(v___x_442_, 1, v___x_441_);
v___y_424_ = v___x_438_;
v___y_425_ = v___x_442_;
goto v___jp_423_;
}
else
{
lean_object* v___x_443_; 
lean_dec(v_hint_355_);
v___x_443_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__12);
v___y_424_ = v___x_438_;
v___y_425_ = v___x_443_;
goto v___jp_423_;
}
}
}
}
else
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
lean_dec_ref_known(v_entry_366_, 1);
lean_dec(v_hint_355_);
lean_dec(v_mod_353_);
v___x_457_ = lean_box(0);
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v___y_356_);
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
v___jp_372_:
{
lean_object* v___x_376_; lean_object* v_toEnvExtension_377_; lean_object* v_env_378_; lean_object* v_nextMacroScope_379_; lean_object* v_ngen_380_; lean_object* v_auxDeclNGen_381_; lean_object* v_traceState_382_; lean_object* v_messages_383_; lean_object* v_infoState_384_; lean_object* v_snapshotTasks_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_414_; 
v___x_376_ = lean_st_ref_take(v___y_375_);
v_toEnvExtension_377_ = lean_ctor_get(v___x_369_, 0);
v_env_378_ = lean_ctor_get(v___x_376_, 0);
v_nextMacroScope_379_ = lean_ctor_get(v___x_376_, 1);
v_ngen_380_ = lean_ctor_get(v___x_376_, 2);
v_auxDeclNGen_381_ = lean_ctor_get(v___x_376_, 3);
v_traceState_382_ = lean_ctor_get(v___x_376_, 4);
v_messages_383_ = lean_ctor_get(v___x_376_, 6);
v_infoState_384_ = lean_ctor_get(v___x_376_, 7);
v_snapshotTasks_385_ = lean_ctor_get(v___x_376_, 8);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_414_ == 0)
{
lean_object* v_unused_415_; 
v_unused_415_ = lean_ctor_get(v___x_376_, 5);
lean_dec(v_unused_415_);
v___x_387_ = v___x_376_;
v_isShared_388_ = v_isSharedCheck_414_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_snapshotTasks_385_);
lean_inc(v_infoState_384_);
lean_inc(v_messages_383_);
lean_inc(v_traceState_382_);
lean_inc(v_auxDeclNGen_381_);
lean_inc(v_ngen_380_);
lean_inc(v_nextMacroScope_379_);
lean_inc(v_env_378_);
lean_dec(v___x_376_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_414_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v_asyncMode_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v_asyncMode_389_ = lean_ctor_get(v_toEnvExtension_377_, 2);
v___x_390_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_369_, v_env_378_, v_entry_366_, v_asyncMode_389_, v___x_371_);
v___x_391_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__4);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 5, v___x_391_);
lean_ctor_set(v___x_387_, 0, v___x_390_);
v___x_393_ = v___x_387_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_390_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_nextMacroScope_379_);
lean_ctor_set(v_reuseFailAlloc_413_, 2, v_ngen_380_);
lean_ctor_set(v_reuseFailAlloc_413_, 3, v_auxDeclNGen_381_);
lean_ctor_set(v_reuseFailAlloc_413_, 4, v_traceState_382_);
lean_ctor_set(v_reuseFailAlloc_413_, 5, v___x_391_);
lean_ctor_set(v_reuseFailAlloc_413_, 6, v_messages_383_);
lean_ctor_set(v_reuseFailAlloc_413_, 7, v_infoState_384_);
lean_ctor_set(v_reuseFailAlloc_413_, 8, v_snapshotTasks_385_);
v___x_393_ = v_reuseFailAlloc_413_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v_mctx_396_; lean_object* v_zetaDeltaFVarIds_397_; lean_object* v_postponed_398_; lean_object* v_diag_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_411_; 
v___x_394_ = lean_st_ref_put(v___y_375_, v___x_393_);
v___x_395_ = lean_st_ref_take(v___y_374_);
v_mctx_396_ = lean_ctor_get(v___x_395_, 0);
v_zetaDeltaFVarIds_397_ = lean_ctor_get(v___x_395_, 2);
v_postponed_398_ = lean_ctor_get(v___x_395_, 3);
v_diag_399_ = lean_ctor_get(v___x_395_, 4);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_411_ == 0)
{
lean_object* v_unused_412_; 
v_unused_412_ = lean_ctor_get(v___x_395_, 1);
lean_dec(v_unused_412_);
v___x_401_ = v___x_395_;
v_isShared_402_ = v_isSharedCheck_411_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_diag_399_);
lean_inc(v_postponed_398_);
lean_inc(v_zetaDeltaFVarIds_397_);
lean_inc(v_mctx_396_);
lean_dec(v___x_395_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_411_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_406_; 
v___x_403_ = lean_box(0);
v___x_404_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__5);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 1, v___x_404_);
v___x_406_ = v___x_401_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_mctx_396_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v___x_404_);
lean_ctor_set(v_reuseFailAlloc_410_, 2, v_zetaDeltaFVarIds_397_);
lean_ctor_set(v_reuseFailAlloc_410_, 3, v_postponed_398_);
lean_ctor_set(v_reuseFailAlloc_410_, 4, v_diag_399_);
v___x_406_ = v_reuseFailAlloc_410_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_407_ = lean_st_ref_put(v___y_374_, v___x_406_);
v___x_408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_403_);
lean_ctor_set(v___x_408_, 1, v___y_373_);
v___x_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
return v___x_409_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___boxed(lean_object* v_mod_460_, lean_object* v_isMeta_461_, lean_object* v_hint_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
uint8_t v_isMeta_boxed_469_; lean_object* v_res_470_; 
v_isMeta_boxed_469_ = lean_unbox(v_isMeta_461_);
v_res_470_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_mod_460_, v_isMeta_boxed_469_, v_hint_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(lean_object* v_a_471_, lean_object* v_x_472_){
_start:
{
if (lean_obj_tag(v_x_472_) == 0)
{
lean_object* v___x_473_; 
v___x_473_ = lean_box(0);
return v___x_473_;
}
else
{
lean_object* v_key_474_; lean_object* v_value_475_; lean_object* v_tail_476_; uint8_t v___x_477_; 
v_key_474_ = lean_ctor_get(v_x_472_, 0);
v_value_475_ = lean_ctor_get(v_x_472_, 1);
v_tail_476_ = lean_ctor_get(v_x_472_, 2);
v___x_477_ = lean_name_eq(v_key_474_, v_a_471_);
if (v___x_477_ == 0)
{
v_x_472_ = v_tail_476_;
goto _start;
}
else
{
lean_object* v___x_479_; 
lean_inc(v_value_475_);
v___x_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_479_, 0, v_value_475_);
return v___x_479_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_a_480_, lean_object* v_x_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(v_a_480_, v_x_481_);
lean_dec(v_x_481_);
lean_dec(v_a_480_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(lean_object* v_m_483_, lean_object* v_a_484_){
_start:
{
lean_object* v_buckets_485_; lean_object* v___x_486_; uint64_t v___y_488_; lean_object* v___x_502_; 
v_buckets_485_ = lean_ctor_get(v_m_483_, 1);
v___x_486_ = lean_array_get_size(v_buckets_485_);
v___x_502_ = l_unsafeCast___redArg(v_a_484_);
if (lean_obj_tag(v___x_502_) == 0)
{
uint64_t v___x_503_; 
v___x_503_ = 1723ULL;
v___y_488_ = v___x_503_;
goto v___jp_487_;
}
else
{
uint64_t v_hash_504_; 
v_hash_504_ = lean_ctor_get_uint64(v___x_502_, sizeof(void*)*2);
lean_dec(v___x_502_);
v___y_488_ = v_hash_504_;
goto v___jp_487_;
}
v___jp_487_:
{
uint64_t v___x_489_; uint64_t v___x_490_; uint64_t v_fold_491_; uint64_t v___x_492_; uint64_t v___x_493_; uint64_t v___x_494_; size_t v___x_495_; size_t v___x_496_; size_t v___x_497_; size_t v___x_498_; size_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_489_ = 32ULL;
v___x_490_ = lean_uint64_shift_right(v___y_488_, v___x_489_);
v_fold_491_ = lean_uint64_xor(v___y_488_, v___x_490_);
v___x_492_ = 16ULL;
v___x_493_ = lean_uint64_shift_right(v_fold_491_, v___x_492_);
v___x_494_ = lean_uint64_xor(v_fold_491_, v___x_493_);
v___x_495_ = lean_uint64_to_usize(v___x_494_);
v___x_496_ = lean_usize_of_nat(v___x_486_);
v___x_497_ = ((size_t)1ULL);
v___x_498_ = lean_usize_sub(v___x_496_, v___x_497_);
v___x_499_ = lean_usize_land(v___x_495_, v___x_498_);
v___x_500_ = lean_array_uget_borrowed(v_buckets_485_, v___x_499_);
v___x_501_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(v_a_484_, v___x_500_);
return v___x_501_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg___boxed(lean_object* v_m_505_, lean_object* v_a_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v_m_505_, v_a_506_);
lean_dec(v_a_506_);
lean_dec_ref(v_m_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(lean_object* v___x_508_, lean_object* v_declName_509_, lean_object* v_as_510_, size_t v_sz_511_, size_t v_i_512_, lean_object* v_b_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
uint8_t v___x_520_; 
v___x_520_ = lean_usize_dec_lt(v_i_512_, v_sz_511_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; lean_object* v___x_522_; 
lean_dec(v_declName_509_);
v___x_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_521_, 0, v_b_513_);
lean_ctor_set(v___x_521_, 1, v___y_514_);
v___x_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
return v___x_522_;
}
else
{
lean_object* v___x_523_; lean_object* v_modules_524_; lean_object* v___x_525_; lean_object* v_a_526_; lean_object* v___x_527_; lean_object* v_toImport_528_; lean_object* v_module_529_; lean_object* v___x_530_; uint8_t v___x_531_; lean_object* v___x_532_; 
v___x_523_ = l_Lean_Environment_header(v___x_508_);
v_modules_524_ = lean_ctor_get(v___x_523_, 3);
lean_inc_ref(v_modules_524_);
lean_dec_ref(v___x_523_);
v___x_525_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_526_ = lean_array_uget_borrowed(v_as_510_, v_i_512_);
v___x_527_ = lean_array_get(v___x_525_, v_modules_524_, v_a_526_);
lean_dec_ref(v_modules_524_);
v_toImport_528_ = lean_ctor_get(v___x_527_, 0);
lean_inc_ref(v_toImport_528_);
lean_dec(v___x_527_);
v_module_529_ = lean_ctor_get(v_toImport_528_, 0);
lean_inc(v_module_529_);
lean_dec_ref(v_toImport_528_);
v___x_530_ = lean_box(0);
v___x_531_ = 0;
lean_inc(v_declName_509_);
v___x_532_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_module_529_, v___x_531_, v_declName_509_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v_a_533_; lean_object* v_snd_534_; size_t v___x_535_; size_t v___x_536_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
lean_inc(v_a_533_);
lean_dec_ref_known(v___x_532_, 1);
v_snd_534_ = lean_ctor_get(v_a_533_, 1);
lean_inc(v_snd_534_);
lean_dec(v_a_533_);
v___x_535_ = ((size_t)1ULL);
v___x_536_ = lean_usize_add(v_i_512_, v___x_535_);
v_i_512_ = v___x_536_;
v_b_513_ = v___x_530_;
v___y_514_ = v_snd_534_;
goto _start;
}
else
{
lean_dec(v_declName_509_);
return v___x_532_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1___boxed(lean_object* v___x_538_, lean_object* v_declName_539_, lean_object* v_as_540_, lean_object* v_sz_541_, lean_object* v_i_542_, lean_object* v_b_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
size_t v_sz_boxed_550_; size_t v_i_boxed_551_; lean_object* v_res_552_; 
v_sz_boxed_550_ = lean_unbox_usize(v_sz_541_);
lean_dec(v_sz_541_);
v_i_boxed_551_ = lean_unbox_usize(v_i_542_);
lean_dec(v_i_542_);
v_res_552_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(v___x_538_, v_declName_539_, v_as_540_, v_sz_boxed_550_, v_i_boxed_551_, v_b_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec_ref(v_as_540_);
lean_dec_ref(v___x_538_);
return v_res_552_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0(void){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Std_HashMap_instInhabited___redArg();
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(lean_object* v_declName_556_, uint8_t v_isMeta_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_){
_start:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v_env_570_; lean_object* v___y_572_; lean_object* v___y_573_; lean_object* v___x_595_; 
v___x_564_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__0);
v___x_565_ = lean_st_ref_get(v___y_562_);
v_env_570_ = lean_ctor_get(v___x_565_, 0);
lean_inc_ref(v_env_570_);
lean_dec(v___x_565_);
v___x_595_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_570_, v_declName_556_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_dec_ref(v_env_570_);
lean_dec(v_declName_556_);
goto v___jp_566_;
}
else
{
lean_object* v_val_596_; lean_object* v___x_597_; lean_object* v_modules_598_; lean_object* v___x_599_; uint8_t v___x_600_; 
v_val_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_val_596_);
lean_dec_ref_known(v___x_595_, 1);
v___x_597_ = l_Lean_Environment_header(v_env_570_);
v_modules_598_ = lean_ctor_get(v___x_597_, 3);
lean_inc_ref(v_modules_598_);
lean_dec_ref(v___x_597_);
v___x_599_ = lean_array_get_size(v_modules_598_);
v___x_600_ = lean_nat_dec_lt(v_val_596_, v___x_599_);
if (v___x_600_ == 0)
{
lean_dec_ref(v_modules_598_);
lean_dec(v_val_596_);
lean_dec_ref(v_env_570_);
lean_dec(v_declName_556_);
goto v___jp_566_;
}
else
{
lean_object* v___x_601_; lean_object* v___x_602_; uint8_t v___y_604_; 
v___x_601_ = lean_array_fget(v_modules_598_, v_val_596_);
lean_dec(v_val_596_);
lean_dec_ref(v_modules_598_);
v___x_602_ = lean_st_ref_get(v___y_562_);
if (v_isMeta_557_ == 0)
{
lean_dec(v___x_602_);
v___y_604_ = v_isMeta_557_;
goto v___jp_603_;
}
else
{
lean_object* v_env_617_; uint8_t v___x_618_; 
v_env_617_ = lean_ctor_get(v___x_602_, 0);
lean_inc_ref(v_env_617_);
lean_dec(v___x_602_);
lean_inc(v_declName_556_);
v___x_618_ = l_Lean_isMarkedMeta(v_env_617_, v_declName_556_);
if (v___x_618_ == 0)
{
v___y_604_ = v_isMeta_557_;
goto v___jp_603_;
}
else
{
uint8_t v___x_619_; 
v___x_619_ = 0;
v___y_604_ = v___x_619_;
goto v___jp_603_;
}
}
v___jp_603_:
{
lean_object* v_toImport_605_; lean_object* v_module_606_; lean_object* v___x_607_; 
v_toImport_605_ = lean_ctor_get(v___x_601_, 0);
lean_inc_ref(v_toImport_605_);
lean_dec(v___x_601_);
v_module_606_ = lean_ctor_get(v_toImport_605_, 0);
lean_inc(v_module_606_);
lean_dec_ref(v_toImport_605_);
lean_inc(v_declName_556_);
v___x_607_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0(v_module_606_, v___y_604_, v_declName_556_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; lean_object* v_snd_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_a_608_);
lean_dec_ref_known(v___x_607_, 1);
v_snd_609_ = lean_ctor_get(v_a_608_, 1);
lean_inc(v_snd_609_);
lean_dec(v_a_608_);
v___x_610_ = l_Lean_indirectModUseExt;
v___x_611_ = lean_box(1);
v___x_612_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1);
lean_inc_ref(v_env_570_);
v___x_613_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_564_, v___x_610_, v_env_570_, v___x_611_, v___x_612_);
v___x_614_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v___x_613_, v_declName_556_);
lean_dec(v___x_613_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v___x_615_; 
v___x_615_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___closed__1));
v___y_572_ = v_snd_609_;
v___y_573_ = v___x_615_;
goto v___jp_571_;
}
else
{
lean_object* v_val_616_; 
v_val_616_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_val_616_);
lean_dec_ref_known(v___x_614_, 1);
v___y_572_ = v_snd_609_;
v___y_573_ = v_val_616_;
goto v___jp_571_;
}
}
else
{
lean_dec_ref(v_env_570_);
lean_dec(v_declName_556_);
return v___x_607_;
}
}
}
}
v___jp_566_:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_567_ = lean_box(0);
v___x_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
lean_ctor_set(v___x_568_, 1, v___y_558_);
v___x_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
return v___x_569_;
}
v___jp_571_:
{
lean_object* v___x_574_; size_t v_sz_575_; size_t v___x_576_; lean_object* v___x_577_; 
v___x_574_ = lean_box(0);
v_sz_575_ = lean_array_size(v___y_573_);
v___x_576_ = ((size_t)0ULL);
v___x_577_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__1(v_env_570_, v_declName_556_, v___y_573_, v_sz_575_, v___x_576_, v___x_574_, v___y_572_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
lean_dec_ref(v___y_573_);
lean_dec_ref(v_env_570_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_594_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_594_ == 0)
{
v___x_580_ = v___x_577_;
v_isShared_581_ = v_isSharedCheck_594_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_577_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_594_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v_snd_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_592_; 
v_snd_582_ = lean_ctor_get(v_a_578_, 1);
v_isSharedCheck_592_ = !lean_is_exclusive(v_a_578_);
if (v_isSharedCheck_592_ == 0)
{
lean_object* v_unused_593_; 
v_unused_593_ = lean_ctor_get(v_a_578_, 0);
lean_dec(v_unused_593_);
v___x_584_ = v_a_578_;
v_isShared_585_ = v_isSharedCheck_592_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_snd_582_);
lean_dec(v_a_578_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_592_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 0, v___x_574_);
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_574_);
lean_ctor_set(v_reuseFailAlloc_591_, 1, v_snd_582_);
v___x_587_ = v_reuseFailAlloc_591_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_589_; 
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v___x_587_);
v___x_589_ = v___x_580_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_587_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
else
{
return v___x_577_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0___boxed(lean_object* v_declName_620_, lean_object* v_isMeta_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
uint8_t v_isMeta_boxed_628_; lean_object* v_res_629_; 
v_isMeta_boxed_628_ = lean_unbox(v_isMeta_621_);
v_res_629_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(v_declName_620_, v_isMeta_boxed_628_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1(lean_object* v_e_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
lean_object* v___y_645_; lean_object* v_f_649_; uint8_t v___x_650_; 
v_f_649_ = l_Lean_Expr_getAppFn(v_e_637_);
v___x_650_ = l_Lean_Expr_isConst(v_f_649_);
if (v___x_650_ == 0)
{
lean_dec_ref(v_f_649_);
lean_dec_ref(v_e_637_);
v___y_645_ = v___y_638_;
goto v___jp_644_;
}
else
{
lean_object* v_declName_651_; lean_object* v___x_652_; lean_object* v_env_653_; uint8_t v___x_654_; 
v_declName_651_ = l_Lean_Expr_constName_x21(v_f_649_);
lean_dec_ref(v_f_649_);
v___x_652_ = lean_st_ref_get(v___y_642_);
v_env_653_ = lean_ctor_get(v___x_652_, 0);
lean_inc_ref(v_env_653_);
lean_dec(v___x_652_);
lean_inc(v_declName_651_);
v___x_654_ = l_Lean_Meta_isCoeDecl(v_env_653_, v_declName_651_);
if (v___x_654_ == 0)
{
lean_dec(v_declName_651_);
lean_dec_ref(v_e_637_);
v___y_645_ = v___y_638_;
goto v___jp_644_;
}
else
{
lean_object* v___x_655_; 
lean_inc(v_declName_651_);
lean_inc_ref(v_e_637_);
v___x_655_ = l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget(v_e_637_, v_declName_651_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; uint8_t v___x_657_; lean_object* v___x_658_; 
v_a_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_a_656_);
lean_dec_ref_known(v___x_655_, 1);
v___x_657_ = 0;
v___x_658_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0(v_a_656_, v___x_657_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v_snd_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_711_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_a_659_);
lean_dec_ref_known(v___x_658_, 1);
v_snd_660_ = lean_ctor_get(v_a_659_, 1);
v_isSharedCheck_711_ = !lean_is_exclusive(v_a_659_);
if (v_isSharedCheck_711_ == 0)
{
lean_object* v_unused_712_; 
v_unused_712_ = lean_ctor_get(v_a_659_, 0);
lean_dec(v_unused_712_);
v___x_662_ = v_a_659_;
v_isShared_663_ = v_isSharedCheck_711_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_snd_660_);
lean_dec(v_a_659_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_711_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_664_; 
lean_inc_ref(v_e_637_);
v___x_664_ = l_Lean_Meta_unfoldDefinition_x3f(v_e_637_, v___x_657_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_702_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_702_ == 0)
{
v___x_667_ = v___x_664_;
v_isShared_668_ = v_isSharedCheck_702_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_664_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_702_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
if (lean_obj_tag(v_a_665_) == 1)
{
lean_object* v_val_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_701_; 
v_val_669_ = lean_ctor_get(v_a_665_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v_a_665_);
if (v_isSharedCheck_701_ == 0)
{
v___x_671_ = v_a_665_;
v_isShared_672_ = v_isSharedCheck_701_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_val_669_);
lean_dec(v_a_665_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_701_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___y_674_; lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_685_ = ((lean_object*)(l_Lean_Meta_expandCoe___lam__1___closed__3));
v___x_686_ = lean_name_eq(v_declName_651_, v___x_685_);
lean_dec(v_declName_651_);
if (v___x_686_ == 0)
{
lean_dec_ref(v_e_637_);
v___y_674_ = v_snd_660_;
goto v___jp_673_;
}
else
{
lean_object* v_dummy_687_; lean_object* v_nargs_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; 
v_dummy_687_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1);
v_nargs_688_ = l_Lean_Expr_getAppNumArgs(v_e_637_);
lean_inc(v_nargs_688_);
v___x_689_ = lean_mk_array(v_nargs_688_, v_dummy_687_);
v___x_690_ = lean_unsigned_to_nat(1u);
v___x_691_ = lean_nat_sub(v_nargs_688_, v___x_690_);
lean_dec(v_nargs_688_);
v___x_692_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_637_, v___x_689_, v___x_691_);
v___x_693_ = lean_unsigned_to_nat(2u);
v___x_694_ = lean_array_get_size(v___x_692_);
v___x_695_ = lean_nat_dec_lt(v___x_693_, v___x_694_);
if (v___x_695_ == 0)
{
lean_dec_ref(v___x_692_);
v___y_674_ = v_snd_660_;
goto v___jp_673_;
}
else
{
lean_object* v___x_696_; lean_object* v___x_697_; uint8_t v___x_698_; 
v___x_696_ = lean_array_fget(v___x_692_, v___x_693_);
lean_dec_ref(v___x_692_);
v___x_697_ = l_Lean_Expr_getAppFn(v___x_696_);
lean_dec(v___x_696_);
v___x_698_ = l_Lean_Expr_isConst(v___x_697_);
if (v___x_698_ == 0)
{
lean_dec_ref(v___x_697_);
v___y_674_ = v_snd_660_;
goto v___jp_673_;
}
else
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = l_Lean_Expr_constName_x21(v___x_697_);
lean_dec_ref(v___x_697_);
v___x_700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
lean_ctor_set(v___x_700_, 1, v_snd_660_);
v___y_674_ = v___x_700_;
goto v___jp_673_;
}
}
}
v___jp_673_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = l_Lean_Expr_headBeta(v_val_669_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_675_);
v___x_677_ = v___x_671_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_675_);
v___x_677_ = v_reuseFailAlloc_684_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_object* v___x_679_; 
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 1, v___y_674_);
lean_ctor_set(v___x_662_, 0, v___x_677_);
v___x_679_ = v___x_662_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v___y_674_);
v___x_679_ = v_reuseFailAlloc_683_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_681_; 
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 0, v___x_679_);
v___x_681_ = v___x_667_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_679_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_667_);
lean_dec(v_a_665_);
lean_del_object(v___x_662_);
lean_dec(v_declName_651_);
lean_dec_ref(v_e_637_);
v___y_645_ = v_snd_660_;
goto v___jp_644_;
}
}
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
lean_del_object(v___x_662_);
lean_dec(v_snd_660_);
lean_dec(v_declName_651_);
lean_dec_ref(v_e_637_);
v_a_703_ = lean_ctor_get(v___x_664_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_664_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_664_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
lean_dec(v_declName_651_);
lean_dec_ref(v_e_637_);
v_a_713_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_658_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_658_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
else
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_728_; 
lean_dec(v_declName_651_);
lean_dec(v___y_638_);
lean_dec_ref(v_e_637_);
v_a_721_ = lean_ctor_get(v___x_655_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_728_ == 0)
{
v___x_723_ = v___x_655_;
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_655_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
if (v_isShared_724_ == 0)
{
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_721_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
}
v___jp_644_:
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_646_ = ((lean_object*)(l_Lean_Meta_expandCoe___lam__1___closed__0));
v___x_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
lean_ctor_set(v___x_647_, 1, v___y_645_);
v___x_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
return v___x_648_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___lam__1___boxed(lean_object* v_e_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lean_Meta_expandCoe___lam__1(v_e_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_, v___y_734_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0(lean_object* v_k_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v_b_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v___x_746_; 
lean_inc(v___y_744_);
lean_inc_ref(v___y_743_);
lean_inc(v___y_742_);
lean_inc_ref(v___y_741_);
lean_inc(v___y_738_);
v___x_746_ = lean_apply_8(v_k_737_, v_b_740_, v___y_738_, v___y_739_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, lean_box(0));
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed(lean_object* v_k_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v_b_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0(v_k_747_, v___y_748_, v___y_749_, v_b_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
lean_dec(v___y_748_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(lean_object* v_name_757_, uint8_t v_bi_758_, lean_object* v_type_759_, lean_object* v_k_760_, uint8_t v_kind_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
lean_object* v___f_769_; lean_object* v___x_770_; 
lean_inc(v___y_762_);
v___f_769_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_769_, 0, v_k_760_);
lean_closure_set(v___f_769_, 1, v___y_762_);
lean_closure_set(v___f_769_, 2, v___y_763_);
v___x_770_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_757_, v_bi_758_, v_type_759_, v___f_769_, v_kind_761_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_770_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_770_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
v_a_779_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_770_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_770_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___boxed(lean_object* v_name_787_, lean_object* v_bi_788_, lean_object* v_type_789_, lean_object* v_k_790_, lean_object* v_kind_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_){
_start:
{
uint8_t v_bi_boxed_799_; uint8_t v_kind_boxed_800_; lean_object* v_res_801_; 
v_bi_boxed_799_ = lean_unbox(v_bi_788_);
v_kind_boxed_800_ = lean_unbox(v_kind_791_);
v_res_801_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_name_787_, v_bi_boxed_799_, v_type_789_, v_k_790_, v_kind_boxed_800_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___y_792_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2(lean_object* v___x_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_802_);
lean_ctor_set(v___x_809_, 1, v___y_803_);
v___x_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2___boxed(lean_object* v___x_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2(v___x_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(lean_object* v_name_819_, lean_object* v_type_820_, lean_object* v_val_821_, lean_object* v_k_822_, uint8_t v_nondep_823_, uint8_t v_kind_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
lean_object* v___f_832_; lean_object* v___x_833_; 
lean_inc(v___y_825_);
v___f_832_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_832_, 0, v_k_822_);
lean_closure_set(v___f_832_, 1, v___y_825_);
lean_closure_set(v___f_832_, 2, v___y_826_);
v___x_833_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_819_, v_type_820_, v_val_821_, v___f_832_, v_nondep_823_, v_kind_824_, v___y_827_, v___y_828_, v___y_829_, v___y_830_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
v_a_834_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_833_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_833_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
else
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
v_a_842_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_833_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_833_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg___boxed(lean_object* v_name_850_, lean_object* v_type_851_, lean_object* v_val_852_, lean_object* v_k_853_, lean_object* v_nondep_854_, lean_object* v_kind_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_){
_start:
{
uint8_t v_nondep_boxed_863_; uint8_t v_kind_boxed_864_; lean_object* v_res_865_; 
v_nondep_boxed_863_ = lean_unbox(v_nondep_854_);
v_kind_boxed_864_ = lean_unbox(v_kind_855_);
v_res_865_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(v_name_850_, v_type_851_, v_val_852_, v_k_853_, v_nondep_boxed_863_, v_kind_boxed_864_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
lean_dec(v___y_861_);
lean_dec_ref(v___y_860_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
lean_dec(v___y_856_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(lean_object* v_a_866_, lean_object* v_b_867_, lean_object* v_x_868_){
_start:
{
if (lean_obj_tag(v_x_868_) == 0)
{
lean_dec(v_b_867_);
lean_dec_ref(v_a_866_);
return v_x_868_;
}
else
{
lean_object* v_key_869_; lean_object* v_value_870_; lean_object* v_tail_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_883_; 
v_key_869_ = lean_ctor_get(v_x_868_, 0);
v_value_870_ = lean_ctor_get(v_x_868_, 1);
v_tail_871_ = lean_ctor_get(v_x_868_, 2);
v_isSharedCheck_883_ = !lean_is_exclusive(v_x_868_);
if (v_isSharedCheck_883_ == 0)
{
v___x_873_ = v_x_868_;
v_isShared_874_ = v_isSharedCheck_883_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_tail_871_);
lean_inc(v_value_870_);
lean_inc(v_key_869_);
lean_dec(v_x_868_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_883_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
uint8_t v___x_875_; 
v___x_875_ = l_Lean_ExprStructEq_beq(v_key_869_, v_a_866_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; lean_object* v___x_878_; 
v___x_876_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(v_a_866_, v_b_867_, v_tail_871_);
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 2, v___x_876_);
v___x_878_ = v___x_873_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_key_869_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v_value_870_);
lean_ctor_set(v_reuseFailAlloc_879_, 2, v___x_876_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
else
{
lean_object* v___x_881_; 
lean_dec(v_value_870_);
lean_dec(v_key_869_);
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 1, v_b_867_);
lean_ctor_set(v___x_873_, 0, v_a_866_);
v___x_881_ = v___x_873_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_866_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v_b_867_);
lean_ctor_set(v_reuseFailAlloc_882_, 2, v_tail_871_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(lean_object* v_a_884_, lean_object* v_x_885_){
_start:
{
if (lean_obj_tag(v_x_885_) == 0)
{
uint8_t v___x_886_; 
v___x_886_ = 0;
return v___x_886_;
}
else
{
lean_object* v_key_887_; lean_object* v_tail_888_; uint8_t v___x_889_; 
v_key_887_ = lean_ctor_get(v_x_885_, 0);
v_tail_888_ = lean_ctor_get(v_x_885_, 2);
v___x_889_ = l_Lean_ExprStructEq_beq(v_key_887_, v_a_884_);
if (v___x_889_ == 0)
{
v_x_885_ = v_tail_888_;
goto _start;
}
else
{
return v___x_889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg___boxed(lean_object* v_a_891_, lean_object* v_x_892_){
_start:
{
uint8_t v_res_893_; lean_object* v_r_894_; 
v_res_893_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_a_891_, v_x_892_);
lean_dec(v_x_892_);
lean_dec_ref(v_a_891_);
v_r_894_ = lean_box(v_res_893_);
return v_r_894_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28___redArg(lean_object* v_x_895_, lean_object* v_x_896_){
_start:
{
if (lean_obj_tag(v_x_896_) == 0)
{
return v_x_895_;
}
else
{
lean_object* v_key_897_; lean_object* v_value_898_; lean_object* v_tail_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_922_; 
v_key_897_ = lean_ctor_get(v_x_896_, 0);
v_value_898_ = lean_ctor_get(v_x_896_, 1);
v_tail_899_ = lean_ctor_get(v_x_896_, 2);
v_isSharedCheck_922_ = !lean_is_exclusive(v_x_896_);
if (v_isSharedCheck_922_ == 0)
{
v___x_901_ = v_x_896_;
v_isShared_902_ = v_isSharedCheck_922_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_tail_899_);
lean_inc(v_value_898_);
lean_inc(v_key_897_);
lean_dec(v_x_896_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_922_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_903_; uint64_t v___x_904_; uint64_t v___x_905_; uint64_t v___x_906_; uint64_t v_fold_907_; uint64_t v___x_908_; uint64_t v___x_909_; uint64_t v___x_910_; size_t v___x_911_; size_t v___x_912_; size_t v___x_913_; size_t v___x_914_; size_t v___x_915_; lean_object* v___x_916_; lean_object* v___x_918_; 
v___x_903_ = lean_array_get_size(v_x_895_);
v___x_904_ = l_Lean_ExprStructEq_hash(v_key_897_);
v___x_905_ = 32ULL;
v___x_906_ = lean_uint64_shift_right(v___x_904_, v___x_905_);
v_fold_907_ = lean_uint64_xor(v___x_904_, v___x_906_);
v___x_908_ = 16ULL;
v___x_909_ = lean_uint64_shift_right(v_fold_907_, v___x_908_);
v___x_910_ = lean_uint64_xor(v_fold_907_, v___x_909_);
v___x_911_ = lean_uint64_to_usize(v___x_910_);
v___x_912_ = lean_usize_of_nat(v___x_903_);
v___x_913_ = ((size_t)1ULL);
v___x_914_ = lean_usize_sub(v___x_912_, v___x_913_);
v___x_915_ = lean_usize_land(v___x_911_, v___x_914_);
v___x_916_ = lean_array_uget_borrowed(v_x_895_, v___x_915_);
lean_inc(v___x_916_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 2, v___x_916_);
v___x_918_ = v___x_901_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_key_897_);
lean_ctor_set(v_reuseFailAlloc_921_, 1, v_value_898_);
lean_ctor_set(v_reuseFailAlloc_921_, 2, v___x_916_);
v___x_918_ = v_reuseFailAlloc_921_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
lean_object* v___x_919_; 
v___x_919_ = lean_array_uset(v_x_895_, v___x_915_, v___x_918_);
v_x_895_ = v___x_919_;
v_x_896_ = v_tail_899_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27___redArg(lean_object* v_i_923_, lean_object* v_source_924_, lean_object* v_target_925_){
_start:
{
lean_object* v___x_926_; uint8_t v___x_927_; 
v___x_926_ = lean_array_get_size(v_source_924_);
v___x_927_ = lean_nat_dec_lt(v_i_923_, v___x_926_);
if (v___x_927_ == 0)
{
lean_dec_ref(v_source_924_);
lean_dec(v_i_923_);
return v_target_925_;
}
else
{
lean_object* v_es_928_; lean_object* v___x_929_; lean_object* v_source_930_; lean_object* v_target_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v_es_928_ = lean_array_fget(v_source_924_, v_i_923_);
v___x_929_ = lean_box(0);
v_source_930_ = lean_array_fset(v_source_924_, v_i_923_, v___x_929_);
v_target_931_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28___redArg(v_target_925_, v_es_928_);
v___x_932_ = lean_unsigned_to_nat(1u);
v___x_933_ = lean_nat_add(v_i_923_, v___x_932_);
lean_dec(v_i_923_);
v_i_923_ = v___x_933_;
v_source_924_ = v_source_930_;
v_target_925_ = v_target_931_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(lean_object* v_data_935_){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v_nbuckets_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_936_ = lean_array_get_size(v_data_935_);
v___x_937_ = lean_unsigned_to_nat(2u);
v_nbuckets_938_ = lean_nat_mul(v___x_936_, v___x_937_);
v___x_939_ = lean_unsigned_to_nat(0u);
v___x_940_ = lean_box(0);
v___x_941_ = lean_mk_array(v_nbuckets_938_, v___x_940_);
v___x_942_ = lean_array_propagate_mark(v_data_935_, v___x_941_);
v___x_943_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27___redArg(v___x_939_, v_data_935_, v___x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(lean_object* v_m_944_, lean_object* v_a_945_, lean_object* v_b_946_){
_start:
{
lean_object* v_size_947_; lean_object* v_buckets_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_991_; 
v_size_947_ = lean_ctor_get(v_m_944_, 0);
v_buckets_948_ = lean_ctor_get(v_m_944_, 1);
v_isSharedCheck_991_ = !lean_is_exclusive(v_m_944_);
if (v_isSharedCheck_991_ == 0)
{
v___x_950_ = v_m_944_;
v_isShared_951_ = v_isSharedCheck_991_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_buckets_948_);
lean_inc(v_size_947_);
lean_dec(v_m_944_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_991_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_952_; uint64_t v___x_953_; uint64_t v___x_954_; uint64_t v___x_955_; uint64_t v_fold_956_; uint64_t v___x_957_; uint64_t v___x_958_; uint64_t v___x_959_; size_t v___x_960_; size_t v___x_961_; size_t v___x_962_; size_t v___x_963_; size_t v___x_964_; lean_object* v_bkt_965_; uint8_t v___x_966_; 
v___x_952_ = lean_array_get_size(v_buckets_948_);
v___x_953_ = l_Lean_ExprStructEq_hash(v_a_945_);
v___x_954_ = 32ULL;
v___x_955_ = lean_uint64_shift_right(v___x_953_, v___x_954_);
v_fold_956_ = lean_uint64_xor(v___x_953_, v___x_955_);
v___x_957_ = 16ULL;
v___x_958_ = lean_uint64_shift_right(v_fold_956_, v___x_957_);
v___x_959_ = lean_uint64_xor(v_fold_956_, v___x_958_);
v___x_960_ = lean_uint64_to_usize(v___x_959_);
v___x_961_ = lean_usize_of_nat(v___x_952_);
v___x_962_ = ((size_t)1ULL);
v___x_963_ = lean_usize_sub(v___x_961_, v___x_962_);
v___x_964_ = lean_usize_land(v___x_960_, v___x_963_);
v_bkt_965_ = lean_array_uget_borrowed(v_buckets_948_, v___x_964_);
v___x_966_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_a_945_, v_bkt_965_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; lean_object* v_size_x27_968_; lean_object* v___x_969_; lean_object* v_buckets_x27_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; uint8_t v___x_976_; 
v___x_967_ = lean_unsigned_to_nat(1u);
v_size_x27_968_ = lean_nat_add(v_size_947_, v___x_967_);
lean_dec(v_size_947_);
lean_inc(v_bkt_965_);
v___x_969_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_969_, 0, v_a_945_);
lean_ctor_set(v___x_969_, 1, v_b_946_);
lean_ctor_set(v___x_969_, 2, v_bkt_965_);
v_buckets_x27_970_ = lean_array_uset(v_buckets_948_, v___x_964_, v___x_969_);
v___x_971_ = lean_unsigned_to_nat(4u);
v___x_972_ = lean_nat_mul(v_size_x27_968_, v___x_971_);
v___x_973_ = lean_unsigned_to_nat(3u);
v___x_974_ = lean_nat_div(v___x_972_, v___x_973_);
lean_dec(v___x_972_);
v___x_975_ = lean_array_get_size(v_buckets_x27_970_);
v___x_976_ = lean_nat_dec_le(v___x_974_, v___x_975_);
lean_dec(v___x_974_);
if (v___x_976_ == 0)
{
lean_object* v_val_977_; lean_object* v___x_979_; 
v_val_977_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(v_buckets_x27_970_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 1, v_val_977_);
lean_ctor_set(v___x_950_, 0, v_size_x27_968_);
v___x_979_ = v___x_950_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_size_x27_968_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v_val_977_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
else
{
lean_object* v___x_982_; 
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 1, v_buckets_x27_970_);
lean_ctor_set(v___x_950_, 0, v_size_x27_968_);
v___x_982_ = v___x_950_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_size_x27_968_);
lean_ctor_set(v_reuseFailAlloc_983_, 1, v_buckets_x27_970_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
else
{
lean_object* v___x_984_; lean_object* v_buckets_x27_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_989_; 
lean_inc(v_bkt_965_);
v___x_984_ = lean_box(0);
v_buckets_x27_985_ = lean_array_uset(v_buckets_948_, v___x_964_, v___x_984_);
v___x_986_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(v_a_945_, v_b_946_, v_bkt_965_);
v___x_987_ = lean_array_uset(v_buckets_x27_985_, v___x_964_, v___x_986_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 1, v___x_987_);
v___x_989_ = v___x_950_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_size_947_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v___x_987_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(lean_object* v_a_992_, lean_object* v_e_993_, lean_object* v_fst_994_){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_996_ = lean_st_ref_take(v_a_992_);
v___x_997_ = lean_box(0);
v___x_998_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v___x_996_, v_e_993_, v_fst_994_);
v___x_999_ = lean_st_ref_put(v_a_992_, v___x_998_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed(lean_object* v_a_1000_, lean_object* v_e_1001_, lean_object* v_fst_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2(v_a_1000_, v_e_1001_, v_fst_1002_);
lean_dec(v_a_1000_);
return v_res_1004_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = l_Lean_maxRecDepthErrorMessage;
v___x_1011_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
return v___x_1011_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1012_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__3);
v___x_1013_ = l_Lean_MessageData_ofFormat(v___x_1012_);
return v___x_1013_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5(void){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1014_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__4);
v___x_1015_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__2));
v___x_1016_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
lean_ctor_set(v___x_1016_, 1, v___x_1014_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(lean_object* v_ref_1017_){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1019_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___closed__5);
v___x_1020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1020_, 0, v_ref_1017_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1020_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg___boxed(lean_object* v_ref_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(v_ref_1022_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(lean_object* v_x_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v___y_1034_; lean_object* v_toCold_1051_; lean_object* v_currRecDepth_1052_; lean_object* v_ref_1053_; uint8_t v_diag_1054_; uint8_t v_suppressElabErrors_1055_; lean_object* v_maxRecDepth_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v_toCold_1051_ = lean_ctor_get(v___y_1030_, 0);
v_currRecDepth_1052_ = lean_ctor_get(v___y_1030_, 1);
v_ref_1053_ = lean_ctor_get(v___y_1030_, 2);
v_diag_1054_ = lean_ctor_get_uint8(v___y_1030_, sizeof(void*)*3);
v_suppressElabErrors_1055_ = lean_ctor_get_uint8(v___y_1030_, sizeof(void*)*3 + 1);
v_maxRecDepth_1061_ = lean_ctor_get(v_toCold_1051_, 3);
v___x_1062_ = lean_unsigned_to_nat(0u);
v___x_1063_ = lean_nat_dec_eq(v_maxRecDepth_1061_, v___x_1062_);
if (v___x_1063_ == 0)
{
uint8_t v___x_1064_; 
v___x_1064_ = lean_nat_dec_eq(v_currRecDepth_1052_, v_maxRecDepth_1061_);
if (v___x_1064_ == 0)
{
goto v___jp_1056_;
}
else
{
lean_object* v___x_1065_; 
lean_dec(v___y_1027_);
lean_dec_ref(v_x_1025_);
lean_inc(v_ref_1053_);
v___x_1065_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(v_ref_1053_);
v___y_1034_ = v___x_1065_;
goto v___jp_1033_;
}
}
else
{
goto v___jp_1056_;
}
v___jp_1033_:
{
if (lean_obj_tag(v___y_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
v_a_1035_ = lean_ctor_get(v___y_1034_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___y_1034_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___y_1034_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___y_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
v_a_1043_ = lean_ctor_get(v___y_1034_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___y_1034_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___y_1034_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___y_1034_);
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
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
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
v___jp_1056_:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1057_ = lean_unsigned_to_nat(1u);
v___x_1058_ = lean_nat_add(v_currRecDepth_1052_, v___x_1057_);
lean_inc(v_ref_1053_);
lean_inc_ref(v_toCold_1051_);
v___x_1059_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1059_, 0, v_toCold_1051_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
lean_ctor_set(v___x_1059_, 2, v_ref_1053_);
lean_ctor_set_uint8(v___x_1059_, sizeof(void*)*3, v_diag_1054_);
lean_ctor_set_uint8(v___x_1059_, sizeof(void*)*3 + 1, v_suppressElabErrors_1055_);
lean_inc(v___y_1031_);
lean_inc(v___y_1029_);
lean_inc_ref(v___y_1028_);
lean_inc(v___y_1026_);
v___x_1060_ = lean_apply_7(v_x_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___x_1059_, v___y_1031_, lean_box(0));
v___y_1034_ = v___x_1060_;
goto v___jp_1033_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg___boxed(lean_object* v_x_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(v_x_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1067_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(lean_object* v_a_1075_, lean_object* v_x_1076_){
_start:
{
if (lean_obj_tag(v_x_1076_) == 0)
{
lean_object* v___x_1077_; 
v___x_1077_ = lean_box(0);
return v___x_1077_;
}
else
{
lean_object* v_key_1078_; lean_object* v_value_1079_; lean_object* v_tail_1080_; uint8_t v___x_1081_; 
v_key_1078_ = lean_ctor_get(v_x_1076_, 0);
v_value_1079_ = lean_ctor_get(v_x_1076_, 1);
v_tail_1080_ = lean_ctor_get(v_x_1076_, 2);
v___x_1081_ = l_Lean_ExprStructEq_beq(v_key_1078_, v_a_1075_);
if (v___x_1081_ == 0)
{
v_x_1076_ = v_tail_1080_;
goto _start;
}
else
{
lean_object* v___x_1083_; 
lean_inc(v_value_1079_);
v___x_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1083_, 0, v_value_1079_);
return v___x_1083_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg___boxed(lean_object* v_a_1084_, lean_object* v_x_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(v_a_1084_, v_x_1085_);
lean_dec(v_x_1085_);
lean_dec_ref(v_a_1084_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(lean_object* v_m_1087_, lean_object* v_a_1088_){
_start:
{
lean_object* v_buckets_1089_; lean_object* v___x_1090_; uint64_t v___x_1091_; uint64_t v___x_1092_; uint64_t v___x_1093_; uint64_t v_fold_1094_; uint64_t v___x_1095_; uint64_t v___x_1096_; uint64_t v___x_1097_; size_t v___x_1098_; size_t v___x_1099_; size_t v___x_1100_; size_t v___x_1101_; size_t v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v_buckets_1089_ = lean_ctor_get(v_m_1087_, 1);
v___x_1090_ = lean_array_get_size(v_buckets_1089_);
v___x_1091_ = l_Lean_ExprStructEq_hash(v_a_1088_);
v___x_1092_ = 32ULL;
v___x_1093_ = lean_uint64_shift_right(v___x_1091_, v___x_1092_);
v_fold_1094_ = lean_uint64_xor(v___x_1091_, v___x_1093_);
v___x_1095_ = 16ULL;
v___x_1096_ = lean_uint64_shift_right(v_fold_1094_, v___x_1095_);
v___x_1097_ = lean_uint64_xor(v_fold_1094_, v___x_1096_);
v___x_1098_ = lean_uint64_to_usize(v___x_1097_);
v___x_1099_ = lean_usize_of_nat(v___x_1090_);
v___x_1100_ = ((size_t)1ULL);
v___x_1101_ = lean_usize_sub(v___x_1099_, v___x_1100_);
v___x_1102_ = lean_usize_land(v___x_1098_, v___x_1101_);
v___x_1103_ = lean_array_uget_borrowed(v_buckets_1089_, v___x_1102_);
v___x_1104_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(v_a_1088_, v___x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg___boxed(lean_object* v_m_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_m_1105_, v_a_1106_);
lean_dec_ref(v_a_1106_);
lean_dec_ref(v_m_1105_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_object* v_00_u03b1_1108_, lean_object* v_x_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1116_ = lean_apply_1(v_x_1109_, lean_box(0));
v___x_1117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1116_);
lean_ctor_set(v___x_1117_, 1, v___y_1110_);
v___x_1118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0___boxed(lean_object* v_00_u03b1_1119_, lean_object* v_x_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(v_00_u03b1_1119_, v_x_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0___boxed(lean_object* v_fvars_1128_, lean_object* v_pre_1129_, lean_object* v_post_1130_, lean_object* v_usedLetOnly_1131_, lean_object* v_skipConstInApp_1132_, lean_object* v_skipInstances_1133_, lean_object* v_body_1134_, lean_object* v_x_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
uint8_t v_usedLetOnly_boxed_1143_; uint8_t v_skipConstInApp_boxed_1144_; uint8_t v_skipInstances_boxed_1145_; lean_object* v_res_1146_; 
v_usedLetOnly_boxed_1143_ = lean_unbox(v_usedLetOnly_1131_);
v_skipConstInApp_boxed_1144_ = lean_unbox(v_skipConstInApp_1132_);
v_skipInstances_boxed_1145_ = lean_unbox(v_skipInstances_1133_);
v_res_1146_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0(v_fvars_1128_, v_pre_1129_, v_post_1130_, v_usedLetOnly_boxed_1143_, v_skipConstInApp_boxed_1144_, v_skipInstances_boxed_1145_, v_body_1134_, v_x_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1136_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(lean_object* v_fvars_1150_, lean_object* v_pre_1151_, lean_object* v_post_1152_, uint8_t v_usedLetOnly_1153_, uint8_t v_skipConstInApp_1154_, uint8_t v_skipInstances_1155_, lean_object* v_body_1156_, lean_object* v_x_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = lean_array_push(v_fvars_1150_, v_x_1157_);
v___x_1166_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1151_, v_post_1152_, v_usedLetOnly_1153_, v_skipConstInApp_1154_, v_skipInstances_1155_, v___x_1165_, v_body_1156_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed(lean_object* v_fvars_1167_, lean_object* v_pre_1168_, lean_object* v_post_1169_, lean_object* v_usedLetOnly_1170_, lean_object* v_skipConstInApp_1171_, lean_object* v_skipInstances_1172_, lean_object* v_body_1173_, lean_object* v_x_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
uint8_t v_usedLetOnly_boxed_1182_; uint8_t v_skipConstInApp_boxed_1183_; uint8_t v_skipInstances_boxed_1184_; lean_object* v_res_1185_; 
v_usedLetOnly_boxed_1182_ = lean_unbox(v_usedLetOnly_1170_);
v_skipConstInApp_boxed_1183_ = lean_unbox(v_skipConstInApp_1171_);
v_skipInstances_boxed_1184_ = lean_unbox(v_skipInstances_1172_);
v_res_1185_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0(v_fvars_1167_, v_pre_1168_, v_post_1169_, v_usedLetOnly_boxed_1182_, v_skipConstInApp_boxed_1183_, v_skipInstances_boxed_1184_, v_body_1173_, v_x_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1175_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(lean_object* v_pre_1186_, lean_object* v_post_1187_, uint8_t v_usedLetOnly_1188_, uint8_t v_skipConstInApp_1189_, uint8_t v_skipInstances_1190_, lean_object* v_e_1191_, lean_object* v_a_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v___x_1199_; 
lean_inc_ref(v_post_1187_);
lean_inc(v___y_1197_);
lean_inc_ref(v___y_1196_);
lean_inc(v___y_1195_);
lean_inc_ref(v___y_1194_);
lean_inc_ref(v_e_1191_);
v___x_1199_ = lean_apply_7(v_post_1187_, v_e_1191_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, lean_box(0));
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1231_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1202_ = v___x_1199_;
v_isShared_1203_ = v_isSharedCheck_1231_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1199_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1231_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v_fst_1204_; lean_object* v_snd_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1230_; 
v_fst_1204_ = lean_ctor_get(v_a_1200_, 0);
v_snd_1205_ = lean_ctor_get(v_a_1200_, 1);
v_isSharedCheck_1230_ = !lean_is_exclusive(v_a_1200_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1207_ = v_a_1200_;
v_isShared_1208_ = v_isSharedCheck_1230_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_snd_1205_);
lean_inc(v_fst_1204_);
lean_dec(v_a_1200_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1230_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___y_1210_; 
switch(lean_obj_tag(v_fst_1204_))
{
case 0:
{
lean_object* v_e_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1225_; 
lean_del_object(v___x_1207_);
lean_del_object(v___x_1202_);
lean_dec_ref(v_e_1191_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1186_);
v_e_1217_ = lean_ctor_get(v_fst_1204_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v_fst_1204_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1219_ = v_fst_1204_;
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_e_1217_);
lean_dec(v_fst_1204_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1221_, 0, v_e_1217_);
lean_ctor_set(v___x_1221_, 1, v_snd_1205_);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v___x_1221_);
v___x_1223_ = v___x_1219_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1221_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
case 1:
{
lean_object* v_e_1226_; lean_object* v___x_1227_; 
lean_del_object(v___x_1207_);
lean_del_object(v___x_1202_);
lean_dec_ref(v_e_1191_);
v_e_1226_ = lean_ctor_get(v_fst_1204_, 0);
lean_inc_ref(v_e_1226_);
lean_dec_ref_known(v_fst_1204_, 1);
v___x_1227_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1186_, v_post_1187_, v_usedLetOnly_1188_, v_skipConstInApp_1189_, v_skipInstances_1190_, v_e_1226_, v_a_1192_, v_snd_1205_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
return v___x_1227_;
}
default: 
{
lean_object* v_e_x3f_1228_; 
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1186_);
v_e_x3f_1228_ = lean_ctor_get(v_fst_1204_, 0);
lean_inc(v_e_x3f_1228_);
lean_dec_ref_known(v_fst_1204_, 1);
if (lean_obj_tag(v_e_x3f_1228_) == 0)
{
v___y_1210_ = v_e_1191_;
goto v___jp_1209_;
}
else
{
lean_object* v_val_1229_; 
lean_dec_ref(v_e_1191_);
v_val_1229_ = lean_ctor_get(v_e_x3f_1228_, 0);
lean_inc(v_val_1229_);
lean_dec_ref_known(v_e_x3f_1228_, 1);
v___y_1210_ = v_val_1229_;
goto v___jp_1209_;
}
}
}
v___jp_1209_:
{
lean_object* v___x_1212_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v___y_1210_);
v___x_1212_ = v___x_1207_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v___y_1210_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v_snd_1205_);
v___x_1212_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
lean_object* v___x_1214_; 
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1212_);
v___x_1214_ = v___x_1202_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1212_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
}
}
else
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
lean_dec_ref(v_e_1191_);
lean_dec_ref(v_post_1187_);
lean_dec_ref(v_pre_1186_);
v_a_1232_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1199_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1199_);
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
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1232_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(lean_object* v_pre_1240_, lean_object* v_post_1241_, uint8_t v_usedLetOnly_1242_, uint8_t v_skipConstInApp_1243_, uint8_t v_skipInstances_1244_, lean_object* v_fvars_1245_, lean_object* v_e_1246_, lean_object* v_a_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
if (lean_obj_tag(v_e_1246_) == 6)
{
lean_object* v_binderName_1254_; lean_object* v_binderType_1255_; lean_object* v_body_1256_; uint8_t v_binderInfo_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___f_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v_binderName_1254_ = lean_ctor_get(v_e_1246_, 0);
lean_inc(v_binderName_1254_);
v_binderType_1255_ = lean_ctor_get(v_e_1246_, 1);
lean_inc_ref(v_binderType_1255_);
v_body_1256_ = lean_ctor_get(v_e_1246_, 2);
lean_inc_ref(v_body_1256_);
v_binderInfo_1257_ = lean_ctor_get_uint8(v_e_1246_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1246_, 3);
v___x_1258_ = lean_box(v_usedLetOnly_1242_);
v___x_1259_ = lean_box(v_skipConstInApp_1243_);
v___x_1260_ = lean_box(v_skipInstances_1244_);
lean_inc_ref(v_post_1241_);
lean_inc_ref(v_pre_1240_);
lean_inc_ref(v_fvars_1245_);
v___f_1261_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1261_, 0, v_fvars_1245_);
lean_closure_set(v___f_1261_, 1, v_pre_1240_);
lean_closure_set(v___f_1261_, 2, v_post_1241_);
lean_closure_set(v___f_1261_, 3, v___x_1258_);
lean_closure_set(v___f_1261_, 4, v___x_1259_);
lean_closure_set(v___f_1261_, 5, v___x_1260_);
lean_closure_set(v___f_1261_, 6, v_body_1256_);
v___x_1262_ = lean_expr_instantiate_rev(v_binderType_1255_, v_fvars_1245_);
lean_dec_ref(v_fvars_1245_);
lean_dec_ref(v_binderType_1255_);
v___x_1263_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1240_, v_post_1241_, v_usedLetOnly_1242_, v_skipConstInApp_1243_, v_skipInstances_1244_, v___x_1262_, v_a_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v_fst_1265_; lean_object* v_snd_1266_; uint8_t v___x_1267_; lean_object* v___x_1268_; 
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
lean_inc(v_a_1264_);
lean_dec_ref_known(v___x_1263_, 1);
v_fst_1265_ = lean_ctor_get(v_a_1264_, 0);
lean_inc(v_fst_1265_);
v_snd_1266_ = lean_ctor_get(v_a_1264_, 1);
lean_inc(v_snd_1266_);
lean_dec(v_a_1264_);
v___x_1267_ = 0;
v___x_1268_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_binderName_1254_, v_binderInfo_1257_, v_fst_1265_, v___f_1261_, v___x_1267_, v_a_1247_, v_snd_1266_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
return v___x_1268_;
}
else
{
lean_dec_ref(v___f_1261_);
lean_dec(v_binderName_1254_);
return v___x_1263_;
}
}
else
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = lean_expr_instantiate_rev(v_e_1246_, v_fvars_1245_);
lean_dec_ref(v_e_1246_);
lean_inc_ref(v_post_1241_);
lean_inc_ref(v_pre_1240_);
v___x_1270_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1240_, v_post_1241_, v_usedLetOnly_1242_, v_skipConstInApp_1243_, v_skipInstances_1244_, v___x_1269_, v_a_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1270_) == 0)
{
lean_object* v_a_1271_; lean_object* v_fst_1272_; lean_object* v_snd_1273_; uint8_t v___x_1274_; uint8_t v___x_1275_; uint8_t v___x_1276_; lean_object* v___x_1277_; 
v_a_1271_ = lean_ctor_get(v___x_1270_, 0);
lean_inc(v_a_1271_);
lean_dec_ref_known(v___x_1270_, 1);
v_fst_1272_ = lean_ctor_get(v_a_1271_, 0);
lean_inc(v_fst_1272_);
v_snd_1273_ = lean_ctor_get(v_a_1271_, 1);
lean_inc(v_snd_1273_);
lean_dec(v_a_1271_);
v___x_1274_ = 0;
v___x_1275_ = 1;
v___x_1276_ = 1;
v___x_1277_ = l_Lean_Meta_mkLambdaFVars(v_fvars_1245_, v_fst_1272_, v___x_1274_, v_usedLetOnly_1242_, v___x_1274_, v___x_1275_, v___x_1276_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v_a_1278_; lean_object* v___x_1279_; 
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_a_1278_);
lean_dec_ref_known(v___x_1277_, 1);
v___x_1279_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1240_, v_post_1241_, v_usedLetOnly_1242_, v_skipConstInApp_1243_, v_skipInstances_1244_, v_a_1278_, v_a_1247_, v_snd_1273_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
return v___x_1279_;
}
else
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1287_; 
lean_dec(v_snd_1273_);
lean_dec_ref(v_post_1241_);
lean_dec_ref(v_pre_1240_);
v_a_1280_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1282_ = v___x_1277_;
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v___x_1277_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1283_ == 0)
{
v___x_1285_ = v___x_1282_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_a_1280_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1245_);
lean_dec_ref(v_post_1241_);
lean_dec_ref(v_pre_1240_);
return v___x_1270_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(lean_object* v_fvars_1288_, lean_object* v_pre_1289_, lean_object* v_post_1290_, uint8_t v_usedLetOnly_1291_, uint8_t v_skipConstInApp_1292_, uint8_t v_skipInstances_1293_, lean_object* v_body_1294_, lean_object* v_x_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = lean_array_push(v_fvars_1288_, v_x_1295_);
v___x_1304_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1289_, v_post_1290_, v_usedLetOnly_1291_, v_skipConstInApp_1292_, v_skipInstances_1293_, v___x_1303_, v_body_1294_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed(lean_object* v_fvars_1305_, lean_object* v_pre_1306_, lean_object* v_post_1307_, lean_object* v_usedLetOnly_1308_, lean_object* v_skipConstInApp_1309_, lean_object* v_skipInstances_1310_, lean_object* v_body_1311_, lean_object* v_x_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
uint8_t v_usedLetOnly_boxed_1320_; uint8_t v_skipConstInApp_boxed_1321_; uint8_t v_skipInstances_boxed_1322_; lean_object* v_res_1323_; 
v_usedLetOnly_boxed_1320_ = lean_unbox(v_usedLetOnly_1308_);
v_skipConstInApp_boxed_1321_ = lean_unbox(v_skipConstInApp_1309_);
v_skipInstances_boxed_1322_ = lean_unbox(v_skipInstances_1310_);
v_res_1323_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0(v_fvars_1305_, v_pre_1306_, v_post_1307_, v_usedLetOnly_boxed_1320_, v_skipConstInApp_boxed_1321_, v_skipInstances_boxed_1322_, v_body_1311_, v_x_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1313_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(lean_object* v_pre_1324_, lean_object* v_post_1325_, uint8_t v_usedLetOnly_1326_, uint8_t v_skipConstInApp_1327_, uint8_t v_skipInstances_1328_, lean_object* v_fvars_1329_, lean_object* v_e_1330_, lean_object* v_a_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_){
_start:
{
if (lean_obj_tag(v_e_1330_) == 8)
{
lean_object* v_declName_1338_; lean_object* v_type_1339_; lean_object* v_value_1340_; lean_object* v_body_1341_; uint8_t v_nondep_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___f_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v_declName_1338_ = lean_ctor_get(v_e_1330_, 0);
lean_inc(v_declName_1338_);
v_type_1339_ = lean_ctor_get(v_e_1330_, 1);
lean_inc_ref(v_type_1339_);
v_value_1340_ = lean_ctor_get(v_e_1330_, 2);
lean_inc_ref(v_value_1340_);
v_body_1341_ = lean_ctor_get(v_e_1330_, 3);
lean_inc_ref(v_body_1341_);
v_nondep_1342_ = lean_ctor_get_uint8(v_e_1330_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1330_, 4);
v___x_1343_ = lean_box(v_usedLetOnly_1326_);
v___x_1344_ = lean_box(v_skipConstInApp_1327_);
v___x_1345_ = lean_box(v_skipInstances_1328_);
lean_inc_ref_n(v_post_1325_, 2);
lean_inc_ref_n(v_pre_1324_, 2);
lean_inc_ref(v_fvars_1329_);
v___f_1346_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1346_, 0, v_fvars_1329_);
lean_closure_set(v___f_1346_, 1, v_pre_1324_);
lean_closure_set(v___f_1346_, 2, v_post_1325_);
lean_closure_set(v___f_1346_, 3, v___x_1343_);
lean_closure_set(v___f_1346_, 4, v___x_1344_);
lean_closure_set(v___f_1346_, 5, v___x_1345_);
lean_closure_set(v___f_1346_, 6, v_body_1341_);
v___x_1347_ = lean_expr_instantiate_rev(v_type_1339_, v_fvars_1329_);
lean_dec_ref(v_type_1339_);
v___x_1348_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1324_, v_post_1325_, v_usedLetOnly_1326_, v_skipConstInApp_1327_, v_skipInstances_1328_, v___x_1347_, v_a_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v_fst_1350_; lean_object* v_snd_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref_known(v___x_1348_, 1);
v_fst_1350_ = lean_ctor_get(v_a_1349_, 0);
lean_inc(v_fst_1350_);
v_snd_1351_ = lean_ctor_get(v_a_1349_, 1);
lean_inc(v_snd_1351_);
lean_dec(v_a_1349_);
v___x_1352_ = lean_expr_instantiate_rev(v_value_1340_, v_fvars_1329_);
lean_dec_ref(v_fvars_1329_);
lean_dec_ref(v_value_1340_);
v___x_1353_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1324_, v_post_1325_, v_usedLetOnly_1326_, v_skipConstInApp_1327_, v_skipInstances_1328_, v___x_1352_, v_a_1331_, v_snd_1351_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; lean_object* v_fst_1355_; lean_object* v_snd_1356_; uint8_t v___x_1357_; lean_object* v___x_1358_; 
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1354_);
lean_dec_ref_known(v___x_1353_, 1);
v_fst_1355_ = lean_ctor_get(v_a_1354_, 0);
lean_inc(v_fst_1355_);
v_snd_1356_ = lean_ctor_get(v_a_1354_, 1);
lean_inc(v_snd_1356_);
lean_dec(v_a_1354_);
v___x_1357_ = 0;
v___x_1358_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(v_declName_1338_, v_fst_1350_, v_fst_1355_, v___f_1346_, v_nondep_1342_, v___x_1357_, v_a_1331_, v_snd_1356_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
return v___x_1358_;
}
else
{
lean_dec(v_fst_1350_);
lean_dec_ref(v___f_1346_);
lean_dec(v_declName_1338_);
return v___x_1353_;
}
}
else
{
lean_dec_ref(v___f_1346_);
lean_dec_ref(v_value_1340_);
lean_dec(v_declName_1338_);
lean_dec_ref(v_fvars_1329_);
lean_dec_ref(v_post_1325_);
lean_dec_ref(v_pre_1324_);
return v___x_1348_;
}
}
else
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = lean_expr_instantiate_rev(v_e_1330_, v_fvars_1329_);
lean_dec_ref(v_e_1330_);
lean_inc_ref(v_post_1325_);
lean_inc_ref(v_pre_1324_);
v___x_1360_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1324_, v_post_1325_, v_usedLetOnly_1326_, v_skipConstInApp_1327_, v_skipInstances_1328_, v___x_1359_, v_a_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v_a_1361_; lean_object* v_fst_1362_; lean_object* v_snd_1363_; uint8_t v___x_1364_; uint8_t v___x_1365_; lean_object* v___x_1366_; 
v_a_1361_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_a_1361_);
lean_dec_ref_known(v___x_1360_, 1);
v_fst_1362_ = lean_ctor_get(v_a_1361_, 0);
lean_inc(v_fst_1362_);
v_snd_1363_ = lean_ctor_get(v_a_1361_, 1);
lean_inc(v_snd_1363_);
lean_dec(v_a_1361_);
v___x_1364_ = 0;
v___x_1365_ = 1;
v___x_1366_ = l_Lean_Meta_mkLetFVars(v_fvars_1329_, v_fst_1362_, v_usedLetOnly_1326_, v___x_1364_, v___x_1365_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; lean_object* v___x_1368_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_a_1367_);
lean_dec_ref_known(v___x_1366_, 1);
v___x_1368_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1324_, v_post_1325_, v_usedLetOnly_1326_, v_skipConstInApp_1327_, v_skipInstances_1328_, v_a_1367_, v_a_1331_, v_snd_1363_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
return v___x_1368_;
}
else
{
lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1376_; 
lean_dec(v_snd_1363_);
lean_dec_ref(v_post_1325_);
lean_dec_ref(v_pre_1324_);
v_a_1369_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1371_ = v___x_1366_;
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_dec(v___x_1366_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1374_; 
if (v_isShared_1372_ == 0)
{
v___x_1374_ = v___x_1371_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v_a_1369_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1329_);
lean_dec_ref(v_post_1325_);
lean_dec_ref(v_pre_1324_);
return v___x_1360_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8(lean_object* v_pre_1379_, lean_object* v_post_1380_, uint8_t v_usedLetOnly_1381_, uint8_t v_skipConstInApp_1382_, uint8_t v_skipInstances_1383_, size_t v_sz_1384_, size_t v_i_1385_, lean_object* v_bs_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
uint8_t v___x_1394_; 
v___x_1394_ = lean_usize_dec_lt(v_i_1385_, v_sz_1384_);
if (v___x_1394_ == 0)
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
lean_dec_ref(v_post_1380_);
lean_dec_ref(v_pre_1379_);
v___x_1395_ = l_unsafeCast___redArg(v_bs_1386_);
lean_dec_ref(v_bs_1386_);
v___x_1396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
lean_ctor_set(v___x_1396_, 1, v___y_1388_);
v___x_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1396_);
return v___x_1397_;
}
else
{
lean_object* v_v_1398_; lean_object* v___x_1399_; lean_object* v_bs_x27_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v_v_1398_ = lean_array_uget(v_bs_1386_, v_i_1385_);
v___x_1399_ = lean_unsigned_to_nat(0u);
v_bs_x27_1400_ = lean_array_uset(v_bs_1386_, v_i_1385_, v___x_1399_);
v___x_1401_ = l_unsafeCast___redArg(v_v_1398_);
lean_dec(v_v_1398_);
lean_inc_ref(v_post_1380_);
lean_inc_ref(v_pre_1379_);
v___x_1402_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1379_, v_post_1380_, v_usedLetOnly_1381_, v_skipConstInApp_1382_, v_skipInstances_1383_, v___x_1401_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; lean_object* v_fst_1404_; lean_object* v_snd_1405_; size_t v___x_1406_; size_t v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1402_, 1);
v_fst_1404_ = lean_ctor_get(v_a_1403_, 0);
lean_inc(v_fst_1404_);
v_snd_1405_ = lean_ctor_get(v_a_1403_, 1);
lean_inc(v_snd_1405_);
lean_dec(v_a_1403_);
v___x_1406_ = ((size_t)1ULL);
v___x_1407_ = lean_usize_add(v_i_1385_, v___x_1406_);
v___x_1408_ = l_unsafeCast___redArg(v_fst_1404_);
lean_dec(v_fst_1404_);
v___x_1409_ = lean_array_uset(v_bs_x27_1400_, v_i_1385_, v___x_1408_);
v_i_1385_ = v___x_1407_;
v_bs_1386_ = v___x_1409_;
v___y_1388_ = v_snd_1405_;
goto _start;
}
else
{
lean_object* v_a_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1418_; 
lean_dec_ref(v_bs_x27_1400_);
lean_dec_ref(v_post_1380_);
lean_dec_ref(v_pre_1379_);
v_a_1411_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1413_ = v___x_1402_;
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_a_1411_);
lean_dec(v___x_1402_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1416_; 
if (v_isShared_1414_ == 0)
{
v___x_1416_ = v___x_1413_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_a_1411_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8___boxed(lean_object* v_pre_1419_, lean_object* v_post_1420_, lean_object* v_usedLetOnly_1421_, lean_object* v_skipConstInApp_1422_, lean_object* v_skipInstances_1423_, lean_object* v_sz_1424_, lean_object* v_i_1425_, lean_object* v_bs_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
uint8_t v_usedLetOnly_boxed_1434_; uint8_t v_skipConstInApp_boxed_1435_; uint8_t v_skipInstances_boxed_1436_; size_t v_sz_boxed_1437_; size_t v_i_boxed_1438_; lean_object* v_res_1439_; 
v_usedLetOnly_boxed_1434_ = lean_unbox(v_usedLetOnly_1421_);
v_skipConstInApp_boxed_1435_ = lean_unbox(v_skipConstInApp_1422_);
v_skipInstances_boxed_1436_ = lean_unbox(v_skipInstances_1423_);
v_sz_boxed_1437_ = lean_unbox_usize(v_sz_1424_);
lean_dec(v_sz_1424_);
v_i_boxed_1438_ = lean_unbox_usize(v_i_1425_);
lean_dec(v_i_1425_);
v_res_1439_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8(v_pre_1419_, v_post_1420_, v_usedLetOnly_boxed_1434_, v_skipConstInApp_boxed_1435_, v_skipInstances_boxed_1436_, v_sz_boxed_1437_, v_i_boxed_1438_, v_bs_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1427_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0(lean_object* v_pre_1440_, lean_object* v_post_1441_, uint8_t v_usedLetOnly_1442_, uint8_t v_skipConstInApp_1443_, uint8_t v_skipInstances_1444_, lean_object* v___x_1445_, lean_object* v___y_1446_, lean_object* v_b_1447_, lean_object* v_a_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
lean_object* v___x_1455_; 
v___x_1455_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1440_, v_post_1441_, v_usedLetOnly_1442_, v_skipConstInApp_1443_, v_skipInstances_1444_, v___x_1445_, v___y_1446_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1474_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1458_ = v___x_1455_;
v_isShared_1459_ = v_isSharedCheck_1474_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v___x_1455_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1474_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v_fst_1460_; lean_object* v_snd_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1473_; 
v_fst_1460_ = lean_ctor_get(v_a_1456_, 0);
v_snd_1461_ = lean_ctor_get(v_a_1456_, 1);
v_isSharedCheck_1473_ = !lean_is_exclusive(v_a_1456_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1463_ = v_a_1456_;
v_isShared_1464_ = v_isSharedCheck_1473_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_snd_1461_);
lean_inc(v_fst_1460_);
lean_dec(v_a_1456_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1473_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1468_; 
v___x_1465_ = lean_array_fset(v_b_1447_, v_a_1448_, v_fst_1460_);
v___x_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1465_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v___x_1466_);
v___x_1468_ = v___x_1463_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v___x_1466_);
lean_ctor_set(v_reuseFailAlloc_1472_, 1, v_snd_1461_);
v___x_1468_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
lean_object* v___x_1470_; 
if (v_isShared_1459_ == 0)
{
lean_ctor_set(v___x_1458_, 0, v___x_1468_);
v___x_1470_ = v___x_1458_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1468_);
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
}
else
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1482_; 
lean_dec_ref(v_b_1447_);
v_a_1475_ = lean_ctor_get(v___x_1455_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1477_ = v___x_1455_;
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1455_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1478_ == 0)
{
v___x_1480_ = v___x_1477_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v_a_1475_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0___boxed(lean_object* v_pre_1483_, lean_object* v_post_1484_, lean_object* v_usedLetOnly_1485_, lean_object* v_skipConstInApp_1486_, lean_object* v_skipInstances_1487_, lean_object* v___x_1488_, lean_object* v___y_1489_, lean_object* v_b_1490_, lean_object* v_a_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
uint8_t v_usedLetOnly_boxed_1498_; uint8_t v_skipConstInApp_boxed_1499_; uint8_t v_skipInstances_boxed_1500_; lean_object* v_res_1501_; 
v_usedLetOnly_boxed_1498_ = lean_unbox(v_usedLetOnly_1485_);
v_skipConstInApp_boxed_1499_ = lean_unbox(v_skipConstInApp_1486_);
v_skipInstances_boxed_1500_ = lean_unbox(v_skipInstances_1487_);
v_res_1501_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0(v_pre_1483_, v_post_1484_, v_usedLetOnly_boxed_1498_, v_skipConstInApp_boxed_1499_, v_skipInstances_boxed_1500_, v___x_1488_, v___y_1489_, v_b_1490_, v_a_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v_a_1491_);
lean_dec(v___y_1489_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(lean_object* v_upperBound_1502_, lean_object* v___x_1503_, lean_object* v_pre_1504_, lean_object* v_post_1505_, uint8_t v_usedLetOnly_1506_, uint8_t v_skipConstInApp_1507_, uint8_t v_skipInstances_1508_, lean_object* v_a_1509_, lean_object* v_b_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v___y_1519_; uint8_t v___x_1553_; 
v___x_1553_ = lean_nat_dec_lt(v_a_1509_, v_upperBound_1502_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
lean_dec(v_a_1509_);
lean_dec_ref(v_post_1505_);
lean_dec_ref(v_pre_1504_);
v___x_1554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1554_, 0, v_b_1510_);
lean_ctor_set(v___x_1554_, 1, v___y_1512_);
v___x_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
return v___x_1555_;
}
else
{
lean_object* v___x_1556_; lean_object* v___x_1557_; uint8_t v___x_1558_; 
v___x_1556_ = lean_array_fget_borrowed(v_b_1510_, v_a_1509_);
v___x_1557_ = lean_array_get_size(v___x_1503_);
v___x_1558_ = lean_nat_dec_lt(v_a_1509_, v___x_1557_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___f_1562_; 
lean_inc(v___x_1556_);
v___x_1559_ = lean_box(v_usedLetOnly_1506_);
v___x_1560_ = lean_box(v_skipConstInApp_1507_);
v___x_1561_ = lean_box(v_skipInstances_1508_);
lean_inc(v_a_1509_);
lean_inc(v___y_1511_);
lean_inc_ref(v_post_1505_);
lean_inc_ref(v_pre_1504_);
v___f_1562_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1562_, 0, v_pre_1504_);
lean_closure_set(v___f_1562_, 1, v_post_1505_);
lean_closure_set(v___f_1562_, 2, v___x_1559_);
lean_closure_set(v___f_1562_, 3, v___x_1560_);
lean_closure_set(v___f_1562_, 4, v___x_1561_);
lean_closure_set(v___f_1562_, 5, v___x_1556_);
lean_closure_set(v___f_1562_, 6, v___y_1511_);
lean_closure_set(v___f_1562_, 7, v_b_1510_);
lean_closure_set(v___f_1562_, 8, v_a_1509_);
v___y_1519_ = v___f_1562_;
goto v___jp_1518_;
}
else
{
lean_object* v___x_1563_; uint8_t v_isInstance_1564_; 
v___x_1563_ = lean_array_fget_borrowed(v___x_1503_, v_a_1509_);
v_isInstance_1564_ = lean_ctor_get_uint8(v___x_1563_, sizeof(void*)*1 + 4);
if (v_isInstance_1564_ == 0)
{
lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___f_1568_; 
lean_inc(v___x_1556_);
v___x_1565_ = lean_box(v_usedLetOnly_1506_);
v___x_1566_ = lean_box(v_skipConstInApp_1507_);
v___x_1567_ = lean_box(v_skipInstances_1508_);
lean_inc(v_a_1509_);
lean_inc(v___y_1511_);
lean_inc_ref(v_post_1505_);
lean_inc_ref(v_pre_1504_);
v___f_1568_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1568_, 0, v_pre_1504_);
lean_closure_set(v___f_1568_, 1, v_post_1505_);
lean_closure_set(v___f_1568_, 2, v___x_1565_);
lean_closure_set(v___f_1568_, 3, v___x_1566_);
lean_closure_set(v___f_1568_, 4, v___x_1567_);
lean_closure_set(v___f_1568_, 5, v___x_1556_);
lean_closure_set(v___f_1568_, 6, v___y_1511_);
lean_closure_set(v___f_1568_, 7, v_b_1510_);
lean_closure_set(v___f_1568_, 8, v_a_1509_);
v___y_1519_ = v___f_1568_;
goto v___jp_1518_;
}
else
{
lean_object* v___x_1569_; lean_object* v___f_1570_; 
v___x_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1569_, 0, v_b_1510_);
v___f_1570_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___lam__2___boxed), 7, 1);
lean_closure_set(v___f_1570_, 0, v___x_1569_);
v___y_1519_ = v___f_1570_;
goto v___jp_1518_;
}
}
}
v___jp_1518_:
{
lean_object* v___x_1520_; 
lean_inc(v___y_1516_);
lean_inc_ref(v___y_1515_);
lean_inc(v___y_1514_);
lean_inc_ref(v___y_1513_);
v___x_1520_ = lean_apply_6(v___y_1519_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, lean_box(0));
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1544_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1523_ = v___x_1520_;
v_isShared_1524_ = v_isSharedCheck_1544_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1520_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1544_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v_fst_1525_; 
v_fst_1525_ = lean_ctor_get(v_a_1521_, 0);
lean_inc(v_fst_1525_);
if (lean_obj_tag(v_fst_1525_) == 0)
{
lean_object* v_snd_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1537_; 
lean_dec(v_a_1509_);
lean_dec_ref(v_post_1505_);
lean_dec_ref(v_pre_1504_);
v_snd_1526_ = lean_ctor_get(v_a_1521_, 1);
v_isSharedCheck_1537_ = !lean_is_exclusive(v_a_1521_);
if (v_isSharedCheck_1537_ == 0)
{
lean_object* v_unused_1538_; 
v_unused_1538_ = lean_ctor_get(v_a_1521_, 0);
lean_dec(v_unused_1538_);
v___x_1528_ = v_a_1521_;
v_isShared_1529_ = v_isSharedCheck_1537_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_snd_1526_);
lean_dec(v_a_1521_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1537_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v_a_1530_; lean_object* v___x_1532_; 
v_a_1530_ = lean_ctor_get(v_fst_1525_, 0);
lean_inc(v_a_1530_);
lean_dec_ref_known(v_fst_1525_, 1);
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 0, v_a_1530_);
v___x_1532_ = v___x_1528_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_a_1530_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v_snd_1526_);
v___x_1532_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
lean_object* v___x_1534_; 
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 0, v___x_1532_);
v___x_1534_ = v___x_1523_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
else
{
lean_object* v_snd_1539_; lean_object* v_a_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
lean_del_object(v___x_1523_);
v_snd_1539_ = lean_ctor_get(v_a_1521_, 1);
lean_inc(v_snd_1539_);
lean_dec(v_a_1521_);
v_a_1540_ = lean_ctor_get(v_fst_1525_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v_fst_1525_, 1);
v___x_1541_ = lean_unsigned_to_nat(1u);
v___x_1542_ = lean_nat_add(v_a_1509_, v___x_1541_);
lean_dec(v_a_1509_);
v_a_1509_ = v___x_1542_;
v_b_1510_ = v_a_1540_;
v___y_1512_ = v_snd_1539_;
goto _start;
}
}
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
lean_dec(v_a_1509_);
lean_dec_ref(v_post_1505_);
lean_dec_ref(v_pre_1504_);
v_a_1545_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1520_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1520_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(uint8_t v_skipInstances_1571_, lean_object* v_pre_1572_, lean_object* v_post_1573_, uint8_t v_usedLetOnly_1574_, uint8_t v_skipConstInApp_1575_, lean_object* v_x_1576_, lean_object* v_x_1577_, lean_object* v_x_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v_f_1587_; lean_object* v___y_1588_; lean_object* v___y_1589_; lean_object* v___y_1590_; lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___y_1593_; 
if (lean_obj_tag(v_x_1576_) == 5)
{
lean_object* v_fn_1649_; lean_object* v_arg_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; 
v_fn_1649_ = lean_ctor_get(v_x_1576_, 0);
lean_inc_ref(v_fn_1649_);
v_arg_1650_ = lean_ctor_get(v_x_1576_, 1);
lean_inc_ref(v_arg_1650_);
lean_dec_ref_known(v_x_1576_, 2);
v___x_1651_ = lean_array_set(v_x_1577_, v_x_1578_, v_arg_1650_);
v___x_1652_ = lean_unsigned_to_nat(1u);
v___x_1653_ = lean_nat_sub(v_x_1578_, v___x_1652_);
lean_dec(v_x_1578_);
v_x_1576_ = v_fn_1649_;
v_x_1577_ = v___x_1651_;
v_x_1578_ = v___x_1653_;
goto _start;
}
else
{
lean_dec(v_x_1578_);
if (v_skipConstInApp_1575_ == 0)
{
goto v___jp_1644_;
}
else
{
uint8_t v___x_1655_; 
v___x_1655_ = l_Lean_Expr_isConst(v_x_1576_);
if (v___x_1655_ == 0)
{
goto v___jp_1644_;
}
else
{
v_f_1587_ = v_x_1576_;
v___y_1588_ = v___y_1579_;
v___y_1589_ = v___y_1580_;
v___y_1590_ = v___y_1581_;
v___y_1591_ = v___y_1582_;
v___y_1592_ = v___y_1583_;
v___y_1593_ = v___y_1584_;
goto v___jp_1586_;
}
}
}
v___jp_1586_:
{
if (v_skipInstances_1571_ == 0)
{
size_t v_sz_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_35558__overap_1602_; lean_object* v___x_1603_; 
v_sz_1594_ = lean_array_size(v_x_1577_);
v___x_1595_ = l_unsafeCast___redArg(v_x_1577_);
lean_dec_ref(v_x_1577_);
v___x_1596_ = lean_box(v_usedLetOnly_1574_);
v___x_1597_ = lean_box(v_skipConstInApp_1575_);
v___x_1598_ = lean_box(v_skipInstances_1571_);
v___x_1599_ = lean_box_usize(v_sz_1594_);
v___x_1600_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed__const__1));
lean_inc_ref(v_post_1573_);
lean_inc_ref(v_pre_1572_);
v___x_1601_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__8___boxed), 15, 8);
lean_closure_set(v___x_1601_, 0, v_pre_1572_);
lean_closure_set(v___x_1601_, 1, v_post_1573_);
lean_closure_set(v___x_1601_, 2, v___x_1596_);
lean_closure_set(v___x_1601_, 3, v___x_1597_);
lean_closure_set(v___x_1601_, 4, v___x_1598_);
lean_closure_set(v___x_1601_, 5, v___x_1599_);
lean_closure_set(v___x_1601_, 6, v___x_1600_);
lean_closure_set(v___x_1601_, 7, v___x_1595_);
v___x_35558__overap_1602_ = l_unsafeCast___redArg(v___x_1601_);
lean_dec_ref(v___x_1601_);
lean_inc(v___y_1593_);
lean_inc_ref(v___y_1592_);
lean_inc(v___y_1591_);
lean_inc_ref(v___y_1590_);
lean_inc(v___y_1588_);
v___x_1603_ = lean_apply_7(v___x_35558__overap_1602_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, lean_box(0));
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_a_1604_; lean_object* v_fst_1605_; lean_object* v_snd_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v_a_1604_ = lean_ctor_get(v___x_1603_, 0);
lean_inc(v_a_1604_);
lean_dec_ref_known(v___x_1603_, 1);
v_fst_1605_ = lean_ctor_get(v_a_1604_, 0);
lean_inc(v_fst_1605_);
v_snd_1606_ = lean_ctor_get(v_a_1604_, 1);
lean_inc(v_snd_1606_);
lean_dec(v_a_1604_);
v___x_1607_ = l_Lean_mkAppN(v_f_1587_, v_fst_1605_);
lean_dec(v_fst_1605_);
v___x_1608_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1572_, v_post_1573_, v_usedLetOnly_1574_, v_skipConstInApp_1575_, v_skipInstances_1571_, v___x_1607_, v___y_1588_, v_snd_1606_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_);
return v___x_1608_;
}
else
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1616_; 
lean_dec_ref(v_f_1587_);
lean_dec_ref(v_post_1573_);
lean_dec_ref(v_pre_1572_);
v_a_1609_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1611_ = v___x_1603_;
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v___x_1603_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1612_ == 0)
{
v___x_1614_ = v___x_1611_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1609_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
}
else
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1617_ = lean_array_get_size(v_x_1577_);
lean_inc_ref(v_f_1587_);
v___x_1618_ = l_Lean_Meta_getFunInfoNArgs(v_f_1587_, v___x_1617_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; lean_object* v_paramInfo_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_a_1619_);
lean_dec_ref_known(v___x_1618_, 1);
v_paramInfo_1620_ = lean_ctor_get(v_a_1619_, 0);
lean_inc_ref(v_paramInfo_1620_);
lean_dec(v_a_1619_);
v___x_1621_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_1573_);
lean_inc_ref(v_pre_1572_);
v___x_1622_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(v___x_1617_, v_paramInfo_1620_, v_pre_1572_, v_post_1573_, v_usedLetOnly_1574_, v_skipConstInApp_1575_, v_skipInstances_1571_, v___x_1621_, v_x_1577_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_);
lean_dec_ref(v_paramInfo_1620_);
if (lean_obj_tag(v___x_1622_) == 0)
{
lean_object* v_a_1623_; lean_object* v_fst_1624_; lean_object* v_snd_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v_a_1623_ = lean_ctor_get(v___x_1622_, 0);
lean_inc(v_a_1623_);
lean_dec_ref_known(v___x_1622_, 1);
v_fst_1624_ = lean_ctor_get(v_a_1623_, 0);
lean_inc(v_fst_1624_);
v_snd_1625_ = lean_ctor_get(v_a_1623_, 1);
lean_inc(v_snd_1625_);
lean_dec(v_a_1623_);
v___x_1626_ = l_Lean_mkAppN(v_f_1587_, v_fst_1624_);
lean_dec(v_fst_1624_);
v___x_1627_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1572_, v_post_1573_, v_usedLetOnly_1574_, v_skipConstInApp_1575_, v_skipInstances_1571_, v___x_1626_, v___y_1588_, v_snd_1625_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_);
return v___x_1627_;
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
lean_dec_ref(v_f_1587_);
lean_dec_ref(v_post_1573_);
lean_dec_ref(v_pre_1572_);
v_a_1628_ = lean_ctor_get(v___x_1622_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1622_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1622_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1622_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
else
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
lean_dec(v___y_1589_);
lean_dec_ref(v_f_1587_);
lean_dec_ref(v_x_1577_);
lean_dec_ref(v_post_1573_);
lean_dec_ref(v_pre_1572_);
v_a_1636_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1638_ = v___x_1618_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1618_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1636_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
}
v___jp_1644_:
{
lean_object* v___x_1645_; 
lean_inc_ref(v_post_1573_);
lean_inc_ref(v_pre_1572_);
v___x_1645_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1572_, v_post_1573_, v_usedLetOnly_1574_, v_skipConstInApp_1575_, v_skipInstances_1571_, v_x_1576_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
if (lean_obj_tag(v___x_1645_) == 0)
{
lean_object* v_a_1646_; lean_object* v_fst_1647_; lean_object* v_snd_1648_; 
v_a_1646_ = lean_ctor_get(v___x_1645_, 0);
lean_inc(v_a_1646_);
lean_dec_ref_known(v___x_1645_, 1);
v_fst_1647_ = lean_ctor_get(v_a_1646_, 0);
lean_inc(v_fst_1647_);
v_snd_1648_ = lean_ctor_get(v_a_1646_, 1);
lean_inc(v_snd_1648_);
lean_dec(v_a_1646_);
v_f_1587_ = v_fst_1647_;
v___y_1588_ = v___y_1579_;
v___y_1589_ = v_snd_1648_;
v___y_1590_ = v___y_1581_;
v___y_1591_ = v___y_1582_;
v___y_1592_ = v___y_1583_;
v___y_1593_ = v___y_1584_;
goto v___jp_1586_;
}
else
{
lean_dec_ref(v_x_1577_);
lean_dec_ref(v_post_1573_);
lean_dec_ref(v_pre_1572_);
return v___x_1645_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(lean_object* v___x_1656_, lean_object* v_pre_1657_, lean_object* v_e_1658_, lean_object* v_post_1659_, uint8_t v_usedLetOnly_1660_, uint8_t v_skipConstInApp_1661_, uint8_t v_skipInstances_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l_Lean_Core_checkSystem(v___x_1656_, v___y_1667_, v___y_1668_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v___x_1671_; 
lean_dec_ref_known(v___x_1670_, 1);
lean_inc_ref(v_pre_1657_);
lean_inc(v___y_1668_);
lean_inc_ref(v___y_1667_);
lean_inc(v___y_1666_);
lean_inc_ref(v___y_1665_);
lean_inc_ref(v_e_1658_);
v___x_1671_ = lean_apply_7(v_pre_1657_, v_e_1658_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, lean_box(0));
if (lean_obj_tag(v___x_1671_) == 0)
{
lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1733_; 
v_a_1672_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1674_ = v___x_1671_;
v_isShared_1675_ = v_isSharedCheck_1733_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v___x_1671_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1733_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v_fst_1676_; lean_object* v_snd_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1732_; 
v_fst_1676_ = lean_ctor_get(v_a_1672_, 0);
v_snd_1677_ = lean_ctor_get(v_a_1672_, 1);
v_isSharedCheck_1732_ = !lean_is_exclusive(v_a_1672_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1679_ = v_a_1672_;
v_isShared_1680_ = v_isSharedCheck_1732_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_snd_1677_);
lean_inc(v_fst_1676_);
lean_dec(v_a_1672_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1732_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___y_1682_; 
switch(lean_obj_tag(v_fst_1676_))
{
case 0:
{
lean_object* v_e_1721_; lean_object* v___x_1723_; 
lean_dec_ref(v_post_1659_);
lean_dec_ref(v_e_1658_);
lean_dec_ref(v_pre_1657_);
v_e_1721_ = lean_ctor_get(v_fst_1676_, 0);
lean_inc_ref(v_e_1721_);
lean_dec_ref_known(v_fst_1676_, 1);
if (v_isShared_1680_ == 0)
{
lean_ctor_set(v___x_1679_, 0, v_e_1721_);
v___x_1723_ = v___x_1679_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_e_1721_);
lean_ctor_set(v_reuseFailAlloc_1727_, 1, v_snd_1677_);
v___x_1723_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
lean_object* v___x_1725_; 
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 0, v___x_1723_);
v___x_1725_ = v___x_1674_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1723_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
case 1:
{
lean_object* v_e_1728_; lean_object* v___x_1729_; 
lean_del_object(v___x_1679_);
lean_del_object(v___x_1674_);
lean_dec_ref(v_e_1658_);
v_e_1728_ = lean_ctor_get(v_fst_1676_, 0);
lean_inc_ref(v_e_1728_);
lean_dec_ref_known(v_fst_1676_, 1);
v___x_1729_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v_skipInstances_1662_, v_e_1728_, v___y_1663_, v_snd_1677_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v___x_1729_;
}
default: 
{
lean_object* v_e_x3f_1730_; 
lean_del_object(v___x_1679_);
lean_del_object(v___x_1674_);
v_e_x3f_1730_ = lean_ctor_get(v_fst_1676_, 0);
lean_inc(v_e_x3f_1730_);
lean_dec_ref_known(v_fst_1676_, 1);
if (lean_obj_tag(v_e_x3f_1730_) == 0)
{
v___y_1682_ = v_e_1658_;
goto v___jp_1681_;
}
else
{
lean_object* v_val_1731_; 
lean_dec_ref(v_e_1658_);
v_val_1731_ = lean_ctor_get(v_e_x3f_1730_, 0);
lean_inc(v_val_1731_);
lean_dec_ref_known(v_e_x3f_1730_, 1);
v___y_1682_ = v_val_1731_;
goto v___jp_1681_;
}
}
}
v___jp_1681_:
{
switch(lean_obj_tag(v___y_1682_))
{
case 7:
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1683_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1684_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v_skipInstances_1662_, v___x_1683_, v___y_1682_, v___y_1663_, v_snd_1677_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v___x_1684_;
}
case 6:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1685_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1686_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v_skipInstances_1662_, v___x_1685_, v___y_1682_, v___y_1663_, v_snd_1677_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v___x_1686_;
}
case 8:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___closed__0));
v___x_1688_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v_skipInstances_1662_, v___x_1687_, v___y_1682_, v___y_1663_, v_snd_1677_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v___x_1688_;
}
case 5:
{
lean_object* v_dummy_1689_; lean_object* v_nargs_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v_dummy_1689_ = lean_obj_once(&l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1, &l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1_once, _init_l___private_Lean_Meta_Coe_0__Lean_Meta_recProjTarget___closed__1);
v_nargs_1690_ = l_Lean_Expr_getAppNumArgs(v___y_1682_);
lean_inc(v_nargs_1690_);
v___x_1691_ = lean_mk_array(v_nargs_1690_, v_dummy_1689_);
v___x_1692_ = lean_unsigned_to_nat(1u);
v___x_1693_ = lean_nat_sub(v_nargs_1690_, v___x_1692_);
lean_dec(v_nargs_1690_);
v___x_1694_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_skipInstances_1662_, v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v___y_1682_, v___x_1691_, v___x_1693_, v___y_1663_, v_snd_1677_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v___x_1694_;
}
case 10:
{
lean_object* v_data_1695_; lean_object* v_expr_1696_; lean_object* v___x_1697_; 
v_data_1695_ = lean_ctor_get(v___y_1682_, 0);
v_expr_1696_ = lean_ctor_get(v___y_1682_, 1);
lean_inc_ref(v_expr_1696_);
lean_inc_ref(v_post_1659_);
lean_inc_ref(v_pre_1657_);
v___x_1697_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v_skipInstances_1662_, v_expr_1696_, v___y_1663_, v_snd_1677_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v_fst_1699_; lean_object* v_snd_1700_; size_t v___x_1701_; size_t v___x_1702_; uint8_t v___x_1703_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
lean_inc(v_a_1698_);
lean_dec_ref_known(v___x_1697_, 1);
v_fst_1699_ = lean_ctor_get(v_a_1698_, 0);
lean_inc(v_fst_1699_);
v_snd_1700_ = lean_ctor_get(v_a_1698_, 1);
lean_inc(v_snd_1700_);
lean_dec(v_a_1698_);
v___x_1701_ = lean_ptr_addr(v_expr_1696_);
v___x_1702_ = lean_ptr_addr(v_fst_1699_);
v___x_1703_ = lean_usize_dec_eq(v___x_1701_, v___x_1702_);
if (v___x_1703_ == 0)
{
lean_object* v___x_1704_; lean_object* v___x_1705_; 
lean_inc(v_data_1695_);
lean_dec_ref_known(v___y_1682_, 2);
v___x_1704_ = l_Lean_Expr_mdata___override(v_data_1695_, v_fst_1699_);
v___x_1705_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v_skipInstances_1662_, v___x_1704_, v___y_1663_, v_snd_1700_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v___x_1705_;
}
else
{
lean_object* v___x_1706_; 
lean_dec(v_fst_1699_);
v___x_1706_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v_skipInstances_1662_, v___y_1682_, v___y_1663_, v_snd_1700_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v___x_1706_;
}
}
else
{
lean_dec_ref_known(v___y_1682_, 2);
lean_dec_ref(v_post_1659_);
lean_dec_ref(v_pre_1657_);
return v___x_1697_;
}
}
case 11:
{
lean_object* v_typeName_1707_; lean_object* v_idx_1708_; lean_object* v_struct_1709_; lean_object* v___x_1710_; 
v_typeName_1707_ = lean_ctor_get(v___y_1682_, 0);
v_idx_1708_ = lean_ctor_get(v___y_1682_, 1);
v_struct_1709_ = lean_ctor_get(v___y_1682_, 2);
lean_inc_ref(v_struct_1709_);
lean_inc_ref(v_post_1659_);
lean_inc_ref(v_pre_1657_);
v___x_1710_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v_skipInstances_1662_, v_struct_1709_, v___y_1663_, v_snd_1677_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; lean_object* v_fst_1712_; lean_object* v_snd_1713_; size_t v___x_1714_; size_t v___x_1715_; uint8_t v___x_1716_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
lean_inc(v_a_1711_);
lean_dec_ref_known(v___x_1710_, 1);
v_fst_1712_ = lean_ctor_get(v_a_1711_, 0);
lean_inc(v_fst_1712_);
v_snd_1713_ = lean_ctor_get(v_a_1711_, 1);
lean_inc(v_snd_1713_);
lean_dec(v_a_1711_);
v___x_1714_ = lean_ptr_addr(v_struct_1709_);
v___x_1715_ = lean_ptr_addr(v_fst_1712_);
v___x_1716_ = lean_usize_dec_eq(v___x_1714_, v___x_1715_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
lean_inc(v_idx_1708_);
lean_inc(v_typeName_1707_);
lean_dec_ref_known(v___y_1682_, 3);
v___x_1717_ = l_Lean_Expr_proj___override(v_typeName_1707_, v_idx_1708_, v_fst_1712_);
v___x_1718_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v_skipInstances_1662_, v___x_1717_, v___y_1663_, v_snd_1713_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v___x_1718_;
}
else
{
lean_object* v___x_1719_; 
lean_dec(v_fst_1712_);
v___x_1719_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v_skipInstances_1662_, v___y_1682_, v___y_1663_, v_snd_1713_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v___x_1719_;
}
}
else
{
lean_dec_ref_known(v___y_1682_, 3);
lean_dec_ref(v_post_1659_);
lean_dec_ref(v_pre_1657_);
return v___x_1710_;
}
}
default: 
{
lean_object* v___x_1720_; 
v___x_1720_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1657_, v_post_1659_, v_usedLetOnly_1660_, v_skipConstInApp_1661_, v_skipInstances_1662_, v___y_1682_, v___y_1663_, v_snd_1677_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v___x_1720_;
}
}
}
}
}
}
else
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
lean_dec_ref(v_post_1659_);
lean_dec_ref(v_e_1658_);
lean_dec_ref(v_pre_1657_);
v_a_1734_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v___x_1671_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1671_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec(v___y_1664_);
lean_dec_ref(v_post_1659_);
lean_dec_ref(v_e_1658_);
lean_dec_ref(v_pre_1657_);
v_a_1742_ = lean_ctor_get(v___x_1670_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1670_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1670_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed(lean_object* v___x_1750_, lean_object* v_pre_1751_, lean_object* v_e_1752_, lean_object* v_post_1753_, lean_object* v_usedLetOnly_1754_, lean_object* v_skipConstInApp_1755_, lean_object* v_skipInstances_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
uint8_t v_usedLetOnly_boxed_1764_; uint8_t v_skipConstInApp_boxed_1765_; uint8_t v_skipInstances_boxed_1766_; lean_object* v_res_1767_; 
v_usedLetOnly_boxed_1764_ = lean_unbox(v_usedLetOnly_1754_);
v_skipConstInApp_boxed_1765_ = lean_unbox(v_skipConstInApp_1755_);
v_skipInstances_boxed_1766_ = lean_unbox(v_skipInstances_1756_);
v_res_1767_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1(v___x_1750_, v_pre_1751_, v_e_1752_, v_post_1753_, v_usedLetOnly_boxed_1764_, v_skipConstInApp_boxed_1765_, v_skipInstances_boxed_1766_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1757_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(lean_object* v_pre_1768_, lean_object* v_post_1769_, uint8_t v_usedLetOnly_1770_, uint8_t v_skipConstInApp_1771_, uint8_t v_skipInstances_1772_, lean_object* v_e_1773_, lean_object* v_a_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; 
lean_inc(v_a_1774_);
v___x_1781_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1781_, 0, lean_box(0));
lean_closure_set(v___x_1781_, 1, lean_box(0));
lean_closure_set(v___x_1781_, 2, v_a_1774_);
v___x_1782_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_box(0), v___x_1781_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1837_; 
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1785_ = v___x_1782_;
v_isShared_1786_ = v_isSharedCheck_1837_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v___x_1782_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1837_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v_fst_1787_; lean_object* v_snd_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1836_; 
v_fst_1787_ = lean_ctor_get(v_a_1783_, 0);
v_snd_1788_ = lean_ctor_get(v_a_1783_, 1);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_a_1783_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1790_ = v_a_1783_;
v_isShared_1791_ = v_isSharedCheck_1836_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_snd_1788_);
lean_inc(v_fst_1787_);
lean_dec(v_a_1783_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1836_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1792_; 
v___x_1792_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_fst_1787_, v_e_1773_);
lean_dec(v_fst_1787_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___f_1797_; lean_object* v___x_1798_; 
lean_del_object(v___x_1790_);
lean_del_object(v___x_1785_);
v___x_1793_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___closed__0));
v___x_1794_ = lean_box(v_usedLetOnly_1770_);
v___x_1795_ = lean_box(v_skipConstInApp_1771_);
v___x_1796_ = lean_box(v_skipInstances_1772_);
lean_inc_ref(v_e_1773_);
v___f_1797_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__1___boxed), 14, 7);
lean_closure_set(v___f_1797_, 0, v___x_1793_);
lean_closure_set(v___f_1797_, 1, v_pre_1768_);
lean_closure_set(v___f_1797_, 2, v_e_1773_);
lean_closure_set(v___f_1797_, 3, v_post_1769_);
lean_closure_set(v___f_1797_, 4, v___x_1794_);
lean_closure_set(v___f_1797_, 5, v___x_1795_);
lean_closure_set(v___f_1797_, 6, v___x_1796_);
v___x_1798_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(v___f_1797_, v_a_1774_, v_snd_1788_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_);
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_object* v_a_1799_; lean_object* v_fst_1800_; lean_object* v_snd_1801_; lean_object* v___f_1802_; lean_object* v___x_1803_; 
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
lean_inc(v_a_1799_);
lean_dec_ref_known(v___x_1798_, 1);
v_fst_1800_ = lean_ctor_get(v_a_1799_, 0);
lean_inc_n(v_fst_1800_, 2);
v_snd_1801_ = lean_ctor_get(v_a_1799_, 1);
lean_inc(v_snd_1801_);
lean_dec(v_a_1799_);
lean_inc(v_a_1774_);
v___f_1802_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1802_, 0, v_a_1774_);
lean_closure_set(v___f_1802_, 1, v_e_1773_);
lean_closure_set(v___f_1802_, 2, v_fst_1800_);
v___x_1803_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___lam__0(lean_box(0), v___f_1802_, v_snd_1801_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1820_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1806_ = v___x_1803_;
v_isShared_1807_ = v_isSharedCheck_1820_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1803_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1820_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v_snd_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1818_; 
v_snd_1808_ = lean_ctor_get(v_a_1804_, 1);
v_isSharedCheck_1818_ = !lean_is_exclusive(v_a_1804_);
if (v_isSharedCheck_1818_ == 0)
{
lean_object* v_unused_1819_; 
v_unused_1819_ = lean_ctor_get(v_a_1804_, 0);
lean_dec(v_unused_1819_);
v___x_1810_ = v_a_1804_;
v_isShared_1811_ = v_isSharedCheck_1818_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_snd_1808_);
lean_dec(v_a_1804_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1818_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1813_; 
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 0, v_fst_1800_);
v___x_1813_ = v___x_1810_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_fst_1800_);
lean_ctor_set(v_reuseFailAlloc_1817_, 1, v_snd_1808_);
v___x_1813_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
lean_object* v___x_1815_; 
if (v_isShared_1807_ == 0)
{
lean_ctor_set(v___x_1806_, 0, v___x_1813_);
v___x_1815_ = v___x_1806_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v___x_1813_);
v___x_1815_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
return v___x_1815_;
}
}
}
}
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
lean_dec(v_fst_1800_);
v_a_1821_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1803_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1803_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
}
else
{
lean_dec_ref(v_e_1773_);
return v___x_1798_;
}
}
else
{
lean_object* v_val_1829_; lean_object* v___x_1831_; 
lean_dec_ref(v_e_1773_);
lean_dec_ref(v_post_1769_);
lean_dec_ref(v_pre_1768_);
v_val_1829_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_val_1829_);
lean_dec_ref_known(v___x_1792_, 1);
if (v_isShared_1791_ == 0)
{
lean_ctor_set(v___x_1790_, 0, v_val_1829_);
v___x_1831_ = v___x_1790_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_val_1829_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v_snd_1788_);
v___x_1831_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
lean_object* v___x_1833_; 
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 0, v___x_1831_);
v___x_1833_ = v___x_1785_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v___x_1831_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
}
}
}
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
lean_dec_ref(v_e_1773_);
lean_dec_ref(v_post_1769_);
lean_dec_ref(v_pre_1768_);
v_a_1838_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1782_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1782_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1838_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(lean_object* v_pre_1846_, lean_object* v_post_1847_, uint8_t v_usedLetOnly_1848_, uint8_t v_skipConstInApp_1849_, uint8_t v_skipInstances_1850_, lean_object* v_fvars_1851_, lean_object* v_e_1852_, lean_object* v_a_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_){
_start:
{
if (lean_obj_tag(v_e_1852_) == 7)
{
lean_object* v_binderName_1860_; lean_object* v_binderType_1861_; lean_object* v_body_1862_; uint8_t v_binderInfo_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___f_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v_binderName_1860_ = lean_ctor_get(v_e_1852_, 0);
lean_inc(v_binderName_1860_);
v_binderType_1861_ = lean_ctor_get(v_e_1852_, 1);
lean_inc_ref(v_binderType_1861_);
v_body_1862_ = lean_ctor_get(v_e_1852_, 2);
lean_inc_ref(v_body_1862_);
v_binderInfo_1863_ = lean_ctor_get_uint8(v_e_1852_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1852_, 3);
v___x_1864_ = lean_box(v_usedLetOnly_1848_);
v___x_1865_ = lean_box(v_skipConstInApp_1849_);
v___x_1866_ = lean_box(v_skipInstances_1850_);
lean_inc_ref(v_post_1847_);
lean_inc_ref(v_pre_1846_);
lean_inc_ref(v_fvars_1851_);
v___f_1867_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1867_, 0, v_fvars_1851_);
lean_closure_set(v___f_1867_, 1, v_pre_1846_);
lean_closure_set(v___f_1867_, 2, v_post_1847_);
lean_closure_set(v___f_1867_, 3, v___x_1864_);
lean_closure_set(v___f_1867_, 4, v___x_1865_);
lean_closure_set(v___f_1867_, 5, v___x_1866_);
lean_closure_set(v___f_1867_, 6, v_body_1862_);
v___x_1868_ = lean_expr_instantiate_rev(v_binderType_1861_, v_fvars_1851_);
lean_dec_ref(v_fvars_1851_);
lean_dec_ref(v_binderType_1861_);
v___x_1869_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1846_, v_post_1847_, v_usedLetOnly_1848_, v_skipConstInApp_1849_, v_skipInstances_1850_, v___x_1868_, v_a_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v_a_1870_; lean_object* v_fst_1871_; lean_object* v_snd_1872_; uint8_t v___x_1873_; lean_object* v___x_1874_; 
v_a_1870_ = lean_ctor_get(v___x_1869_, 0);
lean_inc(v_a_1870_);
lean_dec_ref_known(v___x_1869_, 1);
v_fst_1871_ = lean_ctor_get(v_a_1870_, 0);
lean_inc(v_fst_1871_);
v_snd_1872_ = lean_ctor_get(v_a_1870_, 1);
lean_inc(v_snd_1872_);
lean_dec(v_a_1870_);
v___x_1873_ = 0;
v___x_1874_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_binderName_1860_, v_binderInfo_1863_, v_fst_1871_, v___f_1867_, v___x_1873_, v_a_1853_, v_snd_1872_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
return v___x_1874_;
}
else
{
lean_dec_ref(v___f_1867_);
lean_dec(v_binderName_1860_);
return v___x_1869_;
}
}
else
{
lean_object* v___x_1875_; lean_object* v___x_1876_; 
v___x_1875_ = lean_expr_instantiate_rev(v_e_1852_, v_fvars_1851_);
lean_dec_ref(v_e_1852_);
lean_inc_ref(v_post_1847_);
lean_inc_ref(v_pre_1846_);
v___x_1876_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1846_, v_post_1847_, v_usedLetOnly_1848_, v_skipConstInApp_1849_, v_skipInstances_1850_, v___x_1875_, v_a_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v_a_1877_; lean_object* v_fst_1878_; lean_object* v_snd_1879_; uint8_t v___x_1880_; uint8_t v___x_1881_; uint8_t v___x_1882_; lean_object* v___x_1883_; 
v_a_1877_ = lean_ctor_get(v___x_1876_, 0);
lean_inc(v_a_1877_);
lean_dec_ref_known(v___x_1876_, 1);
v_fst_1878_ = lean_ctor_get(v_a_1877_, 0);
lean_inc(v_fst_1878_);
v_snd_1879_ = lean_ctor_get(v_a_1877_, 1);
lean_inc(v_snd_1879_);
lean_dec(v_a_1877_);
v___x_1880_ = 0;
v___x_1881_ = 1;
v___x_1882_ = 1;
v___x_1883_ = l_Lean_Meta_mkForallFVars(v_fvars_1851_, v_fst_1878_, v___x_1880_, v_usedLetOnly_1848_, v___x_1881_, v___x_1882_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; lean_object* v___x_1885_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
v___x_1885_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1846_, v_post_1847_, v_usedLetOnly_1848_, v_skipConstInApp_1849_, v_skipInstances_1850_, v_a_1884_, v_a_1853_, v_snd_1879_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_);
return v___x_1885_;
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
lean_dec(v_snd_1879_);
lean_dec_ref(v_post_1847_);
lean_dec_ref(v_pre_1846_);
v_a_1886_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1883_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1883_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
}
else
{
lean_dec_ref(v_fvars_1851_);
lean_dec_ref(v_post_1847_);
lean_dec_ref(v_pre_1846_);
return v___x_1876_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___lam__0(lean_object* v_fvars_1894_, lean_object* v_pre_1895_, lean_object* v_post_1896_, uint8_t v_usedLetOnly_1897_, uint8_t v_skipConstInApp_1898_, uint8_t v_skipInstances_1899_, lean_object* v_body_1900_, lean_object* v_x_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_){
_start:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = lean_array_push(v_fvars_1894_, v_x_1901_);
v___x_1910_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(v_pre_1895_, v_post_1896_, v_usedLetOnly_1897_, v_skipConstInApp_1898_, v_skipInstances_1899_, v___x_1909_, v_body_1900_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_);
return v___x_1910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9___boxed(lean_object* v_pre_1911_, lean_object* v_post_1912_, lean_object* v_usedLetOnly_1913_, lean_object* v_skipConstInApp_1914_, lean_object* v_skipInstances_1915_, lean_object* v_e_1916_, lean_object* v_a_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
uint8_t v_usedLetOnly_boxed_1924_; uint8_t v_skipConstInApp_boxed_1925_; uint8_t v_skipInstances_boxed_1926_; lean_object* v_res_1927_; 
v_usedLetOnly_boxed_1924_ = lean_unbox(v_usedLetOnly_1913_);
v_skipConstInApp_boxed_1925_ = lean_unbox(v_skipConstInApp_1914_);
v_skipInstances_boxed_1926_ = lean_unbox(v_skipInstances_1915_);
v_res_1927_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__9(v_pre_1911_, v_post_1912_, v_usedLetOnly_boxed_1924_, v_skipConstInApp_boxed_1925_, v_skipInstances_boxed_1926_, v_e_1916_, v_a_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec(v_a_1917_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12___boxed(lean_object* v_pre_1928_, lean_object* v_post_1929_, lean_object* v_usedLetOnly_1930_, lean_object* v_skipConstInApp_1931_, lean_object* v_skipInstances_1932_, lean_object* v_fvars_1933_, lean_object* v_e_1934_, lean_object* v_a_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
uint8_t v_usedLetOnly_boxed_1942_; uint8_t v_skipConstInApp_boxed_1943_; uint8_t v_skipInstances_boxed_1944_; lean_object* v_res_1945_; 
v_usedLetOnly_boxed_1942_ = lean_unbox(v_usedLetOnly_1930_);
v_skipConstInApp_boxed_1943_ = lean_unbox(v_skipConstInApp_1931_);
v_skipInstances_boxed_1944_ = lean_unbox(v_skipInstances_1932_);
v_res_1945_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12(v_pre_1928_, v_post_1929_, v_usedLetOnly_boxed_1942_, v_skipConstInApp_boxed_1943_, v_skipInstances_boxed_1944_, v_fvars_1933_, v_e_1934_, v_a_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec(v___y_1938_);
lean_dec_ref(v___y_1937_);
lean_dec(v_a_1935_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13___boxed(lean_object* v_pre_1946_, lean_object* v_post_1947_, lean_object* v_usedLetOnly_1948_, lean_object* v_skipConstInApp_1949_, lean_object* v_skipInstances_1950_, lean_object* v_fvars_1951_, lean_object* v_e_1952_, lean_object* v_a_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
uint8_t v_usedLetOnly_boxed_1960_; uint8_t v_skipConstInApp_boxed_1961_; uint8_t v_skipInstances_boxed_1962_; lean_object* v_res_1963_; 
v_usedLetOnly_boxed_1960_ = lean_unbox(v_usedLetOnly_1948_);
v_skipConstInApp_boxed_1961_ = lean_unbox(v_skipConstInApp_1949_);
v_skipInstances_boxed_1962_ = lean_unbox(v_skipInstances_1950_);
v_res_1963_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__13(v_pre_1946_, v_post_1947_, v_usedLetOnly_boxed_1960_, v_skipConstInApp_boxed_1961_, v_skipInstances_boxed_1962_, v_fvars_1951_, v_e_1952_, v_a_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
lean_dec(v_a_1953_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4___boxed(lean_object* v_pre_1964_, lean_object* v_post_1965_, lean_object* v_usedLetOnly_1966_, lean_object* v_skipConstInApp_1967_, lean_object* v_skipInstances_1968_, lean_object* v_e_1969_, lean_object* v_a_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_){
_start:
{
uint8_t v_usedLetOnly_boxed_1977_; uint8_t v_skipConstInApp_boxed_1978_; uint8_t v_skipInstances_boxed_1979_; lean_object* v_res_1980_; 
v_usedLetOnly_boxed_1977_ = lean_unbox(v_usedLetOnly_1966_);
v_skipConstInApp_boxed_1978_ = lean_unbox(v_skipConstInApp_1967_);
v_skipInstances_boxed_1979_ = lean_unbox(v_skipInstances_1968_);
v_res_1980_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_1964_, v_post_1965_, v_usedLetOnly_boxed_1977_, v_skipConstInApp_boxed_1978_, v_skipInstances_boxed_1979_, v_e_1969_, v_a_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_);
lean_dec(v___y_1975_);
lean_dec_ref(v___y_1974_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v_a_1970_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14___boxed(lean_object* v_pre_1981_, lean_object* v_post_1982_, lean_object* v_usedLetOnly_1983_, lean_object* v_skipConstInApp_1984_, lean_object* v_skipInstances_1985_, lean_object* v_fvars_1986_, lean_object* v_e_1987_, lean_object* v_a_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
uint8_t v_usedLetOnly_boxed_1995_; uint8_t v_skipConstInApp_boxed_1996_; uint8_t v_skipInstances_boxed_1997_; lean_object* v_res_1998_; 
v_usedLetOnly_boxed_1995_ = lean_unbox(v_usedLetOnly_1983_);
v_skipConstInApp_boxed_1996_ = lean_unbox(v_skipConstInApp_1984_);
v_skipInstances_boxed_1997_ = lean_unbox(v_skipInstances_1985_);
v_res_1998_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14(v_pre_1981_, v_post_1982_, v_usedLetOnly_boxed_1995_, v_skipConstInApp_boxed_1996_, v_skipInstances_boxed_1997_, v_fvars_1986_, v_e_1987_, v_a_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_);
lean_dec(v___y_1993_);
lean_dec_ref(v___y_1992_);
lean_dec(v___y_1991_);
lean_dec_ref(v___y_1990_);
lean_dec(v_a_1988_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg___boxed(lean_object* v_upperBound_1999_, lean_object* v___x_2000_, lean_object* v_pre_2001_, lean_object* v_post_2002_, lean_object* v_usedLetOnly_2003_, lean_object* v_skipConstInApp_2004_, lean_object* v_skipInstances_2005_, lean_object* v_a_2006_, lean_object* v_b_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
uint8_t v_usedLetOnly_boxed_2015_; uint8_t v_skipConstInApp_boxed_2016_; uint8_t v_skipInstances_boxed_2017_; lean_object* v_res_2018_; 
v_usedLetOnly_boxed_2015_ = lean_unbox(v_usedLetOnly_2003_);
v_skipConstInApp_boxed_2016_ = lean_unbox(v_skipConstInApp_2004_);
v_skipInstances_boxed_2017_ = lean_unbox(v_skipInstances_2005_);
v_res_2018_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(v_upperBound_1999_, v___x_2000_, v_pre_2001_, v_post_2002_, v_usedLetOnly_boxed_2015_, v_skipConstInApp_boxed_2016_, v_skipInstances_boxed_2017_, v_a_2006_, v_b_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v___y_2008_);
lean_dec_ref(v___x_2000_);
lean_dec(v_upperBound_1999_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15___boxed(lean_object* v_skipInstances_2019_, lean_object* v_pre_2020_, lean_object* v_post_2021_, lean_object* v_usedLetOnly_2022_, lean_object* v_skipConstInApp_2023_, lean_object* v_x_2024_, lean_object* v_x_2025_, lean_object* v_x_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_){
_start:
{
uint8_t v_skipInstances_boxed_2034_; uint8_t v_usedLetOnly_boxed_2035_; uint8_t v_skipConstInApp_boxed_2036_; lean_object* v_res_2037_; 
v_skipInstances_boxed_2034_ = lean_unbox(v_skipInstances_2019_);
v_usedLetOnly_boxed_2035_ = lean_unbox(v_usedLetOnly_2022_);
v_skipConstInApp_boxed_2036_ = lean_unbox(v_skipConstInApp_2023_);
v_res_2037_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__15(v_skipInstances_boxed_2034_, v_pre_2020_, v_post_2021_, v_usedLetOnly_boxed_2035_, v_skipConstInApp_boxed_2036_, v_x_2024_, v_x_2025_, v_x_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2027_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_object* v_00_u03b1_2038_, lean_object* v_x_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_){
_start:
{
lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2046_ = lean_apply_1(v_x_2039_, lean_box(0));
v___x_2047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2046_);
lean_ctor_set(v___x_2047_, 1, v___y_2040_);
v___x_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2047_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2049_, lean_object* v_x_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
lean_object* v_res_2057_; 
v_res_2057_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(v_00_u03b1_2049_, v_x_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_);
lean_dec(v___y_2055_);
lean_dec_ref(v___y_2054_);
lean_dec(v___y_2053_);
lean_dec_ref(v___y_2052_);
return v_res_2057_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2058_ = lean_box(0);
v___x_2059_ = lean_unsigned_to_nat(16u);
v___x_2060_ = lean_mk_array(v___x_2059_, v___x_2058_);
return v___x_2060_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2061_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__0);
v___x_2062_ = lean_unsigned_to_nat(0u);
v___x_2063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2062_);
lean_ctor_set(v___x_2063_, 1, v___x_2061_);
return v___x_2063_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2(void){
_start:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2064_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__1);
v___x_2065_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2065_, 0, lean_box(0));
lean_closure_set(v___x_2065_, 1, lean_box(0));
lean_closure_set(v___x_2065_, 2, v___x_2064_);
return v___x_2065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(lean_object* v_input_2066_, lean_object* v_pre_2067_, lean_object* v_post_2068_, uint8_t v_usedLetOnly_2069_, uint8_t v_skipConstInApp_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
uint8_t v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v_a_2080_; lean_object* v_fst_2081_; lean_object* v_snd_2082_; lean_object* v___x_2083_; 
v___x_2077_ = 0;
v___x_2078_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2, &l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___closed__2);
v___x_2079_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_box(0), v___x_2078_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2080_);
lean_dec_ref(v___x_2079_);
v_fst_2081_ = lean_ctor_get(v_a_2080_, 0);
lean_inc(v_fst_2081_);
v_snd_2082_ = lean_ctor_get(v_a_2080_, 1);
lean_inc(v_snd_2082_);
lean_dec(v_a_2080_);
v___x_2083_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4(v_pre_2067_, v_post_2068_, v_usedLetOnly_2069_, v_skipConstInApp_2070_, v___x_2077_, v_input_2066_, v_fst_2081_, v_snd_2082_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v_a_2084_; lean_object* v_fst_2085_; lean_object* v_snd_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2105_; 
v_a_2084_ = lean_ctor_get(v___x_2083_, 0);
lean_inc(v_a_2084_);
lean_dec_ref_known(v___x_2083_, 1);
v_fst_2085_ = lean_ctor_get(v_a_2084_, 0);
lean_inc(v_fst_2085_);
v_snd_2086_ = lean_ctor_get(v_a_2084_, 1);
lean_inc(v_snd_2086_);
lean_dec(v_a_2084_);
v___x_2087_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2087_, 0, lean_box(0));
lean_closure_set(v___x_2087_, 1, lean_box(0));
lean_closure_set(v___x_2087_, 2, v_fst_2081_);
v___x_2088_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___lam__0(lean_box(0), v___x_2087_, v_snd_2086_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
v_a_2089_ = lean_ctor_get(v___x_2088_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2091_ = v___x_2088_;
v_isShared_2092_ = v_isSharedCheck_2105_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2088_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2105_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v_snd_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2103_; 
v_snd_2093_ = lean_ctor_get(v_a_2089_, 1);
v_isSharedCheck_2103_ = !lean_is_exclusive(v_a_2089_);
if (v_isSharedCheck_2103_ == 0)
{
lean_object* v_unused_2104_; 
v_unused_2104_ = lean_ctor_get(v_a_2089_, 0);
lean_dec(v_unused_2104_);
v___x_2095_ = v_a_2089_;
v_isShared_2096_ = v_isSharedCheck_2103_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_snd_2093_);
lean_dec(v_a_2089_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2103_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 0, v_fst_2085_);
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v_fst_2085_);
lean_ctor_set(v_reuseFailAlloc_2102_, 1, v_snd_2093_);
v___x_2098_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
lean_object* v___x_2100_; 
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 0, v___x_2098_);
v___x_2100_ = v___x_2091_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2098_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
}
}
else
{
lean_dec(v_fst_2081_);
return v___x_2083_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1___boxed(lean_object* v_input_2106_, lean_object* v_pre_2107_, lean_object* v_post_2108_, lean_object* v_usedLetOnly_2109_, lean_object* v_skipConstInApp_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
uint8_t v_usedLetOnly_boxed_2117_; uint8_t v_skipConstInApp_boxed_2118_; lean_object* v_res_2119_; 
v_usedLetOnly_boxed_2117_ = lean_unbox(v_usedLetOnly_2109_);
v_skipConstInApp_boxed_2118_ = lean_unbox(v_skipConstInApp_2110_);
v_res_2119_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_input_2106_, v_pre_2107_, v_post_2108_, v_usedLetOnly_boxed_2117_, v_skipConstInApp_boxed_2118_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
return v_res_2119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe(lean_object* v_e_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_){
_start:
{
lean_object* v___y_2129_; lean_object* v___x_2146_; uint8_t v_transparency_2147_; lean_object* v___f_2148_; lean_object* v___f_2149_; uint8_t v___x_2150_; uint8_t v___x_2151_; lean_object* v___x_2152_; uint8_t v___x_2153_; 
v___x_2146_ = l_Lean_Meta_Context_config(v_a_2123_);
v_transparency_2147_ = lean_ctor_get_uint8(v___x_2146_, 9);
lean_dec_ref(v___x_2146_);
v___f_2148_ = ((lean_object*)(l_Lean_Meta_expandCoe___closed__0));
v___f_2149_ = ((lean_object*)(l_Lean_Meta_expandCoe___closed__1));
v___x_2150_ = 0;
v___x_2151_ = 3;
v___x_2152_ = lean_box(0);
v___x_2153_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2147_, v___x_2151_);
if (v___x_2153_ == 0)
{
lean_object* v_keyedConfig_2154_; uint8_t v_trackZetaDelta_2155_; lean_object* v_zetaDeltaSet_2156_; lean_object* v_lctx_2157_; lean_object* v_localInstances_2158_; lean_object* v_defEqCtx_x3f_2159_; lean_object* v_synthPendingDepth_2160_; lean_object* v_customCanUnfoldPredicate_x3f_2161_; uint8_t v_univApprox_2162_; uint8_t v_inTypeClassResolution_2163_; uint8_t v_cacheInferType_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v_keyedConfig_2154_ = lean_ctor_get(v_a_2123_, 0);
v_trackZetaDelta_2155_ = lean_ctor_get_uint8(v_a_2123_, sizeof(void*)*7);
v_zetaDeltaSet_2156_ = lean_ctor_get(v_a_2123_, 1);
v_lctx_2157_ = lean_ctor_get(v_a_2123_, 2);
v_localInstances_2158_ = lean_ctor_get(v_a_2123_, 3);
v_defEqCtx_x3f_2159_ = lean_ctor_get(v_a_2123_, 4);
v_synthPendingDepth_2160_ = lean_ctor_get(v_a_2123_, 5);
v_customCanUnfoldPredicate_x3f_2161_ = lean_ctor_get(v_a_2123_, 6);
v_univApprox_2162_ = lean_ctor_get_uint8(v_a_2123_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2163_ = lean_ctor_get_uint8(v_a_2123_, sizeof(void*)*7 + 2);
v_cacheInferType_2164_ = lean_ctor_get_uint8(v_a_2123_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2154_);
v___x_2165_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2151_, v_keyedConfig_2154_);
lean_inc(v_customCanUnfoldPredicate_x3f_2161_);
lean_inc(v_synthPendingDepth_2160_);
lean_inc(v_defEqCtx_x3f_2159_);
lean_inc_ref(v_localInstances_2158_);
lean_inc_ref(v_lctx_2157_);
lean_inc(v_zetaDeltaSet_2156_);
v___x_2166_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2166_, 0, v___x_2165_);
lean_ctor_set(v___x_2166_, 1, v_zetaDeltaSet_2156_);
lean_ctor_set(v___x_2166_, 2, v_lctx_2157_);
lean_ctor_set(v___x_2166_, 3, v_localInstances_2158_);
lean_ctor_set(v___x_2166_, 4, v_defEqCtx_x3f_2159_);
lean_ctor_set(v___x_2166_, 5, v_synthPendingDepth_2160_);
lean_ctor_set(v___x_2166_, 6, v_customCanUnfoldPredicate_x3f_2161_);
lean_ctor_set_uint8(v___x_2166_, sizeof(void*)*7, v_trackZetaDelta_2155_);
lean_ctor_set_uint8(v___x_2166_, sizeof(void*)*7 + 1, v_univApprox_2162_);
lean_ctor_set_uint8(v___x_2166_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2163_);
lean_ctor_set_uint8(v___x_2166_, sizeof(void*)*7 + 3, v_cacheInferType_2164_);
v___x_2167_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_e_2122_, v___f_2149_, v___f_2148_, v___x_2150_, v___x_2150_, v___x_2152_, v___x_2166_, v_a_2124_, v_a_2125_, v_a_2126_);
lean_dec_ref_known(v___x_2166_, 7);
v___y_2129_ = v___x_2167_;
goto v___jp_2128_;
}
else
{
lean_object* v___x_2168_; 
v___x_2168_ = l_Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1(v_e_2122_, v___f_2149_, v___f_2148_, v___x_2150_, v___x_2150_, v___x_2152_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_);
v___y_2129_ = v___x_2168_;
goto v___jp_2128_;
}
v___jp_2128_:
{
if (lean_obj_tag(v___y_2129_) == 0)
{
lean_object* v_a_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2137_; 
v_a_2130_ = lean_ctor_get(v___y_2129_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___y_2129_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2132_ = v___y_2129_;
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_a_2130_);
lean_dec(v___y_2129_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2135_; 
if (v_isShared_2133_ == 0)
{
v___x_2135_ = v___x_2132_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_a_2130_);
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
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2145_; 
v_a_2138_ = lean_ctor_get(v___y_2129_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v___y_2129_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2140_ = v___y_2129_;
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___y_2129_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2143_; 
if (v_isShared_2141_ == 0)
{
v___x_2143_ = v___x_2140_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_a_2138_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_expandCoe___boxed(lean_object* v_e_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_){
_start:
{
lean_object* v_res_2175_; 
v_res_2175_ = l_Lean_Meta_expandCoe(v_e_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
lean_dec(v_a_2173_);
lean_dec_ref(v_a_2172_);
lean_dec(v_a_2171_);
lean_dec_ref(v_a_2170_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(lean_object* v_00_u03b2_2176_, lean_object* v_m_2177_, lean_object* v_a_2178_){
_start:
{
lean_object* v___x_2179_; 
v___x_2179_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___redArg(v_m_2177_, v_a_2178_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2180_, lean_object* v_m_2181_, lean_object* v_a_2182_){
_start:
{
lean_object* v_res_2183_; 
v_res_2183_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2(v_00_u03b2_2180_, v_m_2181_, v_a_2182_);
lean_dec(v_a_2182_);
lean_dec_ref(v_m_2181_);
return v_res_2183_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2184_, lean_object* v_x_2185_, lean_object* v_x_2186_){
_start:
{
uint8_t v___x_2187_; 
v___x_2187_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___redArg(v_x_2185_, v_x_2186_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2188_, lean_object* v_x_2189_, lean_object* v_x_2190_){
_start:
{
uint8_t v_res_2191_; lean_object* v_r_2192_; 
v_res_2191_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1(v_00_u03b2_2188_, v_x_2189_, v_x_2190_);
lean_dec_ref(v_x_2190_);
lean_dec_ref(v_x_2189_);
v_r_2192_ = lean_box(v_res_2191_);
return v_r_2192_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_2193_, lean_object* v_a_2194_, lean_object* v_x_2195_){
_start:
{
lean_object* v___x_2196_; 
v___x_2196_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___redArg(v_a_2194_, v_x_2195_);
return v___x_2196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2197_, lean_object* v_a_2198_, lean_object* v_x_2199_){
_start:
{
lean_object* v_res_2200_; 
v_res_2200_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__2_spec__5(v_00_u03b2_2197_, v_a_2198_, v_x_2199_);
lean_dec(v_x_2199_);
lean_dec(v_a_2198_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(lean_object* v_upperBound_2201_, lean_object* v___x_2202_, lean_object* v_pre_2203_, lean_object* v_post_2204_, uint8_t v_usedLetOnly_2205_, uint8_t v_skipConstInApp_2206_, uint8_t v_skipInstances_2207_, lean_object* v___x_2208_, lean_object* v_inst_2209_, lean_object* v_R_2210_, lean_object* v_a_2211_, lean_object* v_b_2212_, lean_object* v_c_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_){
_start:
{
lean_object* v___x_2221_; 
v___x_2221_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___redArg(v_upperBound_2201_, v___x_2202_, v_pre_2203_, v_post_2204_, v_usedLetOnly_2205_, v_skipConstInApp_2206_, v_skipInstances_2207_, v_a_2211_, v_b_2212_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10___boxed(lean_object** _args){
lean_object* v_upperBound_2222_ = _args[0];
lean_object* v___x_2223_ = _args[1];
lean_object* v_pre_2224_ = _args[2];
lean_object* v_post_2225_ = _args[3];
lean_object* v_usedLetOnly_2226_ = _args[4];
lean_object* v_skipConstInApp_2227_ = _args[5];
lean_object* v_skipInstances_2228_ = _args[6];
lean_object* v___x_2229_ = _args[7];
lean_object* v_inst_2230_ = _args[8];
lean_object* v_R_2231_ = _args[9];
lean_object* v_a_2232_ = _args[10];
lean_object* v_b_2233_ = _args[11];
lean_object* v_c_2234_ = _args[12];
lean_object* v___y_2235_ = _args[13];
lean_object* v___y_2236_ = _args[14];
lean_object* v___y_2237_ = _args[15];
lean_object* v___y_2238_ = _args[16];
lean_object* v___y_2239_ = _args[17];
lean_object* v___y_2240_ = _args[18];
lean_object* v___y_2241_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_2242_; uint8_t v_skipConstInApp_boxed_2243_; uint8_t v_skipInstances_boxed_2244_; lean_object* v_res_2245_; 
v_usedLetOnly_boxed_2242_ = lean_unbox(v_usedLetOnly_2226_);
v_skipConstInApp_boxed_2243_ = lean_unbox(v_skipConstInApp_2227_);
v_skipInstances_boxed_2244_ = lean_unbox(v_skipInstances_2228_);
v_res_2245_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__10(v_upperBound_2222_, v___x_2223_, v_pre_2224_, v_post_2225_, v_usedLetOnly_boxed_2242_, v_skipConstInApp_boxed_2243_, v_skipInstances_boxed_2244_, v___x_2229_, v_inst_2230_, v_R_2231_, v_a_2232_, v_b_2233_, v_c_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_);
lean_dec(v___y_2240_);
lean_dec_ref(v___y_2239_);
lean_dec(v___y_2238_);
lean_dec_ref(v___y_2237_);
lean_dec(v___y_2235_);
lean_dec(v___x_2229_);
lean_dec_ref(v___x_2223_);
lean_dec(v_upperBound_2222_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(lean_object* v_00_u03b2_2246_, lean_object* v_m_2247_, lean_object* v_a_2248_){
_start:
{
lean_object* v___x_2249_; 
v___x_2249_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___redArg(v_m_2247_, v_a_2248_);
return v___x_2249_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11___boxed(lean_object* v_00_u03b2_2250_, lean_object* v_m_2251_, lean_object* v_a_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11(v_00_u03b2_2250_, v_m_2251_, v_a_2252_);
lean_dec_ref(v_a_2252_);
lean_dec_ref(v_m_2251_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16(lean_object* v_00_u03b1_2254_, lean_object* v_name_2255_, uint8_t v_bi_2256_, lean_object* v_type_2257_, lean_object* v_k_2258_, uint8_t v_kind_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v___x_2267_; 
v___x_2267_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___redArg(v_name_2255_, v_bi_2256_, v_type_2257_, v_k_2258_, v_kind_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16___boxed(lean_object* v_00_u03b1_2268_, lean_object* v_name_2269_, lean_object* v_bi_2270_, lean_object* v_type_2271_, lean_object* v_k_2272_, lean_object* v_kind_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_){
_start:
{
uint8_t v_bi_boxed_2281_; uint8_t v_kind_boxed_2282_; lean_object* v_res_2283_; 
v_bi_boxed_2281_ = lean_unbox(v_bi_2270_);
v_kind_boxed_2282_ = lean_unbox(v_kind_2273_);
v_res_2283_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__12_spec__16(v_00_u03b1_2268_, v_name_2269_, v_bi_boxed_2281_, v_type_2271_, v_k_2272_, v_kind_boxed_2282_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2274_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19(lean_object* v_00_u03b1_2284_, lean_object* v_name_2285_, lean_object* v_type_2286_, lean_object* v_val_2287_, lean_object* v_k_2288_, uint8_t v_nondep_2289_, uint8_t v_kind_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_){
_start:
{
lean_object* v___x_2298_; 
v___x_2298_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___redArg(v_name_2285_, v_type_2286_, v_val_2287_, v_k_2288_, v_nondep_2289_, v_kind_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19___boxed(lean_object* v_00_u03b1_2299_, lean_object* v_name_2300_, lean_object* v_type_2301_, lean_object* v_val_2302_, lean_object* v_k_2303_, lean_object* v_nondep_2304_, lean_object* v_kind_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_){
_start:
{
uint8_t v_nondep_boxed_2313_; uint8_t v_kind_boxed_2314_; lean_object* v_res_2315_; 
v_nondep_boxed_2313_ = lean_unbox(v_nondep_2304_);
v_kind_boxed_2314_ = lean_unbox(v_kind_2305_);
v_res_2315_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__14_spec__19(v_00_u03b1_2299_, v_name_2300_, v_type_2301_, v_val_2302_, v_k_2303_, v_nondep_boxed_2313_, v_kind_boxed_2314_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec(v___y_2309_);
lean_dec_ref(v___y_2308_);
lean_dec(v___y_2306_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22(lean_object* v_00_u03b1_2316_, lean_object* v_ref_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v___x_2323_; 
v___x_2323_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___redArg(v_ref_2317_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22___boxed(lean_object* v_00_u03b1_2324_, lean_object* v_ref_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_){
_start:
{
lean_object* v_res_2331_; 
v_res_2331_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16_spec__22(v_00_u03b1_2324_, v_ref_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v___y_2327_);
lean_dec_ref(v___y_2326_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(lean_object* v_00_u03b1_2332_, lean_object* v_x_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_){
_start:
{
lean_object* v___x_2341_; 
v___x_2341_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___redArg(v_x_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_);
return v___x_2341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16___boxed(lean_object* v_00_u03b1_2342_, lean_object* v_x_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
lean_object* v_res_2351_; 
v_res_2351_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__16(v_00_u03b1_2342_, v_x_2343_, v___y_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_);
lean_dec(v___y_2349_);
lean_dec_ref(v___y_2348_);
lean_dec(v___y_2347_);
lean_dec_ref(v___y_2346_);
lean_dec(v___y_2344_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17(lean_object* v_00_u03b2_2352_, lean_object* v_m_2353_, lean_object* v_a_2354_, lean_object* v_b_2355_){
_start:
{
lean_object* v___x_2356_; 
v___x_2356_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17___redArg(v_m_2353_, v_a_2354_, v_b_2355_);
return v___x_2356_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2357_, lean_object* v_x_2358_, size_t v_x_2359_, lean_object* v_x_2360_){
_start:
{
uint8_t v___x_2361_; 
v___x_2361_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___redArg(v_x_2358_, v_x_2359_, v_x_2360_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2362_, lean_object* v_x_2363_, lean_object* v_x_2364_, lean_object* v_x_2365_){
_start:
{
size_t v_x_39090__boxed_2366_; uint8_t v_res_2367_; lean_object* v_r_2368_; 
v_x_39090__boxed_2366_ = lean_unbox_usize(v_x_2364_);
lean_dec(v_x_2364_);
v_res_2367_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_2362_, v_x_2363_, v_x_39090__boxed_2366_, v_x_2365_);
lean_dec_ref(v_x_2365_);
lean_dec_ref(v_x_2363_);
v_r_2368_ = lean_box(v_res_2367_);
return v_r_2368_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14(lean_object* v_00_u03b2_2369_, lean_object* v_a_2370_, lean_object* v_x_2371_){
_start:
{
lean_object* v___x_2372_; 
v___x_2372_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___redArg(v_a_2370_, v_x_2371_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14___boxed(lean_object* v_00_u03b2_2373_, lean_object* v_a_2374_, lean_object* v_x_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__11_spec__14(v_00_u03b2_2373_, v_a_2374_, v_x_2375_);
lean_dec(v_x_2375_);
lean_dec_ref(v_a_2374_);
return v_res_2376_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24(lean_object* v_00_u03b2_2377_, lean_object* v_a_2378_, lean_object* v_x_2379_){
_start:
{
uint8_t v___x_2380_; 
v___x_2380_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___redArg(v_a_2378_, v_x_2379_);
return v___x_2380_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24___boxed(lean_object* v_00_u03b2_2381_, lean_object* v_a_2382_, lean_object* v_x_2383_){
_start:
{
uint8_t v_res_2384_; lean_object* v_r_2385_; 
v_res_2384_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__24(v_00_u03b2_2381_, v_a_2382_, v_x_2383_);
lean_dec(v_x_2383_);
lean_dec_ref(v_a_2382_);
v_r_2385_ = lean_box(v_res_2384_);
return v_r_2385_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25(lean_object* v_00_u03b2_2386_, lean_object* v_data_2387_){
_start:
{
lean_object* v___x_2388_; 
v___x_2388_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25___redArg(v_data_2387_);
return v___x_2388_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26(lean_object* v_00_u03b2_2389_, lean_object* v_a_2390_, lean_object* v_b_2391_, lean_object* v_x_2392_){
_start:
{
lean_object* v___x_2393_; 
v___x_2393_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__26___redArg(v_a_2390_, v_b_2391_, v_x_2392_);
return v___x_2393_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2394_, lean_object* v_keys_2395_, lean_object* v_vals_2396_, lean_object* v_heq_2397_, lean_object* v_i_2398_, lean_object* v_k_2399_){
_start:
{
uint8_t v___x_2400_; 
v___x_2400_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_keys_2395_, v_i_2398_, v_k_2399_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7___boxed(lean_object* v_00_u03b2_2401_, lean_object* v_keys_2402_, lean_object* v_vals_2403_, lean_object* v_heq_2404_, lean_object* v_i_2405_, lean_object* v_k_2406_){
_start:
{
uint8_t v_res_2407_; lean_object* v_r_2408_; 
v_res_2407_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__1_spec__3_spec__7(v_00_u03b2_2401_, v_keys_2402_, v_vals_2403_, v_heq_2404_, v_i_2405_, v_k_2406_);
lean_dec_ref(v_k_2406_);
lean_dec_ref(v_vals_2403_);
lean_dec_ref(v_keys_2402_);
v_r_2408_ = lean_box(v_res_2407_);
return v_r_2408_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27(lean_object* v_00_u03b2_2409_, lean_object* v_i_2410_, lean_object* v_source_2411_, lean_object* v_target_2412_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27___redArg(v_i_2410_, v_source_2411_, v_target_2412_);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28(lean_object* v_00_u03b2_2414_, lean_object* v_x_2415_, lean_object* v_x_2416_){
_start:
{
lean_object* v___x_2417_; 
v___x_2417_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_expandCoe_spec__1_spec__4_spec__17_spec__25_spec__27_spec__28___redArg(v_x_2415_, v_x_2416_);
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(lean_object* v_name_2418_, lean_object* v_decl_2419_, lean_object* v_ref_2420_){
_start:
{
lean_object* v_defValue_2422_; lean_object* v_descr_2423_; lean_object* v_deprecation_x3f_2424_; lean_object* v___x_2425_; uint8_t v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v_defValue_2422_ = lean_ctor_get(v_decl_2419_, 0);
v_descr_2423_ = lean_ctor_get(v_decl_2419_, 1);
v_deprecation_x3f_2424_ = lean_ctor_get(v_decl_2419_, 2);
v___x_2425_ = lean_alloc_ctor(1, 0, 1);
v___x_2426_ = lean_unbox(v_defValue_2422_);
lean_ctor_set_uint8(v___x_2425_, 0, v___x_2426_);
lean_inc(v_deprecation_x3f_2424_);
lean_inc_ref(v_descr_2423_);
lean_inc_n(v_name_2418_, 2);
v___x_2427_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2427_, 0, v_name_2418_);
lean_ctor_set(v___x_2427_, 1, v_ref_2420_);
lean_ctor_set(v___x_2427_, 2, v___x_2425_);
lean_ctor_set(v___x_2427_, 3, v_descr_2423_);
lean_ctor_set(v___x_2427_, 4, v_deprecation_x3f_2424_);
v___x_2428_ = lean_register_option(v_name_2418_, v___x_2427_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2436_; 
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2436_ == 0)
{
lean_object* v_unused_2437_; 
v_unused_2437_ = lean_ctor_get(v___x_2428_, 0);
lean_dec(v_unused_2437_);
v___x_2430_ = v___x_2428_;
v_isShared_2431_ = v_isSharedCheck_2436_;
goto v_resetjp_2429_;
}
else
{
lean_dec(v___x_2428_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2436_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2432_; lean_object* v___x_2434_; 
lean_inc(v_defValue_2422_);
v___x_2432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2432_, 0, v_name_2418_);
lean_ctor_set(v___x_2432_, 1, v_defValue_2422_);
if (v_isShared_2431_ == 0)
{
lean_ctor_set(v___x_2430_, 0, v___x_2432_);
v___x_2434_ = v___x_2430_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v___x_2432_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
else
{
lean_object* v_a_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2445_; 
lean_dec(v_name_2418_);
v_a_2438_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2440_ = v___x_2428_;
v_isShared_2441_ = v_isSharedCheck_2445_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_a_2438_);
lean_dec(v___x_2428_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2445_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
lean_object* v___x_2443_; 
if (v_isShared_2441_ == 0)
{
v___x_2443_ = v___x_2440_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v_a_2438_);
v___x_2443_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
return v___x_2443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_2446_, lean_object* v_decl_2447_, lean_object* v_ref_2448_, lean_object* v_a_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(v_name_2446_, v_decl_2447_, v_ref_2448_);
lean_dec_ref(v_decl_2447_);
return v_res_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2465_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2466_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2467_ = ((lean_object*)(l___private_Lean_Meta_Coe_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_));
v___x_2468_ = l_Lean_Option_register___at___00__private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4__spec__0(v___x_2465_, v___x_2466_, v___x_2467_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4____boxed(lean_object* v_a_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(lean_object* v_msg_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_){
_start:
{
lean_object* v_ref_2477_; lean_object* v___x_2478_; lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2487_; 
v_ref_2477_ = lean_ctor_get(v___y_2474_, 2);
v___x_2478_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0_spec__2_spec__5(v_msg_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_);
v_a_2479_ = lean_ctor_get(v___x_2478_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2478_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2481_ = v___x_2478_;
v_isShared_2482_ = v_isSharedCheck_2487_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2478_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2487_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2483_; lean_object* v___x_2485_; 
lean_inc(v_ref_2477_);
v___x_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2483_, 0, v_ref_2477_);
lean_ctor_set(v___x_2483_, 1, v_a_2479_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set_tag(v___x_2481_, 1);
lean_ctor_set(v___x_2481_, 0, v___x_2483_);
v___x_2485_ = v___x_2481_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v___x_2483_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg___boxed(lean_object* v_msg_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v_msg_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_);
lean_dec(v___y_2492_);
lean_dec_ref(v___y_2491_);
lean_dec(v___y_2490_);
lean_dec_ref(v___y_2489_);
return v_res_2494_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4(void){
_start:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2502_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__3));
v___x_2503_ = l_Lean_stringToMessageData(v___x_2502_);
return v___x_2503_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6(void){
_start:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2505_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__5));
v___x_2506_ = l_Lean_stringToMessageData(v___x_2505_);
return v___x_2506_;
}
}
static lean_object* _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8(void){
_start:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__7));
v___x_2509_ = l_Lean_stringToMessageData(v___x_2508_);
return v___x_2509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f(lean_object* v_expr_2510_, lean_object* v_expectedType_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_){
_start:
{
lean_object* v___x_2517_; 
lean_inc(v_a_2515_);
lean_inc_ref(v_a_2514_);
lean_inc(v_a_2513_);
lean_inc_ref(v_a_2512_);
lean_inc_ref(v_expr_2510_);
v___x_2517_ = lean_infer_type(v_expr_2510_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_);
if (lean_obj_tag(v___x_2517_) == 0)
{
lean_object* v_a_2518_; lean_object* v___x_2519_; 
v_a_2518_ = lean_ctor_get(v___x_2517_, 0);
lean_inc_n(v_a_2518_, 2);
lean_dec_ref_known(v___x_2517_, 1);
v___x_2519_ = l_Lean_Meta_getLevel(v_a_2518_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v_a_2520_; lean_object* v___x_2521_; 
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2519_, 1);
lean_inc_ref(v_expectedType_2511_);
v___x_2521_ = l_Lean_Meta_getLevel(v_expectedType_2511_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_a_2522_);
lean_dec_ref_known(v___x_2521_, 1);
v___x_2523_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1));
v___x_2524_ = lean_box(0);
v___x_2525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2525_, 0, v_a_2522_);
lean_ctor_set(v___x_2525_, 1, v___x_2524_);
v___x_2526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2526_, 0, v_a_2520_);
lean_ctor_set(v___x_2526_, 1, v___x_2525_);
lean_inc_ref(v___x_2526_);
v___x_2527_ = l_Lean_mkConst(v___x_2523_, v___x_2526_);
v___x_2528_ = lean_unsigned_to_nat(3u);
v___x_2529_ = lean_mk_empty_array_with_capacity(v___x_2528_);
lean_inc(v_a_2518_);
v___x_2530_ = lean_array_push(v___x_2529_, v_a_2518_);
lean_inc_ref(v_expr_2510_);
v___x_2531_ = lean_array_push(v___x_2530_, v_expr_2510_);
lean_inc_ref(v_expectedType_2511_);
v___x_2532_ = lean_array_push(v___x_2531_, v_expectedType_2511_);
v___x_2533_ = l_Lean_mkAppN(v___x_2527_, v___x_2532_);
lean_dec_ref(v___x_2532_);
v___x_2534_ = lean_box(0);
v___x_2535_ = l_Lean_Meta_trySynthInstance(v___x_2533_, v___x_2534_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2633_; 
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2538_ = v___x_2535_;
v_isShared_2539_ = v_isSharedCheck_2633_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2535_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2633_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
switch(lean_obj_tag(v_a_2536_))
{
case 0:
{
lean_object* v___x_2540_; lean_object* v___x_2542_; 
lean_dec_ref_known(v___x_2526_, 2);
lean_dec(v_a_2518_);
lean_dec_ref(v_expectedType_2511_);
lean_dec_ref(v_expr_2510_);
v___x_2540_ = lean_box(0);
if (v_isShared_2539_ == 0)
{
lean_ctor_set(v___x_2538_, 0, v___x_2540_);
v___x_2542_ = v___x_2538_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2540_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
case 1:
{
lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2628_; 
lean_del_object(v___x_2538_);
v_a_2544_ = lean_ctor_get(v_a_2536_, 0);
v_isSharedCheck_2628_ = !lean_is_exclusive(v_a_2536_);
if (v_isSharedCheck_2628_ == 0)
{
v___x_2546_ = v_a_2536_;
v_isShared_2547_ = v_isSharedCheck_2628_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_dec(v_a_2536_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2628_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2548_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__2));
v___x_2549_ = l_Lean_mkConst(v___x_2548_, v___x_2526_);
v___x_2550_ = lean_unsigned_to_nat(4u);
v___x_2551_ = lean_mk_empty_array_with_capacity(v___x_2550_);
v___x_2552_ = lean_array_push(v___x_2551_, v_a_2518_);
lean_inc_ref(v_expr_2510_);
v___x_2553_ = lean_array_push(v___x_2552_, v_expr_2510_);
lean_inc_ref(v_expectedType_2511_);
v___x_2554_ = lean_array_push(v___x_2553_, v_expectedType_2511_);
v___x_2555_ = lean_array_push(v___x_2554_, v_a_2544_);
v___x_2556_ = l_Lean_mkAppN(v___x_2549_, v___x_2555_);
lean_dec_ref(v___x_2555_);
v___x_2557_ = l_Lean_Meta_expandCoe(v___x_2556_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2619_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2619_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2619_ == 0)
{
v___x_2560_ = v___x_2557_;
v_isShared_2561_ = v_isSharedCheck_2619_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2557_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2619_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v_fst_2569_; lean_object* v___x_2570_; 
v_fst_2569_ = lean_ctor_get(v_a_2558_, 0);
lean_inc(v_a_2515_);
lean_inc_ref(v_a_2514_);
lean_inc(v_a_2513_);
lean_inc_ref(v_a_2512_);
lean_inc(v_fst_2569_);
v___x_2570_ = lean_infer_type(v_fst_2569_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; lean_object* v___x_2572_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_a_2571_);
lean_dec_ref_known(v___x_2570_, 1);
lean_inc_ref(v_expectedType_2511_);
v___x_2572_ = l_Lean_Meta_isExprDefEq(v_a_2571_, v_expectedType_2511_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v_a_2573_; uint8_t v___x_2574_; 
v_a_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_a_2573_);
lean_dec_ref_known(v___x_2572_, 1);
v___x_2574_ = lean_unbox(v_a_2573_);
lean_dec(v_a_2573_);
if (v___x_2574_ == 0)
{
lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2600_; 
lean_inc(v_fst_2569_);
lean_del_object(v___x_2560_);
lean_del_object(v___x_2546_);
v_isSharedCheck_2600_ = !lean_is_exclusive(v_a_2558_);
if (v_isSharedCheck_2600_ == 0)
{
lean_object* v_unused_2601_; lean_object* v_unused_2602_; 
v_unused_2601_ = lean_ctor_get(v_a_2558_, 1);
lean_dec(v_unused_2601_);
v_unused_2602_ = lean_ctor_get(v_a_2558_, 0);
lean_dec(v_unused_2602_);
v___x_2576_ = v_a_2558_;
v_isShared_2577_ = v_isSharedCheck_2600_;
goto v_resetjp_2575_;
}
else
{
lean_dec(v_a_2558_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2600_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2581_; 
v___x_2578_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__4);
v___x_2579_ = l_Lean_indentExpr(v_expr_2510_);
if (v_isShared_2577_ == 0)
{
lean_ctor_set_tag(v___x_2576_, 7);
lean_ctor_set(v___x_2576_, 1, v___x_2579_);
lean_ctor_set(v___x_2576_, 0, v___x_2578_);
v___x_2581_ = v___x_2576_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v___x_2578_);
lean_ctor_set(v_reuseFailAlloc_2599_, 1, v___x_2579_);
v___x_2581_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
v___x_2582_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__6);
v___x_2583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2581_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
v___x_2584_ = l_Lean_indentExpr(v_expectedType_2511_);
v___x_2585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2583_);
lean_ctor_set(v___x_2585_, 1, v___x_2584_);
v___x_2586_ = lean_obj_once(&l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8, &l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8_once, _init_l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__8);
v___x_2587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2585_);
lean_ctor_set(v___x_2587_, 1, v___x_2586_);
v___x_2588_ = l_Lean_indentExpr(v_fst_2569_);
v___x_2589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2587_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
v___x_2590_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_2589_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_);
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2590_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2593_ = v___x_2590_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v___x_2590_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2591_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
}
else
{
lean_dec_ref(v_expectedType_2511_);
lean_dec_ref(v_expr_2510_);
goto v___jp_2562_;
}
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
lean_del_object(v___x_2560_);
lean_dec(v_a_2558_);
lean_del_object(v___x_2546_);
lean_dec_ref(v_expectedType_2511_);
lean_dec_ref(v_expr_2510_);
v_a_2603_ = lean_ctor_get(v___x_2572_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2572_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2572_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2603_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_del_object(v___x_2560_);
lean_dec(v_a_2558_);
lean_del_object(v___x_2546_);
lean_dec_ref(v_expectedType_2511_);
lean_dec_ref(v_expr_2510_);
v_a_2611_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2570_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2570_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
v___jp_2562_:
{
lean_object* v___x_2564_; 
if (v_isShared_2547_ == 0)
{
lean_ctor_set(v___x_2546_, 0, v_a_2558_);
v___x_2564_ = v___x_2546_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2558_);
v___x_2564_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
lean_object* v___x_2566_; 
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 0, v___x_2564_);
v___x_2566_ = v___x_2560_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v___x_2564_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
}
}
else
{
lean_object* v_a_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2627_; 
lean_del_object(v___x_2546_);
lean_dec_ref(v_expectedType_2511_);
lean_dec_ref(v_expr_2510_);
v_a_2620_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2622_ = v___x_2557_;
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_a_2620_);
lean_dec(v___x_2557_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2625_; 
if (v_isShared_2623_ == 0)
{
v___x_2625_ = v___x_2622_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v_a_2620_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
}
}
}
default: 
{
lean_object* v___x_2629_; lean_object* v___x_2631_; 
lean_dec_ref_known(v___x_2526_, 2);
lean_dec(v_a_2518_);
lean_dec_ref(v_expectedType_2511_);
lean_dec_ref(v_expr_2510_);
v___x_2629_ = lean_box(2);
if (v_isShared_2539_ == 0)
{
lean_ctor_set(v___x_2538_, 0, v___x_2629_);
v___x_2631_ = v___x_2538_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v___x_2629_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
}
}
else
{
lean_object* v_a_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2641_; 
lean_dec_ref_known(v___x_2526_, 2);
lean_dec(v_a_2518_);
lean_dec_ref(v_expectedType_2511_);
lean_dec_ref(v_expr_2510_);
v_a_2634_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2641_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2641_ == 0)
{
v___x_2636_ = v___x_2535_;
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_a_2634_);
lean_dec(v___x_2535_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
v_resetjp_2635_:
{
lean_object* v___x_2639_; 
if (v_isShared_2637_ == 0)
{
v___x_2639_ = v___x_2636_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v_a_2634_);
v___x_2639_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
return v___x_2639_;
}
}
}
}
else
{
lean_object* v_a_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2649_; 
lean_dec(v_a_2520_);
lean_dec(v_a_2518_);
lean_dec_ref(v_expectedType_2511_);
lean_dec_ref(v_expr_2510_);
v_a_2642_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2649_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2649_ == 0)
{
v___x_2644_ = v___x_2521_;
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_a_2642_);
lean_dec(v___x_2521_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v___x_2647_; 
if (v_isShared_2645_ == 0)
{
v___x_2647_ = v___x_2644_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_a_2642_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
}
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2657_; 
lean_dec(v_a_2518_);
lean_dec_ref(v_expectedType_2511_);
lean_dec_ref(v_expr_2510_);
v_a_2650_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2652_ = v___x_2519_;
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2519_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2655_; 
if (v_isShared_2653_ == 0)
{
v___x_2655_ = v___x_2652_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_a_2650_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
}
else
{
lean_object* v_a_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2665_; 
lean_dec_ref(v_expectedType_2511_);
lean_dec_ref(v_expr_2510_);
v_a_2658_ = lean_ctor_get(v___x_2517_, 0);
v_isSharedCheck_2665_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2660_ = v___x_2517_;
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_a_2658_);
lean_dec(v___x_2517_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2663_; 
if (v_isShared_2661_ == 0)
{
v___x_2663_ = v___x_2660_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v_a_2658_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimpleRecordingNames_x3f___boxed(lean_object* v_expr_2666_, lean_object* v_expectedType_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_){
_start:
{
lean_object* v_res_2673_; 
v_res_2673_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_2666_, v_expectedType_2667_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_);
lean_dec(v_a_2671_);
lean_dec_ref(v_a_2670_);
lean_dec(v_a_2669_);
lean_dec_ref(v_a_2668_);
return v_res_2673_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(lean_object* v_00_u03b1_2674_, lean_object* v_msg_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_){
_start:
{
lean_object* v___x_2681_; 
v___x_2681_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v_msg_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_);
return v___x_2681_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___boxed(lean_object* v_00_u03b1_2682_, lean_object* v_msg_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0(v_00_u03b1_2682_, v_msg_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f(lean_object* v_expr_2690_, lean_object* v_expectedType_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_){
_start:
{
lean_object* v___x_2697_; 
v___x_2697_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_2690_, v_expectedType_2691_, v_a_2692_, v_a_2693_, v_a_2694_, v_a_2695_);
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v_a_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2722_; 
v_a_2698_ = lean_ctor_get(v___x_2697_, 0);
v_isSharedCheck_2722_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2700_ = v___x_2697_;
v_isShared_2701_ = v_isSharedCheck_2722_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_a_2698_);
lean_dec(v___x_2697_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2722_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
switch(lean_obj_tag(v_a_2698_))
{
case 0:
{
lean_object* v___x_2702_; lean_object* v___x_2704_; 
v___x_2702_ = lean_box(0);
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 0, v___x_2702_);
v___x_2704_ = v___x_2700_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v___x_2702_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
case 1:
{
lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2717_; 
v_a_2706_ = lean_ctor_get(v_a_2698_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v_a_2698_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2708_ = v_a_2698_;
v_isShared_2709_ = v_isSharedCheck_2717_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v_a_2698_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2717_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v_fst_2710_; lean_object* v___x_2712_; 
v_fst_2710_ = lean_ctor_get(v_a_2706_, 0);
lean_inc(v_fst_2710_);
lean_dec(v_a_2706_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v_fst_2710_);
v___x_2712_ = v___x_2708_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_fst_2710_);
v___x_2712_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
lean_object* v___x_2714_; 
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 0, v___x_2712_);
v___x_2714_ = v___x_2700_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v___x_2712_);
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
default: 
{
lean_object* v___x_2718_; lean_object* v___x_2720_; 
v___x_2718_ = lean_box(2);
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 0, v___x_2718_);
v___x_2720_ = v___x_2700_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v___x_2718_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
return v___x_2720_;
}
}
}
}
}
else
{
lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2730_; 
v_a_2723_ = lean_ctor_get(v___x_2697_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2725_ = v___x_2697_;
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_dec(v___x_2697_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
if (v_isShared_2726_ == 0)
{
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_a_2723_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceSimple_x3f___boxed(lean_object* v_expr_2731_, lean_object* v_expectedType_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_){
_start:
{
lean_object* v_res_2738_; 
v_res_2738_ = l_Lean_Meta_coerceSimple_x3f(v_expr_2731_, v_expectedType_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_);
lean_dec(v_a_2736_);
lean_dec_ref(v_a_2735_);
lean_dec(v_a_2734_);
lean_dec_ref(v_a_2733_);
return v_res_2738_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__4(void){
_start:
{
lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2746_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__3));
v___x_2747_ = l_Lean_stringToMessageData(v___x_2746_);
return v___x_2747_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__6(void){
_start:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2749_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__5));
v___x_2750_ = l_Lean_stringToMessageData(v___x_2749_);
return v___x_2750_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToFunction_x3f___closed__8(void){
_start:
{
lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2752_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__7));
v___x_2753_ = l_Lean_stringToMessageData(v___x_2752_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f(lean_object* v_expr_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_){
_start:
{
lean_object* v___x_2760_; 
lean_inc(v_a_2758_);
lean_inc_ref(v_a_2757_);
lean_inc(v_a_2756_);
lean_inc_ref(v_a_2755_);
lean_inc_ref(v_expr_2754_);
v___x_2760_ = lean_infer_type(v_expr_2754_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2762_; 
v_a_2761_ = lean_ctor_get(v___x_2760_, 0);
lean_inc_n(v_a_2761_, 2);
lean_dec_ref_known(v___x_2760_, 1);
v___x_2762_ = l_Lean_Meta_getLevel(v_a_2761_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_);
if (lean_obj_tag(v___x_2762_) == 0)
{
lean_object* v_a_2763_; lean_object* v___x_2764_; 
v_a_2763_ = lean_ctor_get(v___x_2762_, 0);
lean_inc(v_a_2763_);
lean_dec_ref_known(v___x_2762_, 1);
v___x_2764_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_);
if (lean_obj_tag(v___x_2764_) == 0)
{
lean_object* v_a_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; 
v_a_2765_ = lean_ctor_get(v___x_2764_, 0);
lean_inc_n(v_a_2765_, 2);
lean_dec_ref_known(v___x_2764_, 1);
v___x_2766_ = l_Lean_mkSort(v_a_2765_);
lean_inc(v_a_2761_);
v___x_2767_ = l_Lean_mkArrow(v_a_2761_, v___x_2766_, v_a_2757_, v_a_2758_);
if (lean_obj_tag(v___x_2767_) == 0)
{
lean_object* v_a_2768_; lean_object* v___x_2769_; uint8_t v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v_a_2768_ = lean_ctor_get(v___x_2767_, 0);
lean_inc(v_a_2768_);
lean_dec_ref_known(v___x_2767_, 1);
v___x_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2769_, 0, v_a_2768_);
v___x_2770_ = 0;
v___x_2771_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1);
v___x_2772_ = l_Lean_Meta_mkFreshExprMVar(v___x_2769_, v___x_2770_, v___x_2771_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_);
if (lean_obj_tag(v___x_2772_) == 0)
{
lean_object* v_a_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v_a_2773_ = lean_ctor_get(v___x_2772_, 0);
lean_inc_n(v_a_2773_, 2);
lean_dec_ref_known(v___x_2772_, 1);
v___x_2774_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__1));
v___x_2775_ = lean_box(0);
v___x_2776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2776_, 0, v_a_2765_);
lean_ctor_set(v___x_2776_, 1, v___x_2775_);
v___x_2777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2777_, 0, v_a_2763_);
lean_ctor_set(v___x_2777_, 1, v___x_2776_);
lean_inc_ref(v___x_2777_);
v___x_2778_ = l_Lean_Expr_const___override(v___x_2774_, v___x_2777_);
lean_inc(v_a_2761_);
v___x_2779_ = l_Lean_mkAppB(v___x_2778_, v_a_2761_, v_a_2773_);
v___x_2780_ = lean_box(0);
v___x_2781_ = l_Lean_Meta_trySynthInstance(v___x_2779_, v___x_2780_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2868_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2784_ = v___x_2781_;
v_isShared_2785_ = v_isSharedCheck_2868_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2781_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2868_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
if (lean_obj_tag(v_a_2782_) == 1)
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2864_; 
lean_del_object(v___x_2784_);
v_a_2786_ = lean_ctor_get(v_a_2782_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v_a_2782_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2788_ = v_a_2782_;
v_isShared_2789_ = v_isSharedCheck_2864_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v_a_2782_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2864_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2790_ = ((lean_object*)(l_Lean_Meta_coerceToFunction_x3f___closed__2));
v___x_2791_ = l_Lean_Expr_const___override(v___x_2790_, v___x_2777_);
lean_inc_ref(v_expr_2754_);
lean_inc(v_a_2786_);
v___x_2792_ = l_Lean_mkApp4(v___x_2791_, v_a_2761_, v_a_2773_, v_a_2786_, v_expr_2754_);
v___x_2793_ = l_Lean_Meta_expandCoe(v___x_2792_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2855_; 
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2796_ = v___x_2793_;
v_isShared_2797_ = v_isSharedCheck_2855_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2793_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2855_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v_fst_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2853_; 
v_fst_2798_ = lean_ctor_get(v_a_2794_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v_a_2794_);
if (v_isSharedCheck_2853_ == 0)
{
lean_object* v_unused_2854_; 
v_unused_2854_ = lean_ctor_get(v_a_2794_, 1);
lean_dec(v_unused_2854_);
v___x_2800_ = v_a_2794_;
v_isShared_2801_ = v_isSharedCheck_2853_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_fst_2798_);
lean_dec(v_a_2794_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2853_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
lean_object* v___x_2809_; 
lean_inc(v_a_2758_);
lean_inc_ref(v_a_2757_);
lean_inc(v_a_2756_);
lean_inc_ref(v_a_2755_);
lean_inc(v_fst_2798_);
v___x_2809_ = lean_infer_type(v_fst_2798_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_object* v_a_2810_; lean_object* v___x_2811_; 
v_a_2810_ = lean_ctor_get(v___x_2809_, 0);
lean_inc(v_a_2810_);
lean_dec_ref_known(v___x_2809_, 1);
lean_inc(v_a_2758_);
lean_inc_ref(v_a_2757_);
lean_inc(v_a_2756_);
lean_inc_ref(v_a_2755_);
v___x_2811_ = lean_whnf(v_a_2810_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; uint8_t v___x_2813_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2812_);
lean_dec_ref_known(v___x_2811_, 1);
v___x_2813_ = l_Lean_Expr_isForall(v_a_2812_);
lean_dec(v_a_2812_);
if (v___x_2813_ == 0)
{
lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2817_; 
lean_del_object(v___x_2796_);
lean_del_object(v___x_2788_);
v___x_2814_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__4, &l_Lean_Meta_coerceToFunction_x3f___closed__4_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__4);
v___x_2815_ = l_Lean_indentExpr(v_expr_2754_);
if (v_isShared_2801_ == 0)
{
lean_ctor_set_tag(v___x_2800_, 7);
lean_ctor_set(v___x_2800_, 1, v___x_2815_);
lean_ctor_set(v___x_2800_, 0, v___x_2814_);
v___x_2817_ = v___x_2800_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v___x_2814_);
lean_ctor_set(v_reuseFailAlloc_2836_, 1, v___x_2815_);
v___x_2817_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
v___x_2818_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__6, &l_Lean_Meta_coerceToFunction_x3f___closed__6_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__6);
v___x_2819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2819_, 0, v___x_2817_);
lean_ctor_set(v___x_2819_, 1, v___x_2818_);
v___x_2820_ = l_Lean_indentExpr(v_fst_2798_);
v___x_2821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2819_);
lean_ctor_set(v___x_2821_, 1, v___x_2820_);
v___x_2822_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__8, &l_Lean_Meta_coerceToFunction_x3f___closed__8_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__8);
v___x_2823_ = l_Lean_indentExpr(v_a_2786_);
v___x_2824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2822_);
lean_ctor_set(v___x_2824_, 1, v___x_2823_);
v___x_2825_ = l_Lean_MessageData_hint_x27(v___x_2824_);
v___x_2826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2821_);
lean_ctor_set(v___x_2826_, 1, v___x_2825_);
v___x_2827_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_2826_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_);
v_a_2828_ = lean_ctor_get(v___x_2827_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2830_ = v___x_2827_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2827_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_a_2828_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
else
{
lean_del_object(v___x_2800_);
lean_dec(v_a_2786_);
lean_dec_ref(v_expr_2754_);
goto v___jp_2802_;
}
}
else
{
lean_object* v_a_2837_; lean_object* v___x_2839_; uint8_t v_isShared_2840_; uint8_t v_isSharedCheck_2844_; 
lean_del_object(v___x_2800_);
lean_dec(v_fst_2798_);
lean_del_object(v___x_2796_);
lean_del_object(v___x_2788_);
lean_dec(v_a_2786_);
lean_dec_ref(v_expr_2754_);
v_a_2837_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_2844_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2844_ == 0)
{
v___x_2839_ = v___x_2811_;
v_isShared_2840_ = v_isSharedCheck_2844_;
goto v_resetjp_2838_;
}
else
{
lean_inc(v_a_2837_);
lean_dec(v___x_2811_);
v___x_2839_ = lean_box(0);
v_isShared_2840_ = v_isSharedCheck_2844_;
goto v_resetjp_2838_;
}
v_resetjp_2838_:
{
lean_object* v___x_2842_; 
if (v_isShared_2840_ == 0)
{
v___x_2842_ = v___x_2839_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v_a_2837_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
}
}
else
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2852_; 
lean_del_object(v___x_2800_);
lean_dec(v_fst_2798_);
lean_del_object(v___x_2796_);
lean_del_object(v___x_2788_);
lean_dec(v_a_2786_);
lean_dec_ref(v_expr_2754_);
v_a_2845_ = lean_ctor_get(v___x_2809_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2847_ = v___x_2809_;
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v___x_2809_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_a_2845_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
v___jp_2802_:
{
lean_object* v___x_2804_; 
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 0, v_fst_2798_);
v___x_2804_ = v___x_2788_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_fst_2798_);
v___x_2804_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
lean_object* v___x_2806_; 
if (v_isShared_2797_ == 0)
{
lean_ctor_set(v___x_2796_, 0, v___x_2804_);
v___x_2806_ = v___x_2796_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v___x_2804_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
}
}
}
}
else
{
lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2863_; 
lean_del_object(v___x_2788_);
lean_dec(v_a_2786_);
lean_dec_ref(v_expr_2754_);
v_a_2856_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2863_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2863_ == 0)
{
v___x_2858_ = v___x_2793_;
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v___x_2793_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2861_; 
if (v_isShared_2859_ == 0)
{
v___x_2861_ = v___x_2858_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_a_2856_);
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
lean_object* v___x_2866_; 
lean_dec(v_a_2782_);
lean_dec_ref_known(v___x_2777_, 2);
lean_dec(v_a_2773_);
lean_dec(v_a_2761_);
lean_dec_ref(v_expr_2754_);
if (v_isShared_2785_ == 0)
{
lean_ctor_set(v___x_2784_, 0, v___x_2780_);
v___x_2866_ = v___x_2784_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v___x_2780_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
}
else
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2876_; 
lean_dec_ref_known(v___x_2777_, 2);
lean_dec(v_a_2773_);
lean_dec(v_a_2761_);
lean_dec_ref(v_expr_2754_);
v_a_2869_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2871_ = v___x_2781_;
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v___x_2781_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
}
else
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2884_; 
lean_dec(v_a_2765_);
lean_dec(v_a_2763_);
lean_dec(v_a_2761_);
lean_dec_ref(v_expr_2754_);
v_a_2877_ = lean_ctor_get(v___x_2772_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2879_ = v___x_2772_;
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v___x_2772_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
return v___x_2882_;
}
}
}
}
else
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2892_; 
lean_dec(v_a_2765_);
lean_dec(v_a_2763_);
lean_dec(v_a_2761_);
lean_dec_ref(v_expr_2754_);
v_a_2885_ = lean_ctor_get(v___x_2767_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2767_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2887_ = v___x_2767_;
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2767_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2890_; 
if (v_isShared_2888_ == 0)
{
v___x_2890_ = v___x_2887_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_a_2885_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
}
else
{
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2900_; 
lean_dec(v_a_2763_);
lean_dec(v_a_2761_);
lean_dec_ref(v_expr_2754_);
v_a_2893_ = lean_ctor_get(v___x_2764_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2764_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2895_ = v___x_2764_;
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2764_);
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
else
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2908_; 
lean_dec(v_a_2761_);
lean_dec_ref(v_expr_2754_);
v_a_2901_ = lean_ctor_get(v___x_2762_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___x_2762_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2903_ = v___x_2762_;
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___x_2762_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2906_; 
if (v_isShared_2904_ == 0)
{
v___x_2906_ = v___x_2903_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_a_2901_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
}
else
{
lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2916_; 
lean_dec_ref(v_expr_2754_);
v_a_2909_ = lean_ctor_get(v___x_2760_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2760_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2911_ = v___x_2760_;
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v___x_2760_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___x_2914_; 
if (v_isShared_2912_ == 0)
{
v___x_2914_ = v___x_2911_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_a_2909_);
v___x_2914_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
return v___x_2914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToFunction_x3f___boxed(lean_object* v_expr_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_){
_start:
{
lean_object* v_res_2923_; 
v_res_2923_ = l_Lean_Meta_coerceToFunction_x3f(v_expr_2917_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_);
lean_dec(v_a_2921_);
lean_dec_ref(v_a_2920_);
lean_dec(v_a_2919_);
lean_dec_ref(v_a_2918_);
return v_res_2923_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToSort_x3f___closed__4(void){
_start:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__3));
v___x_2932_ = l_Lean_stringToMessageData(v___x_2931_);
return v___x_2932_;
}
}
static lean_object* _init_l_Lean_Meta_coerceToSort_x3f___closed__6(void){
_start:
{
lean_object* v___x_2934_; lean_object* v___x_2935_; 
v___x_2934_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__5));
v___x_2935_ = l_Lean_stringToMessageData(v___x_2934_);
return v___x_2935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f(lean_object* v_expr_2936_, lean_object* v_a_2937_, lean_object* v_a_2938_, lean_object* v_a_2939_, lean_object* v_a_2940_){
_start:
{
lean_object* v___x_2942_; 
lean_inc(v_a_2940_);
lean_inc_ref(v_a_2939_);
lean_inc(v_a_2938_);
lean_inc_ref(v_a_2937_);
lean_inc_ref(v_expr_2936_);
v___x_2942_ = lean_infer_type(v_expr_2936_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; lean_object* v___x_2944_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
lean_inc_n(v_a_2943_, 2);
lean_dec_ref_known(v___x_2942_, 1);
v___x_2944_ = l_Lean_Meta_getLevel(v_a_2943_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
if (lean_obj_tag(v___x_2944_) == 0)
{
lean_object* v_a_2945_; lean_object* v___x_2946_; 
v_a_2945_ = lean_ctor_get(v___x_2944_, 0);
lean_inc(v_a_2945_);
lean_dec_ref_known(v___x_2944_, 1);
v___x_2946_ = l_Lean_Meta_mkFreshLevelMVar(v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; uint8_t v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
lean_inc_n(v_a_2947_, 2);
lean_dec_ref_known(v___x_2946_, 1);
v___x_2948_ = l_Lean_mkSort(v_a_2947_);
v___x_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2948_);
v___x_2950_ = 0;
v___x_2951_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_expandCoe_spec__0_spec__0___closed__1);
v___x_2952_ = l_Lean_Meta_mkFreshExprMVar(v___x_2949_, v___x_2950_, v___x_2951_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v_a_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v_a_2953_ = lean_ctor_get(v___x_2952_, 0);
lean_inc_n(v_a_2953_, 2);
lean_dec_ref_known(v___x_2952_, 1);
v___x_2954_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__1));
v___x_2955_ = lean_box(0);
v___x_2956_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2956_, 0, v_a_2947_);
lean_ctor_set(v___x_2956_, 1, v___x_2955_);
v___x_2957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2957_, 0, v_a_2945_);
lean_ctor_set(v___x_2957_, 1, v___x_2956_);
lean_inc_ref(v___x_2957_);
v___x_2958_ = l_Lean_Expr_const___override(v___x_2954_, v___x_2957_);
lean_inc(v_a_2943_);
v___x_2959_ = l_Lean_mkAppB(v___x_2958_, v_a_2943_, v_a_2953_);
v___x_2960_ = lean_box(0);
v___x_2961_ = l_Lean_Meta_trySynthInstance(v___x_2959_, v___x_2960_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
if (lean_obj_tag(v___x_2961_) == 0)
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_3048_; 
v_a_2962_ = lean_ctor_get(v___x_2961_, 0);
v_isSharedCheck_3048_ = !lean_is_exclusive(v___x_2961_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_2964_ = v___x_2961_;
v_isShared_2965_ = v_isSharedCheck_3048_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2961_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_3048_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
if (lean_obj_tag(v_a_2962_) == 1)
{
lean_object* v_a_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_3044_; 
lean_del_object(v___x_2964_);
v_a_2966_ = lean_ctor_get(v_a_2962_, 0);
v_isSharedCheck_3044_ = !lean_is_exclusive(v_a_2962_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_2968_ = v_a_2962_;
v_isShared_2969_ = v_isSharedCheck_3044_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_a_2966_);
lean_dec(v_a_2962_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_3044_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2970_ = ((lean_object*)(l_Lean_Meta_coerceToSort_x3f___closed__2));
v___x_2971_ = l_Lean_Expr_const___override(v___x_2970_, v___x_2957_);
lean_inc_ref(v_expr_2936_);
lean_inc(v_a_2966_);
v___x_2972_ = l_Lean_mkApp4(v___x_2971_, v_a_2943_, v_a_2953_, v_a_2966_, v_expr_2936_);
v___x_2973_ = l_Lean_Meta_expandCoe(v___x_2972_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_3035_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_2976_ = v___x_2973_;
v_isShared_2977_ = v_isSharedCheck_3035_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2973_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_3035_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v_fst_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_3033_; 
v_fst_2978_ = lean_ctor_get(v_a_2974_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v_a_2974_);
if (v_isSharedCheck_3033_ == 0)
{
lean_object* v_unused_3034_; 
v_unused_3034_ = lean_ctor_get(v_a_2974_, 1);
lean_dec(v_unused_3034_);
v___x_2980_ = v_a_2974_;
v_isShared_2981_ = v_isSharedCheck_3033_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_fst_2978_);
lean_dec(v_a_2974_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_3033_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2989_; 
lean_inc(v_a_2940_);
lean_inc_ref(v_a_2939_);
lean_inc(v_a_2938_);
lean_inc_ref(v_a_2937_);
lean_inc(v_fst_2978_);
v___x_2989_ = lean_infer_type(v_fst_2978_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
if (lean_obj_tag(v___x_2989_) == 0)
{
lean_object* v_a_2990_; lean_object* v___x_2991_; 
v_a_2990_ = lean_ctor_get(v___x_2989_, 0);
lean_inc(v_a_2990_);
lean_dec_ref_known(v___x_2989_, 1);
lean_inc(v_a_2940_);
lean_inc_ref(v_a_2939_);
lean_inc(v_a_2938_);
lean_inc_ref(v_a_2937_);
v___x_2991_ = lean_whnf(v_a_2990_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; uint8_t v___x_2993_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref_known(v___x_2991_, 1);
v___x_2993_ = l_Lean_Expr_isSort(v_a_2992_);
lean_dec(v_a_2992_);
if (v___x_2993_ == 0)
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2997_; 
lean_del_object(v___x_2976_);
lean_del_object(v___x_2968_);
v___x_2994_ = lean_obj_once(&l_Lean_Meta_coerceToFunction_x3f___closed__4, &l_Lean_Meta_coerceToFunction_x3f___closed__4_once, _init_l_Lean_Meta_coerceToFunction_x3f___closed__4);
v___x_2995_ = l_Lean_indentExpr(v_expr_2936_);
if (v_isShared_2981_ == 0)
{
lean_ctor_set_tag(v___x_2980_, 7);
lean_ctor_set(v___x_2980_, 1, v___x_2995_);
lean_ctor_set(v___x_2980_, 0, v___x_2994_);
v___x_2997_ = v___x_2980_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v___x_2994_);
lean_ctor_set(v_reuseFailAlloc_3016_, 1, v___x_2995_);
v___x_2997_ = v_reuseFailAlloc_3016_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
v___x_2998_ = lean_obj_once(&l_Lean_Meta_coerceToSort_x3f___closed__4, &l_Lean_Meta_coerceToSort_x3f___closed__4_once, _init_l_Lean_Meta_coerceToSort_x3f___closed__4);
v___x_2999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2997_);
lean_ctor_set(v___x_2999_, 1, v___x_2998_);
v___x_3000_ = l_Lean_indentExpr(v_fst_2978_);
v___x_3001_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3001_, 0, v___x_2999_);
lean_ctor_set(v___x_3001_, 1, v___x_3000_);
v___x_3002_ = lean_obj_once(&l_Lean_Meta_coerceToSort_x3f___closed__6, &l_Lean_Meta_coerceToSort_x3f___closed__6_once, _init_l_Lean_Meta_coerceToSort_x3f___closed__6);
v___x_3003_ = l_Lean_indentExpr(v_a_2966_);
v___x_3004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3004_, 0, v___x_3002_);
lean_ctor_set(v___x_3004_, 1, v___x_3003_);
v___x_3005_ = l_Lean_MessageData_hint_x27(v___x_3004_);
v___x_3006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3001_);
lean_ctor_set(v___x_3006_, 1, v___x_3005_);
v___x_3007_ = l_Lean_throwError___at___00Lean_Meta_coerceSimpleRecordingNames_x3f_spec__0___redArg(v___x_3006_, v_a_2937_, v_a_2938_, v_a_2939_, v_a_2940_);
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_3007_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_3007_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
else
{
lean_del_object(v___x_2980_);
lean_dec(v_a_2966_);
lean_dec_ref(v_expr_2936_);
goto v___jp_2982_;
}
}
else
{
lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3024_; 
lean_del_object(v___x_2980_);
lean_dec(v_fst_2978_);
lean_del_object(v___x_2976_);
lean_del_object(v___x_2968_);
lean_dec(v_a_2966_);
lean_dec_ref(v_expr_2936_);
v_a_3017_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3019_ = v___x_2991_;
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_dec(v___x_2991_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
lean_object* v___x_3022_; 
if (v_isShared_3020_ == 0)
{
v___x_3022_ = v___x_3019_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_a_3017_);
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
lean_del_object(v___x_2980_);
lean_dec(v_fst_2978_);
lean_del_object(v___x_2976_);
lean_del_object(v___x_2968_);
lean_dec(v_a_2966_);
lean_dec_ref(v_expr_2936_);
v_a_3025_ = lean_ctor_get(v___x_2989_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_2989_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v___x_2989_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_2989_);
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
v___jp_2982_:
{
lean_object* v___x_2984_; 
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 0, v_fst_2978_);
v___x_2984_ = v___x_2968_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_fst_2978_);
v___x_2984_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
lean_object* v___x_2986_; 
if (v_isShared_2977_ == 0)
{
lean_ctor_set(v___x_2976_, 0, v___x_2984_);
v___x_2986_ = v___x_2976_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v___x_2984_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
}
}
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
lean_del_object(v___x_2968_);
lean_dec(v_a_2966_);
lean_dec_ref(v_expr_2936_);
v_a_3036_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___x_2973_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___x_2973_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3041_; 
if (v_isShared_3039_ == 0)
{
v___x_3041_ = v___x_3038_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3036_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
}
}
}
else
{
lean_object* v___x_3046_; 
lean_dec(v_a_2962_);
lean_dec_ref_known(v___x_2957_, 2);
lean_dec(v_a_2953_);
lean_dec(v_a_2943_);
lean_dec_ref(v_expr_2936_);
if (v_isShared_2965_ == 0)
{
lean_ctor_set(v___x_2964_, 0, v___x_2960_);
v___x_3046_ = v___x_2964_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v___x_2960_);
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
else
{
lean_object* v_a_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3056_; 
lean_dec_ref_known(v___x_2957_, 2);
lean_dec(v_a_2953_);
lean_dec(v_a_2943_);
lean_dec_ref(v_expr_2936_);
v_a_3049_ = lean_ctor_get(v___x_2961_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_2961_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_3051_ = v___x_2961_;
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_a_3049_);
lean_dec(v___x_2961_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___x_3054_; 
if (v_isShared_3052_ == 0)
{
v___x_3054_ = v___x_3051_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v_a_3049_);
v___x_3054_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
return v___x_3054_;
}
}
}
}
else
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
lean_dec(v_a_2947_);
lean_dec(v_a_2945_);
lean_dec(v_a_2943_);
lean_dec_ref(v_expr_2936_);
v_a_3057_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___x_2952_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_2952_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
}
else
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3072_; 
lean_dec(v_a_2945_);
lean_dec(v_a_2943_);
lean_dec_ref(v_expr_2936_);
v_a_3065_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3067_ = v___x_2946_;
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_2946_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3070_; 
if (v_isShared_3068_ == 0)
{
v___x_3070_ = v___x_3067_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3065_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
lean_dec(v_a_2943_);
lean_dec_ref(v_expr_2936_);
v_a_3073_ = lean_ctor_get(v___x_2944_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v___x_2944_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_2944_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
else
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3088_; 
lean_dec_ref(v_expr_2936_);
v_a_3081_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3083_ = v___x_2942_;
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v___x_2942_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___x_3086_; 
if (v_isShared_3084_ == 0)
{
v___x_3086_ = v___x_3083_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_a_3081_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
return v___x_3086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceToSort_x3f___boxed(lean_object* v_expr_3089_, lean_object* v_a_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_){
_start:
{
lean_object* v_res_3095_; 
v_res_3095_ = l_Lean_Meta_coerceToSort_x3f(v_expr_3089_, v_a_3090_, v_a_3091_, v_a_3092_, v_a_3093_);
lean_dec(v_a_3093_);
lean_dec_ref(v_a_3092_);
lean_dec(v_a_3091_);
lean_dec_ref(v_a_3090_);
return v_res_3095_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(lean_object* v_e_3096_, lean_object* v___y_3097_){
_start:
{
uint8_t v___x_3099_; 
v___x_3099_ = l_Lean_Expr_hasMVar(v_e_3096_);
if (v___x_3099_ == 0)
{
lean_object* v___x_3100_; 
v___x_3100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3100_, 0, v_e_3096_);
return v___x_3100_;
}
else
{
lean_object* v___x_3101_; lean_object* v_mctx_3102_; lean_object* v___x_3103_; lean_object* v_fst_3104_; lean_object* v_snd_3105_; lean_object* v___x_3106_; lean_object* v_cache_3107_; lean_object* v_zetaDeltaFVarIds_3108_; lean_object* v_postponed_3109_; lean_object* v_diag_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3119_; 
v___x_3101_ = lean_st_ref_get(v___y_3097_);
v_mctx_3102_ = lean_ctor_get(v___x_3101_, 0);
lean_inc_ref(v_mctx_3102_);
lean_dec(v___x_3101_);
v___x_3103_ = l_Lean_instantiateMVarsCore(v_mctx_3102_, v_e_3096_);
v_fst_3104_ = lean_ctor_get(v___x_3103_, 0);
lean_inc(v_fst_3104_);
v_snd_3105_ = lean_ctor_get(v___x_3103_, 1);
lean_inc(v_snd_3105_);
lean_dec_ref(v___x_3103_);
v___x_3106_ = lean_st_ref_take(v___y_3097_);
v_cache_3107_ = lean_ctor_get(v___x_3106_, 1);
v_zetaDeltaFVarIds_3108_ = lean_ctor_get(v___x_3106_, 2);
v_postponed_3109_ = lean_ctor_get(v___x_3106_, 3);
v_diag_3110_ = lean_ctor_get(v___x_3106_, 4);
v_isSharedCheck_3119_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3119_ == 0)
{
lean_object* v_unused_3120_; 
v_unused_3120_ = lean_ctor_get(v___x_3106_, 0);
lean_dec(v_unused_3120_);
v___x_3112_ = v___x_3106_;
v_isShared_3113_ = v_isSharedCheck_3119_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_diag_3110_);
lean_inc(v_postponed_3109_);
lean_inc(v_zetaDeltaFVarIds_3108_);
lean_inc(v_cache_3107_);
lean_dec(v___x_3106_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3119_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3115_; 
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 0, v_snd_3105_);
v___x_3115_ = v___x_3112_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_snd_3105_);
lean_ctor_set(v_reuseFailAlloc_3118_, 1, v_cache_3107_);
lean_ctor_set(v_reuseFailAlloc_3118_, 2, v_zetaDeltaFVarIds_3108_);
lean_ctor_set(v_reuseFailAlloc_3118_, 3, v_postponed_3109_);
lean_ctor_set(v_reuseFailAlloc_3118_, 4, v_diag_3110_);
v___x_3115_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
lean_object* v___x_3116_; lean_object* v___x_3117_; 
v___x_3116_ = lean_st_ref_put(v___y_3097_, v___x_3115_);
v___x_3117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3117_, 0, v_fst_3104_);
return v___x_3117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg___boxed(lean_object* v_e_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
lean_object* v_res_3124_; 
v_res_3124_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_e_3121_, v___y_3122_);
lean_dec(v___y_3122_);
return v_res_3124_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(lean_object* v_e_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_){
_start:
{
lean_object* v___x_3131_; 
v___x_3131_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_e_3125_, v___y_3127_);
return v___x_3131_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___boxed(lean_object* v_e_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_){
_start:
{
lean_object* v_res_3138_; 
v_res_3138_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0(v_e_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_);
lean_dec(v___y_3136_);
lean_dec_ref(v___y_3135_);
lean_dec(v___y_3134_);
lean_dec_ref(v___y_3133_);
return v_res_3138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f(lean_object* v_type_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_){
_start:
{
lean_object* v___y_3146_; lean_object* v___x_3185_; uint8_t v_transparency_3186_; uint8_t v___x_3187_; uint8_t v___x_3188_; 
v___x_3185_ = l_Lean_Meta_Context_config(v_a_3140_);
v_transparency_3186_ = lean_ctor_get_uint8(v___x_3185_, 9);
lean_dec_ref(v___x_3185_);
v___x_3187_ = 2;
v___x_3188_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3186_, v___x_3187_);
if (v___x_3188_ == 0)
{
lean_object* v_keyedConfig_3189_; uint8_t v_trackZetaDelta_3190_; lean_object* v_zetaDeltaSet_3191_; lean_object* v_lctx_3192_; lean_object* v_localInstances_3193_; lean_object* v_defEqCtx_x3f_3194_; lean_object* v_synthPendingDepth_3195_; lean_object* v_customCanUnfoldPredicate_x3f_3196_; uint8_t v_univApprox_3197_; uint8_t v_inTypeClassResolution_3198_; uint8_t v_cacheInferType_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v_keyedConfig_3189_ = lean_ctor_get(v_a_3140_, 0);
v_trackZetaDelta_3190_ = lean_ctor_get_uint8(v_a_3140_, sizeof(void*)*7);
v_zetaDeltaSet_3191_ = lean_ctor_get(v_a_3140_, 1);
v_lctx_3192_ = lean_ctor_get(v_a_3140_, 2);
v_localInstances_3193_ = lean_ctor_get(v_a_3140_, 3);
v_defEqCtx_x3f_3194_ = lean_ctor_get(v_a_3140_, 4);
v_synthPendingDepth_3195_ = lean_ctor_get(v_a_3140_, 5);
v_customCanUnfoldPredicate_x3f_3196_ = lean_ctor_get(v_a_3140_, 6);
v_univApprox_3197_ = lean_ctor_get_uint8(v_a_3140_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3198_ = lean_ctor_get_uint8(v_a_3140_, sizeof(void*)*7 + 2);
v_cacheInferType_3199_ = lean_ctor_get_uint8(v_a_3140_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3189_);
v___x_3200_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3187_, v_keyedConfig_3189_);
lean_inc(v_customCanUnfoldPredicate_x3f_3196_);
lean_inc(v_synthPendingDepth_3195_);
lean_inc(v_defEqCtx_x3f_3194_);
lean_inc_ref(v_localInstances_3193_);
lean_inc_ref(v_lctx_3192_);
lean_inc(v_zetaDeltaSet_3191_);
v___x_3201_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3201_, 0, v___x_3200_);
lean_ctor_set(v___x_3201_, 1, v_zetaDeltaSet_3191_);
lean_ctor_set(v___x_3201_, 2, v_lctx_3192_);
lean_ctor_set(v___x_3201_, 3, v_localInstances_3193_);
lean_ctor_set(v___x_3201_, 4, v_defEqCtx_x3f_3194_);
lean_ctor_set(v___x_3201_, 5, v_synthPendingDepth_3195_);
lean_ctor_set(v___x_3201_, 6, v_customCanUnfoldPredicate_x3f_3196_);
lean_ctor_set_uint8(v___x_3201_, sizeof(void*)*7, v_trackZetaDelta_3190_);
lean_ctor_set_uint8(v___x_3201_, sizeof(void*)*7 + 1, v_univApprox_3197_);
lean_ctor_set_uint8(v___x_3201_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3198_);
lean_ctor_set_uint8(v___x_3201_, sizeof(void*)*7 + 3, v_cacheInferType_3199_);
lean_inc(v_a_3143_);
lean_inc_ref(v_a_3142_);
lean_inc(v_a_3141_);
v___x_3202_ = lean_whnf(v_type_3139_, v___x_3201_, v_a_3141_, v_a_3142_, v_a_3143_);
v___y_3146_ = v___x_3202_;
goto v___jp_3145_;
}
else
{
lean_object* v___x_3203_; 
lean_inc(v_a_3143_);
lean_inc_ref(v_a_3142_);
lean_inc(v_a_3141_);
lean_inc_ref(v_a_3140_);
v___x_3203_ = lean_whnf(v_type_3139_, v_a_3140_, v_a_3141_, v_a_3142_, v_a_3143_);
v___y_3146_ = v___x_3203_;
goto v___jp_3145_;
}
v___jp_3145_:
{
if (lean_obj_tag(v___y_3146_) == 0)
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3176_; 
v_a_3147_ = lean_ctor_get(v___y_3146_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___y_3146_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3149_ = v___y_3146_;
v_isShared_3150_ = v_isSharedCheck_3176_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___y_3146_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3176_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
if (lean_obj_tag(v_a_3147_) == 5)
{
lean_object* v_fn_3151_; lean_object* v_arg_3152_; lean_object* v___x_3153_; lean_object* v_a_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3171_; 
lean_del_object(v___x_3149_);
v_fn_3151_ = lean_ctor_get(v_a_3147_, 0);
lean_inc_ref(v_fn_3151_);
v_arg_3152_ = lean_ctor_get(v_a_3147_, 1);
lean_inc_ref(v_arg_3152_);
lean_dec_ref_known(v_a_3147_, 2);
v___x_3153_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_fn_3151_, v_a_3141_);
v_a_3154_ = lean_ctor_get(v___x_3153_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v___x_3153_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3156_ = v___x_3153_;
v_isShared_3157_ = v_isSharedCheck_3171_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v___x_3153_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3171_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3158_; lean_object* v_a_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3170_; 
v___x_3158_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_arg_3152_, v_a_3141_);
v_a_3159_ = lean_ctor_get(v___x_3158_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3158_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3161_ = v___x_3158_;
v_isShared_3162_ = v_isSharedCheck_3170_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_a_3159_);
lean_dec(v___x_3158_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3170_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v___x_3163_; lean_object* v___x_3165_; 
v___x_3163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3163_, 0, v_a_3154_);
lean_ctor_set(v___x_3163_, 1, v_a_3159_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set_tag(v___x_3156_, 1);
lean_ctor_set(v___x_3156_, 0, v___x_3163_);
v___x_3165_ = v___x_3156_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v___x_3163_);
v___x_3165_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
lean_object* v___x_3167_; 
if (v_isShared_3162_ == 0)
{
lean_ctor_set(v___x_3161_, 0, v___x_3165_);
v___x_3167_ = v___x_3161_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v___x_3165_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
}
}
}
}
}
else
{
lean_object* v___x_3172_; lean_object* v___x_3174_; 
lean_dec(v_a_3147_);
v___x_3172_ = lean_box(0);
if (v_isShared_3150_ == 0)
{
lean_ctor_set(v___x_3149_, 0, v___x_3172_);
v___x_3174_ = v___x_3149_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v___x_3172_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
}
}
else
{
lean_object* v_a_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3184_; 
v_a_3177_ = lean_ctor_get(v___y_3146_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v___y_3146_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3179_ = v___y_3146_;
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_dec(v___y_3146_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3182_; 
if (v_isShared_3180_ == 0)
{
v___x_3182_ = v___x_3179_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_a_3177_);
v___x_3182_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
return v___x_3182_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isTypeApp_x3f___boxed(lean_object* v_type_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_){
_start:
{
lean_object* v_res_3210_; 
v_res_3210_ = l_Lean_Meta_isTypeApp_x3f(v_type_3204_, v_a_3205_, v_a_3206_, v_a_3207_, v_a_3208_);
lean_dec(v_a_3208_);
lean_dec_ref(v_a_3207_);
lean_dec(v_a_3206_);
lean_dec_ref(v_a_3205_);
return v_res_3210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp(lean_object* v_type_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_, lean_object* v_a_3214_, lean_object* v_a_3215_){
_start:
{
lean_object* v___x_3217_; 
v___x_3217_ = l_Lean_Meta_isTypeApp_x3f(v_type_3211_, v_a_3212_, v_a_3213_, v_a_3214_, v_a_3215_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3253_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3253_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3220_ = v___x_3217_;
v_isShared_3221_ = v_isSharedCheck_3253_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___x_3217_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3253_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
if (lean_obj_tag(v_a_3218_) == 1)
{
lean_object* v_val_3222_; lean_object* v_fst_3223_; lean_object* v___x_3224_; 
lean_del_object(v___x_3220_);
v_val_3222_ = lean_ctor_get(v_a_3218_, 0);
lean_inc(v_val_3222_);
lean_dec_ref_known(v_a_3218_, 1);
v_fst_3223_ = lean_ctor_get(v_val_3222_, 0);
lean_inc(v_fst_3223_);
lean_dec(v_val_3222_);
v___x_3224_ = l_Lean_Meta_isMonad_x3f(v_fst_3223_, v_a_3212_, v_a_3213_, v_a_3214_, v_a_3215_);
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v_a_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3239_; 
v_a_3225_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3239_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3239_ == 0)
{
v___x_3227_ = v___x_3224_;
v_isShared_3228_ = v_isSharedCheck_3239_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_a_3225_);
lean_dec(v___x_3224_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3239_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
if (lean_obj_tag(v_a_3225_) == 0)
{
uint8_t v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3232_; 
v___x_3229_ = 0;
v___x_3230_ = lean_box(v___x_3229_);
if (v_isShared_3228_ == 0)
{
lean_ctor_set(v___x_3227_, 0, v___x_3230_);
v___x_3232_ = v___x_3227_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v___x_3230_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
else
{
uint8_t v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3237_; 
lean_dec_ref_known(v_a_3225_, 1);
v___x_3234_ = 1;
v___x_3235_ = lean_box(v___x_3234_);
if (v_isShared_3228_ == 0)
{
lean_ctor_set(v___x_3227_, 0, v___x_3235_);
v___x_3237_ = v___x_3227_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v___x_3235_);
v___x_3237_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
return v___x_3237_;
}
}
}
}
else
{
lean_object* v_a_3240_; lean_object* v___x_3242_; uint8_t v_isShared_3243_; uint8_t v_isSharedCheck_3247_; 
v_a_3240_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3247_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3247_ == 0)
{
v___x_3242_ = v___x_3224_;
v_isShared_3243_ = v_isSharedCheck_3247_;
goto v_resetjp_3241_;
}
else
{
lean_inc(v_a_3240_);
lean_dec(v___x_3224_);
v___x_3242_ = lean_box(0);
v_isShared_3243_ = v_isSharedCheck_3247_;
goto v_resetjp_3241_;
}
v_resetjp_3241_:
{
lean_object* v___x_3245_; 
if (v_isShared_3243_ == 0)
{
v___x_3245_ = v___x_3242_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v_a_3240_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
}
}
else
{
uint8_t v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3251_; 
lean_dec(v_a_3218_);
v___x_3248_ = 0;
v___x_3249_ = lean_box(v___x_3248_);
if (v_isShared_3221_ == 0)
{
lean_ctor_set(v___x_3220_, 0, v___x_3249_);
v___x_3251_ = v___x_3220_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v___x_3249_);
v___x_3251_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
return v___x_3251_;
}
}
}
}
else
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3261_; 
v_a_3254_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3256_ = v___x_3217_;
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v___x_3217_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3257_ == 0)
{
v___x_3259_ = v___x_3256_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_a_3254_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isMonadApp___boxed(lean_object* v_type_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_){
_start:
{
lean_object* v_res_3268_; 
v_res_3268_ = l_Lean_Meta_isMonadApp(v_type_3262_, v_a_3263_, v_a_3264_, v_a_3265_, v_a_3266_);
lean_dec(v_a_3266_);
lean_dec_ref(v_a_3265_);
lean_dec(v_a_3264_);
lean_dec_ref(v_a_3263_);
return v_res_3268_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(lean_object* v_opts_3269_, lean_object* v_opt_3270_){
_start:
{
lean_object* v_name_3271_; lean_object* v_defValue_3272_; lean_object* v_map_3273_; lean_object* v___x_3274_; 
v_name_3271_ = lean_ctor_get(v_opt_3270_, 0);
v_defValue_3272_ = lean_ctor_get(v_opt_3270_, 1);
v_map_3273_ = lean_ctor_get(v_opts_3269_, 0);
v___x_3274_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3273_, v_name_3271_);
if (lean_obj_tag(v___x_3274_) == 0)
{
uint8_t v___x_3275_; 
v___x_3275_ = lean_unbox(v_defValue_3272_);
return v___x_3275_;
}
else
{
lean_object* v_val_3276_; 
v_val_3276_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_val_3276_);
lean_dec_ref_known(v___x_3274_, 1);
if (lean_obj_tag(v_val_3276_) == 1)
{
uint8_t v_v_3277_; 
v_v_3277_ = lean_ctor_get_uint8(v_val_3276_, 0);
lean_dec_ref_known(v_val_3276_, 0);
return v_v_3277_;
}
else
{
uint8_t v___x_3278_; 
lean_dec(v_val_3276_);
v___x_3278_ = lean_unbox(v_defValue_3272_);
return v___x_3278_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0___boxed(lean_object* v_opts_3279_, lean_object* v_opt_3280_){
_start:
{
uint8_t v_res_3281_; lean_object* v_r_3282_; 
v_res_3281_ = l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(v_opts_3279_, v_opt_3280_);
lean_dec_ref(v_opt_3280_);
lean_dec_ref(v_opts_3279_);
v_r_3282_ = lean_box(v_res_3281_);
return v_r_3282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0(lean_object* v_x_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_){
_start:
{
lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3291_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___lam__0___closed__0));
v___x_3292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3292_, 0, v___x_3291_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___lam__0___boxed(lean_object* v_x_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_x_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec_ref(v_x_3293_);
return v_res_3299_;
}
}
static lean_object* _init_l_Lean_Meta_coerceMonadLift_x3f___closed__6(void){
_start:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3309_ = lean_unsigned_to_nat(0u);
v___x_3310_ = l_Lean_mkBVar(v___x_3309_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f(lean_object* v_e_3322_, lean_object* v_expectedType_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_){
_start:
{
lean_object* v___y_3330_; uint8_t v___y_3331_; lean_object* v_a_3336_; lean_object* v___y_3340_; lean_object* v___x_3350_; lean_object* v_a_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3755_; 
v___x_3350_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_expectedType_3323_, v_a_3325_);
v_a_3351_ = lean_ctor_get(v___x_3350_, 0);
v_isSharedCheck_3755_ = !lean_is_exclusive(v___x_3350_);
if (v_isSharedCheck_3755_ == 0)
{
v___x_3353_ = v___x_3350_;
v_isShared_3354_ = v_isSharedCheck_3755_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_a_3351_);
lean_dec(v___x_3350_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3755_;
goto v_resetjp_3352_;
}
v___jp_3329_:
{
if (v___y_3331_ == 0)
{
lean_object* v___x_3332_; lean_object* v___x_3333_; 
lean_dec_ref(v___y_3330_);
v___x_3332_ = lean_box(0);
v___x_3333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3332_);
return v___x_3333_;
}
else
{
lean_object* v___x_3334_; 
v___x_3334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3334_, 0, v___y_3330_);
return v___x_3334_;
}
}
v___jp_3335_:
{
uint8_t v___x_3337_; 
v___x_3337_ = l_Lean_Exception_isInterrupt(v_a_3336_);
if (v___x_3337_ == 0)
{
uint8_t v___x_3338_; 
lean_inc_ref(v_a_3336_);
v___x_3338_ = l_Lean_Exception_isRuntime(v_a_3336_);
v___y_3330_ = v_a_3336_;
v___y_3331_ = v___x_3338_;
goto v___jp_3329_;
}
else
{
v___y_3330_ = v_a_3336_;
v___y_3331_ = v___x_3337_;
goto v___jp_3329_;
}
}
v___jp_3339_:
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3349_; 
v_a_3341_ = lean_ctor_get(v___y_3340_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___y_3340_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3343_ = v___y_3340_;
v_isShared_3344_ = v_isSharedCheck_3349_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___y_3340_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3349_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v_a_3345_; lean_object* v___x_3347_; 
v_a_3345_ = lean_ctor_get(v_a_3341_, 0);
lean_inc(v_a_3345_);
lean_dec(v_a_3341_);
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
}
v_resetjp_3352_:
{
lean_object* v___x_3355_; 
lean_inc(v_a_3327_);
lean_inc_ref(v_a_3326_);
lean_inc(v_a_3325_);
lean_inc_ref(v_a_3324_);
lean_inc_ref(v_e_3322_);
v___x_3355_ = lean_infer_type(v_e_3322_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3355_) == 0)
{
lean_object* v_a_3356_; lean_object* v___x_3357_; lean_object* v_a_3358_; lean_object* v___x_3360_; uint8_t v_isShared_3361_; uint8_t v_isSharedCheck_3746_; 
v_a_3356_ = lean_ctor_get(v___x_3355_, 0);
lean_inc(v_a_3356_);
lean_dec_ref_known(v___x_3355_, 1);
v___x_3357_ = l_Lean_instantiateMVars___at___00Lean_Meta_isTypeApp_x3f_spec__0___redArg(v_a_3356_, v_a_3325_);
v_a_3358_ = lean_ctor_get(v___x_3357_, 0);
v_isSharedCheck_3746_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3746_ == 0)
{
v___x_3360_ = v___x_3357_;
v_isShared_3361_ = v_isSharedCheck_3746_;
goto v_resetjp_3359_;
}
else
{
lean_inc(v_a_3358_);
lean_dec(v___x_3357_);
v___x_3360_ = lean_box(0);
v_isShared_3361_ = v_isSharedCheck_3746_;
goto v_resetjp_3359_;
}
v_resetjp_3359_:
{
lean_object* v___x_3362_; 
lean_inc(v_a_3351_);
v___x_3362_ = l_Lean_Meta_isTypeApp_x3f(v_a_3351_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3362_) == 0)
{
lean_object* v_a_3363_; lean_object* v___x_3365_; uint8_t v_isShared_3366_; uint8_t v_isSharedCheck_3737_; 
v_a_3363_ = lean_ctor_get(v___x_3362_, 0);
v_isSharedCheck_3737_ = !lean_is_exclusive(v___x_3362_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3365_ = v___x_3362_;
v_isShared_3366_ = v_isSharedCheck_3737_;
goto v_resetjp_3364_;
}
else
{
lean_inc(v_a_3363_);
lean_dec(v___x_3362_);
v___x_3365_ = lean_box(0);
v_isShared_3366_ = v_isSharedCheck_3737_;
goto v_resetjp_3364_;
}
v_resetjp_3364_:
{
if (lean_obj_tag(v_a_3363_) == 1)
{
lean_object* v_val_3367_; lean_object* v___x_3369_; uint8_t v_isShared_3370_; uint8_t v_isSharedCheck_3732_; 
lean_del_object(v___x_3365_);
v_val_3367_ = lean_ctor_get(v_a_3363_, 0);
v_isSharedCheck_3732_ = !lean_is_exclusive(v_a_3363_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3369_ = v_a_3363_;
v_isShared_3370_ = v_isSharedCheck_3732_;
goto v_resetjp_3368_;
}
else
{
lean_inc(v_val_3367_);
lean_dec(v_a_3363_);
v___x_3369_ = lean_box(0);
v_isShared_3370_ = v_isSharedCheck_3732_;
goto v_resetjp_3368_;
}
v_resetjp_3368_:
{
lean_object* v_fst_3371_; lean_object* v_snd_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3731_; 
v_fst_3371_ = lean_ctor_get(v_val_3367_, 0);
v_snd_3372_ = lean_ctor_get(v_val_3367_, 1);
v_isSharedCheck_3731_ = !lean_is_exclusive(v_val_3367_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3374_ = v_val_3367_;
v_isShared_3375_ = v_isSharedCheck_3731_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_snd_3372_);
lean_inc(v_fst_3371_);
lean_dec(v_val_3367_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3731_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3376_; 
lean_inc(v_a_3358_);
v___x_3376_ = l_Lean_Meta_isTypeApp_x3f(v_a_3358_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3722_; 
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3722_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3722_ == 0)
{
v___x_3379_ = v___x_3376_;
v_isShared_3380_ = v_isSharedCheck_3722_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_a_3377_);
lean_dec(v___x_3376_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3722_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
if (lean_obj_tag(v_a_3377_) == 1)
{
lean_object* v_val_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3717_; 
lean_del_object(v___x_3379_);
v_val_3381_ = lean_ctor_get(v_a_3377_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v_a_3377_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3383_ = v_a_3377_;
v_isShared_3384_ = v_isSharedCheck_3717_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_val_3381_);
lean_dec(v_a_3377_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3717_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v_fst_3385_; lean_object* v_snd_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3716_; 
v_fst_3385_ = lean_ctor_get(v_val_3381_, 0);
v_snd_3386_ = lean_ctor_get(v_val_3381_, 1);
v_isSharedCheck_3716_ = !lean_is_exclusive(v_val_3381_);
if (v_isSharedCheck_3716_ == 0)
{
v___x_3388_ = v_val_3381_;
v_isShared_3389_ = v_isSharedCheck_3716_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_snd_3386_);
lean_inc(v_fst_3385_);
lean_dec(v_val_3381_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3716_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
lean_object* v___x_3390_; 
v___x_3390_ = l_Lean_Meta_saveState___redArg(v_a_3325_, v_a_3327_);
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_object* v_a_3391_; lean_object* v___x_3392_; 
v_a_3391_ = lean_ctor_get(v___x_3390_, 0);
lean_inc(v_a_3391_);
lean_dec_ref_known(v___x_3390_, 1);
lean_inc(v_fst_3371_);
lean_inc(v_fst_3385_);
v___x_3392_ = l_Lean_Meta_isExprDefEq(v_fst_3385_, v_fst_3371_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3392_) == 0)
{
lean_object* v_a_3393_; lean_object* v___x_3395_; uint8_t v_isShared_3396_; uint8_t v_isSharedCheck_3699_; 
v_a_3393_ = lean_ctor_get(v___x_3392_, 0);
v_isSharedCheck_3699_ = !lean_is_exclusive(v___x_3392_);
if (v_isSharedCheck_3699_ == 0)
{
v___x_3395_ = v___x_3392_;
v_isShared_3396_ = v_isSharedCheck_3699_;
goto v_resetjp_3394_;
}
else
{
lean_inc(v_a_3393_);
lean_dec(v___x_3392_);
v___x_3395_ = lean_box(0);
v_isShared_3396_ = v_isSharedCheck_3699_;
goto v_resetjp_3394_;
}
v_resetjp_3394_:
{
uint8_t v___x_3397_; 
v___x_3397_ = lean_unbox(v_a_3393_);
lean_dec(v_a_3393_);
if (v___x_3397_ == 0)
{
lean_object* v_toCold_3398_; lean_object* v_options_3399_; lean_object* v___x_3400_; uint8_t v___x_3401_; 
lean_dec(v_a_3391_);
lean_del_object(v___x_3369_);
lean_del_object(v___x_3360_);
lean_del_object(v___x_3353_);
v_toCold_3398_ = lean_ctor_get(v_a_3326_, 0);
v_options_3399_ = lean_ctor_get(v_toCold_3398_, 2);
v___x_3400_ = l_Lean_Meta_autoLift;
v___x_3401_ = l_Lean_Option_get___at___00Lean_Meta_coerceMonadLift_x3f_spec__0(v_options_3399_, v___x_3400_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; lean_object* v___x_3404_; 
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v___x_3402_ = lean_box(0);
if (v_isShared_3396_ == 0)
{
lean_ctor_set(v___x_3395_, 0, v___x_3402_);
v___x_3404_ = v___x_3395_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v___x_3402_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
else
{
lean_object* v___x_3406_; 
lean_del_object(v___x_3395_);
lean_inc(v_a_3327_);
lean_inc_ref(v_a_3326_);
lean_inc(v_a_3325_);
lean_inc_ref(v_a_3324_);
lean_inc(v_fst_3385_);
v___x_3406_ = lean_infer_type(v_fst_3385_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3406_) == 0)
{
lean_object* v_a_3407_; lean_object* v___x_3408_; 
v_a_3407_ = lean_ctor_get(v___x_3406_, 0);
lean_inc(v_a_3407_);
lean_dec_ref_known(v___x_3406_, 1);
lean_inc(v_a_3327_);
lean_inc_ref(v_a_3326_);
lean_inc(v_a_3325_);
lean_inc_ref(v_a_3324_);
v___x_3408_ = lean_whnf(v_a_3407_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3408_) == 0)
{
lean_object* v_a_3409_; 
v_a_3409_ = lean_ctor_get(v___x_3408_, 0);
lean_inc(v_a_3409_);
lean_dec_ref_known(v___x_3408_, 1);
if (lean_obj_tag(v_a_3409_) == 7)
{
lean_object* v_binderType_3410_; 
v_binderType_3410_ = lean_ctor_get(v_a_3409_, 1);
if (lean_obj_tag(v_binderType_3410_) == 3)
{
lean_object* v_body_3411_; 
v_body_3411_ = lean_ctor_get(v_a_3409_, 2);
if (lean_obj_tag(v_body_3411_) == 3)
{
lean_object* v_u_3412_; lean_object* v_u_3413_; lean_object* v___x_3414_; 
lean_inc_ref(v_body_3411_);
lean_inc_ref(v_binderType_3410_);
lean_dec_ref_known(v_a_3409_, 3);
v_u_3412_ = lean_ctor_get(v_binderType_3410_, 0);
lean_inc(v_u_3412_);
lean_dec_ref_known(v_binderType_3410_, 1);
v_u_3413_ = lean_ctor_get(v_body_3411_, 0);
lean_inc(v_u_3413_);
lean_dec_ref_known(v_body_3411_, 1);
lean_inc(v_a_3327_);
lean_inc_ref(v_a_3326_);
lean_inc(v_a_3325_);
lean_inc_ref(v_a_3324_);
lean_inc(v_fst_3371_);
v___x_3414_ = lean_infer_type(v_fst_3371_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_object* v_a_3415_; lean_object* v___x_3416_; 
v_a_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3415_);
lean_dec_ref_known(v___x_3414_, 1);
lean_inc(v_a_3327_);
lean_inc_ref(v_a_3326_);
lean_inc(v_a_3325_);
lean_inc_ref(v_a_3324_);
v___x_3416_ = lean_whnf(v_a_3415_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; 
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3417_);
lean_dec_ref_known(v___x_3416_, 1);
if (lean_obj_tag(v_a_3417_) == 7)
{
lean_object* v_binderType_3418_; 
v_binderType_3418_ = lean_ctor_get(v_a_3417_, 1);
if (lean_obj_tag(v_binderType_3418_) == 3)
{
lean_object* v_body_3419_; 
v_body_3419_ = lean_ctor_get(v_a_3417_, 2);
if (lean_obj_tag(v_body_3419_) == 3)
{
lean_object* v_u_3420_; lean_object* v_u_3421_; lean_object* v___x_3422_; 
lean_inc_ref(v_body_3419_);
lean_inc_ref(v_binderType_3418_);
lean_dec_ref_known(v_a_3417_, 3);
v_u_3420_ = lean_ctor_get(v_binderType_3418_, 0);
lean_inc(v_u_3420_);
lean_dec_ref_known(v_binderType_3418_, 1);
v_u_3421_ = lean_ctor_get(v_body_3419_, 0);
lean_inc(v_u_3421_);
lean_dec_ref_known(v_body_3419_, 1);
v___x_3422_ = l_Lean_Meta_decLevel(v_u_3412_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v_a_3423_; lean_object* v___x_3424_; 
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
lean_inc(v_a_3423_);
lean_dec_ref_known(v___x_3422_, 1);
v___x_3424_ = l_Lean_Meta_decLevel(v_u_3420_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_object* v_a_3425_; lean_object* v___x_3426_; 
v_a_3425_ = lean_ctor_get(v___x_3424_, 0);
lean_inc(v_a_3425_);
lean_dec_ref_known(v___x_3424_, 1);
lean_inc(v_a_3423_);
v___x_3426_ = l_Lean_Meta_isLevelDefEq(v_a_3423_, v_a_3425_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3426_) == 0)
{
lean_object* v_a_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3591_; 
v_a_3427_ = lean_ctor_get(v___x_3426_, 0);
v_isSharedCheck_3591_ = !lean_is_exclusive(v___x_3426_);
if (v_isSharedCheck_3591_ == 0)
{
v___x_3429_ = v___x_3426_;
v_isShared_3430_ = v_isSharedCheck_3591_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_a_3427_);
lean_dec(v___x_3426_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3591_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
uint8_t v___x_3431_; 
v___x_3431_ = lean_unbox(v_a_3427_);
lean_dec(v_a_3427_);
if (v___x_3431_ == 1)
{
lean_object* v___x_3432_; 
lean_del_object(v___x_3429_);
v___x_3432_ = l_Lean_Meta_decLevel(v_u_3413_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3432_) == 0)
{
lean_object* v_a_3433_; lean_object* v___x_3434_; 
v_a_3433_ = lean_ctor_get(v___x_3432_, 0);
lean_inc(v_a_3433_);
lean_dec_ref_known(v___x_3432_, 1);
v___x_3434_ = l_Lean_Meta_decLevel(v_u_3421_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3434_) == 0)
{
lean_object* v_a_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3439_; 
v_a_3435_ = lean_ctor_get(v___x_3434_, 0);
lean_inc(v_a_3435_);
lean_dec_ref_known(v___x_3434_, 1);
v___x_3436_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__1));
v___x_3437_ = lean_box(0);
if (v_isShared_3389_ == 0)
{
lean_ctor_set_tag(v___x_3388_, 1);
lean_ctor_set(v___x_3388_, 1, v___x_3437_);
lean_ctor_set(v___x_3388_, 0, v_a_3435_);
v___x_3439_ = v___x_3388_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3435_);
lean_ctor_set(v_reuseFailAlloc_3584_, 1, v___x_3437_);
v___x_3439_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
lean_object* v___x_3441_; 
if (v_isShared_3375_ == 0)
{
lean_ctor_set_tag(v___x_3374_, 1);
lean_ctor_set(v___x_3374_, 1, v___x_3439_);
lean_ctor_set(v___x_3374_, 0, v_a_3433_);
v___x_3441_ = v___x_3374_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v_a_3433_);
lean_ctor_set(v_reuseFailAlloc_3583_, 1, v___x_3439_);
v___x_3441_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; 
v___x_3442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3442_, 0, v_a_3423_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
v___x_3443_ = l_Lean_Expr_const___override(v___x_3436_, v___x_3442_);
v___x_3444_ = lean_unsigned_to_nat(2u);
v___x_3445_ = lean_mk_empty_array_with_capacity(v___x_3444_);
lean_inc(v_fst_3385_);
v___x_3446_ = lean_array_push(v___x_3445_, v_fst_3385_);
lean_inc(v_fst_3371_);
v___x_3447_ = lean_array_push(v___x_3446_, v_fst_3371_);
v___x_3448_ = l_Lean_mkAppN(v___x_3443_, v___x_3447_);
lean_dec_ref(v___x_3447_);
v___x_3449_ = lean_box(0);
v___x_3450_ = l_Lean_Meta_trySynthInstance(v___x_3448_, v___x_3449_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3450_) == 0)
{
lean_object* v_a_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3581_; 
v_a_3451_ = lean_ctor_get(v___x_3450_, 0);
v_isSharedCheck_3581_ = !lean_is_exclusive(v___x_3450_);
if (v_isSharedCheck_3581_ == 0)
{
v___x_3453_ = v___x_3450_;
v_isShared_3454_ = v_isSharedCheck_3581_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_a_3451_);
lean_dec(v___x_3450_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3581_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
if (lean_obj_tag(v_a_3451_) == 1)
{
lean_object* v_a_3455_; lean_object* v___x_3456_; 
lean_del_object(v___x_3453_);
v_a_3455_ = lean_ctor_get(v_a_3451_, 0);
lean_inc(v_a_3455_);
lean_dec_ref_known(v_a_3451_, 1);
lean_inc(v_snd_3386_);
v___x_3456_ = l_Lean_Meta_getDecLevel(v_snd_3386_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v_a_3457_; lean_object* v___x_3458_; 
v_a_3457_ = lean_ctor_get(v___x_3456_, 0);
lean_inc(v_a_3457_);
lean_dec_ref_known(v___x_3456_, 1);
v___x_3458_ = l_Lean_Meta_getDecLevel(v_a_3358_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_object* v_a_3459_; lean_object* v___x_3460_; 
v_a_3459_ = lean_ctor_get(v___x_3458_, 0);
lean_inc(v_a_3459_);
lean_dec_ref_known(v___x_3458_, 1);
lean_inc(v_a_3351_);
v___x_3460_ = l_Lean_Meta_getDecLevel(v_a_3351_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3460_) == 0)
{
lean_object* v_a_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; 
v_a_3461_ = lean_ctor_get(v___x_3460_, 0);
lean_inc(v_a_3461_);
lean_dec_ref_known(v___x_3460_, 1);
v___x_3462_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__3));
v___x_3463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3463_, 0, v_a_3461_);
lean_ctor_set(v___x_3463_, 1, v___x_3437_);
v___x_3464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3464_, 0, v_a_3459_);
lean_ctor_set(v___x_3464_, 1, v___x_3463_);
v___x_3465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3465_, 0, v_a_3457_);
lean_ctor_set(v___x_3465_, 1, v___x_3464_);
lean_inc_ref(v___x_3465_);
v___x_3466_ = l_Lean_mkConst(v___x_3462_, v___x_3465_);
v___x_3467_ = lean_unsigned_to_nat(5u);
v___x_3468_ = lean_mk_empty_array_with_capacity(v___x_3467_);
lean_inc(v_fst_3385_);
v___x_3469_ = lean_array_push(v___x_3468_, v_fst_3385_);
lean_inc(v_fst_3371_);
v___x_3470_ = lean_array_push(v___x_3469_, v_fst_3371_);
lean_inc(v_a_3455_);
v___x_3471_ = lean_array_push(v___x_3470_, v_a_3455_);
lean_inc(v_snd_3386_);
v___x_3472_ = lean_array_push(v___x_3471_, v_snd_3386_);
lean_inc_ref(v_e_3322_);
v___x_3473_ = lean_array_push(v___x_3472_, v_e_3322_);
v___x_3474_ = l_Lean_mkAppN(v___x_3466_, v___x_3473_);
lean_dec_ref(v___x_3473_);
lean_inc(v_a_3327_);
lean_inc_ref(v_a_3326_);
lean_inc(v_a_3325_);
lean_inc_ref(v_a_3324_);
lean_inc_ref(v___x_3474_);
v___x_3475_ = lean_infer_type(v___x_3474_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3475_) == 0)
{
lean_object* v_a_3476_; lean_object* v___x_3477_; 
v_a_3476_ = lean_ctor_get(v___x_3475_, 0);
lean_inc(v_a_3476_);
lean_dec_ref_known(v___x_3475_, 1);
lean_inc(v_a_3351_);
v___x_3477_ = l_Lean_Meta_isExprDefEq(v_a_3351_, v_a_3476_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3477_) == 0)
{
lean_object* v_a_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3572_; 
v_a_3478_ = lean_ctor_get(v___x_3477_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3480_ = v___x_3477_;
v_isShared_3481_ = v_isSharedCheck_3572_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_a_3478_);
lean_dec(v___x_3477_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3572_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
uint8_t v___x_3482_; 
v___x_3482_ = lean_unbox(v_a_3478_);
lean_dec(v_a_3478_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3483_; 
lean_del_object(v___x_3480_);
lean_dec_ref(v___x_3474_);
lean_del_object(v___x_3383_);
lean_inc(v_fst_3371_);
v___x_3483_ = l_Lean_Meta_isMonad_x3f(v_fst_3371_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3483_) == 0)
{
lean_object* v_a_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3564_; 
v_a_3484_ = lean_ctor_get(v___x_3483_, 0);
v_isSharedCheck_3564_ = !lean_is_exclusive(v___x_3483_);
if (v_isSharedCheck_3564_ == 0)
{
v___x_3486_ = v___x_3483_;
v_isShared_3487_ = v_isSharedCheck_3564_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_a_3484_);
lean_dec(v___x_3483_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3564_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
if (lean_obj_tag(v_a_3484_) == 1)
{
lean_object* v_val_3488_; lean_object* v___x_3490_; uint8_t v_isShared_3491_; uint8_t v_isSharedCheck_3560_; 
lean_del_object(v___x_3486_);
v_val_3488_ = lean_ctor_get(v_a_3484_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v_a_3484_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3490_ = v_a_3484_;
v_isShared_3491_ = v_isSharedCheck_3560_;
goto v_resetjp_3489_;
}
else
{
lean_inc(v_val_3488_);
lean_dec(v_a_3484_);
v___x_3490_ = lean_box(0);
v_isShared_3491_ = v_isSharedCheck_3560_;
goto v_resetjp_3489_;
}
v_resetjp_3489_:
{
lean_object* v___x_3492_; 
lean_inc(v_snd_3386_);
v___x_3492_ = l_Lean_Meta_getLevel(v_snd_3386_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3492_) == 0)
{
lean_object* v_a_3493_; lean_object* v___x_3494_; 
v_a_3493_ = lean_ctor_get(v___x_3492_, 0);
lean_inc(v_a_3493_);
lean_dec_ref_known(v___x_3492_, 1);
lean_inc(v_snd_3372_);
v___x_3494_ = l_Lean_Meta_getLevel(v_snd_3372_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3494_) == 0)
{
lean_object* v_a_3495_; lean_object* v___x_3496_; uint8_t v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v_a_3495_ = lean_ctor_get(v___x_3494_, 0);
lean_inc(v_a_3495_);
lean_dec_ref_known(v___x_3494_, 1);
v___x_3496_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__5));
v___x_3497_ = 0;
v___x_3498_ = ((lean_object*)(l_Lean_Meta_coerceSimpleRecordingNames_x3f___closed__1));
v___x_3499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3499_, 0, v_a_3495_);
lean_ctor_set(v___x_3499_, 1, v___x_3437_);
v___x_3500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3500_, 0, v_a_3493_);
lean_ctor_set(v___x_3500_, 1, v___x_3499_);
v___x_3501_ = l_Lean_mkConst(v___x_3498_, v___x_3500_);
v___x_3502_ = lean_obj_once(&l_Lean_Meta_coerceMonadLift_x3f___closed__6, &l_Lean_Meta_coerceMonadLift_x3f___closed__6_once, _init_l_Lean_Meta_coerceMonadLift_x3f___closed__6);
v___x_3503_ = lean_unsigned_to_nat(3u);
v___x_3504_ = lean_mk_empty_array_with_capacity(v___x_3503_);
lean_inc_n(v_snd_3386_, 2);
v___x_3505_ = lean_array_push(v___x_3504_, v_snd_3386_);
v___x_3506_ = lean_array_push(v___x_3505_, v___x_3502_);
lean_inc(v_snd_3372_);
v___x_3507_ = lean_array_push(v___x_3506_, v_snd_3372_);
v___x_3508_ = l_Lean_mkAppN(v___x_3501_, v___x_3507_);
lean_dec_ref(v___x_3507_);
v___x_3509_ = l_Lean_mkForall(v___x_3496_, v___x_3497_, v_snd_3386_, v___x_3508_);
v___x_3510_ = l_Lean_Meta_trySynthInstance(v___x_3509_, v___x_3449_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3556_; 
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3556_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3556_ == 0)
{
v___x_3513_ = v___x_3510_;
v_isShared_3514_ = v_isSharedCheck_3556_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3510_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3556_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
if (lean_obj_tag(v_a_3511_) == 1)
{
lean_object* v_a_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; 
lean_del_object(v___x_3513_);
v_a_3515_ = lean_ctor_get(v_a_3511_, 0);
lean_inc(v_a_3515_);
lean_dec_ref_known(v_a_3511_, 1);
v___x_3516_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__9));
v___x_3517_ = l_Lean_mkConst(v___x_3516_, v___x_3465_);
v___x_3518_ = lean_unsigned_to_nat(8u);
v___x_3519_ = lean_mk_empty_array_with_capacity(v___x_3518_);
v___x_3520_ = lean_array_push(v___x_3519_, v_fst_3385_);
v___x_3521_ = lean_array_push(v___x_3520_, v_fst_3371_);
v___x_3522_ = lean_array_push(v___x_3521_, v_snd_3386_);
v___x_3523_ = lean_array_push(v___x_3522_, v_snd_3372_);
v___x_3524_ = lean_array_push(v___x_3523_, v_a_3455_);
v___x_3525_ = lean_array_push(v___x_3524_, v_a_3515_);
v___x_3526_ = lean_array_push(v___x_3525_, v_val_3488_);
v___x_3527_ = lean_array_push(v___x_3526_, v_e_3322_);
v___x_3528_ = l_Lean_mkAppN(v___x_3517_, v___x_3527_);
lean_dec_ref(v___x_3527_);
v___x_3529_ = l_Lean_Meta_expandCoe(v___x_3528_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3529_) == 0)
{
lean_object* v_a_3530_; lean_object* v_fst_3531_; lean_object* v___x_3532_; 
v_a_3530_ = lean_ctor_get(v___x_3529_, 0);
lean_inc(v_a_3530_);
lean_dec_ref_known(v___x_3529_, 1);
v_fst_3531_ = lean_ctor_get(v_a_3530_, 0);
lean_inc_n(v_fst_3531_, 2);
lean_dec(v_a_3530_);
lean_inc(v_a_3327_);
lean_inc_ref(v_a_3326_);
lean_inc(v_a_3325_);
lean_inc_ref(v_a_3324_);
v___x_3532_ = lean_infer_type(v_fst_3531_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; lean_object* v___x_3534_; 
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3533_);
lean_dec_ref_known(v___x_3532_, 1);
v___x_3534_ = l_Lean_Meta_isExprDefEq(v_a_3351_, v_a_3533_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3534_) == 0)
{
lean_object* v_a_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3549_; 
v_a_3535_ = lean_ctor_get(v___x_3534_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v___x_3534_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3537_ = v___x_3534_;
v_isShared_3538_ = v_isSharedCheck_3549_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_a_3535_);
lean_dec(v___x_3534_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3549_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
uint8_t v___x_3539_; 
v___x_3539_ = lean_unbox(v_a_3535_);
lean_dec(v_a_3535_);
if (v___x_3539_ == 0)
{
lean_object* v___x_3541_; 
lean_dec(v_fst_3531_);
lean_del_object(v___x_3490_);
if (v_isShared_3538_ == 0)
{
lean_ctor_set(v___x_3537_, 0, v___x_3449_);
v___x_3541_ = v___x_3537_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v___x_3449_);
v___x_3541_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
return v___x_3541_;
}
}
else
{
lean_object* v___x_3544_; 
if (v_isShared_3491_ == 0)
{
lean_ctor_set(v___x_3490_, 0, v_fst_3531_);
v___x_3544_ = v___x_3490_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v_fst_3531_);
v___x_3544_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
lean_object* v___x_3546_; 
if (v_isShared_3538_ == 0)
{
lean_ctor_set(v___x_3537_, 0, v___x_3544_);
v___x_3546_ = v___x_3537_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v___x_3544_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
}
}
}
else
{
lean_object* v_a_3550_; 
lean_dec(v_fst_3531_);
lean_del_object(v___x_3490_);
v_a_3550_ = lean_ctor_get(v___x_3534_, 0);
lean_inc(v_a_3550_);
lean_dec_ref_known(v___x_3534_, 1);
v_a_3336_ = v_a_3550_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3551_; 
lean_dec(v_fst_3531_);
lean_del_object(v___x_3490_);
lean_dec(v_a_3351_);
v_a_3551_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3551_);
lean_dec_ref_known(v___x_3532_, 1);
v_a_3336_ = v_a_3551_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3552_; 
lean_del_object(v___x_3490_);
lean_dec(v_a_3351_);
v_a_3552_ = lean_ctor_get(v___x_3529_, 0);
lean_inc(v_a_3552_);
lean_dec_ref_known(v___x_3529_, 1);
v_a_3336_ = v_a_3552_;
goto v___jp_3335_;
}
}
else
{
lean_object* v___x_3554_; 
lean_dec(v_a_3511_);
lean_del_object(v___x_3490_);
lean_dec(v_val_3488_);
lean_dec_ref_known(v___x_3465_, 2);
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
if (v_isShared_3514_ == 0)
{
lean_ctor_set(v___x_3513_, 0, v___x_3449_);
v___x_3554_ = v___x_3513_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v___x_3449_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
}
}
else
{
lean_object* v_a_3557_; 
lean_del_object(v___x_3490_);
lean_dec(v_val_3488_);
lean_dec_ref_known(v___x_3465_, 2);
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3557_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3557_);
lean_dec_ref_known(v___x_3510_, 1);
v_a_3336_ = v_a_3557_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3558_; 
lean_dec(v_a_3493_);
lean_del_object(v___x_3490_);
lean_dec(v_val_3488_);
lean_dec_ref_known(v___x_3465_, 2);
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3558_ = lean_ctor_get(v___x_3494_, 0);
lean_inc(v_a_3558_);
lean_dec_ref_known(v___x_3494_, 1);
v_a_3336_ = v_a_3558_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3559_; 
lean_del_object(v___x_3490_);
lean_dec(v_val_3488_);
lean_dec_ref_known(v___x_3465_, 2);
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3559_ = lean_ctor_get(v___x_3492_, 0);
lean_inc(v_a_3559_);
lean_dec_ref_known(v___x_3492_, 1);
v_a_3336_ = v_a_3559_;
goto v___jp_3335_;
}
}
}
else
{
lean_object* v___x_3562_; 
lean_dec(v_a_3484_);
lean_dec_ref_known(v___x_3465_, 2);
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
if (v_isShared_3487_ == 0)
{
lean_ctor_set(v___x_3486_, 0, v___x_3449_);
v___x_3562_ = v___x_3486_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v___x_3449_);
v___x_3562_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
return v___x_3562_;
}
}
}
}
else
{
lean_object* v_a_3565_; 
lean_dec_ref_known(v___x_3465_, 2);
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3565_ = lean_ctor_get(v___x_3483_, 0);
lean_inc(v_a_3565_);
lean_dec_ref_known(v___x_3483_, 1);
v_a_3336_ = v_a_3565_;
goto v___jp_3335_;
}
}
else
{
lean_object* v___x_3567_; 
lean_dec_ref_known(v___x_3465_, 2);
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
if (v_isShared_3384_ == 0)
{
lean_ctor_set(v___x_3383_, 0, v___x_3474_);
v___x_3567_ = v___x_3383_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v___x_3474_);
v___x_3567_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
lean_object* v___x_3569_; 
if (v_isShared_3481_ == 0)
{
lean_ctor_set(v___x_3480_, 0, v___x_3567_);
v___x_3569_ = v___x_3480_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v___x_3567_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
return v___x_3569_;
}
}
}
}
}
else
{
lean_object* v_a_3573_; 
lean_dec_ref(v___x_3474_);
lean_dec_ref_known(v___x_3465_, 2);
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3573_ = lean_ctor_get(v___x_3477_, 0);
lean_inc(v_a_3573_);
lean_dec_ref_known(v___x_3477_, 1);
v_a_3336_ = v_a_3573_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3574_; 
lean_dec_ref(v___x_3474_);
lean_dec_ref_known(v___x_3465_, 2);
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3574_ = lean_ctor_get(v___x_3475_, 0);
lean_inc(v_a_3574_);
lean_dec_ref_known(v___x_3475_, 1);
v_a_3336_ = v_a_3574_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3575_; 
lean_dec(v_a_3459_);
lean_dec(v_a_3457_);
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3575_ = lean_ctor_get(v___x_3460_, 0);
lean_inc(v_a_3575_);
lean_dec_ref_known(v___x_3460_, 1);
v_a_3336_ = v_a_3575_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3576_; 
lean_dec(v_a_3457_);
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3576_ = lean_ctor_get(v___x_3458_, 0);
lean_inc(v_a_3576_);
lean_dec_ref_known(v___x_3458_, 1);
v_a_3336_ = v_a_3576_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3577_; 
lean_dec(v_a_3455_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3577_ = lean_ctor_get(v___x_3456_, 0);
lean_inc(v_a_3577_);
lean_dec_ref_known(v___x_3456_, 1);
v_a_3336_ = v_a_3577_;
goto v___jp_3335_;
}
}
else
{
lean_object* v___x_3579_; 
lean_dec(v_a_3451_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
if (v_isShared_3454_ == 0)
{
lean_ctor_set(v___x_3453_, 0, v___x_3449_);
v___x_3579_ = v___x_3453_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v___x_3449_);
v___x_3579_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
return v___x_3579_;
}
}
}
}
else
{
lean_object* v_a_3582_; 
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3582_ = lean_ctor_get(v___x_3450_, 0);
lean_inc(v_a_3582_);
lean_dec_ref_known(v___x_3450_, 1);
v_a_3336_ = v_a_3582_;
goto v___jp_3335_;
}
}
}
}
else
{
lean_object* v_a_3585_; 
lean_dec(v_a_3433_);
lean_dec(v_a_3423_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3585_ = lean_ctor_get(v___x_3434_, 0);
lean_inc(v_a_3585_);
lean_dec_ref_known(v___x_3434_, 1);
v_a_3336_ = v_a_3585_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3586_; 
lean_dec(v_a_3423_);
lean_dec(v_u_3421_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3586_ = lean_ctor_get(v___x_3432_, 0);
lean_inc(v_a_3586_);
lean_dec_ref_known(v___x_3432_, 1);
v_a_3336_ = v_a_3586_;
goto v___jp_3335_;
}
}
else
{
lean_object* v___x_3587_; lean_object* v___x_3589_; 
lean_dec(v_a_3423_);
lean_dec(v_u_3421_);
lean_dec(v_u_3413_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v___x_3587_ = lean_box(0);
if (v_isShared_3430_ == 0)
{
lean_ctor_set(v___x_3429_, 0, v___x_3587_);
v___x_3589_ = v___x_3429_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v___x_3587_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
return v___x_3589_;
}
}
}
}
else
{
lean_object* v_a_3592_; 
lean_dec(v_a_3423_);
lean_dec(v_u_3421_);
lean_dec(v_u_3413_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3592_ = lean_ctor_get(v___x_3426_, 0);
lean_inc(v_a_3592_);
lean_dec_ref_known(v___x_3426_, 1);
v_a_3336_ = v_a_3592_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3593_; 
lean_dec(v_a_3423_);
lean_dec(v_u_3421_);
lean_dec(v_u_3413_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3593_ = lean_ctor_get(v___x_3424_, 0);
lean_inc(v_a_3593_);
lean_dec_ref_known(v___x_3424_, 1);
v_a_3336_ = v_a_3593_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3594_; 
lean_dec(v_u_3421_);
lean_dec(v_u_3420_);
lean_dec(v_u_3413_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3594_ = lean_ctor_get(v___x_3422_, 0);
lean_inc(v_a_3594_);
lean_dec_ref_known(v___x_3422_, 1);
v_a_3336_ = v_a_3594_;
goto v___jp_3335_;
}
}
else
{
lean_object* v___x_3595_; 
lean_dec(v_u_3413_);
lean_dec(v_u_3412_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v___x_3595_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3417_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
lean_dec_ref_known(v_a_3417_, 3);
v___y_3340_ = v___x_3595_;
goto v___jp_3339_;
}
}
else
{
lean_object* v___x_3596_; 
lean_dec(v_u_3413_);
lean_dec(v_u_3412_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v___x_3596_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3417_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
lean_dec_ref_known(v_a_3417_, 3);
v___y_3340_ = v___x_3596_;
goto v___jp_3339_;
}
}
else
{
lean_object* v___x_3597_; 
lean_dec(v_u_3413_);
lean_dec(v_u_3412_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v___x_3597_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3417_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
lean_dec(v_a_3417_);
v___y_3340_ = v___x_3597_;
goto v___jp_3339_;
}
}
else
{
lean_object* v_a_3598_; 
lean_dec(v_u_3413_);
lean_dec(v_u_3412_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3598_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3598_);
lean_dec_ref_known(v___x_3416_, 1);
v_a_3336_ = v_a_3598_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3599_; 
lean_dec(v_u_3413_);
lean_dec(v_u_3412_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3599_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3599_);
lean_dec_ref_known(v___x_3414_, 1);
v_a_3336_ = v_a_3599_;
goto v___jp_3335_;
}
}
else
{
lean_object* v___x_3600_; 
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v___x_3600_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3409_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
lean_dec_ref_known(v_a_3409_, 3);
v___y_3340_ = v___x_3600_;
goto v___jp_3339_;
}
}
else
{
lean_object* v___x_3601_; 
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v___x_3601_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3409_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
lean_dec_ref_known(v_a_3409_, 3);
v___y_3340_ = v___x_3601_;
goto v___jp_3339_;
}
}
else
{
lean_object* v___x_3602_; 
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v___x_3602_ = l_Lean_Meta_coerceMonadLift_x3f___lam__0(v_a_3409_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
lean_dec(v_a_3409_);
v___y_3340_ = v___x_3602_;
goto v___jp_3339_;
}
}
else
{
lean_object* v_a_3603_; 
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3603_ = lean_ctor_get(v___x_3408_, 0);
lean_inc(v_a_3603_);
lean_dec_ref_known(v___x_3408_, 1);
v_a_3336_ = v_a_3603_;
goto v___jp_3335_;
}
}
else
{
lean_object* v_a_3604_; 
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3604_ = lean_ctor_get(v___x_3406_, 0);
lean_inc(v_a_3604_);
lean_dec_ref_known(v___x_3406_, 1);
v_a_3336_ = v_a_3604_;
goto v___jp_3335_;
}
}
}
else
{
lean_object* v___x_3605_; 
lean_del_object(v___x_3395_);
lean_del_object(v___x_3388_);
lean_del_object(v___x_3374_);
lean_dec(v_a_3358_);
lean_dec(v_a_3351_);
v___x_3605_ = l_Lean_Meta_isMonad_x3f(v_fst_3371_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3605_) == 0)
{
lean_object* v_a_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3698_; 
v_a_3606_ = lean_ctor_get(v___x_3605_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3605_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3608_ = v___x_3605_;
v_isShared_3609_ = v_isSharedCheck_3698_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_a_3606_);
lean_dec(v___x_3605_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3698_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
if (lean_obj_tag(v_a_3606_) == 1)
{
lean_object* v___x_3610_; lean_object* v___x_3612_; 
v___x_3610_ = ((lean_object*)(l_Lean_Meta_coerceMonadLift_x3f___closed__11));
if (v_isShared_3384_ == 0)
{
lean_ctor_set(v___x_3383_, 0, v_fst_3385_);
v___x_3612_ = v___x_3383_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v_fst_3385_);
v___x_3612_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
lean_object* v___x_3614_; 
if (v_isShared_3370_ == 0)
{
lean_ctor_set(v___x_3369_, 0, v_snd_3386_);
v___x_3614_ = v___x_3369_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_snd_3386_);
v___x_3614_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
lean_object* v___x_3616_; 
if (v_isShared_3361_ == 0)
{
lean_ctor_set_tag(v___x_3360_, 1);
lean_ctor_set(v___x_3360_, 0, v_snd_3372_);
v___x_3616_ = v___x_3360_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v_snd_3372_);
v___x_3616_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
lean_object* v___x_3617_; lean_object* v___y_3619_; uint8_t v___y_3620_; lean_object* v_a_3642_; lean_object* v___x_3646_; 
v___x_3617_ = lean_box(0);
if (v_isShared_3354_ == 0)
{
lean_ctor_set_tag(v___x_3353_, 1);
lean_ctor_set(v___x_3353_, 0, v_e_3322_);
v___x_3646_ = v___x_3353_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_e_3322_);
v___x_3646_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3645_;
}
v___jp_3618_:
{
if (v___y_3620_ == 0)
{
lean_object* v___x_3621_; 
lean_dec_ref(v___y_3619_);
lean_del_object(v___x_3608_);
v___x_3621_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3391_, v_a_3325_, v_a_3327_);
lean_dec(v_a_3391_);
if (lean_obj_tag(v___x_3621_) == 0)
{
lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3628_; 
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3628_ == 0)
{
lean_object* v_unused_3629_; 
v_unused_3629_ = lean_ctor_get(v___x_3621_, 0);
lean_dec(v_unused_3629_);
v___x_3623_ = v___x_3621_;
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
else
{
lean_dec(v___x_3621_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
lean_object* v___x_3626_; 
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 0, v___x_3617_);
v___x_3626_ = v___x_3623_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v___x_3617_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
return v___x_3626_;
}
}
}
else
{
lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3637_; 
v_a_3630_ = lean_ctor_get(v___x_3621_, 0);
v_isSharedCheck_3637_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3637_ == 0)
{
v___x_3632_ = v___x_3621_;
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_dec(v___x_3621_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3633_ == 0)
{
v___x_3635_ = v___x_3632_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v_a_3630_);
v___x_3635_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
return v___x_3635_;
}
}
}
}
else
{
lean_object* v___x_3639_; 
lean_dec(v_a_3391_);
if (v_isShared_3609_ == 0)
{
lean_ctor_set_tag(v___x_3608_, 1);
lean_ctor_set(v___x_3608_, 0, v___y_3619_);
v___x_3639_ = v___x_3608_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v___y_3619_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
}
v___jp_3641_:
{
uint8_t v___x_3643_; 
v___x_3643_ = l_Lean_Exception_isInterrupt(v_a_3642_);
if (v___x_3643_ == 0)
{
uint8_t v___x_3644_; 
lean_inc_ref(v_a_3642_);
v___x_3644_ = l_Lean_Exception_isRuntime(v_a_3642_);
v___y_3619_ = v_a_3642_;
v___y_3620_ = v___x_3644_;
goto v___jp_3618_;
}
else
{
v___y_3619_ = v_a_3642_;
v___y_3620_ = v___x_3643_;
goto v___jp_3618_;
}
}
v_reusejp_3645_:
{
lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
v___x_3647_ = lean_unsigned_to_nat(6u);
v___x_3648_ = lean_mk_empty_array_with_capacity(v___x_3647_);
v___x_3649_ = lean_array_push(v___x_3648_, v___x_3612_);
v___x_3650_ = lean_array_push(v___x_3649_, v___x_3614_);
v___x_3651_ = lean_array_push(v___x_3650_, v___x_3616_);
v___x_3652_ = lean_array_push(v___x_3651_, v___x_3617_);
v___x_3653_ = lean_array_push(v___x_3652_, v_a_3606_);
v___x_3654_ = lean_array_push(v___x_3653_, v___x_3646_);
v___x_3655_ = l_Lean_Meta_mkAppOptM(v___x_3610_, v___x_3654_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3655_) == 0)
{
lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3674_; 
v_a_3656_ = lean_ctor_get(v___x_3655_, 0);
v_isSharedCheck_3674_ = !lean_is_exclusive(v___x_3655_);
if (v_isSharedCheck_3674_ == 0)
{
v___x_3658_ = v___x_3655_;
v_isShared_3659_ = v_isSharedCheck_3674_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v___x_3655_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3674_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3660_; 
v___x_3660_ = l_Lean_Meta_expandCoe(v_a_3656_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_);
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_object* v_a_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3672_; 
lean_del_object(v___x_3608_);
lean_dec(v_a_3391_);
v_a_3661_ = lean_ctor_get(v___x_3660_, 0);
v_isSharedCheck_3672_ = !lean_is_exclusive(v___x_3660_);
if (v_isSharedCheck_3672_ == 0)
{
v___x_3663_ = v___x_3660_;
v_isShared_3664_ = v_isSharedCheck_3672_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_a_3661_);
lean_dec(v___x_3660_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3672_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v_fst_3665_; lean_object* v___x_3667_; 
v_fst_3665_ = lean_ctor_get(v_a_3661_, 0);
lean_inc(v_fst_3665_);
lean_dec(v_a_3661_);
if (v_isShared_3659_ == 0)
{
lean_ctor_set_tag(v___x_3658_, 1);
lean_ctor_set(v___x_3658_, 0, v_fst_3665_);
v___x_3667_ = v___x_3658_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v_fst_3665_);
v___x_3667_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
lean_object* v___x_3669_; 
if (v_isShared_3664_ == 0)
{
lean_ctor_set(v___x_3663_, 0, v___x_3667_);
v___x_3669_ = v___x_3663_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v___x_3667_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
}
else
{
lean_object* v_a_3673_; 
lean_del_object(v___x_3658_);
v_a_3673_ = lean_ctor_get(v___x_3660_, 0);
lean_inc(v_a_3673_);
lean_dec_ref_known(v___x_3660_, 1);
v_a_3642_ = v_a_3673_;
goto v___jp_3641_;
}
}
}
else
{
lean_object* v_a_3675_; 
v_a_3675_ = lean_ctor_get(v___x_3655_, 0);
lean_inc(v_a_3675_);
lean_dec_ref_known(v___x_3655_, 1);
v_a_3642_ = v_a_3675_;
goto v___jp_3641_;
}
}
}
}
}
}
else
{
lean_object* v___x_3680_; 
lean_del_object(v___x_3608_);
lean_dec(v_a_3606_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_dec(v_snd_3372_);
lean_del_object(v___x_3369_);
lean_del_object(v___x_3360_);
lean_del_object(v___x_3353_);
lean_dec_ref(v_e_3322_);
v___x_3680_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3391_, v_a_3325_, v_a_3327_);
lean_dec(v_a_3391_);
if (lean_obj_tag(v___x_3680_) == 0)
{
lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3688_; 
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3680_);
if (v_isSharedCheck_3688_ == 0)
{
lean_object* v_unused_3689_; 
v_unused_3689_ = lean_ctor_get(v___x_3680_, 0);
lean_dec(v_unused_3689_);
v___x_3682_ = v___x_3680_;
v_isShared_3683_ = v_isSharedCheck_3688_;
goto v_resetjp_3681_;
}
else
{
lean_dec(v___x_3680_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3688_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3684_; lean_object* v___x_3686_; 
v___x_3684_ = lean_box(0);
if (v_isShared_3683_ == 0)
{
lean_ctor_set(v___x_3682_, 0, v___x_3684_);
v___x_3686_ = v___x_3682_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3684_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
}
else
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
v_a_3690_ = lean_ctor_get(v___x_3680_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3680_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3692_ = v___x_3680_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3680_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3695_; 
if (v_isShared_3693_ == 0)
{
v___x_3695_ = v___x_3692_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3690_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3391_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_dec(v_snd_3372_);
lean_del_object(v___x_3369_);
lean_del_object(v___x_3360_);
lean_del_object(v___x_3353_);
lean_dec_ref(v_e_3322_);
return v___x_3605_;
}
}
}
}
else
{
lean_object* v_a_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3707_; 
lean_dec(v_a_3391_);
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_del_object(v___x_3369_);
lean_del_object(v___x_3360_);
lean_dec(v_a_3358_);
lean_del_object(v___x_3353_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3700_ = lean_ctor_get(v___x_3392_, 0);
v_isSharedCheck_3707_ = !lean_is_exclusive(v___x_3392_);
if (v_isSharedCheck_3707_ == 0)
{
v___x_3702_ = v___x_3392_;
v_isShared_3703_ = v_isSharedCheck_3707_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_a_3700_);
lean_dec(v___x_3392_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3707_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
lean_object* v___x_3705_; 
if (v_isShared_3703_ == 0)
{
v___x_3705_ = v___x_3702_;
goto v_reusejp_3704_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v_a_3700_);
v___x_3705_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3704_;
}
v_reusejp_3704_:
{
return v___x_3705_;
}
}
}
}
else
{
lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3715_; 
lean_del_object(v___x_3388_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
lean_del_object(v___x_3383_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_del_object(v___x_3369_);
lean_del_object(v___x_3360_);
lean_dec(v_a_3358_);
lean_del_object(v___x_3353_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3708_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3710_ = v___x_3390_;
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_dec(v___x_3390_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3713_; 
if (v_isShared_3711_ == 0)
{
v___x_3713_ = v___x_3710_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_a_3708_);
v___x_3713_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
return v___x_3713_;
}
}
}
}
}
}
else
{
lean_object* v___x_3718_; lean_object* v___x_3720_; 
lean_dec(v_a_3377_);
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_del_object(v___x_3369_);
lean_del_object(v___x_3360_);
lean_dec(v_a_3358_);
lean_del_object(v___x_3353_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v___x_3718_ = lean_box(0);
if (v_isShared_3380_ == 0)
{
lean_ctor_set(v___x_3379_, 0, v___x_3718_);
v___x_3720_ = v___x_3379_;
goto v_reusejp_3719_;
}
else
{
lean_object* v_reuseFailAlloc_3721_; 
v_reuseFailAlloc_3721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3721_, 0, v___x_3718_);
v___x_3720_ = v_reuseFailAlloc_3721_;
goto v_reusejp_3719_;
}
v_reusejp_3719_:
{
return v___x_3720_;
}
}
}
}
else
{
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3730_; 
lean_del_object(v___x_3374_);
lean_dec(v_snd_3372_);
lean_dec(v_fst_3371_);
lean_del_object(v___x_3369_);
lean_del_object(v___x_3360_);
lean_dec(v_a_3358_);
lean_del_object(v___x_3353_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3723_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3725_ = v___x_3376_;
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3376_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3728_; 
if (v_isShared_3726_ == 0)
{
v___x_3728_ = v___x_3725_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3723_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
}
}
}
else
{
lean_object* v___x_3733_; lean_object* v___x_3735_; 
lean_dec(v_a_3363_);
lean_del_object(v___x_3360_);
lean_dec(v_a_3358_);
lean_del_object(v___x_3353_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v___x_3733_ = lean_box(0);
if (v_isShared_3366_ == 0)
{
lean_ctor_set(v___x_3365_, 0, v___x_3733_);
v___x_3735_ = v___x_3365_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v___x_3733_);
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
else
{
lean_object* v_a_3738_; lean_object* v___x_3740_; uint8_t v_isShared_3741_; uint8_t v_isSharedCheck_3745_; 
lean_del_object(v___x_3360_);
lean_dec(v_a_3358_);
lean_del_object(v___x_3353_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3738_ = lean_ctor_get(v___x_3362_, 0);
v_isSharedCheck_3745_ = !lean_is_exclusive(v___x_3362_);
if (v_isSharedCheck_3745_ == 0)
{
v___x_3740_ = v___x_3362_;
v_isShared_3741_ = v_isSharedCheck_3745_;
goto v_resetjp_3739_;
}
else
{
lean_inc(v_a_3738_);
lean_dec(v___x_3362_);
v___x_3740_ = lean_box(0);
v_isShared_3741_ = v_isSharedCheck_3745_;
goto v_resetjp_3739_;
}
v_resetjp_3739_:
{
lean_object* v___x_3743_; 
if (v_isShared_3741_ == 0)
{
v___x_3743_ = v___x_3740_;
goto v_reusejp_3742_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v_a_3738_);
v___x_3743_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3742_;
}
v_reusejp_3742_:
{
return v___x_3743_;
}
}
}
}
}
else
{
lean_object* v_a_3747_; lean_object* v___x_3749_; uint8_t v_isShared_3750_; uint8_t v_isSharedCheck_3754_; 
lean_del_object(v___x_3353_);
lean_dec(v_a_3351_);
lean_dec_ref(v_e_3322_);
v_a_3747_ = lean_ctor_get(v___x_3355_, 0);
v_isSharedCheck_3754_ = !lean_is_exclusive(v___x_3355_);
if (v_isSharedCheck_3754_ == 0)
{
v___x_3749_ = v___x_3355_;
v_isShared_3750_ = v_isSharedCheck_3754_;
goto v_resetjp_3748_;
}
else
{
lean_inc(v_a_3747_);
lean_dec(v___x_3355_);
v___x_3749_ = lean_box(0);
v_isShared_3750_ = v_isSharedCheck_3754_;
goto v_resetjp_3748_;
}
v_resetjp_3748_:
{
lean_object* v___x_3752_; 
if (v_isShared_3750_ == 0)
{
v___x_3752_ = v___x_3749_;
goto v_reusejp_3751_;
}
else
{
lean_object* v_reuseFailAlloc_3753_; 
v_reuseFailAlloc_3753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3753_, 0, v_a_3747_);
v___x_3752_ = v_reuseFailAlloc_3753_;
goto v_reusejp_3751_;
}
v_reusejp_3751_:
{
return v___x_3752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceMonadLift_x3f___boxed(lean_object* v_e_3756_, lean_object* v_expectedType_3757_, lean_object* v_a_3758_, lean_object* v_a_3759_, lean_object* v_a_3760_, lean_object* v_a_3761_, lean_object* v_a_3762_){
_start:
{
lean_object* v_res_3763_; 
v_res_3763_ = l_Lean_Meta_coerceMonadLift_x3f(v_e_3756_, v_expectedType_3757_, v_a_3758_, v_a_3759_, v_a_3760_, v_a_3761_);
lean_dec(v_a_3761_);
lean_dec_ref(v_a_3760_);
lean_dec(v_a_3759_);
lean_dec_ref(v_a_3758_);
return v_res_3763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f(lean_object* v_expr_3764_, lean_object* v_expectedType_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_, lean_object* v_a_3769_){
_start:
{
lean_object* v___x_3771_; 
lean_inc_ref(v_expectedType_3765_);
lean_inc_ref(v_expr_3764_);
v___x_3771_ = l_Lean_Meta_coerceMonadLift_x3f(v_expr_3764_, v_expectedType_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
if (lean_obj_tag(v___x_3771_) == 0)
{
lean_object* v_a_3772_; lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3851_; 
v_a_3772_ = lean_ctor_get(v___x_3771_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v___x_3771_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3774_ = v___x_3771_;
v_isShared_3775_ = v_isSharedCheck_3851_;
goto v_resetjp_3773_;
}
else
{
lean_inc(v_a_3772_);
lean_dec(v___x_3771_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3851_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
if (lean_obj_tag(v_a_3772_) == 1)
{
lean_object* v_val_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3788_; 
lean_dec_ref(v_expectedType_3765_);
lean_dec_ref(v_expr_3764_);
v_val_3776_ = lean_ctor_get(v_a_3772_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v_a_3772_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3778_ = v_a_3772_;
v_isShared_3779_ = v_isSharedCheck_3788_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_val_3776_);
lean_dec(v_a_3772_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3788_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3783_; 
v___x_3780_ = lean_box(0);
v___x_3781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3781_, 0, v_val_3776_);
lean_ctor_set(v___x_3781_, 1, v___x_3780_);
if (v_isShared_3779_ == 0)
{
lean_ctor_set(v___x_3778_, 0, v___x_3781_);
v___x_3783_ = v___x_3778_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v___x_3781_);
v___x_3783_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
lean_object* v___x_3785_; 
if (v_isShared_3775_ == 0)
{
lean_ctor_set(v___x_3774_, 0, v___x_3783_);
v___x_3785_ = v___x_3774_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v___x_3783_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
}
else
{
lean_object* v___x_3789_; 
lean_del_object(v___x_3774_);
lean_dec(v_a_3772_);
lean_inc_ref(v_expectedType_3765_);
v___x_3789_ = l_Lean_Meta_whnfR(v_expectedType_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
if (lean_obj_tag(v___x_3789_) == 0)
{
lean_object* v_a_3790_; uint8_t v___x_3791_; 
v_a_3790_ = lean_ctor_get(v___x_3789_, 0);
lean_inc(v_a_3790_);
lean_dec_ref_known(v___x_3789_, 1);
v___x_3791_ = l_Lean_Expr_isForall(v_a_3790_);
lean_dec(v_a_3790_);
if (v___x_3791_ == 0)
{
lean_object* v___x_3792_; 
v___x_3792_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3764_, v_expectedType_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
return v___x_3792_;
}
else
{
lean_object* v___x_3793_; 
lean_inc_ref(v_expr_3764_);
v___x_3793_ = l_Lean_Meta_coerceToFunction_x3f(v_expr_3764_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
if (lean_obj_tag(v___x_3793_) == 0)
{
lean_object* v_a_3794_; 
v_a_3794_ = lean_ctor_get(v___x_3793_, 0);
lean_inc(v_a_3794_);
lean_dec_ref_known(v___x_3793_, 1);
if (lean_obj_tag(v_a_3794_) == 1)
{
lean_object* v_val_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3833_; 
v_val_3795_ = lean_ctor_get(v_a_3794_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v_a_3794_);
if (v_isSharedCheck_3833_ == 0)
{
v___x_3797_ = v_a_3794_;
v_isShared_3798_ = v_isSharedCheck_3833_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_val_3795_);
lean_dec(v_a_3794_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3833_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3799_; 
lean_inc(v_a_3769_);
lean_inc_ref(v_a_3768_);
lean_inc(v_a_3767_);
lean_inc_ref(v_a_3766_);
lean_inc(v_val_3795_);
v___x_3799_ = lean_infer_type(v_val_3795_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v_a_3800_; lean_object* v___x_3801_; 
v_a_3800_ = lean_ctor_get(v___x_3799_, 0);
lean_inc(v_a_3800_);
lean_dec_ref_known(v___x_3799_, 1);
lean_inc_ref(v_expectedType_3765_);
v___x_3801_ = l_Lean_Meta_isExprDefEq(v_a_3800_, v_expectedType_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
if (lean_obj_tag(v___x_3801_) == 0)
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3816_; 
v_a_3802_ = lean_ctor_get(v___x_3801_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v___x_3801_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3804_ = v___x_3801_;
v_isShared_3805_ = v_isSharedCheck_3816_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v___x_3801_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3816_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
uint8_t v___x_3806_; 
v___x_3806_ = lean_unbox(v_a_3802_);
lean_dec(v_a_3802_);
if (v___x_3806_ == 0)
{
lean_object* v___x_3807_; 
lean_del_object(v___x_3804_);
lean_del_object(v___x_3797_);
lean_dec(v_val_3795_);
v___x_3807_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3764_, v_expectedType_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
return v___x_3807_;
}
else
{
lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3811_; 
lean_dec_ref(v_expectedType_3765_);
lean_dec_ref(v_expr_3764_);
v___x_3808_ = lean_box(0);
v___x_3809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3809_, 0, v_val_3795_);
lean_ctor_set(v___x_3809_, 1, v___x_3808_);
if (v_isShared_3798_ == 0)
{
lean_ctor_set(v___x_3797_, 0, v___x_3809_);
v___x_3811_ = v___x_3797_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v___x_3809_);
v___x_3811_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
lean_object* v___x_3813_; 
if (v_isShared_3805_ == 0)
{
lean_ctor_set(v___x_3804_, 0, v___x_3811_);
v___x_3813_ = v___x_3804_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3814_; 
v_reuseFailAlloc_3814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3814_, 0, v___x_3811_);
v___x_3813_ = v_reuseFailAlloc_3814_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
return v___x_3813_;
}
}
}
}
}
else
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
lean_del_object(v___x_3797_);
lean_dec(v_val_3795_);
lean_dec_ref(v_expectedType_3765_);
lean_dec_ref(v_expr_3764_);
v_a_3817_ = lean_ctor_get(v___x_3801_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3801_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3819_ = v___x_3801_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v___x_3801_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3817_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
}
else
{
lean_object* v_a_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3832_; 
lean_del_object(v___x_3797_);
lean_dec(v_val_3795_);
lean_dec_ref(v_expectedType_3765_);
lean_dec_ref(v_expr_3764_);
v_a_3825_ = lean_ctor_get(v___x_3799_, 0);
v_isSharedCheck_3832_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3827_ = v___x_3799_;
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_a_3825_);
lean_dec(v___x_3799_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3830_; 
if (v_isShared_3828_ == 0)
{
v___x_3830_ = v___x_3827_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_a_3825_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
return v___x_3830_;
}
}
}
}
}
else
{
lean_object* v___x_3834_; 
lean_dec(v_a_3794_);
v___x_3834_ = l_Lean_Meta_coerceSimpleRecordingNames_x3f(v_expr_3764_, v_expectedType_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_);
return v___x_3834_;
}
}
else
{
lean_object* v_a_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3842_; 
lean_dec_ref(v_expectedType_3765_);
lean_dec_ref(v_expr_3764_);
v_a_3835_ = lean_ctor_get(v___x_3793_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v___x_3793_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3837_ = v___x_3793_;
v_isShared_3838_ = v_isSharedCheck_3842_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_a_3835_);
lean_dec(v___x_3793_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3842_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
lean_object* v___x_3840_; 
if (v_isShared_3838_ == 0)
{
v___x_3840_ = v___x_3837_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v_a_3835_);
v___x_3840_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
return v___x_3840_;
}
}
}
}
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3850_; 
lean_dec_ref(v_expectedType_3765_);
lean_dec_ref(v_expr_3764_);
v_a_3843_ = lean_ctor_get(v___x_3789_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3789_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3845_ = v___x_3789_;
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v___x_3789_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_a_3843_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
}
}
}
else
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
lean_dec_ref(v_expectedType_3765_);
lean_dec_ref(v_expr_3764_);
v_a_3852_ = lean_ctor_get(v___x_3771_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3771_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3771_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3771_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerceCollectingNames_x3f___boxed(lean_object* v_expr_3860_, lean_object* v_expectedType_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_){
_start:
{
lean_object* v_res_3867_; 
v_res_3867_ = l_Lean_Meta_coerceCollectingNames_x3f(v_expr_3860_, v_expectedType_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_);
lean_dec(v_a_3865_);
lean_dec_ref(v_a_3864_);
lean_dec(v_a_3863_);
lean_dec_ref(v_a_3862_);
return v_res_3867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f(lean_object* v_expr_3868_, lean_object* v_expectedType_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_){
_start:
{
lean_object* v___x_3875_; 
v___x_3875_ = l_Lean_Meta_coerceCollectingNames_x3f(v_expr_3868_, v_expectedType_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_);
if (lean_obj_tag(v___x_3875_) == 0)
{
lean_object* v_a_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3900_; 
v_a_3876_ = lean_ctor_get(v___x_3875_, 0);
v_isSharedCheck_3900_ = !lean_is_exclusive(v___x_3875_);
if (v_isSharedCheck_3900_ == 0)
{
v___x_3878_ = v___x_3875_;
v_isShared_3879_ = v_isSharedCheck_3900_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_a_3876_);
lean_dec(v___x_3875_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3900_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
switch(lean_obj_tag(v_a_3876_))
{
case 0:
{
lean_object* v___x_3880_; lean_object* v___x_3882_; 
v___x_3880_ = lean_box(0);
if (v_isShared_3879_ == 0)
{
lean_ctor_set(v___x_3878_, 0, v___x_3880_);
v___x_3882_ = v___x_3878_;
goto v_reusejp_3881_;
}
else
{
lean_object* v_reuseFailAlloc_3883_; 
v_reuseFailAlloc_3883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3883_, 0, v___x_3880_);
v___x_3882_ = v_reuseFailAlloc_3883_;
goto v_reusejp_3881_;
}
v_reusejp_3881_:
{
return v___x_3882_;
}
}
case 1:
{
lean_object* v_a_3884_; lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_3895_; 
v_a_3884_ = lean_ctor_get(v_a_3876_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v_a_3876_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3886_ = v_a_3876_;
v_isShared_3887_ = v_isSharedCheck_3895_;
goto v_resetjp_3885_;
}
else
{
lean_inc(v_a_3884_);
lean_dec(v_a_3876_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_3895_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
lean_object* v_fst_3888_; lean_object* v___x_3890_; 
v_fst_3888_ = lean_ctor_get(v_a_3884_, 0);
lean_inc(v_fst_3888_);
lean_dec(v_a_3884_);
if (v_isShared_3887_ == 0)
{
lean_ctor_set(v___x_3886_, 0, v_fst_3888_);
v___x_3890_ = v___x_3886_;
goto v_reusejp_3889_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_fst_3888_);
v___x_3890_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3889_;
}
v_reusejp_3889_:
{
lean_object* v___x_3892_; 
if (v_isShared_3879_ == 0)
{
lean_ctor_set(v___x_3878_, 0, v___x_3890_);
v___x_3892_ = v___x_3878_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v___x_3890_);
v___x_3892_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
return v___x_3892_;
}
}
}
}
default: 
{
lean_object* v___x_3896_; lean_object* v___x_3898_; 
v___x_3896_ = lean_box(2);
if (v_isShared_3879_ == 0)
{
lean_ctor_set(v___x_3878_, 0, v___x_3896_);
v___x_3898_ = v___x_3878_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v___x_3896_);
v___x_3898_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
return v___x_3898_;
}
}
}
}
}
else
{
lean_object* v_a_3901_; lean_object* v___x_3903_; uint8_t v_isShared_3904_; uint8_t v_isSharedCheck_3908_; 
v_a_3901_ = lean_ctor_get(v___x_3875_, 0);
v_isSharedCheck_3908_ = !lean_is_exclusive(v___x_3875_);
if (v_isSharedCheck_3908_ == 0)
{
v___x_3903_ = v___x_3875_;
v_isShared_3904_ = v_isSharedCheck_3908_;
goto v_resetjp_3902_;
}
else
{
lean_inc(v_a_3901_);
lean_dec(v___x_3875_);
v___x_3903_ = lean_box(0);
v_isShared_3904_ = v_isSharedCheck_3908_;
goto v_resetjp_3902_;
}
v_resetjp_3902_:
{
lean_object* v___x_3906_; 
if (v_isShared_3904_ == 0)
{
v___x_3906_ = v___x_3903_;
goto v_reusejp_3905_;
}
else
{
lean_object* v_reuseFailAlloc_3907_; 
v_reuseFailAlloc_3907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3907_, 0, v_a_3901_);
v___x_3906_ = v_reuseFailAlloc_3907_;
goto v_reusejp_3905_;
}
v_reusejp_3905_:
{
return v___x_3906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_coerce_x3f___boxed(lean_object* v_expr_3909_, lean_object* v_expectedType_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_, lean_object* v_a_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Lean_Meta_coerce_x3f(v_expr_3909_, v_expectedType_3910_, v_a_3911_, v_a_3912_, v_a_3913_, v_a_3914_);
lean_dec(v_a_3914_);
lean_dec_ref(v_a_3913_);
lean_dec(v_a_3912_);
lean_dec_ref(v_a_3911_);
return v_res_3916_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1863807188____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_coeDeclAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_coeDeclAttr);
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_coeDeclAttr___regBuiltin_Lean_Meta_coeDeclAttr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Coe_0__Lean_Meta_initFn_00___x40_Lean_Meta_Coe_1330821246____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_autoLift = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_autoLift);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Coe(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Coe(builtin);
}
#ifdef __cplusplus
}
#endif
